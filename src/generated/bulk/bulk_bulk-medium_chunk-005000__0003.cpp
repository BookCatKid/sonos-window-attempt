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
namespace std { template<class... A> int _Xbad_function_call(A...); }
struct SCLibrary { char _pad; SCLibrary(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); template<class... A> int getSingleton(A...); };
struct SCStr { char _pad; SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); template<class... A> int int_allocRep(A...); static int op_ctor(...) { return 0; } static int op_eq(...) { return 0; } static int op_lt(...) { return 0; } };
namespace std { template<class...> struct basic_ios { char _pad; basic_ios(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int op_dtor(...); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); }; }
namespace std { template<class...> struct basic_istream { char _pad; basic_istream(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int op_dtor(...); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); }; }
namespace std { template<class...> struct char_traits { char _pad; char_traits(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); }; }
struct AppInterop { char _pad; AppInterop(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Event { char _pad; Event(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Remove { char _pad; Remove(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCAlarmManager { char _pad; SCAlarmManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCArtworkData { char _pad; SCArtworkData(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCBTClassicConnectionManager { char _pad; SCBTClassicConnectionManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIActionCategoryDefault { char _pad; SCIActionCategoryDefault(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIAlarmManager { char _pad; SCIAlarmManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIArtworkData { char _pad; SCIArtworkData(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIBTClassicConnectionManager { char _pad; SCIBTClassicConnectionManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIBrowseDataSource { char _pad; SCIBrowseDataSource(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIHousehold { char _pad; SCIHousehold(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIObj { char _pad; SCIObj(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCLegacyJoinExistingWizard { char _pad; SCLegacyJoinExistingWizard(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCLogoArtworkData { char _pad; SCLogoArtworkData(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCSettingsReplicator { char _pad; SCSettingsReplicator(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCThreadSafeInc { char _pad; SCThreadSafeInc(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Sink { char _pad; Sink(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct State { char _pad; State(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Stopping { char _pad; Stopping(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
typedef void *BLE;
typedef void *CUSTOM_SUB_WIZARD_FIREWALL;
typedef void *NFC;
typedef void *SCDHS;
typedef void *WARNING;
using namespace std;
extern "C" void LAB_10002720(void);
extern "C" void LAB_10005b32(void);
extern "C" void LAB_1000b1ea(void);
extern "C" void LAB_1000e3db(void);
extern "C" void LAB_1000f4d9(void);
extern "C" void LAB_10012896(void);
extern "C" void LAB_100131d8(void);
extern "C" void LAB_10013543(void);
extern "C" void LAB_10015492(void);
extern "C" void LAB_100169ff(void);
extern "C" void LAB_1001718e(void);
extern "C" void LAB_10018bab(void);
extern "C" void LAB_1001b41e(void);
extern "C" void LAB_1001c9c2(void);
extern "C" void LAB_1001e6fa(void);
extern "C" void LAB_1001ec13(void);
extern "C" void LAB_1001ec63(void);
extern "C" void LAB_10021f67(void);
extern "C" void LAB_100238df(void);
extern "C" void LAB_10024a7d(void);
extern "C" void LAB_10024f14(void);
extern "C" void LAB_1002d78b(void);
extern "C" void LAB_1002d97a(void);
extern "C" void LAB_1002ee92(void);
extern "C" void LAB_1003061b(void);
extern "C" void LAB_1003084b(void);
extern "C" void LAB_10030e8b(void);
extern "C" void LAB_1003300a(void);
extern "C" void LAB_10033ab9(void);
extern "C" void LAB_10034068(void);
extern "C" void LAB_10034275(void);
extern "C" void LAB_100354f4(void);
extern "C" void LAB_10036c23(void);
extern "C" void LAB_100373d5(void);
extern "C" void LAB_10037bc8(void);
extern "C" void LAB_1003bb60(void);
extern "C" void LAB_1003bb65(void);
extern "C" void LAB_1003d09b(void);
extern "C" void LAB_1003d820(void);
extern "C" void LAB_1003ef36(void);
extern "C" void LAB_10048e8c(void);
extern "C" void LAB_1004c550(void);
extern "C" void LAB_1004ec47(void);
extern "C" void LAB_1004efc6(void);
extern "C" void LAB_1005114f(void);
extern "C" void LAB_1005218f(void);
extern "C" void LAB_1005273e(void);
extern "C" void LAB_100541bf(void);
extern "C" void LAB_10058a5d(void);
extern "C" void LAB_10059c69(void);
extern "C" void LAB_1005b087(void);
extern "C" void LAB_1005ddcd(void);
extern "C" void LAB_1005faa1(void);
extern "C" void LAB_10060f0f(void);
extern "C" void LAB_10062b48(void);
extern "C" void LAB_10064088(void);
extern "C" void LAB_100641b9(void);
extern "C" void LAB_100665b3(void);
extern "C" void LAB_100687d2(void);
extern "C" void LAB_10068caf(void);
extern "C" void LAB_1006a64f(void);
extern "C" void LAB_1006aac8(void);
extern "C" void LAB_1006ffd7(void);
extern "C" void LAB_10070fbd(void);
extern "C" void LAB_1007322c(void);
extern "C" void LAB_10077a61(void);
extern "C" void LAB_1007b0d5(void);
extern "C" void LAB_1007fff4(void);
extern "C" void LAB_100829d4(void);
extern "C" void LAB_10082d2b(void);
extern "C" void LAB_1008339d(void);
extern "C" void LAB_100883ca(void);
extern "C" void LAB_10088bd6(void);
extern "C" void LAB_1008b728(void);
extern "C" void LAB_1008bb15(void);
extern "C" void LAB_1008ca83(void);
extern "C" void LAB_1008e40f(void);
extern "C" void LAB_10094d32(void);
extern "C" void LAB_1009700f(void);
extern "C" void LAB_10097681(void);
extern "C" void LAB_10bbd800(void);
extern "C" void LAB_1148a05a(void);
extern "C" void LAB_1148cded(void);
extern "C" void LAB_116c00c0(void);
extern "C" void LAB_116c00f0(void);
extern "C" void LAB_116c0120(void);
extern "C" void LAB_116c1790(void);
extern "C" void LAB_116c30f0(void);
extern "C" void LAB_1186d2f4(void);
extern "C" void LAB_1186d30c(void);
extern "C" void LAB_118783f0(void);
extern "C" void LAB_11878cf4(void);
extern "C" void LAB_1187afec(void);
extern "C" void LAB_11880134(void);
extern "C" void LAB_11880a2c(void);
extern "C" void LAB_11880a80(void);
extern "C" void LAB_11880e50(void);
extern "C" void LAB_11882ff0(void);
extern "C" void LAB_11890750(void);
extern "C" void LAB_11890778(void);
extern "C" void LAB_118907a0(void);
extern "C" void LAB_11890d64(void);
extern "C" void LAB_1190f12c(void);
extern "C" void LAB_1190f980(void);
extern "C" void LAB_1190f9dc(void);
extern "C" void LAB_1190fa00(void);
extern "C" void LAB_1190fa5c(void);
extern "C" void LAB_1190fdc8(void);
extern "C" void LAB_1190fdf8(void);
extern "C" void LAB_1190fe2c(void);
extern "C" void LAB_1190fe5c(void);
extern "C" void LAB_1190fe8c(void);
extern "C" void LAB_11910258(void);
extern "C" void LAB_11910610(void);
extern "C" void LAB_11910698(void);
extern "C" void LAB_119110b0(void);
extern "C" void LAB_11911554(void);
extern "C" void LAB_119118a4(void);
extern "C" void LAB_11912468(void);
extern "C" void LAB_119126b8(void);
extern "C" void LAB_1191290c(void);
extern "C" void LAB_11912bd4(void);
extern "C" void LAB_12126b84(void);
extern "C" void LAB_121a0e68(void);
extern "C" void LAB_121a5030(void);
extern "C" void LAB_122fc398(void);
extern "C" void LAB_122fc3d0(void);
extern "C" void LAB_122fc888(void);

extern "C" void LAB_10002720(void);
extern "C" void LAB_10005b32(void);
extern "C" void LAB_1000b1ea(void);
extern "C" void LAB_1000e3db(void);
extern "C" void LAB_1000f4d9(void);
extern "C" void LAB_10012896(void);
extern "C" void LAB_100131d8(void);
extern "C" void LAB_10013543(void);
extern "C" void LAB_10015492(void);
extern "C" void LAB_100169ff(void);
extern "C" void LAB_1001718e(void);
extern "C" void LAB_10018bab(void);
extern "C" void LAB_1001b41e(void);
extern "C" void LAB_1001c9c2(void);
extern "C" void LAB_1001e6fa(void);
extern "C" void LAB_1001ec13(void);
extern "C" void LAB_1001ec63(void);
extern "C" void LAB_10021f67(void);
extern "C" void LAB_100238df(void);
extern "C" void LAB_10024a7d(void);
extern "C" void LAB_10024f14(void);
extern "C" void LAB_1002d78b(void);
extern "C" void LAB_1002d97a(void);
extern "C" void LAB_1002ee92(void);
extern "C" void LAB_1003061b(void);
extern "C" void LAB_1003084b(void);
extern "C" void LAB_10030e8b(void);
extern "C" void LAB_1003300a(void);
extern "C" void LAB_10033ab9(void);
extern "C" void LAB_10034068(void);
extern "C" void LAB_10034275(void);
extern "C" void LAB_100354f4(void);
extern "C" void LAB_10036c23(void);
extern "C" void LAB_100373d5(void);
extern "C" void LAB_10037bc8(void);
extern "C" void LAB_1003bb60(void);
extern "C" void LAB_1003bb65(void);
extern "C" void LAB_1003d09b(void);
extern "C" void LAB_1003d820(void);
extern "C" void LAB_1003ef36(void);
extern "C" void LAB_10048e8c(void);
extern "C" void LAB_1004c550(void);
extern "C" void LAB_1004ec47(void);
extern "C" void LAB_1004efc6(void);
extern "C" void LAB_1005114f(void);
extern "C" void LAB_1005218f(void);
extern "C" void LAB_1005273e(void);
extern "C" void LAB_100541bf(void);
extern "C" void LAB_10058a5d(void);
extern "C" void LAB_10059c69(void);
extern "C" void LAB_1005b087(void);
extern "C" void LAB_1005ddcd(void);
extern "C" void LAB_1005faa1(void);
extern "C" void LAB_10060f0f(void);
extern "C" void LAB_10062b48(void);
extern "C" void LAB_10064088(void);
extern "C" void LAB_100641b9(void);
extern "C" void LAB_100665b3(void);
extern "C" void LAB_100687d2(void);
extern "C" void LAB_10068caf(void);
extern "C" void LAB_1006a64f(void);
extern "C" void LAB_1006aac8(void);
extern "C" void LAB_1006ffd7(void);
extern "C" void LAB_10070fbd(void);
extern "C" void LAB_1007322c(void);
extern "C" void LAB_10077a61(void);
extern "C" void LAB_1007b0d5(void);
extern "C" void LAB_1007fff4(void);
extern "C" void LAB_100829d4(void);
extern "C" void LAB_10082d2b(void);
extern "C" void LAB_1008339d(void);
extern "C" void LAB_100883ca(void);
extern "C" void LAB_10088bd6(void);
extern "C" void LAB_1008b728(void);
extern "C" void LAB_1008bb15(void);
extern "C" void LAB_1008ca83(void);
extern "C" void LAB_1008e40f(void);
extern "C" void LAB_10094d32(void);
extern "C" void LAB_1009700f(void);
extern "C" void LAB_10097681(void);
extern "C" void LAB_10bbd800(void);
extern "C" void LAB_1148a05a(void);
extern "C" void LAB_1148cded(void);
extern "C" void LAB_1186d2f4(void);
extern "C" void LAB_1186d30c(void);
extern "C" void LAB_118783f0(void);
extern "C" void LAB_11878cf4(void);
extern "C" void LAB_1187afec(void);
extern "C" void LAB_11880134(void);
extern "C" void LAB_11880a2c(void);
extern "C" void LAB_11880a80(void);
extern "C" void LAB_11880e50(void);
extern "C" void LAB_11882ff0(void);
extern "C" void LAB_11890750(void);
extern "C" void LAB_11890778(void);
extern "C" void LAB_118907a0(void);
extern "C" void LAB_11890d64(void);
extern "C" void LAB_1190f12c(void);
extern "C" void LAB_1190f980(void);
extern "C" void LAB_1190f9dc(void);
extern "C" void LAB_1190fa00(void);
extern "C" void LAB_1190fa5c(void);
extern "C" void LAB_1190fdc8(void);
extern "C" void LAB_1190fdf8(void);
extern "C" void LAB_1190fe2c(void);
extern "C" void LAB_1190fe5c(void);
extern "C" void LAB_1190fe8c(void);
extern "C" void LAB_11910258(void);
extern "C" void LAB_11910610(void);
extern "C" void LAB_11910698(void);
extern "C" void LAB_119110b0(void);
extern "C" void LAB_11911554(void);
extern "C" void LAB_119118a4(void);
extern "C" void LAB_11912468(void);
extern "C" void LAB_119126b8(void);
extern "C" void LAB_1191290c(void);
extern "C" void LAB_11912bd4(void);
extern "C" void LAB_12126b84(void);
extern "C" void LAB_121a0e68(void);
extern "C" void LAB_121a5030(void);
extern "C" void LAB_122fc398(void);
extern "C" void LAB_122fc3d0(void);
extern "C" void LAB_122fc888(void);


struct Recovered_Bulk { char _pad; undefined4 *  __thiscall m_FUN_10b8e970(undefined4 param_2); template<class... A> int m_FUN_10b8e970(A...); undefined4 * __thiscall m_FUN_10b8f910(int *param_2); template<class... A> int m_FUN_10b8f910(A...); undefined4 * __thiscall m_FUN_10b8f950(int *param_2); template<class... A> int m_FUN_10b8f950(A...); undefined4 * __thiscall m_FUN_10b8f990(int *param_2); template<class... A> int m_FUN_10b8f990(A...); undefined4 * __thiscall m_FUN_10b8f9d0(int *param_2); template<class... A> int m_FUN_10b8f9d0(A...); undefined4 * __thiscall m_FUN_10b8fa10(int *param_2); template<class... A> int m_FUN_10b8fa10(A...); undefined4 * __thiscall m_FUN_10b8fa50(int *param_2); template<class... A> int m_FUN_10b8fa50(A...); undefined4 * __thiscall m_FUN_10b8fa90(int *param_2); template<class... A> int m_FUN_10b8fa90(A...); undefined4 * __thiscall m_FUN_10b8fad0(int *param_2); template<class... A> int m_FUN_10b8fad0(A...); undefined4 * __thiscall m_FUN_10b8fb10(int *param_2); template<class... A> int m_FUN_10b8fb10(A...); undefined4 * __thiscall m_FUN_10b8fb50(int *param_2); template<class... A> int m_FUN_10b8fb50(A...); undefined4 * __thiscall m_FUN_10b8fb90(int *param_2); template<class... A> int m_FUN_10b8fb90(A...); undefined4 * __thiscall m_FUN_10b8fbd0(int *param_2); template<class... A> int m_FUN_10b8fbd0(A...); undefined4 * __thiscall m_FUN_10b8fc10(int *param_2); template<class... A> int m_FUN_10b8fc10(A...); undefined4 * __thiscall m_FUN_10b90770(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10b90770(A...); undefined4 * __thiscall m_FUN_10b907c0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10b907c0(A...); undefined4 __thiscall m_FUN_10b92030(byte param_2); template<class... A> int m_FUN_10b92030(A...); undefined4 * __thiscall m_FUN_10b92060(byte param_2); template<class... A> int m_FUN_10b92060(A...); undefined4 __thiscall m_FUN_10b92280(byte param_2); template<class... A> int m_FUN_10b92280(A...); undefined4 __thiscall m_FUN_10b924c0(byte param_2); template<class... A> int m_FUN_10b924c0(A...); undefined4 __thiscall m_FUN_10b924f0(byte param_2); template<class... A> int m_FUN_10b924f0(A...); undefined4 __thiscall m_FUN_10b92aa0(byte param_2); template<class... A> int m_FUN_10b92aa0(A...); undefined4 __thiscall m_FUN_10b92ad0(byte param_2); template<class... A> int m_FUN_10b92ad0(A...); void __thiscall m_FUN_10b937b0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10b937b0(A...); int * __thiscall m_FUN_10b94e40(int *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10b94e40(A...); undefined4 * __thiscall m_FUN_10b96c40(int *param_2); template<class... A> int m_FUN_10b96c40(A...); undefined4 * __thiscall m_FUN_10b96cd0(int *param_2); template<class... A> int m_FUN_10b96cd0(A...); undefined4 * __thiscall m_FUN_10b96d50(int *param_2); template<class... A> int m_FUN_10b96d50(A...); undefined4 * __thiscall m_FUN_10b96dd0(int *param_2); template<class... A> int m_FUN_10b96dd0(A...); undefined4 * __thiscall m_FUN_10b96e50(int *param_2); template<class... A> int m_FUN_10b96e50(A...); undefined4 * __thiscall m_FUN_10b96e70(int *param_2); template<class... A> int m_FUN_10b96e70(A...); undefined4 * __thiscall m_FUN_10b99c90(byte param_2); template<class... A> int m_FUN_10b99c90(A...); undefined4 * __thiscall m_FUN_10b99cd0(byte param_2); template<class... A> int m_FUN_10b99cd0(A...); undefined4 * __thiscall m_FUN_10b99d10(byte param_2); template<class... A> int m_FUN_10b99d10(A...); undefined4 * __thiscall m_FUN_10b99d50(byte param_2); template<class... A> int m_FUN_10b99d50(A...); undefined4 __thiscall m_FUN_10b99d90(byte param_2); template<class... A> int m_FUN_10b99d90(A...); undefined4 __thiscall m_FUN_10b99e50(byte param_2); template<class... A> int m_FUN_10b99e50(A...); undefined4 * __thiscall m_FUN_10b9a030(byte param_2); template<class... A> int m_FUN_10b9a030(A...); undefined4 __thiscall m_FUN_10b9a080(byte param_2); template<class... A> int m_FUN_10b9a080(A...); undefined4 __thiscall m_FUN_10b9a0b0(byte param_2); template<class... A> int m_FUN_10b9a0b0(A...); undefined4 * __thiscall m_FUN_10b9a0e0(byte param_2); template<class... A> int m_FUN_10b9a0e0(A...); undefined4 * __thiscall m_FUN_10b9a120(byte param_2); template<class... A> int m_FUN_10b9a120(A...); undefined4 * __thiscall m_FUN_10b9a150(byte param_2); template<class... A> int m_FUN_10b9a150(A...); undefined4 * __thiscall m_FUN_10b9a180(byte param_2); template<class... A> int m_FUN_10b9a180(A...); undefined4 * __thiscall m_FUN_10b9a1b0(byte param_2); template<class... A> int m_FUN_10b9a1b0(A...); undefined4 * __thiscall m_FUN_10b9a370(byte param_2); template<class... A> int m_FUN_10b9a370(A...); undefined4 __thiscall m_FUN_10b9a3a0(byte param_2); template<class... A> int m_FUN_10b9a3a0(A...); undefined4 * __thiscall m_FUN_10b9a3d0(byte param_2); template<class... A> int m_FUN_10b9a3d0(A...); void __thiscall m_FUN_10b9bac0(int param_2); template<class... A> int m_FUN_10b9bac0(A...); void __thiscall m_FUN_10b9d980(void *param_2,size_t param_3); template<class... A> int m_FUN_10b9d980(A...); void __thiscall m_FUN_10b9d9c0(void *param_2,size_t param_3); template<class... A> int m_FUN_10b9d9c0(A...); SCStr * __thiscall m_FUN_10b9ddf0(SCStr *param_2); template<class... A> int m_FUN_10b9ddf0(A...); SCStr * __thiscall m_FUN_10b9de20(SCStr *param_2); template<class... A> int m_FUN_10b9de20(A...); int * __thiscall m_FUN_10b9e0e0(int *param_2); template<class... A> int m_FUN_10b9e0e0(A...); SCStr * __thiscall m_FUN_10b9e170(SCStr *param_2); template<class... A> int m_FUN_10b9e170(A...); SCStr * __thiscall m_FUN_10b9e190(SCStr *param_2); template<class... A> int m_FUN_10b9e190(A...); void __thiscall m_FUN_10b9e1f0(undefined4 param_2); template<class... A> int m_FUN_10b9e1f0(A...); undefined4 __thiscall m_FUN_10ba0860(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10ba0860(A...); void __thiscall m_FUN_10ba17b0(int param_2); template<class... A> int m_FUN_10ba17b0(A...); void __thiscall m_FUN_10ba1800(int param_2); template<class... A> int m_FUN_10ba1800(A...); void __thiscall m_FUN_10ba1850(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10ba1850(A...); void __thiscall m_FUN_10ba1a60(int param_2); template<class... A> int m_FUN_10ba1a60(A...); void __thiscall m_FUN_10ba31c0(undefined4 param_2); template<class... A> int m_FUN_10ba31c0(A...); int __thiscall m_FUN_10ba3300(int *param_2); template<class... A> int m_FUN_10ba3300(A...); undefined4 * __thiscall m_FUN_10ba4fe0(int *param_2); template<class... A> int m_FUN_10ba4fe0(A...); undefined4 * __thiscall m_FUN_10ba5020(int *param_2); template<class... A> int m_FUN_10ba5020(A...); undefined4 * __thiscall m_FUN_10ba5080(int *param_2); template<class... A> int m_FUN_10ba5080(A...); undefined4 * __thiscall m_FUN_10ba5140(int *param_2); template<class... A> int m_FUN_10ba5140(A...); undefined4 * __thiscall m_FUN_10ba8050(byte param_2); template<class... A> int m_FUN_10ba8050(A...); undefined4 * __thiscall m_FUN_10ba8130(byte param_2); template<class... A> int m_FUN_10ba8130(A...); int __thiscall m_FUN_10ba8180(byte param_2); template<class... A> int m_FUN_10ba8180(A...); undefined4 * __thiscall m_FUN_10ba82c0(byte param_2); template<class... A> int m_FUN_10ba82c0(A...); undefined4 __thiscall m_FUN_10ba8300(byte param_2); template<class... A> int m_FUN_10ba8300(A...); undefined4 * __thiscall m_FUN_10ba8330(byte param_2); template<class... A> int m_FUN_10ba8330(A...); undefined4 __thiscall m_FUN_10ba8380(byte param_2); template<class... A> int m_FUN_10ba8380(A...); undefined4 * __thiscall m_FUN_10ba83b0(byte param_2); template<class... A> int m_FUN_10ba83b0(A...); undefined4 * __thiscall m_FUN_10ba83e0(byte param_2); template<class... A> int m_FUN_10ba83e0(A...); undefined4 *  __thiscall m_FUN_10ba86b0(undefined4 *param_2); template<class... A> int m_FUN_10ba86b0(A...); void __thiscall m_FUN_10ba8770(char param_2); template<class... A> int m_FUN_10ba8770(A...); void __thiscall m_FUN_10ba8790(char param_2); template<class... A> int m_FUN_10ba8790(A...); void __thiscall m_FUN_10ba8840(undefined4 *param_2,undefined4 param_3); template<class... A> int m_FUN_10ba8840(A...); undefined4 *  __thiscall m_FUN_10ba9fd0(undefined4 *param_2); template<class... A> int m_FUN_10ba9fd0(A...); void __thiscall m_FUN_10baa820(int param_2); template<class... A> int m_FUN_10baa820(A...); void __thiscall m_FUN_10baa860(int param_2); template<class... A> int m_FUN_10baa860(A...); void __thiscall m_FUN_10bab320(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10bab320(A...); int * __thiscall m_FUN_10bac480(int *param_2); template<class... A> int m_FUN_10bac480(A...); undefined4 __thiscall m_FUN_10bb4330(undefined4 param_2); template<class... A> int m_FUN_10bb4330(A...); void __thiscall m_FUN_10bb4be0(undefined4 param_2); template<class... A> int m_FUN_10bb4be0(A...); undefined4 * __thiscall m_FUN_10bb60e0(byte param_2); template<class... A> int m_FUN_10bb60e0(A...); undefined4 * __thiscall m_FUN_10bb6400(byte param_2); template<class... A> int m_FUN_10bb6400(A...); undefined4 * __thiscall m_FUN_10bb6540(byte param_2); template<class... A> int m_FUN_10bb6540(A...); undefined4 * __thiscall m_FUN_10bb6570(byte param_2); template<class... A> int m_FUN_10bb6570(A...); undefined4 * __thiscall m_FUN_10bb65a0(byte param_2); template<class... A> int m_FUN_10bb65a0(A...); undefined4 * __thiscall m_FUN_10bb65d0(byte param_2); template<class... A> int m_FUN_10bb65d0(A...); undefined4 * __thiscall m_FUN_10bb6600(byte param_2); template<class... A> int m_FUN_10bb6600(A...); undefined4 * __thiscall m_FUN_10bb6630(byte param_2); template<class... A> int m_FUN_10bb6630(A...); undefined4 * __thiscall m_FUN_10bb6660(byte param_2); template<class... A> int m_FUN_10bb6660(A...); undefined4 * __thiscall m_FUN_10bb6690(byte param_2); template<class... A> int m_FUN_10bb6690(A...); void __thiscall m_FUN_10bb6b30(int param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10bb6b30(A...); undefined4 * __thiscall m_FUN_10bbb640(int *param_2); template<class... A> int m_FUN_10bbb640(A...); undefined4 * __thiscall m_FUN_10bbb800(byte param_2); template<class... A> int m_FUN_10bbb800(A...); undefined4 * __thiscall m_FUN_10bbb840(byte param_2); template<class... A> int m_FUN_10bbb840(A...); undefined4 * __thiscall m_FUN_10bbb890(byte param_2); template<class... A> int m_FUN_10bbb890(A...); undefined4 * __thiscall m_FUN_10bbb8e0(byte param_2); template<class... A> int m_FUN_10bbb8e0(A...); SCStr * __thiscall m_FUN_10bbbfe0(SCStr *param_2); template<class... A> int m_FUN_10bbbfe0(A...); void __thiscall m_FUN_10bbddd0(int param_2); template<class... A> int m_FUN_10bbddd0(A...); undefined4 * __thiscall m_FUN_10bbdeb0(int *param_2); template<class... A> int m_FUN_10bbdeb0(A...); undefined4 * __thiscall m_FUN_10bbe3a0(byte param_2); template<class... A> int m_FUN_10bbe3a0(A...); undefined4 * __thiscall m_FUN_10bbe520(byte param_2); template<class... A> int m_FUN_10bbe520(A...); void __thiscall m_FUN_10bbe780(int param_2); template<class... A> int m_FUN_10bbe780(A...); bool __thiscall m_FUN_10bbefd0(undefined4 param_2); template<class... A> int m_FUN_10bbefd0(A...); undefined4 * __thiscall m_FUN_10bbf090(int *param_2); template<class... A> int m_FUN_10bbf090(A...); undefined4 * __thiscall m_FUN_10bbf1a0(byte param_2); template<class... A> int m_FUN_10bbf1a0(A...); void __thiscall m_FUN_10bc0b50(char param_2); template<class... A> int m_FUN_10bc0b50(A...); void __thiscall m_FUN_10bc0c00(char param_2); template<class... A> int m_FUN_10bc0c00(A...); void __thiscall m_FUN_10bc1940(int *param_2); template<class... A> int m_FUN_10bc1940(A...); SCStr * __thiscall m_FUN_10bc1ca0(SCStr *param_2); template<class... A> int m_FUN_10bc1ca0(A...); void __thiscall m_FUN_10bc3b90(int param_2); template<class... A> int m_FUN_10bc3b90(A...); undefined4 * __thiscall m_FUN_10bc3c90(int *param_2); template<class... A> int m_FUN_10bc3c90(A...); undefined4 * __thiscall m_FUN_10bc4250(byte param_2); template<class... A> int m_FUN_10bc4250(A...); undefined4 * __thiscall m_FUN_10bc4310(byte param_2); template<class... A> int m_FUN_10bc4310(A...); void __thiscall m_FUN_10bc46a0(int param_2); template<class... A> int m_FUN_10bc46a0(A...); void __thiscall m_FUN_10bc5bf0(int param_2); template<class... A> int m_FUN_10bc5bf0(A...); undefined4 * __thiscall m_FUN_10bc60c0(int *param_2); template<class... A> int m_FUN_10bc60c0(A...); undefined4 * __thiscall m_FUN_10bc6100(int *param_2); template<class... A> int m_FUN_10bc6100(A...); undefined4 * __thiscall m_FUN_10bc6f60(byte param_2); template<class... A> int m_FUN_10bc6f60(A...); undefined4 * __thiscall m_FUN_10bc6fa0(byte param_2); template<class... A> int m_FUN_10bc6fa0(A...); int __thiscall m_FUN_10bc6fe0(byte param_2); template<class... A> int m_FUN_10bc6fe0(A...); undefined4 * __thiscall m_FUN_10bc7030(byte param_2); template<class... A> int m_FUN_10bc7030(A...); undefined4 * __thiscall m_FUN_10bc7070(byte param_2); template<class... A> int m_FUN_10bc7070(A...); undefined4 * __thiscall m_FUN_10bc7250(byte param_2); template<class... A> int m_FUN_10bc7250(A...); undefined4 *  __thiscall m_FUN_10bc7290(undefined4 *param_2); template<class... A> int m_FUN_10bc7290(A...); void __thiscall m_FUN_10bc7350(char param_2); template<class... A> int m_FUN_10bc7350(A...); void __thiscall m_FUN_10bc7370(char param_2); template<class... A> int m_FUN_10bc7370(A...); void __thiscall m_FUN_10bc7390(char param_2); template<class... A> int m_FUN_10bc7390(A...); void __thiscall m_FUN_10bc7450(undefined4 *param_2,undefined4 param_3); template<class... A> int m_FUN_10bc7450(A...); undefined4 *  __thiscall m_FUN_10bc7530(undefined4 *param_2); template<class... A> int m_FUN_10bc7530(A...); void __thiscall m_FUN_10bc76d0(int param_2); template<class... A> int m_FUN_10bc76d0(A...); void __thiscall m_FUN_10bc79f0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10bc79f0(A...); int * __thiscall m_FUN_10bc7c10(int *param_2); template<class... A> int m_FUN_10bc7c10(A...); SCStr * __thiscall m_FUN_10bc81e0(SCStr *param_2); template<class... A> int m_FUN_10bc81e0(A...); void __thiscall m_FUN_10bc9060(int param_2); template<class... A> int m_FUN_10bc9060(A...); undefined4 * __thiscall m_FUN_10bc9ac0(int *param_2); template<class... A> int m_FUN_10bc9ac0(A...); undefined4 __thiscall m_FUN_10bc9fe0(byte param_2); template<class... A> int m_FUN_10bc9fe0(A...); void __thiscall m_FUN_10bcecc0(undefined4 param_2); template<class... A> int m_FUN_10bcecc0(A...); void __thiscall m_FUN_10bcecf0(undefined4 param_2); template<class... A> int m_FUN_10bcecf0(A...); void __thiscall m_FUN_10bced20(undefined4 param_2); template<class... A> int m_FUN_10bced20(A...); void __thiscall m_FUN_10bced50(undefined4 param_2); template<class... A> int m_FUN_10bced50(A...); void __thiscall m_FUN_10bced80(undefined4 param_2); template<class... A> int m_FUN_10bced80(A...); void __thiscall m_FUN_10bcedb0(undefined4 param_2); template<class... A> int m_FUN_10bcedb0(A...); void __thiscall m_FUN_10bcede0(undefined4 param_2); template<class... A> int m_FUN_10bcede0(A...); int __thiscall m_FUN_10bcf5a0(uint *param_2); template<class... A> int m_FUN_10bcf5a0(A...); int __thiscall m_FUN_10bcf5e0(SCStr *param_2); template<class... A> int m_FUN_10bcf5e0(A...); int __thiscall m_FUN_10bcf630(SCStr *param_2); template<class... A> int m_FUN_10bcf630(A...); int __thiscall m_FUN_10bcf680(SCStr *param_2); template<class... A> int m_FUN_10bcf680(A...); int __thiscall m_FUN_10bcf6d0(int *param_2); template<class... A> int m_FUN_10bcf6d0(A...); int __thiscall m_FUN_10bcf710(int *param_2); template<class... A> int m_FUN_10bcf710(A...); int __thiscall m_FUN_10bcf750(int *param_2); template<class... A> int m_FUN_10bcf750(A...); int __thiscall m_FUN_10bcf790(int *param_2); template<class... A> int m_FUN_10bcf790(A...); int __thiscall m_FUN_10bcf7d0(int *param_2); template<class... A> int m_FUN_10bcf7d0(A...); void __thiscall m_FUN_10bd1bb0(int param_2); template<class... A> int m_FUN_10bd1bb0(A...); void __thiscall m_FUN_10bd27a0(undefined4 *param_2); template<class... A> int m_FUN_10bd27a0(A...); undefined4 * __thiscall m_FUN_10bd31b0(int *param_2); template<class... A> int m_FUN_10bd31b0(A...); undefined4 * __thiscall m_FUN_10bd3220(int *param_2); template<class... A> int m_FUN_10bd3220(A...); undefined4 * __thiscall m_FUN_10bd3280(int *param_2); template<class... A> int m_FUN_10bd3280(A...); undefined4 __thiscall m_FUN_10bd8ff0(byte param_2); template<class... A> int m_FUN_10bd8ff0(A...); undefined4 * __thiscall m_FUN_10bd91d0(byte param_2); template<class... A> int m_FUN_10bd91d0(A...); undefined4 __thiscall m_FUN_10bd92c0(byte param_2); template<class... A> int m_FUN_10bd92c0(A...); void __thiscall m_FUN_10bd9600(int param_2); template<class... A> int m_FUN_10bd9600(A...); void __thiscall m_FUN_10bd9e70(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10bd9e70(A...); void __thiscall m_FUN_10bd9e90(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10bd9e90(A...); void __thiscall m_FUN_10bddec0(int param_2); template<class... A> int m_FUN_10bddec0(A...); undefined4 __thiscall m_FUN_10be6cf0(int param_2); template<class... A> int m_FUN_10be6cf0(A...); void __thiscall m_FUN_10be9e80(undefined4 *param_2); template<class... A> int m_FUN_10be9e80(A...); undefined4 * __thiscall m_FUN_10bedc30(undefined4 *param_2,SCStr *param_3); template<class... A> int m_FUN_10bedc30(A...); undefined4 __thiscall m_FUN_10bee4a0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10bee4a0(A...); undefined4 __thiscall m_FUN_10bee5b0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10bee5b0(A...); undefined4 * __thiscall m_FUN_10beeaf0(int *param_2); template<class... A> int m_FUN_10beeaf0(A...); undefined4 * __thiscall m_FUN_10beeb30(int *param_2); template<class... A> int m_FUN_10beeb30(A...); };

extern int FUN_1003d5d7(...);
extern int FUN_1006aac8(...);
extern int FUN_10bbd800(...);
extern int FUN_1110f110(...);
extern int SCThreadSafeInc(...);
extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern int createPropertyBag(...);
extern int operator_new(...);
extern int thunk_FUN_101a9c10(...);
extern int thunk_FUN_1023a9f0(...);
extern int thunk_FUN_10246290(...);
template<class... A> int __stdcall thunk_FUN_102bcb30(A...);
extern int thunk_FUN_102e6ae0(...);
extern int thunk_FUN_10302280(...);
extern int thunk_FUN_10352990(...);
extern int thunk_FUN_10352a90(...);
extern int thunk_FUN_103d60a0(...);
extern int thunk_FUN_103d61d0(...);
template<class... A> int __stdcall thunk_FUN_103d65f0(A...);
extern int thunk_FUN_103d6930(...);
extern int thunk_FUN_104d98f0(...);
extern int thunk_FUN_104d9cc0(...);
extern int thunk_FUN_104dec20(...);
extern int thunk_FUN_104eeff0(...);
extern int thunk_FUN_1059d940(...);
extern int thunk_FUN_105b5360(...);
extern int thunk_FUN_106ab850(...);
template<class... A> int __stdcall thunk_FUN_10b8b660(A...);
extern int thunk_FUN_10b8e250(...);
template<class... A> int __stdcall thunk_FUN_10b8f140(A...);
extern int thunk_FUN_10b91160(...);
extern int thunk_FUN_10b913e0(...);
extern int thunk_FUN_10b95cf0(...);
template<class... A> int __stdcall thunk_FUN_10b95f10(A...);
template<class... A> int __stdcall thunk_FUN_10b961a0(A...);
extern int thunk_FUN_10b98450(...);
extern int thunk_FUN_10b98a00(...);
extern int thunk_FUN_10b98d60(...);
extern int thunk_FUN_10b99010(...);
extern int thunk_FUN_10b990f0(...);
extern int thunk_FUN_10b9bfd0(...);
template<class... A> int __stdcall thunk_FUN_10b9e930(A...);
extern int thunk_FUN_10ba0bf0(...);
extern int thunk_FUN_10ba0e70(...);
extern int thunk_FUN_10ba31f0(...);
extern int thunk_FUN_10ba3240(...);
extern int thunk_FUN_10ba3340(...);
extern int thunk_FUN_10ba6fd0(...);
extern int thunk_FUN_10ba7200(...);
template<class... A> int __stdcall thunk_FUN_10baeb40(A...);
extern int thunk_FUN_10bb4c10(...);
extern int thunk_FUN_10bba8f0(...);
extern int thunk_FUN_10bbaa30(...);
extern int thunk_FUN_10bc8860(...);
extern int thunk_FUN_10bc8b30(...);
extern int thunk_FUN_10bc9d70(...);
extern int thunk_FUN_10bcad90(...);
extern int thunk_FUN_10bcda40(...);
extern int thunk_FUN_10bcdb00(...);
template<class... A> int __stdcall thunk_FUN_10bce9a0(A...);
template<class... A> int __stdcall thunk_FUN_10bcee70(A...);
template<class... A> int __stdcall thunk_FUN_10bceec0(A...);
template<class... A> int __stdcall thunk_FUN_10bcef80(A...);
template<class... A> int __stdcall thunk_FUN_10bcf040(A...);
template<class... A> int __stdcall thunk_FUN_10bcf100(A...);
template<class... A> int __stdcall thunk_FUN_10bcf160(A...);
template<class... A> int __stdcall thunk_FUN_10bcf230(A...);
template<class... A> int __stdcall thunk_FUN_10bcf300(A...);
template<class... A> int __stdcall thunk_FUN_10bcf3d0(A...);
template<class... A> int __stdcall thunk_FUN_10bcf810(A...);
template<class... A> int __stdcall thunk_FUN_10bcf870(A...);
template<class... A> int __stdcall thunk_FUN_10bcf8e0(A...);
template<class... A> int __stdcall thunk_FUN_10bcf950(A...);
extern int thunk_FUN_10bcf9b0(...);
extern int thunk_FUN_10bcfa10(...);
extern int thunk_FUN_10bcfa70(...);
extern int thunk_FUN_10bcfad0(...);
extern int thunk_FUN_10bd7130(...);
extern int thunk_FUN_10bd7200(...);
extern int thunk_FUN_10bde610(...);
extern int thunk_FUN_10bdeed0(...);
extern int thunk_FUN_10bdf8e0(...);
template<class... A> int __stdcall thunk_FUN_10cf3780(A...);
extern int thunk_FUN_10d9e6c0(...);
extern int thunk_FUN_10da6830(...);
template<class... A> int __stdcall thunk_FUN_10f56a40(A...);
extern int thunk_FUN_10f7b950(...);
extern int thunk_FUN_1109aba0(...);
extern int thunk_FUN_1109f7f0(...);
extern int thunk_FUN_11128910(...);
extern int thunk_FUN_1112a240(...);
extern int thunk_FUN_1112a990(...);
extern int thunk_FUN_1112ba50(...);
extern int thunk_FUN_1112be50(...);
extern int thunk_FUN_111a74c0(...);
template<class... A> int __stdcall thunk_FUN_111c0af0(A...);
extern int thunk_FUN_11206ea0(...);
extern int thunk_FUN_11207070(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1124f350(...);
extern int thunk_FUN_1124ffa0(...);
extern int thunk_FUN_112af4e0(...);
extern int thunk_FUN_112af500(...);
extern int thunk_FUN_1148a50e(...);
extern int DAT_00004494;
extern int DAT_00004498;
extern int DAT_0000449c;
extern int DAT_11882ff0;
extern int DAT_11910258;
extern int DAT_12126b84;
extern int DAT_121a5030;
extern int g_lSCObjCount;
extern int ghidra_vftable_EtagFileParser;
extern int ghidra_vftable_RUpnpACDestroyAlarmAIOOp;
extern int ghidra_vftable_SCArtworkCache;
extern int ghidra_vftable_SCIObj;
extern int ghidra_vftable_SCIObjImpl;
extern int ghidra_vftable_SCLegacyJoinExistingWizardInitState;
extern int ghidra_vftable_SCLogoArtworkCache;
extern int ghidra_vftable_SCSettingsReplicatorVoiceAllowDataCollection;
extern int ghidra_vftable_SCSettingsReplicatorVoiceLocale;
extern int ghidra_vftable_SCSwfObjACListener;
extern int ghidra_vftable_SCSwfObjDDListener;
extern int ghidra_vftable_SCWeaklyOwnedObjectManager;
extern int ghidra_vftable_SCWizardState;
extern int ghidra_vftable_SvgFileParserCB;
extern int ghidra_vftable_std_Func_impl_no_alloc;
extern int ghidra_vftable_std_basic_istringstream;
extern int uStack00000004;
extern int uStack_10;
extern int uStack_8;
extern int uStack_c;
extern "C" void LAB_116c00c0(void);
extern "C" void LAB_116c00f0(void);
extern "C" void LAB_116c0120(void);
extern "C" void LAB_116c1790(void);
extern "C" void LAB_116c30f0(void);
extern void *ExceptionList;
extern int FUN_1125b8f0(...);
undefined4 __stdcall FUN_10b8b790(undefined4 param_1);
template<class... A> int __stdcall FUN_10b8b790(A...);
undefined4 __stdcall FUN_10b8b7d0(undefined4 param_1);
template<class... A> int __stdcall FUN_10b8b7d0(A...);
undefined4 __stdcall FUN_10b8b810(undefined4 param_1);
template<class... A> int __stdcall FUN_10b8b810(A...);
undefined4 __stdcall FUN_10b8b850(undefined4 param_1);
template<class... A> int __stdcall FUN_10b8b850(A...);
undefined4 __fastcall FUN_10b8b910(int param_1);
template<class... A> int FUN_10b8b910(A...);
undefined4 __fastcall FUN_10b8b930(int param_1);
template<class... A> int FUN_10b8b930(A...);
undefined4 __fastcall FUN_10b8b950(int param_1);
template<class... A> int FUN_10b8b950(A...);
undefined4 __fastcall FUN_10b8b970(int param_1);
template<class... A> int FUN_10b8b970(A...);
SCStr * __stdcall FUN_10b8b990(SCStr *param_1);
template<class... A> int __stdcall FUN_10b8b990(A...);
SCStr * __stdcall FUN_10b8b9b0(SCStr *param_1);
template<class... A> int __stdcall FUN_10b8b9b0(A...);
SCStr * __stdcall FUN_10b8b9d0(SCStr *param_1);
template<class... A> int __stdcall FUN_10b8b9d0(A...);
SCStr * __stdcall FUN_10b8b9f0(SCStr *param_1);
template<class... A> int __stdcall FUN_10b8b9f0(A...);
undefined4 * __fastcall FUN_10b8e520(undefined4 *param_1);
template<class... A> int FUN_10b8e520(A...);
void __fastcall FUN_10b8ea90(int param_1);
template<class... A> int FUN_10b8ea90(A...);
undefined4 * __fastcall FUN_10b8fe40(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10b8fe40(A...);
void __fastcall FUN_10b90ea0(int *param_1);
template<class... A> int FUN_10b90ea0(A...);
void __fastcall FUN_10b90f00(int *param_1);
template<class... A> int FUN_10b90f00(A...);
void __fastcall FUN_10b90f60(int *param_1);
template<class... A> int FUN_10b90f60(A...);
void __fastcall FUN_10b90fc0(int param_1);
template<class... A> int FUN_10b90fc0(A...);
void __fastcall FUN_10b910c0(int param_1);
template<class... A> int FUN_10b910c0(A...);
int __stdcall FUN_10b91d50(undefined4 param_1);
template<class... A> int __stdcall FUN_10b91d50(A...);
void __fastcall FUN_10b92b20(int param_1);
template<class... A> int FUN_10b92b20(A...);
void FUN_10b937e0(void);
template<class... A> int FUN_10b937e0(A...);
void FUN_10b93810(void);
template<class... A> int FUN_10b93810(A...);
void FUN_10b93840(void);
template<class... A> int FUN_10b93840(A...);
undefined4 * __fastcall FUN_10b97330(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10b97330(A...);
undefined4 * __fastcall FUN_10b97360(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10b97360(A...);
void __fastcall FUN_10b983d0(undefined4 *param_1);
template<class... A> int FUN_10b983d0(A...);
void __fastcall FUN_10b983f0(undefined4 *param_1);
template<class... A> int FUN_10b983f0(A...);
void __fastcall FUN_10b98410(undefined4 *param_1);
template<class... A> int FUN_10b98410(A...);
void __fastcall FUN_10b98430(undefined4 *param_1);
template<class... A> int FUN_10b98430(A...);
void __fastcall FUN_10b988b0(int *param_1);
template<class... A> int FUN_10b988b0(A...);
void __fastcall FUN_10b98910(int param_1);
template<class... A> int FUN_10b98910(A...);
void __fastcall FUN_10b98930(int param_1);
template<class... A> int FUN_10b98930(A...);
void __fastcall FUN_10b98950(int *param_1);
template<class... A> int FUN_10b98950(A...);
void __fastcall FUN_10b98bf0(int param_1);
template<class... A> int FUN_10b98bf0(A...);
void __fastcall FUN_10b98c40(int *param_1);
template<class... A> int FUN_10b98c40(A...);
void __fastcall FUN_10b98c70(undefined4 *param_1);
template<class... A> int FUN_10b98c70(A...);
void __fastcall FUN_10b98fe0(undefined4 *param_1);
template<class... A> int FUN_10b98fe0(A...);
void __fastcall FUN_10b99270(undefined4 *param_1);
template<class... A> int FUN_10b99270(A...);
int * __fastcall FUN_10b99720(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10b99720(A...);
int __stdcall FUN_10b99850(undefined4 param_1);
template<class... A> int __stdcall FUN_10b99850(A...);
int __stdcall FUN_10b99880(undefined4 param_1);
template<class... A> int __stdcall FUN_10b99880(A...);
void __fastcall FUN_10b9a440(int param_1);
template<class... A> int FUN_10b9a440(A...);
void __fastcall FUN_10b9a460(int param_1);
template<class... A> int FUN_10b9a460(A...);
void __fastcall FUN_10b9b3a0(int *param_1);
template<class... A> int FUN_10b9b3a0(A...);
void __fastcall FUN_10b9b4b0(undefined4 *param_1);
template<class... A> int FUN_10b9b4b0(A...);
void __fastcall FUN_10b9bf50(int param_1);
template<class... A> int FUN_10b9bf50(A...);
void __fastcall FUN_10b9c060(int *param_1);
template<class... A> int FUN_10b9c060(A...);
SCStr * __stdcall FUN_10b9c370(SCStr *param_1);
template<class... A> int __stdcall FUN_10b9c370(A...);
SCStr * __stdcall FUN_10b9c390(SCStr *param_1);
template<class... A> int __stdcall FUN_10b9c390(A...);
void __fastcall FUN_10b9c480(int param_1);
template<class... A> int FUN_10b9c480(A...);
int * __stdcall FUN_10b9c740(int *param_1, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10b9c740(A...);
undefined1 __fastcall FUN_10b9e500(int param_1);
template<class... A> int FUN_10b9e500(A...);
undefined4 __fastcall FUN_10ba0970(int *param_1);
template<class... A> int FUN_10ba0970(A...);
undefined4 __stdcall FUN_10ba0b30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
template<class... A> int FUN_10ba0b30(A...);
undefined4 __stdcall FUN_10ba0b60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
template<class... A> int FUN_10ba0b60(A...);
void __stdcall FUN_10ba31f0(undefined4 param_1,int *param_2);
template<class... A> int FUN_10ba31f0(A...);
undefined4 * __fastcall FUN_10ba5250(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10ba5250(A...);
undefined4 * __fastcall FUN_10ba5290(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10ba5290(A...);
void __fastcall FUN_10ba6b30(int *param_1);
template<class... A> int FUN_10ba6b30(A...);
void __fastcall FUN_10ba6c10(undefined4 *param_1);
template<class... A> int FUN_10ba6c10(A...);
void __fastcall FUN_10ba6c30(int param_1);
template<class... A> int FUN_10ba6c30(A...);
void __fastcall FUN_10ba6c50(int param_1);
template<class... A> int FUN_10ba6c50(A...);
void __fastcall FUN_10ba6c70(int *param_1);
template<class... A> int FUN_10ba6c70(A...);
void __fastcall FUN_10ba6d30(int *param_1);
template<class... A> int FUN_10ba6d30(A...);
void __fastcall FUN_10ba6e50(int *param_1);
template<class... A> int FUN_10ba6e50(A...);
void __fastcall FUN_10ba6e80(int param_1);
template<class... A> int FUN_10ba6e80(A...);
void __fastcall FUN_10ba6ec0(int *param_1);
template<class... A> int FUN_10ba6ec0(A...);
void __fastcall FUN_10ba6f00(int *param_1);
template<class... A> int FUN_10ba6f00(A...);
void __fastcall FUN_10ba7460(int *param_1);
template<class... A> int FUN_10ba7460(A...);
void __fastcall FUN_10ba7e70(int *param_1);
template<class... A> int FUN_10ba7e70(A...);
void __fastcall FUN_10ba8480(int param_1);
template<class... A> int FUN_10ba8480(A...);
void __fastcall FUN_10ba84a0(int param_1);
template<class... A> int FUN_10ba84a0(A...);
void __stdcall FUN_10ba87e0(int param_1,int param_2);
template<class... A> int FUN_10ba87e0(A...);
void __fastcall FUN_10ba8810(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10ba8810(A...);
int * FUN_10ba9f70(int *param_1);
template<class... A> int FUN_10ba9f70(A...);
int * FUN_10ba9fa0(int *param_1);
template<class... A> int FUN_10ba9fa0(A...);
void __fastcall FUN_10baa290(int *param_1);
template<class... A> int FUN_10baa290(A...);
undefined1 __fastcall FUN_10baa800(int param_1);
template<class... A> int FUN_10baa800(A...);
void __fastcall FUN_10baa950(int *param_1);
template<class... A> int FUN_10baa950(A...);
void __fastcall FUN_10baa980(int *param_1);
template<class... A> int FUN_10baa980(A...);
void __fastcall FUN_10baa9b0(int param_1);
template<class... A> int FUN_10baa9b0(A...);
void __stdcall FUN_10bab1e0(int param_1,int param_2);
template<class... A> int FUN_10bab1e0(A...);
void __fastcall FUN_10bab270(int param_1);
template<class... A> int FUN_10bab270(A...);
void __fastcall FUN_10bab2a0(int param_1);
template<class... A> int FUN_10bab2a0(A...);
void __fastcall FUN_10bab370(undefined4 *param_1);
template<class... A> int FUN_10bab370(A...);
undefined4 __stdcall FUN_10bb24a0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10bb24a0(A...);
void __fastcall FUN_10bb3040(int param_1);
template<class... A> int FUN_10bb3040(A...);
void __fastcall FUN_10bb3070(int param_1);
template<class... A> int FUN_10bb3070(A...);
void __stdcall FUN_10bb4690(int param_1);
template<class... A> int __stdcall FUN_10bb4690(A...);
undefined4 * __fastcall FUN_10bb5310(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10bb5310(A...);
void __fastcall FUN_10bb58d0(int param_1);
template<class... A> int FUN_10bb58d0(A...);
void __fastcall FUN_10bb58f0(int *param_1);
template<class... A> int FUN_10bb58f0(A...);
void __fastcall FUN_10bb59f0(int param_1);
template<class... A> int FUN_10bb59f0(A...);
void __fastcall FUN_10bb5a10(int *param_1);
template<class... A> int FUN_10bb5a10(A...);
void __fastcall FUN_10bb66f0(int param_1);
template<class... A> int FUN_10bb66f0(A...);
void __fastcall FUN_10bb6fe0(int param_1);
template<class... A> int FUN_10bb6fe0(A...);
undefined4 * __fastcall FUN_10bb7170(undefined4 param_1);
template<class... A> int FUN_10bb7170(A...);
void __stdcall FUN_10bb7a10(undefined4 param_1,SCStr *param_2);
template<class... A> int FUN_10bb7a10(A...);
SCStr * __stdcall FUN_10bb7a60(SCStr *param_1);
template<class... A> int __stdcall FUN_10bb7a60(A...);
SCStr * __stdcall FUN_10bb7d30(SCStr *param_1);
template<class... A> int __stdcall FUN_10bb7d30(A...);
SCStr * __stdcall FUN_10bb7d50(SCStr *param_1);
template<class... A> int __stdcall FUN_10bb7d50(A...);
SCStr * __stdcall FUN_10bb7d70(SCStr *param_1);
template<class... A> int __stdcall FUN_10bb7d70(A...);
SCStr * __stdcall FUN_10bb7d90(SCStr *param_1);
template<class... A> int __stdcall FUN_10bb7d90(A...);
SCStr * __stdcall FUN_10bb7db0(SCStr *param_1);
template<class... A> int __stdcall FUN_10bb7db0(A...);
SCStr * __stdcall FUN_10bb7dd0(SCStr *param_1);
template<class... A> int __stdcall FUN_10bb7dd0(A...);
SCStr * __stdcall FUN_10bb7df0(SCStr *param_1);
template<class... A> int __stdcall FUN_10bb7df0(A...);
SCStr * __stdcall FUN_10bb7e10(SCStr *param_1);
template<class... A> int __stdcall FUN_10bb7e10(A...);
SCStr * __stdcall FUN_10bb7e30(SCStr *param_1);
template<class... A> int __stdcall FUN_10bb7e30(A...);
SCStr * __stdcall FUN_10bb7e60(SCStr *param_1);
template<class... A> int __stdcall FUN_10bb7e60(A...);
undefined4 __stdcall FUN_10bb7e90(undefined4 param_1);
template<class... A> int __stdcall FUN_10bb7e90(A...);
SCStr * __stdcall FUN_10bba430(SCStr *param_1);
template<class... A> int __stdcall FUN_10bba430(A...);
void __fastcall FUN_10bbb130(int param_1);
template<class... A> int FUN_10bbb130(A...);
void __fastcall FUN_10bbb340(int param_1);
template<class... A> int FUN_10bbb340(A...);
int __fastcall FUN_10bbbf20(int *param_1);
template<class... A> int FUN_10bbbf20(A...);
undefined4 __fastcall FUN_10bbc000(int *param_1);
template<class... A> int FUN_10bbc000(A...);
void __fastcall FUN_10bbcdf0(int *param_1);
template<class... A> int FUN_10bbcdf0(A...);
void __fastcall FUN_10bbd010(int *param_1);
template<class... A> int FUN_10bbd010(A...);
void FUN_10bbd7c0(int param_1);
template<class... A> int FUN_10bbd7c0(A...);
void __fastcall FUN_10bbe8a0(int *param_1);
template<class... A> int FUN_10bbe8a0(A...);
SCStr * __stdcall FUN_10bbe8d0(SCStr *param_1);
template<class... A> int __stdcall FUN_10bbe8d0(A...);
void __fastcall FUN_10bc0390(int param_1);
template<class... A> int FUN_10bc0390(A...);
void __fastcall FUN_10bc04b0(int param_1);
template<class... A> int FUN_10bc04b0(A...);
void __fastcall FUN_10bc0600(int *param_1);
template<class... A> int FUN_10bc0600(A...);
void __fastcall FUN_10bc0620(int *param_1);
template<class... A> int FUN_10bc0620(A...);
void __fastcall FUN_10bc0a50(int param_1);
template<class... A> int FUN_10bc0a50(A...);
void __stdcall FUN_10bc0c20(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_10bc0c20(A...);
void __fastcall FUN_10bc0c40(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10bc0c40(A...);
int * FUN_10bc1530(int *param_1);
template<class... A> int FUN_10bc1530(A...);
void __fastcall FUN_10bc1990(int *param_1);
template<class... A> int FUN_10bc1990(A...);
SCStr * __stdcall FUN_10bc1c60(SCStr *param_1);
template<class... A> int __stdcall FUN_10bc1c60(A...);
SCStr * __stdcall FUN_10bc1c80(SCStr *param_1);
template<class... A> int __stdcall FUN_10bc1c80(A...);
void __fastcall FUN_10bc47c0(int *param_1);
template<class... A> int FUN_10bc47c0(A...);
SCStr * __stdcall FUN_10bc4800(SCStr *param_1);
template<class... A> int __stdcall FUN_10bc4800(A...);
undefined4 __fastcall FUN_10bc5190(int param_1);
template<class... A> int FUN_10bc5190(A...);
void __fastcall FUN_10bc6690(undefined4 *param_1);
template<class... A> int FUN_10bc6690(A...);
void __fastcall FUN_10bc6860(int *param_1);
template<class... A> int FUN_10bc6860(A...);
void __fastcall FUN_10bc6890(int *param_1);
template<class... A> int FUN_10bc6890(A...);
void __fastcall FUN_10bc68f0(int *param_1);
template<class... A> int FUN_10bc68f0(A...);
void __fastcall FUN_10bc6920(int *param_1);
template<class... A> int FUN_10bc6920(A...);
void __fastcall FUN_10bc6b30(int *param_1);
template<class... A> int FUN_10bc6b30(A...);
void __fastcall FUN_10bc7650(int *param_1);
template<class... A> int FUN_10bc7650(A...);
void __fastcall FUN_10bc7680(int *param_1);
template<class... A> int FUN_10bc7680(A...);
void FUN_10bc78f0(void);
template<class... A> int FUN_10bc78f0(A...);
void __fastcall FUN_10bc7a20(int *param_1);
template<class... A> int FUN_10bc7a20(A...);
void __fastcall FUN_10bc8830(int param_1);
template<class... A> int FUN_10bc8830(A...);
undefined4 __fastcall FUN_10bc8bb0(int param_1);
template<class... A> int FUN_10bc8bb0(A...);
undefined4 __fastcall FUN_10bc8bd0(int param_1);
template<class... A> int FUN_10bc8bd0(A...);
void __stdcall FUN_10bc8e80(int param_1);
template<class... A> int __stdcall FUN_10bc8e80(A...);
undefined4 *  __stdcall FUN_10bc9780(int param_1);
template<class... A> int __stdcall FUN_10bc9780(A...);
void __stdcall FUN_10bc97a0(int param_1);
template<class... A> int __stdcall FUN_10bc97a0(A...);
void __fastcall FUN_10bcb100(int param_1);
template<class... A> int FUN_10bcb100(A...);
void __fastcall FUN_10bcb200(int param_1);
template<class... A> int FUN_10bcb200(A...);
undefined1 __stdcall FUN_10bcb4d0(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_10bcb4d0(A...);
void FUN_10bcb570(void);
template<class... A> int FUN_10bcb570(A...);
void __fastcall FUN_10bcb620(int param_1);
template<class... A> int FUN_10bcb620(A...);
void __stdcall FUN_10bcee70(undefined4 param_1,int *param_2);
template<class... A> int FUN_10bcee70(A...);
void __stdcall FUN_10bcf3d0(undefined4 param_1,int *param_2);
template<class... A> int FUN_10bcf3d0(A...);
undefined4 * __fastcall FUN_10bd33c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10bd33c0(A...);
undefined4 * __fastcall FUN_10bd3400(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10bd3400(A...);
undefined4 * __fastcall FUN_10bd3440(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10bd3440(A...);
undefined4 * __fastcall FUN_10bd3480(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10bd3480(A...);
undefined4 * __fastcall FUN_10bd3520(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10bd3520(A...);
undefined4 * __fastcall FUN_10bd3560(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10bd3560(A...);
undefined4 * __fastcall FUN_10bd35a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10bd35a0(A...);
undefined4 * __fastcall FUN_10bd35e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10bd35e0(A...);
undefined4 * __fastcall FUN_10bd3620(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10bd3620(A...);
void __fastcall FUN_10bd6260(int param_1);
template<class... A> int FUN_10bd6260(A...);
void __fastcall FUN_10bd6280(int param_1);
template<class... A> int FUN_10bd6280(A...);
void __fastcall FUN_10bd62a0(int param_1);
template<class... A> int FUN_10bd62a0(A...);
void __fastcall FUN_10bd62c0(int param_1);
template<class... A> int FUN_10bd62c0(A...);
void __fastcall FUN_10bd62e0(int param_1);
template<class... A> int FUN_10bd62e0(A...);
void __fastcall FUN_10bd6300(int param_1);
template<class... A> int FUN_10bd6300(A...);
void __fastcall FUN_10bd6320(int param_1);
template<class... A> int FUN_10bd6320(A...);
void __fastcall FUN_10bd6340(int param_1);
template<class... A> int FUN_10bd6340(A...);
void __fastcall FUN_10bd6360(int param_1);
template<class... A> int FUN_10bd6360(A...);
void __fastcall FUN_10bd63e0(int *param_1);
template<class... A> int FUN_10bd63e0(A...);
void __fastcall FUN_10bd6410(int *param_1);
template<class... A> int FUN_10bd6410(A...);
void __fastcall FUN_10bd6440(int *param_1);
template<class... A> int FUN_10bd6440(A...);
void __fastcall FUN_10bd6470(int *param_1);
template<class... A> int FUN_10bd6470(A...);
void __fastcall FUN_10bd64a0(int *param_1);
template<class... A> int FUN_10bd64a0(A...);
void __fastcall FUN_10bd64d0(int *param_1);
template<class... A> int FUN_10bd64d0(A...);
void __fastcall FUN_10bd6500(int *param_1);
template<class... A> int FUN_10bd6500(A...);
void __fastcall FUN_10bd6750(int param_1);
template<class... A> int FUN_10bd6750(A...);
void __fastcall FUN_10bd69a0(int param_1);
template<class... A> int FUN_10bd69a0(A...);
void __fastcall FUN_10bd69c0(int param_1);
template<class... A> int FUN_10bd69c0(A...);
void __fastcall FUN_10bd6a00(int param_1);
template<class... A> int FUN_10bd6a00(A...);
void __fastcall FUN_10bd6aa0(undefined4 *param_1);
template<class... A> int FUN_10bd6aa0(A...);
void __fastcall FUN_10bd6ac0(undefined4 *param_1);
template<class... A> int FUN_10bd6ac0(A...);
void __fastcall FUN_10bd6b00(int *param_1);
template<class... A> int FUN_10bd6b00(A...);
void __fastcall FUN_10bd6b30(int *param_1);
template<class... A> int FUN_10bd6b30(A...);
void __fastcall FUN_10bd6b60(int *param_1);
template<class... A> int FUN_10bd6b60(A...);
void __fastcall FUN_10bd6b90(int *param_1);
template<class... A> int FUN_10bd6b90(A...);
void __fastcall FUN_10bd6bc0(int *param_1);
template<class... A> int FUN_10bd6bc0(A...);
void __fastcall FUN_10bd6bf0(int *param_1);
template<class... A> int FUN_10bd6bf0(A...);
void __fastcall FUN_10bd6c20(int *param_1);
template<class... A> int FUN_10bd6c20(A...);
void __fastcall FUN_10bd7020(undefined4 *param_1);
template<class... A> int FUN_10bd7020(A...);
void __fastcall FUN_10bd94a0(int param_1);
template<class... A> int FUN_10bd94a0(A...);
void __fastcall FUN_10bd94c0(int param_1);
template<class... A> int FUN_10bd94c0(A...);
void __fastcall FUN_10bd94e0(int param_1);
template<class... A> int FUN_10bd94e0(A...);
void __fastcall FUN_10bd9500(int param_1);
template<class... A> int FUN_10bd9500(A...);
void __fastcall FUN_10bd9520(int param_1);
template<class... A> int FUN_10bd9520(A...);
void __fastcall FUN_10bd9540(int param_1);
template<class... A> int FUN_10bd9540(A...);
void __fastcall FUN_10bd9560(int param_1);
template<class... A> int FUN_10bd9560(A...);
void __fastcall FUN_10bd9580(int param_1);
template<class... A> int FUN_10bd9580(A...);
void __fastcall FUN_10bd95a0(int param_1);
template<class... A> int FUN_10bd95a0(A...);
void FUN_10bdee90(void);
template<class... A> int FUN_10bdee90(A...);
void FUN_10bdf8a0(void);
template<class... A> int FUN_10bdf8a0(A...);
void FUN_10be0220(void);
template<class... A> int FUN_10be0220(A...);
void __fastcall FUN_10be1150(int *param_1);
template<class... A> int FUN_10be1150(A...);
void __fastcall FUN_10be1180(int *param_1);
template<class... A> int FUN_10be1180(A...);
void __fastcall FUN_10be11d0(undefined4 *param_1);
template<class... A> int FUN_10be11d0(A...);
void __fastcall FUN_10be11f0(undefined4 *param_1);
template<class... A> int FUN_10be11f0(A...);
void __fastcall FUN_10be1210(undefined4 *param_1);
template<class... A> int FUN_10be1210(A...);
void __fastcall FUN_10be1230(undefined4 *param_1);
template<class... A> int FUN_10be1230(A...);
void __stdcall FUN_10be1cc0(int param_1,int param_2);
template<class... A> int FUN_10be1cc0(A...);
void __stdcall FUN_10be1d10(int param_1,int param_2);
template<class... A> int FUN_10be1d10(A...);
void __fastcall FUN_10be2040(int *param_1);
template<class... A> int FUN_10be2040(A...);
SCStr * __stdcall FUN_10be5040(SCStr *param_1);
template<class... A> int __stdcall FUN_10be5040(A...);
void FUN_10bed2a0(int *param_1);
template<class... A> int FUN_10bed2a0(A...);
void __fastcall FUN_10bee240(int param_1);
template<class... A> int FUN_10bee240(A...);
SCStr * __stdcall FUN_10bee5d0(SCStr *param_1);
template<class... A> int __stdcall FUN_10bee5d0(A...);
void __fastcall FUN_10bee690(int param_1);
template<class... A> int FUN_10bee690(A...);
void __fastcall FUN_10bee6b0(int param_1);
template<class... A> int FUN_10bee6b0(A...);
void __fastcall FUN_10bee6e0(int param_1);
template<class... A> int FUN_10bee6e0(A...);
void __fastcall FUN_10bee710(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10bee710(A...);
void __fastcall FUN_10bee740(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10bee740(A...);
void __fastcall FUN_10bee770(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10bee770(A...);
void FUN_10bee8d0(void);
template<class... A> int FUN_10bee8d0(A...);
void FUN_10bee8f0(void);
template<class... A> int FUN_10bee8f0(A...);
// Reference entry 10b8b790; body size 40 bytes.
extern int __stdcall thunk_FUN_10246290(int a1,int a2);
extern int __stdcall thunk_FUN_102e6ae0(int a1,int a2);
extern int __stdcall thunk_FUN_103d61d0(int a1,int a2);
extern int __stdcall thunk_FUN_103d6930(int a1);
extern int __stdcall thunk_FUN_1059d940(int a1);
extern int __stdcall thunk_FUN_105b5360(int a1);
extern int __stdcall thunk_FUN_106ab850(int a1,int a2);
extern int __stdcall thunk_FUN_10ba31f0(int a1,int a2);
extern int __stdcall thunk_FUN_10ba3240(int a1,int a2);
extern int __stdcall thunk_FUN_10ba3340(int a1,int a2);
extern int __stdcall thunk_FUN_10bb4c10(int a1,int a2);
extern int __stdcall thunk_FUN_10bbaa30(int a1);
extern int __stdcall thunk_FUN_10bcee70(int a1,int a2);
extern int __stdcall thunk_FUN_10bcf3d0(int a1,int a2);
extern int __stdcall thunk_FUN_10bcf810(int a1,int a2);
extern int __stdcall thunk_FUN_10bcf870(int a1,int a2);
extern int __stdcall thunk_FUN_10bcf8e0(int a1,int a2);
extern int __stdcall thunk_FUN_10bcf950(int a1,int a2);
extern int __stdcall thunk_FUN_10bcf9b0(int a1,int a2);
extern int __stdcall thunk_FUN_10bcfa10(int a1,int a2);
extern int __stdcall thunk_FUN_10bcfa70(int a1,int a2);
extern int __stdcall thunk_FUN_10bcfad0(int a1,int a2);
extern int __stdcall thunk_FUN_10bde610(int a1);
extern int __stdcall thunk_FUN_10bdeed0(int a1);
extern int __stdcall thunk_FUN_10bdf8e0(int a1);
extern int __stdcall thunk_FUN_10d9e6c0(int a1);
extern int __stdcall thunk_FUN_1112ba50(int a1);
extern int __stdcall thunk_FUN_1124f350(int a1);
extern int __stdcall thunk_FUN_1124ffa0(int a1,int a2);
struct SCVtbl_0_0 { virtual int v(void); };
struct SCVtbl_0_1 { virtual int v(int a1); };
struct SCVtbl_2_1 { virtual void _p0(); virtual void _p1(); virtual int v(int a1); };
struct SCVtbl_2_2 { virtual void _p0(); virtual void _p1(); virtual int v(int a1,int a2); };
struct SCVtbl_5_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual int v(void); };
struct SCVtbl_5_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual int v(int a1); };
struct SCVtbl_6_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual int v(void); };
struct SCVtbl_6_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual int v(int a1); };
struct SCVtbl_7_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual int v(void); };
struct SCVtbl_8_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual int v(void); };
struct SCVtbl_9_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual int v(int a1); };
struct SCVtbl_41_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual int v(int a1); };
struct SCVtbl_42_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual int v(void); };
struct SCVtbl_43_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual int v(void); };
struct SCVtbl_63_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual void _p51(); virtual void _p52(); virtual void _p53(); virtual void _p54(); virtual void _p55(); virtual void _p56(); virtual void _p57(); virtual void _p58(); virtual void _p59(); virtual void _p60(); virtual void _p61(); virtual void _p62(); virtual int v(void); };
struct SCVtbl_69_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual void _p51(); virtual void _p52(); virtual void _p53(); virtual void _p54(); virtual void _p55(); virtual void _p56(); virtual void _p57(); virtual void _p58(); virtual void _p59(); virtual void _p60(); virtual void _p61(); virtual void _p62(); virtual void _p63(); virtual void _p64(); virtual void _p65(); virtual void _p66(); virtual void _p67(); virtual void _p68(); virtual int v(void); };
struct SCVtbl_70_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual void _p51(); virtual void _p52(); virtual void _p53(); virtual void _p54(); virtual void _p55(); virtual void _p56(); virtual void _p57(); virtual void _p58(); virtual void _p59(); virtual void _p60(); virtual void _p61(); virtual void _p62(); virtual void _p63(); virtual void _p64(); virtual void _p65(); virtual void _p66(); virtual void _p67(); virtual void _p68(); virtual void _p69(); virtual int v(void); };
struct SCVtbl_1_0 { virtual void _p0(); virtual int v(void); };
struct SCVtbl_2_0 { virtual void _p0(); virtual void _p1(); virtual int v(void); };
struct SCVtbl_3_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual int v(void); };
struct SCVtbl_4_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual int v(int a1); };
struct SCVtbl_6_3 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual int v(int a1,int a2,int a3); };
struct SCVtbl_12_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual int v(void); };
struct SCVtbl_17_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual int v(void); };
struct SCVtbl_68_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual void _p51(); virtual void _p52(); virtual void _p53(); virtual void _p54(); virtual void _p55(); virtual void _p56(); virtual void _p57(); virtual void _p58(); virtual void _p59(); virtual void _p60(); virtual void _p61(); virtual void _p62(); virtual void _p63(); virtual void _p64(); virtual void _p65(); virtual void _p66(); virtual void _p67(); virtual int v(void); };
#line 1 "ENTRY_10b8b790"

__declspec(naked) void FUN_10b8b790(void)

{
  __asm mov ecx, dword ptr [ecx + 0x18]
  __asm mov eax, 4
  __asm push dword ptr [esp + 4]
  __asm test ecx, ecx
  __asm lea edx, [ecx - 4]
  __asm cmove edx, eax
  __asm mov ecx, dword ptr [edx]
  __asm add ecx, 0x620c
  __asm call LAB_1003084b
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}




// Reference entry 10b8b7d0; body size 40 bytes.
#line 1 "ENTRY_10b8b7d0"

__declspec(naked) void FUN_10b8b7d0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x18]
  __asm mov eax, 4
  __asm push dword ptr [esp + 4]
  __asm test ecx, ecx
  __asm lea edx, [ecx - 4]
  __asm cmove edx, eax
  __asm mov ecx, dword ptr [edx]
  __asm add ecx, 0x610c
  __asm call LAB_1003084b
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}




// Reference entry 10b8b810; body size 40 bytes.
#line 1 "ENTRY_10b8b810"

__declspec(naked) void FUN_10b8b810(void)

{
  __asm mov ecx, dword ptr [ecx + 0x18]
  __asm mov eax, 4
  __asm push dword ptr [esp + 4]
  __asm test ecx, ecx
  __asm lea edx, [ecx - 4]
  __asm cmove edx, eax
  __asm mov ecx, dword ptr [edx]
  __asm add ecx, 0x620c
  __asm call LAB_1003084b
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}




// Reference entry 10b8b850; body size 40 bytes.
#line 1 "ENTRY_10b8b850"

__declspec(naked) void FUN_10b8b850(void)

{
  __asm mov ecx, dword ptr [ecx + 0x18]
  __asm mov eax, 4
  __asm push dword ptr [esp + 4]
  __asm test ecx, ecx
  __asm lea edx, [ecx - 4]
  __asm cmove edx, eax
  __asm mov ecx, dword ptr [edx]
  __asm add ecx, 0x620c
  __asm call LAB_1003084b
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}




// Reference entry 10b8b910; body size 22 bytes.
#line 1 "ENTRY_10b8b910"

__declspec(naked) void FUN_10b8b910(void)

{
  __asm mov ecx, dword ptr [ecx + 0x18]
  __asm mov edx, 0x4498
  __asm test ecx, ecx
  __asm lea eax, [ecx + 0x4490]
  __asm cmove eax, edx
  __asm mov al, byte ptr [eax]
  __asm ret
}




// Reference entry 10b8b930; body size 22 bytes.
#line 1 "ENTRY_10b8b930"

__declspec(naked) void FUN_10b8b930(void)

{
  __asm mov ecx, dword ptr [ecx + 0x18]
  __asm mov edx, 0x449c
  __asm test ecx, ecx
  __asm lea eax, [ecx + 0x4494]
  __asm cmove eax, edx
  __asm mov al, byte ptr [eax]
  __asm ret
}




// Reference entry 10b8b950; body size 22 bytes.
#line 1 "ENTRY_10b8b950"

__declspec(naked) void FUN_10b8b950(void)

{
  __asm mov ecx, dword ptr [ecx + 0x18]
  __asm mov edx, 0x4498
  __asm test ecx, ecx
  __asm lea eax, [ecx + 0x4490]
  __asm cmove eax, edx
  __asm mov al, byte ptr [eax]
  __asm ret
}




// Reference entry 10b8b970; body size 22 bytes.
#line 1 "ENTRY_10b8b970"

__declspec(naked) void FUN_10b8b970(void)

{
  __asm mov ecx, dword ptr [ecx + 0x18]
  __asm mov edx, 0x4498
  __asm test ecx, ecx
  __asm lea eax, [ecx + 0x4490]
  __asm cmove eax, edx
  __asm mov al, byte ptr [eax]
  __asm ret
}




// Reference entry 10b8b990; body size 21 bytes.
#line 1 "ENTRY_10b8b990"

SCStr * __stdcall FUN_10b8b990(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10b8b9b0; body size 21 bytes.
#line 1 "ENTRY_10b8b9b0"

SCStr * __stdcall FUN_10b8b9b0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10b8b9d0; body size 21 bytes.
#line 1 "ENTRY_10b8b9d0"

SCStr * __stdcall FUN_10b8b9d0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10b8b9f0; body size 21 bytes.
#line 1 "ENTRY_10b8b9f0"

SCStr * __stdcall FUN_10b8b9f0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10b8e520; body size 35 bytes.
#line 1 "ENTRY_10b8e520"

__declspec(naked) void FUN_10b8e520(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], LAB_1190f12c
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 10b8e970; body size 38 bytes.
#line 1 "ENTRY_10b8e970"

__declspec(naked) void FUN_10b8e970(void)

{
  __asm mov edx, dword ptr [ecx + 8]
  __asm add ecx, 4
  __asm cmp edx, dword ptr [ecx + 8]
  __asm _emit 0x74 __asm _emit 0x0d
  __asm mov eax, dword ptr [esp + 4]
  __asm mov dword ptr [edx], eax
  __asm add dword ptr [ecx + 4], 4
  __asm ret 4
  __asm lea eax, [esp + 4]
  __asm push eax
  __asm push edx
  __asm call LAB_1001e6fa
  __asm ret 4
}




// Reference entry 10b8ea90; body size 32 bytes.
#line 1 "ENTRY_10b8ea90"

__declspec(naked) void FUN_10b8ea90(void)

{
  __asm mov edx, dword ptr [ecx + 8]
  __asm mov eax, dword ptr [ecx + 4]
  __asm cmp eax, edx
  __asm _emit 0x74 __asm _emit 0x15
  __asm nop word ptr [eax + eax]
  __asm mov ecx, dword ptr [eax]
  __asm add eax, 4
  __asm _emit 0xc7 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm cmp eax, edx
  __asm _emit 0x75 __asm _emit 0xf1
  __asm ret
}




// Reference entry 10b8f910; body size 41 bytes.
#line 1 "ENTRY_10b8f910"

__declspec(naked) void FUN_10b8f910(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x0f
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




// Reference entry 10b8f950; body size 41 bytes.
#line 1 "ENTRY_10b8f950"

__declspec(naked) void FUN_10b8f950(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x0f
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




// Reference entry 10b8f990; body size 41 bytes.
#line 1 "ENTRY_10b8f990"

__declspec(naked) void FUN_10b8f990(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x0f
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




// Reference entry 10b8f9d0; body size 41 bytes.
#line 1 "ENTRY_10b8f9d0"

__declspec(naked) void FUN_10b8f9d0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x0f
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




// Reference entry 10b8fa10; body size 41 bytes.
#line 1 "ENTRY_10b8fa10"

__declspec(naked) void FUN_10b8fa10(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x0f
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




// Reference entry 10b8fa50; body size 41 bytes.
#line 1 "ENTRY_10b8fa50"

__declspec(naked) void FUN_10b8fa50(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x0f
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




// Reference entry 10b8fa90; body size 41 bytes.
#line 1 "ENTRY_10b8fa90"

__declspec(naked) void FUN_10b8fa90(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x0f
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




// Reference entry 10b8fad0; body size 41 bytes.
#line 1 "ENTRY_10b8fad0"

__declspec(naked) void FUN_10b8fad0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x0f
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




// Reference entry 10b8fb10; body size 41 bytes.
#line 1 "ENTRY_10b8fb10"

__declspec(naked) void FUN_10b8fb10(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x0f
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




// Reference entry 10b8fb50; body size 41 bytes.
#line 1 "ENTRY_10b8fb50"

__declspec(naked) void FUN_10b8fb50(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x0f
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




// Reference entry 10b8fb90; body size 41 bytes.
#line 1 "ENTRY_10b8fb90"

__declspec(naked) void FUN_10b8fb90(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x0f
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




// Reference entry 10b8fbd0; body size 41 bytes.
#line 1 "ENTRY_10b8fbd0"

__declspec(naked) void FUN_10b8fbd0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x0f
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




// Reference entry 10b8fc10; body size 24 bytes.
#line 1 "ENTRY_10b8fc10"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10b8fc10(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b8fe40; body size 39 bytes.
#line 1 "ENTRY_10b8fe40"

__declspec(naked) void FUN_10b8fe40(void)

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




// Reference entry 10b90770; body size 57 bytes.
#line 1 "ENTRY_10b90770"

__declspec(naked) void FUN_10b90770(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_100665b3
  __asm mov eax, dword ptr [esp + 0x10]
  __asm mov dword ptr [esi + 0x104], eax
  __asm mov eax, esi
  __asm mov dword ptr [esi], LAB_1190fa00
  __asm mov dword ptr [esi + 0x10], LAB_1190fa5c
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0x00 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm pop ecx
  __asm ret 8
}




// Reference entry 10b907c0; body size 57 bytes.
#line 1 "ENTRY_10b907c0"

__declspec(naked) void FUN_10b907c0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_100665b3
  __asm mov eax, dword ptr [esp + 0x10]
  __asm mov dword ptr [esi + 0x104], eax
  __asm mov eax, esi
  __asm mov dword ptr [esi], LAB_1190f980
  __asm mov dword ptr [esi + 0x10], LAB_1190f9dc
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0x00 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm pop ecx
  __asm ret 8
}




// Reference entry 10b90ea0; body size 60 bytes.
#line 1 "ENTRY_10b90ea0"

__declspec(naked) void FUN_10b90ea0(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_116c00c0
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ecx]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
}




// Reference entry 10b90f00; body size 60 bytes.
#line 1 "ENTRY_10b90f00"

__declspec(naked) void FUN_10b90f00(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_116c00f0
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ecx]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
}




// Reference entry 10b90f60; body size 60 bytes.
#line 1 "ENTRY_10b90f60"

__declspec(naked) void FUN_10b90f60(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_116c0120
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ecx]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
}




// Reference entry 10b90fc0; body size 19 bytes.
#line 1 "ENTRY_10b90fc0"

void __fastcall FUN_10b90fc0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x14);
  }
  return;
}


// Reference entry 10b910c0; body size 38 bytes.
#line 1 "ENTRY_10b910c0"

__declspec(naked) void FUN_10b910c0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov eax, dword ptr [esi + 4]
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x0b
  __asm lea ecx, [eax + 8]
  __asm call LAB_10059c69
  __asm mov eax, dword ptr [esi + 4]
  __asm pop esi
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x0b
  __asm push 0x14
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret
}




// Reference entry 10b91d50; body size 27 bytes.
#line 1 "ENTRY_10b91d50"

__declspec(naked) void FUN_10b91d50(void)

{
  __asm sub esp, 8
  __asm lea eax, [esp]
  __asm push dword ptr [esp + 0xc]
  __asm push eax
  __asm call LAB_100829d4
  __asm mov eax, dword ptr [eax]
  __asm add eax, 0xc
  __asm add esp, 8
  __asm ret 4
}




// Reference entry 10b92030; body size 32 bytes.
#line 1 "ENTRY_10b92030"

undefined4 __thiscall Recovered_Bulk::m_FUN_10b92030(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10b91160();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4)(param_1);
}


// Reference entry 10b92060; body size 45 bytes.
#line 1 "ENTRY_10b92060"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10b92060(byte param_2)
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


// Reference entry 10b92280; body size 35 bytes.
#line 1 "ENTRY_10b92280"

undefined4 __thiscall Recovered_Bulk::m_FUN_10b92280(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10b913e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x100);
  }
  return (undefined4)(param_1);
}


// Reference entry 10b924c0; body size 35 bytes.
#line 1 "ENTRY_10b924c0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10b924c0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10b913e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x108);
  }
  return (undefined4)(param_1);
}


// Reference entry 10b924f0; body size 35 bytes.
#line 1 "ENTRY_10b924f0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10b924f0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10b913e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x108);
  }
  return (undefined4)(param_1);
}


// Reference entry 10b92aa0; body size 35 bytes.
#line 1 "ENTRY_10b92aa0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10b92aa0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10b913e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x108);
  }
  return (undefined4)(param_1);
}


// Reference entry 10b92ad0; body size 35 bytes.
#line 1 "ENTRY_10b92ad0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10b92ad0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10b913e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x108);
  }
  return (undefined4)(param_1);
}


// Reference entry 10b92b20; body size 25 bytes.
#line 1 "ENTRY_10b92b20"

__declspec(naked) void FUN_10b92b20(void)

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




// Reference entry 10b937b0; body size 35 bytes.
#line 1 "ENTRY_10b937b0"

__declspec(naked) void FUN_10b937b0(void)

{
  __asm mov eax, dword ptr [ecx + 8]
  __asm mov ecx, dword ptr [eax + 0x3c]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x16
  __asm mov eax, dword ptr [esp + 4]
  __asm lea edx, [esp + 4]
  __asm push dword ptr [esp + 8]
  __asm mov dword ptr [esp + 8], eax
  __asm mov eax, dword ptr [ecx]
  __asm push edx
  __asm call dword ptr [eax + 8]
  __asm ret 8
}




// Reference entry 10b937e0; body size 31 bytes.
#line 1 "ENTRY_10b937e0"

__declspec(naked) void FUN_10b937e0(void)

{
  __asm push ecx
  __asm push esi
  __asm push 0
  __asm mov esi, ecx
  __asm push esi
  __asm push ecx
  __asm mov ecx, esp
  __asm push offset LAB_118907a0
  __asm call LAB_1005273e
  __asm mov ecx, dword ptr [esi + 8]
  __asm call LAB_10013543
  __asm pop esi
  __asm pop ecx
  __asm ret
}




// Reference entry 10b93810; body size 31 bytes.
#line 1 "ENTRY_10b93810"

__declspec(naked) void FUN_10b93810(void)

{
  __asm push ecx
  __asm push esi
  __asm push 0
  __asm mov esi, ecx
  __asm push esi
  __asm push ecx
  __asm mov ecx, esp
  __asm push offset LAB_11890750
  __asm call LAB_1005273e
  __asm mov ecx, dword ptr [esi + 8]
  __asm call LAB_10013543
  __asm pop esi
  __asm pop ecx
  __asm ret
}




// Reference entry 10b93840; body size 31 bytes.
#line 1 "ENTRY_10b93840"

__declspec(naked) void FUN_10b93840(void)

{
  __asm push ecx
  __asm push esi
  __asm push 0
  __asm mov esi, ecx
  __asm push esi
  __asm push ecx
  __asm mov ecx, esp
  __asm push offset LAB_11890778
  __asm call LAB_1005273e
  __asm mov ecx, dword ptr [esi + 8]
  __asm call LAB_10013543
  __asm pop esi
  __asm pop ecx
  __asm ret
}




// Reference entry 10b94e40; body size 28 bytes.
#line 1 "ENTRY_10b94e40"

__declspec(naked) void FUN_10b94e40(void)

{
  __asm mov ecx, dword ptr [ecx + 0xe8]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 8
}




// Reference entry 10b96c40; body size 41 bytes.
#line 1 "ENTRY_10b96c40"

__declspec(naked) void FUN_10b96c40(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x0f
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




// Reference entry 10b96cd0; body size 41 bytes.
#line 1 "ENTRY_10b96cd0"

__declspec(naked) void FUN_10b96cd0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x0f
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




// Reference entry 10b96d50; body size 41 bytes.
#line 1 "ENTRY_10b96d50"

__declspec(naked) void FUN_10b96d50(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x0f
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




// Reference entry 10b96dd0; body size 41 bytes.
#line 1 "ENTRY_10b96dd0"

__declspec(naked) void FUN_10b96dd0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x0f
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




// Reference entry 10b96e50; body size 24 bytes.
#line 1 "ENTRY_10b96e50"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10b96e50(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b96e70; body size 24 bytes.
#line 1 "ENTRY_10b96e70"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10b96e70(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b97330; body size 39 bytes.
#line 1 "ENTRY_10b97330"

__declspec(naked) void FUN_10b97330(void)

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




// Reference entry 10b97360; body size 39 bytes.
#line 1 "ENTRY_10b97360"

__declspec(naked) void FUN_10b97360(void)

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




// Reference entry 10b983d0; body size 19 bytes.
#line 1 "ENTRY_10b983d0"

void __fastcall FUN_10b983d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10b983f0; body size 19 bytes.
#line 1 "ENTRY_10b983f0"

void __fastcall FUN_10b983f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10b98410; body size 19 bytes.
#line 1 "ENTRY_10b98410"

void __fastcall FUN_10b98410(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10b98430; body size 19 bytes.
#line 1 "ENTRY_10b98430"

void __fastcall FUN_10b98430(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10b988b0; body size 60 bytes.
#line 1 "ENTRY_10b988b0"

__declspec(naked) void FUN_10b988b0(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_116c1790
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ecx]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
}




// Reference entry 10b98910; body size 19 bytes.
#line 1 "ENTRY_10b98910"

void __fastcall FUN_10b98910(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x14);
  }
  return;
}


// Reference entry 10b98930; body size 19 bytes.
#line 1 "ENTRY_10b98930"

void __fastcall FUN_10b98930(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x14);
  }
  return;
}


// Reference entry 10b98950; body size 33 bytes.
#line 1 "ENTRY_10b98950"

__declspec(naked) void FUN_10b98950(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x15
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




// Reference entry 10b98bf0; body size 38 bytes.
#line 1 "ENTRY_10b98bf0"

__declspec(naked) void FUN_10b98bf0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov eax, dword ptr [esi + 4]
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x0b
  __asm lea ecx, [eax + 8]
  __asm call LAB_1003ef36
  __asm mov eax, dword ptr [esi + 4]
  __asm pop esi
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x0b
  __asm push 0x14
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret
}




// Reference entry 10b98c40; body size 33 bytes.
#line 1 "ENTRY_10b98c40"

__declspec(naked) void FUN_10b98c40(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x15
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




// Reference entry 10b98c70; body size 25 bytes.
#line 1 "ENTRY_10b98c70"

void __fastcall FUN_10b98c70(undefined4 *param_1)

{
  thunk_FUN_10b95cf0(param_1,*param_1);
  thunk_FUN_1148a50e(*param_1,0x14);
  return;
}


// Reference entry 10b98fe0; body size 37 bytes.
#line 1 "ENTRY_10b98fe0"

__declspec(naked) void FUN_10b98fe0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm lea ecx, [esi + 8]
  __asm mov dword ptr [esi], LAB_1190fdf8
  __asm call LAB_1006a64f
  __asm mov dword ptr [esi], LAB_1190fdc8
  __asm dec dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esi], LAB_1186d2f4
  __asm pop esi
  __asm ret
}




// Reference entry 10b99270; body size 43 bytes.
#line 1 "ENTRY_10b99270"

__declspec(naked) void FUN_10b99270(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm lea ecx, [esi + 8]
  __asm mov dword ptr [ecx], LAB_1190fe8c
  __asm mov dword ptr [esi], LAB_1190fe5c
  __asm call LAB_1002ee92
  __asm mov dword ptr [esi], LAB_1190fe2c
  __asm dec dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esi], LAB_1186d2f4
  __asm pop esi
  __asm ret
}




// Reference entry 10b99720; body size 37 bytes.
#line 1 "ENTRY_10b99720"

__declspec(naked) void FUN_10b99720(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x15
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




// Reference entry 10b99850; body size 27 bytes.
#line 1 "ENTRY_10b99850"

__declspec(naked) void FUN_10b99850(void)

{
  __asm sub esp, 8
  __asm lea eax, [esp]
  __asm push dword ptr [esp + 0xc]
  __asm push eax
  __asm call LAB_100541bf
  __asm mov eax, dword ptr [eax]
  __asm add eax, 0xc
  __asm add esp, 8
  __asm ret 4
}




// Reference entry 10b99880; body size 27 bytes.
#line 1 "ENTRY_10b99880"

__declspec(naked) void FUN_10b99880(void)

{
  __asm sub esp, 8
  __asm lea eax, [esp]
  __asm push dword ptr [esp + 0xc]
  __asm push eax
  __asm call LAB_10097681
  __asm mov eax, dword ptr [eax]
  __asm add eax, 0xc
  __asm add esp, 8
  __asm ret 4
}




// Reference entry 10b99c90; body size 45 bytes.
#line 1 "ENTRY_10b99c90"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10b99c90(byte param_2)
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


// Reference entry 10b99cd0; body size 45 bytes.
#line 1 "ENTRY_10b99cd0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10b99cd0(byte param_2)
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


// Reference entry 10b99d10; body size 45 bytes.
#line 1 "ENTRY_10b99d10"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10b99d10(byte param_2)
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


// Reference entry 10b99d50; body size 45 bytes.
#line 1 "ENTRY_10b99d50"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10b99d50(byte param_2)
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


// Reference entry 10b99d90; body size 32 bytes.
#line 1 "ENTRY_10b99d90"

undefined4 __thiscall Recovered_Bulk::m_FUN_10b99d90(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10b98450();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68);
  }
  return (undefined4)(param_1);
}


// Reference entry 10b99e50; body size 32 bytes.
#line 1 "ENTRY_10b99e50"

undefined4 __thiscall Recovered_Bulk::m_FUN_10b99e50(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10b98d60();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4)(param_1);
}


// Reference entry 10b9a030; body size 59 bytes.
#line 1 "ENTRY_10b9a030"

__declspec(naked) void FUN_10b9a030(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm lea ecx, [esi + 8]
  __asm mov dword ptr [esi], LAB_1190fdf8
  __asm call LAB_1006a64f
  __asm mov dword ptr [esi], LAB_1190fdc8
  __asm dec dword ptr [LAB_121a0e68]
  __asm test byte ptr [esp + 8], 1
  __asm mov dword ptr [esi], LAB_1186d2f4
  __asm _emit 0x74 __asm _emit 0x0b
  __asm push 0x3c
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}




// Reference entry 10b9a080; body size 32 bytes.
#line 1 "ENTRY_10b9a080"

undefined4 __thiscall Recovered_Bulk::m_FUN_10b9a080(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10b99010();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x40);
  }
  return (undefined4)(param_1);
}


// Reference entry 10b9a0b0; body size 35 bytes.
#line 1 "ENTRY_10b9a0b0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10b9a0b0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10b990f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x88);
  }
  return (undefined4)(param_1);
}


// Reference entry 10b9a0e0; body size 45 bytes.
#line 1 "ENTRY_10b9a0e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10b9a0e0(byte param_2)
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


// Reference entry 10b9a120; body size 33 bytes.
#line 1 "ENTRY_10b9a120"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10b9a120(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b9a150; body size 33 bytes.
#line 1 "ENTRY_10b9a150"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10b9a150(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b9a180; body size 33 bytes.
#line 1 "ENTRY_10b9a180"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10b9a180(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b9a1b0; body size 33 bytes.
#line 1 "ENTRY_10b9a1b0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10b9a1b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b9a370; body size 33 bytes.
#line 1 "ENTRY_10b9a370"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10b9a370(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SvgFileParserCB);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b9a3a0; body size 32 bytes.
#line 1 "ENTRY_10b9a3a0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10b9a3a0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  FUN_1125b8f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4)(param_1);
}


// Reference entry 10b9a3d0; body size 33 bytes.
#line 1 "ENTRY_10b9a3d0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10b9a3d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SvgFileParserCB);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b9a440; body size 25 bytes.
#line 1 "ENTRY_10b9a440"

__declspec(naked) void FUN_10b9a440(void)

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




// Reference entry 10b9a460; body size 25 bytes.
#line 1 "ENTRY_10b9a460"

__declspec(naked) void FUN_10b9a460(void)

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




// Reference entry 10b9b3a0; body size 33 bytes.
#line 1 "ENTRY_10b9b3a0"

__declspec(naked) void FUN_10b9b3a0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x15
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




// Reference entry 10b9b4b0; body size 25 bytes.
#line 1 "ENTRY_10b9b4b0"

void __fastcall FUN_10b9b4b0(undefined4 *param_1)

{
  thunk_FUN_10b95cf0(param_1,*param_1);
  thunk_FUN_1148a50e(*param_1,0x14);
  return;
}


// Reference entry 10b9bac0; body size 30 bytes.
#line 1 "ENTRY_10b9bac0"

void __thiscall Recovered_Bulk::m_FUN_10b9bac0(int param_2)
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


// Reference entry 10b9bf50; body size 16 bytes.
#line 1 "ENTRY_10b9bf50"

void __fastcall FUN_10b9bf50(int param_1)

{
  if (*(int *)(param_1 + 0x3c) != 0) {
                    
                    
    ((SCVtbl_1_0*)((int *)(param_1 + 0x38)))->v();
    return;
  }
  return;
}


// Reference entry 10b9c060; body size 32 bytes.
#line 1 "ENTRY_10b9c060"

void __fastcall FUN_10b9c060(int *param_1)

{
  thunk_FUN_10b95cf0(param_1,*param_1);
  *(int *)*param_1 = (int)(*param_1);
  *(int*)(*param_1 + 4) = (int)(*param_1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 10b9c370; body size 21 bytes.
#line 1 "ENTRY_10b9c370"

SCStr * __stdcall FUN_10b9c370(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCArtworkData");
  return (SCStr *)(param_1);
}


// Reference entry 10b9c390; body size 21 bytes.
#line 1 "ENTRY_10b9c390"

SCStr * __stdcall FUN_10b9c390(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCLogoArtworkData");
  return (SCStr *)(param_1);
}


// Reference entry 10b9c480; body size 27 bytes.
#line 1 "ENTRY_10b9c480"

__declspec(naked) void FUN_10b9c480(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm lea ecx, [esi + 8]
  __asm call LAB_1005218f
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x34 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x38 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret
}




// Reference entry 10b9c740; body size 51 bytes.
#line 1 "ENTRY_10b9c740"

__declspec(naked) void FUN_10b9c740(void)

{
  __asm sub esp, 8
  __asm lea eax, [esp + 0x10]
  __asm add ecx, 8
  __asm push esi
  __asm push eax
  __asm lea eax, [esp + 8]
  __asm push eax
  __asm call LAB_100541bf
  __asm mov esi, dword ptr [esp + 0x10]
  __asm mov eax, dword ptr [eax]
  __asm mov ecx, dword ptr [eax + 0xc]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm add esp, 8
  __asm ret 8
}




// Reference entry 10b9d980; body size 45 bytes.
#line 1 "ENTRY_10b9d980"

__declspec(naked) void FUN_10b9d980(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov eax, dword ptr [esi]
  __asm call dword ptr [eax + 0x30]
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm cmp ecx, eax
  __asm _emit 0x76 __asm _emit 0x09
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax + 0x30]
  __asm mov ecx, eax
  __asm push ecx
  __asm push dword ptr [esi + 0x74]
  __asm push dword ptr [esp + 0x10]
  __asm call LAB_1148cded
  __asm add esp, 0xc
  __asm pop esi
  __asm ret 8
}




// Reference entry 10b9d9c0; body size 48 bytes.
#line 1 "ENTRY_10b9d9c0"

__declspec(naked) void FUN_10b9d9c0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov eax, dword ptr [esi]
  __asm call dword ptr [eax + 0x30]
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm cmp ecx, eax
  __asm _emit 0x76 __asm _emit 0x09
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax + 0x30]
  __asm mov ecx, eax
  __asm push ecx
  __asm push dword ptr [esi + 0xc8]
  __asm push dword ptr [esp + 0x10]
  __asm call LAB_1148cded
  __asm add esp, 0xc
  __asm pop esi
  __asm ret 8
}




// Reference entry 10b9ddf0; body size 30 bytes.
#line 1 "ENTRY_10b9ddf0"

__declspec(naked) void FUN_10b9ddf0(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push edi
  __asm lea edi, [ecx + 0x2c]
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




// Reference entry 10b9de20; body size 30 bytes.
#line 1 "ENTRY_10b9de20"

__declspec(naked) void FUN_10b9de20(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push edi
  __asm lea edi, [ecx + 0x34]
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




// Reference entry 10b9e0e0; body size 25 bytes.
#line 1 "ENTRY_10b9e0e0"

__declspec(naked) void FUN_10b9e0e0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x38]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}




// Reference entry 10b9e170; body size 20 bytes.
#line 1 "ENTRY_10b9e170"

SCStr * __thiscall Recovered_Bulk::m_FUN_10b9e170(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x2c));
  return (SCStr *)(param_2);
}


// Reference entry 10b9e190; body size 20 bytes.
#line 1 "ENTRY_10b9e190"

SCStr * __thiscall Recovered_Bulk::m_FUN_10b9e190(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x34));
  return (SCStr *)(param_2);
}


// Reference entry 10b9e1f0; body size 42 bytes.
#line 1 "ENTRY_10b9e1f0"

__declspec(naked) void FUN_10b9e1f0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm push 0
  __asm push esi
  __asm push ecx
  __asm mov ecx, esp
  __asm mov byte ptr [esi + 0x58], 1
  __asm push offset LAB_11878cf4
  __asm mov dword ptr [esi + 0x54], eax
  __asm call LAB_1005273e
  __asm lea ecx, [esi + 8]
  __asm call LAB_10013543
  __asm pop esi
  __asm ret 4
}




// Reference entry 10b9e500; body size 18 bytes.
#line 1 "ENTRY_10b9e500"

undefined1 __fastcall FUN_10b9e500(int param_1)

{
  if ((*(int *)(param_1 + 0x50) == 0) && (*(char *)(param_1 + 0x58) == '\0')) {
    return (undefined1)(0);
  }
  return (undefined1)(1);
}


// Reference entry 10ba0860; body size 22 bytes.
#line 1 "ENTRY_10ba0860"

__declspec(naked) void FUN_10ba0860(void)

{
  __asm mov eax, dword ptr [ecx]
  __asm push 5
  __asm push dword ptr [esp + 0xc]
  __asm push dword ptr [esp + 0xc]
  __asm call dword ptr [eax + 0x18]
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 8
}




// Reference entry 10ba0970; body size 38 bytes.
#line 1 "ENTRY_10ba0970"

__declspec(naked) void FUN_10ba0970(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov eax, dword ptr [esi]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, esi
  __asm mov edi, eax
  __asm call LAB_1005b087
  __asm test al, al
  __asm _emit 0x74 __asm _emit 0x0b
  __asm push edi
  __asm mov ecx, esi
  __asm call LAB_1003bb60
  __asm pop edi
  __asm pop esi
  __asm ret
  __asm mov eax, edi
  __asm pop edi
  __asm pop esi
  __asm ret
}




// Reference entry 10ba0b30; body size 30 bytes.
#line 1 "ENTRY_10ba0b30"

undefined4 __stdcall FUN_10ba0b30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  thunk_FUN_10b9e930<>(param_1,param_2,param_3,param_4,1);
  return (undefined4)(param_1);
}


// Reference entry 10ba0b60; body size 30 bytes.
#line 1 "ENTRY_10ba0b60"

undefined4 __stdcall FUN_10ba0b60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  thunk_FUN_10b9e930<>(param_1,param_2,param_3,param_4,0);
  return (undefined4)(param_1);
}


// Reference entry 10ba17b0; body size 55 bytes.
#line 1 "ENTRY_10ba17b0"

__declspec(naked) void FUN_10ba17b0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [esi + 0x10]
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x0b
  __asm push 0
  __asm push eax
  __asm lea ecx, [esi + 8]
  __asm call LAB_10037bc8
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm mov eax, dword ptr [eax + 0x1c]
  __asm call eax
  __asm test al, al
  __asm _emit 0x75 __asm _emit 0x0b
  __asm test edi, edi
  __asm _emit 0x75 __asm _emit 0x07
  __asm mov ecx, esi
  __asm call LAB_1003bb65
  __asm pop edi
  __asm pop esi
  __asm ret 4
}




// Reference entry 10ba1800; body size 55 bytes.
#line 1 "ENTRY_10ba1800"

__declspec(naked) void FUN_10ba1800(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [esi + 0x10]
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x0b
  __asm push 0
  __asm push eax
  __asm lea ecx, [esi + 8]
  __asm call LAB_10037bc8
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm mov eax, dword ptr [eax + 0x1c]
  __asm call eax
  __asm test al, al
  __asm _emit 0x75 __asm _emit 0x0b
  __asm test edi, edi
  __asm _emit 0x75 __asm _emit 0x07
  __asm mov ecx, esi
  __asm call LAB_10034068
  __asm pop edi
  __asm pop esi
  __asm ret 4
}




// Reference entry 10ba1850; body size 21 bytes.
#line 1 "ENTRY_10ba1850"

void __thiscall Recovered_Bulk::m_FUN_10ba1850(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 4) = (undefined4)(param_2);
  *(undefined4*)(param_1 + 8) = (undefined4)(param_3);
  *(undefined1*)(param_1 + 0xc) = (undefined1)(1);
  return;
}


// Reference entry 10ba1a60; body size 56 bytes.
#line 1 "ENTRY_10ba1a60"

__declspec(naked) void FUN_10ba1a60(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x09
  __asm push eax
  __asm lea ecx, [esi + 8]
  __asm call LAB_100373d5
  __asm cmp dword ptr [esi + 0x10], 0
  __asm _emit 0x75 __asm _emit 0x1a
  __asm mov eax, dword ptr [esi + 0x60]
  __asm lea ecx, [esi + 0x60]
  __asm call dword ptr [eax + 4]
  __asm cmp byte ptr [esi + 0x58], 0
  __asm _emit 0x74 __asm _emit 0x0b
  __asm mov byte ptr [esi + 0x58], 0
  __asm mov dword ptr [esi + 0x54], 0x3ec
  __asm pop esi
  __asm ret 4
}




// Reference entry 10ba31c0; body size 33 bytes.
#line 1 "ENTRY_10ba31c0"

void __thiscall Recovered_Bulk::m_FUN_10ba31c0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_10ba3240((int)(param_2),(int)(*(undefined4 *)(*param_1 + 4)));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 10ba31f0; body size 57 bytes.
#line 1 "ENTRY_10ba31f0"

__declspec(naked) void FUN_10ba31f0(void)

{
  __asm push ebx
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x10]
  __asm mov ebx, ecx
  __asm cmp byte ptr [esi + 0xd], 0
  __asm _emit 0x75 __asm _emit 0x26
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x10]
  __asm push dword ptr [esi + 8]
  __asm mov ecx, ebx
  __asm push edi
  __asm call LAB_1003061b
  __asm mov eax, esi
  __asm mov esi, dword ptr [esi]
  __asm push 0x2c
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm cmp byte ptr [esi + 0xd], 0
  __asm _emit 0x74 __asm _emit 0xe0
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm ret 8
}




// Reference entry 10ba3300; body size 49 bytes.
#line 1 "ENTRY_10ba3300"

__declspec(naked) void FUN_10ba3300(void)

{
  __asm sub esp, 0xc
  __asm push esi
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x18]
  __asm lea eax, [esp + 8]
  __asm push edi
  __asm push eax
  __asm mov esi, ecx
  __asm call LAB_1006ffd7
  __asm mov eax, dword ptr [esp + 0x10]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm _emit 0x75 __asm _emit 0x07
  __asm mov ecx, dword ptr [edi]
  __asm cmp ecx, dword ptr [eax + 0x10]
  __asm _emit 0x7d __asm _emit 0x02
  __asm mov eax, dword ptr [esi]
  __asm pop edi
  __asm pop esi
  __asm add esp, 0xc
  __asm ret 4
}




// Reference entry 10ba4fe0; body size 41 bytes.
#line 1 "ENTRY_10ba4fe0"

__declspec(naked) void FUN_10ba4fe0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x0f
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




// Reference entry 10ba5020; body size 41 bytes.
#line 1 "ENTRY_10ba5020"

__declspec(naked) void FUN_10ba5020(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x0f
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




// Reference entry 10ba5080; body size 41 bytes.
#line 1 "ENTRY_10ba5080"

__declspec(naked) void FUN_10ba5080(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x0f
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




// Reference entry 10ba5140; body size 24 bytes.
#line 1 "ENTRY_10ba5140"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10ba5140(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10ba5250; body size 48 bytes.
#line 1 "ENTRY_10ba5250"

__declspec(naked) void FUN_10ba5250(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x2c
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




// Reference entry 10ba5290; body size 48 bytes.
#line 1 "ENTRY_10ba5290"

__declspec(naked) void FUN_10ba5290(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x1c
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




// Reference entry 10ba6b30; body size 60 bytes.
#line 1 "ENTRY_10ba6b30"

__declspec(naked) void FUN_10ba6b30(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_116c30f0
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ecx]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
}




// Reference entry 10ba6c10; body size 26 bytes.
#line 1 "ENTRY_10ba6c10"

void __fastcall FUN_10ba6c10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10ba6c30; body size 19 bytes.
#line 1 "ENTRY_10ba6c30"

void __fastcall FUN_10ba6c30(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x2c);
  }
  return;
}


// Reference entry 10ba6c50; body size 19 bytes.
#line 1 "ENTRY_10ba6c50"

void __fastcall FUN_10ba6c50(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 10ba6c70; body size 33 bytes.
#line 1 "ENTRY_10ba6c70"

__declspec(naked) void FUN_10ba6c70(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x15
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




// Reference entry 10ba6d30; body size 28 bytes.
#line 1 "ENTRY_10ba6d30"

void __fastcall FUN_10ba6d30(int *param_1)

{
  thunk_FUN_10ba3240((int)(param_1),(int)(*(undefined4 *)(*param_1 + 4)));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 10ba6e50; body size 33 bytes.
#line 1 "ENTRY_10ba6e50"

__declspec(naked) void FUN_10ba6e50(void)

{
  __asm push esi
  __asm mov esi, dword ptr [ecx]
  __asm push edi
  __asm mov edi, dword ptr [ecx + 4]
  __asm cmp esi, edi
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x44 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, esi
  __asm call LAB_1007b0d5
  __asm add esi, 0x24
  __asm cmp esi, edi
  __asm _emit 0x75 __asm _emit 0xf2
  __asm pop edi
  __asm pop esi
  __asm ret
}




// Reference entry 10ba6e80; body size 48 bytes.
#line 1 "ENTRY_10ba6e80"

__declspec(naked) void FUN_10ba6e80(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov eax, dword ptr [esi - 0x60]
  __asm lea ecx, [esi - 0x50]
  __asm mov eax, dword ptr [eax + 4]
  __asm mov dword ptr [eax + esi - 0x60], LAB_11910698
  __asm mov eax, dword ptr [esi - 0x60]
  __asm mov edx, dword ptr [eax + 4]
  __asm lea eax, [edx - 0x60]
  __asm mov dword ptr [edx + esi - 0x64], eax
  __asm call LAB_10034275
  __asm lea ecx, [esi - 0x48]
  __asm pop esi
  __asm jmp dword ptr [LAB_122fc398]
}




// Reference entry 10ba6ec0; body size 33 bytes.
#line 1 "ENTRY_10ba6ec0"

__declspec(naked) void FUN_10ba6ec0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x15
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




// Reference entry 10ba6f00; body size 28 bytes.
#line 1 "ENTRY_10ba6f00"

void __fastcall FUN_10ba6f00(int *param_1)

{
  thunk_FUN_10ba3240((int)(param_1),(int)(*(undefined4 *)(*param_1 + 4)));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 10ba7460; body size 18 bytes.
#line 1 "ENTRY_10ba7460"

void __fastcall FUN_10ba7460(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0x30);
  }
  return;
}


// Reference entry 10ba7e70; body size 56 bytes.
#line 1 "ENTRY_10ba7e70"

__declspec(naked) void FUN_10ba7e70(void)

{
  __asm mov eax, dword ptr [ecx]
  __asm push esi
  __asm lea esi, [ecx + 0x60]
  __asm lea ecx, [esi - 0x50]
  __asm mov eax, dword ptr [eax + 4]
  __asm mov dword ptr [eax + esi - 0x60], LAB_11910698
  __asm mov eax, dword ptr [esi - 0x60]
  __asm mov edx, dword ptr [eax + 4]
  __asm lea eax, [edx - 0x60]
  __asm mov dword ptr [edx + esi - 0x64], eax
  __asm call LAB_10034275
  __asm lea ecx, [esi - 0x48]
  __asm call dword ptr [LAB_122fc398]
  __asm mov ecx, esi
  __asm pop esi
  __asm jmp dword ptr [LAB_122fc3d0]
}




// Reference entry 10ba8050; body size 45 bytes.
#line 1 "ENTRY_10ba8050"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10ba8050(byte param_2)
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


// Reference entry 10ba8130; body size 52 bytes.
#line 1 "ENTRY_10ba8130"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10ba8130(byte param_2)
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


// Reference entry 10ba8180; body size 60 bytes.
#line 1 "ENTRY_10ba8180"

__declspec(naked) void FUN_10ba8180(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x2c]
  __asm push edi
  __asm lea edi, [esi + 8]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x15
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, edi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test byte ptr [esp + 0xc], 1
  __asm _emit 0x74 __asm _emit 0x0b
  __asm push 0x30
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm pop edi
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}




// Reference entry 10ba82c0; body size 45 bytes.
#line 1 "ENTRY_10ba82c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10ba82c0(byte param_2)
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


// Reference entry 10ba8300; body size 32 bytes.
#line 1 "ENTRY_10ba8300"

undefined4 __thiscall Recovered_Bulk::m_FUN_10ba8300(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10ba6fd0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x24);
  }
  return (undefined4)(param_1);
}


// Reference entry 10ba8330; body size 58 bytes.
#line 1 "ENTRY_10ba8330"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10ba8330(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpACDestroyAlarmAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpACDestroyAlarmAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpACDestroyAlarmAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10ba8380; body size 32 bytes.
#line 1 "ENTRY_10ba8380"

undefined4 __thiscall Recovered_Bulk::m_FUN_10ba8380(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10ba7200();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x58);
  }
  return (undefined4)(param_1);
}


// Reference entry 10ba83b0; body size 33 bytes.
#line 1 "ENTRY_10ba83b0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10ba83b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10ba83e0; body size 33 bytes.
#line 1 "ENTRY_10ba83e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10ba83e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwfObjACListener);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10ba8480; body size 25 bytes.
#line 1 "ENTRY_10ba8480"

__declspec(naked) void FUN_10ba8480(void)

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




// Reference entry 10ba84a0; body size 25 bytes.
#line 1 "ENTRY_10ba84a0"

__declspec(naked) void FUN_10ba84a0(void)

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




// Reference entry 10ba86b0; body size 19 bytes.
#line 1 "ENTRY_10ba86b0"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_10ba86b0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 10ba8770; body size 21 bytes.
#line 1 "ENTRY_10ba8770"

void __thiscall Recovered_Bulk::m_FUN_10ba8770(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 10ba8790; body size 58 bytes.
#line 1 "ENTRY_10ba8790"

__declspec(naked) void FUN_10ba8790(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x2c]
  __asm push edi
  __asm lea edi, [esi + 8]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x15
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, edi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm cmp byte ptr [esp + 0xc], 0
  __asm _emit 0x74 __asm _emit 0x0b
  __asm push 0x30
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm pop edi
  __asm pop esi
  __asm ret 4
}




// Reference entry 10ba87e0; body size 35 bytes.
#line 1 "ENTRY_10ba87e0"

__declspec(naked) void FUN_10ba87e0(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x10]
  __asm cmp esi, edi
  __asm _emit 0x74 __asm _emit 0x10
  __asm nop
  __asm mov ecx, esi
  __asm call LAB_1007b0d5
  __asm add esi, 0x24
  __asm cmp esi, edi
  __asm _emit 0x75 __asm _emit 0xf2
  __asm pop edi
  __asm pop esi
  __asm ret 8
}




// Reference entry 10ba8810; body size 38 bytes.
#line 1 "ENTRY_10ba8810"

__declspec(naked) void FUN_10ba8810(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, ecx
  __asm push 0
  __asm push dword ptr [esi + 4]
  __asm push ecx
  __asm mov ecx, esp
  __asm push offset LAB_118783f0
  __asm call LAB_1005273e
  __asm mov ecx, dword ptr [esi + 4]
  __asm mov ecx, dword ptr [ecx + 0x18]
  __asm call LAB_10013543
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10ba8840; body size 39 bytes.
#line 1 "ENTRY_10ba8840"

__declspec(naked) void FUN_10ba8840(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov ecx, dword ptr [ecx + 0x2c]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [esp + 4], eax
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x11
  __asm push dword ptr [esp + 8]
  __asm mov eax, dword ptr [ecx]
  __asm lea edx, [esp + 8]
  __asm push edx
  __asm call dword ptr [eax + 8]
  __asm ret 8
  __asm call LAB_1148a05a
}




// Reference entry 10ba9f70; body size 31 bytes.
#line 1 "ENTRY_10ba9f70"

int * FUN_10ba9f70(int *param_1)

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


// Reference entry 10ba9fa0; body size 31 bytes.
#line 1 "ENTRY_10ba9fa0"

int * FUN_10ba9fa0(int *param_1)

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


// Reference entry 10ba9fd0; body size 19 bytes.
#line 1 "ENTRY_10ba9fd0"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_10ba9fd0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 10baa290; body size 33 bytes.
#line 1 "ENTRY_10baa290"

__declspec(naked) void FUN_10baa290(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x15
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




// Reference entry 10baa800; body size 19 bytes.
#line 1 "ENTRY_10baa800"

__declspec(naked) void FUN_10baa800(void)

{
  __asm mov ecx, dword ptr [ecx + 8]
  __asm test ecx, ecx
  __asm jne LAB_10030e8b
  __asm xor al, al
  __asm ret
  __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc
}




// Reference entry 10baa820; body size 45 bytes.
#line 1 "ENTRY_10baa820"

__declspec(naked) void FUN_10baa820(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [esi]
  __asm test edi, edi
  __asm _emit 0x74 __asm _emit 0x18
  __asm lea eax, [edi + 4]
  __asm push eax
  __asm call LAB_1001718e
  __asm add esp, 4
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x08
  __asm mov eax, dword ptr [edi]
  __asm mov ecx, edi
  __asm push 1
  __asm call dword ptr [eax]
  __asm mov eax, dword ptr [esp + 0xc]
  __asm pop edi
  __asm mov dword ptr [esi], eax
  __asm pop esi
  __asm ret 4
}




// Reference entry 10baa860; body size 45 bytes.
#line 1 "ENTRY_10baa860"

__declspec(naked) void FUN_10baa860(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [esi]
  __asm test edi, edi
  __asm _emit 0x74 __asm _emit 0x18
  __asm lea eax, [edi + 4]
  __asm push eax
  __asm call LAB_1001718e
  __asm add esp, 4
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x08
  __asm mov eax, dword ptr [edi]
  __asm mov ecx, edi
  __asm push 1
  __asm call dword ptr [eax]
  __asm mov eax, dword ptr [esp + 0xc]
  __asm pop edi
  __asm mov dword ptr [esi], eax
  __asm pop esi
  __asm ret 4
}




// Reference entry 10baa950; body size 33 bytes.
#line 1 "ENTRY_10baa950"

void __fastcall FUN_10baa950(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_10ba3240((int)(param_1),(int)(*(undefined4 *)(iVar1 + 4)));
  *(int*)(iVar1 + 4) = (int)(iVar1);
  *(int*)iVar1 = (int)((int)(iVar1));
  *(int*)(iVar1 + 8) = (int)(iVar1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 10baa980; body size 33 bytes.
#line 1 "ENTRY_10baa980"

void __fastcall FUN_10baa980(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_102bcb30<>(param_1,*(undefined4 *)(iVar1 + 4));
  *(int*)(iVar1 + 4) = (int)(iVar1);
  *(int*)iVar1 = (int)((int)(iVar1));
  *(int*)(iVar1 + 8) = (int)(iVar1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 10baa9b0; body size 51 bytes.
#line 1 "ENTRY_10baa9b0"

__declspec(naked) void FUN_10baa9b0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm cmp dword ptr [esi + 0x34], 0
  __asm _emit 0x74 __asm _emit 0x28
  __asm mov ecx, dword ptr [esi + 0x38]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x34 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x38 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x34 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x38 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret
}




// Reference entry 10bab1e0; body size 59 bytes.
#line 1 "ENTRY_10bab1e0"

__declspec(naked) void FUN_10bab1e0(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm lea ecx, [eax + eax*8]
  __asm mov eax, dword ptr [esp + 4]
  __asm shl ecx, 2
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x12
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x77 __asm _emit 0x0f
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret 8
  __asm call dword ptr [LAB_122fc888]
}




// Reference entry 10bab270; body size 38 bytes.
#line 1 "ENTRY_10bab270"

__declspec(naked) void FUN_10bab270(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x2c]
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm call LAB_10002720
  __asm mov eax, dword ptr [esi + 0x20]
  __asm pop esi
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x07 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x1c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm ret
}




// Reference entry 10bab2a0; body size 60 bytes.
#line 1 "ENTRY_10bab2a0"

__declspec(naked) void FUN_10bab2a0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x30
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xa8]
  __asm mov ecx, dword ptr [esi + 8]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret
}




// Reference entry 10bab320; body size 35 bytes.
#line 1 "ENTRY_10bab320"

__declspec(naked) void FUN_10bab320(void)

{
  __asm mov eax, dword ptr [ecx + 8]
  __asm mov ecx, dword ptr [eax + 0x3c]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x16
  __asm mov eax, dword ptr [esp + 4]
  __asm lea edx, [esp + 4]
  __asm push dword ptr [esp + 8]
  __asm mov dword ptr [esp + 8], eax
  __asm mov eax, dword ptr [ecx]
  __asm push edx
  __asm call dword ptr [eax + 8]
  __asm ret 8
}




// Reference entry 10bab370; body size 43 bytes.
#line 1 "ENTRY_10bab370"

void __fastcall FUN_10bab370(undefined4 *param_1)

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


// Reference entry 10bac480; body size 25 bytes.
#line 1 "ENTRY_10bac480"

__declspec(naked) void FUN_10bac480(void)

{
  __asm mov ecx, dword ptr [ecx + 0x34]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}




// Reference entry 10bb24a0; body size 22 bytes.
#line 1 "ENTRY_10bb24a0"

undefined4 __stdcall FUN_10bb24a0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_10baeb40<>(param_1,param_2,0);
  return (undefined4)(param_1);
}


// Reference entry 10bb3040; body size 16 bytes.
#line 1 "ENTRY_10bb3040"

void __fastcall FUN_10bb3040(int param_1)

{
  if (*(int **)(param_1 + 4) != (int *)((0x0))) {
                    
                    
    ((SCVtbl_43_0*)(*(int **)(param_1 + 4)))->v();
    return;
  }
  return;
}


// Reference entry 10bb3070; body size 20 bytes.
#line 1 "ENTRY_10bb3070"

__declspec(naked) void FUN_10bb3070(void)

{
  __asm mov ecx, dword ptr [ecx + 0x2c]
  __asm test ecx, ecx
  __asm jne LAB_1004c550
  __asm ret
  __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc
  __asm ret 0
  __asm _emit 0xcc
}




// Reference entry 10bb4330; body size 38 bytes.
#line 1 "ENTRY_10bb4330"

__declspec(naked) void FUN_10bb4330(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0
  __asm push offset LAB_11910258
  __asm lea ecx, [esi + 0xa988]
  __asm call LAB_1007fff4
  __asm push dword ptr [esp + 8]
  __asm mov ecx, eax
  __asm call LAB_1008b728
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}




// Reference entry 10bb4690; body size 43 bytes.
#line 1 "ENTRY_10bb4690"

__declspec(naked) void FUN_10bb4690(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x1e
  __asm mov ecx, dword ptr [ecx + 0x18]
  __asm push esi
  __asm call LAB_100373d5
  __asm push esi
  __asm push offset LAB_11890d64
  __asm push 3
  __asm push offset LAB_11910610
  __asm call LAB_100238df
  __asm add esp, 0x10
  __asm pop esi
  __asm ret 4
}




// Reference entry 10bb4be0; body size 33 bytes.
#line 1 "ENTRY_10bb4be0"

void __thiscall Recovered_Bulk::m_FUN_10bb4be0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_10bb4c10((int)(param_2),(int)(*(undefined4 *)(*param_1 + 4)));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 10bb5310; body size 48 bytes.
#line 1 "ENTRY_10bb5310"

__declspec(naked) void FUN_10bb5310(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x1c
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




// Reference entry 10bb58d0; body size 19 bytes.
#line 1 "ENTRY_10bb58d0"

void __fastcall FUN_10bb58d0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 10bb58f0; body size 28 bytes.
#line 1 "ENTRY_10bb58f0"

void __fastcall FUN_10bb58f0(int *param_1)

{
  thunk_FUN_10bb4c10((int)(param_1),(int)(*(undefined4 *)(*param_1 + 4)));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 10bb59f0; body size 19 bytes.
#line 1 "ENTRY_10bb59f0"

void __fastcall FUN_10bb59f0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 10bb5a10; body size 28 bytes.
#line 1 "ENTRY_10bb5a10"

void __fastcall FUN_10bb5a10(int *param_1)

{
  thunk_FUN_10bb4c10((int)(param_1),(int)(*(undefined4 *)(*param_1 + 4)));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 10bb60e0; body size 33 bytes.
#line 1 "ENTRY_10bb60e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10bb60e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10bb6400; body size 33 bytes.
#line 1 "ENTRY_10bb6400"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10bb6400(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10bb6540; body size 33 bytes.
#line 1 "ENTRY_10bb6540"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10bb6540(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10bb6570; body size 33 bytes.
#line 1 "ENTRY_10bb6570"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10bb6570(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10bb65a0; body size 33 bytes.
#line 1 "ENTRY_10bb65a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10bb65a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10bb65d0; body size 33 bytes.
#line 1 "ENTRY_10bb65d0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10bb65d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10bb6600; body size 33 bytes.
#line 1 "ENTRY_10bb6600"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10bb6600(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10bb6630; body size 33 bytes.
#line 1 "ENTRY_10bb6630"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10bb6630(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10bb6660; body size 33 bytes.
#line 1 "ENTRY_10bb6660"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10bb6660(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10bb6690; body size 33 bytes.
#line 1 "ENTRY_10bb6690"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10bb6690(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwfObjDDListener);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10bb66f0; body size 25 bytes.
#line 1 "ENTRY_10bb66f0"

__declspec(naked) void FUN_10bb66f0(void)

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




// Reference entry 10bb6b30; body size 57 bytes.
#line 1 "ENTRY_10bb6b30"

__declspec(naked) void FUN_10bb6b30(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x20]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x07
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x20]
  __asm _emit 0xeb __asm _emit 0x02
  __asm xor eax, eax
  __asm cmp eax, dword ptr [esp + 8]
  __asm _emit 0x75 __asm _emit 0x1c
  __asm push offset LAB_119118a4
  __asm push 1
  __asm push offset LAB_11911554
  __asm call LAB_100238df
  __asm mov ecx, dword ptr [esi - 4]
  __asm add esp, 0xc
  __asm call LAB_1006aac8
  __asm pop esi
  __asm ret 8
}




// Reference entry 10bb6fe0; body size 33 bytes.
#line 1 "ENTRY_10bb6fe0"

__declspec(naked) void FUN_10bb6fe0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x20]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x15
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x1c]
  __asm call eax
  __asm test al, al
  __asm _emit 0x74 __asm _emit 0x0a
  __asm mov eax, dword ptr [esi + 0x1c]
  __asm lea ecx, [esi + 0x1c]
  __asm pop esi
  __asm jmp dword ptr [eax + 4]
  __asm pop esi
  __asm ret
}




// Reference entry 10bb7170; body size 42 bytes.
#line 1 "ENTRY_10bb7170"

__declspec(naked) void FUN_10bb7170(void)

{
  __asm push ecx
  __asm push esi
  __asm push 0xc
  __asm mov esi, ecx
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esp + 4], eax
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x0f
  __asm mov dword ptr [eax + 4], esi
  __asm mov dword ptr [eax + 8], esi
  __asm mov dword ptr [eax], LAB_119110b0
  __asm pop esi
  __asm pop ecx
  __asm ret
  __asm xor eax, eax
  __asm pop esi
  __asm pop ecx
  __asm ret
}




// Reference entry 10bb7a10; body size 53 bytes.
#line 1 "ENTRY_10bb7a10"

__declspec(naked) void FUN_10bb7a10(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm push offset LAB_1187afec
  __asm call LAB_1008ca83
  __asm test al, al
  __asm _emit 0x74 __asm _emit 0x1c
  __asm call LAB_1001c9c2
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 0x110]
  __asm cmp eax, 2
  __asm _emit 0x75 __asm _emit 0x08
  __asm mov ecx, dword ptr [esi - 4]
  __asm call LAB_1006aac8
  __asm pop esi
  __asm ret 8
}




// Reference entry 10bb7a60; body size 21 bytes.
#line 1 "ENTRY_10bb7a60"

SCStr * __stdcall FUN_10bb7a60(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("CUSTOM_SUB_WIZARD_FIREWALL");
  return (SCStr *)(param_1);
}


// Reference entry 10bb7d30; body size 21 bytes.
#line 1 "ENTRY_10bb7d30"

SCStr * __stdcall FUN_10bb7d30(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("legacy_join_existing.button_press");
  return (SCStr *)(param_1);
}


// Reference entry 10bb7d50; body size 21 bytes.
#line 1 "ENTRY_10bb7d50"

SCStr * __stdcall FUN_10bb7d50(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("legacy_join_existing.complete");
  return (SCStr *)(param_1);
}


// Reference entry 10bb7d70; body size 21 bytes.
#line 1 "ENTRY_10bb7d70"

SCStr * __stdcall FUN_10bb7d70(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("legacy_join_existing.connecting");
  return (SCStr *)(param_1);
}


// Reference entry 10bb7d90; body size 21 bytes.
#line 1 "ENTRY_10bb7d90"

SCStr * __stdcall FUN_10bb7d90(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("legacy_join_existing.firewall_subwizard");
  return (SCStr *)(param_1);
}


// Reference entry 10bb7db0; body size 21 bytes.
#line 1 "ENTRY_10bb7db0"

SCStr * __stdcall FUN_10bb7db0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("legacy_join_existing.init");
  return (SCStr *)(param_1);
}


// Reference entry 10bb7dd0; body size 21 bytes.
#line 1 "ENTRY_10bb7dd0"

SCStr * __stdcall FUN_10bb7dd0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("legacy_join_existing.intro");
  return (SCStr *)(param_1);
}


// Reference entry 10bb7df0; body size 21 bytes.
#line 1 "ENTRY_10bb7df0"

SCStr * __stdcall FUN_10bb7df0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("legacy_join_existing.setup_not_allowed");
  return (SCStr *)(param_1);
}


// Reference entry 10bb7e10; body size 21 bytes.
#line 1 "ENTRY_10bb7e10"

SCStr * __stdcall FUN_10bb7e10(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("legacy_join_existing.success");
  return (SCStr *)(param_1);
}


// Reference entry 10bb7e30; body size 21 bytes.
#line 1 "ENTRY_10bb7e30"

SCStr * __stdcall FUN_10bb7e30(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("legacy_join_existing.timeout");
  return (SCStr *)(param_1);
}


// Reference entry 10bb7e60; body size 35 bytes.
#line 1 "ENTRY_10bb7e60"

__declspec(naked) void FUN_10bb7e60(void)

{
  __asm push offset LAB_11882ff0
  __asm push 0x20ea
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}




// Reference entry 10bb7e90; body size 19 bytes.
#line 1 "ENTRY_10bb7e90"

__declspec(naked) void FUN_10bb7e90(void)

{
  __asm push dword ptr [esp + 4]
  __asm call LAB_1008339d
  __asm mov eax, dword ptr [esp + 8]
  __asm add esp, 4
  __asm ret 4
}




// Reference entry 10bba430; body size 21 bytes.
#line 1 "ENTRY_10bba430"

SCStr * __stdcall FUN_10bba430(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCLegacyJoinExistingWizard");
  return (SCStr *)(param_1);
}


// Reference entry 10bbb130; body size 33 bytes.
#line 1 "ENTRY_10bbb130"

void __fastcall FUN_10bbb130(int param_1)

{
  if (*(undefined4 **)(param_1 + 0x1c) != (undefined4 *)((0x0))) {
    ((SCVtbl_0_1*)(*(undefined4 **)(param_1 + 0x1c)))->v((int)(1));
  }
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(0);
                    
                    
  ((SCVtbl_2_0*)((int *)(param_1 + 0xc)))->v();
  return;
}


// Reference entry 10bbb340; body size 63 bytes.
#line 1 "ENTRY_10bbb340"

__declspec(naked) void FUN_10bbb340(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm call LAB_1002d78b
  __asm mov esi, edi
  __asm lea edx, [edi + 0x1c]
  __asm neg esi
  __asm mov ecx, eax
  __asm sbb esi, esi
  __asm and esi, edx
  __asm push esi
  __asm call LAB_1003300a
  __asm push 1
  __asm call LAB_100883ca
  __asm mov ecx, eax
  __asm call LAB_10024a7d
  __asm push 0x9c4
  __asm mov ecx, edi
  __asm call LAB_10048e8c
  __asm mov ecx, edi
  __asm pop edi
  __asm pop esi
  __asm jmp LAB_1005faa1
}




// Reference entry 10bbb640; body size 24 bytes.
#line 1 "ENTRY_10bbb640"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10bbb640(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10bbb800; body size 45 bytes.
#line 1 "ENTRY_10bbb800"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10bbb800(byte param_2)
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


// Reference entry 10bbb840; body size 52 bytes.
#line 1 "ENTRY_10bbb840"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10bbb840(byte param_2)
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


// Reference entry 10bbb890; body size 52 bytes.
#line 1 "ENTRY_10bbb890"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10bbb890(byte param_2)
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


// Reference entry 10bbb8e0; body size 33 bytes.
#line 1 "ENTRY_10bbb8e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10bbb8e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10bbbf20; body size 48 bytes.
#line 1 "ENTRY_10bbbf20"

__declspec(naked) void FUN_10bbbf20(void)

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
  __asm _emit 0x7e __asm _emit 0x16
  __asm cmp dword ptr [edi + 8], 0
  __asm _emit 0x74 __asm _emit 0x10
  __asm mov edx, dword ptr [edi]
  __asm mov ecx, edi
  __asm call dword ptr [edx + 0x44]
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop edi
  __asm pop esi
  __asm ret
}




// Reference entry 10bbbfe0; body size 20 bytes.
#line 1 "ENTRY_10bbbfe0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10bbbfe0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x14));
  return (SCStr *)(param_2);
}


// Reference entry 10bbc000; body size 25 bytes.
#line 1 "ENTRY_10bbc000"

__declspec(naked) void FUN_10bbc000(void)

{
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x44]
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x0a
  __asm mov edx, dword ptr [eax]
  __asm mov ecx, eax
  __asm jmp dword ptr [edx + 0x110]
  __asm mov eax, 1
  __asm ret
}




// Reference entry 10bbcdf0; body size 20 bytes.
#line 1 "ENTRY_10bbcdf0"

__declspec(naked) void FUN_10bbcdf0(void)

{
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x44]
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x0a
  __asm mov edx, dword ptr [eax]
  __asm mov ecx, eax
  __asm jmp dword ptr [edx + 0x118]
  __asm ret
}




// Reference entry 10bbd010; body size 20 bytes.
#line 1 "ENTRY_10bbd010"

__declspec(naked) void FUN_10bbd010(void)

{
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x44]
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x0a
  __asm mov edx, dword ptr [eax]
  __asm mov ecx, eax
  __asm jmp dword ptr [edx + 0x114]
  __asm ret
}




// Reference entry 10bbd7c0; body size 39 bytes.
#line 1 "ENTRY_10bbd7c0"

__declspec(naked) void FUN_10bbd7c0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x12
  __asm push offset LAB_10bbd800
  __asm mov dword ptr [LAB_121a5030], eax
  __asm call LAB_1000b1ea
  __asm add esp, 4
  __asm mov dword ptr [esp + 4], LAB_100169ff
  __asm jmp LAB_10062b48
}




// Reference entry 10bbddd0; body size 30 bytes.
#line 1 "ENTRY_10bbddd0"

void __thiscall Recovered_Bulk::m_FUN_10bbddd0(int param_2)
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


// Reference entry 10bbdeb0; body size 41 bytes.
#line 1 "ENTRY_10bbdeb0"

__declspec(naked) void FUN_10bbdeb0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x0f
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




// Reference entry 10bbe3a0; body size 45 bytes.
#line 1 "ENTRY_10bbe3a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10bbe3a0(byte param_2)
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


// Reference entry 10bbe520; body size 33 bytes.
#line 1 "ENTRY_10bbe520"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10bbe520(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10bbe780; body size 30 bytes.
#line 1 "ENTRY_10bbe780"

void __thiscall Recovered_Bulk::m_FUN_10bbe780(int param_2)
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


// Reference entry 10bbe8a0; body size 28 bytes.
#line 1 "ENTRY_10bbe8a0"

void __fastcall FUN_10bbe8a0(int *param_1)

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


// Reference entry 10bbe8d0; body size 21 bytes.
#line 1 "ENTRY_10bbe8d0"

SCStr * __stdcall FUN_10bbe8d0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("chirp_manager");
  return (SCStr *)(param_1);
}


// Reference entry 10bbefd0; body size 20 bytes.
#line 1 "ENTRY_10bbefd0"

__declspec(naked) void FUN_10bbefd0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x10]
  __asm push dword ptr [esp + 4]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x14]
  __asm test eax, eax
  __asm sete al
  __asm ret 4
}




// Reference entry 10bbf090; body size 41 bytes.
#line 1 "ENTRY_10bbf090"

__declspec(naked) void FUN_10bbf090(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x0f
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




// Reference entry 10bbf1a0; body size 45 bytes.
#line 1 "ENTRY_10bbf1a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10bbf1a0(byte param_2)
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


// Reference entry 10bc0390; body size 19 bytes.
#line 1 "ENTRY_10bc0390"

void __fastcall FUN_10bc0390(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 10bc04b0; body size 19 bytes.
#line 1 "ENTRY_10bc04b0"

void __fastcall FUN_10bc04b0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 10bc0600; body size 18 bytes.
#line 1 "ENTRY_10bc0600"

void __fastcall FUN_10bc0600(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0xc);
  }
  return;
}


// Reference entry 10bc0620; body size 18 bytes.
#line 1 "ENTRY_10bc0620"

void __fastcall FUN_10bc0620(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0xc);
  }
  return;
}


// Reference entry 10bc0a50; body size 25 bytes.
#line 1 "ENTRY_10bc0a50"

__declspec(naked) void FUN_10bc0a50(void)

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




// Reference entry 10bc0b50; body size 21 bytes.
#line 1 "ENTRY_10bc0b50"

void __thiscall Recovered_Bulk::m_FUN_10bc0b50(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 10bc0c00; body size 21 bytes.
#line 1 "ENTRY_10bc0c00"

void __thiscall Recovered_Bulk::m_FUN_10bc0c00(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 10bc0c20; body size 22 bytes.
#line 1 "ENTRY_10bc0c20"

__declspec(naked) void FUN_10bc0c20(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push 3
  __asm mov ecx, dword ptr [eax]
  __asm add ecx, 0xf4
  __asm call LAB_10012896
  __asm ret 4
}




// Reference entry 10bc0c40; body size 38 bytes.
#line 1 "ENTRY_10bc0c40"

__declspec(naked) void FUN_10bc0c40(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm push dword ptr [ecx + 4]
  __asm mov esi, dword ptr [eax]
  __asm lea ecx, [esi + 0xe8]
  __asm call LAB_1000e3db
  __asm push 2
  __asm lea ecx, [esi + 0xf4]
  __asm call LAB_10012896
  __asm pop esi
  __asm ret 4
}




// Reference entry 10bc1530; body size 31 bytes.
#line 1 "ENTRY_10bc1530"

int * FUN_10bc1530(int *param_1)

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


// Reference entry 10bc1940; body size 61 bytes.
#line 1 "ENTRY_10bc1940"

__declspec(naked) void FUN_10bc1940(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x12 __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x0c
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
}




// Reference entry 10bc1990; body size 33 bytes.
#line 1 "ENTRY_10bc1990"

void __fastcall FUN_10bc1990(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_102e6ae0((int)(param_1),(int)(*(undefined4 *)(iVar1 + 4)));
  *(int*)(iVar1 + 4) = (int)(iVar1);
  *(int*)iVar1 = (int)((int)(iVar1));
  *(int*)(iVar1 + 8) = (int)(iVar1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 10bc1c60; body size 21 bytes.
#line 1 "ENTRY_10bc1c60"

SCStr * __stdcall FUN_10bc1c60(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("AppInterop");
  return (SCStr *)(param_1);
}


// Reference entry 10bc1c80; body size 21 bytes.
#line 1 "ENTRY_10bc1c80"

SCStr * __stdcall FUN_10bc1c80(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryDefault");
  return (SCStr *)(param_1);
}


// Reference entry 10bc1ca0; body size 20 bytes.
#line 1 "ENTRY_10bc1ca0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10bc1ca0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 8));
  return (SCStr *)(param_2);
}


// Reference entry 10bc3b90; body size 30 bytes.
#line 1 "ENTRY_10bc3b90"

void __thiscall Recovered_Bulk::m_FUN_10bc3b90(int param_2)
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


// Reference entry 10bc3c90; body size 41 bytes.
#line 1 "ENTRY_10bc3c90"

__declspec(naked) void FUN_10bc3c90(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x0f
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




// Reference entry 10bc4250; body size 45 bytes.
#line 1 "ENTRY_10bc4250"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10bc4250(byte param_2)
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


// Reference entry 10bc4310; body size 33 bytes.
#line 1 "ENTRY_10bc4310"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10bc4310(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10bc46a0; body size 30 bytes.
#line 1 "ENTRY_10bc46a0"

void __thiscall Recovered_Bulk::m_FUN_10bc46a0(int param_2)
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


// Reference entry 10bc47c0; body size 28 bytes.
#line 1 "ENTRY_10bc47c0"

void __fastcall FUN_10bc47c0(int *param_1)

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


// Reference entry 10bc4800; body size 21 bytes.
#line 1 "ENTRY_10bc4800"

SCStr * __stdcall FUN_10bc4800(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("nfc_manager");
  return (SCStr *)(param_1);
}


// Reference entry 10bc5190; body size 46 bytes.
#line 1 "ENTRY_10bc5190"

__declspec(naked) void FUN_10bc5190(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm cmp byte ptr [esi + 0x24], 0
  __asm _emit 0x75 __asm _emit 0x04
  __asm xor al, al
  __asm pop esi
  __asm ret
  __asm lea eax, [esi + 8]
  __asm push offset LAB_11912468
  __asm push eax
  __asm call LAB_10018bab
  __asm mov ecx, dword ptr [esi + 0x10]
  __asm add esp, 8
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x18]
  __asm mov byte ptr [esi + 0x24], 0
  __asm mov al, 1
  __asm pop esi
  __asm ret
}




// Reference entry 10bc5bf0; body size 30 bytes.
#line 1 "ENTRY_10bc5bf0"

void __thiscall Recovered_Bulk::m_FUN_10bc5bf0(int param_2)
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


// Reference entry 10bc60c0; body size 41 bytes.
#line 1 "ENTRY_10bc60c0"

__declspec(naked) void FUN_10bc60c0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x0f
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




// Reference entry 10bc6100; body size 41 bytes.
#line 1 "ENTRY_10bc6100"

__declspec(naked) void FUN_10bc6100(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x0f
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




// Reference entry 10bc6690; body size 19 bytes.
#line 1 "ENTRY_10bc6690"

void __fastcall FUN_10bc6690(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10bc6860; body size 33 bytes.
#line 1 "ENTRY_10bc6860"

__declspec(naked) void FUN_10bc6860(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x15
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




// Reference entry 10bc6890; body size 33 bytes.
#line 1 "ENTRY_10bc6890"

__declspec(naked) void FUN_10bc6890(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x15
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




// Reference entry 10bc68f0; body size 33 bytes.
#line 1 "ENTRY_10bc68f0"

__declspec(naked) void FUN_10bc68f0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x15
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




// Reference entry 10bc6920; body size 33 bytes.
#line 1 "ENTRY_10bc6920"

__declspec(naked) void FUN_10bc6920(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x15
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




// Reference entry 10bc6b30; body size 18 bytes.
#line 1 "ENTRY_10bc6b30"

void __fastcall FUN_10bc6b30(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0x30);
  }
  return;
}


// Reference entry 10bc6f60; body size 45 bytes.
#line 1 "ENTRY_10bc6f60"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10bc6f60(byte param_2)
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


// Reference entry 10bc6fa0; body size 45 bytes.
#line 1 "ENTRY_10bc6fa0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10bc6fa0(byte param_2)
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


// Reference entry 10bc6fe0; body size 60 bytes.
#line 1 "ENTRY_10bc6fe0"

__declspec(naked) void FUN_10bc6fe0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x2c]
  __asm push edi
  __asm lea edi, [esi + 8]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x15
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, edi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test byte ptr [esp + 0xc], 1
  __asm _emit 0x74 __asm _emit 0x0b
  __asm push 0x30
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm pop edi
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}




// Reference entry 10bc7030; body size 45 bytes.
#line 1 "ENTRY_10bc7030"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10bc7030(byte param_2)
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


// Reference entry 10bc7070; body size 45 bytes.
#line 1 "ENTRY_10bc7070"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10bc7070(byte param_2)
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


// Reference entry 10bc7250; body size 33 bytes.
#line 1 "ENTRY_10bc7250"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10bc7250(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10bc7290; body size 19 bytes.
#line 1 "ENTRY_10bc7290"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_10bc7290(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 10bc7350; body size 21 bytes.
#line 1 "ENTRY_10bc7350"

void __thiscall Recovered_Bulk::m_FUN_10bc7350(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 10bc7370; body size 21 bytes.
#line 1 "ENTRY_10bc7370"

void __thiscall Recovered_Bulk::m_FUN_10bc7370(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 10bc7390; body size 58 bytes.
#line 1 "ENTRY_10bc7390"

__declspec(naked) void FUN_10bc7390(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x2c]
  __asm push edi
  __asm lea edi, [esi + 8]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x15
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, edi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm cmp byte ptr [esp + 0xc], 0
  __asm _emit 0x74 __asm _emit 0x0b
  __asm push 0x30
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm pop edi
  __asm pop esi
  __asm ret 4
}




// Reference entry 10bc7450; body size 39 bytes.
#line 1 "ENTRY_10bc7450"

__declspec(naked) void FUN_10bc7450(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov ecx, dword ptr [ecx + 0x2c]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [esp + 4], eax
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x11
  __asm push dword ptr [esp + 8]
  __asm mov eax, dword ptr [ecx]
  __asm lea edx, [esp + 8]
  __asm push edx
  __asm call dword ptr [eax + 8]
  __asm ret 8
  __asm call LAB_1148a05a
}




// Reference entry 10bc7530; body size 19 bytes.
#line 1 "ENTRY_10bc7530"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_10bc7530(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 10bc7650; body size 33 bytes.
#line 1 "ENTRY_10bc7650"

__declspec(naked) void FUN_10bc7650(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x15
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




// Reference entry 10bc7680; body size 33 bytes.
#line 1 "ENTRY_10bc7680"

__declspec(naked) void FUN_10bc7680(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x15
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




// Reference entry 10bc76d0; body size 30 bytes.
#line 1 "ENTRY_10bc76d0"

void __thiscall Recovered_Bulk::m_FUN_10bc76d0(int param_2)
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


// Reference entry 10bc78f0; body size 31 bytes.
#line 1 "ENTRY_10bc78f0"

__declspec(naked) void FUN_10bc78f0(void)

{
  __asm push ecx
  __asm push esi
  __asm push 0
  __asm mov esi, ecx
  __asm push esi
  __asm push ecx
  __asm mov ecx, esp
  __asm push offset LAB_11880e50
  __asm call LAB_1005273e
  __asm mov ecx, dword ptr [esi + 0x40]
  __asm call LAB_10013543
  __asm pop esi
  __asm pop ecx
  __asm ret
}




// Reference entry 10bc79f0; body size 35 bytes.
#line 1 "ENTRY_10bc79f0"

__declspec(naked) void FUN_10bc79f0(void)

{
  __asm mov eax, dword ptr [ecx + 8]
  __asm mov ecx, dword ptr [eax + 0x3c]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x16
  __asm mov eax, dword ptr [esp + 4]
  __asm lea edx, [esp + 4]
  __asm push dword ptr [esp + 8]
  __asm mov dword ptr [esp + 8], eax
  __asm mov eax, dword ptr [ecx]
  __asm push edx
  __asm call dword ptr [eax + 8]
  __asm ret 8
}




// Reference entry 10bc7a20; body size 28 bytes.
#line 1 "ENTRY_10bc7a20"

void __fastcall FUN_10bc7a20(int *param_1)

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


// Reference entry 10bc7c10; body size 25 bytes.
#line 1 "ENTRY_10bc7c10"

__declspec(naked) void FUN_10bc7c10(void)

{
  __asm mov ecx, dword ptr [ecx + 0x50]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}




// Reference entry 10bc81e0; body size 43 bytes.
#line 1 "ENTRY_10bc81e0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10bc81e0(SCStr *param_2)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x38) != (int *)((0x0))) {
    ((SCVtbl_9_1*)(*(int **)(param_1 + 0x38)))->v((int)(param_2));
    return (SCStr *)(param_2);
  }
  ((SCStr *)(param_2))->int_allocRep((char *)0x0);
  return (SCStr *)(param_2);
}


// Reference entry 10bc8830; body size 28 bytes.
#line 1 "ENTRY_10bc8830"

__declspec(naked) void FUN_10bc8830(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov eax, dword ptr [esi + 0x30]
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x10
  __asm push eax
  __asm lea ecx, [esi + 0x10]
  __asm call LAB_1001ec63
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x30 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret
}




// Reference entry 10bc8bb0; body size 24 bytes.
#line 1 "ENTRY_10bc8bb0"

__declspec(naked) void FUN_10bc8bb0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x38]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x0e
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x18]
  __asm call eax
  __asm test al, al
  __asm _emit 0x74 __asm _emit 0x03
  __asm mov al, 1
  __asm ret
  __asm xor al, al
  __asm ret
}




// Reference entry 10bc8bd0; body size 24 bytes.
#line 1 "ENTRY_10bc8bd0"

__declspec(naked) void FUN_10bc8bd0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x38]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x0e
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x14]
  __asm call eax
  __asm test al, al
  __asm _emit 0x74 __asm _emit 0x03
  __asm mov al, 1
  __asm ret
  __asm xor al, al
  __asm ret
}




// Reference entry 10bc8e80; body size 18 bytes.
#line 1 "ENTRY_10bc8e80"

__declspec(naked) void FUN_10bc8e80(void)

{
  __asm cmp dword ptr [esp + 4], 0
  __asm _emit 0x75 __asm _emit 0x08
  __asm add ecx, -0x28
  __asm call LAB_10094d32
  __asm ret 4
}




// Reference entry 10bc9060; body size 61 bytes.
#line 1 "ENTRY_10bc9060"

__declspec(naked) void FUN_10bc9060(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm cmp eax, dword ptr [esi + 0x24]
  __asm _emit 0x75 __asm _emit 0x0c
  __asm lea ecx, [esi - 0xc]
  __asm call LAB_10094d32
  __asm pop esi
  __asm ret 4
  __asm cmp eax, dword ptr [esi + 0x20]
  __asm _emit 0x75 __asm _emit 0x1c
  __asm push offset LAB_1191290c
  __asm push 1
  __asm push offset LAB_119126b8
  __asm call LAB_100238df
  __asm add esp, 0xc
  __asm lea ecx, [esi - 0xc]
  __asm call LAB_1008bb15
  __asm pop esi
  __asm ret 4
}




// Reference entry 10bc9780; body size 22 bytes.
#line 1 "ENTRY_10bc9780"

__declspec(naked) void FUN_10bc9780(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x0b
  __asm mov ecx, dword ptr [ecx + 0x40]
  __asm push 0
  __asm push eax
  __asm call LAB_10037bc8
  __asm ret 4
}




// Reference entry 10bc97a0; body size 23 bytes.
#line 1 "ENTRY_10bc97a0"

__declspec(naked) void FUN_10bc97a0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x0c
  __asm mov ecx, dword ptr [ecx + 0x40]
  __asm mov dword ptr [esp + 4], eax
  __asm jmp LAB_100373d5
  __asm ret 4
}




// Reference entry 10bc9ac0; body size 41 bytes.
#line 1 "ENTRY_10bc9ac0"

__declspec(naked) void FUN_10bc9ac0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x0f
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




// Reference entry 10bc9fe0; body size 32 bytes.
#line 1 "ENTRY_10bc9fe0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10bc9fe0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10bc9d70();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x40);
  }
  return (undefined4)(param_1);
}


// Reference entry 10bcb100; body size 46 bytes.
#line 1 "ENTRY_10bcb100"

__declspec(naked) void FUN_10bcb100(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm xor edi, edi
  __asm mov eax, dword ptr [esi + 0x24]
  __asm sub eax, dword ptr [esi + 0x20]
  __asm sar eax, 2
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x18
  __asm mov eax, dword ptr [esi + 0x20]
  __asm mov ecx, dword ptr [eax + edi*4]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax]
  __asm mov eax, dword ptr [esi + 0x24]
  __asm inc edi
  __asm sub eax, dword ptr [esi + 0x20]
  __asm sar eax, 2
  __asm cmp edi, eax
  __asm _emit 0x72 __asm _emit 0xe8
  __asm pop edi
  __asm pop esi
  __asm ret
}




// Reference entry 10bcb200; body size 36 bytes.
#line 1 "ENTRY_10bcb200"

void __fastcall FUN_10bcb200(int param_1)

{
  if (*(char *)(param_1 + 0x24) == '\0') {
    *(undefined1*)(param_1 + 0x24) = (undefined1)(1);
    thunk_FUN_10bcad90();
    thunk_FUN_112af4e0("SCDHS",2,"no cloud support");
  }
  return;
}


// Reference entry 10bcb4d0; body size 25 bytes.
#line 1 "ENTRY_10bcb4d0"

undefined1 __stdcall FUN_10bcb4d0(unsigned int recovered_unused_stack_0)

{
  thunk_FUN_112af4e0("SCDHS",2,"no cloud support");
  return (undefined1)(0);
}


// Reference entry 10bcb570; body size 46 bytes.
#line 1 "ENTRY_10bcb570"

__declspec(naked) void FUN_10bcb570(void)

{
  __asm push esi
  __asm call LAB_10082d2b
  __asm mov esi, eax
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x20
  __asm mov ecx, dword ptr [esi + 0x3c]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x19
  __asm call LAB_10068caf
  __asm mov ecx, dword ptr [esi + 0x3c]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x06
  __asm mov eax, dword ptr [ecx]
  __asm push 1
  __asm call dword ptr [eax]
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x3c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret
}




// Reference entry 10bcb620; body size 37 bytes.
#line 1 "ENTRY_10bcb620"

__declspec(naked) void FUN_10bcb620(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x3c]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x19
  __asm call LAB_10068caf
  __asm mov ecx, dword ptr [esi + 0x3c]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x06
  __asm mov eax, dword ptr [ecx]
  __asm push 1
  __asm call dword ptr [eax]
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x3c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret
}




// Reference entry 10bcecc0; body size 33 bytes.
#line 1 "ENTRY_10bcecc0"

void __thiscall Recovered_Bulk::m_FUN_10bcecc0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_10bceec0<>(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 10bcecf0; body size 33 bytes.
#line 1 "ENTRY_10bcecf0"

void __thiscall Recovered_Bulk::m_FUN_10bcecf0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_10bcef80<>(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 10bced20; body size 33 bytes.
#line 1 "ENTRY_10bced20"

void __thiscall Recovered_Bulk::m_FUN_10bced20(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_10bcf040<>(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 10bced50; body size 33 bytes.
#line 1 "ENTRY_10bced50"

void __thiscall Recovered_Bulk::m_FUN_10bced50(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_10bcf100<>(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x30);
  return;
}


// Reference entry 10bced80; body size 33 bytes.
#line 1 "ENTRY_10bced80"

void __thiscall Recovered_Bulk::m_FUN_10bced80(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_10bcf160<>(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 10bcedb0; body size 33 bytes.
#line 1 "ENTRY_10bcedb0"

void __thiscall Recovered_Bulk::m_FUN_10bcedb0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_10bcf230<>(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 10bcede0; body size 33 bytes.
#line 1 "ENTRY_10bcede0"

void __thiscall Recovered_Bulk::m_FUN_10bcede0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_10bcf300<>(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 10bcee70; body size 57 bytes.
#line 1 "ENTRY_10bcee70"

__declspec(naked) void FUN_10bcee70(void)

{
  __asm push ebx
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x10]
  __asm mov ebx, ecx
  __asm cmp byte ptr [esi + 0xd], 0
  __asm _emit 0x75 __asm _emit 0x26
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x10]
  __asm push dword ptr [esi + 8]
  __asm mov ecx, ebx
  __asm push edi
  __asm call LAB_1001b41e
  __asm mov eax, esi
  __asm mov esi, dword ptr [esi]
  __asm push 0x1c
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm cmp byte ptr [esi + 0xd], 0
  __asm _emit 0x74 __asm _emit 0xe0
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm ret 8
}




// Reference entry 10bcf3d0; body size 57 bytes.
#line 1 "ENTRY_10bcf3d0"

__declspec(naked) void FUN_10bcf3d0(void)

{
  __asm push ebx
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x10]
  __asm mov ebx, ecx
  __asm cmp byte ptr [esi + 0xd], 0
  __asm _emit 0x75 __asm _emit 0x26
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x10]
  __asm push dword ptr [esi + 8]
  __asm mov ecx, ebx
  __asm push edi
  __asm call LAB_1005114f
  __asm mov eax, esi
  __asm mov esi, dword ptr [esi]
  __asm push 0x14
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm cmp byte ptr [esi + 0xd], 0
  __asm _emit 0x74 __asm _emit 0xe0
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm ret 8
}




// Reference entry 10bcf5a0; body size 49 bytes.
#line 1 "ENTRY_10bcf5a0"

__declspec(naked) void FUN_10bcf5a0(void)

{
  __asm sub esp, 0xc
  __asm push esi
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x18]
  __asm lea eax, [esp + 8]
  __asm push edi
  __asm push eax
  __asm mov esi, ecx
  __asm call LAB_10060f0f
  __asm mov eax, dword ptr [esp + 0x10]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm _emit 0x75 __asm _emit 0x07
  __asm mov ecx, dword ptr [edi]
  __asm cmp ecx, dword ptr [eax + 0x10]
  __asm _emit 0x73 __asm _emit 0x02
  __asm mov eax, dword ptr [esi]
  __asm pop edi
  __asm pop esi
  __asm add esp, 0xc
  __asm ret 4
}




// Reference entry 10bcf5e0; body size 60 bytes.
#line 1 "ENTRY_10bcf5e0"

__declspec(naked) void FUN_10bcf5e0(void)

{
  __asm sub esp, 0xc
  __asm push esi
  __asm push edi
  __asm push dword ptr [esp + 0x18]
  __asm lea eax, [esp + 0xc]
  __asm mov edi, ecx
  __asm push eax
  __asm call LAB_10015492
  __asm mov esi, dword ptr [esp + 0x10]
  __asm cmp byte ptr [esi + 0xd], 0
  __asm _emit 0x75 __asm _emit 0x13
  __asm mov ecx, dword ptr [esp + 0x18]
  __asm lea edx, [esi + 0x10]
  __asm push edx
  __asm call LAB_10070fbd
  __asm test al, al
  __asm mov eax, esi
  __asm _emit 0x74 __asm _emit 0x02
  __asm mov eax, dword ptr [edi]
  __asm pop edi
  __asm pop esi
  __asm add esp, 0xc
  __asm ret 4
}




// Reference entry 10bcf630; body size 60 bytes.
#line 1 "ENTRY_10bcf630"

__declspec(naked) void FUN_10bcf630(void)

{
  __asm sub esp, 0xc
  __asm push esi
  __asm push edi
  __asm push dword ptr [esp + 0x18]
  __asm lea eax, [esp + 0xc]
  __asm mov edi, ecx
  __asm push eax
  __asm call LAB_10064088
  __asm mov esi, dword ptr [esp + 0x10]
  __asm cmp byte ptr [esi + 0xd], 0
  __asm _emit 0x75 __asm _emit 0x13
  __asm mov ecx, dword ptr [esp + 0x18]
  __asm lea edx, [esi + 0x10]
  __asm push edx
  __asm call LAB_10070fbd
  __asm test al, al
  __asm mov eax, esi
  __asm _emit 0x74 __asm _emit 0x02
  __asm mov eax, dword ptr [edi]
  __asm pop edi
  __asm pop esi
  __asm add esp, 0xc
  __asm ret 4
}




// Reference entry 10bcf680; body size 60 bytes.
#line 1 "ENTRY_10bcf680"

__declspec(naked) void FUN_10bcf680(void)

{
  __asm sub esp, 0xc
  __asm push esi
  __asm push edi
  __asm push dword ptr [esp + 0x18]
  __asm lea eax, [esp + 0xc]
  __asm mov edi, ecx
  __asm push eax
  __asm call LAB_1002d97a
  __asm mov esi, dword ptr [esp + 0x10]
  __asm cmp byte ptr [esi + 0xd], 0
  __asm _emit 0x75 __asm _emit 0x13
  __asm mov ecx, dword ptr [esp + 0x18]
  __asm lea edx, [esi + 0x10]
  __asm push edx
  __asm call LAB_10070fbd
  __asm test al, al
  __asm mov eax, esi
  __asm _emit 0x74 __asm _emit 0x02
  __asm mov eax, dword ptr [edi]
  __asm pop edi
  __asm pop esi
  __asm add esp, 0xc
  __asm ret 4
}




// Reference entry 10bcf6d0; body size 49 bytes.
#line 1 "ENTRY_10bcf6d0"

__declspec(naked) void FUN_10bcf6d0(void)

{
  __asm sub esp, 0xc
  __asm push esi
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x18]
  __asm lea eax, [esp + 8]
  __asm push edi
  __asm push eax
  __asm mov esi, ecx
  __asm call LAB_1009700f
  __asm mov eax, dword ptr [esp + 0x10]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm _emit 0x75 __asm _emit 0x07
  __asm mov ecx, dword ptr [edi]
  __asm cmp ecx, dword ptr [eax + 0x10]
  __asm _emit 0x7d __asm _emit 0x02
  __asm mov eax, dword ptr [esi]
  __asm pop edi
  __asm pop esi
  __asm add esp, 0xc
  __asm ret 4
}




// Reference entry 10bcf710; body size 49 bytes.
#line 1 "ENTRY_10bcf710"

__declspec(naked) void FUN_10bcf710(void)

{
  __asm sub esp, 0xc
  __asm push esi
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x18]
  __asm lea eax, [esp + 8]
  __asm push edi
  __asm push eax
  __asm mov esi, ecx
  __asm call LAB_1007322c
  __asm mov eax, dword ptr [esp + 0x10]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm _emit 0x75 __asm _emit 0x07
  __asm mov ecx, dword ptr [edi]
  __asm cmp ecx, dword ptr [eax + 0x10]
  __asm _emit 0x7d __asm _emit 0x02
  __asm mov eax, dword ptr [esi]
  __asm pop edi
  __asm pop esi
  __asm add esp, 0xc
  __asm ret 4
}




// Reference entry 10bcf750; body size 49 bytes.
#line 1 "ENTRY_10bcf750"

__declspec(naked) void FUN_10bcf750(void)

{
  __asm sub esp, 0xc
  __asm push esi
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x18]
  __asm lea eax, [esp + 8]
  __asm push edi
  __asm push eax
  __asm mov esi, ecx
  __asm call LAB_10021f67
  __asm mov eax, dword ptr [esp + 0x10]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm _emit 0x75 __asm _emit 0x07
  __asm mov ecx, dword ptr [edi]
  __asm cmp ecx, dword ptr [eax + 0x10]
  __asm _emit 0x7d __asm _emit 0x02
  __asm mov eax, dword ptr [esi]
  __asm pop edi
  __asm pop esi
  __asm add esp, 0xc
  __asm ret 4
}




// Reference entry 10bcf790; body size 49 bytes.
#line 1 "ENTRY_10bcf790"

__declspec(naked) void FUN_10bcf790(void)

{
  __asm sub esp, 0xc
  __asm push esi
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x18]
  __asm lea eax, [esp + 8]
  __asm push edi
  __asm push eax
  __asm mov esi, ecx
  __asm call LAB_1005ddcd
  __asm mov eax, dword ptr [esp + 0x10]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm _emit 0x75 __asm _emit 0x07
  __asm mov ecx, dword ptr [edi]
  __asm cmp ecx, dword ptr [eax + 0x10]
  __asm _emit 0x7d __asm _emit 0x02
  __asm mov eax, dword ptr [esi]
  __asm pop edi
  __asm pop esi
  __asm add esp, 0xc
  __asm ret 4
}




// Reference entry 10bcf7d0; body size 49 bytes.
#line 1 "ENTRY_10bcf7d0"

__declspec(naked) void FUN_10bcf7d0(void)

{
  __asm sub esp, 0xc
  __asm push esi
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x18]
  __asm lea eax, [esp + 8]
  __asm push edi
  __asm push eax
  __asm mov esi, ecx
  __asm call LAB_1004efc6
  __asm mov eax, dword ptr [esp + 0x10]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm _emit 0x75 __asm _emit 0x07
  __asm mov ecx, dword ptr [edi]
  __asm cmp ecx, dword ptr [eax + 0x10]
  __asm _emit 0x7d __asm _emit 0x02
  __asm mov eax, dword ptr [esi]
  __asm pop edi
  __asm pop esi
  __asm add esp, 0xc
  __asm ret 4
}




// Reference entry 10bd1bb0; body size 30 bytes.
#line 1 "ENTRY_10bd1bb0"

void __thiscall Recovered_Bulk::m_FUN_10bd1bb0(int param_2)
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


// Reference entry 10bd27a0; body size 59 bytes.
#line 1 "ENTRY_10bd27a0"

__declspec(naked) void FUN_10bd27a0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [esi + 4]
  __asm cmp edi, dword ptr [esi + 8]
  __asm _emit 0x74 __asm _emit 0x20
  __asm mov edx, dword ptr [esp + 0xc]
  __asm mov eax, dword ptr [edx]
  __asm mov dword ptr [edi], eax
  __asm mov ecx, dword ptr [edx + 4]
  __asm mov dword ptr [edi + 4], ecx
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm add dword ptr [esi + 4], 8
  __asm pop edi
  __asm pop esi
  __asm ret 4
  __asm push dword ptr [esp + 0xc]
  __asm push edi
  __asm call LAB_100641b9
  __asm pop edi
  __asm pop esi
  __asm ret 4
}




// Reference entry 10bd31b0; body size 41 bytes.
#line 1 "ENTRY_10bd31b0"

__declspec(naked) void FUN_10bd31b0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x0f
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




// Reference entry 10bd3220; body size 41 bytes.
#line 1 "ENTRY_10bd3220"

__declspec(naked) void FUN_10bd3220(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x0f
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




// Reference entry 10bd3280; body size 24 bytes.
#line 1 "ENTRY_10bd3280"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10bd3280(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10bd33c0; body size 48 bytes.
#line 1 "ENTRY_10bd33c0"

__declspec(naked) void FUN_10bd33c0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x1c
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




// Reference entry 10bd3400; body size 48 bytes.
#line 1 "ENTRY_10bd3400"

__declspec(naked) void FUN_10bd3400(void)

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




// Reference entry 10bd3440; body size 48 bytes.
#line 1 "ENTRY_10bd3440"

__declspec(naked) void FUN_10bd3440(void)

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




// Reference entry 10bd3480; body size 48 bytes.
#line 1 "ENTRY_10bd3480"

__declspec(naked) void FUN_10bd3480(void)

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




// Reference entry 10bd3520; body size 48 bytes.
#line 1 "ENTRY_10bd3520"

__declspec(naked) void FUN_10bd3520(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x30
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




// Reference entry 10bd3560; body size 48 bytes.
#line 1 "ENTRY_10bd3560"

__declspec(naked) void FUN_10bd3560(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x1c
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




// Reference entry 10bd35a0; body size 48 bytes.
#line 1 "ENTRY_10bd35a0"

__declspec(naked) void FUN_10bd35a0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x1c
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




// Reference entry 10bd35e0; body size 48 bytes.
#line 1 "ENTRY_10bd35e0"

__declspec(naked) void FUN_10bd35e0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x1c
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




// Reference entry 10bd3620; body size 48 bytes.
#line 1 "ENTRY_10bd3620"

__declspec(naked) void FUN_10bd3620(void)

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




// Reference entry 10bd6260; body size 19 bytes.
#line 1 "ENTRY_10bd6260"

void __fastcall FUN_10bd6260(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 10bd6280; body size 19 bytes.
#line 1 "ENTRY_10bd6280"

void __fastcall FUN_10bd6280(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 10bd62a0; body size 19 bytes.
#line 1 "ENTRY_10bd62a0"

void __fastcall FUN_10bd62a0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 10bd62c0; body size 19 bytes.
#line 1 "ENTRY_10bd62c0"

void __fastcall FUN_10bd62c0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 10bd62e0; body size 19 bytes.
#line 1 "ENTRY_10bd62e0"

void __fastcall FUN_10bd62e0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x30);
  }
  return;
}


// Reference entry 10bd6300; body size 19 bytes.
#line 1 "ENTRY_10bd6300"

void __fastcall FUN_10bd6300(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 10bd6320; body size 19 bytes.
#line 1 "ENTRY_10bd6320"

void __fastcall FUN_10bd6320(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 10bd6340; body size 19 bytes.
#line 1 "ENTRY_10bd6340"

void __fastcall FUN_10bd6340(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 10bd6360; body size 19 bytes.
#line 1 "ENTRY_10bd6360"

void __fastcall FUN_10bd6360(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x14);
  }
  return;
}


// Reference entry 10bd63e0; body size 28 bytes.
#line 1 "ENTRY_10bd63e0"

void __fastcall FUN_10bd63e0(int *param_1)

{
  thunk_FUN_10bceec0<>(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 10bd6410; body size 28 bytes.
#line 1 "ENTRY_10bd6410"

void __fastcall FUN_10bd6410(int *param_1)

{
  thunk_FUN_10bcef80<>(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 10bd6440; body size 28 bytes.
#line 1 "ENTRY_10bd6440"

void __fastcall FUN_10bd6440(int *param_1)

{
  thunk_FUN_10bcf040<>(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 10bd6470; body size 28 bytes.
#line 1 "ENTRY_10bd6470"

void __fastcall FUN_10bd6470(int *param_1)

{
  thunk_FUN_10bcf100<>(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x30);
  return;
}


// Reference entry 10bd64a0; body size 28 bytes.
#line 1 "ENTRY_10bd64a0"

void __fastcall FUN_10bd64a0(int *param_1)

{
  thunk_FUN_10bcf160<>(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 10bd64d0; body size 28 bytes.
#line 1 "ENTRY_10bd64d0"

void __fastcall FUN_10bd64d0(int *param_1)

{
  thunk_FUN_10bcf230<>(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 10bd6500; body size 28 bytes.
#line 1 "ENTRY_10bd6500"

void __fastcall FUN_10bd6500(int *param_1)

{
  thunk_FUN_10bcf300<>(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 10bd6750; body size 38 bytes.
#line 1 "ENTRY_10bd6750"

__declspec(naked) void FUN_10bd6750(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov eax, dword ptr [esi + 4]
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x0b
  __asm lea ecx, [eax + 0x14]
  __asm call LAB_10088bd6
  __asm mov eax, dword ptr [esi + 4]
  __asm pop esi
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x0b
  __asm push 0x30
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret
}




// Reference entry 10bd69a0; body size 19 bytes.
#line 1 "ENTRY_10bd69a0"

void __fastcall FUN_10bd69a0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 10bd69c0; body size 19 bytes.
#line 1 "ENTRY_10bd69c0"

void __fastcall FUN_10bd69c0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 10bd6a00; body size 19 bytes.
#line 1 "ENTRY_10bd6a00"

void __fastcall FUN_10bd6a00(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x30);
  }
  return;
}


// Reference entry 10bd6aa0; body size 17 bytes.
#line 1 "ENTRY_10bd6aa0"

void __fastcall FUN_10bd6aa0(undefined4 *param_1)

{
  thunk_FUN_10bcda40(*param_1,param_1[1],param_1[2]);
  return;
}


// Reference entry 10bd6ac0; body size 17 bytes.
#line 1 "ENTRY_10bd6ac0"

void __fastcall FUN_10bd6ac0(undefined4 *param_1)

{
  thunk_FUN_10bcdb00(*param_1,param_1[1],param_1[2]);
  return;
}


// Reference entry 10bd6b00; body size 28 bytes.
#line 1 "ENTRY_10bd6b00"

void __fastcall FUN_10bd6b00(int *param_1)

{
  thunk_FUN_10bceec0<>(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 10bd6b30; body size 28 bytes.
#line 1 "ENTRY_10bd6b30"

void __fastcall FUN_10bd6b30(int *param_1)

{
  thunk_FUN_10bcef80<>(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 10bd6b60; body size 28 bytes.
#line 1 "ENTRY_10bd6b60"

void __fastcall FUN_10bd6b60(int *param_1)

{
  thunk_FUN_10bcf040<>(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 10bd6b90; body size 28 bytes.
#line 1 "ENTRY_10bd6b90"

void __fastcall FUN_10bd6b90(int *param_1)

{
  thunk_FUN_10bcf100<>(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x30);
  return;
}


// Reference entry 10bd6bc0; body size 28 bytes.
#line 1 "ENTRY_10bd6bc0"

void __fastcall FUN_10bd6bc0(int *param_1)

{
  thunk_FUN_10bcf160<>(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 10bd6bf0; body size 28 bytes.
#line 1 "ENTRY_10bd6bf0"

void __fastcall FUN_10bd6bf0(int *param_1)

{
  thunk_FUN_10bcf230<>(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 10bd6c20; body size 28 bytes.
#line 1 "ENTRY_10bd6c20"

void __fastcall FUN_10bd6c20(int *param_1)

{
  thunk_FUN_10bcf300<>(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 10bd7020; body size 37 bytes.
#line 1 "ENTRY_10bd7020"

__declspec(naked) void FUN_10bd7020(void)

{
  __asm push esi
  __asm lea esi, [ecx + 4]
  __asm mov dword ptr [ecx], LAB_11912bd4
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push dword ptr [eax + 4]
  __asm push esi
  __asm call LAB_10058a5d
  __asm push 0x18
  __asm push dword ptr [esi]
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm pop esi
  __asm ret
}




// Reference entry 10bd8ff0; body size 35 bytes.
#line 1 "ENTRY_10bd8ff0"

__declspec(naked) void FUN_10bd8ff0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm lea ecx, [esi + 4]
  __asm call LAB_10088bd6
  __asm test byte ptr [esp + 8], 1
  __asm _emit 0x74 __asm _emit 0x0b
  __asm push 0x20
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}




// Reference entry 10bd91d0; body size 63 bytes.
#line 1 "ENTRY_10bd91d0"

__declspec(naked) void FUN_10bd91d0(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm lea esi, [edi + 4]
  __asm mov ecx, esi
  __asm mov dword ptr [edi], LAB_11912bd4
  __asm mov eax, dword ptr [esi]
  __asm push dword ptr [eax + 4]
  __asm push esi
  __asm call LAB_10058a5d
  __asm push 0x18
  __asm push dword ptr [esi]
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm test byte ptr [esp + 0xc], 1
  __asm _emit 0x74 __asm _emit 0x0b
  __asm push 0xc
  __asm push edi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm mov eax, edi
  __asm pop edi
  __asm pop esi
  __asm ret 4
}




// Reference entry 10bd92c0; body size 35 bytes.
#line 1 "ENTRY_10bd92c0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10bd92c0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10bd7200();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x94);
  }
  return (undefined4)(param_1);
}


// Reference entry 10bd94a0; body size 25 bytes.
#line 1 "ENTRY_10bd94a0"

__declspec(naked) void FUN_10bd94a0(void)

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




// Reference entry 10bd94c0; body size 25 bytes.
#line 1 "ENTRY_10bd94c0"

__declspec(naked) void FUN_10bd94c0(void)

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




// Reference entry 10bd94e0; body size 25 bytes.
#line 1 "ENTRY_10bd94e0"

__declspec(naked) void FUN_10bd94e0(void)

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




// Reference entry 10bd9500; body size 25 bytes.
#line 1 "ENTRY_10bd9500"

__declspec(naked) void FUN_10bd9500(void)

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




// Reference entry 10bd9520; body size 25 bytes.
#line 1 "ENTRY_10bd9520"

__declspec(naked) void FUN_10bd9520(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x30
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret
}




// Reference entry 10bd9540; body size 25 bytes.
#line 1 "ENTRY_10bd9540"

__declspec(naked) void FUN_10bd9540(void)

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




// Reference entry 10bd9560; body size 25 bytes.
#line 1 "ENTRY_10bd9560"

__declspec(naked) void FUN_10bd9560(void)

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




// Reference entry 10bd9580; body size 25 bytes.
#line 1 "ENTRY_10bd9580"

__declspec(naked) void FUN_10bd9580(void)

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




// Reference entry 10bd95a0; body size 25 bytes.
#line 1 "ENTRY_10bd95a0"

__declspec(naked) void FUN_10bd95a0(void)

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




// Reference entry 10bd9600; body size 30 bytes.
#line 1 "ENTRY_10bd9600"

__declspec(naked) void FUN_10bd9600(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push edi
  __asm push esi
  __asm mov edi, ecx
  __asm call LAB_10033ab9
  __asm mov dword ptr [edi], eax
  __asm mov dword ptr [edi + 4], eax
  __asm lea eax, [eax + esi*4]
  __asm mov dword ptr [edi + 8], eax
  __asm pop edi
  __asm pop esi
  __asm ret 4
}




// Reference entry 10bd9e70; body size 20 bytes.
#line 1 "ENTRY_10bd9e70"

void __thiscall Recovered_Bulk::m_FUN_10bd9e70(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10bcda40(param_2,param_3,param_1);
  return;
}


// Reference entry 10bd9e90; body size 20 bytes.
#line 1 "ENTRY_10bd9e90"

void __thiscall Recovered_Bulk::m_FUN_10bd9e90(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10bcdb00(param_2,param_3,param_1);
  return;
}


// Reference entry 10bddec0; body size 30 bytes.
#line 1 "ENTRY_10bddec0"

void __thiscall Recovered_Bulk::m_FUN_10bddec0(int param_2)
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


// Reference entry 10bdee90; body size 40 bytes.
#line 1 "ENTRY_10bdee90"

__declspec(naked) void FUN_10bdee90(void)

{
  __asm push edi
  __asm mov edi, ecx
  __asm call LAB_1001c9c2
  __asm mov eax, dword ptr [eax + 0x4c]
  __asm cmp dword ptr [eax + 0x6c], 3
  __asm _emit 0x74 __asm _emit 0x15
  __asm push esi
  __asm mov esi, 1
  __asm push esi
  __asm mov ecx, edi
  __asm call LAB_1003d820
  __asm inc esi
  __asm cmp esi, 3
  __asm _emit 0x7e __asm _emit 0xf2
  __asm pop esi
  __asm pop edi
  __asm ret
}




// Reference entry 10bdf8a0; body size 40 bytes.
#line 1 "ENTRY_10bdf8a0"

__declspec(naked) void FUN_10bdf8a0(void)

{
  __asm push edi
  __asm mov edi, ecx
  __asm call LAB_1001c9c2
  __asm mov eax, dword ptr [eax + 0x4c]
  __asm cmp dword ptr [eax + 0x6c], 3
  __asm _emit 0x74 __asm _emit 0x15
  __asm push esi
  __asm mov esi, 1
  __asm push esi
  __asm mov ecx, edi
  __asm call LAB_1000f4d9
  __asm inc esi
  __asm cmp esi, 3
  __asm _emit 0x7e __asm _emit 0xf2
  __asm pop esi
  __asm pop edi
  __asm ret
}




// Reference entry 10be0220; body size 40 bytes.
#line 1 "ENTRY_10be0220"

__declspec(naked) void FUN_10be0220(void)

{
  __asm push edi
  __asm mov edi, ecx
  __asm call LAB_1001c9c2
  __asm mov eax, dword ptr [eax + 0x4c]
  __asm cmp dword ptr [eax + 0x6c], 3
  __asm _emit 0x74 __asm _emit 0x15
  __asm push esi
  __asm mov esi, 1
  __asm push esi
  __asm mov ecx, edi
  __asm call LAB_1001ec13
  __asm inc esi
  __asm cmp esi, 3
  __asm _emit 0x7e __asm _emit 0xf2
  __asm pop esi
  __asm pop edi
  __asm ret
}




// Reference entry 10be1150; body size 33 bytes.
#line 1 "ENTRY_10be1150"

void __fastcall FUN_10be1150(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_10bceec0<>(param_1,*(undefined4 *)(iVar1 + 4));
  *(int*)(iVar1 + 4) = (int)(iVar1);
  *(int*)iVar1 = (int)((int)(iVar1));
  *(int*)(iVar1 + 8) = (int)(iVar1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 10be1180; body size 33 bytes.
#line 1 "ENTRY_10be1180"

void __fastcall FUN_10be1180(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_10bcf040<>(param_1,*(undefined4 *)(iVar1 + 4));
  *(int*)(iVar1 + 4) = (int)(iVar1);
  *(int*)iVar1 = (int)((int)(iVar1));
  *(int*)(iVar1 + 8) = (int)(iVar1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 10be11d0; body size 24 bytes.
#line 1 "ENTRY_10be11d0"

void __fastcall FUN_10be11d0(undefined4 *param_1)

{
  thunk_FUN_10bcda40(*param_1,param_1[1],param_1);
  param_1[1] = (undefined4)(*param_1);
  return;
}


// Reference entry 10be11f0; body size 24 bytes.
#line 1 "ENTRY_10be11f0"

void __fastcall FUN_10be11f0(undefined4 *param_1)

{
  thunk_FUN_10352990(*param_1,param_1[1],param_1);
  param_1[1] = (undefined4)(*param_1);
  return;
}


// Reference entry 10be1210; body size 24 bytes.
#line 1 "ENTRY_10be1210"

void __fastcall FUN_10be1210(undefined4 *param_1)

{
  thunk_FUN_10bcdb00(*param_1,param_1[1],param_1);
  param_1[1] = (undefined4)(*param_1);
  return;
}


// Reference entry 10be1230; body size 24 bytes.
#line 1 "ENTRY_10be1230"

void __fastcall FUN_10be1230(undefined4 *param_1)

{
  thunk_FUN_10352a90(*param_1,param_1[1],param_1);
  param_1[1] = (undefined4)(*param_1);
  return;
}


// Reference entry 10be1cc0; body size 59 bytes.
#line 1 "ENTRY_10be1cc0"

__declspec(naked) void FUN_10be1cc0(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm lea ecx, [eax + eax*2]
  __asm mov eax, dword ptr [esp + 4]
  __asm shl ecx, 2
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x12
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x77 __asm _emit 0x0f
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret 8
  __asm call dword ptr [LAB_122fc888]
}




// Reference entry 10be1d10; body size 60 bytes.
#line 1 "ENTRY_10be1d10"

__declspec(naked) void FUN_10be1d10(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0xc5 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x12
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x77 __asm _emit 0x0f
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret 8
  __asm call dword ptr [LAB_122fc888]
}




// Reference entry 10be2040; body size 28 bytes.
#line 1 "ENTRY_10be2040"

void __fastcall FUN_10be2040(int *param_1)

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


// Reference entry 10be5040; body size 27 bytes.
#line 1 "ENTRY_10be5040"

__declspec(naked) void FUN_10be5040(void)

{
  __asm call LAB_1004ec47
  __asm mov ecx, dword ptr [esp + 4]
  __asm add eax, 0xe1
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}




// Reference entry 10be6cf0; body size 46 bytes.
#line 1 "ENTRY_10be6cf0"

__declspec(naked) void FUN_10be6cf0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp eax, 3
  __asm _emit 0x75 __asm _emit 0x06
  __asm cmp byte ptr [ecx + 1], 0
  __asm _emit 0xeb __asm _emit 0x13
  __asm cmp eax, 1
  __asm _emit 0x75 __asm _emit 0x05
  __asm cmp byte ptr [ecx], 0
  __asm _emit 0xeb __asm _emit 0x09
  __asm cmp eax, 2
  __asm _emit 0x75 __asm _emit 0x0b
  __asm cmp byte ptr [ecx + 2], 0
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov al, 1
  __asm ret 4
  __asm xor al, al
  __asm ret 4
}




// Reference entry 10be9e80; body size 59 bytes.
#line 1 "ENTRY_10be9e80"

__declspec(naked) void FUN_10be9e80(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [esi + 4]
  __asm cmp edi, dword ptr [esi + 8]
  __asm _emit 0x74 __asm _emit 0x20
  __asm mov edx, dword ptr [esp + 0xc]
  __asm mov eax, dword ptr [edx]
  __asm mov dword ptr [edi], eax
  __asm mov ecx, dword ptr [edx + 4]
  __asm mov dword ptr [edi + 4], ecx
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm add dword ptr [esi + 4], 8
  __asm pop edi
  __asm pop esi
  __asm ret 4
  __asm push dword ptr [esp + 0xc]
  __asm push edi
  __asm call LAB_100641b9
  __asm pop edi
  __asm pop esi
  __asm ret 4
}




// Reference entry 10bed2a0; body size 60 bytes.
#line 1 "ENTRY_10bed2a0"

__declspec(naked) void FUN_10bed2a0(void)

{
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 8]
  __asm push esi
  __asm mov esi, dword ptr [ebx]
  __asm cmp esi, dword ptr [ebx + 4]
  __asm _emit 0x74 __asm _emit 0x29
  __asm push edi
  __asm nop
  __asm mov edi, dword ptr [esi]
  __asm test edi, edi
  __asm _emit 0x74 __asm _emit 0x0f
  __asm mov ecx, edi
  __asm call LAB_1008e40f
  __asm mov eax, dword ptr [edi]
  __asm mov ecx, edi
  __asm push 1
  __asm call dword ptr [eax]
  __asm add esi, 4
  __asm cmp esi, dword ptr [ebx + 4]
  __asm _emit 0x75 __asm _emit 0xe3
  __asm mov eax, dword ptr [ebx]
  __asm pop edi
  __asm pop esi
  __asm mov dword ptr [ebx + 4], eax
  __asm pop ebx
  __asm ret
  __asm mov dword ptr [ebx + 4], esi
  __asm pop esi
  __asm pop ebx
  __asm ret
}




// Reference entry 10bedc30; body size 60 bytes.
#line 1 "ENTRY_10bedc30"

__declspec(naked) void FUN_10bedc30(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm push offset LAB_1186d30c
  __asm call LAB_1008ca83
  __asm test al, al
  __asm _emit 0x74 __asm _emit 0x19
  __asm push edi
  __asm mov edi, dword ptr [esp + 0xc]
  __asm mov dword ptr [edi], esi
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x07
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




// Reference entry 10bee240; body size 16 bytes.
#line 1 "ENTRY_10bee240"

__declspec(naked) void FUN_10bee240(void)

{
  __asm mov ecx, dword ptr [ecx + 0x8c]
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0xfc]
  __asm jmp eax
}




// Reference entry 10bee4a0; body size 29 bytes.
#line 1 "ENTRY_10bee4a0"

__declspec(naked) void FUN_10bee4a0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x8c]
  __asm push dword ptr [esp + 8]
  __asm push dword ptr [esp + 8]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xa4]
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 8
}




// Reference entry 10bee5b0; body size 26 bytes.
#line 1 "ENTRY_10bee5b0"

__declspec(naked) void FUN_10bee5b0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x8c]
  __asm push dword ptr [esp + 8]
  __asm push dword ptr [esp + 8]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x24]
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 8
}




// Reference entry 10bee5d0; body size 35 bytes.
#line 1 "ENTRY_10bee5d0"

__declspec(naked) void FUN_10bee5d0(void)

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




// Reference entry 10bee690; body size 20 bytes.
#line 1 "ENTRY_10bee690"

__declspec(naked) void FUN_10bee690(void)

{
  __asm mov eax, dword ptr [ecx - 0x80]
  __asm add ecx, -0x80
  __asm _emit 0xc7 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm jmp dword ptr [eax + 0x110]
}




// Reference entry 10bee6b0; body size 31 bytes.
#line 1 "ENTRY_10bee6b0"

void __fastcall FUN_10bee6b0(int param_1)

{
  thunk_FUN_104d98f0();
  if (*(int **)(param_1 + 0x8c) != (int *)((0x0))) {
    ((SCVtbl_5_1*)(*(int **)(param_1 + 0x8c)))->v((int)(*(undefined4 *)(param_1 + 0x84)));
  }
  return;
}


// Reference entry 10bee6e0; body size 31 bytes.
#line 1 "ENTRY_10bee6e0"

void __fastcall FUN_10bee6e0(int param_1)

{
  thunk_FUN_104d9cc0();
  if (*(int **)(param_1 + 0x8c) != (int *)((0x0))) {
    ((SCVtbl_6_1*)(*(int **)(param_1 + 0x8c)))->v((int)(*(undefined4 *)(param_1 + 0x84)));
  }
  return;
}


// Reference entry 10bee710; body size 36 bytes.
#line 1 "ENTRY_10bee710"

__declspec(naked) void FUN_10bee710(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, ecx
  __asm push 0
  __asm lea eax, [esi - 0x80]
  __asm push eax
  __asm push ecx
  __asm mov ecx, esp
  __asm push offset LAB_11880a2c
  __asm call LAB_1005273e
  __asm lea ecx, [esi - 0x78]
  __asm call LAB_10013543
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10bee740; body size 36 bytes.
#line 1 "ENTRY_10bee740"

__declspec(naked) void FUN_10bee740(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, ecx
  __asm push 0
  __asm lea eax, [esi - 0x80]
  __asm push eax
  __asm push ecx
  __asm mov ecx, esp
  __asm push offset LAB_11880a80
  __asm call LAB_1005273e
  __asm lea ecx, [esi - 0x78]
  __asm call LAB_10013543
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10bee770; body size 36 bytes.
#line 1 "ENTRY_10bee770"

__declspec(naked) void FUN_10bee770(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, ecx
  __asm push 0
  __asm lea eax, [esi - 0x80]
  __asm push eax
  __asm push ecx
  __asm mov ecx, esp
  __asm push offset LAB_11880134
  __asm call LAB_1005273e
  __asm lea ecx, [esi - 0x78]
  __asm call LAB_10013543
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10bee8d0; body size 17 bytes.
#line 1 "ENTRY_10bee8d0"

__declspec(naked) void FUN_10bee8d0(void)

{
  __asm call LAB_10005b32
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x07
  __asm mov ecx, eax
  __asm jmp LAB_100687d2
  __asm ret
}




// Reference entry 10bee8f0; body size 17 bytes.
#line 1 "ENTRY_10bee8f0"

__declspec(naked) void FUN_10bee8f0(void)

{
  __asm call LAB_10005b32
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x07
  __asm mov ecx, eax
  __asm jmp LAB_1003d09b
  __asm ret
}




// Reference entry 10beeaf0; body size 41 bytes.
#line 1 "ENTRY_10beeaf0"

__declspec(naked) void FUN_10beeaf0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x0f
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




// Reference entry 10beeb30; body size 41 bytes.
#line 1 "ENTRY_10beeb30"

__declspec(naked) void FUN_10beeb30(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x0f
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




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
struct SCIndexRange { char _pad; SCIndexRange(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); static int op_assign(...) { return 0; } };
struct SCLibrary { char _pad; SCLibrary(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); template<class... A> int getSingleton(A...); };
struct SCStr { char _pad; SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); template<class... A> int hash(A...); template<class... A> int int_addref(A...); template<class... A> int int_allocRep(A...); template<class... A> int int_release(A...); template<class... A> int length(A...); static int op_ctor(...) { return 0; } static int op_eq(...) { return 0; } static int op_lt(...) { return 0; } };
template<class...> struct _Tree { char _pad; _Tree(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); static int op_dtor(...) { return 0; } };
namespace std { template<class...> struct basic_ios { char _pad; basic_ios(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int op_dtor(...); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); }; }
namespace std { template<class...> struct basic_ostream { char _pad; basic_ostream(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int op_dtor(...); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); }; }
namespace std { template<class...> struct char_traits { char _pad; char_traits(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); }; }
struct AVTransportURIMetaData { char _pad; AVTransportURIMetaData(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Action { char _pad; Action(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct AddAtNumber { char _pad; AddAtNumber(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct AddFavorite { char _pad; AddFavorite(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct AddToGeneric { char _pad; AddToGeneric(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct AddToPlaylist { char _pad; AddToPlaylist(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Area { char _pad; Area(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct AreaAction { char _pad; AreaAction(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Bool { char _pad; Bool(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct CurrentTrackMetaData { char _pad; CurrentTrackMetaData(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct DeleteAlarm { char _pad; DeleteAlarm(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct DeleteItem { char _pad; DeleteItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct DeleteVoiceAccount { char _pad; DeleteVoiceAccount(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct DeviceName { char _pad; DeviceName(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct DisplayHelpSheetAction { char _pad; DisplayHelpSheetAction(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct DisplayText { char _pad; DisplayText(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct EnqueuedTransportURIMetaData { char _pad; EnqueuedTransportURIMetaData(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Event { char _pad; Event(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Exit { char _pad; Exit(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct ExplicitFilter { char _pad; ExplicitFilter(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct GroupName { char _pad; GroupName(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct MuseHouseholdName { char _pad; MuseHouseholdName(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct MusicServiceLogin { char _pad; MusicServiceLogin(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct MusicServiceNickname { char _pad; MusicServiceNickname(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct MusicServicePassword { char _pad; MusicServicePassword(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct MusicServiceWizard { char _pad; MusicServiceWizard(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct NumPlayersUnavailableMessageDescriptor { char _pad; NumPlayersUnavailableMessageDescriptor(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct ObjectID { char _pad; ObjectID(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct OfflineHideDeviceAction { char _pad; OfflineHideDeviceAction(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct OfflineMissingPlayerAction { char _pad; OfflineMissingPlayerAction(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct OfflineTroubleshootAction { char _pad; OfflineTroubleshootAction(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct PlayMenuAdd { char _pad; PlayMenuAdd(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct PlayMenuPlayContainer { char _pad; PlayMenuPlayContainer(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct PlayMenuPlayNext { char _pad; PlayMenuPlayNext(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct PlayMenuPlayNow { char _pad; PlayMenuPlayNow(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct PlayMenuReplace { char _pad; PlayMenuReplace(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct PlayMenuShuffleContainer { char _pad; PlayMenuShuffleContainer(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct PlayMenuShuffleNow { char _pad; PlayMenuShuffleNow(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct PlayNow { char _pad; PlayNow(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct PlaylistNew { char _pad; PlaylistNew(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct RINCON_AssociatedZPUDN { char _pad; RINCON_AssociatedZPUDN(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct RadioEditCustomStation { char _pad; RadioEditCustomStation(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct RadioLocationCity { char _pad; RadioLocationCity(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct RadioLocationZIP { char _pad; RadioLocationZIP(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Remove { char _pad; Remove(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct RemoveConnectedPartner { char _pad; RemoveConnectedPartner(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct RemoveSSID { char _pad; RemoveSSID(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct RenameFavorite { char _pad; RenameFavorite(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct RenameItem { char _pad; RenameItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct ResetPassword { char _pad; ResetPassword(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCActionContext { char _pad; SCActionContext(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCDismissMessageAction { char _pad; SCDismissMessageAction(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCFavoritesManager { char _pad; SCFavoritesManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIAccountManager { char _pad; SCIAccountManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIActionCategoryCollection { char _pad; SCIActionCategoryCollection(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIActionCategoryDefault { char _pad; SCIActionCategoryDefault(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIActionCategoryDiscovery { char _pad; SCIActionCategoryDiscovery(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIActionCategoryEdit { char _pad; SCIActionCategoryEdit(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIActionCategoryInstant { char _pad; SCIActionCategoryInstant(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIActionCategoryLongInput { char _pad; SCIActionCategoryLongInput(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIActionCategorySettings { char _pad; SCIActionCategorySettings(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIActionWithBoolDescriptor { char _pad; SCIActionWithBoolDescriptor(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIAddToAction { char _pad; SCIAddToAction(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIAddToQueueAtNumberDescriptor { char _pad; SCIAddToQueueAtNumberDescriptor(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIAddToQueueUIAction { char _pad; SCIAddToQueueUIAction(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIAlarmManager { char _pad; SCIAlarmManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIBrowseDataSource { char _pad; SCIBrowseDataSource(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIBrowseItem { char _pad; SCIBrowseItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIController { char _pad; SCIController(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIDateTimeManager { char _pad; SCIDateTimeManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIFeatureManager { char _pad; SCIFeatureManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIHousehold { char _pad; SCIHousehold(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIIndexManager { char _pad; SCIIndexManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIInfoViewHeaderDataSource { char _pad; SCIInfoViewHeaderDataSource(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCINowPlaying { char _pad; SCINowPlaying(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIObj { char _pad; SCIObj(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIPlayNextUIAction { char _pad; SCIPlayNextUIAction(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIPlayNowUIAction { char _pad; SCIPlayNowUIAction(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIReplaceQueueUIAction { char _pad; SCIReplaceQueueUIAction(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCISetting { char _pad; SCISetting(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIStringInput { char _pad; SCIStringInput(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIUserAccount { char _pad; SCIUserAccount(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIWizard { char _pad; SCIWizard(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCLifecycleManager { char _pad; SCLifecycleManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCOpWithProgressInfo { char _pad; SCOpWithProgressInfo(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCPlaylistsBrowseItem { char _pad; SCPlaylistsBrowseItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCResetPasswordActionDescriptor { char _pad; SCResetPasswordActionDescriptor(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCSelectedItemsAddToQueueAtIdxAction { char _pad; SCSelectedItemsAddToQueueAtIdxAction(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCSelectedItemsPlayNextAction { char _pad; SCSelectedItemsPlayNextAction(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCSelectedItemsPlayNowAction { char _pad; SCSelectedItemsPlayNowAction(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCSelectedItemsReplaceQueueAction { char _pad; SCSelectedItemsReplaceQueueAction(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCSetupEngine { char _pad; SCSetupEngine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCSignOutDescriptor { char _pad; SCSignOutDescriptor(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCSwfObjBCInternalListener { char _pad; SCSwfObjBCInternalListener(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCSwfObjHHInternalListener { char _pad; SCSwfObjHHInternalListener(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCThreadSafeInc { char _pad; SCThreadSafeInc(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCUnregisteredDeviceMessageDescriptor { char _pad; SCUnregisteredDeviceMessageDescriptor(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SearchTerm { char _pad; SearchTerm(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SelectionManager { char _pad; SelectionManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct ShowInfoview { char _pad; ShowInfoview(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct ShowUnsupportedOSMessage { char _pad; ShowUnsupportedOSMessage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct ShowUpdateMessage { char _pad; ShowUpdateMessage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SignOut { char _pad; SignOut(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Sink { char _pad; Sink(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct TurnOnRecentlyPlayed { char _pad; TurnOnRecentlyPlayed(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct UpdateMusicIndex { char _pad; UpdateMusicIndex(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Wizard { char _pad; Wizard(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
typedef void *FV;
typedef void *SMAPI;
typedef void *STATE_MUSICSERVICE_ACCOUNTNEEDED;
typedef void *STATE_MUSICSERVICE_CALLTOACTION_APP_LINK;
typedef void *STATE_MUSICSERVICE_COMPLETE;
typedef void *STATE_MUSICSERVICE_GET_APP_LINK_RETRY;
typedef void *STATE_MUSICSERVICE_GET_LINK_CODE;
typedef void *STATE_MUSICSERVICE_GET_SHARE_USAGE;
typedef void *STATE_MUSICSERVICE_INIT;
typedef void *STATE_MUSICSERVICE_INSTALLFAIL_APP_LINK;
typedef void *STATE_MUSICSERVICE_INTRO;
typedef void *STATE_MUSICSERVICE_LAUNCH_APP_LINK;
typedef void *STATE_MUSICSERVICE_LINK_CODE;
typedef void *STATE_MUSICSERVICE_LIST;
typedef void *STATE_MUSICSERVICE_LIST_WAITING;
typedef void *STATE_MUSICSERVICE_LOAD_MS_INFO;
typedef void *STATE_MUSICSERVICE_LOGINPASSWORD;
typedef void *STATE_MUSICSERVICE_MULTIPLE_ACCOUNTS_ADDED;
typedef void *STATE_MUSICSERVICE_PASSWORD;
typedef void *STATE_MUSICSERVICE_PROMOTED_INTRO;
typedef void *STATE_MUSICSERVICE_RESULT;
typedef void *STATE_MUSICSERVICE_RESULT_ERROR;
typedef void *STATE_MUSICSERVICE_RESULT_NICKNAME_ERROR;
typedef void *STATE_MUSICSERVICE_SERVICE_INFO_DOWNLOAD_RETRY;
typedef void *STATE_MUSICSERVICE_SET_NICKNAME;
typedef void *STATE_MUSICSERVICE_SET_SHARE_USAGE;
typedef void *STATE_MUSICSERVICE_WORKING;
typedef void *WARNING;
using namespace std;
struct Recovered_Bulk { char _pad; SCStr * __thiscall m_FUN_103eb100(SCStr *param_2); template<class... A> int m_FUN_103eb100(A...); SCStr * __thiscall m_FUN_103eb2e0(SCStr *param_2); template<class... A> int m_FUN_103eb2e0(A...); SCStr * __thiscall m_FUN_103eb300(SCStr *param_2); template<class... A> int m_FUN_103eb300(A...); SCStr * __thiscall m_FUN_103eb320(SCStr *param_2); template<class... A> int m_FUN_103eb320(A...); SCStr * __thiscall m_FUN_103eb370(SCStr *param_2); template<class... A> int m_FUN_103eb370(A...); SCStr * __thiscall m_FUN_103eb8c0(SCStr *param_2); template<class... A> int m_FUN_103eb8c0(A...); SCStr * __thiscall m_FUN_103eb900(SCStr *param_2); template<class... A> int m_FUN_103eb900(A...); SCStr * __thiscall m_FUN_103eba80(SCStr *param_2); template<class... A> int m_FUN_103eba80(A...); SCStr * __thiscall m_FUN_103ebaa0(SCStr *param_2); template<class... A> int m_FUN_103ebaa0(A...); void __thiscall m_FUN_103f51e0(int param_2); template<class... A> int m_FUN_103f51e0(A...); void __thiscall m_FUN_103f6830(undefined4 param_2); template<class... A> int m_FUN_103f6830(A...); void __thiscall m_FUN_103f6860(undefined4 param_2); template<class... A> int m_FUN_103f6860(A...); int __thiscall m_FUN_103f6ad0(SCStr *param_2); template<class... A> int m_FUN_103f6ad0(A...); int __thiscall m_FUN_103f6b20(int *param_2); template<class... A> int m_FUN_103f6b20(A...); undefined4 * __thiscall m_FUN_103f8220(int *param_2); template<class... A> int m_FUN_103f8220(A...); undefined4 * __thiscall m_FUN_103f8260(int *param_2); template<class... A> int m_FUN_103f8260(A...); undefined4 * __thiscall m_FUN_103f82a0(int *param_2); template<class... A> int m_FUN_103f82a0(A...); undefined4 * __thiscall m_FUN_103f82e0(int *param_2); template<class... A> int m_FUN_103f82e0(A...); undefined4 * __thiscall m_FUN_103f8320(int *param_2); template<class... A> int m_FUN_103f8320(A...); undefined4 * __thiscall m_FUN_103fc100(byte param_2); template<class... A> int m_FUN_103fc100(A...); undefined4 __thiscall m_FUN_103fc140(byte param_2); template<class... A> int m_FUN_103fc140(A...); undefined4 __thiscall m_FUN_103fc170(byte param_2); template<class... A> int m_FUN_103fc170(A...); undefined4 __thiscall m_FUN_103fc1a0(byte param_2); template<class... A> int m_FUN_103fc1a0(A...); undefined4 __thiscall m_FUN_103fc1d0(byte param_2); template<class... A> int m_FUN_103fc1d0(A...); int __thiscall m_FUN_103fc200(byte param_2); template<class... A> int m_FUN_103fc200(A...); undefined4 * __thiscall m_FUN_103fc350(byte param_2); template<class... A> int m_FUN_103fc350(A...); undefined4 * __thiscall m_FUN_103fc390(byte param_2); template<class... A> int m_FUN_103fc390(A...); undefined4 * __thiscall m_FUN_103fc460(byte param_2); template<class... A> int m_FUN_103fc460(A...); undefined4 __thiscall m_FUN_103fc4a0(byte param_2); template<class... A> int m_FUN_103fc4a0(A...); void __thiscall m_FUN_103fc650(char param_2); template<class... A> int m_FUN_103fc650(A...); void __thiscall m_FUN_103fc6a0(undefined4 *param_2,undefined4 param_3); template<class... A> int m_FUN_103fc6a0(A...); void __thiscall m_FUN_103fcfe0(int *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_103fcfe0(A...); void __thiscall m_FUN_103ff050(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_103ff050(A...); SCStr * __thiscall m_FUN_103ff3b0(SCStr *param_2); template<class... A> int m_FUN_103ff3b0(A...); SCStr * __thiscall m_FUN_103ff3e0(SCStr *param_2); template<class... A> int m_FUN_103ff3e0(A...); SCStr * __thiscall m_FUN_103ff400(SCStr *param_2); template<class... A> int m_FUN_103ff400(A...); SCStr * __thiscall m_FUN_103ff420(SCStr *param_2); template<class... A> int m_FUN_103ff420(A...); SCStr * __thiscall m_FUN_103ff440(SCStr *param_2); template<class... A> int m_FUN_103ff440(A...); SCStr * __thiscall m_FUN_103ff460(SCStr *param_2); template<class... A> int m_FUN_103ff460(A...); SCStr * __thiscall m_FUN_103ffaa0(SCStr *param_2); template<class... A> int m_FUN_103ffaa0(A...); bool __thiscall m_FUN_10400a40(uint param_2,int param_3); template<class... A> int m_FUN_10400a40(A...); void __thiscall m_FUN_10403340(int param_2); template<class... A> int m_FUN_10403340(A...); undefined4 *  __thiscall m_FUN_10403360(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10403360(A...); void __thiscall m_FUN_10403b60(int *param_2); template<class... A> int m_FUN_10403b60(A...); undefined4 * __thiscall m_FUN_10403cd0(int *param_2); template<class... A> int m_FUN_10403cd0(A...); undefined4 * __thiscall m_FUN_10403ef0(byte param_2); template<class... A> int m_FUN_10403ef0(A...); void __thiscall m_FUN_10406540(undefined4 param_2); template<class... A> int m_FUN_10406540(A...); void __thiscall m_FUN_10406bd0(int param_2); template<class... A> int m_FUN_10406bd0(A...); void __thiscall m_FUN_10407020(undefined4 *param_2); template<class... A> int m_FUN_10407020(A...); undefined4 * __thiscall m_FUN_104073c0(undefined4 *param_2); template<class... A> int m_FUN_104073c0(A...); undefined4 * __thiscall m_FUN_104073f0(int *param_2); template<class... A> int m_FUN_104073f0(A...); undefined4 * __thiscall m_FUN_10407450(int *param_2); template<class... A> int m_FUN_10407450(A...); undefined4 __thiscall m_FUN_10408c30(byte param_2); template<class... A> int m_FUN_10408c30(A...); void __thiscall m_FUN_10408f60(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10408f60(A...); void __thiscall m_FUN_10409b60(int *param_2); template<class... A> int m_FUN_10409b60(A...); void __thiscall m_FUN_10409bb0(int param_2); template<class... A> int m_FUN_10409bb0(A...); undefined * __thiscall m_FUN_1040a5e0(char param_2); template<class... A> int m_FUN_1040a5e0(A...); undefined4 * __thiscall m_FUN_1040b690(undefined4 *param_2); template<class... A> int m_FUN_1040b690(A...); void __thiscall m_FUN_1040cc10(undefined4 *param_2); template<class... A> int m_FUN_1040cc10(A...); int __thiscall m_FUN_1040fd90(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_1040fd90(A...); void __thiscall m_FUN_104108a0(undefined4 *param_2); template<class... A> int m_FUN_104108a0(A...); void __thiscall m_FUN_104109b0(int *param_2,SCStr *param_3); template<class... A> int m_FUN_104109b0(A...); undefined4 * __thiscall m_FUN_10411070(int *param_2); template<class... A> int m_FUN_10411070(A...); undefined4 * __thiscall m_FUN_104110e0(int *param_2); template<class... A> int m_FUN_104110e0(A...); undefined4 * __thiscall m_FUN_104122e0(byte param_2); template<class... A> int m_FUN_104122e0(A...); undefined4 * __thiscall m_FUN_10412490(byte param_2); template<class... A> int m_FUN_10412490(A...); undefined4 * __thiscall m_FUN_104125e0(byte param_2); template<class... A> int m_FUN_104125e0(A...); undefined4 * __thiscall m_FUN_10412610(byte param_2); template<class... A> int m_FUN_10412610(A...); undefined4 *  __thiscall m_FUN_10412900(undefined4 *param_2); template<class... A> int m_FUN_10412900(A...); void __thiscall m_FUN_104129d0(char param_2); template<class... A> int m_FUN_104129d0(A...); void __thiscall m_FUN_10412b50(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10412b50(A...); undefined4 *  __thiscall m_FUN_10412fd0(undefined4 *param_2); template<class... A> int m_FUN_10412fd0(A...); uint __thiscall m_FUN_10413680(SCStr *param_2); template<class... A> int m_FUN_10413680(A...); void __thiscall m_FUN_10413890(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10413890(A...); void __thiscall m_FUN_10414dc0(undefined4 *param_2); template<class... A> int m_FUN_10414dc0(A...); undefined4 * __thiscall m_FUN_104160c0(int *param_2); template<class... A> int m_FUN_104160c0(A...); undefined4 * __thiscall m_FUN_104171c0(byte param_2); template<class... A> int m_FUN_104171c0(A...); undefined4 * __thiscall m_FUN_10417300(byte param_2); template<class... A> int m_FUN_10417300(A...); undefined4 * __thiscall m_FUN_10417330(byte param_2); template<class... A> int m_FUN_10417330(A...); undefined4 * __thiscall m_FUN_10417370(byte param_2); template<class... A> int m_FUN_10417370(A...); undefined4 * __thiscall m_FUN_104173b0(byte param_2); template<class... A> int m_FUN_104173b0(A...); undefined4 * __thiscall m_FUN_104173f0(byte param_2); template<class... A> int m_FUN_104173f0(A...); undefined4 __thiscall m_FUN_104174d0(byte param_2); template<class... A> int m_FUN_104174d0(A...); undefined4 * __thiscall m_FUN_10417500(byte param_2); template<class... A> int m_FUN_10417500(A...); undefined4 * __thiscall m_FUN_10417540(byte param_2); template<class... A> int m_FUN_10417540(A...); void __thiscall m_FUN_10417590(int *param_2); template<class... A> int m_FUN_10417590(A...); SCStr * __thiscall m_FUN_10419cc0(SCStr *param_2); template<class... A> int m_FUN_10419cc0(A...); int * __thiscall m_FUN_10419db0(int *param_2); template<class... A> int m_FUN_10419db0(A...); int * __thiscall m_FUN_1041a530(int *param_2); template<class... A> int m_FUN_1041a530(A...); SCStr * __thiscall m_FUN_1041a560(SCStr *param_2); template<class... A> int m_FUN_1041a560(A...); SCStr * __thiscall m_FUN_1041a580(SCStr *param_2); template<class... A> int m_FUN_1041a580(A...); SCStr * __thiscall m_FUN_1041a5c0(SCStr *param_2); template<class... A> int m_FUN_1041a5c0(A...); int * __thiscall m_FUN_1041a5f0(int *param_2); template<class... A> int m_FUN_1041a5f0(A...); int * __thiscall m_FUN_1041a630(int *param_2); template<class... A> int m_FUN_1041a630(A...); int * __thiscall m_FUN_1041a660(int *param_2); template<class... A> int m_FUN_1041a660(A...); SCStr * __thiscall m_FUN_1041a720(SCStr *param_2); template<class... A> int m_FUN_1041a720(A...); SCStr * __thiscall m_FUN_1041a760(SCStr *param_2); template<class... A> int m_FUN_1041a760(A...); SCStr * __thiscall m_FUN_1041a7b0(SCStr *param_2); template<class... A> int m_FUN_1041a7b0(A...); int * __thiscall m_FUN_1041a7e0(int *param_2); template<class... A> int m_FUN_1041a7e0(A...); SCStr * __thiscall m_FUN_1041c820(SCStr *param_2); template<class... A> int m_FUN_1041c820(A...); SCStr * __thiscall m_FUN_1041c9c0(SCStr *param_2); template<class... A> int m_FUN_1041c9c0(A...); SCStr * __thiscall m_FUN_1041c9e0(SCStr *param_2); template<class... A> int m_FUN_1041c9e0(A...); SCStr * __thiscall m_FUN_1041ca00(SCStr *param_2); template<class... A> int m_FUN_1041ca00(A...); void __thiscall m_FUN_1041cf70(SCStr *param_2); template<class... A> int m_FUN_1041cf70(A...); void __thiscall m_FUN_1041d340(undefined4 param_2,SCStr *param_3); template<class... A> int m_FUN_1041d340(A...); void __thiscall m_FUN_1041d510(SCStr *param_2); template<class... A> int m_FUN_1041d510(A...); void __thiscall m_FUN_1041d560(SCStr *param_2); template<class... A> int m_FUN_1041d560(A...); void __thiscall m_FUN_1041d630(SCStr *param_2); template<class... A> int m_FUN_1041d630(A...); undefined4 * __thiscall m_FUN_1041ee40(int *param_2); template<class... A> int m_FUN_1041ee40(A...); undefined4 * __thiscall m_FUN_1041ee80(int *param_2); template<class... A> int m_FUN_1041ee80(A...); undefined4 * __thiscall m_FUN_1041eec0(int *param_2); template<class... A> int m_FUN_1041eec0(A...); undefined4 * __thiscall m_FUN_1041ef00(int *param_2); template<class... A> int m_FUN_1041ef00(A...); undefined4 * __thiscall m_FUN_10422110(byte param_2); template<class... A> int m_FUN_10422110(A...); undefined4 * __thiscall m_FUN_104222a0(byte param_2); template<class... A> int m_FUN_104222a0(A...); undefined4 * __thiscall m_FUN_104222f0(byte param_2); template<class... A> int m_FUN_104222f0(A...); undefined4 *  __thiscall m_FUN_10422540(undefined4 *param_2); template<class... A> int m_FUN_10422540(A...); undefined4 *  __thiscall m_FUN_10422570(undefined4 *param_2); template<class... A> int m_FUN_10422570(A...); undefined4 *  __thiscall m_FUN_10422590(undefined4 *param_2); template<class... A> int m_FUN_10422590(A...); undefined4 *  __thiscall m_FUN_104225c0(undefined4 *param_2); template<class... A> int m_FUN_104225c0(A...); undefined4 *  __thiscall m_FUN_104225f0(undefined4 *param_2); template<class... A> int m_FUN_104225f0(A...); void __thiscall m_FUN_10422620(char param_2); template<class... A> int m_FUN_10422620(A...); void __thiscall m_FUN_10422640(char param_2); template<class... A> int m_FUN_10422640(A...); void __thiscall m_FUN_10422660(char param_2); template<class... A> int m_FUN_10422660(A...); void __thiscall m_FUN_10422680(char param_2); template<class... A> int m_FUN_10422680(A...); void __thiscall m_FUN_104226a0(char param_2); template<class... A> int m_FUN_104226a0(A...); void __thiscall m_FUN_104226c0(char param_2); template<class... A> int m_FUN_104226c0(A...); void __thiscall m_FUN_104226e0(char param_2); template<class... A> int m_FUN_104226e0(A...); void __thiscall m_FUN_10422700(char param_2); template<class... A> int m_FUN_10422700(A...); void __thiscall m_FUN_10422720(char param_2); template<class... A> int m_FUN_10422720(A...); undefined4 *  __thiscall m_FUN_10422ac0(undefined4 *param_2); template<class... A> int m_FUN_10422ac0(A...); undefined4 *  __thiscall m_FUN_10422af0(undefined4 *param_2); template<class... A> int m_FUN_10422af0(A...); undefined4 *  __thiscall m_FUN_10422b10(undefined4 *param_2); template<class... A> int m_FUN_10422b10(A...); undefined4 *  __thiscall m_FUN_10422b40(undefined4 *param_2); template<class... A> int m_FUN_10422b40(A...); void __thiscall m_FUN_10422b70(undefined4 *param_2); template<class... A> int m_FUN_10422b70(A...); void __thiscall m_FUN_10426070(int param_2); template<class... A> int m_FUN_10426070(A...); undefined4 * __thiscall m_FUN_10426240(int *param_2); template<class... A> int m_FUN_10426240(A...); undefined4 * __thiscall m_FUN_10426280(int *param_2); template<class... A> int m_FUN_10426280(A...); undefined4 * __thiscall m_FUN_104262f0(int *param_2); template<class... A> int m_FUN_104262f0(A...); undefined4 * __thiscall m_FUN_10426330(int *param_2); template<class... A> int m_FUN_10426330(A...); undefined4 * __thiscall m_FUN_1042b460(byte param_2); template<class... A> int m_FUN_1042b460(A...); undefined4 * __thiscall m_FUN_1042b4a0(byte param_2); template<class... A> int m_FUN_1042b4a0(A...); undefined4 __thiscall m_FUN_1042b4e0(byte param_2); template<class... A> int m_FUN_1042b4e0(A...); undefined4 *  __thiscall m_FUN_1042ba50(undefined4 *param_2); template<class... A> int m_FUN_1042ba50(A...); undefined4 *  __thiscall m_FUN_1042ba70(undefined4 *param_2); template<class... A> int m_FUN_1042ba70(A...); undefined4 *  __thiscall m_FUN_1042ba90(undefined4 *param_2); template<class... A> int m_FUN_1042ba90(A...); undefined4 *  __thiscall m_FUN_1042bab0(undefined4 *param_2); template<class... A> int m_FUN_1042bab0(A...); void __thiscall m_FUN_1042bad0(char param_2); template<class... A> int m_FUN_1042bad0(A...); void __thiscall m_FUN_1042baf0(char param_2); template<class... A> int m_FUN_1042baf0(A...); void __thiscall m_FUN_1042bb10(char param_2); template<class... A> int m_FUN_1042bb10(A...); void __thiscall m_FUN_1042bb30(char param_2); template<class... A> int m_FUN_1042bb30(A...); undefined4 *  __thiscall m_FUN_1042bc40(undefined4 *param_2); template<class... A> int m_FUN_1042bc40(A...); undefined4 *  __thiscall m_FUN_1042bc60(undefined4 *param_2); template<class... A> int m_FUN_1042bc60(A...); void __thiscall m_FUN_1042bc80(undefined4 *param_2); template<class... A> int m_FUN_1042bc80(A...); void __thiscall m_FUN_1042bca0(undefined4 *param_2); template<class... A> int m_FUN_1042bca0(A...); void __thiscall m_FUN_1042bdf0(int *param_2); template<class... A> int m_FUN_1042bdf0(A...); void __thiscall m_FUN_1042be40(int *param_2); template<class... A> int m_FUN_1042be40(A...); void __thiscall m_FUN_1042be90(int *param_2); template<class... A> int m_FUN_1042be90(A...); void __thiscall m_FUN_1042bee0(int param_2); template<class... A> int m_FUN_1042bee0(A...); void __thiscall m_FUN_10432eb0(undefined4 param_2); template<class... A> int m_FUN_10432eb0(A...); void __thiscall m_FUN_104332a0(int param_2); template<class... A> int m_FUN_104332a0(A...); undefined4 * __thiscall m_FUN_104334f0(int *param_2); template<class... A> int m_FUN_104334f0(A...); undefined4 * __thiscall m_FUN_10434560(byte param_2); template<class... A> int m_FUN_10434560(A...); undefined4 * __thiscall m_FUN_104345a0(byte param_2); template<class... A> int m_FUN_104345a0(A...); undefined4 __thiscall m_FUN_10434680(byte param_2); template<class... A> int m_FUN_10434680(A...); void __thiscall m_FUN_10434b60(int *param_2); template<class... A> int m_FUN_10434b60(A...); void __thiscall m_FUN_10434bb0(int param_2); template<class... A> int m_FUN_10434bb0(A...); undefined4 __thiscall m_FUN_10436ac0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10436ac0(A...); undefined4 __thiscall m_FUN_10436c60(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10436c60(A...); undefined1 __thiscall m_FUN_104388c0(int param_2); template<class... A> int m_FUN_104388c0(A...); undefined4 * __thiscall m_FUN_10439fe0(int *param_2); template<class... A> int m_FUN_10439fe0(A...); undefined4 __thiscall m_FUN_1043ab50(byte param_2); template<class... A> int m_FUN_1043ab50(A...); undefined4 * __thiscall m_FUN_1043ab80(byte param_2); template<class... A> int m_FUN_1043ab80(A...); void __thiscall m_FUN_1043b0f0(int *param_2); template<class... A> int m_FUN_1043b0f0(A...); void __thiscall m_FUN_1043b6e0(int param_2); template<class... A> int m_FUN_1043b6e0(A...); void __thiscall m_FUN_1043b720(int param_2); template<class... A> int m_FUN_1043b720(A...); void __thiscall m_FUN_1043b880(int param_2); template<class... A> int m_FUN_1043b880(A...); undefined4 * __thiscall m_FUN_104404d0(byte param_2); template<class... A> int m_FUN_104404d0(A...); undefined4 * __thiscall m_FUN_10440e10(int *param_2); template<class... A> int m_FUN_10440e10(A...); undefined4 * __thiscall m_FUN_10441e40(byte param_2); template<class... A> int m_FUN_10441e40(A...); undefined4 * __thiscall m_FUN_104430b0(int *param_2); template<class... A> int m_FUN_104430b0(A...); undefined4 * __thiscall m_FUN_10443110(int *param_2); template<class... A> int m_FUN_10443110(A...); SCStr * __thiscall m_FUN_10445ff0(SCStr *param_2); template<class... A> int m_FUN_10445ff0(A...); undefined4 * __thiscall m_FUN_1044b510(byte param_2); template<class... A> int m_FUN_1044b510(A...); undefined4 * __thiscall m_FUN_1044b550(byte param_2); template<class... A> int m_FUN_1044b550(A...); undefined4 * __thiscall m_FUN_1044b590(byte param_2); template<class... A> int m_FUN_1044b590(A...); undefined4 __thiscall m_FUN_1044b5d0(byte param_2); template<class... A> int m_FUN_1044b5d0(A...); undefined4 * __thiscall m_FUN_1044b600(byte param_2); template<class... A> int m_FUN_1044b600(A...); void __thiscall m_FUN_10451dc0(int param_2); template<class... A> int m_FUN_10451dc0(A...); undefined4 * __thiscall m_FUN_104523f0(byte param_2); template<class... A> int m_FUN_104523f0(A...); undefined4 * __thiscall m_FUN_10452430(byte param_2); template<class... A> int m_FUN_10452430(A...); void __thiscall m_FUN_104525d0(int param_2); template<class... A> int m_FUN_104525d0(A...); undefined4 * __thiscall m_FUN_10453df0(byte param_2); template<class... A> int m_FUN_10453df0(A...); void __thiscall m_FUN_10454320(int param_2); template<class... A> int m_FUN_10454320(A...); void __thiscall m_FUN_10454b40(int param_2); template<class... A> int m_FUN_10454b40(A...); undefined4 * __thiscall m_FUN_10455930(int *param_2); template<class... A> int m_FUN_10455930(A...); undefined4 __thiscall m_FUN_104578b0(byte param_2); template<class... A> int m_FUN_104578b0(A...); void __thiscall m_FUN_10457900(int *param_2); template<class... A> int m_FUN_10457900(A...); void __thiscall m_FUN_10457950(int *param_2); template<class... A> int m_FUN_10457950(A...); undefined4 __thiscall m_FUN_1045aef0(undefined4 param_2); template<class... A> int m_FUN_1045aef0(A...); undefined4 * __thiscall m_FUN_1045ecb0(byte param_2); template<class... A> int m_FUN_1045ecb0(A...); undefined4 *  __thiscall m_FUN_1045f910(undefined4 *param_2); template<class... A> int m_FUN_1045f910(A...); void  __thiscall m_FUN_1045f930(char param_2); template<class... A> int m_FUN_1045f930(A...); void __thiscall m_FUN_1045f9b0(undefined4 *param_2); template<class... A> int m_FUN_1045f9b0(A...); undefined4 * __thiscall m_FUN_10461550(int *param_2); template<class... A> int m_FUN_10461550(A...); undefined4 __thiscall m_FUN_104627f0(byte param_2); template<class... A> int m_FUN_104627f0(A...); void __thiscall m_FUN_10462c30(char param_2); template<class... A> int m_FUN_10462c30(A...); void __thiscall m_FUN_10463890(int *param_2); template<class... A> int m_FUN_10463890(A...); SCStr * __thiscall m_FUN_10464860(SCStr *param_2); template<class... A> int m_FUN_10464860(A...); undefined4 * __thiscall m_FUN_10465d30(byte param_2); template<class... A> int m_FUN_10465d30(A...); void __thiscall m_FUN_10466290(int param_2); template<class... A> int m_FUN_10466290(A...); undefined4 * __thiscall m_FUN_104682f0(byte param_2); template<class... A> int m_FUN_104682f0(A...); void __thiscall m_FUN_10468380(int *param_2); template<class... A> int m_FUN_10468380(A...); void __thiscall m_FUN_104683d0(int param_2); template<class... A> int m_FUN_104683d0(A...); undefined4 * __thiscall m_FUN_1046b190(byte param_2); template<class... A> int m_FUN_1046b190(A...); void __thiscall m_FUN_1046c810(undefined4 *param_2); template<class... A> int m_FUN_1046c810(A...); void __thiscall m_FUN_1046c830(undefined4 *param_2); template<class... A> int m_FUN_1046c830(A...); void __thiscall m_FUN_1046c850(char param_2); template<class... A> int m_FUN_1046c850(A...); void  __thiscall m_FUN_1046c870(char param_2); template<class... A> int m_FUN_1046c870(A...); void __thiscall m_FUN_1046c930(undefined4 *param_2); template<class... A> int m_FUN_1046c930(A...); void __thiscall m_FUN_1046c950(undefined4 *param_2); template<class... A> int m_FUN_1046c950(A...); undefined4 * __thiscall m_FUN_1046ebb0(byte param_2); template<class... A> int m_FUN_1046ebb0(A...); undefined4 * __thiscall m_FUN_10471f00(int *param_2); template<class... A> int m_FUN_10471f00(A...); undefined4 * __thiscall m_FUN_10471f40(int *param_2); template<class... A> int m_FUN_10471f40(A...); void __thiscall m_FUN_104733f0(int *param_2); template<class... A> int m_FUN_104733f0(A...); undefined4 * __thiscall m_FUN_10474c00(int *param_2); template<class... A> int m_FUN_10474c00(A...); undefined4 * __thiscall m_FUN_10474c40(int *param_2); template<class... A> int m_FUN_10474c40(A...); undefined4 * __thiscall m_FUN_10474c80(int *param_2); template<class... A> int m_FUN_10474c80(A...); undefined4 *  __thiscall m_FUN_10479450(undefined4 *param_2); template<class... A> int m_FUN_10479450(A...); undefined4 *  __thiscall m_FUN_1047a230(undefined4 *param_2); template<class... A> int m_FUN_1047a230(A...); undefined4 *  __thiscall m_FUN_1047a250(undefined4 *param_2); template<class... A> int m_FUN_1047a250(A...); undefined4 *  __thiscall m_FUN_1047a270(undefined4 *param_2); template<class... A> int m_FUN_1047a270(A...); undefined4 *  __thiscall m_FUN_1047a290(undefined4 *param_2); template<class... A> int m_FUN_1047a290(A...); void __thiscall m_FUN_1047a2b0(undefined4 *param_2); template<class... A> int m_FUN_1047a2b0(A...); void __thiscall m_FUN_1047a2d0(undefined4 *param_2); template<class... A> int m_FUN_1047a2d0(A...); void __thiscall m_FUN_1047a2f0(char param_2); template<class... A> int m_FUN_1047a2f0(A...); void __thiscall m_FUN_1047a310(char param_2); template<class... A> int m_FUN_1047a310(A...); void __thiscall m_FUN_1047a330(char param_2); template<class... A> int m_FUN_1047a330(A...); void __thiscall m_FUN_1047a350(char param_2); template<class... A> int m_FUN_1047a350(A...); void  __thiscall m_FUN_1047a370(char param_2); template<class... A> int m_FUN_1047a370(A...); void  __thiscall m_FUN_1047a390(char param_2); template<class... A> int m_FUN_1047a390(A...); undefined4 *  __thiscall m_FUN_1047a5a0(undefined4 *param_2); template<class... A> int m_FUN_1047a5a0(A...); undefined4 *  __thiscall m_FUN_1047a5c0(undefined4 *param_2); template<class... A> int m_FUN_1047a5c0(A...); void __thiscall m_FUN_1047a5e0(undefined4 *param_2); template<class... A> int m_FUN_1047a5e0(A...); void __thiscall m_FUN_1047a600(undefined4 *param_2); template<class... A> int m_FUN_1047a600(A...); void __thiscall m_FUN_1047a620(undefined4 *param_2); template<class... A> int m_FUN_1047a620(A...); void __thiscall m_FUN_1047a640(undefined4 *param_2); template<class... A> int m_FUN_1047a640(A...); void __thiscall m_FUN_1047a660(undefined4 *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1047a660(A...); void __thiscall m_FUN_1047d4e0(undefined4 *param_2); template<class... A> int m_FUN_1047d4e0(A...); void __thiscall m_FUN_10481650(int param_2); template<class... A> int m_FUN_10481650(A...); void __thiscall m_FUN_104816c0(undefined4 *param_2); template<class... A> int m_FUN_104816c0(A...); undefined4 * __thiscall m_FUN_10482bb0(int *param_2); template<class... A> int m_FUN_10482bb0(A...); undefined4 * __thiscall m_FUN_10482bf0(int *param_2); template<class... A> int m_FUN_10482bf0(A...); undefined4 * __thiscall m_FUN_10482c30(int *param_2); template<class... A> int m_FUN_10482c30(A...); undefined4 * __thiscall m_FUN_10482c70(int *param_2); template<class... A> int m_FUN_10482c70(A...); undefined4 * __thiscall m_FUN_10482cb0(int *param_2); template<class... A> int m_FUN_10482cb0(A...); undefined4 * __thiscall m_FUN_10486c10(byte param_2); template<class... A> int m_FUN_10486c10(A...); undefined4 __thiscall m_FUN_10486c50(byte param_2); template<class... A> int m_FUN_10486c50(A...); undefined4 * __thiscall m_FUN_10486c80(byte param_2); template<class... A> int m_FUN_10486c80(A...); undefined4 *  __thiscall m_FUN_10486f40(undefined4 *param_2); template<class... A> int m_FUN_10486f40(A...); void __thiscall m_FUN_10487270(undefined4 *param_2); template<class... A> int m_FUN_10487270(A...); void __thiscall m_FUN_10487620(char param_2); template<class... A> int m_FUN_10487620(A...); void __thiscall m_FUN_10487900(char param_2); template<class... A> int m_FUN_10487900(A...); void __thiscall m_FUN_10487bc0(int *param_2); template<class... A> int m_FUN_10487bc0(A...); void  __thiscall m_FUN_10487cc0(int *param_2); template<class... A> int m_FUN_10487cc0(A...); void __thiscall m_FUN_104881d0(undefined4 *param_2); template<class... A> int m_FUN_104881d0(A...); void __thiscall m_FUN_10488240(undefined4 *param_2); template<class... A> int m_FUN_10488240(A...); void __thiscall m_FUN_10488610(int *param_2); template<class... A> int m_FUN_10488610(A...); void __thiscall m_FUN_10488660(int *param_2); template<class... A> int m_FUN_10488660(A...); void __thiscall m_FUN_104886b0(int param_2); template<class... A> int m_FUN_104886b0(A...); void __thiscall m_FUN_10488750(int *param_2); template<class... A> int m_FUN_10488750(A...); void __thiscall m_FUN_10496660(undefined4 *param_2); template<class... A> int m_FUN_10496660(A...); void __thiscall m_FUN_10498c70(char param_2); template<class... A> int m_FUN_10498c70(A...); void __thiscall m_FUN_10498d20(int *param_2); template<class... A> int m_FUN_10498d20(A...); undefined4 * __thiscall m_FUN_1049d7c0(int *param_2); template<class... A> int m_FUN_1049d7c0(A...); undefined4 * __thiscall m_FUN_1049fed0(byte param_2); template<class... A> int m_FUN_1049fed0(A...); undefined4 * __thiscall m_FUN_1049ff10(byte param_2); template<class... A> int m_FUN_1049ff10(A...); undefined4 * __thiscall m_FUN_1049ff50(byte param_2); template<class... A> int m_FUN_1049ff50(A...); undefined4 * __thiscall m_FUN_1049ff90(byte param_2); template<class... A> int m_FUN_1049ff90(A...); void __thiscall m_FUN_104a0fd0(int param_2); template<class... A> int m_FUN_104a0fd0(A...); void __thiscall m_FUN_104a8b60(int *param_2); template<class... A> int m_FUN_104a8b60(A...); undefined4 * __thiscall m_FUN_104acbf0(int *param_2); template<class... A> int m_FUN_104acbf0(A...); undefined4 __thiscall m_FUN_104ad9f0(byte param_2); template<class... A> int m_FUN_104ad9f0(A...); int __thiscall m_FUN_104ada20(byte param_2); template<class... A> int m_FUN_104ada20(A...); undefined4 *  __thiscall m_FUN_104adb70(undefined4 *param_2); template<class... A> int m_FUN_104adb70(A...); undefined4 *  __thiscall m_FUN_104adbb0(undefined4 *param_2); template<class... A> int m_FUN_104adbb0(A...); void __thiscall m_FUN_104adbe0(undefined4 *param_2); template<class... A> int m_FUN_104adbe0(A...); void __thiscall m_FUN_104adca0(char param_2); template<class... A> int m_FUN_104adca0(A...); void __thiscall m_FUN_104adcc0(char param_2); template<class... A> int m_FUN_104adcc0(A...); void __thiscall m_FUN_104adce0(char param_2); template<class... A> int m_FUN_104adce0(A...); void __thiscall m_FUN_104add00(char param_2); template<class... A> int m_FUN_104add00(A...); void __thiscall m_FUN_104add20(char param_2); template<class... A> int m_FUN_104add20(A...); void __thiscall m_FUN_104add40(char param_2); template<class... A> int m_FUN_104add40(A...); undefined4 *  __thiscall m_FUN_104add60(char param_2); template<class... A> int m_FUN_104add60(A...); void __thiscall m_FUN_104ade60(undefined4 *param_2,ushort *param_3); template<class... A> int m_FUN_104ade60(A...); void __thiscall m_FUN_104adfb0(undefined4 *param_2); template<class... A> int m_FUN_104adfb0(A...); void __thiscall m_FUN_104adff0(undefined4 *param_2); template<class... A> int m_FUN_104adff0(A...); void __thiscall m_FUN_104ae020(undefined4 *param_2); template<class... A> int m_FUN_104ae020(A...); undefined4 * __thiscall m_FUN_104b0bb0(byte param_2); template<class... A> int m_FUN_104b0bb0(A...); undefined4 * __thiscall m_FUN_104b5780(int *param_2); template<class... A> int m_FUN_104b5780(A...); undefined4 * __thiscall m_FUN_104b8bf0(byte param_2); template<class... A> int m_FUN_104b8bf0(A...); void __thiscall m_FUN_104b8d90(undefined4 *param_2); template<class... A> int m_FUN_104b8d90(A...); void __thiscall m_FUN_104b8e70(undefined4 *param_2); template<class... A> int m_FUN_104b8e70(A...); void __thiscall m_FUN_104b8e90(undefined4 *param_2); template<class... A> int m_FUN_104b8e90(A...); void  __thiscall m_FUN_104b8eb0(char param_2); template<class... A> int m_FUN_104b8eb0(A...); void __thiscall m_FUN_104b8f60(char param_2); template<class... A> int m_FUN_104b8f60(A...); void  __thiscall m_FUN_104b8f80(char param_2); template<class... A> int m_FUN_104b8f80(A...); void  __thiscall m_FUN_104b8fa0(char param_2); template<class... A> int m_FUN_104b8fa0(A...); void __thiscall m_FUN_104b8fc0(char param_2); template<class... A> int m_FUN_104b8fc0(A...); void __thiscall m_FUN_104b91b0(undefined4 *param_2); template<class... A> int m_FUN_104b91b0(A...); void __thiscall m_FUN_104b9200(undefined4 *param_2); template<class... A> int m_FUN_104b9200(A...); void __thiscall m_FUN_104b9220(undefined4 *param_2); template<class... A> int m_FUN_104b9220(A...); undefined4 *  __thiscall m_FUN_104bcb00(uint param_2); template<class... A> int m_FUN_104bcb00(A...); void __thiscall m_FUN_104bdde0(undefined4 *param_2); template<class... A> int m_FUN_104bdde0(A...); void __thiscall m_FUN_104bde00(char param_2); template<class... A> int m_FUN_104bde00(A...); void __thiscall m_FUN_104bde60(undefined4 *param_2); template<class... A> int m_FUN_104bde60(A...); undefined4 * __thiscall m_FUN_104c2520(int *param_2); template<class... A> int m_FUN_104c2520(A...); undefined4 * __thiscall m_FUN_104c2560(int *param_2); template<class... A> int m_FUN_104c2560(A...); undefined4 __thiscall m_FUN_104c4130(byte param_2); template<class... A> int m_FUN_104c4130(A...); void  __thiscall m_FUN_104c4840(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_104c4840(A...); void __thiscall m_FUN_104c9d30(undefined4 *param_2); template<class... A> int m_FUN_104c9d30(A...); void __thiscall m_FUN_104c9d50(char param_2); template<class... A> int m_FUN_104c9d50(A...); void __thiscall m_FUN_104c9db0(undefined4 *param_2); template<class... A> int m_FUN_104c9db0(A...); void __thiscall m_FUN_104cb780(int param_2); template<class... A> int m_FUN_104cb780(A...); undefined4 * __thiscall m_FUN_104cb9a0(int *param_2); template<class... A> int m_FUN_104cb9a0(A...); undefined4 __thiscall m_FUN_104cd5c0(byte param_2); template<class... A> int m_FUN_104cd5c0(A...); void __thiscall m_FUN_104cdd80(int *param_2); template<class... A> int m_FUN_104cdd80(A...); void __thiscall m_FUN_104cddd0(int *param_2); template<class... A> int m_FUN_104cddd0(A...); void __thiscall m_FUN_104cde20(int *param_2); template<class... A> int m_FUN_104cde20(A...); void __thiscall m_FUN_104cde70(int param_2); template<class... A> int m_FUN_104cde70(A...); undefined4 * __thiscall m_FUN_104d54e0(byte param_2); template<class... A> int m_FUN_104d54e0(A...); undefined4 __thiscall m_FUN_104d5520(byte param_2); template<class... A> int m_FUN_104d5520(A...); undefined4 * __thiscall m_FUN_104d5550(byte param_2); template<class... A> int m_FUN_104d5550(A...); undefined4 __thiscall m_FUN_104d5e30(uint param_2); template<class... A> int m_FUN_104d5e30(A...); undefined4 __thiscall m_FUN_104d61d0(uint param_2); template<class... A> int m_FUN_104d61d0(A...); undefined4 __thiscall m_FUN_104d6250(uint param_2); template<class... A> int m_FUN_104d6250(A...); int __thiscall m_FUN_104d6310(uint param_2); template<class... A> int m_FUN_104d6310(A...); int __thiscall m_FUN_104d6600(uint param_2); template<class... A> int m_FUN_104d6600(A...); void __thiscall m_FUN_104d6e20(undefined4 *param_2); template<class... A> int m_FUN_104d6e20(A...); undefined4 * __thiscall m_FUN_104d6f40(int *param_2); template<class... A> int m_FUN_104d6f40(A...); undefined4 * __thiscall m_FUN_104d7bb0(byte param_2); template<class... A> int m_FUN_104d7bb0(A...); undefined4 __thiscall m_FUN_104d7c80(byte param_2); template<class... A> int m_FUN_104d7c80(A...); undefined4 * __thiscall m_FUN_104d7cb0(byte param_2); template<class... A> int m_FUN_104d7cb0(A...); undefined4 * __thiscall m_FUN_104d7cf0(byte param_2); template<class... A> int m_FUN_104d7cf0(A...); undefined4 *  __thiscall m_FUN_104d7e00(undefined4 *param_2); template<class... A> int m_FUN_104d7e00(A...); void __thiscall m_FUN_104d7e20(char param_2); template<class... A> int m_FUN_104d7e20(A...); void __thiscall m_FUN_104d7e40(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_104d7e40(A...); void __thiscall m_FUN_104d7ed0(undefined4 *param_2); template<class... A> int m_FUN_104d7ed0(A...); void __thiscall m_FUN_104d8190(int *param_2); template<class... A> int m_FUN_104d8190(A...); void __thiscall m_FUN_104d82e0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_104d82e0(A...); void __thiscall m_FUN_104d8330(undefined4 param_2); template<class... A> int m_FUN_104d8330(A...); void __thiscall m_FUN_104d8370(undefined4 param_2); template<class... A> int m_FUN_104d8370(A...); undefined4 __thiscall m_FUN_104d8c80(undefined4 param_2,undefined4 param_3,undefined4 param_4, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_104d8c80(A...); void __thiscall m_FUN_104d9d00(undefined4 param_2); template<class... A> int m_FUN_104d9d00(A...); void __thiscall m_FUN_104d9d40(undefined4 *param_2); template<class... A> int m_FUN_104d9d40(A...); void __thiscall m_FUN_104d9e10(int param_2); template<class... A> int m_FUN_104d9e10(A...); undefined4 * __thiscall m_FUN_104da4a0(int *param_2); template<class... A> int m_FUN_104da4a0(A...); undefined4 * __thiscall m_FUN_104da4e0(int *param_2); template<class... A> int m_FUN_104da4e0(A...); undefined4 * __thiscall m_FUN_104da520(int *param_2); template<class... A> int m_FUN_104da520(A...); undefined4 * __thiscall m_FUN_104da860(byte param_2); template<class... A> int m_FUN_104da860(A...); undefined4 __thiscall m_FUN_104dacb0(undefined4 param_2,undefined4 param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_104dacb0(A...); int * __thiscall m_FUN_104daf10(int *param_2); template<class... A> int m_FUN_104daf10(A...); undefined4 __thiscall m_FUN_104daf30(undefined4 param_2); template<class... A> int m_FUN_104daf30(A...); int * __thiscall m_FUN_104daf80(int *param_2); template<class... A> int m_FUN_104daf80(A...); undefined4 __thiscall m_FUN_104db380(undefined4 param_2); template<class... A> int m_FUN_104db380(A...); undefined4 __thiscall m_FUN_104dc4b0(byte param_2); template<class... A> int m_FUN_104dc4b0(A...); undefined4 * __thiscall m_FUN_104dc4e0(byte param_2); template<class... A> int m_FUN_104dc4e0(A...); undefined4 * __thiscall m_FUN_104dc5c0(byte param_2); template<class... A> int m_FUN_104dc5c0(A...); undefined4 * __thiscall m_FUN_104dc600(byte param_2); template<class... A> int m_FUN_104dc600(A...); undefined4 __thiscall m_FUN_104dcfc0(SCIndexRange *param_2); template<class... A> int m_FUN_104dcfc0(A...); undefined4 * __thiscall m_FUN_104ddc30(undefined4 param_2); template<class... A> int m_FUN_104ddc30(A...); undefined4 * __thiscall m_FUN_104ddfd0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_104ddfd0(A...); void __thiscall m_FUN_104dfa90(int *param_2); template<class... A> int m_FUN_104dfa90(A...); int __thiscall m_FUN_104e0430(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_104e0430(A...); int __thiscall m_FUN_104e0470(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_104e0470(A...); int __thiscall m_FUN_104e04b0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_104e04b0(A...); void __thiscall m_FUN_104e1d40(undefined4 *param_2); template<class... A> int m_FUN_104e1d40(A...); void __thiscall m_FUN_104e1d90(undefined4 *param_2); template<class... A> int m_FUN_104e1d90(A...); undefined4 * __thiscall m_FUN_104e26c0(int *param_2); template<class... A> int m_FUN_104e26c0(A...); undefined4 * __thiscall m_FUN_104e2750(int *param_2); template<class... A> int m_FUN_104e2750(A...); undefined4 * __thiscall m_FUN_104e27b0(int *param_2); template<class... A> int m_FUN_104e27b0(A...); int * __thiscall m_FUN_104e4750(char param_2); template<class... A> int m_FUN_104e4750(A...); undefined4 __thiscall m_FUN_104e4e60(byte param_2); template<class... A> int m_FUN_104e4e60(A...); undefined4 * __thiscall m_FUN_104e4f50(byte param_2); template<class... A> int m_FUN_104e4f50(A...); undefined4 __thiscall m_FUN_104e4f90(byte param_2); template<class... A> int m_FUN_104e4f90(A...); undefined4 __thiscall m_FUN_104e4fc0(byte param_2); template<class... A> int m_FUN_104e4fc0(A...); void __thiscall m_FUN_104e5bc0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_104e5bc0(A...); void __thiscall m_FUN_104e5be0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_104e5be0(A...); int __thiscall m_FUN_104ea530(int param_2); template<class... A> int m_FUN_104ea530(A...); void __thiscall m_FUN_104ec340(int param_2); template<class... A> int m_FUN_104ec340(A...); void __thiscall m_FUN_104eca70(undefined4 *param_2); template<class... A> int m_FUN_104eca70(A...); void __thiscall m_FUN_104ecac0(undefined4 *param_2); template<class... A> int m_FUN_104ecac0(A...); undefined4 * __thiscall m_FUN_104eda20(byte param_2); template<class... A> int m_FUN_104eda20(A...); undefined4 __thiscall m_FUN_104eda60(byte param_2); template<class... A> int m_FUN_104eda60(A...); undefined4 * __thiscall m_FUN_104eda90(byte param_2); template<class... A> int m_FUN_104eda90(A...); undefined4 * __thiscall m_FUN_104edac0(byte param_2); template<class... A> int m_FUN_104edac0(A...); undefined4 __thiscall m_FUN_104ef330(byte param_2); template<class... A> int m_FUN_104ef330(A...); void __thiscall m_FUN_104f8a40(undefined4 param_2); template<class... A> int m_FUN_104f8a40(A...); int __thiscall m_FUN_104f8b50(SCStr *param_2); template<class... A> int m_FUN_104f8b50(A...); void __thiscall m_FUN_104f97a0(undefined4 *param_2); template<class... A> int m_FUN_104f97a0(A...); undefined4 * __thiscall m_FUN_104f9b30(int *param_2); template<class... A> int m_FUN_104f9b30(A...); undefined4 * __thiscall m_FUN_104f9bf0(int *param_2); template<class... A> int m_FUN_104f9bf0(A...); undefined4 * __thiscall m_FUN_104f9c30(int *param_2); template<class... A> int m_FUN_104f9c30(A...); undefined4 * __thiscall m_FUN_104f9ca0(int *param_2); template<class... A> int m_FUN_104f9ca0(A...); undefined4 * __thiscall m_FUN_104fbb10(byte param_2); template<class... A> int m_FUN_104fbb10(A...); undefined4 * __thiscall m_FUN_104fbb40(byte param_2); template<class... A> int m_FUN_104fbb40(A...); undefined4 __thiscall m_FUN_104fbd40(byte param_2); template<class... A> int m_FUN_104fbd40(A...); undefined4 __thiscall m_FUN_104fbd70(byte param_2); template<class... A> int m_FUN_104fbd70(A...); undefined4 * __thiscall m_FUN_104fbda0(byte param_2); template<class... A> int m_FUN_104fbda0(A...); void __thiscall m_FUN_104fc3b0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_104fc3b0(A...); void __thiscall m_FUN_104fd5b0(int *param_2); template<class... A> int m_FUN_104fd5b0(A...); void __thiscall m_FUN_104fd600(int *param_2); template<class... A> int m_FUN_104fd600(A...); void __thiscall m_FUN_104fd650(int *param_2); template<class... A> int m_FUN_104fd650(A...); uint __thiscall m_FUN_104fd890(SCStr *param_2); template<class... A> int m_FUN_104fd890(A...); void __thiscall m_FUN_104ff720(undefined4 *param_2); template<class... A> int m_FUN_104ff720(A...); undefined4 * __thiscall m_FUN_104ff770(undefined4 *param_2,SCStr *param_3); template<class... A> int m_FUN_104ff770(A...); undefined4 * __thiscall m_FUN_104ff840(undefined4 *param_2,SCStr *param_3); template<class... A> int m_FUN_104ff840(A...); void __thiscall m_FUN_105000e0(undefined4 param_2); template<class... A> int m_FUN_105000e0(A...); int * __thiscall m_FUN_105006c0(int param_2); template<class... A> int m_FUN_105006c0(A...); undefined4 * __thiscall m_FUN_10500720(int *param_2); template<class... A> int m_FUN_10500720(A...); undefined4 * __thiscall m_FUN_10500740(int *param_2); template<class... A> int m_FUN_10500740(A...); undefined4 * __thiscall m_FUN_10504810(byte param_2); template<class... A> int m_FUN_10504810(A...); undefined4 * __thiscall m_FUN_10504840(byte param_2); template<class... A> int m_FUN_10504840(A...); undefined4 * __thiscall m_FUN_10504870(byte param_2); template<class... A> int m_FUN_10504870(A...); undefined4 * __thiscall m_FUN_105048b0(byte param_2); template<class... A> int m_FUN_105048b0(A...); undefined4 * __thiscall m_FUN_105048f0(byte param_2); template<class... A> int m_FUN_105048f0(A...); undefined4 * __thiscall m_FUN_10504940(byte param_2); template<class... A> int m_FUN_10504940(A...); undefined4 * __thiscall m_FUN_10504a10(byte param_2); template<class... A> int m_FUN_10504a10(A...); undefined4 * __thiscall m_FUN_10504a40(byte param_2); template<class... A> int m_FUN_10504a40(A...); undefined4 * __thiscall m_FUN_10504a70(byte param_2); template<class... A> int m_FUN_10504a70(A...); undefined4 __thiscall m_FUN_10504aa0(byte param_2); template<class... A> int m_FUN_10504aa0(A...); undefined4 __thiscall m_FUN_10504ad0(byte param_2); template<class... A> int m_FUN_10504ad0(A...); undefined4 __thiscall m_FUN_10504b00(byte param_2); template<class... A> int m_FUN_10504b00(A...); undefined4 * __thiscall m_FUN_10504b30(byte param_2); template<class... A> int m_FUN_10504b30(A...); undefined4 __thiscall m_FUN_10504b70(byte param_2); template<class... A> int m_FUN_10504b70(A...); undefined4 * __thiscall m_FUN_10504c00(byte param_2); template<class... A> int m_FUN_10504c00(A...); undefined4 * __thiscall m_FUN_10504d70(byte param_2); template<class... A> int m_FUN_10504d70(A...); undefined4 * __thiscall m_FUN_10504da0(byte param_2); template<class... A> int m_FUN_10504da0(A...); undefined4 * __thiscall m_FUN_10504e30(byte param_2); template<class... A> int m_FUN_10504e30(A...); undefined4 __thiscall m_FUN_10504f20(byte param_2); template<class... A> int m_FUN_10504f20(A...); undefined4 __thiscall m_FUN_10504f50(byte param_2); template<class... A> int m_FUN_10504f50(A...); undefined4 __thiscall m_FUN_10504f80(byte param_2); template<class... A> int m_FUN_10504f80(A...); undefined4 __thiscall m_FUN_10505060(byte param_2); template<class... A> int m_FUN_10505060(A...); undefined4 * __thiscall m_FUN_105050a0(byte param_2); template<class... A> int m_FUN_105050a0(A...); undefined4 __thiscall m_FUN_10505160(byte param_2); template<class... A> int m_FUN_10505160(A...); undefined4 __thiscall m_FUN_10505190(byte param_2); template<class... A> int m_FUN_10505190(A...); undefined4 __thiscall m_FUN_10505340(byte param_2); template<class... A> int m_FUN_10505340(A...); undefined4 __thiscall m_FUN_10505370(byte param_2); template<class... A> int m_FUN_10505370(A...); void __thiscall m_FUN_10505b90(int *param_2); template<class... A> int m_FUN_10505b90(A...); void __thiscall m_FUN_10505d30(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4); template<class... A> int m_FUN_10505d30(A...); void __thiscall m_FUN_10505d70(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4); template<class... A> int m_FUN_10505d70(A...); SCStr * __thiscall m_FUN_10507f20(SCStr *param_2); template<class... A> int m_FUN_10507f20(A...); SCStr * __thiscall m_FUN_10507f40(SCStr *param_2); template<class... A> int m_FUN_10507f40(A...); SCStr * __thiscall m_FUN_10507f60(SCStr *param_2); template<class... A> int m_FUN_10507f60(A...); SCStr * __thiscall m_FUN_10508260(SCStr *param_2); template<class... A> int m_FUN_10508260(A...); SCStr * __thiscall m_FUN_10508280(SCStr *param_2); template<class... A> int m_FUN_10508280(A...); SCStr * __thiscall m_FUN_105082a0(SCStr *param_2); template<class... A> int m_FUN_105082a0(A...); SCStr * __thiscall m_FUN_105082c0(SCStr *param_2); template<class... A> int m_FUN_105082c0(A...); SCStr * __thiscall m_FUN_10508ad0(SCStr *param_2,int param_3); template<class... A> int m_FUN_10508ad0(A...); undefined4 * __thiscall m_FUN_105095e0(undefined4 *param_2,undefined4 *param_3); template<class... A> int m_FUN_105095e0(A...); undefined4 * __thiscall m_FUN_10509620(undefined4 *param_2); template<class... A> int m_FUN_10509620(A...); SCStr * __thiscall m_FUN_10509650(SCStr *param_2); template<class... A> int m_FUN_10509650(A...); undefined4 __thiscall m_FUN_10509980(undefined4 param_2); template<class... A> int m_FUN_10509980(A...); SCStr * __thiscall m_FUN_10509c60(SCStr *param_2); template<class... A> int m_FUN_10509c60(A...); void __thiscall m_FUN_1050ae30(int param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1050ae30(A...); void __thiscall m_FUN_1050ea60(int param_2); template<class... A> int m_FUN_1050ea60(A...); undefined4 * __thiscall m_FUN_1050eb60(int *param_2); template<class... A> int m_FUN_1050eb60(A...); undefined4 * __thiscall m_FUN_1050eba0(int *param_2); template<class... A> int m_FUN_1050eba0(A...); undefined4 * __thiscall m_FUN_1050ebe0(int *param_2); template<class... A> int m_FUN_1050ebe0(A...); undefined4 * __thiscall m_FUN_1050ec40(int *param_2); template<class... A> int m_FUN_1050ec40(A...); undefined4 * __thiscall m_FUN_105109f0(byte param_2); template<class... A> int m_FUN_105109f0(A...); undefined4 * __thiscall m_FUN_10510a40(byte param_2); template<class... A> int m_FUN_10510a40(A...); undefined4 __thiscall m_FUN_10510b40(byte param_2); template<class... A> int m_FUN_10510b40(A...); undefined4 * __thiscall m_FUN_10510c40(byte param_2); template<class... A> int m_FUN_10510c40(A...); void __thiscall m_FUN_10510d30(int param_2); template<class... A> int m_FUN_10510d30(A...); void __thiscall m_FUN_10510d60(undefined4 *param_2); template<class... A> int m_FUN_10510d60(A...); void __thiscall m_FUN_10510db0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4); template<class... A> int m_FUN_10510db0(A...); SCStr * __thiscall m_FUN_10513950(SCStr *param_2,undefined4 param_3); template<class... A> int m_FUN_10513950(A...); SCStr * __thiscall m_FUN_10513990(SCStr *param_2); template<class... A> int m_FUN_10513990(A...); undefined4 * __thiscall m_FUN_10515050(undefined4 *param_2,undefined4 *param_3); template<class... A> int m_FUN_10515050(A...); int * __thiscall m_FUN_105168d0(int *param_2); template<class... A> int m_FUN_105168d0(A...); int * __thiscall m_FUN_105169c0(int *param_2); template<class... A> int m_FUN_105169c0(A...); int * __thiscall m_FUN_10516c90(int *param_2); template<class... A> int m_FUN_10516c90(A...); void __thiscall m_FUN_1051b580(int param_2); template<class... A> int m_FUN_1051b580(A...); undefined4 * __thiscall m_FUN_1051b880(int *param_2); template<class... A> int m_FUN_1051b880(A...); undefined4 * __thiscall m_FUN_1051d610(byte param_2); template<class... A> int m_FUN_1051d610(A...); undefined4 * __thiscall m_FUN_1051d640(byte param_2); template<class... A> int m_FUN_1051d640(A...); undefined4 * __thiscall m_FUN_1051d670(byte param_2); template<class... A> int m_FUN_1051d670(A...); undefined4 * __thiscall m_FUN_1051d6a0(byte param_2); template<class... A> int m_FUN_1051d6a0(A...); undefined4 * __thiscall m_FUN_1051d6d0(byte param_2); template<class... A> int m_FUN_1051d6d0(A...); undefined4 * __thiscall m_FUN_1051d700(byte param_2); template<class... A> int m_FUN_1051d700(A...); undefined4 * __thiscall m_FUN_1051d730(byte param_2); template<class... A> int m_FUN_1051d730(A...); undefined4 * __thiscall m_FUN_1051d760(byte param_2); template<class... A> int m_FUN_1051d760(A...); undefined4 __thiscall m_FUN_1051d790(byte param_2); template<class... A> int m_FUN_1051d790(A...); undefined4 __thiscall m_FUN_1051dc50(byte param_2); template<class... A> int m_FUN_1051dc50(A...); undefined4 * __thiscall m_FUN_1051dc80(byte param_2); template<class... A> int m_FUN_1051dc80(A...); undefined4 * __thiscall m_FUN_1051dcd0(byte param_2); template<class... A> int m_FUN_1051dcd0(A...); undefined4 * __thiscall m_FUN_1051dd00(byte param_2); template<class... A> int m_FUN_1051dd00(A...); void __thiscall m_FUN_1051e090(int param_2); template<class... A> int m_FUN_1051e090(A...); void __thiscall m_FUN_10523660(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10523660(A...); void __thiscall m_FUN_105236b0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_105236b0(A...); void __thiscall m_FUN_105238c0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_105238c0(A...); void __thiscall m_FUN_10525980(int param_2); template<class... A> int m_FUN_10525980(A...); void __thiscall m_FUN_105259b0(int param_2); template<class... A> int m_FUN_105259b0(A...); undefined4 * __thiscall m_FUN_10525b50(int *param_2); template<class... A> int m_FUN_10525b50(A...); undefined4 * __thiscall m_FUN_10525c00(int *param_2); template<class... A> int m_FUN_10525c00(A...); undefined4 * __thiscall m_FUN_10525c40(int *param_2); template<class... A> int m_FUN_10525c40(A...); undefined4 * __thiscall m_FUN_10525ca0(int *param_2); template<class... A> int m_FUN_10525ca0(A...); undefined4 * __thiscall m_FUN_1052ad80(byte param_2); template<class... A> int m_FUN_1052ad80(A...); undefined4 * __thiscall m_FUN_1052adb0(byte param_2); template<class... A> int m_FUN_1052adb0(A...); undefined4 * __thiscall m_FUN_1052ade0(byte param_2); template<class... A> int m_FUN_1052ade0(A...); undefined4 __thiscall m_FUN_1052ae10(byte param_2); template<class... A> int m_FUN_1052ae10(A...); undefined4 * __thiscall m_FUN_1052ae40(byte param_2); template<class... A> int m_FUN_1052ae40(A...); undefined4 __thiscall m_FUN_1052ae70(byte param_2); template<class... A> int m_FUN_1052ae70(A...); undefined4 * __thiscall m_FUN_1052aea0(byte param_2); template<class... A> int m_FUN_1052aea0(A...); undefined4 * __thiscall m_FUN_1052b200(byte param_2); template<class... A> int m_FUN_1052b200(A...); undefined4 * __thiscall m_FUN_1052b230(byte param_2); template<class... A> int m_FUN_1052b230(A...); undefined4 * __thiscall m_FUN_1052b4a0(byte param_2); template<class... A> int m_FUN_1052b4a0(A...); undefined4 * __thiscall m_FUN_1052bbf0(byte param_2); template<class... A> int m_FUN_1052bbf0(A...); undefined4 * __thiscall m_FUN_1052bfd0(byte param_2); template<class... A> int m_FUN_1052bfd0(A...); undefined4 * __thiscall m_FUN_1052c000(byte param_2); template<class... A> int m_FUN_1052c000(A...); undefined4 __thiscall m_FUN_1052c210(byte param_2); template<class... A> int m_FUN_1052c210(A...); undefined4 * __thiscall m_FUN_1052c590(byte param_2); template<class... A> int m_FUN_1052c590(A...); undefined4 * __thiscall m_FUN_1052c5d0(byte param_2); template<class... A> int m_FUN_1052c5d0(A...); undefined4 * __thiscall m_FUN_1052c710(byte param_2); template<class... A> int m_FUN_1052c710(A...); void __thiscall m_FUN_1052da20(int *param_2); template<class... A> int m_FUN_1052da20(A...); void __thiscall m_FUN_1052da70(int *param_2); template<class... A> int m_FUN_1052da70(A...); void __thiscall m_FUN_1052dac0(int *param_2); template<class... A> int m_FUN_1052dac0(A...); void __thiscall m_FUN_1052db10(int *param_2); template<class... A> int m_FUN_1052db10(A...); void __thiscall m_FUN_1052db60(int *param_2); template<class... A> int m_FUN_1052db60(A...); void __thiscall m_FUN_1052dbb0(int *param_2); template<class... A> int m_FUN_1052dbb0(A...); void __thiscall m_FUN_1052dc00(int param_2); template<class... A> int m_FUN_1052dc00(A...); void __thiscall m_FUN_1052dc30(int param_2); template<class... A> int m_FUN_1052dc30(A...); undefined4 __thiscall m_FUN_10533c20(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10533c20(A...); bool __thiscall m_FUN_10534e40(int param_2); template<class... A> int m_FUN_10534e40(A...); SCStr * __thiscall m_FUN_10534fc0(SCStr *param_2); template<class... A> int m_FUN_10534fc0(A...); int * __thiscall m_FUN_10535380(int *param_2); template<class... A> int m_FUN_10535380(A...); undefined4 __thiscall m_FUN_10535630(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10535630(A...); undefined4 __thiscall m_FUN_10535770(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10535770(A...); undefined4 __thiscall m_FUN_105357c0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_105357c0(A...); int * __thiscall m_FUN_10535a90(int *param_2); template<class... A> int m_FUN_10535a90(A...); int * __thiscall m_FUN_10535ae0(int *param_2); template<class... A> int m_FUN_10535ae0(A...); int * __thiscall m_FUN_10535d30(int *param_2); template<class... A> int m_FUN_10535d30(A...); undefined4 __thiscall m_FUN_105361f0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_105361f0(A...); undefined4 __thiscall m_FUN_10536220(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10536220(A...); SCStr * __thiscall m_FUN_10536250(SCStr *param_2); template<class... A> int m_FUN_10536250(A...); SCStr * __thiscall m_FUN_10536270(SCStr *param_2); template<class... A> int m_FUN_10536270(A...); SCStr * __thiscall m_FUN_10536290(SCStr *param_2); template<class... A> int m_FUN_10536290(A...); undefined4 __thiscall m_FUN_10541b60(SCStr *param_2); template<class... A> int m_FUN_10541b60(A...); undefined4 *  __thiscall m_FUN_1054af60(int param_2,int param_3); template<class... A> int m_FUN_1054af60(A...); void __thiscall m_FUN_1054b5b0(undefined4 param_2,undefined8 param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1054b5b0(A...); void __thiscall m_FUN_1054b710(SCStr *param_2); template<class... A> int m_FUN_1054b710(A...); void __thiscall m_FUN_1054b740(SCStr *param_2); template<class... A> int m_FUN_1054b740(A...); void __thiscall m_FUN_1054bd00(char param_2); template<class... A> int m_FUN_1054bd00(A...); undefined4 * __thiscall m_FUN_1054c390(int *param_2); template<class... A> int m_FUN_1054c390(A...); undefined4 * __thiscall m_FUN_1054cab0(byte param_2); template<class... A> int m_FUN_1054cab0(A...); undefined4 * __thiscall m_FUN_1054cae0(byte param_2); template<class... A> int m_FUN_1054cae0(A...); undefined4 * __thiscall m_FUN_1054cb20(byte param_2); template<class... A> int m_FUN_1054cb20(A...); SCStr * __thiscall m_FUN_1054cfc0(SCStr *param_2); template<class... A> int m_FUN_1054cfc0(A...); void __thiscall m_FUN_1054e0e0(undefined4 param_2); template<class... A> int m_FUN_1054e0e0(A...); int __thiscall m_FUN_1054e1f0(SCStr *param_2); template<class... A> int m_FUN_1054e1f0(A...); void __thiscall m_FUN_1054ea60(undefined4 *param_2); template<class... A> int m_FUN_1054ea60(A...); undefined4 * __thiscall m_FUN_1054edd0(int *param_2); template<class... A> int m_FUN_1054edd0(A...); undefined4 * __thiscall m_FUN_1054ee30(int *param_2); template<class... A> int m_FUN_1054ee30(A...); undefined4 * __thiscall m_FUN_1054ee70(int *param_2); template<class... A> int m_FUN_1054ee70(A...); undefined4 * __thiscall m_FUN_1054ee90(int *param_2); template<class... A> int m_FUN_1054ee90(A...); undefined4 * __thiscall m_FUN_10550820(byte param_2); template<class... A> int m_FUN_10550820(A...); undefined4 __thiscall m_FUN_10550850(byte param_2); template<class... A> int m_FUN_10550850(A...); undefined4 * __thiscall m_FUN_10550af0(byte param_2); template<class... A> int m_FUN_10550af0(A...); undefined4 __thiscall m_FUN_10550b20(byte param_2); template<class... A> int m_FUN_10550b20(A...); undefined4 __thiscall m_FUN_10550b50(byte param_2); template<class... A> int m_FUN_10550b50(A...); undefined4 __thiscall m_FUN_10550c50(byte param_2); template<class... A> int m_FUN_10550c50(A...); void __thiscall m_FUN_10550ea0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10550ea0(A...); void __thiscall m_FUN_10552010(int *param_2); template<class... A> int m_FUN_10552010(A...); void __thiscall m_FUN_105564a0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_105564a0(A...); void __thiscall m_FUN_10556c40(undefined4 *param_2); template<class... A> int m_FUN_10556c40(A...); undefined4 * __thiscall m_FUN_105587d0(int *param_2); template<class... A> int m_FUN_105587d0(A...); undefined4 * __thiscall m_FUN_10558810(int *param_2); template<class... A> int m_FUN_10558810(A...); undefined4 * __thiscall m_FUN_10558850(int *param_2); template<class... A> int m_FUN_10558850(A...); undefined4 * __thiscall m_FUN_105588b0(int *param_2); template<class... A> int m_FUN_105588b0(A...); undefined4 * __thiscall m_FUN_105588f0(int *param_2); template<class... A> int m_FUN_105588f0(A...); undefined4 * __thiscall m_FUN_1055a570(byte param_2); template<class... A> int m_FUN_1055a570(A...); undefined4 * __thiscall m_FUN_1055a5a0(byte param_2); template<class... A> int m_FUN_1055a5a0(A...); undefined4 * __thiscall m_FUN_1055a910(byte param_2); template<class... A> int m_FUN_1055a910(A...); undefined4 __thiscall m_FUN_1055abe0(byte param_2); template<class... A> int m_FUN_1055abe0(A...); undefined4 * __thiscall m_FUN_1055afd0(byte param_2); template<class... A> int m_FUN_1055afd0(A...); void __thiscall m_FUN_1055b730(int *param_2); template<class... A> int m_FUN_1055b730(A...); SCStr * __thiscall m_FUN_1055d3c0(SCStr *param_2); template<class... A> int m_FUN_1055d3c0(A...); SCStr * __thiscall m_FUN_1055d400(SCStr *param_2); template<class... A> int m_FUN_1055d400(A...); SCStr * __thiscall m_FUN_1055d580(SCStr *param_2); template<class... A> int m_FUN_1055d580(A...); SCStr * __thiscall m_FUN_1055d5c0(SCStr *param_2); template<class... A> int m_FUN_1055d5c0(A...); SCStr * __thiscall m_FUN_1055db90(SCStr *param_2); template<class... A> int m_FUN_1055db90(A...); SCStr * __thiscall m_FUN_1055dbe0(SCStr *param_2); template<class... A> int m_FUN_1055dbe0(A...); int * __thiscall m_FUN_1055dc90(int *param_2); template<class... A> int m_FUN_1055dc90(A...); undefined4 * __thiscall m_FUN_105600b0(int *param_2); template<class... A> int m_FUN_105600b0(A...); undefined4 * __thiscall m_FUN_105600f0(int *param_2); template<class... A> int m_FUN_105600f0(A...); void __thiscall m_FUN_10562940(int param_2); template<class... A> int m_FUN_10562940(A...); void __thiscall m_FUN_10562970(int param_2); template<class... A> int m_FUN_10562970(A...); void __thiscall m_FUN_105629a0(int param_2); template<class... A> int m_FUN_105629a0(A...); void __thiscall m_FUN_105629d0(int param_2); template<class... A> int m_FUN_105629d0(A...); undefined4 * __thiscall m_FUN_10562e90(int *param_2); template<class... A> int m_FUN_10562e90(A...); undefined4 * __thiscall m_FUN_10562ed0(int *param_2); template<class... A> int m_FUN_10562ed0(A...); undefined4 * __thiscall m_FUN_10562f10(int *param_2); template<class... A> int m_FUN_10562f10(A...); undefined4 * __thiscall m_FUN_10562f50(int *param_2); template<class... A> int m_FUN_10562f50(A...); undefined4 * __thiscall m_FUN_10562f90(int *param_2); template<class... A> int m_FUN_10562f90(A...); undefined4 * __thiscall m_FUN_10562ff0(int *param_2); template<class... A> int m_FUN_10562ff0(A...); undefined4 * __thiscall m_FUN_10563030(int *param_2); template<class... A> int m_FUN_10563030(A...); undefined4 * __thiscall m_FUN_10563070(int *param_2); template<class... A> int m_FUN_10563070(A...); undefined4 * __thiscall m_FUN_105630b0(int *param_2); template<class... A> int m_FUN_105630b0(A...); undefined4 * __thiscall m_FUN_10563120(int *param_2); template<class... A> int m_FUN_10563120(A...); undefined4 __thiscall m_FUN_10566db0(int param_2); template<class... A> int m_FUN_10566db0(A...); undefined4 * __thiscall m_FUN_10566ea0(byte param_2); template<class... A> int m_FUN_10566ea0(A...); undefined4 * __thiscall m_FUN_10566ed0(byte param_2); template<class... A> int m_FUN_10566ed0(A...); undefined4 __thiscall m_FUN_10566f10(byte param_2); template<class... A> int m_FUN_10566f10(A...); undefined4 * __thiscall m_FUN_10566f40(byte param_2); template<class... A> int m_FUN_10566f40(A...); undefined4 * __thiscall m_FUN_10566f90(byte param_2); template<class... A> int m_FUN_10566f90(A...); undefined4 * __thiscall m_FUN_10566fe0(byte param_2); template<class... A> int m_FUN_10566fe0(A...); undefined4 * __thiscall m_FUN_10567030(byte param_2); template<class... A> int m_FUN_10567030(A...); undefined4 * __thiscall m_FUN_10567320(byte param_2); template<class... A> int m_FUN_10567320(A...); undefined4 * __thiscall m_FUN_10567460(byte param_2); template<class... A> int m_FUN_10567460(A...); undefined4 * __thiscall m_FUN_10567ae0(byte param_2); template<class... A> int m_FUN_10567ae0(A...); undefined4 __thiscall m_FUN_10567b20(byte param_2); template<class... A> int m_FUN_10567b20(A...); void __thiscall m_FUN_1056d380(int *param_2); template<class... A> int m_FUN_1056d380(A...); void __thiscall m_FUN_1056d3d0(int *param_2); template<class... A> int m_FUN_1056d3d0(A...); void __thiscall m_FUN_1056d420(int param_2); template<class... A> int m_FUN_1056d420(A...); void __thiscall m_FUN_1056d450(int param_2); template<class... A> int m_FUN_1056d450(A...); void __thiscall m_FUN_1056d480(int param_2); template<class... A> int m_FUN_1056d480(A...); void __thiscall m_FUN_1056d4b0(int param_2); template<class... A> int m_FUN_1056d4b0(A...); SCStr * __thiscall m_FUN_10574790(SCStr *param_2); template<class... A> int m_FUN_10574790(A...); SCStr * __thiscall m_FUN_105747e0(SCStr *param_2); template<class... A> int m_FUN_105747e0(A...); SCStr * __thiscall m_FUN_105749b0(SCStr *param_2); template<class... A> int m_FUN_105749b0(A...); SCStr * __thiscall m_FUN_10574e60(SCStr *param_2); template<class... A> int m_FUN_10574e60(A...); void __thiscall m_FUN_10576160(int *param_2); template<class... A> int m_FUN_10576160(A...); undefined4 * __thiscall m_FUN_10579850(int *param_2); template<class... A> int m_FUN_10579850(A...); undefined4 * __thiscall m_FUN_10579890(int *param_2); template<class... A> int m_FUN_10579890(A...); undefined4 * __thiscall m_FUN_105798f0(int *param_2); template<class... A> int m_FUN_105798f0(A...); undefined4 * __thiscall m_FUN_10579960(int *param_2); template<class... A> int m_FUN_10579960(A...); undefined4 * __thiscall m_FUN_105799a0(int *param_2); template<class... A> int m_FUN_105799a0(A...); undefined4 * __thiscall m_FUN_1057c200(byte param_2); template<class... A> int m_FUN_1057c200(A...); undefined4 * __thiscall m_FUN_1057c250(byte param_2); template<class... A> int m_FUN_1057c250(A...); undefined4 * __thiscall m_FUN_1057c2a0(byte param_2); template<class... A> int m_FUN_1057c2a0(A...); undefined4 * __thiscall m_FUN_1057c2f0(byte param_2); template<class... A> int m_FUN_1057c2f0(A...); undefined4 __thiscall m_FUN_1057ca70(byte param_2); template<class... A> int m_FUN_1057ca70(A...); undefined4 * __thiscall m_FUN_1057cdf0(byte param_2); template<class... A> int m_FUN_1057cdf0(A...); void __thiscall m_FUN_1057d590(void); template<class... A> int m_FUN_1057d590(A...); SCStr * __thiscall m_FUN_10581a60(SCStr *param_2); template<class... A> int m_FUN_10581a60(A...); bool __thiscall m_FUN_10585890(undefined4 param_2); template<class... A> int m_FUN_10585890(A...); undefined4 __thiscall m_FUN_10585f20(undefined4 param_2); template<class... A> int m_FUN_10585f20(A...); undefined4 * __thiscall m_FUN_10586670(int *param_2); template<class... A> int m_FUN_10586670(A...); undefined4 * __thiscall m_FUN_105866b0(int *param_2); template<class... A> int m_FUN_105866b0(A...); undefined4 * __thiscall m_FUN_10586710(int *param_2); template<class... A> int m_FUN_10586710(A...); undefined4 * __thiscall m_FUN_10588fe0(byte param_2); template<class... A> int m_FUN_10588fe0(A...); undefined4 * __thiscall m_FUN_10589010(byte param_2); template<class... A> int m_FUN_10589010(A...); undefined4 * __thiscall m_FUN_10589040(byte param_2); template<class... A> int m_FUN_10589040(A...); undefined4 __thiscall m_FUN_10589080(byte param_2); template<class... A> int m_FUN_10589080(A...); undefined4 __thiscall m_FUN_10589670(byte param_2); template<class... A> int m_FUN_10589670(A...); undefined4 * __thiscall m_FUN_105897c0(byte param_2); template<class... A> int m_FUN_105897c0(A...); undefined4 * __thiscall m_FUN_105897f0(byte param_2); template<class... A> int m_FUN_105897f0(A...); undefined4 * __thiscall m_FUN_10589820(byte param_2); template<class... A> int m_FUN_10589820(A...); SCStr * __thiscall m_FUN_1058de30(SCStr *param_2); template<class... A> int m_FUN_1058de30(A...); SCStr * __thiscall m_FUN_1058de60(SCStr *param_2); template<class... A> int m_FUN_1058de60(A...); int __thiscall m_FUN_1058ec70(int param_2); template<class... A> int m_FUN_1058ec70(A...); SCStr * __thiscall m_FUN_10590620(SCStr *param_2); template<class... A> int m_FUN_10590620(A...); undefined4 __thiscall m_FUN_10590f60(undefined4 param_2); template<class... A> int m_FUN_10590f60(A...); undefined4 __thiscall m_FUN_10590f80(undefined4 param_2); template<class... A> int m_FUN_10590f80(A...); void __thiscall m_FUN_105917c0(undefined4 param_2); template<class... A> int m_FUN_105917c0(A...); void __thiscall m_FUN_10592e90(undefined4 param_2); template<class... A> int m_FUN_10592e90(A...); void __thiscall m_FUN_10593ce0(undefined4 param_2); template<class... A> int m_FUN_10593ce0(A...); int __thiscall m_FUN_10593dd0(SCStr *param_2); template<class... A> int m_FUN_10593dd0(A...); undefined4 * __thiscall m_FUN_10594990(int *param_2); template<class... A> int m_FUN_10594990(A...); undefined4 * __thiscall m_FUN_105949f0(int *param_2); template<class... A> int m_FUN_105949f0(A...); undefined4 __thiscall m_FUN_10595a80(byte param_2); template<class... A> int m_FUN_10595a80(A...); undefined4 __thiscall m_FUN_10595ab0(byte param_2); template<class... A> int m_FUN_10595ab0(A...); void __thiscall m_FUN_10595f70(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10595f70(A...); void __thiscall m_FUN_10596a90(int *param_2); template<class... A> int m_FUN_10596a90(A...); int __thiscall m_FUN_1059b720(uint *param_2); template<class... A> int m_FUN_1059b720(A...); undefined4 __thiscall m_FUN_1059c3d0(byte param_2); template<class... A> int m_FUN_1059c3d0(A...); undefined4 * __thiscall m_FUN_1059da00(int *param_2); template<class... A> int m_FUN_1059da00(A...); int * __thiscall m_FUN_1059e630(int *param_2); template<class... A> int m_FUN_1059e630(A...); int __thiscall m_FUN_1059f160(int *param_2); template<class... A> int m_FUN_1059f160(A...); undefined4 * __thiscall m_FUN_1059ff10(undefined4 param_2); template<class... A> int m_FUN_1059ff10(A...); undefined4 * __thiscall m_FUN_1059ff40(undefined4 param_2); template<class... A> int m_FUN_1059ff40(A...); undefined4 __thiscall m_FUN_105a0c80(byte param_2); template<class... A> int m_FUN_105a0c80(A...); undefined4 __thiscall m_FUN_105a0cb0(byte param_2); template<class... A> int m_FUN_105a0cb0(A...); undefined4 * __thiscall m_FUN_105a0d80(byte param_2); template<class... A> int m_FUN_105a0d80(A...); bool __thiscall m_FUN_105a2bb0(int param_2); template<class... A> int m_FUN_105a2bb0(A...); bool __thiscall m_FUN_105a2bf0(int param_2); template<class... A> int m_FUN_105a2bf0(A...); };

extern int FUN_100517a8(...);
extern int FUN_10065348(...);
extern int FUN_1006aac8(...);
extern int FUN_10070892(...);
extern int FUN_104ab710(...);
extern int LOCK(...);
extern int SCThreadSafeInc(...);
extern int UNLOCK(...);
extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern __declspec(dllimport) int _time64(...);
extern __declspec(dllimport) int atoi(...);
extern int createPropertyBag(...);
extern int createSCIntArray(...);
extern int deselectAll(...);
extern int failed(...);
extern int operator_new(...);
extern __declspec(dllimport) int strtoul(...);
extern int thunk_FUN_101a2c70(...);
extern int thunk_FUN_101b9ba0(...);
extern int thunk_FUN_101ba0d0(...);
extern int thunk_FUN_101c42f0(...);
extern int thunk_FUN_101c6ae0(...);
extern int thunk_FUN_101e7620(...);
extern int thunk_FUN_101eb2b0(...);
template<class... A> int __stdcall thunk_FUN_101eca20(A...);
extern int thunk_FUN_101ed0d0(...);
extern int thunk_FUN_101ed5f0(...);
extern int thunk_FUN_101f1c60(...);
extern int thunk_FUN_101f1cd0(...);
extern int thunk_FUN_101f2770(...);
extern int thunk_FUN_101ff410(...);
extern int thunk_FUN_10202e00(...);
template<class... A> int __stdcall thunk_FUN_102082f0(A...);
extern int thunk_FUN_10208940(...);
extern int thunk_FUN_10208c50(...);
extern int thunk_FUN_1020b530(...);
extern int thunk_FUN_1020fe60(...);
extern int thunk_FUN_10210390(...);
extern int thunk_FUN_102105a0(...);
template<class... A> int __stdcall thunk_FUN_10210700(A...);
extern int thunk_FUN_102111f0(...);
extern int thunk_FUN_10217af0(...);
extern int thunk_FUN_10219a00(...);
extern int thunk_FUN_1021bf80(...);
extern int thunk_FUN_1021cc40(...);
extern int thunk_FUN_102207b0(...);
extern int thunk_FUN_10225d70(...);
template<class... A> int __stdcall thunk_FUN_1026e620(A...);
extern int thunk_FUN_102d65b0(...);
extern int thunk_FUN_103beae0(...);
template<class... A> int __stdcall thunk_FUN_103cb6d0(A...);
extern int thunk_FUN_103d60a0(...);
extern int thunk_FUN_103d61d0(...);
template<class... A> int __stdcall thunk_FUN_103d63d0(A...);
template<class... A> int __stdcall thunk_FUN_103d65f0(A...);
extern int thunk_FUN_103d6930(...);
template<class... A> int __stdcall thunk_FUN_103f6890(A...);
extern int thunk_FUN_103f6950(...);
extern int thunk_FUN_103f6da0(...);
extern int thunk_FUN_103f6e10(...);
extern int thunk_FUN_103fa3e0(...);
extern int thunk_FUN_103fa4d0(...);
extern int thunk_FUN_103fa5c0(...);
extern int thunk_FUN_103fa6b0(...);
extern int thunk_FUN_103fb0f0(...);
extern int thunk_FUN_10400590(...);
extern int thunk_FUN_10405f90(...);
template<class... A> int __stdcall thunk_FUN_10406340(A...);
extern int thunk_FUN_10406570(...);
extern int thunk_FUN_10408520(...);
extern int thunk_FUN_1040bfe0(...);
template<class... A> int __stdcall thunk_FUN_1040fad0(A...);
extern int thunk_FUN_1040fdd0(...);
extern int thunk_FUN_1040fe70(...);
template<class... A> int __stdcall thunk_FUN_10410310(A...);
extern int thunk_FUN_10416b30(...);
extern int thunk_FUN_1041d2b0(...);
extern int thunk_FUN_10423b10(...);
extern int thunk_FUN_1042a9f0(...);
extern int thunk_FUN_1042f680(...);
extern int thunk_FUN_10430fa0(...);
extern int thunk_FUN_10431980(...);
extern int thunk_FUN_10431e10(...);
extern int thunk_FUN_10432ee0(...);
extern int thunk_FUN_10433e70(...);
extern int thunk_FUN_10436400(...);
template<class... A> int __stdcall thunk_FUN_10437740(A...);
extern int thunk_FUN_1043a670(...);
extern int thunk_FUN_1043d850(...);
extern int thunk_FUN_1044b330(...);
extern int thunk_FUN_1044eaf0(...);
extern int thunk_FUN_10455370(...);
extern int thunk_FUN_10457320(...);
extern int thunk_FUN_1045af20(...);
extern int thunk_FUN_1045c280(...);
extern int thunk_FUN_10461ec0(...);
extern int thunk_FUN_104693f0(...);
extern int thunk_FUN_1046ba90(...);
extern int thunk_FUN_1046bd60(...);
extern int thunk_FUN_1046c9a0(...);
extern int thunk_FUN_1046d3a0(...);
extern int thunk_FUN_1046fbd0(...);
extern int thunk_FUN_1046fe40(...);
extern int thunk_FUN_104706b0(...);
extern int thunk_FUN_104775f0(...);
template<class... A> int __stdcall thunk_FUN_10478f70(A...);
extern int thunk_FUN_1047a750(...);
extern int thunk_FUN_1047d200(...);
extern int thunk_FUN_1047da40(...);
extern int thunk_FUN_1047dde0(...);
extern int thunk_FUN_1047ff40(...);
extern int thunk_FUN_10485450(...);
extern int thunk_FUN_104963d0(...);
extern int thunk_FUN_10498d70(...);
extern int thunk_FUN_10499dd0(...);
extern int thunk_FUN_1049ae90(...);
extern int thunk_FUN_104a2320(...);
extern int thunk_FUN_104a2ff0(...);
extern int thunk_FUN_104a36d0(...);
extern int thunk_FUN_104a47b0(...);
extern int thunk_FUN_104a9270(...);
extern int thunk_FUN_104aa9d0(...);
extern int thunk_FUN_104ad290(...);
extern int thunk_FUN_104ae600(...);
extern int thunk_FUN_104aef40(...);
extern int thunk_FUN_104b43f0(...);
extern int thunk_FUN_104ba760(...);
extern int thunk_FUN_104bd050(...);
extern int thunk_FUN_104bd1e0(...);
extern int thunk_FUN_104c1380(...);
extern int thunk_FUN_104c49a0(...);
extern int thunk_FUN_104ca270(...);
extern int thunk_FUN_104ccb60(...);
extern int thunk_FUN_104d4740(...);
extern int thunk_FUN_104d5310(...);
extern int thunk_FUN_104d53b0(...);
extern int thunk_FUN_104d6780(...);
template<class... A> int __stdcall thunk_FUN_104d68b0(A...);
extern int thunk_FUN_104d76e0(...);
extern int thunk_FUN_104d98f0(...);
extern int thunk_FUN_104d9cc0(...);
extern int thunk_FUN_104da760(...);
extern int thunk_FUN_104dc060(...);
extern int thunk_FUN_104dec20(...);
extern int thunk_FUN_104dfcb0(...);
extern int thunk_FUN_104dfd50(...);
template<class... A> int __stdcall thunk_FUN_104dff70(A...);
template<class... A> int __stdcall thunk_FUN_104e0170(A...);
template<class... A> int __stdcall thunk_FUN_104e04f0(A...);
template<class... A> int __stdcall thunk_FUN_104e05c0(A...);
extern int thunk_FUN_104e0690(...);
extern int thunk_FUN_104e0760(...);
extern int thunk_FUN_104e0880(...);
template<class... A> int __stdcall thunk_FUN_104e0ca0(A...);
template<class... A> int __stdcall thunk_FUN_104e0f40(A...);
template<class... A> int __stdcall thunk_FUN_104e11c0(A...);
extern int thunk_FUN_104e3e20(...);
extern int thunk_FUN_104e40f0(...);
extern int thunk_FUN_104e41c0(...);
extern int thunk_FUN_104e5a60(...);
extern int thunk_FUN_104e5f10(...);
extern int thunk_FUN_104eae30(...);
extern int thunk_FUN_104ecc10(...);
extern int thunk_FUN_104ed870(...);
extern int thunk_FUN_104ee000(...);
extern int thunk_FUN_104eeff0(...);
extern int thunk_FUN_104f8630(...);
template<class... A> int __stdcall thunk_FUN_104f8780(A...);
extern int thunk_FUN_104f8a70(...);
extern int thunk_FUN_104f8c40(...);
extern int thunk_FUN_104f8cb0(...);
template<class... A> int __stdcall thunk_FUN_104f8fb0(A...);
extern int thunk_FUN_104fb150(...);
extern int thunk_FUN_104fb240(...);
extern int thunk_FUN_10500110(...);
extern int thunk_FUN_10500160(...);
extern int thunk_FUN_10503400(...);
extern int thunk_FUN_105034f0(...);
extern int thunk_FUN_105035b0(...);
extern int thunk_FUN_105036b0(...);
extern int thunk_FUN_10503a10(...);
extern int thunk_FUN_10503af0(...);
extern int thunk_FUN_10503c60(...);
extern int thunk_FUN_10503dd0(...);
extern int thunk_FUN_10504060(...);
extern int thunk_FUN_10504170(...);
extern int thunk_FUN_10508f40(...);
extern int thunk_FUN_10509ca0(...);
extern int thunk_FUN_10510170(...);
extern int thunk_FUN_10511190(...);
extern int thunk_FUN_105120a0(...);
extern int thunk_FUN_1051c870(...);
extern int thunk_FUN_1051cf20(...);
extern int thunk_FUN_10528dc0(...);
extern int thunk_FUN_1052a260(...);
extern int thunk_FUN_10533e90(...);
extern int thunk_FUN_1053e5d0(...);
extern int thunk_FUN_1053f430(...);
extern int thunk_FUN_10541eb0(...);
extern int thunk_FUN_1054da50(...);
template<class... A> int __stdcall thunk_FUN_1054dd50(A...);
extern int thunk_FUN_1054e110(...);
extern int thunk_FUN_1054e240(...);
extern int thunk_FUN_1054f920(...);
extern int thunk_FUN_1054ff50(...);
extern int thunk_FUN_10550020(...);
extern int thunk_FUN_105501b0(...);
extern int thunk_FUN_105551d0(...);
extern int thunk_FUN_10559da0(...);
extern int thunk_FUN_1055b780(...);
extern int thunk_FUN_105650d0(...);
extern int thunk_FUN_10566380(...);
extern int thunk_FUN_10578900(...);
extern int thunk_FUN_10579450(...);
extern int thunk_FUN_1057b850(...);
extern int thunk_FUN_105855b0(...);
extern int thunk_FUN_10585690(...);
extern int thunk_FUN_10588090(...);
extern int thunk_FUN_105888e0(...);
extern int thunk_FUN_1058bf80(...);
extern int thunk_FUN_10592970(...);
extern int thunk_FUN_10593850(...);
extern int thunk_FUN_10593d10(...);
extern int thunk_FUN_10593e20(...);
extern int thunk_FUN_10595520(...);
extern int thunk_FUN_1059b6d0(...);
extern int thunk_FUN_1059b760(...);
template<class... A> int __stdcall thunk_FUN_1059d5a0(A...);
extern int thunk_FUN_1059d940(...);
extern int thunk_FUN_1059f110(...);
extern int thunk_FUN_1059f1a0(...);
extern int thunk_FUN_105a1c80(...);
extern int thunk_FUN_105a1d20(...);
extern int thunk_FUN_1061c5e0(...);
template<class... A> int __stdcall thunk_FUN_10cf3780(A...);
extern int thunk_FUN_10d9e6c0(...);
extern int thunk_FUN_10db8460(...);
extern int thunk_FUN_10dd3060(...);
extern int thunk_FUN_10dd4b80(...);
extern int thunk_FUN_10de8ec0(...);
extern int thunk_FUN_10def0d0(...);
extern int thunk_FUN_1109aba0(...);
extern int thunk_FUN_110a5ba0(...);
extern int thunk_FUN_110adac0(...);
extern int thunk_FUN_110b0460(...);
template<class... A> int __stdcall thunk_FUN_110b2900(A...);
extern int thunk_FUN_110c1f30(...);
extern int thunk_FUN_110c2c60(...);
extern int thunk_FUN_11128910(...);
extern int thunk_FUN_11132140(...);
template<class... A> int __stdcall thunk_FUN_1113ecc0(A...);
extern int thunk_FUN_111a05c0(...);
extern int thunk_FUN_111a05e0(...);
extern int thunk_FUN_111a0620(...);
extern int thunk_FUN_111a36f0(...);
extern int thunk_FUN_111a4bc0(...);
template<class... A> int __stdcall thunk_FUN_111c0af0(A...);
extern int thunk_FUN_11202570(...);
extern int thunk_FUN_1123fce0(...);
extern int thunk_FUN_11240850(...);
extern int thunk_FUN_1124ffa0(...);
extern int thunk_FUN_11272de0(...);
extern int thunk_FUN_11285a90(...);
extern int thunk_FUN_112af4e0(...);
extern int thunk_FUN_1148a50e(...);
extern int DAT_1186d2ee;
extern int DAT_118823e4;
extern int DAT_11882ff0;
extern int DAT_118a1478;
extern int DAT_118a147c;
extern int DAT_118a1480;
extern int DAT_118a1c50;
extern int DAT_118a906c;
extern int DAT_12126b84;
extern int DAT_121a07b0;
extern int DAT_121a07b4;
extern int g_lSCObjCount;
extern int ghidra_vftable_RAsyncDataSourceListener;
extern int ghidra_vftable_RCPBrowseOperationCB;
extern int ghidra_vftable_RControlAIOOpCB;
extern int ghidra_vftable_RControlAIOOpRef;
extern int ghidra_vftable_RDataSource;
extern int ghidra_vftable_RLocationNameExtractorCB;
extern int ghidra_vftable_RProgressInfoForSCOp;
extern int ghidra_vftable_RServiceManifestCB;
extern int ghidra_vftable_RUpdateManifestProvider;
extern int ghidra_vftable_RUpnpAVTAddMultipleURIsToQueueAIOOp;
extern int ghidra_vftable_RUpnpAVTCreateSavedQueueAIOOp;
extern int ghidra_vftable_RUpnpAVTGetMediaInfoAIOOp;
extern int ghidra_vftable_RUpnpAVTPlayAIOOp;
extern int ghidra_vftable_RUpnpAVTSetAVTransportURIAIOOp;
extern int ghidra_vftable_RUpnpCDDestroyObjectAIOOp;
extern int ghidra_vftable_RUpnpCDUpdateObjectAIOOp;
extern int ghidra_vftable_RUpnpSPSetAccountNicknameXAIOOp;
extern int ghidra_vftable_RZPWifiModeDevicesEnumerator;
extern int ghidra_vftable_SCAddPlaylistAction;
extern int ghidra_vftable_SCAddQueueOp;
extern int ghidra_vftable_SCArray;
extern int ghidra_vftable_SCBrowseGroupsInfo;
extern int ghidra_vftable_SCCPInfoListDataSource;
extern int ghidra_vftable_SCContentProviderInfoViewHeaderDataSource;
extern int ghidra_vftable_SCContentSessionBrowse;
extern int ghidra_vftable_SCEnterZIPBrowseItem;
extern int ghidra_vftable_SCFavoriteAVTMetadataCB;
extern int ghidra_vftable_SCIObj;
extern int ghidra_vftable_SCIObjImpl;
extern int ghidra_vftable_SCInfoTextViewDataSource;
extern int ghidra_vftable_SCInfoViewDynamicCPMenu;
extern int ghidra_vftable_SCInfoViewHelper;
extern int ghidra_vftable_SCInteractionActionContext;
extern int ghidra_vftable_SCMusicServiceCompleteState;
extern int ghidra_vftable_SCNewWizLayer;
extern int ghidra_vftable_SCNewWizLifecycleRecorder;
extern int ghidra_vftable_SCNullParamRX;
extern int ghidra_vftable_SCOpAddFavorites;
extern int ghidra_vftable_SCOpLookupMetadata;
extern int ghidra_vftable_SCOpWithProgressInfo;
extern int ghidra_vftable_SCPlayMenuAddDescriptor;
extern int ghidra_vftable_SCPlayMenuPlayNextDescriptor;
extern int ghidra_vftable_SCRemoveMeSettingsMenu;
extern int ghidra_vftable_SCRenamePlaylistAction;
extern int ghidra_vftable_SCSettingsMenuEntitlement;
extern int ghidra_vftable_SCSettingsMenuEnumerationWithAuth;
extern int ghidra_vftable_SCSwfObjBCInternalListener;
extern int ghidra_vftable_SCSwfObjHHInternalListener;
extern int ghidra_vftable_SCSwfObjHTListener;
extern int ghidra_vftable_SCSwfObjSysListener;
extern int ghidra_vftable_SCWizardState;
extern int ghidra_vftable_std_Func_impl_no_alloc;
extern int ghidra_vftable_std_basic_ostringstream;
extern int in_EAX;
extern int in_stack_00000010;
extern int in_stack_00000014;
extern int uStack00000004;
extern int uStack_10;
extern int uStack_8;
extern int uStack_c;
extern undefined1 LAB_1050ae52[];
extern undefined1 LAB_11559cf0[];
extern undefined1 LAB_1155ff10[];
extern undefined1 LAB_11561df0[];
extern undefined1 LAB_1156be00[];
extern undefined1 LAB_1156fa80[];
extern undefined1 LAB_11573e90[];
extern undefined1 LAB_1157af80[];
extern undefined1 LAB_11582a20[];
extern undefined1 LAB_11582a50[];
extern undefined1 LAB_1158a050[];
extern undefined1 LAB_1158a080[];
extern undefined1 LAB_1158b700[];
extern undefined1 LAB_1158d570[];
extern undefined1 LAB_1158d5a0[];
extern undefined1 LAB_1158f7e0[];
extern undefined1 LAB_115982d0[];
extern undefined1 LAB_11599d40[];
extern void *ExceptionList;
undefined4 __fastcall FUN_103eb060(int param_1);
template<class... A> int FUN_103eb060(A...);
undefined4 __fastcall FUN_103eb080(int param_1);
template<class... A> int FUN_103eb080(A...);
SCStr * __stdcall FUN_103eb660(SCStr *param_1);
template<class... A> int __stdcall FUN_103eb660(A...);
SCStr * __stdcall FUN_103eb680(SCStr *param_1);
template<class... A> int __stdcall FUN_103eb680(A...);
SCStr * __stdcall FUN_103eb6a0(SCStr *param_1);
template<class... A> int __stdcall FUN_103eb6a0(A...);
SCStr * __stdcall FUN_103eb6c0(SCStr *param_1);
template<class... A> int __stdcall FUN_103eb6c0(A...);
SCStr * __stdcall FUN_103eb6e0(SCStr *param_1);
template<class... A> int __stdcall FUN_103eb6e0(A...);
SCStr * __stdcall FUN_103eb700(SCStr *param_1);
template<class... A> int __stdcall FUN_103eb700(A...);
SCStr * __stdcall FUN_103eb720(SCStr *param_1);
template<class... A> int __stdcall FUN_103eb720(A...);
SCStr * __stdcall FUN_103eb740(SCStr *param_1);
template<class... A> int __stdcall FUN_103eb740(A...);
SCStr * __stdcall FUN_103eb760(SCStr *param_1);
template<class... A> int __stdcall FUN_103eb760(A...);
SCStr * __stdcall FUN_103eb780(SCStr *param_1);
template<class... A> int __stdcall FUN_103eb780(A...);
SCStr * __stdcall FUN_103eb7a0(SCStr *param_1);
template<class... A> int __stdcall FUN_103eb7a0(A...);
SCStr * __stdcall FUN_103eb7c0(SCStr *param_1);
template<class... A> int __stdcall FUN_103eb7c0(A...);
SCStr * __stdcall FUN_103eb7e0(SCStr *param_1);
template<class... A> int __stdcall FUN_103eb7e0(A...);
SCStr * __stdcall FUN_103eb800(SCStr *param_1);
template<class... A> int __stdcall FUN_103eb800(A...);
SCStr * __stdcall FUN_103eb820(SCStr *param_1);
template<class... A> int __stdcall FUN_103eb820(A...);
SCStr * __stdcall FUN_103eb840(SCStr *param_1);
template<class... A> int __stdcall FUN_103eb840(A...);
SCStr * __stdcall FUN_103eb860(SCStr *param_1);
template<class... A> int __stdcall FUN_103eb860(A...);
undefined4 * __fastcall FUN_103f8480(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_103f8480(A...);
undefined4 * __fastcall FUN_103f84c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_103f84c0(A...);
void __fastcall FUN_103fa3c0(undefined4 *param_1);
template<class... A> int FUN_103fa3c0(A...);
void __fastcall FUN_103faa40(int param_1);
template<class... A> int FUN_103faa40(A...);
void __fastcall FUN_103faa60(int param_1);
template<class... A> int FUN_103faa60(A...);
void __fastcall FUN_103faa80(int *param_1);
template<class... A> int FUN_103faa80(A...);
void __fastcall FUN_103faab0(int *param_1);
template<class... A> int FUN_103faab0(A...);
void __fastcall FUN_103faae0(int *param_1);
template<class... A> int FUN_103faae0(A...);
void __fastcall FUN_103fab10(int *param_1);
template<class... A> int FUN_103fab10(A...);
void __fastcall FUN_103fab40(int *param_1);
template<class... A> int FUN_103fab40(A...);
void __fastcall FUN_103faba0(int *param_1);
template<class... A> int FUN_103faba0(A...);
void __fastcall FUN_103fabd0(int *param_1);
template<class... A> int FUN_103fabd0(A...);
void __fastcall FUN_103fac00(undefined4 *param_1);
template<class... A> int FUN_103fac00(A...);
void __fastcall FUN_103fad50(int param_1);
template<class... A> int FUN_103fad50(A...);
void __fastcall FUN_103fad70(int param_1);
template<class... A> int FUN_103fad70(A...);
void __fastcall FUN_103fad90(int *param_1);
template<class... A> int FUN_103fad90(A...);
void __fastcall FUN_103fadc0(int *param_1);
template<class... A> int FUN_103fadc0(A...);
void __fastcall FUN_103fadf0(int *param_1);
template<class... A> int FUN_103fadf0(A...);
void __fastcall FUN_103fae20(int *param_1);
template<class... A> int FUN_103fae20(A...);
void __fastcall FUN_103fae50(int *param_1);
template<class... A> int FUN_103fae50(A...);
void __fastcall FUN_103fae80(int *param_1);
template<class... A> int FUN_103fae80(A...);
void __fastcall FUN_103faeb0(int *param_1);
template<class... A> int FUN_103faeb0(A...);
void __fastcall FUN_103fb470(int *param_1);
template<class... A> int FUN_103fb470(A...);
int * __fastcall FUN_103fb580(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_103fb580(A...);
int * __fastcall FUN_103fb5b0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_103fb5b0(A...);
int * __fastcall FUN_103fb5e0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_103fb5e0(A...);
int * __fastcall FUN_103fb610(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_103fb610(A...);
void __fastcall FUN_103fc530(int param_1);
template<class... A> int FUN_103fc530(A...);
void __fastcall FUN_103fc550(int param_1);
template<class... A> int FUN_103fc550(A...);
void __fastcall FUN_103fd310(int *param_1);
template<class... A> int FUN_103fd310(A...);
void __fastcall FUN_103fd340(int *param_1);
template<class... A> int FUN_103fd340(A...);
void __fastcall FUN_103fd370(int *param_1);
template<class... A> int FUN_103fd370(A...);
void __fastcall FUN_103fd3a0(int *param_1);
template<class... A> int FUN_103fd3a0(A...);
void __fastcall FUN_103fd3d0(int *param_1);
template<class... A> int FUN_103fd3d0(A...);
void __fastcall FUN_103fed00(int *param_1);
template<class... A> int FUN_103fed00(A...);
void FUN_103fee70(void);
template<class... A> int FUN_103fee70(A...);
undefined4 __fastcall FUN_10400a90(int param_1);
template<class... A> int FUN_10400a90(A...);
bool __fastcall FUN_10400ad0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10400ad0(A...);
void __fastcall FUN_104017b0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_104017b0(A...);
void __fastcall FUN_10401800(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10401800(A...);
void __fastcall FUN_104038b0(int param_1);
template<class... A> int FUN_104038b0(A...);
undefined4 *  __stdcall FUN_10403b40(int param_1);
template<class... A> int __stdcall FUN_10403b40(A...);
void __stdcall FUN_10403b80(int param_1);
template<class... A> int __stdcall FUN_10403b80(A...);
void __fastcall FUN_10403dc0(undefined4 *param_1);
template<class... A> int FUN_10403dc0(A...);
undefined4 * __fastcall FUN_10407500(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10407500(A...);
undefined4 * __fastcall FUN_104076b0(undefined4 *param_1);
template<class... A> int FUN_104076b0(A...);
void __fastcall FUN_10407eb0(int *param_1);
template<class... A> int FUN_10407eb0(A...);
void __fastcall FUN_10407f10(int param_1);
template<class... A> int FUN_10407f10(A...);
void __fastcall FUN_10407f30(int *param_1);
template<class... A> int FUN_10407f30(A...);
void __fastcall FUN_10407fe0(int param_1);
template<class... A> int FUN_10407fe0(A...);
void __fastcall FUN_10408000(undefined4 *param_1);
template<class... A> int FUN_10408000(A...);
void __fastcall FUN_10408180(int *param_1);
template<class... A> int FUN_10408180(A...);
undefined4 FUN_10408c60(undefined4 param_1,SCStr *param_2);
template<class... A> int FUN_10408c60(A...);
undefined4 FUN_10408ca0(undefined4 param_1,SCStr *param_2,undefined4 param_3);
template<class... A> int FUN_10408ca0(A...);
void __fastcall FUN_10408e00(int param_1);
template<class... A> int FUN_10408e00(A...);
int __fastcall FUN_10409ef0(int param_1);
template<class... A> int FUN_10409ef0(A...);
void __fastcall FUN_10409fe0(int *param_1);
template<class... A> int FUN_10409fe0(A...);
void __fastcall FUN_1040a010(undefined4 *param_1);
template<class... A> int FUN_1040a010(A...);
void __stdcall FUN_1040a120(int param_1,int param_2);
template<class... A> int FUN_1040a120(A...);
void __fastcall FUN_1040a180(int *param_1);
template<class... A> int FUN_1040a180(A...);
undefined4 FUN_1040bfa0(undefined4 param_1,SCStr *param_2);
template<class... A> int FUN_1040bfa0(A...);
int __fastcall FUN_1040df70(int param_1);
template<class... A> int FUN_1040df70(A...);
undefined4 * __fastcall FUN_10411480(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10411480(A...);
void __fastcall FUN_10411940(undefined4 *param_1);
template<class... A> int FUN_10411940(A...);
void __fastcall FUN_104119d0(int param_1);
template<class... A> int FUN_104119d0(A...);
void __fastcall FUN_104119f0(int *param_1);
template<class... A> int FUN_104119f0(A...);
void __fastcall FUN_10411c80(undefined4 *param_1);
template<class... A> int FUN_10411c80(A...);
void __fastcall FUN_10411ca0(int *param_1);
template<class... A> int FUN_10411ca0(A...);
void __fastcall FUN_10411cd0(undefined4 *param_1);
template<class... A> int FUN_10411cd0(A...);
void __fastcall FUN_10411f30(int *param_1);
template<class... A> int FUN_10411f30(A...);
void __fastcall FUN_10411f50(int *param_1);
template<class... A> int FUN_10411f50(A...);
int __stdcall FUN_10411ff0(undefined4 param_1);
template<class... A> int __stdcall FUN_10411ff0(A...);
void __fastcall FUN_10412670(int param_1);
template<class... A> int FUN_10412670(A...);
void __fastcall FUN_10412ba0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10412ba0(A...);
void __fastcall FUN_104131d0(int *param_1);
template<class... A> int FUN_104131d0(A...);
void __fastcall FUN_10413270(undefined4 *param_1);
template<class... A> int FUN_10413270(A...);
void __fastcall FUN_10413720(int *param_1);
template<class... A> int FUN_10413720(A...);
void __fastcall FUN_10413750(undefined4 *param_1);
template<class... A> int FUN_10413750(A...);
int __fastcall FUN_10414320(int param_1);
template<class... A> int FUN_10414320(A...);
void __stdcall FUN_10415bd0(int param_1);
template<class... A> int __stdcall FUN_10415bd0(A...);
void __fastcall FUN_104167d0(undefined4 *param_1);
template<class... A> int FUN_104167d0(A...);
void __fastcall FUN_10416a90(undefined4 *param_1);
template<class... A> int FUN_10416a90(A...);
SCStr * __stdcall FUN_10419ce0(SCStr *param_1);
template<class... A> int __stdcall FUN_10419ce0(A...);
SCStr * __stdcall FUN_10419d00(SCStr *param_1);
template<class... A> int __stdcall FUN_10419d00(A...);
SCStr * __stdcall FUN_10419d20(SCStr *param_1);
template<class... A> int __stdcall FUN_10419d20(A...);
SCStr * __stdcall FUN_10419d50(SCStr *param_1);
template<class... A> int __stdcall FUN_10419d50(A...);
SCStr * __stdcall FUN_10419d70(SCStr *param_1);
template<class... A> int __stdcall FUN_10419d70(A...);
SCStr * __stdcall FUN_10419d90(SCStr *param_1);
template<class... A> int __stdcall FUN_10419d90(A...);
SCStr * __stdcall FUN_1041bff0(SCStr *param_1, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_1041bff0(A...);
SCStr * __stdcall FUN_1041c010(SCStr *param_1, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_1041c010(A...);
undefined1 __fastcall FUN_1041ca20(int param_1);
template<class... A> int FUN_1041ca20(A...);
undefined4 *  __stdcall FUN_1041d660(int param_1);
template<class... A> int __stdcall FUN_1041d660(A...);
void __stdcall FUN_1041d680(int param_1);
template<class... A> int __stdcall FUN_1041d680(A...);
void __fastcall FUN_1041fb10(int *param_1);
template<class... A> int FUN_1041fb10(A...);
void __fastcall FUN_1041fb40(int *param_1);
template<class... A> int FUN_1041fb40(A...);
void __fastcall FUN_1041fb70(int *param_1);
template<class... A> int FUN_1041fb70(A...);
void __fastcall FUN_1041fba0(int *param_1);
template<class... A> int FUN_1041fba0(A...);
void __fastcall FUN_1041fbd0(int *param_1);
template<class... A> int FUN_1041fbd0(A...);
void __fastcall FUN_1041fc00(int *param_1);
template<class... A> int FUN_1041fc00(A...);
void __fastcall FUN_1041fc30(int *param_1);
template<class... A> int FUN_1041fc30(A...);
void __fastcall FUN_1041fc60(int *param_1);
template<class... A> int FUN_1041fc60(A...);
undefined4 *  __stdcall FUN_10422740(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10422740(A...);
void __fastcall FUN_10422cf0(int *param_1);
template<class... A> int FUN_10422cf0(A...);
void __fastcall FUN_10422d20(int *param_1);
template<class... A> int FUN_10422d20(A...);
void __fastcall FUN_10422d50(int *param_1);
template<class... A> int FUN_10422d50(A...);
void __fastcall FUN_10422d80(int *param_1);
template<class... A> int FUN_10422d80(A...);
SCStr * __stdcall FUN_10422ef0(SCStr *param_1);
template<class... A> int __stdcall FUN_10422ef0(A...);
SCStr * __stdcall FUN_10422f10(SCStr *param_1);
template<class... A> int __stdcall FUN_10422f10(A...);
SCStr * __stdcall FUN_10422f30(SCStr *param_1);
template<class... A> int __stdcall FUN_10422f30(A...);
SCStr * __stdcall FUN_10422f50(SCStr *param_1);
template<class... A> int __stdcall FUN_10422f50(A...);
SCStr * __stdcall FUN_10422f70(SCStr *param_1);
template<class... A> int __stdcall FUN_10422f70(A...);
SCStr * __stdcall FUN_10422f90(SCStr *param_1);
template<class... A> int __stdcall FUN_10422f90(A...);
void __stdcall FUN_10424cf0(SCStr *param_1);
template<class... A> int __stdcall FUN_10424cf0(A...);
void __fastcall FUN_1042a730(int *param_1);
template<class... A> int FUN_1042a730(A...);
void __fastcall FUN_1042a790(int *param_1);
template<class... A> int FUN_1042a790(A...);
void __fastcall FUN_1042a7c0(int *param_1);
template<class... A> int FUN_1042a7c0(A...);
undefined4 *  __stdcall FUN_1042bb60(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_1042bb60(A...);
undefined4 *  __stdcall FUN_1042bba0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_1042bba0(A...);
void __fastcall FUN_1042bd10(int *param_1);
template<class... A> int FUN_1042bd10(A...);
void __stdcall FUN_1042cdd0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_1042cdd0(A...);
void __stdcall FUN_1042ce00(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_1042ce00(A...);
void __stdcall FUN_1042ce90(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_1042ce90(A...);
void __fastcall FUN_1042cec0(int *param_1);
template<class... A> int FUN_1042cec0(A...);
SCStr * __stdcall FUN_1042cef0(SCStr *param_1);
template<class... A> int __stdcall FUN_1042cef0(A...);
SCStr * __stdcall FUN_1042cf10(SCStr *param_1);
template<class... A> int __stdcall FUN_1042cf10(A...);
SCStr * __stdcall FUN_1042d190(SCStr *param_1);
template<class... A> int __stdcall FUN_1042d190(A...);
SCStr * __stdcall FUN_1042d1b0(SCStr *param_1);
template<class... A> int __stdcall FUN_1042d1b0(A...);
SCStr * __stdcall FUN_1042d4d0(SCStr *param_1);
template<class... A> int __stdcall FUN_1042d4d0(A...);
SCStr * __stdcall FUN_1042d500(SCStr *param_1);
template<class... A> int __stdcall FUN_1042d500(A...);
void __fastcall FUN_1042dfe0(int param_1);
template<class... A> int FUN_1042dfe0(A...);
void __fastcall FUN_1042e000(int param_1);
template<class... A> int FUN_1042e000(A...);
void __fastcall FUN_1042e110(int param_1);
template<class... A> int FUN_1042e110(A...);
void __fastcall FUN_1042e6d0(int param_1);
template<class... A> int FUN_1042e6d0(A...);
void __fastcall FUN_1042e6f0(int param_1);
template<class... A> int FUN_1042e6f0(A...);
void __fastcall FUN_1042e800(int param_1);
template<class... A> int FUN_1042e800(A...);
undefined4 * __fastcall FUN_10433550(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10433550(A...);
void __fastcall FUN_10433ba0(int *param_1);
template<class... A> int FUN_10433ba0(A...);
void __fastcall FUN_10433c00(int param_1);
template<class... A> int FUN_10433c00(A...);
void __fastcall FUN_10433c20(int *param_1);
template<class... A> int FUN_10433c20(A...);
void __fastcall FUN_10433d10(int *param_1);
template<class... A> int FUN_10433d10(A...);
void __fastcall FUN_104346e0(int param_1);
template<class... A> int FUN_104346e0(A...);
void __fastcall FUN_104350b0(int *param_1);
template<class... A> int FUN_104350b0(A...);
void __fastcall FUN_104360d0(int *param_1);
template<class... A> int FUN_104360d0(A...);
short __fastcall FUN_10436b10(int param_1);
template<class... A> int FUN_10436b10(A...);
int __fastcall FUN_10436cb0(int param_1);
template<class... A> int FUN_10436cb0(A...);
void __fastcall FUN_10437a40(int param_1);
template<class... A> int FUN_10437a40(A...);
uint __fastcall FUN_10437a70(int param_1);
template<class... A> int FUN_10437a70(A...);
uint __fastcall FUN_10437b40(int param_1);
template<class... A> int FUN_10437b40(A...);
void __stdcall FUN_104396d0(int param_1);
template<class... A> int __stdcall FUN_104396d0(A...);
void __fastcall FUN_1043a7d0(int *param_1);
template<class... A> int FUN_1043a7d0(A...);
void __fastcall FUN_1043a800(int *param_1);
template<class... A> int FUN_1043a800(A...);
void __fastcall FUN_1043a830(undefined4 *param_1);
template<class... A> int FUN_1043a830(A...);
int * __fastcall FUN_1043aa40(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_1043aa40(A...);
void __fastcall FUN_1043ae30(int *param_1);
template<class... A> int FUN_1043ae30(A...);
void __stdcall FUN_1043d490(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_1043d490(A...);
void __fastcall FUN_1043d7d0(int param_1);
template<class... A> int FUN_1043d7d0(A...);
void __fastcall FUN_1043d810(int param_1);
template<class... A> int FUN_1043d810(A...);
void __stdcall FUN_1043ee10(SCStr *param_1);
template<class... A> int __stdcall FUN_1043ee10(A...);
SCStr * __stdcall FUN_10440820(SCStr *param_1);
template<class... A> int __stdcall FUN_10440820(A...);
SCStr * __stdcall FUN_10440840(SCStr *param_1);
template<class... A> int __stdcall FUN_10440840(A...);
void __fastcall FUN_104420e0(int param_1);
template<class... A> int FUN_104420e0(A...);
void __fastcall FUN_10442130(int param_1);
template<class... A> int FUN_10442130(A...);
void __fastcall FUN_10443a10(int *param_1);
template<class... A> int FUN_10443a10(A...);
void __fastcall FUN_10443ab0(int *param_1);
template<class... A> int FUN_10443ab0(A...);
void __fastcall FUN_10443e50(int *param_1);
template<class... A> int FUN_10443e50(A...);
void __fastcall FUN_10443e70(int *param_1);
template<class... A> int FUN_10443e70(A...);
void __fastcall FUN_10444730(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10444730(A...);
void __fastcall FUN_104447e0(int *param_1);
template<class... A> int FUN_104447e0(A...);
SCStr * __stdcall FUN_10445f50(SCStr *param_1);
template<class... A> int __stdcall FUN_10445f50(A...);
SCStr * __stdcall FUN_10445f70(SCStr *param_1);
template<class... A> int __stdcall FUN_10445f70(A...);
SCStr * __stdcall FUN_10445f90(SCStr *param_1);
template<class... A> int __stdcall FUN_10445f90(A...);
SCStr * __stdcall FUN_10445fb0(SCStr *param_1);
template<class... A> int __stdcall FUN_10445fb0(A...);
SCStr * __stdcall FUN_10445fd0(SCStr *param_1);
template<class... A> int __stdcall FUN_10445fd0(A...);
void __stdcall FUN_1044e3e0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_1044e3e0(A...);
SCStr * __stdcall FUN_10450590(SCStr *param_1);
template<class... A> int __stdcall FUN_10450590(A...);
void __fastcall FUN_104521a0(undefined4 *param_1);
template<class... A> int FUN_104521a0(A...);
void __fastcall FUN_10452600(int *param_1);
template<class... A> int FUN_10452600(A...);
void __fastcall FUN_10454eb0(int *param_1);
template<class... A> int FUN_10454eb0(A...);
undefined1 __stdcall FUN_10454f00(SCStr *param_1);
template<class... A> int __stdcall FUN_10454f00(A...);
void __stdcall FUN_10454f40(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_10454f40(A...);
void __stdcall FUN_104551b0(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_104551b0(A...);
SCStr * __stdcall FUN_10458d90(SCStr *param_1);
template<class... A> int __stdcall FUN_10458d90(A...);
SCStr * __stdcall FUN_10459200(SCStr *param_1);
template<class... A> int __stdcall FUN_10459200(A...);
SCStr * __stdcall FUN_10459220(SCStr *param_1);
template<class... A> int __stdcall FUN_10459220(A...);
SCStr * __stdcall FUN_10459240(SCStr *param_1);
template<class... A> int __stdcall FUN_10459240(A...);
int __fastcall FUN_10459500(int param_1);
template<class... A> int FUN_10459500(A...);
undefined1 __stdcall FUN_10459810(SCStr *param_1);
template<class... A> int __stdcall FUN_10459810(A...);
SCStr * __stdcall FUN_1045d450(SCStr *param_1);
template<class... A> int __stdcall FUN_1045d450(A...);
void __stdcall FUN_1045f950(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_1045f950(A...);
void __fastcall FUN_10462090(int *param_1);
template<class... A> int FUN_10462090(A...);
void __fastcall FUN_104620f0(int *param_1);
template<class... A> int FUN_104620f0(A...);
void __fastcall FUN_10462120(int *param_1);
template<class... A> int FUN_10462120(A...);
int * __fastcall FUN_104625c0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_104625c0(A...);
void __stdcall FUN_10462c50(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_10462c50(A...);
void __fastcall FUN_10462d20(int *param_1);
template<class... A> int FUN_10462d20(A...);
void __fastcall FUN_10463900(int param_1);
template<class... A> int FUN_10463900(A...);
SCStr * __stdcall FUN_10464810(SCStr *param_1);
template<class... A> int __stdcall FUN_10464810(A...);
SCStr * __stdcall FUN_10464840(SCStr *param_1);
template<class... A> int __stdcall FUN_10464840(A...);
SCStr * __stdcall FUN_10464880(SCStr *param_1);
template<class... A> int __stdcall FUN_10464880(A...);
void __stdcall FUN_10468aa0(undefined4 param_1,SCStr *param_2);
template<class... A> int FUN_10468aa0(A...);
void __fastcall FUN_10468b70(int *param_1);
template<class... A> int FUN_10468b70(A...);
SCStr * __stdcall FUN_10468ba0(SCStr *param_1);
template<class... A> int __stdcall FUN_10468ba0(A...);
SCStr * __stdcall FUN_10468bc0(SCStr *param_1);
template<class... A> int __stdcall FUN_10468bc0(A...);
void __fastcall FUN_10468f90(int param_1);
template<class... A> int FUN_10468f90(A...);
void __fastcall FUN_104690c0(int param_1);
template<class... A> int FUN_104690c0(A...);
void __stdcall FUN_1046b5c0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_1046b5c0(A...);
void __stdcall FUN_1046b5f0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_1046b5f0(A...);
void __fastcall FUN_1046b780(int param_1);
template<class... A> int FUN_1046b780(A...);
void __fastcall FUN_1046b7a0(int param_1);
template<class... A> int FUN_1046b7a0(A...);
void __fastcall FUN_1046b7c0(int param_1);
template<class... A> int FUN_1046b7c0(A...);
void __fastcall FUN_1046b7e0(int param_1);
template<class... A> int FUN_1046b7e0(A...);
void __stdcall FUN_1046c660(undefined4 param_1,SCStr *param_2);
template<class... A> int FUN_1046c660(A...);
undefined4 *  __stdcall FUN_1046c890(undefined4 param_1,SCStr *param_2);
template<class... A> int FUN_1046c890(A...);
void __stdcall FUN_1046c8e0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_1046c8e0(A...);
void FUN_1046d370(void);
template<class... A> int FUN_1046d370(A...);
SCStr * __stdcall FUN_1046ee60(SCStr *param_1);
template<class... A> int __stdcall FUN_1046ee60(A...);
SCStr * __stdcall FUN_1046ee80(SCStr *param_1);
template<class... A> int __stdcall FUN_1046ee80(A...);
SCStr * __stdcall FUN_1046f110(SCStr *param_1);
template<class... A> int __stdcall FUN_1046f110(A...);
void __stdcall FUN_1046f2f0(SCStr *param_1);
template<class... A> int __stdcall FUN_1046f2f0(A...);
void __stdcall FUN_1046f590(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_1046f590(A...);
void FUN_1046f5b0(void);
template<class... A> int FUN_1046f5b0(A...);
void FUN_10470050(void);
template<class... A> int FUN_10470050(A...);
void FUN_104715b0(void);
template<class... A> int FUN_104715b0(A...);
void __fastcall FUN_10472990(int *param_1);
template<class... A> int FUN_10472990(A...);
void __fastcall FUN_104729f0(int *param_1);
template<class... A> int FUN_104729f0(A...);
void __fastcall FUN_10472a90(int *param_1);
template<class... A> int FUN_10472a90(A...);
void __fastcall FUN_10472cb0(int *param_1);
template<class... A> int FUN_10472cb0(A...);
void __fastcall FUN_10472cd0(int *param_1);
template<class... A> int FUN_10472cd0(A...);
void __fastcall FUN_104732f0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_104732f0(A...);
void __fastcall FUN_104733a0(int *param_1);
template<class... A> int FUN_104733a0(A...);
SCStr * __stdcall FUN_10473c70(SCStr *param_1);
template<class... A> int __stdcall FUN_10473c70(A...);
void __fastcall FUN_104757b0(int *param_1);
template<class... A> int FUN_104757b0(A...);
void __fastcall FUN_10475850(int *param_1);
template<class... A> int FUN_10475850(A...);
void __fastcall FUN_10475b10(int *param_1);
template<class... A> int FUN_10475b10(A...);
void __fastcall FUN_10475b30(int *param_1);
template<class... A> int FUN_10475b30(A...);
void __fastcall FUN_10476240(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10476240(A...);
void __fastcall FUN_10476310(int *param_1);
template<class... A> int FUN_10476310(A...);
SCStr * __stdcall FUN_10478100(SCStr *param_1);
template<class... A> int __stdcall FUN_10478100(A...);
SCStr * __stdcall FUN_10478120(SCStr *param_1);
template<class... A> int __stdcall FUN_10478120(A...);
SCStr * __stdcall FUN_10478140(SCStr *param_1);
template<class... A> int __stdcall FUN_10478140(A...);
void FUN_10478940(void);
template<class... A> int FUN_10478940(A...);
undefined4 *  __stdcall FUN_1047a480(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_1047a480(A...);
undefined4 *  __stdcall FUN_1047a4d0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_1047a4d0(A...);
void __stdcall FUN_1047c1c0(int param_1,int param_2);
template<class... A> int FUN_1047c1c0(A...);
void __stdcall FUN_1047c210(undefined4 param_1,SCStr *param_2);
template<class... A> int FUN_1047c210(A...);
void __fastcall FUN_10484cc0(int *param_1);
template<class... A> int FUN_10484cc0(A...);
void __fastcall FUN_10484d20(int *param_1);
template<class... A> int FUN_10484d20(A...);
void __fastcall FUN_10484d50(int *param_1);
template<class... A> int FUN_10484d50(A...);
void __fastcall FUN_10484d80(int *param_1);
template<class... A> int FUN_10484d80(A...);
void __fastcall FUN_10484db0(int *param_1);
template<class... A> int FUN_10484db0(A...);
void __fastcall FUN_10484de0(int *param_1);
template<class... A> int FUN_10484de0(A...);
void __fastcall FUN_104852e0(int *param_1);
template<class... A> int FUN_104852e0(A...);
void __fastcall FUN_10485310(int *param_1);
template<class... A> int FUN_10485310(A...);
void __fastcall FUN_10485340(int *param_1);
template<class... A> int FUN_10485340(A...);
void __fastcall FUN_10485370(int *param_1);
template<class... A> int FUN_10485370(A...);
void __fastcall FUN_104853a0(int *param_1);
template<class... A> int FUN_104853a0(A...);
void __fastcall FUN_104859a0(int *param_1);
template<class... A> int FUN_104859a0(A...);
void __fastcall FUN_104859c0(int *param_1);
template<class... A> int FUN_104859c0(A...);
void __fastcall FUN_104859e0(int *param_1);
template<class... A> int FUN_104859e0(A...);
void __fastcall FUN_10485a00(int *param_1);
template<class... A> int FUN_10485a00(A...);
void __fastcall FUN_10485a20(int *param_1);
template<class... A> int FUN_10485a20(A...);
void __fastcall FUN_10485a40(int *param_1);
template<class... A> int FUN_10485a40(A...);
void __fastcall FUN_10485a60(int *param_1);
template<class... A> int FUN_10485a60(A...);
void __fastcall FUN_10485a80(int *param_1);
template<class... A> int FUN_10485a80(A...);
void __fastcall FUN_10485aa0(int *param_1);
template<class... A> int FUN_10485aa0(A...);
void __fastcall FUN_10485ac0(int *param_1);
template<class... A> int FUN_10485ac0(A...);
void __fastcall FUN_10485ae0(int *param_1);
template<class... A> int FUN_10485ae0(A...);
void __fastcall FUN_10485b00(int *param_1);
template<class... A> int FUN_10485b00(A...);
void __fastcall FUN_10485b20(int *param_1);
template<class... A> int FUN_10485b20(A...);
void __fastcall FUN_10485b40(int *param_1);
template<class... A> int FUN_10485b40(A...);
void __fastcall FUN_10485b60(int *param_1);
template<class... A> int FUN_10485b60(A...);
void __fastcall FUN_10485b80(int *param_1);
template<class... A> int FUN_10485b80(A...);
void __fastcall FUN_10485ba0(int *param_1);
template<class... A> int FUN_10485ba0(A...);
void __fastcall FUN_10485bc0(int *param_1);
template<class... A> int FUN_10485bc0(A...);
void __fastcall FUN_10485be0(int *param_1);
template<class... A> int FUN_10485be0(A...);
void __fastcall FUN_10485c00(int *param_1);
template<class... A> int FUN_10485c00(A...);
void __fastcall FUN_10485c20(int *param_1);
template<class... A> int FUN_10485c20(A...);
void __fastcall FUN_10485c40(int *param_1);
template<class... A> int FUN_10485c40(A...);
void __fastcall FUN_10487ad0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10487ad0(A...);
void __fastcall FUN_10487af0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10487af0(A...);
undefined4 *  __fastcall FUN_10487c00(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10487c00(A...);
void __fastcall FUN_10487d00(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10487d00(A...);
void __stdcall FUN_10487dc0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10487dc0(A...);
void __fastcall FUN_10488460(int *param_1);
template<class... A> int FUN_10488460(A...);
void __fastcall FUN_10488490(int *param_1);
template<class... A> int FUN_10488490(A...);
void __fastcall FUN_104884c0(int *param_1);
template<class... A> int FUN_104884c0(A...);
void __fastcall FUN_104884f0(int *param_1);
template<class... A> int FUN_104884f0(A...);
void __fastcall FUN_10488520(int *param_1);
template<class... A> int FUN_10488520(A...);
void __fastcall FUN_104940e0(int *param_1);
template<class... A> int FUN_104940e0(A...);
undefined1 __stdcall FUN_10495570(SCStr *param_1);
template<class... A> int __stdcall FUN_10495570(A...);
undefined4 __fastcall FUN_10496b30(int param_1);
template<class... A> int FUN_10496b30(A...);
undefined4 __fastcall FUN_10496b60(int param_1);
template<class... A> int FUN_10496b60(A...);
SCStr * __stdcall FUN_1049b840(SCStr *param_1);
template<class... A> int __stdcall FUN_1049b840(A...);
SCStr * __stdcall FUN_1049b860(SCStr *param_1);
template<class... A> int __stdcall FUN_1049b860(A...);
void __fastcall FUN_1049c300(int param_1);
template<class... A> int FUN_1049c300(A...);
void __fastcall FUN_1049c4b0(int param_1);
template<class... A> int FUN_1049c4b0(A...);
void FUN_1049cc20(void);
template<class... A> int FUN_1049cc20(A...);
void __fastcall FUN_1049f230(int *param_1);
template<class... A> int FUN_1049f230(A...);
void __fastcall FUN_1049f2d0(int *param_1);
template<class... A> int FUN_1049f2d0(A...);
void __fastcall FUN_1049fba0(int *param_1);
template<class... A> int FUN_1049fba0(A...);
void __fastcall FUN_1049fbc0(int *param_1);
template<class... A> int FUN_1049fbc0(A...);
void __fastcall FUN_104a09f0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_104a09f0(A...);
void __fastcall FUN_104a0aa0(int *param_1);
template<class... A> int FUN_104a0aa0(A...);
void __stdcall FUN_104a1010(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_104a1010(A...);
void __stdcall FUN_104a1050(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_104a1050(A...);
void __stdcall FUN_104a1090(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_104a1090(A...);
void __stdcall FUN_104a10d0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_104a10d0(A...);
void __stdcall FUN_104a1f20(SCStr *param_1);
template<class... A> int __stdcall FUN_104a1f20(A...);
void __fastcall FUN_104a1f60(int param_1);
template<class... A> int FUN_104a1f60(A...);
void __fastcall FUN_104a1f80(int param_1);
template<class... A> int FUN_104a1f80(A...);
void __fastcall FUN_104a1fa0(int param_1);
template<class... A> int FUN_104a1fa0(A...);
void __fastcall FUN_104a2100(int param_1);
template<class... A> int FUN_104a2100(A...);
void __fastcall FUN_104a2120(int param_1);
template<class... A> int FUN_104a2120(A...);
void __fastcall FUN_104a2140(int param_1);
template<class... A> int FUN_104a2140(A...);
void __fastcall FUN_104a87a0(int *param_1);
template<class... A> int FUN_104a87a0(A...);
void __stdcall FUN_104a9040(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_104a9040(A...);
SCStr * __stdcall FUN_104a9070(SCStr *param_1);
template<class... A> int __stdcall FUN_104a9070(A...);
void __fastcall FUN_104a90b0(int param_1);
template<class... A> int FUN_104a90b0(A...);
void __fastcall FUN_104a90d0(int param_1);
template<class... A> int FUN_104a90d0(A...);
void __stdcall FUN_104aa940(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_104aa940(A...);
void __fastcall FUN_104aa990(int param_1);
template<class... A> int FUN_104aa990(A...);
void __fastcall FUN_104aa9b0(int param_1);
template<class... A> int FUN_104aa9b0(A...);
void __fastcall FUN_104ad3f0(int *param_1);
template<class... A> int FUN_104ad3f0(A...);
void __fastcall FUN_104ad420(int *param_1);
template<class... A> int FUN_104ad420(A...);
void __fastcall FUN_104ad450(int *param_1);
template<class... A> int FUN_104ad450(A...);
void __fastcall FUN_104ad4b0(int *param_1);
template<class... A> int FUN_104ad4b0(A...);
void __fastcall FUN_104ad4e0(int *param_1);
template<class... A> int FUN_104ad4e0(A...);
void __fastcall FUN_104ad510(int *param_1);
template<class... A> int FUN_104ad510(A...);
void __fastcall FUN_104ad630(int *param_1);
template<class... A> int FUN_104ad630(A...);
int * __fastcall FUN_104ad670(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_104ad670(A...);
undefined4 *  __stdcall FUN_104ad6e0(undefined4 param_1,SCStr *param_2);
template<class... A> int FUN_104ad6e0(A...);
undefined4 *  __stdcall FUN_104addb0(undefined4 param_1,SCStr *param_2);
template<class... A> int FUN_104addb0(A...);
undefined4 *  __stdcall FUN_104ade00(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_104ade00(A...);
void __stdcall FUN_104ade40(undefined4 *param_1,undefined2 *param_2);
template<class... A> int FUN_104ade40(A...);
void __fastcall FUN_104ae380(int *param_1);
template<class... A> int FUN_104ae380(A...);
void __fastcall FUN_104ae3b0(int *param_1);
template<class... A> int FUN_104ae3b0(A...);
void __fastcall FUN_104ae3e0(int *param_1);
template<class... A> int FUN_104ae3e0(A...);
void FUN_104aef10(void);
template<class... A> int FUN_104aef10(A...);
SCStr * __stdcall FUN_104b0cc0(SCStr *param_1);
template<class... A> int __stdcall FUN_104b0cc0(A...);
SCStr * __stdcall FUN_104b0ce0(SCStr *param_1);
template<class... A> int __stdcall FUN_104b0ce0(A...);
void __stdcall FUN_104b4360(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_104b4360(A...);
void __fastcall FUN_104b43b0(int param_1);
template<class... A> int FUN_104b43b0(A...);
void __fastcall FUN_104b43d0(int param_1);
template<class... A> int FUN_104b43d0(A...);
void __fastcall FUN_104b85c0(int *param_1);
template<class... A> int FUN_104b85c0(A...);
void __fastcall FUN_104b85f0(int *param_1);
template<class... A> int FUN_104b85f0(A...);
void __fastcall FUN_104b8690(int *param_1);
template<class... A> int FUN_104b8690(A...);
void __fastcall FUN_104b86c0(int *param_1);
template<class... A> int FUN_104b86c0(A...);
void __fastcall FUN_104b8850(int *param_1);
template<class... A> int FUN_104b8850(A...);
void __fastcall FUN_104b8870(int *param_1);
template<class... A> int FUN_104b8870(A...);
void __stdcall FUN_104b8fe0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_104b8fe0(A...);
void __fastcall FUN_104b9030(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_104b9030(A...);
void __fastcall FUN_104b92e0(int *param_1);
template<class... A> int FUN_104b92e0(A...);
void __fastcall FUN_104b9310(int *param_1);
template<class... A> int FUN_104b9310(A...);
SCStr * __stdcall FUN_104b9e00(SCStr *param_1);
template<class... A> int __stdcall FUN_104b9e00(A...);
SCStr * __stdcall FUN_104b9e20(SCStr *param_1);
template<class... A> int __stdcall FUN_104b9e20(A...);
void __stdcall FUN_104bcb40(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_104bcb40(A...);
void __stdcall FUN_104bcb70(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_104bcb70(A...);
void __fastcall FUN_104bcd10(int param_1);
template<class... A> int FUN_104bcd10(A...);
void __fastcall FUN_104bcd30(int param_1);
template<class... A> int FUN_104bcd30(A...);
void __fastcall FUN_104bcd70(int param_1);
template<class... A> int FUN_104bcd70(A...);
void __fastcall FUN_104bcd90(int param_1);
template<class... A> int FUN_104bcd90(A...);
void __fastcall FUN_104bde20(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_104bde20(A...);
void __fastcall FUN_104c3990(undefined4 *param_1);
template<class... A> int FUN_104c3990(A...);
void __fastcall FUN_104c39b0(int *param_1);
template<class... A> int FUN_104c39b0(A...);
void __stdcall FUN_104c6100(int param_1,int param_2);
template<class... A> int FUN_104c6100(A...);
SCStr * __stdcall FUN_104c6f50(SCStr *param_1);
template<class... A> int __stdcall FUN_104c6f50(A...);
SCStr * __stdcall FUN_104c6f70(SCStr *param_1);
template<class... A> int __stdcall FUN_104c6f70(A...);
void __stdcall FUN_104c9d70(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_104c9d70(A...);
void __fastcall FUN_104cc500(int *param_1);
template<class... A> int FUN_104cc500(A...);
void __fastcall FUN_104cc560(int *param_1);
template<class... A> int FUN_104cc560(A...);
void __stdcall FUN_104d13a0(int param_1,int param_2);
template<class... A> int FUN_104d13a0(A...);
SCStr * __stdcall FUN_104d1430(SCStr *param_1);
template<class... A> int __stdcall FUN_104d1430(A...);
void __fastcall FUN_104d1450(undefined4 *param_1);
template<class... A> int FUN_104d1450(A...);
void __fastcall FUN_104d1490(int *param_1);
template<class... A> int FUN_104d1490(A...);
SCStr * __stdcall FUN_104d2df0(SCStr *param_1);
template<class... A> int __stdcall FUN_104d2df0(A...);
SCStr * __stdcall FUN_104d3320(SCStr *param_1);
template<class... A> int __stdcall FUN_104d3320(A...);
SCStr * __stdcall FUN_104d3340(SCStr *param_1);
template<class... A> int __stdcall FUN_104d3340(A...);
SCStr * __stdcall FUN_104d37c0(SCStr *param_1);
template<class... A> int __stdcall FUN_104d37c0(A...);
SCStr * __stdcall FUN_104d3b80(SCStr *param_1);
template<class... A> int __stdcall FUN_104d3b80(A...);
void __stdcall FUN_104d4000(int *param_1);
template<class... A> int __stdcall FUN_104d4000(A...);
undefined4 * __fastcall FUN_104d5270(undefined4 *param_1);
template<class... A> int FUN_104d5270(A...);
void __fastcall FUN_104d52e0(int *param_1);
template<class... A> int FUN_104d52e0(A...);
void __fastcall FUN_104d5490(undefined4 *param_1);
template<class... A> int FUN_104d5490(A...);
void __stdcall FUN_104d56b0(int param_1,int param_2);
template<class... A> int FUN_104d56b0(A...);
void __fastcall FUN_104d5ca0(int *param_1);
template<class... A> int FUN_104d5ca0(A...);
void __fastcall FUN_104d5ce0(int param_1);
template<class... A> int FUN_104d5ce0(A...);
void __stdcall FUN_104d5d20(int param_1,int param_2);
template<class... A> int FUN_104d5d20(A...);
int __fastcall FUN_104d6210(int param_1);
template<class... A> int FUN_104d6210(A...);
void __fastcall FUN_104d7620(undefined4 *param_1);
template<class... A> int FUN_104d7620(A...);
void __fastcall FUN_104d7640(undefined4 *param_1);
template<class... A> int FUN_104d7640(A...);
void __fastcall FUN_104d7e60(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_104d7e60(A...);
void __fastcall FUN_104d8270(undefined4 *param_1);
template<class... A> int FUN_104d8270(A...);
void __stdcall FUN_104d8290(int param_1,int param_2);
template<class... A> int FUN_104d8290(A...);
SCStr * __stdcall FUN_104d8510(SCStr *param_1);
template<class... A> int __stdcall FUN_104d8510(A...);
SCStr * __stdcall FUN_104d8550(SCStr *param_1);
template<class... A> int __stdcall FUN_104d8550(A...);
undefined4 __stdcall FUN_104d9010(int param_1);
template<class... A> int __stdcall FUN_104d9010(A...);
undefined4 __stdcall FUN_104d9030(int param_1);
template<class... A> int __stdcall FUN_104d9030(A...);
SCStr * __stdcall FUN_104d9270(SCStr *param_1);
template<class... A> int __stdcall FUN_104d9270(A...);
undefined4 __stdcall FUN_104d9780(undefined4 param_1);
template<class... A> int __stdcall FUN_104d9780(A...);
void __fastcall FUN_104d9cc0(int param_1);
template<class... A> int FUN_104d9cc0(A...);
void __fastcall FUN_104da5f0(undefined4 *param_1);
template<class... A> int FUN_104da5f0(A...);
SCStr * __stdcall FUN_104da990(SCStr *param_1);
template<class... A> int __stdcall FUN_104da990(A...);
SCStr * __stdcall FUN_104dac40(SCStr *param_1);
template<class... A> int __stdcall FUN_104dac40(A...);
SCStr * __stdcall FUN_104dacd0(SCStr *param_1);
template<class... A> int __stdcall FUN_104dacd0(A...);
SCStr * __stdcall FUN_104db0d0(SCStr *param_1);
template<class... A> int __stdcall FUN_104db0d0(A...);
SCStr * __stdcall FUN_104db100(SCStr *param_1, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_104db100(A...);
SCStr * __stdcall FUN_104db600(SCStr *param_1);
template<class... A> int __stdcall FUN_104db600(A...);
void __fastcall FUN_104dc0f0(undefined4 *param_1);
template<class... A> int FUN_104dc0f0(A...);
void __fastcall FUN_104dccd0(int param_1);
template<class... A> int FUN_104dccd0(A...);
void __fastcall FUN_104dce00(int param_1);
template<class... A> int FUN_104dce00(A...);
int __fastcall FUN_104dd0e0(int param_1);
template<class... A> int FUN_104dd0e0(A...);
bool __fastcall FUN_104dd520(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_104dd520(A...);
void __fastcall FUN_104dd540(int param_1);
template<class... A> int FUN_104dd540(A...);
void __fastcall FUN_104dd5a0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_104dd5a0(A...);
void __fastcall FUN_104ddf60(int param_1);
template<class... A> int FUN_104ddf60(A...);
void __fastcall FUN_104ddf90(int param_1);
template<class... A> int FUN_104ddf90(A...);
undefined4 * __fastcall FUN_104e2dd0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_104e2dd0(A...);
undefined4 * __fastcall FUN_104e2e00(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_104e2e00(A...);
undefined4 * __fastcall FUN_104e2e30(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_104e2e30(A...);
void __fastcall FUN_104e3740(int param_1);
template<class... A> int FUN_104e3740(A...);
void __fastcall FUN_104e3760(int param_1);
template<class... A> int FUN_104e3760(A...);
void __fastcall FUN_104e3780(int param_1);
template<class... A> int FUN_104e3780(A...);
void __fastcall FUN_104e3b20(int param_1);
template<class... A> int FUN_104e3b20(A...);
void __fastcall FUN_104e3ca0(undefined4 *param_1);
template<class... A> int FUN_104e3ca0(A...);
void __fastcall FUN_104e3cc0(undefined4 *param_1);
template<class... A> int FUN_104e3cc0(A...);
void __fastcall FUN_104e3ce0(undefined4 *param_1);
template<class... A> int FUN_104e3ce0(A...);
void __fastcall FUN_104e3d60(undefined4 *param_1);
template<class... A> int FUN_104e3d60(A...);
void __fastcall FUN_104e40d0(undefined4 *param_1);
template<class... A> int FUN_104e40d0(A...);
int __stdcall FUN_104e4970(undefined4 param_1);
template<class... A> int __stdcall FUN_104e4970(A...);
int __stdcall FUN_104e49a0(undefined4 param_1);
template<class... A> int __stdcall FUN_104e49a0(A...);
int __stdcall FUN_104e49d0(undefined4 param_1);
template<class... A> int __stdcall FUN_104e49d0(A...);
void __fastcall FUN_104e5100(int param_1);
template<class... A> int FUN_104e5100(A...);
void __fastcall FUN_104e5120(int param_1);
template<class... A> int FUN_104e5120(A...);
void __fastcall FUN_104e5140(int param_1);
template<class... A> int FUN_104e5140(A...);
void __fastcall FUN_104e6ab0(int param_1);
template<class... A> int FUN_104e6ab0(A...);
void __fastcall FUN_104e6b80(int param_1);
template<class... A> int FUN_104e6b80(A...);
void __fastcall FUN_104e6df0(undefined4 *param_1);
template<class... A> int FUN_104e6df0(A...);
void __fastcall FUN_104e6e70(undefined4 *param_1);
template<class... A> int FUN_104e6e70(A...);
void __fastcall FUN_104e9b60(int *param_1);
template<class... A> int FUN_104e9b60(A...);
void __fastcall FUN_104e9bf0(int *param_1);
template<class... A> int FUN_104e9bf0(A...);
void __fastcall FUN_104e9c20(undefined4 *param_1);
template<class... A> int FUN_104e9c20(A...);
void __stdcall FUN_104e9f10(int param_1,int param_2);
template<class... A> int FUN_104e9f10(A...);
void __stdcall FUN_104e9f60(int param_1,int param_2);
template<class... A> int FUN_104e9f60(A...);
SCStr * __stdcall FUN_104ea0a0(SCStr *param_1);
template<class... A> int __stdcall FUN_104ea0a0(A...);
void __fastcall FUN_104ea0c0(undefined4 *param_1);
template<class... A> int FUN_104ea0c0(A...);
void __stdcall FUN_104ec220(SCStr *param_1, SCStr *param_2, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_104ec220(A...);
void __fastcall FUN_104ed650(int param_1);
template<class... A> int FUN_104ed650(A...);
SCStr * __stdcall FUN_104ede50(SCStr *param_1);
template<class... A> int __stdcall FUN_104ede50(A...);
void __fastcall FUN_104ede70(undefined4 *param_1);
template<class... A> int FUN_104ede70(A...);
void __fastcall FUN_104edeb0(undefined4 *param_1);
template<class... A> int FUN_104edeb0(A...);
void __fastcall FUN_104ee000(int *param_1);
template<class... A> int FUN_104ee000(A...);
int __fastcall FUN_104ee0a0(int param_1);
template<class... A> int FUN_104ee0a0(A...);
void __fastcall FUN_104eefb0(int param_1);
template<class... A> int FUN_104eefb0(A...);
void __fastcall FUN_104ef270(int *param_1);
template<class... A> int FUN_104ef270(A...);
undefined4 * __fastcall FUN_104f9e70(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_104f9e70(A...);
undefined4 * __fastcall FUN_104fa0a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_104fa0a0(A...);
void __fastcall FUN_104fa830(undefined4 *param_1);
template<class... A> int FUN_104fa830(A...);
void __fastcall FUN_104fab60(int *param_1);
template<class... A> int FUN_104fab60(A...);
void __fastcall FUN_104fabc0(int *param_1);
template<class... A> int FUN_104fabc0(A...);
void __fastcall FUN_104fac20(int param_1);
template<class... A> int FUN_104fac20(A...);
void __fastcall FUN_104fac40(int param_1);
template<class... A> int FUN_104fac40(A...);
void __fastcall FUN_104fade0(int *param_1);
template<class... A> int FUN_104fade0(A...);
void __fastcall FUN_104faec0(int param_1);
template<class... A> int FUN_104faec0(A...);
void __fastcall FUN_104faef0(undefined4 *param_1);
template<class... A> int FUN_104faef0(A...);
void __fastcall FUN_104faf10(undefined4 *param_1);
template<class... A> int FUN_104faf10(A...);
void __fastcall FUN_104faf30(int *param_1);
template<class... A> int FUN_104faf30(A...);
int __stdcall FUN_104fb850(undefined4 param_1);
template<class... A> int __stdcall FUN_104fb850(A...);
void __fastcall FUN_104fc010(int param_1);
template<class... A> int FUN_104fc010(A...);
void __fastcall FUN_104fc030(int param_1);
template<class... A> int FUN_104fc030(A...);
int * FUN_104fcf30(int *param_1);
template<class... A> int FUN_104fcf30(A...);
void __fastcall FUN_104fd1d0(undefined4 *param_1);
template<class... A> int FUN_104fd1d0(A...);
void __fastcall FUN_104fd940(int *param_1);
template<class... A> int FUN_104fd940(A...);
void __fastcall FUN_104fd970(int *param_1);
template<class... A> int FUN_104fd970(A...);
void __stdcall FUN_104fde60(int param_1,int param_2);
template<class... A> int FUN_104fde60(A...);
undefined4 __stdcall FUN_104ffd30(undefined4 param_1);
template<class... A> int __stdcall FUN_104ffd30(A...);
void __stdcall FUN_10500110(undefined4 param_1,int *param_2);
template<class... A> int FUN_10500110(A...);
undefined4 * __fastcall FUN_10500760(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10500760(A...);
undefined4 * __fastcall FUN_105007a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_105007a0(A...);
void __fastcall FUN_10503090(undefined4 *param_1);
template<class... A> int FUN_10503090(A...);
void __fastcall FUN_105030d0(undefined4 *param_1);
template<class... A> int FUN_105030d0(A...);
void __fastcall FUN_10503240(int *param_1);
template<class... A> int FUN_10503240(A...);
void __fastcall FUN_105032f0(int *param_1);
template<class... A> int FUN_105032f0(A...);
void __fastcall FUN_10503330(int *param_1);
template<class... A> int FUN_10503330(A...);
void __fastcall FUN_10503690(undefined4 *param_1);
template<class... A> int FUN_10503690(A...);
void __fastcall FUN_10503780(undefined4 *param_1);
template<class... A> int FUN_10503780(A...);
void __fastcall FUN_105037c0(undefined4 *param_1);
template<class... A> int FUN_105037c0(A...);
void __fastcall FUN_10503910(undefined4 *param_1);
template<class... A> int FUN_10503910(A...);
void FUN_10503d30(void);
template<class... A> int FUN_10503d30(A...);
void __fastcall FUN_10503d50(undefined4 *param_1);
template<class... A> int FUN_10503d50(A...);
void __fastcall FUN_10503d80(int param_1);
template<class... A> int FUN_10503d80(A...);
void FUN_10503ef0(void);
template<class... A> int FUN_10503ef0(A...);
void FUN_10504240(void);
template<class... A> int FUN_10504240(A...);
void __fastcall FUN_10504260(undefined4 *param_1);
template<class... A> int FUN_10504260(A...);
void __fastcall FUN_10504370(undefined4 *param_1);
template<class... A> int FUN_10504370(A...);
undefined4 * __stdcall FUN_105056e0(undefined4 *param_1);
template<class... A> int __stdcall FUN_105056e0(A...);
undefined4 * __stdcall FUN_105057b0(undefined4 *param_1);
template<class... A> int __stdcall FUN_105057b0(A...);
undefined4 * __stdcall FUN_10505800(undefined4 *param_1);
template<class... A> int __stdcall FUN_10505800(A...);
int __fastcall FUN_10505b50(int *param_1);
template<class... A> int FUN_10505b50(A...);
undefined4 __fastcall FUN_105077d0(int *param_1);
template<class... A> int FUN_105077d0(A...);
SCStr * __stdcall FUN_10507cd0(SCStr *param_1);
template<class... A> int __stdcall FUN_10507cd0(A...);
SCStr * __stdcall FUN_10508240(SCStr *param_1);
template<class... A> int __stdcall FUN_10508240(A...);
SCStr * __stdcall FUN_105088c0(SCStr *param_1, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_105088c0(A...);
SCStr * __stdcall FUN_105089e0(SCStr *param_1, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_105089e0(A...);
SCStr * __stdcall FUN_10508a00(SCStr *param_1, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10508a00(A...);
undefined4 __fastcall FUN_10509940(int *param_1);
template<class... A> int FUN_10509940(A...);
bool __fastcall FUN_1050a980(int param_1);
template<class... A> int FUN_1050a980(A...);
bool __fastcall FUN_1050a9e0(int param_1);
template<class... A> int FUN_1050a9e0(A...);
bool __fastcall FUN_1050aa40(int param_1);
template<class... A> int FUN_1050aa40(A...);
void __fastcall FUN_1050aac0(int *param_1);
template<class... A> int FUN_1050aac0(A...);
undefined4 __fastcall FUN_1050aae0(int *param_1);
template<class... A> int FUN_1050aae0(A...);
void __fastcall FUN_1050adb0(int *param_1);
template<class... A> int FUN_1050adb0(A...);
void __fastcall FUN_1050adf0(int *param_1);
template<class... A> int FUN_1050adf0(A...);
void __stdcall FUN_1050e590(int param_1);
template<class... A> int __stdcall FUN_1050e590(A...);
void __fastcall FUN_1050fcf0(undefined4 *param_1);
template<class... A> int FUN_1050fcf0(A...);
void __fastcall FUN_1050fd60(undefined4 *param_1);
template<class... A> int FUN_1050fd60(A...);
void __fastcall FUN_1050ff30(int *param_1);
template<class... A> int FUN_1050ff30(A...);
void __fastcall FUN_1050ff90(int *param_1);
template<class... A> int FUN_1050ff90(A...);
void __fastcall FUN_105106c0(undefined4 *param_1);
template<class... A> int FUN_105106c0(A...);
int __fastcall FUN_10510cb0(int *param_1);
template<class... A> int FUN_10510cb0(A...);
void __fastcall FUN_10511170(undefined4 *param_1);
template<class... A> int FUN_10511170(A...);
void __fastcall FUN_10513690(undefined4 *param_1);
template<class... A> int FUN_10513690(A...);
void __fastcall FUN_105136d0(int *param_1);
template<class... A> int FUN_105136d0(A...);
undefined4 __fastcall FUN_10513930(int param_1);
template<class... A> int FUN_10513930(A...);
undefined4 __fastcall FUN_10513af0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10513af0(A...);
undefined4 __fastcall FUN_10514040(int param_1);
template<class... A> int FUN_10514040(A...);
undefined4 __fastcall FUN_10514290(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10514290(A...);
undefined4 __fastcall FUN_105142b0(int param_1);
template<class... A> int FUN_105142b0(A...);
undefined4 __fastcall FUN_10515150(int param_1);
template<class... A> int FUN_10515150(A...);
SCStr * __stdcall FUN_10516880(SCStr *param_1);
template<class... A> int __stdcall FUN_10516880(A...);
undefined4 __fastcall FUN_105169a0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_105169a0(A...);
void __fastcall FUN_10516cd0(int param_1);
template<class... A> int FUN_10516cd0(A...);
undefined4 __fastcall FUN_10516e40(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10516e40(A...);
undefined4 __fastcall FUN_10517030(int param_1);
template<class... A> int FUN_10517030(A...);
undefined4 __fastcall FUN_10517060(int param_1);
template<class... A> int FUN_10517060(A...);
void __fastcall FUN_105171a0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_105171a0(A...);
void __fastcall FUN_105171d0(int param_1);
template<class... A> int FUN_105171d0(A...);
undefined4 __fastcall FUN_1051a170(int param_1);
template<class... A> int FUN_1051a170(A...);
bool __fastcall FUN_1051a4a0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_1051a4a0(A...);
bool __fastcall FUN_1051a4c0(int param_1);
template<class... A> int FUN_1051a4c0(A...);
void __stdcall FUN_1051b480(int param_1);
template<class... A> int __stdcall FUN_1051b480(A...);
void FUN_1051d480(void);
template<class... A> int FUN_1051d480(A...);
SCStr * __stdcall FUN_1051f960(SCStr *param_1);
template<class... A> int __stdcall FUN_1051f960(A...);
SCStr * __stdcall FUN_1051f980(SCStr *param_1);
template<class... A> int __stdcall FUN_1051f980(A...);
SCStr * __stdcall FUN_1051f9a0(SCStr *param_1);
template<class... A> int __stdcall FUN_1051f9a0(A...);
SCStr * __stdcall FUN_1051f9c0(SCStr *param_1);
template<class... A> int __stdcall FUN_1051f9c0(A...);
SCStr * __stdcall FUN_1051f9e0(SCStr *param_1);
template<class... A> int __stdcall FUN_1051f9e0(A...);
void __fastcall FUN_1051fa00(undefined4 *param_1);
template<class... A> int FUN_1051fa00(A...);
void __fastcall FUN_1051fa40(undefined4 *param_1);
template<class... A> int FUN_1051fa40(A...);
SCStr * __stdcall FUN_105208d0(SCStr *param_1);
template<class... A> int __stdcall FUN_105208d0(A...);
SCStr * __stdcall FUN_10520900(SCStr *param_1);
template<class... A> int __stdcall FUN_10520900(A...);
SCStr * __stdcall FUN_10520930(SCStr *param_1);
template<class... A> int __stdcall FUN_10520930(A...);
SCStr * __stdcall FUN_10520990(SCStr *param_1);
template<class... A> int __stdcall FUN_10520990(A...);
int __fastcall FUN_105209f0(int param_1);
template<class... A> int FUN_105209f0(A...);
void __stdcall FUN_10523d10(SCStr *param_1);
template<class... A> int __stdcall FUN_10523d10(A...);
undefined4 __fastcall FUN_1052dfd0(int param_1);
template<class... A> int FUN_1052dfd0(A...);
int __fastcall FUN_1052e200(int param_1);
template<class... A> int FUN_1052e200(A...);
int __fastcall FUN_1052e5b0(int param_1);
template<class... A> int FUN_1052e5b0(A...);
bool __fastcall FUN_1052e790(int *param_1);
template<class... A> int FUN_1052e790(A...);
void __fastcall FUN_1052e820(int param_1);
template<class... A> int FUN_1052e820(A...);
void __fastcall FUN_1052e850(int param_1);
template<class... A> int FUN_1052e850(A...);
void __fastcall FUN_1052e8b0(int param_1);
template<class... A> int FUN_1052e8b0(A...);
undefined4 __fastcall FUN_1052e8f0(int *param_1);
template<class... A> int FUN_1052e8f0(A...);
undefined4 * __fastcall FUN_1052e9f0(undefined4 param_1);
template<class... A> int FUN_1052e9f0(A...);
undefined4 * __fastcall FUN_1052fd10(int param_1);
template<class... A> int FUN_1052fd10(A...);
undefined4 * __fastcall FUN_1052fe50(int param_1);
template<class... A> int FUN_1052fe50(A...);
undefined4 * __fastcall FUN_10531c00(int param_1);
template<class... A> int FUN_10531c00(A...);
undefined4 * __fastcall FUN_10531dd0(int param_1);
template<class... A> int FUN_10531dd0(A...);
undefined4 * __fastcall FUN_10531e10(int param_1);
template<class... A> int FUN_10531e10(A...);
undefined4 * __fastcall FUN_105322f0(int param_1);
template<class... A> int FUN_105322f0(A...);
undefined4 __stdcall FUN_105327f0(undefined4 param_1);
template<class... A> int __stdcall FUN_105327f0(A...);
void __fastcall FUN_10532df0(undefined4 *param_1);
template<class... A> int FUN_10532df0(A...);
void __fastcall FUN_10532e30(undefined4 *param_1);
template<class... A> int FUN_10532e30(A...);
void __fastcall FUN_10532e70(int *param_1);
template<class... A> int FUN_10532e70(A...);
void __fastcall FUN_10532ea0(int *param_1);
template<class... A> int FUN_10532ea0(A...);
void FUN_105330f0(void);
template<class... A> int FUN_105330f0(A...);
void FUN_10533120(void);
template<class... A> int FUN_10533120(A...);
void FUN_10533150(void);
template<class... A> int FUN_10533150(A...);
SCStr * __stdcall FUN_10534170(SCStr *param_1);
template<class... A> int __stdcall FUN_10534170(A...);
SCStr * __stdcall FUN_10534670(SCStr *param_1,int param_2);
template<class... A> int FUN_10534670(A...);
SCStr * __stdcall FUN_105349e0(SCStr *param_1);
template<class... A> int __stdcall FUN_105349e0(A...);
SCStr * __stdcall FUN_10534a20(SCStr *param_1);
template<class... A> int __stdcall FUN_10534a20(A...);
SCStr * __stdcall FUN_10534a40(SCStr *param_1);
template<class... A> int __stdcall FUN_10534a40(A...);
SCStr * __stdcall FUN_10534b00(SCStr *param_1);
template<class... A> int __stdcall FUN_10534b00(A...);
SCStr * __stdcall FUN_10534b20(SCStr *param_1);
template<class... A> int __stdcall FUN_10534b20(A...);
SCStr * __stdcall FUN_10534b40(SCStr *param_1);
template<class... A> int __stdcall FUN_10534b40(A...);
SCStr * __stdcall FUN_10534b60(SCStr *param_1);
template<class... A> int __stdcall FUN_10534b60(A...);
SCStr * __stdcall FUN_10534b80(SCStr *param_1);
template<class... A> int __stdcall FUN_10534b80(A...);
SCStr * __stdcall FUN_10534ba0(SCStr *param_1);
template<class... A> int __stdcall FUN_10534ba0(A...);
SCStr * __stdcall FUN_10534bc0(SCStr *param_1);
template<class... A> int __stdcall FUN_10534bc0(A...);
SCStr * __stdcall FUN_10534be0(SCStr *param_1);
template<class... A> int __stdcall FUN_10534be0(A...);
SCStr * __stdcall FUN_10534c00(SCStr *param_1);
template<class... A> int __stdcall FUN_10534c00(A...);
SCStr * __stdcall FUN_10534c20(SCStr *param_1);
template<class... A> int __stdcall FUN_10534c20(A...);
SCStr * __stdcall FUN_10534c40(SCStr *param_1);
template<class... A> int __stdcall FUN_10534c40(A...);
SCStr * __stdcall FUN_10534c60(SCStr *param_1);
template<class... A> int __stdcall FUN_10534c60(A...);
SCStr * __stdcall FUN_10534c80(SCStr *param_1);
template<class... A> int __stdcall FUN_10534c80(A...);
SCStr * __stdcall FUN_10534ca0(SCStr *param_1);
template<class... A> int __stdcall FUN_10534ca0(A...);
SCStr * __stdcall FUN_10534cc0(SCStr *param_1);
template<class... A> int __stdcall FUN_10534cc0(A...);
SCStr * __stdcall FUN_10534ce0(SCStr *param_1);
template<class... A> int __stdcall FUN_10534ce0(A...);
SCStr * __stdcall FUN_10534d00(SCStr *param_1);
template<class... A> int __stdcall FUN_10534d00(A...);
SCStr * __stdcall FUN_10534d20(SCStr *param_1);
template<class... A> int __stdcall FUN_10534d20(A...);
SCStr * __stdcall FUN_10534d40(SCStr *param_1);
template<class... A> int __stdcall FUN_10534d40(A...);
SCStr * __stdcall FUN_10534d60(SCStr *param_1);
template<class... A> int __stdcall FUN_10534d60(A...);
SCStr * __stdcall FUN_10534d80(SCStr *param_1);
template<class... A> int __stdcall FUN_10534d80(A...);
SCStr * __stdcall FUN_10534da0(SCStr *param_1);
template<class... A> int __stdcall FUN_10534da0(A...);
SCStr * __stdcall FUN_10534dc0(SCStr *param_1);
template<class... A> int __stdcall FUN_10534dc0(A...);
SCStr * __stdcall FUN_10534de0(SCStr *param_1);
template<class... A> int __stdcall FUN_10534de0(A...);
SCStr * __stdcall FUN_10534e00(SCStr *param_1);
template<class... A> int __stdcall FUN_10534e00(A...);
SCStr * __stdcall FUN_10534e20(SCStr *param_1);
template<class... A> int __stdcall FUN_10534e20(A...);
SCStr * __stdcall FUN_10534f30(SCStr *param_1);
template<class... A> int __stdcall FUN_10534f30(A...);
SCStr * __stdcall FUN_10534f50(SCStr *param_1);
template<class... A> int __stdcall FUN_10534f50(A...);
SCStr * __stdcall FUN_10534f70(SCStr *param_1);
template<class... A> int __stdcall FUN_10534f70(A...);
SCStr * __stdcall FUN_10535000(SCStr *param_1);
template<class... A> int __stdcall FUN_10535000(A...);
undefined4 FUN_105358a0(void);
template<class... A> int FUN_105358a0(A...);
SCStr * __stdcall FUN_10535900(SCStr *param_1, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10535900(A...);
undefined4 __stdcall FUN_10535a50(undefined4 param_1);
template<class... A> int __stdcall FUN_10535a50(A...);
SCStr * __stdcall FUN_10536850(SCStr *param_1);
template<class... A> int __stdcall FUN_10536850(A...);
SCStr * __stdcall FUN_10536a00(SCStr *param_1);
template<class... A> int __stdcall FUN_10536a00(A...);
SCStr * __stdcall FUN_1053d150(SCStr *param_1);
template<class... A> int __stdcall FUN_1053d150(A...);
void __fastcall FUN_1053dbc0(int param_1);
template<class... A> int FUN_1053dbc0(A...);
undefined4 __fastcall FUN_1053dc00(int param_1);
template<class... A> int FUN_1053dc00(A...);
undefined4 __fastcall FUN_1053e3e0(int param_1);
template<class... A> int FUN_1053e3e0(A...);
void __fastcall FUN_1053f5b0(int param_1);
template<class... A> int FUN_1053f5b0(A...);
void __fastcall FUN_1053f5d0(int param_1);
template<class... A> int FUN_1053f5d0(A...);
void __fastcall FUN_1053f5f0(int param_1);
template<class... A> int FUN_1053f5f0(A...);
void __fastcall FUN_1053f620(int param_1);
template<class... A> int FUN_1053f620(A...);
void __fastcall FUN_10541030(int param_1);
template<class... A> int FUN_10541030(A...);
bool __fastcall FUN_10541090(int *param_1);
template<class... A> int FUN_10541090(A...);
undefined4 __fastcall FUN_10541290(int param_1);
template<class... A> int FUN_10541290(A...);
undefined1 __fastcall FUN_105414f0(int param_1);
template<class... A> int FUN_105414f0(A...);
undefined1 __fastcall FUN_105417f0(int param_1);
template<class... A> int FUN_105417f0(A...);
bool __fastcall FUN_10541c30(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10541c30(A...);
void __fastcall FUN_10542ed0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10542ed0(A...);
void __fastcall FUN_10544a10(int param_1);
template<class... A> int FUN_10544a10(A...);
void __fastcall FUN_10546be0(int param_1);
template<class... A> int FUN_10546be0(A...);
void __stdcall FUN_1054ac50(int param_1, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_1054ac50(A...);
void __stdcall FUN_1054c0c0(int param_1);
template<class... A> int __stdcall FUN_1054c0c0(A...);
int __fastcall FUN_1054c100(int param_1);
template<class... A> int FUN_1054c100(A...);
int __fastcall FUN_1054c140(int param_1);
template<class... A> int FUN_1054c140(A...);
bool __fastcall FUN_1054c2a0(int *param_1);
template<class... A> int FUN_1054c2a0(A...);
void __stdcall FUN_1054c2e0(int param_1);
template<class... A> int __stdcall FUN_1054c2e0(A...);
void __fastcall FUN_1054c8b0(undefined4 *param_1);
template<class... A> int FUN_1054c8b0(A...);
SCStr * __stdcall FUN_1054cff0(SCStr *param_1);
template<class... A> int __stdcall FUN_1054cff0(A...);
undefined4 * __fastcall FUN_1054eed0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_1054eed0(A...);
void __fastcall FUN_1054fae0(int *param_1);
template<class... A> int FUN_1054fae0(A...);
void __fastcall FUN_1054fb40(int param_1);
template<class... A> int FUN_1054fb40(A...);
void __fastcall FUN_1054fb60(int *param_1);
template<class... A> int FUN_1054fb60(A...);
void __fastcall FUN_1054fc40(int param_1);
template<class... A> int FUN_1054fc40(A...);
void __fastcall FUN_1054fc60(undefined4 *param_1);
template<class... A> int FUN_1054fc60(A...);
void __fastcall FUN_1054fc80(int *param_1);
template<class... A> int FUN_1054fc80(A...);
void __fastcall FUN_10550cb0(int param_1);
template<class... A> int FUN_10550cb0(A...);
int * FUN_10551850(int *param_1);
template<class... A> int FUN_10551850(A...);
void __fastcall FUN_10552460(int *param_1);
template<class... A> int FUN_10552460(A...);
void __fastcall FUN_105524a0(undefined4 *param_1);
template<class... A> int FUN_105524a0(A...);
void __stdcall FUN_105526b0(int param_1,int param_2);
template<class... A> int FUN_105526b0(A...);
SCStr * __stdcall FUN_10553fb0(SCStr *param_1);
template<class... A> int __stdcall FUN_10553fb0(A...);
void __fastcall FUN_105579d0(int param_1);
template<class... A> int FUN_105579d0(A...);
void __fastcall FUN_105597d0(int *param_1);
template<class... A> int FUN_105597d0(A...);
void __fastcall FUN_10559b30(undefined4 *param_1);
template<class... A> int FUN_10559b30(A...);
SCStr * __stdcall FUN_1055d3e0(SCStr *param_1);
template<class... A> int __stdcall FUN_1055d3e0(A...);
SCStr * __stdcall FUN_1055d420(SCStr *param_1);
template<class... A> int __stdcall FUN_1055d420(A...);
SCStr * __stdcall FUN_1055d440(SCStr *param_1);
template<class... A> int __stdcall FUN_1055d440(A...);
SCStr * __stdcall FUN_1055d470(SCStr *param_1);
template<class... A> int __stdcall FUN_1055d470(A...);
SCStr * __stdcall FUN_1055d5a0(SCStr *param_1);
template<class... A> int __stdcall FUN_1055d5a0(A...);
SCStr * __stdcall FUN_1055d5e0(SCStr *param_1);
template<class... A> int __stdcall FUN_1055d5e0(A...);
SCStr * __stdcall FUN_1055d600(SCStr *param_1);
template<class... A> int __stdcall FUN_1055d600(A...);
SCStr * __stdcall FUN_1055db60(SCStr *param_1);
template<class... A> int __stdcall FUN_1055db60(A...);
SCStr * __stdcall FUN_1055dbb0(SCStr *param_1);
template<class... A> int __stdcall FUN_1055dbb0(A...);
SCStr * __stdcall FUN_1055dc00(SCStr *param_1);
template<class... A> int __stdcall FUN_1055dc00(A...);
SCStr * __stdcall FUN_1055dc30(SCStr *param_1);
template<class... A> int __stdcall FUN_1055dc30(A...);
int __fastcall FUN_1055dc70(int param_1);
template<class... A> int FUN_1055dc70(A...);
SCStr * __stdcall FUN_1055dce0(SCStr *param_1);
template<class... A> int __stdcall FUN_1055dce0(A...);
SCStr * __stdcall FUN_1055ec50(SCStr *param_1);
template<class... A> int __stdcall FUN_1055ec50(A...);
SCStr * __stdcall FUN_1055f260(SCStr *param_1);
template<class... A> int __stdcall FUN_1055f260(A...);
void __stdcall FUN_1055f480(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_1055f480(A...);
void __stdcall FUN_1055f4b0(undefined4 param_1);
template<class... A> int __stdcall FUN_1055f4b0(A...);
void __stdcall FUN_10560090(int param_1);
template<class... A> int __stdcall FUN_10560090(A...);
void __stdcall FUN_10562a40(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10562a40(A...);
void __stdcall FUN_10562a80(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10562a80(A...);
void __stdcall FUN_10562b00(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10562b00(A...);
void __fastcall FUN_105650b0(undefined4 *param_1);
template<class... A> int FUN_105650b0(A...);
void __fastcall FUN_10566560(undefined4 *param_1);
template<class... A> int FUN_10566560(A...);
void __fastcall FUN_10566670(undefined4 *param_1);
template<class... A> int FUN_10566670(A...);
SCStr * __stdcall FUN_10572510(SCStr *param_1);
template<class... A> int __stdcall FUN_10572510(A...);
SCStr * __stdcall FUN_10572530(SCStr *param_1);
template<class... A> int __stdcall FUN_10572530(A...);
SCStr * __stdcall FUN_10572550(SCStr *param_1);
template<class... A> int __stdcall FUN_10572550(A...);
SCStr * __stdcall FUN_10572570(SCStr *param_1);
template<class... A> int __stdcall FUN_10572570(A...);
SCStr * __stdcall FUN_10572590(SCStr *param_1);
template<class... A> int __stdcall FUN_10572590(A...);
void __fastcall FUN_105725b0(int *param_1);
template<class... A> int FUN_105725b0(A...);
void __fastcall FUN_105725e0(int *param_1);
template<class... A> int FUN_105725e0(A...);
void __fastcall FUN_10572610(int *param_1);
template<class... A> int FUN_10572610(A...);
void __fastcall FUN_10572640(int *param_1);
template<class... A> int FUN_10572640(A...);
SCStr * __stdcall FUN_10574610(SCStr *param_1);
template<class... A> int __stdcall FUN_10574610(A...);
SCStr * __stdcall FUN_10574630(SCStr *param_1);
template<class... A> int __stdcall FUN_10574630(A...);
SCStr * __stdcall FUN_10574650(SCStr *param_1);
template<class... A> int __stdcall FUN_10574650(A...);
SCStr * __stdcall FUN_10574770(SCStr *param_1);
template<class... A> int __stdcall FUN_10574770(A...);
SCStr * __stdcall FUN_105747c0(SCStr *param_1);
template<class... A> int __stdcall FUN_105747c0(A...);
SCStr * __stdcall FUN_10574810(SCStr *param_1);
template<class... A> int __stdcall FUN_10574810(A...);
SCStr * __stdcall FUN_10574830(SCStr *param_1);
template<class... A> int __stdcall FUN_10574830(A...);
SCStr * __stdcall FUN_10574880(SCStr *param_1);
template<class... A> int __stdcall FUN_10574880(A...);
SCStr * __stdcall FUN_105748a0(SCStr *param_1);
template<class... A> int __stdcall FUN_105748a0(A...);
SCStr * __stdcall FUN_105748c0(SCStr *param_1);
template<class... A> int __stdcall FUN_105748c0(A...);
SCStr * __stdcall FUN_10574950(SCStr *param_1);
template<class... A> int __stdcall FUN_10574950(A...);
SCStr * __stdcall FUN_10574970(SCStr *param_1);
template<class... A> int __stdcall FUN_10574970(A...);
SCStr * __stdcall FUN_10574990(SCStr *param_1);
template<class... A> int __stdcall FUN_10574990(A...);
SCStr * __stdcall FUN_105749e0(SCStr *param_1);
template<class... A> int __stdcall FUN_105749e0(A...);
SCStr * __stdcall FUN_10574a00(SCStr *param_1);
template<class... A> int __stdcall FUN_10574a00(A...);
SCStr * __stdcall FUN_10574a30(SCStr *param_1);
template<class... A> int __stdcall FUN_10574a30(A...);
SCStr * __stdcall FUN_10574a50(SCStr *param_1);
template<class... A> int __stdcall FUN_10574a50(A...);
SCStr * __stdcall FUN_10574b70(SCStr *param_1);
template<class... A> int __stdcall FUN_10574b70(A...);
SCStr * __stdcall FUN_10574ba0(SCStr *param_1);
template<class... A> int __stdcall FUN_10574ba0(A...);
SCStr * __stdcall FUN_10574cf0(SCStr *param_1);
template<class... A> int __stdcall FUN_10574cf0(A...);
SCStr * __stdcall FUN_10574d10(SCStr *param_1);
template<class... A> int __stdcall FUN_10574d10(A...);
SCStr * __stdcall FUN_10574d30(SCStr *param_1);
template<class... A> int __stdcall FUN_10574d30(A...);
SCStr * __stdcall FUN_10574d60(SCStr *param_1);
template<class... A> int __stdcall FUN_10574d60(A...);
SCStr * __stdcall FUN_10574d90(SCStr *param_1);
template<class... A> int __stdcall FUN_10574d90(A...);
SCStr * __stdcall FUN_10574e30(SCStr *param_1);
template<class... A> int __stdcall FUN_10574e30(A...);
SCStr * __stdcall FUN_10574ea0(SCStr *param_1);
template<class... A> int __stdcall FUN_10574ea0(A...);
SCStr * __stdcall FUN_10574ed0(SCStr *param_1);
template<class... A> int __stdcall FUN_10574ed0(A...);
SCStr * __stdcall FUN_10574f00(SCStr *param_1);
template<class... A> int __stdcall FUN_10574f00(A...);
SCStr * __stdcall FUN_10574f30(SCStr *param_1);
template<class... A> int __stdcall FUN_10574f30(A...);
SCStr * __stdcall FUN_10574f70(SCStr *param_1);
template<class... A> int __stdcall FUN_10574f70(A...);
bool __fastcall FUN_10576040(int param_1);
template<class... A> int FUN_10576040(A...);
undefined1 __fastcall FUN_1057d5b0(int param_1);
template<class... A> int FUN_1057d5b0(A...);
undefined1 __fastcall FUN_1057d600(int param_1);
template<class... A> int FUN_1057d600(A...);
undefined1 __fastcall FUN_1057d640(int param_1);
template<class... A> int FUN_1057d640(A...);
SCStr * __stdcall FUN_10580800(SCStr *param_1);
template<class... A> int __stdcall FUN_10580800(A...);
void __fastcall FUN_105809d0(undefined4 *param_1);
template<class... A> int FUN_105809d0(A...);
SCStr * __stdcall FUN_105818e0(SCStr *param_1);
template<class... A> int __stdcall FUN_105818e0(A...);
SCStr * __stdcall FUN_10581900(SCStr *param_1);
template<class... A> int __stdcall FUN_10581900(A...);
SCStr * __stdcall FUN_10581920(SCStr *param_1);
template<class... A> int __stdcall FUN_10581920(A...);
SCStr * __stdcall FUN_10581940(SCStr *param_1);
template<class... A> int __stdcall FUN_10581940(A...);
SCStr * __stdcall FUN_10581960(SCStr *param_1);
template<class... A> int __stdcall FUN_10581960(A...);
undefined4 __fastcall FUN_10581980(int param_1);
template<class... A> int FUN_10581980(A...);
SCStr * __stdcall FUN_10581a80(SCStr *param_1);
template<class... A> int __stdcall FUN_10581a80(A...);
SCStr * __stdcall FUN_10581aa0(SCStr *param_1);
template<class... A> int __stdcall FUN_10581aa0(A...);
SCStr * __stdcall FUN_10581b90(SCStr *param_1);
template<class... A> int __stdcall FUN_10581b90(A...);
SCStr * __stdcall FUN_10581bb0(SCStr *param_1);
template<class... A> int __stdcall FUN_10581bb0(A...);
SCStr * __stdcall FUN_10582630(SCStr *param_1);
template<class... A> int __stdcall FUN_10582630(A...);
SCStr * __stdcall FUN_10582660(SCStr *param_1);
template<class... A> int __stdcall FUN_10582660(A...);
SCStr * __stdcall FUN_10582b20(SCStr *param_1);
template<class... A> int __stdcall FUN_10582b20(A...);
undefined4 __stdcall FUN_105839a0(int param_1);
template<class... A> int __stdcall FUN_105839a0(A...);
SCStr * __stdcall FUN_105839d0(SCStr *param_1,int param_2,undefined4 param_3);
template<class... A> int FUN_105839d0(A...);
void __fastcall FUN_10585850(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10585850(A...);
void __fastcall FUN_10588070(undefined4 *param_1);
template<class... A> int FUN_10588070(A...);
undefined4 __fastcall FUN_1058a650(int param_1);
template<class... A> int FUN_1058a650(A...);
void __fastcall FUN_1058c3d0(undefined4 *param_1);
template<class... A> int FUN_1058c3d0(A...);
void __fastcall FUN_1058c410(undefined4 *param_1);
template<class... A> int FUN_1058c410(A...);
SCStr * __stdcall FUN_1058d100(SCStr *param_1);
template<class... A> int __stdcall FUN_1058d100(A...);
SCStr * __stdcall FUN_1058d120(SCStr *param_1);
template<class... A> int __stdcall FUN_1058d120(A...);
SCStr * __stdcall FUN_1058d140(SCStr *param_1);
template<class... A> int __stdcall FUN_1058d140(A...);
SCStr * __stdcall FUN_1058de90(SCStr *param_1);
template<class... A> int __stdcall FUN_1058de90(A...);
SCStr * __stdcall FUN_1058e810(SCStr *param_1);
template<class... A> int __stdcall FUN_1058e810(A...);
SCStr * __stdcall FUN_1058f660(SCStr *param_1);
template<class... A> int __stdcall FUN_1058f660(A...);
int __fastcall FUN_10591870(int param_1);
template<class... A> int FUN_10591870(A...);
void __fastcall FUN_10591bc0(int param_1);
template<class... A> int FUN_10591bc0(A...);
void __fastcall FUN_105920b0(int param_1);
template<class... A> int FUN_105920b0(A...);
undefined4 * __fastcall FUN_10594a50(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10594a50(A...);
void __fastcall FUN_10595260(int param_1);
template<class... A> int FUN_10595260(A...);
void __fastcall FUN_10595290(int *param_1);
template<class... A> int FUN_10595290(A...);
void __fastcall FUN_10595360(int param_1);
template<class... A> int FUN_10595360(A...);
void __fastcall FUN_10595380(undefined4 *param_1);
template<class... A> int FUN_10595380(A...);
void __fastcall FUN_105953a0(int *param_1);
template<class... A> int FUN_105953a0(A...);
void __fastcall FUN_105953d0(int *param_1);
template<class... A> int FUN_105953d0(A...);
void __fastcall FUN_10595bd0(int param_1);
template<class... A> int FUN_10595bd0(A...);
void __stdcall FUN_10595f90(int param_1,int param_2);
template<class... A> int FUN_10595f90(A...);
int * FUN_10596820(int *param_1);
template<class... A> int FUN_10596820(A...);
void __stdcall FUN_105970f0(int param_1,int param_2);
template<class... A> int FUN_105970f0(A...);
void __stdcall FUN_10598470(SCStr *param_1);
template<class... A> int __stdcall FUN_10598470(A...);
void __stdcall FUN_1059b6d0(undefined4 param_1,int *param_2);
template<class... A> int FUN_1059b6d0(A...);
undefined4 * __fastcall FUN_1059bb70(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_1059bb70(A...);
void __fastcall FUN_1059bf30(int param_1);
template<class... A> int FUN_1059bf30(A...);
void __fastcall FUN_1059c010(int param_1);
template<class... A> int FUN_1059c010(A...);
void __fastcall FUN_1059c600(int param_1);
template<class... A> int FUN_1059c600(A...);
int * FUN_1059ce00(int *param_1);
template<class... A> int FUN_1059ce00(A...);
void __fastcall FUN_1059d1e0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_1059d1e0(A...);
undefined4 __fastcall FUN_1059d2f0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_1059d2f0(A...);
void FUN_1059ed40(int param_1,int param_2);
template<class... A> int FUN_1059ed40(A...);
void __stdcall FUN_1059f110(undefined4 param_1,int *param_2);
template<class... A> int FUN_1059f110(A...);
undefined4 * __fastcall FUN_1059fa40(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_1059fa40(A...);
undefined4 * __fastcall FUN_1059ff80(undefined4 *param_1);
template<class... A> int FUN_1059ff80(A...);
void __fastcall FUN_105a0080(int param_1);
template<class... A> int FUN_105a0080(A...);
void __fastcall FUN_105a0130(int param_1);
template<class... A> int FUN_105a0130(A...);
void __fastcall FUN_105a0150(int *param_1);
template<class... A> int FUN_105a0150(A...);
void __fastcall FUN_105a0660(undefined4 *param_1);
template<class... A> int FUN_105a0660(A...);
void __fastcall FUN_105a0e00(int param_1);
template<class... A> int FUN_105a0e00(A...);
void __stdcall FUN_105a1540(int param_1,int param_2);
template<class... A> int FUN_105a1540(A...);
void __stdcall FUN_105a1570(int param_1,int param_2);
template<class... A> int FUN_105a1570(A...);
void __stdcall FUN_105a2380(int param_1,int param_2);
template<class... A> int FUN_105a2380(A...);
undefined4 __fastcall FUN_105a2990(int *param_1);
template<class... A> int FUN_105a2990(A...);
undefined4 __fastcall FUN_105a29c0(int *param_1);
template<class... A> int FUN_105a29c0(A...);
undefined4 __fastcall FUN_105a2a70(int *param_1);
template<class... A> int FUN_105a2a70(A...);
undefined4 __fastcall FUN_105a2aa0(int *param_1);
template<class... A> int FUN_105a2aa0(A...);
void __fastcall FUN_105a2c70(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_105a2c70(A...);
void __fastcall FUN_105a2ca0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_105a2ca0(A...);
undefined4 FUN_105a3210(void);
template<class... A> int FUN_105a3210(A...);
extern int ghidra_vftable_SCArray_SCPtr_SCIActionDescriptor___;
extern int ghidra_vftable__Func_impl_no_alloc__lambda_172b2c05f892882e8608afe6a235cd04__void_SCDateTimeManager_const__SCStr_const__;
extern int ghidra_vftable__Func_impl_no_alloc__lambda_19bdeef203780de5e604a90ce4be9e81__void_SCSetting__SCStr_const__;
extern int ghidra_vftable__Func_impl_no_alloc__lambda_1c21c4e3f9899b9cd3f537ee036eaed4__void_SCHousehold_const__SCStr_const__;
extern int ghidra_vftable__Func_impl_no_alloc__lambda_2d92c8bfb5f566b09cfe8eeec578b1fb__void_SCAddVoiceServiceWizard__;
extern int ghidra_vftable__Func_impl_no_alloc__lambda_37ba46da54180a76f324095b3b3387e7__void_SCAddVoiceServiceWizard__;
extern int ghidra_vftable__Func_impl_no_alloc__lambda_5668acf38edaa419075f5a002a2b1b9d__void_SCStr_const__;
extern int ghidra_vftable__Func_impl_no_alloc__lambda_6643794ac1fdc83a6a35adc0fc16fa10__void_SCHousehold_const__SCStr_const__;
extern int ghidra_vftable__Func_impl_no_alloc__lambda_711b61b9355f09fc7ded9be40dbc904b__void_SCHousehold_const__SCStr_const__;
extern int ghidra_vftable__Func_impl_no_alloc__lambda_a9c217ea519d133fedc047d2675c092c__void_SCHousehold_const__SCStr_const__;
extern int ghidra_vftable__Func_impl_no_alloc__lambda_b40d2cb89d82ec368335e9e2aa9cd77f__void_SCAlarmManager_const__SCStr_const__;
extern int ghidra_vftable__Func_impl_no_alloc__lambda_bae15aa7d879f1f9bcbf0af0cd67b4ed__void_SCController_const__SCStr_const__;
extern int ghidra_vftable__Func_impl_no_alloc__lambda_baeef59acb6c62fca0b98fba24bc0402__void_;
extern int ghidra_vftable__Func_impl_no_alloc__lambda_bdb4926a07395fd04542a4130dedac13__void_SCSetting__SCStr_const__;
extern int ghidra_vftable__Func_impl_no_alloc__lambda_d07c1d4f2481252533e80cc0f09a54c9__void_SCIOpGetAboutSonosString__unsigned_short_;
extern int ghidra_vftable__Func_impl_no_alloc__lambda_f255800ffad6a7a5ed4e3b4b6463d721__void_SCStr_const__;
extern int ghidra_vftable__Func_impl_no_alloc__lambda_f2b3e15fe7ee076ed0c875f474fc9748__void_SCHousehold_const__SCStr_const__;
extern int ghidra_vftable_std___Func_impl_no_alloc__lambda_5af8eb5354b3c86e46e4d5b7165303b9__void_SCIController__ViewId_SCIController__ViewMode_;
extern int ghidra_vftable_std___Func_impl_no_alloc__lambda_63432ce2fb66b9ed36bba9d30d396e0c__void_SCIController__ViewId_SCIController__ViewMode_;
extern int ghidra_vftable_std___Func_impl_no_alloc__lambda_9c17ed55ef8614195be9dc70d51f8ea9__void_SCIController__ViewId_SCIController__ViewMode_;
extern int ghidra_vftable_std___Func_impl_no_alloc__lambda_af691c8564d15ff5374f5c3659c7a43d__void_SCIController__ViewId_SCIController__ViewMode_;
extern int ghidra_vftable_std___Func_impl_no_alloc__lambda_f022ad69723ba7f93d5debe7a6c277bc__void_SCIController__ViewId_SCIController__ViewMode_;

// Reference entry 103eb060; body size 16 bytes.
extern int __stdcall FUN_10065348(int a1);
extern int __stdcall FUN_10070892(int a1);
extern int __stdcall FUN_104ab710(int a1,int a2);
extern int __stdcall thunk_FUN_101ff410(int a1);
extern int __stdcall thunk_FUN_10219a00(int a1);
extern int __stdcall thunk_FUN_1021bf80(int a1,int a2);
extern int __stdcall thunk_FUN_1021cc40(int a1);
extern int __stdcall thunk_FUN_102207b0(int a1,int a2,int a3);
extern int __stdcall thunk_FUN_103beae0(int a1,int a2);
extern int __stdcall thunk_FUN_103cb6d0(int a1,int a2);
extern int __stdcall thunk_FUN_103d61d0(int a1,int a2);
extern int __stdcall thunk_FUN_103d6930(int a1);
extern int __stdcall thunk_FUN_103f6890(int a1,int a2);
extern int __stdcall thunk_FUN_103f6950(int a1,int a2);
extern int __stdcall thunk_FUN_103f6da0(int a1,int a2);
extern int __stdcall thunk_FUN_103f6e10(int a1,int a2);
extern int __stdcall thunk_FUN_10400590(int a1,int a2);
extern int __stdcall thunk_FUN_10406570(int a1,int a2);
extern int __stdcall thunk_FUN_1040fdd0(int a1,int a2,int a3);
extern int __stdcall thunk_FUN_1041d2b0(int a1);
extern int __stdcall thunk_FUN_10432ee0(int a1,int a2);
extern int __stdcall thunk_FUN_10436400(int a1,int a2,int a3);
extern int __stdcall thunk_FUN_1045af20(int a1);
extern int __stdcall thunk_FUN_1047ff40(int a1,int a2);
extern int __stdcall thunk_FUN_104e04f0(int a1,int a2,int a3);
extern int __stdcall thunk_FUN_104e05c0(int a1,int a2,int a3);
extern int __stdcall thunk_FUN_104e0690(int a1,int a2,int a3);
extern int __stdcall thunk_FUN_104e5a60(int a1);
extern int __stdcall thunk_FUN_104f8a70(int a1,int a2);
extern int __stdcall thunk_FUN_104f8c40(int a1,int a2);
extern int __stdcall thunk_FUN_10500110(int a1,int a2);
extern int __stdcall thunk_FUN_10500160(int a1,int a2);
extern int __stdcall thunk_FUN_1053e5d0(int a1);
extern int __stdcall thunk_FUN_1054e110(int a1,int a2);
extern int __stdcall thunk_FUN_1054e240(int a1,int a2);
extern int __stdcall thunk_FUN_10593d10(int a1,int a2);
extern int __stdcall thunk_FUN_10593e20(int a1,int a2);
extern int __stdcall thunk_FUN_1059b6d0(int a1,int a2);
extern int __stdcall thunk_FUN_1059b760(int a1,int a2);
extern int __stdcall thunk_FUN_1059d940(int a1);
extern int __stdcall thunk_FUN_1059f110(int a1,int a2);
extern int __stdcall thunk_FUN_1059f1a0(int a1,int a2);
extern int __stdcall thunk_FUN_1061c5e0(int a1);
extern int __stdcall thunk_FUN_10d9e6c0(int a1);
extern int __stdcall thunk_FUN_110adac0(int a1);
extern int __stdcall thunk_FUN_110b2900(int a1,int a2,int a3,int a4);
extern int __stdcall thunk_FUN_110c1f30(int a1);
extern int __stdcall thunk_FUN_1113ecc0(int a1,int a2);
extern int __stdcall thunk_FUN_111a05c0(int a1);
extern int __stdcall thunk_FUN_111a05e0(int a1);
extern int __stdcall thunk_FUN_111a4bc0(int a1,int a2);
extern int __stdcall thunk_FUN_1124ffa0(int a1,int a2);
struct SCVtbl_1_0 { virtual void _p0(); virtual int v(void); };
struct SCVtbl_2_0 { virtual void _p0(); virtual void _p1(); virtual int v(void); };
struct SCVtbl_3_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual int v(void); };
struct SCVtbl_3_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual int v(int a1); };
struct SCVtbl_4_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual int v(void); };
struct SCVtbl_4_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual int v(int a1); };
struct SCVtbl_5_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual int v(void); };
struct SCVtbl_5_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual int v(int a1); };
struct SCVtbl_6_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual int v(void); };
struct SCVtbl_7_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual int v(void); };
struct SCVtbl_8_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual int v(void); };
struct SCVtbl_9_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual int v(void); };
struct SCVtbl_10_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual int v(void); };
struct SCVtbl_14_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual int v(void); };
struct SCVtbl_14_3 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual int v(int a1,int a2,int a3); };
struct SCVtbl_21_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual int v(void); };
struct SCVtbl_22_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual int v(int a1); };
struct SCVtbl_23_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual int v(void); };
struct SCVtbl_54_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual void _p51(); virtual void _p52(); virtual void _p53(); virtual int v(void); };
struct SCVtbl_68_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual void _p51(); virtual void _p52(); virtual void _p53(); virtual void _p54(); virtual void _p55(); virtual void _p56(); virtual void _p57(); virtual void _p58(); virtual void _p59(); virtual void _p60(); virtual void _p61(); virtual void _p62(); virtual void _p63(); virtual void _p64(); virtual void _p65(); virtual void _p66(); virtual void _p67(); virtual int v(int a1); };
struct SCVtbl_69_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual void _p51(); virtual void _p52(); virtual void _p53(); virtual void _p54(); virtual void _p55(); virtual void _p56(); virtual void _p57(); virtual void _p58(); virtual void _p59(); virtual void _p60(); virtual void _p61(); virtual void _p62(); virtual void _p63(); virtual void _p64(); virtual void _p65(); virtual void _p66(); virtual void _p67(); virtual void _p68(); virtual int v(int a1); };
struct SCVtbl_78_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual void _p51(); virtual void _p52(); virtual void _p53(); virtual void _p54(); virtual void _p55(); virtual void _p56(); virtual void _p57(); virtual void _p58(); virtual void _p59(); virtual void _p60(); virtual void _p61(); virtual void _p62(); virtual void _p63(); virtual void _p64(); virtual void _p65(); virtual void _p66(); virtual void _p67(); virtual void _p68(); virtual void _p69(); virtual void _p70(); virtual void _p71(); virtual void _p72(); virtual void _p73(); virtual void _p74(); virtual void _p75(); virtual void _p76(); virtual void _p77(); virtual int v(void); };
struct SCVtbl_89_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual void _p51(); virtual void _p52(); virtual void _p53(); virtual void _p54(); virtual void _p55(); virtual void _p56(); virtual void _p57(); virtual void _p58(); virtual void _p59(); virtual void _p60(); virtual void _p61(); virtual void _p62(); virtual void _p63(); virtual void _p64(); virtual void _p65(); virtual void _p66(); virtual void _p67(); virtual void _p68(); virtual void _p69(); virtual void _p70(); virtual void _p71(); virtual void _p72(); virtual void _p73(); virtual void _p74(); virtual void _p75(); virtual void _p76(); virtual void _p77(); virtual void _p78(); virtual void _p79(); virtual void _p80(); virtual void _p81(); virtual void _p82(); virtual void _p83(); virtual void _p84(); virtual void _p85(); virtual void _p86(); virtual void _p87(); virtual void _p88(); virtual int v(void); };
struct SCVtbl_90_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual void _p51(); virtual void _p52(); virtual void _p53(); virtual void _p54(); virtual void _p55(); virtual void _p56(); virtual void _p57(); virtual void _p58(); virtual void _p59(); virtual void _p60(); virtual void _p61(); virtual void _p62(); virtual void _p63(); virtual void _p64(); virtual void _p65(); virtual void _p66(); virtual void _p67(); virtual void _p68(); virtual void _p69(); virtual void _p70(); virtual void _p71(); virtual void _p72(); virtual void _p73(); virtual void _p74(); virtual void _p75(); virtual void _p76(); virtual void _p77(); virtual void _p78(); virtual void _p79(); virtual void _p80(); virtual void _p81(); virtual void _p82(); virtual void _p83(); virtual void _p84(); virtual void _p85(); virtual void _p86(); virtual void _p87(); virtual void _p88(); virtual void _p89(); virtual int v(void); };
struct SCVtbl_95_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual void _p51(); virtual void _p52(); virtual void _p53(); virtual void _p54(); virtual void _p55(); virtual void _p56(); virtual void _p57(); virtual void _p58(); virtual void _p59(); virtual void _p60(); virtual void _p61(); virtual void _p62(); virtual void _p63(); virtual void _p64(); virtual void _p65(); virtual void _p66(); virtual void _p67(); virtual void _p68(); virtual void _p69(); virtual void _p70(); virtual void _p71(); virtual void _p72(); virtual void _p73(); virtual void _p74(); virtual void _p75(); virtual void _p76(); virtual void _p77(); virtual void _p78(); virtual void _p79(); virtual void _p80(); virtual void _p81(); virtual void _p82(); virtual void _p83(); virtual void _p84(); virtual void _p85(); virtual void _p86(); virtual void _p87(); virtual void _p88(); virtual void _p89(); virtual void _p90(); virtual void _p91(); virtual void _p92(); virtual void _p93(); virtual void _p94(); virtual int v(void); };
struct SCVtbl_96_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual void _p51(); virtual void _p52(); virtual void _p53(); virtual void _p54(); virtual void _p55(); virtual void _p56(); virtual void _p57(); virtual void _p58(); virtual void _p59(); virtual void _p60(); virtual void _p61(); virtual void _p62(); virtual void _p63(); virtual void _p64(); virtual void _p65(); virtual void _p66(); virtual void _p67(); virtual void _p68(); virtual void _p69(); virtual void _p70(); virtual void _p71(); virtual void _p72(); virtual void _p73(); virtual void _p74(); virtual void _p75(); virtual void _p76(); virtual void _p77(); virtual void _p78(); virtual void _p79(); virtual void _p80(); virtual void _p81(); virtual void _p82(); virtual void _p83(); virtual void _p84(); virtual void _p85(); virtual void _p86(); virtual void _p87(); virtual void _p88(); virtual void _p89(); virtual void _p90(); virtual void _p91(); virtual void _p92(); virtual void _p93(); virtual void _p94(); virtual void _p95(); virtual int v(void); };
struct SCVtbl_96_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual void _p51(); virtual void _p52(); virtual void _p53(); virtual void _p54(); virtual void _p55(); virtual void _p56(); virtual void _p57(); virtual void _p58(); virtual void _p59(); virtual void _p60(); virtual void _p61(); virtual void _p62(); virtual void _p63(); virtual void _p64(); virtual void _p65(); virtual void _p66(); virtual void _p67(); virtual void _p68(); virtual void _p69(); virtual void _p70(); virtual void _p71(); virtual void _p72(); virtual void _p73(); virtual void _p74(); virtual void _p75(); virtual void _p76(); virtual void _p77(); virtual void _p78(); virtual void _p79(); virtual void _p80(); virtual void _p81(); virtual void _p82(); virtual void _p83(); virtual void _p84(); virtual void _p85(); virtual void _p86(); virtual void _p87(); virtual void _p88(); virtual void _p89(); virtual void _p90(); virtual void _p91(); virtual void _p92(); virtual void _p93(); virtual void _p94(); virtual void _p95(); virtual int v(int a1); };
struct SCVtbl_97_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual void _p51(); virtual void _p52(); virtual void _p53(); virtual void _p54(); virtual void _p55(); virtual void _p56(); virtual void _p57(); virtual void _p58(); virtual void _p59(); virtual void _p60(); virtual void _p61(); virtual void _p62(); virtual void _p63(); virtual void _p64(); virtual void _p65(); virtual void _p66(); virtual void _p67(); virtual void _p68(); virtual void _p69(); virtual void _p70(); virtual void _p71(); virtual void _p72(); virtual void _p73(); virtual void _p74(); virtual void _p75(); virtual void _p76(); virtual void _p77(); virtual void _p78(); virtual void _p79(); virtual void _p80(); virtual void _p81(); virtual void _p82(); virtual void _p83(); virtual void _p84(); virtual void _p85(); virtual void _p86(); virtual void _p87(); virtual void _p88(); virtual void _p89(); virtual void _p90(); virtual void _p91(); virtual void _p92(); virtual void _p93(); virtual void _p94(); virtual void _p95(); virtual void _p96(); virtual int v(int a1); };
#line 1 "ENTRY_103eb060"

undefined4 __fastcall FUN_103eb060(int param_1)

{
  return (undefined4)(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x18) + 0x616c) + 0x448c));
}


// Reference entry 103eb080; body size 16 bytes.
#line 1 "ENTRY_103eb080"

undefined4 __fastcall FUN_103eb080(int param_1)

{
  return (undefined4)(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x18) + 0x624c) + 0x448c));
}


// Reference entry 103eb100; body size 25 bytes.
#line 1 "ENTRY_103eb100"

SCStr * __thiscall Recovered_Bulk::m_FUN_103eb100(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(*(int *)(param_1 + 0x18) + 0x618c));
  return (SCStr *)(param_2);
}


// Reference entry 103eb2e0; body size 25 bytes.
#line 1 "ENTRY_103eb2e0"

SCStr * __thiscall Recovered_Bulk::m_FUN_103eb2e0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(*(int *)(param_1 + 0x18) + 0x12d28));
  return (SCStr *)(param_2);
}


// Reference entry 103eb300; body size 25 bytes.
#line 1 "ENTRY_103eb300"

SCStr * __thiscall Recovered_Bulk::m_FUN_103eb300(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(*(int *)(param_1 + 0x18) + 0x12e48));
  return (SCStr *)(param_2);
}


// Reference entry 103eb320; body size 25 bytes.
#line 1 "ENTRY_103eb320"

SCStr * __thiscall Recovered_Bulk::m_FUN_103eb320(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(*(int *)(param_1 + 0x18) + 0x6194));
  return (SCStr *)(param_2);
}


// Reference entry 103eb370; body size 25 bytes.
#line 1 "ENTRY_103eb370"

SCStr * __thiscall Recovered_Bulk::m_FUN_103eb370(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(*(int *)(param_1 + 0x18) + 0x12d10));
  return (SCStr *)(param_2);
}


// Reference entry 103eb660; body size 21 bytes.
#line 1 "ENTRY_103eb660"

SCStr * __stdcall FUN_103eb660(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 103eb680; body size 21 bytes.
#line 1 "ENTRY_103eb680"

SCStr * __stdcall FUN_103eb680(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 103eb6a0; body size 21 bytes.
#line 1 "ENTRY_103eb6a0"

SCStr * __stdcall FUN_103eb6a0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 103eb6c0; body size 21 bytes.
#line 1 "ENTRY_103eb6c0"

SCStr * __stdcall FUN_103eb6c0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 103eb6e0; body size 21 bytes.
#line 1 "ENTRY_103eb6e0"

SCStr * __stdcall FUN_103eb6e0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 103eb700; body size 21 bytes.
#line 1 "ENTRY_103eb700"

SCStr * __stdcall FUN_103eb700(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 103eb720; body size 21 bytes.
#line 1 "ENTRY_103eb720"

SCStr * __stdcall FUN_103eb720(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 103eb740; body size 21 bytes.
#line 1 "ENTRY_103eb740"

SCStr * __stdcall FUN_103eb740(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 103eb760; body size 21 bytes.
#line 1 "ENTRY_103eb760"

SCStr * __stdcall FUN_103eb760(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 103eb780; body size 21 bytes.
#line 1 "ENTRY_103eb780"

SCStr * __stdcall FUN_103eb780(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 103eb7a0; body size 21 bytes.
#line 1 "ENTRY_103eb7a0"

SCStr * __stdcall FUN_103eb7a0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 103eb7c0; body size 21 bytes.
#line 1 "ENTRY_103eb7c0"

SCStr * __stdcall FUN_103eb7c0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 103eb7e0; body size 21 bytes.
#line 1 "ENTRY_103eb7e0"

SCStr * __stdcall FUN_103eb7e0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 103eb800; body size 21 bytes.
#line 1 "ENTRY_103eb800"

SCStr * __stdcall FUN_103eb800(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 103eb820; body size 21 bytes.
#line 1 "ENTRY_103eb820"

SCStr * __stdcall FUN_103eb820(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 103eb840; body size 21 bytes.
#line 1 "ENTRY_103eb840"

SCStr * __stdcall FUN_103eb840(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 103eb860; body size 21 bytes.
#line 1 "ENTRY_103eb860"

SCStr * __stdcall FUN_103eb860(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 103eb8c0; body size 25 bytes.
#line 1 "ENTRY_103eb8c0"

SCStr * __thiscall Recovered_Bulk::m_FUN_103eb8c0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(*(int *)(param_1 + 0x18) + 0x12d14));
  return (SCStr *)(param_2);
}


// Reference entry 103eb900; body size 23 bytes.
#line 1 "ENTRY_103eb900"

SCStr * __thiscall Recovered_Bulk::m_FUN_103eb900(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x6128));
  return (SCStr *)(param_2);
}


// Reference entry 103eba80; body size 25 bytes.
#line 1 "ENTRY_103eba80"

SCStr * __thiscall Recovered_Bulk::m_FUN_103eba80(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(*(int *)(param_1 + 0x18) + 0x12d20));
  return (SCStr *)(param_2);
}


// Reference entry 103ebaa0; body size 25 bytes.
#line 1 "ENTRY_103ebaa0"

SCStr * __thiscall Recovered_Bulk::m_FUN_103ebaa0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(*(int *)(param_1 + 0x18) + 0x6678));
  return (SCStr *)(param_2);
}


// Reference entry 103f51e0; body size 21 bytes.
#line 1 "ENTRY_103f51e0"

void __thiscall Recovered_Bulk::m_FUN_103f51e0(int param_2)
{
  int *param_1 = (int *)this;
  param_1[0xb] = (int)(param_2);
  if ((char)param_1[10] == '\0') {
    ((SCVtbl_9_0*)(param_1))->v();
  }
  return;
}


// Reference entry 103f6830; body size 33 bytes.
#line 1 "ENTRY_103f6830"

void __thiscall Recovered_Bulk::m_FUN_103f6830(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_103f6890<>(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 103f6860; body size 33 bytes.
#line 1 "ENTRY_103f6860"

void __thiscall Recovered_Bulk::m_FUN_103f6860(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_103f6950((int)(param_2),(int)(*(undefined4 *)(*param_1 + 4)));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 103f6ad0; body size 60 bytes.
#line 1 "ENTRY_103f6ad0"

int __thiscall Recovered_Bulk::m_FUN_103f6ad0(SCStr *param_2)
{
  int *param_1 = (int *)this;
  bool bVar1;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_103f6da0((int)((uint)&local_c),(int)(param_2));
  if ((*(char *)(local_4 + 0xd) == '\0') &&
     (bVar1 = (bool)(((SCStr *)(param_2))->op_lt((SCStr *)(local_4 + 0x10)), 0), !bVar1)) {
    return (int)(local_4);
  }
  return (int)(*param_1);
}


// Reference entry 103f6b20; body size 49 bytes.
#line 1 "ENTRY_103f6b20"

int __thiscall Recovered_Bulk::m_FUN_103f6b20(int *param_2)
{
  int *param_1 = (int *)this;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_103f6e10((int)((uint)&local_c),(int)(param_2));
  if ((*(char *)(local_4 + 0xd) != '\0') || ((int)(*param_2) < *(int *)(local_4 + 0x10))) {
    local_4 = (int)(*param_1);
  }
  return (int)(local_4);
}


// Reference entry 103f8220; body size 41 bytes.
#line 1 "ENTRY_103f8220"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103f8220(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103f8260; body size 41 bytes.
#line 1 "ENTRY_103f8260"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103f8260(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103f82a0; body size 41 bytes.
#line 1 "ENTRY_103f82a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103f82a0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103f82e0; body size 41 bytes.
#line 1 "ENTRY_103f82e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103f82e0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103f8320; body size 41 bytes.
#line 1 "ENTRY_103f8320"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103f8320(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103f8480; body size 48 bytes.
#line 1 "ENTRY_103f8480"

undefined4 * __fastcall FUN_103f8480(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 103f84c0; body size 48 bytes.
#line 1 "ENTRY_103f84c0"

undefined4 * __fastcall FUN_103f84c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 103fa3c0; body size 19 bytes.
#line 1 "ENTRY_103fa3c0"

void __fastcall FUN_103fa3c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 103faa40; body size 19 bytes.
#line 1 "ENTRY_103faa40"

void __fastcall FUN_103faa40(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 103faa60; body size 19 bytes.
#line 1 "ENTRY_103faa60"

void __fastcall FUN_103faa60(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 103faa80; body size 33 bytes.
#line 1 "ENTRY_103faa80"

void __fastcall FUN_103faa80(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 103faab0; body size 33 bytes.
#line 1 "ENTRY_103faab0"

void __fastcall FUN_103faab0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 103faae0; body size 33 bytes.
#line 1 "ENTRY_103faae0"

void __fastcall FUN_103faae0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 103fab10; body size 33 bytes.
#line 1 "ENTRY_103fab10"

void __fastcall FUN_103fab10(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 103fab40; body size 33 bytes.
#line 1 "ENTRY_103fab40"

void __fastcall FUN_103fab40(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 103faba0; body size 28 bytes.
#line 1 "ENTRY_103faba0"

void __fastcall FUN_103faba0(int *param_1)

{
  thunk_FUN_103f6890<>(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 103fabd0; body size 28 bytes.
#line 1 "ENTRY_103fabd0"

void __fastcall FUN_103fabd0(int *param_1)

{
  thunk_FUN_103f6950((int)(param_1),(int)(*(undefined4 *)(*param_1 + 4)));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 103fac00; body size 36 bytes.
#line 1 "ENTRY_103fac00"

void __fastcall FUN_103fac00(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    thunk_FUN_103f6890((int)(*param_1),(int)(*(undefined4 *)(*piVar1 + 4)));
    thunk_FUN_1148a50e(*piVar1,0x18);
  }
  return;
}


// Reference entry 103fad50; body size 19 bytes.
#line 1 "ENTRY_103fad50"

void __fastcall FUN_103fad50(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 103fad70; body size 19 bytes.
#line 1 "ENTRY_103fad70"

void __fastcall FUN_103fad70(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 103fad90; body size 33 bytes.
#line 1 "ENTRY_103fad90"

void __fastcall FUN_103fad90(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 103fadc0; body size 33 bytes.
#line 1 "ENTRY_103fadc0"

void __fastcall FUN_103fadc0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 103fadf0; body size 33 bytes.
#line 1 "ENTRY_103fadf0"

void __fastcall FUN_103fadf0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 103fae20; body size 33 bytes.
#line 1 "ENTRY_103fae20"

void __fastcall FUN_103fae20(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 103fae50; body size 33 bytes.
#line 1 "ENTRY_103fae50"

void __fastcall FUN_103fae50(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 103fae80; body size 28 bytes.
#line 1 "ENTRY_103fae80"

void __fastcall FUN_103fae80(int *param_1)

{
  thunk_FUN_103f6890<>(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 103faeb0; body size 28 bytes.
#line 1 "ENTRY_103faeb0"

void __fastcall FUN_103faeb0(int *param_1)

{
  thunk_FUN_103f6950((int)(param_1),(int)(*(undefined4 *)(*param_1 + 4)));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 103fb470; body size 18 bytes.
#line 1 "ENTRY_103fb470"

void __fastcall FUN_103fb470(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0x30);
  }
  return;
}


// Reference entry 103fb580; body size 37 bytes.
#line 1 "ENTRY_103fb580"

int * __fastcall FUN_103fb580(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 103fb5b0; body size 37 bytes.
#line 1 "ENTRY_103fb5b0"

int * __fastcall FUN_103fb5b0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 103fb5e0; body size 37 bytes.
#line 1 "ENTRY_103fb5e0"

int * __fastcall FUN_103fb5e0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 103fb610; body size 37 bytes.
#line 1 "ENTRY_103fb610"

int * __fastcall FUN_103fb610(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 103fc100; body size 45 bytes.
#line 1 "ENTRY_103fc100"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103fc100(byte param_2)
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


// Reference entry 103fc140; body size 32 bytes.
#line 1 "ENTRY_103fc140"

undefined4 __thiscall Recovered_Bulk::m_FUN_103fc140(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103fa3e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68);
  }
  return (undefined4)(param_1);
}


// Reference entry 103fc170; body size 32 bytes.
#line 1 "ENTRY_103fc170"

undefined4 __thiscall Recovered_Bulk::m_FUN_103fc170(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103fa4d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68);
  }
  return (undefined4)(param_1);
}


// Reference entry 103fc1a0; body size 32 bytes.
#line 1 "ENTRY_103fc1a0"

undefined4 __thiscall Recovered_Bulk::m_FUN_103fc1a0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103fa5c0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68);
  }
  return (undefined4)(param_1);
}


// Reference entry 103fc1d0; body size 32 bytes.
#line 1 "ENTRY_103fc1d0"

undefined4 __thiscall Recovered_Bulk::m_FUN_103fc1d0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103fa6b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68);
  }
  return (undefined4)(param_1);
}


// Reference entry 103fc200; body size 60 bytes.
#line 1 "ENTRY_103fc200"

int __thiscall Recovered_Bulk::m_FUN_103fc200(byte param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x2c), 0);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1 + 8));
    *(undefined4*)(param_1 + 0x2c) = (undefined4)(0);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x30);
  }
  return (int)(param_1);
}


// Reference entry 103fc350; body size 45 bytes.
#line 1 "ENTRY_103fc350"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103fc350(byte param_2)
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


// Reference entry 103fc390; body size 33 bytes.
#line 1 "ENTRY_103fc390"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103fc390(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103fc460; body size 45 bytes.
#line 1 "ENTRY_103fc460"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103fc460(byte param_2)
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


// Reference entry 103fc4a0; body size 35 bytes.
#line 1 "ENTRY_103fc4a0"

undefined4 __thiscall Recovered_Bulk::m_FUN_103fc4a0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103fb0f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x250);
  }
  return (undefined4)(param_1);
}


// Reference entry 103fc530; body size 25 bytes.
#line 1 "ENTRY_103fc530"

void __fastcall FUN_103fc530(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x18), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 103fc550; body size 25 bytes.
#line 1 "ENTRY_103fc550"

void __fastcall FUN_103fc550(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x18), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 103fc650; body size 58 bytes.
#line 1 "ENTRY_103fc650"

void __thiscall Recovered_Bulk::m_FUN_103fc650(char param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x2c), 0);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1 + 8));
    *(undefined4*)(param_1 + 0x2c) = (undefined4)(0);
  }
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,0x30);
  }
  return;
}


// Reference entry 103fc6a0; body size 39 bytes.
#line 1 "ENTRY_103fc6a0"

void __thiscall Recovered_Bulk::m_FUN_103fc6a0(undefined4 *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  param_2 = (undefined4 *)((undefined4 *)*param_2);
  if (*(int **)(param_1 + 0x2c) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 8))(&param_2,param_3);
    return;
  }
                    
  std::_Xbad_function_call();
}


// Reference entry 103fcfe0; body size 59 bytes.
#line 1 "ENTRY_103fcfe0"

void __thiscall Recovered_Bulk::m_FUN_103fcfe0(int *param_2, unsigned int recovered_unused_stack_0)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_103f6890((int)(param_1),(int)(*(undefined4 *)(iVar1 + 4)));
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


// Reference entry 103fd310; body size 33 bytes.
#line 1 "ENTRY_103fd310"

void __fastcall FUN_103fd310(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 103fd340; body size 33 bytes.
#line 1 "ENTRY_103fd340"

void __fastcall FUN_103fd340(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 103fd370; body size 33 bytes.
#line 1 "ENTRY_103fd370"

void __fastcall FUN_103fd370(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 103fd3a0; body size 33 bytes.
#line 1 "ENTRY_103fd3a0"

void __fastcall FUN_103fd3a0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 103fd3d0; body size 33 bytes.
#line 1 "ENTRY_103fd3d0"

void __fastcall FUN_103fd3d0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 103fed00; body size 33 bytes.
#line 1 "ENTRY_103fed00"

void __fastcall FUN_103fed00(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_103f6890<>(param_1,*(undefined4 *)(iVar1 + 4));
  *(int*)(iVar1 + 4) = (int)(iVar1);
  *(int*)iVar1 = (int)((int)(iVar1));
  *(int*)(iVar1 + 8) = (int)(iVar1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 103fee70; body size 25 bytes.
#line 1 "ENTRY_103fee70"

void FUN_103fee70(void)

{
  thunk_FUN_10400590((int)(0),(int)(1));
  thunk_FUN_10400590((int)(1),(int)(1));
  return;
}


// Reference entry 103ff050; body size 35 bytes.
#line 1 "ENTRY_103ff050"

void __thiscall Recovered_Bulk::m_FUN_103ff050(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(*(int *)(param_1 + 8) + 0x3c), 0);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 8))(&param_2,param_3);
  }
  return;
}


// Reference entry 103ff3b0; body size 20 bytes.
#line 1 "ENTRY_103ff3b0"

SCStr * __thiscall Recovered_Bulk::m_FUN_103ff3b0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x58));
  return (SCStr *)(param_2);
}


// Reference entry 103ff3e0; body size 20 bytes.
#line 1 "ENTRY_103ff3e0"

SCStr * __thiscall Recovered_Bulk::m_FUN_103ff3e0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x4c));
  return (SCStr *)(param_2);
}


// Reference entry 103ff400; body size 20 bytes.
#line 1 "ENTRY_103ff400"

SCStr * __thiscall Recovered_Bulk::m_FUN_103ff400(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x50));
  return (SCStr *)(param_2);
}


// Reference entry 103ff420; body size 20 bytes.
#line 1 "ENTRY_103ff420"

SCStr * __thiscall Recovered_Bulk::m_FUN_103ff420(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x44));
  return (SCStr *)(param_2);
}


// Reference entry 103ff440; body size 20 bytes.
#line 1 "ENTRY_103ff440"

SCStr * __thiscall Recovered_Bulk::m_FUN_103ff440(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x54));
  return (SCStr *)(param_2);
}


// Reference entry 103ff460; body size 20 bytes.
#line 1 "ENTRY_103ff460"

SCStr * __thiscall Recovered_Bulk::m_FUN_103ff460(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x5c));
  return (SCStr *)(param_2);
}


// Reference entry 103ffaa0; body size 23 bytes.
#line 1 "ENTRY_103ffaa0"

SCStr * __thiscall Recovered_Bulk::m_FUN_103ffaa0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x80));
  return (SCStr *)(param_2);
}


// Reference entry 10400a40; body size 57 bytes.
#line 1 "ENTRY_10400a40"

bool __thiscall Recovered_Bulk::m_FUN_10400a40(uint param_2,int param_3)
{
  int param_1 = (int )this;
  uint uVar1;
  int iVar2;
  __time64_t _Var3;
  
  uVar1 = (uint)(*(uint *)(param_1 + 0x68) & *(uint *)(param_1 + 0x6c));
  if (uVar1 != 0xffffffff) {
    _Var3 = (__time64_t)(_time64((__time64_t *)0x0), 0);
    uVar1 = (uint)((uint)_Var3 - *(uint *)(param_1 + 0x68));
    iVar2 = (int)(((int)((ulonglong)_Var3 >> 0x20) - *(int *)(param_1 + 0x6c)) -
            (uint)((uint)(uint)(_Var3) < *(uint *)(param_1 + 0x68)));
    if ((iVar2 <= param_3) && ((iVar2 < param_3 || (uVar1 < param_2)))) {
      return (uint)(((uint)((int3)(uVar1 >> 8)) << 8 | (uint)(1)));
    }
  }
  return (bool)0;
}


// Reference entry 10400a90; body size 27 bytes.
#line 1 "ENTRY_10400a90"

undefined4 __fastcall FUN_10400a90(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x184) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x184) + 0x1c))(), 0);
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10400ad0; body size 19 bytes.
#line 1 "ENTRY_10400ad0"

bool __fastcall FUN_10400ad0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 8) != (int *)((0x0))) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 8) + 0x1c))(), 0);
    return (uint)(uVar1);
  }
  return (bool)0;
}


// Reference entry 104017b0; body size 36 bytes.
#line 1 "ENTRY_104017b0"

void __fastcall FUN_104017b0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(0);
  iStack_10 = (int)(param_1 + -8);
  iStack_14 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_14))->int_allocRep("SCIUserAccount:onAccountTokenFetchFailed");
  thunk_FUN_103d65f0<>();
  return;
}


// Reference entry 10401800; body size 36 bytes.
#line 1 "ENTRY_10401800"

void __fastcall FUN_10401800(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(0);
  iStack_10 = (int)(param_1 + -8);
  iStack_14 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_14))->int_allocRep("SCIUserAccount:onAccountTokenReady");
  thunk_FUN_103d65f0<>();
  return;
}


// Reference entry 10403340; body size 20 bytes.
#line 1 "ENTRY_10403340"

void __thiscall Recovered_Bulk::m_FUN_10403340(int param_2)
{
  int param_1 = (int )this;
  *(int*)(param_1 + 0xa0) = (int)(param_2);
  *(int*)(param_1 + 0xa4) = (int)(param_2 >> 0x1f);
  return;
}


// Reference entry 10403360; body size 23 bytes.
#line 1 "ENTRY_10403360"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_10403360(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xa0) = (undefined4)(param_2);
  *(undefined4*)(param_1 + 0xa4) = (undefined4)(param_3);
  return (undefined4 *)(param_2);
}


// Reference entry 104038b0; body size 57 bytes.
#line 1 "ENTRY_104038b0"

void __fastcall FUN_104038b0(int param_1)

{
  if (*(int *)(param_1 + 0x3c) == 0) {
    thunk_FUN_10400590((int)(0),(int)(1));
    thunk_FUN_10400590((int)(1),(int)(1));
    return;
  }
  thunk_FUN_103cb6d0((int)(param_1 + 0x44),(int)(0));
  thunk_FUN_10400590((int)(1),(int)(1));
  return;
}


// Reference entry 10403b40; body size 22 bytes.
#line 1 "ENTRY_10403b40"

undefined4 *  __stdcall FUN_10403b40(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_103d61d0((int)(param_1),(int)(0));
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10403b60; body size 21 bytes.
#line 1 "ENTRY_10403b60"

void __thiscall Recovered_Bulk::m_FUN_10403b60(int *param_2)
{
  int param_1 = (int )this;
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_5_1*)(param_2))->v((int)(*(undefined4 *)(param_1 + 4)));
  }
  return;
}


// Reference entry 10403b80; body size 23 bytes.
#line 1 "ENTRY_10403b80"

void __stdcall FUN_10403b80(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_103d6930();
    return;
  }
  return;
}


// Reference entry 10403cd0; body size 41 bytes.
#line 1 "ENTRY_10403cd0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10403cd0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10403dc0; body size 19 bytes.
#line 1 "ENTRY_10403dc0"

void __fastcall FUN_10403dc0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10403ef0; body size 45 bytes.
#line 1 "ENTRY_10403ef0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10403ef0(byte param_2)
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


// Reference entry 10406540; body size 33 bytes.
#line 1 "ENTRY_10406540"

void __thiscall Recovered_Bulk::m_FUN_10406540(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_10406570((int)(param_2),(int)(*(undefined4 *)(*param_1 + 4)));
  thunk_FUN_1148a50e(*param_1,0x30);
  return;
}


// Reference entry 10406bd0; body size 30 bytes.
#line 1 "ENTRY_10406bd0"

void __thiscall Recovered_Bulk::m_FUN_10406bd0(int param_2)
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


// Reference entry 10407020; body size 59 bytes.
#line 1 "ENTRY_10407020"

void __thiscall Recovered_Bulk::m_FUN_10407020(undefined4 *param_2)
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
      ((SCVtbl_1_0*)(piVar2))->v();
    }
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
    return;
  }
  thunk_FUN_10406340<>(puVar1,param_2);
  return;
}


// Reference entry 104073c0; body size 32 bytes.
#line 1 "ENTRY_104073c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_104073c0(undefined4 *param_2)
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


// Reference entry 104073f0; body size 41 bytes.
#line 1 "ENTRY_104073f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_104073f0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10407450; body size 24 bytes.
#line 1 "ENTRY_10407450"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10407450(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10407500; body size 48 bytes.
#line 1 "ENTRY_10407500"

undefined4 * __fastcall FUN_10407500(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x30), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 104076b0; body size 62 bytes.
#line 1 "ENTRY_104076b0"

undefined4 * __fastcall FUN_104076b0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  puVar1 = (undefined4 *)(operator_new(8), 0);
  puVar1[1] = (undefined4)(0);
  *param_1 = (undefined4)(puVar1);
  *puVar1 = (undefined4)(param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10407eb0; body size 60 bytes.
#line 1 "ENTRY_10407eb0"

void __fastcall FUN_10407eb0(int *param_1)

{ int stack0xfffffffc;
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


// Reference entry 10407f10; body size 19 bytes.
#line 1 "ENTRY_10407f10"

void __fastcall FUN_10407f10(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x30);
  }
  return;
}


// Reference entry 10407f30; body size 28 bytes.
#line 1 "ENTRY_10407f30"

void __fastcall FUN_10407f30(int *param_1)

{
  thunk_FUN_10406570((int)(param_1),(int)(*(undefined4 *)(*param_1 + 4)));
  thunk_FUN_1148a50e(*param_1,0x30);
  return;
}


// Reference entry 10407fe0; body size 19 bytes.
#line 1 "ENTRY_10407fe0"

void __fastcall FUN_10407fe0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x30);
  }
  return;
}


// Reference entry 10408000; body size 17 bytes.
#line 1 "ENTRY_10408000"

void __fastcall FUN_10408000(undefined4 *param_1)

{
  thunk_FUN_10405f90(*param_1,param_1[1],param_1[2]);
  return;
}


// Reference entry 10408180; body size 28 bytes.
#line 1 "ENTRY_10408180"

void __fastcall FUN_10408180(int *param_1)

{
  thunk_FUN_10406570((int)(param_1),(int)(*(undefined4 *)(*param_1 + 4)));
  thunk_FUN_1148a50e(*param_1,0x30);
  return;
}


// Reference entry 10408c30; body size 32 bytes.
#line 1 "ENTRY_10408c30"

undefined4 __thiscall Recovered_Bulk::m_FUN_10408c30(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10408520();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 10408c60; body size 43 bytes.
#line 1 "ENTRY_10408c60"

undefined4 FUN_10408c60(undefined4 param_1,SCStr *param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  
  uVar3 = (undefined4)(0);
  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)param_2 != (undefined1 *)((0x0))) {
    puVar2 = (undefined1 *)(*(undefined1 **)param_2);
  }
  uVar1 = (uint)(((SCStr *)(param_2))->length(), 0);
  thunk_FUN_1040bfe0(param_1,puVar2,uVar1,uVar3);
  return (undefined4)(param_1);
}


// Reference entry 10408ca0; body size 45 bytes.
#line 1 "ENTRY_10408ca0"

undefined4 FUN_10408ca0(undefined4 param_1,SCStr *param_2,undefined4 param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  
  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)param_2 != (undefined1 *)((0x0))) {
    puVar2 = (undefined1 *)(*(undefined1 **)param_2);
  }
  uVar1 = (uint)(((SCStr *)(param_2))->length(), 0);
  thunk_FUN_1040bfe0(param_1,puVar2,uVar1,param_3);
  return (undefined4)(param_1);
}


// Reference entry 10408e00; body size 25 bytes.
#line 1 "ENTRY_10408e00"

void __fastcall FUN_10408e00(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x30), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 10408f60; body size 20 bytes.
#line 1 "ENTRY_10408f60"

void __thiscall Recovered_Bulk::m_FUN_10408f60(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10405f90(param_2,param_3,param_1);
  return;
}


// Reference entry 10409b60; body size 61 bytes.
#line 1 "ENTRY_10409b60"

void __thiscall Recovered_Bulk::m_FUN_10409b60(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    uVar2 = (undefined4)(((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 10409bb0; body size 30 bytes.
#line 1 "ENTRY_10409bb0"

void __thiscall Recovered_Bulk::m_FUN_10409bb0(int param_2)
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


// Reference entry 10409ef0; body size 42 bytes.
#line 1 "ENTRY_10409ef0"

int __fastcall FUN_10409ef0(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)((*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0xc)) - 1);
  return (int)(*(int *)(*(int *)(param_1 + 4) + (uVar1 >> 1 & *(int *)(param_1 + 8) - 1U) * 4) + (uVar1 & 1) * 8);
}


// Reference entry 10409fe0; body size 33 bytes.
#line 1 "ENTRY_10409fe0"

void __fastcall FUN_10409fe0(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_10406570((int)(param_1),(int)(*(undefined4 *)(iVar1 + 4)));
  *(int*)(iVar1 + 4) = (int)(iVar1);
  *(int*)iVar1 = (int)((int)(iVar1));
  *(int*)(iVar1 + 8) = (int)(iVar1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 1040a010; body size 24 bytes.
#line 1 "ENTRY_1040a010"

void __fastcall FUN_1040a010(undefined4 *param_1)

{
  thunk_FUN_10405f90(*param_1,param_1[1],param_1);
  param_1[1] = (undefined4)(*param_1);
  return;
}


// Reference entry 1040a120; body size 60 bytes.
#line 1 "ENTRY_1040a120"

void __stdcall FUN_1040a120(int param_1,int param_2)

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


// Reference entry 1040a180; body size 28 bytes.
#line 1 "ENTRY_1040a180"

void __fastcall FUN_1040a180(int *param_1)

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


// Reference entry 1040a5e0; body size 51 bytes.
#line 1 "ENTRY_1040a5e0"

undefined * __thiscall Recovered_Bulk::m_FUN_1040a5e0(char param_2)
{
  int param_1 = (int )this;
  if (*(char *)(param_1 + 0x30) != '\0') {
    if (param_2 == '\'') {
      return (undefined *)(&DAT_118a1478);
    }
    if (param_2 == '\"') {
      return (undefined *)(&DAT_118a147c);
    }
    if (param_2 == '\\') {
      return (undefined *)(&DAT_118a1480);
    }
  }
  return (undefined *)((undefined *)0x0);
}


// Reference entry 1040b690; body size 53 bytes.
#line 1 "ENTRY_1040b690"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1040b690(undefined4 *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 2);
  param_1[0x11] = (int)(5);
  thunk_FUN_10405f90(*piVar1,param_1[3],piVar1);
  param_1[3] = (int)(*piVar1);
  *param_2 = (undefined4)(param_1);
  ((SCVtbl_1_0*)(param_1))->v();
  return (undefined4 *)(param_2);
}


// Reference entry 1040bfa0; body size 43 bytes.
#line 1 "ENTRY_1040bfa0"

undefined4 FUN_1040bfa0(undefined4 param_1,SCStr *param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  
  uVar3 = (undefined4)(0);
  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)param_2 != (undefined1 *)((0x0))) {
    puVar2 = (undefined1 *)(*(undefined1 **)param_2);
  }
  uVar1 = (uint)(((SCStr *)(param_2))->length(), 0);
  thunk_FUN_1040bfe0(param_1,puVar2,uVar1,uVar3);
  return (undefined4)(param_1);
}


// Reference entry 1040cc10; body size 59 bytes.
#line 1 "ENTRY_1040cc10"

void __thiscall Recovered_Bulk::m_FUN_1040cc10(undefined4 *param_2)
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
      ((SCVtbl_1_0*)(piVar2))->v();
    }
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
    return;
  }
  thunk_FUN_10406340<>(puVar1,param_2);
  return;
}


// Reference entry 1040df70; body size 42 bytes.
#line 1 "ENTRY_1040df70"

int __fastcall FUN_1040df70(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)((*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0xc)) - 1);
  return (int)(*(int *)(*(int *)(param_1 + 4) + (uVar1 >> 1 & *(int *)(param_1 + 8) - 1U) * 4) + (uVar1 & 1) * 8);
}


// Reference entry 1040fd90; body size 40 bytes.
#line 1 "ENTRY_1040fd90"

int __thiscall Recovered_Bulk::m_FUN_1040fd90(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int iVar1;
  undefined1 local_8 [8];
  
  iVar1 = (int)(thunk_FUN_1040fdd0((int)((uint)&local_8),(int)(param_2),(int)(param_3)), 0);
  iVar1 = (int)(*(int *)(iVar1 + 4));
  if (iVar1 == 0) {
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  return (int)(iVar1);
}


// Reference entry 104108a0; body size 59 bytes.
#line 1 "ENTRY_104108a0"

void __thiscall Recovered_Bulk::m_FUN_104108a0(undefined4 *param_2)
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
      ((SCVtbl_1_0*)(piVar2))->v();
    }
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
    return;
  }
  thunk_FUN_1040fad0<>(puVar1,param_2);
  return;
}


// Reference entry 104109b0; body size 55 bytes.
#line 1 "ENTRY_104109b0"

void __thiscall Recovered_Bulk::m_FUN_104109b0(int *param_2,SCStr *param_3)
{
  int param_1 = (int )this;
  uint uVar1;
  int iVar2;
  undefined1 local_8 [8];
  
  uVar1 = (uint)(((SCStr *)(param_3))->hash(), 0);
  iVar2 = (int)(thunk_FUN_1040fdd0((int)((uint)&local_8),(int)(param_3),(int)(uVar1)), 0);
  iVar2 = (int)(*(int *)(iVar2 + 4));
  if (iVar2 == 0) {
    iVar2 = (int)(*(int *)(param_1 + 4));
  }
  *param_2 = (int)(iVar2);
  return;
}


// Reference entry 10411070; body size 41 bytes.
#line 1 "ENTRY_10411070"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10411070(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 104110e0; body size 24 bytes.
#line 1 "ENTRY_104110e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_104110e0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10411480; body size 39 bytes.
#line 1 "ENTRY_10411480"

undefined4 * __fastcall FUN_10411480(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 10411940; body size 19 bytes.
#line 1 "ENTRY_10411940"

void __fastcall FUN_10411940(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 104119d0; body size 19 bytes.
#line 1 "ENTRY_104119d0"

void __fastcall FUN_104119d0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x14);
  }
  return;
}


// Reference entry 104119f0; body size 33 bytes.
#line 1 "ENTRY_104119f0"

void __fastcall FUN_104119f0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10411c80; body size 17 bytes.
#line 1 "ENTRY_10411c80"

void __fastcall FUN_10411c80(undefined4 *param_1)

{
  thunk_FUN_10225d70(*param_1,param_1[1],param_1[2]);
  return;
}


// Reference entry 10411ca0; body size 33 bytes.
#line 1 "ENTRY_10411ca0"

void __fastcall FUN_10411ca0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10411cd0; body size 25 bytes.
#line 1 "ENTRY_10411cd0"

void __fastcall FUN_10411cd0(undefined4 *param_1)

{
  thunk_FUN_1040fe70(param_1,*param_1);
  thunk_FUN_1148a50e(*param_1,0x14);
  return;
}


// Reference entry 10411f30; body size 18 bytes.
#line 1 "ENTRY_10411f30"

void __fastcall FUN_10411f30(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0x38);
  }
  return;
}


// Reference entry 10411f50; body size 18 bytes.
#line 1 "ENTRY_10411f50"

void __fastcall FUN_10411f50(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0x38);
  }
  return;
}


// Reference entry 10411ff0; body size 27 bytes.
#line 1 "ENTRY_10411ff0"

int __stdcall FUN_10411ff0(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_8 [8];
  
  piVar1 = (int *)((int *)thunk_FUN_10410310<>((uint)&local_8,param_1), 0);
  return (int)(*piVar1 + 0xc);
}


// Reference entry 104122e0; body size 45 bytes.
#line 1 "ENTRY_104122e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_104122e0(byte param_2)
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


// Reference entry 10412490; body size 45 bytes.
#line 1 "ENTRY_10412490"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10412490(byte param_2)
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


// Reference entry 104125e0; body size 33 bytes.
#line 1 "ENTRY_104125e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_104125e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10412610; body size 33 bytes.
#line 1 "ENTRY_10412610"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10412610(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwfObjSysListener);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10412670; body size 25 bytes.
#line 1 "ENTRY_10412670"

void __fastcall FUN_10412670(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x14), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 10412900; body size 19 bytes.
#line 1 "ENTRY_10412900"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_10412900(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 104129d0; body size 21 bytes.
#line 1 "ENTRY_104129d0"

void __thiscall Recovered_Bulk::m_FUN_104129d0(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 10412b50; body size 57 bytes.
#line 1 "ENTRY_10412b50"

void __thiscall Recovered_Bulk::m_FUN_10412b50(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  char cVar1;
  undefined4 uStack_10;
  char *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(param_3);
  pcStack_c = (char *)("SCIController:onConnectivityStateChanged");
  uStack_10 = (undefined4)(0x10412b61);
  cVar1 = (char)(thunk_FUN_101a2c70(), 0);
  if (cVar1 != '\0') {
    uStack_8 = (undefined4)(0);
    pcStack_c = (char *)(*(char **)(param_1 + 4), 0);
    ((SCStr *)((SCStr *)&uStack_10))->int_allocRep("SCIFeatureManager:onConnectivityStateChanged");
    thunk_FUN_103d65f0<>();
  }
  return;
}


// Reference entry 10412ba0; body size 24 bytes.
#line 1 "ENTRY_10412ba0"

void __fastcall FUN_10412ba0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  if (*(int **)(param_1 + 0x34) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x34) + 8))(param_1 + 8);
    return;
  }
                    
  std::_Xbad_function_call();
}


// Reference entry 10412fd0; body size 19 bytes.
#line 1 "ENTRY_10412fd0"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_10412fd0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 104131d0; body size 33 bytes.
#line 1 "ENTRY_104131d0"

void __fastcall FUN_104131d0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10413270; body size 25 bytes.
#line 1 "ENTRY_10413270"

void __fastcall FUN_10413270(undefined4 *param_1)

{
  thunk_FUN_1040fe70(param_1,*param_1);
  thunk_FUN_1148a50e(*param_1,0x14);
  return;
}


// Reference entry 10413680; body size 19 bytes.
#line 1 "ENTRY_10413680"

uint __thiscall Recovered_Bulk::m_FUN_10413680(SCStr *param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  
  uVar1 = (uint)(((SCStr *)(param_2))->hash(), 0);
  return (uint)(uVar1 & *(uint *)(param_1 + 0x18));
}


// Reference entry 10413720; body size 32 bytes.
#line 1 "ENTRY_10413720"

void __fastcall FUN_10413720(int *param_1)

{
  thunk_FUN_1040fe70(param_1,*param_1);
  *(int *)*param_1 = (int)(*param_1);
  *(int*)(*param_1 + 4) = (int)(*param_1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 10413750; body size 24 bytes.
#line 1 "ENTRY_10413750"

void __fastcall FUN_10413750(undefined4 *param_1)

{
  thunk_FUN_10225d70(*param_1,param_1[1],param_1);
  param_1[1] = (undefined4)(*param_1);
  return;
}


// Reference entry 10413890; body size 35 bytes.
#line 1 "ENTRY_10413890"

void __thiscall Recovered_Bulk::m_FUN_10413890(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(*(int *)(param_1 + 8) + 0x3c), 0);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 8))(&param_2,param_3);
  }
  return;
}


// Reference entry 10414320; body size 19 bytes.
#line 1 "ENTRY_10414320"

int __fastcall FUN_10414320(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0xc));
  uVar2 = (uint3)((uint3)((uint)iVar1 >> 8));
  if ((iVar1 != 0) && (*(char *)(iVar1 + 0x31) != '\0')) {
    return (int)(((uint)(uVar2) << 8 | (uint)(1)));
  }
  return (int)((uint)uVar2 << 8);
}


// Reference entry 10414dc0; body size 59 bytes.
#line 1 "ENTRY_10414dc0"

void __thiscall Recovered_Bulk::m_FUN_10414dc0(undefined4 *param_2)
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
      ((SCVtbl_1_0*)(piVar2))->v();
    }
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
    return;
  }
  thunk_FUN_1040fad0<>(puVar1,param_2);
  return;
}


// Reference entry 10415bd0; body size 23 bytes.
#line 1 "ENTRY_10415bd0"

void __stdcall FUN_10415bd0(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_103d6930();
    return;
  }
  return;
}


// Reference entry 104160c0; body size 41 bytes.
#line 1 "ENTRY_104160c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_104160c0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 104167d0; body size 19 bytes.
#line 1 "ENTRY_104167d0"

void __fastcall FUN_104167d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10416a90; body size 19 bytes.
#line 1 "ENTRY_10416a90"

void __fastcall FUN_10416a90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 104171c0; body size 45 bytes.
#line 1 "ENTRY_104171c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_104171c0(byte param_2)
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


// Reference entry 10417300; body size 33 bytes.
#line 1 "ENTRY_10417300"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10417300(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10417330; body size 45 bytes.
#line 1 "ENTRY_10417330"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10417330(byte param_2)
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


// Reference entry 10417370; body size 45 bytes.
#line 1 "ENTRY_10417370"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10417370(byte param_2)
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


// Reference entry 104173b0; body size 45 bytes.
#line 1 "ENTRY_104173b0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_104173b0(byte param_2)
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


// Reference entry 104173f0; body size 45 bytes.
#line 1 "ENTRY_104173f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_104173f0(byte param_2)
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


// Reference entry 104174d0; body size 35 bytes.
#line 1 "ENTRY_104174d0"

undefined4 __thiscall Recovered_Bulk::m_FUN_104174d0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10416b30();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x128);
  }
  return (undefined4)(param_1);
}


// Reference entry 10417500; body size 45 bytes.
#line 1 "ENTRY_10417500"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10417500(byte param_2)
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


// Reference entry 10417540; body size 45 bytes.
#line 1 "ENTRY_10417540"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10417540(byte param_2)
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


// Reference entry 10417590; body size 61 bytes.
#line 1 "ENTRY_10417590"

void __thiscall Recovered_Bulk::m_FUN_10417590(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    uVar2 = (undefined4)(((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 10419cc0; body size 23 bytes.
#line 1 "ENTRY_10419cc0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10419cc0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x120));
  return (SCStr *)(param_2);
}


// Reference entry 10419ce0; body size 21 bytes.
#line 1 "ENTRY_10419ce0"

SCStr * __stdcall FUN_10419ce0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("DisplayText");
  return (SCStr *)(param_1);
}


// Reference entry 10419d00; body size 21 bytes.
#line 1 "ENTRY_10419d00"

SCStr * __stdcall FUN_10419d00(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("ShowUnsupportedOSMessage");
  return (SCStr *)(param_1);
}


// Reference entry 10419d20; body size 21 bytes.
#line 1 "ENTRY_10419d20"

SCStr * __stdcall FUN_10419d20(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("ShowUpdateMessage");
  return (SCStr *)(param_1);
}


// Reference entry 10419d50; body size 21 bytes.
#line 1 "ENTRY_10419d50"

SCStr * __stdcall FUN_10419d50(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10419d70; body size 21 bytes.
#line 1 "ENTRY_10419d70"

SCStr * __stdcall FUN_10419d70(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryDefault");
  return (SCStr *)(param_1);
}


// Reference entry 10419d90; body size 21 bytes.
#line 1 "ENTRY_10419d90"

SCStr * __stdcall FUN_10419d90(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryDefault");
  return (SCStr *)(param_1);
}


// Reference entry 10419db0; body size 28 bytes.
#line 1 "ENTRY_10419db0"

int * __thiscall Recovered_Bulk::m_FUN_10419db0(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0xe0), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 1041a530; body size 28 bytes.
#line 1 "ENTRY_1041a530"

int * __thiscall Recovered_Bulk::m_FUN_1041a530(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0xd0), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 1041a560; body size 20 bytes.
#line 1 "ENTRY_1041a560"

SCStr * __thiscall Recovered_Bulk::m_FUN_1041a560(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x28));
  return (SCStr *)(param_2);
}


// Reference entry 1041a580; body size 30 bytes.
#line 1 "ENTRY_1041a580"

SCStr * __thiscall Recovered_Bulk::m_FUN_1041a580(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x48));
  *(undefined4*)(param_2 + 4) = (undefined4)(*(undefined4 *)(param_1 + 0x4c));
  return (SCStr *)(param_2);
}


// Reference entry 1041a5c0; body size 20 bytes.
#line 1 "ENTRY_1041a5c0"

SCStr * __thiscall Recovered_Bulk::m_FUN_1041a5c0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x14));
  return (SCStr *)(param_2);
}


// Reference entry 1041a5f0; body size 28 bytes.
#line 1 "ENTRY_1041a5f0"

int * __thiscall Recovered_Bulk::m_FUN_1041a5f0(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0xc0), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 1041a630; body size 28 bytes.
#line 1 "ENTRY_1041a630"

int * __thiscall Recovered_Bulk::m_FUN_1041a630(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 200), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 1041a660; body size 25 bytes.
#line 1 "ENTRY_1041a660"

int * __thiscall Recovered_Bulk::m_FUN_1041a660(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x54), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 1041a720; body size 33 bytes.
#line 1 "ENTRY_1041a720"

SCStr * __thiscall Recovered_Bulk::m_FUN_1041a720(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0xb8));
  *(undefined4*)(param_2 + 4) = (undefined4)(*(undefined4 *)(param_1 + 0xbc));
  return (SCStr *)(param_2);
}


// Reference entry 1041a760; body size 33 bytes.
#line 1 "ENTRY_1041a760"

SCStr * __thiscall Recovered_Bulk::m_FUN_1041a760(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0xb0));
  *(undefined4*)(param_2 + 4) = (undefined4)(*(undefined4 *)(param_1 + 0xb4));
  return (SCStr *)(param_2);
}


// Reference entry 1041a7b0; body size 23 bytes.
#line 1 "ENTRY_1041a7b0"

SCStr * __thiscall Recovered_Bulk::m_FUN_1041a7b0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0xf0));
  return (SCStr *)(param_2);
}


// Reference entry 1041a7e0; body size 28 bytes.
#line 1 "ENTRY_1041a7e0"

int * __thiscall Recovered_Bulk::m_FUN_1041a7e0(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x8c), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 1041bff0; body size 21 bytes.
#line 1 "ENTRY_1041bff0"

SCStr * __stdcall FUN_1041bff0(SCStr *param_1, unsigned int recovered_unused_stack_0)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 1041c010; body size 21 bytes.
#line 1 "ENTRY_1041c010"

SCStr * __stdcall FUN_1041c010(SCStr *param_1, unsigned int recovered_unused_stack_0)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 1041c820; body size 20 bytes.
#line 1 "ENTRY_1041c820"

SCStr * __thiscall Recovered_Bulk::m_FUN_1041c820(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x34));
  return (SCStr *)(param_2);
}


// Reference entry 1041c9c0; body size 23 bytes.
#line 1 "ENTRY_1041c9c0"

SCStr * __thiscall Recovered_Bulk::m_FUN_1041c9c0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x11c));
  return (SCStr *)(param_2);
}


// Reference entry 1041c9e0; body size 20 bytes.
#line 1 "ENTRY_1041c9e0"

SCStr * __thiscall Recovered_Bulk::m_FUN_1041c9e0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x30));
  return (SCStr *)(param_2);
}


// Reference entry 1041ca00; body size 20 bytes.
#line 1 "ENTRY_1041ca00"

SCStr * __thiscall Recovered_Bulk::m_FUN_1041ca00(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x2c));
  return (SCStr *)(param_2);
}


// Reference entry 1041ca20; body size 22 bytes.
#line 1 "ENTRY_1041ca20"

undefined1 __fastcall FUN_1041ca20(int param_1)

{
  char cVar1;
  
  if (*(int *)(param_1 + 0x60) == 0) {
    cVar1 = (char)(thunk_FUN_101e7620(), 0);
    if (cVar1 == '\0') {
      return (undefined1)(0);
    }
  }
  return (undefined1)(1);
}


// Reference entry 1041cf70; body size 39 bytes.
#line 1 "ENTRY_1041cf70"

void __thiscall Recovered_Bulk::m_FUN_1041cf70(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 0x120));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 1041d340; body size 49 bytes.
#line 1 "ENTRY_1041d340"

void __thiscall Recovered_Bulk::m_FUN_1041d340(undefined4 param_2,SCStr *param_3)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 0x48));
  *(undefined4*)(param_1 + 0x44) = (undefined4)(param_2);
  if ((SCStr *)((param_3)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_3));
    ((SCStr *)(this_))->int_addref();
  }
  *(undefined4*)(param_1 + 0x4c) = (undefined4)(*(undefined4 *)(param_3 + 4));
  return;
}


// Reference entry 1041d510; body size 39 bytes.
#line 1 "ENTRY_1041d510"

void __thiscall Recovered_Bulk::m_FUN_1041d510(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 0xf0));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 1041d560; body size 36 bytes.
#line 1 "ENTRY_1041d560"

void __thiscall Recovered_Bulk::m_FUN_1041d560(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 0x34));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 1041d630; body size 36 bytes.
#line 1 "ENTRY_1041d630"

void __thiscall Recovered_Bulk::m_FUN_1041d630(SCStr *param_2)
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


// Reference entry 1041d660; body size 22 bytes.
#line 1 "ENTRY_1041d660"

undefined4 *  __stdcall FUN_1041d660(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_103d61d0((int)(param_1),(int)(0));
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1041d680; body size 23 bytes.
#line 1 "ENTRY_1041d680"

void __stdcall FUN_1041d680(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_103d6930();
    return;
  }
  return;
}


// Reference entry 1041ee40; body size 41 bytes.
#line 1 "ENTRY_1041ee40"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1041ee40(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1041ee80; body size 41 bytes.
#line 1 "ENTRY_1041ee80"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1041ee80(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1041eec0; body size 41 bytes.
#line 1 "ENTRY_1041eec0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1041eec0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1041ef00; body size 41 bytes.
#line 1 "ENTRY_1041ef00"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1041ef00(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1041fb10; body size 33 bytes.
#line 1 "ENTRY_1041fb10"

void __fastcall FUN_1041fb10(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1041fb40; body size 33 bytes.
#line 1 "ENTRY_1041fb40"

void __fastcall FUN_1041fb40(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1041fb70; body size 33 bytes.
#line 1 "ENTRY_1041fb70"

void __fastcall FUN_1041fb70(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1041fba0; body size 33 bytes.
#line 1 "ENTRY_1041fba0"

void __fastcall FUN_1041fba0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1041fbd0; body size 33 bytes.
#line 1 "ENTRY_1041fbd0"

void __fastcall FUN_1041fbd0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1041fc00; body size 33 bytes.
#line 1 "ENTRY_1041fc00"

void __fastcall FUN_1041fc00(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1041fc30; body size 33 bytes.
#line 1 "ENTRY_1041fc30"

void __fastcall FUN_1041fc30(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1041fc60; body size 33 bytes.
#line 1 "ENTRY_1041fc60"

void __fastcall FUN_1041fc60(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10422110; body size 45 bytes.
#line 1 "ENTRY_10422110"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10422110(byte param_2)
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


// Reference entry 104222a0; body size 55 bytes.
#line 1 "ENTRY_104222a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_104222a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsMenuEntitlement);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCSettingsMenuEntitlement);
  param_1[10] = (undefined4)((uint)&ghidra_vftable_SCSettingsMenuEntitlement);
  thunk_FUN_101eb2b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x90);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 104222f0; body size 45 bytes.
#line 1 "ENTRY_104222f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_104222f0(byte param_2)
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


// Reference entry 10422540; body size 19 bytes.
#line 1 "ENTRY_10422540"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_10422540(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 10422570; body size 19 bytes.
#line 1 "ENTRY_10422570"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_10422570(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 10422590; body size 19 bytes.
#line 1 "ENTRY_10422590"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_10422590(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 104225c0; body size 19 bytes.
#line 1 "ENTRY_104225c0"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_104225c0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 104225f0; body size 19 bytes.
#line 1 "ENTRY_104225f0"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_104225f0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 10422620; body size 21 bytes.
#line 1 "ENTRY_10422620"

void __thiscall Recovered_Bulk::m_FUN_10422620(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 10422640; body size 21 bytes.
#line 1 "ENTRY_10422640"

void __thiscall Recovered_Bulk::m_FUN_10422640(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 10422660; body size 21 bytes.
#line 1 "ENTRY_10422660"

void __thiscall Recovered_Bulk::m_FUN_10422660(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 10422680; body size 21 bytes.
#line 1 "ENTRY_10422680"

void __thiscall Recovered_Bulk::m_FUN_10422680(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 104226a0; body size 21 bytes.
#line 1 "ENTRY_104226a0"

void __thiscall Recovered_Bulk::m_FUN_104226a0(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 104226c0; body size 21 bytes.
#line 1 "ENTRY_104226c0"

void __thiscall Recovered_Bulk::m_FUN_104226c0(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 104226e0; body size 21 bytes.
#line 1 "ENTRY_104226e0"

void __thiscall Recovered_Bulk::m_FUN_104226e0(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 10422700; body size 21 bytes.
#line 1 "ENTRY_10422700"

void __thiscall Recovered_Bulk::m_FUN_10422700(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 10422720; body size 21 bytes.
#line 1 "ENTRY_10422720"

void __thiscall Recovered_Bulk::m_FUN_10422720(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 10422740; body size 36 bytes.
#line 1 "ENTRY_10422740"

undefined4 *  __stdcall FUN_10422740(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_101a2c70("SCIAccountManager:onCurrentAccountChanged",param_2), 0);
  if (cVar1 != '\0') {
    thunk_FUN_10423b10();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10422ac0; body size 19 bytes.
#line 1 "ENTRY_10422ac0"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_10422ac0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 10422af0; body size 19 bytes.
#line 1 "ENTRY_10422af0"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_10422af0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 10422b10; body size 19 bytes.
#line 1 "ENTRY_10422b10"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_10422b10(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 10422b40; body size 19 bytes.
#line 1 "ENTRY_10422b40"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_10422b40(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 10422b70; body size 19 bytes.
#line 1 "ENTRY_10422b70"

void __thiscall Recovered_Bulk::m_FUN_10422b70(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable__Func_impl_no_alloc__lambda_baeef59acb6c62fca0b98fba24bc0402__void_);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10422cf0; body size 33 bytes.
#line 1 "ENTRY_10422cf0"

void __fastcall FUN_10422cf0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10422d20; body size 33 bytes.
#line 1 "ENTRY_10422d20"

void __fastcall FUN_10422d20(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10422d50; body size 33 bytes.
#line 1 "ENTRY_10422d50"

void __fastcall FUN_10422d50(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10422d80; body size 33 bytes.
#line 1 "ENTRY_10422d80"

void __fastcall FUN_10422d80(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10422ef0; body size 21 bytes.
#line 1 "ENTRY_10422ef0"

SCStr * __stdcall FUN_10422ef0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCResetPasswordActionDescriptor");
  return (SCStr *)(param_1);
}


// Reference entry 10422f10; body size 21 bytes.
#line 1 "ENTRY_10422f10"

SCStr * __stdcall FUN_10422f10(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCSignOutDescriptor");
  return (SCStr *)(param_1);
}


// Reference entry 10422f30; body size 21 bytes.
#line 1 "ENTRY_10422f30"

SCStr * __stdcall FUN_10422f30(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryDefault");
  return (SCStr *)(param_1);
}


// Reference entry 10422f50; body size 21 bytes.
#line 1 "ENTRY_10422f50"

SCStr * __stdcall FUN_10422f50(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryDefault");
  return (SCStr *)(param_1);
}


// Reference entry 10422f70; body size 21 bytes.
#line 1 "ENTRY_10422f70"

SCStr * __stdcall FUN_10422f70(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("ResetPassword");
  return (SCStr *)(param_1);
}


// Reference entry 10422f90; body size 21 bytes.
#line 1 "ENTRY_10422f90"

SCStr * __stdcall FUN_10422f90(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SignOut");
  return (SCStr *)(param_1);
}


// Reference entry 10424cf0; body size 17 bytes.
#line 1 "ENTRY_10424cf0"

void __stdcall FUN_10424cf0(SCStr *param_1)

{
  ((SCStr *)(param_1))->op_eq("SCIHousehold:onZoneGroupsChanged");
  return;
}


// Reference entry 10426070; body size 30 bytes.
#line 1 "ENTRY_10426070"

void __thiscall Recovered_Bulk::m_FUN_10426070(int param_2)
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


// Reference entry 10426240; body size 41 bytes.
#line 1 "ENTRY_10426240"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10426240(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10426280; body size 41 bytes.
#line 1 "ENTRY_10426280"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10426280(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 104262f0; body size 41 bytes.
#line 1 "ENTRY_104262f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_104262f0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10426330; body size 24 bytes.
#line 1 "ENTRY_10426330"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10426330(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1042a730; body size 60 bytes.
#line 1 "ENTRY_1042a730"

void __fastcall FUN_1042a730(int *param_1)

{ int stack0xfffffffc;
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


// Reference entry 1042a790; body size 33 bytes.
#line 1 "ENTRY_1042a790"

void __fastcall FUN_1042a790(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1042a7c0; body size 33 bytes.
#line 1 "ENTRY_1042a7c0"

void __fastcall FUN_1042a7c0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1042b460; body size 45 bytes.
#line 1 "ENTRY_1042b460"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1042b460(byte param_2)
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


// Reference entry 1042b4a0; body size 45 bytes.
#line 1 "ENTRY_1042b4a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1042b4a0(byte param_2)
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


// Reference entry 1042b4e0; body size 35 bytes.
#line 1 "ENTRY_1042b4e0"

undefined4 __thiscall Recovered_Bulk::m_FUN_1042b4e0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1042a9f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd8);
  }
  return (undefined4)(param_1);
}


// Reference entry 1042ba50; body size 19 bytes.
#line 1 "ENTRY_1042ba50"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_1042ba50(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 1042ba70; body size 19 bytes.
#line 1 "ENTRY_1042ba70"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_1042ba70(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 1042ba90; body size 19 bytes.
#line 1 "ENTRY_1042ba90"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_1042ba90(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 1042bab0; body size 19 bytes.
#line 1 "ENTRY_1042bab0"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_1042bab0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 1042bad0; body size 21 bytes.
#line 1 "ENTRY_1042bad0"

void __thiscall Recovered_Bulk::m_FUN_1042bad0(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 1042baf0; body size 21 bytes.
#line 1 "ENTRY_1042baf0"

void __thiscall Recovered_Bulk::m_FUN_1042baf0(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 1042bb10; body size 21 bytes.
#line 1 "ENTRY_1042bb10"

void __thiscall Recovered_Bulk::m_FUN_1042bb10(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 1042bb30; body size 21 bytes.
#line 1 "ENTRY_1042bb30"

void __thiscall Recovered_Bulk::m_FUN_1042bb30(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 1042bb60; body size 36 bytes.
#line 1 "ENTRY_1042bb60"

undefined4 *  __stdcall FUN_1042bb60(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_101a2c70("SCIHousehold:onZoneGroupsChanged",param_2), 0);
  if (cVar1 != '\0') {
    thunk_FUN_1042f680();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1042bba0; body size 36 bytes.
#line 1 "ENTRY_1042bba0"

undefined4 *  __stdcall FUN_1042bba0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_101a2c70("SCIAlarmManager:onAlarmsChanged",param_2), 0);
  if (cVar1 != '\0') {
    thunk_FUN_1042f680();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1042bc40; body size 19 bytes.
#line 1 "ENTRY_1042bc40"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_1042bc40(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 1042bc60; body size 19 bytes.
#line 1 "ENTRY_1042bc60"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_1042bc60(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 1042bc80; body size 19 bytes.
#line 1 "ENTRY_1042bc80"

void __thiscall Recovered_Bulk::m_FUN_1042bc80(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable__Func_impl_no_alloc__lambda_5668acf38edaa419075f5a002a2b1b9d__void_SCStr_const__);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 1042bca0; body size 19 bytes.
#line 1 "ENTRY_1042bca0"

void __thiscall Recovered_Bulk::m_FUN_1042bca0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable__Func_impl_no_alloc__lambda_b40d2cb89d82ec368335e9e2aa9cd77f__void_SCAlarmManager_const__SCStr_const__);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 1042bd10; body size 33 bytes.
#line 1 "ENTRY_1042bd10"

void __fastcall FUN_1042bd10(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1042bdf0; body size 61 bytes.
#line 1 "ENTRY_1042bdf0"

void __thiscall Recovered_Bulk::m_FUN_1042bdf0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    uVar2 = (undefined4)(((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 1042be40; body size 61 bytes.
#line 1 "ENTRY_1042be40"

void __thiscall Recovered_Bulk::m_FUN_1042be40(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    uVar2 = (undefined4)(((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 1042be90; body size 61 bytes.
#line 1 "ENTRY_1042be90"

void __thiscall Recovered_Bulk::m_FUN_1042be90(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    uVar2 = (undefined4)(((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 1042bee0; body size 30 bytes.
#line 1 "ENTRY_1042bee0"

void __thiscall Recovered_Bulk::m_FUN_1042bee0(int param_2)
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


// Reference entry 1042cdd0; body size 34 bytes.
#line 1 "ENTRY_1042cdd0"

void __stdcall FUN_1042cdd0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_102d65b0(param_2), 0);
  if (cVar1 != '\0') {
    thunk_FUN_10430fa0();
  }
  return;
}


// Reference entry 1042ce00; body size 34 bytes.
#line 1 "ENTRY_1042ce00"

void __stdcall FUN_1042ce00(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_102d65b0(param_2), 0);
  if (cVar1 != '\0') {
    thunk_FUN_10431980();
  }
  return;
}


// Reference entry 1042ce90; body size 34 bytes.
#line 1 "ENTRY_1042ce90"

void __stdcall FUN_1042ce90(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_102d65b0(param_2), 0);
  if (cVar1 != '\0') {
    thunk_FUN_10431e10();
  }
  return;
}


// Reference entry 1042cec0; body size 28 bytes.
#line 1 "ENTRY_1042cec0"

void __fastcall FUN_1042cec0(int *param_1)

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


// Reference entry 1042cef0; body size 21 bytes.
#line 1 "ENTRY_1042cef0"

SCStr * __stdcall FUN_1042cef0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("DeleteAlarm");
  return (SCStr *)(param_1);
}


// Reference entry 1042cf10; body size 21 bytes.
#line 1 "ENTRY_1042cf10"

SCStr * __stdcall FUN_1042cf10(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("OfflineTroubleshootAction");
  return (SCStr *)(param_1);
}


// Reference entry 1042d190; body size 21 bytes.
#line 1 "ENTRY_1042d190"

SCStr * __stdcall FUN_1042d190(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategorySettings");
  return (SCStr *)(param_1);
}


// Reference entry 1042d1b0; body size 21 bytes.
#line 1 "ENTRY_1042d1b0"

SCStr * __stdcall FUN_1042d1b0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategorySettings");
  return (SCStr *)(param_1);
}


// Reference entry 1042d4d0; body size 35 bytes.
#line 1 "ENTRY_1042d4d0"

SCStr * __stdcall FUN_1042d4d0(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x20c3,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 1042d500; body size 21 bytes.
#line 1 "ENTRY_1042d500"

SCStr * __stdcall FUN_1042d500(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 1042dfe0; body size 23 bytes.
#line 1 "ENTRY_1042dfe0"

void __fastcall FUN_1042dfe0(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x94) + 0x6c))(param_1 + 0x90);
  return;
}


// Reference entry 1042e000; body size 23 bytes.
#line 1 "ENTRY_1042e000"

void __fastcall FUN_1042e000(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x94) + 0x6c))(param_1 + 0x90);
  return;
}


// Reference entry 1042e110; body size 23 bytes.
#line 1 "ENTRY_1042e110"

void __fastcall FUN_1042e110(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x94) + 0x6c))(param_1 + 0x90);
  return;
}


// Reference entry 1042e6d0; body size 23 bytes.
#line 1 "ENTRY_1042e6d0"

void __fastcall FUN_1042e6d0(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x94) + 0x70))(param_1 + 0x90);
  return;
}


// Reference entry 1042e6f0; body size 23 bytes.
#line 1 "ENTRY_1042e6f0"

void __fastcall FUN_1042e6f0(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x94) + 0x70))(param_1 + 0x90);
  return;
}


// Reference entry 1042e800; body size 23 bytes.
#line 1 "ENTRY_1042e800"

void __fastcall FUN_1042e800(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x94) + 0x70))(param_1 + 0x90);
  return;
}


// Reference entry 10432eb0; body size 33 bytes.
#line 1 "ENTRY_10432eb0"

void __thiscall Recovered_Bulk::m_FUN_10432eb0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_10432ee0((int)(param_2),(int)(*(undefined4 *)(*param_1 + 4)));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 104332a0; body size 30 bytes.
#line 1 "ENTRY_104332a0"

void __thiscall Recovered_Bulk::m_FUN_104332a0(int param_2)
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


// Reference entry 104334f0; body size 41 bytes.
#line 1 "ENTRY_104334f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_104334f0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10433550; body size 48 bytes.
#line 1 "ENTRY_10433550"

undefined4 * __fastcall FUN_10433550(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x1c), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10433ba0; body size 60 bytes.
#line 1 "ENTRY_10433ba0"

void __fastcall FUN_10433ba0(int *param_1)

{ int stack0xfffffffc;
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


// Reference entry 10433c00; body size 19 bytes.
#line 1 "ENTRY_10433c00"

void __fastcall FUN_10433c00(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 10433c20; body size 28 bytes.
#line 1 "ENTRY_10433c20"

void __fastcall FUN_10433c20(int *param_1)

{
  thunk_FUN_10432ee0((int)(param_1),(int)(*(undefined4 *)(*param_1 + 4)));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 10433d10; body size 28 bytes.
#line 1 "ENTRY_10433d10"

void __fastcall FUN_10433d10(int *param_1)

{
  thunk_FUN_10432ee0((int)(param_1),(int)(*(undefined4 *)(*param_1 + 4)));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 10434560; body size 45 bytes.
#line 1 "ENTRY_10434560"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10434560(byte param_2)
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


// Reference entry 104345a0; body size 33 bytes.
#line 1 "ENTRY_104345a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_104345a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpdateManifestProvider);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10434680; body size 35 bytes.
#line 1 "ENTRY_10434680"

undefined4 __thiscall Recovered_Bulk::m_FUN_10434680(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10433e70();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x867f0);
  }
  return (undefined4)(param_1);
}


// Reference entry 104346e0; body size 25 bytes.
#line 1 "ENTRY_104346e0"

void __fastcall FUN_104346e0(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x1c), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 10434b60; body size 61 bytes.
#line 1 "ENTRY_10434b60"

void __thiscall Recovered_Bulk::m_FUN_10434b60(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    uVar2 = (undefined4)(((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 10434bb0; body size 30 bytes.
#line 1 "ENTRY_10434bb0"

void __thiscall Recovered_Bulk::m_FUN_10434bb0(int param_2)
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


// Reference entry 104350b0; body size 33 bytes.
#line 1 "ENTRY_104350b0"

void __fastcall FUN_104350b0(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_10432ee0((int)(param_1),(int)(*(undefined4 *)(iVar1 + 4)));
  *(int*)(iVar1 + 4) = (int)(iVar1);
  *(int*)iVar1 = (int)((int)(iVar1));
  *(int*)(iVar1 + 8) = (int)(iVar1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 104360d0; body size 28 bytes.
#line 1 "ENTRY_104360d0"

void __fastcall FUN_104360d0(int *param_1)

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


// Reference entry 10436ac0; body size 48 bytes.
#line 1 "ENTRY_10436ac0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10436ac0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  short sVar1;
  
  sVar1 = (short)(*(short *)(param_1 + 0x867ea) + -1);
  if (sVar1 == 0) {
    sVar1 = (short)(1);
  }
  thunk_FUN_10436400((int)(param_2),(int)(sVar1),(int)(param_3));
  return (undefined4)(param_2);
}


// Reference entry 10436b10; body size 24 bytes.
#line 1 "ENTRY_10436b10"

short __fastcall FUN_10436b10(int param_1)

{
  short sVar1;
  
  sVar1 = (short)(*(short *)(param_1 + 0x867ea) + -1);
  if (sVar1 == 0) {
    sVar1 = (short)(1);
  }
  return (short)(sVar1);
}


// Reference entry 10436c60; body size 28 bytes.
#line 1 "ENTRY_10436c60"

undefined4 __thiscall Recovered_Bulk::m_FUN_10436c60(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  thunk_FUN_10436400((int)(param_2),(int)(*(undefined2 *)(param_1 + 0x867ea)),(int)(param_3));
  return (undefined4)(param_2);
}


// Reference entry 10436cb0; body size 19 bytes.
#line 1 "ENTRY_10436cb0"

int __fastcall FUN_10436cb0(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(param_1 + 0x4c);
  if (*(char *)(param_1 + 0xd58) == '\0') {
    iVar1 = (int)(param_1 + 0x2cd80);
  }
  return (int)(iVar1);
}


// Reference entry 10437a40; body size 35 bytes.
#line 1 "ENTRY_10437a40"

void __fastcall FUN_10437a40(int param_1)

{
  short sVar1;
  
  sVar1 = (short)(*(short *)(param_1 + 0x867ea) + -1);
  if (sVar1 == 0) {
    sVar1 = (short)(1);
  }
  thunk_FUN_10437740((int)(sVar1));
  return;
}


// Reference entry 10437a70; body size 23 bytes.
#line 1 "ENTRY_10437a70"

uint __fastcall FUN_10437a70(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(thunk_FUN_11272de0(), 0);
  return (uint)(((uint)((int3)((uint)uVar1 >> 8)) << 8 | (uint)((ushort)(ushort)(uVar1) < *(ushort *)(param_1 + 0x867ea))) & 0xffff);
}


// Reference entry 10437b40; body size 23 bytes.
#line 1 "ENTRY_10437b40"

uint __fastcall FUN_10437b40(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(thunk_FUN_11272de0(), 0);
  return (uint)(((uint)((int3)((uint)uVar1 >> 8)) << 8 | (uint)((short)(short)(uVar1) == *(short *)(param_1 + 0x867ea))) & 0xffff);
}


// Reference entry 104388c0; body size 38 bytes.
#line 1 "ENTRY_104388c0"

undefined1 __thiscall Recovered_Bulk::m_FUN_104388c0(int param_2)
{
  int param_1 = (int )this;
  undefined1 uVar1;
  
  uVar1 = (undefined1)(0);
  if (((*(int *)(param_1 + 0x867c0) == 0) || (param_2 == 0)) ||
     (*(int *)(param_1 + 0x867c0) == (int)(param_2))) {
    *(int*)(param_1 + 0x867c0) = (int)(param_2);
    uVar1 = (undefined1)(1);
  }
  return (undefined1)(uVar1);
}


// Reference entry 104396d0; body size 43 bytes.
#line 1 "ENTRY_104396d0"

void __stdcall FUN_104396d0(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_103d6930((int)(param_1));
    thunk_FUN_112af4e0("SCLifecycleManager",3,"Remove Event Sink %p",param_1);
  }
  return;
}


// Reference entry 10439fe0; body size 41 bytes.
#line 1 "ENTRY_10439fe0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10439fe0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1043a7d0; body size 33 bytes.
#line 1 "ENTRY_1043a7d0"

void __fastcall FUN_1043a7d0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1043a800; body size 33 bytes.
#line 1 "ENTRY_1043a800"

void __fastcall FUN_1043a800(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1043a830; body size 19 bytes.
#line 1 "ENTRY_1043a830"

void __fastcall FUN_1043a830(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1043aa40; body size 37 bytes.
#line 1 "ENTRY_1043aa40"

int * __fastcall FUN_1043aa40(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 1043ab50; body size 32 bytes.
#line 1 "ENTRY_1043ab50"

undefined4 __thiscall Recovered_Bulk::m_FUN_1043ab50(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1043a670();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68);
  }
  return (undefined4)(param_1);
}


// Reference entry 1043ab80; body size 45 bytes.
#line 1 "ENTRY_1043ab80"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1043ab80(byte param_2)
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


// Reference entry 1043ae30; body size 33 bytes.
#line 1 "ENTRY_1043ae30"

void __fastcall FUN_1043ae30(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1043b0f0; body size 61 bytes.
#line 1 "ENTRY_1043b0f0"

void __thiscall Recovered_Bulk::m_FUN_1043b0f0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    uVar2 = (undefined4)(((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 1043b6e0; body size 34 bytes.
#line 1 "ENTRY_1043b6e0"

void __thiscall Recovered_Bulk::m_FUN_1043b6e0(int param_2)
{
  int param_1 = (int )this;
  if ((param_2 == 9) && (*(char *)(param_1 + 0xc) != '\0')) {
    (**(code **)(**(int **)(param_1 + 4) + 0x24))(1);
    *(undefined1*)(param_1 + 0xc) = (undefined1)(0);
  }
  return;
}


// Reference entry 1043b720; body size 49 bytes.
#line 1 "ENTRY_1043b720"

void __thiscall Recovered_Bulk::m_FUN_1043b720(int param_2)
{
  int param_1 = (int )this;
  if (param_2 == 6) {
                    
                    
    (**(code **)(**(int **)(param_1 + 0x28) + 0x24))();
    return;
  }
  if (param_2 == 9) {
                    
                    
    (**(code **)(**(int **)(param_1 + 4) + 0x24))();
    return;
  }
  return;
}


// Reference entry 1043b880; body size 49 bytes.
#line 1 "ENTRY_1043b880"

void __thiscall Recovered_Bulk::m_FUN_1043b880(int param_2)
{
  int param_1 = (int )this;
  if (param_2 == 8) {
                    
                    
    (**(code **)(**(int **)(param_1 + 0x28) + 0x24))();
    return;
  }
  if (param_2 == 10) {
                    
                    
    (**(code **)(**(int **)(param_1 + 4) + 0x24))();
    return;
  }
  return;
}


// Reference entry 1043d490; body size 34 bytes.
#line 1 "ENTRY_1043d490"

void __stdcall FUN_1043d490(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_102d65b0(param_2), 0);
  if (cVar1 != '\0') {
    thunk_FUN_1043d850();
  }
  return;
}


// Reference entry 1043d7d0; body size 48 bytes.
#line 1 "ENTRY_1043d7d0"

void __fastcall FUN_1043d7d0(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(param_1 + 0x90);
  if (param_1 == 0) {
    iVar1 = (int)(0);
  }
  (**(code **)(**(int **)(param_1 + 0x98) + 0x6c))(iVar1);
  (**(code **)(**(int **)(param_1 + 0xa0) + 0x6c))(param_1 + 0x90);
  return;
}


// Reference entry 1043d810; body size 48 bytes.
#line 1 "ENTRY_1043d810"

void __fastcall FUN_1043d810(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(param_1 + 0x90);
  if (param_1 == 0) {
    iVar1 = (int)(0);
  }
  (**(code **)(**(int **)(param_1 + 0x98) + 0x70))(iVar1);
  (**(code **)(**(int **)(param_1 + 0xa0) + 0x70))(param_1 + 0x90);
  return;
}


// Reference entry 1043ee10; body size 17 bytes.
#line 1 "ENTRY_1043ee10"

void __stdcall FUN_1043ee10(SCStr *param_1)

{
  ((SCStr *)(param_1))->op_eq("SCIHousehold:onZoneGroupsChanged");
  return;
}


// Reference entry 104404d0; body size 45 bytes.
#line 1 "ENTRY_104404d0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_104404d0(byte param_2)
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


// Reference entry 10440820; body size 21 bytes.
#line 1 "ENTRY_10440820"

SCStr * __stdcall FUN_10440820(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("TurnOnRecentlyPlayed");
  return (SCStr *)(param_1);
}


// Reference entry 10440840; body size 21 bytes.
#line 1 "ENTRY_10440840"

SCStr * __stdcall FUN_10440840(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryDefault");
  return (SCStr *)(param_1);
}


// Reference entry 10440e10; body size 41 bytes.
#line 1 "ENTRY_10440e10"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10440e10(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10441e40; body size 45 bytes.
#line 1 "ENTRY_10441e40"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10441e40(byte param_2)
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


// Reference entry 104420e0; body size 60 bytes.
#line 1 "ENTRY_104420e0"

void __fastcall FUN_104420e0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(param_1 + 0x90);
  iVar2 = (int)(iVar1);
  if (param_1 == 0) {
    iVar2 = (int)(0);
  }
  (**(code **)(**(int **)(param_1 + 0x94) + 0x6c))(iVar2);
  (**(code **)(**(int **)(param_1 + 0x9c) + 0x6c))(iVar1);
  (**(code **)(**(int **)(param_1 + 0xac) + 0x6c))(iVar1);
  return;
}


// Reference entry 10442130; body size 60 bytes.
#line 1 "ENTRY_10442130"

void __fastcall FUN_10442130(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(param_1 + 0x90);
  iVar2 = (int)(iVar1);
  if (param_1 == 0) {
    iVar2 = (int)(0);
  }
  (**(code **)(**(int **)(param_1 + 0x94) + 0x70))(iVar2);
  (**(code **)(**(int **)(param_1 + 0x9c) + 0x70))(iVar1);
  (**(code **)(**(int **)(param_1 + 0xac) + 0x70))(iVar1);
  return;
}


// Reference entry 104430b0; body size 41 bytes.
#line 1 "ENTRY_104430b0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_104430b0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10443110; body size 41 bytes.
#line 1 "ENTRY_10443110"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10443110(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10443a10; body size 33 bytes.
#line 1 "ENTRY_10443a10"

void __fastcall FUN_10443a10(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10443ab0; body size 33 bytes.
#line 1 "ENTRY_10443ab0"

void __fastcall FUN_10443ab0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10443e50; body size 18 bytes.
#line 1 "ENTRY_10443e50"

void __fastcall FUN_10443e50(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0xc);
  }
  return;
}


// Reference entry 10443e70; body size 18 bytes.
#line 1 "ENTRY_10443e70"

void __fastcall FUN_10443e70(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0xc);
  }
  return;
}


// Reference entry 10444730; body size 23 bytes.
#line 1 "ENTRY_10444730"

void __fastcall FUN_10444730(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  thunk_FUN_10cf3780((int)(*(undefined4 *)(param_1 + 4)));
  return;
}


// Reference entry 104447e0; body size 33 bytes.
#line 1 "ENTRY_104447e0"

void __fastcall FUN_104447e0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10445f50; body size 21 bytes.
#line 1 "ENTRY_10445f50"

SCStr * __stdcall FUN_10445f50(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("OfflineHideDeviceAction");
  return (SCStr *)(param_1);
}


// Reference entry 10445f70; body size 21 bytes.
#line 1 "ENTRY_10445f70"

SCStr * __stdcall FUN_10445f70(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("enableDisableWifi");
  return (SCStr *)(param_1);
}


// Reference entry 10445f90; body size 21 bytes.
#line 1 "ENTRY_10445f90"

SCStr * __stdcall FUN_10445f90(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategorySettings");
  return (SCStr *)(param_1);
}


// Reference entry 10445fb0; body size 21 bytes.
#line 1 "ENTRY_10445fb0"

SCStr * __stdcall FUN_10445fb0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryDefault");
  return (SCStr *)(param_1);
}


// Reference entry 10445fd0; body size 21 bytes.
#line 1 "ENTRY_10445fd0"

SCStr * __stdcall FUN_10445fd0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10445ff0; body size 44 bytes.
#line 1 "ENTRY_10445ff0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10445ff0(SCStr *param_2)
{
  int param_1 = (int )this;
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0((*(char *)(param_1 + 0x10) == '\0') + 0x2052,&DAT_11882ff0), 0);
  ((SCStr *)(param_2))->int_allocRep(pcVar1);
  return (SCStr *)(param_2);
}


// Reference entry 1044b510; body size 45 bytes.
#line 1 "ENTRY_1044b510"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1044b510(byte param_2)
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


// Reference entry 1044b550; body size 45 bytes.
#line 1 "ENTRY_1044b550"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1044b550(byte param_2)
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


// Reference entry 1044b590; body size 45 bytes.
#line 1 "ENTRY_1044b590"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1044b590(byte param_2)
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


// Reference entry 1044b5d0; body size 35 bytes.
#line 1 "ENTRY_1044b5d0"

undefined4 __thiscall Recovered_Bulk::m_FUN_1044b5d0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1044b330();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xa8);
  }
  return (undefined4)(param_1);
}


// Reference entry 1044b600; body size 55 bytes.
#line 1 "ENTRY_1044b600"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1044b600(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsMenuEnumerationWithAuth);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCSettingsMenuEnumerationWithAuth);
  param_1[10] = (undefined4)((uint)&ghidra_vftable_SCSettingsMenuEnumerationWithAuth);
  thunk_FUN_1044b330();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xa8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1044e3e0; body size 31 bytes.
#line 1 "ENTRY_1044e3e0"

void __stdcall FUN_1044e3e0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_102d65b0(param_2), 0);
  if (cVar1 != '\0') {
    thunk_FUN_1044eaf0();
  }
  return;
}


// Reference entry 10450590; body size 21 bytes.
#line 1 "ENTRY_10450590"

SCStr * __stdcall FUN_10450590(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SearchTerm");
  return (SCStr *)(param_1);
}


// Reference entry 10451dc0; body size 30 bytes.
#line 1 "ENTRY_10451dc0"

void __thiscall Recovered_Bulk::m_FUN_10451dc0(int param_2)
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


// Reference entry 104521a0; body size 19 bytes.
#line 1 "ENTRY_104521a0"

void __fastcall FUN_104521a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 104523f0; body size 45 bytes.
#line 1 "ENTRY_104523f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_104523f0(byte param_2)
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


// Reference entry 10452430; body size 33 bytes.
#line 1 "ENTRY_10452430"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10452430(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 104525d0; body size 30 bytes.
#line 1 "ENTRY_104525d0"

void __thiscall Recovered_Bulk::m_FUN_104525d0(int param_2)
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


// Reference entry 10452600; body size 28 bytes.
#line 1 "ENTRY_10452600"

void __fastcall FUN_10452600(int *param_1)

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


// Reference entry 10453df0; body size 55 bytes.
#line 1 "ENTRY_10453df0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10453df0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCRemoveMeSettingsMenu);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCRemoveMeSettingsMenu);
  param_1[10] = (undefined4)((uint)&ghidra_vftable_SCRemoveMeSettingsMenu);
  thunk_FUN_101eb2b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x90);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10454320; body size 30 bytes.
#line 1 "ENTRY_10454320"

void __thiscall Recovered_Bulk::m_FUN_10454320(int param_2)
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


// Reference entry 10454b40; body size 30 bytes.
#line 1 "ENTRY_10454b40"

void __thiscall Recovered_Bulk::m_FUN_10454b40(int param_2)
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


// Reference entry 10454eb0; body size 28 bytes.
#line 1 "ENTRY_10454eb0"

void __fastcall FUN_10454eb0(int *param_1)

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


// Reference entry 10454f00; body size 44 bytes.
#line 1 "ENTRY_10454f00"

undefined1 __stdcall FUN_10454f00(SCStr *param_1){
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIHousehold:onZoneGroupsChanged"), 0);
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIHousehold:onAreasChanged"), 0);
    if (!bVar1) {
      return (undefined1)(0);
    }
  }
  return (undefined1)(1);
}


// Reference entry 10454f40; body size 32 bytes.
#line 1 "ENTRY_10454f40"

void __stdcall FUN_10454f40(unsigned int recovered_unused_stack_0)

{
  thunk_FUN_101ed0d0();
  thunk_FUN_10455370();
  thunk_FUN_101ed5f0();
  return;
}


// Reference entry 104551b0; body size 32 bytes.
#line 1 "ENTRY_104551b0"

void __stdcall FUN_104551b0(unsigned int recovered_unused_stack_0)

{
  thunk_FUN_101ed0d0();
  thunk_FUN_10455370();
  thunk_FUN_101ed5f0();
  return;
}


// Reference entry 10455930; body size 41 bytes.
#line 1 "ENTRY_10455930"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10455930(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 104578b0; body size 35 bytes.
#line 1 "ENTRY_104578b0"

undefined4 __thiscall Recovered_Bulk::m_FUN_104578b0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10457320();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe8);
  }
  return (undefined4)(param_1);
}


// Reference entry 10457900; body size 61 bytes.
#line 1 "ENTRY_10457900"

void __thiscall Recovered_Bulk::m_FUN_10457900(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    uVar2 = (undefined4)(((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 10457950; body size 61 bytes.
#line 1 "ENTRY_10457950"

void __thiscall Recovered_Bulk::m_FUN_10457950(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    uVar2 = (undefined4)(((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 10458d90; body size 21 bytes.
#line 1 "ENTRY_10458d90"

SCStr * __stdcall FUN_10458d90(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("AreaAction");
  return (SCStr *)(param_1);
}


// Reference entry 10459200; body size 21 bytes.
#line 1 "ENTRY_10459200"

SCStr * __stdcall FUN_10459200(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryDefault");
  return (SCStr *)(param_1);
}


// Reference entry 10459220; body size 21 bytes.
#line 1 "ENTRY_10459220"

SCStr * __stdcall FUN_10459220(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("GroupName");
  return (SCStr *)(param_1);
}


// Reference entry 10459240; body size 21 bytes.
#line 1 "ENTRY_10459240"

SCStr * __stdcall FUN_10459240(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("Area Action");
  return (SCStr *)(param_1);
}


// Reference entry 10459500; body size 58 bytes.
#line 1 "ENTRY_10459500"

int __fastcall FUN_10459500(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)(*(int *)(param_1 + 0xe0));
  iVar2 = (int)((**(code **)(**(int **)(param_1 + 200) + 0x14))(), 0);
  if (iVar2 == 0) {
    iVar2 = (int)(1);
  }
  iVar3 = (int)(iVar3 + iVar2);
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xd8) + 0x18))(), 0);
  iVar2 = (int)(iVar3 + 1);
  if (cVar1 != '\0') {
    iVar2 = (int)(iVar3);
  }
  return (int)(iVar2);
}


// Reference entry 10459810; body size 44 bytes.
#line 1 "ENTRY_10459810"

undefined1 __stdcall FUN_10459810(SCStr *param_1){
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIHousehold:onZoneGroupsChanged"), 0);
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIHousehold:onAreasChanged"), 0);
    if (!bVar1) {
      return (undefined1)(0);
    }
  }
  return (undefined1)(1);
}


// Reference entry 1045aef0; body size 30 bytes.
#line 1 "ENTRY_1045aef0"

undefined4 __thiscall Recovered_Bulk::m_FUN_1045aef0(undefined4 param_2)
{
  int param_1 = (int )this;
  if (*(char *)(param_1 + 8) != '\0') {
    thunk_FUN_1045af20((int)(param_2));
    return (undefined4)(0);
  }
  thunk_FUN_1045c280();
  return (undefined4)(0);
}


// Reference entry 1045d450; body size 21 bytes.
#line 1 "ENTRY_1045d450"

SCStr * __stdcall FUN_1045d450(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("MuseHouseholdName");
  return (SCStr *)(param_1);
}


// Reference entry 1045ecb0; body size 55 bytes.
#line 1 "ENTRY_1045ecb0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1045ecb0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCRemoveMeSettingsMenu);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCRemoveMeSettingsMenu);
  param_1[10] = (undefined4)((uint)&ghidra_vftable_SCRemoveMeSettingsMenu);
  thunk_FUN_101eb2b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x90);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1045f910; body size 19 bytes.
#line 1 "ENTRY_1045f910"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_1045f910(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 1045f930; body size 21 bytes.
#line 1 "ENTRY_1045f930"

void  __thiscall Recovered_Bulk::m_FUN_1045f930(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
}


// Reference entry 1045f950; body size 57 bytes.
#line 1 "ENTRY_1045f950"

void __stdcall FUN_1045f950(undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  
  piVar1 = (int *)((int *)*param_1);
  cVar2 = (char)(thunk_FUN_101a2c70("SCISetting:onValueChanged:Bool",param_2), 0);
  if (cVar2 != '\0') {
    cVar2 = (char)((**(code **)(*piVar1 + 0x20))(), 0);
    if (cVar2 == '\0') {
      thunk_FUN_101f1c60();
    }
  }
  return;
}


// Reference entry 1045f9b0; body size 19 bytes.
#line 1 "ENTRY_1045f9b0"

void __thiscall Recovered_Bulk::m_FUN_1045f9b0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable__Func_impl_no_alloc__lambda_19bdeef203780de5e604a90ce4be9e81__void_SCSetting__SCStr_const__);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10461550; body size 41 bytes.
#line 1 "ENTRY_10461550"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10461550(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10462090; body size 60 bytes.
#line 1 "ENTRY_10462090"

void __fastcall FUN_10462090(int *param_1)

{ int stack0xfffffffc;
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


// Reference entry 104620f0; body size 33 bytes.
#line 1 "ENTRY_104620f0"

void __fastcall FUN_104620f0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10462120; body size 33 bytes.
#line 1 "ENTRY_10462120"

void __fastcall FUN_10462120(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 104625c0; body size 37 bytes.
#line 1 "ENTRY_104625c0"

int * __fastcall FUN_104625c0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 104627f0; body size 32 bytes.
#line 1 "ENTRY_104627f0"

undefined4 __thiscall Recovered_Bulk::m_FUN_104627f0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10461ec0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68);
  }
  return (undefined4)(param_1);
}


// Reference entry 10462c30; body size 21 bytes.
#line 1 "ENTRY_10462c30"

void __thiscall Recovered_Bulk::m_FUN_10462c30(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 10462c50; body size 16 bytes.
#line 1 "ENTRY_10462c50"

void __stdcall FUN_10462c50(unsigned int recovered_unused_stack_0)

{
  thunk_FUN_1061c5e0((int)(5));
  return;
}


// Reference entry 10462d20; body size 33 bytes.
#line 1 "ENTRY_10462d20"

void __fastcall FUN_10462d20(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10463890; body size 61 bytes.
#line 1 "ENTRY_10463890"

void __thiscall Recovered_Bulk::m_FUN_10463890(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    uVar2 = (undefined4)(((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 10463900; body size 28 bytes.
#line 1 "ENTRY_10463900"

void __fastcall FUN_10463900(int param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x1c) + 0x1c))(), 0);
  if (cVar1 != '\0') {
                    
                    
    (**(code **)(**(int **)(param_1 + 0x1c) + 0x18))();
    return;
  }
  return;
}


// Reference entry 10464810; body size 21 bytes.
#line 1 "ENTRY_10464810"

SCStr * __stdcall FUN_10464810(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("RemoveSSID");
  return (SCStr *)(param_1);
}


// Reference entry 10464840; body size 21 bytes.
#line 1 "ENTRY_10464840"

SCStr * __stdcall FUN_10464840(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategorySettings");
  return (SCStr *)(param_1);
}


// Reference entry 10464860; body size 20 bytes.
#line 1 "ENTRY_10464860"

SCStr * __thiscall Recovered_Bulk::m_FUN_10464860(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x48));
  return (SCStr *)(param_2);
}


// Reference entry 10464880; body size 21 bytes.
#line 1 "ENTRY_10464880"

SCStr * __stdcall FUN_10464880(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10465d30; body size 55 bytes.
#line 1 "ENTRY_10465d30"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10465d30(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCRemoveMeSettingsMenu);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCRemoveMeSettingsMenu);
  param_1[10] = (undefined4)((uint)&ghidra_vftable_SCRemoveMeSettingsMenu);
  thunk_FUN_101eb2b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x90);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10466290; body size 30 bytes.
#line 1 "ENTRY_10466290"

void __thiscall Recovered_Bulk::m_FUN_10466290(int param_2)
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


// Reference entry 104682f0; body size 45 bytes.
#line 1 "ENTRY_104682f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_104682f0(byte param_2)
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


// Reference entry 10468380; body size 61 bytes.
#line 1 "ENTRY_10468380"

void __thiscall Recovered_Bulk::m_FUN_10468380(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    uVar2 = (undefined4)(((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 104683d0; body size 30 bytes.
#line 1 "ENTRY_104683d0"

void __thiscall Recovered_Bulk::m_FUN_104683d0(int param_2)
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


// Reference entry 10468aa0; body size 52 bytes.
#line 1 "ENTRY_10468aa0"

void __stdcall FUN_10468aa0(undefined4 param_1,SCStr *param_2)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = (bool)(((SCStr *)(param_2))->op_eq("SCIIndexManager:onIndexEvent"), 0);
  if ((!bVar1) && (cVar2 = (char)(thunk_FUN_102d65b0(param_2), 0), cVar2 == '\0')) {
    return;
  }
  thunk_FUN_104693f0();
  return;
}


// Reference entry 10468b70; body size 28 bytes.
#line 1 "ENTRY_10468b70"

void __fastcall FUN_10468b70(int *param_1)

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


// Reference entry 10468ba0; body size 21 bytes.
#line 1 "ENTRY_10468ba0"

SCStr * __stdcall FUN_10468ba0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("UpdateMusicIndex");
  return (SCStr *)(param_1);
}


// Reference entry 10468bc0; body size 21 bytes.
#line 1 "ENTRY_10468bc0"

SCStr * __stdcall FUN_10468bc0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategorySettings");
  return (SCStr *)(param_1);
}


// Reference entry 10468f90; body size 24 bytes.
#line 1 "ENTRY_10468f90"

void __fastcall FUN_10468f90(int param_1)

{
  if (*(int **)(param_1 + 0xa4) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0xa4) + 0x14))(param_1 + 0x90);
  }
  return;
}


// Reference entry 104690c0; body size 24 bytes.
#line 1 "ENTRY_104690c0"

void __fastcall FUN_104690c0(int param_1)

{
  if (*(int **)(param_1 + 0xa4) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0xa4) + 0x18))(param_1 + 0x90);
  }
  return;
}


// Reference entry 1046b190; body size 38 bytes.
#line 1 "ENTRY_1046b190"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1046b190(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RZPWifiModeDevicesEnumerator);
  thunk_FUN_11132140();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x24);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1046b5c0; body size 34 bytes.
#line 1 "ENTRY_1046b5c0"

void __stdcall FUN_1046b5c0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_102d65b0(param_2), 0);
  if (cVar1 != '\0') {
    thunk_FUN_1046ba90();
  }
  return;
}


// Reference entry 1046b5f0; body size 34 bytes.
#line 1 "ENTRY_1046b5f0"

void __stdcall FUN_1046b5f0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_102d65b0(param_2), 0);
  if (cVar1 != '\0') {
    thunk_FUN_1046bd60();
  }
  return;
}


// Reference entry 1046b780; body size 23 bytes.
#line 1 "ENTRY_1046b780"

void __fastcall FUN_1046b780(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x94) + 0x6c))(param_1 + 0x90);
  return;
}


// Reference entry 1046b7a0; body size 23 bytes.
#line 1 "ENTRY_1046b7a0"

void __fastcall FUN_1046b7a0(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x94) + 0x6c))(param_1 + 0x90);
  return;
}


// Reference entry 1046b7c0; body size 23 bytes.
#line 1 "ENTRY_1046b7c0"

void __fastcall FUN_1046b7c0(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x94) + 0x70))(param_1 + 0x90);
  return;
}


// Reference entry 1046b7e0; body size 23 bytes.
#line 1 "ENTRY_1046b7e0"

void __fastcall FUN_1046b7e0(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x94) + 0x70))(param_1 + 0x90);
  return;
}


// Reference entry 1046c660; body size 55 bytes.
#line 1 "ENTRY_1046c660"

void __stdcall FUN_1046c660(undefined4 param_1,SCStr *param_2)

{
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_2))->op_eq("SCIHousehold:onZoneGroupsChanged"), 0);
  if (bVar1) {
    thunk_FUN_101ed0d0();
    thunk_FUN_1046d3a0();
    thunk_FUN_1046c9a0();
    thunk_FUN_101ed5f0();
  }
  return;
}


// Reference entry 1046c810; body size 19 bytes.
#line 1 "ENTRY_1046c810"

void __thiscall Recovered_Bulk::m_FUN_1046c810(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable__Func_impl_no_alloc__lambda_6643794ac1fdc83a6a35adc0fc16fa10__void_SCHousehold_const__SCStr_const__);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 1046c830; body size 19 bytes.
#line 1 "ENTRY_1046c830"

void __thiscall Recovered_Bulk::m_FUN_1046c830(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std___Func_impl_no_alloc__lambda_9c17ed55ef8614195be9dc70d51f8ea9__void_SCIController__ViewId_SCIController__ViewMode_);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 1046c850; body size 21 bytes.
#line 1 "ENTRY_1046c850"

void __thiscall Recovered_Bulk::m_FUN_1046c850(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 1046c870; body size 21 bytes.
#line 1 "ENTRY_1046c870"

void  __thiscall Recovered_Bulk::m_FUN_1046c870(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
}


// Reference entry 1046c890; body size 56 bytes.
#line 1 "ENTRY_1046c890"

undefined4 *  __stdcall FUN_1046c890(undefined4 param_1,SCStr *param_2)

{
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_2))->op_eq("SCIHousehold:onZoneGroupsChanged"), 0);
  if (bVar1) {
    thunk_FUN_101ed0d0();
    thunk_FUN_1046d3a0();
    thunk_FUN_1046c9a0();
    thunk_FUN_101ed5f0();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1046c8e0; body size 36 bytes.
#line 1 "ENTRY_1046c8e0"

void __stdcall FUN_1046c8e0(unsigned int recovered_unused_stack_0,unsigned int recovered_unused_stack_1)

{
  thunk_FUN_101ed0d0();
  thunk_FUN_1046d3a0();
  thunk_FUN_1046c9a0();
  thunk_FUN_101ed5f0();
  return;
}


// Reference entry 1046c930; body size 19 bytes.
#line 1 "ENTRY_1046c930"

void __thiscall Recovered_Bulk::m_FUN_1046c930(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable__Func_impl_no_alloc__lambda_6643794ac1fdc83a6a35adc0fc16fa10__void_SCHousehold_const__SCStr_const__);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 1046c950; body size 19 bytes.
#line 1 "ENTRY_1046c950"

void __thiscall Recovered_Bulk::m_FUN_1046c950(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std___Func_impl_no_alloc__lambda_9c17ed55ef8614195be9dc70d51f8ea9__void_SCIController__ViewId_SCIController__ViewMode_);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 1046d370; body size 30 bytes.
#line 1 "ENTRY_1046d370"

void FUN_1046d370(void)

{
  thunk_FUN_101ed0d0();
  thunk_FUN_1046d3a0();
  thunk_FUN_1046c9a0();
  thunk_FUN_101ed5f0();
  return;
}


// Reference entry 1046ebb0; body size 45 bytes.
#line 1 "ENTRY_1046ebb0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1046ebb0(byte param_2)
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


// Reference entry 1046ee60; body size 21 bytes.
#line 1 "ENTRY_1046ee60"

SCStr * __stdcall FUN_1046ee60(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("ExplicitFilter");
  return (SCStr *)(param_1);
}


// Reference entry 1046ee80; body size 21 bytes.
#line 1 "ENTRY_1046ee80"

SCStr * __stdcall FUN_1046ee80(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryDefault");
  return (SCStr *)(param_1);
}


// Reference entry 1046f110; body size 21 bytes.
#line 1 "ENTRY_1046f110"

SCStr * __stdcall FUN_1046f110(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 1046f2f0; body size 17 bytes.
#line 1 "ENTRY_1046f2f0"

void __stdcall FUN_1046f2f0(SCStr *param_1)

{
  ((SCStr *)(param_1))->op_eq("SCIHousehold:onSecureSettingsChanged");
  return;
}


// Reference entry 1046f590; body size 25 bytes.
#line 1 "ENTRY_1046f590"

void __stdcall FUN_1046f590(unsigned int recovered_unused_stack_0)

{
  thunk_FUN_1046fe40();
  thunk_FUN_1046fbd0();
  return;
}


// Reference entry 1046f5b0; body size 22 bytes.
#line 1 "ENTRY_1046f5b0"

void FUN_1046f5b0(void)

{
  thunk_FUN_1046fe40();
  thunk_FUN_1046fbd0();
  return;
}


// Reference entry 10470050; body size 16 bytes.
#line 1 "ENTRY_10470050"

void FUN_10470050(void)

{
  thunk_FUN_1046fe40();
  thunk_FUN_1046fbd0();
  return;
}


// Reference entry 104715b0; body size 30 bytes.
#line 1 "ENTRY_104715b0"

void FUN_104715b0(void)

{
  thunk_FUN_101ed0d0();
  thunk_FUN_101f2770();
  thunk_FUN_104706b0();
  thunk_FUN_101ed5f0();
  return;
}


// Reference entry 10471f00; body size 41 bytes.
#line 1 "ENTRY_10471f00"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10471f00(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10471f40; body size 41 bytes.
#line 1 "ENTRY_10471f40"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10471f40(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10472990; body size 60 bytes.
#line 1 "ENTRY_10472990"

void __fastcall FUN_10472990(int *param_1)

{ int stack0xfffffffc;
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


// Reference entry 104729f0; body size 33 bytes.
#line 1 "ENTRY_104729f0"

void __fastcall FUN_104729f0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10472a90; body size 33 bytes.
#line 1 "ENTRY_10472a90"

void __fastcall FUN_10472a90(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10472cb0; body size 18 bytes.
#line 1 "ENTRY_10472cb0"

void __fastcall FUN_10472cb0(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0xc);
  }
  return;
}


// Reference entry 10472cd0; body size 18 bytes.
#line 1 "ENTRY_10472cd0"

void __fastcall FUN_10472cd0(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0xc);
  }
  return;
}


// Reference entry 104732f0; body size 23 bytes.
#line 1 "ENTRY_104732f0"

void __fastcall FUN_104732f0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  thunk_FUN_10cf3780((int)(*(undefined4 *)(param_1 + 4)));
  return;
}


// Reference entry 104733a0; body size 33 bytes.
#line 1 "ENTRY_104733a0"

void __fastcall FUN_104733a0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 104733f0; body size 61 bytes.
#line 1 "ENTRY_104733f0"

void __thiscall Recovered_Bulk::m_FUN_104733f0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    uVar2 = (undefined4)(((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 10473c70; body size 21 bytes.
#line 1 "ENTRY_10473c70"

SCStr * __stdcall FUN_10473c70(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("DeviceName");
  return (SCStr *)(param_1);
}


// Reference entry 10474c00; body size 41 bytes.
#line 1 "ENTRY_10474c00"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10474c00(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10474c40; body size 41 bytes.
#line 1 "ENTRY_10474c40"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10474c40(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10474c80; body size 41 bytes.
#line 1 "ENTRY_10474c80"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10474c80(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 104757b0; body size 33 bytes.
#line 1 "ENTRY_104757b0"

void __fastcall FUN_104757b0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10475850; body size 33 bytes.
#line 1 "ENTRY_10475850"

void __fastcall FUN_10475850(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10475b10; body size 18 bytes.
#line 1 "ENTRY_10475b10"

void __fastcall FUN_10475b10(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0x10);
  }
  return;
}


// Reference entry 10475b30; body size 18 bytes.
#line 1 "ENTRY_10475b30"

void __fastcall FUN_10475b30(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0x10);
  }
  return;
}


// Reference entry 10476240; body size 49 bytes.
#line 1 "ENTRY_10476240"

void __fastcall FUN_10476240(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  thunk_FUN_10cf3780((int)(*(undefined4 *)(param_1 + 4)));
  thunk_FUN_10d9e6c0((int)(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x9c)));
  return;
}


// Reference entry 10476310; body size 33 bytes.
#line 1 "ENTRY_10476310"

void __fastcall FUN_10476310(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10478100; body size 21 bytes.
#line 1 "ENTRY_10478100"

SCStr * __stdcall FUN_10478100(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("OfflineMissingPlayerAction");
  return (SCStr *)(param_1);
}


// Reference entry 10478120; body size 21 bytes.
#line 1 "ENTRY_10478120"

SCStr * __stdcall FUN_10478120(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategorySettings");
  return (SCStr *)(param_1);
}


// Reference entry 10478140; body size 21 bytes.
#line 1 "ENTRY_10478140"

SCStr * __stdcall FUN_10478140(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10478940; body size 43 bytes.
#line 1 "ENTRY_10478940"

void FUN_10478940(void)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_101f1cd0(), 0);
  if (cVar1 == '\0') {
    thunk_FUN_101ed0d0();
    thunk_FUN_101f2770();
    thunk_FUN_104775f0();
    thunk_FUN_101ed5f0();
    return;
  }
  return;
}


// Reference entry 10479450; body size 59 bytes.
#line 1 "ENTRY_10479450"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_10479450(undefined4 *param_2)
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
      ((SCVtbl_1_0*)(piVar2))->v();
    }
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
    return (undefined4 *)(param_2);
  }
  thunk_FUN_10478f70<>(puVar1,param_2);
  return (undefined4 *)(param_2);
}


// Reference entry 1047a230; body size 19 bytes.
#line 1 "ENTRY_1047a230"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_1047a230(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 1047a250; body size 19 bytes.
#line 1 "ENTRY_1047a250"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_1047a250(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 1047a270; body size 19 bytes.
#line 1 "ENTRY_1047a270"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_1047a270(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 1047a290; body size 19 bytes.
#line 1 "ENTRY_1047a290"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_1047a290(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 1047a2b0; body size 19 bytes.
#line 1 "ENTRY_1047a2b0"

void __thiscall Recovered_Bulk::m_FUN_1047a2b0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std___Func_impl_no_alloc__lambda_f022ad69723ba7f93d5debe7a6c277bc__void_SCIController__ViewId_SCIController__ViewMode_);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 1047a2d0; body size 19 bytes.
#line 1 "ENTRY_1047a2d0"

void __thiscall Recovered_Bulk::m_FUN_1047a2d0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable__Func_impl_no_alloc__lambda_f2b3e15fe7ee076ed0c875f474fc9748__void_SCHousehold_const__SCStr_const__);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 1047a2f0; body size 21 bytes.
#line 1 "ENTRY_1047a2f0"

void __thiscall Recovered_Bulk::m_FUN_1047a2f0(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 1047a310; body size 21 bytes.
#line 1 "ENTRY_1047a310"

void __thiscall Recovered_Bulk::m_FUN_1047a310(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 1047a330; body size 21 bytes.
#line 1 "ENTRY_1047a330"

void __thiscall Recovered_Bulk::m_FUN_1047a330(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 1047a350; body size 21 bytes.
#line 1 "ENTRY_1047a350"

void __thiscall Recovered_Bulk::m_FUN_1047a350(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 1047a370; body size 21 bytes.
#line 1 "ENTRY_1047a370"

void  __thiscall Recovered_Bulk::m_FUN_1047a370(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
}


// Reference entry 1047a390; body size 21 bytes.
#line 1 "ENTRY_1047a390"

void  __thiscall Recovered_Bulk::m_FUN_1047a390(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
}


// Reference entry 1047a480; body size 44 bytes.
#line 1 "ENTRY_1047a480"

undefined4 *  __stdcall FUN_1047a480(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_101a2c70("SCIController:onConnectivityStateChanged",param_2), 0);
  if (cVar1 != '\0') {
    thunk_FUN_1047da40();
    thunk_FUN_1047dde0();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1047a4d0; body size 57 bytes.
#line 1 "ENTRY_1047a4d0"

undefined4 *  __stdcall FUN_1047a4d0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_101a2c70("SCIHousehold:onZoneGroupsChanged",param_2), 0);
  if ((cVar1 == '\0') &&
     (cVar1 = (char)(thunk_FUN_101a2c70("SCIHousehold:onZPUpdateComplete",param_2), 0), cVar1 == '\0')) {
    return (undefined4 *)(param_1);
  }
  thunk_FUN_1047dde0();
  return (undefined4 *)(param_1);
}


// Reference entry 1047a5a0; body size 19 bytes.
#line 1 "ENTRY_1047a5a0"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_1047a5a0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 1047a5c0; body size 19 bytes.
#line 1 "ENTRY_1047a5c0"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_1047a5c0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 1047a5e0; body size 19 bytes.
#line 1 "ENTRY_1047a5e0"

void __thiscall Recovered_Bulk::m_FUN_1047a5e0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std___Func_impl_no_alloc__lambda_63432ce2fb66b9ed36bba9d30d396e0c__void_SCIController__ViewId_SCIController__ViewMode_);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 1047a600; body size 19 bytes.
#line 1 "ENTRY_1047a600"

void __thiscall Recovered_Bulk::m_FUN_1047a600(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable__Func_impl_no_alloc__lambda_bae15aa7d879f1f9bcbf0af0cd67b4ed__void_SCController_const__SCStr_const__);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 1047a620; body size 19 bytes.
#line 1 "ENTRY_1047a620"

void __thiscall Recovered_Bulk::m_FUN_1047a620(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std___Func_impl_no_alloc__lambda_f022ad69723ba7f93d5debe7a6c277bc__void_SCIController__ViewId_SCIController__ViewMode_);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 1047a640; body size 19 bytes.
#line 1 "ENTRY_1047a640"

void __thiscall Recovered_Bulk::m_FUN_1047a640(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable__Func_impl_no_alloc__lambda_f2b3e15fe7ee076ed0c875f474fc9748__void_SCHousehold_const__SCStr_const__);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 1047a660; body size 52 bytes.
#line 1 "ENTRY_1047a660"

void __thiscall Recovered_Bulk::m_FUN_1047a660(undefined4 *param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_1047a750();
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(param_2[1]);
  param_1[2] = (undefined4)(param_2[2]);
  *param_2 = (undefined4)(0);
  param_2[1] = (undefined4)(0);
  param_2[2] = (undefined4)(0);
  return;
}


// Reference entry 1047c1c0; body size 60 bytes.
#line 1 "ENTRY_1047c1c0"

void __stdcall FUN_1047c1c0(int param_1,int param_2)

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


// Reference entry 1047c210; body size 36 bytes.
#line 1 "ENTRY_1047c210"

void __stdcall FUN_1047c210(undefined4 param_1,SCStr *param_2)

{
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_2))->op_eq("SCSetupEngine:onShouldRefreshUI"), 0);
  if (bVar1) {
    thunk_FUN_1047d200();
  }
  return;
}


// Reference entry 1047d4e0; body size 59 bytes.
#line 1 "ENTRY_1047d4e0"

void __thiscall Recovered_Bulk::m_FUN_1047d4e0(undefined4 *param_2)
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
      ((SCVtbl_1_0*)(piVar2))->v();
    }
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
    return;
  }
  thunk_FUN_10478f70<>(puVar1,param_2);
  return;
}


// Reference entry 10481650; body size 30 bytes.
#line 1 "ENTRY_10481650"

void __thiscall Recovered_Bulk::m_FUN_10481650(int param_2)
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


// Reference entry 104816c0; body size 59 bytes.
#line 1 "ENTRY_104816c0"

void __thiscall Recovered_Bulk::m_FUN_104816c0(undefined4 *param_2)
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
      ((SCVtbl_1_0*)(piVar2))->v();
    }
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
    return;
  }
  thunk_FUN_1047ff40((int)(puVar1),(int)(param_2));
  return;
}


// Reference entry 10482bb0; body size 41 bytes.
#line 1 "ENTRY_10482bb0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10482bb0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10482bf0; body size 41 bytes.
#line 1 "ENTRY_10482bf0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10482bf0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10482c30; body size 41 bytes.
#line 1 "ENTRY_10482c30"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10482c30(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10482c70; body size 41 bytes.
#line 1 "ENTRY_10482c70"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10482c70(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10482cb0; body size 41 bytes.
#line 1 "ENTRY_10482cb0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10482cb0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10484cc0; body size 60 bytes.
#line 1 "ENTRY_10484cc0"

void __fastcall FUN_10484cc0(int *param_1)

{ int stack0xfffffffc;
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


// Reference entry 10484d20; body size 33 bytes.
#line 1 "ENTRY_10484d20"

void __fastcall FUN_10484d20(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10484d50; body size 33 bytes.
#line 1 "ENTRY_10484d50"

void __fastcall FUN_10484d50(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10484d80; body size 33 bytes.
#line 1 "ENTRY_10484d80"

void __fastcall FUN_10484d80(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10484db0; body size 33 bytes.
#line 1 "ENTRY_10484db0"

void __fastcall FUN_10484db0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10484de0; body size 33 bytes.
#line 1 "ENTRY_10484de0"

void __fastcall FUN_10484de0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 104852e0; body size 33 bytes.
#line 1 "ENTRY_104852e0"

void __fastcall FUN_104852e0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10485310; body size 33 bytes.
#line 1 "ENTRY_10485310"

void __fastcall FUN_10485310(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10485340; body size 33 bytes.
#line 1 "ENTRY_10485340"

void __fastcall FUN_10485340(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10485370; body size 33 bytes.
#line 1 "ENTRY_10485370"

void __fastcall FUN_10485370(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 104853a0; body size 33 bytes.
#line 1 "ENTRY_104853a0"

void __fastcall FUN_104853a0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 104859a0; body size 18 bytes.
#line 1 "ENTRY_104859a0"

void __fastcall FUN_104859a0(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0xc);
  }
  return;
}


// Reference entry 104859c0; body size 18 bytes.
#line 1 "ENTRY_104859c0"

void __fastcall FUN_104859c0(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0xc);
  }
  return;
}


// Reference entry 104859e0; body size 18 bytes.
#line 1 "ENTRY_104859e0"

void __fastcall FUN_104859e0(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0xc);
  }
  return;
}


// Reference entry 10485a00; body size 18 bytes.
#line 1 "ENTRY_10485a00"

void __fastcall FUN_10485a00(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0xc);
  }
  return;
}


// Reference entry 10485a20; body size 18 bytes.
#line 1 "ENTRY_10485a20"

void __fastcall FUN_10485a20(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0x10);
  }
  return;
}


// Reference entry 10485a40; body size 18 bytes.
#line 1 "ENTRY_10485a40"

void __fastcall FUN_10485a40(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0x10);
  }
  return;
}


// Reference entry 10485a60; body size 18 bytes.
#line 1 "ENTRY_10485a60"

void __fastcall FUN_10485a60(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0xc);
  }
  return;
}


// Reference entry 10485a80; body size 18 bytes.
#line 1 "ENTRY_10485a80"

void __fastcall FUN_10485a80(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0xc);
  }
  return;
}


// Reference entry 10485aa0; body size 18 bytes.
#line 1 "ENTRY_10485aa0"

void __fastcall FUN_10485aa0(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0xc);
  }
  return;
}


// Reference entry 10485ac0; body size 18 bytes.
#line 1 "ENTRY_10485ac0"

void __fastcall FUN_10485ac0(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0xc);
  }
  return;
}


// Reference entry 10485ae0; body size 18 bytes.
#line 1 "ENTRY_10485ae0"

void __fastcall FUN_10485ae0(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,8);
  }
  return;
}


// Reference entry 10485b00; body size 18 bytes.
#line 1 "ENTRY_10485b00"

void __fastcall FUN_10485b00(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,8);
  }
  return;
}


// Reference entry 10485b20; body size 18 bytes.
#line 1 "ENTRY_10485b20"

void __fastcall FUN_10485b20(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0xc);
  }
  return;
}


// Reference entry 10485b40; body size 18 bytes.
#line 1 "ENTRY_10485b40"

void __fastcall FUN_10485b40(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0xc);
  }
  return;
}


// Reference entry 10485b60; body size 18 bytes.
#line 1 "ENTRY_10485b60"

void __fastcall FUN_10485b60(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0xc);
  }
  return;
}


// Reference entry 10485b80; body size 18 bytes.
#line 1 "ENTRY_10485b80"

void __fastcall FUN_10485b80(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0xc);
  }
  return;
}


// Reference entry 10485ba0; body size 18 bytes.
#line 1 "ENTRY_10485ba0"

void __fastcall FUN_10485ba0(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0xc);
  }
  return;
}


// Reference entry 10485bc0; body size 18 bytes.
#line 1 "ENTRY_10485bc0"

void __fastcall FUN_10485bc0(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0xc);
  }
  return;
}


// Reference entry 10485be0; body size 18 bytes.
#line 1 "ENTRY_10485be0"

void __fastcall FUN_10485be0(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0xc);
  }
  return;
}


// Reference entry 10485c00; body size 18 bytes.
#line 1 "ENTRY_10485c00"

void __fastcall FUN_10485c00(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0xc);
  }
  return;
}


// Reference entry 10485c20; body size 18 bytes.
#line 1 "ENTRY_10485c20"

void __fastcall FUN_10485c20(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0xc);
  }
  return;
}


// Reference entry 10485c40; body size 18 bytes.
#line 1 "ENTRY_10485c40"

void __fastcall FUN_10485c40(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0xc);
  }
  return;
}


// Reference entry 10486c10; body size 45 bytes.
#line 1 "ENTRY_10486c10"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10486c10(byte param_2)
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


// Reference entry 10486c50; body size 35 bytes.
#line 1 "ENTRY_10486c50"

undefined4 __thiscall Recovered_Bulk::m_FUN_10486c50(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10485450();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x168);
  }
  return (undefined4)(param_1);
}


// Reference entry 10486c80; body size 33 bytes.
#line 1 "ENTRY_10486c80"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10486c80(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwfObjHTListener);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10486f40; body size 19 bytes.
#line 1 "ENTRY_10486f40"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_10486f40(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 10487270; body size 19 bytes.
#line 1 "ENTRY_10487270"

void __thiscall Recovered_Bulk::m_FUN_10487270(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable__Func_impl_no_alloc__lambda_bdb4926a07395fd04542a4130dedac13__void_SCSetting__SCStr_const__);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10487620; body size 21 bytes.
#line 1 "ENTRY_10487620"

void __thiscall Recovered_Bulk::m_FUN_10487620(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 10487900; body size 21 bytes.
#line 1 "ENTRY_10487900"

void __thiscall Recovered_Bulk::m_FUN_10487900(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 10487ad0; body size 23 bytes.
#line 1 "ENTRY_10487ad0"

void __fastcall FUN_10487ad0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  thunk_FUN_10cf3780((int)(*(undefined4 *)(param_1 + 4)));
  return;
}


// Reference entry 10487af0; body size 23 bytes.
#line 1 "ENTRY_10487af0"

void __fastcall FUN_10487af0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  thunk_FUN_10cf3780((int)(*(undefined4 *)(param_1 + 4)));
  return;
}


// Reference entry 10487bc0; body size 50 bytes.
#line 1 "ENTRY_10487bc0"

void __thiscall Recovered_Bulk::m_FUN_10487bc0(int *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)((SCStr *)(*(int *)(param_1 + 4) + 0xb8));
  this_ = (SCStr *)((SCStr *)(*param_2 + 0x100));
  if ((SCStr *)((pSVar1)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)pSVar1));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 10487c00; body size 23 bytes.
#line 1 "ENTRY_10487c00"

undefined4 *  __fastcall FUN_10487c00(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  thunk_FUN_10cf3780((int)(*(undefined4 *)(param_1 + 4)));
  return (undefined4 *)(recovered_unused_stack_1);
}


// Reference entry 10487cc0; body size 44 bytes.
#line 1 "ENTRY_10487cc0"

void  __thiscall Recovered_Bulk::m_FUN_10487cc0(int *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(*param_2 + 0xf4));
  if ((SCStr *)((param_1 + 4)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)(param_1 + 4)));
    ((SCStr *)(this_))->int_addref();
  }
}


// Reference entry 10487d00; body size 23 bytes.
#line 1 "ENTRY_10487d00"

void __fastcall FUN_10487d00(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  thunk_FUN_10cf3780((int)(*(undefined4 *)(param_1 + 4)));
  return;
}


// Reference entry 10487dc0; body size 36 bytes.
#line 1 "ENTRY_10487dc0"

void __stdcall FUN_10487dc0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_101a2c70("SCISetting:onValueChanged:Bool",param_2), 0);
  if (cVar1 != '\0') {
    thunk_FUN_104963d0();
  }
  return;
}


// Reference entry 104881d0; body size 19 bytes.
#line 1 "ENTRY_104881d0"

void __thiscall Recovered_Bulk::m_FUN_104881d0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable__Func_impl_no_alloc__lambda_37ba46da54180a76f324095b3b3387e7__void_SCAddVoiceServiceWizard__);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10488240; body size 19 bytes.
#line 1 "ENTRY_10488240"

void __thiscall Recovered_Bulk::m_FUN_10488240(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable__Func_impl_no_alloc__lambda_bdb4926a07395fd04542a4130dedac13__void_SCSetting__SCStr_const__);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10488460; body size 33 bytes.
#line 1 "ENTRY_10488460"

void __fastcall FUN_10488460(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10488490; body size 33 bytes.
#line 1 "ENTRY_10488490"

void __fastcall FUN_10488490(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 104884c0; body size 33 bytes.
#line 1 "ENTRY_104884c0"

void __fastcall FUN_104884c0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 104884f0; body size 33 bytes.
#line 1 "ENTRY_104884f0"

void __fastcall FUN_104884f0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10488520; body size 33 bytes.
#line 1 "ENTRY_10488520"

void __fastcall FUN_10488520(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10488610; body size 61 bytes.
#line 1 "ENTRY_10488610"

void __thiscall Recovered_Bulk::m_FUN_10488610(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    uVar2 = (undefined4)(((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 10488660; body size 61 bytes.
#line 1 "ENTRY_10488660"

void __thiscall Recovered_Bulk::m_FUN_10488660(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    uVar2 = (undefined4)(((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 104886b0; body size 30 bytes.
#line 1 "ENTRY_104886b0"

void __thiscall Recovered_Bulk::m_FUN_104886b0(int param_2)
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


// Reference entry 10488750; body size 61 bytes.
#line 1 "ENTRY_10488750"

void __thiscall Recovered_Bulk::m_FUN_10488750(int *param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0xc3) != '\0') {
    uVar1 = (undefined4)(((SCVtbl_10_0*)(param_2))->v(), 0);
    switch(uVar1) {
    case 10:
    case 0xb:
    case 0xc:
    case 0xe:
      break;
    default:
      thunk_FUN_1041d2b0((int)(0));
    }
  }
  thunk_FUN_101eca20((int)(param_2));
  return;
}


// Reference entry 104940e0; body size 28 bytes.
#line 1 "ENTRY_104940e0"

void __fastcall FUN_104940e0(int *param_1)

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


// Reference entry 10495570; body size 44 bytes.
#line 1 "ENTRY_10495570"

undefined1 __stdcall FUN_10495570(SCStr *param_1){
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIHousehold:onZoneGroupsChanged"), 0);
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIHousehold:onVoiceAccountInfoChanged"), 0);
    if (!bVar1) {
      return (undefined1)(0);
    }
  }
  return (undefined1)(1);
}


// Reference entry 10496660; body size 59 bytes.
#line 1 "ENTRY_10496660"

void __thiscall Recovered_Bulk::m_FUN_10496660(undefined4 *param_2)
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
      ((SCVtbl_1_0*)(piVar2))->v();
    }
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
    return;
  }
  thunk_FUN_1047ff40((int)(puVar1),(int)(param_2));
  return;
}


// Reference entry 10496b30; body size 27 bytes.
#line 1 "ENTRY_10496b30"

undefined4 __fastcall FUN_10496b30(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x11c) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x11c) + 0x20))(), 0);
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10496b60; body size 27 bytes.
#line 1 "ENTRY_10496b60"

undefined4 __fastcall FUN_10496b60(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x114) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x114) + 0x20))(), 0);
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10498c70; body size 21 bytes.
#line 1 "ENTRY_10498c70"

void __thiscall Recovered_Bulk::m_FUN_10498c70(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 10498d20; body size 61 bytes.
#line 1 "ENTRY_10498d20"

void __thiscall Recovered_Bulk::m_FUN_10498d20(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    uVar2 = (undefined4)(((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 1049b840; body size 21 bytes.
#line 1 "ENTRY_1049b840"

SCStr * __stdcall FUN_1049b840(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("RemoveConnectedPartner");
  return (SCStr *)(param_1);
}


// Reference entry 1049b860; body size 21 bytes.
#line 1 "ENTRY_1049b860"

SCStr * __stdcall FUN_1049b860(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategorySettings");
  return (SCStr *)(param_1);
}


// Reference entry 1049c300; body size 24 bytes.
#line 1 "ENTRY_1049c300"

void __fastcall FUN_1049c300(int param_1)

{
  if (*(int **)(param_1 + 0x94) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x94) + 0x14))(param_1 + 0x90);
  }
  return;
}


// Reference entry 1049c4b0; body size 24 bytes.
#line 1 "ENTRY_1049c4b0"

void __fastcall FUN_1049c4b0(int param_1)

{
  if (*(int **)(param_1 + 0x94) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x94) + 0x18))(param_1 + 0x90);
  }
  return;
}


// Reference entry 1049cc20; body size 57 bytes.
#line 1 "ENTRY_1049cc20"

void FUN_1049cc20(void)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_101f1cd0(), 0);
  if (cVar1 == '\0') {
    thunk_FUN_101ed0d0();
    thunk_FUN_101f2770();
    thunk_FUN_1049ae90();
    thunk_FUN_10499dd0();
    thunk_FUN_10498d70();
    thunk_FUN_101ed5f0();
    return;
  }
  return;
}


// Reference entry 1049d7c0; body size 41 bytes.
#line 1 "ENTRY_1049d7c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1049d7c0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1049f230; body size 33 bytes.
#line 1 "ENTRY_1049f230"

void __fastcall FUN_1049f230(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1049f2d0; body size 33 bytes.
#line 1 "ENTRY_1049f2d0"

void __fastcall FUN_1049f2d0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1049fba0; body size 18 bytes.
#line 1 "ENTRY_1049fba0"

void __fastcall FUN_1049fba0(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0xc);
  }
  return;
}


// Reference entry 1049fbc0; body size 18 bytes.
#line 1 "ENTRY_1049fbc0"

void __fastcall FUN_1049fbc0(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0xc);
  }
  return;
}


// Reference entry 1049fed0; body size 45 bytes.
#line 1 "ENTRY_1049fed0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1049fed0(byte param_2)
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


// Reference entry 1049ff10; body size 45 bytes.
#line 1 "ENTRY_1049ff10"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1049ff10(byte param_2)
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


// Reference entry 1049ff50; body size 45 bytes.
#line 1 "ENTRY_1049ff50"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1049ff50(byte param_2)
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


// Reference entry 1049ff90; body size 45 bytes.
#line 1 "ENTRY_1049ff90"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1049ff90(byte param_2)
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


// Reference entry 104a09f0; body size 23 bytes.
#line 1 "ENTRY_104a09f0"

void __fastcall FUN_104a09f0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  thunk_FUN_10cf3780((int)(*(undefined4 *)(param_1 + 4)));
  return;
}


// Reference entry 104a0aa0; body size 33 bytes.
#line 1 "ENTRY_104a0aa0"

void __fastcall FUN_104a0aa0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 104a0fd0; body size 42 bytes.
#line 1 "ENTRY_104a0fd0"

void __thiscall Recovered_Bulk::m_FUN_104a0fd0(int param_2)
{
  int param_1 = (int )this;
  if ((int)(param_2) == *(int *)(param_1 + 0x98)) {
    (**(code **)(**(int **)(param_1 + 0x90) + 0x3c))(DAT_118a1c50);
  }
  return;
}


// Reference entry 104a1010; body size 45 bytes.
#line 1 "ENTRY_104a1010"

void __stdcall FUN_104a1010(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_101f1cd0(), 0);
  if (cVar1 == '\0') {
    cVar1 = (char)(thunk_FUN_102d65b0(param_2), 0);
    if (cVar1 != '\0') {
      thunk_FUN_104a2320();
    }
  }
  return;
}


// Reference entry 104a1050; body size 45 bytes.
#line 1 "ENTRY_104a1050"

void __stdcall FUN_104a1050(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_101f1cd0(), 0);
  if (cVar1 == '\0') {
    cVar1 = (char)(thunk_FUN_102d65b0(param_2), 0);
    if (cVar1 != '\0') {
      thunk_FUN_104a2ff0();
    }
  }
  return;
}


// Reference entry 104a1090; body size 45 bytes.
#line 1 "ENTRY_104a1090"

void __stdcall FUN_104a1090(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_101f1cd0(), 0);
  if (cVar1 == '\0') {
    cVar1 = (char)(thunk_FUN_102d65b0(param_2), 0);
    if (cVar1 != '\0') {
      thunk_FUN_104a36d0();
    }
  }
  return;
}


// Reference entry 104a10d0; body size 45 bytes.
#line 1 "ENTRY_104a10d0"

void __stdcall FUN_104a10d0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_101f1cd0(), 0);
  if (cVar1 == '\0') {
    cVar1 = (char)(thunk_FUN_102d65b0(param_2), 0);
    if (cVar1 != '\0') {
      thunk_FUN_104a47b0();
    }
  }
  return;
}


// Reference entry 104a1f20; body size 17 bytes.
#line 1 "ENTRY_104a1f20"

void __stdcall FUN_104a1f20(SCStr *param_1)

{
  ((SCStr *)(param_1))->op_eq("SCIHousehold:onZoneGroupsChanged");
  return;
}


// Reference entry 104a1f60; body size 23 bytes.
#line 1 "ENTRY_104a1f60"

void __fastcall FUN_104a1f60(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x9c) + 0x6c))(param_1 + 0x90);
  return;
}


// Reference entry 104a1f80; body size 23 bytes.
#line 1 "ENTRY_104a1f80"

void __fastcall FUN_104a1f80(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x94) + 0x6c))(param_1 + 0x90);
  return;
}


// Reference entry 104a1fa0; body size 60 bytes.
#line 1 "ENTRY_104a1fa0"

void __fastcall FUN_104a1fa0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(param_1 + 0x90);
  iVar2 = (int)(iVar1);
  if (param_1 == 0) {
    iVar2 = (int)(0);
  }
  (**(code **)(**(int **)(param_1 + 0x94) + 0x6c))(iVar2);
  (**(code **)(**(int **)(param_1 + 0x9c) + 0x6c))(iVar1);
  (**(code **)(**(int **)(param_1 + 0xa4) + 0x6c))(iVar1);
  return;
}


// Reference entry 104a2100; body size 23 bytes.
#line 1 "ENTRY_104a2100"

void __fastcall FUN_104a2100(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x9c) + 0x70))(param_1 + 0x90);
  return;
}


// Reference entry 104a2120; body size 23 bytes.
#line 1 "ENTRY_104a2120"

void __fastcall FUN_104a2120(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x94) + 0x70))(param_1 + 0x90);
  return;
}


// Reference entry 104a2140; body size 60 bytes.
#line 1 "ENTRY_104a2140"

void __fastcall FUN_104a2140(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(param_1 + 0x90);
  iVar2 = (int)(iVar1);
  if (param_1 == 0) {
    iVar2 = (int)(0);
  }
  (**(code **)(**(int **)(param_1 + 0x94) + 0x70))(iVar2);
  (**(code **)(**(int **)(param_1 + 0x9c) + 0x70))(iVar1);
  (**(code **)(**(int **)(param_1 + 0xa4) + 0x70))(iVar1);
  return;
}


// Reference entry 104a87a0; body size 60 bytes.
#line 1 "ENTRY_104a87a0"

void __fastcall FUN_104a87a0(int *param_1)

{ int stack0xfffffffc;
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


// Reference entry 104a8b60; body size 61 bytes.
#line 1 "ENTRY_104a8b60"

void __thiscall Recovered_Bulk::m_FUN_104a8b60(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    uVar2 = (undefined4)(((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 104a9040; body size 34 bytes.
#line 1 "ENTRY_104a9040"

void __stdcall FUN_104a9040(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_102d65b0(param_2), 0);
  if (cVar1 != '\0') {
    thunk_FUN_104a9270();
  }
  return;
}


// Reference entry 104a9070; body size 21 bytes.
#line 1 "ENTRY_104a9070"

SCStr * __stdcall FUN_104a9070(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("DeviceName");
  return (SCStr *)(param_1);
}


// Reference entry 104a90b0; body size 23 bytes.
#line 1 "ENTRY_104a90b0"

void __fastcall FUN_104a90b0(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x98) + 0x6c))(param_1 + 0x90);
  return;
}


// Reference entry 104a90d0; body size 23 bytes.
#line 1 "ENTRY_104a90d0"

void __fastcall FUN_104a90d0(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x98) + 0x70))(param_1 + 0x90);
  return;
}


// Reference entry 104aa940; body size 45 bytes.
#line 1 "ENTRY_104aa940"

void __stdcall FUN_104aa940(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_101f1cd0(), 0);
  if (cVar1 == '\0') {
    cVar1 = (char)(thunk_FUN_102d65b0(param_2), 0);
    if (cVar1 != '\0') {
      thunk_FUN_104aa9d0();
    }
  }
  return;
}


// Reference entry 104aa990; body size 23 bytes.
#line 1 "ENTRY_104aa990"

void __fastcall FUN_104aa990(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x94) + 0x6c))(param_1 + 0x90);
  return;
}


// Reference entry 104aa9b0; body size 23 bytes.
#line 1 "ENTRY_104aa9b0"

void __fastcall FUN_104aa9b0(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x94) + 0x70))(param_1 + 0x90);
  return;
}


// Reference entry 104acbf0; body size 41 bytes.
#line 1 "ENTRY_104acbf0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_104acbf0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 104ad3f0; body size 33 bytes.
#line 1 "ENTRY_104ad3f0"

void __fastcall FUN_104ad3f0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 104ad420; body size 33 bytes.
#line 1 "ENTRY_104ad420"

void __fastcall FUN_104ad420(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 104ad450; body size 33 bytes.
#line 1 "ENTRY_104ad450"

void __fastcall FUN_104ad450(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 104ad4b0; body size 33 bytes.
#line 1 "ENTRY_104ad4b0"

void __fastcall FUN_104ad4b0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 104ad4e0; body size 33 bytes.
#line 1 "ENTRY_104ad4e0"

void __fastcall FUN_104ad4e0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 104ad510; body size 33 bytes.
#line 1 "ENTRY_104ad510"

void __fastcall FUN_104ad510(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 104ad630; body size 18 bytes.
#line 1 "ENTRY_104ad630"

void __fastcall FUN_104ad630(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0x30);
  }
  return;
}


// Reference entry 104ad670; body size 37 bytes.
#line 1 "ENTRY_104ad670"

int * __fastcall FUN_104ad670(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 104ad6e0; body size 32 bytes.
#line 1 "ENTRY_104ad6e0"

undefined4 *  __stdcall FUN_104ad6e0(undefined4 param_1,SCStr *param_2)

{
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_2))->op_eq("SCIHousehold:onZoneGroupsChanged"), 0);
  if (bVar1) {
    thunk_FUN_104ae600();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 104ad9f0; body size 32 bytes.
#line 1 "ENTRY_104ad9f0"

undefined4 __thiscall Recovered_Bulk::m_FUN_104ad9f0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_104ad290();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68);
  }
  return (undefined4)(param_1);
}


// Reference entry 104ada20; body size 60 bytes.
#line 1 "ENTRY_104ada20"

int __thiscall Recovered_Bulk::m_FUN_104ada20(byte param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x2c), 0);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1 + 8));
    *(undefined4*)(param_1 + 0x2c) = (undefined4)(0);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x30);
  }
  return (int)(param_1);
}


// Reference entry 104adb70; body size 19 bytes.
#line 1 "ENTRY_104adb70"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_104adb70(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 104adbb0; body size 19 bytes.
#line 1 "ENTRY_104adbb0"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_104adbb0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 104adbe0; body size 19 bytes.
#line 1 "ENTRY_104adbe0"

void __thiscall Recovered_Bulk::m_FUN_104adbe0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable__Func_impl_no_alloc__lambda_d07c1d4f2481252533e80cc0f09a54c9__void_SCIOpGetAboutSonosString__unsigned_short_);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 104adca0; body size 21 bytes.
#line 1 "ENTRY_104adca0"

void __thiscall Recovered_Bulk::m_FUN_104adca0(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 104adcc0; body size 21 bytes.
#line 1 "ENTRY_104adcc0"

void __thiscall Recovered_Bulk::m_FUN_104adcc0(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 104adce0; body size 21 bytes.
#line 1 "ENTRY_104adce0"

void __thiscall Recovered_Bulk::m_FUN_104adce0(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 104add00; body size 21 bytes.
#line 1 "ENTRY_104add00"

void __thiscall Recovered_Bulk::m_FUN_104add00(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 104add20; body size 21 bytes.
#line 1 "ENTRY_104add20"

void __thiscall Recovered_Bulk::m_FUN_104add20(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 104add40; body size 21 bytes.
#line 1 "ENTRY_104add40"

void __thiscall Recovered_Bulk::m_FUN_104add40(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 104add60; body size 58 bytes.
#line 1 "ENTRY_104add60"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_104add60(char param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x2c), 0);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1 + 8));
    *(undefined4*)(param_1 + 0x2c) = (undefined4)(0);
  }
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,0x30);
  }
  return (undefined4 *)(param_2);
}


// Reference entry 104addb0; body size 33 bytes.
#line 1 "ENTRY_104addb0"

undefined4 *  __stdcall FUN_104addb0(undefined4 param_1,SCStr *param_2)

{
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_2))->op_eq("SCIHousehold:onZoneGroupsChanged"), 0);
  if (bVar1) {
    thunk_FUN_104ae600();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 104ade00; body size 36 bytes.
#line 1 "ENTRY_104ade00"

undefined4 *  __stdcall FUN_104ade00(unsigned int recovered_unused_stack_0,unsigned int recovered_unused_stack_1)

{
  thunk_FUN_101ed0d0();
  thunk_FUN_104aef40();
  thunk_FUN_104ae600();
  thunk_FUN_101ed5f0();
  return (undefined4 *)(recovered_unused_stack_0);
}


// Reference entry 104ade40; body size 25 bytes.
#line 1 "ENTRY_104ade40"

void __stdcall FUN_104ade40(undefined4 *param_1,undefined2 *param_2)

{
  FUN_104ab710((int)(*param_1),(int)(*param_2));
  return;
}


// Reference entry 104ade60; body size 51 bytes.
#line 1 "ENTRY_104ade60"

void __thiscall Recovered_Bulk::m_FUN_104ade60(undefined4 *param_2,ushort *param_3)
{
  int param_1 = (int )this;
  param_3 = (ushort *)((ushort *)(uint)*param_3);
  param_2 = (undefined4 *)((undefined4 *)*param_2);
  if (*(int **)(param_1 + 0x2c) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 8))(&param_2,&param_3);
    return;
  }
                    
  std::_Xbad_function_call();
}


// Reference entry 104adfb0; body size 19 bytes.
#line 1 "ENTRY_104adfb0"

void __thiscall Recovered_Bulk::m_FUN_104adfb0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable__Func_impl_no_alloc__lambda_1c21c4e3f9899b9cd3f537ee036eaed4__void_SCHousehold_const__SCStr_const__);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 104adff0; body size 19 bytes.
#line 1 "ENTRY_104adff0"

void __thiscall Recovered_Bulk::m_FUN_104adff0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std___Func_impl_no_alloc__lambda_af691c8564d15ff5374f5c3659c7a43d__void_SCIController__ViewId_SCIController__ViewMode_);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 104ae020; body size 19 bytes.
#line 1 "ENTRY_104ae020"

void __thiscall Recovered_Bulk::m_FUN_104ae020(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable__Func_impl_no_alloc__lambda_d07c1d4f2481252533e80cc0f09a54c9__void_SCIOpGetAboutSonosString__unsigned_short_);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 104ae380; body size 33 bytes.
#line 1 "ENTRY_104ae380"

void __fastcall FUN_104ae380(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 104ae3b0; body size 33 bytes.
#line 1 "ENTRY_104ae3b0"

void __fastcall FUN_104ae3b0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 104ae3e0; body size 33 bytes.
#line 1 "ENTRY_104ae3e0"

void __fastcall FUN_104ae3e0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 104aef10; body size 30 bytes.
#line 1 "ENTRY_104aef10"

void FUN_104aef10(void)

{
  thunk_FUN_101ed0d0();
  thunk_FUN_104aef40();
  thunk_FUN_104ae600();
  thunk_FUN_101ed5f0();
  return;
}


// Reference entry 104b0bb0; body size 45 bytes.
#line 1 "ENTRY_104b0bb0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_104b0bb0(byte param_2)
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


// Reference entry 104b0cc0; body size 21 bytes.
#line 1 "ENTRY_104b0cc0"

SCStr * __stdcall FUN_104b0cc0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCUnregisteredDeviceMessageDescriptor");
  return (SCStr *)(param_1);
}


// Reference entry 104b0ce0; body size 21 bytes.
#line 1 "ENTRY_104b0ce0"

SCStr * __stdcall FUN_104b0ce0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryDefault");
  return (SCStr *)(param_1);
}


// Reference entry 104b4360; body size 45 bytes.
#line 1 "ENTRY_104b4360"

void __stdcall FUN_104b4360(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_101f1cd0(), 0);
  if (cVar1 == '\0') {
    cVar1 = (char)(thunk_FUN_102d65b0(param_2), 0);
    if (cVar1 != '\0') {
      thunk_FUN_104b43f0();
    }
  }
  return;
}


// Reference entry 104b43b0; body size 23 bytes.
#line 1 "ENTRY_104b43b0"

void __fastcall FUN_104b43b0(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x94) + 0x6c))(param_1 + 0x90);
  return;
}


// Reference entry 104b43d0; body size 23 bytes.
#line 1 "ENTRY_104b43d0"

void __fastcall FUN_104b43d0(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x94) + 0x70))(param_1 + 0x90);
  return;
}


// Reference entry 104b5780; body size 41 bytes.
#line 1 "ENTRY_104b5780"

undefined4 * __thiscall Recovered_Bulk::m_FUN_104b5780(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 104b85c0; body size 33 bytes.
#line 1 "ENTRY_104b85c0"

void __fastcall FUN_104b85c0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 104b85f0; body size 33 bytes.
#line 1 "ENTRY_104b85f0"

void __fastcall FUN_104b85f0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 104b8690; body size 33 bytes.
#line 1 "ENTRY_104b8690"

void __fastcall FUN_104b8690(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 104b86c0; body size 33 bytes.
#line 1 "ENTRY_104b86c0"

void __fastcall FUN_104b86c0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 104b8850; body size 18 bytes.
#line 1 "ENTRY_104b8850"

void __fastcall FUN_104b8850(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0xc);
  }
  return;
}


// Reference entry 104b8870; body size 18 bytes.
#line 1 "ENTRY_104b8870"

void __fastcall FUN_104b8870(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0xc);
  }
  return;
}


// Reference entry 104b8bf0; body size 45 bytes.
#line 1 "ENTRY_104b8bf0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_104b8bf0(byte param_2)
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


// Reference entry 104b8d90; body size 19 bytes.
#line 1 "ENTRY_104b8d90"

void __thiscall Recovered_Bulk::m_FUN_104b8d90(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable__Func_impl_no_alloc__lambda_172b2c05f892882e8608afe6a235cd04__void_SCDateTimeManager_const__SCStr_const__);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 104b8e70; body size 19 bytes.
#line 1 "ENTRY_104b8e70"

void __thiscall Recovered_Bulk::m_FUN_104b8e70(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable__Func_impl_no_alloc__lambda_a9c217ea519d133fedc047d2675c092c__void_SCHousehold_const__SCStr_const__);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 104b8e90; body size 19 bytes.
#line 1 "ENTRY_104b8e90"

void __thiscall Recovered_Bulk::m_FUN_104b8e90(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable__Func_impl_no_alloc__lambda_f255800ffad6a7a5ed4e3b4b6463d721__void_SCStr_const__);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 104b8eb0; body size 21 bytes.
#line 1 "ENTRY_104b8eb0"

void  __thiscall Recovered_Bulk::m_FUN_104b8eb0(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
}


// Reference entry 104b8f60; body size 21 bytes.
#line 1 "ENTRY_104b8f60"

void __thiscall Recovered_Bulk::m_FUN_104b8f60(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 104b8f80; body size 21 bytes.
#line 1 "ENTRY_104b8f80"

void  __thiscall Recovered_Bulk::m_FUN_104b8f80(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
}


// Reference entry 104b8fa0; body size 21 bytes.
#line 1 "ENTRY_104b8fa0"

void  __thiscall Recovered_Bulk::m_FUN_104b8fa0(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
}


// Reference entry 104b8fc0; body size 21 bytes.
#line 1 "ENTRY_104b8fc0"

void __thiscall Recovered_Bulk::m_FUN_104b8fc0(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 104b8fe0; body size 57 bytes.
#line 1 "ENTRY_104b8fe0"

void __stdcall FUN_104b8fe0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_101a2c70("SCIDateTimeManager:onTimeStatusChanged",param_2), 0);
  if ((cVar1 == '\0') &&
     (cVar1 = (char)(thunk_FUN_101a2c70("SCIDateTimeManager:onTimeZoneChanged",param_2), 0), cVar1 == '\0')) {
    return;
  }
  thunk_FUN_104ba760();
  return;
}


// Reference entry 104b9030; body size 23 bytes.
#line 1 "ENTRY_104b9030"

void __fastcall FUN_104b9030(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  thunk_FUN_10cf3780((int)(*(undefined4 *)(param_1 + 4)));
  return;
}


// Reference entry 104b91b0; body size 19 bytes.
#line 1 "ENTRY_104b91b0"

void __thiscall Recovered_Bulk::m_FUN_104b91b0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable__Func_impl_no_alloc__lambda_172b2c05f892882e8608afe6a235cd04__void_SCDateTimeManager_const__SCStr_const__);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 104b9200; body size 19 bytes.
#line 1 "ENTRY_104b9200"

void __thiscall Recovered_Bulk::m_FUN_104b9200(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable__Func_impl_no_alloc__lambda_a9c217ea519d133fedc047d2675c092c__void_SCHousehold_const__SCStr_const__);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 104b9220; body size 19 bytes.
#line 1 "ENTRY_104b9220"

void __thiscall Recovered_Bulk::m_FUN_104b9220(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable__Func_impl_no_alloc__lambda_f255800ffad6a7a5ed4e3b4b6463d721__void_SCStr_const__);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 104b92e0; body size 33 bytes.
#line 1 "ENTRY_104b92e0"

void __fastcall FUN_104b92e0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 104b9310; body size 33 bytes.
#line 1 "ENTRY_104b9310"

void __fastcall FUN_104b9310(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_1)));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 104b9e00; body size 21 bytes.
#line 1 "ENTRY_104b9e00"

SCStr * __stdcall FUN_104b9e00(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("NumPlayersUnavailableMessageDescriptor");
  return (SCStr *)(param_1);
}


// Reference entry 104b9e20; body size 21 bytes.
#line 1 "ENTRY_104b9e20"

SCStr * __stdcall FUN_104b9e20(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryDefault");
  return (SCStr *)(param_1);
}


// Reference entry 104bcb00; body size 46 bytes.
#line 1 "ENTRY_104bcb00"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_104bcb00(uint param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  
  uVar1 = (uint)(*(uint *)(param_1 + 0x9c));
  if ((uVar1 <= param_2) && (param_2 < uVar1 + 4)) {
    (**(code **)(**(int **)(param_1 + 0x94) + 0x30))((&DAT_118a906c)[param_2 - uVar1]);
  }
  return (undefined4 *)(param_2);
}


// Reference entry 104bcb40; body size 34 bytes.
#line 1 "ENTRY_104bcb40"

void __stdcall FUN_104bcb40(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_102d65b0(param_2), 0);
  if (cVar1 != '\0') {
    thunk_FUN_104bd1e0();
  }
  return;
}


// Reference entry 104bcb70; body size 34 bytes.
#line 1 "ENTRY_104bcb70"

void __stdcall FUN_104bcb70(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_102d65b0(param_2), 0);
  if (cVar1 != '\0') {
    thunk_FUN_104bd050();
  }
  return;
}


// Reference entry 104bcd10; body size 23 bytes.
#line 1 "ENTRY_104bcd10"

void __fastcall FUN_104bcd10(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x94) + 0x6c))(param_1 + 0x90);
  return;
}


// Reference entry 104bcd30; body size 48 bytes.
#line 1 "ENTRY_104bcd30"

void __fastcall FUN_104bcd30(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(param_1 + 0x90);
  if (param_1 == 0) {
    iVar1 = (int)(0);
  }
  (**(code **)(**(int **)(param_1 + 0x94) + 0x6c))(iVar1);
  (**(code **)(**(int **)(param_1 + 0x9c) + 0x6c))(param_1 + 0x90);
  return;
}


// Reference entry 104bcd70; body size 23 bytes.
#line 1 "ENTRY_104bcd70"

void __fastcall FUN_104bcd70(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x94) + 0x70))(param_1 + 0x90);
  return;
}


// Reference entry 104bcd90; body size 48 bytes.
#line 1 "ENTRY_104bcd90"

void __fastcall FUN_104bcd90(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(param_1 + 0x90);
  if (param_1 == 0) {
    iVar1 = (int)(0);
  }
  (**(code **)(**(int **)(param_1 + 0x94) + 0x70))(iVar1);
  (**(code **)(**(int **)(param_1 + 0x9c) + 0x70))(param_1 + 0x90);
  return;
}


// Reference entry 104bdde0; body size 19 bytes.
#line 1 "ENTRY_104bdde0"

void __thiscall Recovered_Bulk::m_FUN_104bdde0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable__Func_impl_no_alloc__lambda_2d92c8bfb5f566b09cfe8eeec578b1fb__void_SCAddVoiceServiceWizard__);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 104bde00; body size 21 bytes.
#line 1 "ENTRY_104bde00"

void __thiscall Recovered_Bulk::m_FUN_104bde00(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 104bde20; body size 29 bytes.
#line 1 "ENTRY_104bde20"

void __fastcall FUN_104bde20(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  thunk_FUN_10d9e6c0((int)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x94)));
  return;
}


// Reference entry 104bde60; body size 19 bytes.
#line 1 "ENTRY_104bde60"

void __thiscall Recovered_Bulk::m_FUN_104bde60(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable__Func_impl_no_alloc__lambda_2d92c8bfb5f566b09cfe8eeec578b1fb__void_SCAddVoiceServiceWizard__);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 104c2520; body size 41 bytes.
#line 1 "ENTRY_104c2520"

undefined4 * __thiscall Recovered_Bulk::m_FUN_104c2520(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 104c2560; body size 41 bytes.
#line 1 "ENTRY_104c2560"

undefined4 * __thiscall Recovered_Bulk::m_FUN_104c2560(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 104c3990; body size 17 bytes.
#line 1 "ENTRY_104c3990"

void __fastcall FUN_104c3990(undefined4 *param_1)

{
  thunk_FUN_104c1380(*param_1,param_1[1],param_1[2]);
  return;
}


// Reference entry 104c39b0; body size 33 bytes.
#line 1 "ENTRY_104c39b0"

void __fastcall FUN_104c39b0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(param_1[1]);
  for (iVar2 = (int)(*param_1); iVar2 != iVar1; iVar2 = iVar2 + 0xc) {
    thunk_FUN_104c49a0();
  }
  return;
}


// Reference entry 104c4130; body size 32 bytes.
#line 1 "ENTRY_104c4130"

undefined4 __thiscall Recovered_Bulk::m_FUN_104c4130(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_104c49a0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4)(param_1);
}


// Reference entry 104c4840; body size 20 bytes.
#line 1 "ENTRY_104c4840"

void  __thiscall Recovered_Bulk::m_FUN_104c4840(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_104c1380(param_2,param_3,param_1);
}


// Reference entry 104c6100; body size 59 bytes.
#line 1 "ENTRY_104c6100"

void __stdcall FUN_104c6100(int param_1,int param_2)

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


// Reference entry 104c6f50; body size 21 bytes.
#line 1 "ENTRY_104c6f50"

SCStr * __stdcall FUN_104c6f50(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("DeleteVoiceAccount");
  return (SCStr *)(param_1);
}


// Reference entry 104c6f70; body size 21 bytes.
#line 1 "ENTRY_104c6f70"

SCStr * __stdcall FUN_104c6f70(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategorySettings");
  return (SCStr *)(param_1);
}


// Reference entry 104c9d30; body size 19 bytes.
#line 1 "ENTRY_104c9d30"

void __thiscall Recovered_Bulk::m_FUN_104c9d30(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable__Func_impl_no_alloc__lambda_711b61b9355f09fc7ded9be40dbc904b__void_SCHousehold_const__SCStr_const__);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 104c9d50; body size 21 bytes.
#line 1 "ENTRY_104c9d50"

void __thiscall Recovered_Bulk::m_FUN_104c9d50(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 104c9d70; body size 36 bytes.
#line 1 "ENTRY_104c9d70"

void __stdcall FUN_104c9d70(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_101a2c70("SCIHousehold:onZoneGroupsChanged",param_2), 0);
  if (cVar1 != '\0') {
    thunk_FUN_104ca270();
  }
  return;
}


// Reference entry 104c9db0; body size 19 bytes.
#line 1 "ENTRY_104c9db0"

void __thiscall Recovered_Bulk::m_FUN_104c9db0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable__Func_impl_no_alloc__lambda_711b61b9355f09fc7ded9be40dbc904b__void_SCHousehold_const__SCStr_const__);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 104cb780; body size 30 bytes.
#line 1 "ENTRY_104cb780"

void __thiscall Recovered_Bulk::m_FUN_104cb780(int param_2)
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


// Reference entry 104cb9a0; body size 24 bytes.
#line 1 "ENTRY_104cb9a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_104cb9a0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 104cc500; body size 60 bytes.
#line 1 "ENTRY_104cc500"

void __fastcall FUN_104cc500(int *param_1)

{ int stack0xfffffffc;
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


// Reference entry 104cc560; body size 60 bytes.
#line 1 "ENTRY_104cc560"

void __fastcall FUN_104cc560(int *param_1)

{ int stack0xfffffffc;
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


// Reference entry 104cd5c0; body size 32 bytes.
#line 1 "ENTRY_104cd5c0"

undefined4 __thiscall Recovered_Bulk::m_FUN_104cd5c0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_104ccb60();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 104cdd80; body size 61 bytes.
#line 1 "ENTRY_104cdd80"

void __thiscall Recovered_Bulk::m_FUN_104cdd80(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    uVar2 = (undefined4)(((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 104cddd0; body size 61 bytes.
#line 1 "ENTRY_104cddd0"

void __thiscall Recovered_Bulk::m_FUN_104cddd0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    uVar2 = (undefined4)(((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 104cde20; body size 61 bytes.
#line 1 "ENTRY_104cde20"

void __thiscall Recovered_Bulk::m_FUN_104cde20(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    uVar2 = (undefined4)(((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 104cde70; body size 30 bytes.
#line 1 "ENTRY_104cde70"

void __thiscall Recovered_Bulk::m_FUN_104cde70(int param_2)
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


// Reference entry 104d13a0; body size 59 bytes.
#line 1 "ENTRY_104d13a0"

void __stdcall FUN_104d13a0(int param_1,int param_2)

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


// Reference entry 104d1430; body size 21 bytes.
#line 1 "ENTRY_104d1430"

SCStr * __stdcall FUN_104d1430(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCDismissMessageAction");
  return (SCStr *)(param_1);
}


// Reference entry 104d1450; body size 43 bytes.
#line 1 "ENTRY_104d1450"

void __fastcall FUN_104d1450(undefined4 *param_1)

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


// Reference entry 104d1490; body size 28 bytes.
#line 1 "ENTRY_104d1490"

void __fastcall FUN_104d1490(int *param_1)

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


// Reference entry 104d2df0; body size 21 bytes.
#line 1 "ENTRY_104d2df0"

SCStr * __stdcall FUN_104d2df0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("DisplayHelpSheetAction");
  return (SCStr *)(param_1);
}


// Reference entry 104d3320; body size 21 bytes.
#line 1 "ENTRY_104d3320"

SCStr * __stdcall FUN_104d3320(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryDefault");
  return (SCStr *)(param_1);
}


// Reference entry 104d3340; body size 21 bytes.
#line 1 "ENTRY_104d3340"

SCStr * __stdcall FUN_104d3340(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryDefault");
  return (SCStr *)(param_1);
}


// Reference entry 104d37c0; body size 21 bytes.
#line 1 "ENTRY_104d37c0"

SCStr * __stdcall FUN_104d37c0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 104d3b80; body size 35 bytes.
#line 1 "ENTRY_104d3b80"

SCStr * __stdcall FUN_104d3b80(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2067,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 104d4000; body size 29 bytes.
#line 1 "ENTRY_104d4000"

void __stdcall FUN_104d4000(int *param_1)

{
  char *_Str;
  
  _Str = (char *)("");
  if ((char *)*param_1 != (char *)((0x0))) {
    _Str = (char *)((char *)*param_1);
  }
  atoi(_Str);
  return;
}


// Reference entry 104d5270; body size 54 bytes.
#line 1 "ENTRY_104d5270"

undefined4 * __fastcall FUN_104d5270(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBrowseGroupsInfo);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104d52e0; body size 33 bytes.
#line 1 "ENTRY_104d52e0"

void __fastcall FUN_104d52e0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(param_1[1]);
  for (iVar2 = (int)(*param_1); iVar2 != iVar1; iVar2 = iVar2 + 0x28) {
    thunk_FUN_104d53b0();
  }
  return;
}


// Reference entry 104d5490; body size 37 bytes.
#line 1 "ENTRY_104d5490"

void __fastcall FUN_104d5490(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBrowseGroupsInfo);
  thunk_FUN_104d5310();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 104d54e0; body size 45 bytes.
#line 1 "ENTRY_104d54e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_104d54e0(byte param_2)
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


// Reference entry 104d5520; body size 32 bytes.
#line 1 "ENTRY_104d5520"

undefined4 __thiscall Recovered_Bulk::m_FUN_104d5520(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_104d53b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x28);
  }
  return (undefined4)(param_1);
}


// Reference entry 104d5550; body size 59 bytes.
#line 1 "ENTRY_104d5550"

undefined4 * __thiscall Recovered_Bulk::m_FUN_104d5550(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBrowseGroupsInfo);
  thunk_FUN_104d5310();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x14);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 104d56b0; body size 35 bytes.
#line 1 "ENTRY_104d56b0"

void __stdcall FUN_104d56b0(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x28) {
    thunk_FUN_104d53b0();
  }
  return;
}


// Reference entry 104d5ca0; body size 46 bytes.
#line 1 "ENTRY_104d5ca0"

void __fastcall FUN_104d5ca0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(param_1[1]);
  iVar2 = (int)(*param_1);
  if (iVar2 != iVar1) {
    do {
      thunk_FUN_104d53b0();
      iVar2 = (int)(iVar2 + 0x28);
    } while (iVar2 != iVar1);
    param_1[1] = (int)(*param_1);
    return;
  }
  param_1[1] = (int)(iVar2);
  return;
}


// Reference entry 104d5ce0; body size 47 bytes.
#line 1 "ENTRY_104d5ce0"

void __fastcall FUN_104d5ce0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0xc));
  iVar2 = (int)(*(int *)(param_1 + 8));
  if (iVar2 != iVar1) {
    do {
      thunk_FUN_104d53b0();
      iVar2 = (int)(iVar2 + 0x28);
    } while (iVar2 != iVar1);
    *(undefined4*)(param_1 + 0xc) = (undefined4)(*(undefined4 *)(param_1 + 8));
    return;
  }
  *(int*)(param_1 + 0xc) = (int)(iVar2);
  return;
}


// Reference entry 104d5d20; body size 59 bytes.
#line 1 "ENTRY_104d5d20"

void __stdcall FUN_104d5d20(int param_1,int param_2)

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


// Reference entry 104d5e30; body size 54 bytes.
#line 1 "ENTRY_104d5e30"

undefined4 __thiscall Recovered_Bulk::m_FUN_104d5e30(uint param_2)
{
  int param_1 = (int )this;
  if (param_2 < (uint)((*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8)) / 0x28)) {
    return (undefined4)(*(undefined4 *)(*(int *)(param_1 + 8) + 0x1c + param_2 * 0x28));
  }
  return (undefined4)(7);
}


// Reference entry 104d61d0; body size 51 bytes.
#line 1 "ENTRY_104d61d0"

undefined4 __thiscall Recovered_Bulk::m_FUN_104d61d0(uint param_2)
{
  int param_1 = (int )this;
  if (param_2 < (uint)((*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8)) / 0x28)) {
    return (undefined4)(*(undefined4 *)(*(int *)(param_1 + 8) + 0xc + param_2 * 0x28));
  }
  return (undefined4)(0);
}


// Reference entry 104d6210; body size 24 bytes.
#line 1 "ENTRY_104d6210"

int __fastcall FUN_104d6210(int param_1)

{
  return (int)((*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8)) / 0x28);
}


// Reference entry 104d6250; body size 52 bytes.
#line 1 "ENTRY_104d6250"

undefined4 __thiscall Recovered_Bulk::m_FUN_104d6250(uint param_2)
{
  int param_1 = (int )this;
  if (param_2 < (uint)((*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8)) / 0x28)) {
    return (undefined4)(*(undefined4 *)(*(int *)(param_1 + 8) + 0x20 + param_2 * 0x28));
  }
  return (undefined4)(0xffffffff);
}


// Reference entry 104d6310; body size 51 bytes.
#line 1 "ENTRY_104d6310"

int __thiscall Recovered_Bulk::m_FUN_104d6310(uint param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8));
  if (param_2 < (uint)(iVar1 / 0x28)) {
    return (int)(((uint)((int3)(param_2 * 5 >> 8)) << 8 | (uint)(*(undefined1 *)(*(int *)(param_1 + 8) + 8 + param_2 * 0x28))));
  }
  return (int)((uint)(uint3)((ulonglong)((longlong)iVar1 * 0x66666667) >> 8) << 8);
}


// Reference entry 104d6600; body size 51 bytes.
#line 1 "ENTRY_104d6600"

int __thiscall Recovered_Bulk::m_FUN_104d6600(uint param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8));
  if (param_2 < (uint)(iVar1 / 0x28)) {
    return (int)(((uint)((int3)(param_2 * 5 >> 8)) << 8 | (uint)(*(undefined1 *)(*(int *)(param_1 + 8) + 0x10 + param_2 * 0x28))));
  }
  return (int)((uint)(uint3)((ulonglong)((longlong)iVar1 * 0x66666667) >> 8) << 8);
}


// Reference entry 104d6e20; body size 59 bytes.
#line 1 "ENTRY_104d6e20"

void __thiscall Recovered_Bulk::m_FUN_104d6e20(undefined4 *param_2)
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
      ((SCVtbl_1_0*)(piVar2))->v();
    }
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
    return;
  }
  thunk_FUN_104d68b0<>(puVar1,param_2);
  return;
}


// Reference entry 104d6f40; body size 24 bytes.
#line 1 "ENTRY_104d6f40"

undefined4 * __thiscall Recovered_Bulk::m_FUN_104d6f40(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 104d7620; body size 19 bytes.
#line 1 "ENTRY_104d7620"

void __fastcall FUN_104d7620(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 104d7640; body size 17 bytes.
#line 1 "ENTRY_104d7640"

void __fastcall FUN_104d7640(undefined4 *param_1)

{
  thunk_FUN_104d6780(*param_1,param_1[1],param_1[2]);
  return;
}


// Reference entry 104d7bb0; body size 45 bytes.
#line 1 "ENTRY_104d7bb0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_104d7bb0(byte param_2)
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


// Reference entry 104d7c80; body size 35 bytes.
#line 1 "ENTRY_104d7c80"

undefined4 __thiscall Recovered_Bulk::m_FUN_104d7c80(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_104d76e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x80);
  }
  return (undefined4)(param_1);
}


// Reference entry 104d7cb0; body size 45 bytes.
#line 1 "ENTRY_104d7cb0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_104d7cb0(byte param_2)
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


// Reference entry 104d7cf0; body size 33 bytes.
#line 1 "ENTRY_104d7cf0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_104d7cf0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 104d7e00; body size 19 bytes.
#line 1 "ENTRY_104d7e00"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_104d7e00(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 104d7e20; body size 21 bytes.
#line 1 "ENTRY_104d7e20"

void __thiscall Recovered_Bulk::m_FUN_104d7e20(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 104d7e40; body size 20 bytes.
#line 1 "ENTRY_104d7e40"

void __thiscall Recovered_Bulk::m_FUN_104d7e40(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_104d6780(param_2,param_3,param_1);
  return;
}


// Reference entry 104d7e60; body size 16 bytes.
#line 1 "ENTRY_104d7e60"

void __fastcall FUN_104d7e60(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  (**(code **)(**(int **)(param_1 + 4) + 0x110))(0);
  return;
}


// Reference entry 104d7ed0; body size 19 bytes.
#line 1 "ENTRY_104d7ed0"

void __thiscall Recovered_Bulk::m_FUN_104d7ed0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std___Func_impl_no_alloc__lambda_5af8eb5354b3c86e46e4d5b7165303b9__void_SCIController__ViewId_SCIController__ViewMode_);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 104d8190; body size 61 bytes.
#line 1 "ENTRY_104d8190"

void __thiscall Recovered_Bulk::m_FUN_104d8190(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    uVar2 = (undefined4)(((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 104d8270; body size 24 bytes.
#line 1 "ENTRY_104d8270"

void __fastcall FUN_104d8270(undefined4 *param_1)

{
  thunk_FUN_104d6780(*param_1,param_1[1],param_1);
  param_1[1] = (undefined4)(*param_1);
  return;
}


// Reference entry 104d8290; body size 60 bytes.
#line 1 "ENTRY_104d8290"

void __stdcall FUN_104d8290(int param_1,int param_2)

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


// Reference entry 104d82e0; body size 40 bytes.
#line 1 "ENTRY_104d82e0"

void __thiscall Recovered_Bulk::m_FUN_104d82e0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_102d65b0(param_3), 0);
  if ((cVar1 != '\0') && (*(int **)(param_1 + 8) != (int *)((0x0)))) {
    (**(code **)(**(int **)(param_1 + 8) + 0x110))(0);
  }
  return;
}


// Reference entry 104d8330; body size 51 bytes.
#line 1 "ENTRY_104d8330"

void __thiscall Recovered_Bulk::m_FUN_104d8330(undefined4 param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  SCStr aSStack_10 [4];
  int *piStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0x104d833d);
  cVar1 = (char)((**(code **)(*param_1 + 0xfc))(), 0);
  if (cVar1 == '\0') {
    uStack_8 = (undefined4)(param_2);
    piStack_c = (int *)(param_1);
    ((SCStr *)((uint)&aSStack_10))->int_allocRep("SCIBrowseDataSource:onBrowseChanged");
    thunk_FUN_103d65f0<>();
  }
  *(undefined1*)((int)param_1 + 0x41) = (undefined1)(0);
  return;
}


// Reference entry 104d8370; body size 51 bytes.
#line 1 "ENTRY_104d8370"

void __thiscall Recovered_Bulk::m_FUN_104d8370(undefined4 param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  SCStr aSStack_10 [4];
  int *piStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0x104d837d);
  cVar1 = (char)((**(code **)(*param_1 + 0xfc))(), 0);
  if (cVar1 == '\0') {
    uStack_8 = (undefined4)(param_2);
    piStack_c = (int *)(param_1);
    ((SCStr *)((uint)&aSStack_10))->int_allocRep("SCIBrowseDataSource:onBrowseChanged");
    thunk_FUN_103d63d0<>();
  }
  *(undefined1*)((int)param_1 + 0x41) = (undefined1)(0);
  return;
}


// Reference entry 104d8510; body size 21 bytes.
#line 1 "ENTRY_104d8510"

SCStr * __stdcall FUN_104d8510(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SMAPI");
  return (SCStr *)(param_1);
}


// Reference entry 104d8550; body size 21 bytes.
#line 1 "ENTRY_104d8550"

SCStr * __stdcall FUN_104d8550(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 104d8c80; body size 24 bytes.
#line 1 "ENTRY_104d8c80"

undefined4 __thiscall Recovered_Bulk::m_FUN_104d8c80(undefined4 param_2,undefined4 param_3,undefined4 param_4, unsigned int recovered_unused_stack_0)
{
  int *param_1 = (int *)this;
  ((SCVtbl_14_3*)(param_1))->v((int)(param_2),(int)(param_3),(int)(param_4));
  return (undefined4)(param_3);
}


// Reference entry 104d9010; body size 18 bytes.
#line 1 "ENTRY_104d9010"

undefined4 __stdcall FUN_104d9010(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(0);
  if (param_1 == 2) {
    uVar1 = (undefined4)(0x28);
  }
  return (undefined4)(uVar1);
}


// Reference entry 104d9030; body size 18 bytes.
#line 1 "ENTRY_104d9030"

undefined4 __stdcall FUN_104d9030(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(0);
  if (param_1 == 2) {
    uVar1 = (undefined4)(0x28);
  }
  return (undefined4)(uVar1);
}


// Reference entry 104d9270; body size 35 bytes.
#line 1 "ENTRY_104d9270"

SCStr * __stdcall FUN_104d9270(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x1af,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 104d9780; body size 33 bytes.
#line 1 "ENTRY_104d9780"

undefined4 __stdcall FUN_104d9780(undefined4 param_1){
  switch(param_1) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 6:
  case 7:
  case 8:
  case 10:
  case 0xb:
    return (undefined4)(1);
  default:
    return (undefined4)(0);
  }
}


// Reference entry 104d9cc0; body size 51 bytes.
#line 1 "ENTRY_104d9cc0"

void __fastcall FUN_104d9cc0(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x74) != 0) {
    piVar1 = (int *)(*(int **)(param_1 + 0x78), 0);
    if ((int *)(piVar1) != (int *)(0x0)) {
      *(undefined4*)(param_1 + 0x74) = (undefined4)(0);
      *(undefined4*)(param_1 + 0x78) = (undefined4)(0);
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4*)(param_1 + 0x74) = (undefined4)(0);
    *(undefined4*)(param_1 + 0x78) = (undefined4)(0);
  }
  return;
}


// Reference entry 104d9d00; body size 32 bytes.
#line 1 "ENTRY_104d9d00"

void __thiscall Recovered_Bulk::m_FUN_104d9d00(undefined4 param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  
  cVar1 = (char)(((SCVtbl_23_0*)(param_1))->v(), 0);
  if (cVar1 != '\0') {
    ((SCVtbl_69_1*)(param_1))->v((int)(param_2));
  }
  return;
}


// Reference entry 104d9d40; body size 59 bytes.
#line 1 "ENTRY_104d9d40"

void __thiscall Recovered_Bulk::m_FUN_104d9d40(undefined4 *param_2)
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
      ((SCVtbl_1_0*)(piVar2))->v();
    }
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
    return;
  }
  thunk_FUN_104d68b0<>(puVar1,param_2);
  return;
}


// Reference entry 104d9e10; body size 53 bytes.
#line 1 "ENTRY_104d9e10"

void __thiscall Recovered_Bulk::m_FUN_104d9e10(int param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  
  cVar1 = (char)(((SCVtbl_54_0*)(param_1))->v(), 0);
  if (cVar1 != '\0') {
    param_1[0x18] = (int)(param_2);
    cVar1 = (char)(((SCVtbl_23_0*)(param_1))->v(), 0);
    if (cVar1 != '\0') {
      ((SCVtbl_68_1*)(param_1))->v((int)(0));
    }
  }
  return;
}


// Reference entry 104da4a0; body size 41 bytes.
#line 1 "ENTRY_104da4a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_104da4a0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 104da4e0; body size 41 bytes.
#line 1 "ENTRY_104da4e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_104da4e0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 104da520; body size 41 bytes.
#line 1 "ENTRY_104da520"

undefined4 * __thiscall Recovered_Bulk::m_FUN_104da520(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 104da5f0; body size 19 bytes.
#line 1 "ENTRY_104da5f0"

void __fastcall FUN_104da5f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 104da860; body size 45 bytes.
#line 1 "ENTRY_104da860"

undefined4 * __thiscall Recovered_Bulk::m_FUN_104da860(byte param_2)
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


// Reference entry 104da990; body size 21 bytes.
#line 1 "ENTRY_104da990"

SCStr * __stdcall FUN_104da990(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 104dac40; body size 32 bytes.
#line 1 "ENTRY_104dac40"

SCStr * __stdcall FUN_104dac40(SCStr *param_1)

{
  ((SCStr *)(param_1))->m_op_ctor((SCStr *)&DAT_121a07b0);
  *(undefined4*)(param_1 + 4) = (undefined4)(DAT_121a07b4);
  return (SCStr *)(param_1);
}


// Reference entry 104dacb0; body size 20 bytes.
#line 1 "ENTRY_104dacb0"

undefined4 __thiscall Recovered_Bulk::m_FUN_104dacb0(undefined4 param_2,undefined4 param_3, unsigned int recovered_unused_stack_0)
{
  int *param_1 = (int *)this;
  ((SCVtbl_22_1*)(param_1))->v((int)(param_2));
  return (undefined4)(param_3);
}


// Reference entry 104dacd0; body size 21 bytes.
#line 1 "ENTRY_104dacd0"

SCStr * __stdcall FUN_104dacd0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 104daf10; body size 25 bytes.
#line 1 "ENTRY_104daf10"

int * __thiscall Recovered_Bulk::m_FUN_104daf10(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 4), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 104daf30; body size 30 bytes.
#line 1 "ENTRY_104daf30"

undefined4 __thiscall Recovered_Bulk::m_FUN_104daf30(undefined4 param_2)
{
  undefined4 param_1 = (undefined4 )this;
  SCLibrary *pSVar1;
  
  pSVar1 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton(), 0);
  (**(code **)(*(int *)pSVar1 + 0xc4))(param_2,param_1);
  return (undefined4)(param_2);
}


// Reference entry 104daf80; body size 25 bytes.
#line 1 "ENTRY_104daf80"

int * __thiscall Recovered_Bulk::m_FUN_104daf80(int *param_2)
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


// Reference entry 104db0d0; body size 21 bytes.
#line 1 "ENTRY_104db0d0"

SCStr * __stdcall FUN_104db0d0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 104db100; body size 32 bytes.
#line 1 "ENTRY_104db100"

SCStr * __stdcall FUN_104db100(SCStr *param_1, unsigned int recovered_unused_stack_0)

{
  ((SCStr *)(param_1))->m_op_ctor((SCStr *)&DAT_121a07b0);
  *(undefined4*)(param_1 + 4) = (undefined4)(DAT_121a07b4);
  return (SCStr *)(param_1);
}


// Reference entry 104db380; body size 36 bytes.
#line 1 "ENTRY_104db380"

undefined4 __thiscall Recovered_Bulk::m_FUN_104db380(undefined4 param_2)
{
  int *param_1 = (int *)this;
  undefined4 uVar1;
  
  switch(param_2) {
  case 0:
  case 1:
  case 4:
    return (undefined4)(1);
  case 2:
  case 5:
    uVar1 = (undefined4)((**(code **)(*param_1 + 0x40))(), 0);
    return (undefined4)(uVar1);
  default:
    return (undefined4)(0);
  }
}


// Reference entry 104db600; body size 21 bytes.
#line 1 "ENTRY_104db600"

SCStr * __stdcall FUN_104db600(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 104dc0f0; body size 19 bytes.
#line 1 "ENTRY_104dc0f0"

void __fastcall FUN_104dc0f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 104dc4b0; body size 32 bytes.
#line 1 "ENTRY_104dc4b0"

undefined4 __thiscall Recovered_Bulk::m_FUN_104dc4b0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_104dc060();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x14);
  }
  return (undefined4)(param_1);
}


// Reference entry 104dc4e0; body size 45 bytes.
#line 1 "ENTRY_104dc4e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_104dc4e0(byte param_2)
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


// Reference entry 104dc5c0; body size 45 bytes.
#line 1 "ENTRY_104dc5c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_104dc5c0(byte param_2)
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


// Reference entry 104dc600; body size 33 bytes.
#line 1 "ENTRY_104dc600"

undefined4 * __thiscall Recovered_Bulk::m_FUN_104dc600(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 104dccd0; body size 34 bytes.
#line 1 "ENTRY_104dccd0"

void __fastcall FUN_104dccd0(int param_1)

{
  if (*(char *)(param_1 + 0x30) != '\0') {
    thunk_FUN_112af4e0("SelectionManager",1,"deselectAll(): failed (locked)");
    return;
  }
  *(undefined4*)(param_1 + 0x24) = (undefined4)(*(undefined4 *)(param_1 + 0x20));
  return;
}


// Reference entry 104dce00; body size 37 bytes.
#line 1 "ENTRY_104dce00"

void __fastcall FUN_104dce00(int param_1)

{
  if ((*(int **)(param_1 + 0x14) != (int *)((0x0))) && (*(char *)(param_1 + 0x38) != '\0')) {
    (**(code **)(**(int **)(param_1 + 0x14) + 0x18))(*(undefined4 *)(param_1 + 0xc));
    *(undefined1*)(param_1 + 0x38) = (undefined1)(0);
    *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  }
  return;
}


// Reference entry 104dcfc0; body size 61 bytes.
#line 1 "ENTRY_104dcfc0"

undefined4 __thiscall Recovered_Bulk::m_FUN_104dcfc0(SCIndexRange *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)((int *)(param_1 + 0x2c));
  *piVar1 = (int)(*piVar1 + 1);
  if (*piVar1 < (int)((0))) {
    return (undefined4)(0);
  }
  if (*(uint *)(param_1 + 0x2c) < (uint)((*(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20) >> 3))) {
    ((SCIndexRange *)(param_2))->op_assign((SCIndexRange *)(*(int *)(param_1 + 0x20) + *(uint *)(param_1 + 0x2c) * 8));
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 104dd0e0; body size 33 bytes.
#line 1 "ENTRY_104dd0e0"

int __fastcall FUN_104dd0e0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = (int)(0);
  iVar3 = (int)(*(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20) >> 3);
  if (iVar3 != 0) {
    piVar2 = (int *)((int *)(*(int *)(param_1 + 0x20) + 4));
    do {
      iVar1 = (int)(iVar1 + *piVar2);
      piVar2 = (int *)(piVar2 + 2);
      iVar3 = (int)(iVar3 + -1);
    } while (iVar3 != 0);
  }
  return (int)(iVar1);
}


// Reference entry 104dd520; body size 19 bytes.
#line 1 "ENTRY_104dd520"

bool __fastcall FUN_104dd520(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 8) != (int *)((0x0))) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 8) + 0x18))(), 0);
    return (uint)(uVar1);
  }
  return (bool)0;
}


// Reference entry 104dd540; body size 41 bytes.
#line 1 "ENTRY_104dd540"

void __fastcall FUN_104dd540(int param_1)

{
  if (*(char *)(param_1 + 0x38) == '\0') {
    if (*(int **)(param_1 + 0x14) != (int *)((0x0))) {
      (**(code **)(**(int **)(param_1 + 0x14) + 0x14))(*(undefined4 *)(param_1 + 0xc));
    }
    *(undefined1*)(param_1 + 0x38) = (undefined1)(1);
  }
  *(undefined4*)(param_1 + 0x34) = (undefined4)(1);
  *(undefined1*)(param_1 + 0x30) = (undefined1)(1);
  return;
}


// Reference entry 104dd5a0; body size 22 bytes.
#line 1 "ENTRY_104dd5a0"

void __fastcall FUN_104dd5a0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int iVar1;
  
  if ((0 < *(int *)(param_1 + 0x2c)) &&
     (iVar1 = (int)(*(int *)(param_1 + 0x2c) + -1), *(int *)(param_1 + 0x2c) = iVar1, iVar1 == 0)) {
    *(undefined1*)(param_1 + 0x28) = (undefined1)(0);
  }
  return;
}


// Reference entry 104ddc30; body size 44 bytes.
#line 1 "ENTRY_104ddc30"

undefined4 * __thiscall Recovered_Bulk::m_FUN_104ddc30(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_111a4bc0((int)(0),(int)("SCSwfObjBCInternalListener"));
  param_1[6] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwfObjBCInternalListener);
  *(undefined1*)(param_1 + 5) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104ddf60; body size 33 bytes.
#line 1 "ENTRY_104ddf60"

void __fastcall FUN_104ddf60(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x14) == '\0') {
    iVar1 = (int)(thunk_FUN_11128910(), 0);
    if (iVar1 != 0) {
      FUN_10070892((int)(param_1));
    }
    *(undefined1*)(param_1 + 0x14) = (undefined1)(1);
  }
  return;
}


// Reference entry 104ddf90; body size 33 bytes.
#line 1 "ENTRY_104ddf90"

void __fastcall FUN_104ddf90(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x14) != '\0') {
    iVar1 = (int)(thunk_FUN_11128910(), 0);
    if (iVar1 != 0) {
      FUN_10065348((int)(param_1));
    }
    *(undefined1*)(param_1 + 0x14) = (undefined1)(0);
  }
  return;
}


// Reference entry 104ddfd0; body size 51 bytes.
#line 1 "ENTRY_104ddfd0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_104ddfd0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_111a4bc0((int)(0),(int)("SCSwfObjHHInternalListener"));
  param_1[6] = (undefined4)(param_2);
  param_1[7] = (undefined4)(param_3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwfObjHHInternalListener);
  *(undefined1*)(param_1 + 5) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104dfa90; body size 55 bytes.
#line 1 "ENTRY_104dfa90"

void __thiscall Recovered_Bulk::m_FUN_104dfa90(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  iVar1 = (int)(*(int *)(param_1 + 4));
  iVar2 = (int)(*param_2);
  if (iVar1 != 0) {
    iVar3 = (int)(*(int *)(param_1 + 0xc));
    piVar4 = (int *)(*(int **)(iVar2 + 4), 0);
    piVar5 = (int *)(*(int **)(param_1 + 8), 0);
    *(int**)(iVar3 + 4) = (int *)(piVar4);
    *piVar4 = (int)(iVar3);
    *piVar5 = (int)(iVar2);
    *(int**)(iVar2 + 4) = (int *)(piVar5);
    param_2[1] = (int)(param_2[1] + iVar1);
    *(undefined4*)(param_1 + 4) = (undefined4)(0);
  }
  return;
}


// Reference entry 104e0430; body size 40 bytes.
#line 1 "ENTRY_104e0430"

int __thiscall Recovered_Bulk::m_FUN_104e0430(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int iVar1;
  undefined1 local_8 [8];
  
  iVar1 = (int)(thunk_FUN_104e04f0((int)((uint)&local_8),(int)(param_2),(int)(param_3)), 0);
  iVar1 = (int)(*(int *)(iVar1 + 4));
  if (iVar1 == 0) {
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  return (int)(iVar1);
}


// Reference entry 104e0470; body size 40 bytes.
#line 1 "ENTRY_104e0470"

int __thiscall Recovered_Bulk::m_FUN_104e0470(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int iVar1;
  undefined1 local_8 [8];
  
  iVar1 = (int)(thunk_FUN_104e05c0((int)((uint)&local_8),(int)(param_2),(int)(param_3)), 0);
  iVar1 = (int)(*(int *)(iVar1 + 4));
  if (iVar1 == 0) {
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  return (int)(iVar1);
}


// Reference entry 104e04b0; body size 40 bytes.
#line 1 "ENTRY_104e04b0"

int __thiscall Recovered_Bulk::m_FUN_104e04b0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int iVar1;
  undefined1 local_8 [8];
  
  iVar1 = (int)(thunk_FUN_104e0690((int)((uint)&local_8),(int)(param_2),(int)(param_3)), 0);
  iVar1 = (int)(*(int *)(iVar1 + 4));
  if (iVar1 == 0) {
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  return (int)(iVar1);
}


// Reference entry 104e1d40; body size 59 bytes.
#line 1 "ENTRY_104e1d40"

void __thiscall Recovered_Bulk::m_FUN_104e1d40(undefined4 *param_2)
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
      ((SCVtbl_1_0*)(piVar2))->v();
    }
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
    return;
  }
  thunk_FUN_104dff70<>(puVar1,param_2);
  return;
}


// Reference entry 104e1d90; body size 59 bytes.
#line 1 "ENTRY_104e1d90"

void __thiscall Recovered_Bulk::m_FUN_104e1d90(undefined4 *param_2)
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
      ((SCVtbl_1_0*)(piVar2))->v();
    }
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
    return;
  }
  thunk_FUN_104e0170<>(puVar1,param_2);
  return;
}


// Reference entry 104e26c0; body size 41 bytes.
#line 1 "ENTRY_104e26c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_104e26c0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 104e2750; body size 41 bytes.
#line 1 "ENTRY_104e2750"

undefined4 * __thiscall Recovered_Bulk::m_FUN_104e2750(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 104e27b0; body size 24 bytes.
#line 1 "ENTRY_104e27b0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_104e27b0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 104e2dd0; body size 39 bytes.
#line 1 "ENTRY_104e2dd0"

undefined4 * __fastcall FUN_104e2dd0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 104e2e00; body size 39 bytes.
#line 1 "ENTRY_104e2e00"

undefined4 * __fastcall FUN_104e2e00(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 104e2e30; body size 39 bytes.
#line 1 "ENTRY_104e2e30"

undefined4 * __fastcall FUN_104e2e30(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 104e3740; body size 19 bytes.
#line 1 "ENTRY_104e3740"

void __fastcall FUN_104e3740(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x10);
  }
  return;
}


// Reference entry 104e3760; body size 19 bytes.
#line 1 "ENTRY_104e3760"

void __fastcall FUN_104e3760(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x14);
  }
  return;
}


// Reference entry 104e3780; body size 19 bytes.
#line 1 "ENTRY_104e3780"

void __fastcall FUN_104e3780(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 104e3b20; body size 38 bytes.
#line 1 "ENTRY_104e3b20"

void __fastcall FUN_104e3b20(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(0);
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_104e3e20();
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  if (iVar1 != 0) {
    thunk_FUN_1148a50e(iVar1,0x14);
  }
  return;
}


// Reference entry 104e3ca0; body size 17 bytes.
#line 1 "ENTRY_104e3ca0"

void __fastcall FUN_104e3ca0(undefined4 *param_1)

{
  thunk_FUN_104dfcb0(*param_1,param_1[1],param_1[2]);
  return;
}


// Reference entry 104e3cc0; body size 17 bytes.
#line 1 "ENTRY_104e3cc0"

void __fastcall FUN_104e3cc0(undefined4 *param_1)

{
  thunk_FUN_104dfd50(*param_1,param_1[1],param_1[2]);
  return;
}


// Reference entry 104e3ce0; body size 25 bytes.
#line 1 "ENTRY_104e3ce0"

void __fastcall FUN_104e3ce0(undefined4 *param_1)

{
  thunk_FUN_104e0760(param_1,*param_1);
  thunk_FUN_1148a50e(*param_1,0x10);
  return;
}


// Reference entry 104e3d60; body size 25 bytes.
#line 1 "ENTRY_104e3d60"

void __fastcall FUN_104e3d60(undefined4 *param_1)

{
  thunk_FUN_104e0880(param_1,*param_1);
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 104e40d0; body size 25 bytes.
#line 1 "ENTRY_104e40d0"

void __fastcall FUN_104e40d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCFavoriteAVTMetadataCB);
  thunk_FUN_10202e00();
  thunk_FUN_11202570();
  return;
}


// Reference entry 104e4750; body size 57 bytes.
#line 1 "ENTRY_104e4750"

int * __thiscall Recovered_Bulk::m_FUN_104e4750(char param_2)
{
  int *param_1 = (int *)this;
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)((uint *)(*param_1 + ((uint)param_1[1] >> 5) * 4));
  uVar2 = (uint)(1 << ((byte)param_1[1] & 0x1f));
  if (param_2 != '\0') {
    *puVar1 = (uint)(*puVar1 | uVar2);
    return (int *)(param_1);
  }
  *puVar1 = (uint)(~uVar2 & *puVar1);
  return (int *)(param_1);
}


// Reference entry 104e4970; body size 27 bytes.
#line 1 "ENTRY_104e4970"

int __stdcall FUN_104e4970(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_8 [8];
  
  piVar1 = (int *)((int *)thunk_FUN_104e0f40<>((uint)&local_8,param_1), 0);
  return (int)(*piVar1 + 0xc);
}


// Reference entry 104e49a0; body size 27 bytes.
#line 1 "ENTRY_104e49a0"

int __stdcall FUN_104e49a0(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_8 [8];
  
  piVar1 = (int *)((int *)thunk_FUN_104e11c0<>((uint)&local_8,param_1), 0);
  return (int)(*piVar1 + 0xc);
}


// Reference entry 104e49d0; body size 27 bytes.
#line 1 "ENTRY_104e49d0"

int __stdcall FUN_104e49d0(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_8 [8];
  
  piVar1 = (int *)((int *)thunk_FUN_104e0ca0<>((uint)&local_8,param_1), 0);
  return (int)(*piVar1 + 0xc);
}


// Reference entry 104e4e60; body size 32 bytes.
#line 1 "ENTRY_104e4e60"

undefined4 __thiscall Recovered_Bulk::m_FUN_104e4e60(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_104e3e20();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4)(param_1);
}


// Reference entry 104e4f50; body size 51 bytes.
#line 1 "ENTRY_104e4f50"

undefined4 * __thiscall Recovered_Bulk::m_FUN_104e4f50(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCFavoriteAVTMetadataCB);
  thunk_FUN_10202e00();
  thunk_FUN_11202570();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xa0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 104e4f90; body size 35 bytes.
#line 1 "ENTRY_104e4f90"

undefined4 __thiscall Recovered_Bulk::m_FUN_104e4f90(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_104e40f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x150);
  }
  return (undefined4)(param_1);
}


// Reference entry 104e4fc0; body size 35 bytes.
#line 1 "ENTRY_104e4fc0"

undefined4 __thiscall Recovered_Bulk::m_FUN_104e4fc0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_104e41c0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x264);
  }
  return (undefined4)(param_1);
}


// Reference entry 104e5100; body size 25 bytes.
#line 1 "ENTRY_104e5100"

void __fastcall FUN_104e5100(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x10), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 104e5120; body size 25 bytes.
#line 1 "ENTRY_104e5120"

void __fastcall FUN_104e5120(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x14), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 104e5140; body size 25 bytes.
#line 1 "ENTRY_104e5140"

void __fastcall FUN_104e5140(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x18), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 104e5bc0; body size 20 bytes.
#line 1 "ENTRY_104e5bc0"

void __thiscall Recovered_Bulk::m_FUN_104e5bc0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_104dfcb0(param_2,param_3,param_1);
  return;
}


// Reference entry 104e5be0; body size 20 bytes.
#line 1 "ENTRY_104e5be0"

void __thiscall Recovered_Bulk::m_FUN_104e5be0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_104dfd50(param_2,param_3,param_1);
  return;
}


// Reference entry 104e6ab0; body size 23 bytes.
#line 1 "ENTRY_104e6ab0"

void __fastcall FUN_104e6ab0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(thunk_FUN_104e5a60((int)(*(int *)(param_1 + 8) + 1)), 0);
  thunk_FUN_104e5f10(uVar1);
  return;
}


// Reference entry 104e6b80; body size 21 bytes.
#line 1 "ENTRY_104e6b80"

void __fastcall FUN_104e6b80(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(thunk_FUN_104e5a60((int)(*(undefined4 *)(param_1 + 8))), 0);
  thunk_FUN_104e5f10(uVar1);
  return;
}


// Reference entry 104e6df0; body size 25 bytes.
#line 1 "ENTRY_104e6df0"

void __fastcall FUN_104e6df0(undefined4 *param_1)

{
  thunk_FUN_104e0760(param_1,*param_1);
  thunk_FUN_1148a50e(*param_1,0x10);
  return;
}


// Reference entry 104e6e70; body size 25 bytes.
#line 1 "ENTRY_104e6e70"

void __fastcall FUN_104e6e70(undefined4 *param_1)

{
  thunk_FUN_104e0880(param_1,*param_1);
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 104e9b60; body size 32 bytes.
#line 1 "ENTRY_104e9b60"

void __fastcall FUN_104e9b60(int *param_1)

{
  thunk_FUN_104e0760(param_1,*param_1);
  *(int *)*param_1 = (int)(*param_1);
  *(int*)(*param_1 + 4) = (int)(*param_1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 104e9bf0; body size 32 bytes.
#line 1 "ENTRY_104e9bf0"

void __fastcall FUN_104e9bf0(int *param_1)

{
  thunk_FUN_104e0880(param_1,*param_1);
  *(int *)*param_1 = (int)(*param_1);
  *(int*)(*param_1 + 4) = (int)(*param_1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 104e9c20; body size 24 bytes.
#line 1 "ENTRY_104e9c20"

void __fastcall FUN_104e9c20(undefined4 *param_1)

{
  thunk_FUN_104dfcb0(*param_1,param_1[1],param_1);
  param_1[1] = (undefined4)(*param_1);
  return;
}


// Reference entry 104e9f10; body size 60 bytes.
#line 1 "ENTRY_104e9f10"

void __stdcall FUN_104e9f10(int param_1,int param_2)

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


// Reference entry 104e9f60; body size 60 bytes.
#line 1 "ENTRY_104e9f60"

void __stdcall FUN_104e9f60(int param_1,int param_2)

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


// Reference entry 104ea0a0; body size 21 bytes.
#line 1 "ENTRY_104ea0a0"

SCStr * __stdcall FUN_104ea0a0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCFavoritesManager");
  return (SCStr *)(param_1);
}


// Reference entry 104ea0c0; body size 43 bytes.
#line 1 "ENTRY_104ea0c0"

void __fastcall FUN_104ea0c0(undefined4 *param_1)

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


// Reference entry 104ea530; body size 35 bytes.
#line 1 "ENTRY_104ea530"

int __thiscall Recovered_Bulk::m_FUN_104ea530(int param_2)
{
  int param_1 = (int )this;
  if (0xb < param_2) {
    return (int)(0);
  }
  return (int)(*(int *)(param_1 + 0x3c + param_2 * 0xc) - *(int *)(param_1 + 0x38 + param_2 * 0xc) >> 3);
}


// Reference entry 104ec220; body size 51 bytes.
#line 1 "ENTRY_104ec220"

void __stdcall FUN_104ec220(SCStr *param_1,SCStr *param_2,unsigned int recovered_unused_stack_0)

{
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_1))->op_eq("RINCON_AssociatedZPUDN"), 0);
  if (bVar1) {
    bVar1 = (bool)(((SCStr *)(param_2))->op_eq("FV:2"), 0);
    if (bVar1) {
      thunk_FUN_104ecc10();
    }
  }
  return;
}


// Reference entry 104ec340; body size 39 bytes.
#line 1 "ENTRY_104ec340"

void __thiscall Recovered_Bulk::m_FUN_104ec340(int param_2)
{
  int param_1 = (int )this;
  if (*(int *)(param_1 + 0x248) == (int)(param_2)) {
    *(int*)(param_1 + 0x24c) = (int)(*(int *)(param_1 + 0x24c) + 1);
    *(undefined4*)(param_1 + 0x248) = (undefined4)(0);
    thunk_FUN_104ecc10();
  }
  return;
}


// Reference entry 104eca70; body size 59 bytes.
#line 1 "ENTRY_104eca70"

void __thiscall Recovered_Bulk::m_FUN_104eca70(undefined4 *param_2)
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
      ((SCVtbl_1_0*)(piVar2))->v();
    }
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
    return;
  }
  thunk_FUN_104dff70<>(puVar1,param_2);
  return;
}


// Reference entry 104ecac0; body size 59 bytes.
#line 1 "ENTRY_104ecac0"

void __thiscall Recovered_Bulk::m_FUN_104ecac0(undefined4 *param_2)
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
      ((SCVtbl_1_0*)(piVar2))->v();
    }
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
    return;
  }
  thunk_FUN_104e0170<>(puVar1,param_2);
  return;
}


// Reference entry 104ed650; body size 26 bytes.
#line 1 "ENTRY_104ed650"

void __fastcall FUN_104ed650(int param_1)

{
  if (*(char *)(param_1 + 0x161) == '\0') {
    thunk_FUN_104eae30();
  }
                    
                    
  (**(code **)(**(int **)(param_1 + 0x30) + 0x14))();
  return;
}


// Reference entry 104eda20; body size 45 bytes.
#line 1 "ENTRY_104eda20"

undefined4 * __thiscall Recovered_Bulk::m_FUN_104eda20(byte param_2)
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


// Reference entry 104eda60; body size 32 bytes.
#line 1 "ENTRY_104eda60"

undefined4 __thiscall Recovered_Bulk::m_FUN_104eda60(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_104ed870();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x2c);
  }
  return (undefined4)(param_1);
}


// Reference entry 104eda90; body size 33 bytes.
#line 1 "ENTRY_104eda90"

undefined4 * __thiscall Recovered_Bulk::m_FUN_104eda90(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 104edac0; body size 38 bytes.
#line 1 "ENTRY_104edac0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_104edac0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCInteractionActionContext);
  thunk_FUN_104ed870();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x2c);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 104ede50; body size 21 bytes.
#line 1 "ENTRY_104ede50"

SCStr * __stdcall FUN_104ede50(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCActionContext object");
  return (SCStr *)(param_1);
}


// Reference entry 104ede70; body size 43 bytes.
#line 1 "ENTRY_104ede70"

void __fastcall FUN_104ede70(undefined4 *param_1)

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


// Reference entry 104edeb0; body size 43 bytes.
#line 1 "ENTRY_104edeb0"

void __fastcall FUN_104edeb0(undefined4 *param_1)

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


// Reference entry 104ee000; body size 62 bytes.
#line 1 "ENTRY_104ee000"

void __fastcall FUN_104ee000(int *param_1)

{
  int *piVar1;
  
  ((SCVtbl_1_0*)(param_1))->v();
  if (param_1[2] != 0) {
    piVar1 = (int *)((int *)param_1[3]);
    if ((int *)(piVar1) != (int *)(0x0)) {
      param_1[2] = (int)(0);
      param_1[3] = (int)(0);
      ((SCVtbl_2_0*)(piVar1))->v();
    }
    param_1[2] = (int)(0);
    param_1[3] = (int)(0);
  }
                    
                    
  ((SCVtbl_2_0*)(param_1))->v();
  return;
}


// Reference entry 104ee0a0; body size 39 bytes.
#line 1 "ENTRY_104ee0a0"

int __fastcall FUN_104ee0a0(int param_1)

{
  int iVar1;
  
  if (*(int **)(param_1 + 8) != (int *)((0x0))) {
    iVar1 = (int)((**(code **)(**(int **)(param_1 + 8) + 0x14))(param_1), 0);
    if (iVar1 == 0) {
      thunk_FUN_104ee000();
    }
    return (int)(iVar1);
  }
  return (int)(0);
}


// Reference entry 104eefb0; body size 48 bytes.
#line 1 "ENTRY_104eefb0"

void __fastcall FUN_104eefb0(int param_1)

{
  int iVar1;
  
  *(undefined***)(*(int *)(*(int *)(param_1 + -0x50) + 4) + -0x50 + param_1) = (undefined **)((uint)&ghidra_vftable_std_basic_ostringstream);
  iVar1 = (int)(*(int *)(*(int *)(param_1 + -0x50) + 4));
  *(int*)(iVar1 + -0x54 + param_1) = (int)(iVar1 + -0x50);
  thunk_FUN_104eeff0();
                    
                    
  ((std::basic_ostream<> *)((basic_ostream<char,std::char_traits<char>> *)(param_1 + -0x48)))->m_op_dtor();
  return;
}


// Reference entry 104ef270; body size 56 bytes.
#line 1 "ENTRY_104ef270"

void __fastcall FUN_104ef270(int *param_1)

{
  basic_ios<char,std::char_traits<char>> *this_;
  
  this_ = (basic_ios<char,std::char_traits<char>> *)((basic_ios<char,std::char_traits<char>> *)(param_1 + 0x14));
  *(undefined***)(this_ + *(int *)(*param_1 + 4) + -0x50) = (undefined **)((uint)&ghidra_vftable_std_basic_ostringstream);
  *(int*)(this_ + *(int *)(*param_1 + 4) + -0x54) = (int)(*(int *)(*param_1 + 4) + -0x50);
  thunk_FUN_104eeff0();
  ((std::basic_ostream<> *)((basic_ostream<char,std::char_traits<char>> *)(param_1 + 2)))->m_op_dtor();
                    
                    
  ((std::basic_ios<> *)(this_))->m_op_dtor();
  return;
}


// Reference entry 104ef330; body size 32 bytes.
#line 1 "ENTRY_104ef330"

undefined4 __thiscall Recovered_Bulk::m_FUN_104ef330(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_104eeff0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x44);
  }
  return (undefined4)(param_1);
}


// Reference entry 104f8a40; body size 33 bytes.
#line 1 "ENTRY_104f8a40"

void __thiscall Recovered_Bulk::m_FUN_104f8a40(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_104f8a70((int)(param_2),(int)(*(undefined4 *)(*param_1 + 4)));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 104f8b50; body size 60 bytes.
#line 1 "ENTRY_104f8b50"

int __thiscall Recovered_Bulk::m_FUN_104f8b50(SCStr *param_2)
{
  int *param_1 = (int *)this;
  bool bVar1;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_104f8c40((int)((uint)&local_c),(int)(param_2));
  if ((*(char *)(local_4 + 0xd) == '\0') &&
     (bVar1 = (bool)(((SCStr *)(param_2))->op_lt((SCStr *)(local_4 + 0x10)), 0), !bVar1)) {
    return (int)(local_4);
  }
  return (int)(*param_1);
}


// Reference entry 104f97a0; body size 59 bytes.
#line 1 "ENTRY_104f97a0"

void __thiscall Recovered_Bulk::m_FUN_104f97a0(undefined4 *param_2)
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
      ((SCVtbl_1_0*)(piVar2))->v();
    }
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
    return;
  }
  thunk_FUN_104f8780<>(puVar1,param_2);
  return;
}


// Reference entry 104f9b30; body size 41 bytes.
#line 1 "ENTRY_104f9b30"

undefined4 * __thiscall Recovered_Bulk::m_FUN_104f9b30(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 104f9bf0; body size 41 bytes.
#line 1 "ENTRY_104f9bf0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_104f9bf0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 104f9c30; body size 41 bytes.
#line 1 "ENTRY_104f9c30"

undefined4 * __thiscall Recovered_Bulk::m_FUN_104f9c30(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 104f9ca0; body size 41 bytes.
#line 1 "ENTRY_104f9ca0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_104f9ca0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 104f9e70; body size 48 bytes.
#line 1 "ENTRY_104f9e70"

undefined4 * __fastcall FUN_104f9e70(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x1c), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 104fa0a0; body size 39 bytes.
#line 1 "ENTRY_104fa0a0"

undefined4 * __fastcall FUN_104fa0a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 104fa830; body size 19 bytes.
#line 1 "ENTRY_104fa830"

void __fastcall FUN_104fa830(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 104fab60; body size 60 bytes.
#line 1 "ENTRY_104fab60"

void __fastcall FUN_104fab60(int *param_1)

{ int stack0xfffffffc;
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


// Reference entry 104fabc0; body size 60 bytes.
#line 1 "ENTRY_104fabc0"

void __fastcall FUN_104fabc0(int *param_1)

{ int stack0xfffffffc;
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


// Reference entry 104fac20; body size 19 bytes.
#line 1 "ENTRY_104fac20"

void __fastcall FUN_104fac20(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x10);
  }
  return;
}


// Reference entry 104fac40; body size 19 bytes.
#line 1 "ENTRY_104fac40"

void __fastcall FUN_104fac40(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 104fade0; body size 28 bytes.
#line 1 "ENTRY_104fade0"

void __fastcall FUN_104fade0(int *param_1)

{
  thunk_FUN_104f8a70((int)(param_1),(int)(*(undefined4 *)(*param_1 + 4)));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 104faec0; body size 19 bytes.
#line 1 "ENTRY_104faec0"

void __fastcall FUN_104faec0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 104faef0; body size 17 bytes.
#line 1 "ENTRY_104faef0"

void __fastcall FUN_104faef0(undefined4 *param_1)

{
  thunk_FUN_104f8630(*param_1,param_1[1],param_1[2]);
  return;
}


// Reference entry 104faf10; body size 25 bytes.
#line 1 "ENTRY_104faf10"

void __fastcall FUN_104faf10(undefined4 *param_1)

{
  thunk_FUN_104f8cb0(param_1,*param_1);
  thunk_FUN_1148a50e(*param_1,0x10);
  return;
}


// Reference entry 104faf30; body size 28 bytes.
#line 1 "ENTRY_104faf30"

void __fastcall FUN_104faf30(int *param_1)

{
  thunk_FUN_104f8a70((int)(param_1),(int)(*(undefined4 *)(*param_1 + 4)));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 104fb850; body size 27 bytes.
#line 1 "ENTRY_104fb850"

int __stdcall FUN_104fb850(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_8 [8];
  
  piVar1 = (int *)((int *)thunk_FUN_104f8fb0<>((uint)&local_8,param_1), 0);
  return (int)(*piVar1 + 0xc);
}


// Reference entry 104fbb10; body size 38 bytes.
#line 1 "ENTRY_104fbb10"

undefined4 * __thiscall Recovered_Bulk::m_FUN_104fbb10(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 104fbb40; body size 45 bytes.
#line 1 "ENTRY_104fbb40"

undefined4 * __thiscall Recovered_Bulk::m_FUN_104fbb40(byte param_2)
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


// Reference entry 104fbd40; body size 32 bytes.
#line 1 "ENTRY_104fbd40"

undefined4 __thiscall Recovered_Bulk::m_FUN_104fbd40(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_104fb150();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x2c);
  }
  return (undefined4)(param_1);
}


// Reference entry 104fbd70; body size 32 bytes.
#line 1 "ENTRY_104fbd70"

undefined4 __thiscall Recovered_Bulk::m_FUN_104fbd70(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_104fb240();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x24);
  }
  return (undefined4)(param_1);
}


// Reference entry 104fbda0; body size 52 bytes.
#line 1 "ENTRY_104fbda0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_104fbda0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCContentSessionBrowse);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCContentSessionBrowse);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCContentSessionBrowse);
  thunk_FUN_104fb240();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x24);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 104fc010; body size 25 bytes.
#line 1 "ENTRY_104fc010"

void __fastcall FUN_104fc010(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x10), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 104fc030; body size 25 bytes.
#line 1 "ENTRY_104fc030"

void __fastcall FUN_104fc030(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x1c), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 104fc3b0; body size 20 bytes.
#line 1 "ENTRY_104fc3b0"

void __thiscall Recovered_Bulk::m_FUN_104fc3b0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_104f8630(param_2,param_3,param_1);
  return;
}


// Reference entry 104fcf30; body size 31 bytes.
#line 1 "ENTRY_104fcf30"

int * FUN_104fcf30(int *param_1)

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


// Reference entry 104fd1d0; body size 25 bytes.
#line 1 "ENTRY_104fd1d0"

void __fastcall FUN_104fd1d0(undefined4 *param_1)

{
  thunk_FUN_104f8cb0(param_1,*param_1);
  thunk_FUN_1148a50e(*param_1,0x10);
  return;
}


// Reference entry 104fd5b0; body size 61 bytes.
#line 1 "ENTRY_104fd5b0"

void __thiscall Recovered_Bulk::m_FUN_104fd5b0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    uVar2 = (undefined4)(((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 104fd600; body size 61 bytes.
#line 1 "ENTRY_104fd600"

void __thiscall Recovered_Bulk::m_FUN_104fd600(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    uVar2 = (undefined4)(((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 104fd650; body size 61 bytes.
#line 1 "ENTRY_104fd650"

void __thiscall Recovered_Bulk::m_FUN_104fd650(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    uVar2 = (undefined4)(((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 104fd890; body size 19 bytes.
#line 1 "ENTRY_104fd890"

uint __thiscall Recovered_Bulk::m_FUN_104fd890(SCStr *param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  
  uVar1 = (uint)(((SCStr *)(param_2))->hash(), 0);
  return (uint)(uVar1 & *(uint *)(param_1 + 0x18));
}


// Reference entry 104fd940; body size 33 bytes.
#line 1 "ENTRY_104fd940"

void __fastcall FUN_104fd940(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_104f8a70((int)(param_1),(int)(*(undefined4 *)(iVar1 + 4)));
  *(int*)(iVar1 + 4) = (int)(iVar1);
  *(int*)iVar1 = (int)((int)(iVar1));
  *(int*)(iVar1 + 8) = (int)(iVar1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 104fd970; body size 32 bytes.
#line 1 "ENTRY_104fd970"

void __fastcall FUN_104fd970(int *param_1)

{
  thunk_FUN_104f8cb0(param_1,*param_1);
  *(int *)*param_1 = (int)(*param_1);
  *(int*)(*param_1 + 4) = (int)(*param_1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 104fde60; body size 60 bytes.
#line 1 "ENTRY_104fde60"

void __stdcall FUN_104fde60(int param_1,int param_2)

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


// Reference entry 104ff720; body size 59 bytes.
#line 1 "ENTRY_104ff720"

void __thiscall Recovered_Bulk::m_FUN_104ff720(undefined4 *param_2)
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
      ((SCVtbl_1_0*)(piVar2))->v();
    }
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
    return;
  }
  thunk_FUN_104f8780<>(puVar1,param_2);
  return;
}


// Reference entry 104ff770; body size 60 bytes.
#line 1 "ENTRY_104ff770"

undefined4 * __thiscall Recovered_Bulk::m_FUN_104ff770(undefined4 *param_2,SCStr *param_3)
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


// Reference entry 104ff840; body size 60 bytes.
#line 1 "ENTRY_104ff840"

undefined4 * __thiscall Recovered_Bulk::m_FUN_104ff840(undefined4 *param_2,SCStr *param_3)
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


// Reference entry 104ffd30; body size 30 bytes.
#line 1 "ENTRY_104ffd30"

undefined4 __stdcall FUN_104ffd30(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_8 [8];
  
  piVar1 = (int *)((int *)thunk_FUN_104f8fb0<>((uint)&local_8,param_1), 0);
  return (undefined4)(((uint)((int3)((uint)*piVar1 >> 8)) << 8 | (uint)(*(undefined1 *)(*piVar1 + 0xc))));
}


// Reference entry 105000e0; body size 33 bytes.
#line 1 "ENTRY_105000e0"

void __thiscall Recovered_Bulk::m_FUN_105000e0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_10500160((int)(param_2),(int)(*(undefined4 *)(*param_1 + 4)));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 10500110; body size 57 bytes.
#line 1 "ENTRY_10500110"

void __stdcall FUN_10500110(undefined4 param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = (char)(*(char *)((int)param_2 + 0xd));
  while (cVar1 == '\0') {
    thunk_FUN_10500110((int)(param_1),(int)(param_2[2]));
    piVar2 = (int *)((int *)*param_2);
    thunk_FUN_1148a50e(param_2,0x18);
    param_2 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }
  return;
}


// Reference entry 105006c0; body size 51 bytes.
#line 1 "ENTRY_105006c0"

int * __thiscall Recovered_Bulk::m_FUN_105006c0(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  *param_1 = (int)(param_2);
  param_1[1] = (int)(0);
  if (param_2 != 0) {
    piVar1 = (int *)((int *)(**(code **)(*(int *)(param_2 + 0xa8) + 0xc))(), 0);
    param_1[1] = (int)((int)piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10500720; body size 24 bytes.
#line 1 "ENTRY_10500720"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10500720(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10500740; body size 24 bytes.
#line 1 "ENTRY_10500740"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10500740(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10500760; body size 48 bytes.
#line 1 "ENTRY_10500760"

undefined4 * __fastcall FUN_10500760(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 105007a0; body size 48 bytes.
#line 1 "ENTRY_105007a0"

undefined4 * __fastcall FUN_105007a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 10503090; body size 19 bytes.
#line 1 "ENTRY_10503090"

void __fastcall FUN_10503090(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 105030d0; body size 26 bytes.
#line 1 "ENTRY_105030d0"

void __fastcall FUN_105030d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10503240; body size 60 bytes.
#line 1 "ENTRY_10503240"

void __fastcall FUN_10503240(int *param_1)

{ int stack0xfffffffc;
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


// Reference entry 105032f0; body size 28 bytes.
#line 1 "ENTRY_105032f0"

void __fastcall FUN_105032f0(int *param_1)

{
  thunk_FUN_10500160((int)(param_1),(int)(*(undefined4 *)(*param_1 + 4)));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 10503330; body size 28 bytes.
#line 1 "ENTRY_10503330"

void __fastcall FUN_10503330(int *param_1)

{
  thunk_FUN_10500160((int)(param_1),(int)(*(undefined4 *)(*param_1 + 4)));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 10503690; body size 25 bytes.
#line 1 "ENTRY_10503690"

void __fastcall FUN_10503690(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCCPInfoListDataSource);
  thunk_FUN_10202e00();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDataSource);
  return;
}


// Reference entry 10503780; body size 50 bytes.
#line 1 "ENTRY_10503780"

void __fastcall FUN_10503780(undefined4 *param_1)

{
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCContentProviderInfoViewHeaderDataSource);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCContentProviderInfoViewHeaderDataSource);
  thunk_FUN_103d60a0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 105037c0; body size 25 bytes.
#line 1 "ENTRY_105037c0"

void __fastcall FUN_105037c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCCPInfoListDataSource);
  thunk_FUN_10202e00();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDataSource);
  return;
}


// Reference entry 10503910; body size 55 bytes.
#line 1 "ENTRY_10503910"

void __fastcall FUN_10503910(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCInfoTextViewDataSource);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCInfoTextViewDataSource);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  param_1[3] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  thunk_FUN_11240850();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDataSource);
  return;
}


// Reference entry 10503d30; body size 22 bytes.
#line 1 "ENTRY_10503d30"

void FUN_10503d30(void)

{
  thunk_FUN_10503c60();
  thunk_FUN_10503400();
  return;
}


// Reference entry 10503d50; body size 35 bytes.
#line 1 "ENTRY_10503d50"

void __fastcall FUN_10503d50(undefined4 *param_1)

{
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCInfoViewDynamicCPMenu);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCCPInfoListDataSource);
  thunk_FUN_10202e00();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDataSource);
  return;
}


// Reference entry 10503d80; body size 52 bytes.
#line 1 "ENTRY_10503d80"

void __fastcall FUN_10503d80(int param_1)

{
  *(undefined***)(param_1 + 0x1e8) = (undefined **)((uint)&ghidra_vftable_SCInfoViewDynamicCPMenu);
  *(undefined***)(param_1 + 0x140) = (undefined **)((uint)&ghidra_vftable_SCCPInfoListDataSource);
  thunk_FUN_10202e00();
  *(undefined***)(param_1 + 0x140) = (undefined **)((uint)&ghidra_vftable_RDataSource);
  thunk_FUN_105034f0();
  return;
}


// Reference entry 10503ef0; body size 22 bytes.
#line 1 "ENTRY_10503ef0"

void FUN_10503ef0(void)

{
  thunk_FUN_10503dd0();
  thunk_FUN_10504060();
  return;
}


// Reference entry 10504240; body size 22 bytes.
#line 1 "ENTRY_10504240"

void FUN_10504240(void)

{
  thunk_FUN_10504170();
  thunk_FUN_105035b0();
  return;
}


// Reference entry 10504260; body size 25 bytes.
#line 1 "ENTRY_10504260"

void __fastcall FUN_10504260(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCCPInfoListDataSource);
  thunk_FUN_10202e00();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDataSource);
  return;
}


// Reference entry 10504370; body size 25 bytes.
#line 1 "ENTRY_10504370"

void __fastcall FUN_10504370(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCCPInfoListDataSource);
  thunk_FUN_10202e00();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDataSource);
  return;
}


// Reference entry 10504810; body size 38 bytes.
#line 1 "ENTRY_10504810"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10504810(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10504840; body size 38 bytes.
#line 1 "ENTRY_10504840"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10504840(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10504870; body size 45 bytes.
#line 1 "ENTRY_10504870"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10504870(byte param_2)
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


// Reference entry 105048b0; body size 45 bytes.
#line 1 "ENTRY_105048b0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_105048b0(byte param_2)
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


// Reference entry 105048f0; body size 52 bytes.
#line 1 "ENTRY_105048f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_105048f0(byte param_2)
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


// Reference entry 10504940; body size 52 bytes.
#line 1 "ENTRY_10504940"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10504940(byte param_2)
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


// Reference entry 10504a10; body size 33 bytes.
#line 1 "ENTRY_10504a10"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10504a10(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDataSource);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10504a40; body size 33 bytes.
#line 1 "ENTRY_10504a40"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10504a40(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RAsyncDataSourceListener);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10504a70; body size 33 bytes.
#line 1 "ENTRY_10504a70"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10504a70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDataSource);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10504aa0; body size 35 bytes.
#line 1 "ENTRY_10504aa0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10504aa0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10503400();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x148);
  }
  return (undefined4)(param_1);
}


// Reference entry 10504ad0; body size 35 bytes.
#line 1 "ENTRY_10504ad0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10504ad0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_105034f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x140);
  }
  return (undefined4)(param_1);
}


// Reference entry 10504b00; body size 35 bytes.
#line 1 "ENTRY_10504b00"

undefined4 __thiscall Recovered_Bulk::m_FUN_10504b00(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_105035b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x140);
  }
  return (undefined4)(param_1);
}


// Reference entry 10504b30; body size 50 bytes.
#line 1 "ENTRY_10504b30"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10504b30(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCCPInfoListDataSource);
  thunk_FUN_10202e00();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDataSource);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xa8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10504b70; body size 35 bytes.
#line 1 "ENTRY_10504b70"

undefined4 __thiscall Recovered_Bulk::m_FUN_10504b70(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_105036b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x130);
  }
  return (undefined4)(param_1);
}


// Reference entry 10504c00; body size 50 bytes.
#line 1 "ENTRY_10504c00"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10504c00(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCCPInfoListDataSource);
  thunk_FUN_10202e00();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDataSource);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xa8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10504d70; body size 33 bytes.
#line 1 "ENTRY_10504d70"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10504d70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10504da0; body size 33 bytes.
#line 1 "ENTRY_10504da0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10504da0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10504e30; body size 33 bytes.
#line 1 "ENTRY_10504e30"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10504e30(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCInfoViewDynamicCPMenu);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10504f20; body size 32 bytes.
#line 1 "ENTRY_10504f20"

undefined4 __thiscall Recovered_Bulk::m_FUN_10504f20(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10503a10();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x2c);
  }
  return (undefined4)(param_1);
}


// Reference entry 10504f50; body size 35 bytes.
#line 1 "ENTRY_10504f50"

undefined4 __thiscall Recovered_Bulk::m_FUN_10504f50(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10db8460();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x858);
  }
  return (undefined4)(param_1);
}


// Reference entry 10504f80; body size 35 bytes.
#line 1 "ENTRY_10504f80"

undefined4 __thiscall Recovered_Bulk::m_FUN_10504f80(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10503af0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,200);
  }
  return (undefined4)(param_1);
}


// Reference entry 10505060; body size 48 bytes.
#line 1 "ENTRY_10505060"

undefined4 __thiscall Recovered_Bulk::m_FUN_10505060(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10503c60();
  thunk_FUN_10503400();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x200);
  }
  return (undefined4)(param_1);
}


// Reference entry 105050a0; body size 60 bytes.
#line 1 "ENTRY_105050a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_105050a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCInfoViewDynamicCPMenu);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCCPInfoListDataSource);
  thunk_FUN_10202e00();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDataSource);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xb0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10505160; body size 35 bytes.
#line 1 "ENTRY_10505160"

undefined4 __thiscall Recovered_Bulk::m_FUN_10505160(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10503dd0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xb8);
  }
  return (undefined4)(param_1);
}


// Reference entry 10505190; body size 48 bytes.
#line 1 "ENTRY_10505190"

undefined4 __thiscall Recovered_Bulk::m_FUN_10505190(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10503dd0();
  thunk_FUN_10504060();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x208);
  }
  return (undefined4)(param_1);
}


// Reference entry 10505340; body size 35 bytes.
#line 1 "ENTRY_10505340"

undefined4 __thiscall Recovered_Bulk::m_FUN_10505340(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10504060();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x150);
  }
  return (undefined4)(param_1);
}


// Reference entry 10505370; body size 48 bytes.
#line 1 "ENTRY_10505370"

undefined4 __thiscall Recovered_Bulk::m_FUN_10505370(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10504170();
  thunk_FUN_105035b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x1f8);
  }
  return (undefined4)(param_1);
}


// Reference entry 105056e0; body size 39 bytes.
#line 1 "ENTRY_105056e0"

undefined4 * __stdcall FUN_105056e0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined1 local_8 [8];
  
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_1113ecc0((int)((uint)&local_8),(int)("AVTransportURIMetaData")), 0);
  *param_1 = (undefined4)(*puVar1);
  param_1[1] = (undefined4)(puVar1[1]);
  return (undefined4 *)(param_1);
}


// Reference entry 105057b0; body size 39 bytes.
#line 1 "ENTRY_105057b0"

undefined4 * __stdcall FUN_105057b0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined1 local_8 [8];
  
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_1113ecc0((int)((uint)&local_8),(int)("CurrentTrackMetaData")), 0);
  *param_1 = (undefined4)(*puVar1);
  param_1[1] = (undefined4)(puVar1[1]);
  return (undefined4 *)(param_1);
}


// Reference entry 10505800; body size 39 bytes.
#line 1 "ENTRY_10505800"

undefined4 * __stdcall FUN_10505800(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined1 local_8 [8];
  
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_1113ecc0((int)((uint)&local_8),(int)("r:EnqueuedTransportURIMetaData")), 0);
  *param_1 = (undefined4)(*puVar1);
  param_1[1] = (undefined4)(puVar1[1]);
  return (undefined4 *)(param_1);
}


// Reference entry 10505b50; body size 48 bytes.
#line 1 "ENTRY_10505b50"

int __fastcall FUN_10505b50(int *param_1)

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


// Reference entry 10505b90; body size 61 bytes.
#line 1 "ENTRY_10505b90"

void __thiscall Recovered_Bulk::m_FUN_10505b90(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    uVar2 = (undefined4)(((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 10505d30; body size 50 bytes.
#line 1 "ENTRY_10505d30"

void __thiscall Recovered_Bulk::m_FUN_10505d30(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4)
{
  int param_1 = (int )this;
  int in_stack_00000010;
  int iStack_10;
  int iStack_c;
  undefined4 uStack_8;
  
  *(undefined1*)(param_1 + 0x14) = (undefined1)(1);
  if ((in_stack_00000010 != 0) && (iStack_c = (int)(*(int *)(param_1 + -0xa8)), iStack_c != 0)) {
    uStack_8 = (undefined4)(0);
    iStack_10 = (int)(param_1);
    ((SCStr *)((SCStr *)&iStack_10))->int_allocRep("SCIInfoViewHeaderDataSource:onChanged");
    thunk_FUN_103d65f0<>();
  }
  return;
}


// Reference entry 10505d70; body size 50 bytes.
#line 1 "ENTRY_10505d70"

void __thiscall Recovered_Bulk::m_FUN_10505d70(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4)
{
  int param_1 = (int )this;
  int in_stack_00000010;
  int iStack_10;
  int iStack_c;
  undefined4 uStack_8;
  
  *(undefined1*)(param_1 + 0x18) = (undefined1)(1);
  if ((in_stack_00000010 != 0) && (iStack_c = (int)(*(int *)(param_1 + -0xa8)), iStack_c != 0)) {
    uStack_8 = (undefined4)(0);
    iStack_10 = (int)(param_1);
    ((SCStr *)((SCStr *)&iStack_10))->int_allocRep("SCIInfoViewHeaderDataSource:onChanged");
    thunk_FUN_103d65f0<>();
  }
  return;
}


// Reference entry 105077d0; body size 39 bytes.
#line 1 "ENTRY_105077d0"

undefined4 __fastcall FUN_105077d0(int *param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  cVar1 = (char)(((SCVtbl_8_0*)(param_1))->v(), 0);
  if (cVar1 != '\0') {
    piVar2 = (int *)((int *)((SCVtbl_14_0*)(param_1))->v(), 0);
                    
                    
    uVar3 = (undefined4)(((SCVtbl_95_0*)(piVar2))->v(), 0);
    return (undefined4)(uVar3);
  }
  return (undefined4)(7);
}


// Reference entry 10507cd0; body size 18 bytes.
#line 1 "ENTRY_10507cd0"

SCStr * __stdcall FUN_10507cd0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep((char *)0x0);
  return (SCStr *)(param_1);
}


// Reference entry 10507f20; body size 23 bytes.
#line 1 "ENTRY_10507f20"

SCStr * __thiscall Recovered_Bulk::m_FUN_10507f20(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x134));
  return (SCStr *)(param_2);
}


// Reference entry 10507f40; body size 23 bytes.
#line 1 "ENTRY_10507f40"

SCStr * __thiscall Recovered_Bulk::m_FUN_10507f40(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x130));
  return (SCStr *)(param_2);
}


// Reference entry 10507f60; body size 23 bytes.
#line 1 "ENTRY_10507f60"

SCStr * __thiscall Recovered_Bulk::m_FUN_10507f60(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x134));
  return (SCStr *)(param_2);
}


// Reference entry 10508240; body size 18 bytes.
#line 1 "ENTRY_10508240"

SCStr * __stdcall FUN_10508240(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep((char *)0x0);
  return (SCStr *)(param_1);
}


// Reference entry 10508260; body size 23 bytes.
#line 1 "ENTRY_10508260"

SCStr * __thiscall Recovered_Bulk::m_FUN_10508260(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x130));
  return (SCStr *)(param_2);
}


// Reference entry 10508280; body size 23 bytes.
#line 1 "ENTRY_10508280"

SCStr * __thiscall Recovered_Bulk::m_FUN_10508280(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x134));
  return (SCStr *)(param_2);
}


// Reference entry 105082a0; body size 23 bytes.
#line 1 "ENTRY_105082a0"

SCStr * __thiscall Recovered_Bulk::m_FUN_105082a0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x1e4));
  return (SCStr *)(param_2);
}


// Reference entry 105082c0; body size 23 bytes.
#line 1 "ENTRY_105082c0"

SCStr * __thiscall Recovered_Bulk::m_FUN_105082c0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x1e4));
  return (SCStr *)(param_2);
}


// Reference entry 105088c0; body size 18 bytes.
#line 1 "ENTRY_105088c0"

SCStr * __stdcall FUN_105088c0(SCStr *param_1, unsigned int recovered_unused_stack_0)

{
  ((SCStr *)(param_1))->int_allocRep((char *)0x0);
  return (SCStr *)(param_1);
}


// Reference entry 105089e0; body size 18 bytes.
#line 1 "ENTRY_105089e0"

SCStr * __stdcall FUN_105089e0(SCStr *param_1, unsigned int recovered_unused_stack_0)

{
  ((SCStr *)(param_1))->int_allocRep((char *)0x0);
  return (SCStr *)(param_1);
}


// Reference entry 10508a00; body size 18 bytes.
#line 1 "ENTRY_10508a00"

SCStr * __stdcall FUN_10508a00(SCStr *param_1, unsigned int recovered_unused_stack_0)

{
  ((SCStr *)(param_1))->int_allocRep((char *)0x0);
  return (SCStr *)(param_1);
}


// Reference entry 10508ad0; body size 51 bytes.
#line 1 "ENTRY_10508ad0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10508ad0(SCStr *param_2,int param_3)
{
  int param_1 = (int )this;
  if (param_3 != 0) {
    ((SCStr *)(param_2))->int_allocRep((char *)0x0);
    return (SCStr *)(param_2);
  }
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x134));
  return (SCStr *)(param_2);
}


// Reference entry 105095e0; body size 49 bytes.
#line 1 "ENTRY_105095e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_105095e0(undefined4 *param_2,undefined4 *param_3)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  if (param_1[2] != 0) {
    piVar1 = (int *)((int *)((SCVtbl_14_0*)(param_1))->v(), 0);
    ((SCVtbl_97_1*)(piVar1))->v((int)(param_2));
    return (undefined4 *)(param_3);
  }
  *param_2 = (undefined4)(0);
  return (undefined4 *)(param_2);
}


// Reference entry 10509620; body size 37 bytes.
#line 1 "ENTRY_10509620"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10509620(undefined4 *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 0xb0));
  piVar1 = (int *)(*(int **)(param_1 + 0xb4), 0);
  param_2[1] = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 10509650; body size 20 bytes.
#line 1 "ENTRY_10509650"

SCStr * __thiscall Recovered_Bulk::m_FUN_10509650(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 8));
  return (SCStr *)(param_2);
}


// Reference entry 10509940; body size 24 bytes.
#line 1 "ENTRY_10509940"

undefined4 __fastcall FUN_10509940(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  if (param_1[2] != 0) {
    piVar1 = (int *)((int *)((SCVtbl_14_0*)(param_1))->v(), 0);
                    
                    
    uVar2 = (undefined4)(((SCVtbl_90_0*)(piVar1))->v(), 0);
    return (undefined4)(uVar2);
  }
  return (undefined4)(0);
}


// Reference entry 10509980; body size 23 bytes.
#line 1 "ENTRY_10509980"

undefined4 __thiscall Recovered_Bulk::m_FUN_10509980(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_102111f0(param_2,param_1 + 8);
  return (undefined4)(param_2);
}


// Reference entry 10509c60; body size 20 bytes.
#line 1 "ENTRY_10509c60"

SCStr * __thiscall Recovered_Bulk::m_FUN_10509c60(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0xc));
  return (SCStr *)(param_2);
}


// Reference entry 1050a980; body size 45 bytes.
#line 1 "ENTRY_1050a980"

bool __fastcall FUN_1050a980(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(char **)(param_1 + 0x13c), 0);
  if ((((((char *)(pcVar1) == (char *)(0x0)) || (*pcVar1 == (char)(('\0')))) ||
       (pcVar1 = (char *)(*(char **)(param_1 + 0x138), 0),(char *)( pcVar1) == (char *)(0x0))) || (*pcVar1 == (char)(('\0')))) &&
     (*(char *)(param_1 + 0x144) == '\0')) {
    return (bool)0;
  }
  return (uint)(((uint)((int3)((uint)pcVar1 >> 8)) << 8 | (uint)(1)));
}


// Reference entry 1050a9e0; body size 60 bytes.
#line 1 "ENTRY_1050a9e0"

bool __fastcall FUN_1050a9e0(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(char **)(param_1 + 0x140), 0);
  if ((((((char *)(pcVar1) == (char *)(0x0)) || (*pcVar1 == (char)(('\0')))) ||
       (pcVar1 = (char *)(*(char **)(param_1 + 0x13c), 0),(char *)( pcVar1) == (char *)(0x0))) ||
      (((*pcVar1 == (char)(('\0')) || (pcVar1 = (char *)(*(char **)(param_1 + 0x138), 0),(char *)( pcVar1) == (char *)(0x0))) ||
       (*pcVar1 == (char)(('\0')))))) && (*(char *)(param_1 + 0x148) == '\0')) {
    return (bool)0;
  }
  return (uint)(((uint)((int3)((uint)pcVar1 >> 8)) << 8 | (uint)(1)));
}


// Reference entry 1050aa40; body size 23 bytes.
#line 1 "ENTRY_1050aa40"

bool __fastcall FUN_1050aa40(int param_1)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_110a5ba0(param_1 + 8,"object.container"), 0);
  return (bool)(cVar1 == '\0');
}


// Reference entry 1050aac0; body size 17 bytes.
#line 1 "ENTRY_1050aac0"

void __fastcall FUN_1050aac0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)((SCVtbl_96_0*)(param_1))->v(), 0);
                    
                    
  ((SCVtbl_5_0*)(piVar1))->v();
  return;
}


// Reference entry 1050aae0; body size 33 bytes.
#line 1 "ENTRY_1050aae0"

undefined4 __fastcall FUN_1050aae0(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  if (param_1[2] != 0) {
    piVar2 = (int *)((int *)((SCVtbl_14_0*)(param_1))->v(), 0);
    cVar1 = (char)(((SCVtbl_89_0*)(piVar2))->v(), 0);
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 1050adb0; body size 47 bytes.
#line 1 "ENTRY_1050adb0"

void __fastcall FUN_1050adb0(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  thunk_FUN_104d98f0();
  cVar1 = (char)(((SCVtbl_23_0*)(param_1))->v(), 0);
  if (cVar1 == '\0') {
    piVar2 = (int *)(param_1 + 0x20);
    ((SCVtbl_96_1*)(param_1))->v((int)(piVar2));
    thunk_FUN_111a05c0((int)(piVar2));
  }
  return;
}


// Reference entry 1050adf0; body size 42 bytes.
#line 1 "ENTRY_1050adf0"

void __fastcall FUN_1050adf0(int *param_1)

{
  uint uVar1;
  
  thunk_FUN_104d9cc0();
  uVar1 = (uint)(-(uint)((int *)(param_1) != (int *)(0x0)) & (uint)(param_1 + 0x20));
  ((SCVtbl_96_1*)(param_1))->v((int)(uVar1));
  thunk_FUN_111a05e0((int)(uVar1));
  return;
}


// Reference entry 1050ae30; body size 63 bytes.
#line 1 "ENTRY_1050ae30"

void __thiscall Recovered_Bulk::m_FUN_1050ae30(int param_2, unsigned int recovered_unused_stack_0)
{
  int param_1 = (int )this;
  char cVar1;
  int iVar2;
  
  if (*(int **)(param_1 + 8) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 8) + 0xc))(), 0);
    if (cVar1 != '\0') {
      iVar2 = (int)((**(code **)(**(int **)(param_1 + 8) + 8))(), 0);
      goto LAB_1050ae52;
    }
  }
  iVar2 = (int)(*(int *)(param_1 + 0xc));
LAB_1050ae52:
  if (iVar2 == param_2) {
    *(undefined1*)(param_1 + 0x10) = (undefined1)(1);
    *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
    thunk_FUN_111a0620();
  }
  return;
}


// Reference entry 1050e590; body size 23 bytes.
#line 1 "ENTRY_1050e590"

void __stdcall FUN_1050e590(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_103d6930();
    return;
  }
  return;
}


// Reference entry 1050ea60; body size 30 bytes.
#line 1 "ENTRY_1050ea60"

void __thiscall Recovered_Bulk::m_FUN_1050ea60(int param_2)
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


// Reference entry 1050eb60; body size 41 bytes.
#line 1 "ENTRY_1050eb60"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1050eb60(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1050eba0; body size 41 bytes.
#line 1 "ENTRY_1050eba0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1050eba0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1050ebe0; body size 41 bytes.
#line 1 "ENTRY_1050ebe0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1050ebe0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1050ec40; body size 24 bytes.
#line 1 "ENTRY_1050ec40"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1050ec40(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1050fcf0; body size 60 bytes.
#line 1 "ENTRY_1050fcf0"

void __fastcall FUN_1050fcf0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + 2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCArray_SCPtr_SCIActionDescriptor___);
  thunk_FUN_101c42f0(*puVar1,param_1[3],puVar1);
  param_1[3] = (undefined4)(*puVar1);
  thunk_FUN_101c6ae0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1050fd60; body size 26 bytes.
#line 1 "ENTRY_1050fd60"

void __fastcall FUN_1050fd60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1050ff30; body size 60 bytes.
#line 1 "ENTRY_1050ff30"

void __fastcall FUN_1050ff30(int *param_1)

{ int stack0xfffffffc;
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


// Reference entry 1050ff90; body size 60 bytes.
#line 1 "ENTRY_1050ff90"

void __fastcall FUN_1050ff90(int *param_1)

{ int stack0xfffffffc;
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


// Reference entry 105106c0; body size 29 bytes.
#line 1 "ENTRY_105106c0"

void __fastcall FUN_105106c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCInfoViewHelper);
  thunk_FUN_10202e00();
  thunk_FUN_10202e00();
  return;
}


// Reference entry 105109f0; body size 52 bytes.
#line 1 "ENTRY_105109f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_105109f0(byte param_2)
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


// Reference entry 10510a40; body size 52 bytes.
#line 1 "ENTRY_10510a40"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10510a40(byte param_2)
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


// Reference entry 10510b40; body size 35 bytes.
#line 1 "ENTRY_10510b40"

undefined4 __thiscall Recovered_Bulk::m_FUN_10510b40(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10510170();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x260);
  }
  return (undefined4)(param_1);
}


// Reference entry 10510c40; body size 55 bytes.
#line 1 "ENTRY_10510c40"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10510c40(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCInfoViewHelper);
  thunk_FUN_10202e00();
  thunk_FUN_10202e00();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x140);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10510cb0; body size 48 bytes.
#line 1 "ENTRY_10510cb0"

int __fastcall FUN_10510cb0(int *param_1)

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


// Reference entry 10510d30; body size 30 bytes.
#line 1 "ENTRY_10510d30"

void __thiscall Recovered_Bulk::m_FUN_10510d30(int param_2)
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


// Reference entry 10510d60; body size 59 bytes.
#line 1 "ENTRY_10510d60"

void __thiscall Recovered_Bulk::m_FUN_10510d60(undefined4 *param_2)
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
      ((SCVtbl_1_0*)(piVar2))->v();
    }
    *(int*)(param_1 + 0xc) = (int)(*(int *)(param_1 + 0xc) + 8);
    return;
  }
  thunk_FUN_1026e620<>(puVar1,param_2);
  return;
}


// Reference entry 10510db0; body size 31 bytes.
#line 1 "ENTRY_10510db0"

void __thiscall Recovered_Bulk::m_FUN_10510db0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4)
{
  int param_1 = (int )this;
  undefined2 in_stack_00000014;
  
  *(undefined2*)(param_1 + 0x1c8) = (undefined2)(in_stack_00000014);
  (**(code **)(*(int *)(param_1 + -0x84) + 0x114))(0);
  return;
}


// Reference entry 10511170; body size 24 bytes.
#line 1 "ENTRY_10511170"

void __fastcall FUN_10511170(undefined4 *param_1)

{
  thunk_FUN_101c42f0(*param_1,param_1[1],param_1);
  param_1[1] = (undefined4)(*param_1);
  return;
}


// Reference entry 10513690; body size 43 bytes.
#line 1 "ENTRY_10513690"

void __fastcall FUN_10513690(undefined4 *param_1)

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


// Reference entry 105136d0; body size 28 bytes.
#line 1 "ENTRY_105136d0"

void __fastcall FUN_105136d0(int *param_1)

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


// Reference entry 10513930; body size 18 bytes.
#line 1 "ENTRY_10513930"

undefined4 __fastcall FUN_10513930(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x30) != (int *)((0x0))) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x30) + 0x34))(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(7);
}


// Reference entry 10513950; body size 50 bytes.
#line 1 "ENTRY_10513950"

SCStr * __thiscall Recovered_Bulk::m_FUN_10513950(SCStr *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x30) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x30) + 0x2c))(param_2,param_3);
    return (SCStr *)(param_2);
  }
  ((SCStr *)(param_2))->int_allocRep("");
  return (SCStr *)(param_2);
}


// Reference entry 10513990; body size 46 bytes.
#line 1 "ENTRY_10513990"

SCStr * __thiscall Recovered_Bulk::m_FUN_10513990(SCStr *param_2)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x30) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x30) + 0x30))(param_2);
    return (SCStr *)(param_2);
  }
  ((SCStr *)(param_2))->int_allocRep("");
  return (SCStr *)(param_2);
}


// Reference entry 10513af0; body size 23 bytes.
#line 1 "ENTRY_10513af0"

undefined4 __fastcall FUN_10513af0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x1c8) != (int *)((0x0))) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x1c8) + 0x38))(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(7);
}


// Reference entry 10514040; body size 21 bytes.
#line 1 "ENTRY_10514040"

undefined4 __fastcall FUN_10514040(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x21c) != (int *)((0x0))) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x21c) + 0x188))(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 10514290; body size 20 bytes.
#line 1 "ENTRY_10514290"

undefined4 __fastcall FUN_10514290(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x1c8) != (int *)((0x0))) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x1c8) + 0x18))(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 105142b0; body size 26 bytes.
#line 1 "ENTRY_105142b0"

undefined4 __fastcall FUN_105142b0(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10508f40(param_1 + 4), 0);
  if (iVar1 != 0) {
    return (undefined4)(0);
  }
  return (undefined4)(1);
}


// Reference entry 10515050; body size 40 bytes.
#line 1 "ENTRY_10515050"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10515050(undefined4 *param_2,undefined4 *param_3)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x30) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x30) + 0x24))(param_2);
    return (undefined4 *)(param_3);
  }
  *param_2 = (undefined4)(0);
  return (undefined4 *)(param_2);
}


// Reference entry 10515150; body size 18 bytes.
#line 1 "ENTRY_10515150"

undefined4 __fastcall FUN_10515150(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x1c8) != (int *)((0x0))) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x1c8) + 0x14))(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 10516880; body size 21 bytes.
#line 1 "ENTRY_10516880"

SCStr * __stdcall FUN_10516880(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 105168d0; body size 25 bytes.
#line 1 "ENTRY_105168d0"

int * __thiscall Recovered_Bulk::m_FUN_105168d0(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x68), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 105169a0; body size 20 bytes.
#line 1 "ENTRY_105169a0"

undefined4 __fastcall FUN_105169a0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x1c8) != (int *)((0x0))) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x1c8) + 0x3c))(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 105169c0; body size 39 bytes.
#line 1 "ENTRY_105169c0"

int * __thiscall Recovered_Bulk::m_FUN_105169c0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_1);
  *param_2 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  return (int *)(param_2);
}


// Reference entry 10516c90; body size 40 bytes.
#line 1 "ENTRY_10516c90"

int * __thiscall Recovered_Bulk::m_FUN_10516c90(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 4));
  *param_2 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  return (int *)(param_2);
}


// Reference entry 10516cd0; body size 21 bytes.
#line 1 "ENTRY_10516cd0"

void __fastcall FUN_10516cd0(int param_1)

{
  thunk_FUN_10509ca0(param_1 + 4,*(undefined1 *)(param_1 + 0x13d));
  return;
}


// Reference entry 10516e40; body size 22 bytes.
#line 1 "ENTRY_10516e40"

undefined4 __fastcall FUN_10516e40(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x1c8) != (int *)((0x0))) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x1c8) + 0x24))(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(1);
}


// Reference entry 10517030; body size 27 bytes.
#line 1 "ENTRY_10517030"

undefined4 __fastcall FUN_10517030(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x21c) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x21c) + 0x5c))(), 0);
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10517060; body size 24 bytes.
#line 1 "ENTRY_10517060"

undefined4 __fastcall FUN_10517060(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x30) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x30) + 0x20))(), 0);
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 105171a0; body size 27 bytes.
#line 1 "ENTRY_105171a0"

void __fastcall FUN_105171a0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  thunk_FUN_105120a0();
  (**(code **)(*(int *)(param_1 + -0x28) + 0x110))(0);
  return;
}


// Reference entry 105171d0; body size 28 bytes.
#line 1 "ENTRY_105171d0"

void __fastcall FUN_105171d0(int param_1)

{
  thunk_FUN_105120a0();
  (**(code **)(*(int *)(param_1 + -0x90) + 0x110))(0);
  return;
}


// Reference entry 1051a170; body size 52 bytes.
#line 1 "ENTRY_1051a170"

undefined4 __fastcall FUN_1051a170(int param_1)

{
  char cVar1;
  
  if ((*(short *)(param_1 + 0x24c) == 0) && (*(int **)(param_1 + 0x21c) != (int *)((0x0)))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x21c) + 0x94))(), 0);
    if (cVar1 != '\0') {
      thunk_FUN_10511190();
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 1051a4a0; body size 22 bytes.
#line 1 "ENTRY_1051a4a0"

bool __fastcall FUN_1051a4a0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 0x1c8) != (int *)((0x0))) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 0x1c8) + 0x28))(), 0);
    return (uint)(uVar1);
  }
  return (bool)0;
}


// Reference entry 1051a4c0; body size 35 bytes.
#line 1 "ENTRY_1051a4c0"

bool __fastcall FUN_1051a4c0(int param_1)

{
  char *_Str;
  ulong uVar1;
  
  _Str = (char *)(*(char **)(param_1 + 0xcc), 0);
  if (((char *)(_Str) != (char *)(0x0)) && (*_Str != (char)(('\0')))) {
    uVar1 = (ulong)(strtoul(_Str,(char **)0x0,10), 0);
    return (bool)((uVar1) & 1);
  }
  return (bool)0;
}


// Reference entry 1051b480; body size 23 bytes.
#line 1 "ENTRY_1051b480"

void __stdcall FUN_1051b480(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_103d6930();
    return;
  }
  return;
}


// Reference entry 1051b580; body size 30 bytes.
#line 1 "ENTRY_1051b580"

void __thiscall Recovered_Bulk::m_FUN_1051b580(int param_2)
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


// Reference entry 1051b880; body size 41 bytes.
#line 1 "ENTRY_1051b880"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1051b880(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1051d480; body size 54 bytes.
#line 1 "ENTRY_1051d480"

void FUN_1051d480(void)

{ int stack0xfffffffc;
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  thunk_FUN_111a36f0(DAT_12126b84 ^ (uint)&stack0xfffffffc);

  return;

 } catch (...) { }
}


// Reference entry 1051d610; body size 38 bytes.
#line 1 "ENTRY_1051d610"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1051d610(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1051d640; body size 38 bytes.
#line 1 "ENTRY_1051d640"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1051d640(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1051d670; body size 38 bytes.
#line 1 "ENTRY_1051d670"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1051d670(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1051d6a0; body size 38 bytes.
#line 1 "ENTRY_1051d6a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1051d6a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1051d6d0; body size 38 bytes.
#line 1 "ENTRY_1051d6d0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1051d6d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1051d700; body size 38 bytes.
#line 1 "ENTRY_1051d700"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1051d700(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1051d730; body size 38 bytes.
#line 1 "ENTRY_1051d730"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1051d730(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1051d760; body size 33 bytes.
#line 1 "ENTRY_1051d760"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1051d760(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RProgressInfoForSCOp);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1051d790; body size 35 bytes.
#line 1 "ENTRY_1051d790"

undefined4 __thiscall Recovered_Bulk::m_FUN_1051d790(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1051c870();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x98);
  }
  return (undefined4)(param_1);
}


// Reference entry 1051dc50; body size 35 bytes.
#line 1 "ENTRY_1051dc50"

undefined4 __thiscall Recovered_Bulk::m_FUN_1051dc50(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1051cf20();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd0);
  }
  return (undefined4)(param_1);
}


// Reference entry 1051dc80; body size 58 bytes.
#line 1 "ENTRY_1051dc80"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1051dc80(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTAddMultipleURIsToQueueAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTAddMultipleURIsToQueueAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTAddMultipleURIsToQueueAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7e0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1051dcd0; body size 33 bytes.
#line 1 "ENTRY_1051dcd0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1051dcd0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1051dd00; body size 52 bytes.
#line 1 "ENTRY_1051dd00"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1051dd00(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpWithProgressInfo);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpWithProgressInfo);
  param_1[0x12] = (undefined4)((uint)&ghidra_vftable_SCIObj);
  thunk_FUN_101b9ba0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x50);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1051e090; body size 30 bytes.
#line 1 "ENTRY_1051e090"

void __thiscall Recovered_Bulk::m_FUN_1051e090(int param_2)
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


// Reference entry 1051f960; body size 21 bytes.
#line 1 "ENTRY_1051f960"

SCStr * __stdcall FUN_1051f960(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCOpWithProgressInfo");
  return (SCStr *)(param_1);
}


// Reference entry 1051f980; body size 21 bytes.
#line 1 "ENTRY_1051f980"

SCStr * __stdcall FUN_1051f980(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCSelectedItemsAddToQueueAtIdxAction");
  return (SCStr *)(param_1);
}


// Reference entry 1051f9a0; body size 21 bytes.
#line 1 "ENTRY_1051f9a0"

SCStr * __stdcall FUN_1051f9a0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCSelectedItemsPlayNextAction");
  return (SCStr *)(param_1);
}


// Reference entry 1051f9c0; body size 21 bytes.
#line 1 "ENTRY_1051f9c0"

SCStr * __stdcall FUN_1051f9c0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCSelectedItemsPlayNowAction");
  return (SCStr *)(param_1);
}


// Reference entry 1051f9e0; body size 21 bytes.
#line 1 "ENTRY_1051f9e0"

SCStr * __stdcall FUN_1051f9e0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCSelectedItemsReplaceQueueAction");
  return (SCStr *)(param_1);
}


// Reference entry 1051fa00; body size 43 bytes.
#line 1 "ENTRY_1051fa00"

void __fastcall FUN_1051fa00(undefined4 *param_1)

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


// Reference entry 1051fa40; body size 43 bytes.
#line 1 "ENTRY_1051fa40"

void __fastcall FUN_1051fa40(undefined4 *param_1)

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


// Reference entry 105208d0; body size 35 bytes.
#line 1 "ENTRY_105208d0"

SCStr * __stdcall FUN_105208d0(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2229,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10520900; body size 35 bytes.
#line 1 "ENTRY_10520900"

SCStr * __stdcall FUN_10520900(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2229,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10520930; body size 35 bytes.
#line 1 "ENTRY_10520930"

SCStr * __stdcall FUN_10520930(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2228,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10520990; body size 35 bytes.
#line 1 "ENTRY_10520990"

SCStr * __stdcall FUN_10520990(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2227,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 105209f0; body size 18 bytes.
#line 1 "ENTRY_105209f0"

int __fastcall FUN_105209f0(int param_1)

{
  if (0 < *(int *)(param_1 + 0x50)) {
    return (int)((*(int *)(param_1 + 0x4c) * 100) / *(int *)(param_1 + 0x50));
  }
  return (int)(0);
}


// Reference entry 10523660; body size 60 bytes.
#line 1 "ENTRY_10523660"

void __thiscall Recovered_Bulk::m_FUN_10523660(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xb0) = (undefined4)(4000);
  thunk_FUN_10578900(param_2,param_1 + 0xb4,param_1 + 0xa8,(undefined4 *)(param_1 + 0xb0), param_1 + 0xac);
  *(undefined1*)(param_1 + 0xbc) = (undefined1)(1);
  return;
}


// Reference entry 105236b0; body size 60 bytes.
#line 1 "ENTRY_105236b0"

void __thiscall Recovered_Bulk::m_FUN_105236b0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xac) = (undefined4)(4000);
  thunk_FUN_10578900(param_2,param_1 + 0xb0,param_1 + 0xa4,(undefined4 *)(param_1 + 0xac), param_1 + 0xa8);
  *(undefined1*)(param_1 + 0xbc) = (undefined1)(1);
  return;
}


// Reference entry 105238c0; body size 44 bytes.
#line 1 "ENTRY_105238c0"

void __thiscall Recovered_Bulk::m_FUN_105238c0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xa4) = (undefined4)(4000);
  thunk_FUN_10578900(param_2,param_1 + 0xa8,param_1 + 0xa0,(undefined4 *)(param_1 + 0xa4),0);
  return;
}


// Reference entry 10523d10; body size 17 bytes.
#line 1 "ENTRY_10523d10"

void __stdcall FUN_10523d10(SCStr *param_1)

{
  ((SCStr *)(param_1))->op_eq("SCIBrowseItem:onItemChanged");
  return;
}


// Reference entry 10525980; body size 30 bytes.
#line 1 "ENTRY_10525980"

void __thiscall Recovered_Bulk::m_FUN_10525980(int param_2)
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


// Reference entry 105259b0; body size 30 bytes.
#line 1 "ENTRY_105259b0"

void __thiscall Recovered_Bulk::m_FUN_105259b0(int param_2)
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


// Reference entry 10525b50; body size 41 bytes.
#line 1 "ENTRY_10525b50"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10525b50(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10525c00; body size 41 bytes.
#line 1 "ENTRY_10525c00"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10525c00(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10525c40; body size 41 bytes.
#line 1 "ENTRY_10525c40"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10525c40(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10525ca0; body size 24 bytes.
#line 1 "ENTRY_10525ca0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10525ca0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1052ad80; body size 38 bytes.
#line 1 "ENTRY_1052ad80"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1052ad80(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1052adb0; body size 38 bytes.
#line 1 "ENTRY_1052adb0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1052adb0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1052ade0; body size 38 bytes.
#line 1 "ENTRY_1052ade0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1052ade0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1052ae10; body size 32 bytes.
#line 1 "ENTRY_1052ae10"

undefined4 __thiscall Recovered_Bulk::m_FUN_1052ae10(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10528dc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x14);
  }
  return (undefined4)(param_1);
}


// Reference entry 1052ae40; body size 33 bytes.
#line 1 "ENTRY_1052ae40"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1052ae40(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1052ae70; body size 27 bytes.
#line 1 "ENTRY_1052ae70"

undefined4 __thiscall Recovered_Bulk::m_FUN_1052ae70(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4)(param_1);
}


// Reference entry 1052aea0; body size 58 bytes.
#line 1 "ENTRY_1052aea0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1052aea0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpSPSetAccountNicknameXAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpSPSetAccountNicknameXAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpSPSetAccountNicknameXAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1052b200; body size 33 bytes.
#line 1 "ENTRY_1052b200"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1052b200(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1052b230; body size 33 bytes.
#line 1 "ENTRY_1052b230"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1052b230(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1052b4a0; body size 33 bytes.
#line 1 "ENTRY_1052b4a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1052b4a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1052bbf0; body size 33 bytes.
#line 1 "ENTRY_1052bbf0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1052bbf0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1052bfd0; body size 33 bytes.
#line 1 "ENTRY_1052bfd0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1052bfd0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x14);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1052c000; body size 33 bytes.
#line 1 "ENTRY_1052c000"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1052c000(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1052c210; body size 35 bytes.
#line 1 "ENTRY_1052c210"

undefined4 __thiscall Recovered_Bulk::m_FUN_1052c210(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1052a260();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe7c0);
  }
  return (undefined4)(param_1);
}


// Reference entry 1052c590; body size 45 bytes.
#line 1 "ENTRY_1052c590"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1052c590(byte param_2)
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


// Reference entry 1052c5d0; body size 33 bytes.
#line 1 "ENTRY_1052c5d0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1052c5d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1052c710; body size 33 bytes.
#line 1 "ENTRY_1052c710"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1052c710(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1052da20; body size 61 bytes.
#line 1 "ENTRY_1052da20"

void __thiscall Recovered_Bulk::m_FUN_1052da20(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    uVar2 = (undefined4)(((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 1052da70; body size 61 bytes.
#line 1 "ENTRY_1052da70"

void __thiscall Recovered_Bulk::m_FUN_1052da70(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    uVar2 = (undefined4)(((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 1052dac0; body size 61 bytes.
#line 1 "ENTRY_1052dac0"

void __thiscall Recovered_Bulk::m_FUN_1052dac0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    uVar2 = (undefined4)(((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 1052db10; body size 61 bytes.
#line 1 "ENTRY_1052db10"

void __thiscall Recovered_Bulk::m_FUN_1052db10(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    uVar2 = (undefined4)(((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 1052db60; body size 61 bytes.
#line 1 "ENTRY_1052db60"

void __thiscall Recovered_Bulk::m_FUN_1052db60(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    uVar2 = (undefined4)(((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 1052dbb0; body size 61 bytes.
#line 1 "ENTRY_1052dbb0"

void __thiscall Recovered_Bulk::m_FUN_1052dbb0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    uVar2 = (undefined4)(((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 1052dc00; body size 30 bytes.
#line 1 "ENTRY_1052dc00"

void __thiscall Recovered_Bulk::m_FUN_1052dc00(int param_2)
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


// Reference entry 1052dc30; body size 30 bytes.
#line 1 "ENTRY_1052dc30"

void __thiscall Recovered_Bulk::m_FUN_1052dc30(int param_2)
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


// Reference entry 1052dfd0; body size 24 bytes.
#line 1 "ENTRY_1052dfd0"

undefined4 __fastcall FUN_1052dfd0(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x1c) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x1c) + 0x1c))(), 0);
    if (cVar1 != '\0') {
      return (undefined4)(0);
    }
  }
  return (undefined4)(1);
}


// Reference entry 1052e200; body size 43 bytes.
#line 1 "ENTRY_1052e200"

int __fastcall FUN_1052e200(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)((*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0xc)) - 1);
  return (int)(*(int *)(*(int *)(param_1 + 4) + (uVar1 >> 2 & *(int *)(param_1 + 8) - 1U) * 4) + (uVar1 & 3) * 4);
}


// Reference entry 1052e5b0; body size 25 bytes.
#line 1 "ENTRY_1052e5b0"

int __fastcall FUN_1052e5b0(int param_1)

{
  short sVar1;
  uint3 uVar2;
  
  sVar1 = (short)(*(short *)(param_1 + 0x10));
  uVar2 = (uint3)((uint3)(byte)((ushort)sVar1 >> 8));
  if ((sVar1 != 0) && (sVar1 != 0x323)) {
    return (int)(((uint)(uVar2) << 8 | (uint)(1)));
  }
  return (int)((uint)uVar2 << 8);
}


// Reference entry 1052e790; body size 26 bytes.
#line 1 "ENTRY_1052e790"

bool __fastcall FUN_1052e790(int *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)((**(code **)(*param_1 + 0x68))(), 0);
  if ((char)uVar1 != '\0') {
    uVar1 = (uint)(thunk_FUN_10dd3060(), 0);
    return (uint)(uVar1);
  }
  return (bool)0;
}


// Reference entry 1052e820; body size 33 bytes.
#line 1 "ENTRY_1052e820"

void __fastcall FUN_1052e820(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x10) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x10) + 0x1c))(), 0);
    if (cVar1 != '\0') {
                    
                    
      (**(code **)(*(int *)(param_1 + 0xc) + 4))();
      return;
    }
  }
  return;
}


// Reference entry 1052e850; body size 60 bytes.
#line 1 "ENTRY_1052e850"

void __fastcall FUN_1052e850(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x78) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x78) + 0x1c))(), 0);
    if (cVar1 != '\0') {
      (**(code **)(*(int *)(param_1 + 0x74) + 4))();
    }
  }
  if (*(int **)(param_1 + 0x10) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x10) + 0x1c))(), 0);
    if (cVar1 != '\0') {
                    
                    
      (**(code **)(*(int *)(param_1 + 0xc) + 4))();
      return;
    }
  }
  return;
}


// Reference entry 1052e8b0; body size 33 bytes.
#line 1 "ENTRY_1052e8b0"

void __fastcall FUN_1052e8b0(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x10) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x10) + 0x1c))(), 0);
    if (cVar1 != '\0') {
                    
                    
      (**(code **)(*(int *)(param_1 + 0xc) + 4))();
      return;
    }
  }
  return;
}


// Reference entry 1052e8f0; body size 31 bytes.
#line 1 "ENTRY_1052e8f0"

undefined4 __fastcall FUN_1052e8f0(int *param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(*param_1 + 0x2c))(), 0);
  if ((cVar1 != '\0') && (param_1[0x25] == -1)) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 1052e9f0; body size 42 bytes.
#line 1 "ENTRY_1052e9f0"

undefined4 * __fastcall FUN_1052e9f0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0xc), 0);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    puVar1[1] = (undefined4)(param_1);
    puVar1[2] = (undefined4)(param_1);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceCompleteState);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1052fd10; body size 45 bytes.
#line 1 "ENTRY_1052fd10"

undefined4 * __fastcall FUN_1052fd10(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(operator_new(0xc), 0);
  if ((undefined4 *)(puVar2) != (undefined4 *)(0x0)) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
    puVar2[1] = (undefined4)(uVar1);
    puVar2[2] = (undefined4)(uVar1);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceCompleteState);
    return (undefined4 *)(puVar2);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1052fe50; body size 55 bytes.
#line 1 "ENTRY_1052fe50"

undefined4 * __fastcall FUN_1052fe50(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  *(undefined1*)(*(int *)(param_1 + 8) + 0xd1) = (undefined1)(1);
  puVar2 = (undefined4 *)(operator_new(0xc), 0);
  if ((undefined4 *)(puVar2) != (undefined4 *)(0x0)) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
    puVar2[1] = (undefined4)(uVar1);
    puVar2[2] = (undefined4)(uVar1);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceCompleteState);
    return (undefined4 *)(puVar2);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10531c00; body size 45 bytes.
#line 1 "ENTRY_10531c00"

undefined4 * __fastcall FUN_10531c00(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(operator_new(0xc), 0);
  if ((undefined4 *)(puVar2) != (undefined4 *)(0x0)) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
    puVar2[1] = (undefined4)(uVar1);
    puVar2[2] = (undefined4)(uVar1);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceCompleteState);
    return (undefined4 *)(puVar2);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10531dd0; body size 45 bytes.
#line 1 "ENTRY_10531dd0"

undefined4 * __fastcall FUN_10531dd0(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(operator_new(0xc), 0);
  if ((undefined4 *)(puVar2) != (undefined4 *)(0x0)) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
    puVar2[1] = (undefined4)(uVar1);
    puVar2[2] = (undefined4)(uVar1);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceCompleteState);
    return (undefined4 *)(puVar2);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10531e10; body size 45 bytes.
#line 1 "ENTRY_10531e10"

undefined4 * __fastcall FUN_10531e10(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(operator_new(0xc), 0);
  if ((undefined4 *)(puVar2) != (undefined4 *)(0x0)) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
    puVar2[1] = (undefined4)(uVar1);
    puVar2[2] = (undefined4)(uVar1);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceCompleteState);
    return (undefined4 *)(puVar2);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 105322f0; body size 55 bytes.
#line 1 "ENTRY_105322f0"

undefined4 * __fastcall FUN_105322f0(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  *(undefined1*)(*(int *)(param_1 + 8) + 0xd1) = (undefined1)(1);
  puVar2 = (undefined4 *)(operator_new(0xc), 0);
  if ((undefined4 *)(puVar2) != (undefined4 *)(0x0)) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
    puVar2[1] = (undefined4)(uVar1);
    puVar2[2] = (undefined4)(uVar1);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceCompleteState);
    return (undefined4 *)(puVar2);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 105327f0; body size 19 bytes.
#line 1 "ENTRY_105327f0"

undefined4 __stdcall FUN_105327f0(undefined4 param_1)

{
  createSCIntArray();
  return (undefined4)(param_1);
}


// Reference entry 10532df0; body size 43 bytes.
#line 1 "ENTRY_10532df0"

void __fastcall FUN_10532df0(undefined4 *param_1)

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


// Reference entry 10532e30; body size 43 bytes.
#line 1 "ENTRY_10532e30"

void __fastcall FUN_10532e30(undefined4 *param_1)

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


// Reference entry 10532e70; body size 28 bytes.
#line 1 "ENTRY_10532e70"

void __fastcall FUN_10532e70(int *param_1)

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


// Reference entry 10532ea0; body size 28 bytes.
#line 1 "ENTRY_10532ea0"

void __fastcall FUN_10532ea0(int *param_1)

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


// Reference entry 105330f0; body size 31 bytes.
#line 1 "ENTRY_105330f0"

void FUN_105330f0(void)

{
  SCStr aSStack_14 [8];
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(0);
  ((SCStr *)((uint)&aSStack_14))->int_allocRep("SCIWizard:onStateChanged");
  thunk_FUN_103d65f0<>();
  return;
}


// Reference entry 10533120; body size 31 bytes.
#line 1 "ENTRY_10533120"

void FUN_10533120(void)

{
  SCStr aSStack_14 [8];
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(0);
  ((SCStr *)((uint)&aSStack_14))->int_allocRep("SCIWizard:onStateTransitionsEnabled");
  thunk_FUN_103d65f0<>();
  return;
}


// Reference entry 10533150; body size 31 bytes.
#line 1 "ENTRY_10533150"

void FUN_10533150(void)

{
  SCStr aSStack_14 [8];
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(0);
  ((SCStr *)((uint)&aSStack_14))->int_allocRep("SCIWizard:onStateUpdate");
  thunk_FUN_103d65f0<>();
  return;
}


// Reference entry 10533c20; body size 26 bytes.
#line 1 "ENTRY_10533c20"

undefined4 __thiscall Recovered_Bulk::m_FUN_10533c20(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0xc4) + 0x60))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10534170; body size 21 bytes.
#line 1 "ENTRY_10534170"

SCStr * __stdcall FUN_10534170(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10534670; body size 48 bytes.
#line 1 "ENTRY_10534670"

SCStr * FUN_10534670(SCStr *param_1,int param_2)

{
  if (param_2 != 0) {
    ((SCStr *)(param_1))->int_allocRep("unknown");
    return (SCStr *)(param_1);
  }
  ((SCStr *)(param_1))->int_allocRep("default");
  return (SCStr *)(param_1);
}


// Reference entry 105349e0; body size 21 bytes.
#line 1 "ENTRY_105349e0"

SCStr * __stdcall FUN_105349e0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("MusicServiceLogin");
  return (SCStr *)(param_1);
}


// Reference entry 10534a20; body size 21 bytes.
#line 1 "ENTRY_10534a20"

SCStr * __stdcall FUN_10534a20(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("MusicServiceNickname");
  return (SCStr *)(param_1);
}


// Reference entry 10534a40; body size 21 bytes.
#line 1 "ENTRY_10534a40"

SCStr * __stdcall FUN_10534a40(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("MusicServicePassword");
  return (SCStr *)(param_1);
}


// Reference entry 10534b00; body size 21 bytes.
#line 1 "ENTRY_10534b00"

SCStr * __stdcall FUN_10534b00(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_MUSICSERVICE_ACCOUNTNEEDED");
  return (SCStr *)(param_1);
}


// Reference entry 10534b20; body size 21 bytes.
#line 1 "ENTRY_10534b20"

SCStr * __stdcall FUN_10534b20(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_MUSICSERVICE_INSTALLFAIL_APP_LINK");
  return (SCStr *)(param_1);
}


// Reference entry 10534b40; body size 21 bytes.
#line 1 "ENTRY_10534b40"

SCStr * __stdcall FUN_10534b40(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_MUSICSERVICE_CALLTOACTION_APP_LINK");
  return (SCStr *)(param_1);
}


// Reference entry 10534b60; body size 21 bytes.
#line 1 "ENTRY_10534b60"

SCStr * __stdcall FUN_10534b60(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_MUSICSERVICE_COMPLETE");
  return (SCStr *)(param_1);
}


// Reference entry 10534b80; body size 21 bytes.
#line 1 "ENTRY_10534b80"

SCStr * __stdcall FUN_10534b80(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_MUSICSERVICE_GET_APP_LINK_RETRY");
  return (SCStr *)(param_1);
}


// Reference entry 10534ba0; body size 21 bytes.
#line 1 "ENTRY_10534ba0"

SCStr * __stdcall FUN_10534ba0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_MUSICSERVICE_GET_LINK_CODE");
  return (SCStr *)(param_1);
}


// Reference entry 10534bc0; body size 21 bytes.
#line 1 "ENTRY_10534bc0"

SCStr * __stdcall FUN_10534bc0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_MUSICSERVICE_GET_SHARE_USAGE");
  return (SCStr *)(param_1);
}


// Reference entry 10534be0; body size 21 bytes.
#line 1 "ENTRY_10534be0"

SCStr * __stdcall FUN_10534be0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_MUSICSERVICE_INIT");
  return (SCStr *)(param_1);
}


// Reference entry 10534c00; body size 21 bytes.
#line 1 "ENTRY_10534c00"

SCStr * __stdcall FUN_10534c00(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_MUSICSERVICE_INTRO");
  return (SCStr *)(param_1);
}


// Reference entry 10534c20; body size 21 bytes.
#line 1 "ENTRY_10534c20"

SCStr * __stdcall FUN_10534c20(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_MUSICSERVICE_LAUNCH_APP_LINK");
  return (SCStr *)(param_1);
}


// Reference entry 10534c40; body size 21 bytes.
#line 1 "ENTRY_10534c40"

SCStr * __stdcall FUN_10534c40(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_MUSICSERVICE_LINK_CODE");
  return (SCStr *)(param_1);
}


// Reference entry 10534c60; body size 21 bytes.
#line 1 "ENTRY_10534c60"

SCStr * __stdcall FUN_10534c60(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_MUSICSERVICE_LIST");
  return (SCStr *)(param_1);
}


// Reference entry 10534c80; body size 21 bytes.
#line 1 "ENTRY_10534c80"

SCStr * __stdcall FUN_10534c80(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_MUSICSERVICE_LIST_WAITING");
  return (SCStr *)(param_1);
}


// Reference entry 10534ca0; body size 21 bytes.
#line 1 "ENTRY_10534ca0"

SCStr * __stdcall FUN_10534ca0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_MUSICSERVICE_LOAD_MS_INFO");
  return (SCStr *)(param_1);
}


// Reference entry 10534cc0; body size 21 bytes.
#line 1 "ENTRY_10534cc0"

SCStr * __stdcall FUN_10534cc0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_MUSICSERVICE_LOGINPASSWORD");
  return (SCStr *)(param_1);
}


// Reference entry 10534ce0; body size 21 bytes.
#line 1 "ENTRY_10534ce0"

SCStr * __stdcall FUN_10534ce0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_MUSICSERVICE_MULTIPLE_ACCOUNTS_ADDED");
  return (SCStr *)(param_1);
}


// Reference entry 10534d00; body size 21 bytes.
#line 1 "ENTRY_10534d00"

SCStr * __stdcall FUN_10534d00(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_MUSICSERVICE_PASSWORD");
  return (SCStr *)(param_1);
}


// Reference entry 10534d20; body size 21 bytes.
#line 1 "ENTRY_10534d20"

SCStr * __stdcall FUN_10534d20(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_MUSICSERVICE_PROMOTED_INTRO");
  return (SCStr *)(param_1);
}


// Reference entry 10534d40; body size 21 bytes.
#line 1 "ENTRY_10534d40"

SCStr * __stdcall FUN_10534d40(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_MUSICSERVICE_RESULT_ERROR");
  return (SCStr *)(param_1);
}


// Reference entry 10534d60; body size 21 bytes.
#line 1 "ENTRY_10534d60"

SCStr * __stdcall FUN_10534d60(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_MUSICSERVICE_RESULT");
  return (SCStr *)(param_1);
}


// Reference entry 10534d80; body size 21 bytes.
#line 1 "ENTRY_10534d80"

SCStr * __stdcall FUN_10534d80(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_MUSICSERVICE_RESULT_NICKNAME_ERROR");
  return (SCStr *)(param_1);
}


// Reference entry 10534da0; body size 21 bytes.
#line 1 "ENTRY_10534da0"

SCStr * __stdcall FUN_10534da0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_MUSICSERVICE_SET_NICKNAME");
  return (SCStr *)(param_1);
}


// Reference entry 10534dc0; body size 21 bytes.
#line 1 "ENTRY_10534dc0"

SCStr * __stdcall FUN_10534dc0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_MUSICSERVICE_SET_SHARE_USAGE");
  return (SCStr *)(param_1);
}


// Reference entry 10534de0; body size 21 bytes.
#line 1 "ENTRY_10534de0"

SCStr * __stdcall FUN_10534de0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_MUSICSERVICE_WORKING");
  return (SCStr *)(param_1);
}


// Reference entry 10534e00; body size 21 bytes.
#line 1 "ENTRY_10534e00"

SCStr * __stdcall FUN_10534e00(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_MUSICSERVICE_SERVICE_INFO_DOWNLOAD_RETRY");
  return (SCStr *)(param_1);
}


// Reference entry 10534e20; body size 21 bytes.
#line 1 "ENTRY_10534e20"

SCStr * __stdcall FUN_10534e20(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10534e40; body size 37 bytes.
#line 1 "ENTRY_10534e40"

bool __thiscall Recovered_Bulk::m_FUN_10534e40(int param_2)
{
  int param_1 = (int )this;
  char cVar1;
  
  if (param_2 != 0) {
    return (bool)(false);
  }
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 8) + 0x1e8))(), 0);
  return (bool)(cVar1 != '\0');
}


// Reference entry 10534f30; body size 21 bytes.
#line 1 "ENTRY_10534f30"

SCStr * __stdcall FUN_10534f30(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIStringInput");
  return (SCStr *)(param_1);
}


// Reference entry 10534f50; body size 21 bytes.
#line 1 "ENTRY_10534f50"

SCStr * __stdcall FUN_10534f50(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIStringInput");
  return (SCStr *)(param_1);
}


// Reference entry 10534f70; body size 21 bytes.
#line 1 "ENTRY_10534f70"

SCStr * __stdcall FUN_10534f70(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIStringInput");
  return (SCStr *)(param_1);
}


// Reference entry 10534fc0; body size 44 bytes.
#line 1 "ENTRY_10534fc0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10534fc0(SCStr *param_2)
{
  int param_1 = (int )this;
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0((*(char *)(param_1 + 8) == '\0') + 0x2065,&DAT_11882ff0), 0);
  ((SCStr *)(param_2))->int_allocRep(pcVar1);
  return (SCStr *)(param_2);
}


// Reference entry 10535000; body size 35 bytes.
#line 1 "ENTRY_10535000"

SCStr * __stdcall FUN_10535000(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2ba,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10535380; body size 28 bytes.
#line 1 "ENTRY_10535380"

int * __thiscall Recovered_Bulk::m_FUN_10535380(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0xb4), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10535630; body size 26 bytes.
#line 1 "ENTRY_10535630"

undefined4 __thiscall Recovered_Bulk::m_FUN_10535630(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0xc4) + 0x6c))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10535770; body size 26 bytes.
#line 1 "ENTRY_10535770"

undefined4 __thiscall Recovered_Bulk::m_FUN_10535770(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0xc4) + 0x48))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 105357c0; body size 29 bytes.
#line 1 "ENTRY_105357c0"

undefined4 __thiscall Recovered_Bulk::m_FUN_105357c0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0xc4) + 0x84))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 105358a0; body size 38 bytes.
#line 1 "ENTRY_105358a0"

undefined4 FUN_105358a0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (int)(thunk_FUN_110c2c60(), 0);
  if (iVar1 != 0) {
    uVar2 = (undefined4)(thunk_FUN_10533e90(), 0);
    uVar2 = (undefined4)(thunk_FUN_110c1f30((int)(uVar2)), 0);
    return (undefined4)(uVar2);
  }
  return (undefined4)(0);
}


// Reference entry 10535900; body size 21 bytes.
#line 1 "ENTRY_10535900"

SCStr * __stdcall FUN_10535900(SCStr *param_1, unsigned int recovered_unused_stack_0)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10535a50; body size 19 bytes.
#line 1 "ENTRY_10535a50"

undefined4 __stdcall FUN_10535a50(undefined4 param_1)

{
  createPropertyBag();
  return (undefined4)(param_1);
}


// Reference entry 10535a90; body size 28 bytes.
#line 1 "ENTRY_10535a90"

int * __thiscall Recovered_Bulk::m_FUN_10535a90(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0xbc), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10535ae0; body size 37 bytes.
#line 1 "ENTRY_10535ae0"

int * __thiscall Recovered_Bulk::m_FUN_10535ae0(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0xe0), 0);
  if ((int *)(piVar1) == (int *)(0x0)) {
    *param_2 = (int)(0);
    return (int *)(param_2);
  }
  *param_2 = (int)((int)piVar1);
  (**(code **)(*piVar1 + 4))();
  return (int *)(param_2);
}


// Reference entry 10535d30; body size 37 bytes.
#line 1 "ENTRY_10535d30"

int * __thiscall Recovered_Bulk::m_FUN_10535d30(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0xd8), 0);
  if ((int *)(piVar1) == (int *)(0x0)) {
    *param_2 = (int)(0);
    return (int *)(param_2);
  }
  *param_2 = (int)((int)piVar1);
  (**(code **)(*piVar1 + 4))();
  return (int *)(param_2);
}


// Reference entry 105361f0; body size 26 bytes.
#line 1 "ENTRY_105361f0"

undefined4 __thiscall Recovered_Bulk::m_FUN_105361f0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0xc4) + 0x54))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10536220; body size 26 bytes.
#line 1 "ENTRY_10536220"

undefined4 __thiscall Recovered_Bulk::m_FUN_10536220(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0xc4) + 0x18))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10536250; body size 25 bytes.
#line 1 "ENTRY_10536250"

SCStr * __thiscall Recovered_Bulk::m_FUN_10536250(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(*(int *)(param_1 + 8) + 0xf8));
  return (SCStr *)(param_2);
}


// Reference entry 10536270; body size 25 bytes.
#line 1 "ENTRY_10536270"

SCStr * __thiscall Recovered_Bulk::m_FUN_10536270(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(*(int *)(param_1 + 8) + 0x100));
  return (SCStr *)(param_2);
}


// Reference entry 10536290; body size 25 bytes.
#line 1 "ENTRY_10536290"

SCStr * __thiscall Recovered_Bulk::m_FUN_10536290(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(*(int *)(param_1 + 8) + 0xfc));
  return (SCStr *)(param_2);
}


// Reference entry 10536850; body size 21 bytes.
#line 1 "ENTRY_10536850"

SCStr * __stdcall FUN_10536850(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10536a00; body size 21 bytes.
#line 1 "ENTRY_10536a00"

SCStr * __stdcall FUN_10536a00(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 1053d150; body size 21 bytes.
#line 1 "ENTRY_1053d150"

SCStr * __stdcall FUN_1053d150(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("MusicServiceWizard");
  return (SCStr *)(param_1);
}


// Reference entry 1053dbc0; body size 46 bytes.
#line 1 "ENTRY_1053dbc0"

void __fastcall FUN_1053dbc0(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x14) + 8))();
  if (*(int *)(param_1 + 0x30) != 0) {
    thunk_FUN_104dec20();
    if (*(undefined4 **)(param_1 + 0x30) != (undefined4 *)((0x0))) {
      (**(code **)**(undefined4 **)(param_1 + 0x30))(1);
    }
    *(undefined4*)(param_1 + 0x30) = (undefined4)(0);
  }
  return;
}


// Reference entry 1053dc00; body size 56 bytes.
#line 1 "ENTRY_1053dc00"

undefined4 __fastcall FUN_1053dc00(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x68) == 0) {
    return (undefined4)(0);
  }
  uVar1 = (uint)((*(int *)(param_1 + 0x68) + *(int *)(param_1 + 100)) - 1);
  return (undefined4)(*(undefined4 *) (*(int *)(*(int *)(param_1 + 0x5c) + (uVar1 >> 2 & *(int *)(param_1 + 0x60) - 1U) * 4) + (uVar1 & 3) * 4));
}


// Reference entry 1053e3e0; body size 56 bytes.
#line 1 "ENTRY_1053e3e0"

undefined4 __fastcall FUN_1053e3e0(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x68) == 0) {
    return (undefined4)(0);
  }
  uVar1 = (uint)((*(int *)(param_1 + 0x68) + *(int *)(param_1 + 100)) - 1);
  return (undefined4)(*(undefined4 *) (*(int *)(*(int *)(param_1 + 0x5c) + (uVar1 >> 2 & *(int *)(param_1 + 0x60) - 1U) * 4) + (uVar1 & 3) * 4));
}


// Reference entry 1053f5b0; body size 21 bytes.
#line 1 "ENTRY_1053f5b0"

void __fastcall FUN_1053f5b0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(thunk_FUN_1059d5a0<>(0x9c4), 0);
  *(undefined4*)(param_1 + 0x2c) = (undefined4)(uVar1);
  return;
}


// Reference entry 1053f5d0; body size 21 bytes.
#line 1 "ENTRY_1053f5d0"

void __fastcall FUN_1053f5d0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(thunk_FUN_1059d5a0<>(5000), 0);
  *(undefined4*)(param_1 + 0x2c) = (undefined4)(uVar1);
  return;
}


// Reference entry 1053f5f0; body size 28 bytes.
#line 1 "ENTRY_1053f5f0"

void __fastcall FUN_1053f5f0(int param_1)

{
  if (*(int *)(param_1 + 0x2c) != 0) {
    thunk_FUN_1059d940((int)(*(int *)(param_1 + 0x2c)));
    *(undefined4*)(param_1 + 0x2c) = (undefined4)(0);
  }
  return;
}


// Reference entry 1053f620; body size 28 bytes.
#line 1 "ENTRY_1053f620"

void __fastcall FUN_1053f620(int param_1)

{
  if (*(int *)(param_1 + 0x2c) != 0) {
    thunk_FUN_1059d940((int)(*(int *)(param_1 + 0x2c)));
    *(undefined4*)(param_1 + 0x2c) = (undefined4)(0);
  }
  return;
}


// Reference entry 10541030; body size 16 bytes.
#line 1 "ENTRY_10541030"

void __fastcall FUN_10541030(int param_1)

{
                    
                    
  (**(code **)(**(int **)(param_1 + 0xc4) + 0x9c))();
  return;
}


// Reference entry 10541090; body size 43 bytes.
#line 1 "ENTRY_10541090"

bool __fastcall FUN_10541090(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (uint)(((SCVtbl_21_0*)(param_1))->v(), 0);
  if (uVar1 == 1) {
    iVar2 = (int)(((SCVtbl_23_0*)(param_1))->v(), 0);
    uVar1 = (uint)((*(uint *)(iVar2 + 4) & 0x7f) - 1 & 0xfffffffe);
    if (uVar1 == 10) {
      return (uint)(1);
    }
  }
  return (bool)0;
}


// Reference entry 10541290; body size 33 bytes.
#line 1 "ENTRY_10541290"

undefined4 __fastcall FUN_10541290(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (undefined4)(0);
  if (*(int **)(param_1 + 0xd8) != (int *)((0x0))) {
    iVar2 = (int)((**(code **)(**(int **)(param_1 + 0xd8) + 0x38))(), 0);
    if ((iVar2 != 2) && (iVar2 != 3)) {
      return (undefined4)(0);
    }
    uVar1 = (undefined4)(1);
  }
  return (undefined4)(uVar1);
}


// Reference entry 105414f0; body size 24 bytes.
#line 1 "ENTRY_105414f0"

undefined1 __fastcall FUN_105414f0(int param_1)

{
  if (((*(char *)(param_1 + 0x19) == '\0') && (*(char *)(param_1 + 0x1a) == '\0')) &&
     (*(char *)(param_1 + 0x1b) == '\0')) {
    return (undefined1)(0);
  }
  return (undefined1)(1);
}


// Reference entry 105417f0; body size 24 bytes.
#line 1 "ENTRY_105417f0"

undefined1 __fastcall FUN_105417f0(int param_1)

{
  char cVar1;
  
  if (*(int *)(param_1 + 0xc) != 4) {
    cVar1 = (char)(thunk_FUN_10541eb0(), 0);
    if (cVar1 != '\0') {
      return (undefined1)(0);
    }
  }
  return (undefined1)(1);
}


// Reference entry 10541b60; body size 48 bytes.
#line 1 "ENTRY_10541b60"

undefined4 __thiscall Recovered_Bulk::m_FUN_10541b60(SCStr *param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  uint uVar2;
  
  if ((*(char **)param_2 != (char *)((0x0))) && (**(char **)param_2 != '\0')) {
    uVar1 = (uint)(((SCVtbl_8_0*)(param_1))->v(), 0);
    uVar2 = (uint)(((SCStr *)(param_2))->length(), 0);
    if (uVar2 <= uVar1) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10541c30; body size 19 bytes.
#line 1 "ENTRY_10541c30"

bool __fastcall FUN_10541c30(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 8) != (int *)((0x0))) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 8) + 0xc))(), 0);
    return (uint)(uVar1);
  }
  return (bool)0;
}


// Reference entry 10542ed0; body size 25 bytes.
#line 1 "ENTRY_10542ed0"

void __fastcall FUN_10542ed0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *(undefined4*)(param_1 + 0x20) = (undefined4)(0);
  thunk_FUN_1053f430();
  *(int*)(param_1 + 0x28) = (int)(*(int *)(param_1 + 0x28) + 1);
  return;
}


// Reference entry 10544a10; body size 21 bytes.
#line 1 "ENTRY_10544a10"

void __fastcall FUN_10544a10(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 8) + 0x50))(), 0);
  thunk_FUN_1053e5d0((int)(uVar1));
  return;
}


// Reference entry 10546be0; body size 57 bytes.
#line 1 "ENTRY_10546be0"

void __fastcall FUN_10546be0(int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)(param_1 + 8) + 0xe8) == 0xb) {
    *(undefined1*)(*(int *)(param_1 + 8) + 0xd0) = (undefined1)(0);
    iVar1 = (int)(*(int *)(param_1 + 8));
    thunk_FUN_112af4e0("Wizard",5,"Exit code set to %d.",2);
    *(undefined4*)(iVar1 + 0x94) = (undefined4)(2);
  }
  return;
}


// Reference entry 1054ac50; body size 49 bytes.
#line 1 "ENTRY_1054ac50"

void __stdcall FUN_1054ac50(int param_1,unsigned int recovered_unused_stack_0)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0) {
    uVar1 = (undefined4)(0);
  }
  else {
    if (param_1 != 1) {
      return;
    }
    uVar1 = (undefined4)(1);
  }
  iVar2 = (int)(thunk_FUN_1053e5d0((int)(uVar1)), 0);
  if (iVar2 == 2) {
    FUN_1006aac8();
  }
  return;
}


// Reference entry 1054af60; body size 33 bytes.
#line 1 "ENTRY_1054af60"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_1054af60(int param_2,int param_3)
{
  int param_1 = (int )this;
  if (param_2 == 0) {
    (**(code **)(**(int **)(param_1 + 8) + 0x1ec))(param_3 != 0);
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1054b5b0; body size 32 bytes.
#line 1 "ENTRY_1054b5b0"

void __thiscall Recovered_Bulk::m_FUN_1054b5b0(undefined4 param_2,undefined8 param_3, unsigned int recovered_unused_stack_0)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0xc4) + 0x34))(param_2,param_3);
  return;
}


// Reference entry 1054b710; body size 39 bytes.
#line 1 "ENTRY_1054b710"

void __thiscall Recovered_Bulk::m_FUN_1054b710(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 0x100));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 1054b740; body size 39 bytes.
#line 1 "ENTRY_1054b740"

void __thiscall Recovered_Bulk::m_FUN_1054b740(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 0xe7ac));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 1054bd00; body size 47 bytes.
#line 1 "ENTRY_1054bd00"

void __thiscall Recovered_Bulk::m_FUN_1054bd00(char param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  int iVar2;
  
  cVar1 = (char)(*(char *)((int)param_1 + 0xd2));
  *(char*)((int)param_1 + 0xd2) = (char)(param_2);
  if (cVar1 != param_2) {
    iVar2 = (int)(((SCVtbl_5_0*)(param_1))->v(), 0);
    if (iVar2 == 5) {
      ((SCVtbl_78_0*)(param_1))->v();
    }
  }
  return;
}


// Reference entry 1054c0c0; body size 22 bytes.
#line 1 "ENTRY_1054c0c0"

void __stdcall FUN_1054c0c0(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_103d61d0((int)(param_1),(int)(0));
  }
  return;
}


// Reference entry 1054c100; body size 43 bytes.
#line 1 "ENTRY_1054c100"

int __fastcall FUN_1054c100(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)((*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0xc)) - 1);
  return (int)(*(int *)(*(int *)(param_1 + 4) + (uVar1 >> 2 & *(int *)(param_1 + 8) - 1U) * 4) + (uVar1 & 3) * 4);
}


// Reference entry 1054c140; body size 43 bytes.
#line 1 "ENTRY_1054c140"

int __fastcall FUN_1054c140(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)((*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0xc)) - 1);
  return (int)(*(int *)(*(int *)(param_1 + 4) + (uVar1 >> 2 & *(int *)(param_1 + 8) - 1U) * 4) + (uVar1 & 3) * 4);
}


// Reference entry 1054c2a0; body size 26 bytes.
#line 1 "ENTRY_1054c2a0"

bool __fastcall FUN_1054c2a0(int *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)((**(code **)(*param_1 + 0x60))(), 0);
  if ((char)uVar1 != '\0') {
    uVar1 = (uint)(thunk_FUN_10dd4b80(), 0);
    return (uint)(uVar1);
  }
  return (bool)0;
}


// Reference entry 1054c2e0; body size 23 bytes.
#line 1 "ENTRY_1054c2e0"

void __stdcall FUN_1054c2e0(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_103d6930();
    return;
  }
  return;
}


// Reference entry 1054c390; body size 41 bytes.
#line 1 "ENTRY_1054c390"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1054c390(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1054c8b0; body size 19 bytes.
#line 1 "ENTRY_1054c8b0"

void __fastcall FUN_1054c8b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1054cab0; body size 38 bytes.
#line 1 "ENTRY_1054cab0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1054cab0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1054cae0; body size 45 bytes.
#line 1 "ENTRY_1054cae0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1054cae0(byte param_2)
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


// Reference entry 1054cb20; body size 33 bytes.
#line 1 "ENTRY_1054cb20"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1054cb20(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1054cfc0; body size 20 bytes.
#line 1 "ENTRY_1054cfc0"

SCStr * __thiscall Recovered_Bulk::m_FUN_1054cfc0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x38));
  return (SCStr *)(param_2);
}


// Reference entry 1054cff0; body size 21 bytes.
#line 1 "ENTRY_1054cff0"

SCStr * __stdcall FUN_1054cff0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 1054e0e0; body size 33 bytes.
#line 1 "ENTRY_1054e0e0"

void __thiscall Recovered_Bulk::m_FUN_1054e0e0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_1054e110((int)(param_2),(int)(*(undefined4 *)(*param_1 + 4)));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 1054e1f0; body size 60 bytes.
#line 1 "ENTRY_1054e1f0"

int __thiscall Recovered_Bulk::m_FUN_1054e1f0(SCStr *param_2)
{
  int *param_1 = (int *)this;
  bool bVar1;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_1054e240((int)((uint)&local_c),(int)(param_2));
  if ((*(char *)(local_4 + 0xd) == '\0') &&
     (bVar1 = (bool)(((SCStr *)(param_2))->op_lt((SCStr *)(local_4 + 0x10)), 0), !bVar1)) {
    return (int)(local_4);
  }
  return (int)(*param_1);
}


// Reference entry 1054ea60; body size 59 bytes.
#line 1 "ENTRY_1054ea60"

void __thiscall Recovered_Bulk::m_FUN_1054ea60(undefined4 *param_2)
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
      ((SCVtbl_1_0*)(piVar2))->v();
    }
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
    return;
  }
  thunk_FUN_1054dd50<>(puVar1,param_2);
  return;
}


// Reference entry 1054edd0; body size 41 bytes.
#line 1 "ENTRY_1054edd0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1054edd0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1054ee30; body size 41 bytes.
#line 1 "ENTRY_1054ee30"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1054ee30(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1054ee70; body size 24 bytes.
#line 1 "ENTRY_1054ee70"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1054ee70(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1054ee90; body size 24 bytes.
#line 1 "ENTRY_1054ee90"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1054ee90(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1054eed0; body size 48 bytes.
#line 1 "ENTRY_1054eed0"

undefined4 * __fastcall FUN_1054eed0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x1c), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 1054fae0; body size 60 bytes.
#line 1 "ENTRY_1054fae0"

void __fastcall FUN_1054fae0(int *param_1)

{ int stack0xfffffffc;
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


// Reference entry 1054fb40; body size 19 bytes.
#line 1 "ENTRY_1054fb40"

void __fastcall FUN_1054fb40(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 1054fb60; body size 28 bytes.
#line 1 "ENTRY_1054fb60"

void __fastcall FUN_1054fb60(int *param_1)

{
  thunk_FUN_1054e110((int)(param_1),(int)(*(undefined4 *)(*param_1 + 4)));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 1054fc40; body size 19 bytes.
#line 1 "ENTRY_1054fc40"

void __fastcall FUN_1054fc40(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 1054fc60; body size 17 bytes.
#line 1 "ENTRY_1054fc60"

void __fastcall FUN_1054fc60(undefined4 *param_1)

{
  thunk_FUN_1054da50(*param_1,param_1[1],param_1[2]);
  return;
}


// Reference entry 1054fc80; body size 28 bytes.
#line 1 "ENTRY_1054fc80"

void __fastcall FUN_1054fc80(int *param_1)

{
  thunk_FUN_1054e110((int)(param_1),(int)(*(undefined4 *)(*param_1 + 4)));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 10550820; body size 38 bytes.
#line 1 "ENTRY_10550820"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10550820(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10550850; body size 32 bytes.
#line 1 "ENTRY_10550850"

undefined4 __thiscall Recovered_Bulk::m_FUN_10550850(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1054f920();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 10550af0; body size 33 bytes.
#line 1 "ENTRY_10550af0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10550af0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RServiceManifestCB);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10550b20; body size 35 bytes.
#line 1 "ENTRY_10550b20"

undefined4 __thiscall Recovered_Bulk::m_FUN_10550b20(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1054ff50();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x6120);
  }
  return (undefined4)(param_1);
}


// Reference entry 10550b50; body size 32 bytes.
#line 1 "ENTRY_10550b50"

undefined4 __thiscall Recovered_Bulk::m_FUN_10550b50(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10550020();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x54);
  }
  return (undefined4)(param_1);
}


// Reference entry 10550c50; body size 35 bytes.
#line 1 "ENTRY_10550c50"

undefined4 __thiscall Recovered_Bulk::m_FUN_10550c50(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_105501b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x88);
  }
  return (undefined4)(param_1);
}


// Reference entry 10550cb0; body size 25 bytes.
#line 1 "ENTRY_10550cb0"

void __fastcall FUN_10550cb0(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x1c), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 10550ea0; body size 20 bytes.
#line 1 "ENTRY_10550ea0"

void __thiscall Recovered_Bulk::m_FUN_10550ea0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1054da50(param_2,param_3,param_1);
  return;
}


// Reference entry 10551850; body size 31 bytes.
#line 1 "ENTRY_10551850"

int * FUN_10551850(int *param_1)

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


// Reference entry 10552010; body size 61 bytes.
#line 1 "ENTRY_10552010"

void __thiscall Recovered_Bulk::m_FUN_10552010(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    uVar2 = (undefined4)(((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 10552460; body size 33 bytes.
#line 1 "ENTRY_10552460"

void __fastcall FUN_10552460(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_1054e110((int)(param_1),(int)(*(undefined4 *)(iVar1 + 4)));
  *(int*)(iVar1 + 4) = (int)(iVar1);
  *(int*)iVar1 = (int)((int)(iVar1));
  *(int*)(iVar1 + 8) = (int)(iVar1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 105524a0; body size 24 bytes.
#line 1 "ENTRY_105524a0"

void __fastcall FUN_105524a0(undefined4 *param_1)

{
  thunk_FUN_1054da50(*param_1,param_1[1],param_1);
  param_1[1] = (undefined4)(*param_1);
  return;
}


// Reference entry 105526b0; body size 60 bytes.
#line 1 "ENTRY_105526b0"

void __stdcall FUN_105526b0(int param_1,int param_2)

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


// Reference entry 10553fb0; body size 21 bytes.
#line 1 "ENTRY_10553fb0"

SCStr * __stdcall FUN_10553fb0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 105564a0; body size 46 bytes.
#line 1 "ENTRY_105564a0"

void __thiscall Recovered_Bulk::m_FUN_105564a0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x48), 0);
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 0x4c)) {
    do {
      (**(code **)(*(int *)*puVar1 + 4))(param_2,param_3);
      puVar1 = (undefined4 *)(puVar1 + 1);
    } while ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 0x4c));
  }
  return;
}


// Reference entry 10556c40; body size 59 bytes.
#line 1 "ENTRY_10556c40"

void __thiscall Recovered_Bulk::m_FUN_10556c40(undefined4 *param_2)
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
      ((SCVtbl_1_0*)(piVar2))->v();
    }
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
    return;
  }
  thunk_FUN_1054dd50<>(puVar1,param_2);
  return;
}


// Reference entry 105579d0; body size 42 bytes.
#line 1 "ENTRY_105579d0"

void __fastcall FUN_105579d0(int param_1)

{
  thunk_FUN_105551d0();
  if (*(int *)(param_1 + 0x1c) != 0) {
    thunk_FUN_104dec20();
    if (*(undefined4 **)(param_1 + 0x1c) != (undefined4 *)((0x0))) {
      (**(code **)**(undefined4 **)(param_1 + 0x1c))(1);
    }
    *(undefined4*)(param_1 + 0x1c) = (undefined4)(0);
  }
  return;
}


// Reference entry 105587d0; body size 41 bytes.
#line 1 "ENTRY_105587d0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_105587d0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10558810; body size 41 bytes.
#line 1 "ENTRY_10558810"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10558810(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10558850; body size 41 bytes.
#line 1 "ENTRY_10558850"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10558850(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105588b0; body size 41 bytes.
#line 1 "ENTRY_105588b0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_105588b0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105588f0; body size 41 bytes.
#line 1 "ENTRY_105588f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_105588f0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105597d0; body size 60 bytes.
#line 1 "ENTRY_105597d0"

void __fastcall FUN_105597d0(int *param_1)

{ int stack0xfffffffc;
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


// Reference entry 10559b30; body size 31 bytes.
#line 1 "ENTRY_10559b30"

void __fastcall FUN_10559b30(undefined4 *param_1)

{
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCEnterZIPBrowseItem);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCEnterZIPBrowseItem);
  thunk_FUN_103d60a0();
  thunk_FUN_104da760();
  return;
}


// Reference entry 1055a570; body size 33 bytes.
#line 1 "ENTRY_1055a570"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1055a570(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCPBrowseOperationCB);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1055a5a0; body size 38 bytes.
#line 1 "ENTRY_1055a5a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1055a5a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RLocationNameExtractorCB);
  thunk_FUN_11202570();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1055a910; body size 54 bytes.
#line 1 "ENTRY_1055a910"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1055a910(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCEnterZIPBrowseItem);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCEnterZIPBrowseItem);
  thunk_FUN_103d60a0();
  thunk_FUN_104da760();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x38);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1055abe0; body size 35 bytes.
#line 1 "ENTRY_1055abe0"

undefined4 __thiscall Recovered_Bulk::m_FUN_1055abe0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10559da0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x128);
  }
  return (undefined4)(param_1);
}


// Reference entry 1055afd0; body size 45 bytes.
#line 1 "ENTRY_1055afd0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1055afd0(byte param_2)
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


// Reference entry 1055b730; body size 61 bytes.
#line 1 "ENTRY_1055b730"

void __thiscall Recovered_Bulk::m_FUN_1055b730(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    uVar2 = (undefined4)(((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 1055d3c0; body size 20 bytes.
#line 1 "ENTRY_1055d3c0"

SCStr * __thiscall Recovered_Bulk::m_FUN_1055d3c0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x10));
  return (SCStr *)(param_2);
}


// Reference entry 1055d3e0; body size 21 bytes.
#line 1 "ENTRY_1055d3e0"

SCStr * __stdcall FUN_1055d3e0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("RadioEditCustomStation");
  return (SCStr *)(param_1);
}


// Reference entry 1055d400; body size 20 bytes.
#line 1 "ENTRY_1055d400"

SCStr * __thiscall Recovered_Bulk::m_FUN_1055d400(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x10));
  return (SCStr *)(param_2);
}


// Reference entry 1055d420; body size 21 bytes.
#line 1 "ENTRY_1055d420"

SCStr * __stdcall FUN_1055d420(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("RadioLocationCity");
  return (SCStr *)(param_1);
}


// Reference entry 1055d440; body size 21 bytes.
#line 1 "ENTRY_1055d440"

SCStr * __stdcall FUN_1055d440(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("RadioLocationZIP");
  return (SCStr *)(param_1);
}


// Reference entry 1055d470; body size 21 bytes.
#line 1 "ENTRY_1055d470"

SCStr * __stdcall FUN_1055d470(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("none");
  return (SCStr *)(param_1);
}


// Reference entry 1055d580; body size 20 bytes.
#line 1 "ENTRY_1055d580"

SCStr * __thiscall Recovered_Bulk::m_FUN_1055d580(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x14));
  return (SCStr *)(param_2);
}


// Reference entry 1055d5a0; body size 21 bytes.
#line 1 "ENTRY_1055d5a0"

SCStr * __stdcall FUN_1055d5a0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryLongInput");
  return (SCStr *)(param_1);
}


// Reference entry 1055d5c0; body size 20 bytes.
#line 1 "ENTRY_1055d5c0"

SCStr * __thiscall Recovered_Bulk::m_FUN_1055d5c0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x14));
  return (SCStr *)(param_2);
}


// Reference entry 1055d5e0; body size 21 bytes.
#line 1 "ENTRY_1055d5e0"

SCStr * __stdcall FUN_1055d5e0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryDefault");
  return (SCStr *)(param_1);
}


// Reference entry 1055d600; body size 21 bytes.
#line 1 "ENTRY_1055d600"

SCStr * __stdcall FUN_1055d600(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryDefault");
  return (SCStr *)(param_1);
}


// Reference entry 1055db60; body size 35 bytes.
#line 1 "ENTRY_1055db60"

SCStr * __stdcall FUN_1055db60(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2562,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 1055db90; body size 20 bytes.
#line 1 "ENTRY_1055db90"

SCStr * __thiscall Recovered_Bulk::m_FUN_1055db90(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0xc));
  return (SCStr *)(param_2);
}


// Reference entry 1055dbb0; body size 35 bytes.
#line 1 "ENTRY_1055dbb0"

SCStr * __stdcall FUN_1055dbb0(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x20e4,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 1055dbe0; body size 20 bytes.
#line 1 "ENTRY_1055dbe0"

SCStr * __thiscall Recovered_Bulk::m_FUN_1055dbe0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0xc));
  return (SCStr *)(param_2);
}


// Reference entry 1055dc00; body size 35 bytes.
#line 1 "ENTRY_1055dc00"

SCStr * __stdcall FUN_1055dc00(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x207f,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 1055dc30; body size 35 bytes.
#line 1 "ENTRY_1055dc30"

SCStr * __stdcall FUN_1055dc30(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x207f,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 1055dc70; body size 20 bytes.
#line 1 "ENTRY_1055dc70"

int __fastcall FUN_1055dc70(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_1020fe60(), 0);
  if (*(int *)(param_1 + 0x280) != 0) {
    iVar1 = (int)(iVar1 + 1);
  }
  return (int)(iVar1);
}


// Reference entry 1055dc90; body size 28 bytes.
#line 1 "ENTRY_1055dc90"

int * __thiscall Recovered_Bulk::m_FUN_1055dc90(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x120), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 1055dce0; body size 35 bytes.
#line 1 "ENTRY_1055dce0"

SCStr * __stdcall FUN_1055dce0(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2081,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 1055ec50; body size 21 bytes.
#line 1 "ENTRY_1055ec50"

SCStr * __stdcall FUN_1055ec50(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("x-sonos-scuri://radiosetlocation/enterzip");
  return (SCStr *)(param_1);
}


// Reference entry 1055f260; body size 21 bytes.
#line 1 "ENTRY_1055f260"

SCStr * __stdcall FUN_1055f260(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 1055f480; body size 27 bytes.
#line 1 "ENTRY_1055f480"

void __stdcall FUN_1055f480(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1021bf80((int)(param_1),(int)(param_2));
  thunk_FUN_1055b780();
  return;
}


// Reference entry 1055f4b0; body size 23 bytes.
#line 1 "ENTRY_1055f4b0"

void __stdcall FUN_1055f4b0(undefined4 param_1)

{
  thunk_FUN_1055b780();
  thunk_FUN_1021cc40((int)(param_1));
  return;
}


// Reference entry 10560090; body size 23 bytes.
#line 1 "ENTRY_10560090"

void __stdcall FUN_10560090(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_103d6930();
    return;
  }
  return;
}


// Reference entry 105600b0; body size 41 bytes.
#line 1 "ENTRY_105600b0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_105600b0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105600f0; body size 41 bytes.
#line 1 "ENTRY_105600f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_105600f0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10562940; body size 30 bytes.
#line 1 "ENTRY_10562940"

void __thiscall Recovered_Bulk::m_FUN_10562940(int param_2)
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


// Reference entry 10562970; body size 30 bytes.
#line 1 "ENTRY_10562970"

void __thiscall Recovered_Bulk::m_FUN_10562970(int param_2)
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


// Reference entry 105629a0; body size 30 bytes.
#line 1 "ENTRY_105629a0"

void __thiscall Recovered_Bulk::m_FUN_105629a0(int param_2)
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


// Reference entry 105629d0; body size 30 bytes.
#line 1 "ENTRY_105629d0"

void __thiscall Recovered_Bulk::m_FUN_105629d0(int param_2)
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


// Reference entry 10562a40; body size 40 bytes.
#line 1 "ENTRY_10562a40"

void __stdcall FUN_10562a40(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0((int)(&param_1),(int)(param_2));
  return;
}


// Reference entry 10562a80; body size 40 bytes.
#line 1 "ENTRY_10562a80"

void __stdcall FUN_10562a80(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0((int)(&param_1),(int)(param_2));
  return;
}


// Reference entry 10562b00; body size 40 bytes.
#line 1 "ENTRY_10562b00"

void __stdcall FUN_10562b00(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0((int)(&param_1),(int)(param_2));
  return;
}


// Reference entry 10562e90; body size 41 bytes.
#line 1 "ENTRY_10562e90"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10562e90(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10562ed0; body size 41 bytes.
#line 1 "ENTRY_10562ed0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10562ed0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10562f10; body size 41 bytes.
#line 1 "ENTRY_10562f10"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10562f10(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10562f50; body size 41 bytes.
#line 1 "ENTRY_10562f50"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10562f50(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10562f90; body size 41 bytes.
#line 1 "ENTRY_10562f90"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10562f90(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10562ff0; body size 41 bytes.
#line 1 "ENTRY_10562ff0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10562ff0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10563030; body size 41 bytes.
#line 1 "ENTRY_10563030"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10563030(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10563070; body size 41 bytes.
#line 1 "ENTRY_10563070"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10563070(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105630b0; body size 41 bytes.
#line 1 "ENTRY_105630b0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_105630b0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10563120; body size 24 bytes.
#line 1 "ENTRY_10563120"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10563120(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105650b0; body size 19 bytes.
#line 1 "ENTRY_105650b0"

void __fastcall FUN_105650b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10566560; body size 40 bytes.
#line 1 "ENTRY_10566560"

void __fastcall FUN_10566560(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCPlayMenuAddDescriptor);
  thunk_FUN_10202e00();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10566670; body size 40 bytes.
#line 1 "ENTRY_10566670"

void __fastcall FUN_10566670(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCPlayMenuPlayNextDescriptor);
  thunk_FUN_10202e00();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10566db0; body size 49 bytes.
#line 1 "ENTRY_10566db0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10566db0(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  uint uVar2;
  
  if (*(byte *)((param_2 + 1)) < *(byte *)((param_1 + 1))) {
    return (undefined4)(0);
  }
  if (*(byte *)((param_1 + 1)) == *(byte *)((param_2 + 1))) {
    if (*(byte *)((param_2 + 2)) < *(byte *)((param_1 + 2))) {
      return (undefined4)(0);
    }
    if (*(byte *)((param_1 + 2)) == *(byte *)((param_2 + 2))) {
      uVar1 = (uint)(*(uint *)(param_1 + 4));
      uVar2 = (uint)(*(uint *)(param_2 + 4));
      if (uVar2 <= uVar1 && uVar1 != uVar2) {
        return (undefined4)(0);
      }
      if (uVar1 == uVar2) {
        return (undefined4)(0);
      }
    }
  }
  return (undefined4)(1);
}


// Reference entry 10566ea0; body size 38 bytes.
#line 1 "ENTRY_10566ea0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10566ea0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10566ed0; body size 45 bytes.
#line 1 "ENTRY_10566ed0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10566ed0(byte param_2)
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


// Reference entry 10566f10; body size 32 bytes.
#line 1 "ENTRY_10566f10"

undefined4 __thiscall Recovered_Bulk::m_FUN_10566f10(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_105650d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 10566f40; body size 58 bytes.
#line 1 "ENTRY_10566f40"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10566f40(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTGetMediaInfoAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTGetMediaInfoAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTGetMediaInfoAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10fd8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10566f90; body size 58 bytes.
#line 1 "ENTRY_10566f90"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10566f90(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTPlayAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTPlayAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTPlayAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10566fe0; body size 58 bytes.
#line 1 "ENTRY_10566fe0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10566fe0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTSetAVTransportURIAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTSetAVTransportURIAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTSetAVTransportURIAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10567030; body size 45 bytes.
#line 1 "ENTRY_10567030"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10567030(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddQueueOp);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCAddQueueOp);
  thunk_FUN_101b9ba0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10567320; body size 48 bytes.
#line 1 "ENTRY_10567320"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10567320(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x140c);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10567460; body size 33 bytes.
#line 1 "ENTRY_10567460"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10567460(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10567ae0; body size 45 bytes.
#line 1 "ENTRY_10567ae0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10567ae0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpLookupMetadata);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpLookupMetadata);
  thunk_FUN_105650d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10567b20; body size 35 bytes.
#line 1 "ENTRY_10567b20"

undefined4 __thiscall Recovered_Bulk::m_FUN_10567b20(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10566380();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x18f4);
  }
  return (undefined4)(param_1);
}


// Reference entry 1056d380; body size 61 bytes.
#line 1 "ENTRY_1056d380"

void __thiscall Recovered_Bulk::m_FUN_1056d380(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    uVar2 = (undefined4)(((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 1056d3d0; body size 61 bytes.
#line 1 "ENTRY_1056d3d0"

void __thiscall Recovered_Bulk::m_FUN_1056d3d0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    uVar2 = (undefined4)(((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 1056d420; body size 30 bytes.
#line 1 "ENTRY_1056d420"

void __thiscall Recovered_Bulk::m_FUN_1056d420(int param_2)
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


// Reference entry 1056d450; body size 30 bytes.
#line 1 "ENTRY_1056d450"

void __thiscall Recovered_Bulk::m_FUN_1056d450(int param_2)
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


// Reference entry 1056d480; body size 30 bytes.
#line 1 "ENTRY_1056d480"

void __thiscall Recovered_Bulk::m_FUN_1056d480(int param_2)
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


// Reference entry 1056d4b0; body size 30 bytes.
#line 1 "ENTRY_1056d4b0"

void __thiscall Recovered_Bulk::m_FUN_1056d4b0(int param_2)
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


// Reference entry 10572510; body size 21 bytes.
#line 1 "ENTRY_10572510"

SCStr * __stdcall FUN_10572510(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIAddToAction");
  return (SCStr *)(param_1);
}


// Reference entry 10572530; body size 21 bytes.
#line 1 "ENTRY_10572530"

SCStr * __stdcall FUN_10572530(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIAddToQueueUIAction");
  return (SCStr *)(param_1);
}


// Reference entry 10572550; body size 21 bytes.
#line 1 "ENTRY_10572550"

SCStr * __stdcall FUN_10572550(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIPlayNextUIAction");
  return (SCStr *)(param_1);
}


// Reference entry 10572570; body size 21 bytes.
#line 1 "ENTRY_10572570"

SCStr * __stdcall FUN_10572570(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIPlayNowUIAction");
  return (SCStr *)(param_1);
}


// Reference entry 10572590; body size 21 bytes.
#line 1 "ENTRY_10572590"

SCStr * __stdcall FUN_10572590(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIReplaceQueueUIAction");
  return (SCStr *)(param_1);
}


// Reference entry 105725b0; body size 28 bytes.
#line 1 "ENTRY_105725b0"

void __fastcall FUN_105725b0(int *param_1)

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


// Reference entry 105725e0; body size 28 bytes.
#line 1 "ENTRY_105725e0"

void __fastcall FUN_105725e0(int *param_1)

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


// Reference entry 10572610; body size 28 bytes.
#line 1 "ENTRY_10572610"

void __fastcall FUN_10572610(int *param_1)

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


// Reference entry 10572640; body size 28 bytes.
#line 1 "ENTRY_10572640"

void __fastcall FUN_10572640(int *param_1)

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


// Reference entry 10574610; body size 21 bytes.
#line 1 "ENTRY_10574610"

SCStr * __stdcall FUN_10574610(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("AddToGeneric");
  return (SCStr *)(param_1);
}


// Reference entry 10574630; body size 21 bytes.
#line 1 "ENTRY_10574630"

SCStr * __stdcall FUN_10574630(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("AddAtNumber");
  return (SCStr *)(param_1);
}


// Reference entry 10574650; body size 21 bytes.
#line 1 "ENTRY_10574650"

SCStr * __stdcall FUN_10574650(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("ShowInfoview");
  return (SCStr *)(param_1);
}


// Reference entry 10574770; body size 21 bytes.
#line 1 "ENTRY_10574770"

SCStr * __stdcall FUN_10574770(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("PlayMenuAdd");
  return (SCStr *)(param_1);
}


// Reference entry 10574790; body size 37 bytes.
#line 1 "ENTRY_10574790"

SCStr * __thiscall Recovered_Bulk::m_FUN_10574790(SCStr *param_2)
{
  int param_1 = (int )this;
  char *pcVar1;
  
  pcVar1 = (char *)("PlayMenuShuffleContainer");
  if (*(char *)(param_1 + 0x18b0) == '\0') {
    pcVar1 = (char *)("PlayMenuPlayContainer");
  }
  ((SCStr *)(param_2))->int_allocRep(pcVar1);
  return (SCStr *)(param_2);
}


// Reference entry 105747c0; body size 21 bytes.
#line 1 "ENTRY_105747c0"

SCStr * __stdcall FUN_105747c0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("PlayMenuPlayNext");
  return (SCStr *)(param_1);
}


// Reference entry 105747e0; body size 37 bytes.
#line 1 "ENTRY_105747e0"

SCStr * __thiscall Recovered_Bulk::m_FUN_105747e0(SCStr *param_2)
{
  int param_1 = (int )this;
  char *pcVar1;
  
  pcVar1 = (char *)("PlayMenuShuffleNow");
  if (*(char *)(param_1 + 0x1412) == '\0') {
    pcVar1 = (char *)("PlayMenuPlayNow");
  }
  ((SCStr *)(param_2))->int_allocRep(pcVar1);
  return (SCStr *)(param_2);
}


// Reference entry 10574810; body size 21 bytes.
#line 1 "ENTRY_10574810"

SCStr * __stdcall FUN_10574810(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("PlayMenuReplace");
  return (SCStr *)(param_1);
}


// Reference entry 10574830; body size 21 bytes.
#line 1 "ENTRY_10574830"

SCStr * __stdcall FUN_10574830(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("PlayNow");
  return (SCStr *)(param_1);
}


// Reference entry 10574880; body size 21 bytes.
#line 1 "ENTRY_10574880"

SCStr * __stdcall FUN_10574880(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryCollection");
  return (SCStr *)(param_1);
}


// Reference entry 105748a0; body size 21 bytes.
#line 1 "ENTRY_105748a0"

SCStr * __stdcall FUN_105748a0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryDefault");
  return (SCStr *)(param_1);
}


// Reference entry 105748c0; body size 21 bytes.
#line 1 "ENTRY_105748c0"

SCStr * __stdcall FUN_105748c0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryDiscovery");
  return (SCStr *)(param_1);
}


// Reference entry 10574950; body size 21 bytes.
#line 1 "ENTRY_10574950"

SCStr * __stdcall FUN_10574950(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryDefault");
  return (SCStr *)(param_1);
}


// Reference entry 10574970; body size 21 bytes.
#line 1 "ENTRY_10574970"

SCStr * __stdcall FUN_10574970(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryInstant");
  return (SCStr *)(param_1);
}


// Reference entry 10574990; body size 21 bytes.
#line 1 "ENTRY_10574990"

SCStr * __stdcall FUN_10574990(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryDefault");
  return (SCStr *)(param_1);
}


// Reference entry 105749b0; body size 37 bytes.
#line 1 "ENTRY_105749b0"

SCStr * __thiscall Recovered_Bulk::m_FUN_105749b0(SCStr *param_2)
{
  int param_1 = (int )this;
  char *pcVar1;
  
  pcVar1 = (char *)("SCIActionCategoryInstant");
  if (*(char *)(param_1 + 0x140b) == '\0') {
    pcVar1 = (char *)("SCIActionCategoryDefault");
  }
  ((SCStr *)(param_2))->int_allocRep(pcVar1);
  return (SCStr *)(param_2);
}


// Reference entry 105749e0; body size 21 bytes.
#line 1 "ENTRY_105749e0"

SCStr * __stdcall FUN_105749e0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryDefault");
  return (SCStr *)(param_1);
}


// Reference entry 10574a00; body size 21 bytes.
#line 1 "ENTRY_10574a00"

SCStr * __stdcall FUN_10574a00(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryDefault");
  return (SCStr *)(param_1);
}


// Reference entry 10574a30; body size 21 bytes.
#line 1 "ENTRY_10574a30"

SCStr * __stdcall FUN_10574a30(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10574a50; body size 21 bytes.
#line 1 "ENTRY_10574a50"

SCStr * __stdcall FUN_10574a50(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10574b70; body size 32 bytes.
#line 1 "ENTRY_10574b70"

SCStr * __stdcall FUN_10574b70(SCStr *param_1)

{
  ((SCStr *)(param_1))->m_op_ctor((SCStr *)&DAT_121a07b0);
  *(undefined4*)(param_1 + 4) = (undefined4)(DAT_121a07b4);
  return (SCStr *)(param_1);
}


// Reference entry 10574ba0; body size 32 bytes.
#line 1 "ENTRY_10574ba0"

SCStr * __stdcall FUN_10574ba0(SCStr *param_1)

{
  ((SCStr *)(param_1))->m_op_ctor((SCStr *)&DAT_121a07b0);
  *(undefined4*)(param_1 + 4) = (undefined4)(DAT_121a07b4);
  return (SCStr *)(param_1);
}


// Reference entry 10574cf0; body size 21 bytes.
#line 1 "ENTRY_10574cf0"

SCStr * __stdcall FUN_10574cf0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIAddToQueueAtNumberDescriptor");
  return (SCStr *)(param_1);
}


// Reference entry 10574d10; body size 21 bytes.
#line 1 "ENTRY_10574d10"

SCStr * __stdcall FUN_10574d10(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionWithBoolDescriptor");
  return (SCStr *)(param_1);
}


// Reference entry 10574d30; body size 35 bytes.
#line 1 "ENTRY_10574d30"

SCStr * __stdcall FUN_10574d30(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x21e2,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10574d60; body size 35 bytes.
#line 1 "ENTRY_10574d60"

SCStr * __stdcall FUN_10574d60(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2209,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10574d90; body size 35 bytes.
#line 1 "ENTRY_10574d90"

SCStr * __stdcall FUN_10574d90(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2201,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10574e30; body size 35 bytes.
#line 1 "ENTRY_10574e30"

SCStr * __stdcall FUN_10574e30(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2209,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10574e60; body size 51 bytes.
#line 1 "ENTRY_10574e60"

SCStr * __thiscall Recovered_Bulk::m_FUN_10574e60(SCStr *param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  char *pcVar2;
  
  uVar1 = (undefined4)(0x1f57);
  if (*(char *)(param_1 + 0x18b0) == '\0') {
    uVar1 = (undefined4)(0x2204);
  }
  pcVar2 = (char *)((char *)thunk_FUN_1109aba0(uVar1,&DAT_11882ff0), 0);
  ((SCStr *)(param_2))->int_allocRep(pcVar2);
  return (SCStr *)(param_2);
}


// Reference entry 10574ea0; body size 35 bytes.
#line 1 "ENTRY_10574ea0"

SCStr * __stdcall FUN_10574ea0(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2208,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10574ed0; body size 35 bytes.
#line 1 "ENTRY_10574ed0"

SCStr * __stdcall FUN_10574ed0(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2203,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10574f00; body size 35 bytes.
#line 1 "ENTRY_10574f00"

SCStr * __stdcall FUN_10574f00(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x220a,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10574f30; body size 35 bytes.
#line 1 "ENTRY_10574f30"

SCStr * __stdcall FUN_10574f30(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2203,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10574f70; body size 21 bytes.
#line 1 "ENTRY_10574f70"

SCStr * __stdcall FUN_10574f70(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10576040; body size 17 bytes.
#line 1 "ENTRY_10576040"

bool __fastcall FUN_10576040(int param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 0x18) != (int *)((0x0))) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 0x18) + 0x2c))(), 0);
    return (uint)(uVar1);
  }
  return (bool)0;
}


// Reference entry 10576160; body size 45 bytes.
#line 1 "ENTRY_10576160"

void __thiscall Recovered_Bulk::m_FUN_10576160(int *param_2)
{
  int param_1 = (int )this;
  char cVar1;
  
  if ((int *)(param_2) == *(int **)(param_1 + 0x14)) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x14) + 0x5c))(), 0);
    if ((cVar1 != '\0') && (*(char *)(param_1 + 0x1c) == '\0')) {
      thunk_FUN_10579450();
      *(undefined1*)(param_1 + 0x1c) = (undefined1)(1);
    }
  }
  return;
}


// Reference entry 10579850; body size 41 bytes.
#line 1 "ENTRY_10579850"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10579850(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10579890; body size 41 bytes.
#line 1 "ENTRY_10579890"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10579890(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105798f0; body size 41 bytes.
#line 1 "ENTRY_105798f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_105798f0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10579960; body size 41 bytes.
#line 1 "ENTRY_10579960"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10579960(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105799a0; body size 24 bytes.
#line 1 "ENTRY_105799a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_105799a0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1057c200; body size 58 bytes.
#line 1 "ENTRY_1057c200"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1057c200(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTCreateSavedQueueAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTCreateSavedQueueAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTCreateSavedQueueAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xdbe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1057c250; body size 58 bytes.
#line 1 "ENTRY_1057c250"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1057c250(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpCDDestroyObjectAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpCDDestroyObjectAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpCDDestroyObjectAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1057c2a0; body size 58 bytes.
#line 1 "ENTRY_1057c2a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1057c2a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpCDUpdateObjectAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpCDUpdateObjectAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpCDUpdateObjectAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1057c2f0; body size 38 bytes.
#line 1 "ENTRY_1057c2f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1057c2f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddPlaylistAction);
  thunk_FUN_1057b850();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,100);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1057ca70; body size 32 bytes.
#line 1 "ENTRY_1057ca70"

undefined4 __thiscall Recovered_Bulk::m_FUN_1057ca70(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1057b850();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x60);
  }
  return (undefined4)(param_1);
}


// Reference entry 1057cdf0; body size 38 bytes.
#line 1 "ENTRY_1057cdf0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1057cdf0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCRenamePlaylistAction);
  thunk_FUN_1057b850();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,100);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1057d590; body size 16 bytes.
#line 1 "ENTRY_1057d590"

void __thiscall Recovered_Bulk::m_FUN_1057d590(void)
{
  int param_1 = (int )this;
  undefined4 in_stack_00000014;
  
  *(undefined4*)(param_1 + 0x3c) = (undefined4)(in_stack_00000014);
  thunk_FUN_102082f0<>();
  return;
}


// Reference entry 1057d5b0; body size 57 bytes.
#line 1 "ENTRY_1057d5b0"

undefined1 __fastcall FUN_1057d5b0(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  
  if (*(int *)(param_1 + 300) == 0) {
    cVar1 = (char)(thunk_FUN_105855b0(), 0);
    if (cVar1 == '\0') {
      return (undefined1)(1);
    }
    uVar2 = (undefined1)(thunk_FUN_10217af0(), 0);
    return (undefined1)(uVar2);
  }
  cVar1 = (char)(thunk_FUN_105855b0(), 0);
  if ((cVar1 == '\0') && (cVar1 = (char)(thunk_FUN_10585690(), 0), cVar1 == '\0')) {
    return (undefined1)(1);
  }
  return (undefined1)(0);
}


// Reference entry 1057d600; body size 40 bytes.
#line 1 "ENTRY_1057d600"

undefined1 __fastcall FUN_1057d600(int param_1)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_105855b0(), 0);
  if (cVar1 != '\0') {
    return (undefined1)(1);
  }
  if ((*(int *)(param_1 + 300) == 0) && (cVar1 = (char)(thunk_FUN_10208940(), 0), cVar1 != '\0')) {
    return (undefined1)(1);
  }
  return (undefined1)(0);
}


// Reference entry 1057d640; body size 17 bytes.
#line 1 "ENTRY_1057d640"

undefined1 __fastcall FUN_1057d640(int param_1)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 0xf0) != 0) {
    return (undefined1)(0);
  }
  uVar1 = (undefined1)(thunk_FUN_10208c50(), 0);
  return (undefined1)(uVar1);
}


// Reference entry 10580800; body size 21 bytes.
#line 1 "ENTRY_10580800"

SCStr * __stdcall FUN_10580800(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCPlaylistsBrowseItem");
  return (SCStr *)(param_1);
}


// Reference entry 105809d0; body size 43 bytes.
#line 1 "ENTRY_105809d0"

void __fastcall FUN_105809d0(undefined4 *param_1)

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


// Reference entry 105818e0; body size 21 bytes.
#line 1 "ENTRY_105818e0"

SCStr * __stdcall FUN_105818e0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("PlaylistNew");
  return (SCStr *)(param_1);
}


// Reference entry 10581900; body size 21 bytes.
#line 1 "ENTRY_10581900"

SCStr * __stdcall FUN_10581900(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("AddToPlaylist");
  return (SCStr *)(param_1);
}


// Reference entry 10581920; body size 21 bytes.
#line 1 "ENTRY_10581920"

SCStr * __stdcall FUN_10581920(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("AddToPlaylist");
  return (SCStr *)(param_1);
}


// Reference entry 10581940; body size 21 bytes.
#line 1 "ENTRY_10581940"

SCStr * __stdcall FUN_10581940(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("DeleteItem");
  return (SCStr *)(param_1);
}


// Reference entry 10581960; body size 21 bytes.
#line 1 "ENTRY_10581960"

SCStr * __stdcall FUN_10581960(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("RenameItem");
  return (SCStr *)(param_1);
}


// Reference entry 10581980; body size 37 bytes.
#line 1 "ENTRY_10581980"

undefined4 __fastcall FUN_10581980(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0x140) != '\0') {
    iVar1 = (int)(thunk_FUN_1020b530(), 0);
    if (iVar1 != 7) {
      uVar2 = (undefined4)(thunk_FUN_1020b530(), 0);
      return (undefined4)(uVar2);
    }
  }
  return (undefined4)(4);
}


// Reference entry 10581a60; body size 20 bytes.
#line 1 "ENTRY_10581a60"

SCStr * __thiscall Recovered_Bulk::m_FUN_10581a60(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x48));
  return (SCStr *)(param_2);
}


// Reference entry 10581a80; body size 21 bytes.
#line 1 "ENTRY_10581a80"

SCStr * __stdcall FUN_10581a80(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryDefault");
  return (SCStr *)(param_1);
}


// Reference entry 10581aa0; body size 21 bytes.
#line 1 "ENTRY_10581aa0"

SCStr * __stdcall FUN_10581aa0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryDefault");
  return (SCStr *)(param_1);
}


// Reference entry 10581b90; body size 21 bytes.
#line 1 "ENTRY_10581b90"

SCStr * __stdcall FUN_10581b90(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryEdit");
  return (SCStr *)(param_1);
}


// Reference entry 10581bb0; body size 21 bytes.
#line 1 "ENTRY_10581bb0"

SCStr * __stdcall FUN_10581bb0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryEdit");
  return (SCStr *)(param_1);
}


// Reference entry 10582630; body size 35 bytes.
#line 1 "ENTRY_10582630"

SCStr * __stdcall FUN_10582630(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x21de,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10582660; body size 21 bytes.
#line 1 "ENTRY_10582660"

SCStr * __stdcall FUN_10582660(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10582b20; body size 35 bytes.
#line 1 "ENTRY_10582b20"

SCStr * __stdcall FUN_10582b20(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x21dd,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 105839a0; body size 28 bytes.
#line 1 "ENTRY_105839a0"

undefined4 __stdcall FUN_105839a0(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 2) {
    uVar1 = (undefined4)(thunk_FUN_102105a0(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(4);
}


// Reference entry 105839d0; body size 55 bytes.
#line 1 "ENTRY_105839d0"

SCStr * FUN_105839d0(SCStr *param_1,int param_2,undefined4 param_3)

{
  if (param_2 != 2) {
    thunk_FUN_10210700<>(param_1,param_2,param_3);
    return (SCStr *)(param_1);
  }
  ((SCStr *)(param_1))->int_allocRep("emptyplaylists");
  return (SCStr *)(param_1);
}


// Reference entry 10585850; body size 49 bytes.
#line 1 "ENTRY_10585850"

void __fastcall FUN_10585850(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(0);
  iStack_10 = (int)(param_1 + -0x280);
  *(undefined1*)(param_1 + -0x240) = (undefined1)(1);
  iStack_14 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_14))->int_allocRep("SCIBrowseDataSource:onInvalidation");
  thunk_FUN_103d65f0<>();
  return;
}


// Reference entry 10585890; body size 59 bytes.
#line 1 "ENTRY_10585890"

bool __thiscall Recovered_Bulk::m_FUN_10585890(undefined4 param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(param_2);
  thunk_FUN_110b0460(1);
  iVar1 = (int)(thunk_FUN_110b2900((int)(param_1 + 8),(int)("RINCON_AssociatedZPUDN"),(int)(&DAT_118823e4),(int)(0)), 0);
  *(int*)(param_1 + 0x14) = (int)(iVar1);
  return (bool)(0 < iVar1);
}


// Reference entry 10585f20; body size 38 bytes.
#line 1 "ENTRY_10585f20"

undefined4 __thiscall Recovered_Bulk::m_FUN_10585f20(undefined4 param_2)
{
  undefined4 param_1 = (undefined4 )this;
  int *piVar1;
  
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0((int)("ObjectID"),(int)(0)), 0);
  ((SCVtbl_3_1*)(piVar1))->v((int)(param_2));
  return (undefined4)(param_1);
}


// Reference entry 10586670; body size 41 bytes.
#line 1 "ENTRY_10586670"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10586670(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105866b0; body size 41 bytes.
#line 1 "ENTRY_105866b0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_105866b0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10586710; body size 41 bytes.
#line 1 "ENTRY_10586710"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10586710(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10588070; body size 19 bytes.
#line 1 "ENTRY_10588070"

void __fastcall FUN_10588070(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10588fe0; body size 38 bytes.
#line 1 "ENTRY_10588fe0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10588fe0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10589010; body size 38 bytes.
#line 1 "ENTRY_10589010"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10589010(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10589040; body size 45 bytes.
#line 1 "ENTRY_10589040"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10589040(byte param_2)
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


// Reference entry 10589080; body size 32 bytes.
#line 1 "ENTRY_10589080"

undefined4 __thiscall Recovered_Bulk::m_FUN_10589080(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10588090();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 10589670; body size 35 bytes.
#line 1 "ENTRY_10589670"

undefined4 __thiscall Recovered_Bulk::m_FUN_10589670(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_105888e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x1e8);
  }
  return (undefined4)(param_1);
}


// Reference entry 105897c0; body size 33 bytes.
#line 1 "ENTRY_105897c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_105897c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105897f0; body size 38 bytes.
#line 1 "ENTRY_105897f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_105897f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNullParamRX);
  thunk_FUN_11285a90();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10589820; body size 45 bytes.
#line 1 "ENTRY_10589820"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10589820(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpAddFavorites);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpAddFavorites);
  thunk_FUN_10588090();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1058a650; body size 31 bytes.
#line 1 "ENTRY_1058a650"

undefined4 __fastcall FUN_1058a650(int param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x1c4) != '\0') {
    cVar1 = (char)(thunk_FUN_10219a00((int)(param_1 + 0x128)), 0);
    if (cVar1 == '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 1058c3d0; body size 43 bytes.
#line 1 "ENTRY_1058c3d0"

void __fastcall FUN_1058c3d0(undefined4 *param_1)

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


// Reference entry 1058c410; body size 43 bytes.
#line 1 "ENTRY_1058c410"

void __fastcall FUN_1058c410(undefined4 *param_1)

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


// Reference entry 1058d100; body size 21 bytes.
#line 1 "ENTRY_1058d100"

SCStr * __stdcall FUN_1058d100(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("AddFavorite");
  return (SCStr *)(param_1);
}


// Reference entry 1058d120; body size 21 bytes.
#line 1 "ENTRY_1058d120"

SCStr * __stdcall FUN_1058d120(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("DeleteItem");
  return (SCStr *)(param_1);
}


// Reference entry 1058d140; body size 21 bytes.
#line 1 "ENTRY_1058d140"

SCStr * __stdcall FUN_1058d140(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("RenameFavorite");
  return (SCStr *)(param_1);
}


// Reference entry 1058de30; body size 37 bytes.
#line 1 "ENTRY_1058de30"

SCStr * __thiscall Recovered_Bulk::m_FUN_1058de30(SCStr *param_2)
{
  int param_1 = (int )this;
  char *pcVar1;
  
  pcVar1 = (char *)("SCIActionCategoryEdit");
  if (*(char *)(param_1 + 0xad) == '\0') {
    pcVar1 = (char *)("SCIActionCategoryCollection");
  }
  ((SCStr *)(param_2))->int_allocRep(pcVar1);
  return (SCStr *)(param_2);
}


// Reference entry 1058de60; body size 37 bytes.
#line 1 "ENTRY_1058de60"

SCStr * __thiscall Recovered_Bulk::m_FUN_1058de60(SCStr *param_2)
{
  int param_1 = (int )this;
  char *pcVar1;
  
  pcVar1 = (char *)("SCIActionCategoryEdit");
  if (*(char *)(param_1 + 0xa8) == '\0') {
    pcVar1 = (char *)("SCIActionCategoryCollection");
  }
  ((SCStr *)(param_2))->int_allocRep(pcVar1);
  return (SCStr *)(param_2);
}


// Reference entry 1058de90; body size 21 bytes.
#line 1 "ENTRY_1058de90"

SCStr * __stdcall FUN_1058de90(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryEdit");
  return (SCStr *)(param_1);
}


// Reference entry 1058e810; body size 35 bytes.
#line 1 "ENTRY_1058e810"

SCStr * __stdcall FUN_1058e810(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x228b,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 1058ec70; body size 32 bytes.
#line 1 "ENTRY_1058ec70"

int __thiscall Recovered_Bulk::m_FUN_1058ec70(int param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  if ((param_2 != 1) && (param_2 != 2)) {
    iVar1 = (int)(thunk_FUN_10210390(), 0);
    return (int)(iVar1);
  }
  return (int)(param_1 + 0xf0);
}


// Reference entry 1058f660; body size 21 bytes.
#line 1 "ENTRY_1058f660"

SCStr * __stdcall FUN_1058f660(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10590620; body size 23 bytes.
#line 1 "ENTRY_10590620"

SCStr * __thiscall Recovered_Bulk::m_FUN_10590620(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x124));
  return (SCStr *)(param_2);
}


// Reference entry 10590f60; body size 23 bytes.
#line 1 "ENTRY_10590f60"

undefined4 __thiscall Recovered_Bulk::m_FUN_10590f60(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_101ff410((int)(param_1 + 0x128));
  return (undefined4)(param_2);
}


// Reference entry 10590f80; body size 23 bytes.
#line 1 "ENTRY_10590f80"

undefined4 __thiscall Recovered_Bulk::m_FUN_10590f80(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_101ff410((int)(param_1 + 0x128));
  return (undefined4)(param_2);
}


// Reference entry 105917c0; body size 57 bytes.
#line 1 "ENTRY_105917c0"

void __thiscall Recovered_Bulk::m_FUN_105917c0(undefined4 param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  if (*(int *)(param_1 + 0x1e0) == 0) {
    iVar1 = (int)(thunk_FUN_1058bf80(param_2,param_1 + 100), 0);
    if (iVar1 != 0) {
      thunk_FUN_102207b0((int)(iVar1),(int)(param_1 + 0x120),(int)(0));
    }
  }
  return;
}


// Reference entry 10591870; body size 21 bytes.
#line 1 "ENTRY_10591870"

int __fastcall FUN_10591870(int param_1)

{
  char *pcVar1;
  uint3 uVar2;
  
  pcVar1 = (char *)(*(char **)(param_1 + 0x124), 0);
  uVar2 = (uint3)((uint3)((uint)pcVar1 >> 8));
  if (((char *)(pcVar1) != (char *)(0x0)) && (*pcVar1 != (char)(('\0')))) {
    return (int)(((uint)(uVar2) << 8 | (uint)(1)));
  }
  return (int)((uint)uVar2 << 8);
}


// Reference entry 10591bc0; body size 20 bytes.
#line 1 "ENTRY_10591bc0"

void __fastcall FUN_10591bc0(int param_1)

{
  undefined4 uStack00000004;
  
  uStack00000004 = (undefined4)(0);
                    
                    
  (**(code **)(*(int *)(param_1 + -0x80) + 0x110))();
  return;
}


// Reference entry 105920b0; body size 53 bytes.
#line 1 "ENTRY_105920b0"

void __fastcall FUN_105920b0(int param_1)

{
  thunk_FUN_110b0460(1);
  thunk_FUN_110adac0((int)(-(uint)(param_1 != 0x1ec) & param_1 - 0xd4U));
  thunk_FUN_10592970();
  return;
}


// Reference entry 10592e90; body size 57 bytes.
#line 1 "ENTRY_10592e90"

void __thiscall Recovered_Bulk::m_FUN_10592e90(undefined4 param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  if (*(int *)(param_1 + 0x1e0) == 0) {
    iVar1 = (int)(thunk_FUN_1058bf80(param_2,param_1 + 100), 0);
    if (iVar1 != 0) {
      thunk_FUN_102207b0((int)(iVar1),(int)(param_1 + 0x120),(int)(0));
    }
  }
  return;
}


// Reference entry 10593ce0; body size 33 bytes.
#line 1 "ENTRY_10593ce0"

void __thiscall Recovered_Bulk::m_FUN_10593ce0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_10593d10((int)(param_2),(int)(*(undefined4 *)(*param_1 + 4)));
  thunk_FUN_1148a50e(*param_1,0x30);
  return;
}


// Reference entry 10593dd0; body size 60 bytes.
#line 1 "ENTRY_10593dd0"

int __thiscall Recovered_Bulk::m_FUN_10593dd0(SCStr *param_2)
{
  int *param_1 = (int *)this;
  bool bVar1;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10593e20((int)((uint)&local_c),(int)(param_2));
  if ((*(char *)(local_4 + 0xd) == '\0') &&
     (bVar1 = (bool)(((SCStr *)(param_2))->op_lt((SCStr *)(local_4 + 0x10)), 0), !bVar1)) {
    return (int)(local_4);
  }
  return (int)(*param_1);
}


// Reference entry 10594990; body size 41 bytes.
#line 1 "ENTRY_10594990"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10594990(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105949f0; body size 41 bytes.
#line 1 "ENTRY_105949f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_105949f0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10594a50; body size 48 bytes.
#line 1 "ENTRY_10594a50"

undefined4 * __fastcall FUN_10594a50(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x30), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10595260; body size 19 bytes.
#line 1 "ENTRY_10595260"

void __fastcall FUN_10595260(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x30);
  }
  return;
}


// Reference entry 10595290; body size 28 bytes.
#line 1 "ENTRY_10595290"

void __fastcall FUN_10595290(int *param_1)

{
  thunk_FUN_10593d10((int)(param_1),(int)(*(undefined4 *)(*param_1 + 4)));
  thunk_FUN_1148a50e(*param_1,0x30);
  return;
}


// Reference entry 10595360; body size 19 bytes.
#line 1 "ENTRY_10595360"

void __fastcall FUN_10595360(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x30);
  }
  return;
}


// Reference entry 10595380; body size 17 bytes.
#line 1 "ENTRY_10595380"

void __fastcall FUN_10595380(undefined4 *param_1)

{
  thunk_FUN_10593850(*param_1,param_1[1],param_1[2]);
  return;
}


// Reference entry 105953a0; body size 33 bytes.
#line 1 "ENTRY_105953a0"

void __fastcall FUN_105953a0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(param_1[1]);
  for (iVar2 = (int)(*param_1); iVar2 != iVar1; iVar2 = iVar2 + 0x1c) {
    thunk_FUN_10de8ec0();
  }
  return;
}


// Reference entry 105953d0; body size 28 bytes.
#line 1 "ENTRY_105953d0"

void __fastcall FUN_105953d0(int *param_1)

{
  thunk_FUN_10593d10((int)(param_1),(int)(*(undefined4 *)(*param_1 + 4)));
  thunk_FUN_1148a50e(*param_1,0x30);
  return;
}


// Reference entry 10595a80; body size 32 bytes.
#line 1 "ENTRY_10595a80"

undefined4 __thiscall Recovered_Bulk::m_FUN_10595a80(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10de8ec0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x1c);
  }
  return (undefined4)(param_1);
}


// Reference entry 10595ab0; body size 32 bytes.
#line 1 "ENTRY_10595ab0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10595ab0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10595520();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,100);
  }
  return (undefined4)(param_1);
}


// Reference entry 10595bd0; body size 25 bytes.
#line 1 "ENTRY_10595bd0"

void __fastcall FUN_10595bd0(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x30), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 10595f70; body size 20 bytes.
#line 1 "ENTRY_10595f70"

void __thiscall Recovered_Bulk::m_FUN_10595f70(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10593850(param_2,param_3,param_1);
  return;
}


// Reference entry 10595f90; body size 35 bytes.
#line 1 "ENTRY_10595f90"

void __stdcall FUN_10595f90(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x1c) {
    thunk_FUN_10de8ec0();
  }
  return;
}


// Reference entry 10596820; body size 31 bytes.
#line 1 "ENTRY_10596820"

int * FUN_10596820(int *param_1)

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


// Reference entry 10596a90; body size 61 bytes.
#line 1 "ENTRY_10596a90"

void __thiscall Recovered_Bulk::m_FUN_10596a90(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    uVar2 = (undefined4)(((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 105970f0; body size 59 bytes.
#line 1 "ENTRY_105970f0"

void __stdcall FUN_105970f0(int param_1,int param_2)

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


// Reference entry 10598470; body size 17 bytes.
#line 1 "ENTRY_10598470"

void __stdcall FUN_10598470(SCStr *param_1)

{
  ((SCStr *)(param_1))->op_eq("SCINowPlaying:onMusicChanged");
  return;
}


// Reference entry 1059b6d0; body size 57 bytes.
#line 1 "ENTRY_1059b6d0"

void __stdcall FUN_1059b6d0(undefined4 param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = (char)(*(char *)((int)param_2 + 0xd));
  while (cVar1 == '\0') {
    thunk_FUN_1059b6d0((int)(param_1),(int)(param_2[2]));
    piVar2 = (int *)((int *)*param_2);
    thunk_FUN_1148a50e(param_2,0x18);
    param_2 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }
  return;
}


// Reference entry 1059b720; body size 49 bytes.
#line 1 "ENTRY_1059b720"

int __thiscall Recovered_Bulk::m_FUN_1059b720(uint *param_2)
{
  int *param_1 = (int *)this;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_1059b760((int)((uint)&local_c),(int)(param_2));
  if ((*(char *)(local_4 + 0xd) != '\0') || ((uint)(*param_2) < *(uint *)(local_4 + 0x10))) {
    local_4 = (int)(*param_1);
  }
  return (int)(local_4);
}


// Reference entry 1059bb70; body size 48 bytes.
#line 1 "ENTRY_1059bb70"

undefined4 * __fastcall FUN_1059bb70(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 1059bf30; body size 19 bytes.
#line 1 "ENTRY_1059bf30"

void __fastcall FUN_1059bf30(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 1059c010; body size 47 bytes.
#line 1 "ENTRY_1059c010"

void __fastcall FUN_1059c010(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)(*(int **)(param_1 + 4), 0);
  if ((int *)(piVar2) != (int *)(0x0)) {
    LOCK();
    iVar3 = (int)(piVar2[1] + -1);
    piVar2[1] = (int)(iVar3);
    UNLOCK();
    if (iVar3 == 0) {
      (**(code **)*piVar2)();
      LOCK();
      piVar1 = (int *)(piVar2 + 2);
      iVar3 = (int)(*piVar1);
      *piVar1 = (int)(*piVar1 + -1);
      UNLOCK();
      if (iVar3 == 1) {
                    
                    
        (**(code **)(*piVar2 + 4))();
        return;
      }
    }
  }
  return;
}


// Reference entry 1059c3d0; body size 27 bytes.
#line 1 "ENTRY_1059c3d0"

undefined4 __thiscall Recovered_Bulk::m_FUN_1059c3d0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  return (undefined4)(param_1);
}


// Reference entry 1059c600; body size 25 bytes.
#line 1 "ENTRY_1059c600"

void __fastcall FUN_1059c600(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x18), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 1059ce00; body size 31 bytes.
#line 1 "ENTRY_1059ce00"

int * FUN_1059ce00(int *param_1)

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


// Reference entry 1059d1e0; body size 19 bytes.
#line 1 "ENTRY_1059d1e0"

void __fastcall FUN_1059d1e0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *(undefined1*)(param_1 + 0x20) = (undefined1)(0);
  if (*(int **)(param_1 + 0x54) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x54) + 8))();
  }
  return;
}


// Reference entry 1059d2f0; body size 20 bytes.
#line 1 "ENTRY_1059d2f0"

undefined4 __fastcall FUN_1059d2f0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *(undefined1*)(param_1 + 4) = (undefined1)(1);
  thunk_FUN_1059d5a0<>(*(undefined4 *)(param_1 + 0xc));
  return (undefined4)(0);
}


// Reference entry 1059da00; body size 24 bytes.
#line 1 "ENTRY_1059da00"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1059da00(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1059e630; body size 25 bytes.
#line 1 "ENTRY_1059e630"

int * __thiscall Recovered_Bulk::m_FUN_1059e630(int *param_2)
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


// Reference entry 1059ed40; body size 33 bytes.
#line 1 "ENTRY_1059ed40"

void FUN_1059ed40(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x18) {
    thunk_FUN_10def0d0();
  }
  return;
}


// Reference entry 1059f110; body size 57 bytes.
#line 1 "ENTRY_1059f110"

void __stdcall FUN_1059f110(undefined4 param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = (char)(*(char *)((int)param_2 + 0xd));
  while (cVar1 == '\0') {
    thunk_FUN_1059f110((int)(param_1),(int)(param_2[2]));
    piVar2 = (int *)((int *)*param_2);
    thunk_FUN_1148a50e(param_2,0x30);
    param_2 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }
  return;
}


// Reference entry 1059f160; body size 49 bytes.
#line 1 "ENTRY_1059f160"

int __thiscall Recovered_Bulk::m_FUN_1059f160(int *param_2)
{
  int *param_1 = (int *)this;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_1059f1a0((int)((uint)&local_c),(int)(param_2));
  if ((*(char *)(local_4 + 0xd) != '\0') || ((int)(*param_2) < *(int *)(local_4 + 0x10))) {
    local_4 = (int)(*param_1);
  }
  return (int)(local_4);
}


// Reference entry 1059fa40; body size 48 bytes.
#line 1 "ENTRY_1059fa40"

undefined4 * __fastcall FUN_1059fa40(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x30), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 1059ff10; body size 37 bytes.
#line 1 "ENTRY_1059ff10"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1059ff10(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizLayer);
  param_1[1] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1059ff40; body size 47 bytes.
#line 1 "ENTRY_1059ff40"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1059ff40(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizLayer);
  param_1[2] = (undefined4)(0);
  thunk_FUN_104d4740(param_1 + 3);
  return (undefined4 *)(param_1);
}


// Reference entry 1059ff80; body size 35 bytes.
#line 1 "ENTRY_1059ff80"

undefined4 * __fastcall FUN_1059ff80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizLayer);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 105a0080; body size 19 bytes.
#line 1 "ENTRY_105a0080"

void __fastcall FUN_105a0080(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x30);
  }
  return;
}


// Reference entry 105a0130; body size 19 bytes.
#line 1 "ENTRY_105a0130"

void __fastcall FUN_105a0130(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x30);
  }
  return;
}


// Reference entry 105a0150; body size 33 bytes.
#line 1 "ENTRY_105a0150"

void __fastcall FUN_105a0150(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(param_1[1]);
  for (iVar2 = (int)(*param_1); iVar2 != iVar1; iVar2 = iVar2 + 0x18) {
    thunk_FUN_10def0d0();
  }
  return;
}


// Reference entry 105a0660; body size 34 bytes.
#line 1 "ENTRY_105a0660"

void __fastcall FUN_105a0660(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizLifecycleRecorder);
  ((_Tree<> *)(0))->m_op_dtor();
  FUN_100517a8();
  FUN_100517a8();
  return;
}


// Reference entry 105a0c80; body size 32 bytes.
#line 1 "ENTRY_105a0c80"

undefined4 __thiscall Recovered_Bulk::m_FUN_105a0c80(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10def0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x18);
  }
  return (undefined4)(param_1);
}


// Reference entry 105a0cb0; body size 43 bytes.
#line 1 "ENTRY_105a0cb0"

undefined4 __thiscall Recovered_Bulk::m_FUN_105a0cb0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x1c);
  }
  return (undefined4)(param_1);
}


// Reference entry 105a0d80; body size 57 bytes.
#line 1 "ENTRY_105a0d80"

undefined4 * __thiscall Recovered_Bulk::m_FUN_105a0d80(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizLifecycleRecorder);
  ((_Tree<> *)(0))->m_op_dtor();
  FUN_100517a8();
  FUN_100517a8();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x7c);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105a0e00; body size 25 bytes.
#line 1 "ENTRY_105a0e00"

void __fastcall FUN_105a0e00(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x30), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 105a1540; body size 35 bytes.
#line 1 "ENTRY_105a1540"

void __stdcall FUN_105a1540(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x18) {
    thunk_FUN_10def0d0();
  }
  return;
}


// Reference entry 105a1570; body size 47 bytes.
#line 1 "ENTRY_105a1570"

void __stdcall FUN_105a1570(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = (int)(param_1 + 4);
    do {
      thunk_FUN_105a1d20();
      thunk_FUN_105a1c80();
      iVar1 = (int)(iVar2 + 0x18);
      iVar2 = (int)(iVar2 + 0x1c);
    } while (iVar1 != param_2);
  }
  return;
}


// Reference entry 105a2380; body size 59 bytes.
#line 1 "ENTRY_105a2380"

void __stdcall FUN_105a2380(int param_1,int param_2)

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


// Reference entry 105a2990; body size 31 bytes.
#line 1 "ENTRY_105a2990"

undefined4 __fastcall FUN_105a2990(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = (int)(((SCVtbl_7_0*)(param_1))->v(), 0);
  if (iVar1 != 0) {
    piVar2 = (int *)((int *)((SCVtbl_7_0*)(param_1))->v(), 0);
                    
                    
    uVar3 = (undefined4)(((SCVtbl_1_0*)(piVar2))->v(), 0);
    return (undefined4)(uVar3);
  }
  return (undefined4)(0);
}


// Reference entry 105a29c0; body size 30 bytes.
#line 1 "ENTRY_105a29c0"

undefined4 __fastcall FUN_105a29c0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = (int)(((SCVtbl_6_0*)(param_1))->v(), 0);
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)((undefined4 *)((SCVtbl_6_0*)(param_1))->v(), 0);
                    
                    
    uVar3 = (undefined4)((**(code **)*puVar2)(), 0);
    return (undefined4)(uVar3);
  }
  return (undefined4)(0);
}


// Reference entry 105a2a70; body size 31 bytes.
#line 1 "ENTRY_105a2a70"

undefined4 __fastcall FUN_105a2a70(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = (int)(((SCVtbl_5_0*)(param_1))->v(), 0);
  if (iVar1 != 0) {
    piVar2 = (int *)((int *)((SCVtbl_5_0*)(param_1))->v(), 0);
                    
                    
    uVar3 = (undefined4)(((SCVtbl_3_0*)(piVar2))->v(), 0);
    return (undefined4)(uVar3);
  }
  return (undefined4)(0);
}


// Reference entry 105a2aa0; body size 31 bytes.
#line 1 "ENTRY_105a2aa0"

undefined4 __fastcall FUN_105a2aa0(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = (int)(((SCVtbl_4_0*)(param_1))->v(), 0);
  if (iVar1 != 0) {
    piVar2 = (int *)((int *)((SCVtbl_4_0*)(param_1))->v(), 0);
                    
                    
    uVar3 = (undefined4)(((SCVtbl_2_0*)(piVar2))->v(), 0);
    return (undefined4)(uVar3);
  }
  return (undefined4)(0);
}


// Reference entry 105a2bb0; body size 46 bytes.
#line 1 "ENTRY_105a2bb0"

bool __thiscall Recovered_Bulk::m_FUN_105a2bb0(int param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  piVar1 = (int *)(*(int **)(param_1 + 0xc), 0);
  uVar3 = (uint)(0);
  uVar2 = (uint)(*(int *)(param_1 + 0x10) - (int)piVar1 >> 2);
  if (uVar2 != 0) {
    do {
      if (*piVar1 == (int)((param_2))) {
        return (uint)(((uint)((int3)((uint)piVar1 >> 8)) << 8 | (uint)(1)));
      }
      uVar3 = (uint)(uVar3 + 1);
      piVar1 = (int *)(piVar1 + 1);
    } while (uVar3 < uVar2);
  }
  return (bool)0;
}


// Reference entry 105a2bf0; body size 45 bytes.
#line 1 "ENTRY_105a2bf0"

bool __thiscall Recovered_Bulk::m_FUN_105a2bf0(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  piVar1 = (int *)((int *)*param_1);
  uVar3 = (uint)(0);
  uVar2 = (uint)(param_1[1] - (int)piVar1 >> 2);
  if (uVar2 != 0) {
    do {
      if (*piVar1 == (int)((param_2))) {
        return (uint)(((uint)((int3)((uint)piVar1 >> 8)) << 8 | (uint)(1)));
      }
      uVar3 = (uint)(uVar3 + 1);
      piVar1 = (int *)(piVar1 + 1);
    } while (uVar3 < uVar2);
  }
  return (bool)0;
}


// Reference entry 105a2c70; body size 31 bytes.
#line 1 "ENTRY_105a2c70"

void __fastcall FUN_105a2c70(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (int)(((SCVtbl_5_0*)(param_1))->v(), 0);
  if (iVar1 != 0) {
    piVar2 = (int *)((int *)((SCVtbl_5_0*)(param_1))->v(), 0);
                    
                    
    ((SCVtbl_8_0*)(piVar2))->v();
    return;
  }
  return;
}


// Reference entry 105a2ca0; body size 31 bytes.
#line 1 "ENTRY_105a2ca0"

void __fastcall FUN_105a2ca0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (int)(((SCVtbl_5_0*)(param_1))->v(), 0);
  if (iVar1 != 0) {
    piVar2 = (int *)((int *)((SCVtbl_5_0*)(param_1))->v(), 0);
                    
                    
    ((SCVtbl_9_0*)(piVar2))->v();
    return;
  }
  return;
}


// Reference entry 105a3210; body size 24 bytes.
#line 1 "ENTRY_105a3210"

undefined4 FUN_105a3210(void)

{
  SCLibrary *pSVar1;
  
  pSVar1 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton(), 0);
  if (((SCLibrary *)(pSVar1) != (SCLibrary *)(0x0)) && (pSVar1[0x18c] != 0x0)) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


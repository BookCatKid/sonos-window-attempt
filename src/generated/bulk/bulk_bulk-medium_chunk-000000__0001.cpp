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
struct SCImageResource { char _pad; SCImageResource(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); static int op_ctor(...) { return 0; } };
struct SCLibParameters { char _pad; SCLibParameters(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); static int op_ctor(...) { return 0; } static int op_dtor(...) { return 0; } };
struct SCLibrary { char _pad; SCLibrary(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); template<class... A> int cleanupSingleton(A...); template<class... A> int convertMACAddressToBinary(A...); template<class... A> int createSingleton(A...); template<class... A> int getSingleton(A...); template<class... A> int init(A...); template<class... A> int isShuttingDown(A...); static int op_dtor(...) { return 0; } template<class... A> int shutdownSingleton(A...); };
struct SCProperty { char _pad; SCProperty(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); static int op_dtor(...) { return 0; } };
struct SCPropertyBag { char _pad; SCPropertyBag(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); static int op_dtor(...) { return 0; } };
struct SCStr { char _pad; SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); template<class... A> int beginsWith(A...); template<class... A> int format(A...); template<class... A> int int_addref(A...); template<class... A> int int_allocRep(A...); template<class... A> int int_formatv(A...); template<class... A> int int_release(A...); static int op_ctor(...) { return 0; } static int op_eq(...) { return 0; } static int op_lt(...) { return 0; } template<class... A> int setFromUTF16(A...); template<class... A> int stringWithFormat(A...); };
struct AddCustomRadioStation { char _pad; AddCustomRadioStation(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct AddVectoredExceptionHandler { char _pad; AddVectoredExceptionHandler(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct BatteryWeakChargerData { char _pad; BatteryWeakChargerData(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct DisplayWizard { char _pad; DisplayWizard(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct End { char _pad; End(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct EndOfLife { char _pad; EndOfLife(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct FactoryReset { char _pad; FactoryReset(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Fetc { char _pad; Fetc(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Flushing { char _pad; Flushing(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct ForgotHousehold { char _pad; ForgotHousehold(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Globals { char _pad; Globals(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct GuestMode { char _pad; GuestMode(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct InvalidOptimo2OrientationData { char _pad; InvalidOptimo2OrientationData(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct LegacyCRModernHH { char _pad; LegacyCRModernHH(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct ModernCRLegacyZPsAndHHSWGen { char _pad; ModernCRLegacyZPsAndHHSWGen(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct ModernCRMixedLegacyHH { char _pad; ModernCRMixedLegacyHH(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct NoNetwork { char _pad; NoNetwork(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Number { char _pad; Number(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct OpenURlAction { char _pad; OpenURlAction(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct OutdatedController { char _pad; OutdatedController(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Reading { char _pad; Reading(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct RemoveVectoredExceptionHandler { char _pad; RemoveVectoredExceptionHandler(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Removing { char _pad; Removing(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct RequireTokenAction { char _pad; RequireTokenAction(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Resource { char _pad; Resource(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Returning { char _pad; Returning(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCAppSessionManager { char _pad; SCAppSessionManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCAppUrlActionDescriptor { char _pad; SCAppUrlActionDescriptor(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCCompoundAction { char _pad; SCCompoundAction(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCController { char _pad; SCController(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCControllerTest { char _pad; SCControllerTest(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCData { char _pad; SCData(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCElapsedTimeMeasurement { char _pad; SCElapsedTimeMeasurement(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCFetchTokenAction { char _pad; SCFetchTokenAction(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIActionCategoryDefault { char _pad; SCIActionCategoryDefault(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIActionCategoryDragAndDrop { char _pad; SCIActionCategoryDragAndDrop(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIActionCategorySettings { char _pad; SCIActionCategorySettings(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIActionNoArgDescriptor { char _pad; SCIActionNoArgDescriptor(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIActionOnGroupDescriptor { char _pad; SCIActionOnGroupDescriptor(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIAddToQueueAtNumberDescriptor { char _pad; SCIAddToQueueAtNumberDescriptor(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIBrowseDataSource { char _pad; SCIBrowseDataSource(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIBrowseItem { char _pad; SCIBrowseItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIController { char _pad; SCIController(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIExperimentManager { char _pad; SCIExperimentManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIHousehold { char _pad; SCIHousehold(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIHouseholdManager { char _pad; SCIHouseholdManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCISettingsMenu { char _pad; SCISettingsMenu(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIShareManager { char _pad; SCIShareManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIStringInput { char _pad; SCIStringInput(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCISystemStatusManager { char _pad; SCISystemStatusManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIncrementHHSwgenAndOnlineUpdateWizardActionDescriptor { char _pad; SCIncrementHHSwgenAndOnlineUpdateWizardActionDescriptor(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCInnerActionFactory { char _pad; SCInnerActionFactory(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCThreadSafeInc { char _pad; SCThreadSafeInc(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCTime { char _pad; SCTime(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCVersion { char _pad; SCVersion(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Search { char _pad; Search(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SelectedItemsAddToQueue { char _pad; SelectedItemsAddToQueue(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SelectedItemsAddToQueueAtIndex { char _pad; SelectedItemsAddToQueueAtIndex(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SelectedItemsPlayNext { char _pad; SelectedItemsPlayNext(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SelectedItemsReplaceQueue { char _pad; SelectedItemsReplaceQueue(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Service { char _pad; Service(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Shares { char _pad; Shares(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Sonos { char _pad; Sonos(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct State { char _pad; State(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Suppression { char _pad; Suppression(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SwfStr { char _pad; SwfStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Universal { char _pad; Universal(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Updating { char _pad; Updating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
typedef void *PVECTORED_EXCEPTION_HANDLER;
typedef void *T;
typedef void *US;
typedef void *WARNING;
typedef void *X;
using namespace std;
struct Recovered_Bulk { char _pad; int * __thiscall m_FUN_101a2b10(int *param_2); template<class... A> int m_FUN_101a2b10(A...); int * __thiscall m_FUN_101a2b50(int *param_2); template<class... A> int m_FUN_101a2b50(A...); int * __thiscall m_FUN_101a2b90(int *param_2); template<class... A> int m_FUN_101a2b90(A...); void __thiscall m_FUN_101a3370(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_101a3370(A...); bool __thiscall m_FUN_101a4420(undefined4 *param_2); template<class... A> int m_FUN_101a4420(A...); bool __thiscall m_FUN_101a4460(undefined1 *param_2); template<class... A> int m_FUN_101a4460(A...); bool __thiscall m_FUN_101a4d40(undefined4 *param_2); template<class... A> int m_FUN_101a4d40(A...); bool __thiscall m_FUN_101a4d80(undefined1 *param_2); template<class... A> int m_FUN_101a4d80(A...); void __thiscall m_FUN_101a5590(ushort *param_2); template<class... A> int m_FUN_101a5590(A...); undefined4 * __thiscall m_FUN_101a8d90(int *param_2); template<class... A> int m_FUN_101a8d90(A...); undefined4 * __thiscall m_FUN_101a8dd0(int *param_2); template<class... A> int m_FUN_101a8dd0(A...); undefined4 * __thiscall m_FUN_101a8df0(int *param_2); template<class... A> int m_FUN_101a8df0(A...); undefined4 __thiscall m_FUN_101a93e0(byte param_2); template<class... A> int m_FUN_101a93e0(A...); undefined4 * __thiscall m_FUN_101a9410(byte param_2); template<class... A> int m_FUN_101a9410(A...); undefined4 * __thiscall m_FUN_101a9450(byte param_2); template<class... A> int m_FUN_101a9450(A...); undefined4 * __thiscall m_FUN_101a9490(byte param_2); template<class... A> int m_FUN_101a9490(A...); void __thiscall m_FUN_101a9d20(undefined4 param_2); template<class... A> int m_FUN_101a9d20(A...); void __thiscall m_FUN_101aa430(uint param_2); template<class... A> int m_FUN_101aa430(A...); void __thiscall m_FUN_101ab320(int *param_2); template<class... A> int m_FUN_101ab320(A...); void __thiscall m_FUN_101ab9e0(int param_2); template<class... A> int m_FUN_101ab9e0(A...); undefined4 * __thiscall m_FUN_101ac3a0(int param_2); template<class... A> int m_FUN_101ac3a0(A...); undefined4 * __thiscall m_FUN_101ac420(int *param_2); template<class... A> int m_FUN_101ac420(A...); undefined4 * __thiscall m_FUN_101ac990(int *param_2); template<class... A> int m_FUN_101ac990(A...); undefined4 * __thiscall m_FUN_101aced0(int param_2); template<class... A> int m_FUN_101aced0(A...); undefined4 * __thiscall m_FUN_101b1580(byte param_2); template<class... A> int m_FUN_101b1580(A...); undefined4 * __thiscall m_FUN_101b15c0(byte param_2); template<class... A> int m_FUN_101b15c0(A...); undefined4 * __thiscall m_FUN_101b1600(byte param_2); template<class... A> int m_FUN_101b1600(A...); undefined4 * __thiscall m_FUN_101b1640(byte param_2); template<class... A> int m_FUN_101b1640(A...); undefined4 * __thiscall m_FUN_101b1730(byte param_2); template<class... A> int m_FUN_101b1730(A...); undefined4 * __thiscall m_FUN_101b1760(byte param_2); template<class... A> int m_FUN_101b1760(A...); undefined4 __thiscall m_FUN_101b19d0(byte param_2); template<class... A> int m_FUN_101b19d0(A...); undefined4 * __thiscall m_FUN_101b1aa0(byte param_2); template<class... A> int m_FUN_101b1aa0(A...); undefined4 * __thiscall m_FUN_101b1ae0(byte param_2); template<class... A> int m_FUN_101b1ae0(A...); undefined4 * __thiscall m_FUN_101b1b10(byte param_2); template<class... A> int m_FUN_101b1b10(A...); undefined4 * __thiscall m_FUN_101b1b40(byte param_2); template<class... A> int m_FUN_101b1b40(A...); undefined4 * __thiscall m_FUN_101b1b70(byte param_2); template<class... A> int m_FUN_101b1b70(A...); SCLibrary * __thiscall m_FUN_101b1ba0(byte param_2); template<class... A> int m_FUN_101b1ba0(A...); undefined4 * __thiscall m_FUN_101b1bd0(byte param_2); template<class... A> int m_FUN_101b1bd0(A...); void __thiscall m_FUN_101b2980(int *param_2); template<class... A> int m_FUN_101b2980(A...); void __thiscall m_FUN_101b29d0(int *param_2); template<class... A> int m_FUN_101b29d0(A...); void __thiscall m_FUN_101b2a20(int *param_2); template<class... A> int m_FUN_101b2a20(A...); void __thiscall m_FUN_101b2a70(int *param_2); template<class... A> int m_FUN_101b2a70(A...); void __thiscall m_FUN_101b2ac0(int param_2); template<class... A> int m_FUN_101b2ac0(A...); undefined4 __thiscall m_FUN_101b2d50(int param_2); template<class... A> int m_FUN_101b2d50(A...); undefined4 __thiscall m_FUN_101b2d90(int param_2); template<class... A> int m_FUN_101b2d90(A...); undefined4 __thiscall m_FUN_101b2dd0(int param_2); template<class... A> int m_FUN_101b2dd0(A...); undefined4 __thiscall m_FUN_101b4d70(int param_2); template<class... A> int m_FUN_101b4d70(A...); int * __thiscall m_FUN_101b5290(int *param_2); template<class... A> int m_FUN_101b5290(A...); undefined4 __thiscall m_FUN_101b5e00(undefined4 param_2,int param_3); template<class... A> int m_FUN_101b5e00(A...); int __thiscall m_FUN_101b5e50(int param_2); template<class... A> int m_FUN_101b5e50(A...); uint __thiscall m_FUN_101b7cd0(int param_2); template<class... A> int m_FUN_101b7cd0(A...); void __thiscall m_FUN_101b7f90(int *param_2); template<class... A> int m_FUN_101b7f90(A...); void __thiscall m_FUN_101b7fb0(int *param_2); template<class... A> int m_FUN_101b7fb0(A...); undefined4 __thiscall m_FUN_101b7fd0(int param_2); template<class... A> int m_FUN_101b7fd0(A...); void __thiscall m_FUN_101b8080(int *param_2); template<class... A> int m_FUN_101b8080(A...); undefined4 * __thiscall m_FUN_101b80e0(int *param_2); template<class... A> int m_FUN_101b80e0(A...); undefined4 * __thiscall m_FUN_101b8120(int *param_2); template<class... A> int m_FUN_101b8120(A...); undefined4 * __thiscall m_FUN_101b83f0(byte param_2); template<class... A> int m_FUN_101b83f0(A...); undefined4 * __thiscall m_FUN_101b8430(byte param_2); template<class... A> int m_FUN_101b8430(A...); char * __thiscall m_FUN_101b8530(char *param_2); template<class... A> int m_FUN_101b8530(A...); bool __thiscall m_FUN_101b8740(char *param_2); template<class... A> int m_FUN_101b8740(A...); SCStr * __thiscall m_FUN_101b87d0(SCStr *param_2); template<class... A> int m_FUN_101b87d0(A...); void __thiscall m_FUN_101b8f90(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_101b8f90(A...); undefined4 * __thiscall m_FUN_101b9190(undefined4 param_2); template<class... A> int m_FUN_101b9190(A...); undefined4 * __thiscall m_FUN_101b9650(int *param_2); template<class... A> int m_FUN_101b9650(A...); undefined4 * __thiscall m_FUN_101b9700(int *param_2); template<class... A> int m_FUN_101b9700(A...); undefined4 * __thiscall m_FUN_101b9890(int param_2); template<class... A> int m_FUN_101b9890(A...); undefined4 * __thiscall m_FUN_101ba7d0(byte param_2); template<class... A> int m_FUN_101ba7d0(A...); undefined4 * __thiscall m_FUN_101ba800(byte param_2); template<class... A> int m_FUN_101ba800(A...); undefined4 * __thiscall m_FUN_101ba840(byte param_2); template<class... A> int m_FUN_101ba840(A...); undefined4 __thiscall m_FUN_101ba880(byte param_2); template<class... A> int m_FUN_101ba880(A...); undefined4 * __thiscall m_FUN_101ba8b0(byte param_2); template<class... A> int m_FUN_101ba8b0(A...); undefined4 __thiscall m_FUN_101ba8e0(byte param_2); template<class... A> int m_FUN_101ba8e0(A...); undefined4 * __thiscall m_FUN_101ba910(byte param_2); template<class... A> int m_FUN_101ba910(A...); undefined4 * __thiscall m_FUN_101ba950(byte param_2); template<class... A> int m_FUN_101ba950(A...); undefined4 * __thiscall m_FUN_101ba980(byte param_2); template<class... A> int m_FUN_101ba980(A...); undefined4 * __thiscall m_FUN_101baa50(byte param_2); template<class... A> int m_FUN_101baa50(A...); void __thiscall m_FUN_101bac00(int *param_2); template<class... A> int m_FUN_101bac00(A...); void __thiscall m_FUN_101bac50(int *param_2); template<class... A> int m_FUN_101bac50(A...); void __thiscall m_FUN_101bad20(int param_2); template<class... A> int m_FUN_101bad20(A...); void __thiscall m_FUN_101bad70(int param_2); template<class... A> int m_FUN_101bad70(A...); void __thiscall m_FUN_101bc430(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_101bc430(A...); void __thiscall m_FUN_101bc460(int *param_2); template<class... A> int m_FUN_101bc460(A...); void __thiscall m_FUN_101bc480(int *param_2); template<class... A> int m_FUN_101bc480(A...); undefined4 * __thiscall m_FUN_101bdfa0(int *param_2); template<class... A> int m_FUN_101bdfa0(A...); undefined4 * __thiscall m_FUN_101be2b0(byte param_2); template<class... A> int m_FUN_101be2b0(A...); undefined4 * __thiscall m_FUN_101be2f0(byte param_2); template<class... A> int m_FUN_101be2f0(A...); void __thiscall m_FUN_101be3c0(int *param_2); template<class... A> int m_FUN_101be3c0(A...); void __thiscall m_FUN_101be410(SCStr *param_2); template<class... A> int m_FUN_101be410(A...); void __thiscall m_FUN_101bef40(SCStr *param_2); template<class... A> int m_FUN_101bef40(A...); void __thiscall m_FUN_101c35c0(int *param_2); template<class... A> int m_FUN_101c35c0(A...); int __thiscall m_FUN_101c4700(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_101c4700(A...); void __thiscall m_FUN_101c4ee0(int param_2); template<class... A> int m_FUN_101c4ee0(A...); void __thiscall m_FUN_101c5120(undefined4 *param_2); template<class... A> int m_FUN_101c5120(A...); void __thiscall m_FUN_101c5210(int *param_2,undefined4 param_3); template<class... A> int m_FUN_101c5210(A...); undefined4 * __thiscall m_FUN_101c55c0(int *param_2); template<class... A> int m_FUN_101c55c0(A...); undefined4 * __thiscall m_FUN_101c5640(int *param_2); template<class... A> int m_FUN_101c5640(A...); undefined4 * __thiscall m_FUN_101c5660(int *param_2); template<class... A> int m_FUN_101c5660(A...); undefined4 * __thiscall m_FUN_101c5680(int *param_2); template<class... A> int m_FUN_101c5680(A...); int * __thiscall m_FUN_101c62f0(int *param_2); template<class... A> int m_FUN_101c62f0(A...); undefined4 * __thiscall m_FUN_101c77c0(byte param_2); template<class... A> int m_FUN_101c77c0(A...); undefined4 * __thiscall m_FUN_101c7800(byte param_2); template<class... A> int m_FUN_101c7800(A...); undefined4 * __thiscall m_FUN_101c7840(byte param_2); template<class... A> int m_FUN_101c7840(A...); undefined4 * __thiscall m_FUN_101c7a70(byte param_2); template<class... A> int m_FUN_101c7a70(A...); undefined4 * __thiscall m_FUN_101c7ab0(byte param_2); template<class... A> int m_FUN_101c7ab0(A...); undefined4 * __thiscall m_FUN_101c7ea0(byte param_2); template<class... A> int m_FUN_101c7ea0(A...); void __thiscall m_FUN_101c8730(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_101c8730(A...); void __thiscall m_FUN_101c97f0(int *param_2); template<class... A> int m_FUN_101c97f0(A...); void __thiscall m_FUN_101c9840(int *param_2); template<class... A> int m_FUN_101c9840(A...); void __thiscall m_FUN_101c9890(int *param_2); template<class... A> int m_FUN_101c9890(A...); void __thiscall m_FUN_101c98e0(int *param_2); template<class... A> int m_FUN_101c98e0(A...); void __thiscall m_FUN_101c9930(int param_2); template<class... A> int m_FUN_101c9930(A...); void __thiscall m_FUN_101cb160(undefined4 *param_2); template<class... A> int m_FUN_101cb160(A...); void __thiscall m_FUN_101cdd70(undefined4 param_2); template<class... A> int m_FUN_101cdd70(A...); void __thiscall m_FUN_101ce970(int param_2); template<class... A> int m_FUN_101ce970(A...); void __thiscall m_FUN_101ce9a0(int param_2); template<class... A> int m_FUN_101ce9a0(A...); undefined4 * __thiscall m_FUN_101cf880(int param_2); template<class... A> int m_FUN_101cf880(A...); undefined4 * __thiscall m_FUN_101cf8d0(int param_2); template<class... A> int m_FUN_101cf8d0(A...); undefined4 * __thiscall m_FUN_101cf920(undefined4 param_2); template<class... A> int m_FUN_101cf920(A...); undefined4 * __thiscall m_FUN_101cf9a0(int param_2); template<class... A> int m_FUN_101cf9a0(A...); undefined4 * __thiscall m_FUN_101cf9d0(undefined4 param_2); template<class... A> int m_FUN_101cf9d0(A...); undefined4 * __thiscall m_FUN_101cfa50(int param_2); template<class... A> int m_FUN_101cfa50(A...); undefined4 * __thiscall m_FUN_101cfae0(int *param_2); template<class... A> int m_FUN_101cfae0(A...); undefined4 * __thiscall m_FUN_101cfb80(int *param_2); template<class... A> int m_FUN_101cfb80(A...); undefined4 * __thiscall m_FUN_101cfbc0(int *param_2); template<class... A> int m_FUN_101cfbc0(A...); undefined4 * __thiscall m_FUN_101cfc00(int *param_2); template<class... A> int m_FUN_101cfc00(A...); undefined4 * __thiscall m_FUN_101cfc70(int *param_2); template<class... A> int m_FUN_101cfc70(A...); undefined4 * __thiscall m_FUN_101cfcf0(int *param_2); template<class... A> int m_FUN_101cfcf0(A...); undefined4 * __thiscall m_FUN_101cfd30(int *param_2); template<class... A> int m_FUN_101cfd30(A...); undefined4 * __thiscall m_FUN_101cfdc0(int *param_2); template<class... A> int m_FUN_101cfdc0(A...); undefined4 * __thiscall m_FUN_101cfe30(int *param_2); template<class... A> int m_FUN_101cfe30(A...); undefined4 * __thiscall m_FUN_101cfe90(int *param_2); template<class... A> int m_FUN_101cfe90(A...); undefined4 * __thiscall m_FUN_101cfeb0(int *param_2); template<class... A> int m_FUN_101cfeb0(A...); int __thiscall m_FUN_101d3b70(int param_2); template<class... A> int m_FUN_101d3b70(A...); int __thiscall m_FUN_101d3b90(int param_2); template<class... A> int m_FUN_101d3b90(A...); undefined4 * __thiscall m_FUN_101d5520(byte param_2); template<class... A> int m_FUN_101d5520(A...); undefined4 * __thiscall m_FUN_101d5560(byte param_2); template<class... A> int m_FUN_101d5560(A...); undefined4 * __thiscall m_FUN_101d55a0(byte param_2); template<class... A> int m_FUN_101d55a0(A...); undefined4 * __thiscall m_FUN_101d55e0(byte param_2); template<class... A> int m_FUN_101d55e0(A...); undefined4 * __thiscall m_FUN_101d5620(byte param_2); template<class... A> int m_FUN_101d5620(A...); undefined4 * __thiscall m_FUN_101d5660(byte param_2); template<class... A> int m_FUN_101d5660(A...); undefined4 * __thiscall m_FUN_101d56a0(byte param_2); template<class... A> int m_FUN_101d56a0(A...); undefined4 * __thiscall m_FUN_101d56f0(byte param_2); template<class... A> int m_FUN_101d56f0(A...); undefined4 __thiscall m_FUN_101d5740(byte param_2); template<class... A> int m_FUN_101d5740(A...); int __thiscall m_FUN_101d5800(byte param_2); template<class... A> int m_FUN_101d5800(A...); undefined4 * __thiscall m_FUN_101d5850(byte param_2); template<class... A> int m_FUN_101d5850(A...); undefined4 * __thiscall m_FUN_101d5930(byte param_2); template<class... A> int m_FUN_101d5930(A...); undefined4 __thiscall m_FUN_101d5970(byte param_2); template<class... A> int m_FUN_101d5970(A...); undefined4 * __thiscall m_FUN_101d59a0(byte param_2); template<class... A> int m_FUN_101d59a0(A...); undefined4 * __thiscall m_FUN_101d59e0(byte param_2); template<class... A> int m_FUN_101d59e0(A...); undefined4 * __thiscall m_FUN_101d5a20(byte param_2); template<class... A> int m_FUN_101d5a20(A...); undefined4 * __thiscall m_FUN_101d5b00(byte param_2); template<class... A> int m_FUN_101d5b00(A...); undefined4 * __thiscall m_FUN_101d5bd0(byte param_2); template<class... A> int m_FUN_101d5bd0(A...); undefined4 * __thiscall m_FUN_101d5c00(byte param_2); template<class... A> int m_FUN_101d5c00(A...); undefined4 * __thiscall m_FUN_101d5c30(byte param_2); template<class... A> int m_FUN_101d5c30(A...); undefined4 * __thiscall m_FUN_101d5c60(byte param_2); template<class... A> int m_FUN_101d5c60(A...); undefined4 * __thiscall m_FUN_101d5d30(byte param_2); template<class... A> int m_FUN_101d5d30(A...); undefined4 __thiscall m_FUN_101d5d70(byte param_2); template<class... A> int m_FUN_101d5d70(A...); SCProperty * __thiscall m_FUN_101d5da0(byte param_2); template<class... A> int m_FUN_101d5da0(A...); SCPropertyBag * __thiscall m_FUN_101d5dd0(byte param_2); template<class... A> int m_FUN_101d5dd0(A...); undefined4 * __thiscall m_FUN_101d5ea0(byte param_2); template<class... A> int m_FUN_101d5ea0(A...); void __thiscall m_FUN_101d6060(undefined4 *param_2); template<class... A> int m_FUN_101d6060(A...); void __thiscall m_FUN_101d6080(undefined4 *param_2); template<class... A> int m_FUN_101d6080(A...); void __thiscall m_FUN_101d6200(char param_2); template<class... A> int m_FUN_101d6200(A...); void __thiscall m_FUN_101d6220(char param_2); template<class... A> int m_FUN_101d6220(A...); void __thiscall m_FUN_101d6240(char param_2); template<class... A> int m_FUN_101d6240(A...); void __thiscall m_FUN_101d6440(undefined4 *param_2,undefined4 param_3); template<class... A> int m_FUN_101d6440(A...); void __thiscall m_FUN_101d6f80(undefined4 *param_2); template<class... A> int m_FUN_101d6f80(A...); void __thiscall m_FUN_101d6fa0(undefined4 *param_2); template<class... A> int m_FUN_101d6fa0(A...); void __thiscall m_FUN_101d7950(int *param_2); template<class... A> int m_FUN_101d7950(A...); void __thiscall m_FUN_101d79a0(int *param_2); template<class... A> int m_FUN_101d79a0(A...); void __thiscall m_FUN_101d79f0(int *param_2); template<class... A> int m_FUN_101d79f0(A...); void __thiscall m_FUN_101d7a40(int *param_2); template<class... A> int m_FUN_101d7a40(A...); void __thiscall m_FUN_101d7a90(int *param_2); template<class... A> int m_FUN_101d7a90(A...); void __thiscall m_FUN_101d7ae0(int *param_2); template<class... A> int m_FUN_101d7ae0(A...); void __thiscall m_FUN_101d7b30(int *param_2); template<class... A> int m_FUN_101d7b30(A...); void __thiscall m_FUN_101d7b80(int *param_2); template<class... A> int m_FUN_101d7b80(A...); void __thiscall m_FUN_101d7bd0(int *param_2); template<class... A> int m_FUN_101d7bd0(A...); void __thiscall m_FUN_101d7c20(int *param_2); template<class... A> int m_FUN_101d7c20(A...); void __thiscall m_FUN_101d7c70(int *param_2); template<class... A> int m_FUN_101d7c70(A...); void __thiscall m_FUN_101d7cc0(int *param_2); template<class... A> int m_FUN_101d7cc0(A...); void __thiscall m_FUN_101d7d10(int *param_2); template<class... A> int m_FUN_101d7d10(A...); void __thiscall m_FUN_101d7d60(int *param_2); template<class... A> int m_FUN_101d7d60(A...); void __thiscall m_FUN_101d7db0(int param_2); template<class... A> int m_FUN_101d7db0(A...); void __thiscall m_FUN_101d7de0(int param_2); template<class... A> int m_FUN_101d7de0(A...); int * __thiscall m_FUN_101d8b20(int *param_2); template<class... A> int m_FUN_101d8b20(A...); void __thiscall m_FUN_101d8db0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_101d8db0(A...); SCStr * __thiscall m_FUN_101da020(SCStr *param_2); template<class... A> int m_FUN_101da020(A...); SCStr * __thiscall m_FUN_101da040(SCStr *param_2); template<class... A> int m_FUN_101da040(A...); void __thiscall m_FUN_101dfc00(int param_2); template<class... A> int m_FUN_101dfc00(A...); int __thiscall m_FUN_101e0b40(SCStr *param_2); template<class... A> int m_FUN_101e0b40(A...); void __thiscall m_FUN_101e0dc0(int param_2); template<class... A> int m_FUN_101e0dc0(A...); void __thiscall m_FUN_101e0df0(int param_2); template<class... A> int m_FUN_101e0df0(A...); undefined4 * __thiscall m_FUN_101e0f70(int *param_2); template<class... A> int m_FUN_101e0f70(A...); undefined4 * __thiscall m_FUN_101e1000(int *param_2); template<class... A> int m_FUN_101e1000(A...); undefined4 * __thiscall m_FUN_101e1020(int *param_2); template<class... A> int m_FUN_101e1020(A...); undefined4 * __thiscall m_FUN_101e1040(int *param_2); template<class... A> int m_FUN_101e1040(A...); undefined4 * __thiscall m_FUN_101e1060(int *param_2); template<class... A> int m_FUN_101e1060(A...); undefined4 * __thiscall m_FUN_101e1080(int *param_2); template<class... A> int m_FUN_101e1080(A...); undefined4 * __thiscall m_FUN_101e10a0(int *param_2); template<class... A> int m_FUN_101e10a0(A...); void __thiscall m_FUN_101e23d0(int *param_2); template<class... A> int m_FUN_101e23d0(A...); void __thiscall m_FUN_101e2420(int *param_2); template<class... A> int m_FUN_101e2420(A...); void __thiscall m_FUN_101e2470(int param_2); template<class... A> int m_FUN_101e2470(A...); void __thiscall m_FUN_101e24a0(int param_2); template<class... A> int m_FUN_101e24a0(A...); int * __thiscall m_FUN_101e3f40(int *param_2); template<class... A> int m_FUN_101e3f40(A...); int __thiscall m_FUN_101e6b50(SCStr *param_2); template<class... A> int m_FUN_101e6b50(A...); SCStr * __thiscall m_FUN_101e6e10(SCStr *param_2); template<class... A> int m_FUN_101e6e10(A...); int * __thiscall m_FUN_101e71e0(int *param_2); template<class... A> int m_FUN_101e71e0(A...); undefined4 __thiscall m_FUN_101e7200(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_101e7200(A...); SCStr * __thiscall m_FUN_101e7220(SCStr *param_2); template<class... A> int m_FUN_101e7220(A...); void __thiscall m_FUN_101e9b50(undefined4 *param_2); template<class... A> int m_FUN_101e9b50(A...); void __thiscall m_FUN_101e9ba0(undefined4 *param_2); template<class... A> int m_FUN_101e9ba0(A...); undefined4 * __thiscall m_FUN_101e9e00(int *param_2); template<class... A> int m_FUN_101e9e00(A...); undefined4 * __thiscall m_FUN_101e9e90(int *param_2); template<class... A> int m_FUN_101e9e90(A...); undefined4 * __thiscall m_FUN_101e9ed0(int *param_2); template<class... A> int m_FUN_101e9ed0(A...); undefined4 * __thiscall m_FUN_101e9ef0(int *param_2); template<class... A> int m_FUN_101e9ef0(A...); undefined4 * __thiscall m_FUN_101e9f10(int *param_2); template<class... A> int m_FUN_101e9f10(A...); undefined4 * __thiscall m_FUN_101e9f30(int *param_2); template<class... A> int m_FUN_101e9f30(A...); undefined4 * __thiscall m_FUN_101ebc60(byte param_2); template<class... A> int m_FUN_101ebc60(A...); undefined4 * __thiscall m_FUN_101ebca0(byte param_2); template<class... A> int m_FUN_101ebca0(A...); undefined4 * __thiscall m_FUN_101ebe00(byte param_2); template<class... A> int m_FUN_101ebe00(A...); undefined4 * __thiscall m_FUN_101ebe40(byte param_2); template<class... A> int m_FUN_101ebe40(A...); undefined4 * __thiscall m_FUN_101ebe70(byte param_2); template<class... A> int m_FUN_101ebe70(A...); undefined4 * __thiscall m_FUN_101ebea0(byte param_2); template<class... A> int m_FUN_101ebea0(A...); undefined4 * __thiscall m_FUN_101ebef0(byte param_2); template<class... A> int m_FUN_101ebef0(A...); undefined4 __thiscall m_FUN_101ebf30(byte param_2); template<class... A> int m_FUN_101ebf30(A...); undefined4 * __thiscall m_FUN_101ebf60(byte param_2); template<class... A> int m_FUN_101ebf60(A...); undefined4 __thiscall m_FUN_101ebfb0(byte param_2); template<class... A> int m_FUN_101ebfb0(A...); void __thiscall m_FUN_101ec310(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_101ec310(A...); void __thiscall m_FUN_101ec330(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_101ec330(A...); void __thiscall m_FUN_101ec720(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_101ec720(A...); void __thiscall m_FUN_101ec800(int *param_2); template<class... A> int m_FUN_101ec800(A...); void __thiscall m_FUN_101ec850(int *param_2); template<class... A> int m_FUN_101ec850(A...); void __thiscall m_FUN_101ec8a0(int *param_2); template<class... A> int m_FUN_101ec8a0(A...); void __thiscall m_FUN_101ec8f0(int *param_2); template<class... A> int m_FUN_101ec8f0(A...); SCStr * __thiscall m_FUN_101ee340(SCStr *param_2); template<class... A> int m_FUN_101ee340(A...); int * __thiscall m_FUN_101f0da0(int *param_2); template<class... A> int m_FUN_101f0da0(A...); int * __thiscall m_FUN_101f1110(int *param_2,int param_3); template<class... A> int m_FUN_101f1110(A...); undefined4 * __thiscall m_FUN_101f1140(undefined4 *param_2,undefined4 param_3); template<class... A> int m_FUN_101f1140(A...); int * __thiscall m_FUN_101f1190(int *param_2,int param_3); template<class... A> int m_FUN_101f1190(A...); SCStr * __thiscall m_FUN_101f1620(SCStr *param_2); template<class... A> int m_FUN_101f1620(A...); SCStr * __thiscall m_FUN_101f1660(SCStr *param_2); template<class... A> int m_FUN_101f1660(A...); undefined4 __thiscall m_FUN_101f1680(undefined4 param_2); template<class... A> int m_FUN_101f1680(A...); void __thiscall m_FUN_101f2090(undefined4 *param_2); template<class... A> int m_FUN_101f2090(A...); void __thiscall m_FUN_101f20e0(undefined4 *param_2); template<class... A> int m_FUN_101f20e0(A...); void __thiscall m_FUN_101f2ea0(undefined1 param_2); template<class... A> int m_FUN_101f2ea0(A...); void __thiscall m_FUN_101f4100(undefined4 param_2); template<class... A> int m_FUN_101f4100(A...); void __thiscall m_FUN_101f4350(int param_2); template<class... A> int m_FUN_101f4350(A...); undefined4 * __thiscall m_FUN_101f44c0(undefined4 *param_2); template<class... A> int m_FUN_101f44c0(A...); undefined4 * __thiscall m_FUN_101f4540(int *param_2); template<class... A> int m_FUN_101f4540(A...); undefined4 * __thiscall m_FUN_101f45a0(int *param_2); template<class... A> int m_FUN_101f45a0(A...); undefined4 * __thiscall m_FUN_101f5020(byte param_2); template<class... A> int m_FUN_101f5020(A...); undefined4 * __thiscall m_FUN_101f5270(byte param_2); template<class... A> int m_FUN_101f5270(A...); void __thiscall m_FUN_101f54e0(int *param_2); template<class... A> int m_FUN_101f54e0(A...); void __thiscall m_FUN_101f5530(int param_2); template<class... A> int m_FUN_101f5530(A...); SCStr * __thiscall m_FUN_101f64f0(SCStr *param_2); template<class... A> int m_FUN_101f64f0(A...); SCStr * __thiscall m_FUN_101f6510(SCStr *param_2); template<class... A> int m_FUN_101f6510(A...); void __thiscall m_FUN_101f8ff0(SCStr *param_2); template<class... A> int m_FUN_101f8ff0(A...); void __thiscall m_FUN_101f9020(SCStr *param_2); template<class... A> int m_FUN_101f9020(A...); void __thiscall m_FUN_101f9490(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_101f9490(A...); undefined4 * __thiscall m_FUN_101f9fd0(int *param_2); template<class... A> int m_FUN_101f9fd0(A...); undefined4 * __thiscall m_FUN_101fa010(int *param_2); template<class... A> int m_FUN_101fa010(A...); undefined4 * __thiscall m_FUN_101fa050(int *param_2); template<class... A> int m_FUN_101fa050(A...); undefined4 * __thiscall m_FUN_101faaa0(byte param_2); template<class... A> int m_FUN_101faaa0(A...); int __thiscall m_FUN_101faae0(byte param_2); template<class... A> int m_FUN_101faae0(A...); undefined4 * __thiscall m_FUN_101fab30(byte param_2); template<class... A> int m_FUN_101fab30(A...); undefined4 * __thiscall m_FUN_101fabf0(byte param_2); template<class... A> int m_FUN_101fabf0(A...); void __thiscall m_FUN_101faec0(char param_2); template<class... A> int m_FUN_101faec0(A...); void __thiscall m_FUN_101faf10(undefined4 *param_2,undefined4 param_3); template<class... A> int m_FUN_101faf10(A...); void __thiscall m_FUN_101fb370(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_101fb370(A...); void __thiscall m_FUN_101fdb20(undefined4 param_2); template<class... A> int m_FUN_101fdb20(A...); int __thiscall m_FUN_101fdc40(undefined4 param_2); template<class... A> int m_FUN_101fdc40(A...); void __thiscall m_FUN_101fe110(int param_2); template<class... A> int m_FUN_101fe110(A...); void __thiscall m_FUN_101fe140(int param_2); template<class... A> int m_FUN_101fe140(A...); undefined4 * __thiscall m_FUN_101fe820(undefined4 *param_2); template<class... A> int m_FUN_101fe820(A...); undefined4 * __thiscall m_FUN_101fe850(int *param_2); template<class... A> int m_FUN_101fe850(A...); undefined4 * __thiscall m_FUN_101fe8f0(int *param_2); template<class... A> int m_FUN_101fe8f0(A...); undefined4 * __thiscall m_FUN_101fe930(int *param_2); template<class... A> int m_FUN_101fe930(A...); undefined4 * __thiscall m_FUN_101fe970(int *param_2); template<class... A> int m_FUN_101fe970(A...); undefined4 * __thiscall m_FUN_101fe9b0(int *param_2); template<class... A> int m_FUN_101fe9b0(A...); undefined4 * __thiscall m_FUN_101fe9f0(int *param_2); template<class... A> int m_FUN_101fe9f0(A...); undefined4 * __thiscall m_FUN_101fea50(int *param_2); template<class... A> int m_FUN_101fea50(A...); undefined4 * __thiscall m_FUN_101fead0(int *param_2); template<class... A> int m_FUN_101fead0(A...); undefined4 * __thiscall m_FUN_101feb30(int *param_2); template<class... A> int m_FUN_101feb30(A...); undefined4 * __thiscall m_FUN_101feb70(int *param_2); template<class... A> int m_FUN_101feb70(A...); undefined4 * __thiscall m_FUN_101febb0(int *param_2); template<class... A> int m_FUN_101febb0(A...); undefined4 * __thiscall m_FUN_101fec10(int *param_2); template<class... A> int m_FUN_101fec10(A...); undefined4 * __thiscall m_FUN_101fec50(int *param_2); template<class... A> int m_FUN_101fec50(A...); undefined4 * __thiscall m_FUN_101fec90(int *param_2); template<class... A> int m_FUN_101fec90(A...); undefined4 * __thiscall m_FUN_101fecd0(int *param_2); template<class... A> int m_FUN_101fecd0(A...); undefined4 * __thiscall m_FUN_101fed10(int *param_2); template<class... A> int m_FUN_101fed10(A...); undefined4 * __thiscall m_FUN_101fed50(int *param_2); template<class... A> int m_FUN_101fed50(A...); undefined4 * __thiscall m_FUN_101fedb0(int *param_2); template<class... A> int m_FUN_101fedb0(A...); undefined4 * __thiscall m_FUN_101fee30(int *param_2); template<class... A> int m_FUN_101fee30(A...); undefined4 * __thiscall m_FUN_101fee50(int *param_2); template<class... A> int m_FUN_101fee50(A...); undefined4 * __thiscall m_FUN_101fee70(int *param_2); template<class... A> int m_FUN_101fee70(A...); undefined4 * __thiscall m_FUN_101fee90(int *param_2); template<class... A> int m_FUN_101fee90(A...); undefined4 * __thiscall m_FUN_10205510(byte param_2); template<class... A> int m_FUN_10205510(A...); undefined4 * __thiscall m_FUN_10205540(byte param_2); template<class... A> int m_FUN_10205540(A...); undefined4 * __thiscall m_FUN_10205570(byte param_2); template<class... A> int m_FUN_10205570(A...); undefined4 * __thiscall m_FUN_102055a0(byte param_2); template<class... A> int m_FUN_102055a0(A...); undefined4 * __thiscall m_FUN_102055e0(byte param_2); template<class... A> int m_FUN_102055e0(A...); undefined4 * __thiscall m_FUN_10205620(byte param_2); template<class... A> int m_FUN_10205620(A...); undefined4 __thiscall m_FUN_10205720(byte param_2); template<class... A> int m_FUN_10205720(A...); undefined4 * __thiscall m_FUN_10205750(byte param_2); template<class... A> int m_FUN_10205750(A...); undefined4 * __thiscall m_FUN_10205780(byte param_2); template<class... A> int m_FUN_10205780(A...); undefined4 * __thiscall m_FUN_10205880(byte param_2); template<class... A> int m_FUN_10205880(A...); undefined4 * __thiscall m_FUN_102058d0(byte param_2); template<class... A> int m_FUN_102058d0(A...); undefined4 * __thiscall m_FUN_10205a70(byte param_2); template<class... A> int m_FUN_10205a70(A...); undefined4 __thiscall m_FUN_10205ab0(byte param_2); template<class... A> int m_FUN_10205ab0(A...); undefined4 __thiscall m_FUN_10205af0(byte param_2); template<class... A> int m_FUN_10205af0(A...); undefined4 __thiscall m_FUN_10205b20(byte param_2); template<class... A> int m_FUN_10205b20(A...); undefined4 __thiscall m_FUN_10205b50(byte param_2); template<class... A> int m_FUN_10205b50(A...); undefined4 __thiscall m_FUN_10205c00(byte param_2); template<class... A> int m_FUN_10205c00(A...); undefined4 * __thiscall m_FUN_10205cd0(byte param_2); template<class... A> int m_FUN_10205cd0(A...); undefined4 * __thiscall m_FUN_10205fd0(byte param_2); template<class... A> int m_FUN_10205fd0(A...); undefined4 * __thiscall m_FUN_10206000(byte param_2); template<class... A> int m_FUN_10206000(A...); undefined4 * __thiscall m_FUN_10206030(byte param_2); template<class... A> int m_FUN_10206030(A...); undefined4 * __thiscall m_FUN_10206060(byte param_2); template<class... A> int m_FUN_10206060(A...); undefined4 * __thiscall m_FUN_10206090(byte param_2); template<class... A> int m_FUN_10206090(A...); undefined4 * __thiscall m_FUN_102060c0(byte param_2); template<class... A> int m_FUN_102060c0(A...); undefined4 * __thiscall m_FUN_102060f0(byte param_2); template<class... A> int m_FUN_102060f0(A...); undefined4 * __thiscall m_FUN_10206120(byte param_2); template<class... A> int m_FUN_10206120(A...); undefined4 * __thiscall m_FUN_10206150(byte param_2); template<class... A> int m_FUN_10206150(A...); undefined4 * __thiscall m_FUN_102066f0(byte param_2); template<class... A> int m_FUN_102066f0(A...); undefined4 * __thiscall m_FUN_10206730(byte param_2); template<class... A> int m_FUN_10206730(A...); undefined4 * __thiscall m_FUN_10206760(byte param_2); template<class... A> int m_FUN_10206760(A...); void __thiscall m_FUN_10206d80(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10206d80(A...); void __thiscall m_FUN_10207310(int *param_2); template<class... A> int m_FUN_10207310(A...); void __thiscall m_FUN_10207470(int *param_2); template<class... A> int m_FUN_10207470(A...); void __thiscall m_FUN_102074c0(int *param_2); template<class... A> int m_FUN_102074c0(A...); void __thiscall m_FUN_10207510(int *param_2); template<class... A> int m_FUN_10207510(A...); void __thiscall m_FUN_10207560(int *param_2); template<class... A> int m_FUN_10207560(A...); void __thiscall m_FUN_102075b0(int *param_2); template<class... A> int m_FUN_102075b0(A...); void __thiscall m_FUN_10207600(int *param_2); template<class... A> int m_FUN_10207600(A...); void __thiscall m_FUN_10207650(int *param_2); template<class... A> int m_FUN_10207650(A...); void __thiscall m_FUN_102076a0(int *param_2); template<class... A> int m_FUN_102076a0(A...); void __thiscall m_FUN_102076f0(int *param_2); template<class... A> int m_FUN_102076f0(A...); void __thiscall m_FUN_10207740(int *param_2); template<class... A> int m_FUN_10207740(A...); void __thiscall m_FUN_10207790(int *param_2); template<class... A> int m_FUN_10207790(A...); void __thiscall m_FUN_102077e0(int *param_2); template<class... A> int m_FUN_102077e0(A...); void __thiscall m_FUN_10207830(int *param_2); template<class... A> int m_FUN_10207830(A...); void __thiscall m_FUN_10207880(int *param_2); template<class... A> int m_FUN_10207880(A...); void __thiscall m_FUN_102078d0(int *param_2); template<class... A> int m_FUN_102078d0(A...); void __thiscall m_FUN_10207920(int *param_2); template<class... A> int m_FUN_10207920(A...); void __thiscall m_FUN_10207970(int *param_2); template<class... A> int m_FUN_10207970(A...); void __thiscall m_FUN_102079c0(int *param_2); template<class... A> int m_FUN_102079c0(A...); void __thiscall m_FUN_10207a10(int param_2); template<class... A> int m_FUN_10207a10(A...); void __thiscall m_FUN_10207a40(int param_2); template<class... A> int m_FUN_10207a40(A...); void __thiscall m_FUN_10207fd0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4); template<class... A> int m_FUN_10207fd0(A...); void __thiscall m_FUN_10208000(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4, unsigned int recovered_unused_stack_5); template<class... A> int m_FUN_10208000(A...); void __thiscall m_FUN_10208020(undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8); template<class... A> int m_FUN_10208020(A...); void __thiscall m_FUN_1020a260(undefined4 param_2,SCStr *param_3); template<class... A> int m_FUN_1020a260(A...); void __thiscall m_FUN_1020a2b0(undefined4 param_2,SCStr *param_3); template<class... A> int m_FUN_1020a2b0(A...); void __thiscall m_FUN_1020a550(undefined4 param_2); template<class... A> int m_FUN_1020a550(A...); void __thiscall m_FUN_1020a5b0(undefined4 param_2); template<class... A> int m_FUN_1020a5b0(A...); undefined4 __thiscall m_FUN_1020a640(undefined4 param_2); template<class... A> int m_FUN_1020a640(A...); int * __thiscall m_FUN_1020a660(int *param_2,undefined4 param_3); template<class... A> int m_FUN_1020a660(A...); SCStr * __thiscall m_FUN_1020a6a0(SCStr *param_2); template<class... A> int m_FUN_1020a6a0(A...); int * __thiscall m_FUN_1020bea0(int *param_2); template<class... A> int m_FUN_1020bea0(A...); SCStr * __thiscall m_FUN_1020d100(SCStr *param_2); template<class... A> int m_FUN_1020d100(A...); int * __thiscall m_FUN_1020d1e0(int *param_2); template<class... A> int m_FUN_1020d1e0(A...); SCStr * __thiscall m_FUN_1020d310(SCStr *param_2); template<class... A> int m_FUN_1020d310(A...); SCStr * __thiscall m_FUN_1020dba0(SCStr *param_2); template<class... A> int m_FUN_1020dba0(A...); SCStr * __thiscall m_FUN_1020f600(SCStr *param_2); template<class... A> int m_FUN_1020f600(A...); int __thiscall m_FUN_10210320(int param_2); template<class... A> int m_FUN_10210320(A...); SCStr * __thiscall m_FUN_10210360(SCStr *param_2); template<class... A> int m_FUN_10210360(A...); SCStr * __thiscall m_FUN_102103e0(SCStr *param_2); template<class... A> int m_FUN_102103e0(A...); undefined4 __thiscall m_FUN_10210fc0(undefined4 param_2); template<class... A> int m_FUN_10210fc0(A...); undefined4 __thiscall m_FUN_102111d0(undefined4 param_2); template<class... A> int m_FUN_102111d0(A...); SCStr * __thiscall m_FUN_10216e80(SCStr *param_2); template<class... A> int m_FUN_10216e80(A...); undefined4 __thiscall m_FUN_10216ec0(undefined4 param_2); template<class... A> int m_FUN_10216ec0(A...); SCStr * __thiscall m_FUN_10217600(SCStr *param_2); template<class... A> int m_FUN_10217600(A...); undefined4 __thiscall m_FUN_10219030(undefined4 param_2); template<class... A> int m_FUN_10219030(A...); undefined4 __thiscall m_FUN_10219050(undefined4 param_2); template<class... A> int m_FUN_10219050(A...); uint __thiscall m_FUN_1021aa00(int param_2); template<class... A> int m_FUN_1021aa00(A...); void __thiscall m_FUN_102204e0(int *param_2); template<class... A> int m_FUN_102204e0(A...); void __thiscall m_FUN_10220cd0(SCStr *param_2); template<class... A> int m_FUN_10220cd0(A...); void __thiscall m_FUN_10220d00(SCStr *param_2); template<class... A> int m_FUN_10220d00(A...); void __thiscall m_FUN_10221690(int *param_2); template<class... A> int m_FUN_10221690(A...); void __thiscall m_FUN_10221800(int param_2); template<class... A> int m_FUN_10221800(A...); SCStr * __thiscall m_FUN_10221b60(SCStr *param_2); template<class... A> int m_FUN_10221b60(A...); undefined4 * __thiscall m_FUN_10221bc0(int *param_2); template<class... A> int m_FUN_10221bc0(A...); undefined4 * __thiscall m_FUN_10221f60(byte param_2); template<class... A> int m_FUN_10221f60(A...); undefined4 * __thiscall m_FUN_10221fa0(byte param_2); template<class... A> int m_FUN_10221fa0(A...); undefined4 * __thiscall m_FUN_10222050(byte param_2); template<class... A> int m_FUN_10222050(A...); size_t __thiscall m_FUN_10222300(void *param_2,uint param_3); template<class... A> int m_FUN_10222300(A...); void __thiscall m_FUN_10223600(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10223600(A...); void __thiscall m_FUN_10223630(int *param_2); template<class... A> int m_FUN_10223630(A...); int * __thiscall m_FUN_10223680(int *param_2); template<class... A> int m_FUN_10223680(A...); int * __thiscall m_FUN_102236b0(int *param_2); template<class... A> int m_FUN_102236b0(A...); int * __thiscall m_FUN_102236e0(int *param_2); template<class... A> int m_FUN_102236e0(A...); int __thiscall m_FUN_10225e70(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10225e70(A...); int __thiscall m_FUN_10225eb0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10225eb0(A...); void __thiscall m_FUN_10227430(int param_2); template<class... A> int m_FUN_10227430(A...); undefined4 * __thiscall m_FUN_10228f60(int *param_2); template<class... A> int m_FUN_10228f60(A...); undefined4 * __thiscall m_FUN_10228fa0(int *param_2); template<class... A> int m_FUN_10228fa0(A...); undefined4 * __thiscall m_FUN_10228fe0(int *param_2); template<class... A> int m_FUN_10228fe0(A...); undefined4 * __thiscall m_FUN_10229020(int *param_2); template<class... A> int m_FUN_10229020(A...); undefined4 * __thiscall m_FUN_10229060(int *param_2); template<class... A> int m_FUN_10229060(A...); undefined4 * __thiscall m_FUN_102290a0(int *param_2); template<class... A> int m_FUN_102290a0(A...); undefined4 * __thiscall m_FUN_10229120(int *param_2); template<class... A> int m_FUN_10229120(A...); undefined4 * __thiscall m_FUN_10229160(int *param_2); template<class... A> int m_FUN_10229160(A...); undefined4 * __thiscall m_FUN_102291c0(int *param_2); template<class... A> int m_FUN_102291c0(A...); undefined4 * __thiscall m_FUN_10229200(int *param_2); template<class... A> int m_FUN_10229200(A...); undefined4 * __thiscall m_FUN_10229240(int *param_2); template<class... A> int m_FUN_10229240(A...); undefined4 * __thiscall m_FUN_10229280(int *param_2); template<class... A> int m_FUN_10229280(A...); undefined4 * __thiscall m_FUN_102292e0(int *param_2); template<class... A> int m_FUN_102292e0(A...); undefined4 * __thiscall m_FUN_10229340(int *param_2); template<class... A> int m_FUN_10229340(A...); undefined4 * __thiscall m_FUN_102293d0(int *param_2); template<class... A> int m_FUN_102293d0(A...); undefined4 * __thiscall m_FUN_10229410(int *param_2); template<class... A> int m_FUN_10229410(A...); undefined4 * __thiscall m_FUN_10229470(int *param_2); template<class... A> int m_FUN_10229470(A...); undefined4 * __thiscall m_FUN_10230420(byte param_2); template<class... A> int m_FUN_10230420(A...); int __thiscall m_FUN_102306b0(byte param_2); template<class... A> int m_FUN_102306b0(A...); int __thiscall m_FUN_10230700(byte param_2); template<class... A> int m_FUN_10230700(A...); int __thiscall m_FUN_10230750(byte param_2); template<class... A> int m_FUN_10230750(A...); int __thiscall m_FUN_102307a0(byte param_2); template<class... A> int m_FUN_102307a0(A...); undefined4 * __thiscall m_FUN_102308d0(byte param_2); template<class... A> int m_FUN_102308d0(A...); undefined4 * __thiscall m_FUN_10230900(byte param_2); template<class... A> int m_FUN_10230900(A...); undefined4 * __thiscall m_FUN_10230940(byte param_2); template<class... A> int m_FUN_10230940(A...); undefined4 * __thiscall m_FUN_10230970(byte param_2); template<class... A> int m_FUN_10230970(A...); undefined4 * __thiscall m_FUN_102309a0(byte param_2); template<class... A> int m_FUN_102309a0(A...); undefined4 * __thiscall m_FUN_102309d0(byte param_2); template<class... A> int m_FUN_102309d0(A...); undefined4 * __thiscall m_FUN_10230a00(byte param_2); template<class... A> int m_FUN_10230a00(A...); undefined4 __thiscall m_FUN_10230a30(byte param_2); template<class... A> int m_FUN_10230a30(A...); undefined4 * __thiscall m_FUN_10230b00(byte param_2); template<class... A> int m_FUN_10230b00(A...); undefined4 * __thiscall m_FUN_10230b30(byte param_2); template<class... A> int m_FUN_10230b30(A...); undefined4 * __thiscall m_FUN_10230b60(byte param_2); template<class... A> int m_FUN_10230b60(A...); undefined4 * __thiscall m_FUN_10230b90(byte param_2); template<class... A> int m_FUN_10230b90(A...); undefined4 * __thiscall m_FUN_10230f20(byte param_2); template<class... A> int m_FUN_10230f20(A...); undefined4 __thiscall m_FUN_10230f60(byte param_2); template<class... A> int m_FUN_10230f60(A...); undefined4 * __thiscall m_FUN_10231040(byte param_2); template<class... A> int m_FUN_10231040(A...); undefined4 * __thiscall m_FUN_10231120(byte param_2); template<class... A> int m_FUN_10231120(A...); undefined4 * __thiscall m_FUN_10231160(byte param_2); template<class... A> int m_FUN_10231160(A...); undefined4 * __thiscall m_FUN_10231190(byte param_2); template<class... A> int m_FUN_10231190(A...); undefined4 * __thiscall m_FUN_102311d0(byte param_2); template<class... A> int m_FUN_102311d0(A...); undefined4 * __thiscall m_FUN_102312c0(byte param_2); template<class... A> int m_FUN_102312c0(A...); undefined4 __thiscall m_FUN_102313a0(byte param_2); template<class... A> int m_FUN_102313a0(A...); undefined4 * __thiscall m_FUN_10231520(byte param_2); template<class... A> int m_FUN_10231520(A...); undefined4 * __thiscall m_FUN_10231560(byte param_2); template<class... A> int m_FUN_10231560(A...); undefined4 * __thiscall m_FUN_10231640(byte param_2); template<class... A> int m_FUN_10231640(A...); undefined4 * __thiscall m_FUN_10231670(byte param_2); template<class... A> int m_FUN_10231670(A...); SCStr * __thiscall m_FUN_102316a0(SCStr *param_2); template<class... A> int m_FUN_102316a0(A...); SCStr * __thiscall m_FUN_102316e0(SCStr *param_2); template<class... A> int m_FUN_102316e0(A...); SCStr * __thiscall m_FUN_102317a0(SCStr *param_2); template<class... A> int m_FUN_102317a0(A...); SCStr * __thiscall m_FUN_10231810(SCStr *param_2); template<class... A> int m_FUN_10231810(A...); void __thiscall m_FUN_10232050(undefined4 *param_2); template<class... A> int m_FUN_10232050(A...); void __thiscall m_FUN_10232070(undefined4 *param_2); template<class... A> int m_FUN_10232070(A...); void __thiscall m_FUN_10232150(undefined4 *param_2); template<class... A> int m_FUN_10232150(A...); void __thiscall m_FUN_10232170(undefined4 *param_2); template<class... A> int m_FUN_10232170(A...); void __thiscall m_FUN_102321b0(undefined4 *param_2); template<class... A> int m_FUN_102321b0(A...); void __thiscall m_FUN_10232270(char param_2); template<class... A> int m_FUN_10232270(A...); void __thiscall m_FUN_102322c0(char param_2); template<class... A> int m_FUN_102322c0(A...); void __thiscall m_FUN_10232310(char param_2); template<class... A> int m_FUN_10232310(A...); void __thiscall m_FUN_10232330(char param_2); template<class... A> int m_FUN_10232330(A...); void __thiscall m_FUN_10232350(char param_2); template<class... A> int m_FUN_10232350(A...); void __thiscall m_FUN_10232370(char param_2); template<class... A> int m_FUN_10232370(A...); void __thiscall m_FUN_102323c0(char param_2); template<class... A> int m_FUN_102323c0(A...); void __thiscall m_FUN_102323e0(char param_2); template<class... A> int m_FUN_102323e0(A...); void __thiscall m_FUN_10232400(char param_2); template<class... A> int m_FUN_10232400(A...); void __thiscall m_FUN_10232420(char param_2); template<class... A> int m_FUN_10232420(A...); void __thiscall m_FUN_10232440(char param_2); template<class... A> int m_FUN_10232440(A...); void __thiscall m_FUN_10232460(char param_2); template<class... A> int m_FUN_10232460(A...); void __thiscall m_FUN_10232760(undefined4 *param_2); template<class... A> int m_FUN_10232760(A...); void __thiscall m_FUN_10232790(undefined4 *param_2); template<class... A> int m_FUN_10232790(A...); void __thiscall m_FUN_10232840(undefined4 *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10232840(A...); void __thiscall m_FUN_10232900(undefined4 *param_2,undefined4 param_3); template<class... A> int m_FUN_10232900(A...); void __thiscall m_FUN_10233650(undefined4 *param_2); template<class... A> int m_FUN_10233650(A...); void __thiscall m_FUN_10233670(undefined4 *param_2); template<class... A> int m_FUN_10233670(A...); void __thiscall m_FUN_102336b0(undefined4 *param_2); template<class... A> int m_FUN_102336b0(A...); void __thiscall m_FUN_102336d0(undefined4 *param_2); template<class... A> int m_FUN_102336d0(A...); void __thiscall m_FUN_10233710(undefined4 *param_2); template<class... A> int m_FUN_10233710(A...); void __thiscall m_FUN_10233740(undefined4 *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10233740(A...); void __thiscall m_FUN_10234c50(int *param_2); template<class... A> int m_FUN_10234c50(A...); void __thiscall m_FUN_10234ca0(int *param_2); template<class... A> int m_FUN_10234ca0(A...); void __thiscall m_FUN_10234cf0(int *param_2); template<class... A> int m_FUN_10234cf0(A...); void __thiscall m_FUN_10234d40(int *param_2); template<class... A> int m_FUN_10234d40(A...); void __thiscall m_FUN_10234d90(int *param_2); template<class... A> int m_FUN_10234d90(A...); void __thiscall m_FUN_10234de0(int *param_2); template<class... A> int m_FUN_10234de0(A...); void __thiscall m_FUN_10234e30(int param_2); template<class... A> int m_FUN_10234e30(A...); void __thiscall m_FUN_10236170(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10236170(A...); int * __thiscall m_FUN_102365f0(int *param_2); template<class... A> int m_FUN_102365f0(A...); SCStr * __thiscall m_FUN_10236820(SCStr *param_2); template<class... A> int m_FUN_10236820(A...); SCStr * __thiscall m_FUN_102368c0(SCStr *param_2); template<class... A> int m_FUN_102368c0(A...); SCStr * __thiscall m_FUN_10236940(SCStr *param_2); template<class... A> int m_FUN_10236940(A...); int * __thiscall m_FUN_10236ab0(int *param_2); template<class... A> int m_FUN_10236ab0(A...); SCStr * __thiscall m_FUN_10236bd0(SCStr *param_2); template<class... A> int m_FUN_10236bd0(A...); SCStr * __thiscall m_FUN_10236c00(SCStr *param_2); template<class... A> int m_FUN_10236c00(A...); SCStr * __thiscall m_FUN_10236c30(SCStr *param_2); template<class... A> int m_FUN_10236c30(A...); SCStr * __thiscall m_FUN_10236c50(SCStr *param_2); template<class... A> int m_FUN_10236c50(A...); SCStr * __thiscall m_FUN_10236c70(SCStr *param_2); template<class... A> int m_FUN_10236c70(A...); SCStr * __thiscall m_FUN_10236c90(SCStr *param_2); template<class... A> int m_FUN_10236c90(A...); SCStr * __thiscall m_FUN_10236e50(SCStr *param_2); template<class... A> int m_FUN_10236e50(A...); SCStr * __thiscall m_FUN_102371b0(SCStr *param_2); template<class... A> int m_FUN_102371b0(A...); void __thiscall m_FUN_10243240(undefined4 param_2,byte param_3); template<class... A> int m_FUN_10243240(A...); void __thiscall m_FUN_10246020(undefined4 param_2); template<class... A> int m_FUN_10246020(A...); void __thiscall m_FUN_10246050(undefined4 param_2); template<class... A> int m_FUN_10246050(A...); void __thiscall m_FUN_10246080(undefined4 param_2); template<class... A> int m_FUN_10246080(A...); void __thiscall m_FUN_10246680(int param_2); template<class... A> int m_FUN_10246680(A...); undefined4 * __thiscall m_FUN_102469f0(int *param_2); template<class... A> int m_FUN_102469f0(A...); undefined4 * __thiscall m_FUN_10247970(byte param_2); template<class... A> int m_FUN_10247970(A...); undefined4 __thiscall m_FUN_10247c40(byte param_2); template<class... A> int m_FUN_10247c40(A...); undefined4 __thiscall m_FUN_10247c70(byte param_2); template<class... A> int m_FUN_10247c70(A...); undefined4 * __thiscall m_FUN_10247ca0(byte param_2); template<class... A> int m_FUN_10247ca0(A...); void __thiscall m_FUN_10247d40(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10247d40(A...); void __thiscall m_FUN_102481b0(int *param_2); template<class... A> int m_FUN_102481b0(A...); void __thiscall m_FUN_10248200(int *param_2); template<class... A> int m_FUN_10248200(A...); void __thiscall m_FUN_10248250(int param_2); template<class... A> int m_FUN_10248250(A...); undefined4 * __thiscall m_FUN_10249df0(int *param_2); template<class... A> int m_FUN_10249df0(A...); undefined4 * __thiscall m_FUN_10249e30(int *param_2); template<class... A> int m_FUN_10249e30(A...); undefined4 * __thiscall m_FUN_1024a6b0(byte param_2); template<class... A> int m_FUN_1024a6b0(A...); undefined4 * __thiscall m_FUN_1024a8b0(byte param_2); template<class... A> int m_FUN_1024a8b0(A...); void __thiscall m_FUN_1024a8f0(int *param_2); template<class... A> int m_FUN_1024a8f0(A...); undefined4 * __thiscall m_FUN_1024c220(int *param_2); template<class... A> int m_FUN_1024c220(A...); undefined4 * __thiscall m_FUN_1024c4e0(byte param_2); template<class... A> int m_FUN_1024c4e0(A...); undefined4 * __thiscall m_FUN_1024c630(byte param_2); template<class... A> int m_FUN_1024c630(A...); SCStr * __thiscall m_FUN_1024cfa0(SCStr *param_2); template<class... A> int m_FUN_1024cfa0(A...); SCStr * __thiscall m_FUN_1024d810(SCStr *param_2); template<class... A> int m_FUN_1024d810(A...); SCStr * __thiscall m_FUN_1024da30(SCStr *param_2); template<class... A> int m_FUN_1024da30(A...); SCStr * __thiscall m_FUN_1024dc00(SCStr *param_2); template<class... A> int m_FUN_1024dc00(A...); SCStr * __thiscall m_FUN_1024ddb0(SCStr *param_2); template<class... A> int m_FUN_1024ddb0(A...); undefined4 * __thiscall m_FUN_1024ed20(int *param_2); template<class... A> int m_FUN_1024ed20(A...); undefined4 * __thiscall m_FUN_1024ed80(int *param_2); template<class... A> int m_FUN_1024ed80(A...); undefined4 * __thiscall m_FUN_1024ede0(undefined4 *param_2); template<class... A> int m_FUN_1024ede0(A...); undefined4 * __thiscall m_FUN_1024ee10(int *param_2); template<class... A> int m_FUN_1024ee10(A...); undefined4 * __thiscall m_FUN_1024fb30(byte param_2); template<class... A> int m_FUN_1024fb30(A...); int __thiscall m_FUN_1024fb70(byte param_2); template<class... A> int m_FUN_1024fb70(A...); undefined4 * __thiscall m_FUN_1024fbc0(byte param_2); template<class... A> int m_FUN_1024fbc0(A...); undefined4 * __thiscall m_FUN_1024fc00(byte param_2); template<class... A> int m_FUN_1024fc00(A...); undefined4 __thiscall m_FUN_1024fc40(byte param_2); template<class... A> int m_FUN_1024fc40(A...); undefined4 * __thiscall m_FUN_1024fc70(byte param_2); template<class... A> int m_FUN_1024fc70(A...); void __thiscall m_FUN_1024fd40(char param_2); template<class... A> int m_FUN_1024fd40(A...); void __thiscall m_FUN_1024fd90(undefined4 *param_2,undefined4 param_3); template<class... A> int m_FUN_1024fd90(A...); void __thiscall m_FUN_10250150(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10250150(A...); void __thiscall m_FUN_10250180(undefined4 param_2,SCStr *param_3); template<class... A> int m_FUN_10250180(A...); SCStr * __thiscall m_FUN_10251770(SCStr *param_2); template<class... A> int m_FUN_10251770(A...); void __thiscall m_FUN_10252fa0(undefined4 param_2); template<class... A> int m_FUN_10252fa0(A...); void __thiscall m_FUN_10253110(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10253110(A...); void __thiscall m_FUN_10254ee0(undefined4 param_2); template<class... A> int m_FUN_10254ee0(A...); int __thiscall m_FUN_10255010(SCStr *param_2); template<class... A> int m_FUN_10255010(A...); void __thiscall m_FUN_102561c0(undefined4 *param_2); template<class... A> int m_FUN_102561c0(A...); undefined4 * __thiscall m_FUN_10257090(int *param_2); template<class... A> int m_FUN_10257090(A...); undefined4 * __thiscall m_FUN_10257100(int *param_2); template<class... A> int m_FUN_10257100(A...); undefined4 * __thiscall m_FUN_10257140(int *param_2); template<class... A> int m_FUN_10257140(A...); undefined4 * __thiscall m_FUN_102571a0(int *param_2); template<class... A> int m_FUN_102571a0(A...); undefined4 * __thiscall m_FUN_102571e0(int *param_2); template<class... A> int m_FUN_102571e0(A...); undefined4 * __thiscall m_FUN_10257220(int *param_2); template<class... A> int m_FUN_10257220(A...); undefined4 * __thiscall m_FUN_102598d0(byte param_2); template<class... A> int m_FUN_102598d0(A...); undefined4 * __thiscall m_FUN_10259910(byte param_2); template<class... A> int m_FUN_10259910(A...); undefined4 * __thiscall m_FUN_10259950(byte param_2); template<class... A> int m_FUN_10259950(A...); undefined4 * __thiscall m_FUN_10259990(byte param_2); template<class... A> int m_FUN_10259990(A...); int __thiscall m_FUN_10259a60(byte param_2); template<class... A> int m_FUN_10259a60(A...); int __thiscall m_FUN_10259ab0(byte param_2); template<class... A> int m_FUN_10259ab0(A...); int __thiscall m_FUN_10259b00(byte param_2); template<class... A> int m_FUN_10259b00(A...); undefined4 __thiscall m_FUN_10259b50(byte param_2); template<class... A> int m_FUN_10259b50(A...); int __thiscall m_FUN_10259b80(byte param_2); template<class... A> int m_FUN_10259b80(A...); undefined4 * __thiscall m_FUN_10259ca0(byte param_2); template<class... A> int m_FUN_10259ca0(A...); undefined4 * __thiscall m_FUN_10259cd0(byte param_2); template<class... A> int m_FUN_10259cd0(A...); undefined4 * __thiscall m_FUN_10259d00(byte param_2); template<class... A> int m_FUN_10259d00(A...); undefined4 * __thiscall m_FUN_10259d30(byte param_2); template<class... A> int m_FUN_10259d30(A...); undefined4 * __thiscall m_FUN_10259d60(byte param_2); template<class... A> int m_FUN_10259d60(A...); void __thiscall m_FUN_1025a4f0(char param_2); template<class... A> int m_FUN_1025a4f0(A...); void __thiscall m_FUN_1025a540(char param_2); template<class... A> int m_FUN_1025a540(A...); void __thiscall m_FUN_1025a590(char param_2); template<class... A> int m_FUN_1025a590(A...); void __thiscall m_FUN_1025a5e0(char param_2); template<class... A> int m_FUN_1025a5e0(A...); void __thiscall m_FUN_1025a610(char param_2); template<class... A> int m_FUN_1025a610(A...); void __thiscall m_FUN_1025a660(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_1025a660(A...); void __thiscall m_FUN_1025a680(undefined4 param_2,undefined4 *param_3); template<class... A> int m_FUN_1025a680(A...); void __thiscall m_FUN_1025a8f0(undefined4 param_2,undefined4 *param_3); template<class... A> int m_FUN_1025a8f0(A...); void __thiscall m_FUN_1025b6c0(int *param_2); template<class... A> int m_FUN_1025b6c0(A...); SCStr * __thiscall m_FUN_1025c520(SCStr *param_2); template<class... A> int m_FUN_1025c520(A...); SCStr * __thiscall m_FUN_1025c540(SCStr *param_2); template<class... A> int m_FUN_1025c540(A...); SCStr * __thiscall m_FUN_1025c560(SCStr *param_2); template<class... A> int m_FUN_1025c560(A...); SCStr * __thiscall m_FUN_1025c770(SCStr *param_2); template<class... A> int m_FUN_1025c770(A...); void __thiscall m_FUN_1025c8e0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_1025c8e0(A...); void __thiscall m_FUN_1025cbd0(undefined4 *param_2); template<class... A> int m_FUN_1025cbd0(A...); undefined4 * __thiscall m_FUN_1025d630(int *param_2); template<class... A> int m_FUN_1025d630(A...); undefined4 * __thiscall m_FUN_1025d670(int *param_2); template<class... A> int m_FUN_1025d670(A...); undefined4 * __thiscall m_FUN_1025d9e0(byte param_2); template<class... A> int m_FUN_1025d9e0(A...); undefined4 * __thiscall m_FUN_1025da20(byte param_2); template<class... A> int m_FUN_1025da20(A...); SCStr * __thiscall m_FUN_1025db40(SCStr *param_2); template<class... A> int m_FUN_1025db40(A...); SCStr * __thiscall m_FUN_1025db80(SCStr *param_2); template<class... A> int m_FUN_1025db80(A...); SCStr * __thiscall m_FUN_1025dbc0(SCStr *param_2); template<class... A> int m_FUN_1025dbc0(A...); SCStr * __thiscall m_FUN_1025dc00(SCStr *param_2); template<class... A> int m_FUN_1025dc00(A...); undefined4 * __thiscall m_FUN_1025e1d0(int *param_2); template<class... A> int m_FUN_1025e1d0(A...); undefined4 * __thiscall m_FUN_1025e250(byte *param_2); template<class... A> int m_FUN_1025e250(A...); undefined4 * __thiscall m_FUN_1025e350(byte param_2); template<class... A> int m_FUN_1025e350(A...); undefined4 * __thiscall m_FUN_1025e390(byte param_2); template<class... A> int m_FUN_1025e390(A...); undefined4 * __thiscall m_FUN_1025e3c0(byte param_2); template<class... A> int m_FUN_1025e3c0(A...); undefined4 __thiscall m_FUN_1025e530(undefined4 *param_2); template<class... A> int m_FUN_1025e530(A...); void __thiscall m_FUN_1025e800(char param_2); template<class... A> int m_FUN_1025e800(A...); undefined4 * __thiscall m_FUN_1025e8a0(undefined4 *param_2); template<class... A> int m_FUN_1025e8a0(A...); uint __thiscall m_FUN_1025e8c0(uint *param_2); template<class... A> int m_FUN_1025e8c0(A...); uint __thiscall m_FUN_1025e8f0(uint *param_2); template<class... A> int m_FUN_1025e8f0(A...); uint * __thiscall m_FUN_1025e920(uint *param_2); template<class... A> int m_FUN_1025e920(A...); undefined4 __thiscall m_FUN_1025e970(uint *param_2); template<class... A> int m_FUN_1025e970(A...); undefined4 __thiscall m_FUN_1025e9c0(int *param_2); template<class... A> int m_FUN_1025e9c0(A...); undefined4 * __thiscall m_FUN_1025ea10(undefined4 *param_2); template<class... A> int m_FUN_1025ea10(A...); int __thiscall m_FUN_1025ed20(SCStr *param_2); template<class... A> int m_FUN_1025ed20(A...); undefined4 * __thiscall m_FUN_1025f100(int *param_2); template<class... A> int m_FUN_1025f100(A...); undefined4 * __thiscall m_FUN_1025f140(int *param_2); template<class... A> int m_FUN_1025f140(A...); undefined4 * __thiscall m_FUN_1025f340(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_1025f340(A...); undefined4 * __thiscall m_FUN_1025fe70(byte param_2); template<class... A> int m_FUN_1025fe70(A...); undefined4 * __thiscall m_FUN_1025feb0(byte param_2); template<class... A> int m_FUN_1025feb0(A...); undefined4 * __thiscall m_FUN_10260200(byte param_2); template<class... A> int m_FUN_10260200(A...); undefined4 __thiscall m_FUN_102611e0(undefined4 param_2); template<class... A> int m_FUN_102611e0(A...); undefined4 __thiscall m_FUN_10261210(undefined4 param_2); template<class... A> int m_FUN_10261210(A...); SCStr * __thiscall m_FUN_10261310(SCStr *param_2); template<class... A> int m_FUN_10261310(A...); SCStr * __thiscall m_FUN_10261330(SCStr *param_2); template<class... A> int m_FUN_10261330(A...); };

extern __declspec(dllimport) int AddVectoredExceptionHandler(...);
extern int FUN_1004cb77(...);
extern int FUN_10078150(...);
extern int FUN_1020a300(...);
extern int FUN_10218f20(...);
extern int FUN_10257e60(...);
extern int FUN_10259410(...);
extern int LOCK(...);
extern __declspec(dllimport) int RemoveVectoredExceptionHandler(...);
extern int SCThreadSafeInc(...);
extern int UNLOCK(...);
extern __declspec(dllimport) int __stdio_common_vsscanf(...);
extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern __declspec(dllimport) int _set_purecall_handler(...);
extern __declspec(dllimport) int _strdup(...);
extern __declspec(dllimport) int ceil(...);
extern int createSCStringArray(...);
extern __declspec(dllimport) int fclose(...);
extern __declspec(dllimport) int memmove(...);
extern int operator_new(...);
extern __declspec(dllimport) int strncmp(...);
extern int thunk_FUN_101a2210(...);
extern int thunk_FUN_101a2390(...);
extern int thunk_FUN_101a2bf0(...);
extern int thunk_FUN_101a6f70(...);
extern int thunk_FUN_101a83f0(...);
extern int thunk_FUN_101a8700(...);
extern int thunk_FUN_101a8f30(...);
extern int thunk_FUN_101ab700(...);
extern int thunk_FUN_101b1fc0(...);
extern int thunk_FUN_101b2090(...);
extern int thunk_FUN_101b5540(...);
extern int thunk_FUN_101b5de0(...);
extern int thunk_FUN_101b9120(...);
extern int thunk_FUN_101b9ba0(...);
extern int thunk_FUN_101ba0d0(...);
extern int thunk_FUN_101bc5e0(...);
extern int thunk_FUN_101bda70(...);
extern int thunk_FUN_101be460(...);
extern int thunk_FUN_101c3fc0(...);
extern int thunk_FUN_101c42f0(...);
extern int thunk_FUN_101c4440(...);
extern int thunk_FUN_101c4740(...);
extern int thunk_FUN_101c4810(...);
extern int thunk_FUN_101c4a90(...);
extern int thunk_FUN_101cde00(...);
extern int thunk_FUN_101cdee0(...);
extern int thunk_FUN_101cdf90(...);
extern int thunk_FUN_101d19a0(...);
extern int thunk_FUN_101d2f40(...);
extern int thunk_FUN_101d3630(...);
extern int thunk_FUN_101db840(...);
extern int thunk_FUN_101df120(...);
extern int thunk_FUN_101e0b90(...);
extern int thunk_FUN_101e6610(...);
extern int thunk_FUN_101e6ce0(...);
extern int thunk_FUN_101e7240(...);
extern int thunk_FUN_101e76a0(...);
extern int thunk_FUN_101e8670(...);
extern int thunk_FUN_101e8710(...);
extern int thunk_FUN_101e8900(...);
extern int thunk_FUN_101e8ca0(...);
extern int thunk_FUN_101e90e0(...);
extern int thunk_FUN_101eb2b0(...);
extern int thunk_FUN_101eb3f0(...);
extern int thunk_FUN_101ee360(...);
extern int thunk_FUN_101ee670(...);
extern int thunk_FUN_101f2ac0(...);
extern int thunk_FUN_101f3880(...);
extern int thunk_FUN_101f4150(...);
extern int thunk_FUN_101fda20(...);
extern int thunk_FUN_101fdb50(...);
extern int thunk_FUN_101fdc90(...);
extern int thunk_FUN_101ff410(...);
extern int thunk_FUN_102036c0(...);
extern int thunk_FUN_102037c0(...);
extern int thunk_FUN_10203970(...);
extern int thunk_FUN_10203dc0(...);
extern int thunk_FUN_10218810(...);
extern int thunk_FUN_10218910(...);
extern int thunk_FUN_102207b0(...);
extern int thunk_FUN_10222ce0(...);
extern int thunk_FUN_10225ef0(...);
extern int thunk_FUN_10225ff0(...);
extern int thunk_FUN_102260c0(...);
extern int thunk_FUN_10226130(...);
extern int thunk_FUN_10226cf0(...);
extern int thunk_FUN_10226f80(...);
extern int thunk_FUN_1022df10(...);
extern int thunk_FUN_1022e510(...);
extern int thunk_FUN_1022eb90(...);
extern int thunk_FUN_102341a0(...);
extern int thunk_FUN_1023a9f0(...);
extern int thunk_FUN_1023ac50(...);
extern int thunk_FUN_1023c1b0(...);
extern int thunk_FUN_1023d430(...);
extern int thunk_FUN_10240ec0(...);
extern int thunk_FUN_102410f0(...);
extern int thunk_FUN_10241ce0(...);
extern int thunk_FUN_10245f80(...);
extern int thunk_FUN_102460b0(...);
extern int thunk_FUN_10246170(...);
extern int thunk_FUN_10246290(...);
extern int thunk_FUN_10247530(...);
extern int thunk_FUN_1024be70(...);
extern int thunk_FUN_1024bf80(...);
extern int thunk_FUN_1024f650(...);
extern int thunk_FUN_10252480(...);
extern int thunk_FUN_10252fd0(...);
extern int thunk_FUN_10253830(...);
extern int thunk_FUN_10254af0(...);
extern int thunk_FUN_10254c20(...);
extern int thunk_FUN_10254f10(...);
extern int thunk_FUN_10255060(...);
extern int thunk_FUN_102589b0(...);
extern int thunk_FUN_10259740(...);
extern int thunk_FUN_1025ed70(...);
extern int thunk_FUN_1025f3f0(...);
extern int thunk_FUN_102d65b0(...);
extern int thunk_FUN_103026f0(...);
extern int thunk_FUN_10309e90(...);
extern int thunk_FUN_1030c120(...);
extern int thunk_FUN_103134f0(...);
extern int thunk_FUN_10313720(...);
extern int thunk_FUN_103138c0(...);
extern int thunk_FUN_103beae0(...);
extern int thunk_FUN_103d0730(...);
extern int thunk_FUN_103d5ff0(...);
extern int thunk_FUN_103d61d0(...);
extern int thunk_FUN_103d63d0(...);
extern int thunk_FUN_103d65f0(...);
extern int thunk_FUN_103d6930(...);
extern int thunk_FUN_104d8370(...);
extern int thunk_FUN_104d8c80(...);
extern int thunk_FUN_104d9780(...);
extern int thunk_FUN_104dec20(...);
extern int thunk_FUN_104fed90(...);
extern int thunk_FUN_104ffd30(...);
extern int thunk_FUN_1059d5a0(...);
extern int thunk_FUN_1059d800(...);
extern int thunk_FUN_1059d940(...);
extern int thunk_FUN_105b5360(...);
extern int thunk_FUN_1061c5e0(...);
extern int thunk_FUN_11069bc0(...);
extern int thunk_FUN_1106a250(...);
extern int thunk_FUN_1106b190(...);
extern int thunk_FUN_1106f2b0(...);
extern int thunk_FUN_1106f2d0(...);
extern int thunk_FUN_11080e90(...);
extern int thunk_FUN_110828b0(...);
extern int thunk_FUN_1109aba0(...);
extern int thunk_FUN_110a5ba0(...);
extern int thunk_FUN_110a9ef0(...);
extern int thunk_FUN_110adac0(...);
extern int thunk_FUN_110b0460(...);
extern int thunk_FUN_110b9480(...);
extern int thunk_FUN_111a0940(...);
extern int thunk_FUN_111c0af0(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1123fce0(...);
extern int thunk_FUN_11240850(...);
extern int thunk_FUN_11240cc0(...);
extern int thunk_FUN_112a7f50(...);
extern int thunk_FUN_112a8010(...);
extern int thunk_FUN_112af4e0(...);
extern int thunk_FUN_113cfb70(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148ac28(...);
extern int DAT_1186d2ee;
extern int DAT_11882ff0;
extern int DAT_11884fe8;
extern int DAT_1211905c;
extern int DAT_12119064;
extern int DAT_1211906c;
extern int DAT_12126b84;
extern int DAT_121a06cc;
extern int DAT_121a06d0;
extern int DAT_121a06d4;
extern int DAT_121a07b0;
extern int DAT_121a07b4;
extern int DAT_121a0978;
extern int DAT_121a0a18;
extern int DAT_121a0ae4;
extern int DAT_122f5650;
extern int g_lSCObjCount;
extern int ghidra_vftable_AnacapaLauncherCB;
extern int ghidra_vftable_BatteryWeakChargerData;
extern int ghidra_vftable_FactoryResetData;
extern int ghidra_vftable_ForgotHouseholdData;
extern int ghidra_vftable_InvalidOptimo2OrientationData;
extern int ghidra_vftable_LaunchWifiConfig;
extern int ghidra_vftable_LegacyCRModernHHData;
extern int ghidra_vftable_NoNetworkFoundData;
extern int ghidra_vftable_OutdatedControllerData;
extern int ghidra_vftable_RAsyncBrowseErrorHandler;
extern int ghidra_vftable_RBrowseNodeObj;
extern int ghidra_vftable_RControlAIOOpCB;
extern int ghidra_vftable_RControlAIOOpRef;
extern int ghidra_vftable_RITQHandler;
extern int ghidra_vftable_RUpnpCDGetAllPrefixLocationsAIOOp;
extern int ghidra_vftable_RetailDemoData;
extern int ghidra_vftable_SCArray;
extern int ghidra_vftable_SCData;
extern int ghidra_vftable_SCFileBackedData;
extern int ghidra_vftable_SCHouseholdEventSink;
extern int ghidra_vftable_SCIObj;
extern int ghidra_vftable_SCIObjImpl;
extern int ghidra_vftable_SCIOwnedObjImpl;
extern int ghidra_vftable_SCITearOffObjImpl;
extern int ghidra_vftable_SCInAppPurchaseCallback;
extern int ghidra_vftable_SCInAppPurchaseManager;
extern int ghidra_vftable_SCLoggingHelper;
extern int ghidra_vftable_SCRadioURLActionStringInput;
extern int ghidra_vftable_SCRemoveMeSettingsMenu;
extern int ghidra_vftable_SCStringArray;
extern int ghidra_vftable_SCSwfObjBCListener;
extern int ghidra_vftable_SCSwfObjHHListener;
extern int ghidra_vftable_SCSystemEventSink;
extern int ghidra_vftable_SCTime;
extern int ghidra_vftable_SwigDirector_SCIActionDelegateSwigBase;
extern int ghidra_vftable_SwigDirector_SCIActionFilterSwigBase;
extern int ghidra_vftable_SwigDirector_SCIActionSwigBase;
extern int ghidra_vftable_SwigDirector_SCIAutomationDelegateSwigBase;
extern int ghidra_vftable_SwigDirector_SCIClipboardDelegateSwigBase;
extern int ghidra_vftable_SwigDirector_SCIEventSinkSwigBase;
extern int ghidra_vftable_SwigDirector_SCIGetAboutSonosStringCBSwigBase;
extern int ghidra_vftable_SwigDirector_SCIGetSonosPlaylistsCBSwigBase;
extern int ghidra_vftable_SwigDirector_SCIHapticDelegateSwigBase;
extern int ghidra_vftable_SwigDirector_SCILifecycleAppProviderSwigBase;
extern int ghidra_vftable_SwigDirector_SCINetworkManagementDelegateSwigBase;
extern int ghidra_vftable_SwigDirector_SCINewWizDelegateSwigBase;
extern int ghidra_vftable_SwigDirector_SCIOpCBSwigBase;
extern int ghidra_vftable_SwigDirector_SCIPlatformDateTimeProvider;
extern int ghidra_vftable_SwigDirector_SCIServiceAppInteropSwigBase;
extern int ghidra_vftable_SwigDirector_SCIStackTraceCaptureDelegateSwigBase;
extern int ghidra_vftable_SwigDirector_SCIUINotificationsDelegate;
extern int ghidra_vftable_SwigDirector_SCIUrlSessionCallbackSwigBase;
extern int ghidra_vftable_SwigDirector_SCIVpnDelegateSwigBase;
extern int ghidra_vftable_SwigDirector_SCLibAssertionFailureCallback;
extern int ghidra_vftable_SwigDirector_SCLibCallUIThreadCallback;
extern int ghidra_vftable_SwigDirector_SCLibCustomSubWizardCallback;
extern int ghidra_vftable_SwigDirector_SCLibDelegateFactory;
extern int ghidra_vftable_SwigDirector_SCLibDiagnosticConsoleLogCallback;
extern int ghidra_vftable_SwigDirector_SCLibDiagnosticExtraInfoCallback;
extern int ghidra_vftable_SwigDirector_SCLibLogCallback;
extern int ghidra_vftable_SwigDirector_SCLibPlatformStringCallback;
extern int ghidra_vftable_SwigDirector_SCLibTruncatedStringsCallback;
extern int ghidra_vftable_UnsupportedData;
extern int ghidra_vftable_ZonePlayerUpdateData;
extern int ghidra_vftable_std_Func_impl_no_alloc;
extern int ghidra_vftable_std_Ref_count_obj2;
extern int in_EAX;
extern int in_stack_00000014;
extern int in_stack_00000018;
extern int uStack00000004;
extern int uStack00000008;
extern int uStack_10;
extern int uStack_8;
extern int uStack_c;
extern int unaff_EDI;
extern undefined1 LAB_1001b7c5[];
extern undefined1 LAB_1005a105[];
extern undefined1 LAB_1008d708[];
extern undefined1 LAB_101aa510[];
extern undefined1 LAB_1021ab6c[];
extern undefined1 LAB_114f3770[];
extern undefined1 LAB_114f37a0[];
extern undefined1 LAB_114f4640[];
extern undefined1 LAB_114f5c50[];
extern undefined1 LAB_114f5c80[];
extern undefined1 LAB_114f5cb0[];
extern undefined1 LAB_114f6840[];
extern undefined1 LAB_114f8000[];
extern undefined1 LAB_114fa300[];
extern undefined1 LAB_114fa330[];
extern undefined1 LAB_114fa360[];
extern undefined1 LAB_114fa390[];
extern undefined1 LAB_114fa3c0[];
extern undefined1 LAB_114fa3f0[];
extern undefined1 LAB_114fa420[];
extern undefined1 LAB_114fa450[];
extern undefined1 LAB_114fc720[];
extern undefined1 LAB_114fc750[];
extern undefined1 LAB_114fe6c0[];
extern undefined1 LAB_114fe6f0[];
extern undefined1 LAB_114fe720[];
extern undefined1 LAB_114fe750[];
extern undefined1 LAB_115018a0[];
extern undefined1 LAB_115018d0[];
extern undefined1 LAB_11503320[];
extern undefined1 LAB_11503350[];
extern undefined1 LAB_11503380[];
extern undefined1 LAB_115033b0[];
extern undefined1 LAB_115033e0[];
extern undefined1 LAB_11503410[];
extern undefined1 LAB_11503440[];
extern undefined1 LAB_11503470[];
extern undefined1 LAB_115034a0[];
extern undefined1 LAB_115034d0[];
extern undefined1 LAB_1150fb80[];
extern undefined1 LAB_115124f0[];
extern undefined1 LAB_11512520[];
extern undefined1 LAB_11512550[];
extern undefined1 LAB_11512580[];
extern undefined1 LAB_11513240[];
extern void *ExceptionList;
void __stdcall FUN_1019c9f0(int *param_1);
template<class... A> int FUN_1019c9f0(A...);
void __stdcall FUN_1019ca10(int *param_1);
template<class... A> int FUN_1019ca10(A...);
void __stdcall FUN_1019ca30(int *param_1);
template<class... A> int FUN_1019ca30(A...);
void __stdcall FUN_1019ca50(int *param_1);
template<class... A> int FUN_1019ca50(A...);
void __stdcall FUN_1019ca70(int *param_1);
template<class... A> int FUN_1019ca70(A...);
void __stdcall FUN_1019ca90(int *param_1);
template<class... A> int FUN_1019ca90(A...);
void __stdcall FUN_1019cab0(int *param_1);
template<class... A> int FUN_1019cab0(A...);
void __stdcall FUN_1019cad0(int *param_1);
template<class... A> int FUN_1019cad0(A...);
void __stdcall FUN_1019caf0(int *param_1);
template<class... A> int FUN_1019caf0(A...);
void __stdcall FUN_1019cb10(int *param_1);
template<class... A> int FUN_1019cb10(A...);
void __stdcall FUN_1019cb30(int *param_1);
template<class... A> int FUN_1019cb30(A...);
void __stdcall FUN_1019cb50(int *param_1);
template<class... A> int FUN_1019cb50(A...);
void __stdcall FUN_1019cb70(int *param_1);
template<class... A> int FUN_1019cb70(A...);
void __stdcall FUN_1019cb90(int *param_1);
template<class... A> int FUN_1019cb90(A...);
void __stdcall FUN_1019cbb0(int *param_1);
template<class... A> int FUN_1019cbb0(A...);
void __stdcall FUN_1019cbd0(int *param_1);
template<class... A> int FUN_1019cbd0(A...);
void __stdcall FUN_1019cbf0(int *param_1);
template<class... A> int FUN_1019cbf0(A...);
void __stdcall FUN_1019cc10(int *param_1);
template<class... A> int FUN_1019cc10(A...);
void __stdcall FUN_1019cc30(int *param_1);
template<class... A> int FUN_1019cc30(A...);
void __stdcall FUN_1019cc50(int *param_1);
template<class... A> int FUN_1019cc50(A...);
void __stdcall FUN_1019cc70(int *param_1);
template<class... A> int FUN_1019cc70(A...);
void __stdcall FUN_1019cc90(int *param_1);
template<class... A> int FUN_1019cc90(A...);
void __stdcall FUN_1019ccb0(int *param_1);
template<class... A> int FUN_1019ccb0(A...);
void __stdcall FUN_1019ccd0(int *param_1);
template<class... A> int FUN_1019ccd0(A...);
void __stdcall FUN_1019ccf0(int *param_1);
template<class... A> int FUN_1019ccf0(A...);
void __stdcall FUN_1019cd10(int *param_1);
template<class... A> int FUN_1019cd10(A...);
void __stdcall FUN_1019cd30(int *param_1);
template<class... A> int FUN_1019cd30(A...);
void __stdcall FUN_1019cd50(int *param_1);
template<class... A> int FUN_1019cd50(A...);
void __stdcall FUN_1019cd70(int *param_1);
template<class... A> int FUN_1019cd70(A...);
void __stdcall FUN_1019cd90(int *param_1);
template<class... A> int FUN_1019cd90(A...);
void __stdcall FUN_1019cdb0(int *param_1);
template<class... A> int FUN_1019cdb0(A...);
void __stdcall FUN_1019cdd0(int *param_1);
template<class... A> int FUN_1019cdd0(A...);
void __stdcall FUN_1019cdf0(int *param_1);
template<class... A> int FUN_1019cdf0(A...);
void __stdcall FUN_1019ce10(int *param_1);
template<class... A> int FUN_1019ce10(A...);
void __stdcall FUN_1019ce30(int *param_1);
template<class... A> int FUN_1019ce30(A...);
void __stdcall FUN_1019ce50(int *param_1);
template<class... A> int FUN_1019ce50(A...);
void __stdcall FUN_1019ce70(int *param_1);
template<class... A> int FUN_1019ce70(A...);
void __stdcall FUN_1019ce90(int *param_1);
template<class... A> int FUN_1019ce90(A...);
void __stdcall FUN_1019ceb0(int *param_1);
template<class... A> int FUN_1019ceb0(A...);
void __stdcall FUN_1019ced0(int *param_1);
template<class... A> int FUN_1019ced0(A...);
void __stdcall FUN_1019cef0(int *param_1);
template<class... A> int FUN_1019cef0(A...);
void __stdcall FUN_1019cf10(int *param_1);
template<class... A> int FUN_1019cf10(A...);
void __stdcall FUN_1019cf30(int *param_1);
template<class... A> int FUN_1019cf30(A...);
void __stdcall FUN_1019cf50(int *param_1);
template<class... A> int FUN_1019cf50(A...);
void __stdcall FUN_1019cf70(int *param_1);
template<class... A> int FUN_1019cf70(A...);
void __stdcall FUN_1019cf90(int *param_1);
template<class... A> int FUN_1019cf90(A...);
void __stdcall FUN_1019cfb0(int *param_1);
template<class... A> int FUN_1019cfb0(A...);
void __stdcall FUN_1019cfd0(int *param_1);
template<class... A> int FUN_1019cfd0(A...);
void __stdcall FUN_1019cff0(int *param_1);
template<class... A> int FUN_1019cff0(A...);
void __stdcall FUN_1019d010(int *param_1);
template<class... A> int FUN_1019d010(A...);
void __stdcall FUN_1019d030(int *param_1);
template<class... A> int FUN_1019d030(A...);
void __stdcall FUN_1019d050(int *param_1);
template<class... A> int FUN_1019d050(A...);
void __stdcall FUN_1019d070(int *param_1);
template<class... A> int FUN_1019d070(A...);
void __stdcall FUN_1019d090(int *param_1);
template<class... A> int FUN_1019d090(A...);
void __stdcall FUN_1019d0b0(int *param_1);
template<class... A> int FUN_1019d0b0(A...);
void __stdcall FUN_1019d0d0(int *param_1);
template<class... A> int FUN_1019d0d0(A...);
void __stdcall FUN_1019d0f0(int *param_1);
template<class... A> int FUN_1019d0f0(A...);
void __stdcall FUN_1019d110(int *param_1);
template<class... A> int FUN_1019d110(A...);
void __stdcall FUN_1019d130(int *param_1);
template<class... A> int FUN_1019d130(A...);
void __stdcall FUN_1019d150(int *param_1);
template<class... A> int FUN_1019d150(A...);
void __stdcall FUN_1019d170(int *param_1);
template<class... A> int FUN_1019d170(A...);
void __stdcall FUN_1019d190(int *param_1);
template<class... A> int FUN_1019d190(A...);
void __stdcall FUN_1019d1b0(int *param_1);
template<class... A> int FUN_1019d1b0(A...);
void __stdcall FUN_1019d1d0(int *param_1);
template<class... A> int FUN_1019d1d0(A...);
void __stdcall FUN_1019d1f0(int *param_1);
template<class... A> int FUN_1019d1f0(A...);
void __stdcall FUN_1019d210(int *param_1);
template<class... A> int FUN_1019d210(A...);
void __stdcall FUN_1019d230(int *param_1);
template<class... A> int FUN_1019d230(A...);
void __stdcall FUN_1019d250(int *param_1);
template<class... A> int FUN_1019d250(A...);
void __stdcall FUN_1019d270(int *param_1);
template<class... A> int FUN_1019d270(A...);
void __stdcall FUN_1019d290(int *param_1);
template<class... A> int FUN_1019d290(A...);
void __stdcall FUN_1019d2b0(int *param_1);
template<class... A> int FUN_1019d2b0(A...);
void __stdcall FUN_1019d2d0(int *param_1);
template<class... A> int FUN_1019d2d0(A...);
void __stdcall FUN_1019d2f0(int *param_1);
template<class... A> int FUN_1019d2f0(A...);
void __stdcall FUN_1019d310(int *param_1);
template<class... A> int FUN_1019d310(A...);
void __stdcall FUN_1019d330(int *param_1);
template<class... A> int FUN_1019d330(A...);
void __stdcall FUN_1019d350(int *param_1);
template<class... A> int FUN_1019d350(A...);
void __stdcall FUN_1019d370(int *param_1);
template<class... A> int FUN_1019d370(A...);
void __stdcall FUN_1019d390(int *param_1);
template<class... A> int FUN_1019d390(A...);
void __stdcall FUN_1019d3b0(int *param_1);
template<class... A> int FUN_1019d3b0(A...);
void __stdcall FUN_1019d3d0(int *param_1);
template<class... A> int FUN_1019d3d0(A...);
void __stdcall FUN_1019d3f0(int *param_1);
template<class... A> int FUN_1019d3f0(A...);
void __stdcall FUN_1019d410(int *param_1);
template<class... A> int FUN_1019d410(A...);
void __stdcall FUN_1019d430(int *param_1);
template<class... A> int FUN_1019d430(A...);
void __stdcall FUN_1019d450(int *param_1);
template<class... A> int FUN_1019d450(A...);
void __stdcall FUN_1019d470(int *param_1);
template<class... A> int FUN_1019d470(A...);
void __stdcall FUN_1019d490(int *param_1);
template<class... A> int FUN_1019d490(A...);
void __stdcall FUN_1019d4b0(int *param_1);
template<class... A> int FUN_1019d4b0(A...);
void __stdcall FUN_1019d4d0(int *param_1);
template<class... A> int FUN_1019d4d0(A...);
void __stdcall FUN_1019d4f0(int *param_1);
template<class... A> int FUN_1019d4f0(A...);
void __stdcall FUN_1019d510(int *param_1);
template<class... A> int FUN_1019d510(A...);
void __stdcall FUN_1019d530(int *param_1);
template<class... A> int FUN_1019d530(A...);
void __stdcall FUN_1019d550(int *param_1);
template<class... A> int FUN_1019d550(A...);
void __stdcall FUN_1019d570(int *param_1);
template<class... A> int FUN_1019d570(A...);
void __stdcall FUN_1019d590(int *param_1);
template<class... A> int FUN_1019d590(A...);
void __stdcall FUN_1019d5b0(int *param_1);
template<class... A> int FUN_1019d5b0(A...);
void __stdcall FUN_1019d5d0(int *param_1);
template<class... A> int FUN_1019d5d0(A...);
void __stdcall FUN_1019d5f0(int *param_1);
template<class... A> int FUN_1019d5f0(A...);
void __stdcall FUN_1019d610(int *param_1);
template<class... A> int FUN_1019d610(A...);
void __stdcall FUN_1019d630(int *param_1);
template<class... A> int FUN_1019d630(A...);
void __stdcall FUN_1019d650(int *param_1);
template<class... A> int FUN_1019d650(A...);
void __stdcall FUN_1019d670(int *param_1);
template<class... A> int FUN_1019d670(A...);
void __stdcall FUN_1019d690(int *param_1);
template<class... A> int FUN_1019d690(A...);
void __stdcall FUN_1019d6b0(int *param_1);
template<class... A> int FUN_1019d6b0(A...);
void __stdcall FUN_1019d6d0(int *param_1);
template<class... A> int FUN_1019d6d0(A...);
void __stdcall FUN_1019d6f0(int *param_1);
template<class... A> int FUN_1019d6f0(A...);
void __stdcall FUN_1019d710(int *param_1);
template<class... A> int FUN_1019d710(A...);
void __stdcall FUN_1019d730(int *param_1);
template<class... A> int FUN_1019d730(A...);
void __stdcall FUN_1019d750(int *param_1);
template<class... A> int FUN_1019d750(A...);
void __stdcall FUN_1019d770(int *param_1);
template<class... A> int FUN_1019d770(A...);
void __stdcall FUN_1019d790(int *param_1);
template<class... A> int FUN_1019d790(A...);
void __stdcall FUN_1019d7b0(int *param_1);
template<class... A> int FUN_1019d7b0(A...);
void __stdcall FUN_1019d7d0(int *param_1);
template<class... A> int FUN_1019d7d0(A...);
void __stdcall FUN_1019d7f0(int *param_1);
template<class... A> int FUN_1019d7f0(A...);
void __stdcall FUN_1019d810(int *param_1);
template<class... A> int FUN_1019d810(A...);
void __stdcall FUN_1019d830(int *param_1);
template<class... A> int FUN_1019d830(A...);
void __stdcall FUN_1019d850(int *param_1);
template<class... A> int FUN_1019d850(A...);
void __stdcall FUN_1019d870(int *param_1);
template<class... A> int FUN_1019d870(A...);
void __stdcall FUN_1019d890(int *param_1);
template<class... A> int FUN_1019d890(A...);
void __stdcall FUN_1019d8b0(int *param_1);
template<class... A> int FUN_1019d8b0(A...);
void __stdcall FUN_1019d8d0(int *param_1);
template<class... A> int FUN_1019d8d0(A...);
void __stdcall FUN_1019d8f0(int *param_1);
template<class... A> int FUN_1019d8f0(A...);
void __stdcall FUN_1019d910(int *param_1);
template<class... A> int FUN_1019d910(A...);
void __stdcall FUN_1019d930(int *param_1);
template<class... A> int FUN_1019d930(A...);
void __stdcall FUN_1019d950(int *param_1);
template<class... A> int FUN_1019d950(A...);
void __stdcall FUN_1019d970(int *param_1);
template<class... A> int FUN_1019d970(A...);
void __stdcall FUN_1019d990(int *param_1);
template<class... A> int FUN_1019d990(A...);
void __stdcall FUN_1019d9b0(int *param_1);
template<class... A> int FUN_1019d9b0(A...);
void __stdcall FUN_1019d9d0(int *param_1);
template<class... A> int FUN_1019d9d0(A...);
void __stdcall FUN_1019d9f0(int *param_1);
template<class... A> int FUN_1019d9f0(A...);
void __stdcall FUN_1019da10(int *param_1);
template<class... A> int FUN_1019da10(A...);
void __stdcall FUN_1019da30(int *param_1);
template<class... A> int FUN_1019da30(A...);
void __stdcall FUN_1019da50(int *param_1);
template<class... A> int FUN_1019da50(A...);
void __stdcall FUN_1019da70(int *param_1);
template<class... A> int FUN_1019da70(A...);
void __stdcall FUN_1019da90(int *param_1);
template<class... A> int FUN_1019da90(A...);
void __stdcall FUN_1019dab0(int *param_1);
template<class... A> int FUN_1019dab0(A...);
void __stdcall FUN_1019dad0(int *param_1);
template<class... A> int FUN_1019dad0(A...);
void __stdcall FUN_1019daf0(int *param_1);
template<class... A> int FUN_1019daf0(A...);
void __stdcall FUN_1019db10(int *param_1);
template<class... A> int FUN_1019db10(A...);
void __stdcall FUN_1019db30(int *param_1);
template<class... A> int FUN_1019db30(A...);
void __stdcall FUN_1019db50(int *param_1);
template<class... A> int FUN_1019db50(A...);
void __stdcall FUN_1019db70(int *param_1);
template<class... A> int FUN_1019db70(A...);
void __stdcall FUN_1019db90(int *param_1);
template<class... A> int FUN_1019db90(A...);
void __stdcall FUN_1019dbb0(int *param_1);
template<class... A> int FUN_1019dbb0(A...);
void __stdcall FUN_1019dbd0(int *param_1);
template<class... A> int FUN_1019dbd0(A...);
void __stdcall FUN_1019dbf0(int *param_1);
template<class... A> int FUN_1019dbf0(A...);
void __stdcall FUN_1019dc10(int *param_1);
template<class... A> int FUN_1019dc10(A...);
void __stdcall FUN_1019dc30(int *param_1);
template<class... A> int FUN_1019dc30(A...);
void __stdcall FUN_1019dc50(int *param_1);
template<class... A> int FUN_1019dc50(A...);
void __stdcall FUN_1019dc70(int *param_1);
template<class... A> int FUN_1019dc70(A...);
void __stdcall FUN_1019dc90(int *param_1);
template<class... A> int FUN_1019dc90(A...);
void __stdcall FUN_1019dcb0(int *param_1);
template<class... A> int FUN_1019dcb0(A...);
void __stdcall FUN_1019dcd0(int *param_1);
template<class... A> int FUN_1019dcd0(A...);
void __stdcall FUN_1019dcf0(int *param_1);
template<class... A> int FUN_1019dcf0(A...);
void __stdcall FUN_1019dd10(int *param_1);
template<class... A> int FUN_1019dd10(A...);
void __stdcall FUN_1019dd30(int *param_1);
template<class... A> int FUN_1019dd30(A...);
void __stdcall FUN_1019dd50(int *param_1);
template<class... A> int FUN_1019dd50(A...);
void __stdcall FUN_1019dd70(int *param_1);
template<class... A> int FUN_1019dd70(A...);
void __stdcall FUN_1019dd90(int *param_1);
template<class... A> int FUN_1019dd90(A...);
void __stdcall FUN_1019ddb0(int *param_1);
template<class... A> int FUN_1019ddb0(A...);
void __stdcall FUN_1019ddd0(int *param_1);
template<class... A> int FUN_1019ddd0(A...);
void __stdcall FUN_1019ddf0(int *param_1);
template<class... A> int FUN_1019ddf0(A...);
void __stdcall FUN_1019de10(int *param_1);
template<class... A> int FUN_1019de10(A...);
void __stdcall FUN_1019de30(int *param_1);
template<class... A> int FUN_1019de30(A...);
void __stdcall FUN_1019de50(int *param_1);
template<class... A> int FUN_1019de50(A...);
void __stdcall FUN_1019de70(int *param_1);
template<class... A> int FUN_1019de70(A...);
void __stdcall FUN_1019de90(int *param_1);
template<class... A> int FUN_1019de90(A...);
void __stdcall FUN_1019deb0(int *param_1);
template<class... A> int FUN_1019deb0(A...);
void __stdcall FUN_1019ded0(int *param_1);
template<class... A> int FUN_1019ded0(A...);
void __stdcall FUN_1019def0(int *param_1);
template<class... A> int FUN_1019def0(A...);
void __stdcall FUN_1019df10(int *param_1);
template<class... A> int FUN_1019df10(A...);
void __stdcall FUN_1019df30(int *param_1);
template<class... A> int FUN_1019df30(A...);
void __stdcall FUN_1019df50(int *param_1);
template<class... A> int FUN_1019df50(A...);
void __stdcall FUN_1019df70(int *param_1);
template<class... A> int FUN_1019df70(A...);
void __stdcall FUN_1019df90(int *param_1);
template<class... A> int FUN_1019df90(A...);
void __stdcall FUN_1019dfb0(int *param_1);
template<class... A> int FUN_1019dfb0(A...);
void __stdcall FUN_1019dfd0(int *param_1);
template<class... A> int FUN_1019dfd0(A...);
void __stdcall FUN_1019dff0(int *param_1);
template<class... A> int FUN_1019dff0(A...);
void __stdcall FUN_1019e010(int *param_1);
template<class... A> int FUN_1019e010(A...);
void __stdcall FUN_1019e030(int *param_1);
template<class... A> int FUN_1019e030(A...);
void __stdcall FUN_1019e050(int *param_1);
template<class... A> int FUN_1019e050(A...);
void __stdcall FUN_1019e070(int *param_1);
template<class... A> int FUN_1019e070(A...);
void __stdcall FUN_1019e090(int *param_1);
template<class... A> int FUN_1019e090(A...);
void __stdcall FUN_1019e0b0(int *param_1);
template<class... A> int FUN_1019e0b0(A...);
void __stdcall FUN_1019e0d0(int *param_1);
template<class... A> int FUN_1019e0d0(A...);
void __stdcall FUN_1019e0f0(int *param_1);
template<class... A> int FUN_1019e0f0(A...);
void __stdcall FUN_1019e110(int *param_1);
template<class... A> int FUN_1019e110(A...);
void __stdcall FUN_1019e130(int *param_1);
template<class... A> int FUN_1019e130(A...);
void __stdcall FUN_1019e150(int *param_1);
template<class... A> int FUN_1019e150(A...);
void __stdcall FUN_1019e170(int *param_1);
template<class... A> int FUN_1019e170(A...);
void __stdcall FUN_1019e190(int *param_1);
template<class... A> int FUN_1019e190(A...);
void __stdcall FUN_1019e1b0(int *param_1);
template<class... A> int FUN_1019e1b0(A...);
void __stdcall FUN_1019e1d0(int *param_1);
template<class... A> int FUN_1019e1d0(A...);
void __stdcall FUN_1019e1f0(int *param_1);
template<class... A> int FUN_1019e1f0(A...);
void __stdcall FUN_1019e210(int *param_1);
template<class... A> int FUN_1019e210(A...);
void __stdcall FUN_1019e230(int *param_1);
template<class... A> int FUN_1019e230(A...);
void __stdcall FUN_1019e250(int *param_1);
template<class... A> int FUN_1019e250(A...);
void __stdcall FUN_1019e270(int *param_1);
template<class... A> int FUN_1019e270(A...);
void __stdcall FUN_1019e290(int *param_1);
template<class... A> int FUN_1019e290(A...);
void __stdcall FUN_1019e2b0(int *param_1);
template<class... A> int FUN_1019e2b0(A...);
void __stdcall FUN_1019e2d0(int *param_1);
template<class... A> int FUN_1019e2d0(A...);
void __stdcall FUN_1019e2f0(int *param_1);
template<class... A> int FUN_1019e2f0(A...);
void __stdcall FUN_1019e310(int *param_1);
template<class... A> int FUN_1019e310(A...);
void __stdcall FUN_1019e330(int *param_1);
template<class... A> int FUN_1019e330(A...);
void __stdcall FUN_1019e350(int *param_1);
template<class... A> int FUN_1019e350(A...);
void __stdcall FUN_1019e370(int *param_1);
template<class... A> int FUN_1019e370(A...);
void __stdcall FUN_1019e390(int *param_1);
template<class... A> int FUN_1019e390(A...);
void __stdcall FUN_1019e3b0(int *param_1);
template<class... A> int FUN_1019e3b0(A...);
void __stdcall FUN_1019e3d0(int *param_1);
template<class... A> int FUN_1019e3d0(A...);
void __stdcall FUN_1019e3f0(int *param_1);
template<class... A> int FUN_1019e3f0(A...);
void __stdcall FUN_1019e410(int *param_1);
template<class... A> int FUN_1019e410(A...);
void __stdcall FUN_1019e430(int *param_1);
template<class... A> int FUN_1019e430(A...);
void __stdcall FUN_1019e450(int *param_1);
template<class... A> int FUN_1019e450(A...);
void __stdcall FUN_1019e470(int *param_1);
template<class... A> int FUN_1019e470(A...);
void __stdcall FUN_1019e490(int *param_1);
template<class... A> int FUN_1019e490(A...);
void __stdcall FUN_1019e4b0(int *param_1);
template<class... A> int FUN_1019e4b0(A...);
void __stdcall FUN_1019e4d0(int *param_1);
template<class... A> int FUN_1019e4d0(A...);
void __stdcall FUN_1019e4f0(int *param_1);
template<class... A> int FUN_1019e4f0(A...);
void __stdcall FUN_1019e510(int *param_1);
template<class... A> int FUN_1019e510(A...);
void __stdcall FUN_1019e530(int *param_1);
template<class... A> int FUN_1019e530(A...);
void __stdcall FUN_1019e550(int *param_1);
template<class... A> int FUN_1019e550(A...);
void __stdcall FUN_1019e570(int *param_1);
template<class... A> int FUN_1019e570(A...);
void __stdcall FUN_1019e590(int *param_1);
template<class... A> int FUN_1019e590(A...);
void __stdcall FUN_1019e5b0(int *param_1);
template<class... A> int FUN_1019e5b0(A...);
void __stdcall FUN_1019e5d0(int *param_1);
template<class... A> int FUN_1019e5d0(A...);
void __stdcall FUN_1019e5f0(int *param_1);
template<class... A> int FUN_1019e5f0(A...);
void __stdcall FUN_1019e610(int *param_1);
template<class... A> int FUN_1019e610(A...);
void __stdcall FUN_1019e630(int *param_1);
template<class... A> int FUN_1019e630(A...);
void __stdcall FUN_1019e650(int *param_1);
template<class... A> int FUN_1019e650(A...);
void __stdcall FUN_1019e670(int *param_1);
template<class... A> int FUN_1019e670(A...);
void __stdcall FUN_1019e690(int *param_1);
template<class... A> int FUN_1019e690(A...);
void __stdcall FUN_1019e6b0(int *param_1);
template<class... A> int FUN_1019e6b0(A...);
void __stdcall FUN_1019e6d0(int *param_1);
template<class... A> int FUN_1019e6d0(A...);
void __stdcall FUN_1019e6f0(int *param_1);
template<class... A> int FUN_1019e6f0(A...);
void __stdcall FUN_1019e710(int *param_1);
template<class... A> int FUN_1019e710(A...);
void __stdcall FUN_1019e730(int *param_1);
template<class... A> int FUN_1019e730(A...);
void __stdcall FUN_1019e750(int *param_1);
template<class... A> int FUN_1019e750(A...);
void __stdcall FUN_1019e770(int *param_1);
template<class... A> int FUN_1019e770(A...);
void __stdcall FUN_1019e790(int *param_1);
template<class... A> int FUN_1019e790(A...);
void __stdcall FUN_1019e7b0(int *param_1);
template<class... A> int FUN_1019e7b0(A...);
void __stdcall FUN_1019e7d0(int *param_1);
template<class... A> int FUN_1019e7d0(A...);
void __stdcall FUN_1019e7f0(int *param_1);
template<class... A> int FUN_1019e7f0(A...);
void __stdcall FUN_1019e810(int *param_1);
template<class... A> int FUN_1019e810(A...);
void __stdcall FUN_1019e830(int *param_1);
template<class... A> int FUN_1019e830(A...);
void __stdcall FUN_1019e850(int *param_1);
template<class... A> int FUN_1019e850(A...);
void __stdcall FUN_1019e870(int *param_1);
template<class... A> int FUN_1019e870(A...);
void __stdcall FUN_1019e890(int *param_1);
template<class... A> int FUN_1019e890(A...);
void __stdcall FUN_1019e8b0(int *param_1);
template<class... A> int FUN_1019e8b0(A...);
void __stdcall FUN_1019e8d0(int *param_1);
template<class... A> int FUN_1019e8d0(A...);
void __stdcall FUN_1019e8f0(int *param_1);
template<class... A> int FUN_1019e8f0(A...);
void __stdcall FUN_1019e910(int *param_1);
template<class... A> int FUN_1019e910(A...);
void __stdcall FUN_1019e930(int *param_1);
template<class... A> int FUN_1019e930(A...);
void __stdcall FUN_1019e950(int *param_1);
template<class... A> int FUN_1019e950(A...);
void __stdcall FUN_1019e970(int *param_1);
template<class... A> int FUN_1019e970(A...);
void __stdcall FUN_1019e990(int *param_1);
template<class... A> int FUN_1019e990(A...);
void __stdcall FUN_1019e9b0(int *param_1);
template<class... A> int FUN_1019e9b0(A...);
void __stdcall FUN_1019e9d0(int *param_1);
template<class... A> int FUN_1019e9d0(A...);
void __stdcall FUN_1019e9f0(int *param_1);
template<class... A> int FUN_1019e9f0(A...);
void __stdcall FUN_1019ea10(int *param_1);
template<class... A> int FUN_1019ea10(A...);
void __stdcall FUN_1019ea30(int *param_1);
template<class... A> int FUN_1019ea30(A...);
void __stdcall FUN_1019eaf0(int *param_1);
template<class... A> int FUN_1019eaf0(A...);
void __stdcall FUN_1019eb10(int *param_1);
template<class... A> int FUN_1019eb10(A...);
void __stdcall FUN_1019eb30(int *param_1);
template<class... A> int FUN_1019eb30(A...);
void __stdcall FUN_1019eb50(int *param_1);
template<class... A> int FUN_1019eb50(A...);
void __stdcall FUN_1019ebf0(int *param_1);
template<class... A> int FUN_1019ebf0(A...);
void __stdcall FUN_1019ec10(int *param_1);
template<class... A> int FUN_1019ec10(A...);
void __stdcall FUN_1019ec30(int *param_1);
template<class... A> int FUN_1019ec30(A...);
void __stdcall FUN_1019ec50(int *param_1);
template<class... A> int FUN_1019ec50(A...);
void __stdcall FUN_1019ec70(int *param_1);
template<class... A> int FUN_1019ec70(A...);
void __stdcall FUN_1019ec90(int *param_1);
template<class... A> int FUN_1019ec90(A...);
void __stdcall FUN_1019ecb0(int *param_1);
template<class... A> int FUN_1019ecb0(A...);
void __stdcall FUN_1019ecd0(int *param_1);
template<class... A> int FUN_1019ecd0(A...);
void __stdcall FUN_1019ecf0(int *param_1);
template<class... A> int FUN_1019ecf0(A...);
void __stdcall FUN_1019ed90(int param_1);
template<class... A> int FUN_1019ed90(A...);
void __stdcall FUN_1019edb0(int *param_1);
template<class... A> int FUN_1019edb0(A...);
void __stdcall FUN_1019edd0(int *param_1);
template<class... A> int FUN_1019edd0(A...);
void __stdcall FUN_1019edf0(int *param_1);
template<class... A> int FUN_1019edf0(A...);
void __stdcall FUN_1019ee10(int *param_1);
template<class... A> int FUN_1019ee10(A...);
void __stdcall FUN_1019ee30(int *param_1);
template<class... A> int FUN_1019ee30(A...);
void __stdcall FUN_1019ee50(int *param_1);
template<class... A> int FUN_1019ee50(A...);
void __stdcall FUN_1019ee70(int *param_1);
template<class... A> int FUN_1019ee70(A...);
void __stdcall FUN_1019ee90(int *param_1);
template<class... A> int FUN_1019ee90(A...);
void __stdcall FUN_1019eeb0(SCLibParameters *param_1);
template<class... A> int FUN_1019eeb0(A...);
void __stdcall FUN_1019eee0(int *param_1);
template<class... A> int FUN_1019eee0(A...);
void __stdcall FUN_1019ef00(int *param_1);
template<class... A> int FUN_1019ef00(A...);
void __stdcall FUN_1019ef20(int *param_1);
template<class... A> int FUN_1019ef20(A...);
void __stdcall FUN_1019ef40(int *param_1);
template<class... A> int FUN_1019ef40(A...);
void __stdcall FUN_1019ef60(int *param_1);
template<class... A> int FUN_1019ef60(A...);
void __stdcall FUN_1019ef80(int *param_1);
template<class... A> int FUN_1019ef80(A...);
void __stdcall FUN_1019efa0(int *param_1);
template<class... A> int FUN_1019efa0(A...);
undefined8 * FUN_1019fe40(void);
template<class... A> int FUN_1019fe40(A...);
undefined8 * FUN_1019fe60(void);
template<class... A> int FUN_1019fe60(A...);
undefined4 * FUN_1019ff40(void);
template<class... A> int FUN_1019ff40(A...);
undefined4 * FUN_101a00b0(void);
template<class... A> int FUN_101a00b0(A...);
undefined4 * FUN_101a00f0(void);
template<class... A> int FUN_101a00f0(A...);
undefined4 * FUN_101a0130(void);
template<class... A> int FUN_101a0130(A...);
undefined4 * FUN_101a0660(void);
template<class... A> int FUN_101a0660(A...);
undefined4 * FUN_101a07c0(void);
template<class... A> int FUN_101a07c0(A...);
undefined4 * FUN_101a08e0(void);
template<class... A> int FUN_101a08e0(A...);
undefined4 * FUN_101a0920(void);
template<class... A> int FUN_101a0920(A...);
undefined4 * FUN_101a0970(void);
template<class... A> int FUN_101a0970(A...);
undefined4 * FUN_101a0aa0(void);
template<class... A> int FUN_101a0aa0(A...);
undefined4 * FUN_101a0e60(void);
template<class... A> int FUN_101a0e60(A...);
undefined4 * FUN_101a0eb0(void);
template<class... A> int FUN_101a0eb0(A...);
undefined4 * FUN_101a0f60(void);
template<class... A> int FUN_101a0f60(A...);
undefined4 * FUN_101a0fa0(void);
template<class... A> int FUN_101a0fa0(A...);
undefined4 * FUN_101a1190(void);
template<class... A> int FUN_101a1190(A...);
undefined4 * FUN_101a11e0(void);
template<class... A> int FUN_101a11e0(A...);
undefined4 * FUN_101a1320(void);
template<class... A> int FUN_101a1320(A...);
undefined4 * FUN_101a1440(void);
template<class... A> int FUN_101a1440(A...);
undefined4 * FUN_101a1570(void);
template<class... A> int FUN_101a1570(A...);
undefined4 * FUN_101a1600(void);
template<class... A> int FUN_101a1600(A...);
undefined4 * FUN_101a16b0(void);
template<class... A> int FUN_101a16b0(A...);
undefined4 FUN_101a1800(void);
template<class... A> int FUN_101a1800(A...);
undefined4 * FUN_101a19a0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_101a19a0(A...);
undefined4 * FUN_101a1a30(void);
template<class... A> int FUN_101a1a30(A...);
undefined4 * FUN_101a1a60(void);
template<class... A> int FUN_101a1a60(A...);
undefined4 * FUN_101a1a90(void);
template<class... A> int FUN_101a1a90(A...);
undefined4 * FUN_101a1ad0(void);
template<class... A> int FUN_101a1ad0(A...);
undefined4 * FUN_101a1b10(void);
template<class... A> int FUN_101a1b10(A...);
undefined4 * FUN_101a1b40(void);
template<class... A> int FUN_101a1b40(A...);
undefined4 * FUN_101a1b70(void);
template<class... A> int FUN_101a1b70(A...);
undefined4 FUN_101a1ba0(void);
template<class... A> int FUN_101a1ba0(A...);
undefined4 * FUN_101a1bd0(void);
template<class... A> int FUN_101a1bd0(A...);
undefined4 * FUN_101a1cf0(void);
template<class... A> int FUN_101a1cf0(A...);
undefined4 FUN_101a1d30(void);
template<class... A> int FUN_101a1d30(A...);
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ void __stdcall FUN_101a1d50(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_101a1d50(A...);
void __stdcall FUN_101a1e00(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_101a1e00(A...);
float10 FUN_101a1e50(float param_1);
template<class... A> int FUN_101a1e50(A...);
void __fastcall FUN_101a2000(int param_1);
template<class... A> int FUN_101a2000(A...);
void __fastcall FUN_101a2bd0(undefined4 *param_1);
template<class... A> int FUN_101a2bd0(A...);
void __fastcall FUN_101a3710(undefined4 *param_1);
template<class... A> int FUN_101a3710(A...);
void __stdcall FUN_101a3cc0(int param_1,int param_2);
template<class... A> int FUN_101a3cc0(A...);
void FUN_101a45a0(SCStr *param_1,char *param_2);
template<class... A> int FUN_101a45a0(A...);
void __fastcall FUN_101a4870(int *param_1);
template<class... A> int FUN_101a4870(A...);
void __fastcall FUN_101a4bf0(int *param_1);
template<class... A> int FUN_101a4bf0(A...);
int __fastcall FUN_101a4ca0(undefined4 *param_1);
template<class... A> int FUN_101a4ca0(A...);
int __fastcall FUN_101a4cd0(undefined4 *param_1);
template<class... A> int FUN_101a4cd0(A...);
int __fastcall FUN_101a4fe0(int *param_1);
template<class... A> int FUN_101a4fe0(A...);
int __fastcall FUN_101a6af0(int *param_1);
template<class... A> int FUN_101a6af0(A...);
void __fastcall FUN_101a6b20(int param_1);
template<class... A> int FUN_101a6b20(A...);
void __fastcall FUN_101a8fe0(undefined4 *param_1);
template<class... A> int FUN_101a8fe0(A...);
void __fastcall FUN_101a90e0(int *param_1);
template<class... A> int FUN_101a90e0(A...);
void __fastcall FUN_101a9140(int *param_1);
template<class... A> int FUN_101a9140(A...);
void __fastcall FUN_101aa540(int param_1);
template<class... A> int FUN_101aa540(A...);
void __fastcall FUN_101aa570(uint param_1);
template<class... A> int FUN_101aa570(A...);
undefined4 * __fastcall FUN_101ac3c0(undefined4 *param_1);
template<class... A> int FUN_101ac3c0(A...);
undefined4 * __fastcall FUN_101acad0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_101acad0(A...);
void __fastcall FUN_101ada20(undefined4 *param_1);
template<class... A> int FUN_101ada20(A...);
void __fastcall FUN_101ada40(undefined4 *param_1);
template<class... A> int FUN_101ada40(A...);
void __fastcall FUN_101ada60(undefined4 *param_1);
template<class... A> int FUN_101ada60(A...);
void __fastcall FUN_101ae8e0(int *param_1);
template<class... A> int FUN_101ae8e0(A...);
void __fastcall FUN_101ae940(int param_1);
template<class... A> int FUN_101ae940(A...);
void __fastcall FUN_101aebf0(undefined4 *param_1);
template<class... A> int FUN_101aebf0(A...);
void __fastcall FUN_101b1cc0(int param_1);
template<class... A> int FUN_101b1cc0(A...);
int * FUN_101b2450(int *param_1);
template<class... A> int FUN_101b2450(A...);
void __fastcall FUN_101b2520(int param_1);
template<class... A> int FUN_101b2520(A...);
void __fastcall FUN_101b2540(int param_1);
template<class... A> int FUN_101b2540(A...);
void __fastcall FUN_101b25f0(undefined4 *param_1);
template<class... A> int FUN_101b25f0(A...);
void __fastcall FUN_101b2e80(int *param_1);
template<class... A> int FUN_101b2e80(A...);
void __fastcall FUN_101b4d40(int *param_1);
template<class... A> int FUN_101b4d40(A...);
SCStr * __stdcall FUN_101b5270(SCStr *param_1);
template<class... A> int FUN_101b5270(A...);
uint __fastcall FUN_101b5ef0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_101b5ef0(A...);
uint __fastcall FUN_101b7d20(int param_1);
template<class... A> int FUN_101b7d20(A...);
void __fastcall FUN_101b8260(undefined4 *param_1);
template<class... A> int FUN_101b8260(A...);
SCStr * __stdcall FUN_101b8720(SCStr *param_1);
template<class... A> int FUN_101b8720(A...);
void FUN_101b9160(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_101b9160(A...);
void __fastcall FUN_101b9240(undefined4 *param_1);
template<class... A> int FUN_101b9240(A...);
void __fastcall FUN_101b9b80(undefined4 *param_1);
template<class... A> int FUN_101b9b80(A...);
void __fastcall FUN_101b9f90(int *param_1);
template<class... A> int FUN_101b9f90(A...);
void __fastcall FUN_101b9ff0(int *param_1);
template<class... A> int FUN_101b9ff0(A...);
void __fastcall FUN_101ba050(int *param_1);
template<class... A> int FUN_101ba050(A...);
void __fastcall FUN_101ba220(undefined4 *param_1);
template<class... A> int FUN_101ba220(A...);
SCStr * __stdcall FUN_101bb0e0(SCStr *param_1);
template<class... A> int FUN_101bb0e0(A...);
void __fastcall FUN_101bb100(int *param_1);
template<class... A> int FUN_101bb100(A...);
void __fastcall FUN_101bb140(undefined4 *param_1);
template<class... A> int FUN_101bb140(A...);
void __fastcall FUN_101bb180(int *param_1);
template<class... A> int FUN_101bb180(A...);
SCStr * __stdcall FUN_101bb870(SCStr *param_1);
template<class... A> int FUN_101bb870(A...);
uint __fastcall FUN_101bbbe0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_101bbbe0(A...);
int __fastcall FUN_101bc2d0(undefined4 *param_1);
template<class... A> int FUN_101bc2d0(A...);
void __fastcall FUN_101bc330(int *param_1);
template<class... A> int FUN_101bc330(A...);
undefined4 __fastcall FUN_101bc3e0(int param_1);
template<class... A> int FUN_101bc3e0(A...);
void __fastcall FUN_101be0d0(int *param_1);
template<class... A> int FUN_101be0d0(A...);
void __fastcall FUN_101be1b0(undefined4 *param_1);
template<class... A> int FUN_101be1b0(A...);
void __fastcall FUN_101bf1c0(int param_1);
template<class... A> int FUN_101bf1c0(A...);
undefined4 FUN_101c3610(undefined4 param_1);
template<class... A> int FUN_101c3610(A...);
void __stdcall FUN_101c4f10(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_101c4f10(A...);
undefined4 * __fastcall FUN_101c58b0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_101c58b0(A...);
void __fastcall FUN_101c6350(undefined4 *param_1);
template<class... A> int FUN_101c6350(A...);
void __fastcall FUN_101c6370(undefined4 *param_1);
template<class... A> int FUN_101c6370(A...);
void __fastcall FUN_101c6790(int *param_1);
template<class... A> int FUN_101c6790(A...);
void __fastcall FUN_101c67f0(int param_1);
template<class... A> int FUN_101c67f0(A...);
void __fastcall FUN_101c69e0(undefined4 *param_1);
template<class... A> int FUN_101c69e0(A...);
void __fastcall FUN_101c6a00(undefined4 *param_1);
template<class... A> int FUN_101c6a00(A...);
int __stdcall FUN_101c7440(undefined4 param_1);
template<class... A> int FUN_101c7440(A...);
void __fastcall FUN_101c83f0(int param_1);
template<class... A> int FUN_101c83f0(A...);
void __fastcall FUN_101c8da0(undefined4 *param_1);
template<class... A> int FUN_101c8da0(A...);
void __fastcall FUN_101c9af0(int param_1);
template<class... A> int FUN_101c9af0(A...);
void __fastcall FUN_101c9b90(int *param_1);
template<class... A> int FUN_101c9b90(A...);
void __stdcall FUN_101ca860(int param_1,int param_2);
template<class... A> int FUN_101ca860(A...);
SCStr * __stdcall FUN_101ca950(SCStr *param_1);
template<class... A> int FUN_101ca950(A...);
void __fastcall FUN_101ca970(int *param_1);
template<class... A> int FUN_101ca970(A...);
undefined4 * __fastcall FUN_101cc2c0(undefined4 *param_1);
template<class... A> int FUN_101cc2c0(A...);
void __stdcall FUN_101cdee0(undefined4 param_1,int *param_2);
template<class... A> int FUN_101cdee0(A...);
undefined4 * __fastcall FUN_101cf8a0(undefined4 *param_1);
template<class... A> int FUN_101cf8a0(A...);
undefined4 * __fastcall FUN_101cf8f0(undefined4 *param_1);
template<class... A> int FUN_101cf8f0(A...);
undefined4 * __fastcall FUN_101cf960(undefined4 *param_1);
template<class... A> int FUN_101cf960(A...);
undefined4 * __fastcall FUN_101cfa10(undefined4 *param_1);
template<class... A> int FUN_101cfa10(A...);
undefined4 * __fastcall FUN_101d0020(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_101d0020(A...);
undefined4 * __fastcall FUN_101d0060(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_101d0060(A...);
undefined4 * __fastcall FUN_101d0480(undefined4 *param_1);
template<class... A> int FUN_101d0480(A...);
void __fastcall FUN_101d18a0(undefined4 *param_1);
template<class... A> int FUN_101d18a0(A...);
void __fastcall FUN_101d18c0(undefined4 *param_1);
template<class... A> int FUN_101d18c0(A...);
void __fastcall FUN_101d1920(undefined4 *param_1);
template<class... A> int FUN_101d1920(A...);
void __fastcall FUN_101d1940(undefined4 *param_1);
template<class... A> int FUN_101d1940(A...);
void __fastcall FUN_101d1960(undefined4 *param_1);
template<class... A> int FUN_101d1960(A...);
void __fastcall FUN_101d1980(undefined4 *param_1);
template<class... A> int FUN_101d1980(A...);
void __fastcall FUN_101d2630(int *param_1);
template<class... A> int FUN_101d2630(A...);
void __fastcall FUN_101d2690(int *param_1);
template<class... A> int FUN_101d2690(A...);
void __fastcall FUN_101d26f0(int *param_1);
template<class... A> int FUN_101d26f0(A...);
void __fastcall FUN_101d2750(int *param_1);
template<class... A> int FUN_101d2750(A...);
void __fastcall FUN_101d27b0(int *param_1);
template<class... A> int FUN_101d27b0(A...);
void __fastcall FUN_101d2810(int *param_1);
template<class... A> int FUN_101d2810(A...);
void __fastcall FUN_101d2870(int *param_1);
template<class... A> int FUN_101d2870(A...);
void __fastcall FUN_101d28d0(int *param_1);
template<class... A> int FUN_101d28d0(A...);
void __fastcall FUN_101d2930(int param_1);
template<class... A> int FUN_101d2930(A...);
void __fastcall FUN_101d2950(int param_1);
template<class... A> int FUN_101d2950(A...);
void __fastcall FUN_101d2970(int *param_1);
template<class... A> int FUN_101d2970(A...);
void __fastcall FUN_101d29a0(int *param_1);
template<class... A> int FUN_101d29a0(A...);
void __fastcall FUN_101d29d0(int *param_1);
template<class... A> int FUN_101d29d0(A...);
void __fastcall FUN_101d2a00(int *param_1);
template<class... A> int FUN_101d2a00(A...);
void __fastcall FUN_101d2a30(int *param_1);
template<class... A> int FUN_101d2a30(A...);
void __fastcall FUN_101d2a60(int *param_1);
template<class... A> int FUN_101d2a60(A...);
void __fastcall FUN_101d2a90(int *param_1);
template<class... A> int FUN_101d2a90(A...);
void __fastcall FUN_101d2bf0(int *param_1);
template<class... A> int FUN_101d2bf0(A...);
void __fastcall FUN_101d2c40(int param_1);
template<class... A> int FUN_101d2c40(A...);
void __fastcall FUN_101d2c60(int *param_1);
template<class... A> int FUN_101d2c60(A...);
void __fastcall FUN_101d2c90(int *param_1);
template<class... A> int FUN_101d2c90(A...);
void __fastcall FUN_101d2cc0(int *param_1);
template<class... A> int FUN_101d2cc0(A...);
void __fastcall FUN_101d2cf0(int *param_1);
template<class... A> int FUN_101d2cf0(A...);
void __fastcall FUN_101d2d20(int *param_1);
template<class... A> int FUN_101d2d20(A...);
void __fastcall FUN_101d2d50(int *param_1);
template<class... A> int FUN_101d2d50(A...);
void __fastcall FUN_101d2d80(int *param_1);
template<class... A> int FUN_101d2d80(A...);
void __fastcall FUN_101d2db0(undefined4 *param_1);
template<class... A> int FUN_101d2db0(A...);
void __fastcall FUN_101d2de0(int *param_1);
template<class... A> int FUN_101d2de0(A...);
void __fastcall FUN_101d2ea0(int param_1);
template<class... A> int FUN_101d2ea0(A...);
void __fastcall FUN_101d2ee0(int param_1);
template<class... A> int FUN_101d2ee0(A...);
void __fastcall FUN_101d33f0(undefined4 *param_1);
template<class... A> int FUN_101d33f0(A...);
void __fastcall FUN_101d3410(undefined4 *param_1);
template<class... A> int FUN_101d3410(A...);
void __fastcall FUN_101d3a30(int *param_1);
template<class... A> int FUN_101d3a30(A...);
int * __fastcall FUN_101d4050(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_101d4050(A...);
int * __fastcall FUN_101d4080(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_101d4080(A...);
void __fastcall FUN_101d6000(int param_1);
template<class... A> int FUN_101d6000(A...);
void __fastcall FUN_101d6020(int param_1);
template<class... A> int FUN_101d6020(A...);
int * FUN_101d6f20(int *param_1);
template<class... A> int FUN_101d6f20(A...);
int * FUN_101d6f50(int *param_1);
template<class... A> int FUN_101d6f50(A...);
void __fastcall FUN_101d7230(int *param_1);
template<class... A> int FUN_101d7230(A...);
void __fastcall FUN_101d7260(int *param_1);
template<class... A> int FUN_101d7260(A...);
void __fastcall FUN_101d7290(int *param_1);
template<class... A> int FUN_101d7290(A...);
void __fastcall FUN_101d72c0(int *param_1);
template<class... A> int FUN_101d72c0(A...);
void __fastcall FUN_101d72f0(int *param_1);
template<class... A> int FUN_101d72f0(A...);
void __fastcall FUN_101d7320(int *param_1);
template<class... A> int FUN_101d7320(A...);
void __fastcall FUN_101d7350(int *param_1);
template<class... A> int FUN_101d7350(A...);
void __fastcall FUN_101d7380(undefined4 *param_1);
template<class... A> int FUN_101d7380(A...);
int __fastcall FUN_101d78c0(int *param_1);
template<class... A> int FUN_101d78c0(A...);
int __fastcall FUN_101d7900(int *param_1);
template<class... A> int FUN_101d7900(A...);
void __fastcall FUN_101d83f0(int param_1);
template<class... A> int FUN_101d83f0(A...);
void __fastcall FUN_101d8490(int *param_1);
template<class... A> int FUN_101d8490(A...);
void __fastcall FUN_101d84c0(int *param_1);
template<class... A> int FUN_101d84c0(A...);
void __fastcall FUN_101d8e80(undefined4 *param_1);
template<class... A> int FUN_101d8e80(A...);
void __fastcall FUN_101d8ec0(undefined4 *param_1);
template<class... A> int FUN_101d8ec0(A...);
void __fastcall FUN_101d8f00(int *param_1);
template<class... A> int FUN_101d8f00(A...);
void __fastcall FUN_101d8f30(int *param_1);
template<class... A> int FUN_101d8f30(A...);
SCStr * __stdcall FUN_101d96d0(SCStr *param_1);
template<class... A> int FUN_101d96d0(A...);
SCStr * __stdcall FUN_101d96f0(SCStr *param_1);
template<class... A> int FUN_101d96f0(A...);
SCStr * __stdcall FUN_101d9d40(SCStr *param_1);
template<class... A> int FUN_101d9d40(A...);
SCStr * __stdcall FUN_101d9fb0(SCStr *param_1);
template<class... A> int FUN_101d9fb0(A...);
SCStr * __stdcall FUN_101d9fe0(SCStr *param_1);
template<class... A> int FUN_101d9fe0(A...);
int __fastcall FUN_101dce30(int param_1);
template<class... A> int FUN_101dce30(A...);
undefined4 __fastcall FUN_101dcef0(int param_1);
template<class... A> int FUN_101dcef0(A...);
uint __fastcall FUN_101dcf50(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_101dcf50(A...);
void __stdcall FUN_101dcf70(SCStr *param_1);
template<class... A> int FUN_101dcf70(A...);
void __stdcall FUN_101dcf90(SCStr *param_1);
template<class... A> int FUN_101dcf90(A...);
void __fastcall FUN_101dd0a0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_101dd0a0(A...);
void __fastcall FUN_101de5f0(undefined4 *param_1);
template<class... A> int FUN_101de5f0(A...);
void __fastcall FUN_101dfd50(undefined4 *param_1);
template<class... A> int FUN_101dfd50(A...);
void __fastcall FUN_101e1260(int *param_1);
template<class... A> int FUN_101e1260(A...);
void __fastcall FUN_101e12c0(int *param_1);
template<class... A> int FUN_101e12c0(A...);
void __fastcall FUN_101e1320(int param_1);
template<class... A> int FUN_101e1320(A...);
void __fastcall FUN_101e13f0(int param_1);
template<class... A> int FUN_101e13f0(A...);
void __fastcall FUN_101e19d0(int param_1);
template<class... A> int FUN_101e19d0(A...);
int * FUN_101e22f0(int *param_1);
template<class... A> int FUN_101e22f0(A...);
void __fastcall FUN_101e2d10(int *param_1);
template<class... A> int FUN_101e2d10(A...);
void __fastcall FUN_101e2d40(int *param_1);
template<class... A> int FUN_101e2d40(A...);
bool __fastcall FUN_101e3570(int param_1);
template<class... A> int FUN_101e3570(A...);
int __fastcall FUN_101e3a60(int *param_1);
template<class... A> int FUN_101e3a60(A...);
undefined4 __stdcall FUN_101e6c60(undefined4 param_1);
template<class... A> int FUN_101e6c60(A...);
void __stdcall FUN_101e6c80(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_101e6c80(A...);
void __stdcall FUN_101e6cb0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_101e6cb0(A...);
void __fastcall FUN_101eabb0(undefined4 *param_1);
template<class... A> int FUN_101eabb0(A...);
void __fastcall FUN_101eabd0(undefined4 *param_1);
template<class... A> int FUN_101eabd0(A...);
void __fastcall FUN_101eae90(int *param_1);
template<class... A> int FUN_101eae90(A...);
void __fastcall FUN_101eaef0(int *param_1);
template<class... A> int FUN_101eaef0(A...);
void __fastcall FUN_101eaf50(int *param_1);
template<class... A> int FUN_101eaf50(A...);
void __fastcall FUN_101eafb0(int *param_1);
template<class... A> int FUN_101eafb0(A...);
void __fastcall FUN_101eb0f0(int *param_1);
template<class... A> int FUN_101eb0f0(A...);
void __fastcall FUN_101eb130(undefined4 *param_1);
template<class... A> int FUN_101eb130(A...);
void __fastcall FUN_101eb150(undefined4 *param_1);
template<class... A> int FUN_101eb150(A...);
void __fastcall FUN_101eb170(int *param_1);
template<class... A> int FUN_101eb170(A...);
void __fastcall FUN_101eb270(undefined4 *param_1);
template<class... A> int FUN_101eb270(A...);
void __fastcall FUN_101ec470(int *param_1);
template<class... A> int FUN_101ec470(A...);
void __fastcall FUN_101ed5b0(undefined4 *param_1);
template<class... A> int FUN_101ed5b0(A...);
void __fastcall FUN_101ed5d0(undefined4 *param_1);
template<class... A> int FUN_101ed5d0(A...);
void __stdcall FUN_101edd80(int param_1,int param_2);
template<class... A> int FUN_101edd80(A...);
void __stdcall FUN_101eddd0(int param_1,int param_2);
template<class... A> int FUN_101eddd0(A...);
void __fastcall FUN_101ee060(int *param_1);
template<class... A> int FUN_101ee060(A...);
SCStr * __stdcall FUN_101ee2e0(SCStr *param_1);
template<class... A> int FUN_101ee2e0(A...);
SCStr * __stdcall FUN_101ee310(SCStr *param_1);
template<class... A> int FUN_101ee310(A...);
SCStr * __stdcall FUN_101ee630(SCStr *param_1);
template<class... A> int FUN_101ee630(A...);
undefined4 FUN_101ee650(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_101ee650(A...);
void __fastcall FUN_101f1c60(int param_1);
template<class... A> int FUN_101f1c60(A...);
void __fastcall FUN_101f1e90(int param_1);
template<class... A> int FUN_101f1e90(A...);
void __fastcall FUN_101f1ed0(int param_1);
template<class... A> int FUN_101f1ed0(A...);
void __stdcall FUN_101f2c10(undefined4 param_1);
template<class... A> int FUN_101f2c10(A...);
int __fastcall FUN_101f3600(int param_1);
template<class... A> int FUN_101f3600(A...);
void __fastcall FUN_101f4750(undefined4 *param_1);
template<class... A> int FUN_101f4750(A...);
void __fastcall FUN_101f4840(int *param_1);
template<class... A> int FUN_101f4840(A...);
void __fastcall FUN_101f4880(int *param_1);
template<class... A> int FUN_101f4880(A...);
int * FUN_101f53a0(int *param_1);
template<class... A> int FUN_101f53a0(A...);
void FUN_101f5560(void);
template<class... A> int FUN_101f5560(A...);
void __stdcall FUN_101f55f0(int param_1,int param_2);
template<class... A> int FUN_101f55f0(A...);
void FUN_101f6430(void);
template<class... A> int FUN_101f6430(A...);
void __stdcall FUN_101f9200(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_101f9200(A...);
void __fastcall FUN_101fa510(undefined4 *param_1);
template<class... A> int FUN_101fa510(A...);
void __fastcall FUN_101fa610(int *param_1);
template<class... A> int FUN_101fa610(A...);
void __fastcall FUN_101fa670(int *param_1);
template<class... A> int FUN_101fa670(A...);
void __fastcall FUN_101fa6d0(int *param_1);
template<class... A> int FUN_101fa6d0(A...);
void __fastcall FUN_101fa700(int *param_1);
template<class... A> int FUN_101fa700(A...);
void __fastcall FUN_101fa760(int *param_1);
template<class... A> int FUN_101fa760(A...);
void __fastcall FUN_101fa790(int *param_1);
template<class... A> int FUN_101fa790(A...);
void __fastcall FUN_101fa850(int *param_1);
template<class... A> int FUN_101fa850(A...);
void __fastcall FUN_101fb0a0(int *param_1);
template<class... A> int FUN_101fb0a0(A...);
void __fastcall FUN_101fb0d0(int *param_1);
template<class... A> int FUN_101fb0d0(A...);
SCStr * __stdcall FUN_101fb3a0(SCStr *param_1);
template<class... A> int FUN_101fb3a0(A...);
SCStr * __stdcall FUN_101fb5a0(SCStr *param_1);
template<class... A> int FUN_101fb5a0(A...);
void __stdcall FUN_101fc380(int param_1);
template<class... A> int FUN_101fc380(A...);
void __stdcall FUN_101fc3a0(int param_1);
template<class... A> int FUN_101fc3a0(A...);
undefined4 * __fastcall FUN_101fef30(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_101fef30(A...);
void __fastcall FUN_10201940(undefined4 *param_1);
template<class... A> int FUN_10201940(A...);
void __fastcall FUN_10202680(int *param_1);
template<class... A> int FUN_10202680(A...);
void __fastcall FUN_102026e0(int *param_1);
template<class... A> int FUN_102026e0(A...);
void __fastcall FUN_10202740(int *param_1);
template<class... A> int FUN_10202740(A...);
void __fastcall FUN_102027a0(int *param_1);
template<class... A> int FUN_102027a0(A...);
void __fastcall FUN_10202800(int *param_1);
template<class... A> int FUN_10202800(A...);
void __fastcall FUN_10202860(int *param_1);
template<class... A> int FUN_10202860(A...);
void __fastcall FUN_102028c0(int *param_1);
template<class... A> int FUN_102028c0(A...);
void __fastcall FUN_10202920(int *param_1);
template<class... A> int FUN_10202920(A...);
void __fastcall FUN_10202980(int *param_1);
template<class... A> int FUN_10202980(A...);
void __fastcall FUN_102029e0(int *param_1);
template<class... A> int FUN_102029e0(A...);
void __fastcall FUN_10202a40(int param_1);
template<class... A> int FUN_10202a40(A...);
void __fastcall FUN_10202a70(int *param_1);
template<class... A> int FUN_10202a70(A...);
void __fastcall FUN_10202b60(int param_1);
template<class... A> int FUN_10202b60(A...);
void __fastcall FUN_10202b80(undefined4 *param_1);
template<class... A> int FUN_10202b80(A...);
void __fastcall FUN_10202ba0(int *param_1);
template<class... A> int FUN_10202ba0(A...);
void __fastcall FUN_10203510(undefined4 *param_1);
template<class... A> int FUN_10203510(A...);
void FUN_102036a0(void);
template<class... A> int FUN_102036a0(A...);
void __fastcall FUN_10206bc0(int param_1);
template<class... A> int FUN_10206bc0(A...);
undefined4 __fastcall FUN_102072c0(int *param_1);
template<class... A> int FUN_102072c0(A...);
undefined4 FUN_10207b90(int param_1);
template<class... A> int FUN_10207b90(A...);
undefined4 FUN_10207c10(undefined4 param_1);
template<class... A> int FUN_10207c10(A...);
int __fastcall FUN_102088d0(int param_1);
template<class... A> int FUN_102088d0(A...);
bool __fastcall FUN_10208c50(int param_1);
template<class... A> int FUN_10208c50(A...);
void __fastcall FUN_10208c80(int param_1);
template<class... A> int FUN_10208c80(A...);
undefined4 FUN_10208df0(undefined4 param_1);
template<class... A> int FUN_10208df0(A...);
void __stdcall FUN_1020a070(int param_1,int param_2);
template<class... A> int FUN_1020a070(A...);
/* WARNING: Removing unreachable block (ram,0x1020a316) */ int __fastcall FUN_1020a300(int param_1);
SCStr * __stdcall FUN_1020a330(SCStr *param_1);
template<class... A> int FUN_1020a330(A...);
SCStr * __stdcall FUN_1020a350(SCStr *param_1);
template<class... A> int FUN_1020a350(A...);
void __fastcall FUN_1020a380(undefined4 *param_1);
template<class... A> int FUN_1020a380(A...);
void __fastcall FUN_1020a3c0(undefined4 *param_1);
template<class... A> int FUN_1020a3c0(A...);
void __fastcall FUN_1020a400(int *param_1);
template<class... A> int FUN_1020a400(A...);
undefined1 __fastcall FUN_1020a5e0(int *param_1);
template<class... A> int FUN_1020a5e0(A...);
SCStr * __stdcall FUN_1020a620(SCStr *param_1);
template<class... A> int FUN_1020a620(A...);
SCStr * __stdcall FUN_1020a6c0(SCStr *param_1);
template<class... A> int FUN_1020a6c0(A...);
SCStr * __stdcall FUN_1020a6e0(SCStr *param_1);
template<class... A> int FUN_1020a6e0(A...);
SCStr * __stdcall FUN_1020a700(SCStr *param_1);
template<class... A> int FUN_1020a700(A...);
SCStr * __stdcall FUN_1020a720(SCStr *param_1);
template<class... A> int FUN_1020a720(A...);
SCStr * __stdcall FUN_1020a740(SCStr *param_1);
template<class... A> int FUN_1020a740(A...);
undefined4 __fastcall FUN_1020bfe0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_1020bfe0(A...);
SCStr * __stdcall FUN_1020c210(SCStr *param_1);
template<class... A> int FUN_1020c210(A...);
SCStr * __stdcall FUN_1020d120(SCStr *param_1);
template<class... A> int FUN_1020d120(A...);
SCStr * __stdcall FUN_1020d140(SCStr *param_1);
template<class... A> int FUN_1020d140(A...);
SCStr * __stdcall FUN_1020d160(SCStr *param_1);
template<class... A> int FUN_1020d160(A...);
SCStr * __stdcall FUN_1020d180(SCStr *param_1);
template<class... A> int FUN_1020d180(A...);
SCStr * __stdcall FUN_1020d1a0(SCStr *param_1);
template<class... A> int FUN_1020d1a0(A...);
SCStr * __stdcall FUN_1020d1c0(SCStr *param_1);
template<class... A> int FUN_1020d1c0(A...);
SCStr * __stdcall FUN_1020d2f0(SCStr *param_1);
template<class... A> int FUN_1020d2f0(A...);
SCStr * __stdcall FUN_1020d330(SCStr *param_1);
template<class... A> int FUN_1020d330(A...);
void __fastcall FUN_1020d730(int param_1);
template<class... A> int FUN_1020d730(A...);
SCStr * __stdcall FUN_1020db70(SCStr *param_1);
template<class... A> int FUN_1020db70(A...);
SCStr * __stdcall FUN_1020dbd0(SCStr *param_1);
template<class... A> int FUN_1020dbd0(A...);
undefined4 __fastcall FUN_1020dc00(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_1020dc00(A...);
SCStr * __stdcall FUN_1020f4b0(SCStr *param_1);
template<class... A> int FUN_1020f4b0(A...);
SCStr * __stdcall FUN_1020f4d0(SCStr *param_1);
template<class... A> int FUN_1020f4d0(A...);
void __stdcall FUN_102106d0(int param_1,undefined4 param_2);
template<class... A> int FUN_102106d0(A...);
undefined4 FUN_10210ad0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4);
template<class... A> int FUN_10210ad0(A...);
SCStr * __stdcall FUN_10216ea0(SCStr *param_1);
template<class... A> int FUN_10216ea0(A...);
undefined4 __fastcall FUN_10217320(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10217320(A...);
undefined4 FUN_10217a70(undefined4 param_1);
template<class... A> int FUN_10217a70(A...);
undefined4 FUN_10217c30(int param_1);
template<class... A> int FUN_10217c30(A...);
undefined4 FUN_10219a00(int param_1);
template<class... A> int FUN_10219a00(A...);
void __fastcall FUN_10219bd0(int param_1);
template<class... A> int FUN_10219bd0(A...);
undefined4 __fastcall FUN_10219c50(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10219c50(A...);
bool __fastcall FUN_10219f60(int *param_1);
template<class... A> int FUN_10219f60(A...);
uint __fastcall FUN_1021adf0(int *param_1);
template<class... A> int FUN_1021adf0(A...);
undefined1 __fastcall FUN_1021b1c0(int param_1);
template<class... A> int FUN_1021b1c0(A...);
undefined1 __fastcall FUN_1021b200(int *param_1);
template<class... A> int FUN_1021b200(A...);
void __stdcall FUN_1021b280(SCStr *param_1);
template<class... A> int FUN_1021b280(A...);
uint __fastcall FUN_1021b2b0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_1021b2b0(A...);
uint __fastcall FUN_1021b2d0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_1021b2d0(A...);
void __fastcall FUN_1021cbe0(int param_1);
template<class... A> int FUN_1021cbe0(A...);
void __fastcall FUN_1021d280(int param_1);
template<class... A> int FUN_1021d280(A...);
void __fastcall FUN_1021d670(int *param_1);
template<class... A> int FUN_1021d670(A...);
void __fastcall FUN_1021e260(int param_1);
template<class... A> int FUN_1021e260(A...);
void __fastcall FUN_1021e7e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_1021e7e0(A...);
undefined4 FUN_10220630(short param_1,int param_2);
template<class... A> int FUN_10220630(A...);
undefined4 __stdcall FUN_10220770(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_10220770(A...);
uint __fastcall FUN_10220d50(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10220d50(A...);
undefined4 __fastcall FUN_10221330(int *param_1);
template<class... A> int FUN_10221330(A...);
void __stdcall FUN_10221640(int param_1, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10221640(A...);
undefined4 * __fastcall FUN_10221d20(undefined4 *param_1);
template<class... A> int FUN_10221d20(A...);
void __fastcall FUN_10221e90(undefined4 *param_1);
template<class... A> int FUN_10221e90(A...);
void __fastcall FUN_10221eb0(undefined4 *param_1);
template<class... A> int FUN_10221eb0(A...);
void __fastcall FUN_10221ef0(undefined4 *param_1);
template<class... A> int FUN_10221ef0(A...);
void __fastcall FUN_10222240(int param_1);
template<class... A> int FUN_10222240(A...);
SCStr * __stdcall FUN_102223b0(SCStr *param_1);
template<class... A> int FUN_102223b0(A...);
SCStr * __stdcall FUN_102223d0(SCStr *param_1);
template<class... A> int FUN_102223d0(A...);
void __fastcall FUN_10222400(int param_1);
template<class... A> int FUN_10222400(A...);
undefined1 __fastcall FUN_10222440(int param_1);
template<class... A> int FUN_10222440(A...);
void FUN_102233d0(SCLibParameters *param_1);
template<class... A> int FUN_102233d0(A...);
void FUN_10223410(SCStr *param_1);
template<class... A> int FUN_10223410(A...);
void FUN_10223450(void);
template<class... A> int FUN_10223450(A...);
undefined4 * __fastcall FUN_10224b80(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10224b80(A...);
undefined4 * __fastcall FUN_1022a1b0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_1022a1b0(A...);
undefined4 * __fastcall FUN_1022a1e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_1022a1e0(A...);
undefined4 * __fastcall FUN_1022a210(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_1022a210(A...);
void __fastcall FUN_1022c710(int param_1);
template<class... A> int FUN_1022c710(A...);
void __fastcall FUN_1022cb30(undefined4 *param_1);
template<class... A> int FUN_1022cb30(A...);
void __fastcall FUN_1022d3f0(int param_1);
template<class... A> int FUN_1022d3f0(A...);
void __fastcall FUN_1022d410(int param_1);
template<class... A> int FUN_1022d410(A...);
void __fastcall FUN_1022d430(int param_1);
template<class... A> int FUN_1022d430(A...);
void __fastcall FUN_1022d450(int *param_1);
template<class... A> int FUN_1022d450(A...);
void __fastcall FUN_1022d480(int *param_1);
template<class... A> int FUN_1022d480(A...);
void __fastcall FUN_1022d4b0(int *param_1);
template<class... A> int FUN_1022d4b0(A...);
void __fastcall FUN_1022d4e0(int *param_1);
template<class... A> int FUN_1022d4e0(A...);
void __fastcall FUN_1022d510(int *param_1);
template<class... A> int FUN_1022d510(A...);
void __fastcall FUN_1022d540(int *param_1);
template<class... A> int FUN_1022d540(A...);
void __fastcall FUN_1022d570(int *param_1);
template<class... A> int FUN_1022d570(A...);
void __fastcall FUN_1022d5a0(int *param_1);
template<class... A> int FUN_1022d5a0(A...);
void __fastcall FUN_1022d5d0(int *param_1);
template<class... A> int FUN_1022d5d0(A...);
void __fastcall FUN_1022dab0(int param_1);
template<class... A> int FUN_1022dab0(A...);
void __fastcall FUN_1022db00(int *param_1);
template<class... A> int FUN_1022db00(A...);
void __fastcall FUN_1022db30(int *param_1);
template<class... A> int FUN_1022db30(A...);
void __fastcall FUN_1022db60(int *param_1);
template<class... A> int FUN_1022db60(A...);
void __fastcall FUN_1022db90(int *param_1);
template<class... A> int FUN_1022db90(A...);
void __fastcall FUN_1022dbc0(int *param_1);
template<class... A> int FUN_1022dbc0(A...);
void __fastcall FUN_1022dbf0(int *param_1);
template<class... A> int FUN_1022dbf0(A...);
void __fastcall FUN_1022dc20(int *param_1);
template<class... A> int FUN_1022dc20(A...);
void __fastcall FUN_1022dc50(int *param_1);
template<class... A> int FUN_1022dc50(A...);
void __fastcall FUN_1022dc80(int *param_1);
template<class... A> int FUN_1022dc80(A...);
void __fastcall FUN_1022dcb0(undefined4 *param_1);
template<class... A> int FUN_1022dcb0(A...);
void __fastcall FUN_1022dcd0(undefined4 *param_1);
template<class... A> int FUN_1022dcd0(A...);
void __fastcall FUN_1022dcf0(int *param_1);
template<class... A> int FUN_1022dcf0(A...);
void __fastcall FUN_1022de80(int *param_1);
template<class... A> int FUN_1022de80(A...);
void __fastcall FUN_1022deb0(int *param_1);
template<class... A> int FUN_1022deb0(A...);
void __fastcall FUN_1022ed40(int param_1);
template<class... A> int FUN_1022ed40(A...);
void __fastcall FUN_1022ed70(int *param_1);
template<class... A> int FUN_1022ed70(A...);
void __fastcall FUN_1022ef50(int *param_1);
template<class... A> int FUN_1022ef50(A...);
void __fastcall FUN_1022f150(int *param_1);
template<class... A> int FUN_1022f150(A...);
void __fastcall FUN_1022f190(int *param_1);
template<class... A> int FUN_1022f190(A...);
void __fastcall FUN_1022f1d0(int *param_1);
template<class... A> int FUN_1022f1d0(A...);
void __fastcall FUN_1022f210(int *param_1);
template<class... A> int FUN_1022f210(A...);
int __stdcall FUN_1022f6b0(undefined4 param_1);
template<class... A> int FUN_1022f6b0(A...);
int __stdcall FUN_1022f6e0(undefined4 param_1);
template<class... A> int FUN_1022f6e0(A...);
undefined4 __fastcall FUN_10231780(int param_1);
template<class... A> int FUN_10231780(A...);
void __fastcall FUN_102318b0(int param_1);
template<class... A> int FUN_102318b0(A...);
void __fastcall FUN_102318d0(int param_1);
template<class... A> int FUN_102318d0(A...);
void __fastcall FUN_102318f0(int param_1);
template<class... A> int FUN_102318f0(A...);
void __fastcall FUN_10231d60(int *param_1);
template<class... A> int FUN_10231d60(A...);
void __fastcall FUN_102327c0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_102327c0(A...);
void __stdcall FUN_10232800(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10232800(A...);
void __fastcall FUN_10232890(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10232890(A...);
void __fastcall FUN_102328b0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_102328b0(A...);
void __fastcall FUN_10233e10(int *param_1);
template<class... A> int FUN_10233e10(A...);
void __fastcall FUN_10233e40(int *param_1);
template<class... A> int FUN_10233e40(A...);
void __fastcall FUN_10233e70(int *param_1);
template<class... A> int FUN_10233e70(A...);
void __fastcall FUN_10233ea0(int *param_1);
template<class... A> int FUN_10233ea0(A...);
void __fastcall FUN_10233ed0(int *param_1);
template<class... A> int FUN_10233ed0(A...);
void __fastcall FUN_10233f00(int *param_1);
template<class... A> int FUN_10233f00(A...);
void __fastcall FUN_10233f30(int *param_1);
template<class... A> int FUN_10233f30(A...);
void __fastcall FUN_10233f60(int *param_1);
template<class... A> int FUN_10233f60(A...);
void __fastcall FUN_10233f90(int *param_1);
template<class... A> int FUN_10233f90(A...);
void __fastcall FUN_10234110(undefined4 *param_1);
template<class... A> int FUN_10234110(A...);
void __fastcall FUN_10234130(undefined4 *param_1);
template<class... A> int FUN_10234130(A...);
void __fastcall FUN_10235430(int *param_1);
template<class... A> int FUN_10235430(A...);
void __fastcall FUN_10235460(int *param_1);
template<class... A> int FUN_10235460(A...);
void __stdcall FUN_10235f80(int param_1,int param_2);
template<class... A> int FUN_10235f80(A...);
void __fastcall FUN_10236500(int *param_1);
template<class... A> int FUN_10236500(A...);
void __fastcall FUN_10236530(int *param_1);
template<class... A> int FUN_10236530(A...);
void __fastcall FUN_10236560(int param_1);
template<class... A> int FUN_10236560(A...);
SCStr * __stdcall FUN_10236840(SCStr *param_1);
template<class... A> int FUN_10236840(A...);
SCStr * __stdcall FUN_10236860(SCStr *param_1);
template<class... A> int FUN_10236860(A...);
SCStr * __stdcall FUN_10236880(SCStr *param_1);
template<class... A> int FUN_10236880(A...);
SCStr * __stdcall FUN_102368a0(SCStr *param_1);
template<class... A> int FUN_102368a0(A...);
SCStr * __stdcall FUN_102368e0(SCStr *param_1);
template<class... A> int FUN_102368e0(A...);
SCStr * __stdcall FUN_10236900(SCStr *param_1);
template<class... A> int FUN_10236900(A...);
SCStr * __stdcall FUN_10236920(SCStr *param_1);
template<class... A> int FUN_10236920(A...);
SCStr * __stdcall FUN_10236960(SCStr *param_1);
template<class... A> int FUN_10236960(A...);
SCStr * __stdcall FUN_10236980(SCStr *param_1);
template<class... A> int FUN_10236980(A...);
SCStr * __stdcall FUN_102369a0(SCStr *param_1);
template<class... A> int FUN_102369a0(A...);
SCStr * __stdcall FUN_102369c0(SCStr *param_1);
template<class... A> int FUN_102369c0(A...);
SCStr * __stdcall FUN_102369e0(SCStr *param_1);
template<class... A> int FUN_102369e0(A...);
SCStr * __stdcall FUN_10236a00(SCStr *param_1);
template<class... A> int FUN_10236a00(A...);
SCStr * __stdcall FUN_10236a20(SCStr *param_1);
template<class... A> int FUN_10236a20(A...);
SCStr * __stdcall FUN_10236a40(SCStr *param_1);
template<class... A> int FUN_10236a40(A...);
undefined4 __fastcall FUN_10236a60(int param_1);
template<class... A> int FUN_10236a60(A...);
SCStr * __stdcall FUN_10236cb0(SCStr *param_1);
template<class... A> int FUN_10236cb0(A...);
SCStr * __stdcall FUN_10236cd0(SCStr *param_1);
template<class... A> int FUN_10236cd0(A...);
SCStr * __stdcall FUN_10236d00(SCStr *param_1);
template<class... A> int FUN_10236d00(A...);
SCStr * __stdcall FUN_10236d30(SCStr *param_1);
template<class... A> int FUN_10236d30(A...);
SCStr * __stdcall FUN_10236d50(SCStr *param_1);
template<class... A> int FUN_10236d50(A...);
SCStr * __stdcall FUN_10236e20(SCStr *param_1);
template<class... A> int FUN_10236e20(A...);
SCStr * __stdcall FUN_10236e90(SCStr *param_1);
template<class... A> int FUN_10236e90(A...);
SCStr * __stdcall FUN_10236ec0(SCStr *param_1);
template<class... A> int FUN_10236ec0(A...);
SCStr * __stdcall FUN_10236fb0(SCStr *param_1);
template<class... A> int FUN_10236fb0(A...);
SCStr * __stdcall FUN_10236fe0(SCStr *param_1);
template<class... A> int FUN_10236fe0(A...);
SCStr * __stdcall FUN_10237010(SCStr *param_1);
template<class... A> int FUN_10237010(A...);
SCStr * __stdcall FUN_10237030(SCStr *param_1);
template<class... A> int FUN_10237030(A...);
SCStr * __stdcall FUN_10237060(SCStr *param_1);
template<class... A> int FUN_10237060(A...);
SCStr * __stdcall FUN_10237090(SCStr *param_1);
template<class... A> int FUN_10237090(A...);
SCStr * __stdcall FUN_102370b0(SCStr *param_1);
template<class... A> int FUN_102370b0(A...);
SCStr * __stdcall FUN_10237180(SCStr *param_1);
template<class... A> int FUN_10237180(A...);
SCStr * __stdcall FUN_102371f0(SCStr *param_1);
template<class... A> int FUN_102371f0(A...);
SCStr * __stdcall FUN_10237220(SCStr *param_1);
template<class... A> int FUN_10237220(A...);
SCStr * __stdcall FUN_10237310(SCStr *param_1);
template<class... A> int FUN_10237310(A...);
SCStr * __stdcall FUN_10237340(SCStr *param_1);
template<class... A> int FUN_10237340(A...);
SCStr * __stdcall FUN_1023a400(SCStr *param_1);
template<class... A> int FUN_1023a400(A...);
SCStr * __stdcall FUN_1023a420(SCStr *param_1);
template<class... A> int FUN_1023a420(A...);
SCStr * __stdcall FUN_1023a450(SCStr *param_1);
template<class... A> int FUN_1023a450(A...);
SCStr * __stdcall FUN_1023a480(SCStr *param_1);
template<class... A> int FUN_1023a480(A...);
SCStr * __stdcall FUN_1023a4a0(SCStr *param_1);
template<class... A> int FUN_1023a4a0(A...);
SCStr * __stdcall FUN_1023a5f0(SCStr *param_1);
template<class... A> int FUN_1023a5f0(A...);
SCStr * __stdcall FUN_1023a620(SCStr *param_1);
template<class... A> int FUN_1023a620(A...);
SCStr * __stdcall FUN_1023a650(SCStr *param_1);
template<class... A> int FUN_1023a650(A...);
SCStr * __stdcall FUN_1023a6f0(SCStr *param_1);
template<class... A> int FUN_1023a6f0(A...);
SCStr * __stdcall FUN_1023a720(SCStr *param_1);
template<class... A> int FUN_1023a720(A...);
SCStr * __stdcall FUN_1023a750(SCStr *param_1);
template<class... A> int FUN_1023a750(A...);
SCStr * __stdcall FUN_1023a770(SCStr *param_1);
template<class... A> int FUN_1023a770(A...);
SCStr * __stdcall FUN_1023a790(SCStr *param_1);
template<class... A> int FUN_1023a790(A...);
SCStr * __stdcall FUN_1023a7b0(SCStr *param_1);
template<class... A> int FUN_1023a7b0(A...);
SCStr * __stdcall FUN_1023a890(SCStr *param_1);
template<class... A> int FUN_1023a890(A...);
SCStr * __stdcall FUN_1023a8b0(SCStr *param_1);
template<class... A> int FUN_1023a8b0(A...);
SCStr * __stdcall FUN_1023a8d0(SCStr *param_1);
template<class... A> int FUN_1023a8d0(A...);
SCStr * __stdcall FUN_1023a8f0(SCStr *param_1);
template<class... A> int FUN_1023a8f0(A...);
SCStr * __stdcall FUN_1023a910(SCStr *param_1);
template<class... A> int FUN_1023a910(A...);
SCStr * __stdcall FUN_1023a930(SCStr *param_1);
template<class... A> int FUN_1023a930(A...);
SCStr * __stdcall FUN_1023a950(SCStr *param_1);
template<class... A> int FUN_1023a950(A...);
SCStr * __stdcall FUN_1023a970(SCStr *param_1);
template<class... A> int FUN_1023a970(A...);
undefined4 * FUN_1023a9c0(undefined4 *param_1);
template<class... A> int FUN_1023a9c0(A...);
undefined4 * FUN_1023ab10(undefined4 *param_1);
template<class... A> int FUN_1023ab10(A...);
undefined4 FUN_1023c190(void);
template<class... A> int FUN_1023c190(A...);
undefined4 __fastcall FUN_10242ad0(int param_1);
template<class... A> int FUN_10242ad0(A...);
bool __fastcall FUN_10242b10(int param_1);
template<class... A> int FUN_10242b10(A...);
bool __fastcall FUN_10242b50(int param_1);
template<class... A> int FUN_10242b50(A...);
uint __fastcall FUN_10242f20(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10242f20(A...);
uint __fastcall FUN_10242f40(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10242f40(A...);
uint __fastcall FUN_10242f60(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10242f60(A...);
uint __fastcall FUN_10242f80(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10242f80(A...);
uint __fastcall FUN_10243140(int param_1);
template<class... A> int FUN_10243140(A...);
void __fastcall FUN_102431a0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_102431a0(A...);
void __fastcall FUN_102431c0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_102431c0(A...);
void __fastcall FUN_10243200(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10243200(A...);
void __fastcall FUN_10243220(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10243220(A...);
void __fastcall FUN_10243270(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10243270(A...);
void __fastcall FUN_102432a0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_102432a0(A...);
void __fastcall FUN_102432d0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_102432d0(A...);
void __fastcall FUN_10243650(int param_1);
template<class... A> int FUN_10243650(A...);
uint __fastcall FUN_10244e30(int param_1);
template<class... A> int FUN_10244e30(A...);
void __stdcall FUN_10245150(int param_1,char param_2);
template<class... A> int FUN_10245150(A...);
void __stdcall FUN_10245940(int param_1);
template<class... A> int FUN_10245940(A...);
void __fastcall FUN_102459f0(int param_1);
template<class... A> int FUN_102459f0(A...);
void __fastcall FUN_10245a10(int param_1);
template<class... A> int FUN_10245a10(A...);
undefined4 * __fastcall FUN_10246a10(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10246a10(A...);
undefined4 * __fastcall FUN_10246a50(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10246a50(A...);
undefined4 * __fastcall FUN_10246b40(undefined4 *param_1);
template<class... A> int FUN_10246b40(A...);
void __fastcall FUN_10246fa0(undefined4 *param_1);
template<class... A> int FUN_10246fa0(A...);
void __fastcall FUN_10247090(int *param_1);
template<class... A> int FUN_10247090(A...);
void __fastcall FUN_102470c0(int *param_1);
template<class... A> int FUN_102470c0(A...);
void __fastcall FUN_102470f0(int *param_1);
template<class... A> int FUN_102470f0(A...);
void __fastcall FUN_10247120(int *param_1);
template<class... A> int FUN_10247120(A...);
void __fastcall FUN_10247150(int *param_1);
template<class... A> int FUN_10247150(A...);
void __fastcall FUN_10247180(int *param_1);
template<class... A> int FUN_10247180(A...);
void __stdcall FUN_10248600(int param_1,int param_2);
template<class... A> int FUN_10248600(A...);
void __fastcall FUN_10248650(int *param_1);
template<class... A> int FUN_10248650(A...);
void FUN_10248750(void);
template<class... A> int FUN_10248750(A...);
void __fastcall FUN_102493a0(int param_1);
template<class... A> int FUN_102493a0(A...);
void __fastcall FUN_10249400(int param_1);
template<class... A> int FUN_10249400(A...);
void __fastcall FUN_10249440(int param_1);
template<class... A> int FUN_10249440(A...);
void __fastcall FUN_10249480(int param_1);
template<class... A> int FUN_10249480(A...);
void __fastcall FUN_10249b90(int param_1);
template<class... A> int FUN_10249b90(A...);
void __fastcall FUN_10249bd0(int param_1);
template<class... A> int FUN_10249bd0(A...);
void __fastcall FUN_1024a260(undefined4 *param_1);
template<class... A> int FUN_1024a260(A...);
undefined4 * FUN_1024a960(undefined4 *param_1);
template<class... A> int FUN_1024a960(A...);
void __stdcall FUN_1024ac20(SCStr *param_1);
template<class... A> int FUN_1024ac20(A...);
void __stdcall FUN_1024ac40(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_1024ac40(A...);
void __stdcall FUN_1024ac60(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_1024ac60(A...);
void __fastcall FUN_1024c360(int *param_1);
template<class... A> int FUN_1024c360(A...);
void __fastcall FUN_1024f410(undefined4 *param_1);
template<class... A> int FUN_1024f410(A...);
void __fastcall FUN_1024f580(int *param_1);
template<class... A> int FUN_1024f580(A...);
void __fastcall FUN_1024f5e0(int *param_1);
template<class... A> int FUN_1024f5e0(A...);
void __fastcall FUN_1024f7c0(int *param_1);
template<class... A> int FUN_1024f7c0(A...);
void __fastcall FUN_1024fee0(int *param_1);
template<class... A> int FUN_1024fee0(A...);
void __fastcall FUN_10252b80(int param_1);
template<class... A> int FUN_10252b80(A...);
void __fastcall FUN_10252bb0(int *param_1);
template<class... A> int FUN_10252bb0(A...);
void __stdcall FUN_10253800(undefined4 param_1);
template<class... A> int FUN_10253800(A...);
undefined4 * __fastcall FUN_10257300(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10257300(A...);
void __fastcall FUN_10257dd0(int *param_1);
template<class... A> int FUN_10257dd0(A...);
void __fastcall FUN_10257e00(int *param_1);
template<class... A> int FUN_10257e00(A...);
void __fastcall FUN_10257e30(int *param_1);
template<class... A> int FUN_10257e30(A...);
void __fastcall FUN_10257f20(int *param_1);
template<class... A> int FUN_10257f20(A...);
void __fastcall FUN_10257f50(undefined4 *param_1);
template<class... A> int FUN_10257f50(A...);
void __fastcall FUN_10257fa0(undefined4 *param_1);
template<class... A> int FUN_10257fa0(A...);
void __fastcall FUN_10257fc0(undefined4 *param_1);
template<class... A> int FUN_10257fc0(A...);
void __fastcall FUN_10257fe0(undefined4 *param_1);
template<class... A> int FUN_10257fe0(A...);
void __fastcall FUN_10258000(undefined4 *param_1);
template<class... A> int FUN_10258000(A...);
void __fastcall FUN_10258330(int *param_1);
template<class... A> int FUN_10258330(A...);
void __fastcall FUN_10258390(int *param_1);
template<class... A> int FUN_10258390(A...);
void __fastcall FUN_102583f0(int *param_1);
template<class... A> int FUN_102583f0(A...);
void __fastcall FUN_10258450(int *param_1);
template<class... A> int FUN_10258450(A...);
void __fastcall FUN_102584b0(int param_1);
template<class... A> int FUN_102584b0(A...);
void __fastcall FUN_102584d0(int *param_1);
template<class... A> int FUN_102584d0(A...);
void __fastcall FUN_10258500(int *param_1);
template<class... A> int FUN_10258500(A...);
void __fastcall FUN_10258530(int *param_1);
template<class... A> int FUN_10258530(A...);
void __fastcall FUN_10258560(int *param_1);
template<class... A> int FUN_10258560(A...);
void __fastcall FUN_10258590(int *param_1);
template<class... A> int FUN_10258590(A...);
void __fastcall FUN_102585c0(int *param_1);
template<class... A> int FUN_102585c0(A...);
void __fastcall FUN_102586c0(int *param_1);
template<class... A> int FUN_102586c0(A...);
void __fastcall FUN_10258770(int param_1);
template<class... A> int FUN_10258770(A...);
void __fastcall FUN_10258790(undefined4 *param_1);
template<class... A> int FUN_10258790(A...);
void __fastcall FUN_102587b0(int *param_1);
template<class... A> int FUN_102587b0(A...);
void __fastcall FUN_102587e0(int *param_1);
template<class... A> int FUN_102587e0(A...);
void __fastcall FUN_10258810(int *param_1);
template<class... A> int FUN_10258810(A...);
void __fastcall FUN_10258840(int *param_1);
template<class... A> int FUN_10258840(A...);
void __fastcall FUN_10258870(int *param_1);
template<class... A> int FUN_10258870(A...);
void __fastcall FUN_102588a0(int *param_1);
template<class... A> int FUN_102588a0(A...);
void __fastcall FUN_102588d0(int *param_1);
template<class... A> int FUN_102588d0(A...);
void __fastcall FUN_10258c20(undefined4 *param_1);
template<class... A> int FUN_10258c20(A...);
void __fastcall FUN_10258c70(undefined4 *param_1);
template<class... A> int FUN_10258c70(A...);
void __fastcall FUN_10258cc0(int *param_1);
template<class... A> int FUN_10258cc0(A...);
void __fastcall FUN_10258d00(int *param_1);
template<class... A> int FUN_10258d00(A...);
void __fastcall FUN_10258d40(int *param_1);
template<class... A> int FUN_10258d40(A...);
void __fastcall FUN_10258d80(int *param_1);
template<class... A> int FUN_10258d80(A...);
void __fastcall FUN_10258da0(int *param_1);
template<class... A> int FUN_10258da0(A...);
void __fastcall FUN_10258dc0(int *param_1);
template<class... A> int FUN_10258dc0(A...);
void __fastcall FUN_1025a080(int param_1);
template<class... A> int FUN_1025a080(A...);
void __stdcall FUN_1025a8d0(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_1025a8d0(A...);
void __fastcall FUN_1025b220(int *param_1);
template<class... A> int FUN_1025b220(A...);
void __fastcall FUN_1025b250(int *param_1);
template<class... A> int FUN_1025b250(A...);
void __fastcall FUN_1025b280(int *param_1);
template<class... A> int FUN_1025b280(A...);
void __fastcall FUN_1025b2b0(int *param_1);
template<class... A> int FUN_1025b2b0(A...);
void __fastcall FUN_1025b2e0(int *param_1);
template<class... A> int FUN_1025b2e0(A...);
void __fastcall FUN_1025b310(int *param_1);
template<class... A> int FUN_1025b310(A...);
void __fastcall FUN_1025b890(undefined4 *param_1);
template<class... A> int FUN_1025b890(A...);
void __stdcall FUN_1025ba50(int param_1,int param_2);
template<class... A> int FUN_1025ba50(A...);
void __fastcall FUN_1025c4d0(int param_1);
template<class... A> int FUN_1025c4d0(A...);
void FUN_1025d360(void);
template<class... A> int FUN_1025d360(A...);
void __fastcall FUN_1025d740(undefined4 *param_1);
template<class... A> int FUN_1025d740(A...);
void __fastcall FUN_1025d840(int *param_1);
template<class... A> int FUN_1025d840(A...);
uint __fastcall FUN_1025df30(int param_1);
template<class... A> int FUN_1025df30(A...);
SCStr * __stdcall FUN_1025e510(SCStr *param_1);
template<class... A> int FUN_1025e510(A...);
int __fastcall FUN_1025e580(int param_1);
template<class... A> int FUN_1025e580(A...);
undefined1 __fastcall FUN_1025e680(int param_1);
template<class... A> int FUN_1025e680(A...);
void FUN_1025e860(int *param_1,undefined1 *param_2);
template<class... A> int FUN_1025e860(A...);
void __fastcall FUN_1025f810(undefined4 *param_1);
template<class... A> int FUN_1025f810(A...);
void __fastcall FUN_1025f830(undefined4 *param_1);
template<class... A> int FUN_1025f830(A...);
void __fastcall FUN_1025f8c0(int param_1);
template<class... A> int FUN_1025f8c0(A...);
void __fastcall FUN_1025f970(int param_1);
template<class... A> int FUN_1025f970(A...);
void __fastcall FUN_10260460(int param_1);
template<class... A> int FUN_10260460(A...);
SCStr * __stdcall FUN_10260fb0(SCStr *param_1);
template<class... A> int FUN_10260fb0(A...);
SCStr * __stdcall FUN_10260fd0(SCStr *param_1);
template<class... A> int FUN_10260fd0(A...);
SCStr * __stdcall FUN_10260ff0(SCStr *param_1);
template<class... A> int FUN_10260ff0(A...);
char __fastcall FUN_10261170(int param_1);
template<class... A> int FUN_10261170(A...);
// Reference entry 1019c9f0; body size 16 bytes.
#line 1 "ENTRY_1019c9f0"

void __stdcall FUN_1019c9f0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019ca10; body size 16 bytes.
#line 1 "ENTRY_1019ca10"

void __stdcall FUN_1019ca10(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019ca30; body size 16 bytes.
#line 1 "ENTRY_1019ca30"

void __stdcall FUN_1019ca30(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019ca50; body size 16 bytes.
#line 1 "ENTRY_1019ca50"

void __stdcall FUN_1019ca50(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019ca70; body size 16 bytes.
#line 1 "ENTRY_1019ca70"

void __stdcall FUN_1019ca70(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019ca90; body size 16 bytes.
#line 1 "ENTRY_1019ca90"

void __stdcall FUN_1019ca90(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019cab0; body size 16 bytes.
#line 1 "ENTRY_1019cab0"

void __stdcall FUN_1019cab0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019cad0; body size 16 bytes.
#line 1 "ENTRY_1019cad0"

void __stdcall FUN_1019cad0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019caf0; body size 16 bytes.
#line 1 "ENTRY_1019caf0"

void __stdcall FUN_1019caf0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019cb10; body size 16 bytes.
#line 1 "ENTRY_1019cb10"

void __stdcall FUN_1019cb10(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019cb30; body size 16 bytes.
#line 1 "ENTRY_1019cb30"

void __stdcall FUN_1019cb30(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019cb50; body size 16 bytes.
#line 1 "ENTRY_1019cb50"

void __stdcall FUN_1019cb50(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019cb70; body size 16 bytes.
#line 1 "ENTRY_1019cb70"

void __stdcall FUN_1019cb70(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019cb90; body size 16 bytes.
#line 1 "ENTRY_1019cb90"

void __stdcall FUN_1019cb90(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019cbb0; body size 16 bytes.
#line 1 "ENTRY_1019cbb0"

void __stdcall FUN_1019cbb0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019cbd0; body size 16 bytes.
#line 1 "ENTRY_1019cbd0"

void __stdcall FUN_1019cbd0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019cbf0; body size 16 bytes.
#line 1 "ENTRY_1019cbf0"

void __stdcall FUN_1019cbf0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019cc10; body size 16 bytes.
#line 1 "ENTRY_1019cc10"

void __stdcall FUN_1019cc10(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019cc30; body size 16 bytes.
#line 1 "ENTRY_1019cc30"

void __stdcall FUN_1019cc30(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019cc50; body size 16 bytes.
#line 1 "ENTRY_1019cc50"

void __stdcall FUN_1019cc50(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019cc70; body size 16 bytes.
#line 1 "ENTRY_1019cc70"

void __stdcall FUN_1019cc70(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019cc90; body size 16 bytes.
#line 1 "ENTRY_1019cc90"

void __stdcall FUN_1019cc90(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019ccb0; body size 16 bytes.
#line 1 "ENTRY_1019ccb0"

void __stdcall FUN_1019ccb0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019ccd0; body size 16 bytes.
#line 1 "ENTRY_1019ccd0"

void __stdcall FUN_1019ccd0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019ccf0; body size 16 bytes.
#line 1 "ENTRY_1019ccf0"

void __stdcall FUN_1019ccf0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019cd10; body size 16 bytes.
#line 1 "ENTRY_1019cd10"

void __stdcall FUN_1019cd10(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019cd30; body size 16 bytes.
#line 1 "ENTRY_1019cd30"

void __stdcall FUN_1019cd30(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019cd50; body size 16 bytes.
#line 1 "ENTRY_1019cd50"

void __stdcall FUN_1019cd50(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019cd70; body size 16 bytes.
#line 1 "ENTRY_1019cd70"

void __stdcall FUN_1019cd70(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019cd90; body size 16 bytes.
#line 1 "ENTRY_1019cd90"

void __stdcall FUN_1019cd90(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019cdb0; body size 16 bytes.
#line 1 "ENTRY_1019cdb0"

void __stdcall FUN_1019cdb0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019cdd0; body size 16 bytes.
#line 1 "ENTRY_1019cdd0"

void __stdcall FUN_1019cdd0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019cdf0; body size 16 bytes.
#line 1 "ENTRY_1019cdf0"

void __stdcall FUN_1019cdf0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019ce10; body size 16 bytes.
#line 1 "ENTRY_1019ce10"

void __stdcall FUN_1019ce10(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019ce30; body size 16 bytes.
#line 1 "ENTRY_1019ce30"

void __stdcall FUN_1019ce30(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019ce50; body size 16 bytes.
#line 1 "ENTRY_1019ce50"

void __stdcall FUN_1019ce50(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019ce70; body size 16 bytes.
#line 1 "ENTRY_1019ce70"

void __stdcall FUN_1019ce70(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019ce90; body size 16 bytes.
#line 1 "ENTRY_1019ce90"

void __stdcall FUN_1019ce90(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019ceb0; body size 16 bytes.
#line 1 "ENTRY_1019ceb0"

void __stdcall FUN_1019ceb0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019ced0; body size 16 bytes.
#line 1 "ENTRY_1019ced0"

void __stdcall FUN_1019ced0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019cef0; body size 16 bytes.
#line 1 "ENTRY_1019cef0"

void __stdcall FUN_1019cef0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019cf10; body size 16 bytes.
#line 1 "ENTRY_1019cf10"

void __stdcall FUN_1019cf10(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019cf30; body size 16 bytes.
#line 1 "ENTRY_1019cf30"

void __stdcall FUN_1019cf30(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019cf50; body size 16 bytes.
#line 1 "ENTRY_1019cf50"

void __stdcall FUN_1019cf50(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019cf70; body size 16 bytes.
#line 1 "ENTRY_1019cf70"

void __stdcall FUN_1019cf70(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019cf90; body size 16 bytes.
#line 1 "ENTRY_1019cf90"

void __stdcall FUN_1019cf90(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019cfb0; body size 16 bytes.
#line 1 "ENTRY_1019cfb0"

void __stdcall FUN_1019cfb0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019cfd0; body size 16 bytes.
#line 1 "ENTRY_1019cfd0"

void __stdcall FUN_1019cfd0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019cff0; body size 16 bytes.
#line 1 "ENTRY_1019cff0"

void __stdcall FUN_1019cff0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d010; body size 16 bytes.
#line 1 "ENTRY_1019d010"

void __stdcall FUN_1019d010(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d030; body size 16 bytes.
#line 1 "ENTRY_1019d030"

void __stdcall FUN_1019d030(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d050; body size 16 bytes.
#line 1 "ENTRY_1019d050"

void __stdcall FUN_1019d050(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d070; body size 16 bytes.
#line 1 "ENTRY_1019d070"

void __stdcall FUN_1019d070(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d090; body size 16 bytes.
#line 1 "ENTRY_1019d090"

void __stdcall FUN_1019d090(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d0b0; body size 16 bytes.
#line 1 "ENTRY_1019d0b0"

void __stdcall FUN_1019d0b0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d0d0; body size 16 bytes.
#line 1 "ENTRY_1019d0d0"

void __stdcall FUN_1019d0d0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d0f0; body size 16 bytes.
#line 1 "ENTRY_1019d0f0"

void __stdcall FUN_1019d0f0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d110; body size 16 bytes.
#line 1 "ENTRY_1019d110"

void __stdcall FUN_1019d110(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d130; body size 16 bytes.
#line 1 "ENTRY_1019d130"

void __stdcall FUN_1019d130(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d150; body size 16 bytes.
#line 1 "ENTRY_1019d150"

void __stdcall FUN_1019d150(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d170; body size 16 bytes.
#line 1 "ENTRY_1019d170"

void __stdcall FUN_1019d170(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d190; body size 16 bytes.
#line 1 "ENTRY_1019d190"

void __stdcall FUN_1019d190(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d1b0; body size 16 bytes.
#line 1 "ENTRY_1019d1b0"

void __stdcall FUN_1019d1b0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d1d0; body size 16 bytes.
#line 1 "ENTRY_1019d1d0"

void __stdcall FUN_1019d1d0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d1f0; body size 16 bytes.
#line 1 "ENTRY_1019d1f0"

void __stdcall FUN_1019d1f0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d210; body size 16 bytes.
#line 1 "ENTRY_1019d210"

void __stdcall FUN_1019d210(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d230; body size 16 bytes.
#line 1 "ENTRY_1019d230"

void __stdcall FUN_1019d230(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d250; body size 16 bytes.
#line 1 "ENTRY_1019d250"

void __stdcall FUN_1019d250(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d270; body size 16 bytes.
#line 1 "ENTRY_1019d270"

void __stdcall FUN_1019d270(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d290; body size 16 bytes.
#line 1 "ENTRY_1019d290"

void __stdcall FUN_1019d290(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d2b0; body size 16 bytes.
#line 1 "ENTRY_1019d2b0"

void __stdcall FUN_1019d2b0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d2d0; body size 16 bytes.
#line 1 "ENTRY_1019d2d0"

void __stdcall FUN_1019d2d0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d2f0; body size 16 bytes.
#line 1 "ENTRY_1019d2f0"

void __stdcall FUN_1019d2f0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d310; body size 16 bytes.
#line 1 "ENTRY_1019d310"

void __stdcall FUN_1019d310(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d330; body size 16 bytes.
#line 1 "ENTRY_1019d330"

void __stdcall FUN_1019d330(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d350; body size 16 bytes.
#line 1 "ENTRY_1019d350"

void __stdcall FUN_1019d350(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d370; body size 16 bytes.
#line 1 "ENTRY_1019d370"

void __stdcall FUN_1019d370(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d390; body size 16 bytes.
#line 1 "ENTRY_1019d390"

void __stdcall FUN_1019d390(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d3b0; body size 16 bytes.
#line 1 "ENTRY_1019d3b0"

void __stdcall FUN_1019d3b0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d3d0; body size 16 bytes.
#line 1 "ENTRY_1019d3d0"

void __stdcall FUN_1019d3d0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d3f0; body size 16 bytes.
#line 1 "ENTRY_1019d3f0"

void __stdcall FUN_1019d3f0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d410; body size 16 bytes.
#line 1 "ENTRY_1019d410"

void __stdcall FUN_1019d410(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d430; body size 16 bytes.
#line 1 "ENTRY_1019d430"

void __stdcall FUN_1019d430(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d450; body size 16 bytes.
#line 1 "ENTRY_1019d450"

void __stdcall FUN_1019d450(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d470; body size 16 bytes.
#line 1 "ENTRY_1019d470"

void __stdcall FUN_1019d470(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d490; body size 16 bytes.
#line 1 "ENTRY_1019d490"

void __stdcall FUN_1019d490(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d4b0; body size 16 bytes.
#line 1 "ENTRY_1019d4b0"

void __stdcall FUN_1019d4b0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d4d0; body size 16 bytes.
#line 1 "ENTRY_1019d4d0"

void __stdcall FUN_1019d4d0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d4f0; body size 16 bytes.
#line 1 "ENTRY_1019d4f0"

void __stdcall FUN_1019d4f0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d510; body size 16 bytes.
#line 1 "ENTRY_1019d510"

void __stdcall FUN_1019d510(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d530; body size 16 bytes.
#line 1 "ENTRY_1019d530"

void __stdcall FUN_1019d530(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d550; body size 16 bytes.
#line 1 "ENTRY_1019d550"

void __stdcall FUN_1019d550(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d570; body size 16 bytes.
#line 1 "ENTRY_1019d570"

void __stdcall FUN_1019d570(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d590; body size 16 bytes.
#line 1 "ENTRY_1019d590"

void __stdcall FUN_1019d590(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d5b0; body size 16 bytes.
#line 1 "ENTRY_1019d5b0"

void __stdcall FUN_1019d5b0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d5d0; body size 16 bytes.
#line 1 "ENTRY_1019d5d0"

void __stdcall FUN_1019d5d0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d5f0; body size 16 bytes.
#line 1 "ENTRY_1019d5f0"

void __stdcall FUN_1019d5f0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d610; body size 16 bytes.
#line 1 "ENTRY_1019d610"

void __stdcall FUN_1019d610(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d630; body size 16 bytes.
#line 1 "ENTRY_1019d630"

void __stdcall FUN_1019d630(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d650; body size 16 bytes.
#line 1 "ENTRY_1019d650"

void __stdcall FUN_1019d650(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d670; body size 16 bytes.
#line 1 "ENTRY_1019d670"

void __stdcall FUN_1019d670(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d690; body size 16 bytes.
#line 1 "ENTRY_1019d690"

void __stdcall FUN_1019d690(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d6b0; body size 16 bytes.
#line 1 "ENTRY_1019d6b0"

void __stdcall FUN_1019d6b0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d6d0; body size 16 bytes.
#line 1 "ENTRY_1019d6d0"

void __stdcall FUN_1019d6d0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d6f0; body size 16 bytes.
#line 1 "ENTRY_1019d6f0"

void __stdcall FUN_1019d6f0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d710; body size 16 bytes.
#line 1 "ENTRY_1019d710"

void __stdcall FUN_1019d710(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d730; body size 16 bytes.
#line 1 "ENTRY_1019d730"

void __stdcall FUN_1019d730(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d750; body size 16 bytes.
#line 1 "ENTRY_1019d750"

void __stdcall FUN_1019d750(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d770; body size 16 bytes.
#line 1 "ENTRY_1019d770"

void __stdcall FUN_1019d770(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d790; body size 16 bytes.
#line 1 "ENTRY_1019d790"

void __stdcall FUN_1019d790(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d7b0; body size 16 bytes.
#line 1 "ENTRY_1019d7b0"

void __stdcall FUN_1019d7b0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d7d0; body size 16 bytes.
#line 1 "ENTRY_1019d7d0"

void __stdcall FUN_1019d7d0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d7f0; body size 16 bytes.
#line 1 "ENTRY_1019d7f0"

void __stdcall FUN_1019d7f0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d810; body size 16 bytes.
#line 1 "ENTRY_1019d810"

void __stdcall FUN_1019d810(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d830; body size 16 bytes.
#line 1 "ENTRY_1019d830"

void __stdcall FUN_1019d830(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d850; body size 16 bytes.
#line 1 "ENTRY_1019d850"

void __stdcall FUN_1019d850(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d870; body size 16 bytes.
#line 1 "ENTRY_1019d870"

void __stdcall FUN_1019d870(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d890; body size 16 bytes.
#line 1 "ENTRY_1019d890"

void __stdcall FUN_1019d890(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d8b0; body size 16 bytes.
#line 1 "ENTRY_1019d8b0"

void __stdcall FUN_1019d8b0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d8d0; body size 16 bytes.
#line 1 "ENTRY_1019d8d0"

void __stdcall FUN_1019d8d0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d8f0; body size 16 bytes.
#line 1 "ENTRY_1019d8f0"

void __stdcall FUN_1019d8f0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d910; body size 16 bytes.
#line 1 "ENTRY_1019d910"

void __stdcall FUN_1019d910(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d930; body size 16 bytes.
#line 1 "ENTRY_1019d930"

void __stdcall FUN_1019d930(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d950; body size 16 bytes.
#line 1 "ENTRY_1019d950"

void __stdcall FUN_1019d950(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d970; body size 16 bytes.
#line 1 "ENTRY_1019d970"

void __stdcall FUN_1019d970(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d990; body size 16 bytes.
#line 1 "ENTRY_1019d990"

void __stdcall FUN_1019d990(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d9b0; body size 16 bytes.
#line 1 "ENTRY_1019d9b0"

void __stdcall FUN_1019d9b0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d9d0; body size 16 bytes.
#line 1 "ENTRY_1019d9d0"

void __stdcall FUN_1019d9d0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d9f0; body size 16 bytes.
#line 1 "ENTRY_1019d9f0"

void __stdcall FUN_1019d9f0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019da10; body size 16 bytes.
#line 1 "ENTRY_1019da10"

void __stdcall FUN_1019da10(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019da30; body size 16 bytes.
#line 1 "ENTRY_1019da30"

void __stdcall FUN_1019da30(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019da50; body size 16 bytes.
#line 1 "ENTRY_1019da50"

void __stdcall FUN_1019da50(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019da70; body size 16 bytes.
#line 1 "ENTRY_1019da70"

void __stdcall FUN_1019da70(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019da90; body size 16 bytes.
#line 1 "ENTRY_1019da90"

void __stdcall FUN_1019da90(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019dab0; body size 16 bytes.
#line 1 "ENTRY_1019dab0"

void __stdcall FUN_1019dab0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019dad0; body size 16 bytes.
#line 1 "ENTRY_1019dad0"

void __stdcall FUN_1019dad0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019daf0; body size 16 bytes.
#line 1 "ENTRY_1019daf0"

void __stdcall FUN_1019daf0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019db10; body size 16 bytes.
#line 1 "ENTRY_1019db10"

void __stdcall FUN_1019db10(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019db30; body size 16 bytes.
#line 1 "ENTRY_1019db30"

void __stdcall FUN_1019db30(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019db50; body size 16 bytes.
#line 1 "ENTRY_1019db50"

void __stdcall FUN_1019db50(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019db70; body size 16 bytes.
#line 1 "ENTRY_1019db70"

void __stdcall FUN_1019db70(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019db90; body size 16 bytes.
#line 1 "ENTRY_1019db90"

void __stdcall FUN_1019db90(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019dbb0; body size 16 bytes.
#line 1 "ENTRY_1019dbb0"

void __stdcall FUN_1019dbb0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019dbd0; body size 16 bytes.
#line 1 "ENTRY_1019dbd0"

void __stdcall FUN_1019dbd0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019dbf0; body size 16 bytes.
#line 1 "ENTRY_1019dbf0"

void __stdcall FUN_1019dbf0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019dc10; body size 16 bytes.
#line 1 "ENTRY_1019dc10"

void __stdcall FUN_1019dc10(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019dc30; body size 16 bytes.
#line 1 "ENTRY_1019dc30"

void __stdcall FUN_1019dc30(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019dc50; body size 16 bytes.
#line 1 "ENTRY_1019dc50"

void __stdcall FUN_1019dc50(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019dc70; body size 16 bytes.
#line 1 "ENTRY_1019dc70"

void __stdcall FUN_1019dc70(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019dc90; body size 16 bytes.
#line 1 "ENTRY_1019dc90"

void __stdcall FUN_1019dc90(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019dcb0; body size 16 bytes.
#line 1 "ENTRY_1019dcb0"

void __stdcall FUN_1019dcb0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019dcd0; body size 16 bytes.
#line 1 "ENTRY_1019dcd0"

void __stdcall FUN_1019dcd0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019dcf0; body size 16 bytes.
#line 1 "ENTRY_1019dcf0"

void __stdcall FUN_1019dcf0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019dd10; body size 16 bytes.
#line 1 "ENTRY_1019dd10"

void __stdcall FUN_1019dd10(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019dd30; body size 16 bytes.
#line 1 "ENTRY_1019dd30"

void __stdcall FUN_1019dd30(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019dd50; body size 16 bytes.
#line 1 "ENTRY_1019dd50"

void __stdcall FUN_1019dd50(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019dd70; body size 16 bytes.
#line 1 "ENTRY_1019dd70"

void __stdcall FUN_1019dd70(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019dd90; body size 16 bytes.
#line 1 "ENTRY_1019dd90"

void __stdcall FUN_1019dd90(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019ddb0; body size 16 bytes.
#line 1 "ENTRY_1019ddb0"

void __stdcall FUN_1019ddb0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019ddd0; body size 16 bytes.
#line 1 "ENTRY_1019ddd0"

void __stdcall FUN_1019ddd0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019ddf0; body size 16 bytes.
#line 1 "ENTRY_1019ddf0"

void __stdcall FUN_1019ddf0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019de10; body size 16 bytes.
#line 1 "ENTRY_1019de10"

void __stdcall FUN_1019de10(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019de30; body size 16 bytes.
#line 1 "ENTRY_1019de30"

void __stdcall FUN_1019de30(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019de50; body size 16 bytes.
#line 1 "ENTRY_1019de50"

void __stdcall FUN_1019de50(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019de70; body size 16 bytes.
#line 1 "ENTRY_1019de70"

void __stdcall FUN_1019de70(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019de90; body size 16 bytes.
#line 1 "ENTRY_1019de90"

void __stdcall FUN_1019de90(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019deb0; body size 16 bytes.
#line 1 "ENTRY_1019deb0"

void __stdcall FUN_1019deb0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019ded0; body size 16 bytes.
#line 1 "ENTRY_1019ded0"

void __stdcall FUN_1019ded0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019def0; body size 24 bytes.
#line 1 "ENTRY_1019def0"

void __stdcall FUN_1019def0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
                    
                    
    (**(code **)(*param_1 + 0x10))();
    return;
  }
  return;
}


// Reference entry 1019df10; body size 16 bytes.
#line 1 "ENTRY_1019df10"

void __stdcall FUN_1019df10(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019df30; body size 16 bytes.
#line 1 "ENTRY_1019df30"

void __stdcall FUN_1019df30(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019df50; body size 16 bytes.
#line 1 "ENTRY_1019df50"

void __stdcall FUN_1019df50(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019df70; body size 16 bytes.
#line 1 "ENTRY_1019df70"

void __stdcall FUN_1019df70(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019df90; body size 16 bytes.
#line 1 "ENTRY_1019df90"

void __stdcall FUN_1019df90(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019dfb0; body size 16 bytes.
#line 1 "ENTRY_1019dfb0"

void __stdcall FUN_1019dfb0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019dfd0; body size 16 bytes.
#line 1 "ENTRY_1019dfd0"

void __stdcall FUN_1019dfd0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019dff0; body size 16 bytes.
#line 1 "ENTRY_1019dff0"

void __stdcall FUN_1019dff0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e010; body size 16 bytes.
#line 1 "ENTRY_1019e010"

void __stdcall FUN_1019e010(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e030; body size 16 bytes.
#line 1 "ENTRY_1019e030"

void __stdcall FUN_1019e030(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e050; body size 16 bytes.
#line 1 "ENTRY_1019e050"

void __stdcall FUN_1019e050(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e070; body size 16 bytes.
#line 1 "ENTRY_1019e070"

void __stdcall FUN_1019e070(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e090; body size 16 bytes.
#line 1 "ENTRY_1019e090"

void __stdcall FUN_1019e090(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e0b0; body size 16 bytes.
#line 1 "ENTRY_1019e0b0"

void __stdcall FUN_1019e0b0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e0d0; body size 16 bytes.
#line 1 "ENTRY_1019e0d0"

void __stdcall FUN_1019e0d0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e0f0; body size 16 bytes.
#line 1 "ENTRY_1019e0f0"

void __stdcall FUN_1019e0f0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e110; body size 16 bytes.
#line 1 "ENTRY_1019e110"

void __stdcall FUN_1019e110(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e130; body size 16 bytes.
#line 1 "ENTRY_1019e130"

void __stdcall FUN_1019e130(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e150; body size 16 bytes.
#line 1 "ENTRY_1019e150"

void __stdcall FUN_1019e150(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e170; body size 16 bytes.
#line 1 "ENTRY_1019e170"

void __stdcall FUN_1019e170(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e190; body size 16 bytes.
#line 1 "ENTRY_1019e190"

void __stdcall FUN_1019e190(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e1b0; body size 16 bytes.
#line 1 "ENTRY_1019e1b0"

void __stdcall FUN_1019e1b0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e1d0; body size 16 bytes.
#line 1 "ENTRY_1019e1d0"

void __stdcall FUN_1019e1d0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e1f0; body size 16 bytes.
#line 1 "ENTRY_1019e1f0"

void __stdcall FUN_1019e1f0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e210; body size 16 bytes.
#line 1 "ENTRY_1019e210"

void __stdcall FUN_1019e210(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e230; body size 16 bytes.
#line 1 "ENTRY_1019e230"

void __stdcall FUN_1019e230(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e250; body size 16 bytes.
#line 1 "ENTRY_1019e250"

void __stdcall FUN_1019e250(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e270; body size 16 bytes.
#line 1 "ENTRY_1019e270"

void __stdcall FUN_1019e270(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e290; body size 16 bytes.
#line 1 "ENTRY_1019e290"

void __stdcall FUN_1019e290(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e2b0; body size 16 bytes.
#line 1 "ENTRY_1019e2b0"

void __stdcall FUN_1019e2b0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e2d0; body size 16 bytes.
#line 1 "ENTRY_1019e2d0"

void __stdcall FUN_1019e2d0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e2f0; body size 16 bytes.
#line 1 "ENTRY_1019e2f0"

void __stdcall FUN_1019e2f0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e310; body size 16 bytes.
#line 1 "ENTRY_1019e310"

void __stdcall FUN_1019e310(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e330; body size 16 bytes.
#line 1 "ENTRY_1019e330"

void __stdcall FUN_1019e330(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e350; body size 16 bytes.
#line 1 "ENTRY_1019e350"

void __stdcall FUN_1019e350(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e370; body size 16 bytes.
#line 1 "ENTRY_1019e370"

void __stdcall FUN_1019e370(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e390; body size 16 bytes.
#line 1 "ENTRY_1019e390"

void __stdcall FUN_1019e390(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e3b0; body size 16 bytes.
#line 1 "ENTRY_1019e3b0"

void __stdcall FUN_1019e3b0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e3d0; body size 16 bytes.
#line 1 "ENTRY_1019e3d0"

void __stdcall FUN_1019e3d0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e3f0; body size 16 bytes.
#line 1 "ENTRY_1019e3f0"

void __stdcall FUN_1019e3f0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e410; body size 16 bytes.
#line 1 "ENTRY_1019e410"

void __stdcall FUN_1019e410(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e430; body size 16 bytes.
#line 1 "ENTRY_1019e430"

void __stdcall FUN_1019e430(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e450; body size 16 bytes.
#line 1 "ENTRY_1019e450"

void __stdcall FUN_1019e450(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e470; body size 16 bytes.
#line 1 "ENTRY_1019e470"

void __stdcall FUN_1019e470(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e490; body size 16 bytes.
#line 1 "ENTRY_1019e490"

void __stdcall FUN_1019e490(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e4b0; body size 16 bytes.
#line 1 "ENTRY_1019e4b0"

void __stdcall FUN_1019e4b0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e4d0; body size 16 bytes.
#line 1 "ENTRY_1019e4d0"

void __stdcall FUN_1019e4d0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e4f0; body size 16 bytes.
#line 1 "ENTRY_1019e4f0"

void __stdcall FUN_1019e4f0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e510; body size 16 bytes.
#line 1 "ENTRY_1019e510"

void __stdcall FUN_1019e510(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e530; body size 16 bytes.
#line 1 "ENTRY_1019e530"

void __stdcall FUN_1019e530(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e550; body size 16 bytes.
#line 1 "ENTRY_1019e550"

void __stdcall FUN_1019e550(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e570; body size 16 bytes.
#line 1 "ENTRY_1019e570"

void __stdcall FUN_1019e570(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e590; body size 16 bytes.
#line 1 "ENTRY_1019e590"

void __stdcall FUN_1019e590(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e5b0; body size 16 bytes.
#line 1 "ENTRY_1019e5b0"

void __stdcall FUN_1019e5b0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e5d0; body size 16 bytes.
#line 1 "ENTRY_1019e5d0"

void __stdcall FUN_1019e5d0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e5f0; body size 16 bytes.
#line 1 "ENTRY_1019e5f0"

void __stdcall FUN_1019e5f0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e610; body size 16 bytes.
#line 1 "ENTRY_1019e610"

void __stdcall FUN_1019e610(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e630; body size 16 bytes.
#line 1 "ENTRY_1019e630"

void __stdcall FUN_1019e630(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e650; body size 16 bytes.
#line 1 "ENTRY_1019e650"

void __stdcall FUN_1019e650(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e670; body size 16 bytes.
#line 1 "ENTRY_1019e670"

void __stdcall FUN_1019e670(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e690; body size 16 bytes.
#line 1 "ENTRY_1019e690"

void __stdcall FUN_1019e690(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e6b0; body size 16 bytes.
#line 1 "ENTRY_1019e6b0"

void __stdcall FUN_1019e6b0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e6d0; body size 16 bytes.
#line 1 "ENTRY_1019e6d0"

void __stdcall FUN_1019e6d0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e6f0; body size 16 bytes.
#line 1 "ENTRY_1019e6f0"

void __stdcall FUN_1019e6f0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e710; body size 16 bytes.
#line 1 "ENTRY_1019e710"

void __stdcall FUN_1019e710(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e730; body size 16 bytes.
#line 1 "ENTRY_1019e730"

void __stdcall FUN_1019e730(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e750; body size 16 bytes.
#line 1 "ENTRY_1019e750"

void __stdcall FUN_1019e750(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e770; body size 16 bytes.
#line 1 "ENTRY_1019e770"

void __stdcall FUN_1019e770(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e790; body size 16 bytes.
#line 1 "ENTRY_1019e790"

void __stdcall FUN_1019e790(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e7b0; body size 16 bytes.
#line 1 "ENTRY_1019e7b0"

void __stdcall FUN_1019e7b0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e7d0; body size 16 bytes.
#line 1 "ENTRY_1019e7d0"

void __stdcall FUN_1019e7d0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e7f0; body size 16 bytes.
#line 1 "ENTRY_1019e7f0"

void __stdcall FUN_1019e7f0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e810; body size 16 bytes.
#line 1 "ENTRY_1019e810"

void __stdcall FUN_1019e810(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e830; body size 24 bytes.
#line 1 "ENTRY_1019e830"

void __stdcall FUN_1019e830(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
                    
                    
    (**(code **)(*param_1 + 0xc))();
    return;
  }
  return;
}


// Reference entry 1019e850; body size 16 bytes.
#line 1 "ENTRY_1019e850"

void __stdcall FUN_1019e850(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e870; body size 16 bytes.
#line 1 "ENTRY_1019e870"

void __stdcall FUN_1019e870(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e890; body size 16 bytes.
#line 1 "ENTRY_1019e890"

void __stdcall FUN_1019e890(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e8b0; body size 16 bytes.
#line 1 "ENTRY_1019e8b0"

void __stdcall FUN_1019e8b0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e8d0; body size 16 bytes.
#line 1 "ENTRY_1019e8d0"

void __stdcall FUN_1019e8d0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e8f0; body size 16 bytes.
#line 1 "ENTRY_1019e8f0"

void __stdcall FUN_1019e8f0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e910; body size 16 bytes.
#line 1 "ENTRY_1019e910"

void __stdcall FUN_1019e910(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e930; body size 16 bytes.
#line 1 "ENTRY_1019e930"

void __stdcall FUN_1019e930(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e950; body size 16 bytes.
#line 1 "ENTRY_1019e950"

void __stdcall FUN_1019e950(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e970; body size 16 bytes.
#line 1 "ENTRY_1019e970"

void __stdcall FUN_1019e970(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e990; body size 16 bytes.
#line 1 "ENTRY_1019e990"

void __stdcall FUN_1019e990(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e9b0; body size 16 bytes.
#line 1 "ENTRY_1019e9b0"

void __stdcall FUN_1019e9b0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e9d0; body size 16 bytes.
#line 1 "ENTRY_1019e9d0"

void __stdcall FUN_1019e9d0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e9f0; body size 16 bytes.
#line 1 "ENTRY_1019e9f0"

void __stdcall FUN_1019e9f0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019ea10; body size 16 bytes.
#line 1 "ENTRY_1019ea10"

void __stdcall FUN_1019ea10(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019ea30; body size 16 bytes.
#line 1 "ENTRY_1019ea30"

void __stdcall FUN_1019ea30(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019eaf0; body size 16 bytes.
#line 1 "ENTRY_1019eaf0"

void __stdcall FUN_1019eaf0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019eb10; body size 16 bytes.
#line 1 "ENTRY_1019eb10"

void __stdcall FUN_1019eb10(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019eb30; body size 16 bytes.
#line 1 "ENTRY_1019eb30"

void __stdcall FUN_1019eb30(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019eb50; body size 16 bytes.
#line 1 "ENTRY_1019eb50"

void __stdcall FUN_1019eb50(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019ebf0; body size 16 bytes.
#line 1 "ENTRY_1019ebf0"

void __stdcall FUN_1019ebf0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019ec10; body size 16 bytes.
#line 1 "ENTRY_1019ec10"

void __stdcall FUN_1019ec10(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019ec30; body size 16 bytes.
#line 1 "ENTRY_1019ec30"

void __stdcall FUN_1019ec30(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019ec50; body size 16 bytes.
#line 1 "ENTRY_1019ec50"

void __stdcall FUN_1019ec50(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019ec70; body size 16 bytes.
#line 1 "ENTRY_1019ec70"

void __stdcall FUN_1019ec70(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019ec90; body size 16 bytes.
#line 1 "ENTRY_1019ec90"

void __stdcall FUN_1019ec90(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019ecb0; body size 16 bytes.
#line 1 "ENTRY_1019ecb0"

void __stdcall FUN_1019ecb0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019ecd0; body size 16 bytes.
#line 1 "ENTRY_1019ecd0"

void __stdcall FUN_1019ecd0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019ecf0; body size 16 bytes.
#line 1 "ENTRY_1019ecf0"

void __stdcall FUN_1019ecf0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019ed90; body size 22 bytes.
#line 1 "ENTRY_1019ed90"

void __stdcall FUN_1019ed90(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 1019edb0; body size 24 bytes.
#line 1 "ENTRY_1019edb0"

void __stdcall FUN_1019edb0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
                    
                    
    (**(code **)(*param_1 + 4))();
    return;
  }
  return;
}


// Reference entry 1019edd0; body size 24 bytes.
#line 1 "ENTRY_1019edd0"

void __stdcall FUN_1019edd0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
                    
                    
    (**(code **)(*param_1 + 4))();
    return;
  }
  return;
}


// Reference entry 1019edf0; body size 24 bytes.
#line 1 "ENTRY_1019edf0"

void __stdcall FUN_1019edf0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
                    
                    
    (**(code **)(*param_1 + 4))();
    return;
  }
  return;
}


// Reference entry 1019ee10; body size 24 bytes.
#line 1 "ENTRY_1019ee10"

void __stdcall FUN_1019ee10(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
                    
                    
    (**(code **)(*param_1 + 8))();
    return;
  }
  return;
}


// Reference entry 1019ee30; body size 24 bytes.
#line 1 "ENTRY_1019ee30"

void __stdcall FUN_1019ee30(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
                    
                    
    (**(code **)(*param_1 + 8))();
    return;
  }
  return;
}


// Reference entry 1019ee50; body size 24 bytes.
#line 1 "ENTRY_1019ee50"

void __stdcall FUN_1019ee50(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
                    
                    
    (**(code **)(*param_1 + 4))();
    return;
  }
  return;
}


// Reference entry 1019ee70; body size 24 bytes.
#line 1 "ENTRY_1019ee70"

void __stdcall FUN_1019ee70(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
                    
                    
    (**(code **)(*param_1 + 4))();
    return;
  }
  return;
}


// Reference entry 1019ee90; body size 24 bytes.
#line 1 "ENTRY_1019ee90"

void __stdcall FUN_1019ee90(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
                    
                    
    (**(code **)(*param_1 + 4))();
    return;
  }
  return;
}


// Reference entry 1019eeb0; body size 34 bytes.
#line 1 "ENTRY_1019eeb0"

void __stdcall FUN_1019eeb0(SCLibParameters *param_1)

{
  if ((SCLibParameters *)(param_1) != (SCLibParameters *)(0x0)) {
    ((SCLibParameters *)(param_1))->m_op_dtor();
    thunk_FUN_1148a50e(param_1,0x108);
  }
  return;
}


// Reference entry 1019eee0; body size 24 bytes.
#line 1 "ENTRY_1019eee0"

void __stdcall FUN_1019eee0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
                    
                    
    (**(code **)(*param_1 + 4))();
    return;
  }
  return;
}


// Reference entry 1019ef00; body size 16 bytes.
#line 1 "ENTRY_1019ef00"

void __stdcall FUN_1019ef00(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019ef20; body size 24 bytes.
#line 1 "ENTRY_1019ef20"

void __stdcall FUN_1019ef20(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
                    
                    
    (**(code **)(*param_1 + 0x54))();
    return;
  }
  return;
}


// Reference entry 1019ef40; body size 16 bytes.
#line 1 "ENTRY_1019ef40"

void __stdcall FUN_1019ef40(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019ef60; body size 16 bytes.
#line 1 "ENTRY_1019ef60"

void __stdcall FUN_1019ef60(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019ef80; body size 16 bytes.
#line 1 "ENTRY_1019ef80"

void __stdcall FUN_1019ef80(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019efa0; body size 24 bytes.
#line 1 "ENTRY_1019efa0"

void __stdcall FUN_1019efa0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
                    
                    
    (**(code **)(*param_1 + 8))();
    return;
  }
  return;
}


// Reference entry 1019fe40; body size 25 bytes.
#line 1 "ENTRY_1019fe40"

undefined8 * FUN_1019fe40(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(operator_new(8), 0);
  if ((undefined8 *)(puVar1) != (undefined8 *)(0x0)) {
    *puVar1 = (undefined8)(0);
    return (undefined8 *)(puVar1);
  }
  return (undefined8 *)((undefined8 *)0x0);
}


// Reference entry 1019fe60; body size 32 bytes.
#line 1 "ENTRY_1019fe60"

undefined8 * FUN_1019fe60(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(operator_new(0xc), 0);
  if ((undefined8 *)(puVar1) != (undefined8 *)(0x0)) {
    *puVar1 = (undefined8)(0);
    *(undefined4*)(puVar1 + 1) = (undefined4)(0);
    return (undefined8 *)(puVar1);
  }
  return (undefined8 *)((undefined8 *)0x0);
}


// Reference entry 1019ff40; body size 45 bytes.
#line 1 "ENTRY_1019ff40"

undefined4 * FUN_1019ff40(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0x10), 0);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    puVar1[1] = (undefined4)(1);
    puVar1[2] = (undefined4)(0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIActionDelegateSwigBase);
    puVar1[3] = (undefined4)(0);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 101a00b0; body size 45 bytes.
#line 1 "ENTRY_101a00b0"

undefined4 * FUN_101a00b0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0x10), 0);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    puVar1[1] = (undefined4)(1);
    puVar1[2] = (undefined4)(0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIActionFilterSwigBase);
    puVar1[3] = (undefined4)(0);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 101a00f0; body size 45 bytes.
#line 1 "ENTRY_101a00f0"

undefined4 * FUN_101a00f0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0x10), 0);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    puVar1[1] = (undefined4)(1);
    puVar1[2] = (undefined4)(0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIActionSwigBase);
    puVar1[3] = (undefined4)(0);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 101a0130; body size 52 bytes.
#line 1 "ENTRY_101a0130"

undefined4 * FUN_101a0130(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0x14), 0);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    puVar1[1] = (undefined4)(1);
    puVar1[2] = (undefined4)(0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIAutomationDelegateSwigBase);
    puVar1[3] = (undefined4)(0);
    puVar1[4] = (undefined4)(0);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 101a0660; body size 52 bytes.
#line 1 "ENTRY_101a0660"

undefined4 * FUN_101a0660(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0x14), 0);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    puVar1[1] = (undefined4)(1);
    puVar1[2] = (undefined4)(0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIClipboardDelegateSwigBase);
    puVar1[3] = (undefined4)(0);
    puVar1[4] = (undefined4)(0);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 101a07c0; body size 52 bytes.
#line 1 "ENTRY_101a07c0"

undefined4 * FUN_101a07c0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0x14), 0);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    puVar1[1] = (undefined4)(1);
    puVar1[2] = (undefined4)(0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIEventSinkSwigBase);
    puVar1[3] = (undefined4)(0);
    puVar1[4] = (undefined4)(0);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 101a08e0; body size 45 bytes.
#line 1 "ENTRY_101a08e0"

undefined4 * FUN_101a08e0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0x10), 0);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    puVar1[1] = (undefined4)(1);
    puVar1[2] = (undefined4)(0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIGetAboutSonosStringCBSwigBase);
    puVar1[3] = (undefined4)(0);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 101a0920; body size 52 bytes.
#line 1 "ENTRY_101a0920"

undefined4 * FUN_101a0920(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0x14), 0);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    puVar1[1] = (undefined4)(1);
    puVar1[2] = (undefined4)(0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIGetSonosPlaylistsCBSwigBase);
    puVar1[3] = (undefined4)(0);
    puVar1[4] = (undefined4)(0);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 101a0970; body size 52 bytes.
#line 1 "ENTRY_101a0970"

undefined4 * FUN_101a0970(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0x14), 0);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    puVar1[1] = (undefined4)(1);
    puVar1[2] = (undefined4)(0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIHapticDelegateSwigBase);
    puVar1[3] = (undefined4)(0);
    puVar1[4] = (undefined4)(0);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 101a0aa0; body size 45 bytes.
#line 1 "ENTRY_101a0aa0"

undefined4 * FUN_101a0aa0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0x10), 0);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    puVar1[1] = (undefined4)(1);
    puVar1[2] = (undefined4)(0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCILifecycleAppProviderSwigBase);
    puVar1[3] = (undefined4)(0);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 101a0e60; body size 52 bytes.
#line 1 "ENTRY_101a0e60"

undefined4 * FUN_101a0e60(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0x14), 0);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    puVar1[1] = (undefined4)(1);
    puVar1[2] = (undefined4)(0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCINetworkManagementDelegateSwigBase);
    puVar1[3] = (undefined4)(0);
    puVar1[4] = (undefined4)(0);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 101a0eb0; body size 45 bytes.
#line 1 "ENTRY_101a0eb0"

undefined4 * FUN_101a0eb0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0x10), 0);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    puVar1[1] = (undefined4)(1);
    puVar1[2] = (undefined4)(0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCINewWizDelegateSwigBase);
    puVar1[3] = (undefined4)(0);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 101a0f60; body size 45 bytes.
#line 1 "ENTRY_101a0f60"

undefined4 * FUN_101a0f60(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0x10), 0);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    puVar1[1] = (undefined4)(1);
    puVar1[2] = (undefined4)(0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIOpCBSwigBase);
    puVar1[3] = (undefined4)(0);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 101a0fa0; body size 59 bytes.
#line 1 "ENTRY_101a0fa0"

undefined4 * FUN_101a0fa0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0x18), 0);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    puVar1[1] = (undefined4)(0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIPlatformDateTimeProvider);
    puVar1[2] = (undefined4)(0);
    puVar1[3] = (undefined4)(0);
    puVar1[4] = (undefined4)(0);
    puVar1[5] = (undefined4)(0);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 101a1190; body size 52 bytes.
#line 1 "ENTRY_101a1190"

undefined4 * FUN_101a1190(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0x14), 0);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    puVar1[1] = (undefined4)(1);
    puVar1[2] = (undefined4)(0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIServiceAppInteropSwigBase);
    puVar1[3] = (undefined4)(0);
    puVar1[4] = (undefined4)(0);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 101a11e0; body size 45 bytes.
#line 1 "ENTRY_101a11e0"

undefined4 * FUN_101a11e0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0x10), 0);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    puVar1[1] = (undefined4)(1);
    puVar1[2] = (undefined4)(0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIStackTraceCaptureDelegateSwigBase);
    puVar1[3] = (undefined4)(0);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 101a1320; body size 52 bytes.
#line 1 "ENTRY_101a1320"

undefined4 * FUN_101a1320(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0x14), 0);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    puVar1[1] = (undefined4)(0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIUINotificationsDelegate);
    puVar1[2] = (undefined4)(0);
    puVar1[3] = (undefined4)(0);
    puVar1[4] = (undefined4)(0);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 101a1440; body size 45 bytes.
#line 1 "ENTRY_101a1440"

undefined4 * FUN_101a1440(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0x10), 0);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    puVar1[1] = (undefined4)(1);
    puVar1[2] = (undefined4)(0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIUrlSessionCallbackSwigBase);
    puVar1[3] = (undefined4)(0);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 101a1570; body size 38 bytes.
#line 1 "ENTRY_101a1570"

undefined4 * FUN_101a1570(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0xc), 0);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    *puVar1 = (undefined4)(0);
    puVar1[1] = (undefined4)(0);
    puVar1[2] = (undefined4)(0);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 101a1600; body size 59 bytes.
#line 1 "ENTRY_101a1600"

undefined4 * FUN_101a1600(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0x18), 0);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    puVar1[1] = (undefined4)(1);
    puVar1[2] = (undefined4)(0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIVpnDelegateSwigBase);
    puVar1[3] = (undefined4)(0);
    puVar1[4] = (undefined4)(0);
    puVar1[5] = (undefined4)(0);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 101a16b0; body size 24 bytes.
#line 1 "ENTRY_101a16b0"

undefined4 * FUN_101a16b0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(4), 0);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    *puVar1 = (undefined4)(0);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 101a1800; body size 24 bytes.
#line 1 "ENTRY_101a1800"

undefined4 FUN_101a1800(void)

{
  SCImageResource *this_;
  undefined4 uVar1;
  
  this_ = (SCImageResource *)(operator_new(8), 0);
  if ((SCImageResource *)(this_) != (SCImageResource *)(0x0)) {
    uVar1 = (undefined4)(((SCImageResource *)(this_))->m_op_ctor(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 101a19a0; body size 35 bytes.
#line 1 "ENTRY_101a19a0"

undefined4 * FUN_101a19a0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(8), 0);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    *puVar1 = (undefined4)(param_1);
    puVar1[1] = (undefined4)(param_2);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 101a1a30; body size 38 bytes.
#line 1 "ENTRY_101a1a30"

undefined4 * FUN_101a1a30(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0xc), 0);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    puVar1[1] = (undefined4)(0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCLibAssertionFailureCallback);
    puVar1[2] = (undefined4)(0);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 101a1a60; body size 38 bytes.
#line 1 "ENTRY_101a1a60"

undefined4 * FUN_101a1a60(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0xc), 0);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    puVar1[1] = (undefined4)(0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCLibCallUIThreadCallback);
    puVar1[2] = (undefined4)(0);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 101a1a90; body size 45 bytes.
#line 1 "ENTRY_101a1a90"

undefined4 * FUN_101a1a90(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0x10), 0);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    puVar1[1] = (undefined4)(0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCLibCustomSubWizardCallback);
    puVar1[2] = (undefined4)(0);
    puVar1[3] = (undefined4)(0);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 101a1ad0; body size 45 bytes.
#line 1 "ENTRY_101a1ad0"

undefined4 * FUN_101a1ad0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0x10), 0);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    puVar1[1] = (undefined4)(0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCLibDelegateFactory);
    puVar1[2] = (undefined4)(0);
    puVar1[3] = (undefined4)(0);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 101a1b10; body size 38 bytes.
#line 1 "ENTRY_101a1b10"

undefined4 * FUN_101a1b10(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0xc), 0);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    puVar1[1] = (undefined4)(0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCLibDiagnosticConsoleLogCallback);
    puVar1[2] = (undefined4)(0);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 101a1b40; body size 38 bytes.
#line 1 "ENTRY_101a1b40"

undefined4 * FUN_101a1b40(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0xc), 0);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    puVar1[1] = (undefined4)(0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCLibDiagnosticExtraInfoCallback);
    puVar1[2] = (undefined4)(0);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 101a1b70; body size 38 bytes.
#line 1 "ENTRY_101a1b70"

undefined4 * FUN_101a1b70(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0xc), 0);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    puVar1[1] = (undefined4)(0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCLibLogCallback);
    puVar1[2] = (undefined4)(0);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 101a1ba0; body size 27 bytes.
#line 1 "ENTRY_101a1ba0"

undefined4 FUN_101a1ba0(void)

{
  SCLibParameters *this_;
  undefined4 uVar1;
  
  this_ = (SCLibParameters *)(operator_new(0x108), 0);
  if ((SCLibParameters *)(this_) != (SCLibParameters *)(0x0)) {
    uVar1 = (undefined4)(((SCLibParameters *)(this_))->m_op_ctor(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 101a1bd0; body size 38 bytes.
#line 1 "ENTRY_101a1bd0"

undefined4 * FUN_101a1bd0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0xc), 0);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    puVar1[1] = (undefined4)(0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCLibPlatformStringCallback);
    puVar1[2] = (undefined4)(0);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 101a1cf0; body size 45 bytes.
#line 1 "ENTRY_101a1cf0"

undefined4 * FUN_101a1cf0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0x10), 0);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    puVar1[1] = (undefined4)(0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCLibTruncatedStringsCallback);
    puVar1[2] = (undefined4)(0);
    puVar1[3] = (undefined4)(0);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 101a1d30; body size 24 bytes.
#line 1 "ENTRY_101a1d30"

undefined4 FUN_101a1d30(void)

{
  void *pvVar1;
  undefined4 uVar2;
  
  pvVar1 = (void *)(operator_new(0x48), 0);
  if ((void *)(pvVar1) != (void *)(0x0)) {
    uVar2 = (undefined4)(thunk_FUN_10222ce0(), 0);
    return (undefined4)(uVar2);
  }
  return (undefined4)(0);
}


// Reference entry 101a1d50; body size 30 bytes.
#line 1 "ENTRY_101a1d50"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall FUN_101a1d50(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  DAT_1211905c = (int)(param_1);
  DAT_12119064 = (int)(param_2);
  DAT_1211906c = (int)(param_3);
  return;
}


// Reference entry 101a1e00; body size 30 bytes.
#line 1 "ENTRY_101a1e00"

void __stdcall FUN_101a1e00(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  DAT_121a06cc = (int)(param_1);
  DAT_121a06d0 = (int)(param_2);
  DAT_121a06d4 = (int)(param_3);
  return;
}


// Reference entry 101a1e50; body size 45 bytes.
#line 1 "ENTRY_101a1e50"

float10 FUN_101a1e50(float param_1)

{
  double dVar1;
  
  dVar1 = (double)(ceil((double)param_1), 0);
  return (float10)((float10)(float)dVar1);
}


// Reference entry 101a2000; body size 18 bytes.
#line 1 "ENTRY_101a2000"

void __fastcall FUN_101a2000(int param_1)

{
  if (*(void **)(param_1 + 0x3fc) != (void *)((0x0))) {
    free(*(void **)(param_1 + 0x3fc));
  }
  return;
}


// Reference entry 101a2b10; body size 41 bytes.
#line 1 "ENTRY_101a2b10"

int * __thiscall Recovered_Bulk::m_FUN_101a2b10(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_1 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  return (int *)(param_1);
}


// Reference entry 101a2b50; body size 41 bytes.
#line 1 "ENTRY_101a2b50"

int * __thiscall Recovered_Bulk::m_FUN_101a2b50(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_1 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  return (int *)(param_1);
}


// Reference entry 101a2b90; body size 41 bytes.
#line 1 "ENTRY_101a2b90"

int * __thiscall Recovered_Bulk::m_FUN_101a2b90(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_1 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  return (int *)(param_1);
}


// Reference entry 101a2bd0; body size 17 bytes.
#line 1 "ENTRY_101a2bd0"

void __fastcall FUN_101a2bd0(undefined4 *param_1)

{
  thunk_FUN_101a2210(*param_1,param_1[1],param_1[2]);
  return;
}


// Reference entry 101a3370; body size 20 bytes.
#line 1 "ENTRY_101a3370"

void __thiscall Recovered_Bulk::m_FUN_101a3370(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_101a2210(param_2,param_3,param_1);
  return;
}


// Reference entry 101a3710; body size 32 bytes.
#line 1 "ENTRY_101a3710"

void __fastcall FUN_101a3710(undefined4 *param_1)

{
  if ((char *)*param_1 != (char *)((0x0))) {
    _strdup((char *)*param_1);
    return;
  }
  _strdup("");
  return;
}


// Reference entry 101a3cc0; body size 60 bytes.
#line 1 "ENTRY_101a3cc0"

void __stdcall FUN_101a3cc0(int param_1,int param_2)

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


// Reference entry 101a4420; body size 47 bytes.
#line 1 "ENTRY_101a4420"

bool __thiscall Recovered_Bulk::m_FUN_101a4420(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_2 != (undefined1 *)((0x0))) {
    puVar2 = (undefined1 *)((undefined1 *)*param_2);
  }
  puVar3 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_1 != (undefined1 *)((0x0))) {
    puVar3 = (undefined1 *)((undefined1 *)*param_1);
  }
  iVar1 = (int)(thunk_FUN_1106a250(puVar3,puVar2,0), 0);
  return (bool)(iVar1 == 0);
}


// Reference entry 101a4460; body size 43 bytes.
#line 1 "ENTRY_101a4460"

bool __thiscall Recovered_Bulk::m_FUN_101a4460(undefined1 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_1 != (undefined1 *)((0x0))) {
    puVar2 = (undefined1 *)((undefined1 *)*param_1);
  }
  puVar3 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)(param_2) != (undefined1 *)(0x0)) {
    puVar3 = (undefined1 *)(param_2);
  }
  iVar1 = (int)(thunk_FUN_1106a250(puVar2,puVar3,0), 0);
  return (bool)(iVar1 == 0);
}


// Reference entry 101a45a0; body size 19 bytes.
#line 1 "ENTRY_101a45a0"

void FUN_101a45a0(SCStr *param_1,char *param_2)

{ int stack0x0000000c;
 try {
  ((SCStr *)(param_1))->int_formatv(param_2,&stack0x0000000c);
  return;

 } catch (...) { }
}


// Reference entry 101a4870; body size 25 bytes.
#line 1 "ENTRY_101a4870"

void __fastcall FUN_101a4870(int *param_1)

{
  int *piVar1;
  
  if ((*param_1 != (int)((0))) && (piVar1 = (int *)((int *)(*param_1 + -0x10)), *piVar1 < (int)((0xffff)))) {
    thunk_FUN_1123fce0(piVar1);
  }
  return;
}


// Reference entry 101a4bf0; body size 60 bytes.
#line 1 "ENTRY_101a4bf0"

void __fastcall FUN_101a4bf0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(*param_1);
  if (((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) &&
     (iVar2 = (int)(thunk_FUN_1123fcd0((char *)(iVar1 + -0x10)), 0), iVar2 == 0)) {
    *(undefined4*)(iVar1 + -8) = (undefined4)(0);
    *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
    thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
    free((char *)(iVar1 + -0x10));
  }
  return;
}


// Reference entry 101a4ca0; body size 38 bytes.
#line 1 "ENTRY_101a4ca0"

int __fastcall FUN_101a4ca0(undefined4 *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar2 = (char *)((char *)*param_1);
  if ((char *)(pcVar2) != (char *)(0x0)) {
    iVar4 = (int)(*(int *)(pcVar2 + -0xc));
    if (iVar4 == 0) {
      pcVar3 = (char *)(pcVar2);
      do {
        cVar1 = (char)(*pcVar3);
        pcVar3 = (char *)(pcVar3 + 1);
      } while (cVar1 != '\0');
      iVar4 = (int)((int)pcVar3 - (int)(pcVar2 + 1));
      *(int*)(pcVar2 + -0xc) = (int)(iVar4);
    }
    return (int)(iVar4);
  }
  return (int)(0);
}


// Reference entry 101a4cd0; body size 38 bytes.
#line 1 "ENTRY_101a4cd0"

int __fastcall FUN_101a4cd0(undefined4 *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar2 = (char *)((char *)*param_1);
  if ((char *)(pcVar2) != (char *)(0x0)) {
    iVar4 = (int)(*(int *)(pcVar2 + -0xc));
    if (iVar4 == 0) {
      pcVar3 = (char *)(pcVar2);
      do {
        cVar1 = (char)(*pcVar3);
        pcVar3 = (char *)(pcVar3 + 1);
      } while (cVar1 != '\0');
      iVar4 = (int)((int)pcVar3 - (int)(pcVar2 + 1));
      *(int*)(pcVar2 + -0xc) = (int)(iVar4);
    }
    return (int)(iVar4);
  }
  return (int)(0);
}


// Reference entry 101a4d40; body size 47 bytes.
#line 1 "ENTRY_101a4d40"

bool __thiscall Recovered_Bulk::m_FUN_101a4d40(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_2 != (undefined1 *)((0x0))) {
    puVar2 = (undefined1 *)((undefined1 *)*param_2);
  }
  puVar3 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_1 != (undefined1 *)((0x0))) {
    puVar3 = (undefined1 *)((undefined1 *)*param_1);
  }
  iVar1 = (int)(thunk_FUN_1106a250(puVar3,puVar2,0), 0);
  return (bool)(iVar1 < 0);
}


// Reference entry 101a4d80; body size 43 bytes.
#line 1 "ENTRY_101a4d80"

bool __thiscall Recovered_Bulk::m_FUN_101a4d80(undefined1 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_1 != (undefined1 *)((0x0))) {
    puVar2 = (undefined1 *)((undefined1 *)*param_1);
  }
  puVar3 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)(param_2) != (undefined1 *)(0x0)) {
    puVar3 = (undefined1 *)(param_2);
  }
  iVar1 = (int)(thunk_FUN_1106a250(puVar2,puVar3,0), 0);
  return (bool)(iVar1 < 0);
}


// Reference entry 101a4fe0; body size 62 bytes.
#line 1 "ENTRY_101a4fe0"

int __fastcall FUN_101a4fe0(int *param_1)

{
  int iVar1;
  
  if ((int)(0xfffe) < *param_1) {
    return (int)(0xffff);
  }
  iVar1 = (int)(thunk_FUN_1123fcd0(param_1), 0);
  if (iVar1 == 0) {
    param_1[2] = (int)(0);
    param_1[1] = (int)(0);
    thunk_FUN_113cfb70(param_1 + 4,param_1[3]);
    free(param_1);
    iVar1 = (int)(0);
  }
  return (int)(iVar1);
}


// Reference entry 101a5590; body size 38 bytes.
#line 1 "ENTRY_101a5590"

void __thiscall Recovered_Bulk::m_FUN_101a5590(ushort *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  ushort uVar1;
  uint uVar2;
  
  uVar2 = (uint)(0);
  if ((ushort *)(param_2) != (ushort *)(0x0)) {
    uVar1 = (ushort)(*param_2);
    while (uVar1 != 0) {
      uVar2 = (uint)(uVar2 + 1);
      uVar1 = (ushort)(param_2[uVar2]);
    }
  }
  ((SCStr *)(param_1))->setFromUTF16(param_2,uVar2);
  return;
}


// Reference entry 101a6af0; body size 32 bytes.
#line 1 "ENTRY_101a6af0"

int __fastcall FUN_101a6af0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(*param_1);
  if (iVar1 == 0) {
    iVar2 = (int)(0);
  }
  else {
    iVar2 = (int)(*(int *)(iVar1 + -8));
    if (iVar2 == 0) {
      iVar2 = (int)(thunk_FUN_11069bc0(iVar1), 0);
      *(int*)(iVar1 + -8) = (int)(iVar2);
      return (int)(iVar2);
    }
  }
  return (int)(iVar2);
}


// Reference entry 101a6b20; body size 27 bytes.
#line 1 "ENTRY_101a6b20"

void __fastcall FUN_101a6b20(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    uVar1 = (undefined4)(thunk_FUN_11069bc0(param_1 + 0x10), 0);
    *(undefined4*)(param_1 + 8) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 101a8d90; body size 41 bytes.
#line 1 "ENTRY_101a8d90"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101a8d90(int *param_2)
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


// Reference entry 101a8dd0; body size 24 bytes.
#line 1 "ENTRY_101a8dd0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101a8dd0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101a8df0; body size 24 bytes.
#line 1 "ENTRY_101a8df0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101a8df0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101a8fe0; body size 19 bytes.
#line 1 "ENTRY_101a8fe0"

void __fastcall FUN_101a8fe0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101a90e0; body size 60 bytes.
#line 1 "ENTRY_101a90e0"

void __fastcall FUN_101a90e0(int *param_1)

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


// Reference entry 101a9140; body size 60 bytes.
#line 1 "ENTRY_101a9140"

void __fastcall FUN_101a9140(int *param_1)

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


// Reference entry 101a93e0; body size 32 bytes.
#line 1 "ENTRY_101a93e0"

undefined4 __thiscall Recovered_Bulk::m_FUN_101a93e0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_101a8f30();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x14);
  }
  return (undefined4)(param_1);
}


// Reference entry 101a9410; body size 45 bytes.
#line 1 "ENTRY_101a9410"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101a9410(byte param_2)
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


// Reference entry 101a9450; body size 45 bytes.
#line 1 "ENTRY_101a9450"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101a9450(byte param_2)
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


// Reference entry 101a9490; body size 33 bytes.
#line 1 "ENTRY_101a9490"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101a9490(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101a9d20; body size 38 bytes.
#line 1 "ENTRY_101a9d20"

void __thiscall Recovered_Bulk::m_FUN_101a9d20(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0xc), 0);
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 0x10)) {
    *puVar1 = (undefined4)(param_2);
    *(int*)(param_1 + 0xc) = (int)(*(int *)(param_1 + 0xc) + 4);
    return;
  }
  thunk_FUN_101a6f70(puVar1,&param_2);
  return;
}


// Reference entry 101aa430; body size 49 bytes.
#line 1 "ENTRY_101aa430"

void __thiscall Recovered_Bulk::m_FUN_101aa430(uint param_2)
{
  int *param_1 = (int *)this;
  void *_Src;
  void *_Dst;
  uint uVar1;
  
  uVar1 = (uint)((**(code **)(*param_1 + 0x14))(), 0);
  if (param_2 < uVar1) {
    _Dst = (char *)((char *)(param_1[2] + param_2 * 4));
    _Src = (char *)((char *)((int)_Dst + 4));
    memmove(_Dst,_Src,param_1[3] - (int)_Src);
    param_1[3] = (int)(param_1[3] + -4);
  }
  return;
}


// Reference entry 101aa540; body size 30 bytes.
#line 1 "ENTRY_101aa540"

void __fastcall FUN_101aa540(int param_1)

{
  thunk_FUN_101a83f0(*(int *)(param_1 + 8),*(int *)(param_1 + 0xc), *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2,LAB_101aa510);
  return;
}


// Reference entry 101aa570; body size 33 bytes.
#line 1 "ENTRY_101aa570"

void __fastcall FUN_101aa570(uint param_1)

{
  undefined4 local_4;
  
  local_4 = (undefined4)(param_1 & 0xffffff00);
  thunk_FUN_101a8700(*(int *)(param_1 + 8),*(int *)(param_1 + 0xc), *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2,local_4);
  return;
}


// Reference entry 101ab320; body size 55 bytes.
#line 1 "ENTRY_101ab320"

void __thiscall Recovered_Bulk::m_FUN_101ab320(int *param_2)
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


// Reference entry 101ab9e0; body size 30 bytes.
#line 1 "ENTRY_101ab9e0"

void __thiscall Recovered_Bulk::m_FUN_101ab9e0(int param_2)
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


// Reference entry 101ac3a0; body size 21 bytes.
#line 1 "ENTRY_101ac3a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101ac3a0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(*(undefined4 *)(param_2 + 4));
  return (undefined4 *)(param_1);
}


// Reference entry 101ac3c0; body size 27 bytes.
#line 1 "ENTRY_101ac3c0"

undefined4 * __fastcall FUN_101ac3c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 101ac420; body size 41 bytes.
#line 1 "ENTRY_101ac420"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101ac420(int *param_2)
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


// Reference entry 101ac990; body size 24 bytes.
#line 1 "ENTRY_101ac990"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101ac990(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101acad0; body size 39 bytes.
#line 1 "ENTRY_101acad0"

undefined4 * __fastcall FUN_101acad0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 101aced0; body size 46 bytes.
#line 1 "ENTRY_101aced0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101aced0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCHouseholdEventSink);
  param_1[1] = (undefined4)(*(undefined4 *)(param_2 + 4));
  piVar1 = (int *)(*(int **)(param_2 + 8), 0);
  param_1[2] = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101ada20; body size 19 bytes.
#line 1 "ENTRY_101ada20"

void __fastcall FUN_101ada20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101ada40; body size 19 bytes.
#line 1 "ENTRY_101ada40"

void __fastcall FUN_101ada40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101ada60; body size 19 bytes.
#line 1 "ENTRY_101ada60"

void __fastcall FUN_101ada60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101ae8e0; body size 60 bytes.
#line 1 "ENTRY_101ae8e0"

void __fastcall FUN_101ae8e0(int *param_1)

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


// Reference entry 101ae940; body size 19 bytes.
#line 1 "ENTRY_101ae940"

void __fastcall FUN_101ae940(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x14);
  }
  return;
}


// Reference entry 101aebf0; body size 25 bytes.
#line 1 "ENTRY_101aebf0"

void __fastcall FUN_101aebf0(undefined4 *param_1)

{
  thunk_FUN_101ab700(param_1,*param_1);
  thunk_FUN_1148a50e(*param_1,0x14);
  return;
}


// Reference entry 101b1580; body size 45 bytes.
#line 1 "ENTRY_101b1580"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101b1580(byte param_2)
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


// Reference entry 101b15c0; body size 45 bytes.
#line 1 "ENTRY_101b15c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101b15c0(byte param_2)
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


// Reference entry 101b1600; body size 45 bytes.
#line 1 "ENTRY_101b1600"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101b1600(byte param_2)
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


// Reference entry 101b1640; body size 45 bytes.
#line 1 "ENTRY_101b1640"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101b1640(byte param_2)
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


// Reference entry 101b1730; body size 33 bytes.
#line 1 "ENTRY_101b1730"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101b1730(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_AnacapaLauncherCB);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101b1760; body size 33 bytes.
#line 1 "ENTRY_101b1760"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101b1760(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RITQHandler);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101b19d0; body size 32 bytes.
#line 1 "ENTRY_101b19d0"

undefined4 __thiscall Recovered_Bulk::m_FUN_101b19d0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103026f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x1c);
  }
  return (undefined4)(param_1);
}


// Reference entry 101b1aa0; body size 45 bytes.
#line 1 "ENTRY_101b1aa0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101b1aa0(byte param_2)
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


// Reference entry 101b1ae0; body size 33 bytes.
#line 1 "ENTRY_101b1ae0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101b1ae0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101b1b10; body size 33 bytes.
#line 1 "ENTRY_101b1b10"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101b1b10(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101b1b40; body size 33 bytes.
#line 1 "ENTRY_101b1b40"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101b1b40(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101b1b70; body size 33 bytes.
#line 1 "ENTRY_101b1b70"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101b1b70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101b1ba0; body size 35 bytes.
#line 1 "ENTRY_101b1ba0"

SCLibrary * __thiscall Recovered_Bulk::m_FUN_101b1ba0(byte param_2)
{
  SCLibrary *param_1 = (SCLibrary *)this;
  ((SCLibrary *)(param_1))->m_op_dtor();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x1b8);
  }
  return (SCLibrary *)(param_1);
}


// Reference entry 101b1bd0; body size 33 bytes.
#line 1 "ENTRY_101b1bd0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101b1bd0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLoggingHelper);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101b1cc0; body size 25 bytes.
#line 1 "ENTRY_101b1cc0"

void __fastcall FUN_101b1cc0(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x14), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 101b2450; body size 31 bytes.
#line 1 "ENTRY_101b2450"

int * FUN_101b2450(int *param_1)

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


// Reference entry 101b2520; body size 23 bytes.
#line 1 "ENTRY_101b2520"

void __fastcall FUN_101b2520(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(thunk_FUN_101b1fc0(*(int *)(param_1 + 0x10) + 1), 0);
  thunk_FUN_101b2090(uVar1);
  return;
}


// Reference entry 101b2540; body size 21 bytes.
#line 1 "ENTRY_101b2540"

void __fastcall FUN_101b2540(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(thunk_FUN_101b1fc0(*(undefined4 *)(param_1 + 0x10)), 0);
  thunk_FUN_101b2090(uVar1);
  return;
}


// Reference entry 101b25f0; body size 25 bytes.
#line 1 "ENTRY_101b25f0"

void __fastcall FUN_101b25f0(undefined4 *param_1)

{
  thunk_FUN_101ab700(param_1,*param_1);
  thunk_FUN_1148a50e(*param_1,0x14);
  return;
}


// Reference entry 101b2980; body size 61 bytes.
#line 1 "ENTRY_101b2980"

void __thiscall Recovered_Bulk::m_FUN_101b2980(int *param_2)
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


// Reference entry 101b29d0; body size 61 bytes.
#line 1 "ENTRY_101b29d0"

void __thiscall Recovered_Bulk::m_FUN_101b29d0(int *param_2)
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


// Reference entry 101b2a20; body size 61 bytes.
#line 1 "ENTRY_101b2a20"

void __thiscall Recovered_Bulk::m_FUN_101b2a20(int *param_2)
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


// Reference entry 101b2a70; body size 61 bytes.
#line 1 "ENTRY_101b2a70"

void __thiscall Recovered_Bulk::m_FUN_101b2a70(int *param_2)
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


// Reference entry 101b2ac0; body size 30 bytes.
#line 1 "ENTRY_101b2ac0"

void __thiscall Recovered_Bulk::m_FUN_101b2ac0(int param_2)
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


// Reference entry 101b2d50; body size 42 bytes.
#line 1 "ENTRY_101b2d50"

undefined4 __thiscall Recovered_Bulk::m_FUN_101b2d50(int param_2)
{
  int param_1 = (int )this;
  char cVar1;
  
  if ((*(int **)(param_1 + 0x70) != (int *)((0x0))) && (*(int *)(param_1 + 0x38 + param_2 * 4) == 2)) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x70) + 0x28))(param_2), 0);
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 101b2d90; body size 42 bytes.
#line 1 "ENTRY_101b2d90"

undefined4 __thiscall Recovered_Bulk::m_FUN_101b2d90(int param_2)
{
  int param_1 = (int )this;
  char cVar1;
  
  if ((*(int **)(param_1 + 0x70) != (int *)((0x0))) && (*(int *)(param_1 + 0x38 + param_2 * 4) == 2)) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x70) + 0x24))(param_2), 0);
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 101b2dd0; body size 42 bytes.
#line 1 "ENTRY_101b2dd0"

undefined4 __thiscall Recovered_Bulk::m_FUN_101b2dd0(int param_2)
{
  int param_1 = (int )this;
  char cVar1;
  
  if ((*(int **)(param_1 + 0x70) != (int *)((0x0))) && (*(int *)(param_1 + 0x38 + param_2 * 4) != 1)) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x70) + 0x20))(param_2), 0);
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 101b2e80; body size 32 bytes.
#line 1 "ENTRY_101b2e80"

void __fastcall FUN_101b2e80(int *param_1)

{
  thunk_FUN_101ab700(param_1,*param_1);
  *(int *)*param_1 = (int)(*param_1);
  *(int*)(*param_1 + 4) = (int)(*param_1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 101b4d40; body size 28 bytes.
#line 1 "ENTRY_101b4d40"

void __fastcall FUN_101b4d40(int *param_1)

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


// Reference entry 101b4d70; body size 63 bytes.
#line 1 "ENTRY_101b4d70"

undefined4 __thiscall Recovered_Bulk::m_FUN_101b4d70(int param_2)
{
  int param_1 = (int )this;
  char cVar1;
  
  if ((*(int **)(param_1 + 0x70) != (int *)((0x0))) && (*(int *)(param_1 + 0x38 + param_2 * 4) == 2)) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x70) + 0x28))(param_2), 0);
    if (cVar1 != '\0') {
      cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x70) + 0x34))(param_2), 0);
      if (cVar1 != '\0') {
        return (undefined4)(1);
      }
    }
  }
  return (undefined4)(0);
}


// Reference entry 101b5270; body size 21 bytes.
#line 1 "ENTRY_101b5270"

SCStr * __stdcall FUN_101b5270(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("ability_manager");
  return (SCStr *)(param_1);
}


// Reference entry 101b5290; body size 28 bytes.
#line 1 "ENTRY_101b5290"

int * __thiscall Recovered_Bulk::m_FUN_101b5290(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x158), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 101b5e00; body size 52 bytes.
#line 1 "ENTRY_101b5e00"

undefined4 __thiscall Recovered_Bulk::m_FUN_101b5e00(undefined4 param_2,int param_3)
{
  int param_1 = (int )this;
  char cVar1;
  
  if (*(int **)(param_1 + 0x70) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x70) + 0x1c))(param_3,param_2), 0);
    if ((cVar1 != '\0') && (*(int *)(param_1 + 0x38 + param_3 * 4) != 3)) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 101b5e50; body size 27 bytes.
#line 1 "ENTRY_101b5e50"

int __thiscall Recovered_Bulk::m_FUN_101b5e50(int param_2)
{
  int param_1 = (int )this;
  int iVar1;
  uint3 uVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0x10 + param_2 * 4));
  uVar2 = (uint3)((uint3)((uint)iVar1 >> 8));
  if ((iVar1 != 0) && (iVar1 != 1)) {
    return (int)(((uint)(uVar2) << 8 | (uint)(1)));
  }
  return (int)((uint)uVar2 << 8);
}


// Reference entry 101b5ef0; body size 19 bytes.
#line 1 "ENTRY_101b5ef0"

uint __fastcall FUN_101b5ef0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 8) != (int *)((0x0))) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 8) + 0x50))(), 0);
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 101b7cd0; body size 62 bytes.
#line 1 "ENTRY_101b7cd0"

uint __thiscall Recovered_Bulk::m_FUN_101b7cd0(int param_2)
{
  int param_1 = (int )this;
  uint in_EAX;
  uint uVar1;
  
  if ((*(int **)(param_1 + 0x70) != (int *)((0x0))) && (*(int *)(param_1 + 0x38 + param_2 * 4) == 2)) {
    in_EAX = (uint)((**(code **)(**(int **)(param_1 + 0x70) + 0x24))(param_2), 0);
    if ((char)in_EAX != '\0') {
      *(undefined1*)(param_2 + 100 + param_1) = (undefined1)(1);
      uVar1 = (uint)((**(code **)(**(int **)(param_1 + 0x70) + 0x30))(param_2), 0);
      return (uint)(uVar1);
    }
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 101b7d20; body size 17 bytes.
#line 1 "ENTRY_101b7d20"

uint __fastcall FUN_101b7d20(int param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 0x70) != (int *)((0x0))) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 0x70) + 0x3c))(), 0);
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 101b7f90; body size 24 bytes.
#line 1 "ENTRY_101b7f90"

void __thiscall Recovered_Bulk::m_FUN_101b7f90(int *param_2)
{
  int param_1 = (int )this;
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 0xc4))(*(undefined4 *)(param_1 + 4));
  }
  return;
}


// Reference entry 101b7fb0; body size 24 bytes.
#line 1 "ENTRY_101b7fb0"

void __thiscall Recovered_Bulk::m_FUN_101b7fb0(int *param_2)
{
  int param_1 = (int )this;
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 200))(*(undefined4 *)(param_1 + 4));
  }
  return;
}


// Reference entry 101b7fd0; body size 63 bytes.
#line 1 "ENTRY_101b7fd0"

undefined4 __thiscall Recovered_Bulk::m_FUN_101b7fd0(int param_2)
{
  int param_1 = (int )this;
  char cVar1;
  
  if ((*(int **)(param_1 + 0x70) != (int *)((0x0))) && (*(int *)(param_1 + 0x38 + param_2 * 4) != 1)) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x70) + 0x20))(param_2), 0);
    if (cVar1 != '\0') {
      cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x70) + 0x2c))(param_2), 0);
      if (cVar1 != '\0') {
        return (undefined4)(1);
      }
    }
  }
  return (undefined4)(0);
}


// Reference entry 101b8080; body size 24 bytes.
#line 1 "ENTRY_101b8080"

void __thiscall Recovered_Bulk::m_FUN_101b8080(int *param_2)
{
  int param_1 = (int )this;
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 0xcc))(*(undefined4 *)(param_1 + 4));
  }
  return;
}


// Reference entry 101b80e0; body size 41 bytes.
#line 1 "ENTRY_101b80e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101b80e0(int *param_2)
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


// Reference entry 101b8120; body size 24 bytes.
#line 1 "ENTRY_101b8120"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101b8120(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101b8260; body size 19 bytes.
#line 1 "ENTRY_101b8260"

void __fastcall FUN_101b8260(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101b83f0; body size 45 bytes.
#line 1 "ENTRY_101b83f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101b83f0(byte param_2)
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


// Reference entry 101b8430; body size 33 bytes.
#line 1 "ENTRY_101b8430"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101b8430(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101b8530; body size 47 bytes.
#line 1 "ENTRY_101b8530"

char * __thiscall Recovered_Bulk::m_FUN_101b8530(char *param_2)
{
  int param_1 = (int )this;
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x18) != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x18), 0);
  }
  ((SCStr *)(param_2))->stringWithFormat("%d.%d-%05d%s",*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc), *(undefined4 *)(param_1 + 0x10),puVar1);
  return (char *)(param_2);
}


// Reference entry 101b8720; body size 21 bytes.
#line 1 "ENTRY_101b8720"

SCStr * __stdcall FUN_101b8720(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCVersion");
  return (SCStr *)(param_1);
}


// Reference entry 101b8740; body size 62 bytes.
#line 1 "ENTRY_101b8740"

bool __thiscall Recovered_Bulk::m_FUN_101b8740(char *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  int iVar1;
  
  if ((char *)(param_2) != (char *)(0x0)) {
    iVar1 = (int)(((SCStr *)(param_1))->format(param_2), 0);
    return (bool)(-1 < iVar1);
  }
  return (bool)(false);
}


// Reference entry 101b87d0; body size 20 bytes.
#line 1 "ENTRY_101b87d0"

SCStr * __thiscall Recovered_Bulk::m_FUN_101b87d0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x18));
  return (SCStr *)(param_2);
}


// Reference entry 101b8f90; body size 34 bytes.
#line 1 "ENTRY_101b8f90"

void __thiscall Recovered_Bulk::m_FUN_101b8f90(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 8) = (undefined4)(param_2);
  *(undefined4*)(param_1 + 0xc) = (undefined4)(param_3);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(param_4);
  *(undefined2*)(param_1 + 0x14) = (undefined2)(0);
  *(undefined1*)(param_1 + 0x16) = (undefined1)(0);
  return;
}


// Reference entry 101b9160; body size 37 bytes.
#line 1 "ENTRY_101b9160"

void FUN_101b9160(undefined4 param_1,undefined4 param_2)

{ int stack0x0000000c;
 try {
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_101b9120(param_1,0xffffffff,param_2,0,&stack0x0000000c), 0);
  __stdio_common_vsscanf(*puVar1,puVar1[1]);
  return;

 } catch (...) { }
}


// Reference entry 101b9190; body size 43 bytes.
#line 1 "ENTRY_101b9190"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101b9190(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int iVar1;
  
  *(undefined1*)(param_1 + 1) = (undefined1)(0);
  *param_1 = (undefined4)(param_2);
  iVar1 = (int)(thunk_FUN_103134f0(), 0);
  if (iVar1 != 0) {
    thunk_FUN_10313720(param_2,param_1 + 1);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101b9240; body size 27 bytes.
#line 1 "ENTRY_101b9240"

void __fastcall FUN_101b9240(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_103134f0(), 0);
  if (iVar1 != 0) {
    thunk_FUN_103138c0(*param_1,param_1 + 1);
  }
  return;
}


// Reference entry 101b9650; body size 41 bytes.
#line 1 "ENTRY_101b9650"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101b9650(int *param_2)
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


// Reference entry 101b9700; body size 24 bytes.
#line 1 "ENTRY_101b9700"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101b9700(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101b9890; body size 46 bytes.
#line 1 "ENTRY_101b9890"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101b9890(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSystemEventSink);
  param_1[1] = (undefined4)(*(undefined4 *)(param_2 + 4));
  piVar1 = (int *)(*(int **)(param_2 + 8), 0);
  param_1[2] = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101b9b80; body size 19 bytes.
#line 1 "ENTRY_101b9b80"

void __fastcall FUN_101b9b80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101b9f90; body size 60 bytes.
#line 1 "ENTRY_101b9f90"

void __fastcall FUN_101b9f90(int *param_1)

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


// Reference entry 101b9ff0; body size 60 bytes.
#line 1 "ENTRY_101b9ff0"

void __fastcall FUN_101b9ff0(int *param_1)

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


// Reference entry 101ba050; body size 60 bytes.
#line 1 "ENTRY_101ba050"

void __fastcall FUN_101ba050(int *param_1)

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


// Reference entry 101ba220; body size 19 bytes.
#line 1 "ENTRY_101ba220"

void __fastcall FUN_101ba220(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101ba7d0; body size 38 bytes.
#line 1 "ENTRY_101ba7d0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101ba7d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101ba800; body size 45 bytes.
#line 1 "ENTRY_101ba800"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101ba800(byte param_2)
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


// Reference entry 101ba840; body size 45 bytes.
#line 1 "ENTRY_101ba840"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101ba840(byte param_2)
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


// Reference entry 101ba880; body size 32 bytes.
#line 1 "ENTRY_101ba880"

undefined4 __thiscall Recovered_Bulk::m_FUN_101ba880(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_101b9ba0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 101ba8b0; body size 38 bytes.
#line 1 "ENTRY_101ba8b0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101ba8b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  thunk_FUN_11240850();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101ba8e0; body size 32 bytes.
#line 1 "ENTRY_101ba8e0"

undefined4 __thiscall Recovered_Bulk::m_FUN_101ba8e0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4)(param_1);
}


// Reference entry 101ba910; body size 45 bytes.
#line 1 "ENTRY_101ba910"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101ba910(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x18);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101ba950; body size 33 bytes.
#line 1 "ENTRY_101ba950"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101ba950(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101ba980; body size 33 bytes.
#line 1 "ENTRY_101ba980"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101ba980(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101baa50; body size 45 bytes.
#line 1 "ENTRY_101baa50"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101baa50(byte param_2)
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


// Reference entry 101bac00; body size 61 bytes.
#line 1 "ENTRY_101bac00"

void __thiscall Recovered_Bulk::m_FUN_101bac00(int *param_2)
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


// Reference entry 101bac50; body size 61 bytes.
#line 1 "ENTRY_101bac50"

void __thiscall Recovered_Bulk::m_FUN_101bac50(int *param_2)
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


// Reference entry 101bad20; body size 59 bytes.
#line 1 "ENTRY_101bad20"

void __thiscall Recovered_Bulk::m_FUN_101bad20(int param_2)
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


// Reference entry 101bad70; body size 59 bytes.
#line 1 "ENTRY_101bad70"

void __thiscall Recovered_Bulk::m_FUN_101bad70(int param_2)
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


// Reference entry 101bb0e0; body size 21 bytes.
#line 1 "ENTRY_101bb0e0"

SCStr * __stdcall FUN_101bb0e0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCElapsedTimeMeasurement");
  return (SCStr *)(param_1);
}


// Reference entry 101bb100; body size 43 bytes.
#line 1 "ENTRY_101bb100"

void __fastcall FUN_101bb100(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1), 0);
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(0);
  return;
}


// Reference entry 101bb140; body size 43 bytes.
#line 1 "ENTRY_101bb140"

void __fastcall FUN_101bb140(undefined4 *param_1)

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


// Reference entry 101bb180; body size 43 bytes.
#line 1 "ENTRY_101bb180"

void __fastcall FUN_101bb180(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1), 0);
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(0);
  return;
}


// Reference entry 101bb870; body size 21 bytes.
#line 1 "ENTRY_101bb870"

SCStr * __stdcall FUN_101bb870(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 101bbbe0; body size 19 bytes.
#line 1 "ENTRY_101bbbe0"

uint __fastcall FUN_101bbbe0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 8) != (int *)((0x0))) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 8) + 0x14))(), 0);
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 101bc2d0; body size 39 bytes.
#line 1 "ENTRY_101bc2d0"

int __fastcall FUN_101bc2d0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_1123fcd0(param_1 + 1), 0);
  if ((iVar1 == 0) && ((undefined4 *)(param_1) != (undefined4 *)(0x0))) {
    (**(code **)*param_1)(1);
  }
  return (int)(iVar1);
}


// Reference entry 101bc330; body size 60 bytes.
#line 1 "ENTRY_101bc330"

void __fastcall FUN_101bc330(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(*param_1);
  if (((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) &&
     (iVar2 = (int)(thunk_FUN_1123fcd0((char *)(iVar1 + -0x10)), 0), iVar2 == 0)) {
    *(undefined4*)(iVar1 + -8) = (undefined4)(0);
    *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
    thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
    free((char *)(iVar1 + -0x10));
  }
  return;
}


// Reference entry 101bc3e0; body size 35 bytes.
#line 1 "ENTRY_101bc3e0"

undefined4 __fastcall FUN_101bc3e0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(int **)(param_1 + 4) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 4) + 0xc))(), 0);
    if (cVar1 != '\0') {
                    
                    
      uVar2 = (undefined4)((**(code **)(**(int **)(param_1 + 4) + 8))(), 0);
      return (undefined4)(uVar2);
    }
  }
  return (undefined4)(*(undefined4 *)(param_1 + 8));
}


// Reference entry 101bc430; body size 30 bytes.
#line 1 "ENTRY_101bc430"

void __thiscall Recovered_Bulk::m_FUN_101bc430(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 4) != (int *)((0x0))) {
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 4) + 4))(param_2,param_3), 0);
    *(undefined4*)(param_1 + 8) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 101bc460; body size 21 bytes.
#line 1 "ENTRY_101bc460"

void __thiscall Recovered_Bulk::m_FUN_101bc460(int *param_2)
{
  int param_1 = (int )this;
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 0x24))(*(undefined4 *)(param_1 + 4));
  }
  return;
}


// Reference entry 101bc480; body size 21 bytes.
#line 1 "ENTRY_101bc480"

void __thiscall Recovered_Bulk::m_FUN_101bc480(int *param_2)
{
  int param_1 = (int )this;
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 0x28))(*(undefined4 *)(param_1 + 4));
  }
  return;
}


// Reference entry 101bdfa0; body size 24 bytes.
#line 1 "ENTRY_101bdfa0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101bdfa0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101be0d0; body size 60 bytes.
#line 1 "ENTRY_101be0d0"

void __fastcall FUN_101be0d0(int *param_1)

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


// Reference entry 101be1b0; body size 47 bytes.
#line 1 "ENTRY_101be1b0"

void __fastcall FUN_101be1b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCStringArray);
  thunk_FUN_101be460();
  thunk_FUN_101a2bf0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101be2b0; body size 45 bytes.
#line 1 "ENTRY_101be2b0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101be2b0(byte param_2)
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


// Reference entry 101be2f0; body size 33 bytes.
#line 1 "ENTRY_101be2f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101be2f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101be3c0; body size 61 bytes.
#line 1 "ENTRY_101be3c0"

void __thiscall Recovered_Bulk::m_FUN_101be3c0(int *param_2)
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


// Reference entry 101be410; body size 43 bytes.
#line 1 "ENTRY_101be410"

void __thiscall Recovered_Bulk::m_FUN_101be410(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)(*(SCStr **)(param_1 + 0xc), 0);
  if ((SCStr *)(this_) != *(SCStr **)(param_1 + 0x10)) {
    ((SCStr *)(this_))->m_op_ctor(param_2);
    *(int*)(param_1 + 0xc) = (int)(*(int *)(param_1 + 0xc) + 4);
    return;
  }
  thunk_FUN_101a2390(this_,param_2);
  return;
}


// Reference entry 101bef40; body size 40 bytes.
#line 1 "ENTRY_101bef40"

void __thiscall Recovered_Bulk::m_FUN_101bef40(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)(*(SCStr **)(param_1 + 4), 0);
  if ((SCStr *)(this_) != *(SCStr **)(param_1 + 8)) {
    ((SCStr *)(this_))->m_op_ctor(param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
    return;
  }
  thunk_FUN_101bc5e0(this_,param_2);
  return;
}


// Reference entry 101bf1c0; body size 30 bytes.
#line 1 "ENTRY_101bf1c0"

void __fastcall FUN_101bf1c0(int param_1)

{
  thunk_FUN_101bda70(*(int *)(param_1 + 8),*(int *)(param_1 + 0xc), *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2,LAB_1001b7c5);
  return;
}


// Reference entry 101c35c0; body size 61 bytes.
#line 1 "ENTRY_101c35c0"

void __thiscall Recovered_Bulk::m_FUN_101c35c0(int *param_2)
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


// Reference entry 101c3610; body size 17 bytes.
#line 1 "ENTRY_101c3610"

undefined4 FUN_101c3610(undefined4 param_1)

{
  createSCStringArray();
  return (undefined4)(param_1);
}


// Reference entry 101c4700; body size 40 bytes.
#line 1 "ENTRY_101c4700"

int __thiscall Recovered_Bulk::m_FUN_101c4700(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int iVar1;
  undefined1 local_8 [8];
  
  iVar1 = (int)(thunk_FUN_101c4740((uint)&local_8,param_2,param_3), 0);
  iVar1 = (int)(*(int *)(iVar1 + 4));
  if (iVar1 == 0) {
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  return (int)(iVar1);
}


// Reference entry 101c4ee0; body size 30 bytes.
#line 1 "ENTRY_101c4ee0"

void __thiscall Recovered_Bulk::m_FUN_101c4ee0(int param_2)
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


// Reference entry 101c4f10; body size 40 bytes.
#line 1 "ENTRY_101c4f10"

void __stdcall FUN_101c4f10(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 101c5120; body size 59 bytes.
#line 1 "ENTRY_101c5120"

void __thiscall Recovered_Bulk::m_FUN_101c5120(undefined4 *param_2)
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
  thunk_FUN_101c4440(puVar1,param_2);
  return;
}


// Reference entry 101c5210; body size 55 bytes.
#line 1 "ENTRY_101c5210"

void __thiscall Recovered_Bulk::m_FUN_101c5210(int *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  int iVar2;
  undefined1 local_8 [8];
  
  uVar1 = (undefined4)(thunk_FUN_101c3fc0(param_3), 0);
  iVar2 = (int)(thunk_FUN_101c4740((uint)&local_8,param_3,uVar1), 0);
  iVar2 = (int)(*(int *)(iVar2 + 4));
  if (iVar2 == 0) {
    iVar2 = (int)(*(int *)(param_1 + 4));
  }
  *param_2 = (int)(iVar2);
  return;
}


// Reference entry 101c55c0; body size 41 bytes.
#line 1 "ENTRY_101c55c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101c55c0(int *param_2)
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


// Reference entry 101c5640; body size 24 bytes.
#line 1 "ENTRY_101c5640"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101c5640(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101c5660; body size 24 bytes.
#line 1 "ENTRY_101c5660"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101c5660(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101c5680; body size 24 bytes.
#line 1 "ENTRY_101c5680"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101c5680(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101c58b0; body size 39 bytes.
#line 1 "ENTRY_101c58b0"

undefined4 * __fastcall FUN_101c58b0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 101c62f0; body size 41 bytes.
#line 1 "ENTRY_101c62f0"

int * __thiscall Recovered_Bulk::m_FUN_101c62f0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_1 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  return (int *)(param_1);
}


// Reference entry 101c6350; body size 19 bytes.
#line 1 "ENTRY_101c6350"

void __fastcall FUN_101c6350(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101c6370; body size 19 bytes.
#line 1 "ENTRY_101c6370"

void __fastcall FUN_101c6370(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101c6790; body size 60 bytes.
#line 1 "ENTRY_101c6790"

void __fastcall FUN_101c6790(int *param_1)

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


// Reference entry 101c67f0; body size 19 bytes.
#line 1 "ENTRY_101c67f0"

void __fastcall FUN_101c67f0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 101c69e0; body size 17 bytes.
#line 1 "ENTRY_101c69e0"

void __fastcall FUN_101c69e0(undefined4 *param_1)

{
  thunk_FUN_101c42f0(*param_1,param_1[1],param_1[2]);
  return;
}


// Reference entry 101c6a00; body size 25 bytes.
#line 1 "ENTRY_101c6a00"

void __fastcall FUN_101c6a00(undefined4 *param_1)

{
  thunk_FUN_101c4810(param_1,*param_1);
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 101c7440; body size 27 bytes.
#line 1 "ENTRY_101c7440"

int __stdcall FUN_101c7440(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_8 [8];
  
  piVar1 = (int *)((int *)thunk_FUN_101c4a90((uint)&local_8,param_1), 0);
  return (int)(*piVar1 + 0xc);
}


// Reference entry 101c77c0; body size 45 bytes.
#line 1 "ENTRY_101c77c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101c77c0(byte param_2)
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


// Reference entry 101c7800; body size 45 bytes.
#line 1 "ENTRY_101c7800"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101c7800(byte param_2)
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


// Reference entry 101c7840; body size 45 bytes.
#line 1 "ENTRY_101c7840"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101c7840(byte param_2)
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


// Reference entry 101c7a70; body size 45 bytes.
#line 1 "ENTRY_101c7a70"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101c7a70(byte param_2)
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


// Reference entry 101c7ab0; body size 45 bytes.
#line 1 "ENTRY_101c7ab0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101c7ab0(byte param_2)
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


// Reference entry 101c7ea0; body size 33 bytes.
#line 1 "ENTRY_101c7ea0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101c7ea0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101c83f0; body size 25 bytes.
#line 1 "ENTRY_101c83f0"

void __fastcall FUN_101c83f0(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x18), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 101c8730; body size 20 bytes.
#line 1 "ENTRY_101c8730"

void __thiscall Recovered_Bulk::m_FUN_101c8730(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_101c42f0(param_2,param_3,param_1);
  return;
}


// Reference entry 101c8da0; body size 25 bytes.
#line 1 "ENTRY_101c8da0"

void __fastcall FUN_101c8da0(undefined4 *param_1)

{
  thunk_FUN_101c4810(param_1,*param_1);
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 101c97f0; body size 61 bytes.
#line 1 "ENTRY_101c97f0"

void __thiscall Recovered_Bulk::m_FUN_101c97f0(int *param_2)
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


// Reference entry 101c9840; body size 61 bytes.
#line 1 "ENTRY_101c9840"

void __thiscall Recovered_Bulk::m_FUN_101c9840(int *param_2)
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


// Reference entry 101c9890; body size 61 bytes.
#line 1 "ENTRY_101c9890"

void __thiscall Recovered_Bulk::m_FUN_101c9890(int *param_2)
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


// Reference entry 101c98e0; body size 61 bytes.
#line 1 "ENTRY_101c98e0"

void __thiscall Recovered_Bulk::m_FUN_101c98e0(int *param_2)
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


// Reference entry 101c9930; body size 30 bytes.
#line 1 "ENTRY_101c9930"

void __thiscall Recovered_Bulk::m_FUN_101c9930(int param_2)
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


// Reference entry 101c9af0; body size 32 bytes.
#line 1 "ENTRY_101c9af0"

void __fastcall FUN_101c9af0(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x14) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x14) + 0x1c))(), 0);
    if (cVar1 != '\0') {
                    
                    
      (**(code **)(**(int **)(param_1 + 0x14) + 0x18))();
      return;
    }
  }
  return;
}


// Reference entry 101c9b90; body size 32 bytes.
#line 1 "ENTRY_101c9b90"

void __fastcall FUN_101c9b90(int *param_1)

{
  thunk_FUN_101c4810(param_1,*param_1);
  *(int *)*param_1 = (int)(*param_1);
  *(int*)(*param_1 + 4) = (int)(*param_1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 101ca860; body size 60 bytes.
#line 1 "ENTRY_101ca860"

void __stdcall FUN_101ca860(int param_1,int param_2)

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


// Reference entry 101ca950; body size 21 bytes.
#line 1 "ENTRY_101ca950"

SCStr * __stdcall FUN_101ca950(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCFetchTokenAction");
  return (SCStr *)(param_1);
}


// Reference entry 101ca970; body size 28 bytes.
#line 1 "ENTRY_101ca970"

void __fastcall FUN_101ca970(int *param_1)

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


// Reference entry 101cb160; body size 59 bytes.
#line 1 "ENTRY_101cb160"

void __thiscall Recovered_Bulk::m_FUN_101cb160(undefined4 *param_2)
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
  thunk_FUN_101c4440(puVar1,param_2);
  return;
}


// Reference entry 101cc2c0; body size 35 bytes.
#line 1 "ENTRY_101cc2c0"

undefined4 * __fastcall FUN_101cc2c0(undefined4 *param_1)

{
  param_1[1] = (undefined4)(1);
  param_1[2] = (undefined4)(1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Ref_count_obj2);
  thunk_FUN_103d5ff0();
  return (undefined4 *)(param_1);
}


// Reference entry 101cdd70; body size 33 bytes.
#line 1 "ENTRY_101cdd70"

void __thiscall Recovered_Bulk::m_FUN_101cdd70(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_101cde00(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 101cdee0; body size 57 bytes.
#line 1 "ENTRY_101cdee0"

void __stdcall FUN_101cdee0(undefined4 param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = (char)(*(char *)((int)param_2 + 0xd));
  while (cVar1 == '\0') {
    thunk_FUN_101cdee0(param_1,param_2[2]);
    piVar2 = (int *)((int *)*param_2);
    thunk_FUN_1148a50e(param_2,0x30);
    param_2 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }
  return;
}


// Reference entry 101ce970; body size 30 bytes.
#line 1 "ENTRY_101ce970"

void __thiscall Recovered_Bulk::m_FUN_101ce970(int param_2)
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


// Reference entry 101ce9a0; body size 30 bytes.
#line 1 "ENTRY_101ce9a0"

void __thiscall Recovered_Bulk::m_FUN_101ce9a0(int param_2)
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


// Reference entry 101cf880; body size 21 bytes.
#line 1 "ENTRY_101cf880"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101cf880(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(*(undefined4 *)(param_2 + 4));
  return (undefined4 *)(param_1);
}


// Reference entry 101cf8a0; body size 27 bytes.
#line 1 "ENTRY_101cf8a0"

undefined4 * __fastcall FUN_101cf8a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 101cf8d0; body size 21 bytes.
#line 1 "ENTRY_101cf8d0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101cf8d0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(*(undefined4 *)(param_2 + 4));
  return (undefined4 *)(param_1);
}


// Reference entry 101cf8f0; body size 27 bytes.
#line 1 "ENTRY_101cf8f0"

undefined4 * __fastcall FUN_101cf8f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 101cf920; body size 42 bytes.
#line 1 "ENTRY_101cf920"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101cf920(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOwnedObjImpl);
  return (undefined4 *)(param_1);
}


// Reference entry 101cf960; body size 40 bytes.
#line 1 "ENTRY_101cf960"

undefined4 * __fastcall FUN_101cf960(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOwnedObjImpl);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101cf9a0; body size 33 bytes.
#line 1 "ENTRY_101cf9a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101cf9a0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(*(undefined4 *)(param_2 + 4));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOwnedObjImpl);
  param_1[2] = (undefined4)(*(undefined4 *)(param_2 + 8));
  return (undefined4 *)(param_1);
}


// Reference entry 101cf9d0; body size 42 bytes.
#line 1 "ENTRY_101cf9d0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101cf9d0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCITearOffObjImpl);
  return (undefined4 *)(param_1);
}


// Reference entry 101cfa10; body size 40 bytes.
#line 1 "ENTRY_101cfa10"

undefined4 * __fastcall FUN_101cfa10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCITearOffObjImpl);
  return (undefined4 *)(param_1);
}


// Reference entry 101cfa50; body size 39 bytes.
#line 1 "ENTRY_101cfa50"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101cfa50(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(*(undefined4 *)(param_2 + 4));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOwnedObjImpl);
  param_1[2] = (undefined4)(*(undefined4 *)(param_2 + 8));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCITearOffObjImpl);
  return (undefined4 *)(param_1);
}


// Reference entry 101cfae0; body size 41 bytes.
#line 1 "ENTRY_101cfae0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101cfae0(int *param_2)
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


// Reference entry 101cfb80; body size 41 bytes.
#line 1 "ENTRY_101cfb80"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101cfb80(int *param_2)
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


// Reference entry 101cfbc0; body size 41 bytes.
#line 1 "ENTRY_101cfbc0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101cfbc0(int *param_2)
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


// Reference entry 101cfc00; body size 41 bytes.
#line 1 "ENTRY_101cfc00"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101cfc00(int *param_2)
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


// Reference entry 101cfc70; body size 41 bytes.
#line 1 "ENTRY_101cfc70"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101cfc70(int *param_2)
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


// Reference entry 101cfcf0; body size 41 bytes.
#line 1 "ENTRY_101cfcf0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101cfcf0(int *param_2)
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


// Reference entry 101cfd30; body size 41 bytes.
#line 1 "ENTRY_101cfd30"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101cfd30(int *param_2)
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


// Reference entry 101cfdc0; body size 41 bytes.
#line 1 "ENTRY_101cfdc0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101cfdc0(int *param_2)
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


// Reference entry 101cfe30; body size 41 bytes.
#line 1 "ENTRY_101cfe30"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101cfe30(int *param_2)
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


// Reference entry 101cfe90; body size 24 bytes.
#line 1 "ENTRY_101cfe90"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101cfe90(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101cfeb0; body size 24 bytes.
#line 1 "ENTRY_101cfeb0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101cfeb0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101d0020; body size 48 bytes.
#line 1 "ENTRY_101d0020"

undefined4 * __fastcall FUN_101d0020(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 101d0060; body size 48 bytes.
#line 1 "ENTRY_101d0060"

undefined4 * __fastcall FUN_101d0060(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 101d0480; body size 37 bytes.
#line 1 "ENTRY_101d0480"

undefined4 * __fastcall FUN_101d0480(undefined4 *param_1)

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


// Reference entry 101d18a0; body size 19 bytes.
#line 1 "ENTRY_101d18a0"

void __fastcall FUN_101d18a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101d18c0; body size 19 bytes.
#line 1 "ENTRY_101d18c0"

void __fastcall FUN_101d18c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101d1920; body size 19 bytes.
#line 1 "ENTRY_101d1920"

void __fastcall FUN_101d1920(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101d1940; body size 19 bytes.
#line 1 "ENTRY_101d1940"

void __fastcall FUN_101d1940(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101d1960; body size 26 bytes.
#line 1 "ENTRY_101d1960"

void __fastcall FUN_101d1960(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101d1980; body size 26 bytes.
#line 1 "ENTRY_101d1980"

void __fastcall FUN_101d1980(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101d2630; body size 60 bytes.
#line 1 "ENTRY_101d2630"

void __fastcall FUN_101d2630(int *param_1)

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


// Reference entry 101d2690; body size 60 bytes.
#line 1 "ENTRY_101d2690"

void __fastcall FUN_101d2690(int *param_1)

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


// Reference entry 101d26f0; body size 60 bytes.
#line 1 "ENTRY_101d26f0"

void __fastcall FUN_101d26f0(int *param_1)

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


// Reference entry 101d2750; body size 60 bytes.
#line 1 "ENTRY_101d2750"

void __fastcall FUN_101d2750(int *param_1)

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


// Reference entry 101d27b0; body size 60 bytes.
#line 1 "ENTRY_101d27b0"

void __fastcall FUN_101d27b0(int *param_1)

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


// Reference entry 101d2810; body size 60 bytes.
#line 1 "ENTRY_101d2810"

void __fastcall FUN_101d2810(int *param_1)

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


// Reference entry 101d2870; body size 60 bytes.
#line 1 "ENTRY_101d2870"

void __fastcall FUN_101d2870(int *param_1)

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


// Reference entry 101d28d0; body size 60 bytes.
#line 1 "ENTRY_101d28d0"

void __fastcall FUN_101d28d0(int *param_1)

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


// Reference entry 101d2930; body size 19 bytes.
#line 1 "ENTRY_101d2930"

void __fastcall FUN_101d2930(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x10);
  }
  return;
}


// Reference entry 101d2950; body size 19 bytes.
#line 1 "ENTRY_101d2950"

void __fastcall FUN_101d2950(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x30);
  }
  return;
}


// Reference entry 101d2970; body size 33 bytes.
#line 1 "ENTRY_101d2970"

void __fastcall FUN_101d2970(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 101d29a0; body size 33 bytes.
#line 1 "ENTRY_101d29a0"

void __fastcall FUN_101d29a0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 101d29d0; body size 33 bytes.
#line 1 "ENTRY_101d29d0"

void __fastcall FUN_101d29d0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 101d2a00; body size 33 bytes.
#line 1 "ENTRY_101d2a00"

void __fastcall FUN_101d2a00(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 101d2a30; body size 33 bytes.
#line 1 "ENTRY_101d2a30"

void __fastcall FUN_101d2a30(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 101d2a60; body size 33 bytes.
#line 1 "ENTRY_101d2a60"

void __fastcall FUN_101d2a60(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 101d2a90; body size 33 bytes.
#line 1 "ENTRY_101d2a90"

void __fastcall FUN_101d2a90(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 101d2bf0; body size 28 bytes.
#line 1 "ENTRY_101d2bf0"

void __fastcall FUN_101d2bf0(int *param_1)

{
  thunk_FUN_101cde00(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 101d2c40; body size 19 bytes.
#line 1 "ENTRY_101d2c40"

void __fastcall FUN_101d2c40(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x30);
  }
  return;
}


// Reference entry 101d2c60; body size 33 bytes.
#line 1 "ENTRY_101d2c60"

void __fastcall FUN_101d2c60(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 101d2c90; body size 33 bytes.
#line 1 "ENTRY_101d2c90"

void __fastcall FUN_101d2c90(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 101d2cc0; body size 33 bytes.
#line 1 "ENTRY_101d2cc0"

void __fastcall FUN_101d2cc0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 101d2cf0; body size 33 bytes.
#line 1 "ENTRY_101d2cf0"

void __fastcall FUN_101d2cf0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 101d2d20; body size 33 bytes.
#line 1 "ENTRY_101d2d20"

void __fastcall FUN_101d2d20(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 101d2d50; body size 33 bytes.
#line 1 "ENTRY_101d2d50"

void __fastcall FUN_101d2d50(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 101d2d80; body size 33 bytes.
#line 1 "ENTRY_101d2d80"

void __fastcall FUN_101d2d80(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 101d2db0; body size 25 bytes.
#line 1 "ENTRY_101d2db0"

void __fastcall FUN_101d2db0(undefined4 *param_1)

{
  thunk_FUN_101cdf90(param_1,*param_1);
  thunk_FUN_1148a50e(*param_1,0x10);
  return;
}


// Reference entry 101d2de0; body size 28 bytes.
#line 1 "ENTRY_101d2de0"

void __fastcall FUN_101d2de0(int *param_1)

{
  thunk_FUN_101cde00(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 101d2ea0; body size 47 bytes.
#line 1 "ENTRY_101d2ea0"

void __fastcall FUN_101d2ea0(int param_1)

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


// Reference entry 101d2ee0; body size 23 bytes.
#line 1 "ENTRY_101d2ee0"

void __fastcall FUN_101d2ee0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(*(int **)(param_1 + 4), 0);
  if ((int *)(piVar1) != (int *)(0x0)) {
    LOCK();
    iVar2 = (int)(piVar1[2] + -1);
    piVar1[2] = (int)(iVar2);
    UNLOCK();
    if (iVar2 == 0) {
                    
                    
      (**(code **)(*piVar1 + 4))();
      return;
    }
  }
  return;
}


// Reference entry 101d33f0; body size 19 bytes.
#line 1 "ENTRY_101d33f0"

void __fastcall FUN_101d33f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101d3410; body size 19 bytes.
#line 1 "ENTRY_101d3410"

void __fastcall FUN_101d3410(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101d3a30; body size 18 bytes.
#line 1 "ENTRY_101d3a30"

void __fastcall FUN_101d3a30(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0x30);
  }
  return;
}


// Reference entry 101d3b70; body size 21 bytes.
#line 1 "ENTRY_101d3b70"

int __thiscall Recovered_Bulk::m_FUN_101d3b70(int param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 4) = (undefined4)(*(undefined4 *)(param_2 + 4));
  *(undefined4*)(param_1 + 8) = (undefined4)(*(undefined4 *)(param_2 + 8));
  return (int)(param_1);
}


// Reference entry 101d3b90; body size 21 bytes.
#line 1 "ENTRY_101d3b90"

int __thiscall Recovered_Bulk::m_FUN_101d3b90(int param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 4) = (undefined4)(*(undefined4 *)(param_2 + 4));
  *(undefined4*)(param_1 + 8) = (undefined4)(*(undefined4 *)(param_2 + 8));
  return (int)(param_1);
}


// Reference entry 101d4050; body size 37 bytes.
#line 1 "ENTRY_101d4050"

int * __fastcall FUN_101d4050(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 101d4080; body size 37 bytes.
#line 1 "ENTRY_101d4080"

int * __fastcall FUN_101d4080(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 101d5520; body size 45 bytes.
#line 1 "ENTRY_101d5520"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101d5520(byte param_2)
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


// Reference entry 101d5560; body size 45 bytes.
#line 1 "ENTRY_101d5560"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101d5560(byte param_2)
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


// Reference entry 101d55a0; body size 45 bytes.
#line 1 "ENTRY_101d55a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101d55a0(byte param_2)
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


// Reference entry 101d55e0; body size 45 bytes.
#line 1 "ENTRY_101d55e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101d55e0(byte param_2)
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


// Reference entry 101d5620; body size 45 bytes.
#line 1 "ENTRY_101d5620"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101d5620(byte param_2)
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


// Reference entry 101d5660; body size 45 bytes.
#line 1 "ENTRY_101d5660"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101d5660(byte param_2)
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


// Reference entry 101d56a0; body size 52 bytes.
#line 1 "ENTRY_101d56a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101d56a0(byte param_2)
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


// Reference entry 101d56f0; body size 52 bytes.
#line 1 "ENTRY_101d56f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101d56f0(byte param_2)
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


// Reference entry 101d5740; body size 32 bytes.
#line 1 "ENTRY_101d5740"

undefined4 __thiscall Recovered_Bulk::m_FUN_101d5740(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_101d19a0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68);
  }
  return (undefined4)(param_1);
}


// Reference entry 101d5800; body size 60 bytes.
#line 1 "ENTRY_101d5800"

int __thiscall Recovered_Bulk::m_FUN_101d5800(byte param_2)
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


// Reference entry 101d5850; body size 33 bytes.
#line 1 "ENTRY_101d5850"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101d5850(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Ref_count_obj2);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x30);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101d5930; body size 45 bytes.
#line 1 "ENTRY_101d5930"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101d5930(byte param_2)
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


// Reference entry 101d5970; body size 35 bytes.
#line 1 "ENTRY_101d5970"

undefined4 __thiscall Recovered_Bulk::m_FUN_101d5970(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_101d2f40();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x180);
  }
  return (undefined4)(param_1);
}


// Reference entry 101d59a0; body size 45 bytes.
#line 1 "ENTRY_101d59a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101d59a0(byte param_2)
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


// Reference entry 101d59e0; body size 45 bytes.
#line 1 "ENTRY_101d59e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101d59e0(byte param_2)
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


// Reference entry 101d5a20; body size 45 bytes.
#line 1 "ENTRY_101d5a20"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101d5a20(byte param_2)
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


// Reference entry 101d5b00; body size 33 bytes.
#line 1 "ENTRY_101d5b00"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101d5b00(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101d5bd0; body size 33 bytes.
#line 1 "ENTRY_101d5bd0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101d5bd0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101d5c00; body size 33 bytes.
#line 1 "ENTRY_101d5c00"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101d5c00(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101d5c30; body size 33 bytes.
#line 1 "ENTRY_101d5c30"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101d5c30(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101d5c60; body size 33 bytes.
#line 1 "ENTRY_101d5c60"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101d5c60(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101d5d30; body size 45 bytes.
#line 1 "ENTRY_101d5d30"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101d5d30(byte param_2)
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


// Reference entry 101d5d70; body size 32 bytes.
#line 1 "ENTRY_101d5d70"

undefined4 __thiscall Recovered_Bulk::m_FUN_101d5d70(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_101d3630();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4)(param_1);
}


// Reference entry 101d5da0; body size 32 bytes.
#line 1 "ENTRY_101d5da0"

SCProperty * __thiscall Recovered_Bulk::m_FUN_101d5da0(byte param_2)
{
  SCProperty *param_1 = (SCProperty *)this;
  ((SCProperty *)(param_1))->m_op_dtor();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x1c);
  }
  return (SCProperty *)(param_1);
}


// Reference entry 101d5dd0; body size 32 bytes.
#line 1 "ENTRY_101d5dd0"

SCPropertyBag * __thiscall Recovered_Bulk::m_FUN_101d5dd0(byte param_2)
{
  SCPropertyBag *param_1 = (SCPropertyBag *)this;
  ((SCPropertyBag *)(param_1))->m_op_dtor();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68);
  }
  return (SCPropertyBag *)(param_1);
}


// Reference entry 101d5ea0; body size 45 bytes.
#line 1 "ENTRY_101d5ea0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101d5ea0(byte param_2)
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


// Reference entry 101d6000; body size 25 bytes.
#line 1 "ENTRY_101d6000"

void __fastcall FUN_101d6000(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x10), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 101d6020; body size 25 bytes.
#line 1 "ENTRY_101d6020"

void __fastcall FUN_101d6020(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x30), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 101d6060; body size 19 bytes.
#line 1 "ENTRY_101d6060"

void __thiscall Recovered_Bulk::m_FUN_101d6060(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 101d6080; body size 19 bytes.
#line 1 "ENTRY_101d6080"

void __thiscall Recovered_Bulk::m_FUN_101d6080(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 101d6200; body size 21 bytes.
#line 1 "ENTRY_101d6200"

void __thiscall Recovered_Bulk::m_FUN_101d6200(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 101d6220; body size 21 bytes.
#line 1 "ENTRY_101d6220"

void __thiscall Recovered_Bulk::m_FUN_101d6220(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 101d6240; body size 58 bytes.
#line 1 "ENTRY_101d6240"

void __thiscall Recovered_Bulk::m_FUN_101d6240(char param_2)
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


// Reference entry 101d6440; body size 39 bytes.
#line 1 "ENTRY_101d6440"

void __thiscall Recovered_Bulk::m_FUN_101d6440(undefined4 *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  param_2 = (undefined4 *)((undefined4 *)*param_2);
  if (*(int **)(param_1 + 0x2c) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 8))(&param_2,param_3);
    return;
  }
                    
  std::_Xbad_function_call();
}


// Reference entry 101d6f20; body size 31 bytes.
#line 1 "ENTRY_101d6f20"

int * FUN_101d6f20(int *param_1)

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


// Reference entry 101d6f50; body size 31 bytes.
#line 1 "ENTRY_101d6f50"

int * FUN_101d6f50(int *param_1)

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


// Reference entry 101d6f80; body size 19 bytes.
#line 1 "ENTRY_101d6f80"

void __thiscall Recovered_Bulk::m_FUN_101d6f80(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 101d6fa0; body size 19 bytes.
#line 1 "ENTRY_101d6fa0"

void __thiscall Recovered_Bulk::m_FUN_101d6fa0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 101d7230; body size 33 bytes.
#line 1 "ENTRY_101d7230"

void __fastcall FUN_101d7230(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 101d7260; body size 33 bytes.
#line 1 "ENTRY_101d7260"

void __fastcall FUN_101d7260(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 101d7290; body size 33 bytes.
#line 1 "ENTRY_101d7290"

void __fastcall FUN_101d7290(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 101d72c0; body size 33 bytes.
#line 1 "ENTRY_101d72c0"

void __fastcall FUN_101d72c0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 101d72f0; body size 33 bytes.
#line 1 "ENTRY_101d72f0"

void __fastcall FUN_101d72f0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 101d7320; body size 33 bytes.
#line 1 "ENTRY_101d7320"

void __fastcall FUN_101d7320(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 101d7350; body size 33 bytes.
#line 1 "ENTRY_101d7350"

void __fastcall FUN_101d7350(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 101d7380; body size 25 bytes.
#line 1 "ENTRY_101d7380"

void __fastcall FUN_101d7380(undefined4 *param_1)

{
  thunk_FUN_101cdf90(param_1,*param_1);
  thunk_FUN_1148a50e(*param_1,0x10);
  return;
}


// Reference entry 101d78c0; body size 51 bytes.
#line 1 "ENTRY_101d78c0"

int __fastcall FUN_101d78c0(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (int)(SCThreadSafeInc(param_1 + 1), 0);
  if ((1 < iVar1) && (param_1[2] != 0)) {
    piVar2 = (int *)((int *)(**(code **)(*param_1 + 0xa4))(), 0);
    (**(code **)(*piVar2 + 4))();
  }
  return (int)(iVar1);
}


// Reference entry 101d7900; body size 51 bytes.
#line 1 "ENTRY_101d7900"

int __fastcall FUN_101d7900(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (int)(SCThreadSafeInc(param_1 + 1), 0);
  if ((1 < iVar1) && (param_1[2] != 0)) {
    piVar2 = (int *)((int *)(**(code **)(*param_1 + 0xa4))(), 0);
    (**(code **)(*piVar2 + 4))();
  }
  return (int)(iVar1);
}


// Reference entry 101d7950; body size 61 bytes.
#line 1 "ENTRY_101d7950"

void __thiscall Recovered_Bulk::m_FUN_101d7950(int *param_2)
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


// Reference entry 101d79a0; body size 61 bytes.
#line 1 "ENTRY_101d79a0"

void __thiscall Recovered_Bulk::m_FUN_101d79a0(int *param_2)
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


// Reference entry 101d79f0; body size 61 bytes.
#line 1 "ENTRY_101d79f0"

void __thiscall Recovered_Bulk::m_FUN_101d79f0(int *param_2)
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


// Reference entry 101d7a40; body size 61 bytes.
#line 1 "ENTRY_101d7a40"

void __thiscall Recovered_Bulk::m_FUN_101d7a40(int *param_2)
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


// Reference entry 101d7a90; body size 61 bytes.
#line 1 "ENTRY_101d7a90"

void __thiscall Recovered_Bulk::m_FUN_101d7a90(int *param_2)
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


// Reference entry 101d7ae0; body size 61 bytes.
#line 1 "ENTRY_101d7ae0"

void __thiscall Recovered_Bulk::m_FUN_101d7ae0(int *param_2)
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


// Reference entry 101d7b30; body size 61 bytes.
#line 1 "ENTRY_101d7b30"

void __thiscall Recovered_Bulk::m_FUN_101d7b30(int *param_2)
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


// Reference entry 101d7b80; body size 61 bytes.
#line 1 "ENTRY_101d7b80"

void __thiscall Recovered_Bulk::m_FUN_101d7b80(int *param_2)
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


// Reference entry 101d7bd0; body size 61 bytes.
#line 1 "ENTRY_101d7bd0"

void __thiscall Recovered_Bulk::m_FUN_101d7bd0(int *param_2)
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


// Reference entry 101d7c20; body size 61 bytes.
#line 1 "ENTRY_101d7c20"

void __thiscall Recovered_Bulk::m_FUN_101d7c20(int *param_2)
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


// Reference entry 101d7c70; body size 61 bytes.
#line 1 "ENTRY_101d7c70"

void __thiscall Recovered_Bulk::m_FUN_101d7c70(int *param_2)
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


// Reference entry 101d7cc0; body size 61 bytes.
#line 1 "ENTRY_101d7cc0"

void __thiscall Recovered_Bulk::m_FUN_101d7cc0(int *param_2)
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


// Reference entry 101d7d10; body size 61 bytes.
#line 1 "ENTRY_101d7d10"

void __thiscall Recovered_Bulk::m_FUN_101d7d10(int *param_2)
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


// Reference entry 101d7d60; body size 61 bytes.
#line 1 "ENTRY_101d7d60"

void __thiscall Recovered_Bulk::m_FUN_101d7d60(int *param_2)
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


// Reference entry 101d7db0; body size 30 bytes.
#line 1 "ENTRY_101d7db0"

void __thiscall Recovered_Bulk::m_FUN_101d7db0(int param_2)
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


// Reference entry 101d7de0; body size 30 bytes.
#line 1 "ENTRY_101d7de0"

void __thiscall Recovered_Bulk::m_FUN_101d7de0(int param_2)
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


// Reference entry 101d83f0; body size 41 bytes.
#line 1 "ENTRY_101d83f0"

void __fastcall FUN_101d83f0(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 100) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 100) + 0x1c))(), 0);
    if (cVar1 != '\0') {
      (**(code **)(**(int **)(param_1 + 100) + 0x18))();
                    
                    
      (**(code **)(*(int *)(param_1 + 0x60) + 4))();
      return;
    }
  }
  return;
}


// Reference entry 101d8490; body size 33 bytes.
#line 1 "ENTRY_101d8490"

void __fastcall FUN_101d8490(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_101cde00(param_1,*(undefined4 *)(iVar1 + 4));
  *(int*)(iVar1 + 4) = (int)(iVar1);
  *(int*)iVar1 = (int)((int)(iVar1));
  *(int*)(iVar1 + 8) = (int)(iVar1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 101d84c0; body size 32 bytes.
#line 1 "ENTRY_101d84c0"

void __fastcall FUN_101d84c0(int *param_1)

{
  thunk_FUN_101cdf90(param_1,*param_1);
  *(int *)*param_1 = (int)(*param_1);
  *(int*)(*param_1 + 4) = (int)(*param_1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 101d8b20; body size 43 bytes.
#line 1 "ENTRY_101d8b20"

int * __thiscall Recovered_Bulk::m_FUN_101d8b20(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0xfc));
  *param_2 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  return (int *)(param_2);
}


// Reference entry 101d8db0; body size 35 bytes.
#line 1 "ENTRY_101d8db0"

void __thiscall Recovered_Bulk::m_FUN_101d8db0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(*(int *)(param_1 + 8) + 0x3c), 0);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 8))(&param_2,param_3);
  }
  return;
}


// Reference entry 101d8e80; body size 43 bytes.
#line 1 "ENTRY_101d8e80"

void __fastcall FUN_101d8e80(undefined4 *param_1)

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


// Reference entry 101d8ec0; body size 43 bytes.
#line 1 "ENTRY_101d8ec0"

void __fastcall FUN_101d8ec0(undefined4 *param_1)

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


// Reference entry 101d8f00; body size 28 bytes.
#line 1 "ENTRY_101d8f00"

void __fastcall FUN_101d8f00(int *param_1)

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


// Reference entry 101d8f30; body size 28 bytes.
#line 1 "ENTRY_101d8f30"

void __fastcall FUN_101d8f30(int *param_1)

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


// Reference entry 101d96d0; body size 21 bytes.
#line 1 "ENTRY_101d96d0"

SCStr * __stdcall FUN_101d96d0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("Fetc\x14hToken");
  return (SCStr *)(param_1);
}


// Reference entry 101d96f0; body size 21 bytes.
#line 1 "ENTRY_101d96f0"

SCStr * __stdcall FUN_101d96f0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryDefault");
  return (SCStr *)(param_1);
}


// Reference entry 101d9d40; body size 21 bytes.
#line 1 "ENTRY_101d9d40"

SCStr * __stdcall FUN_101d9d40(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 101d9fb0; body size 32 bytes.
#line 1 "ENTRY_101d9fb0"

SCStr * __stdcall FUN_101d9fb0(SCStr *param_1)

{
  ((SCStr *)(param_1))->m_op_ctor((SCStr *)&DAT_121a07b0);
  *(undefined4*)(param_1 + 4) = (undefined4)(DAT_121a07b4);
  return (SCStr *)(param_1);
}


// Reference entry 101d9fe0; body size 21 bytes.
#line 1 "ENTRY_101d9fe0"

SCStr * __stdcall FUN_101d9fe0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionNoArgDescriptor");
  return (SCStr *)(param_1);
}


// Reference entry 101da020; body size 20 bytes.
#line 1 "ENTRY_101da020"

SCStr * __thiscall Recovered_Bulk::m_FUN_101da020(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0xc));
  return (SCStr *)(param_2);
}


// Reference entry 101da040; body size 20 bytes.
#line 1 "ENTRY_101da040"

SCStr * __thiscall Recovered_Bulk::m_FUN_101da040(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x14));
  return (SCStr *)(param_2);
}


// Reference entry 101dce30; body size 19 bytes.
#line 1 "ENTRY_101dce30"

int __fastcall FUN_101dce30(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 8));
  uVar2 = (uint3)((uint3)((uint)iVar1 >> 8));
  if ((iVar1 != 2) && (iVar1 != 1)) {
    return (int)((uint)uVar2 << 8);
  }
  return (int)(((uint)(uVar2) << 8 | (uint)(1)));
}


// Reference entry 101dcef0; body size 24 bytes.
#line 1 "ENTRY_101dcef0"

undefined4 __fastcall FUN_101dcef0(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 4) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 4) + 0x1c))(), 0);
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 101dcf50; body size 19 bytes.
#line 1 "ENTRY_101dcf50"

uint __fastcall FUN_101dcf50(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 8) != (int *)((0x0))) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 8) + 0x10))(), 0);
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 101dcf70; body size 17 bytes.
#line 1 "ENTRY_101dcf70"

void __stdcall FUN_101dcf70(SCStr *param_1)

{
  ((SCStr *)(param_1))->op_eq("SCIHousehold:onSettingsChanged");
  return;
}


// Reference entry 101dcf90; body size 17 bytes.
#line 1 "ENTRY_101dcf90"

void __stdcall FUN_101dcf90(SCStr *param_1)

{
  ((SCStr *)(param_1))->op_eq("SCISystemStatusManager:onUserDismissedSystemStatus");
  return;
}


// Reference entry 101dd0a0; body size 35 bytes.
#line 1 "ENTRY_101dd0a0"

void __fastcall FUN_101dd0a0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  if ((*(char *)(param_1 + 0x48) != '\0') && (*(int *)(param_1 + 0x34) == 0)) {
    thunk_FUN_101db840();
  }
  thunk_FUN_101df120();
  return;
}


// Reference entry 101de5f0; body size 24 bytes.
#line 1 "ENTRY_101de5f0"

void __fastcall FUN_101de5f0(undefined4 *param_1)

{
  undefined1 uVar1;
  
  if (*(char *)(param_1 + 1) == '\0') {
    uVar1 = (undefined1)(thunk_FUN_112a7f50(*param_1), 0);
    *(undefined1*)(param_1 + 1) = (undefined1)(uVar1);
  }
  return;
}


// Reference entry 101dfc00; body size 54 bytes.
#line 1 "ENTRY_101dfc00"

void __thiscall Recovered_Bulk::m_FUN_101dfc00(int param_2)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  if (*(char *)((int)param_1 + 0xc2) == '\0') {
    bVar1 = (bool)(((SCLibrary *)(0))->isShuttingDown(), 0);
    if (!bVar1) {
      (**(code **)(*param_1 + 0x5c))();
    }
  }
  if (param_2 != 0) {
    thunk_FUN_103d61d0(param_2,0);
  }
  return;
}


// Reference entry 101dfd50; body size 25 bytes.
#line 1 "ENTRY_101dfd50"

void __fastcall FUN_101dfd50(undefined4 *param_1)

{
  if (*(char *)(param_1 + 1) != '\0') {
    thunk_FUN_112a8010(*param_1);
    *(undefined1*)(param_1 + 1) = (undefined1)(0);
  }
  return;
}


// Reference entry 101e0b40; body size 60 bytes.
#line 1 "ENTRY_101e0b40"

int __thiscall Recovered_Bulk::m_FUN_101e0b40(SCStr *param_2)
{
  int *param_1 = (int *)this;
  bool bVar1;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_101e0b90((uint)&local_c,param_2);
  if ((*(char *)(local_4 + 0xd) == '\0') &&
     (bVar1 = (bool)(((SCStr *)(param_2))->op_lt((SCStr *)(local_4 + 0x10)), 0), !bVar1)) {
    return (int)(local_4);
  }
  return (int)(*param_1);
}


// Reference entry 101e0dc0; body size 30 bytes.
#line 1 "ENTRY_101e0dc0"

void __thiscall Recovered_Bulk::m_FUN_101e0dc0(int param_2)
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


// Reference entry 101e0df0; body size 30 bytes.
#line 1 "ENTRY_101e0df0"

void __thiscall Recovered_Bulk::m_FUN_101e0df0(int param_2)
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


// Reference entry 101e0f70; body size 41 bytes.
#line 1 "ENTRY_101e0f70"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101e0f70(int *param_2)
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


// Reference entry 101e1000; body size 24 bytes.
#line 1 "ENTRY_101e1000"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101e1000(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101e1020; body size 24 bytes.
#line 1 "ENTRY_101e1020"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101e1020(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101e1040; body size 24 bytes.
#line 1 "ENTRY_101e1040"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101e1040(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101e1060; body size 24 bytes.
#line 1 "ENTRY_101e1060"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101e1060(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101e1080; body size 24 bytes.
#line 1 "ENTRY_101e1080"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101e1080(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101e10a0; body size 24 bytes.
#line 1 "ENTRY_101e10a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101e10a0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101e1260; body size 60 bytes.
#line 1 "ENTRY_101e1260"

void __fastcall FUN_101e1260(int *param_1)

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


// Reference entry 101e12c0; body size 60 bytes.
#line 1 "ENTRY_101e12c0"

void __fastcall FUN_101e12c0(int *param_1)

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


// Reference entry 101e1320; body size 19 bytes.
#line 1 "ENTRY_101e1320"

void __fastcall FUN_101e1320(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 101e13f0; body size 19 bytes.
#line 1 "ENTRY_101e13f0"

void __fastcall FUN_101e13f0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 101e19d0; body size 25 bytes.
#line 1 "ENTRY_101e19d0"

void __fastcall FUN_101e19d0(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x1c), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 101e22f0; body size 31 bytes.
#line 1 "ENTRY_101e22f0"

int * FUN_101e22f0(int *param_1)

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


// Reference entry 101e23d0; body size 61 bytes.
#line 1 "ENTRY_101e23d0"

void __thiscall Recovered_Bulk::m_FUN_101e23d0(int *param_2)
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


// Reference entry 101e2420; body size 61 bytes.
#line 1 "ENTRY_101e2420"

void __thiscall Recovered_Bulk::m_FUN_101e2420(int *param_2)
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


// Reference entry 101e2470; body size 30 bytes.
#line 1 "ENTRY_101e2470"

void __thiscall Recovered_Bulk::m_FUN_101e2470(int param_2)
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


// Reference entry 101e24a0; body size 30 bytes.
#line 1 "ENTRY_101e24a0"

void __thiscall Recovered_Bulk::m_FUN_101e24a0(int param_2)
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


// Reference entry 101e2d10; body size 28 bytes.
#line 1 "ENTRY_101e2d10"

void __fastcall FUN_101e2d10(int *param_1)

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


// Reference entry 101e2d40; body size 28 bytes.
#line 1 "ENTRY_101e2d40"

void __fastcall FUN_101e2d40(int *param_1)

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


// Reference entry 101e3570; body size 23 bytes.
#line 1 "ENTRY_101e3570"

bool __fastcall FUN_101e3570(int param_1)

{
  bool bVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    bVar1 = (bool)(((SCStr *)((SCStr *)(param_1 + 0x10)))->op_eq("T"), 0);
    return (bool)(bVar1);
  }
  return (bool)(false);
}


// Reference entry 101e3a60; body size 22 bytes.
#line 1 "ENTRY_101e3a60"

int __fastcall FUN_101e3a60(int *param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)((float10)(**(code **)(*param_1 + 0x2c))(), 0);
  return (int)((int)fVar1);
}


// Reference entry 101e3f40; body size 44 bytes.
#line 1 "ENTRY_101e3f40"

int * __thiscall Recovered_Bulk::m_FUN_101e3f40(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  if (*(int *)(param_1 + 8) == 7) {
    piVar1 = (int *)(*(int **)(param_1 + 0x14), 0);
    *param_2 = (int)((int)piVar1);
    if ((int *)(piVar1) != (int *)(0x0)) {
      (**(code **)(*piVar1 + 4))();
    }
    return (int *)(param_2);
  }
  *param_2 = (int)(0);
  return (int *)(param_2);
}


// Reference entry 101e6b50; body size 62 bytes.
#line 1 "ENTRY_101e6b50"

int __thiscall Recovered_Bulk::m_FUN_101e6b50(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  undefined1 *puVar1;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 4));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)param_2 != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)(*(undefined1 **)param_2);
  }
  thunk_FUN_101e76a0(puVar1);
  return (int)(param_1);
}


// Reference entry 101e6c60; body size 16 bytes.
#line 1 "ENTRY_101e6c60"

undefined4 __stdcall FUN_101e6c60(undefined4 param_1)

{
  thunk_FUN_101e7240(param_1);
  return (undefined4)(param_1);
}


// Reference entry 101e6c80; body size 38 bytes.
#line 1 "ENTRY_101e6c80"

void __stdcall FUN_101e6c80(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_101e6ce0(param_1);
  thunk_FUN_101e6ce0(param_2);
  thunk_FUN_101e6ce0(param_3);
  return;
}


// Reference entry 101e6cb0; body size 27 bytes.
#line 1 "ENTRY_101e6cb0"

void __stdcall FUN_101e6cb0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_101e6ce0(param_1);
  thunk_FUN_101e6ce0(param_2);
  return;
}


// Reference entry 101e6e10; body size 20 bytes.
#line 1 "ENTRY_101e6e10"

SCStr * __thiscall Recovered_Bulk::m_FUN_101e6e10(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0xc));
  return (SCStr *)(param_2);
}


// Reference entry 101e71e0; body size 25 bytes.
#line 1 "ENTRY_101e71e0"

int * __thiscall Recovered_Bulk::m_FUN_101e71e0(int *param_2)
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


// Reference entry 101e7200; body size 23 bytes.
#line 1 "ENTRY_101e7200"

undefined4 __thiscall Recovered_Bulk::m_FUN_101e7200(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x18))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 101e7220; body size 20 bytes.
#line 1 "ENTRY_101e7220"

SCStr * __thiscall Recovered_Bulk::m_FUN_101e7220(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 8));
  return (SCStr *)(param_2);
}


// Reference entry 101e9b50; body size 59 bytes.
#line 1 "ENTRY_101e9b50"

void __thiscall Recovered_Bulk::m_FUN_101e9b50(undefined4 *param_2)
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
  thunk_FUN_101e8900(puVar1,param_2);
  return;
}


// Reference entry 101e9ba0; body size 59 bytes.
#line 1 "ENTRY_101e9ba0"

void __thiscall Recovered_Bulk::m_FUN_101e9ba0(undefined4 *param_2)
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
  thunk_FUN_101e8ca0(puVar1,param_2);
  return;
}


// Reference entry 101e9e00; body size 41 bytes.
#line 1 "ENTRY_101e9e00"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101e9e00(int *param_2)
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


// Reference entry 101e9e90; body size 41 bytes.
#line 1 "ENTRY_101e9e90"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101e9e90(int *param_2)
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


// Reference entry 101e9ed0; body size 24 bytes.
#line 1 "ENTRY_101e9ed0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101e9ed0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101e9ef0; body size 24 bytes.
#line 1 "ENTRY_101e9ef0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101e9ef0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101e9f10; body size 24 bytes.
#line 1 "ENTRY_101e9f10"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101e9f10(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101e9f30; body size 24 bytes.
#line 1 "ENTRY_101e9f30"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101e9f30(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101eabb0; body size 19 bytes.
#line 1 "ENTRY_101eabb0"

void __fastcall FUN_101eabb0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101eabd0; body size 19 bytes.
#line 1 "ENTRY_101eabd0"

void __fastcall FUN_101eabd0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101eae90; body size 60 bytes.
#line 1 "ENTRY_101eae90"

void __fastcall FUN_101eae90(int *param_1)

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


// Reference entry 101eaef0; body size 60 bytes.
#line 1 "ENTRY_101eaef0"

void __fastcall FUN_101eaef0(int *param_1)

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


// Reference entry 101eaf50; body size 60 bytes.
#line 1 "ENTRY_101eaf50"

void __fastcall FUN_101eaf50(int *param_1)

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


// Reference entry 101eafb0; body size 60 bytes.
#line 1 "ENTRY_101eafb0"

void __fastcall FUN_101eafb0(int *param_1)

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


// Reference entry 101eb0f0; body size 33 bytes.
#line 1 "ENTRY_101eb0f0"

void __fastcall FUN_101eb0f0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 101eb130; body size 17 bytes.
#line 1 "ENTRY_101eb130"

void __fastcall FUN_101eb130(undefined4 *param_1)

{
  thunk_FUN_101e8670(*param_1,param_1[1],param_1[2]);
  return;
}


// Reference entry 101eb150; body size 17 bytes.
#line 1 "ENTRY_101eb150"

void __fastcall FUN_101eb150(undefined4 *param_1)

{
  thunk_FUN_101e8710(*param_1,param_1[1],param_1[2]);
  return;
}


// Reference entry 101eb170; body size 33 bytes.
#line 1 "ENTRY_101eb170"

void __fastcall FUN_101eb170(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 101eb270; body size 25 bytes.
#line 1 "ENTRY_101eb270"

void __fastcall FUN_101eb270(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCRemoveMeSettingsMenu);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCRemoveMeSettingsMenu);
  param_1[10] = (undefined4)((uint)&ghidra_vftable_SCRemoveMeSettingsMenu);
  thunk_FUN_101eb2b0();
  return;
}


// Reference entry 101ebc60; body size 45 bytes.
#line 1 "ENTRY_101ebc60"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101ebc60(byte param_2)
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


// Reference entry 101ebca0; body size 45 bytes.
#line 1 "ENTRY_101ebca0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101ebca0(byte param_2)
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


// Reference entry 101ebe00; body size 45 bytes.
#line 1 "ENTRY_101ebe00"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101ebe00(byte param_2)
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


// Reference entry 101ebe40; body size 33 bytes.
#line 1 "ENTRY_101ebe40"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101ebe40(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101ebe70; body size 33 bytes.
#line 1 "ENTRY_101ebe70"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101ebe70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101ebea0; body size 55 bytes.
#line 1 "ENTRY_101ebea0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101ebea0(byte param_2)
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


// Reference entry 101ebef0; body size 45 bytes.
#line 1 "ENTRY_101ebef0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101ebef0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x14);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101ebf30; body size 35 bytes.
#line 1 "ENTRY_101ebf30"

undefined4 __thiscall Recovered_Bulk::m_FUN_101ebf30(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_101eb2b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x90);
  }
  return (undefined4)(param_1);
}


// Reference entry 101ebf60; body size 55 bytes.
#line 1 "ENTRY_101ebf60"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101ebf60(byte param_2)
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


// Reference entry 101ebfb0; body size 32 bytes.
#line 1 "ENTRY_101ebfb0"

undefined4 __thiscall Recovered_Bulk::m_FUN_101ebfb0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_101eb3f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x28);
  }
  return (undefined4)(param_1);
}


// Reference entry 101ec310; body size 20 bytes.
#line 1 "ENTRY_101ec310"

void __thiscall Recovered_Bulk::m_FUN_101ec310(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_101e8670(param_2,param_3,param_1);
  return;
}


// Reference entry 101ec330; body size 20 bytes.
#line 1 "ENTRY_101ec330"

void __thiscall Recovered_Bulk::m_FUN_101ec330(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_101e8710(param_2,param_3,param_1);
  return;
}


// Reference entry 101ec470; body size 33 bytes.
#line 1 "ENTRY_101ec470"

void __fastcall FUN_101ec470(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 101ec720; body size 24 bytes.
#line 1 "ENTRY_101ec720"

void __thiscall Recovered_Bulk::m_FUN_101ec720(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_101e90e0(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 101ec800; body size 61 bytes.
#line 1 "ENTRY_101ec800"

void __thiscall Recovered_Bulk::m_FUN_101ec800(int *param_2)
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


// Reference entry 101ec850; body size 61 bytes.
#line 1 "ENTRY_101ec850"

void __thiscall Recovered_Bulk::m_FUN_101ec850(int *param_2)
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


// Reference entry 101ec8a0; body size 61 bytes.
#line 1 "ENTRY_101ec8a0"

void __thiscall Recovered_Bulk::m_FUN_101ec8a0(int *param_2)
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


// Reference entry 101ec8f0; body size 61 bytes.
#line 1 "ENTRY_101ec8f0"

void __thiscall Recovered_Bulk::m_FUN_101ec8f0(int *param_2)
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


// Reference entry 101ed5b0; body size 24 bytes.
#line 1 "ENTRY_101ed5b0"

void __fastcall FUN_101ed5b0(undefined4 *param_1)

{
  thunk_FUN_101e8670(*param_1,param_1[1],param_1);
  param_1[1] = (undefined4)(*param_1);
  return;
}


// Reference entry 101ed5d0; body size 24 bytes.
#line 1 "ENTRY_101ed5d0"

void __fastcall FUN_101ed5d0(undefined4 *param_1)

{
  thunk_FUN_101e8710(*param_1,param_1[1],param_1);
  param_1[1] = (undefined4)(*param_1);
  return;
}


// Reference entry 101edd80; body size 60 bytes.
#line 1 "ENTRY_101edd80"

void __stdcall FUN_101edd80(int param_1,int param_2)

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


// Reference entry 101eddd0; body size 60 bytes.
#line 1 "ENTRY_101eddd0"

void __stdcall FUN_101eddd0(int param_1,int param_2)

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


// Reference entry 101ee060; body size 28 bytes.
#line 1 "ENTRY_101ee060"

void __fastcall FUN_101ee060(int *param_1)

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


// Reference entry 101ee2e0; body size 21 bytes.
#line 1 "ENTRY_101ee2e0"

SCStr * __stdcall FUN_101ee2e0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("RequireTokenAction");
  return (SCStr *)(param_1);
}


// Reference entry 101ee310; body size 21 bytes.
#line 1 "ENTRY_101ee310"

SCStr * __stdcall FUN_101ee310(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryDefault");
  return (SCStr *)(param_1);
}


// Reference entry 101ee340; body size 20 bytes.
#line 1 "ENTRY_101ee340"

SCStr * __thiscall Recovered_Bulk::m_FUN_101ee340(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x18));
  return (SCStr *)(param_2);
}


// Reference entry 101ee630; body size 21 bytes.
#line 1 "ENTRY_101ee630"

SCStr * __stdcall FUN_101ee630(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 101ee650; body size 21 bytes.
#line 1 "ENTRY_101ee650"

undefined4 FUN_101ee650(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_101ee670(param_1,param_2);
  return (undefined4)(param_1);
}


// Reference entry 101f0da0; body size 25 bytes.
#line 1 "ENTRY_101f0da0"

int * __thiscall Recovered_Bulk::m_FUN_101f0da0(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x7c), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 101f1110; body size 32 bytes.
#line 1 "ENTRY_101f1110"

int * __thiscall Recovered_Bulk::m_FUN_101f1110(int *param_2,int param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(*(int *)(param_1 + 0xc) + param_3 * 8), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 101f1140; body size 51 bytes.
#line 1 "ENTRY_101f1140"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101f1140(undefined4 *param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  int iVar1;
  undefined4 *unaff_EDI;
  
  iVar1 = (int)(thunk_FUN_101ee360(param_3), 0);
  if (iVar1 == -1) {
    *param_2 = (undefined4)(0);
    return (undefined4 *)(param_2);
  }
  (**(code **)(*param_1 + 0x28))(param_2,iVar1);
  return (undefined4 *)(unaff_EDI);
}


// Reference entry 101f1190; body size 32 bytes.
#line 1 "ENTRY_101f1190"

int * __thiscall Recovered_Bulk::m_FUN_101f1190(int *param_2,int param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(*(int *)(param_1 + 0x2c) + param_3 * 8), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 101f1620; body size 20 bytes.
#line 1 "ENTRY_101f1620"

SCStr * __thiscall Recovered_Bulk::m_FUN_101f1620(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x70));
  return (SCStr *)(param_2);
}


// Reference entry 101f1660; body size 20 bytes.
#line 1 "ENTRY_101f1660"

SCStr * __thiscall Recovered_Bulk::m_FUN_101f1660(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x1c));
  return (SCStr *)(param_2);
}


// Reference entry 101f1680; body size 20 bytes.
#line 1 "ENTRY_101f1680"

undefined4 __thiscall Recovered_Bulk::m_FUN_101f1680(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_101e6610(param_1 + 0x4c);
  return (undefined4)(param_2);
}


// Reference entry 101f1c60; body size 47 bytes.
#line 1 "ENTRY_101f1c60"

void __fastcall FUN_101f1c60(int param_1)

{
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  if (*(char *)(param_1 + 0x89) == '\0') {
    uStack_c = (undefined4)(0);
    *(undefined1*)(param_1 + 0x89) = (undefined1)(1);
    iStack_14 = (int)(param_1);
    iStack_10 = (int)(param_1);
    ((SCStr *)((SCStr *)&iStack_14))->int_allocRep("SCISettingsMenu:onValidChanged");
    thunk_FUN_103d65f0();
  }
  return;
}


// Reference entry 101f1e90; body size 27 bytes.
#line 1 "ENTRY_101f1e90"

void __fastcall FUN_101f1e90(int param_1)

{
  if (*(int *)(param_1 + -0x18) != 0) {
    (**(code **)(*(int *)(param_1 + -0x28) + 0x5c))();
    thunk_FUN_101f3880();
    return;
  }
  return;
}


// Reference entry 101f1ed0; body size 27 bytes.
#line 1 "ENTRY_101f1ed0"

void __fastcall FUN_101f1ed0(int param_1)

{
  if (*(int *)(param_1 + -0x18) != 0) {
    (**(code **)(*(int *)(param_1 + -0x28) + 0x58))();
    thunk_FUN_101f3880();
    return;
  }
  return;
}


// Reference entry 101f2090; body size 59 bytes.
#line 1 "ENTRY_101f2090"

void __thiscall Recovered_Bulk::m_FUN_101f2090(undefined4 *param_2)
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
  thunk_FUN_101e8900(puVar1,param_2);
  return;
}


// Reference entry 101f20e0; body size 59 bytes.
#line 1 "ENTRY_101f20e0"

void __thiscall Recovered_Bulk::m_FUN_101f20e0(undefined4 *param_2)
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
  thunk_FUN_101e8ca0(puVar1,param_2);
  return;
}


// Reference entry 101f2c10; body size 29 bytes.
#line 1 "ENTRY_101f2c10"

void __stdcall FUN_101f2c10(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_101ee360(param_1), 0);
  if (iVar1 != -1) {
    thunk_FUN_101f2ac0(iVar1);
  }
  return;
}


// Reference entry 101f2ea0; body size 42 bytes.
#line 1 "ENTRY_101f2ea0"

void __thiscall Recovered_Bulk::m_FUN_101f2ea0(undefined1 param_2)
{
  int param_1 = (int )this;
  int aiStack_10 [3];
  
  aiStack_10[2] = (int)(0);
  aiStack_10[1] = (int)(0);
  *(undefined1*)(param_1 + 0x8a) = (undefined1)(param_2);
  aiStack_10[0] = (int)(param_1);
  ((SCStr *)((SCStr *)(uint)&aiStack_10))->int_allocRep("SCISettingsMenu:onCanSaveChanged");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 101f3600; body size 39 bytes.
#line 1 "ENTRY_101f3600"

int __fastcall FUN_101f3600(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = (int)(0);
  puVar2 = (undefined4 *)(*(undefined4 **)(param_1 + 0x2c), 0);
  if ((undefined4 *)(puVar2) != *(undefined4 **)(param_1 + 0x30)) {
    do {
      iVar1 = (int)((**(code **)(*(int *)*puVar2 + 0x18))(), 0);
      puVar2 = (undefined4 *)(puVar2 + 2);
      iVar3 = (int)(iVar3 + iVar1);
    } while ((undefined4 *)(puVar2) != *(undefined4 **)(param_1 + 0x30));
  }
  return (int)(iVar3);
}


// Reference entry 101f4100; body size 56 bytes.
#line 1 "ENTRY_101f4100"

void __thiscall Recovered_Bulk::m_FUN_101f4100(undefined4 param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  thunk_FUN_101f4150(param_2,*(undefined4 *)(*param_1 + 4));
  iVar1 = (int)(*(int *)(*param_1 + -4));
  if (0x1f < (*param_1 - iVar1) - 4U) {
                    
    _invalid_parameter_noinfo_noreturn();
  }
  thunk_FUN_1148a50e(iVar1,0x104f);
  return;
}


// Reference entry 101f4350; body size 30 bytes.
#line 1 "ENTRY_101f4350"

void __thiscall Recovered_Bulk::m_FUN_101f4350(int param_2)
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


// Reference entry 101f44c0; body size 32 bytes.
#line 1 "ENTRY_101f44c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101f44c0(undefined4 *param_2)
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


// Reference entry 101f4540; body size 41 bytes.
#line 1 "ENTRY_101f4540"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101f4540(int *param_2)
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


// Reference entry 101f45a0; body size 41 bytes.
#line 1 "ENTRY_101f45a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101f45a0(int *param_2)
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


// Reference entry 101f4750; body size 19 bytes.
#line 1 "ENTRY_101f4750"

void __fastcall FUN_101f4750(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101f4840; body size 51 bytes.
#line 1 "ENTRY_101f4840"

void __fastcall FUN_101f4840(int *param_1)

{
  int iVar1;
  
  thunk_FUN_101f4150(param_1,*(undefined4 *)(*param_1 + 4));
  iVar1 = (int)(*(int *)(*param_1 + -4));
  if (0x1f < (*param_1 - iVar1) - 4U) {
                    
    _invalid_parameter_noinfo_noreturn();
  }
  thunk_FUN_1148a50e(iVar1,0x104f);
  return;
}


// Reference entry 101f4880; body size 51 bytes.
#line 1 "ENTRY_101f4880"

void __fastcall FUN_101f4880(int *param_1)

{
  int iVar1;
  
  thunk_FUN_101f4150(param_1,*(undefined4 *)(*param_1 + 4));
  iVar1 = (int)(*(int *)(*param_1 + -4));
  if (0x1f < (*param_1 - iVar1) - 4U) {
                    
    _invalid_parameter_noinfo_noreturn();
  }
  thunk_FUN_1148a50e(iVar1,0x104f);
  return;
}


// Reference entry 101f5020; body size 45 bytes.
#line 1 "ENTRY_101f5020"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101f5020(byte param_2)
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


// Reference entry 101f5270; body size 33 bytes.
#line 1 "ENTRY_101f5270"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101f5270(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101f53a0; body size 31 bytes.
#line 1 "ENTRY_101f53a0"

int * FUN_101f53a0(int *param_1)

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


// Reference entry 101f54e0; body size 61 bytes.
#line 1 "ENTRY_101f54e0"

void __thiscall Recovered_Bulk::m_FUN_101f54e0(int *param_2)
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


// Reference entry 101f5530; body size 30 bytes.
#line 1 "ENTRY_101f5530"

void __thiscall Recovered_Bulk::m_FUN_101f5530(int param_2)
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


// Reference entry 101f5560; body size 21 bytes.
#line 1 "ENTRY_101f5560"

void FUN_101f5560(void)

{
  thunk_FUN_10309e90(&DAT_11884fe8,"background",0);
  return;
}


// Reference entry 101f55f0; body size 60 bytes.
#line 1 "ENTRY_101f55f0"

void __stdcall FUN_101f55f0(int param_1,int param_2)

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


// Reference entry 101f6430; body size 21 bytes.
#line 1 "ENTRY_101f6430"

void FUN_101f6430(void)

{
  thunk_FUN_10309e90(&DAT_11884fe8,"foreground",0);
  return;
}


// Reference entry 101f64f0; body size 20 bytes.
#line 1 "ENTRY_101f64f0"

SCStr * __thiscall Recovered_Bulk::m_FUN_101f64f0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x14));
  return (SCStr *)(param_2);
}


// Reference entry 101f6510; body size 20 bytes.
#line 1 "ENTRY_101f6510"

SCStr * __thiscall Recovered_Bulk::m_FUN_101f6510(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x18));
  return (SCStr *)(param_2);
}


// Reference entry 101f8ff0; body size 36 bytes.
#line 1 "ENTRY_101f8ff0"

void __thiscall Recovered_Bulk::m_FUN_101f8ff0(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 0x14));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 101f9020; body size 36 bytes.
#line 1 "ENTRY_101f9020"

void __thiscall Recovered_Bulk::m_FUN_101f9020(SCStr *param_2)
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


// Reference entry 101f9200; body size 19 bytes.
#line 1 "ENTRY_101f9200"

void __stdcall FUN_101f9200(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1030c120(param_1,param_2);
  return;
}


// Reference entry 101f9490; body size 18 bytes.
#line 1 "ENTRY_101f9490"

void __thiscall Recovered_Bulk::m_FUN_101f9490(undefined4 param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  (**(code **)(*param_1 + 0x30))(param_2,param_3,0);
  return;
}


// Reference entry 101f9fd0; body size 41 bytes.
#line 1 "ENTRY_101f9fd0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101f9fd0(int *param_2)
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


// Reference entry 101fa010; body size 41 bytes.
#line 1 "ENTRY_101fa010"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101fa010(int *param_2)
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


// Reference entry 101fa050; body size 24 bytes.
#line 1 "ENTRY_101fa050"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101fa050(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101fa510; body size 19 bytes.
#line 1 "ENTRY_101fa510"

void __fastcall FUN_101fa510(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101fa610; body size 60 bytes.
#line 1 "ENTRY_101fa610"

void __fastcall FUN_101fa610(int *param_1)

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


// Reference entry 101fa670; body size 60 bytes.
#line 1 "ENTRY_101fa670"

void __fastcall FUN_101fa670(int *param_1)

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


// Reference entry 101fa6d0; body size 33 bytes.
#line 1 "ENTRY_101fa6d0"

void __fastcall FUN_101fa6d0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 101fa700; body size 33 bytes.
#line 1 "ENTRY_101fa700"

void __fastcall FUN_101fa700(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 101fa760; body size 33 bytes.
#line 1 "ENTRY_101fa760"

void __fastcall FUN_101fa760(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 101fa790; body size 33 bytes.
#line 1 "ENTRY_101fa790"

void __fastcall FUN_101fa790(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 101fa850; body size 18 bytes.
#line 1 "ENTRY_101fa850"

void __fastcall FUN_101fa850(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0x30);
  }
  return;
}


// Reference entry 101faaa0; body size 45 bytes.
#line 1 "ENTRY_101faaa0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101faaa0(byte param_2)
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


// Reference entry 101faae0; body size 60 bytes.
#line 1 "ENTRY_101faae0"

int __thiscall Recovered_Bulk::m_FUN_101faae0(byte param_2)
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


// Reference entry 101fab30; body size 45 bytes.
#line 1 "ENTRY_101fab30"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101fab30(byte param_2)
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


// Reference entry 101fabf0; body size 33 bytes.
#line 1 "ENTRY_101fabf0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101fabf0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101faec0; body size 58 bytes.
#line 1 "ENTRY_101faec0"

void __thiscall Recovered_Bulk::m_FUN_101faec0(char param_2)
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


// Reference entry 101faf10; body size 39 bytes.
#line 1 "ENTRY_101faf10"

void __thiscall Recovered_Bulk::m_FUN_101faf10(undefined4 *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  param_2 = (undefined4 *)((undefined4 *)*param_2);
  if (*(int **)(param_1 + 0x2c) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 8))(&param_2,param_3);
    return;
  }
                    
  std::_Xbad_function_call();
}


// Reference entry 101fb0a0; body size 33 bytes.
#line 1 "ENTRY_101fb0a0"

void __fastcall FUN_101fb0a0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 101fb0d0; body size 33 bytes.
#line 1 "ENTRY_101fb0d0"

void __fastcall FUN_101fb0d0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 101fb370; body size 35 bytes.
#line 1 "ENTRY_101fb370"

void __thiscall Recovered_Bulk::m_FUN_101fb370(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(*(int *)(param_1 + 8) + 0x3c), 0);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 8))(&param_2,param_3);
  }
  return;
}


// Reference entry 101fb3a0; body size 21 bytes.
#line 1 "ENTRY_101fb3a0"

SCStr * __stdcall FUN_101fb3a0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCAppSessionManager");
  return (SCStr *)(param_1);
}


// Reference entry 101fb5a0; body size 28 bytes.
#line 1 "ENTRY_101fb5a0"

SCStr * __stdcall FUN_101fb5a0(SCStr *param_1)

{
  SCLibrary *pSVar1;
  
  pSVar1 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton(), 0);
  ((SCStr *)(param_1))->m_op_ctor((SCStr *)(*(int *)(pSVar1 + 0x4c) + 0x20));
  return (SCStr *)(param_1);
}


// Reference entry 101fc380; body size 22 bytes.
#line 1 "ENTRY_101fc380"

void __stdcall FUN_101fc380(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_103d61d0(param_1,0);
  }
  return;
}


// Reference entry 101fc3a0; body size 23 bytes.
#line 1 "ENTRY_101fc3a0"

void __stdcall FUN_101fc3a0(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_103d6930();
    return;
  }
  return;
}


// Reference entry 101fdb20; body size 33 bytes.
#line 1 "ENTRY_101fdb20"

void __thiscall Recovered_Bulk::m_FUN_101fdb20(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_101fdb50(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 101fdc40; body size 60 bytes.
#line 1 "ENTRY_101fdc40"

int __thiscall Recovered_Bulk::m_FUN_101fdc40(undefined4 param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_101fdc90((uint)&local_c,param_2);
  if ((*(char *)(local_4 + 0xd) == '\0') &&
     (cVar1 = (char)(thunk_FUN_111a0940(local_4 + 0x10), 0), cVar1 == '\0')) {
    return (int)(local_4);
  }
  return (int)(*param_1);
}


// Reference entry 101fe110; body size 30 bytes.
#line 1 "ENTRY_101fe110"

void __thiscall Recovered_Bulk::m_FUN_101fe110(int param_2)
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


// Reference entry 101fe140; body size 30 bytes.
#line 1 "ENTRY_101fe140"

void __thiscall Recovered_Bulk::m_FUN_101fe140(int param_2)
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


// Reference entry 101fe820; body size 32 bytes.
#line 1 "ENTRY_101fe820"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101fe820(undefined4 *param_2)
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


// Reference entry 101fe850; body size 41 bytes.
#line 1 "ENTRY_101fe850"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101fe850(int *param_2)
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


// Reference entry 101fe8f0; body size 41 bytes.
#line 1 "ENTRY_101fe8f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101fe8f0(int *param_2)
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


// Reference entry 101fe930; body size 41 bytes.
#line 1 "ENTRY_101fe930"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101fe930(int *param_2)
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


// Reference entry 101fe970; body size 41 bytes.
#line 1 "ENTRY_101fe970"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101fe970(int *param_2)
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


// Reference entry 101fe9b0; body size 41 bytes.
#line 1 "ENTRY_101fe9b0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101fe9b0(int *param_2)
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


// Reference entry 101fe9f0; body size 41 bytes.
#line 1 "ENTRY_101fe9f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101fe9f0(int *param_2)
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


// Reference entry 101fea50; body size 41 bytes.
#line 1 "ENTRY_101fea50"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101fea50(int *param_2)
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


// Reference entry 101fead0; body size 41 bytes.
#line 1 "ENTRY_101fead0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101fead0(int *param_2)
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


// Reference entry 101feb30; body size 41 bytes.
#line 1 "ENTRY_101feb30"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101feb30(int *param_2)
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


// Reference entry 101feb70; body size 41 bytes.
#line 1 "ENTRY_101feb70"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101feb70(int *param_2)
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


// Reference entry 101febb0; body size 41 bytes.
#line 1 "ENTRY_101febb0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101febb0(int *param_2)
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


// Reference entry 101fec10; body size 41 bytes.
#line 1 "ENTRY_101fec10"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101fec10(int *param_2)
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


// Reference entry 101fec50; body size 41 bytes.
#line 1 "ENTRY_101fec50"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101fec50(int *param_2)
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


// Reference entry 101fec90; body size 41 bytes.
#line 1 "ENTRY_101fec90"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101fec90(int *param_2)
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


// Reference entry 101fecd0; body size 41 bytes.
#line 1 "ENTRY_101fecd0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101fecd0(int *param_2)
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


// Reference entry 101fed10; body size 41 bytes.
#line 1 "ENTRY_101fed10"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101fed10(int *param_2)
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


// Reference entry 101fed50; body size 41 bytes.
#line 1 "ENTRY_101fed50"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101fed50(int *param_2)
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


// Reference entry 101fedb0; body size 41 bytes.
#line 1 "ENTRY_101fedb0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101fedb0(int *param_2)
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


// Reference entry 101fee30; body size 24 bytes.
#line 1 "ENTRY_101fee30"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101fee30(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101fee50; body size 24 bytes.
#line 1 "ENTRY_101fee50"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101fee50(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101fee70; body size 24 bytes.
#line 1 "ENTRY_101fee70"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101fee70(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101fee90; body size 24 bytes.
#line 1 "ENTRY_101fee90"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101fee90(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101fef30; body size 48 bytes.
#line 1 "ENTRY_101fef30"

undefined4 * __fastcall FUN_101fef30(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 10201940; body size 19 bytes.
#line 1 "ENTRY_10201940"

void __fastcall FUN_10201940(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10202680; body size 60 bytes.
#line 1 "ENTRY_10202680"

void __fastcall FUN_10202680(int *param_1)

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


// Reference entry 102026e0; body size 60 bytes.
#line 1 "ENTRY_102026e0"

void __fastcall FUN_102026e0(int *param_1)

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


// Reference entry 10202740; body size 60 bytes.
#line 1 "ENTRY_10202740"

void __fastcall FUN_10202740(int *param_1)

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


// Reference entry 102027a0; body size 60 bytes.
#line 1 "ENTRY_102027a0"

void __fastcall FUN_102027a0(int *param_1)

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


// Reference entry 10202800; body size 60 bytes.
#line 1 "ENTRY_10202800"

void __fastcall FUN_10202800(int *param_1)

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


// Reference entry 10202860; body size 60 bytes.
#line 1 "ENTRY_10202860"

void __fastcall FUN_10202860(int *param_1)

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


// Reference entry 102028c0; body size 60 bytes.
#line 1 "ENTRY_102028c0"

void __fastcall FUN_102028c0(int *param_1)

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


// Reference entry 10202920; body size 60 bytes.
#line 1 "ENTRY_10202920"

void __fastcall FUN_10202920(int *param_1)

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


// Reference entry 10202980; body size 60 bytes.
#line 1 "ENTRY_10202980"

void __fastcall FUN_10202980(int *param_1)

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


// Reference entry 102029e0; body size 60 bytes.
#line 1 "ENTRY_102029e0"

void __fastcall FUN_102029e0(int *param_1)

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


// Reference entry 10202a40; body size 19 bytes.
#line 1 "ENTRY_10202a40"

void __fastcall FUN_10202a40(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 10202a70; body size 28 bytes.
#line 1 "ENTRY_10202a70"

void __fastcall FUN_10202a70(int *param_1)

{
  thunk_FUN_101fdb50(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 10202b60; body size 19 bytes.
#line 1 "ENTRY_10202b60"

void __fastcall FUN_10202b60(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 10202b80; body size 17 bytes.
#line 1 "ENTRY_10202b80"

void __fastcall FUN_10202b80(undefined4 *param_1)

{
  thunk_FUN_101fda20(*param_1,param_1[1],param_1[2]);
  return;
}


// Reference entry 10202ba0; body size 28 bytes.
#line 1 "ENTRY_10202ba0"

void __fastcall FUN_10202ba0(int *param_1)

{
  thunk_FUN_101fdb50(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 10203510; body size 19 bytes.
#line 1 "ENTRY_10203510"

void __fastcall FUN_10203510(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 102036a0; body size 22 bytes.
#line 1 "ENTRY_102036a0"

void FUN_102036a0(void)

{
  thunk_FUN_110a9ef0();
  thunk_FUN_102036c0();
  return;
}


// Reference entry 10205510; body size 38 bytes.
#line 1 "ENTRY_10205510"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10205510(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10205540; body size 38 bytes.
#line 1 "ENTRY_10205540"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10205540(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10205570; body size 38 bytes.
#line 1 "ENTRY_10205570"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10205570(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 102055a0; body size 45 bytes.
#line 1 "ENTRY_102055a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102055a0(byte param_2)
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


// Reference entry 102055e0; body size 45 bytes.
#line 1 "ENTRY_102055e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102055e0(byte param_2)
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


// Reference entry 10205620; body size 45 bytes.
#line 1 "ENTRY_10205620"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10205620(byte param_2)
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


// Reference entry 10205720; body size 32 bytes.
#line 1 "ENTRY_10205720"

undefined4 __thiscall Recovered_Bulk::m_FUN_10205720(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_110a9ef0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4)(param_1);
}


// Reference entry 10205750; body size 33 bytes.
#line 1 "ENTRY_10205750"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10205750(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RAsyncBrowseErrorHandler);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10205780; body size 33 bytes.
#line 1 "ENTRY_10205780"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10205780(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RBrowseNodeObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10205880; body size 58 bytes.
#line 1 "ENTRY_10205880"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10205880(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpCDGetAllPrefixLocationsAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpCDGetAllPrefixLocationsAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpCDGetAllPrefixLocationsAIOOp);
  thunk_FUN_111c0af0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xdbd8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 102058d0; body size 45 bytes.
#line 1 "ENTRY_102058d0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102058d0(byte param_2)
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


// Reference entry 10205a70; body size 45 bytes.
#line 1 "ENTRY_10205a70"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10205a70(byte param_2)
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


// Reference entry 10205ab0; body size 48 bytes.
#line 1 "ENTRY_10205ab0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10205ab0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_110a9ef0();
  thunk_FUN_102036c0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x108);
  }
  return (undefined4)(param_1);
}


// Reference entry 10205af0; body size 35 bytes.
#line 1 "ENTRY_10205af0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10205af0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_102036c0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x100);
  }
  return (undefined4)(param_1);
}


// Reference entry 10205b20; body size 35 bytes.
#line 1 "ENTRY_10205b20"

undefined4 __thiscall Recovered_Bulk::m_FUN_10205b20(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_102037c0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x280);
  }
  return (undefined4)(param_1);
}


// Reference entry 10205b50; body size 35 bytes.
#line 1 "ENTRY_10205b50"

undefined4 __thiscall Recovered_Bulk::m_FUN_10205b50(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10203970();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x250);
  }
  return (undefined4)(param_1);
}


// Reference entry 10205c00; body size 35 bytes.
#line 1 "ENTRY_10205c00"

undefined4 __thiscall Recovered_Bulk::m_FUN_10205c00(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10203dc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x118);
  }
  return (undefined4)(param_1);
}


// Reference entry 10205cd0; body size 45 bytes.
#line 1 "ENTRY_10205cd0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10205cd0(byte param_2)
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


// Reference entry 10205fd0; body size 33 bytes.
#line 1 "ENTRY_10205fd0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10205fd0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10206000; body size 33 bytes.
#line 1 "ENTRY_10206000"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10206000(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10206030; body size 33 bytes.
#line 1 "ENTRY_10206030"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10206030(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10206060; body size 33 bytes.
#line 1 "ENTRY_10206060"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10206060(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10206090; body size 33 bytes.
#line 1 "ENTRY_10206090"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10206090(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 102060c0; body size 33 bytes.
#line 1 "ENTRY_102060c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102060c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 102060f0; body size 33 bytes.
#line 1 "ENTRY_102060f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102060f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10206120; body size 33 bytes.
#line 1 "ENTRY_10206120"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10206120(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10206150; body size 33 bytes.
#line 1 "ENTRY_10206150"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10206150(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 102066f0; body size 45 bytes.
#line 1 "ENTRY_102066f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102066f0(byte param_2)
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


// Reference entry 10206730; body size 33 bytes.
#line 1 "ENTRY_10206730"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10206730(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwfObjBCListener);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10206760; body size 33 bytes.
#line 1 "ENTRY_10206760"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10206760(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwfObjHHListener);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10206bc0; body size 25 bytes.
#line 1 "ENTRY_10206bc0"

void __fastcall FUN_10206bc0(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x18), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 10206d80; body size 20 bytes.
#line 1 "ENTRY_10206d80"

void __thiscall Recovered_Bulk::m_FUN_10206d80(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_101fda20(param_2,param_3,param_1);
  return;
}


// Reference entry 102072c0; body size 35 bytes.
#line 1 "ENTRY_102072c0"

undefined4 __fastcall FUN_102072c0(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)((**(code **)(*param_1 + 0x54))(), 0);
  if (iVar1 == 1) {
    iVar1 = (int)((**(code **)(*param_1 + 0x5c))(), 0);
    return (undefined4)(*(undefined4 *)(iVar1 + 0x1e8));
  }
  return (undefined4)(0xff);
}


// Reference entry 10207310; body size 32 bytes.
#line 1 "ENTRY_10207310"

void __thiscall Recovered_Bulk::m_FUN_10207310(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  if ((int *)(param_2) != (int *)(0x0)) {
    *(undefined1*)(param_1 + 0x274) = (undefined1)(1);
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0x24))(), 0);
    (**(code **)(*piVar1 + 0x30))();
  }
  return;
}


// Reference entry 10207470; body size 61 bytes.
#line 1 "ENTRY_10207470"

void __thiscall Recovered_Bulk::m_FUN_10207470(int *param_2)
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


// Reference entry 102074c0; body size 61 bytes.
#line 1 "ENTRY_102074c0"

void __thiscall Recovered_Bulk::m_FUN_102074c0(int *param_2)
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


// Reference entry 10207510; body size 61 bytes.
#line 1 "ENTRY_10207510"

void __thiscall Recovered_Bulk::m_FUN_10207510(int *param_2)
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


// Reference entry 10207560; body size 61 bytes.
#line 1 "ENTRY_10207560"

void __thiscall Recovered_Bulk::m_FUN_10207560(int *param_2)
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


// Reference entry 102075b0; body size 61 bytes.
#line 1 "ENTRY_102075b0"

void __thiscall Recovered_Bulk::m_FUN_102075b0(int *param_2)
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


// Reference entry 10207600; body size 61 bytes.
#line 1 "ENTRY_10207600"

void __thiscall Recovered_Bulk::m_FUN_10207600(int *param_2)
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


// Reference entry 10207650; body size 61 bytes.
#line 1 "ENTRY_10207650"

void __thiscall Recovered_Bulk::m_FUN_10207650(int *param_2)
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


// Reference entry 102076a0; body size 61 bytes.
#line 1 "ENTRY_102076a0"

void __thiscall Recovered_Bulk::m_FUN_102076a0(int *param_2)
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


// Reference entry 102076f0; body size 61 bytes.
#line 1 "ENTRY_102076f0"

void __thiscall Recovered_Bulk::m_FUN_102076f0(int *param_2)
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


// Reference entry 10207740; body size 61 bytes.
#line 1 "ENTRY_10207740"

void __thiscall Recovered_Bulk::m_FUN_10207740(int *param_2)
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


// Reference entry 10207790; body size 61 bytes.
#line 1 "ENTRY_10207790"

void __thiscall Recovered_Bulk::m_FUN_10207790(int *param_2)
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


// Reference entry 102077e0; body size 61 bytes.
#line 1 "ENTRY_102077e0"

void __thiscall Recovered_Bulk::m_FUN_102077e0(int *param_2)
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


// Reference entry 10207830; body size 61 bytes.
#line 1 "ENTRY_10207830"

void __thiscall Recovered_Bulk::m_FUN_10207830(int *param_2)
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


// Reference entry 10207880; body size 61 bytes.
#line 1 "ENTRY_10207880"

void __thiscall Recovered_Bulk::m_FUN_10207880(int *param_2)
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


// Reference entry 102078d0; body size 61 bytes.
#line 1 "ENTRY_102078d0"

void __thiscall Recovered_Bulk::m_FUN_102078d0(int *param_2)
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


// Reference entry 10207920; body size 61 bytes.
#line 1 "ENTRY_10207920"

void __thiscall Recovered_Bulk::m_FUN_10207920(int *param_2)
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


// Reference entry 10207970; body size 61 bytes.
#line 1 "ENTRY_10207970"

void __thiscall Recovered_Bulk::m_FUN_10207970(int *param_2)
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


// Reference entry 102079c0; body size 61 bytes.
#line 1 "ENTRY_102079c0"

void __thiscall Recovered_Bulk::m_FUN_102079c0(int *param_2)
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


// Reference entry 10207a10; body size 30 bytes.
#line 1 "ENTRY_10207a10"

void __thiscall Recovered_Bulk::m_FUN_10207a10(int param_2)
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


// Reference entry 10207a40; body size 30 bytes.
#line 1 "ENTRY_10207a40"

void __thiscall Recovered_Bulk::m_FUN_10207a40(int param_2)
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


// Reference entry 10207b90; body size 55 bytes.
#line 1 "ENTRY_10207b90"

undefined4 FUN_10207b90(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(7);
  if (param_1 != 0) {
    switch(*(undefined4 *)(param_1 + 4)) {
    case 1:
      return (undefined4)(0);
    case 2:
      return (undefined4)(1);
    case 3:
      return (undefined4)(2);
    case 4:
      return (undefined4)(3);
    case 5:
    case 6:
    case 7:
    case 8:
      uVar1 = (undefined4)(4);
    }
  }
  return (undefined4)(uVar1);
}


// Reference entry 10207c10; body size 48 bytes.
#line 1 "ENTRY_10207c10"

undefined4 FUN_10207c10(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(7);
  switch(param_1) {
  case 1:
    return (undefined4)(0);
  case 2:
    return (undefined4)(1);
  case 3:
    return (undefined4)(2);
  case 4:
    return (undefined4)(3);
  case 5:
  case 6:
  case 7:
  case 8:
    uVar1 = (undefined4)(4);
  }
  return (undefined4)(uVar1);
}


// Reference entry 10207fd0; body size 25 bytes.
#line 1 "ENTRY_10207fd0"

void __thiscall Recovered_Bulk::m_FUN_10207fd0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4)
{
  int param_1 = (int )this;
  undefined4 in_stack_00000014;
  
  (**(code **)(*(int *)(param_1 + -0x118) + 0xe4))(in_stack_00000014);
  return;
}


// Reference entry 10208000; body size 16 bytes.
#line 1 "ENTRY_10208000"

void __thiscall Recovered_Bulk::m_FUN_10208000(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4, unsigned int recovered_unused_stack_5)
{
  int *param_1 = (int *)this;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  
  (**(code **)(*param_1 + 8))(in_stack_00000014,in_stack_00000018);
  return;
}


// Reference entry 10208020; body size 34 bytes.
#line 1 "ENTRY_10208020"

void __thiscall Recovered_Bulk::m_FUN_10208020(undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)
{
  int *param_1 = (int *)this;
  (**(code **)(*param_1 + 0xc))(*param_2,param_3,param_4,param_5,param_7,param_8);
  return;
}


// Reference entry 102088d0; body size 18 bytes.
#line 1 "ENTRY_102088d0"

int __fastcall FUN_102088d0(int param_1)

{
  char *pcVar1;
  uint3 uVar2;
  
  pcVar1 = (char *)(*(char **)(param_1 + 0x74), 0);
  uVar2 = (uint3)((uint3)((uint)pcVar1 >> 8));
  if (((char *)(pcVar1) != (char *)(0x0)) && (*pcVar1 != (char)(('\0')))) {
    return (int)(((uint)(uVar2) << 8 | (uint)(1)));
  }
  return (int)((uint)uVar2 << 8);
}


// Reference entry 10208c50; body size 20 bytes.
#line 1 "ENTRY_10208c50"

bool __fastcall FUN_10208c50(int param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(*(int *)(param_1 + -0x3c) + 0xdc))(), 0);
  return (bool)(cVar1 == '\0');
}


// Reference entry 10208c80; body size 30 bytes.
#line 1 "ENTRY_10208c80"

void __fastcall FUN_10208c80(int param_1)

{
  if (((&DAT_122f5650)[*(int *)(param_1 + 0x58)] != 0) && (*(int *)(param_1 + 0xc) != 0)) {
    thunk_FUN_11240cc0(*(int *)(param_1 + 0xc));
  }
  return;
}


// Reference entry 10208df0; body size 61 bytes.
#line 1 "ENTRY_10208df0"

undefined4 FUN_10208df0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined1 local_c [12];
  
  iVar2 = (int)(thunk_FUN_101fdc90((uint)&local_c,param_1), 0);
  if (*(char *)(*(int *)(iVar2 + 8) + 0xd) == '\0') {
    cVar1 = (char)(thunk_FUN_111a0940(*(int *)(iVar2 + 8) + 0x10), 0);
    if (cVar1 == '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 1020a070; body size 60 bytes.
#line 1 "ENTRY_1020a070"

void __stdcall FUN_1020a070(int param_1,int param_2)

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


// Reference entry 1020a260; body size 55 bytes.
#line 1 "ENTRY_1020a260"

void __thiscall Recovered_Bulk::m_FUN_1020a260(undefined4 param_2,SCStr *param_3)
{
  int param_1 = (int )this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->beginsWith("SCIBrowseItem"), 0);
  if (bVar1) {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIBrowseItem:onItemChanged"), 0);
    if (bVar1) {
      (**(code **)(**(int **)(param_1 + 8) + 4))(param_2);
    }
  }
  return;
}


// Reference entry 1020a2b0; body size 55 bytes.
#line 1 "ENTRY_1020a2b0"

void __thiscall Recovered_Bulk::m_FUN_1020a2b0(undefined4 param_2,SCStr *param_3)
{
  int param_1 = (int )this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->beginsWith("SCIShareManager"), 0);
  if (bVar1) {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIShareManager:onSharesChanged"), 0);
    if (bVar1) {
      (**(code **)(**(int **)(param_1 + 8) + 4))(param_2);
    }
  }
  return;
}


// Reference entry 1020a300; body size 36 bytes.
#line 1 "ENTRY_1020a300"

/* WARNING: Removing unreachable block (ram,0x1020a316) */

int __fastcall FUN_1020a300(int param_1)

{
  if ((*(char **)(param_1 + 0x2c) != (char *)((0x0))) && (**(char **)(param_1 + 0x2c) != '\0')) {
    return (int)(param_1 + 0x2c);
  }
  return (int)(param_1);
}


// Reference entry 1020a330; body size 21 bytes.
#line 1 "ENTRY_1020a330"

SCStr * __stdcall FUN_1020a330(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCCompoundAction");
  return (SCStr *)(param_1);
}


// Reference entry 1020a350; body size 21 bytes.
#line 1 "ENTRY_1020a350"

SCStr * __stdcall FUN_1020a350(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCInnerActionFactory");
  return (SCStr *)(param_1);
}


// Reference entry 1020a380; body size 43 bytes.
#line 1 "ENTRY_1020a380"

void __fastcall FUN_1020a380(undefined4 *param_1)

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


// Reference entry 1020a3c0; body size 43 bytes.
#line 1 "ENTRY_1020a3c0"

void __fastcall FUN_1020a3c0(undefined4 *param_1)

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


// Reference entry 1020a400; body size 28 bytes.
#line 1 "ENTRY_1020a400"

void __fastcall FUN_1020a400(int *param_1)

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


// Reference entry 1020a550; body size 36 bytes.
#line 1 "ENTRY_1020a550"

void __thiscall Recovered_Bulk::m_FUN_1020a550(undefined4 param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  
  cVar1 = (char)((**(code **)(*param_1 + 0xfc))(), 0);
  if (cVar1 == '\0') {
    thunk_FUN_104d8370(param_2);
  }
  *(undefined1*)((int)param_1 + 0x41) = (undefined1)(0);
  return;
}


// Reference entry 1020a5b0; body size 37 bytes.
#line 1 "ENTRY_1020a5b0"

void __thiscall Recovered_Bulk::m_FUN_1020a5b0(undefined4 param_2)
{
  int param_1 = (int )this;
  int iStack_10;
  int iStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(param_2);
  iStack_10 = (int)(param_1);
  iStack_c = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_10))->int_allocRep("SCIBrowseDataSource:onInvalidation");
  thunk_FUN_103d65f0();
  *(undefined1*)(param_1 + 0x41) = (undefined1)(0);
  return;
}


// Reference entry 1020a5e0; body size 35 bytes.
#line 1 "ENTRY_1020a5e0"

undefined1 __fastcall FUN_1020a5e0(int *param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(*param_1 + 0x94))(), 0);
  if (cVar1 == '\0') {
    return (undefined1)(0);
  }
  (**(code **)(*param_1 + 0x110))(0);
  return (undefined1)(1);
}


// Reference entry 1020a620; body size 21 bytes.
#line 1 "ENTRY_1020a620"

SCStr * __stdcall FUN_1020a620(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 1020a640; body size 20 bytes.
#line 1 "ENTRY_1020a640"

undefined4 __thiscall Recovered_Bulk::m_FUN_1020a640(undefined4 param_2)
{
  int *param_1 = (int *)this;
  undefined4 uVar1;
  
  uVar1 = (undefined4)(8);
  (**(code **)(*param_1 + 0x50))(param_2,8,0);
  return (undefined4)(uVar1);
}


// Reference entry 1020a660; body size 50 bytes.
#line 1 "ENTRY_1020a660"

int * __thiscall Recovered_Bulk::m_FUN_1020a660(int *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  
  if (*(int **)(param_1 + 0x10) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x10) + 0x34))(param_2,param_3);
    return (int *)(param_2);
  }
  piVar1 = (int *)(*(int **)(param_1 + 8), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 1020a6a0; body size 20 bytes.
#line 1 "ENTRY_1020a6a0"

SCStr * __thiscall Recovered_Bulk::m_FUN_1020a6a0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x28));
  return (SCStr *)(param_2);
}


// Reference entry 1020a6c0; body size 21 bytes.
#line 1 "ENTRY_1020a6c0"

SCStr * __stdcall FUN_1020a6c0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("AddCustomRadioStation");
  return (SCStr *)(param_1);
}


// Reference entry 1020a6e0; body size 21 bytes.
#line 1 "ENTRY_1020a6e0"

SCStr * __stdcall FUN_1020a6e0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SelectedItemsAddToQueueAtIndex");
  return (SCStr *)(param_1);
}


// Reference entry 1020a700; body size 21 bytes.
#line 1 "ENTRY_1020a700"

SCStr * __stdcall FUN_1020a700(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SelectedItemsAddToQueue");
  return (SCStr *)(param_1);
}


// Reference entry 1020a720; body size 21 bytes.
#line 1 "ENTRY_1020a720"

SCStr * __stdcall FUN_1020a720(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SelectedItemsPlayNext");
  return (SCStr *)(param_1);
}


// Reference entry 1020a740; body size 21 bytes.
#line 1 "ENTRY_1020a740"

SCStr * __stdcall FUN_1020a740(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SelectedItemsReplaceQueue");
  return (SCStr *)(param_1);
}


// Reference entry 1020bea0; body size 25 bytes.
#line 1 "ENTRY_1020bea0"

int * __thiscall Recovered_Bulk::m_FUN_1020bea0(int *param_2)
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


// Reference entry 1020bfe0; body size 20 bytes.
#line 1 "ENTRY_1020bfe0"

undefined4 __fastcall FUN_1020bfe0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x1c) != (int *)((0x0))) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x1c) + 0x38))(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(7);
}


// Reference entry 1020c210; body size 21 bytes.
#line 1 "ENTRY_1020c210"

SCStr * __stdcall FUN_1020c210(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 1020d100; body size 20 bytes.
#line 1 "ENTRY_1020d100"

SCStr * __thiscall Recovered_Bulk::m_FUN_1020d100(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x2c));
  return (SCStr *)(param_2);
}


// Reference entry 1020d120; body size 21 bytes.
#line 1 "ENTRY_1020d120"

SCStr * __stdcall FUN_1020d120(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryDefault");
  return (SCStr *)(param_1);
}


// Reference entry 1020d140; body size 21 bytes.
#line 1 "ENTRY_1020d140"

SCStr * __stdcall FUN_1020d140(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategorySettings");
  return (SCStr *)(param_1);
}


// Reference entry 1020d160; body size 21 bytes.
#line 1 "ENTRY_1020d160"

SCStr * __stdcall FUN_1020d160(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryDragAndDrop");
  return (SCStr *)(param_1);
}


// Reference entry 1020d180; body size 21 bytes.
#line 1 "ENTRY_1020d180"

SCStr * __stdcall FUN_1020d180(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryDefault");
  return (SCStr *)(param_1);
}


// Reference entry 1020d1a0; body size 21 bytes.
#line 1 "ENTRY_1020d1a0"

SCStr * __stdcall FUN_1020d1a0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryDefault");
  return (SCStr *)(param_1);
}


// Reference entry 1020d1c0; body size 21 bytes.
#line 1 "ENTRY_1020d1c0"

SCStr * __stdcall FUN_1020d1c0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryDefault");
  return (SCStr *)(param_1);
}


// Reference entry 1020d1e0; body size 43 bytes.
#line 1 "ENTRY_1020d1e0"

int * __thiscall Recovered_Bulk::m_FUN_1020d1e0(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0xc0));
  *param_2 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  return (int *)(param_2);
}


// Reference entry 1020d2f0; body size 21 bytes.
#line 1 "ENTRY_1020d2f0"

SCStr * __stdcall FUN_1020d2f0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 1020d310; body size 20 bytes.
#line 1 "ENTRY_1020d310"

SCStr * __thiscall Recovered_Bulk::m_FUN_1020d310(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x1c));
  return (SCStr *)(param_2);
}


// Reference entry 1020d330; body size 21 bytes.
#line 1 "ENTRY_1020d330"

SCStr * __stdcall FUN_1020d330(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 1020d730; body size 39 bytes.
#line 1 "ENTRY_1020d730"

void __fastcall FUN_1020d730(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(thunk_FUN_1106f2d0(), 0);
  FUN_10218f20(param_1 + 0xd4,param_1 + 0xb8,uVar1);
  return;
}


// Reference entry 1020db70; body size 32 bytes.
#line 1 "ENTRY_1020db70"

SCStr * __stdcall FUN_1020db70(SCStr *param_1)

{
  ((SCStr *)(param_1))->m_op_ctor((SCStr *)&DAT_121a07b0);
  *(undefined4*)(param_1 + 4) = (undefined4)(DAT_121a07b4);
  return (SCStr *)(param_1);
}


// Reference entry 1020dba0; body size 30 bytes.
#line 1 "ENTRY_1020dba0"

SCStr * __thiscall Recovered_Bulk::m_FUN_1020dba0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x20));
  *(undefined4*)(param_2 + 4) = (undefined4)(*(undefined4 *)(param_1 + 0x24));
  return (SCStr *)(param_2);
}


// Reference entry 1020dbd0; body size 32 bytes.
#line 1 "ENTRY_1020dbd0"

SCStr * __stdcall FUN_1020dbd0(SCStr *param_1)

{
  ((SCStr *)(param_1))->m_op_ctor((SCStr *)&DAT_121a07b0);
  *(undefined4*)(param_1 + 4) = (undefined4)(DAT_121a07b4);
  return (SCStr *)(param_1);
}


// Reference entry 1020dc00; body size 17 bytes.
#line 1 "ENTRY_1020dc00"

undefined4 __fastcall FUN_1020dc00(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x1c) != (int *)((0x0))) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x1c) + 0x18))(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 1020f4b0; body size 21 bytes.
#line 1 "ENTRY_1020f4b0"

SCStr * __stdcall FUN_1020f4b0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionOnGroupDescriptor");
  return (SCStr *)(param_1);
}


// Reference entry 1020f4d0; body size 21 bytes.
#line 1 "ENTRY_1020f4d0"

SCStr * __stdcall FUN_1020f4d0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIAddToQueueAtNumberDescriptor");
  return (SCStr *)(param_1);
}


// Reference entry 1020f600; body size 20 bytes.
#line 1 "ENTRY_1020f600"

SCStr * __thiscall Recovered_Bulk::m_FUN_1020f600(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x18));
  return (SCStr *)(param_2);
}


// Reference entry 10210320; body size 59 bytes.
#line 1 "ENTRY_10210320"

int __thiscall Recovered_Bulk::m_FUN_10210320(int param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = (int)(FUN_1004cb77(), 0);
    return (int)(iVar1);
  }
  return (int)(*(int *)(param_1 + 0x1dc) - *(int *)(param_1 + 0x1d8) >> 2);
}


// Reference entry 10210360; body size 23 bytes.
#line 1 "ENTRY_10210360"

SCStr * __thiscall Recovered_Bulk::m_FUN_10210360(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x104));
  return (SCStr *)(param_2);
}


// Reference entry 102103e0; body size 20 bytes.
#line 1 "ENTRY_102103e0"

SCStr * __thiscall Recovered_Bulk::m_FUN_102103e0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x60));
  return (SCStr *)(param_2);
}


// Reference entry 102106d0; body size 29 bytes.
#line 1 "ENTRY_102106d0"

void __stdcall FUN_102106d0(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    FUN_10078150();
    return;
  }
  thunk_FUN_10218810(param_2);
  return;
}


// Reference entry 10210ad0; body size 46 bytes.
#line 1 "ENTRY_10210ad0"

undefined4 FUN_10210ad0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_2 != 0) {
    thunk_FUN_104d8c80(param_1,param_2,param_3,param_4);
    return (undefined4)(param_1);
  }
  thunk_FUN_10218910(param_1,param_3,param_4);
  return (undefined4)(param_1);
}


// Reference entry 10210fc0; body size 20 bytes.
#line 1 "ENTRY_10210fc0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10210fc0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  undefined4 uVar1;
  
  uVar1 = (undefined4)(4);
  (**(code **)(*param_1 + 0x50))(param_2,4,0);
  return (undefined4)(uVar1);
}


// Reference entry 102111d0; body size 20 bytes.
#line 1 "ENTRY_102111d0"

undefined4 __thiscall Recovered_Bulk::m_FUN_102111d0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  undefined4 uVar1;
  
  uVar1 = (undefined4)(0);
  (**(code **)(*param_1 + 0x50))(param_2,0,0);
  return (undefined4)(uVar1);
}


// Reference entry 10216e80; body size 20 bytes.
#line 1 "ENTRY_10216e80"

SCStr * __thiscall Recovered_Bulk::m_FUN_10216e80(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x3c));
  return (SCStr *)(param_2);
}


// Reference entry 10216ea0; body size 21 bytes.
#line 1 "ENTRY_10216ea0"

SCStr * __stdcall FUN_10216ea0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10216ec0; body size 20 bytes.
#line 1 "ENTRY_10216ec0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10216ec0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  undefined4 uVar1;
  
  uVar1 = (undefined4)(5);
  (**(code **)(*param_1 + 0x50))(param_2,5,0);
  return (undefined4)(uVar1);
}


// Reference entry 10217320; body size 17 bytes.
#line 1 "ENTRY_10217320"

undefined4 __fastcall FUN_10217320(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x1c) != (int *)((0x0))) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x1c) + 0x3c))(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 10217600; body size 20 bytes.
#line 1 "ENTRY_10217600"

SCStr * __thiscall Recovered_Bulk::m_FUN_10217600(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SwfStr *)(param_1 + 0x48));
  return (SCStr *)(param_2);
}


// Reference entry 10217a70; body size 51 bytes.
#line 1 "ENTRY_10217a70"

undefined4 FUN_10217a70(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(0);
  switch(param_1) {
  case 0:
    return (undefined4)(1);
  case 1:
    return (undefined4)(2);
  case 2:
    return (undefined4)(3);
  case 3:
    return (undefined4)(4);
  case 4:
  case 6:
    uVar1 = (undefined4)(5);
    break;
  case 5:
  case 7:
    return (undefined4)(0);
  }
  return (undefined4)(uVar1);
}


// Reference entry 10217c30; body size 63 bytes.
#line 1 "ENTRY_10217c30"

undefined4 FUN_10217c30(int param_1)

{
  char *pcVar1;
  char cVar2;
  
  pcVar1 = (char *)(*(char **)(param_1 + 0x1c), 0);
  if (((char *)(pcVar1) != (char *)(0x0)) && (*pcVar1 != (char)(('\0')))) {
    cVar2 = (char)(thunk_FUN_110b9480(pcVar1), 0);
    if (cVar2 == '\0') {
      cVar2 = (char)(thunk_FUN_110a5ba0(param_1 + 8,"object.item.audioItem.audioBook"), 0);
      if (cVar2 == '\0') {
        return (undefined4)(1);
      }
    }
  }
  return (undefined4)(0);
}


// Reference entry 10219030; body size 20 bytes.
#line 1 "ENTRY_10219030"

undefined4 __thiscall Recovered_Bulk::m_FUN_10219030(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_101ff410(param_1 + 100);
  return (undefined4)(param_2);
}


// Reference entry 10219050; body size 20 bytes.
#line 1 "ENTRY_10219050"

undefined4 __thiscall Recovered_Bulk::m_FUN_10219050(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_101ff410(param_1 + 0x58);
  return (undefined4)(param_2);
}


// Reference entry 10219a00; body size 54 bytes.
#line 1 "ENTRY_10219a00"

undefined4 FUN_10219a00(int param_1)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  
  cVar1 = (char)(thunk_FUN_1106f2b0(), 0);
  if (cVar1 != '\0') {
    return (undefined4)(1);
  }
  if ((((*(byte *)(param_1 + 0x6e) & 1) != 0) &&
      (piVar2 = (int *)((int *)thunk_FUN_110828b0(), 0),(int *)( piVar2) != (int *)(0x0))) &&
     (uVar3 = (uint)((**(code **)(*piVar2 + 0x24))(), 0), (uVar3 & 1) != 0)) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 10219bd0; body size 20 bytes.
#line 1 "ENTRY_10219bd0"

void __fastcall FUN_10219bd0(int param_1)

{
  param_1 = (int)(param_1 + 0xb8);
  thunk_FUN_104fed90(param_1);
  thunk_FUN_104ffd30(param_1);
  return;
}


// Reference entry 10219c50; body size 19 bytes.
#line 1 "ENTRY_10219c50"

undefined4 __fastcall FUN_10219c50(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x1c) != (int *)((0x0))) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x1c) + 0x24))(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(1);
}


// Reference entry 10219f60; body size 17 bytes.
#line 1 "ENTRY_10219f60"

bool __fastcall FUN_10219f60(int *param_1)

{
  short sVar1;
  
  sVar1 = (short)((**(code **)(*param_1 + 100))(), 0);
  return (bool)(sVar1 == 1000);
}


// Reference entry 1021aa00; body size 44 bytes.
#line 1 "ENTRY_1021aa00"

uint __thiscall Recovered_Bulk::m_FUN_1021aa00(int param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  char *_Str1;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  switch(param_2) {
  case 9:
    pcVar2 = (char *)((char *)param_1[0x6b]);
    if (((char *)(pcVar2) != (char *)(0x0)) && (*pcVar2 != (char)(('\0')))) {
code_r0x1021aabb:
      return (uint)(((uint)((int3)((uint)pcVar2 >> 8)) << 8 | (uint)(1)));
    }
    break;
  case 10:
  case 0xb:
  case 0xc:
    uVar7 = (uint)(param_2 - 10);
    uVar3 = (undefined4)(thunk_FUN_1106f2d0(), 0);
    iVar4 = (int)(FUN_10218f20(param_1 + 0x35,param_1 + 0x2e,uVar3), 0);
    if (iVar4 == 0) {
      cVar1 = (char)(thunk_FUN_110a5ba0(param_1 + 0x30,"object.container.podcast"), 0);
      if ((cVar1 == '\0') || (param_2 != 0xc)) goto LAB_1021ab6c;
      pcVar2 = (char *)((char *)param_1[0x6b]);
      if (((char *)(pcVar2) != (char *)(0x0)) && (*pcVar2 != (char)(('\0')))) {
        return (uint)(((uint)((int3)((uint)pcVar2 >> 8)) << 8 | (uint)(1)));
      }
    }
    else {
      pcVar2 = (char *)((char *)param_1[0x30]);
      _Str1 = (char *)("");
      if ((char *)(pcVar2) != (char *)(0x0)) {
        _Str1 = (char *)(pcVar2);
      }
      iVar5 = (int)(strncmp(_Str1,"object.container.album.musicAlbum",0x21), 0);
      if ((iVar5 == 0) &&
         (((cVar1 = (char)(_Str1[0x21]), cVar1 == '.' || (cVar1 == '#')) || (cVar1 == '\0')))) {
        iVar5 = (int)(*(int *)(iVar4 + 8));
        if (iVar5 == 0) {
          pcVar2 = (char *)((char *)0x0);
          if ((param_2 == 10) || (param_2 == 0xb)) goto code_r0x1021aabb;
          goto LAB_1021ab6c;
        }
      }
      else {
        iVar5 = (int)(*(int *)(iVar4 + 8));
      }
      if ((iVar5 != 4) && (iVar5 != 6)) goto LAB_1021ab6c;
      iVar4 = (int)(*(int *)(iVar4 + 0x18) - *(int *)(iVar4 + 0x14));
      uVar6 = (uint)(iVar4 >> 3);
      if (uVar6 != 0) {
        return (uint)(((uint)((int3)(iVar4 >> 0xb)) << 8 | (uint)(uVar7 < uVar6)));
      }
      if (param_2 == 10) {
        uVar7 = (uint)((**(code **)(*param_1 + 0x20))(0), 0);
        return (uint)(uVar7);
      }
      if (uVar7 == 1) {
        uVar7 = (uint)((**(code **)(*param_1 + 0x20))(2), 0);
        return (uint)(uVar7);
      }
      pcVar2 = (char *)((char *)0x0);
      if (uVar7 == 2) {
        uVar7 = (uint)((**(code **)(*param_1 + 0x20))(9), 0);
        return (uint)(uVar7);
      }
    }
    break;
  default:
LAB_1021ab6c:
    uVar7 = (uint)(thunk_FUN_104d9780(param_2), 0);
    return (uint)(uVar7);
  }
  return (uint)((uint)pcVar2 & 0xffffff00);
}


// Reference entry 1021adf0; body size 44 bytes.
#line 1 "ENTRY_1021adf0"

uint __fastcall FUN_1021adf0(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (uint)((**(code **)(*param_1 + 0x54))(), 0);
  if (uVar1 == 1) {
    iVar2 = (int)((**(code **)(*param_1 + 0x5c))(), 0);
    uVar1 = (uint)((*(ushort *)(iVar2 + 4) & 0x7f) - 1 & 0xfffffffe);
    if (uVar1 == 6) {
      return (uint)(1);
    }
  }
  return (uint)(uVar1 & 0xffffff00);
}


// Reference entry 1021b1c0; body size 45 bytes.
#line 1 "ENTRY_1021b1c0"

undefined1 __fastcall FUN_1021b1c0(int param_1)

{
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)((SCStr *)(param_1 + 0xb8)))->op_eq("X-Sonos-Universal-Search-Service"), 0);
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)((SCStr *)(param_1 + 0xb8)))->op_eq("X-Sonos-Universal-Search-Resource"), 0);
    if (!bVar1) {
      return (undefined1)(0);
    }
  }
  return (undefined1)(1);
}


// Reference entry 1021b200; body size 58 bytes.
#line 1 "ENTRY_1021b200"

undefined1 __fastcall FUN_1021b200(int *param_1)

{
  SCStr aSStack_14 [4];
  int *piStack_10;
  undefined4 uStack_c;
  
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


// Reference entry 1021b280; body size 17 bytes.
#line 1 "ENTRY_1021b280"

void __stdcall FUN_1021b280(SCStr *param_1)

{
  ((SCStr *)(param_1))->op_eq("SCIBrowseItem:onItemChanged");
  return;
}


// Reference entry 1021b2b0; body size 19 bytes.
#line 1 "ENTRY_1021b2b0"

uint __fastcall FUN_1021b2b0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 8) != (int *)((0x0))) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 8) + 8))(), 0);
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 1021b2d0; body size 19 bytes.
#line 1 "ENTRY_1021b2d0"

uint __fastcall FUN_1021b2d0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 8) != (int *)((0x0))) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 8) + 8))(), 0);
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 1021cbe0; body size 21 bytes.
#line 1 "ENTRY_1021cbe0"

void __fastcall FUN_1021cbe0(int param_1)

{
  (**(code **)(*(int *)(param_1 + -0x8c) + 0x110))(0);
  return;
}


// Reference entry 1021d280; body size 26 bytes.
#line 1 "ENTRY_1021d280"

void __fastcall FUN_1021d280(int param_1)

{
  undefined4 uStack00000004;
  
  uStack00000004 = (undefined4)(0);
                    
                    
  (**(code **)(*(int *)(param_1 + -0x94) + 0x114))();
  return;
}


// Reference entry 1021d670; body size 16 bytes.
#line 1 "ENTRY_1021d670"

void __fastcall FUN_1021d670(int *param_1)

{
  undefined4 uStack00000004;
  
  uStack00000004 = (undefined4)(0);
                    
                    
  (**(code **)(*param_1 + 0x114))();
  return;
}


// Reference entry 1021e260; body size 63 bytes.
#line 1 "ENTRY_1021e260"

void __fastcall FUN_1021e260(int param_1)

{
  int iVar1;
  int iStack_14;
  int *piStack_10;
  undefined4 uStack_c;
  
  piStack_10 = (int *)((int *)(param_1 + -0x90));
  uStack_c = (undefined4)(0);
  if (*(short *)(param_1 + 0x3c) == 0x40c) {
    iStack_14 = (int)(param_1);
    ((SCStr *)((SCStr *)&iStack_14))->int_allocRep("SCIBrowseDataSource:onInvalidation");
    thunk_FUN_103d63d0();
    *(undefined1*)(param_1 + -0x4f) = (undefined1)(0);
    return;
  }
  iVar1 = (int)(*piStack_10);
  piStack_10 = (int *)((int *)0x1021e29c);
  (**(code **)(iVar1 + 0x114))();
  return;
}


// Reference entry 1021e7e0; body size 50 bytes.
#line 1 "ENTRY_1021e7e0"

void __fastcall FUN_1021e7e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  undefined4 *puStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(param_1[4]);
  param_1[9] = (undefined4)(0);
  uStack_10 = (undefined4)(param_1[2]);
  puStack_14 = (undefined4 *)(param_1);
  ((SCStr *)((SCStr *)&puStack_14))->m_op_ctor((SCStr *)(param_1 + 1));
  thunk_FUN_103d65f0();
  uStack_c = (undefined4)(1);
  uStack_10 = (undefined4)(0x1021e80d);
  (**(code **)*param_1)();
  return;
}


// Reference entry 102204e0; body size 30 bytes.
#line 1 "ENTRY_102204e0"

void __thiscall Recovered_Bulk::m_FUN_102204e0(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  *(undefined1*)(param_1 + 0x274) = (undefined1)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0x24))(), 0);
    (**(code **)(*piVar1 + 0x34))();
  }
  return;
}


// Reference entry 10220630; body size 29 bytes.
#line 1 "ENTRY_10220630"

undefined4 FUN_10220630(short param_1,int param_2)

{
  if ((param_1 == 0x403) && (0 < param_2)) {
    return (undefined4)(0x401);
  }
  return (undefined4)(0x400);
}


// Reference entry 10220770; body size 24 bytes.
#line 1 "ENTRY_10220770"

undefined4 __stdcall FUN_10220770(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0(param_1,param_2,param_3);
  return (undefined4)(param_1);
}


// Reference entry 10220cd0; body size 36 bytes.
#line 1 "ENTRY_10220cd0"

void __thiscall Recovered_Bulk::m_FUN_10220cd0(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 0x38));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 10220d00; body size 36 bytes.
#line 1 "ENTRY_10220d00"

void __thiscall Recovered_Bulk::m_FUN_10220d00(SCStr *param_2)
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


// Reference entry 10220d50; body size 19 bytes.
#line 1 "ENTRY_10220d50"

uint __fastcall FUN_10220d50(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 0x1c) != (int *)((0x0))) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 0x1c) + 0x28))(), 0);
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10221330; body size 59 bytes.
#line 1 "ENTRY_10221330"

undefined4 __fastcall FUN_10221330(int *param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (char)(thunk_FUN_110a5ba0(param_1 + 0x1b,"object.item.audioItem.podcast"), 0);
  if (cVar1 == '\0') {
    return (undefined4)(0);
  }
  cVar1 = (char)((**(code **)(*param_1 + 0x7c))(), 0);
  if ((cVar1 == '\0') && (iVar2 = (int)((**(code **)(*param_1 + 0x80))(), 0), iVar2 < 1)) {
    return (undefined4)(0);
  }
  return (undefined4)(1);
}


// Reference entry 10221640; body size 31 bytes.
#line 1 "ENTRY_10221640"

void __stdcall FUN_10221640(int param_1, unsigned int recovered_unused_stack_0)

{
  undefined4 uStack00000008;
  
  if (param_1 != 0) {
    uStack00000008 = (undefined4)(0);
    thunk_FUN_103d61d0();
    return;
  }
  return;
}


// Reference entry 10221690; body size 21 bytes.
#line 1 "ENTRY_10221690"

void __thiscall Recovered_Bulk::m_FUN_10221690(int *param_2)
{
  int param_1 = (int )this;
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 0x28))(*(undefined4 *)(param_1 + 4));
  }
  return;
}


// Reference entry 10221800; body size 62 bytes.
#line 1 "ENTRY_10221800"

void __thiscall Recovered_Bulk::m_FUN_10221800(int param_2)
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


// Reference entry 10221b60; body size 20 bytes.
#line 1 "ENTRY_10221b60"

SCStr * __thiscall Recovered_Bulk::m_FUN_10221b60(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SwfStr *)(param_1 + 0x6c));
  return (SCStr *)(param_2);
}


// Reference entry 10221bc0; body size 24 bytes.
#line 1 "ENTRY_10221bc0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10221bc0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10221d20; body size 47 bytes.
#line 1 "ENTRY_10221d20"

undefined4 * __fastcall FUN_10221d20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCData);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10221e90; body size 19 bytes.
#line 1 "ENTRY_10221e90"

void __fastcall FUN_10221e90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10221eb0; body size 40 bytes.
#line 1 "ENTRY_10221eb0"

void __fastcall FUN_10221eb0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCData);
  free((void *)param_1[2]);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10221ef0; body size 46 bytes.
#line 1 "ENTRY_10221ef0"

void __fastcall FUN_10221ef0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCFileBackedData);
  if ((FILE *)param_1[2] != (FILE *)(((0x0)))) {
    fclose((FILE *)param_1[2]);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10221f60; body size 45 bytes.
#line 1 "ENTRY_10221f60"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10221f60(byte param_2)
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


// Reference entry 10221fa0; body size 62 bytes.
#line 1 "ENTRY_10221fa0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10221fa0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCData);
  free((void *)param_1[2]);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10222050; body size 33 bytes.
#line 1 "ENTRY_10222050"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10222050(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10222240; body size 33 bytes.
#line 1 "ENTRY_10222240"

void __fastcall FUN_10222240(int param_1)

{
  if ((*(int *)(param_1 + 8) == 0) || (*(int *)(param_1 + 0xc) == 0)) {
    thunk_FUN_112af4e0("SCData",2,"End Reading");
  }
  return;
}


// Reference entry 10222300; body size 60 bytes.
#line 1 "ENTRY_10222300"

size_t __thiscall Recovered_Bulk::m_FUN_10222300(void *param_2,uint param_3)
{
  int param_1 = (int )this;
  uint _Size;
  
  if (((((void *)(param_2) != (void *)(0x0)) && (param_3 != 0)) && (*(int *)(param_1 + 8) != 0)) &&
     (_Size = (uint)(*(uint *)(param_1 + 0xc)), _Size != 0)) {
    if (param_3 < _Size) {
      _Size = (uint)(param_3);
    }
    memcpy(param_2,*(void **)(param_1 + 8),_Size);
    return (size_t)(_Size);
  }
  return (size_t)(0);
}


// Reference entry 102223b0; body size 21 bytes.
#line 1 "ENTRY_102223b0"

SCStr * __stdcall FUN_102223b0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 102223d0; body size 21 bytes.
#line 1 "ENTRY_102223d0"

SCStr * __stdcall FUN_102223d0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10222400; body size 30 bytes.
#line 1 "ENTRY_10222400"

void __fastcall FUN_10222400(int param_1)

{
  free(*(void **)(param_1 + 8));
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  return;
}


// Reference entry 10222440; body size 18 bytes.
#line 1 "ENTRY_10222440"

undefined1 __fastcall FUN_10222440(int param_1)

{
  if ((*(int *)(param_1 + 8) != 0) && (*(int *)(param_1 + 0xc) != 0)) {
    return (undefined1)(1);
  }
  return (undefined1)(0);
}


// Reference entry 102233d0; body size 47 bytes.
#line 1 "ENTRY_102233d0"

void FUN_102233d0(SCLibParameters *param_1)

{
  SCLibrary *this_;
  
  _set_purecall_handler((_purecall_handler)(void *)LAB_1005a105);
  AddVectoredExceptionHandler(1,(PVECTORED_EXCEPTION_HANDLER)LAB_1008d708);
  this_ = (SCLibrary *)(((SCLibrary *)(0))->createSingleton(), 0);
  if ((SCLibrary *)(this_) != (SCLibrary *)(0x0)) {
    ((SCLibrary *)(this_))->init(param_1);
  }
  return;
}


// Reference entry 10223410; body size 46 bytes.
#line 1 "ENTRY_10223410"

void FUN_10223410(SCStr *param_1)

{
  uchar local_c [8];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)(uint)&local_c);
  ((SCLibrary *)(param_1))->convertMACAddressToBinary((uint)&local_c);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 10223450; body size 21 bytes.
#line 1 "ENTRY_10223450"

void FUN_10223450(void)

{
  RemoveVectoredExceptionHandler(LAB_1008d708);
  ((SCLibrary *)(0))->shutdownSingleton();
  ((SCLibrary *)(0))->cleanupSingleton();
  return;
}


// Reference entry 10223600; body size 31 bytes.
#line 1 "ENTRY_10223600"

void __thiscall Recovered_Bulk::m_FUN_10223600(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0x2c) + 0x24))(param_2);
  (**(code **)(**(int **)(param_1 + 0x34) + 0x24))(param_2);
  return;
}


// Reference entry 10223630; body size 61 bytes.
#line 1 "ENTRY_10223630"

void __thiscall Recovered_Bulk::m_FUN_10223630(int *param_2)
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


// Reference entry 10223680; body size 28 bytes.
#line 1 "ENTRY_10223680"

int * __thiscall Recovered_Bulk::m_FUN_10223680(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x100), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 102236b0; body size 28 bytes.
#line 1 "ENTRY_102236b0"

int * __thiscall Recovered_Bulk::m_FUN_102236b0(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0xf8), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 102236e0; body size 28 bytes.
#line 1 "ENTRY_102236e0"

int * __thiscall Recovered_Bulk::m_FUN_102236e0(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0xf0), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10224b80; body size 39 bytes.
#line 1 "ENTRY_10224b80"

undefined4 * __fastcall FUN_10224b80(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0xc), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10225e70; body size 40 bytes.
#line 1 "ENTRY_10225e70"

int __thiscall Recovered_Bulk::m_FUN_10225e70(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int iVar1;
  undefined1 local_8 [8];
  
  iVar1 = (int)(thunk_FUN_10225ef0((uint)&local_8,param_2,param_3), 0);
  iVar1 = (int)(*(int *)(iVar1 + 4));
  if (iVar1 == 0) {
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  return (int)(iVar1);
}


// Reference entry 10225eb0; body size 40 bytes.
#line 1 "ENTRY_10225eb0"

int __thiscall Recovered_Bulk::m_FUN_10225eb0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int iVar1;
  undefined1 local_8 [8];
  
  iVar1 = (int)(thunk_FUN_10225ff0((uint)&local_8,param_2,param_3), 0);
  iVar1 = (int)(*(int *)(iVar1 + 4));
  if (iVar1 == 0) {
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  return (int)(iVar1);
}


// Reference entry 10227430; body size 30 bytes.
#line 1 "ENTRY_10227430"

void __thiscall Recovered_Bulk::m_FUN_10227430(int param_2)
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


// Reference entry 10228f60; body size 41 bytes.
#line 1 "ENTRY_10228f60"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10228f60(int *param_2)
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


// Reference entry 10228fa0; body size 41 bytes.
#line 1 "ENTRY_10228fa0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10228fa0(int *param_2)
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


// Reference entry 10228fe0; body size 41 bytes.
#line 1 "ENTRY_10228fe0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10228fe0(int *param_2)
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


// Reference entry 10229020; body size 41 bytes.
#line 1 "ENTRY_10229020"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10229020(int *param_2)
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


// Reference entry 10229060; body size 41 bytes.
#line 1 "ENTRY_10229060"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10229060(int *param_2)
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


// Reference entry 102290a0; body size 41 bytes.
#line 1 "ENTRY_102290a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102290a0(int *param_2)
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


// Reference entry 10229120; body size 41 bytes.
#line 1 "ENTRY_10229120"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10229120(int *param_2)
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


// Reference entry 10229160; body size 41 bytes.
#line 1 "ENTRY_10229160"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10229160(int *param_2)
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


// Reference entry 102291c0; body size 41 bytes.
#line 1 "ENTRY_102291c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102291c0(int *param_2)
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


// Reference entry 10229200; body size 41 bytes.
#line 1 "ENTRY_10229200"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10229200(int *param_2)
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


// Reference entry 10229240; body size 41 bytes.
#line 1 "ENTRY_10229240"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10229240(int *param_2)
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


// Reference entry 10229280; body size 41 bytes.
#line 1 "ENTRY_10229280"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10229280(int *param_2)
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


// Reference entry 102292e0; body size 41 bytes.
#line 1 "ENTRY_102292e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102292e0(int *param_2)
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


// Reference entry 10229340; body size 41 bytes.
#line 1 "ENTRY_10229340"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10229340(int *param_2)
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


// Reference entry 102293d0; body size 41 bytes.
#line 1 "ENTRY_102293d0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102293d0(int *param_2)
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


// Reference entry 10229410; body size 41 bytes.
#line 1 "ENTRY_10229410"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10229410(int *param_2)
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


// Reference entry 10229470; body size 24 bytes.
#line 1 "ENTRY_10229470"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10229470(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1022a1b0; body size 39 bytes.
#line 1 "ENTRY_1022a1b0"

undefined4 * __fastcall FUN_1022a1b0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 1022a1e0; body size 39 bytes.
#line 1 "ENTRY_1022a1e0"

undefined4 * __fastcall FUN_1022a1e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 1022a210; body size 39 bytes.
#line 1 "ENTRY_1022a210"

undefined4 * __fastcall FUN_1022a210(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 1022c710; body size 34 bytes.
#line 1 "ENTRY_1022c710"

void __fastcall FUN_1022c710(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x2c), 0);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1 + 8));
    *(undefined4*)(param_1 + 0x2c) = (undefined4)(0);
  }
  return;
}


// Reference entry 1022cb30; body size 19 bytes.
#line 1 "ENTRY_1022cb30"

void __fastcall FUN_1022cb30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1022d3f0; body size 19 bytes.
#line 1 "ENTRY_1022d3f0"

void __fastcall FUN_1022d3f0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x14);
  }
  return;
}


// Reference entry 1022d410; body size 19 bytes.
#line 1 "ENTRY_1022d410"

void __fastcall FUN_1022d410(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x10);
  }
  return;
}


// Reference entry 1022d430; body size 19 bytes.
#line 1 "ENTRY_1022d430"

void __fastcall FUN_1022d430(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x10);
  }
  return;
}


// Reference entry 1022d450; body size 33 bytes.
#line 1 "ENTRY_1022d450"

void __fastcall FUN_1022d450(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1022d480; body size 33 bytes.
#line 1 "ENTRY_1022d480"

void __fastcall FUN_1022d480(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1022d4b0; body size 33 bytes.
#line 1 "ENTRY_1022d4b0"

void __fastcall FUN_1022d4b0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1022d4e0; body size 33 bytes.
#line 1 "ENTRY_1022d4e0"

void __fastcall FUN_1022d4e0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1022d510; body size 33 bytes.
#line 1 "ENTRY_1022d510"

void __fastcall FUN_1022d510(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1022d540; body size 33 bytes.
#line 1 "ENTRY_1022d540"

void __fastcall FUN_1022d540(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1022d570; body size 33 bytes.
#line 1 "ENTRY_1022d570"

void __fastcall FUN_1022d570(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1022d5a0; body size 33 bytes.
#line 1 "ENTRY_1022d5a0"

void __fastcall FUN_1022d5a0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1022d5d0; body size 33 bytes.
#line 1 "ENTRY_1022d5d0"

void __fastcall FUN_1022d5d0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1022dab0; body size 19 bytes.
#line 1 "ENTRY_1022dab0"

void __fastcall FUN_1022dab0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x10);
  }
  return;
}


// Reference entry 1022db00; body size 33 bytes.
#line 1 "ENTRY_1022db00"

void __fastcall FUN_1022db00(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1022db30; body size 33 bytes.
#line 1 "ENTRY_1022db30"

void __fastcall FUN_1022db30(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1022db60; body size 33 bytes.
#line 1 "ENTRY_1022db60"

void __fastcall FUN_1022db60(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1022db90; body size 33 bytes.
#line 1 "ENTRY_1022db90"

void __fastcall FUN_1022db90(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1022dbc0; body size 33 bytes.
#line 1 "ENTRY_1022dbc0"

void __fastcall FUN_1022dbc0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1022dbf0; body size 33 bytes.
#line 1 "ENTRY_1022dbf0"

void __fastcall FUN_1022dbf0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1022dc20; body size 33 bytes.
#line 1 "ENTRY_1022dc20"

void __fastcall FUN_1022dc20(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1022dc50; body size 33 bytes.
#line 1 "ENTRY_1022dc50"

void __fastcall FUN_1022dc50(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1022dc80; body size 33 bytes.
#line 1 "ENTRY_1022dc80"

void __fastcall FUN_1022dc80(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1022dcb0; body size 25 bytes.
#line 1 "ENTRY_1022dcb0"

void __fastcall FUN_1022dcb0(undefined4 *param_1)

{
  thunk_FUN_102260c0(param_1,*param_1);
  thunk_FUN_1148a50e(*param_1,0x14);
  return;
}


// Reference entry 1022dcd0; body size 25 bytes.
#line 1 "ENTRY_1022dcd0"

void __fastcall FUN_1022dcd0(undefined4 *param_1)

{
  thunk_FUN_10226130(param_1,*param_1);
  thunk_FUN_1148a50e(*param_1,0x10);
  return;
}


// Reference entry 1022dcf0; body size 55 bytes.
#line 1 "ENTRY_1022dcf0"

void __fastcall FUN_1022dcf0(int *param_1)

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


// Reference entry 1022de80; body size 33 bytes.
#line 1 "ENTRY_1022de80"

void __fastcall FUN_1022de80(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1022deb0; body size 33 bytes.
#line 1 "ENTRY_1022deb0"

void __fastcall FUN_1022deb0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1022ed40; body size 34 bytes.
#line 1 "ENTRY_1022ed40"

void __fastcall FUN_1022ed40(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x34), 0);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1 + 0x10));
    *(undefined4*)(param_1 + 0x34) = (undefined4)(0);
  }
  return;
}


// Reference entry 1022ed70; body size 33 bytes.
#line 1 "ENTRY_1022ed70"

void __fastcall FUN_1022ed70(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1022ef50; body size 33 bytes.
#line 1 "ENTRY_1022ef50"

void __fastcall FUN_1022ef50(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1022f150; body size 18 bytes.
#line 1 "ENTRY_1022f150"

void __fastcall FUN_1022f150(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0x30);
  }
  return;
}


// Reference entry 1022f190; body size 18 bytes.
#line 1 "ENTRY_1022f190"

void __fastcall FUN_1022f190(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0x30);
  }
  return;
}


// Reference entry 1022f1d0; body size 18 bytes.
#line 1 "ENTRY_1022f1d0"

void __fastcall FUN_1022f1d0(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0x38);
  }
  return;
}


// Reference entry 1022f210; body size 18 bytes.
#line 1 "ENTRY_1022f210"

void __fastcall FUN_1022f210(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0x30);
  }
  return;
}


// Reference entry 1022f6b0; body size 27 bytes.
#line 1 "ENTRY_1022f6b0"

int __stdcall FUN_1022f6b0(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_8 [8];
  
  piVar1 = (int *)((int *)thunk_FUN_10226cf0((uint)&local_8,param_1), 0);
  return (int)(*piVar1 + 0xc);
}


// Reference entry 1022f6e0; body size 27 bytes.
#line 1 "ENTRY_1022f6e0"

int __stdcall FUN_1022f6e0(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_8 [8];
  
  piVar1 = (int *)((int *)thunk_FUN_10226f80((uint)&local_8,param_1), 0);
  return (int)(*piVar1 + 0xc);
}


// Reference entry 10230420; body size 45 bytes.
#line 1 "ENTRY_10230420"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10230420(byte param_2)
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


// Reference entry 102306b0; body size 60 bytes.
#line 1 "ENTRY_102306b0"

int __thiscall Recovered_Bulk::m_FUN_102306b0(byte param_2)
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


// Reference entry 10230700; body size 60 bytes.
#line 1 "ENTRY_10230700"

int __thiscall Recovered_Bulk::m_FUN_10230700(byte param_2)
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


// Reference entry 10230750; body size 60 bytes.
#line 1 "ENTRY_10230750"

int __thiscall Recovered_Bulk::m_FUN_10230750(byte param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x34), 0);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1 + 0x10));
    *(undefined4*)(param_1 + 0x34) = (undefined4)(0);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x38);
  }
  return (int)(param_1);
}


// Reference entry 102307a0; body size 60 bytes.
#line 1 "ENTRY_102307a0"

int __thiscall Recovered_Bulk::m_FUN_102307a0(byte param_2)
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


// Reference entry 102308d0; body size 38 bytes.
#line 1 "ENTRY_102308d0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102308d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_BatteryWeakChargerData);
  thunk_FUN_1022df10();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x24);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10230900; body size 45 bytes.
#line 1 "ENTRY_10230900"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10230900(byte param_2)
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


// Reference entry 10230940; body size 38 bytes.
#line 1 "ENTRY_10230940"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10230940(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_FactoryResetData);
  thunk_FUN_1022df10();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x24);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10230970; body size 38 bytes.
#line 1 "ENTRY_10230970"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10230970(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_ForgotHouseholdData);
  thunk_FUN_1022df10();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x24);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 102309a0; body size 38 bytes.
#line 1 "ENTRY_102309a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102309a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_InvalidOptimo2OrientationData);
  thunk_FUN_1022df10();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x24);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 102309d0; body size 38 bytes.
#line 1 "ENTRY_102309d0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102309d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_LaunchWifiConfig);
  thunk_FUN_1022df10();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x28);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10230a00; body size 38 bytes.
#line 1 "ENTRY_10230a00"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10230a00(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_LegacyCRModernHHData);
  thunk_FUN_1022df10();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x24);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10230a30; body size 32 bytes.
#line 1 "ENTRY_10230a30"

undefined4 __thiscall Recovered_Bulk::m_FUN_10230a30(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1022df10();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x24);
  }
  return (undefined4)(param_1);
}


// Reference entry 10230b00; body size 38 bytes.
#line 1 "ENTRY_10230b00"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10230b00(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_NoNetworkFoundData);
  thunk_FUN_1022df10();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x28);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10230b30; body size 38 bytes.
#line 1 "ENTRY_10230b30"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10230b30(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_OutdatedControllerData);
  thunk_FUN_1022df10();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x24);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10230b60; body size 38 bytes.
#line 1 "ENTRY_10230b60"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10230b60(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RetailDemoData);
  thunk_FUN_1022df10();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x24);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10230b90; body size 45 bytes.
#line 1 "ENTRY_10230b90"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10230b90(byte param_2)
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


// Reference entry 10230f20; body size 45 bytes.
#line 1 "ENTRY_10230f20"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10230f20(byte param_2)
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


// Reference entry 10230f60; body size 35 bytes.
#line 1 "ENTRY_10230f60"

undefined4 __thiscall Recovered_Bulk::m_FUN_10230f60(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1022e510();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x114);
  }
  return (undefined4)(param_1);
}


// Reference entry 10231040; body size 45 bytes.
#line 1 "ENTRY_10231040"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10231040(byte param_2)
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


// Reference entry 10231120; body size 45 bytes.
#line 1 "ENTRY_10231120"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10231120(byte param_2)
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


// Reference entry 10231160; body size 33 bytes.
#line 1 "ENTRY_10231160"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10231160(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10231190; body size 45 bytes.
#line 1 "ENTRY_10231190"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10231190(byte param_2)
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


// Reference entry 102311d0; body size 45 bytes.
#line 1 "ENTRY_102311d0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102311d0(byte param_2)
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


// Reference entry 102312c0; body size 33 bytes.
#line 1 "ENTRY_102312c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102312c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RITQHandler);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 102313a0; body size 32 bytes.
#line 1 "ENTRY_102313a0"

undefined4 __thiscall Recovered_Bulk::m_FUN_102313a0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1022eb90();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x24);
  }
  return (undefined4)(param_1);
}


// Reference entry 10231520; body size 45 bytes.
#line 1 "ENTRY_10231520"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10231520(byte param_2)
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


// Reference entry 10231560; body size 45 bytes.
#line 1 "ENTRY_10231560"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10231560(byte param_2)
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


// Reference entry 10231640; body size 38 bytes.
#line 1 "ENTRY_10231640"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10231640(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_UnsupportedData);
  thunk_FUN_1022df10();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x24);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10231670; body size 38 bytes.
#line 1 "ENTRY_10231670"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10231670(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_ZonePlayerUpdateData);
  thunk_FUN_1022df10();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x24);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 102316a0; body size 49 bytes.
#line 1 "ENTRY_102316a0"

SCStr * __thiscall Recovered_Bulk::m_FUN_102316a0(SCStr *param_2)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x84) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x84) + 0x20))(param_2);
    return (SCStr *)(param_2);
  }
  ((SCStr *)(param_2))->int_allocRep("");
  return (SCStr *)(param_2);
}


// Reference entry 102316e0; body size 49 bytes.
#line 1 "ENTRY_102316e0"

SCStr * __thiscall Recovered_Bulk::m_FUN_102316e0(SCStr *param_2)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x84) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x84) + 0x1c))(param_2);
    return (SCStr *)(param_2);
  }
  ((SCStr *)(param_2))->int_allocRep("");
  return (SCStr *)(param_2);
}


// Reference entry 10231780; body size 18 bytes.
#line 1 "ENTRY_10231780"

undefined4 __fastcall FUN_10231780(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x84) != (int *)((0x0))) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x84) + 0xc))(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 102317a0; body size 46 bytes.
#line 1 "ENTRY_102317a0"

SCStr * __thiscall Recovered_Bulk::m_FUN_102317a0(SCStr *param_2)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x84) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x84) + 8))(param_2);
    return (SCStr *)(param_2);
  }
  ((SCStr *)(param_2))->int_allocRep((char *)0x0);
  return (SCStr *)(param_2);
}


// Reference entry 10231810; body size 49 bytes.
#line 1 "ENTRY_10231810"

SCStr * __thiscall Recovered_Bulk::m_FUN_10231810(SCStr *param_2)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x84) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x84) + 0x18))(param_2);
    return (SCStr *)(param_2);
  }
  ((SCStr *)(param_2))->int_allocRep("");
  return (SCStr *)(param_2);
}


// Reference entry 102318b0; body size 25 bytes.
#line 1 "ENTRY_102318b0"

void __fastcall FUN_102318b0(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x14), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 102318d0; body size 25 bytes.
#line 1 "ENTRY_102318d0"

void __fastcall FUN_102318d0(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x10), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 102318f0; body size 25 bytes.
#line 1 "ENTRY_102318f0"

void __fastcall FUN_102318f0(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x10), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 10231d60; body size 29 bytes.
#line 1 "ENTRY_10231d60"

void __fastcall FUN_10231d60(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[2]);
  param_1[2] = (int)(*piVar1);
  thunk_FUN_1148a50e(piVar1,0x10);
  *(int*)(*param_1 + 4) = (int)(*(int *)(*param_1 + 4) + -1);
  return;
}


// Reference entry 10232050; body size 19 bytes.
#line 1 "ENTRY_10232050"

void __thiscall Recovered_Bulk::m_FUN_10232050(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10232070; body size 19 bytes.
#line 1 "ENTRY_10232070"

void __thiscall Recovered_Bulk::m_FUN_10232070(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10232150; body size 19 bytes.
#line 1 "ENTRY_10232150"

void __thiscall Recovered_Bulk::m_FUN_10232150(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10232170; body size 19 bytes.
#line 1 "ENTRY_10232170"

void __thiscall Recovered_Bulk::m_FUN_10232170(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 102321b0; body size 19 bytes.
#line 1 "ENTRY_102321b0"

void __thiscall Recovered_Bulk::m_FUN_102321b0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10232270; body size 58 bytes.
#line 1 "ENTRY_10232270"

void __thiscall Recovered_Bulk::m_FUN_10232270(char param_2)
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


// Reference entry 102322c0; body size 58 bytes.
#line 1 "ENTRY_102322c0"

void __thiscall Recovered_Bulk::m_FUN_102322c0(char param_2)
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


// Reference entry 10232310; body size 21 bytes.
#line 1 "ENTRY_10232310"

void __thiscall Recovered_Bulk::m_FUN_10232310(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 10232330; body size 21 bytes.
#line 1 "ENTRY_10232330"

void __thiscall Recovered_Bulk::m_FUN_10232330(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 10232350; body size 21 bytes.
#line 1 "ENTRY_10232350"

void __thiscall Recovered_Bulk::m_FUN_10232350(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 10232370; body size 58 bytes.
#line 1 "ENTRY_10232370"

void __thiscall Recovered_Bulk::m_FUN_10232370(char param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x34), 0);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1 + 0x10));
    *(undefined4*)(param_1 + 0x34) = (undefined4)(0);
  }
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,0x38);
  }
  return;
}


// Reference entry 102323c0; body size 21 bytes.
#line 1 "ENTRY_102323c0"

void __thiscall Recovered_Bulk::m_FUN_102323c0(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 102323e0; body size 21 bytes.
#line 1 "ENTRY_102323e0"

void __thiscall Recovered_Bulk::m_FUN_102323e0(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 10232400; body size 21 bytes.
#line 1 "ENTRY_10232400"

void __thiscall Recovered_Bulk::m_FUN_10232400(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 10232420; body size 21 bytes.
#line 1 "ENTRY_10232420"

void __thiscall Recovered_Bulk::m_FUN_10232420(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 10232440; body size 21 bytes.
#line 1 "ENTRY_10232440"

void __thiscall Recovered_Bulk::m_FUN_10232440(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 10232460; body size 58 bytes.
#line 1 "ENTRY_10232460"

void __thiscall Recovered_Bulk::m_FUN_10232460(char param_2)
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


// Reference entry 10232760; body size 37 bytes.
#line 1 "ENTRY_10232760"

void __thiscall Recovered_Bulk::m_FUN_10232760(undefined4 *param_2)
{
  int param_1 = (int )this;
  param_2 = (undefined4 *)((undefined4 *)*param_2);
  if (*(int **)(param_1 + 0x2c) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 8))(&param_2);
    return;
  }
                    
  std::_Xbad_function_call();
}


// Reference entry 10232790; body size 37 bytes.
#line 1 "ENTRY_10232790"

void __thiscall Recovered_Bulk::m_FUN_10232790(undefined4 *param_2)
{
  int param_1 = (int )this;
  param_2 = (undefined4 *)((undefined4 *)*param_2);
  if (*(int **)(param_1 + 0x2c) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 8))(&param_2);
    return;
  }
                    
  std::_Xbad_function_call();
}


// Reference entry 102327c0; body size 41 bytes.
#line 1 "ENTRY_102327c0"

void __fastcall FUN_102327c0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int iStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(0);
  uStack_10 = (undefined4)(*(undefined4 *)(param_1 + 4));
  iStack_14 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_14))->int_allocRep("SCIController:onBusinessSubscriptionChanged");
  thunk_FUN_103d63d0();
  return;
}


// Reference entry 10232800; body size 31 bytes.
#line 1 "ENTRY_10232800"

void __stdcall FUN_10232800(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_102d65b0(param_2), 0);
  if (cVar1 != '\0') {
    thunk_FUN_1023d430();
  }
  return;
}


// Reference entry 10232840; body size 61 bytes.
#line 1 "ENTRY_10232840"

void __thiscall Recovered_Bulk::m_FUN_10232840(undefined4 *param_2, unsigned int recovered_unused_stack_0)
{
  int param_1 = (int )this; int stack0x00000000; int stack0xfffffff8;
 try {
  (**(code **)(*(int *)*param_2 + 0x18))(*(undefined4 *)(param_1 + 8));
  if (*(int **)(param_1 + 0x34) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x34) + 8))(&stack0xfffffff8,&stack0x00000000);
    return;
  }
                    
  std::_Xbad_function_call();

 } catch (...) { }
}


// Reference entry 10232890; body size 17 bytes.
#line 1 "ENTRY_10232890"

void __fastcall FUN_10232890(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  thunk_FUN_1061c5e0(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 102328b0; body size 17 bytes.
#line 1 "ENTRY_102328b0"

void __fastcall FUN_102328b0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  thunk_FUN_1061c5e0(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10232900; body size 39 bytes.
#line 1 "ENTRY_10232900"

void __thiscall Recovered_Bulk::m_FUN_10232900(undefined4 *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  param_2 = (undefined4 *)((undefined4 *)*param_2);
  if (*(int **)(param_1 + 0x2c) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 8))(&param_2,param_3);
    return;
  }
                    
  std::_Xbad_function_call();
}


// Reference entry 10233650; body size 19 bytes.
#line 1 "ENTRY_10233650"

void __thiscall Recovered_Bulk::m_FUN_10233650(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10233670; body size 19 bytes.
#line 1 "ENTRY_10233670"

void __thiscall Recovered_Bulk::m_FUN_10233670(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 102336b0; body size 19 bytes.
#line 1 "ENTRY_102336b0"

void __thiscall Recovered_Bulk::m_FUN_102336b0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 102336d0; body size 19 bytes.
#line 1 "ENTRY_102336d0"

void __thiscall Recovered_Bulk::m_FUN_102336d0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10233710; body size 19 bytes.
#line 1 "ENTRY_10233710"

void __thiscall Recovered_Bulk::m_FUN_10233710(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10233740; body size 52 bytes.
#line 1 "ENTRY_10233740"

void __thiscall Recovered_Bulk::m_FUN_10233740(undefined4 *param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_102341a0();
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(param_2[1]);
  param_1[2] = (undefined4)(param_2[2]);
  *param_2 = (undefined4)(0);
  param_2[1] = (undefined4)(0);
  param_2[2] = (undefined4)(0);
  return;
}


// Reference entry 10233e10; body size 33 bytes.
#line 1 "ENTRY_10233e10"

void __fastcall FUN_10233e10(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10233e40; body size 33 bytes.
#line 1 "ENTRY_10233e40"

void __fastcall FUN_10233e40(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10233e70; body size 33 bytes.
#line 1 "ENTRY_10233e70"

void __fastcall FUN_10233e70(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10233ea0; body size 33 bytes.
#line 1 "ENTRY_10233ea0"

void __fastcall FUN_10233ea0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10233ed0; body size 33 bytes.
#line 1 "ENTRY_10233ed0"

void __fastcall FUN_10233ed0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10233f00; body size 33 bytes.
#line 1 "ENTRY_10233f00"

void __fastcall FUN_10233f00(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10233f30; body size 33 bytes.
#line 1 "ENTRY_10233f30"

void __fastcall FUN_10233f30(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10233f60; body size 33 bytes.
#line 1 "ENTRY_10233f60"

void __fastcall FUN_10233f60(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10233f90; body size 33 bytes.
#line 1 "ENTRY_10233f90"

void __fastcall FUN_10233f90(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10234110; body size 25 bytes.
#line 1 "ENTRY_10234110"

void __fastcall FUN_10234110(undefined4 *param_1)

{
  thunk_FUN_102260c0(param_1,*param_1);
  thunk_FUN_1148a50e(*param_1,0x14);
  return;
}


// Reference entry 10234130; body size 25 bytes.
#line 1 "ENTRY_10234130"

void __fastcall FUN_10234130(undefined4 *param_1)

{
  thunk_FUN_10226130(param_1,*param_1);
  thunk_FUN_1148a50e(*param_1,0x10);
  return;
}


// Reference entry 10234c50; body size 61 bytes.
#line 1 "ENTRY_10234c50"

void __thiscall Recovered_Bulk::m_FUN_10234c50(int *param_2)
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


// Reference entry 10234ca0; body size 61 bytes.
#line 1 "ENTRY_10234ca0"

void __thiscall Recovered_Bulk::m_FUN_10234ca0(int *param_2)
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


// Reference entry 10234cf0; body size 61 bytes.
#line 1 "ENTRY_10234cf0"

void __thiscall Recovered_Bulk::m_FUN_10234cf0(int *param_2)
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


// Reference entry 10234d40; body size 61 bytes.
#line 1 "ENTRY_10234d40"

void __thiscall Recovered_Bulk::m_FUN_10234d40(int *param_2)
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


// Reference entry 10234d90; body size 61 bytes.
#line 1 "ENTRY_10234d90"

void __thiscall Recovered_Bulk::m_FUN_10234d90(int *param_2)
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


// Reference entry 10234de0; body size 61 bytes.
#line 1 "ENTRY_10234de0"

void __thiscall Recovered_Bulk::m_FUN_10234de0(int *param_2)
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


// Reference entry 10234e30; body size 30 bytes.
#line 1 "ENTRY_10234e30"

void __thiscall Recovered_Bulk::m_FUN_10234e30(int param_2)
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


// Reference entry 10235430; body size 32 bytes.
#line 1 "ENTRY_10235430"

void __fastcall FUN_10235430(int *param_1)

{
  thunk_FUN_102260c0(param_1,*param_1);
  *(int *)*param_1 = (int)(*param_1);
  *(int*)(*param_1 + 4) = (int)(*param_1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 10235460; body size 32 bytes.
#line 1 "ENTRY_10235460"

void __fastcall FUN_10235460(int *param_1)

{
  thunk_FUN_10226130(param_1,*param_1);
  *(int *)*param_1 = (int)(*param_1);
  *(int*)(*param_1 + 4) = (int)(*param_1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 10235f80; body size 60 bytes.
#line 1 "ENTRY_10235f80"

void __stdcall FUN_10235f80(int param_1,int param_2)

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


// Reference entry 10236170; body size 35 bytes.
#line 1 "ENTRY_10236170"

void __thiscall Recovered_Bulk::m_FUN_10236170(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(*(int *)(param_1 + 8) + 0x3c), 0);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 8))(&param_2,param_3);
  }
  return;
}


// Reference entry 10236500; body size 28 bytes.
#line 1 "ENTRY_10236500"

void __fastcall FUN_10236500(int *param_1)

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


// Reference entry 10236530; body size 28 bytes.
#line 1 "ENTRY_10236530"

void __fastcall FUN_10236530(int *param_1)

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


// Reference entry 10236560; body size 33 bytes.
#line 1 "ENTRY_10236560"

void __fastcall FUN_10236560(int param_1)

{
  *(int*)(param_1 + 0xfc) = (int)(*(int *)(param_1 + 0xfc) + 1);
  thunk_FUN_112af4e0("SCController",2,"Number of Suppression: %u",*(undefined4 *)(param_1 + 0xfc));
  return;
}


// Reference entry 102365f0; body size 46 bytes.
#line 1 "ENTRY_102365f0"

int * __thiscall Recovered_Bulk::m_FUN_102365f0(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  if (*(int **)(param_1 + 0x10) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x10) + 0x34))(param_2);
    return (int *)(param_2);
  }
  piVar1 = (int *)(*(int **)(param_1 + 8), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10236820; body size 20 bytes.
#line 1 "ENTRY_10236820"

SCStr * __thiscall Recovered_Bulk::m_FUN_10236820(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x28));
  return (SCStr *)(param_2);
}


// Reference entry 10236840; body size 21 bytes.
#line 1 "ENTRY_10236840"

SCStr * __stdcall FUN_10236840(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCAppUrlActionDescriptor");
  return (SCStr *)(param_1);
}


// Reference entry 10236860; body size 21 bytes.
#line 1 "ENTRY_10236860"

SCStr * __stdcall FUN_10236860(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("DisplayWizard");
  return (SCStr *)(param_1);
}


// Reference entry 10236880; body size 21 bytes.
#line 1 "ENTRY_10236880"

SCStr * __stdcall FUN_10236880(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIncrementHHSwgenAndOnlineUpdateWizardActionDescriptor");
  return (SCStr *)(param_1);
}


// Reference entry 102368a0; body size 21 bytes.
#line 1 "ENTRY_102368a0"

SCStr * __stdcall FUN_102368a0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 102368c0; body size 20 bytes.
#line 1 "ENTRY_102368c0"

SCStr * __thiscall Recovered_Bulk::m_FUN_102368c0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x14));
  return (SCStr *)(param_2);
}


// Reference entry 102368e0; body size 21 bytes.
#line 1 "ENTRY_102368e0"

SCStr * __stdcall FUN_102368e0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("OpenURlAction");
  return (SCStr *)(param_1);
}


// Reference entry 10236900; body size 21 bytes.
#line 1 "ENTRY_10236900"

SCStr * __stdcall FUN_10236900(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("DisplayWizard");
  return (SCStr *)(param_1);
}


// Reference entry 10236920; body size 21 bytes.
#line 1 "ENTRY_10236920"

SCStr * __stdcall FUN_10236920(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10236940; body size 20 bytes.
#line 1 "ENTRY_10236940"

SCStr * __thiscall Recovered_Bulk::m_FUN_10236940(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x2c));
  return (SCStr *)(param_2);
}


// Reference entry 10236960; body size 21 bytes.
#line 1 "ENTRY_10236960"

SCStr * __stdcall FUN_10236960(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryDefault");
  return (SCStr *)(param_1);
}


// Reference entry 10236980; body size 21 bytes.
#line 1 "ENTRY_10236980"

SCStr * __stdcall FUN_10236980(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryDefault");
  return (SCStr *)(param_1);
}


// Reference entry 102369a0; body size 21 bytes.
#line 1 "ENTRY_102369a0"

SCStr * __stdcall FUN_102369a0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryDefault");
  return (SCStr *)(param_1);
}


// Reference entry 102369c0; body size 21 bytes.
#line 1 "ENTRY_102369c0"

SCStr * __stdcall FUN_102369c0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryDefault");
  return (SCStr *)(param_1);
}


// Reference entry 102369e0; body size 21 bytes.
#line 1 "ENTRY_102369e0"

SCStr * __stdcall FUN_102369e0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryDefault");
  return (SCStr *)(param_1);
}


// Reference entry 10236a00; body size 21 bytes.
#line 1 "ENTRY_10236a00"

SCStr * __stdcall FUN_10236a00(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryDefault");
  return (SCStr *)(param_1);
}


// Reference entry 10236a20; body size 21 bytes.
#line 1 "ENTRY_10236a20"

SCStr * __stdcall FUN_10236a20(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryDefault");
  return (SCStr *)(param_1);
}


// Reference entry 10236a40; body size 21 bytes.
#line 1 "ENTRY_10236a40"

SCStr * __stdcall FUN_10236a40(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryDefault");
  return (SCStr *)(param_1);
}


// Reference entry 10236a60; body size 55 bytes.
#line 1 "ENTRY_10236a60"

undefined4 __fastcall FUN_10236a60(int param_1)

{
  if (*(char *)(param_1 + 0xf8) == '\0') {
    return (undefined4)(0);
  }
  if (*(char *)(param_1 + 0x74) != '\0') {
    thunk_FUN_112af4e0("SCController",2,"State has been overridden. Returning state: %d", *(undefined4 *)(param_1 + 0x78));
    return (undefined4)(*(undefined4 *)(param_1 + 0x78));
  }
  return (undefined4)(*(undefined4 *)(param_1 + 0x6c));
}


// Reference entry 10236ab0; body size 43 bytes.
#line 1 "ENTRY_10236ab0"

int * __thiscall Recovered_Bulk::m_FUN_10236ab0(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0x2d43c));
  *param_2 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  return (int *)(param_2);
}


// Reference entry 10236bd0; body size 20 bytes.
#line 1 "ENTRY_10236bd0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10236bd0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x1c));
  return (SCStr *)(param_2);
}


// Reference entry 10236c00; body size 30 bytes.
#line 1 "ENTRY_10236c00"

SCStr * __thiscall Recovered_Bulk::m_FUN_10236c00(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x20));
  *(undefined4*)(param_2 + 4) = (undefined4)(*(undefined4 *)(param_1 + 0x24));
  return (SCStr *)(param_2);
}


// Reference entry 10236c30; body size 20 bytes.
#line 1 "ENTRY_10236c30"

SCStr * __thiscall Recovered_Bulk::m_FUN_10236c30(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x18));
  return (SCStr *)(param_2);
}


// Reference entry 10236c50; body size 20 bytes.
#line 1 "ENTRY_10236c50"

SCStr * __thiscall Recovered_Bulk::m_FUN_10236c50(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x10));
  return (SCStr *)(param_2);
}


// Reference entry 10236c70; body size 20 bytes.
#line 1 "ENTRY_10236c70"

SCStr * __thiscall Recovered_Bulk::m_FUN_10236c70(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 8));
  return (SCStr *)(param_2);
}


// Reference entry 10236c90; body size 20 bytes.
#line 1 "ENTRY_10236c90"

SCStr * __thiscall Recovered_Bulk::m_FUN_10236c90(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 8));
  return (SCStr *)(param_2);
}


// Reference entry 10236cb0; body size 21 bytes.
#line 1 "ENTRY_10236cb0"

SCStr * __stdcall FUN_10236cb0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10236cd0; body size 35 bytes.
#line 1 "ENTRY_10236cd0"

SCStr * __stdcall FUN_10236cd0(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2766,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10236d00; body size 35 bytes.
#line 1 "ENTRY_10236d00"

SCStr * __stdcall FUN_10236d00(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2766,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10236d30; body size 21 bytes.
#line 1 "ENTRY_10236d30"

SCStr * __stdcall FUN_10236d30(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10236d50; body size 21 bytes.
#line 1 "ENTRY_10236d50"

SCStr * __stdcall FUN_10236d50(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10236e20; body size 35 bytes.
#line 1 "ENTRY_10236e20"

SCStr * __stdcall FUN_10236e20(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2777,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10236e50; body size 44 bytes.
#line 1 "ENTRY_10236e50"

SCStr * __thiscall Recovered_Bulk::m_FUN_10236e50(SCStr *param_2)
{
  int param_1 = (int )this;
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0((*(char *)(param_1 + 0x24) != '\0') + 0x2726,&DAT_11882ff0), 0);
  ((SCStr *)(param_2))->int_allocRep(pcVar1);
  return (SCStr *)(param_2);
}


// Reference entry 10236e90; body size 35 bytes.
#line 1 "ENTRY_10236e90"

SCStr * __stdcall FUN_10236e90(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2779,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10236ec0; body size 35 bytes.
#line 1 "ENTRY_10236ec0"

SCStr * __stdcall FUN_10236ec0(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2748,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10236fb0; body size 35 bytes.
#line 1 "ENTRY_10236fb0"

SCStr * __stdcall FUN_10236fb0(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x274a,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10236fe0; body size 35 bytes.
#line 1 "ENTRY_10236fe0"

SCStr * __stdcall FUN_10236fe0(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x275d,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10237010; body size 21 bytes.
#line 1 "ENTRY_10237010"

SCStr * __stdcall FUN_10237010(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10237030; body size 35 bytes.
#line 1 "ENTRY_10237030"

SCStr * __stdcall FUN_10237030(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2766,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10237060; body size 35 bytes.
#line 1 "ENTRY_10237060"

SCStr * __stdcall FUN_10237060(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2766,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10237090; body size 21 bytes.
#line 1 "ENTRY_10237090"

SCStr * __stdcall FUN_10237090(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 102370b0; body size 21 bytes.
#line 1 "ENTRY_102370b0"

SCStr * __stdcall FUN_102370b0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10237180; body size 35 bytes.
#line 1 "ENTRY_10237180"

SCStr * __stdcall FUN_10237180(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2777,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 102371b0; body size 46 bytes.
#line 1 "ENTRY_102371b0"

SCStr * __thiscall Recovered_Bulk::m_FUN_102371b0(SCStr *param_2)
{
  int param_1 = (int )this;
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0((uint)(*(char *)(param_1 + 0x24) != '\0') * 2 + 0x2725, &DAT_11882ff0), 0);
  ((SCStr *)(param_2))->int_allocRep(pcVar1);
  return (SCStr *)(param_2);
}


// Reference entry 102371f0; body size 35 bytes.
#line 1 "ENTRY_102371f0"

SCStr * __stdcall FUN_102371f0(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2779,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10237220; body size 35 bytes.
#line 1 "ENTRY_10237220"

SCStr * __stdcall FUN_10237220(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2748,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10237310; body size 35 bytes.
#line 1 "ENTRY_10237310"

SCStr * __stdcall FUN_10237310(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x274a,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10237340; body size 35 bytes.
#line 1 "ENTRY_10237340"

SCStr * __stdcall FUN_10237340(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x275d,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 1023a400; body size 21 bytes.
#line 1 "ENTRY_1023a400"

SCStr * __stdcall FUN_1023a400(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 1023a420; body size 35 bytes.
#line 1 "ENTRY_1023a420"

SCStr * __stdcall FUN_1023a420(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2764,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 1023a450; body size 35 bytes.
#line 1 "ENTRY_1023a450"

SCStr * __stdcall FUN_1023a450(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2765,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 1023a480; body size 21 bytes.
#line 1 "ENTRY_1023a480"

SCStr * __stdcall FUN_1023a480(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 1023a4a0; body size 21 bytes.
#line 1 "ENTRY_1023a4a0"

SCStr * __stdcall FUN_1023a4a0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 1023a5f0; body size 35 bytes.
#line 1 "ENTRY_1023a5f0"

SCStr * __stdcall FUN_1023a5f0(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2724,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 1023a620; body size 35 bytes.
#line 1 "ENTRY_1023a620"

SCStr * __stdcall FUN_1023a620(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2778,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 1023a650; body size 35 bytes.
#line 1 "ENTRY_1023a650"

SCStr * __stdcall FUN_1023a650(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2747,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 1023a6f0; body size 35 bytes.
#line 1 "ENTRY_1023a6f0"

SCStr * __stdcall FUN_1023a6f0(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2749,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 1023a720; body size 35 bytes.
#line 1 "ENTRY_1023a720"

SCStr * __stdcall FUN_1023a720(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x275c,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 1023a750; body size 21 bytes.
#line 1 "ENTRY_1023a750"

SCStr * __stdcall FUN_1023a750(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("BatteryWeakChargerData");
  return (SCStr *)(param_1);
}


// Reference entry 1023a770; body size 21 bytes.
#line 1 "ENTRY_1023a770"

SCStr * __stdcall FUN_1023a770(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("FactoryReset");
  return (SCStr *)(param_1);
}


// Reference entry 1023a790; body size 21 bytes.
#line 1 "ENTRY_1023a790"

SCStr * __stdcall FUN_1023a790(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("ForgotHousehold");
  return (SCStr *)(param_1);
}


// Reference entry 1023a7b0; body size 21 bytes.
#line 1 "ENTRY_1023a7b0"

SCStr * __stdcall FUN_1023a7b0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("InvalidOptimo2OrientationData");
  return (SCStr *)(param_1);
}


// Reference entry 1023a890; body size 21 bytes.
#line 1 "ENTRY_1023a890"

SCStr * __stdcall FUN_1023a890(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("LegacyCRModernHH");
  return (SCStr *)(param_1);
}


// Reference entry 1023a8b0; body size 21 bytes.
#line 1 "ENTRY_1023a8b0"

SCStr * __stdcall FUN_1023a8b0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("ModernCRLegacyZPsAndHHSWGen");
  return (SCStr *)(param_1);
}


// Reference entry 1023a8d0; body size 21 bytes.
#line 1 "ENTRY_1023a8d0"

SCStr * __stdcall FUN_1023a8d0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("NoNetwork");
  return (SCStr *)(param_1);
}


// Reference entry 1023a8f0; body size 21 bytes.
#line 1 "ENTRY_1023a8f0"

SCStr * __stdcall FUN_1023a8f0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("OutdatedController");
  return (SCStr *)(param_1);
}


// Reference entry 1023a910; body size 21 bytes.
#line 1 "ENTRY_1023a910"

SCStr * __stdcall FUN_1023a910(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("GuestMode");
  return (SCStr *)(param_1);
}


// Reference entry 1023a930; body size 21 bytes.
#line 1 "ENTRY_1023a930"

SCStr * __stdcall FUN_1023a930(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("ModernCRMixedLegacyHH");
  return (SCStr *)(param_1);
}


// Reference entry 1023a950; body size 21 bytes.
#line 1 "ENTRY_1023a950"

SCStr * __stdcall FUN_1023a950(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("EndOfLife");
  return (SCStr *)(param_1);
}


// Reference entry 1023a970; body size 21 bytes.
#line 1 "ENTRY_1023a970"

SCStr * __stdcall FUN_1023a970(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("Updating");
  return (SCStr *)(param_1);
}


// Reference entry 1023a9c0; body size 32 bytes.
#line 1 "ENTRY_1023a9c0"

undefined4 * FUN_1023a9c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(DAT_121a0978);
  if ((int *)(DAT_121a0978) != (int *)(0x0)) {
    (**(code **)(*(int *)(uint)(DAT_121a0978) + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1023ab10; body size 32 bytes.
#line 1 "ENTRY_1023ab10"

undefined4 * FUN_1023ab10(undefined4 *param_1)

{
  *param_1 = (undefined4)(DAT_121a0978);
  if ((int *)(DAT_121a0978) != (int *)(0x0)) {
    (**(code **)(*(int *)(uint)(DAT_121a0978) + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1023c190; body size 22 bytes.
#line 1 "ENTRY_1023c190"

undefined4 FUN_1023c190(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (int)(thunk_FUN_101b5540(), 0);
  if (iVar1 != 0) {
    uVar2 = (undefined4)(thunk_FUN_101b5de0(3), 0);
    return (undefined4)(uVar2);
  }
  return (undefined4)(0);
}


// Reference entry 10242ad0; body size 37 bytes.
#line 1 "ENTRY_10242ad0"

undefined4 __fastcall FUN_10242ad0(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x74) == '\0') {
    if (*(int *)(param_1 + 0x70) == 0xc) {
      return (undefined4)(1);
    }
    iVar1 = (int)(*(int *)(param_1 + 0x7c));
  }
  else {
    iVar1 = (int)(*(int *)(param_1 + 0x7c));
    if (iVar1 == 0xc) {
      return (undefined4)(1);
    }
  }
  if (iVar1 == 0xd) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 10242b10; body size 38 bytes.
#line 1 "ENTRY_10242b10"

bool __fastcall FUN_10242b10(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x74) != '\0') {
    return (bool)(*(int *)(param_1 + 0x7c) == 2);
  }
  iVar1 = (int)(*(int *)(param_1 + 0x70));
  if (((iVar1 != 2) && (iVar1 != 3)) && (iVar1 != 4)) {
    return (bool)(false);
  }
  return (bool)(true);
}


// Reference entry 10242b50; body size 22 bytes.
#line 1 "ENTRY_10242b50"

bool __fastcall FUN_10242b50(int param_1)

{
  if (*(char *)(param_1 + 0x74) != '\0') {
    return (bool)(*(int *)(param_1 + 0x7c) == 9);
  }
  return (bool)(*(int *)(param_1 + 0x70) == 9);
}


// Reference entry 10242f20; body size 19 bytes.
#line 1 "ENTRY_10242f20"

uint __fastcall FUN_10242f20(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 8) != (int *)((0x0))) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 8) + 0x10))(), 0);
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10242f40; body size 19 bytes.
#line 1 "ENTRY_10242f40"

uint __fastcall FUN_10242f40(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 8) != (int *)((0x0))) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 8) + 0x14))(), 0);
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10242f60; body size 19 bytes.
#line 1 "ENTRY_10242f60"

uint __fastcall FUN_10242f60(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 8) != (int *)((0x0))) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 8) + 0x14))(), 0);
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10242f80; body size 19 bytes.
#line 1 "ENTRY_10242f80"

uint __fastcall FUN_10242f80(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 8) != (int *)((0x0))) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 8) + 0x20))(), 0);
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10243140; body size 20 bytes.
#line 1 "ENTRY_10243140"

uint __fastcall FUN_10243140(int param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 0x84) != (int *)((0x0))) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 0x84) + 0x14))(), 0);
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 102431a0; body size 24 bytes.
#line 1 "ENTRY_102431a0"

void __fastcall FUN_102431a0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  thunk_FUN_1023d430();
  (**(code **)(*(int *)(param_1 + 0x24) + 0xc))();
  return;
}


// Reference entry 102431c0; body size 50 bytes.
#line 1 "ENTRY_102431c0"

void __fastcall FUN_102431c0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  if (*(int *)(param_1 + 0xac) != 1) {
    thunk_FUN_10241ce0();
  }
  thunk_FUN_1023d430();
  thunk_FUN_1106b190(param_1 + 0xc,0,0);
  return;
}


// Reference entry 10243200; body size 26 bytes.
#line 1 "ENTRY_10243200"

void __fastcall FUN_10243200(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *(undefined1*)(param_1 + 0x9d) = (undefined1)(1);
  thunk_FUN_1106b190(param_1 + -0x10,0,0);
  return;
}


// Reference entry 10243220; body size 19 bytes.
#line 1 "ENTRY_10243220"

void __fastcall FUN_10243220(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  thunk_FUN_1106b190(param_1 + -0x10,0,0);
  return;
}


// Reference entry 10243240; body size 26 bytes.
#line 1 "ENTRY_10243240"

void __thiscall Recovered_Bulk::m_FUN_10243240(undefined4 param_2,byte param_3)
{
  int param_1 = (int )this;
  if ((param_3 & 0x14) != 0) {
    thunk_FUN_1106b190(param_1 + 0x28,0,0);
  }
  return;
}


// Reference entry 10243270; body size 19 bytes.
#line 1 "ENTRY_10243270"

void __fastcall FUN_10243270(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  thunk_FUN_1106b190(param_1 + -4,0,0);
  return;
}


// Reference entry 102432a0; body size 19 bytes.
#line 1 "ENTRY_102432a0"

void __fastcall FUN_102432a0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  thunk_FUN_1106b190(param_1 + -4,0,0);
  return;
}


// Reference entry 102432d0; body size 31 bytes.
#line 1 "ENTRY_102432d0"

void __fastcall FUN_102432d0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  thunk_FUN_1023d430();
  thunk_FUN_1106b190(param_1 + 0xc,0,0);
  return;
}


// Reference entry 10243650; body size 29 bytes.
#line 1 "ENTRY_10243650"

void __fastcall FUN_10243650(int param_1)

{
  if (*(char *)(param_1 + 0x28) != '\0') {
    thunk_FUN_102410f0(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30));
    return;
  }
  thunk_FUN_1023c1b0();
  return;
}


// Reference entry 10244e30; body size 20 bytes.
#line 1 "ENTRY_10244e30"

uint __fastcall FUN_10244e30(int param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 0x84) != (int *)((0x0))) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 0x84) + 0x10))(), 0);
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10245150; body size 41 bytes.
#line 1 "ENTRY_10245150"

void __stdcall FUN_10245150(int param_1,char param_2)

{
  if (param_2 != '\0') {
    thunk_FUN_1023ac50();
  }
  if (param_1 != 0) {
    thunk_FUN_103d61d0(param_1,0);
  }
  return;
}


// Reference entry 10245940; body size 26 bytes.
#line 1 "ENTRY_10245940"

void __stdcall FUN_10245940(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_103d6930();
    return;
  }
  return;
}


// Reference entry 102459f0; body size 17 bytes.
#line 1 "ENTRY_102459f0"

void __fastcall FUN_102459f0(int param_1)

{
  thunk_FUN_1106b190(param_1 + 0x4c,0,0);
  return;
}


// Reference entry 10245a10; body size 43 bytes.
#line 1 "ENTRY_10245a10"

void __fastcall FUN_10245a10(int param_1)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_10240ec0(), 0);
  if (cVar1 == '\0') {
    *(undefined1*)(param_1 + 0xe0) = (undefined1)(0);
    *(undefined1*)(param_1 + 0x100) = (undefined1)(1);
    thunk_FUN_1106b190(param_1 + 0x4c,0,0);
  }
  return;
}


// Reference entry 10246020; body size 33 bytes.
#line 1 "ENTRY_10246020"

void __thiscall Recovered_Bulk::m_FUN_10246020(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_102460b0(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 10246050; body size 33 bytes.
#line 1 "ENTRY_10246050"

void __thiscall Recovered_Bulk::m_FUN_10246050(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_10246170(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x28);
  return;
}


// Reference entry 10246080; body size 33 bytes.
#line 1 "ENTRY_10246080"

void __thiscall Recovered_Bulk::m_FUN_10246080(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_10246290(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 10246680; body size 30 bytes.
#line 1 "ENTRY_10246680"

void __thiscall Recovered_Bulk::m_FUN_10246680(int param_2)
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


// Reference entry 102469f0; body size 24 bytes.
#line 1 "ENTRY_102469f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102469f0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10246a10; body size 48 bytes.
#line 1 "ENTRY_10246a10"

undefined4 * __fastcall FUN_10246a10(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x28), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10246a50; body size 48 bytes.
#line 1 "ENTRY_10246a50"

undefined4 * __fastcall FUN_10246a50(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 10246b40; body size 52 bytes.
#line 1 "ENTRY_10246b40"

undefined4 * __fastcall FUN_10246b40(undefined4 *param_1)

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


// Reference entry 10246fa0; body size 19 bytes.
#line 1 "ENTRY_10246fa0"

void __fastcall FUN_10246fa0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10247090; body size 28 bytes.
#line 1 "ENTRY_10247090"

void __fastcall FUN_10247090(int *param_1)

{
  thunk_FUN_102460b0(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 102470c0; body size 28 bytes.
#line 1 "ENTRY_102470c0"

void __fastcall FUN_102470c0(int *param_1)

{
  thunk_FUN_10246170(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x28);
  return;
}


// Reference entry 102470f0; body size 28 bytes.
#line 1 "ENTRY_102470f0"

void __fastcall FUN_102470f0(int *param_1)

{
  thunk_FUN_10246290(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 10247120; body size 28 bytes.
#line 1 "ENTRY_10247120"

void __fastcall FUN_10247120(int *param_1)

{
  thunk_FUN_102460b0(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 10247150; body size 28 bytes.
#line 1 "ENTRY_10247150"

void __fastcall FUN_10247150(int *param_1)

{
  thunk_FUN_10246170(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x28);
  return;
}


// Reference entry 10247180; body size 28 bytes.
#line 1 "ENTRY_10247180"

void __fastcall FUN_10247180(int *param_1)

{
  thunk_FUN_10246290(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 10247970; body size 45 bytes.
#line 1 "ENTRY_10247970"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10247970(byte param_2)
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


// Reference entry 10247c40; body size 32 bytes.
#line 1 "ENTRY_10247c40"

undefined4 __thiscall Recovered_Bulk::m_FUN_10247c40(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103d0730();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x60);
  }
  return (undefined4)(param_1);
}


// Reference entry 10247c70; body size 35 bytes.
#line 1 "ENTRY_10247c70"

undefined4 __thiscall Recovered_Bulk::m_FUN_10247c70(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10247530();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xcc);
  }
  return (undefined4)(param_1);
}


// Reference entry 10247ca0; body size 33 bytes.
#line 1 "ENTRY_10247ca0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10247ca0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10247d40; body size 20 bytes.
#line 1 "ENTRY_10247d40"

void __thiscall Recovered_Bulk::m_FUN_10247d40(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10245f80(param_2,param_3,param_1);
  return;
}


// Reference entry 102481b0; body size 61 bytes.
#line 1 "ENTRY_102481b0"

void __thiscall Recovered_Bulk::m_FUN_102481b0(int *param_2)
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


// Reference entry 10248200; body size 61 bytes.
#line 1 "ENTRY_10248200"

void __thiscall Recovered_Bulk::m_FUN_10248200(int *param_2)
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


// Reference entry 10248250; body size 30 bytes.
#line 1 "ENTRY_10248250"

void __thiscall Recovered_Bulk::m_FUN_10248250(int param_2)
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


// Reference entry 10248600; body size 60 bytes.
#line 1 "ENTRY_10248600"

void __stdcall FUN_10248600(int param_1,int param_2)

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


// Reference entry 10248650; body size 28 bytes.
#line 1 "ENTRY_10248650"

void __fastcall FUN_10248650(int *param_1)

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


// Reference entry 10248750; body size 50 bytes.
#line 1 "ENTRY_10248750"

void FUN_10248750(void)

{
  undefined4 uVar1;
  
  thunk_FUN_112af4e0("SCControllerTest",1,"Flushing current household");
  thunk_FUN_11080e90();
  uVar1 = (undefined4)(0);
  thunk_FUN_1023a9f0(0);
  thunk_FUN_105b5360(uVar1);
  return;
}


// Reference entry 102493a0; body size 46 bytes.
#line 1 "ENTRY_102493a0"

void __fastcall FUN_102493a0(int param_1)

{
  if (*(int *)(param_1 + 0xa8) != 0) {
    thunk_FUN_104dec20();
    if (*(undefined4 **)(param_1 + 0xa8) != (undefined4 *)((0x0))) {
      (**(code **)**(undefined4 **)(param_1 + 0xa8))(1);
    }
    *(undefined4*)(param_1 + 0xa8) = (undefined4)(0);
  }
  return;
}


// Reference entry 10249400; body size 40 bytes.
#line 1 "ENTRY_10249400"

void __fastcall FUN_10249400(int param_1)

{
  undefined4 uVar1;
  
  thunk_FUN_1059d800();
  uVar1 = (undefined4)(thunk_FUN_1059d5a0(1000), 0);
  *(undefined4*)(param_1 + 0x9c) = (undefined4)(uVar1);
  return;
}


// Reference entry 10249440; body size 40 bytes.
#line 1 "ENTRY_10249440"

void __fastcall FUN_10249440(int param_1)

{
  undefined4 uVar1;
  
  thunk_FUN_1059d800();
  uVar1 = (undefined4)(thunk_FUN_1059d5a0(10000), 0);
  *(undefined4*)(param_1 + 0x98) = (undefined4)(uVar1);
  return;
}


// Reference entry 10249480; body size 37 bytes.
#line 1 "ENTRY_10249480"

void __fastcall FUN_10249480(int param_1)

{
  if (*(int *)(param_1 + 0x98) != 0) {
    thunk_FUN_1059d940(*(int *)(param_1 + 0x98));
  }
  *(undefined4*)(param_1 + 0x98) = (undefined4)(0);
  return;
}


// Reference entry 10249b90; body size 40 bytes.
#line 1 "ENTRY_10249b90"

void __fastcall FUN_10249b90(int param_1)

{
  undefined4 uVar1;
  
  thunk_FUN_1059d800();
  uVar1 = (undefined4)(thunk_FUN_1059d5a0(3000), 0);
  *(undefined4*)(param_1 + 0xa4) = (undefined4)(uVar1);
  return;
}


// Reference entry 10249bd0; body size 40 bytes.
#line 1 "ENTRY_10249bd0"

void __fastcall FUN_10249bd0(int param_1)

{
  undefined4 uVar1;
  
  thunk_FUN_1059d800();
  uVar1 = (undefined4)(thunk_FUN_1059d5a0(3000), 0);
  *(undefined4*)(param_1 + 0xa0) = (undefined4)(uVar1);
  return;
}


// Reference entry 10249df0; body size 41 bytes.
#line 1 "ENTRY_10249df0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10249df0(int *param_2)
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


// Reference entry 10249e30; body size 41 bytes.
#line 1 "ENTRY_10249e30"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10249e30(int *param_2)
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


// Reference entry 1024a260; body size 19 bytes.
#line 1 "ENTRY_1024a260"

void __fastcall FUN_1024a260(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1024a6b0; body size 45 bytes.
#line 1 "ENTRY_1024a6b0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1024a6b0(byte param_2)
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


// Reference entry 1024a8b0; body size 33 bytes.
#line 1 "ENTRY_1024a8b0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1024a8b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1024a8f0; body size 61 bytes.
#line 1 "ENTRY_1024a8f0"

void __thiscall Recovered_Bulk::m_FUN_1024a8f0(int *param_2)
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


// Reference entry 1024a960; body size 26 bytes.
#line 1 "ENTRY_1024a960"

undefined4 * FUN_1024a960(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(DAT_121a0a18);
  *param_1 = (undefined4)(DAT_121a0a18);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1024ac20; body size 17 bytes.
#line 1 "ENTRY_1024ac20"

void __stdcall FUN_1024ac20(SCStr *param_1)

{
  ((SCStr *)(param_1))->op_eq("SCIHousehold:onSettingsChanged");
  return;
}


// Reference entry 1024ac40; body size 22 bytes.
#line 1 "ENTRY_1024ac40"

void __stdcall FUN_1024ac40(unsigned int recovered_unused_stack_0)

{
  thunk_FUN_1024bf80();
  thunk_FUN_1024be70();
  return;
}


// Reference entry 1024ac60; body size 22 bytes.
#line 1 "ENTRY_1024ac60"

void __stdcall FUN_1024ac60(unsigned int recovered_unused_stack_0)

{
  thunk_FUN_1024bf80();
  thunk_FUN_1024be70();
  return;
}


// Reference entry 1024c220; body size 41 bytes.
#line 1 "ENTRY_1024c220"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1024c220(int *param_2)
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


// Reference entry 1024c360; body size 60 bytes.
#line 1 "ENTRY_1024c360"

void __fastcall FUN_1024c360(int *param_1)

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


// Reference entry 1024c4e0; body size 45 bytes.
#line 1 "ENTRY_1024c4e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1024c4e0(byte param_2)
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


// Reference entry 1024c630; body size 33 bytes.
#line 1 "ENTRY_1024c630"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1024c630(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1024cfa0; body size 20 bytes.
#line 1 "ENTRY_1024cfa0"

SCStr * __thiscall Recovered_Bulk::m_FUN_1024cfa0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x18));
  return (SCStr *)(param_2);
}


// Reference entry 1024d810; body size 20 bytes.
#line 1 "ENTRY_1024d810"

SCStr * __thiscall Recovered_Bulk::m_FUN_1024d810(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x1c));
  return (SCStr *)(param_2);
}


// Reference entry 1024da30; body size 20 bytes.
#line 1 "ENTRY_1024da30"

SCStr * __thiscall Recovered_Bulk::m_FUN_1024da30(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0xc));
  return (SCStr *)(param_2);
}


// Reference entry 1024dc00; body size 20 bytes.
#line 1 "ENTRY_1024dc00"

SCStr * __thiscall Recovered_Bulk::m_FUN_1024dc00(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x10));
  return (SCStr *)(param_2);
}


// Reference entry 1024ddb0; body size 20 bytes.
#line 1 "ENTRY_1024ddb0"

SCStr * __thiscall Recovered_Bulk::m_FUN_1024ddb0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x14));
  return (SCStr *)(param_2);
}


// Reference entry 1024ed20; body size 41 bytes.
#line 1 "ENTRY_1024ed20"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1024ed20(int *param_2)
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


// Reference entry 1024ed80; body size 41 bytes.
#line 1 "ENTRY_1024ed80"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1024ed80(int *param_2)
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


// Reference entry 1024ede0; body size 32 bytes.
#line 1 "ENTRY_1024ede0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1024ede0(undefined4 *param_2)
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


// Reference entry 1024ee10; body size 24 bytes.
#line 1 "ENTRY_1024ee10"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1024ee10(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1024f410; body size 19 bytes.
#line 1 "ENTRY_1024f410"

void __fastcall FUN_1024f410(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1024f580; body size 33 bytes.
#line 1 "ENTRY_1024f580"

void __fastcall FUN_1024f580(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1024f5e0; body size 33 bytes.
#line 1 "ENTRY_1024f5e0"

void __fastcall FUN_1024f5e0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1024f7c0; body size 18 bytes.
#line 1 "ENTRY_1024f7c0"

void __fastcall FUN_1024f7c0(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0x30);
  }
  return;
}


// Reference entry 1024fb30; body size 45 bytes.
#line 1 "ENTRY_1024fb30"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1024fb30(byte param_2)
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


// Reference entry 1024fb70; body size 60 bytes.
#line 1 "ENTRY_1024fb70"

int __thiscall Recovered_Bulk::m_FUN_1024fb70(byte param_2)
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


// Reference entry 1024fbc0; body size 45 bytes.
#line 1 "ENTRY_1024fbc0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1024fbc0(byte param_2)
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


// Reference entry 1024fc00; body size 45 bytes.
#line 1 "ENTRY_1024fc00"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1024fc00(byte param_2)
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


// Reference entry 1024fc40; body size 32 bytes.
#line 1 "ENTRY_1024fc40"

undefined4 __thiscall Recovered_Bulk::m_FUN_1024fc40(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1024f650();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x38);
  }
  return (undefined4)(param_1);
}


// Reference entry 1024fc70; body size 33 bytes.
#line 1 "ENTRY_1024fc70"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1024fc70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1024fd40; body size 58 bytes.
#line 1 "ENTRY_1024fd40"

void __thiscall Recovered_Bulk::m_FUN_1024fd40(char param_2)
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


// Reference entry 1024fd90; body size 39 bytes.
#line 1 "ENTRY_1024fd90"

void __thiscall Recovered_Bulk::m_FUN_1024fd90(undefined4 *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  param_2 = (undefined4 *)((undefined4 *)*param_2);
  if (*(int **)(param_1 + 0x2c) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 8))(&param_2,param_3);
    return;
  }
                    
  std::_Xbad_function_call();
}


// Reference entry 1024fee0; body size 33 bytes.
#line 1 "ENTRY_1024fee0"

void __fastcall FUN_1024fee0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10250150; body size 35 bytes.
#line 1 "ENTRY_10250150"

void __thiscall Recovered_Bulk::m_FUN_10250150(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(*(int *)(param_1 + 8) + 0x3c), 0);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 8))(&param_2,param_3);
  }
  return;
}


// Reference entry 10250180; body size 33 bytes.
#line 1 "ENTRY_10250180"

void __thiscall Recovered_Bulk::m_FUN_10250180(undefined4 param_2,SCStr *param_3)
{
  int param_1 = (int )this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIHouseholdManager:onCurrentHouseholdChanged"), 0);
  if (bVar1) {
    (**(code **)(**(int **)(param_1 + 8) + 0x5c))();
  }
  return;
}


// Reference entry 10251770; body size 20 bytes.
#line 1 "ENTRY_10251770"

SCStr * __thiscall Recovered_Bulk::m_FUN_10251770(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x20));
  return (SCStr *)(param_2);
}


// Reference entry 10252b80; body size 39 bytes.
#line 1 "ENTRY_10252b80"

void __fastcall FUN_10252b80(int param_1)

{
  SCStr aSStack_14 [4];
  int iStack_10;
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(0x10252b8c);
  (**(code **)(**(int **)(param_1 + 0x24) + 0x7c))();
  uStack_c = (undefined4)(0);
  iStack_10 = (int)(param_1);
  ((SCStr *)((uint)&aSStack_14))->int_allocRep("SCIExperimentManager:onExperimentsChanged");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10252bb0; body size 23 bytes.
#line 1 "ENTRY_10252bb0"

void __fastcall FUN_10252bb0(int *param_1)

{
  thunk_FUN_10252480();
  (**(code **)(*param_1 + 0x50))();
  thunk_FUN_10253830();
  return;
}


// Reference entry 10252fa0; body size 34 bytes.
#line 1 "ENTRY_10252fa0"

void __thiscall Recovered_Bulk::m_FUN_10252fa0(undefined4 param_2)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0x18) + 0x78))(param_2);
  (**(code **)(**(int **)(param_1 + 0x24) + 0x7c))();
  thunk_FUN_10252fd0();
  return;
}


// Reference entry 10253110; body size 38 bytes.
#line 1 "ENTRY_10253110"

void __thiscall Recovered_Bulk::m_FUN_10253110(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0x18) + 0x40))(param_2,param_3);
  (**(code **)(**(int **)(param_1 + 0x24) + 0x7c))();
  thunk_FUN_10252fd0();
  return;
}


// Reference entry 10253800; body size 17 bytes.
#line 1 "ENTRY_10253800"

void __stdcall FUN_10253800(undefined4 param_1)

{
  thunk_FUN_103d61d0(param_1,0);
  return;
}


// Reference entry 10254ee0; body size 33 bytes.
#line 1 "ENTRY_10254ee0"

void __thiscall Recovered_Bulk::m_FUN_10254ee0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_10254f10(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x20);
  return;
}


// Reference entry 10255010; body size 60 bytes.
#line 1 "ENTRY_10255010"

int __thiscall Recovered_Bulk::m_FUN_10255010(SCStr *param_2)
{
  int *param_1 = (int *)this;
  bool bVar1;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10255060((uint)&local_c,param_2);
  if ((*(char *)(local_4 + 0xd) == '\0') &&
     (bVar1 = (bool)(((SCStr *)(param_2))->op_lt((SCStr *)(local_4 + 0x10)), 0), !bVar1)) {
    return (int)(local_4);
  }
  return (int)(*param_1);
}


// Reference entry 102561c0; body size 59 bytes.
#line 1 "ENTRY_102561c0"

void __thiscall Recovered_Bulk::m_FUN_102561c0(undefined4 *param_2)
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
  thunk_FUN_10254c20(puVar1,param_2);
  return;
}


// Reference entry 10257090; body size 41 bytes.
#line 1 "ENTRY_10257090"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10257090(int *param_2)
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


// Reference entry 10257100; body size 41 bytes.
#line 1 "ENTRY_10257100"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10257100(int *param_2)
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


// Reference entry 10257140; body size 41 bytes.
#line 1 "ENTRY_10257140"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10257140(int *param_2)
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


// Reference entry 102571a0; body size 41 bytes.
#line 1 "ENTRY_102571a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102571a0(int *param_2)
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


// Reference entry 102571e0; body size 41 bytes.
#line 1 "ENTRY_102571e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102571e0(int *param_2)
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


// Reference entry 10257220; body size 24 bytes.
#line 1 "ENTRY_10257220"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10257220(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10257300; body size 48 bytes.
#line 1 "ENTRY_10257300"

undefined4 * __fastcall FUN_10257300(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x20), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10257dd0; body size 33 bytes.
#line 1 "ENTRY_10257dd0"

void __fastcall FUN_10257dd0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10257e00; body size 33 bytes.
#line 1 "ENTRY_10257e00"

void __fastcall FUN_10257e00(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10257e30; body size 33 bytes.
#line 1 "ENTRY_10257e30"

void __fastcall FUN_10257e30(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10257f20; body size 33 bytes.
#line 1 "ENTRY_10257f20"

void __fastcall FUN_10257f20(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10257f50; body size 60 bytes.
#line 1 "ENTRY_10257f50"

void __fastcall FUN_10257f50(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + 2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCArray);
  thunk_FUN_10254af0(*puVar1,param_1[3],puVar1);
  param_1[3] = (undefined4)(*puVar1);
  thunk_FUN_102589b0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10257fa0; body size 19 bytes.
#line 1 "ENTRY_10257fa0"

void __fastcall FUN_10257fa0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10257fc0; body size 19 bytes.
#line 1 "ENTRY_10257fc0"

void __fastcall FUN_10257fc0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10257fe0; body size 19 bytes.
#line 1 "ENTRY_10257fe0"

void __fastcall FUN_10257fe0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10258000; body size 19 bytes.
#line 1 "ENTRY_10258000"

void __fastcall FUN_10258000(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10258330; body size 60 bytes.
#line 1 "ENTRY_10258330"

void __fastcall FUN_10258330(int *param_1)

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


// Reference entry 10258390; body size 60 bytes.
#line 1 "ENTRY_10258390"

void __fastcall FUN_10258390(int *param_1)

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


// Reference entry 102583f0; body size 60 bytes.
#line 1 "ENTRY_102583f0"

void __fastcall FUN_102583f0(int *param_1)

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


// Reference entry 10258450; body size 60 bytes.
#line 1 "ENTRY_10258450"

void __fastcall FUN_10258450(int *param_1)

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


// Reference entry 102584b0; body size 19 bytes.
#line 1 "ENTRY_102584b0"

void __fastcall FUN_102584b0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x20);
  }
  return;
}


// Reference entry 102584d0; body size 33 bytes.
#line 1 "ENTRY_102584d0"

void __fastcall FUN_102584d0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10258500; body size 33 bytes.
#line 1 "ENTRY_10258500"

void __fastcall FUN_10258500(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10258530; body size 33 bytes.
#line 1 "ENTRY_10258530"

void __fastcall FUN_10258530(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10258560; body size 33 bytes.
#line 1 "ENTRY_10258560"

void __fastcall FUN_10258560(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10258590; body size 33 bytes.
#line 1 "ENTRY_10258590"

void __fastcall FUN_10258590(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 102585c0; body size 33 bytes.
#line 1 "ENTRY_102585c0"

void __fastcall FUN_102585c0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 102586c0; body size 28 bytes.
#line 1 "ENTRY_102586c0"

void __fastcall FUN_102586c0(int *param_1)

{
  thunk_FUN_10254f10(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x20);
  return;
}


// Reference entry 10258770; body size 19 bytes.
#line 1 "ENTRY_10258770"

void __fastcall FUN_10258770(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x20);
  }
  return;
}


// Reference entry 10258790; body size 17 bytes.
#line 1 "ENTRY_10258790"

void __fastcall FUN_10258790(undefined4 *param_1)

{
  thunk_FUN_10254af0(*param_1,param_1[1],param_1[2]);
  return;
}


// Reference entry 102587b0; body size 33 bytes.
#line 1 "ENTRY_102587b0"

void __fastcall FUN_102587b0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 102587e0; body size 33 bytes.
#line 1 "ENTRY_102587e0"

void __fastcall FUN_102587e0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10258810; body size 33 bytes.
#line 1 "ENTRY_10258810"

void __fastcall FUN_10258810(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10258840; body size 33 bytes.
#line 1 "ENTRY_10258840"

void __fastcall FUN_10258840(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10258870; body size 33 bytes.
#line 1 "ENTRY_10258870"

void __fastcall FUN_10258870(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 102588a0; body size 33 bytes.
#line 1 "ENTRY_102588a0"

void __fastcall FUN_102588a0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 102588d0; body size 28 bytes.
#line 1 "ENTRY_102588d0"

void __fastcall FUN_102588d0(int *param_1)

{
  thunk_FUN_10254f10(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x20);
  return;
}


// Reference entry 10258c20; body size 62 bytes.
#line 1 "ENTRY_10258c20"

void __fastcall FUN_10258c20(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCInAppPurchaseCallback);
  piVar1 = (int *)((int *)param_1[0xb]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1) + 2);
    param_1[0xb] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10258c70; body size 59 bytes.
#line 1 "ENTRY_10258c70"

void __fastcall FUN_10258c70(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCInAppPurchaseManager);
  thunk_FUN_10254f10(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x20);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10258cc0; body size 18 bytes.
#line 1 "ENTRY_10258cc0"

void __fastcall FUN_10258cc0(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0x30);
  }
  return;
}


// Reference entry 10258d00; body size 18 bytes.
#line 1 "ENTRY_10258d00"

void __fastcall FUN_10258d00(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0x30);
  }
  return;
}


// Reference entry 10258d40; body size 18 bytes.
#line 1 "ENTRY_10258d40"

void __fastcall FUN_10258d40(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0x30);
  }
  return;
}


// Reference entry 10258d80; body size 18 bytes.
#line 1 "ENTRY_10258d80"

void __fastcall FUN_10258d80(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0x40);
  }
  return;
}


// Reference entry 10258da0; body size 18 bytes.
#line 1 "ENTRY_10258da0"

void __fastcall FUN_10258da0(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0x40);
  }
  return;
}


// Reference entry 10258dc0; body size 18 bytes.
#line 1 "ENTRY_10258dc0"

void __fastcall FUN_10258dc0(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0x30);
  }
  return;
}


// Reference entry 102598d0; body size 45 bytes.
#line 1 "ENTRY_102598d0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102598d0(byte param_2)
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


// Reference entry 10259910; body size 45 bytes.
#line 1 "ENTRY_10259910"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10259910(byte param_2)
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


// Reference entry 10259950; body size 45 bytes.
#line 1 "ENTRY_10259950"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10259950(byte param_2)
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


// Reference entry 10259990; body size 45 bytes.
#line 1 "ENTRY_10259990"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10259990(byte param_2)
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


// Reference entry 10259a60; body size 60 bytes.
#line 1 "ENTRY_10259a60"

int __thiscall Recovered_Bulk::m_FUN_10259a60(byte param_2)
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


// Reference entry 10259ab0; body size 60 bytes.
#line 1 "ENTRY_10259ab0"

int __thiscall Recovered_Bulk::m_FUN_10259ab0(byte param_2)
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


// Reference entry 10259b00; body size 60 bytes.
#line 1 "ENTRY_10259b00"

int __thiscall Recovered_Bulk::m_FUN_10259b00(byte param_2)
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


// Reference entry 10259b50; body size 35 bytes.
#line 1 "ENTRY_10259b50"

undefined4 __thiscall Recovered_Bulk::m_FUN_10259b50(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  FUN_10257e60();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x40);
  }
  return (undefined4)(param_1);
}


// Reference entry 10259b80; body size 60 bytes.
#line 1 "ENTRY_10259b80"

int __thiscall Recovered_Bulk::m_FUN_10259b80(byte param_2)
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


// Reference entry 10259ca0; body size 33 bytes.
#line 1 "ENTRY_10259ca0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10259ca0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10259cd0; body size 33 bytes.
#line 1 "ENTRY_10259cd0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10259cd0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10259d00; body size 33 bytes.
#line 1 "ENTRY_10259d00"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10259d00(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10259d30; body size 33 bytes.
#line 1 "ENTRY_10259d30"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10259d30(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10259d60; body size 33 bytes.
#line 1 "ENTRY_10259d60"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10259d60(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1025a080; body size 25 bytes.
#line 1 "ENTRY_1025a080"

void __fastcall FUN_1025a080(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x20), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 1025a4f0; body size 58 bytes.
#line 1 "ENTRY_1025a4f0"

void __thiscall Recovered_Bulk::m_FUN_1025a4f0(char param_2)
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


// Reference entry 1025a540; body size 58 bytes.
#line 1 "ENTRY_1025a540"

void __thiscall Recovered_Bulk::m_FUN_1025a540(char param_2)
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


// Reference entry 1025a590; body size 58 bytes.
#line 1 "ENTRY_1025a590"

void __thiscall Recovered_Bulk::m_FUN_1025a590(char param_2)
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


// Reference entry 1025a5e0; body size 33 bytes.
#line 1 "ENTRY_1025a5e0"

void __thiscall Recovered_Bulk::m_FUN_1025a5e0(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  FUN_10257e60();
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,0x40);
  }
  return;
}


// Reference entry 1025a610; body size 58 bytes.
#line 1 "ENTRY_1025a610"

void __thiscall Recovered_Bulk::m_FUN_1025a610(char param_2)
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


// Reference entry 1025a660; body size 20 bytes.
#line 1 "ENTRY_1025a660"

void __thiscall Recovered_Bulk::m_FUN_1025a660(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10254af0(param_2,param_3,param_1);
  return;
}


// Reference entry 1025a680; body size 39 bytes.
#line 1 "ENTRY_1025a680"

void __thiscall Recovered_Bulk::m_FUN_1025a680(undefined4 param_2,undefined4 *param_3)
{
  int param_1 = (int )this;
  param_3 = (undefined4 *)((undefined4 *)*param_3);
  if (*(int **)(param_1 + 0x2c) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 8))(param_2,&param_3);
    return;
  }
                    
  std::_Xbad_function_call();
}


// Reference entry 1025a8d0; body size 21 bytes.
#line 1 "ENTRY_1025a8d0"

void __stdcall FUN_1025a8d0(undefined4 *param_1,undefined4 param_2)

{
  FUN_10259410(*param_1,param_2);
  return;
}


// Reference entry 1025a8f0; body size 39 bytes.
#line 1 "ENTRY_1025a8f0"

void __thiscall Recovered_Bulk::m_FUN_1025a8f0(undefined4 param_2,undefined4 *param_3)
{
  int param_1 = (int )this;
  param_3 = (undefined4 *)((undefined4 *)*param_3);
  if (*(int **)(param_1 + 0x2c) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 8))(param_2,&param_3);
    return;
  }
                    
  std::_Xbad_function_call();
}


// Reference entry 1025b220; body size 33 bytes.
#line 1 "ENTRY_1025b220"

void __fastcall FUN_1025b220(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1025b250; body size 33 bytes.
#line 1 "ENTRY_1025b250"

void __fastcall FUN_1025b250(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1025b280; body size 33 bytes.
#line 1 "ENTRY_1025b280"

void __fastcall FUN_1025b280(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1025b2b0; body size 33 bytes.
#line 1 "ENTRY_1025b2b0"

void __fastcall FUN_1025b2b0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1025b2e0; body size 33 bytes.
#line 1 "ENTRY_1025b2e0"

void __fastcall FUN_1025b2e0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1025b310; body size 33 bytes.
#line 1 "ENTRY_1025b310"

void __fastcall FUN_1025b310(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1025b6c0; body size 61 bytes.
#line 1 "ENTRY_1025b6c0"

void __thiscall Recovered_Bulk::m_FUN_1025b6c0(int *param_2)
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


// Reference entry 1025b890; body size 24 bytes.
#line 1 "ENTRY_1025b890"

void __fastcall FUN_1025b890(undefined4 *param_1)

{
  thunk_FUN_10254af0(*param_1,param_1[1],param_1);
  param_1[1] = (undefined4)(*param_1);
  return;
}


// Reference entry 1025ba50; body size 60 bytes.
#line 1 "ENTRY_1025ba50"

void __stdcall FUN_1025ba50(int param_1,int param_2)

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


// Reference entry 1025c4d0; body size 46 bytes.
#line 1 "ENTRY_1025c4d0"

void __fastcall FUN_1025c4d0(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 0x30));
    piVar2 = (int *)(*(int **)(param_1 + 0x34), 0);
    if ((int *)(piVar2) != (int *)(0x0)) {
      (**(code **)(*piVar2 + 4))(uVar1,piVar2);
    }
    thunk_FUN_10259740(uVar1,piVar2);
  }
  return;
}


// Reference entry 1025c520; body size 20 bytes.
#line 1 "ENTRY_1025c520"

SCStr * __thiscall Recovered_Bulk::m_FUN_1025c520(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0xc));
  return (SCStr *)(param_2);
}


// Reference entry 1025c540; body size 20 bytes.
#line 1 "ENTRY_1025c540"

SCStr * __thiscall Recovered_Bulk::m_FUN_1025c540(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x14));
  return (SCStr *)(param_2);
}


// Reference entry 1025c560; body size 20 bytes.
#line 1 "ENTRY_1025c560"

SCStr * __thiscall Recovered_Bulk::m_FUN_1025c560(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x10));
  return (SCStr *)(param_2);
}


// Reference entry 1025c770; body size 20 bytes.
#line 1 "ENTRY_1025c770"

SCStr * __thiscall Recovered_Bulk::m_FUN_1025c770(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 8));
  return (SCStr *)(param_2);
}


// Reference entry 1025c8e0; body size 32 bytes.
#line 1 "ENTRY_1025c8e0"

void __thiscall Recovered_Bulk::m_FUN_1025c8e0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x2c) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 8))(param_2,&param_3);
  }
  return;
}


// Reference entry 1025cbd0; body size 59 bytes.
#line 1 "ENTRY_1025cbd0"

void __thiscall Recovered_Bulk::m_FUN_1025cbd0(undefined4 *param_2)
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
  thunk_FUN_10254c20(puVar1,param_2);
  return;
}


// Reference entry 1025d360; body size 16 bytes.
#line 1 "ENTRY_1025d360"

void FUN_1025d360(void)

{
  if ((int *)(DAT_121a0ae4) != (int *)(0x0)) {
                    
                    
    (**(code **)(*(int *)(uint)(DAT_121a0ae4) + 0x18))();
    return;
  }
  return;
}


// Reference entry 1025d630; body size 41 bytes.
#line 1 "ENTRY_1025d630"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1025d630(int *param_2)
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


// Reference entry 1025d670; body size 41 bytes.
#line 1 "ENTRY_1025d670"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1025d670(int *param_2)
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


// Reference entry 1025d740; body size 19 bytes.
#line 1 "ENTRY_1025d740"

void __fastcall FUN_1025d740(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1025d840; body size 60 bytes.
#line 1 "ENTRY_1025d840"

void __fastcall FUN_1025d840(int *param_1)

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


// Reference entry 1025d9e0; body size 45 bytes.
#line 1 "ENTRY_1025d9e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1025d9e0(byte param_2)
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


// Reference entry 1025da20; body size 33 bytes.
#line 1 "ENTRY_1025da20"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1025da20(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1025db40; body size 46 bytes.
#line 1 "ENTRY_1025db40"

SCStr * __thiscall Recovered_Bulk::m_FUN_1025db40(SCStr *param_2)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 8) == (int *)((0x0))) {
    ((SCStr *)(param_2))->int_allocRep("");
    return (SCStr *)(param_2);
  }
  (**(code **)(**(int **)(param_1 + 8) + 0x30))(param_2);
  return (SCStr *)(param_2);
}


// Reference entry 1025db80; body size 46 bytes.
#line 1 "ENTRY_1025db80"

SCStr * __thiscall Recovered_Bulk::m_FUN_1025db80(SCStr *param_2)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 8) == (int *)((0x0))) {
    ((SCStr *)(param_2))->int_allocRep("");
    return (SCStr *)(param_2);
  }
  (**(code **)(**(int **)(param_1 + 8) + 0x14))(param_2);
  return (SCStr *)(param_2);
}


// Reference entry 1025dbc0; body size 46 bytes.
#line 1 "ENTRY_1025dbc0"

SCStr * __thiscall Recovered_Bulk::m_FUN_1025dbc0(SCStr *param_2)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 8) == (int *)((0x0))) {
    ((SCStr *)(param_2))->int_allocRep("");
    return (SCStr *)(param_2);
  }
  (**(code **)(**(int **)(param_1 + 8) + 0x1c))(param_2);
  return (SCStr *)(param_2);
}


// Reference entry 1025dc00; body size 46 bytes.
#line 1 "ENTRY_1025dc00"

SCStr * __thiscall Recovered_Bulk::m_FUN_1025dc00(SCStr *param_2)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 8) == (int *)((0x0))) {
    ((SCStr *)(param_2))->int_allocRep("");
    return (SCStr *)(param_2);
  }
  (**(code **)(**(int **)(param_1 + 8) + 0x2c))(param_2);
  return (SCStr *)(param_2);
}


// Reference entry 1025df30; body size 17 bytes.
#line 1 "ENTRY_1025df30"

uint __fastcall FUN_1025df30(int param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 8) == (int *)((0x0))) {
    return (uint)(in_EAX & 0xffffff00);
  }
                    
                    
  uVar1 = (uint)((**(code **)(**(int **)(param_1 + 8) + 0x18))(), 0);
  return (uint)(uVar1);
}


// Reference entry 1025e1d0; body size 24 bytes.
#line 1 "ENTRY_1025e1d0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1025e1d0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1025e250; body size 59 bytes.
#line 1 "ENTRY_1025e250"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1025e250(byte *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCTime);
  param_1[2] = (undefined4)((uint)*param_2);
  param_1[3] = (undefined4)((uint)param_2[1]);
  param_1[4] = (undefined4)((uint)param_2[2]);
  return (undefined4 *)(param_1);
}


// Reference entry 1025e350; body size 45 bytes.
#line 1 "ENTRY_1025e350"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1025e350(byte param_2)
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


// Reference entry 1025e390; body size 33 bytes.
#line 1 "ENTRY_1025e390"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1025e390(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1025e3c0; body size 45 bytes.
#line 1 "ENTRY_1025e3c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1025e3c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x14);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1025e510; body size 21 bytes.
#line 1 "ENTRY_1025e510"

SCStr * __stdcall FUN_1025e510(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCTime");
  return (SCStr *)(param_1);
}


// Reference entry 1025e530; body size 58 bytes.
#line 1 "ENTRY_1025e530"

undefined4 __thiscall Recovered_Bulk::m_FUN_1025e530(undefined4 *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)((**(code **)(*(int *)*param_2 + 0x38))(), 0);
  if (*(int *)(param_1 + 0x10) == (int)(iVar1)) {
    iVar1 = (int)((**(code **)(*(int *)*param_2 + 0x30))(), 0);
    if (*(int *)(param_1 + 0xc) == (int)(iVar1)) {
      iVar1 = (int)((**(code **)(*(int *)*param_2 + 0x1c))(), 0);
      if (*(int *)(param_1 + 8) == (int)(iVar1)) {
        return (undefined4)(1);
      }
    }
  }
  return (undefined4)(0);
}


// Reference entry 1025e580; body size 19 bytes.
#line 1 "ENTRY_1025e580"

int __fastcall FUN_1025e580(int param_1)

{
  return (int)((*(int *)(param_1 + 8) + 0xbU) % 0xc + 1);
}


// Reference entry 1025e680; body size 24 bytes.
#line 1 "ENTRY_1025e680"

undefined1 __fastcall FUN_1025e680(int param_1)

{
  if (((*(uint *)(param_1 + 8) < 0x18) && (*(uint *)(param_1 + 0xc) < 0x3c)) &&
     (*(uint *)(param_1 + 0x10) < 0x3c)) {
    return (undefined1)(1);
  }
  return (undefined1)(0);
}


// Reference entry 1025e800; body size 40 bytes.
#line 1 "ENTRY_1025e800"

void __thiscall Recovered_Bulk::m_FUN_1025e800(char param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  
  uVar1 = (uint)(*(uint *)(param_1 + 8));
  if (uVar1 < 0xc) {
    if (param_2 != '\0') {
      *(uint*)(param_1 + 8) = (uint)(uVar1 + 0xc);
      return;
    }
  }
  else if (param_2 == '\0') {
    *(uint*)(param_1 + 8) = (uint)(uVar1 - 0xc);
  }
  return;
}


// Reference entry 1025e860; body size 50 bytes.
#line 1 "ENTRY_1025e860"

void FUN_1025e860(int *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  if (((int *)(param_1) != (int *)(0x0)) && ((undefined1 *)(param_2) != (undefined1 *)(0x0))) {
    uVar1 = (undefined1)((**(code **)(*param_1 + 0x1c))(), 0);
    *param_2 = (undefined1)(uVar1);
    uVar1 = (undefined1)((**(code **)(*param_1 + 0x30))(), 0);
    param_2[1] = (undefined1)(uVar1);
    uVar1 = (undefined1)((**(code **)(*param_1 + 0x38))(), 0);
    param_2[2] = (undefined1)(uVar1);
  }
  return;
}


// Reference entry 1025e8a0; body size 19 bytes.
#line 1 "ENTRY_1025e8a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1025e8a0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(param_2[1]);
  return (undefined4 *)(param_1);
}


// Reference entry 1025e8c0; body size 35 bytes.
#line 1 "ENTRY_1025e8c0"

uint __thiscall Recovered_Bulk::m_FUN_1025e8c0(uint *param_2)
{
  uint *param_1 = (uint *)this;
  uint *puVar1;
  
  puVar1 = (uint *)((uint *)*param_2);
  if ((*param_1 < (uint)((puVar1))) && (param_2 = (uint *)((uint *)((param_1[1] - 1) + *param_1)),(uint *)((param_2)) < (uint *)(puVar1))) {
    return (uint)(((uint)((int3)((uint)param_2 >> 8)) << 8 | (uint)(1)));
  }
  return (uint)((uint)param_2 & 0xffffff00);
}


// Reference entry 1025e8f0; body size 35 bytes.
#line 1 "ENTRY_1025e8f0"

uint __thiscall Recovered_Bulk::m_FUN_1025e8f0(uint *param_2)
{
  uint *param_1 = (uint *)this;
  uint *puVar1;
  
  puVar1 = (uint *)((uint *)*param_2);
  if ((*param_1 < (uint)((puVar1))) && (param_2 = (uint *)((uint *)((param_1[1] - 1) + *param_1)),(uint *)((param_2)) < (uint *)(puVar1))) {
    return (uint)(((uint)((int3)((uint)param_2 >> 8)) << 8 | (uint)(1)));
  }
  return (uint)((uint)param_2 & 0xffffff00);
}


// Reference entry 1025e920; body size 55 bytes.
#line 1 "ENTRY_1025e920"

uint * __thiscall Recovered_Bulk::m_FUN_1025e920(uint *param_2)
{
  uint *param_1 = (uint *)this;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_2[1] != 0) {
    uVar1 = (uint)(*param_2);
    uVar3 = (uint)(*param_1);
    uVar4 = (uint)((param_2[1] - 1) + uVar1);
    uVar2 = (uint)((param_1[1] - 1) + uVar3);
    if (uVar1 <= uVar3) {
      uVar3 = (uint)(uVar1);
    }
    *param_1 = (uint)(uVar3);
    if (uVar2 <= uVar4) {
      uVar2 = (uint)(uVar4);
    }
    param_1[1] = (uint)((uVar2 - uVar3) + 1);
  }
  return (uint *)(param_1);
}


// Reference entry 1025e970; body size 61 bytes.
#line 1 "ENTRY_1025e970"

undefined4 __thiscall Recovered_Bulk::m_FUN_1025e970(uint *param_2)
{
  uint *param_1 = (uint *)this;
  if (param_2[1] == 0) {
    return (undefined4)(1);
  }
  if ((*param_1 <= (param_2[1] - 1) + *param_2) && (*param_2 <= (param_1[1] - 1) + *param_1)) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 1025e9c0; body size 62 bytes.
#line 1 "ENTRY_1025e9c0"

undefined4 __thiscall Recovered_Bulk::m_FUN_1025e9c0(int *param_2)
{
  uint *param_1 = (uint *)this;
  if (param_2[1] == 0) {
    return (undefined4)(1);
  }
  if ((*param_1 <= (uint)(*param_2 + param_2[1])) && (*param_2 - 1U <= (param_1[1] - 1) + *param_1)) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 1025ea10; body size 19 bytes.
#line 1 "ENTRY_1025ea10"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1025ea10(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(param_2[1]);
  return (undefined4 *)(param_1);
}


// Reference entry 1025ed20; body size 60 bytes.
#line 1 "ENTRY_1025ed20"

int __thiscall Recovered_Bulk::m_FUN_1025ed20(SCStr *param_2)
{
  int *param_1 = (int *)this;
  bool bVar1;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_1025ed70((uint)&local_c,param_2);
  if ((*(char *)(local_4 + 0xd) == '\0') &&
     (bVar1 = (bool)(((SCStr *)(param_2))->op_lt((SCStr *)(local_4 + 0x10)), 0), !bVar1)) {
    return (int)(local_4);
  }
  return (int)(*param_1);
}


// Reference entry 1025f100; body size 41 bytes.
#line 1 "ENTRY_1025f100"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1025f100(int *param_2)
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


// Reference entry 1025f140; body size 24 bytes.
#line 1 "ENTRY_1025f140"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1025f140(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1025f340; body size 58 bytes.
#line 1 "ENTRY_1025f340"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1025f340(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_1025f3f0(param_3,param_2);
  param_1[6] = (undefined4)(0x400);
  *(undefined1*)(param_1 + 7) = (undefined1)(0);
  param_1[8] = (undefined4)(3);
  *(undefined2*)(param_1 + 9) = (undefined2)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCRadioURLActionStringInput);
  return (undefined4 *)(param_1);
}


// Reference entry 1025f810; body size 19 bytes.
#line 1 "ENTRY_1025f810"

void __fastcall FUN_1025f810(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1025f830; body size 19 bytes.
#line 1 "ENTRY_1025f830"

void __fastcall FUN_1025f830(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1025f8c0; body size 19 bytes.
#line 1 "ENTRY_1025f8c0"

void __fastcall FUN_1025f8c0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x14);
  }
  return;
}


// Reference entry 1025f970; body size 19 bytes.
#line 1 "ENTRY_1025f970"

void __fastcall FUN_1025f970(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x14);
  }
  return;
}


// Reference entry 1025fe70; body size 45 bytes.
#line 1 "ENTRY_1025fe70"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1025fe70(byte param_2)
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


// Reference entry 1025feb0; body size 45 bytes.
#line 1 "ENTRY_1025feb0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1025feb0(byte param_2)
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


// Reference entry 10260200; body size 33 bytes.
#line 1 "ENTRY_10260200"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10260200(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10260460; body size 25 bytes.
#line 1 "ENTRY_10260460"

void __fastcall FUN_10260460(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x14), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 10260fb0; body size 21 bytes.
#line 1 "ENTRY_10260fb0"

SCStr * __stdcall FUN_10260fb0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("Shares");
  return (SCStr *)(param_1);
}


// Reference entry 10260fd0; body size 21 bytes.
#line 1 "ENTRY_10260fd0"

SCStr * __stdcall FUN_10260fd0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIStringInput");
  return (SCStr *)(param_1);
}


// Reference entry 10260ff0; body size 21 bytes.
#line 1 "ENTRY_10260ff0"

SCStr * __stdcall FUN_10260ff0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIStringInput");
  return (SCStr *)(param_1);
}


// Reference entry 10261170; body size 24 bytes.
#line 1 "ENTRY_10261170"

char __fastcall FUN_10261170(int param_1)

{
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)((SCStr *)(param_1 + 0x18)))->op_eq("US"), 0);
  return (char)(bVar1 + '\x03');
}


// Reference entry 102611e0; body size 27 bytes.
#line 1 "ENTRY_102611e0"

undefined4 __thiscall Recovered_Bulk::m_FUN_102611e0(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined4 unaff_EDI;
  
  (**(code **)(**(int **)(param_1 + 0x10) + 0x18))(param_2,param_1 + 0xc);
  return (undefined4)(unaff_EDI);
}


// Reference entry 10261210; body size 30 bytes.
#line 1 "ENTRY_10261210"

undefined4 __thiscall Recovered_Bulk::m_FUN_10261210(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined4 unaff_EDI;
  
  (**(code **)(**(int **)(param_1 + 0x14) + 0xd0))(param_2,param_1 + 0xc);
  return (undefined4)(unaff_EDI);
}


// Reference entry 10261310; body size 20 bytes.
#line 1 "ENTRY_10261310"

SCStr * __thiscall Recovered_Bulk::m_FUN_10261310(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 8));
  return (SCStr *)(param_2);
}


// Reference entry 10261330; body size 20 bytes.
#line 1 "ENTRY_10261330"

SCStr * __thiscall Recovered_Bulk::m_FUN_10261330(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x14));
  return (SCStr *)(param_2);
}


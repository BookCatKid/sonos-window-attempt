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
extern "C" void LAB_10002171(void);
extern "C" void LAB_10002eeb(void);
extern "C" void LAB_100064c9(void);
extern "C" void LAB_1000db57(void);
extern "C" void LAB_1000dbed(void);
extern "C" void LAB_1000e23c(void);
extern "C" void LAB_10010816(void);
extern "C" void LAB_100131d8(void);
extern "C" void LAB_10013543(void);
extern "C" void LAB_10013746(void);
extern "C" void LAB_10013c5f(void);
extern "C" void LAB_10013f1b(void);
extern "C" void LAB_10015a91(void);
extern "C" void LAB_10015feb(void);
extern "C" void LAB_10016d51(void);
extern "C" void LAB_1001718e(void);
extern "C" void LAB_100189c1(void);
extern "C" void LAB_1001ba1d(void);
extern "C" void LAB_1001c887(void);
extern "C" void LAB_1001c891(void);
extern "C" void LAB_1001c9c2(void);
extern "C" void LAB_1001ec63(void);
extern "C" void LAB_1001f8ed(void);
extern "C" void LAB_1001fd9d(void);
extern "C" void LAB_10020f9a(void);
extern "C" void LAB_10021ac1(void);
extern "C" void LAB_100238df(void);
extern "C" void LAB_10024a7d(void);
extern "C" void LAB_10024f14(void);
extern "C" void LAB_10025360(void);
extern "C" void LAB_10026b8e(void);
extern "C" void LAB_10028740(void);
extern "C" void LAB_10028c77(void);
extern "C" void LAB_1002a4cd(void);
extern "C" void LAB_1002a973(void);
extern "C" void LAB_1002b855(void);
extern "C" void LAB_1002dd85(void);
extern "C" void LAB_100354f4(void);
extern "C" void LAB_10036af2(void);
extern "C" void LAB_10036c23(void);
extern "C" void LAB_1003718c(void);
extern "C" void LAB_100373d5(void);
extern "C" void LAB_10037bc8(void);
extern "C" void LAB_100382f3(void);
extern "C" void LAB_1003986a(void);
extern "C" void LAB_100399be(void);
extern "C" void LAB_1003a1de(void);
extern "C" void LAB_1004142f(void);
extern "C" void LAB_1004204b(void);
extern "C" void LAB_10042f64(void);
extern "C" void LAB_10043879(void);
extern "C" void LAB_100443d2(void);
extern "C" void LAB_10044a85(void);
extern "C" void LAB_10044dff(void);
extern "C" void LAB_10045df9(void);
extern "C" void LAB_10047adc(void);
extern "C" void LAB_100488b0(void);
extern "C" void LAB_1004cb77(void);
extern "C" void LAB_1004e904(void);
extern "C" void LAB_1004f935(void);
extern "C" void LAB_1005040c(void);
extern "C" void LAB_100518e8(void);
extern "C" void LAB_1005273e(void);
extern "C" void LAB_100553ad(void);
extern "C" void LAB_1005855d(void);
extern "C" void LAB_10059403(void);
extern "C" void LAB_10059a93(void);
extern "C" void LAB_1005ba00(void);
extern "C" void LAB_1005c1e9(void);
extern "C" void LAB_1005c315(void);
extern "C" void LAB_1005e133(void);
extern "C" void LAB_1005eb56(void);
extern "C" void LAB_1005fd67(void);
extern "C" void LAB_100617c0(void);
extern "C" void LAB_10062f67(void);
extern "C" void LAB_100638ae(void);
extern "C" void LAB_10065cc1(void);
extern "C" void LAB_10066437(void);
extern "C" void LAB_1006653b(void);
extern "C" void LAB_10066e8c(void);
extern "C" void LAB_10068caf(void);
extern "C" void LAB_10069b96(void);
extern "C" void LAB_1006a316(void);
extern "C" void LAB_1006a9b5(void);
extern "C" void LAB_1006ac2b(void);
extern "C" void LAB_1006acda(void);
extern "C" void LAB_1006c84b(void);
extern "C" void LAB_10070662(void);
extern "C" void LAB_10070fbd(void);
extern "C" void LAB_10071b61(void);
extern "C" void LAB_10072e58(void);
extern "C" void LAB_10073272(void);
extern "C" void LAB_1007330d(void);
extern "C" void LAB_10073966(void);
extern "C" void LAB_10073eb1(void);
extern "C" void LAB_1007537e(void);
extern "C" void LAB_100759aa(void);
extern "C" void LAB_10077a61(void);
extern "C" void LAB_10078150(void);
extern "C" void LAB_1007a7a2(void);
extern "C" void LAB_1007f59a(void);
extern "C" void LAB_1007f9ff(void);
extern "C" void LAB_10080ed1(void);
extern "C" void LAB_10081697(void);
extern "C" void LAB_1008198f(void);
extern "C" void LAB_10085b11(void);
extern "C" void LAB_1008751a(void);
extern "C" void LAB_10087529(void);
extern "C" void LAB_100883ca(void);
extern "C" void LAB_100883de(void);
extern "C" void LAB_1008878a(void);
extern "C" void LAB_1008a436(void);
extern "C" void LAB_1008ac38(void);
extern "C" void LAB_1008ca83(void);
extern "C" void LAB_1008ecbb(void);
extern "C" void LAB_1008fc0b(void);
extern "C" void LAB_100904df(void);
extern "C" void LAB_100913f8(void);
extern "C" void LAB_10091a06(void);
extern "C" void LAB_10093847(void);
extern "C" void LAB_10094af8(void);
extern "C" void LAB_10094b89(void);
extern "C" void LAB_10095c14(void);
extern "C" void LAB_10096673(void);
extern "C" void LAB_10099378(void);
extern "C" void LAB_10099a2b(void);
extern "C" void LAB_10099f30(void);
extern "C" void LAB_10207bc8(void);
extern "C" void LAB_10207c40(void);
extern "C" void LAB_10217aa4(void);
extern "C" void LAB_10218f20(void);
extern "C" void LAB_1021ab7c(void);
extern "C" void LAB_10257e60(void);
extern "C" void LAB_10259410(void);
extern "C" void LAB_1148a05a(void);
extern "C" void LAB_1148cded(void);
extern "C" void LAB_1148cdf3(void);
extern "C" void LAB_1148ce05(void);
extern "C" void LAB_1148ce4d(void);
extern "C" void LAB_1186d2ee(void);
extern "C" void LAB_1186d2f4(void);
extern "C" void LAB_1186d97c(void);
extern "C" void LAB_1186f434(void);
extern "C" void LAB_11870554(void);
extern "C" void LAB_11870564(void);
extern "C" void LAB_11870574(void);
extern "C" void LAB_11870584(void);
extern "C" void LAB_11870594(void);
extern "C" void LAB_118705a4(void);
extern "C" void LAB_118705b8(void);
extern "C" void LAB_11870638(void);
extern "C" void LAB_1187064c(void);
extern "C" void LAB_11870660(void);
extern "C" void LAB_118706a8(void);
extern "C" void LAB_118706c0(void);
extern "C" void LAB_11870740(void);
extern "C" void LAB_11870768(void);
extern "C" void LAB_1187078c(void);
extern "C" void LAB_118707b0(void);
extern "C" void LAB_11870af0(void);
extern "C" void LAB_11870ba8(void);
extern "C" void LAB_11870c40(void);
extern "C" void LAB_11870c64(void);
extern "C" void LAB_11870c8c(void);
extern "C" void LAB_11870d28(void);
extern "C" void LAB_11870f28(void);
extern "C" void LAB_11870f50(void);
extern "C" void LAB_11871034(void);
extern "C" void LAB_11871058(void);
extern "C" void LAB_118711d4(void);
extern "C" void LAB_11871274(void);
extern "C" void LAB_11878fbc(void);
extern "C" void LAB_1187aa88(void);
extern "C" void LAB_1187b054(void);
extern "C" void LAB_1187db20(void);
extern "C" void LAB_1187e87c(void);
extern "C" void LAB_1187e914(void);
extern "C" void LAB_1187f604(void);
extern "C" void LAB_1187f834(void);
extern "C" void LAB_11880164(void);
extern "C" void LAB_1188086c(void);
extern "C" void LAB_11881068(void);
extern "C" void LAB_118814e8(void);
extern "C" void LAB_118815a8(void);
extern "C" void LAB_11881da4(void);
extern "C" void LAB_1188224c(void);
extern "C" void LAB_1188230c(void);
extern "C" void LAB_11882378(void);
extern "C" void LAB_11882ff0(void);
extern "C" void LAB_118836a4(void);
extern "C" void LAB_118836cc(void);
extern "C" void LAB_118840e4(void);
extern "C" void LAB_1188418c(void);
extern "C" void LAB_11884250(void);
extern "C" void LAB_11884320(void);
extern "C" void LAB_1188476c(void);
extern "C" void LAB_11885c7c(void);
extern "C" void LAB_11885cc4(void);
extern "C" void LAB_118875c8(void);
extern "C" void LAB_11887604(void);
extern "C" void LAB_11887644(void);
extern "C" void LAB_11887680(void);
extern "C" void LAB_11887690(void);
extern "C" void LAB_1188798c(void);
extern "C" void LAB_118885c0(void);
extern "C" void LAB_118885f8(void);
extern "C" void LAB_118895c4(void);
extern "C" void LAB_11889b00(void);
extern "C" void LAB_11889b78(void);
extern "C" void LAB_1188a964(void);
extern "C" void LAB_1188a980(void);
extern "C" void LAB_1188aa5c(void);
extern "C" void LAB_1188aa80(void);
extern "C" void LAB_1188aaa4(void);
extern "C" void LAB_1188acc0(void);
extern "C" void LAB_1188ad1c(void);
extern "C" void LAB_1188aea4(void);
extern "C" void LAB_1188b074(void);
extern "C" void LAB_12126b84(void);
extern "C" void LAB_121a0e68(void);
extern "C" void LAB_122f5650(void);
extern "C" void LAB_122fc160(void);
extern "C" void LAB_122fc164(void);
extern "C" void LAB_122fc888(void);
extern "C" void LAB_122fc90c(void);
extern "C" void LAB_122fc924(void);
extern "C" void LAB_122fc9c0(void);


struct Recovered_Bulk { char _pad; int * __thiscall m_FUN_101a2b10(int *param_2); template<class... A> int m_FUN_101a2b10(A...); int * __thiscall m_FUN_101a2b50(int *param_2); template<class... A> int m_FUN_101a2b50(A...); int * __thiscall m_FUN_101a2b90(int *param_2); template<class... A> int m_FUN_101a2b90(A...); void __thiscall m_FUN_101a3370(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_101a3370(A...); bool __thiscall m_FUN_101a4420(undefined4 *param_2); template<class... A> int m_FUN_101a4420(A...); bool __thiscall m_FUN_101a4460(undefined1 *param_2); template<class... A> int m_FUN_101a4460(A...); bool __thiscall m_FUN_101a4d40(undefined4 *param_2); template<class... A> int m_FUN_101a4d40(A...); bool __thiscall m_FUN_101a4d80(undefined1 *param_2); template<class... A> int m_FUN_101a4d80(A...); undefined4 *  __thiscall m_FUN_101a5590(ushort *param_2); template<class... A> int m_FUN_101a5590(A...); undefined4 * __thiscall m_FUN_101a8d90(int *param_2); template<class... A> int m_FUN_101a8d90(A...); undefined4 * __thiscall m_FUN_101a8dd0(int *param_2); template<class... A> int m_FUN_101a8dd0(A...); undefined4 * __thiscall m_FUN_101a8df0(int *param_2); template<class... A> int m_FUN_101a8df0(A...); undefined4 __thiscall m_FUN_101a93e0(byte param_2); template<class... A> int m_FUN_101a93e0(A...); undefined4 * __thiscall m_FUN_101a9410(byte param_2); template<class... A> int m_FUN_101a9410(A...); undefined4 * __thiscall m_FUN_101a9450(byte param_2); template<class... A> int m_FUN_101a9450(A...); undefined4 * __thiscall m_FUN_101a9490(byte param_2); template<class... A> int m_FUN_101a9490(A...); void __thiscall m_FUN_101a9d20(undefined4 param_2); template<class... A> int m_FUN_101a9d20(A...); void __thiscall m_FUN_101aa430(uint param_2); template<class... A> int m_FUN_101aa430(A...); void __thiscall m_FUN_101ab320(int *param_2); template<class... A> int m_FUN_101ab320(A...); void __thiscall m_FUN_101ab9e0(int param_2); template<class... A> int m_FUN_101ab9e0(A...); undefined4 * __thiscall m_FUN_101ac3a0(int param_2); template<class... A> int m_FUN_101ac3a0(A...); undefined4 * __thiscall m_FUN_101ac420(int *param_2); template<class... A> int m_FUN_101ac420(A...); undefined4 * __thiscall m_FUN_101ac990(int *param_2); template<class... A> int m_FUN_101ac990(A...); undefined4 * __thiscall m_FUN_101aced0(int param_2); template<class... A> int m_FUN_101aced0(A...); undefined4 * __thiscall m_FUN_101b1580(byte param_2); template<class... A> int m_FUN_101b1580(A...); undefined4 * __thiscall m_FUN_101b15c0(byte param_2); template<class... A> int m_FUN_101b15c0(A...); undefined4 * __thiscall m_FUN_101b1600(byte param_2); template<class... A> int m_FUN_101b1600(A...); undefined4 * __thiscall m_FUN_101b1640(byte param_2); template<class... A> int m_FUN_101b1640(A...); undefined4 * __thiscall m_FUN_101b1730(byte param_2); template<class... A> int m_FUN_101b1730(A...); undefined4 * __thiscall m_FUN_101b1760(byte param_2); template<class... A> int m_FUN_101b1760(A...); undefined4 __thiscall m_FUN_101b19d0(byte param_2); template<class... A> int m_FUN_101b19d0(A...); undefined4 * __thiscall m_FUN_101b1aa0(byte param_2); template<class... A> int m_FUN_101b1aa0(A...); undefined4 * __thiscall m_FUN_101b1ae0(byte param_2); template<class... A> int m_FUN_101b1ae0(A...); undefined4 * __thiscall m_FUN_101b1b10(byte param_2); template<class... A> int m_FUN_101b1b10(A...); undefined4 * __thiscall m_FUN_101b1b40(byte param_2); template<class... A> int m_FUN_101b1b40(A...); undefined4 * __thiscall m_FUN_101b1b70(byte param_2); template<class... A> int m_FUN_101b1b70(A...); SCLibrary * __thiscall m_FUN_101b1ba0(byte param_2); template<class... A> int m_FUN_101b1ba0(A...); undefined4 * __thiscall m_FUN_101b1bd0(byte param_2); template<class... A> int m_FUN_101b1bd0(A...); void __thiscall m_FUN_101b2980(int *param_2); template<class... A> int m_FUN_101b2980(A...); void __thiscall m_FUN_101b29d0(int *param_2); template<class... A> int m_FUN_101b29d0(A...); void __thiscall m_FUN_101b2a20(int *param_2); template<class... A> int m_FUN_101b2a20(A...); void __thiscall m_FUN_101b2a70(int *param_2); template<class... A> int m_FUN_101b2a70(A...); void __thiscall m_FUN_101b2ac0(int param_2); template<class... A> int m_FUN_101b2ac0(A...); undefined4 __thiscall m_FUN_101b2d50(int param_2); template<class... A> int m_FUN_101b2d50(A...); undefined4 __thiscall m_FUN_101b2d90(int param_2); template<class... A> int m_FUN_101b2d90(A...); undefined4 __thiscall m_FUN_101b2dd0(int param_2); template<class... A> int m_FUN_101b2dd0(A...); undefined4 __thiscall m_FUN_101b4d70(int param_2); template<class... A> int m_FUN_101b4d70(A...); int * __thiscall m_FUN_101b5290(int *param_2); template<class... A> int m_FUN_101b5290(A...); undefined4 __thiscall m_FUN_101b5e00(undefined4 param_2,int param_3); template<class... A> int m_FUN_101b5e00(A...); int __thiscall m_FUN_101b5e50(int param_2); template<class... A> int m_FUN_101b5e50(A...); bool __thiscall m_FUN_101b7cd0(int param_2); template<class... A> int m_FUN_101b7cd0(A...); void __thiscall m_FUN_101b7f90(int *param_2); template<class... A> int m_FUN_101b7f90(A...); void __thiscall m_FUN_101b7fb0(int *param_2); template<class... A> int m_FUN_101b7fb0(A...); undefined4 __thiscall m_FUN_101b7fd0(int param_2); template<class... A> int m_FUN_101b7fd0(A...); void __thiscall m_FUN_101b8080(int *param_2); template<class... A> int m_FUN_101b8080(A...); undefined4 * __thiscall m_FUN_101b80e0(int *param_2); template<class... A> int m_FUN_101b80e0(A...); undefined4 * __thiscall m_FUN_101b8120(int *param_2); template<class... A> int m_FUN_101b8120(A...); undefined4 * __thiscall m_FUN_101b83f0(byte param_2); template<class... A> int m_FUN_101b83f0(A...); undefined4 * __thiscall m_FUN_101b8430(byte param_2); template<class... A> int m_FUN_101b8430(A...); char * __thiscall m_FUN_101b8530(char *param_2); template<class... A> int m_FUN_101b8530(A...); bool __thiscall m_FUN_101b8740(char *param_2); template<class... A> int m_FUN_101b8740(A...); SCStr * __thiscall m_FUN_101b87d0(SCStr *param_2); template<class... A> int m_FUN_101b87d0(A...); void __thiscall m_FUN_101b8f90(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_101b8f90(A...); undefined4 * __thiscall m_FUN_101b9190(undefined4 param_2); template<class... A> int m_FUN_101b9190(A...); undefined4 * __thiscall m_FUN_101b9650(int *param_2); template<class... A> int m_FUN_101b9650(A...); undefined4 * __thiscall m_FUN_101b9700(int *param_2); template<class... A> int m_FUN_101b9700(A...); undefined4 * __thiscall m_FUN_101b9890(int param_2); template<class... A> int m_FUN_101b9890(A...); undefined4 * __thiscall m_FUN_101ba7d0(byte param_2); template<class... A> int m_FUN_101ba7d0(A...); undefined4 * __thiscall m_FUN_101ba800(byte param_2); template<class... A> int m_FUN_101ba800(A...); undefined4 * __thiscall m_FUN_101ba840(byte param_2); template<class... A> int m_FUN_101ba840(A...); undefined4 __thiscall m_FUN_101ba880(byte param_2); template<class... A> int m_FUN_101ba880(A...); undefined4 * __thiscall m_FUN_101ba8b0(byte param_2); template<class... A> int m_FUN_101ba8b0(A...); undefined4 __thiscall m_FUN_101ba8e0(byte param_2); template<class... A> int m_FUN_101ba8e0(A...); undefined4 * __thiscall m_FUN_101ba910(byte param_2); template<class... A> int m_FUN_101ba910(A...); undefined4 * __thiscall m_FUN_101ba950(byte param_2); template<class... A> int m_FUN_101ba950(A...); undefined4 * __thiscall m_FUN_101ba980(byte param_2); template<class... A> int m_FUN_101ba980(A...); undefined4 * __thiscall m_FUN_101baa50(byte param_2); template<class... A> int m_FUN_101baa50(A...); void __thiscall m_FUN_101bac00(int *param_2); template<class... A> int m_FUN_101bac00(A...); void __thiscall m_FUN_101bac50(int *param_2); template<class... A> int m_FUN_101bac50(A...); void __thiscall m_FUN_101bad20(int param_2); template<class... A> int m_FUN_101bad20(A...); void __thiscall m_FUN_101bad70(int param_2); template<class... A> int m_FUN_101bad70(A...); void __thiscall m_FUN_101bc430(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_101bc430(A...); void __thiscall m_FUN_101bc460(int *param_2); template<class... A> int m_FUN_101bc460(A...); void __thiscall m_FUN_101bc480(int *param_2); template<class... A> int m_FUN_101bc480(A...); undefined4 * __thiscall m_FUN_101bdfa0(int *param_2); template<class... A> int m_FUN_101bdfa0(A...); undefined4 * __thiscall m_FUN_101be2b0(byte param_2); template<class... A> int m_FUN_101be2b0(A...); undefined4 * __thiscall m_FUN_101be2f0(byte param_2); template<class... A> int m_FUN_101be2f0(A...); void __thiscall m_FUN_101be3c0(int *param_2); template<class... A> int m_FUN_101be3c0(A...); void __thiscall m_FUN_101be410(SCStr *param_2); template<class... A> int m_FUN_101be410(A...); void __thiscall m_FUN_101bef40(SCStr *param_2); template<class... A> int m_FUN_101bef40(A...); void __thiscall m_FUN_101c35c0(int *param_2); template<class... A> int m_FUN_101c35c0(A...); int __thiscall m_FUN_101c4700(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_101c4700(A...); void __thiscall m_FUN_101c4ee0(int param_2); template<class... A> int m_FUN_101c4ee0(A...); void __thiscall m_FUN_101c5120(undefined4 *param_2); template<class... A> int m_FUN_101c5120(A...); void __thiscall m_FUN_101c5210(int *param_2,undefined4 param_3); template<class... A> int m_FUN_101c5210(A...); undefined4 * __thiscall m_FUN_101c55c0(int *param_2); template<class... A> int m_FUN_101c55c0(A...); undefined4 * __thiscall m_FUN_101c5640(int *param_2); template<class... A> int m_FUN_101c5640(A...); undefined4 * __thiscall m_FUN_101c5660(int *param_2); template<class... A> int m_FUN_101c5660(A...); undefined4 * __thiscall m_FUN_101c5680(int *param_2); template<class... A> int m_FUN_101c5680(A...); int * __thiscall m_FUN_101c62f0(int *param_2); template<class... A> int m_FUN_101c62f0(A...); undefined4 * __thiscall m_FUN_101c77c0(byte param_2); template<class... A> int m_FUN_101c77c0(A...); undefined4 * __thiscall m_FUN_101c7800(byte param_2); template<class... A> int m_FUN_101c7800(A...); undefined4 * __thiscall m_FUN_101c7840(byte param_2); template<class... A> int m_FUN_101c7840(A...); undefined4 * __thiscall m_FUN_101c7a70(byte param_2); template<class... A> int m_FUN_101c7a70(A...); undefined4 * __thiscall m_FUN_101c7ab0(byte param_2); template<class... A> int m_FUN_101c7ab0(A...); undefined4 * __thiscall m_FUN_101c7ea0(byte param_2); template<class... A> int m_FUN_101c7ea0(A...); void __thiscall m_FUN_101c8730(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_101c8730(A...); void __thiscall m_FUN_101c97f0(int *param_2); template<class... A> int m_FUN_101c97f0(A...); void __thiscall m_FUN_101c9840(int *param_2); template<class... A> int m_FUN_101c9840(A...); void __thiscall m_FUN_101c9890(int *param_2); template<class... A> int m_FUN_101c9890(A...); void __thiscall m_FUN_101c98e0(int *param_2); template<class... A> int m_FUN_101c98e0(A...); void __thiscall m_FUN_101c9930(int param_2); template<class... A> int m_FUN_101c9930(A...); void __thiscall m_FUN_101cb160(undefined4 *param_2); template<class... A> int m_FUN_101cb160(A...); void __thiscall m_FUN_101cdd70(undefined4 param_2); template<class... A> int m_FUN_101cdd70(A...); void __thiscall m_FUN_101ce970(int param_2); template<class... A> int m_FUN_101ce970(A...); void __thiscall m_FUN_101ce9a0(int param_2); template<class... A> int m_FUN_101ce9a0(A...); undefined4 * __thiscall m_FUN_101cf880(int param_2); template<class... A> int m_FUN_101cf880(A...); undefined4 * __thiscall m_FUN_101cf8d0(int param_2); template<class... A> int m_FUN_101cf8d0(A...); undefined4 * __thiscall m_FUN_101cf920(undefined4 param_2); template<class... A> int m_FUN_101cf920(A...); undefined4 * __thiscall m_FUN_101cf9a0(int param_2); template<class... A> int m_FUN_101cf9a0(A...); undefined4 * __thiscall m_FUN_101cf9d0(undefined4 param_2); template<class... A> int m_FUN_101cf9d0(A...); undefined4 * __thiscall m_FUN_101cfa50(int param_2); template<class... A> int m_FUN_101cfa50(A...); undefined4 * __thiscall m_FUN_101cfae0(int *param_2); template<class... A> int m_FUN_101cfae0(A...); undefined4 * __thiscall m_FUN_101cfb80(int *param_2); template<class... A> int m_FUN_101cfb80(A...); undefined4 * __thiscall m_FUN_101cfbc0(int *param_2); template<class... A> int m_FUN_101cfbc0(A...); undefined4 * __thiscall m_FUN_101cfc00(int *param_2); template<class... A> int m_FUN_101cfc00(A...); undefined4 * __thiscall m_FUN_101cfc70(int *param_2); template<class... A> int m_FUN_101cfc70(A...); undefined4 * __thiscall m_FUN_101cfcf0(int *param_2); template<class... A> int m_FUN_101cfcf0(A...); undefined4 * __thiscall m_FUN_101cfd30(int *param_2); template<class... A> int m_FUN_101cfd30(A...); undefined4 * __thiscall m_FUN_101cfdc0(int *param_2); template<class... A> int m_FUN_101cfdc0(A...); undefined4 * __thiscall m_FUN_101cfe30(int *param_2); template<class... A> int m_FUN_101cfe30(A...); undefined4 * __thiscall m_FUN_101cfe90(int *param_2); template<class... A> int m_FUN_101cfe90(A...); undefined4 * __thiscall m_FUN_101cfeb0(int *param_2); template<class... A> int m_FUN_101cfeb0(A...); int __thiscall m_FUN_101d3b70(int param_2); template<class... A> int m_FUN_101d3b70(A...); int __thiscall m_FUN_101d3b90(int param_2); template<class... A> int m_FUN_101d3b90(A...); undefined4 * __thiscall m_FUN_101d5520(byte param_2); template<class... A> int m_FUN_101d5520(A...); undefined4 * __thiscall m_FUN_101d5560(byte param_2); template<class... A> int m_FUN_101d5560(A...); undefined4 * __thiscall m_FUN_101d55a0(byte param_2); template<class... A> int m_FUN_101d55a0(A...); undefined4 * __thiscall m_FUN_101d55e0(byte param_2); template<class... A> int m_FUN_101d55e0(A...); undefined4 * __thiscall m_FUN_101d5620(byte param_2); template<class... A> int m_FUN_101d5620(A...); undefined4 * __thiscall m_FUN_101d5660(byte param_2); template<class... A> int m_FUN_101d5660(A...); undefined4 * __thiscall m_FUN_101d56a0(byte param_2); template<class... A> int m_FUN_101d56a0(A...); undefined4 * __thiscall m_FUN_101d56f0(byte param_2); template<class... A> int m_FUN_101d56f0(A...); undefined4 __thiscall m_FUN_101d5740(byte param_2); template<class... A> int m_FUN_101d5740(A...); int __thiscall m_FUN_101d5800(byte param_2); template<class... A> int m_FUN_101d5800(A...); undefined4 * __thiscall m_FUN_101d5850(byte param_2); template<class... A> int m_FUN_101d5850(A...); undefined4 * __thiscall m_FUN_101d5930(byte param_2); template<class... A> int m_FUN_101d5930(A...); undefined4 __thiscall m_FUN_101d5970(byte param_2); template<class... A> int m_FUN_101d5970(A...); undefined4 * __thiscall m_FUN_101d59a0(byte param_2); template<class... A> int m_FUN_101d59a0(A...); undefined4 * __thiscall m_FUN_101d59e0(byte param_2); template<class... A> int m_FUN_101d59e0(A...); undefined4 * __thiscall m_FUN_101d5a20(byte param_2); template<class... A> int m_FUN_101d5a20(A...); undefined4 * __thiscall m_FUN_101d5b00(byte param_2); template<class... A> int m_FUN_101d5b00(A...); undefined4 * __thiscall m_FUN_101d5bd0(byte param_2); template<class... A> int m_FUN_101d5bd0(A...); undefined4 * __thiscall m_FUN_101d5c00(byte param_2); template<class... A> int m_FUN_101d5c00(A...); undefined4 * __thiscall m_FUN_101d5c30(byte param_2); template<class... A> int m_FUN_101d5c30(A...); undefined4 * __thiscall m_FUN_101d5c60(byte param_2); template<class... A> int m_FUN_101d5c60(A...); undefined4 * __thiscall m_FUN_101d5d30(byte param_2); template<class... A> int m_FUN_101d5d30(A...); undefined4 __thiscall m_FUN_101d5d70(byte param_2); template<class... A> int m_FUN_101d5d70(A...); SCProperty * __thiscall m_FUN_101d5da0(byte param_2); template<class... A> int m_FUN_101d5da0(A...); SCPropertyBag * __thiscall m_FUN_101d5dd0(byte param_2); template<class... A> int m_FUN_101d5dd0(A...); undefined4 * __thiscall m_FUN_101d5ea0(byte param_2); template<class... A> int m_FUN_101d5ea0(A...); undefined4 *  __thiscall m_FUN_101d6060(undefined4 *param_2); template<class... A> int m_FUN_101d6060(A...); undefined4 *  __thiscall m_FUN_101d6080(undefined4 *param_2); template<class... A> int m_FUN_101d6080(A...); void __thiscall m_FUN_101d6200(char param_2); template<class... A> int m_FUN_101d6200(A...); void __thiscall m_FUN_101d6220(char param_2); template<class... A> int m_FUN_101d6220(A...); void __thiscall m_FUN_101d6240(char param_2); template<class... A> int m_FUN_101d6240(A...); void __thiscall m_FUN_101d6440(undefined4 *param_2,undefined4 param_3); template<class... A> int m_FUN_101d6440(A...); undefined4 *  __thiscall m_FUN_101d6f80(undefined4 *param_2); template<class... A> int m_FUN_101d6f80(A...); undefined4 *  __thiscall m_FUN_101d6fa0(undefined4 *param_2); template<class... A> int m_FUN_101d6fa0(A...); void __thiscall m_FUN_101d7950(int *param_2); template<class... A> int m_FUN_101d7950(A...); void __thiscall m_FUN_101d79a0(int *param_2); template<class... A> int m_FUN_101d79a0(A...); void __thiscall m_FUN_101d79f0(int *param_2); template<class... A> int m_FUN_101d79f0(A...); void __thiscall m_FUN_101d7a40(int *param_2); template<class... A> int m_FUN_101d7a40(A...); void __thiscall m_FUN_101d7a90(int *param_2); template<class... A> int m_FUN_101d7a90(A...); void __thiscall m_FUN_101d7ae0(int *param_2); template<class... A> int m_FUN_101d7ae0(A...); void __thiscall m_FUN_101d7b30(int *param_2); template<class... A> int m_FUN_101d7b30(A...); void __thiscall m_FUN_101d7b80(int *param_2); template<class... A> int m_FUN_101d7b80(A...); void __thiscall m_FUN_101d7bd0(int *param_2); template<class... A> int m_FUN_101d7bd0(A...); void __thiscall m_FUN_101d7c20(int *param_2); template<class... A> int m_FUN_101d7c20(A...); void __thiscall m_FUN_101d7c70(int *param_2); template<class... A> int m_FUN_101d7c70(A...); void __thiscall m_FUN_101d7cc0(int *param_2); template<class... A> int m_FUN_101d7cc0(A...); void __thiscall m_FUN_101d7d10(int *param_2); template<class... A> int m_FUN_101d7d10(A...); void __thiscall m_FUN_101d7d60(int *param_2); template<class... A> int m_FUN_101d7d60(A...); void __thiscall m_FUN_101d7db0(int param_2); template<class... A> int m_FUN_101d7db0(A...); void __thiscall m_FUN_101d7de0(int param_2); template<class... A> int m_FUN_101d7de0(A...); int * __thiscall m_FUN_101d8b20(int *param_2); template<class... A> int m_FUN_101d8b20(A...); void __thiscall m_FUN_101d8db0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_101d8db0(A...); SCStr * __thiscall m_FUN_101da020(SCStr *param_2); template<class... A> int m_FUN_101da020(A...); SCStr * __thiscall m_FUN_101da040(SCStr *param_2); template<class... A> int m_FUN_101da040(A...); void __thiscall m_FUN_101dfc00(int param_2); template<class... A> int m_FUN_101dfc00(A...); int __thiscall m_FUN_101e0b40(SCStr *param_2); template<class... A> int m_FUN_101e0b40(A...); void __thiscall m_FUN_101e0dc0(int param_2); template<class... A> int m_FUN_101e0dc0(A...); void __thiscall m_FUN_101e0df0(int param_2); template<class... A> int m_FUN_101e0df0(A...); undefined4 * __thiscall m_FUN_101e0f70(int *param_2); template<class... A> int m_FUN_101e0f70(A...); undefined4 * __thiscall m_FUN_101e1000(int *param_2); template<class... A> int m_FUN_101e1000(A...); undefined4 * __thiscall m_FUN_101e1020(int *param_2); template<class... A> int m_FUN_101e1020(A...); undefined4 * __thiscall m_FUN_101e1040(int *param_2); template<class... A> int m_FUN_101e1040(A...); undefined4 * __thiscall m_FUN_101e1060(int *param_2); template<class... A> int m_FUN_101e1060(A...); undefined4 * __thiscall m_FUN_101e1080(int *param_2); template<class... A> int m_FUN_101e1080(A...); undefined4 * __thiscall m_FUN_101e10a0(int *param_2); template<class... A> int m_FUN_101e10a0(A...); void __thiscall m_FUN_101e23d0(int *param_2); template<class... A> int m_FUN_101e23d0(A...); void __thiscall m_FUN_101e2420(int *param_2); template<class... A> int m_FUN_101e2420(A...); void __thiscall m_FUN_101e2470(int param_2); template<class... A> int m_FUN_101e2470(A...); void __thiscall m_FUN_101e24a0(int param_2); template<class... A> int m_FUN_101e24a0(A...); int * __thiscall m_FUN_101e3f40(int *param_2); template<class... A> int m_FUN_101e3f40(A...); int __thiscall m_FUN_101e6b50(SCStr *param_2); template<class... A> int m_FUN_101e6b50(A...); SCStr * __thiscall m_FUN_101e6e10(SCStr *param_2); template<class... A> int m_FUN_101e6e10(A...); int * __thiscall m_FUN_101e71e0(int *param_2); template<class... A> int m_FUN_101e71e0(A...); undefined4 __thiscall m_FUN_101e7200(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_101e7200(A...); SCStr * __thiscall m_FUN_101e7220(SCStr *param_2); template<class... A> int m_FUN_101e7220(A...); void __thiscall m_FUN_101e9b50(undefined4 *param_2); template<class... A> int m_FUN_101e9b50(A...); void __thiscall m_FUN_101e9ba0(undefined4 *param_2); template<class... A> int m_FUN_101e9ba0(A...); undefined4 * __thiscall m_FUN_101e9e00(int *param_2); template<class... A> int m_FUN_101e9e00(A...); undefined4 * __thiscall m_FUN_101e9e90(int *param_2); template<class... A> int m_FUN_101e9e90(A...); undefined4 * __thiscall m_FUN_101e9ed0(int *param_2); template<class... A> int m_FUN_101e9ed0(A...); undefined4 * __thiscall m_FUN_101e9ef0(int *param_2); template<class... A> int m_FUN_101e9ef0(A...); undefined4 * __thiscall m_FUN_101e9f10(int *param_2); template<class... A> int m_FUN_101e9f10(A...); undefined4 * __thiscall m_FUN_101e9f30(int *param_2); template<class... A> int m_FUN_101e9f30(A...); undefined4 * __thiscall m_FUN_101ebc60(byte param_2); template<class... A> int m_FUN_101ebc60(A...); undefined4 * __thiscall m_FUN_101ebca0(byte param_2); template<class... A> int m_FUN_101ebca0(A...); undefined4 * __thiscall m_FUN_101ebe00(byte param_2); template<class... A> int m_FUN_101ebe00(A...); undefined4 * __thiscall m_FUN_101ebe40(byte param_2); template<class... A> int m_FUN_101ebe40(A...); undefined4 * __thiscall m_FUN_101ebe70(byte param_2); template<class... A> int m_FUN_101ebe70(A...); undefined4 * __thiscall m_FUN_101ebea0(byte param_2); template<class... A> int m_FUN_101ebea0(A...); undefined4 * __thiscall m_FUN_101ebef0(byte param_2); template<class... A> int m_FUN_101ebef0(A...); undefined4 __thiscall m_FUN_101ebf30(byte param_2); template<class... A> int m_FUN_101ebf30(A...); undefined4 * __thiscall m_FUN_101ebf60(byte param_2); template<class... A> int m_FUN_101ebf60(A...); undefined4 __thiscall m_FUN_101ebfb0(byte param_2); template<class... A> int m_FUN_101ebfb0(A...); void __thiscall m_FUN_101ec310(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_101ec310(A...); void __thiscall m_FUN_101ec330(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_101ec330(A...); void __thiscall m_FUN_101ec720(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_101ec720(A...); void __thiscall m_FUN_101ec800(int *param_2); template<class... A> int m_FUN_101ec800(A...); void __thiscall m_FUN_101ec850(int *param_2); template<class... A> int m_FUN_101ec850(A...); void __thiscall m_FUN_101ec8a0(int *param_2); template<class... A> int m_FUN_101ec8a0(A...); void __thiscall m_FUN_101ec8f0(int *param_2); template<class... A> int m_FUN_101ec8f0(A...); SCStr * __thiscall m_FUN_101ee340(SCStr *param_2); template<class... A> int m_FUN_101ee340(A...); int * __thiscall m_FUN_101f0da0(int *param_2); template<class... A> int m_FUN_101f0da0(A...); int * __thiscall m_FUN_101f1110(int *param_2,int param_3); template<class... A> int m_FUN_101f1110(A...); undefined4 * __thiscall m_FUN_101f1140(undefined4 *param_2,undefined4 param_3); template<class... A> int m_FUN_101f1140(A...); int * __thiscall m_FUN_101f1190(int *param_2,int param_3); template<class... A> int m_FUN_101f1190(A...); SCStr * __thiscall m_FUN_101f1620(SCStr *param_2); template<class... A> int m_FUN_101f1620(A...); SCStr * __thiscall m_FUN_101f1660(SCStr *param_2); template<class... A> int m_FUN_101f1660(A...); undefined4 __thiscall m_FUN_101f1680(undefined4 param_2); template<class... A> int m_FUN_101f1680(A...); void __thiscall m_FUN_101f2090(undefined4 *param_2); template<class... A> int m_FUN_101f2090(A...); void __thiscall m_FUN_101f20e0(undefined4 *param_2); template<class... A> int m_FUN_101f20e0(A...); void __thiscall m_FUN_101f2ea0(undefined1 param_2); template<class... A> int m_FUN_101f2ea0(A...); void __thiscall m_FUN_101f4100(undefined4 param_2); template<class... A> int m_FUN_101f4100(A...); void __thiscall m_FUN_101f4350(int param_2); template<class... A> int m_FUN_101f4350(A...); undefined4 * __thiscall m_FUN_101f44c0(undefined4 *param_2); template<class... A> int m_FUN_101f44c0(A...); undefined4 * __thiscall m_FUN_101f4540(int *param_2); template<class... A> int m_FUN_101f4540(A...); undefined4 * __thiscall m_FUN_101f45a0(int *param_2); template<class... A> int m_FUN_101f45a0(A...); undefined4 * __thiscall m_FUN_101f5020(byte param_2); template<class... A> int m_FUN_101f5020(A...); undefined4 * __thiscall m_FUN_101f5270(byte param_2); template<class... A> int m_FUN_101f5270(A...); void __thiscall m_FUN_101f54e0(int *param_2); template<class... A> int m_FUN_101f54e0(A...); void __thiscall m_FUN_101f5530(int param_2); template<class... A> int m_FUN_101f5530(A...); SCStr * __thiscall m_FUN_101f64f0(SCStr *param_2); template<class... A> int m_FUN_101f64f0(A...); SCStr * __thiscall m_FUN_101f6510(SCStr *param_2); template<class... A> int m_FUN_101f6510(A...); void __thiscall m_FUN_101f8ff0(SCStr *param_2); template<class... A> int m_FUN_101f8ff0(A...); void __thiscall m_FUN_101f9020(SCStr *param_2); template<class... A> int m_FUN_101f9020(A...); void __thiscall m_FUN_101f9490(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_101f9490(A...); undefined4 * __thiscall m_FUN_101f9fd0(int *param_2); template<class... A> int m_FUN_101f9fd0(A...); undefined4 * __thiscall m_FUN_101fa010(int *param_2); template<class... A> int m_FUN_101fa010(A...); undefined4 * __thiscall m_FUN_101fa050(int *param_2); template<class... A> int m_FUN_101fa050(A...); undefined4 * __thiscall m_FUN_101faaa0(byte param_2); template<class... A> int m_FUN_101faaa0(A...); int __thiscall m_FUN_101faae0(byte param_2); template<class... A> int m_FUN_101faae0(A...); undefined4 * __thiscall m_FUN_101fab30(byte param_2); template<class... A> int m_FUN_101fab30(A...); undefined4 * __thiscall m_FUN_101fabf0(byte param_2); template<class... A> int m_FUN_101fabf0(A...); void __thiscall m_FUN_101faec0(char param_2); template<class... A> int m_FUN_101faec0(A...); void __thiscall m_FUN_101faf10(undefined4 *param_2,undefined4 param_3); template<class... A> int m_FUN_101faf10(A...); void __thiscall m_FUN_101fb370(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_101fb370(A...); void __thiscall m_FUN_101fdb20(undefined4 param_2); template<class... A> int m_FUN_101fdb20(A...); int __thiscall m_FUN_101fdc40(undefined4 param_2); template<class... A> int m_FUN_101fdc40(A...); void __thiscall m_FUN_101fe110(int param_2); template<class... A> int m_FUN_101fe110(A...); void __thiscall m_FUN_101fe140(int param_2); template<class... A> int m_FUN_101fe140(A...); undefined4 * __thiscall m_FUN_101fe820(undefined4 *param_2); template<class... A> int m_FUN_101fe820(A...); undefined4 * __thiscall m_FUN_101fe850(int *param_2); template<class... A> int m_FUN_101fe850(A...); undefined4 * __thiscall m_FUN_101fe8f0(int *param_2); template<class... A> int m_FUN_101fe8f0(A...); undefined4 * __thiscall m_FUN_101fe930(int *param_2); template<class... A> int m_FUN_101fe930(A...); undefined4 * __thiscall m_FUN_101fe970(int *param_2); template<class... A> int m_FUN_101fe970(A...); undefined4 * __thiscall m_FUN_101fe9b0(int *param_2); template<class... A> int m_FUN_101fe9b0(A...); undefined4 * __thiscall m_FUN_101fe9f0(int *param_2); template<class... A> int m_FUN_101fe9f0(A...); undefined4 * __thiscall m_FUN_101fea50(int *param_2); template<class... A> int m_FUN_101fea50(A...); undefined4 * __thiscall m_FUN_101fead0(int *param_2); template<class... A> int m_FUN_101fead0(A...); undefined4 * __thiscall m_FUN_101feb30(int *param_2); template<class... A> int m_FUN_101feb30(A...); undefined4 * __thiscall m_FUN_101feb70(int *param_2); template<class... A> int m_FUN_101feb70(A...); undefined4 * __thiscall m_FUN_101febb0(int *param_2); template<class... A> int m_FUN_101febb0(A...); undefined4 * __thiscall m_FUN_101fec10(int *param_2); template<class... A> int m_FUN_101fec10(A...); undefined4 * __thiscall m_FUN_101fec50(int *param_2); template<class... A> int m_FUN_101fec50(A...); undefined4 * __thiscall m_FUN_101fec90(int *param_2); template<class... A> int m_FUN_101fec90(A...); undefined4 * __thiscall m_FUN_101fecd0(int *param_2); template<class... A> int m_FUN_101fecd0(A...); undefined4 * __thiscall m_FUN_101fed10(int *param_2); template<class... A> int m_FUN_101fed10(A...); undefined4 * __thiscall m_FUN_101fed50(int *param_2); template<class... A> int m_FUN_101fed50(A...); undefined4 * __thiscall m_FUN_101fedb0(int *param_2); template<class... A> int m_FUN_101fedb0(A...); undefined4 * __thiscall m_FUN_101fee30(int *param_2); template<class... A> int m_FUN_101fee30(A...); undefined4 * __thiscall m_FUN_101fee50(int *param_2); template<class... A> int m_FUN_101fee50(A...); undefined4 * __thiscall m_FUN_101fee70(int *param_2); template<class... A> int m_FUN_101fee70(A...); undefined4 * __thiscall m_FUN_101fee90(int *param_2); template<class... A> int m_FUN_101fee90(A...); undefined4 * __thiscall m_FUN_10205510(byte param_2); template<class... A> int m_FUN_10205510(A...); undefined4 * __thiscall m_FUN_10205540(byte param_2); template<class... A> int m_FUN_10205540(A...); undefined4 * __thiscall m_FUN_10205570(byte param_2); template<class... A> int m_FUN_10205570(A...); undefined4 * __thiscall m_FUN_102055a0(byte param_2); template<class... A> int m_FUN_102055a0(A...); undefined4 * __thiscall m_FUN_102055e0(byte param_2); template<class... A> int m_FUN_102055e0(A...); undefined4 * __thiscall m_FUN_10205620(byte param_2); template<class... A> int m_FUN_10205620(A...); undefined4 __thiscall m_FUN_10205720(byte param_2); template<class... A> int m_FUN_10205720(A...); undefined4 * __thiscall m_FUN_10205750(byte param_2); template<class... A> int m_FUN_10205750(A...); undefined4 * __thiscall m_FUN_10205780(byte param_2); template<class... A> int m_FUN_10205780(A...); undefined4 * __thiscall m_FUN_10205880(byte param_2); template<class... A> int m_FUN_10205880(A...); undefined4 * __thiscall m_FUN_102058d0(byte param_2); template<class... A> int m_FUN_102058d0(A...); undefined4 * __thiscall m_FUN_10205a70(byte param_2); template<class... A> int m_FUN_10205a70(A...); undefined4 __thiscall m_FUN_10205ab0(byte param_2); template<class... A> int m_FUN_10205ab0(A...); undefined4 __thiscall m_FUN_10205af0(byte param_2); template<class... A> int m_FUN_10205af0(A...); undefined4 __thiscall m_FUN_10205b20(byte param_2); template<class... A> int m_FUN_10205b20(A...); undefined4 __thiscall m_FUN_10205b50(byte param_2); template<class... A> int m_FUN_10205b50(A...); undefined4 __thiscall m_FUN_10205c00(byte param_2); template<class... A> int m_FUN_10205c00(A...); undefined4 * __thiscall m_FUN_10205cd0(byte param_2); template<class... A> int m_FUN_10205cd0(A...); undefined4 * __thiscall m_FUN_10205fd0(byte param_2); template<class... A> int m_FUN_10205fd0(A...); undefined4 * __thiscall m_FUN_10206000(byte param_2); template<class... A> int m_FUN_10206000(A...); undefined4 * __thiscall m_FUN_10206030(byte param_2); template<class... A> int m_FUN_10206030(A...); undefined4 * __thiscall m_FUN_10206060(byte param_2); template<class... A> int m_FUN_10206060(A...); undefined4 * __thiscall m_FUN_10206090(byte param_2); template<class... A> int m_FUN_10206090(A...); undefined4 * __thiscall m_FUN_102060c0(byte param_2); template<class... A> int m_FUN_102060c0(A...); undefined4 * __thiscall m_FUN_102060f0(byte param_2); template<class... A> int m_FUN_102060f0(A...); undefined4 * __thiscall m_FUN_10206120(byte param_2); template<class... A> int m_FUN_10206120(A...); undefined4 * __thiscall m_FUN_10206150(byte param_2); template<class... A> int m_FUN_10206150(A...); undefined4 * __thiscall m_FUN_102066f0(byte param_2); template<class... A> int m_FUN_102066f0(A...); undefined4 * __thiscall m_FUN_10206730(byte param_2); template<class... A> int m_FUN_10206730(A...); undefined4 * __thiscall m_FUN_10206760(byte param_2); template<class... A> int m_FUN_10206760(A...); void __thiscall m_FUN_10206d80(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10206d80(A...); void __thiscall m_FUN_10207310(int *param_2); template<class... A> int m_FUN_10207310(A...); void __thiscall m_FUN_10207470(int *param_2); template<class... A> int m_FUN_10207470(A...); void __thiscall m_FUN_102074c0(int *param_2); template<class... A> int m_FUN_102074c0(A...); void __thiscall m_FUN_10207510(int *param_2); template<class... A> int m_FUN_10207510(A...); void __thiscall m_FUN_10207560(int *param_2); template<class... A> int m_FUN_10207560(A...); void __thiscall m_FUN_102075b0(int *param_2); template<class... A> int m_FUN_102075b0(A...); void __thiscall m_FUN_10207600(int *param_2); template<class... A> int m_FUN_10207600(A...); void __thiscall m_FUN_10207650(int *param_2); template<class... A> int m_FUN_10207650(A...); void __thiscall m_FUN_102076a0(int *param_2); template<class... A> int m_FUN_102076a0(A...); void __thiscall m_FUN_102076f0(int *param_2); template<class... A> int m_FUN_102076f0(A...); void __thiscall m_FUN_10207740(int *param_2); template<class... A> int m_FUN_10207740(A...); void __thiscall m_FUN_10207790(int *param_2); template<class... A> int m_FUN_10207790(A...); void __thiscall m_FUN_102077e0(int *param_2); template<class... A> int m_FUN_102077e0(A...); void __thiscall m_FUN_10207830(int *param_2); template<class... A> int m_FUN_10207830(A...); void __thiscall m_FUN_10207880(int *param_2); template<class... A> int m_FUN_10207880(A...); void __thiscall m_FUN_102078d0(int *param_2); template<class... A> int m_FUN_102078d0(A...); void __thiscall m_FUN_10207920(int *param_2); template<class... A> int m_FUN_10207920(A...); void __thiscall m_FUN_10207970(int *param_2); template<class... A> int m_FUN_10207970(A...); void __thiscall m_FUN_102079c0(int *param_2); template<class... A> int m_FUN_102079c0(A...); void __thiscall m_FUN_10207a10(int param_2); template<class... A> int m_FUN_10207a10(A...); void __thiscall m_FUN_10207a40(int param_2); template<class... A> int m_FUN_10207a40(A...); void __thiscall m_FUN_10207fd0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4); template<class... A> int m_FUN_10207fd0(A...); void __thiscall m_FUN_10208000(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4, unsigned int recovered_unused_stack_5); template<class... A> int m_FUN_10208000(A...); void __thiscall m_FUN_10208020(undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8); template<class... A> int m_FUN_10208020(A...); void __thiscall m_FUN_1020a260(undefined4 param_2,SCStr *param_3); template<class... A> int m_FUN_1020a260(A...); void __thiscall m_FUN_1020a2b0(undefined4 param_2,SCStr *param_3); template<class... A> int m_FUN_1020a2b0(A...); void __thiscall m_FUN_1020a550(undefined4 param_2); template<class... A> int m_FUN_1020a550(A...); void __thiscall m_FUN_1020a5b0(undefined4 param_2); template<class... A> int m_FUN_1020a5b0(A...); undefined4 __thiscall m_FUN_1020a640(undefined4 param_2); template<class... A> int m_FUN_1020a640(A...); int * __thiscall m_FUN_1020a660(int *param_2,undefined4 param_3); template<class... A> int m_FUN_1020a660(A...); SCStr * __thiscall m_FUN_1020a6a0(SCStr *param_2); template<class... A> int m_FUN_1020a6a0(A...); int * __thiscall m_FUN_1020bea0(int *param_2); template<class... A> int m_FUN_1020bea0(A...); SCStr * __thiscall m_FUN_1020d100(SCStr *param_2); template<class... A> int m_FUN_1020d100(A...); int * __thiscall m_FUN_1020d1e0(int *param_2); template<class... A> int m_FUN_1020d1e0(A...); SCStr * __thiscall m_FUN_1020d310(SCStr *param_2); template<class... A> int m_FUN_1020d310(A...); SCStr * __thiscall m_FUN_1020dba0(SCStr *param_2); template<class... A> int m_FUN_1020dba0(A...); SCStr * __thiscall m_FUN_1020f600(SCStr *param_2); template<class... A> int m_FUN_1020f600(A...); int __thiscall m_FUN_10210320(int param_2); template<class... A> int m_FUN_10210320(A...); SCStr * __thiscall m_FUN_10210360(SCStr *param_2); template<class... A> int m_FUN_10210360(A...); SCStr * __thiscall m_FUN_102103e0(SCStr *param_2); template<class... A> int m_FUN_102103e0(A...); undefined4 __thiscall m_FUN_10210fc0(undefined4 param_2); template<class... A> int m_FUN_10210fc0(A...); undefined4 __thiscall m_FUN_102111d0(undefined4 param_2); template<class... A> int m_FUN_102111d0(A...); SCStr * __thiscall m_FUN_10216e80(SCStr *param_2); template<class... A> int m_FUN_10216e80(A...); undefined4 __thiscall m_FUN_10216ec0(undefined4 param_2); template<class... A> int m_FUN_10216ec0(A...); SCStr * __thiscall m_FUN_10217600(SCStr *param_2); template<class... A> int m_FUN_10217600(A...); undefined4 __thiscall m_FUN_10219030(undefined4 param_2); template<class... A> int m_FUN_10219030(A...); undefined4 __thiscall m_FUN_10219050(undefined4 param_2); template<class... A> int m_FUN_10219050(A...); bool __thiscall m_FUN_1021aa00(int param_2); template<class... A> int m_FUN_1021aa00(A...); void __thiscall m_FUN_102204e0(int *param_2); template<class... A> int m_FUN_102204e0(A...); void __thiscall m_FUN_10220cd0(SCStr *param_2); template<class... A> int m_FUN_10220cd0(A...); void __thiscall m_FUN_10220d00(SCStr *param_2); template<class... A> int m_FUN_10220d00(A...); void __thiscall m_FUN_10221690(int *param_2); template<class... A> int m_FUN_10221690(A...); void __thiscall m_FUN_10221800(int param_2); template<class... A> int m_FUN_10221800(A...); SCStr * __thiscall m_FUN_10221b60(SCStr *param_2); template<class... A> int m_FUN_10221b60(A...); undefined4 * __thiscall m_FUN_10221bc0(int *param_2); template<class... A> int m_FUN_10221bc0(A...); undefined4 * __thiscall m_FUN_10221f60(byte param_2); template<class... A> int m_FUN_10221f60(A...); undefined4 * __thiscall m_FUN_10221fa0(byte param_2); template<class... A> int m_FUN_10221fa0(A...); undefined4 * __thiscall m_FUN_10222050(byte param_2); template<class... A> int m_FUN_10222050(A...); size_t __thiscall m_FUN_10222300(void *param_2,uint param_3); template<class... A> int m_FUN_10222300(A...); void __thiscall m_FUN_10223600(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10223600(A...); void __thiscall m_FUN_10223630(int *param_2); template<class... A> int m_FUN_10223630(A...); int * __thiscall m_FUN_10223680(int *param_2); template<class... A> int m_FUN_10223680(A...); int * __thiscall m_FUN_102236b0(int *param_2); template<class... A> int m_FUN_102236b0(A...); int * __thiscall m_FUN_102236e0(int *param_2); template<class... A> int m_FUN_102236e0(A...); int __thiscall m_FUN_10225e70(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10225e70(A...); int __thiscall m_FUN_10225eb0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10225eb0(A...); void __thiscall m_FUN_10227430(int param_2); template<class... A> int m_FUN_10227430(A...); undefined4 * __thiscall m_FUN_10228f60(int *param_2); template<class... A> int m_FUN_10228f60(A...); undefined4 * __thiscall m_FUN_10228fa0(int *param_2); template<class... A> int m_FUN_10228fa0(A...); undefined4 * __thiscall m_FUN_10228fe0(int *param_2); template<class... A> int m_FUN_10228fe0(A...); undefined4 * __thiscall m_FUN_10229020(int *param_2); template<class... A> int m_FUN_10229020(A...); undefined4 * __thiscall m_FUN_10229060(int *param_2); template<class... A> int m_FUN_10229060(A...); undefined4 * __thiscall m_FUN_102290a0(int *param_2); template<class... A> int m_FUN_102290a0(A...); undefined4 * __thiscall m_FUN_10229120(int *param_2); template<class... A> int m_FUN_10229120(A...); undefined4 * __thiscall m_FUN_10229160(int *param_2); template<class... A> int m_FUN_10229160(A...); undefined4 * __thiscall m_FUN_102291c0(int *param_2); template<class... A> int m_FUN_102291c0(A...); undefined4 * __thiscall m_FUN_10229200(int *param_2); template<class... A> int m_FUN_10229200(A...); undefined4 * __thiscall m_FUN_10229240(int *param_2); template<class... A> int m_FUN_10229240(A...); undefined4 * __thiscall m_FUN_10229280(int *param_2); template<class... A> int m_FUN_10229280(A...); undefined4 * __thiscall m_FUN_102292e0(int *param_2); template<class... A> int m_FUN_102292e0(A...); undefined4 * __thiscall m_FUN_10229340(int *param_2); template<class... A> int m_FUN_10229340(A...); undefined4 * __thiscall m_FUN_102293d0(int *param_2); template<class... A> int m_FUN_102293d0(A...); undefined4 * __thiscall m_FUN_10229410(int *param_2); template<class... A> int m_FUN_10229410(A...); undefined4 * __thiscall m_FUN_10229470(int *param_2); template<class... A> int m_FUN_10229470(A...); undefined4 * __thiscall m_FUN_10230420(byte param_2); template<class... A> int m_FUN_10230420(A...); int __thiscall m_FUN_102306b0(byte param_2); template<class... A> int m_FUN_102306b0(A...); int __thiscall m_FUN_10230700(byte param_2); template<class... A> int m_FUN_10230700(A...); int __thiscall m_FUN_10230750(byte param_2); template<class... A> int m_FUN_10230750(A...); int __thiscall m_FUN_102307a0(byte param_2); template<class... A> int m_FUN_102307a0(A...); undefined4 * __thiscall m_FUN_102308d0(byte param_2); template<class... A> int m_FUN_102308d0(A...); undefined4 * __thiscall m_FUN_10230900(byte param_2); template<class... A> int m_FUN_10230900(A...); undefined4 * __thiscall m_FUN_10230940(byte param_2); template<class... A> int m_FUN_10230940(A...); undefined4 * __thiscall m_FUN_10230970(byte param_2); template<class... A> int m_FUN_10230970(A...); undefined4 * __thiscall m_FUN_102309a0(byte param_2); template<class... A> int m_FUN_102309a0(A...); undefined4 * __thiscall m_FUN_102309d0(byte param_2); template<class... A> int m_FUN_102309d0(A...); undefined4 * __thiscall m_FUN_10230a00(byte param_2); template<class... A> int m_FUN_10230a00(A...); undefined4 __thiscall m_FUN_10230a30(byte param_2); template<class... A> int m_FUN_10230a30(A...); undefined4 * __thiscall m_FUN_10230b00(byte param_2); template<class... A> int m_FUN_10230b00(A...); undefined4 * __thiscall m_FUN_10230b30(byte param_2); template<class... A> int m_FUN_10230b30(A...); undefined4 * __thiscall m_FUN_10230b60(byte param_2); template<class... A> int m_FUN_10230b60(A...); undefined4 * __thiscall m_FUN_10230b90(byte param_2); template<class... A> int m_FUN_10230b90(A...); undefined4 * __thiscall m_FUN_10230f20(byte param_2); template<class... A> int m_FUN_10230f20(A...); undefined4 __thiscall m_FUN_10230f60(byte param_2); template<class... A> int m_FUN_10230f60(A...); undefined4 * __thiscall m_FUN_10231040(byte param_2); template<class... A> int m_FUN_10231040(A...); undefined4 * __thiscall m_FUN_10231120(byte param_2); template<class... A> int m_FUN_10231120(A...); undefined4 * __thiscall m_FUN_10231160(byte param_2); template<class... A> int m_FUN_10231160(A...); undefined4 * __thiscall m_FUN_10231190(byte param_2); template<class... A> int m_FUN_10231190(A...); undefined4 * __thiscall m_FUN_102311d0(byte param_2); template<class... A> int m_FUN_102311d0(A...); undefined4 * __thiscall m_FUN_102312c0(byte param_2); template<class... A> int m_FUN_102312c0(A...); undefined4 __thiscall m_FUN_102313a0(byte param_2); template<class... A> int m_FUN_102313a0(A...); undefined4 * __thiscall m_FUN_10231520(byte param_2); template<class... A> int m_FUN_10231520(A...); undefined4 * __thiscall m_FUN_10231560(byte param_2); template<class... A> int m_FUN_10231560(A...); undefined4 * __thiscall m_FUN_10231640(byte param_2); template<class... A> int m_FUN_10231640(A...); undefined4 * __thiscall m_FUN_10231670(byte param_2); template<class... A> int m_FUN_10231670(A...); SCStr * __thiscall m_FUN_102316a0(SCStr *param_2); template<class... A> int m_FUN_102316a0(A...); SCStr * __thiscall m_FUN_102316e0(SCStr *param_2); template<class... A> int m_FUN_102316e0(A...); SCStr * __thiscall m_FUN_102317a0(SCStr *param_2); template<class... A> int m_FUN_102317a0(A...); SCStr * __thiscall m_FUN_10231810(SCStr *param_2); template<class... A> int m_FUN_10231810(A...); undefined4 * __thiscall m_FUN_10232050(undefined4 *param_2); template<class... A> int m_FUN_10232050(A...); undefined4 *  __thiscall m_FUN_10232070(undefined4 *param_2); template<class... A> int m_FUN_10232070(A...); undefined4 *  __thiscall m_FUN_10232150(undefined4 *param_2); template<class... A> int m_FUN_10232150(A...); undefined4 *  __thiscall m_FUN_10232170(undefined4 *param_2); template<class... A> int m_FUN_10232170(A...); undefined4 *  __thiscall m_FUN_102321b0(undefined4 *param_2); template<class... A> int m_FUN_102321b0(A...); undefined4 *  __thiscall m_FUN_10232270(char param_2); template<class... A> int m_FUN_10232270(A...); void __thiscall m_FUN_102322c0(char param_2); template<class... A> int m_FUN_102322c0(A...); void __thiscall m_FUN_10232310(char param_2); template<class... A> int m_FUN_10232310(A...); void __thiscall m_FUN_10232330(char param_2); template<class... A> int m_FUN_10232330(A...); void __thiscall m_FUN_10232350(char param_2); template<class... A> int m_FUN_10232350(A...); void __thiscall m_FUN_10232370(char param_2); template<class... A> int m_FUN_10232370(A...); void __thiscall m_FUN_102323c0(char param_2); template<class... A> int m_FUN_102323c0(A...); void __thiscall m_FUN_102323e0(char param_2); template<class... A> int m_FUN_102323e0(A...); void __thiscall m_FUN_10232400(char param_2); template<class... A> int m_FUN_10232400(A...); void __thiscall m_FUN_10232420(char param_2); template<class... A> int m_FUN_10232420(A...); void __thiscall m_FUN_10232440(char param_2); template<class... A> int m_FUN_10232440(A...); void __thiscall m_FUN_10232460(char param_2); template<class... A> int m_FUN_10232460(A...); void __thiscall m_FUN_10232760(undefined4 *param_2); template<class... A> int m_FUN_10232760(A...); void __thiscall m_FUN_10232790(undefined4 *param_2); template<class... A> int m_FUN_10232790(A...); void __thiscall m_FUN_10232840(undefined4 *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10232840(A...); undefined4 *  __thiscall m_FUN_10232900(undefined4 *param_2,undefined4 param_3); template<class... A> int m_FUN_10232900(A...); undefined4 *  __thiscall m_FUN_10233650(undefined4 *param_2); template<class... A> int m_FUN_10233650(A...); undefined4 *  __thiscall m_FUN_10233670(undefined4 *param_2); template<class... A> int m_FUN_10233670(A...); undefined4 *  __thiscall m_FUN_102336b0(undefined4 *param_2); template<class... A> int m_FUN_102336b0(A...); undefined4 *  __thiscall m_FUN_102336d0(undefined4 *param_2); template<class... A> int m_FUN_102336d0(A...); void __thiscall m_FUN_10233710(undefined4 *param_2); template<class... A> int m_FUN_10233710(A...); void __thiscall m_FUN_10233740(undefined4 *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10233740(A...); void __thiscall m_FUN_10234c50(int *param_2); template<class... A> int m_FUN_10234c50(A...); void __thiscall m_FUN_10234ca0(int *param_2); template<class... A> int m_FUN_10234ca0(A...); void __thiscall m_FUN_10234cf0(int *param_2); template<class... A> int m_FUN_10234cf0(A...); void __thiscall m_FUN_10234d40(int *param_2); template<class... A> int m_FUN_10234d40(A...); void __thiscall m_FUN_10234d90(int *param_2); template<class... A> int m_FUN_10234d90(A...); void __thiscall m_FUN_10234de0(int *param_2); template<class... A> int m_FUN_10234de0(A...); void __thiscall m_FUN_10234e30(int param_2); template<class... A> int m_FUN_10234e30(A...); void __thiscall m_FUN_10236170(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10236170(A...); int * __thiscall m_FUN_102365f0(int *param_2); template<class... A> int m_FUN_102365f0(A...); SCStr * __thiscall m_FUN_10236820(SCStr *param_2); template<class... A> int m_FUN_10236820(A...); SCStr * __thiscall m_FUN_102368c0(SCStr *param_2); template<class... A> int m_FUN_102368c0(A...); SCStr * __thiscall m_FUN_10236940(SCStr *param_2); template<class... A> int m_FUN_10236940(A...); int * __thiscall m_FUN_10236ab0(int *param_2); template<class... A> int m_FUN_10236ab0(A...); SCStr * __thiscall m_FUN_10236bd0(SCStr *param_2); template<class... A> int m_FUN_10236bd0(A...); SCStr * __thiscall m_FUN_10236c00(SCStr *param_2); template<class... A> int m_FUN_10236c00(A...); SCStr * __thiscall m_FUN_10236c30(SCStr *param_2); template<class... A> int m_FUN_10236c30(A...); SCStr * __thiscall m_FUN_10236c50(SCStr *param_2); template<class... A> int m_FUN_10236c50(A...); SCStr * __thiscall m_FUN_10236c70(SCStr *param_2); template<class... A> int m_FUN_10236c70(A...); SCStr * __thiscall m_FUN_10236c90(SCStr *param_2); template<class... A> int m_FUN_10236c90(A...); SCStr * __thiscall m_FUN_10236e50(SCStr *param_2); template<class... A> int m_FUN_10236e50(A...); SCStr * __thiscall m_FUN_102371b0(SCStr *param_2); template<class... A> int m_FUN_102371b0(A...); void __thiscall m_FUN_10243240(undefined4 param_2,byte param_3); template<class... A> int m_FUN_10243240(A...); void __thiscall m_FUN_10246020(undefined4 param_2); template<class... A> int m_FUN_10246020(A...); void __thiscall m_FUN_10246050(undefined4 param_2); template<class... A> int m_FUN_10246050(A...); void __thiscall m_FUN_10246080(undefined4 param_2); template<class... A> int m_FUN_10246080(A...); void __thiscall m_FUN_10246680(int param_2); template<class... A> int m_FUN_10246680(A...); undefined4 * __thiscall m_FUN_102469f0(int *param_2); template<class... A> int m_FUN_102469f0(A...); undefined4 * __thiscall m_FUN_10247970(byte param_2); template<class... A> int m_FUN_10247970(A...); undefined4 __thiscall m_FUN_10247c40(byte param_2); template<class... A> int m_FUN_10247c40(A...); undefined4 __thiscall m_FUN_10247c70(byte param_2); template<class... A> int m_FUN_10247c70(A...); undefined4 * __thiscall m_FUN_10247ca0(byte param_2); template<class... A> int m_FUN_10247ca0(A...); void __thiscall m_FUN_10247d40(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10247d40(A...); void __thiscall m_FUN_102481b0(int *param_2); template<class... A> int m_FUN_102481b0(A...); void __thiscall m_FUN_10248200(int *param_2); template<class... A> int m_FUN_10248200(A...); void __thiscall m_FUN_10248250(int param_2); template<class... A> int m_FUN_10248250(A...); undefined4 * __thiscall m_FUN_10249df0(int *param_2); template<class... A> int m_FUN_10249df0(A...); undefined4 * __thiscall m_FUN_10249e30(int *param_2); template<class... A> int m_FUN_10249e30(A...); undefined4 * __thiscall m_FUN_1024a6b0(byte param_2); template<class... A> int m_FUN_1024a6b0(A...); undefined4 * __thiscall m_FUN_1024a8b0(byte param_2); template<class... A> int m_FUN_1024a8b0(A...); void __thiscall m_FUN_1024a8f0(int *param_2); template<class... A> int m_FUN_1024a8f0(A...); undefined4 * __thiscall m_FUN_1024c220(int *param_2); template<class... A> int m_FUN_1024c220(A...); undefined4 * __thiscall m_FUN_1024c4e0(byte param_2); template<class... A> int m_FUN_1024c4e0(A...); undefined4 * __thiscall m_FUN_1024c630(byte param_2); template<class... A> int m_FUN_1024c630(A...); SCStr * __thiscall m_FUN_1024cfa0(SCStr *param_2); template<class... A> int m_FUN_1024cfa0(A...); SCStr * __thiscall m_FUN_1024d810(SCStr *param_2); template<class... A> int m_FUN_1024d810(A...); SCStr * __thiscall m_FUN_1024da30(SCStr *param_2); template<class... A> int m_FUN_1024da30(A...); SCStr * __thiscall m_FUN_1024dc00(SCStr *param_2); template<class... A> int m_FUN_1024dc00(A...); SCStr * __thiscall m_FUN_1024ddb0(SCStr *param_2); template<class... A> int m_FUN_1024ddb0(A...); undefined4 * __thiscall m_FUN_1024ed20(int *param_2); template<class... A> int m_FUN_1024ed20(A...); undefined4 * __thiscall m_FUN_1024ed80(int *param_2); template<class... A> int m_FUN_1024ed80(A...); undefined4 * __thiscall m_FUN_1024ede0(undefined4 *param_2); template<class... A> int m_FUN_1024ede0(A...); undefined4 * __thiscall m_FUN_1024ee10(int *param_2); template<class... A> int m_FUN_1024ee10(A...); undefined4 * __thiscall m_FUN_1024fb30(byte param_2); template<class... A> int m_FUN_1024fb30(A...); int __thiscall m_FUN_1024fb70(byte param_2); template<class... A> int m_FUN_1024fb70(A...); undefined4 * __thiscall m_FUN_1024fbc0(byte param_2); template<class... A> int m_FUN_1024fbc0(A...); undefined4 * __thiscall m_FUN_1024fc00(byte param_2); template<class... A> int m_FUN_1024fc00(A...); undefined4 __thiscall m_FUN_1024fc40(byte param_2); template<class... A> int m_FUN_1024fc40(A...); undefined4 * __thiscall m_FUN_1024fc70(byte param_2); template<class... A> int m_FUN_1024fc70(A...); void __thiscall m_FUN_1024fd40(char param_2); template<class... A> int m_FUN_1024fd40(A...); void __thiscall m_FUN_1024fd90(undefined4 *param_2,undefined4 param_3); template<class... A> int m_FUN_1024fd90(A...); void __thiscall m_FUN_10250150(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10250150(A...); void __thiscall m_FUN_10250180(undefined4 param_2,SCStr *param_3); template<class... A> int m_FUN_10250180(A...); SCStr * __thiscall m_FUN_10251770(SCStr *param_2); template<class... A> int m_FUN_10251770(A...); void __thiscall m_FUN_10252fa0(undefined4 param_2); template<class... A> int m_FUN_10252fa0(A...); void __thiscall m_FUN_10253110(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10253110(A...); void __thiscall m_FUN_10254ee0(undefined4 param_2); template<class... A> int m_FUN_10254ee0(A...); int __thiscall m_FUN_10255010(SCStr *param_2); template<class... A> int m_FUN_10255010(A...); void __thiscall m_FUN_102561c0(undefined4 *param_2); template<class... A> int m_FUN_102561c0(A...); undefined4 * __thiscall m_FUN_10257090(int *param_2); template<class... A> int m_FUN_10257090(A...); undefined4 * __thiscall m_FUN_10257100(int *param_2); template<class... A> int m_FUN_10257100(A...); undefined4 * __thiscall m_FUN_10257140(int *param_2); template<class... A> int m_FUN_10257140(A...); undefined4 * __thiscall m_FUN_102571a0(int *param_2); template<class... A> int m_FUN_102571a0(A...); undefined4 * __thiscall m_FUN_102571e0(int *param_2); template<class... A> int m_FUN_102571e0(A...); undefined4 * __thiscall m_FUN_10257220(int *param_2); template<class... A> int m_FUN_10257220(A...); undefined4 * __thiscall m_FUN_102598d0(byte param_2); template<class... A> int m_FUN_102598d0(A...); undefined4 * __thiscall m_FUN_10259910(byte param_2); template<class... A> int m_FUN_10259910(A...); undefined4 * __thiscall m_FUN_10259950(byte param_2); template<class... A> int m_FUN_10259950(A...); undefined4 * __thiscall m_FUN_10259990(byte param_2); template<class... A> int m_FUN_10259990(A...); int __thiscall m_FUN_10259a60(byte param_2); template<class... A> int m_FUN_10259a60(A...); int __thiscall m_FUN_10259ab0(byte param_2); template<class... A> int m_FUN_10259ab0(A...); int __thiscall m_FUN_10259b00(byte param_2); template<class... A> int m_FUN_10259b00(A...); undefined4 __thiscall m_FUN_10259b50(byte param_2); template<class... A> int m_FUN_10259b50(A...); int __thiscall m_FUN_10259b80(byte param_2); template<class... A> int m_FUN_10259b80(A...); undefined4 * __thiscall m_FUN_10259ca0(byte param_2); template<class... A> int m_FUN_10259ca0(A...); undefined4 * __thiscall m_FUN_10259cd0(byte param_2); template<class... A> int m_FUN_10259cd0(A...); undefined4 * __thiscall m_FUN_10259d00(byte param_2); template<class... A> int m_FUN_10259d00(A...); undefined4 * __thiscall m_FUN_10259d30(byte param_2); template<class... A> int m_FUN_10259d30(A...); undefined4 * __thiscall m_FUN_10259d60(byte param_2); template<class... A> int m_FUN_10259d60(A...); void __thiscall m_FUN_1025a4f0(char param_2); template<class... A> int m_FUN_1025a4f0(A...); void __thiscall m_FUN_1025a540(char param_2); template<class... A> int m_FUN_1025a540(A...); void __thiscall m_FUN_1025a590(char param_2); template<class... A> int m_FUN_1025a590(A...); void __thiscall m_FUN_1025a5e0(char param_2); template<class... A> int m_FUN_1025a5e0(A...); void __thiscall m_FUN_1025a610(char param_2); template<class... A> int m_FUN_1025a610(A...); void __thiscall m_FUN_1025a660(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_1025a660(A...); void __thiscall m_FUN_1025a680(undefined4 param_2,undefined4 *param_3); template<class... A> int m_FUN_1025a680(A...); void __thiscall m_FUN_1025a8f0(undefined4 param_2,undefined4 *param_3); template<class... A> int m_FUN_1025a8f0(A...); void __thiscall m_FUN_1025b6c0(int *param_2); template<class... A> int m_FUN_1025b6c0(A...); SCStr * __thiscall m_FUN_1025c520(SCStr *param_2); template<class... A> int m_FUN_1025c520(A...); SCStr * __thiscall m_FUN_1025c540(SCStr *param_2); template<class... A> int m_FUN_1025c540(A...); SCStr * __thiscall m_FUN_1025c560(SCStr *param_2); template<class... A> int m_FUN_1025c560(A...); SCStr * __thiscall m_FUN_1025c770(SCStr *param_2); template<class... A> int m_FUN_1025c770(A...); void __thiscall m_FUN_1025c8e0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_1025c8e0(A...); void __thiscall m_FUN_1025cbd0(undefined4 *param_2); template<class... A> int m_FUN_1025cbd0(A...); undefined4 * __thiscall m_FUN_1025d630(int *param_2); template<class... A> int m_FUN_1025d630(A...); undefined4 * __thiscall m_FUN_1025d670(int *param_2); template<class... A> int m_FUN_1025d670(A...); undefined4 * __thiscall m_FUN_1025d9e0(byte param_2); template<class... A> int m_FUN_1025d9e0(A...); undefined4 * __thiscall m_FUN_1025da20(byte param_2); template<class... A> int m_FUN_1025da20(A...); SCStr * __thiscall m_FUN_1025db40(SCStr *param_2); template<class... A> int m_FUN_1025db40(A...); SCStr * __thiscall m_FUN_1025db80(SCStr *param_2); template<class... A> int m_FUN_1025db80(A...); SCStr * __thiscall m_FUN_1025dbc0(SCStr *param_2); template<class... A> int m_FUN_1025dbc0(A...); SCStr * __thiscall m_FUN_1025dc00(SCStr *param_2); template<class... A> int m_FUN_1025dc00(A...); undefined4 * __thiscall m_FUN_1025e1d0(int *param_2); template<class... A> int m_FUN_1025e1d0(A...); undefined4 * __thiscall m_FUN_1025e250(byte *param_2); template<class... A> int m_FUN_1025e250(A...); undefined4 * __thiscall m_FUN_1025e350(byte param_2); template<class... A> int m_FUN_1025e350(A...); undefined4 * __thiscall m_FUN_1025e390(byte param_2); template<class... A> int m_FUN_1025e390(A...); undefined4 * __thiscall m_FUN_1025e3c0(byte param_2); template<class... A> int m_FUN_1025e3c0(A...); undefined4 __thiscall m_FUN_1025e530(undefined4 *param_2); template<class... A> int m_FUN_1025e530(A...); void __thiscall m_FUN_1025e800(char param_2); template<class... A> int m_FUN_1025e800(A...); undefined4 * __thiscall m_FUN_1025e8a0(undefined4 *param_2); template<class... A> int m_FUN_1025e8a0(A...); bool __thiscall m_FUN_1025e8c0(uint *param_2); template<class... A> int m_FUN_1025e8c0(A...); bool __thiscall m_FUN_1025e8f0(uint *param_2); template<class... A> int m_FUN_1025e8f0(A...); uint * __thiscall m_FUN_1025e920(uint *param_2); template<class... A> int m_FUN_1025e920(A...); undefined4 __thiscall m_FUN_1025e970(uint *param_2); template<class... A> int m_FUN_1025e970(A...); undefined4 __thiscall m_FUN_1025e9c0(int *param_2); template<class... A> int m_FUN_1025e9c0(A...); undefined4 * __thiscall m_FUN_1025ea10(undefined4 *param_2); template<class... A> int m_FUN_1025ea10(A...); int __thiscall m_FUN_1025ed20(SCStr *param_2); template<class... A> int m_FUN_1025ed20(A...); undefined4 * __thiscall m_FUN_1025f100(int *param_2); template<class... A> int m_FUN_1025f100(A...); undefined4 * __thiscall m_FUN_1025f140(int *param_2); template<class... A> int m_FUN_1025f140(A...); undefined4 * __thiscall m_FUN_1025f340(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_1025f340(A...); undefined4 * __thiscall m_FUN_1025fe70(byte param_2); template<class... A> int m_FUN_1025fe70(A...); undefined4 * __thiscall m_FUN_1025feb0(byte param_2); template<class... A> int m_FUN_1025feb0(A...); undefined4 * __thiscall m_FUN_10260200(byte param_2); template<class... A> int m_FUN_10260200(A...); undefined4 __thiscall m_FUN_102611e0(undefined4 param_2); template<class... A> int m_FUN_102611e0(A...); undefined4 __thiscall m_FUN_10261210(undefined4 param_2); template<class... A> int m_FUN_10261210(A...); SCStr * __thiscall m_FUN_10261310(SCStr *param_2); template<class... A> int m_FUN_10261310(A...); SCStr * __thiscall m_FUN_10261330(SCStr *param_2); template<class... A> int m_FUN_10261330(A...); };

extern __declspec(dllimport) int AddVectoredExceptionHandler(...);
extern int FUN_1004cb77(...);
extern int FUN_10078150(...);
extern int FUN_1020a300(...);
extern int FUN_10218f20(...);
extern int FUN_10257e60(...);
template<class... A> int __stdcall FUN_10259410(A...);
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
template<class... A> int __stdcall thunk_FUN_101a6f70(A...);
extern int thunk_FUN_101a83f0(...);
extern int thunk_FUN_101a8700(...);
extern int thunk_FUN_101a8f30(...);
extern int thunk_FUN_101ab700(...);
extern int thunk_FUN_101b1fc0(...);
template<class... A> int __stdcall thunk_FUN_101b2090(A...);
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
template<class... A> int __stdcall thunk_FUN_101c4440(A...);
extern int thunk_FUN_101c4740(...);
extern int thunk_FUN_101c4810(...);
template<class... A> int __stdcall thunk_FUN_101c4a90(A...);
template<class... A> int __stdcall thunk_FUN_101cde00(A...);
extern int thunk_FUN_101cdee0(...);
extern int thunk_FUN_101cdf90(...);
extern int thunk_FUN_101d19a0(...);
extern int thunk_FUN_101d2f40(...);
extern int thunk_FUN_101d3630(...);
extern int thunk_FUN_101db840(...);
extern int thunk_FUN_101df120(...);
extern int thunk_FUN_101e0b90(...);
template<class... A> int __stdcall thunk_FUN_101e6610(A...);
template<class... A> int __stdcall thunk_FUN_101e6ce0(A...);
template<class... A> int __stdcall thunk_FUN_101e7240(A...);
extern int thunk_FUN_101e76a0(...);
extern int thunk_FUN_101e8670(...);
extern int thunk_FUN_101e8710(...);
template<class... A> int __stdcall thunk_FUN_101e8900(A...);
extern int thunk_FUN_101e8ca0(...);
extern int thunk_FUN_101e90e0(...);
extern int thunk_FUN_101eb2b0(...);
extern int thunk_FUN_101eb3f0(...);
template<class... A> int __stdcall thunk_FUN_101ee360(A...);
extern int thunk_FUN_101ee670(...);
template<class... A> int __stdcall thunk_FUN_101f2ac0(A...);
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
template<class... A> int __stdcall thunk_FUN_10218910(A...);
extern int thunk_FUN_102207b0(...);
extern int thunk_FUN_10222ce0(...);
extern int thunk_FUN_10225ef0(...);
extern int thunk_FUN_10225ff0(...);
extern int thunk_FUN_102260c0(...);
extern int thunk_FUN_10226130(...);
template<class... A> int __stdcall thunk_FUN_10226cf0(A...);
template<class... A> int __stdcall thunk_FUN_10226f80(A...);
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
template<class... A> int __stdcall thunk_FUN_102460b0(A...);
template<class... A> int __stdcall thunk_FUN_10246170(A...);
extern int thunk_FUN_10246290(...);
extern int thunk_FUN_10247530(...);
extern int thunk_FUN_1024be70(...);
extern int thunk_FUN_1024bf80(...);
extern int thunk_FUN_1024f650(...);
extern int thunk_FUN_10252480(...);
extern int thunk_FUN_10252fd0(...);
extern int thunk_FUN_10253830(...);
extern int thunk_FUN_10254af0(...);
template<class... A> int __stdcall thunk_FUN_10254c20(A...);
extern int thunk_FUN_10254f10(...);
extern int thunk_FUN_10255060(...);
extern int thunk_FUN_102589b0(...);
extern int thunk_FUN_10259740(...);
extern int thunk_FUN_1025ed70(...);
template<class... A> int __stdcall thunk_FUN_1025f3f0(A...);
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
template<class... A> int __stdcall thunk_FUN_103d63d0(A...);
template<class... A> int __stdcall thunk_FUN_103d65f0(A...);
extern int thunk_FUN_103d6930(...);
extern int thunk_FUN_104d8370(...);
template<class... A> int __stdcall thunk_FUN_104d8c80(A...);
extern int thunk_FUN_104d9780(...);
extern int thunk_FUN_104dec20(...);
extern int thunk_FUN_104fed90(...);
extern int thunk_FUN_104ffd30(...);
template<class... A> int __stdcall thunk_FUN_1059d5a0(A...);
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
template<class... A> int __stdcall thunk_FUN_111c0af0(A...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1123fce0(...);
extern int thunk_FUN_11240850(...);
template<class... A> int __stdcall thunk_FUN_11240cc0(A...);
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
extern "C" void LAB_1001b7c5(void);
extern "C" void LAB_1005a105(void);
extern "C" void LAB_1008d708(void);
extern "C" void LAB_101aa510(void);
extern "C" void LAB_1021ab6c(void);
extern "C" void LAB_114f3770(void);
extern "C" void LAB_114f37a0(void);
extern "C" void LAB_114f4640(void);
extern "C" void LAB_114f5c50(void);
extern "C" void LAB_114f5c80(void);
extern "C" void LAB_114f5cb0(void);
extern "C" void LAB_114f6840(void);
extern "C" void LAB_114f8000(void);
extern "C" void LAB_114fa300(void);
extern "C" void LAB_114fa330(void);
extern "C" void LAB_114fa360(void);
extern "C" void LAB_114fa390(void);
extern "C" void LAB_114fa3c0(void);
extern "C" void LAB_114fa3f0(void);
extern "C" void LAB_114fa420(void);
extern "C" void LAB_114fa450(void);
extern "C" void LAB_114fc720(void);
extern "C" void LAB_114fc750(void);
extern "C" void LAB_114fe6c0(void);
extern "C" void LAB_114fe6f0(void);
extern "C" void LAB_114fe720(void);
extern "C" void LAB_114fe750(void);
extern "C" void LAB_115018a0(void);
extern "C" void LAB_115018d0(void);
extern "C" void LAB_11503320(void);
extern "C" void LAB_11503350(void);
extern "C" void LAB_11503380(void);
extern "C" void LAB_115033b0(void);
extern "C" void LAB_115033e0(void);
extern "C" void LAB_11503410(void);
extern "C" void LAB_11503440(void);
extern "C" void LAB_11503470(void);
extern "C" void LAB_115034a0(void);
extern "C" void LAB_115034d0(void);
extern "C" void LAB_1150fb80(void);
extern "C" void LAB_115124f0(void);
extern "C" void LAB_11512520(void);
extern "C" void LAB_11512550(void);
extern "C" void LAB_11512580(void);
extern "C" void LAB_11513240(void);
extern void *ExceptionList;
extern int FUN_112a9d70(...);
void __stdcall FUN_1019c9f0(int *param_1);
template<class... A> int __stdcall FUN_1019c9f0(A...);
void __stdcall FUN_1019ca10(int *param_1);
template<class... A> int __stdcall FUN_1019ca10(A...);
void __stdcall FUN_1019ca30(int *param_1);
template<class... A> int __stdcall FUN_1019ca30(A...);
void __stdcall FUN_1019ca50(int *param_1);
template<class... A> int __stdcall FUN_1019ca50(A...);
void __stdcall FUN_1019ca70(int *param_1);
template<class... A> int __stdcall FUN_1019ca70(A...);
void __stdcall FUN_1019ca90(int *param_1);
template<class... A> int __stdcall FUN_1019ca90(A...);
void __stdcall FUN_1019cab0(int *param_1);
template<class... A> int __stdcall FUN_1019cab0(A...);
void __stdcall FUN_1019cad0(int *param_1);
template<class... A> int __stdcall FUN_1019cad0(A...);
void __stdcall FUN_1019caf0(int *param_1);
template<class... A> int __stdcall FUN_1019caf0(A...);
void __stdcall FUN_1019cb10(int *param_1);
template<class... A> int __stdcall FUN_1019cb10(A...);
void __stdcall FUN_1019cb30(int *param_1);
template<class... A> int __stdcall FUN_1019cb30(A...);
void __stdcall FUN_1019cb50(int *param_1);
template<class... A> int __stdcall FUN_1019cb50(A...);
void __stdcall FUN_1019cb70(int *param_1);
template<class... A> int __stdcall FUN_1019cb70(A...);
void __stdcall FUN_1019cb90(int *param_1);
template<class... A> int __stdcall FUN_1019cb90(A...);
void __stdcall FUN_1019cbb0(int *param_1);
template<class... A> int __stdcall FUN_1019cbb0(A...);
void __stdcall FUN_1019cbd0(int *param_1);
template<class... A> int __stdcall FUN_1019cbd0(A...);
void __stdcall FUN_1019cbf0(int *param_1);
template<class... A> int __stdcall FUN_1019cbf0(A...);
void __stdcall FUN_1019cc10(int *param_1);
template<class... A> int __stdcall FUN_1019cc10(A...);
void __stdcall FUN_1019cc30(int *param_1);
template<class... A> int __stdcall FUN_1019cc30(A...);
void __stdcall FUN_1019cc50(int *param_1);
template<class... A> int __stdcall FUN_1019cc50(A...);
void __stdcall FUN_1019cc70(int *param_1);
template<class... A> int __stdcall FUN_1019cc70(A...);
void __stdcall FUN_1019cc90(int *param_1);
template<class... A> int __stdcall FUN_1019cc90(A...);
void __stdcall FUN_1019ccb0(int *param_1);
template<class... A> int __stdcall FUN_1019ccb0(A...);
void __stdcall FUN_1019ccd0(int *param_1);
template<class... A> int __stdcall FUN_1019ccd0(A...);
void __stdcall FUN_1019ccf0(int *param_1);
template<class... A> int __stdcall FUN_1019ccf0(A...);
void __stdcall FUN_1019cd10(int *param_1);
template<class... A> int __stdcall FUN_1019cd10(A...);
void __stdcall FUN_1019cd30(int *param_1);
template<class... A> int __stdcall FUN_1019cd30(A...);
void __stdcall FUN_1019cd50(int *param_1);
template<class... A> int __stdcall FUN_1019cd50(A...);
void __stdcall FUN_1019cd70(int *param_1);
template<class... A> int __stdcall FUN_1019cd70(A...);
void __stdcall FUN_1019cd90(int *param_1);
template<class... A> int __stdcall FUN_1019cd90(A...);
void __stdcall FUN_1019cdb0(int *param_1);
template<class... A> int __stdcall FUN_1019cdb0(A...);
void __stdcall FUN_1019cdd0(int *param_1);
template<class... A> int __stdcall FUN_1019cdd0(A...);
void __stdcall FUN_1019cdf0(int *param_1);
template<class... A> int __stdcall FUN_1019cdf0(A...);
void __stdcall FUN_1019ce10(int *param_1);
template<class... A> int __stdcall FUN_1019ce10(A...);
void __stdcall FUN_1019ce30(int *param_1);
template<class... A> int __stdcall FUN_1019ce30(A...);
void __stdcall FUN_1019ce50(int *param_1);
template<class... A> int __stdcall FUN_1019ce50(A...);
void __stdcall FUN_1019ce70(int *param_1);
template<class... A> int __stdcall FUN_1019ce70(A...);
void __stdcall FUN_1019ce90(int *param_1);
template<class... A> int __stdcall FUN_1019ce90(A...);
void __stdcall FUN_1019ceb0(int *param_1);
template<class... A> int __stdcall FUN_1019ceb0(A...);
void __stdcall FUN_1019ced0(int *param_1);
template<class... A> int __stdcall FUN_1019ced0(A...);
void __stdcall FUN_1019cef0(int *param_1);
template<class... A> int __stdcall FUN_1019cef0(A...);
void __stdcall FUN_1019cf10(int *param_1);
template<class... A> int __stdcall FUN_1019cf10(A...);
void __stdcall FUN_1019cf30(int *param_1);
template<class... A> int __stdcall FUN_1019cf30(A...);
void __stdcall FUN_1019cf50(int *param_1);
template<class... A> int __stdcall FUN_1019cf50(A...);
void __stdcall FUN_1019cf70(int *param_1);
template<class... A> int __stdcall FUN_1019cf70(A...);
void __stdcall FUN_1019cf90(int *param_1);
template<class... A> int __stdcall FUN_1019cf90(A...);
void __stdcall FUN_1019cfb0(int *param_1);
template<class... A> int __stdcall FUN_1019cfb0(A...);
void __stdcall FUN_1019cfd0(int *param_1);
template<class... A> int __stdcall FUN_1019cfd0(A...);
void __stdcall FUN_1019cff0(int *param_1);
template<class... A> int __stdcall FUN_1019cff0(A...);
void __stdcall FUN_1019d010(int *param_1);
template<class... A> int __stdcall FUN_1019d010(A...);
void __stdcall FUN_1019d030(int *param_1);
template<class... A> int __stdcall FUN_1019d030(A...);
void __stdcall FUN_1019d050(int *param_1);
template<class... A> int __stdcall FUN_1019d050(A...);
void __stdcall FUN_1019d070(int *param_1);
template<class... A> int __stdcall FUN_1019d070(A...);
void __stdcall FUN_1019d090(int *param_1);
template<class... A> int __stdcall FUN_1019d090(A...);
void __stdcall FUN_1019d0b0(int *param_1);
template<class... A> int __stdcall FUN_1019d0b0(A...);
void __stdcall FUN_1019d0d0(int *param_1);
template<class... A> int __stdcall FUN_1019d0d0(A...);
void __stdcall FUN_1019d0f0(int *param_1);
template<class... A> int __stdcall FUN_1019d0f0(A...);
void __stdcall FUN_1019d110(int *param_1);
template<class... A> int __stdcall FUN_1019d110(A...);
void __stdcall FUN_1019d130(int *param_1);
template<class... A> int __stdcall FUN_1019d130(A...);
void __stdcall FUN_1019d150(int *param_1);
template<class... A> int __stdcall FUN_1019d150(A...);
void __stdcall FUN_1019d170(int *param_1);
template<class... A> int __stdcall FUN_1019d170(A...);
void __stdcall FUN_1019d190(int *param_1);
template<class... A> int __stdcall FUN_1019d190(A...);
void __stdcall FUN_1019d1b0(int *param_1);
template<class... A> int __stdcall FUN_1019d1b0(A...);
void __stdcall FUN_1019d1d0(int *param_1);
template<class... A> int __stdcall FUN_1019d1d0(A...);
void __stdcall FUN_1019d1f0(int *param_1);
template<class... A> int __stdcall FUN_1019d1f0(A...);
void __stdcall FUN_1019d210(int *param_1);
template<class... A> int __stdcall FUN_1019d210(A...);
void __stdcall FUN_1019d230(int *param_1);
template<class... A> int __stdcall FUN_1019d230(A...);
void __stdcall FUN_1019d250(int *param_1);
template<class... A> int __stdcall FUN_1019d250(A...);
void __stdcall FUN_1019d270(int *param_1);
template<class... A> int __stdcall FUN_1019d270(A...);
void __stdcall FUN_1019d290(int *param_1);
template<class... A> int __stdcall FUN_1019d290(A...);
void __stdcall FUN_1019d2b0(int *param_1);
template<class... A> int __stdcall FUN_1019d2b0(A...);
void __stdcall FUN_1019d2d0(int *param_1);
template<class... A> int __stdcall FUN_1019d2d0(A...);
void __stdcall FUN_1019d2f0(int *param_1);
template<class... A> int __stdcall FUN_1019d2f0(A...);
void __stdcall FUN_1019d310(int *param_1);
template<class... A> int __stdcall FUN_1019d310(A...);
void __stdcall FUN_1019d330(int *param_1);
template<class... A> int __stdcall FUN_1019d330(A...);
void __stdcall FUN_1019d350(int *param_1);
template<class... A> int __stdcall FUN_1019d350(A...);
void __stdcall FUN_1019d370(int *param_1);
template<class... A> int __stdcall FUN_1019d370(A...);
void __stdcall FUN_1019d390(int *param_1);
template<class... A> int __stdcall FUN_1019d390(A...);
void __stdcall FUN_1019d3b0(int *param_1);
template<class... A> int __stdcall FUN_1019d3b0(A...);
void __stdcall FUN_1019d3d0(int *param_1);
template<class... A> int __stdcall FUN_1019d3d0(A...);
void __stdcall FUN_1019d3f0(int *param_1);
template<class... A> int __stdcall FUN_1019d3f0(A...);
void __stdcall FUN_1019d410(int *param_1);
template<class... A> int __stdcall FUN_1019d410(A...);
void __stdcall FUN_1019d430(int *param_1);
template<class... A> int __stdcall FUN_1019d430(A...);
void __stdcall FUN_1019d450(int *param_1);
template<class... A> int __stdcall FUN_1019d450(A...);
void __stdcall FUN_1019d470(int *param_1);
template<class... A> int __stdcall FUN_1019d470(A...);
void __stdcall FUN_1019d490(int *param_1);
template<class... A> int __stdcall FUN_1019d490(A...);
void __stdcall FUN_1019d4b0(int *param_1);
template<class... A> int __stdcall FUN_1019d4b0(A...);
void __stdcall FUN_1019d4d0(int *param_1);
template<class... A> int __stdcall FUN_1019d4d0(A...);
void __stdcall FUN_1019d4f0(int *param_1);
template<class... A> int __stdcall FUN_1019d4f0(A...);
void __stdcall FUN_1019d510(int *param_1);
template<class... A> int __stdcall FUN_1019d510(A...);
void __stdcall FUN_1019d530(int *param_1);
template<class... A> int __stdcall FUN_1019d530(A...);
void __stdcall FUN_1019d550(int *param_1);
template<class... A> int __stdcall FUN_1019d550(A...);
void __stdcall FUN_1019d570(int *param_1);
template<class... A> int __stdcall FUN_1019d570(A...);
void __stdcall FUN_1019d590(int *param_1);
template<class... A> int __stdcall FUN_1019d590(A...);
void __stdcall FUN_1019d5b0(int *param_1);
template<class... A> int __stdcall FUN_1019d5b0(A...);
void __stdcall FUN_1019d5d0(int *param_1);
template<class... A> int __stdcall FUN_1019d5d0(A...);
void __stdcall FUN_1019d5f0(int *param_1);
template<class... A> int __stdcall FUN_1019d5f0(A...);
void __stdcall FUN_1019d610(int *param_1);
template<class... A> int __stdcall FUN_1019d610(A...);
void __stdcall FUN_1019d630(int *param_1);
template<class... A> int __stdcall FUN_1019d630(A...);
void __stdcall FUN_1019d650(int *param_1);
template<class... A> int __stdcall FUN_1019d650(A...);
void __stdcall FUN_1019d670(int *param_1);
template<class... A> int __stdcall FUN_1019d670(A...);
void __stdcall FUN_1019d690(int *param_1);
template<class... A> int __stdcall FUN_1019d690(A...);
void __stdcall FUN_1019d6b0(int *param_1);
template<class... A> int __stdcall FUN_1019d6b0(A...);
void __stdcall FUN_1019d6d0(int *param_1);
template<class... A> int __stdcall FUN_1019d6d0(A...);
void __stdcall FUN_1019d6f0(int *param_1);
template<class... A> int __stdcall FUN_1019d6f0(A...);
void __stdcall FUN_1019d710(int *param_1);
template<class... A> int __stdcall FUN_1019d710(A...);
void __stdcall FUN_1019d730(int *param_1);
template<class... A> int __stdcall FUN_1019d730(A...);
void __stdcall FUN_1019d750(int *param_1);
template<class... A> int __stdcall FUN_1019d750(A...);
void __stdcall FUN_1019d770(int *param_1);
template<class... A> int __stdcall FUN_1019d770(A...);
void __stdcall FUN_1019d790(int *param_1);
template<class... A> int __stdcall FUN_1019d790(A...);
void __stdcall FUN_1019d7b0(int *param_1);
template<class... A> int __stdcall FUN_1019d7b0(A...);
void __stdcall FUN_1019d7d0(int *param_1);
template<class... A> int __stdcall FUN_1019d7d0(A...);
void __stdcall FUN_1019d7f0(int *param_1);
template<class... A> int __stdcall FUN_1019d7f0(A...);
void __stdcall FUN_1019d810(int *param_1);
template<class... A> int __stdcall FUN_1019d810(A...);
void __stdcall FUN_1019d830(int *param_1);
template<class... A> int __stdcall FUN_1019d830(A...);
void __stdcall FUN_1019d850(int *param_1);
template<class... A> int __stdcall FUN_1019d850(A...);
void __stdcall FUN_1019d870(int *param_1);
template<class... A> int __stdcall FUN_1019d870(A...);
void __stdcall FUN_1019d890(int *param_1);
template<class... A> int __stdcall FUN_1019d890(A...);
void __stdcall FUN_1019d8b0(int *param_1);
template<class... A> int __stdcall FUN_1019d8b0(A...);
void __stdcall FUN_1019d8d0(int *param_1);
template<class... A> int __stdcall FUN_1019d8d0(A...);
void __stdcall FUN_1019d8f0(int *param_1);
template<class... A> int __stdcall FUN_1019d8f0(A...);
void __stdcall FUN_1019d910(int *param_1);
template<class... A> int __stdcall FUN_1019d910(A...);
void __stdcall FUN_1019d930(int *param_1);
template<class... A> int __stdcall FUN_1019d930(A...);
void __stdcall FUN_1019d950(int *param_1);
template<class... A> int __stdcall FUN_1019d950(A...);
void __stdcall FUN_1019d970(int *param_1);
template<class... A> int __stdcall FUN_1019d970(A...);
void __stdcall FUN_1019d990(int *param_1);
template<class... A> int __stdcall FUN_1019d990(A...);
void __stdcall FUN_1019d9b0(int *param_1);
template<class... A> int __stdcall FUN_1019d9b0(A...);
void __stdcall FUN_1019d9d0(int *param_1);
template<class... A> int __stdcall FUN_1019d9d0(A...);
void __stdcall FUN_1019d9f0(int *param_1);
template<class... A> int __stdcall FUN_1019d9f0(A...);
void __stdcall FUN_1019da10(int *param_1);
template<class... A> int __stdcall FUN_1019da10(A...);
void __stdcall FUN_1019da30(int *param_1);
template<class... A> int __stdcall FUN_1019da30(A...);
void __stdcall FUN_1019da50(int *param_1);
template<class... A> int __stdcall FUN_1019da50(A...);
void __stdcall FUN_1019da70(int *param_1);
template<class... A> int __stdcall FUN_1019da70(A...);
void __stdcall FUN_1019da90(int *param_1);
template<class... A> int __stdcall FUN_1019da90(A...);
void __stdcall FUN_1019dab0(int *param_1);
template<class... A> int __stdcall FUN_1019dab0(A...);
void __stdcall FUN_1019dad0(int *param_1);
template<class... A> int __stdcall FUN_1019dad0(A...);
void __stdcall FUN_1019daf0(int *param_1);
template<class... A> int __stdcall FUN_1019daf0(A...);
void __stdcall FUN_1019db10(int *param_1);
template<class... A> int __stdcall FUN_1019db10(A...);
void __stdcall FUN_1019db30(int *param_1);
template<class... A> int __stdcall FUN_1019db30(A...);
void __stdcall FUN_1019db50(int *param_1);
template<class... A> int __stdcall FUN_1019db50(A...);
void __stdcall FUN_1019db70(int *param_1);
template<class... A> int __stdcall FUN_1019db70(A...);
void __stdcall FUN_1019db90(int *param_1);
template<class... A> int __stdcall FUN_1019db90(A...);
void __stdcall FUN_1019dbb0(int *param_1);
template<class... A> int __stdcall FUN_1019dbb0(A...);
void __stdcall FUN_1019dbd0(int *param_1);
template<class... A> int __stdcall FUN_1019dbd0(A...);
void __stdcall FUN_1019dbf0(int *param_1);
template<class... A> int __stdcall FUN_1019dbf0(A...);
void __stdcall FUN_1019dc10(int *param_1);
template<class... A> int __stdcall FUN_1019dc10(A...);
void __stdcall FUN_1019dc30(int *param_1);
template<class... A> int __stdcall FUN_1019dc30(A...);
void __stdcall FUN_1019dc50(int *param_1);
template<class... A> int __stdcall FUN_1019dc50(A...);
void __stdcall FUN_1019dc70(int *param_1);
template<class... A> int __stdcall FUN_1019dc70(A...);
void __stdcall FUN_1019dc90(int *param_1);
template<class... A> int __stdcall FUN_1019dc90(A...);
void __stdcall FUN_1019dcb0(int *param_1);
template<class... A> int __stdcall FUN_1019dcb0(A...);
void __stdcall FUN_1019dcd0(int *param_1);
template<class... A> int __stdcall FUN_1019dcd0(A...);
void __stdcall FUN_1019dcf0(int *param_1);
template<class... A> int __stdcall FUN_1019dcf0(A...);
void __stdcall FUN_1019dd10(int *param_1);
template<class... A> int __stdcall FUN_1019dd10(A...);
void __stdcall FUN_1019dd30(int *param_1);
template<class... A> int __stdcall FUN_1019dd30(A...);
void __stdcall FUN_1019dd50(int *param_1);
template<class... A> int __stdcall FUN_1019dd50(A...);
void __stdcall FUN_1019dd70(int *param_1);
template<class... A> int __stdcall FUN_1019dd70(A...);
void __stdcall FUN_1019dd90(int *param_1);
template<class... A> int __stdcall FUN_1019dd90(A...);
void __stdcall FUN_1019ddb0(int *param_1);
template<class... A> int __stdcall FUN_1019ddb0(A...);
void __stdcall FUN_1019ddd0(int *param_1);
template<class... A> int __stdcall FUN_1019ddd0(A...);
void __stdcall FUN_1019ddf0(int *param_1);
template<class... A> int __stdcall FUN_1019ddf0(A...);
void __stdcall FUN_1019de10(int *param_1);
template<class... A> int __stdcall FUN_1019de10(A...);
void __stdcall FUN_1019de30(int *param_1);
template<class... A> int __stdcall FUN_1019de30(A...);
void __stdcall FUN_1019de50(int *param_1);
template<class... A> int __stdcall FUN_1019de50(A...);
void __stdcall FUN_1019de70(int *param_1);
template<class... A> int __stdcall FUN_1019de70(A...);
void __stdcall FUN_1019de90(int *param_1);
template<class... A> int __stdcall FUN_1019de90(A...);
void __stdcall FUN_1019deb0(int *param_1);
template<class... A> int __stdcall FUN_1019deb0(A...);
void __stdcall FUN_1019ded0(int *param_1);
template<class... A> int __stdcall FUN_1019ded0(A...);
void __stdcall FUN_1019def0(int *param_1);
template<class... A> int __stdcall FUN_1019def0(A...);
void __stdcall FUN_1019df10(int *param_1);
template<class... A> int __stdcall FUN_1019df10(A...);
void __stdcall FUN_1019df30(int *param_1);
template<class... A> int __stdcall FUN_1019df30(A...);
void __stdcall FUN_1019df50(int *param_1);
template<class... A> int __stdcall FUN_1019df50(A...);
void __stdcall FUN_1019df70(int *param_1);
template<class... A> int __stdcall FUN_1019df70(A...);
void __stdcall FUN_1019df90(int *param_1);
template<class... A> int __stdcall FUN_1019df90(A...);
void __stdcall FUN_1019dfb0(int *param_1);
template<class... A> int __stdcall FUN_1019dfb0(A...);
void __stdcall FUN_1019dfd0(int *param_1);
template<class... A> int __stdcall FUN_1019dfd0(A...);
void __stdcall FUN_1019dff0(int *param_1);
template<class... A> int __stdcall FUN_1019dff0(A...);
void __stdcall FUN_1019e010(int *param_1);
template<class... A> int __stdcall FUN_1019e010(A...);
void __stdcall FUN_1019e030(int *param_1);
template<class... A> int __stdcall FUN_1019e030(A...);
void __stdcall FUN_1019e050(int *param_1);
template<class... A> int __stdcall FUN_1019e050(A...);
void __stdcall FUN_1019e070(int *param_1);
template<class... A> int __stdcall FUN_1019e070(A...);
void __stdcall FUN_1019e090(int *param_1);
template<class... A> int __stdcall FUN_1019e090(A...);
void __stdcall FUN_1019e0b0(int *param_1);
template<class... A> int __stdcall FUN_1019e0b0(A...);
void __stdcall FUN_1019e0d0(int *param_1);
template<class... A> int __stdcall FUN_1019e0d0(A...);
void __stdcall FUN_1019e0f0(int *param_1);
template<class... A> int __stdcall FUN_1019e0f0(A...);
void __stdcall FUN_1019e110(int *param_1);
template<class... A> int __stdcall FUN_1019e110(A...);
void __stdcall FUN_1019e130(int *param_1);
template<class... A> int __stdcall FUN_1019e130(A...);
void __stdcall FUN_1019e150(int *param_1);
template<class... A> int __stdcall FUN_1019e150(A...);
void __stdcall FUN_1019e170(int *param_1);
template<class... A> int __stdcall FUN_1019e170(A...);
void __stdcall FUN_1019e190(int *param_1);
template<class... A> int __stdcall FUN_1019e190(A...);
void __stdcall FUN_1019e1b0(int *param_1);
template<class... A> int __stdcall FUN_1019e1b0(A...);
void __stdcall FUN_1019e1d0(int *param_1);
template<class... A> int __stdcall FUN_1019e1d0(A...);
void __stdcall FUN_1019e1f0(int *param_1);
template<class... A> int __stdcall FUN_1019e1f0(A...);
void __stdcall FUN_1019e210(int *param_1);
template<class... A> int __stdcall FUN_1019e210(A...);
void __stdcall FUN_1019e230(int *param_1);
template<class... A> int __stdcall FUN_1019e230(A...);
void __stdcall FUN_1019e250(int *param_1);
template<class... A> int __stdcall FUN_1019e250(A...);
void __stdcall FUN_1019e270(int *param_1);
template<class... A> int __stdcall FUN_1019e270(A...);
void __stdcall FUN_1019e290(int *param_1);
template<class... A> int __stdcall FUN_1019e290(A...);
void __stdcall FUN_1019e2b0(int *param_1);
template<class... A> int __stdcall FUN_1019e2b0(A...);
void __stdcall FUN_1019e2d0(int *param_1);
template<class... A> int __stdcall FUN_1019e2d0(A...);
void __stdcall FUN_1019e2f0(int *param_1);
template<class... A> int __stdcall FUN_1019e2f0(A...);
void __stdcall FUN_1019e310(int *param_1);
template<class... A> int __stdcall FUN_1019e310(A...);
void __stdcall FUN_1019e330(int *param_1);
template<class... A> int __stdcall FUN_1019e330(A...);
void __stdcall FUN_1019e350(int *param_1);
template<class... A> int __stdcall FUN_1019e350(A...);
void __stdcall FUN_1019e370(int *param_1);
template<class... A> int __stdcall FUN_1019e370(A...);
void __stdcall FUN_1019e390(int *param_1);
template<class... A> int __stdcall FUN_1019e390(A...);
void __stdcall FUN_1019e3b0(int *param_1);
template<class... A> int __stdcall FUN_1019e3b0(A...);
void __stdcall FUN_1019e3d0(int *param_1);
template<class... A> int __stdcall FUN_1019e3d0(A...);
void __stdcall FUN_1019e3f0(int *param_1);
template<class... A> int __stdcall FUN_1019e3f0(A...);
void __stdcall FUN_1019e410(int *param_1);
template<class... A> int __stdcall FUN_1019e410(A...);
void __stdcall FUN_1019e430(int *param_1);
template<class... A> int __stdcall FUN_1019e430(A...);
void __stdcall FUN_1019e450(int *param_1);
template<class... A> int __stdcall FUN_1019e450(A...);
void __stdcall FUN_1019e470(int *param_1);
template<class... A> int __stdcall FUN_1019e470(A...);
void __stdcall FUN_1019e490(int *param_1);
template<class... A> int __stdcall FUN_1019e490(A...);
void __stdcall FUN_1019e4b0(int *param_1);
template<class... A> int __stdcall FUN_1019e4b0(A...);
void __stdcall FUN_1019e4d0(int *param_1);
template<class... A> int __stdcall FUN_1019e4d0(A...);
void __stdcall FUN_1019e4f0(int *param_1);
template<class... A> int __stdcall FUN_1019e4f0(A...);
void __stdcall FUN_1019e510(int *param_1);
template<class... A> int __stdcall FUN_1019e510(A...);
void __stdcall FUN_1019e530(int *param_1);
template<class... A> int __stdcall FUN_1019e530(A...);
void __stdcall FUN_1019e550(int *param_1);
template<class... A> int __stdcall FUN_1019e550(A...);
void __stdcall FUN_1019e570(int *param_1);
template<class... A> int __stdcall FUN_1019e570(A...);
void __stdcall FUN_1019e590(int *param_1);
template<class... A> int __stdcall FUN_1019e590(A...);
void __stdcall FUN_1019e5b0(int *param_1);
template<class... A> int __stdcall FUN_1019e5b0(A...);
void __stdcall FUN_1019e5d0(int *param_1);
template<class... A> int __stdcall FUN_1019e5d0(A...);
void __stdcall FUN_1019e5f0(int *param_1);
template<class... A> int __stdcall FUN_1019e5f0(A...);
void __stdcall FUN_1019e610(int *param_1);
template<class... A> int __stdcall FUN_1019e610(A...);
void __stdcall FUN_1019e630(int *param_1);
template<class... A> int __stdcall FUN_1019e630(A...);
void __stdcall FUN_1019e650(int *param_1);
template<class... A> int __stdcall FUN_1019e650(A...);
void __stdcall FUN_1019e670(int *param_1);
template<class... A> int __stdcall FUN_1019e670(A...);
void __stdcall FUN_1019e690(int *param_1);
template<class... A> int __stdcall FUN_1019e690(A...);
void __stdcall FUN_1019e6b0(int *param_1);
template<class... A> int __stdcall FUN_1019e6b0(A...);
void __stdcall FUN_1019e6d0(int *param_1);
template<class... A> int __stdcall FUN_1019e6d0(A...);
void __stdcall FUN_1019e6f0(int *param_1);
template<class... A> int __stdcall FUN_1019e6f0(A...);
void __stdcall FUN_1019e710(int *param_1);
template<class... A> int __stdcall FUN_1019e710(A...);
void __stdcall FUN_1019e730(int *param_1);
template<class... A> int __stdcall FUN_1019e730(A...);
void __stdcall FUN_1019e750(int *param_1);
template<class... A> int __stdcall FUN_1019e750(A...);
void __stdcall FUN_1019e770(int *param_1);
template<class... A> int __stdcall FUN_1019e770(A...);
void __stdcall FUN_1019e790(int *param_1);
template<class... A> int __stdcall FUN_1019e790(A...);
void __stdcall FUN_1019e7b0(int *param_1);
template<class... A> int __stdcall FUN_1019e7b0(A...);
void __stdcall FUN_1019e7d0(int *param_1);
template<class... A> int __stdcall FUN_1019e7d0(A...);
void __stdcall FUN_1019e7f0(int *param_1);
template<class... A> int __stdcall FUN_1019e7f0(A...);
void __stdcall FUN_1019e810(int *param_1);
template<class... A> int __stdcall FUN_1019e810(A...);
void __stdcall FUN_1019e830(int *param_1);
template<class... A> int __stdcall FUN_1019e830(A...);
void __stdcall FUN_1019e850(int *param_1);
template<class... A> int __stdcall FUN_1019e850(A...);
void __stdcall FUN_1019e870(int *param_1);
template<class... A> int __stdcall FUN_1019e870(A...);
void __stdcall FUN_1019e890(int *param_1);
template<class... A> int __stdcall FUN_1019e890(A...);
void __stdcall FUN_1019e8b0(int *param_1);
template<class... A> int __stdcall FUN_1019e8b0(A...);
void __stdcall FUN_1019e8d0(int *param_1);
template<class... A> int __stdcall FUN_1019e8d0(A...);
void __stdcall FUN_1019e8f0(int *param_1);
template<class... A> int __stdcall FUN_1019e8f0(A...);
void __stdcall FUN_1019e910(int *param_1);
template<class... A> int __stdcall FUN_1019e910(A...);
void __stdcall FUN_1019e930(int *param_1);
template<class... A> int __stdcall FUN_1019e930(A...);
void __stdcall FUN_1019e950(int *param_1);
template<class... A> int __stdcall FUN_1019e950(A...);
void __stdcall FUN_1019e970(int *param_1);
template<class... A> int __stdcall FUN_1019e970(A...);
void __stdcall FUN_1019e990(int *param_1);
template<class... A> int __stdcall FUN_1019e990(A...);
void __stdcall FUN_1019e9b0(int *param_1);
template<class... A> int __stdcall FUN_1019e9b0(A...);
void __stdcall FUN_1019e9d0(int *param_1);
template<class... A> int __stdcall FUN_1019e9d0(A...);
void __stdcall FUN_1019e9f0(int *param_1);
template<class... A> int __stdcall FUN_1019e9f0(A...);
void __stdcall FUN_1019ea10(int *param_1);
template<class... A> int __stdcall FUN_1019ea10(A...);
void __stdcall FUN_1019ea30(int *param_1);
template<class... A> int __stdcall FUN_1019ea30(A...);
void __stdcall FUN_1019eaf0(int *param_1);
template<class... A> int __stdcall FUN_1019eaf0(A...);
void __stdcall FUN_1019eb10(int *param_1);
template<class... A> int __stdcall FUN_1019eb10(A...);
void __stdcall FUN_1019eb30(int *param_1);
template<class... A> int __stdcall FUN_1019eb30(A...);
void __stdcall FUN_1019eb50(int *param_1);
template<class... A> int __stdcall FUN_1019eb50(A...);
void __stdcall FUN_1019ebf0(int *param_1);
template<class... A> int __stdcall FUN_1019ebf0(A...);
void __stdcall FUN_1019ec10(int *param_1);
template<class... A> int __stdcall FUN_1019ec10(A...);
void __stdcall FUN_1019ec30(int *param_1);
template<class... A> int __stdcall FUN_1019ec30(A...);
void __stdcall FUN_1019ec50(int *param_1);
template<class... A> int __stdcall FUN_1019ec50(A...);
void __stdcall FUN_1019ec70(int *param_1);
template<class... A> int __stdcall FUN_1019ec70(A...);
void __stdcall FUN_1019ec90(int *param_1);
template<class... A> int __stdcall FUN_1019ec90(A...);
void __stdcall FUN_1019ecb0(int *param_1);
template<class... A> int __stdcall FUN_1019ecb0(A...);
void __stdcall FUN_1019ecd0(int *param_1);
template<class... A> int __stdcall FUN_1019ecd0(A...);
void __stdcall FUN_1019ecf0(int *param_1);
template<class... A> int __stdcall FUN_1019ecf0(A...);
void __stdcall FUN_1019ed90(int param_1);
template<class... A> int __stdcall FUN_1019ed90(A...);
void __stdcall FUN_1019edb0(int *param_1);
template<class... A> int __stdcall FUN_1019edb0(A...);
void __stdcall FUN_1019edd0(int *param_1);
template<class... A> int __stdcall FUN_1019edd0(A...);
void __stdcall FUN_1019edf0(int *param_1);
template<class... A> int __stdcall FUN_1019edf0(A...);
void __stdcall FUN_1019ee10(int *param_1);
template<class... A> int __stdcall FUN_1019ee10(A...);
void __stdcall FUN_1019ee30(int *param_1);
template<class... A> int __stdcall FUN_1019ee30(A...);
void __stdcall FUN_1019ee50(int *param_1);
template<class... A> int __stdcall FUN_1019ee50(A...);
void __stdcall FUN_1019ee70(int *param_1);
template<class... A> int __stdcall FUN_1019ee70(A...);
void __stdcall FUN_1019ee90(int *param_1);
template<class... A> int __stdcall FUN_1019ee90(A...);
void __stdcall FUN_1019eeb0(SCLibParameters *param_1);
template<class... A> int __stdcall FUN_1019eeb0(A...);
void __stdcall FUN_1019eee0(int *param_1);
template<class... A> int __stdcall FUN_1019eee0(A...);
void __stdcall FUN_1019ef00(int *param_1);
template<class... A> int __stdcall FUN_1019ef00(A...);
void __stdcall FUN_1019ef20(int *param_1);
template<class... A> int __stdcall FUN_1019ef20(A...);
void __stdcall FUN_1019ef40(int *param_1);
template<class... A> int __stdcall FUN_1019ef40(A...);
void __stdcall FUN_1019ef60(int *param_1);
template<class... A> int __stdcall FUN_1019ef60(A...);
void __stdcall FUN_1019ef80(int *param_1);
template<class... A> int __stdcall FUN_1019ef80(A...);
void __stdcall FUN_1019efa0(int *param_1);
template<class... A> int __stdcall FUN_1019efa0(A...);
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
undefined4 * __stdcall FUN_101a19a0(undefined4 param_1,undefined4 param_2);
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
undefined4 *  FUN_101a45a0(SCStr *param_1,char *param_2);
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
template<class... A> int __stdcall FUN_101acad0(A...);
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
template<class... A> int __stdcall FUN_101b5270(A...);
bool __fastcall FUN_101b5ef0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_101b5ef0(A...);
bool __fastcall FUN_101b7d20(int param_1);
template<class... A> int FUN_101b7d20(A...);
void __fastcall FUN_101b8260(undefined4 *param_1);
template<class... A> int FUN_101b8260(A...);
SCStr * __stdcall FUN_101b8720(SCStr *param_1);
template<class... A> int __stdcall FUN_101b8720(A...);
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
template<class... A> int __stdcall FUN_101bb0e0(A...);
void __fastcall FUN_101bb100(int *param_1);
template<class... A> int FUN_101bb100(A...);
void __fastcall FUN_101bb140(undefined4 *param_1);
template<class... A> int FUN_101bb140(A...);
void __fastcall FUN_101bb180(int *param_1);
template<class... A> int FUN_101bb180(A...);
SCStr * __stdcall FUN_101bb870(SCStr *param_1);
template<class... A> int __stdcall FUN_101bb870(A...);
bool __fastcall FUN_101bbbe0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_101bbbe0(A...);
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
template<class... A> int __stdcall FUN_101c58b0(A...);
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
template<class... A> int __stdcall FUN_101c7440(A...);
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
template<class... A> int __stdcall FUN_101ca950(A...);
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
template<class... A> int __stdcall FUN_101d0020(A...);
undefined4 * __fastcall FUN_101d0060(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_101d0060(A...);
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
template<class... A> int __stdcall FUN_101d4050(A...);
int * __fastcall FUN_101d4080(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_101d4080(A...);
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
template<class... A> int __stdcall FUN_101d96d0(A...);
SCStr * __stdcall FUN_101d96f0(SCStr *param_1);
template<class... A> int __stdcall FUN_101d96f0(A...);
SCStr * __stdcall FUN_101d9d40(SCStr *param_1);
template<class... A> int __stdcall FUN_101d9d40(A...);
SCStr * __stdcall FUN_101d9fb0(SCStr *param_1);
template<class... A> int __stdcall FUN_101d9fb0(A...);
SCStr * __stdcall FUN_101d9fe0(SCStr *param_1);
template<class... A> int __stdcall FUN_101d9fe0(A...);
int __fastcall FUN_101dce30(int param_1);
template<class... A> int FUN_101dce30(A...);
undefined4 __fastcall FUN_101dcef0(int param_1);
template<class... A> int FUN_101dcef0(A...);
bool __fastcall FUN_101dcf50(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_101dcf50(A...);
void __stdcall FUN_101dcf70(SCStr *param_1);
template<class... A> int __stdcall FUN_101dcf70(A...);
void __stdcall FUN_101dcf90(SCStr *param_1);
template<class... A> int __stdcall FUN_101dcf90(A...);
void __fastcall FUN_101dd0a0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_101dd0a0(A...);
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
template<class... A> int __stdcall FUN_101e6c60(A...);
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
template<class... A> int __stdcall FUN_101ee2e0(A...);
SCStr * __stdcall FUN_101ee310(SCStr *param_1);
template<class... A> int __stdcall FUN_101ee310(A...);
SCStr * __stdcall FUN_101ee630(SCStr *param_1);
template<class... A> int __stdcall FUN_101ee630(A...);
undefined4 FUN_101ee650(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_101ee650(A...);
void __fastcall FUN_101f1c60(int param_1);
template<class... A> int FUN_101f1c60(A...);
void __fastcall FUN_101f1e90(int param_1);
template<class... A> int FUN_101f1e90(A...);
void __fastcall FUN_101f1ed0(int param_1);
template<class... A> int FUN_101f1ed0(A...);
void __stdcall FUN_101f2c10(undefined4 param_1);
template<class... A> int __stdcall FUN_101f2c10(A...);
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
template<class... A> int __stdcall FUN_101fb3a0(A...);
SCStr * __stdcall FUN_101fb5a0(SCStr *param_1);
template<class... A> int __stdcall FUN_101fb5a0(A...);
undefined4 *  __stdcall FUN_101fc380(int param_1);
template<class... A> int __stdcall FUN_101fc380(A...);
void __stdcall FUN_101fc3a0(int param_1);
template<class... A> int __stdcall FUN_101fc3a0(A...);
undefined4 * __fastcall FUN_101fef30(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_101fef30(A...);
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
undefined4 __stdcall FUN_10208df0(undefined4 param_1);
template<class... A> int __stdcall FUN_10208df0(A...);
void __stdcall FUN_1020a070(int param_1,int param_2);
template<class... A> int FUN_1020a070(A...);
/* WARNING: Removing unreachable block (ram,0x1020a316) */ int __fastcall FUN_1020a300(int param_1);
SCStr * __stdcall FUN_1020a330(SCStr *param_1);
template<class... A> int __stdcall FUN_1020a330(A...);
SCStr * __stdcall FUN_1020a350(SCStr *param_1);
template<class... A> int __stdcall FUN_1020a350(A...);
void __fastcall FUN_1020a380(undefined4 *param_1);
template<class... A> int FUN_1020a380(A...);
void __fastcall FUN_1020a3c0(undefined4 *param_1);
template<class... A> int FUN_1020a3c0(A...);
void __fastcall FUN_1020a400(int *param_1);
template<class... A> int FUN_1020a400(A...);
undefined1 __fastcall FUN_1020a5e0(int *param_1);
template<class... A> int FUN_1020a5e0(A...);
SCStr * __stdcall FUN_1020a620(SCStr *param_1);
template<class... A> int __stdcall FUN_1020a620(A...);
SCStr * __stdcall FUN_1020a6c0(SCStr *param_1);
template<class... A> int __stdcall FUN_1020a6c0(A...);
SCStr * __stdcall FUN_1020a6e0(SCStr *param_1);
template<class... A> int __stdcall FUN_1020a6e0(A...);
SCStr * __stdcall FUN_1020a700(SCStr *param_1);
template<class... A> int __stdcall FUN_1020a700(A...);
SCStr * __stdcall FUN_1020a720(SCStr *param_1);
template<class... A> int __stdcall FUN_1020a720(A...);
SCStr * __stdcall FUN_1020a740(SCStr *param_1);
template<class... A> int __stdcall FUN_1020a740(A...);
undefined4 __fastcall FUN_1020bfe0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_1020bfe0(A...);
SCStr * __stdcall FUN_1020c210(SCStr *param_1);
template<class... A> int __stdcall FUN_1020c210(A...);
SCStr * __stdcall FUN_1020d120(SCStr *param_1);
template<class... A> int __stdcall FUN_1020d120(A...);
SCStr * __stdcall FUN_1020d140(SCStr *param_1);
template<class... A> int __stdcall FUN_1020d140(A...);
SCStr * __stdcall FUN_1020d160(SCStr *param_1);
template<class... A> int __stdcall FUN_1020d160(A...);
SCStr * __stdcall FUN_1020d180(SCStr *param_1);
template<class... A> int __stdcall FUN_1020d180(A...);
SCStr * __stdcall FUN_1020d1a0(SCStr *param_1);
template<class... A> int __stdcall FUN_1020d1a0(A...);
SCStr * __stdcall FUN_1020d1c0(SCStr *param_1);
template<class... A> int __stdcall FUN_1020d1c0(A...);
SCStr * __stdcall FUN_1020d2f0(SCStr *param_1);
template<class... A> int __stdcall FUN_1020d2f0(A...);
SCStr * __stdcall FUN_1020d330(SCStr *param_1);
template<class... A> int __stdcall FUN_1020d330(A...);
void __fastcall FUN_1020d730(int param_1);
template<class... A> int FUN_1020d730(A...);
SCStr * __stdcall FUN_1020db70(SCStr *param_1);
template<class... A> int __stdcall FUN_1020db70(A...);
SCStr * __stdcall FUN_1020dbd0(SCStr *param_1);
template<class... A> int __stdcall FUN_1020dbd0(A...);
undefined4 __fastcall FUN_1020dc00(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_1020dc00(A...);
SCStr * __stdcall FUN_1020f4b0(SCStr *param_1);
template<class... A> int __stdcall FUN_1020f4b0(A...);
SCStr * __stdcall FUN_1020f4d0(SCStr *param_1);
template<class... A> int __stdcall FUN_1020f4d0(A...);
void __stdcall FUN_102106d0(int param_1,undefined4 param_2);
template<class... A> int FUN_102106d0(A...);
undefined4 __stdcall FUN_10210ad0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4);
template<class... A> int FUN_10210ad0(A...);
SCStr * __stdcall FUN_10216ea0(SCStr *param_1);
template<class... A> int __stdcall FUN_10216ea0(A...);
undefined4 __fastcall FUN_10217320(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10217320(A...);
undefined4 FUN_10217a70(undefined4 param_1);
template<class... A> int FUN_10217a70(A...);
undefined4 __stdcall FUN_10217c30(int param_1);
template<class... A> int __stdcall FUN_10217c30(A...);
undefined4 __stdcall FUN_10219a00(int param_1);
template<class... A> int __stdcall FUN_10219a00(A...);
void __fastcall FUN_10219bd0(int param_1);
template<class... A> int FUN_10219bd0(A...);
undefined4 __fastcall FUN_10219c50(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10219c50(A...);
bool __fastcall FUN_10219f60(int *param_1);
template<class... A> int FUN_10219f60(A...);
bool __fastcall FUN_1021adf0(int *param_1);
template<class... A> int FUN_1021adf0(A...);
undefined1 __fastcall FUN_1021b1c0(int param_1);
template<class... A> int FUN_1021b1c0(A...);
undefined1 __fastcall FUN_1021b200(int *param_1);
template<class... A> int FUN_1021b200(A...);
void __stdcall FUN_1021b280(SCStr *param_1);
template<class... A> int __stdcall FUN_1021b280(A...);
bool __fastcall FUN_1021b2b0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_1021b2b0(A...);
bool __fastcall FUN_1021b2d0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_1021b2d0(A...);
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
undefined4 __stdcall FUN_10220630(short param_1,int param_2);
template<class... A> int FUN_10220630(A...);
undefined4 __stdcall FUN_10220770(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_10220770(A...);
bool __fastcall FUN_10220d50(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10220d50(A...);
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
template<class... A> int __stdcall FUN_102223b0(A...);
SCStr * __stdcall FUN_102223d0(SCStr *param_1);
template<class... A> int __stdcall FUN_102223d0(A...);
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
template<class... A> int __stdcall FUN_1022a1b0(A...);
undefined4 * __fastcall FUN_1022a1e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_1022a1e0(A...);
undefined4 * __fastcall FUN_1022a210(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_1022a210(A...);
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
template<class... A> int __stdcall FUN_1022f6b0(A...);
int __stdcall FUN_1022f6e0(undefined4 param_1);
template<class... A> int __stdcall FUN_1022f6e0(A...);
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
template<class... A> int __stdcall FUN_102327c0(A...);
void __stdcall FUN_10232800(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10232800(A...);
void __fastcall FUN_10232890(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10232890(A...);
void __fastcall FUN_102328b0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_102328b0(A...);
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
template<class... A> int __stdcall FUN_10236840(A...);
SCStr * __stdcall FUN_10236860(SCStr *param_1);
template<class... A> int __stdcall FUN_10236860(A...);
SCStr * __stdcall FUN_10236880(SCStr *param_1);
template<class... A> int __stdcall FUN_10236880(A...);
SCStr * __stdcall FUN_102368a0(SCStr *param_1);
template<class... A> int __stdcall FUN_102368a0(A...);
SCStr * __stdcall FUN_102368e0(SCStr *param_1);
template<class... A> int __stdcall FUN_102368e0(A...);
SCStr * __stdcall FUN_10236900(SCStr *param_1);
template<class... A> int __stdcall FUN_10236900(A...);
SCStr * __stdcall FUN_10236920(SCStr *param_1);
template<class... A> int __stdcall FUN_10236920(A...);
SCStr * __stdcall FUN_10236960(SCStr *param_1);
template<class... A> int __stdcall FUN_10236960(A...);
SCStr * __stdcall FUN_10236980(SCStr *param_1);
template<class... A> int __stdcall FUN_10236980(A...);
SCStr * __stdcall FUN_102369a0(SCStr *param_1);
template<class... A> int __stdcall FUN_102369a0(A...);
SCStr * __stdcall FUN_102369c0(SCStr *param_1);
template<class... A> int __stdcall FUN_102369c0(A...);
SCStr * __stdcall FUN_102369e0(SCStr *param_1);
template<class... A> int __stdcall FUN_102369e0(A...);
SCStr * __stdcall FUN_10236a00(SCStr *param_1);
template<class... A> int __stdcall FUN_10236a00(A...);
SCStr * __stdcall FUN_10236a20(SCStr *param_1);
template<class... A> int __stdcall FUN_10236a20(A...);
SCStr * __stdcall FUN_10236a40(SCStr *param_1);
template<class... A> int __stdcall FUN_10236a40(A...);
undefined4 __fastcall FUN_10236a60(int param_1);
template<class... A> int FUN_10236a60(A...);
SCStr * __stdcall FUN_10236cb0(SCStr *param_1);
template<class... A> int __stdcall FUN_10236cb0(A...);
SCStr * __stdcall FUN_10236cd0(SCStr *param_1);
template<class... A> int __stdcall FUN_10236cd0(A...);
SCStr * __stdcall FUN_10236d00(SCStr *param_1);
template<class... A> int __stdcall FUN_10236d00(A...);
SCStr * __stdcall FUN_10236d30(SCStr *param_1);
template<class... A> int __stdcall FUN_10236d30(A...);
SCStr * __stdcall FUN_10236d50(SCStr *param_1);
template<class... A> int __stdcall FUN_10236d50(A...);
SCStr * __stdcall FUN_10236e20(SCStr *param_1);
template<class... A> int __stdcall FUN_10236e20(A...);
SCStr * __stdcall FUN_10236e90(SCStr *param_1);
template<class... A> int __stdcall FUN_10236e90(A...);
SCStr * __stdcall FUN_10236ec0(SCStr *param_1);
template<class... A> int __stdcall FUN_10236ec0(A...);
SCStr * __stdcall FUN_10236fb0(SCStr *param_1);
template<class... A> int __stdcall FUN_10236fb0(A...);
SCStr * __stdcall FUN_10236fe0(SCStr *param_1);
template<class... A> int __stdcall FUN_10236fe0(A...);
SCStr * __stdcall FUN_10237010(SCStr *param_1);
template<class... A> int __stdcall FUN_10237010(A...);
SCStr * __stdcall FUN_10237030(SCStr *param_1);
template<class... A> int __stdcall FUN_10237030(A...);
SCStr * __stdcall FUN_10237060(SCStr *param_1);
template<class... A> int __stdcall FUN_10237060(A...);
SCStr * __stdcall FUN_10237090(SCStr *param_1);
template<class... A> int __stdcall FUN_10237090(A...);
SCStr * __stdcall FUN_102370b0(SCStr *param_1);
template<class... A> int __stdcall FUN_102370b0(A...);
SCStr * __stdcall FUN_10237180(SCStr *param_1);
template<class... A> int __stdcall FUN_10237180(A...);
SCStr * __stdcall FUN_102371f0(SCStr *param_1);
template<class... A> int __stdcall FUN_102371f0(A...);
SCStr * __stdcall FUN_10237220(SCStr *param_1);
template<class... A> int __stdcall FUN_10237220(A...);
SCStr * __stdcall FUN_10237310(SCStr *param_1);
template<class... A> int __stdcall FUN_10237310(A...);
SCStr * __stdcall FUN_10237340(SCStr *param_1);
template<class... A> int __stdcall FUN_10237340(A...);
SCStr * __stdcall FUN_1023a400(SCStr *param_1);
template<class... A> int __stdcall FUN_1023a400(A...);
SCStr * __stdcall FUN_1023a420(SCStr *param_1);
template<class... A> int __stdcall FUN_1023a420(A...);
SCStr * __stdcall FUN_1023a450(SCStr *param_1);
template<class... A> int __stdcall FUN_1023a450(A...);
SCStr * __stdcall FUN_1023a480(SCStr *param_1);
template<class... A> int __stdcall FUN_1023a480(A...);
SCStr * __stdcall FUN_1023a4a0(SCStr *param_1);
template<class... A> int __stdcall FUN_1023a4a0(A...);
SCStr * __stdcall FUN_1023a5f0(SCStr *param_1);
template<class... A> int __stdcall FUN_1023a5f0(A...);
SCStr * __stdcall FUN_1023a620(SCStr *param_1);
template<class... A> int __stdcall FUN_1023a620(A...);
SCStr * __stdcall FUN_1023a650(SCStr *param_1);
template<class... A> int __stdcall FUN_1023a650(A...);
SCStr * __stdcall FUN_1023a6f0(SCStr *param_1);
template<class... A> int __stdcall FUN_1023a6f0(A...);
SCStr * __stdcall FUN_1023a720(SCStr *param_1);
template<class... A> int __stdcall FUN_1023a720(A...);
SCStr * __stdcall FUN_1023a750(SCStr *param_1);
template<class... A> int __stdcall FUN_1023a750(A...);
SCStr * __stdcall FUN_1023a770(SCStr *param_1);
template<class... A> int __stdcall FUN_1023a770(A...);
SCStr * __stdcall FUN_1023a790(SCStr *param_1);
template<class... A> int __stdcall FUN_1023a790(A...);
SCStr * __stdcall FUN_1023a7b0(SCStr *param_1);
template<class... A> int __stdcall FUN_1023a7b0(A...);
SCStr * __stdcall FUN_1023a890(SCStr *param_1);
template<class... A> int __stdcall FUN_1023a890(A...);
SCStr * __stdcall FUN_1023a8b0(SCStr *param_1);
template<class... A> int __stdcall FUN_1023a8b0(A...);
SCStr * __stdcall FUN_1023a8d0(SCStr *param_1);
template<class... A> int __stdcall FUN_1023a8d0(A...);
SCStr * __stdcall FUN_1023a8f0(SCStr *param_1);
template<class... A> int __stdcall FUN_1023a8f0(A...);
SCStr * __stdcall FUN_1023a910(SCStr *param_1);
template<class... A> int __stdcall FUN_1023a910(A...);
SCStr * __stdcall FUN_1023a930(SCStr *param_1);
template<class... A> int __stdcall FUN_1023a930(A...);
SCStr * __stdcall FUN_1023a950(SCStr *param_1);
template<class... A> int __stdcall FUN_1023a950(A...);
SCStr * __stdcall FUN_1023a970(SCStr *param_1);
template<class... A> int __stdcall FUN_1023a970(A...);
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
bool __fastcall FUN_10242f20(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10242f20(A...);
bool __fastcall FUN_10242f40(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10242f40(A...);
bool __fastcall FUN_10242f60(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10242f60(A...);
bool __fastcall FUN_10242f80(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10242f80(A...);
bool __fastcall FUN_10243140(int param_1);
template<class... A> int FUN_10243140(A...);
void __fastcall FUN_102431a0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_102431a0(A...);
void __fastcall FUN_102431c0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_102431c0(A...);
void __fastcall FUN_10243200(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10243200(A...);
void __fastcall FUN_10243220(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10243220(A...);
void __fastcall FUN_10243270(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10243270(A...);
void __fastcall FUN_102432a0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_102432a0(A...);
void __fastcall FUN_102432d0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_102432d0(A...);
void __fastcall FUN_10243650(int param_1);
template<class... A> int FUN_10243650(A...);
bool __fastcall FUN_10244e30(int param_1);
template<class... A> int FUN_10244e30(A...);
void __stdcall FUN_10245150(int param_1,char param_2);
template<class... A> int FUN_10245150(A...);
void __stdcall FUN_10245940(int param_1);
template<class... A> int __stdcall FUN_10245940(A...);
void __fastcall FUN_102459f0(int param_1);
template<class... A> int FUN_102459f0(A...);
void __fastcall FUN_10245a10(int param_1);
template<class... A> int FUN_10245a10(A...);
undefined4 * __fastcall FUN_10246a10(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10246a10(A...);
undefined4 * __fastcall FUN_10246a50(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10246a50(A...);
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
template<class... A> int __stdcall FUN_1024ac20(A...);
void __stdcall FUN_1024ac40(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_1024ac40(A...);
void __stdcall FUN_1024ac60(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_1024ac60(A...);
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
template<class... A> int __stdcall FUN_10253800(A...);
undefined4 * __fastcall FUN_10257300(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10257300(A...);
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
bool __fastcall FUN_1025df30(int param_1);
template<class... A> int FUN_1025df30(A...);
SCStr * __stdcall FUN_1025e510(SCStr *param_1);
template<class... A> int __stdcall FUN_1025e510(A...);
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
template<class... A> int __stdcall FUN_10260fb0(A...);
SCStr * __stdcall FUN_10260fd0(SCStr *param_1);
template<class... A> int __stdcall FUN_10260fd0(A...);
SCStr * __stdcall FUN_10260ff0(SCStr *param_1);
template<class... A> int __stdcall FUN_10260ff0(A...);
char __fastcall FUN_10261170(int param_1);
template<class... A> int FUN_10261170(A...);
extern int ghidra_vftable_SCArray_SCPtr_SCIInAppProduct___;
extern int ghidra_vftable_SCIObjImpl_SCIData_;
extern int ghidra_vftable__Func_impl_no_alloc__lambda_f1b03cd88703527eb728312bbd92f82b__void_SCStr_const__;

// Reference entry 1019c9f0; body size 16 bytes.
extern int __stdcall thunk_FUN_101b1fc0(int a1);
extern int __stdcall thunk_FUN_101b5de0(int a1);
extern int __stdcall thunk_FUN_101bc5e0(int a1,int a2);
extern int __stdcall thunk_FUN_101c3fc0(int a1);
extern int __stdcall thunk_FUN_101c4740(int a1,int a2,int a3);
extern int __stdcall thunk_FUN_101cdee0(int a1,int a2);
extern int __stdcall thunk_FUN_101e0b90(int a1,int a2);
extern int __stdcall thunk_FUN_101e76a0(int a1);
extern int __stdcall thunk_FUN_101e8ca0(int a1,int a2);
extern int __stdcall thunk_FUN_101fdb50(int a1,int a2);
extern int __stdcall thunk_FUN_101fdc90(int a1,int a2);
extern int __stdcall thunk_FUN_101ff410(int a1);
extern int __stdcall thunk_FUN_10218810(int a1);
extern int __stdcall thunk_FUN_10218910(int a1,int a2,int a3);
extern int __stdcall thunk_FUN_102207b0(int a1,int a2,int a3);
extern int __stdcall thunk_FUN_10225ef0(int a1,int a2,int a3);
extern int __stdcall thunk_FUN_10225ff0(int a1,int a2,int a3);
extern int __stdcall thunk_FUN_102410f0(int a1,int a2);
extern int __stdcall thunk_FUN_10246290(int a1,int a2);
extern int __stdcall thunk_FUN_10254f10(int a1,int a2);
extern int __stdcall thunk_FUN_10255060(int a1,int a2);
extern int __stdcall thunk_FUN_1025ed70(int a1,int a2);
extern int __stdcall thunk_FUN_1025f3f0(int a1,int a2);
extern int __stdcall thunk_FUN_10313720(int a1,int a2);
extern int __stdcall thunk_FUN_103138c0(int a1,int a2);
extern int __stdcall thunk_FUN_103beae0(int a1,int a2);
extern int __stdcall thunk_FUN_103d61d0(int a1,int a2);
extern int __stdcall thunk_FUN_103d6930(int a1);
extern int __stdcall thunk_FUN_104d8370(int a1);
extern int __stdcall thunk_FUN_104d8c80(int a1,int a2,int a3,int a4);
extern int __stdcall thunk_FUN_104d9780(int a1);
extern int __stdcall thunk_FUN_104ffd30(int a1);
extern int __stdcall thunk_FUN_1059d940(int a1);
extern int __stdcall thunk_FUN_105b5360(int a1);
extern int __stdcall thunk_FUN_1061c5e0(int a1);
extern int __stdcall thunk_FUN_111a0940(int a1);
struct SCFp_276_0 { char _p[276]; int (__thiscall *v)(void); };
struct SCVtbl_0_0 { virtual int v(void); };
struct SCVtbl_0_1 { virtual int v(int a1); };
struct SCVtbl_1_1 { virtual void _p0(); virtual int v(int a1); };
struct SCVtbl_1_2 { virtual void _p0(); virtual int v(int a1,int a2); };
struct SCVtbl_2_1 { virtual void _p0(); virtual void _p1(); virtual int v(int a1); };
struct SCVtbl_4_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual int v(void); };
struct SCVtbl_5_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual int v(int a1); };
struct SCVtbl_6_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual int v(void); };
struct SCVtbl_6_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual int v(int a1); };
struct SCVtbl_6_2 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual int v(int a1,int a2); };
struct SCVtbl_7_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual int v(int a1); };
struct SCVtbl_7_2 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual int v(int a1,int a2); };
struct SCVtbl_8_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual int v(void); };
struct SCVtbl_8_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual int v(int a1); };
struct SCVtbl_10_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual int v(void); };
struct SCVtbl_11_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual int v(void); };
struct SCVtbl_11_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual int v(int a1); };
struct SCVtbl_12_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual int v(int a1); };
struct SCVtbl_13_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual int v(int a1); };
struct SCVtbl_13_2 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual int v(int a1,int a2); };
struct SCVtbl_15_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual int v(void); };
struct SCVtbl_16_2 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual int v(int a1,int a2); };
struct SCVtbl_22_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual int v(void); };
struct SCVtbl_30_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual int v(int a1); };
struct SCVtbl_31_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual int v(void); };
struct SCVtbl_32_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual int v(void); };
struct SCVtbl_41_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual int v(void); };
struct SCVtbl_52_2 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual void _p51(); virtual int v(int a1,int a2); };
struct SCVtbl_55_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual void _p51(); virtual void _p52(); virtual void _p53(); virtual void _p54(); virtual int v(void); };
struct SCVtbl_57_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual void _p51(); virtual void _p52(); virtual void _p53(); virtual void _p54(); virtual void _p55(); virtual void _p56(); virtual int v(int a1); };
struct SCVtbl_63_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual void _p51(); virtual void _p52(); virtual void _p53(); virtual void _p54(); virtual void _p55(); virtual void _p56(); virtual void _p57(); virtual void _p58(); virtual void _p59(); virtual void _p60(); virtual void _p61(); virtual void _p62(); virtual int v(void); };
struct SCVtbl_69_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual void _p51(); virtual void _p52(); virtual void _p53(); virtual void _p54(); virtual void _p55(); virtual void _p56(); virtual void _p57(); virtual void _p58(); virtual void _p59(); virtual void _p60(); virtual void _p61(); virtual void _p62(); virtual void _p63(); virtual void _p64(); virtual void _p65(); virtual void _p66(); virtual void _p67(); virtual void _p68(); virtual int v(void); };
struct SCVtbl_1_0 { virtual void _p0(); virtual int v(void); };
struct SCVtbl_2_0 { virtual void _p0(); virtual void _p1(); virtual int v(void); };
struct SCVtbl_2_2 { virtual void _p0(); virtual void _p1(); virtual int v(int a1,int a2); };
struct SCVtbl_3_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual int v(void); };
struct SCVtbl_3_6 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual int v(int a1,int a2,int a3,int a4,int a5,int a6); };
struct SCVtbl_4_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual int v(int a1); };
struct SCVtbl_5_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual int v(void); };
struct SCVtbl_7_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual int v(void); };
struct SCVtbl_9_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual int v(void); };
struct SCVtbl_9_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual int v(int a1); };
struct SCVtbl_10_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual int v(int a1); };
struct SCVtbl_10_2 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual int v(int a1,int a2); };
struct SCVtbl_12_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual int v(void); };
struct SCVtbl_12_3 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual int v(int a1,int a2,int a3); };
struct SCVtbl_13_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual int v(void); };
struct SCVtbl_14_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual int v(void); };
struct SCVtbl_20_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual int v(void); };
struct SCVtbl_20_3 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual int v(int a1,int a2,int a3); };
struct SCVtbl_21_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual int v(void); };
struct SCVtbl_23_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual int v(void); };
struct SCVtbl_25_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual int v(void); };
struct SCVtbl_37_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual int v(void); };
struct SCVtbl_49_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual int v(int a1); };
struct SCVtbl_50_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual int v(int a1); };
struct SCVtbl_51_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual int v(int a1); };
struct SCVtbl_68_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual void _p51(); virtual void _p52(); virtual void _p53(); virtual void _p54(); virtual void _p55(); virtual void _p56(); virtual void _p57(); virtual void _p58(); virtual void _p59(); virtual void _p60(); virtual void _p61(); virtual void _p62(); virtual void _p63(); virtual void _p64(); virtual void _p65(); virtual void _p66(); virtual void _p67(); virtual int v(int a1); };
#line 1 "ENTRY_1019c9f0"

void __stdcall FUN_1019c9f0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019ca10; body size 16 bytes.
#line 1 "ENTRY_1019ca10"

void __stdcall FUN_1019ca10(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019ca30; body size 16 bytes.
#line 1 "ENTRY_1019ca30"

void __stdcall FUN_1019ca30(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019ca50; body size 16 bytes.
#line 1 "ENTRY_1019ca50"

void __stdcall FUN_1019ca50(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019ca70; body size 16 bytes.
#line 1 "ENTRY_1019ca70"

void __stdcall FUN_1019ca70(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019ca90; body size 16 bytes.
#line 1 "ENTRY_1019ca90"

void __stdcall FUN_1019ca90(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019cab0; body size 16 bytes.
#line 1 "ENTRY_1019cab0"

void __stdcall FUN_1019cab0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019cad0; body size 16 bytes.
#line 1 "ENTRY_1019cad0"

void __stdcall FUN_1019cad0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019caf0; body size 16 bytes.
#line 1 "ENTRY_1019caf0"

void __stdcall FUN_1019caf0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019cb10; body size 16 bytes.
#line 1 "ENTRY_1019cb10"

void __stdcall FUN_1019cb10(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019cb30; body size 16 bytes.
#line 1 "ENTRY_1019cb30"

void __stdcall FUN_1019cb30(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019cb50; body size 16 bytes.
#line 1 "ENTRY_1019cb50"

void __stdcall FUN_1019cb50(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019cb70; body size 16 bytes.
#line 1 "ENTRY_1019cb70"

void __stdcall FUN_1019cb70(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019cb90; body size 16 bytes.
#line 1 "ENTRY_1019cb90"

void __stdcall FUN_1019cb90(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019cbb0; body size 16 bytes.
#line 1 "ENTRY_1019cbb0"

void __stdcall FUN_1019cbb0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019cbd0; body size 16 bytes.
#line 1 "ENTRY_1019cbd0"

void __stdcall FUN_1019cbd0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019cbf0; body size 16 bytes.
#line 1 "ENTRY_1019cbf0"

void __stdcall FUN_1019cbf0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019cc10; body size 16 bytes.
#line 1 "ENTRY_1019cc10"

void __stdcall FUN_1019cc10(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019cc30; body size 16 bytes.
#line 1 "ENTRY_1019cc30"

void __stdcall FUN_1019cc30(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019cc50; body size 16 bytes.
#line 1 "ENTRY_1019cc50"

void __stdcall FUN_1019cc50(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019cc70; body size 16 bytes.
#line 1 "ENTRY_1019cc70"

void __stdcall FUN_1019cc70(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019cc90; body size 16 bytes.
#line 1 "ENTRY_1019cc90"

void __stdcall FUN_1019cc90(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019ccb0; body size 16 bytes.
#line 1 "ENTRY_1019ccb0"

void __stdcall FUN_1019ccb0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019ccd0; body size 16 bytes.
#line 1 "ENTRY_1019ccd0"

void __stdcall FUN_1019ccd0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019ccf0; body size 16 bytes.
#line 1 "ENTRY_1019ccf0"

void __stdcall FUN_1019ccf0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019cd10; body size 16 bytes.
#line 1 "ENTRY_1019cd10"

void __stdcall FUN_1019cd10(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019cd30; body size 16 bytes.
#line 1 "ENTRY_1019cd30"

void __stdcall FUN_1019cd30(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019cd50; body size 16 bytes.
#line 1 "ENTRY_1019cd50"

void __stdcall FUN_1019cd50(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019cd70; body size 16 bytes.
#line 1 "ENTRY_1019cd70"

void __stdcall FUN_1019cd70(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019cd90; body size 16 bytes.
#line 1 "ENTRY_1019cd90"

void __stdcall FUN_1019cd90(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019cdb0; body size 16 bytes.
#line 1 "ENTRY_1019cdb0"

void __stdcall FUN_1019cdb0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019cdd0; body size 16 bytes.
#line 1 "ENTRY_1019cdd0"

void __stdcall FUN_1019cdd0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019cdf0; body size 16 bytes.
#line 1 "ENTRY_1019cdf0"

void __stdcall FUN_1019cdf0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019ce10; body size 16 bytes.
#line 1 "ENTRY_1019ce10"

void __stdcall FUN_1019ce10(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019ce30; body size 16 bytes.
#line 1 "ENTRY_1019ce30"

void __stdcall FUN_1019ce30(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019ce50; body size 16 bytes.
#line 1 "ENTRY_1019ce50"

void __stdcall FUN_1019ce50(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019ce70; body size 16 bytes.
#line 1 "ENTRY_1019ce70"

void __stdcall FUN_1019ce70(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019ce90; body size 16 bytes.
#line 1 "ENTRY_1019ce90"

void __stdcall FUN_1019ce90(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019ceb0; body size 16 bytes.
#line 1 "ENTRY_1019ceb0"

void __stdcall FUN_1019ceb0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019ced0; body size 16 bytes.
#line 1 "ENTRY_1019ced0"

void __stdcall FUN_1019ced0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019cef0; body size 16 bytes.
#line 1 "ENTRY_1019cef0"

void __stdcall FUN_1019cef0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019cf10; body size 16 bytes.
#line 1 "ENTRY_1019cf10"

void __stdcall FUN_1019cf10(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019cf30; body size 16 bytes.
#line 1 "ENTRY_1019cf30"

void __stdcall FUN_1019cf30(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019cf50; body size 16 bytes.
#line 1 "ENTRY_1019cf50"

void __stdcall FUN_1019cf50(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019cf70; body size 16 bytes.
#line 1 "ENTRY_1019cf70"

void __stdcall FUN_1019cf70(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019cf90; body size 16 bytes.
#line 1 "ENTRY_1019cf90"

void __stdcall FUN_1019cf90(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019cfb0; body size 16 bytes.
#line 1 "ENTRY_1019cfb0"

void __stdcall FUN_1019cfb0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019cfd0; body size 16 bytes.
#line 1 "ENTRY_1019cfd0"

void __stdcall FUN_1019cfd0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019cff0; body size 16 bytes.
#line 1 "ENTRY_1019cff0"

void __stdcall FUN_1019cff0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d010; body size 16 bytes.
#line 1 "ENTRY_1019d010"

void __stdcall FUN_1019d010(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d030; body size 16 bytes.
#line 1 "ENTRY_1019d030"

void __stdcall FUN_1019d030(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d050; body size 16 bytes.
#line 1 "ENTRY_1019d050"

void __stdcall FUN_1019d050(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d070; body size 16 bytes.
#line 1 "ENTRY_1019d070"

void __stdcall FUN_1019d070(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d090; body size 16 bytes.
#line 1 "ENTRY_1019d090"

void __stdcall FUN_1019d090(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d0b0; body size 16 bytes.
#line 1 "ENTRY_1019d0b0"

void __stdcall FUN_1019d0b0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d0d0; body size 16 bytes.
#line 1 "ENTRY_1019d0d0"

void __stdcall FUN_1019d0d0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d0f0; body size 16 bytes.
#line 1 "ENTRY_1019d0f0"

void __stdcall FUN_1019d0f0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d110; body size 16 bytes.
#line 1 "ENTRY_1019d110"

void __stdcall FUN_1019d110(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d130; body size 16 bytes.
#line 1 "ENTRY_1019d130"

void __stdcall FUN_1019d130(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d150; body size 16 bytes.
#line 1 "ENTRY_1019d150"

void __stdcall FUN_1019d150(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d170; body size 16 bytes.
#line 1 "ENTRY_1019d170"

void __stdcall FUN_1019d170(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d190; body size 16 bytes.
#line 1 "ENTRY_1019d190"

void __stdcall FUN_1019d190(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d1b0; body size 16 bytes.
#line 1 "ENTRY_1019d1b0"

void __stdcall FUN_1019d1b0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d1d0; body size 16 bytes.
#line 1 "ENTRY_1019d1d0"

void __stdcall FUN_1019d1d0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d1f0; body size 16 bytes.
#line 1 "ENTRY_1019d1f0"

void __stdcall FUN_1019d1f0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d210; body size 16 bytes.
#line 1 "ENTRY_1019d210"

void __stdcall FUN_1019d210(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d230; body size 16 bytes.
#line 1 "ENTRY_1019d230"

void __stdcall FUN_1019d230(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d250; body size 16 bytes.
#line 1 "ENTRY_1019d250"

void __stdcall FUN_1019d250(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d270; body size 16 bytes.
#line 1 "ENTRY_1019d270"

void __stdcall FUN_1019d270(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d290; body size 16 bytes.
#line 1 "ENTRY_1019d290"

void __stdcall FUN_1019d290(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d2b0; body size 16 bytes.
#line 1 "ENTRY_1019d2b0"

void __stdcall FUN_1019d2b0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d2d0; body size 16 bytes.
#line 1 "ENTRY_1019d2d0"

void __stdcall FUN_1019d2d0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d2f0; body size 16 bytes.
#line 1 "ENTRY_1019d2f0"

void __stdcall FUN_1019d2f0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d310; body size 16 bytes.
#line 1 "ENTRY_1019d310"

void __stdcall FUN_1019d310(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d330; body size 16 bytes.
#line 1 "ENTRY_1019d330"

void __stdcall FUN_1019d330(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d350; body size 16 bytes.
#line 1 "ENTRY_1019d350"

void __stdcall FUN_1019d350(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d370; body size 16 bytes.
#line 1 "ENTRY_1019d370"

void __stdcall FUN_1019d370(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d390; body size 16 bytes.
#line 1 "ENTRY_1019d390"

void __stdcall FUN_1019d390(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d3b0; body size 16 bytes.
#line 1 "ENTRY_1019d3b0"

void __stdcall FUN_1019d3b0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d3d0; body size 16 bytes.
#line 1 "ENTRY_1019d3d0"

void __stdcall FUN_1019d3d0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d3f0; body size 16 bytes.
#line 1 "ENTRY_1019d3f0"

void __stdcall FUN_1019d3f0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d410; body size 16 bytes.
#line 1 "ENTRY_1019d410"

void __stdcall FUN_1019d410(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d430; body size 16 bytes.
#line 1 "ENTRY_1019d430"

void __stdcall FUN_1019d430(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d450; body size 16 bytes.
#line 1 "ENTRY_1019d450"

void __stdcall FUN_1019d450(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d470; body size 16 bytes.
#line 1 "ENTRY_1019d470"

void __stdcall FUN_1019d470(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d490; body size 16 bytes.
#line 1 "ENTRY_1019d490"

void __stdcall FUN_1019d490(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d4b0; body size 16 bytes.
#line 1 "ENTRY_1019d4b0"

void __stdcall FUN_1019d4b0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d4d0; body size 16 bytes.
#line 1 "ENTRY_1019d4d0"

void __stdcall FUN_1019d4d0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d4f0; body size 16 bytes.
#line 1 "ENTRY_1019d4f0"

void __stdcall FUN_1019d4f0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d510; body size 16 bytes.
#line 1 "ENTRY_1019d510"

void __stdcall FUN_1019d510(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d530; body size 16 bytes.
#line 1 "ENTRY_1019d530"

void __stdcall FUN_1019d530(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d550; body size 16 bytes.
#line 1 "ENTRY_1019d550"

void __stdcall FUN_1019d550(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d570; body size 16 bytes.
#line 1 "ENTRY_1019d570"

void __stdcall FUN_1019d570(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d590; body size 16 bytes.
#line 1 "ENTRY_1019d590"

void __stdcall FUN_1019d590(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d5b0; body size 16 bytes.
#line 1 "ENTRY_1019d5b0"

void __stdcall FUN_1019d5b0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d5d0; body size 16 bytes.
#line 1 "ENTRY_1019d5d0"

void __stdcall FUN_1019d5d0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d5f0; body size 16 bytes.
#line 1 "ENTRY_1019d5f0"

void __stdcall FUN_1019d5f0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d610; body size 16 bytes.
#line 1 "ENTRY_1019d610"

void __stdcall FUN_1019d610(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d630; body size 16 bytes.
#line 1 "ENTRY_1019d630"

void __stdcall FUN_1019d630(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d650; body size 16 bytes.
#line 1 "ENTRY_1019d650"

void __stdcall FUN_1019d650(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d670; body size 16 bytes.
#line 1 "ENTRY_1019d670"

void __stdcall FUN_1019d670(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d690; body size 16 bytes.
#line 1 "ENTRY_1019d690"

void __stdcall FUN_1019d690(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d6b0; body size 16 bytes.
#line 1 "ENTRY_1019d6b0"

void __stdcall FUN_1019d6b0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d6d0; body size 16 bytes.
#line 1 "ENTRY_1019d6d0"

void __stdcall FUN_1019d6d0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d6f0; body size 16 bytes.
#line 1 "ENTRY_1019d6f0"

void __stdcall FUN_1019d6f0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d710; body size 16 bytes.
#line 1 "ENTRY_1019d710"

void __stdcall FUN_1019d710(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d730; body size 16 bytes.
#line 1 "ENTRY_1019d730"

void __stdcall FUN_1019d730(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d750; body size 16 bytes.
#line 1 "ENTRY_1019d750"

void __stdcall FUN_1019d750(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d770; body size 16 bytes.
#line 1 "ENTRY_1019d770"

void __stdcall FUN_1019d770(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d790; body size 16 bytes.
#line 1 "ENTRY_1019d790"

void __stdcall FUN_1019d790(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d7b0; body size 16 bytes.
#line 1 "ENTRY_1019d7b0"

void __stdcall FUN_1019d7b0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d7d0; body size 16 bytes.
#line 1 "ENTRY_1019d7d0"

void __stdcall FUN_1019d7d0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d7f0; body size 16 bytes.
#line 1 "ENTRY_1019d7f0"

void __stdcall FUN_1019d7f0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d810; body size 16 bytes.
#line 1 "ENTRY_1019d810"

void __stdcall FUN_1019d810(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d830; body size 16 bytes.
#line 1 "ENTRY_1019d830"

void __stdcall FUN_1019d830(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d850; body size 16 bytes.
#line 1 "ENTRY_1019d850"

void __stdcall FUN_1019d850(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d870; body size 16 bytes.
#line 1 "ENTRY_1019d870"

void __stdcall FUN_1019d870(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d890; body size 16 bytes.
#line 1 "ENTRY_1019d890"

void __stdcall FUN_1019d890(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d8b0; body size 16 bytes.
#line 1 "ENTRY_1019d8b0"

void __stdcall FUN_1019d8b0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d8d0; body size 16 bytes.
#line 1 "ENTRY_1019d8d0"

void __stdcall FUN_1019d8d0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d8f0; body size 16 bytes.
#line 1 "ENTRY_1019d8f0"

void __stdcall FUN_1019d8f0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d910; body size 16 bytes.
#line 1 "ENTRY_1019d910"

void __stdcall FUN_1019d910(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d930; body size 16 bytes.
#line 1 "ENTRY_1019d930"

void __stdcall FUN_1019d930(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d950; body size 16 bytes.
#line 1 "ENTRY_1019d950"

void __stdcall FUN_1019d950(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d970; body size 16 bytes.
#line 1 "ENTRY_1019d970"

void __stdcall FUN_1019d970(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d990; body size 16 bytes.
#line 1 "ENTRY_1019d990"

void __stdcall FUN_1019d990(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d9b0; body size 16 bytes.
#line 1 "ENTRY_1019d9b0"

void __stdcall FUN_1019d9b0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d9d0; body size 16 bytes.
#line 1 "ENTRY_1019d9d0"

void __stdcall FUN_1019d9d0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019d9f0; body size 16 bytes.
#line 1 "ENTRY_1019d9f0"

void __stdcall FUN_1019d9f0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019da10; body size 16 bytes.
#line 1 "ENTRY_1019da10"

void __stdcall FUN_1019da10(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019da30; body size 16 bytes.
#line 1 "ENTRY_1019da30"

void __stdcall FUN_1019da30(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019da50; body size 16 bytes.
#line 1 "ENTRY_1019da50"

void __stdcall FUN_1019da50(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019da70; body size 16 bytes.
#line 1 "ENTRY_1019da70"

void __stdcall FUN_1019da70(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019da90; body size 16 bytes.
#line 1 "ENTRY_1019da90"

void __stdcall FUN_1019da90(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019dab0; body size 16 bytes.
#line 1 "ENTRY_1019dab0"

void __stdcall FUN_1019dab0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019dad0; body size 16 bytes.
#line 1 "ENTRY_1019dad0"

void __stdcall FUN_1019dad0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019daf0; body size 16 bytes.
#line 1 "ENTRY_1019daf0"

void __stdcall FUN_1019daf0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019db10; body size 16 bytes.
#line 1 "ENTRY_1019db10"

void __stdcall FUN_1019db10(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019db30; body size 16 bytes.
#line 1 "ENTRY_1019db30"

void __stdcall FUN_1019db30(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019db50; body size 16 bytes.
#line 1 "ENTRY_1019db50"

void __stdcall FUN_1019db50(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019db70; body size 16 bytes.
#line 1 "ENTRY_1019db70"

void __stdcall FUN_1019db70(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019db90; body size 16 bytes.
#line 1 "ENTRY_1019db90"

void __stdcall FUN_1019db90(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019dbb0; body size 16 bytes.
#line 1 "ENTRY_1019dbb0"

void __stdcall FUN_1019dbb0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019dbd0; body size 16 bytes.
#line 1 "ENTRY_1019dbd0"

void __stdcall FUN_1019dbd0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019dbf0; body size 16 bytes.
#line 1 "ENTRY_1019dbf0"

void __stdcall FUN_1019dbf0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019dc10; body size 16 bytes.
#line 1 "ENTRY_1019dc10"

void __stdcall FUN_1019dc10(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019dc30; body size 16 bytes.
#line 1 "ENTRY_1019dc30"

void __stdcall FUN_1019dc30(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019dc50; body size 16 bytes.
#line 1 "ENTRY_1019dc50"

void __stdcall FUN_1019dc50(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019dc70; body size 16 bytes.
#line 1 "ENTRY_1019dc70"

void __stdcall FUN_1019dc70(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019dc90; body size 16 bytes.
#line 1 "ENTRY_1019dc90"

void __stdcall FUN_1019dc90(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019dcb0; body size 16 bytes.
#line 1 "ENTRY_1019dcb0"

void __stdcall FUN_1019dcb0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019dcd0; body size 16 bytes.
#line 1 "ENTRY_1019dcd0"

void __stdcall FUN_1019dcd0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019dcf0; body size 16 bytes.
#line 1 "ENTRY_1019dcf0"

void __stdcall FUN_1019dcf0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019dd10; body size 16 bytes.
#line 1 "ENTRY_1019dd10"

void __stdcall FUN_1019dd10(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019dd30; body size 16 bytes.
#line 1 "ENTRY_1019dd30"

void __stdcall FUN_1019dd30(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019dd50; body size 16 bytes.
#line 1 "ENTRY_1019dd50"

void __stdcall FUN_1019dd50(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019dd70; body size 16 bytes.
#line 1 "ENTRY_1019dd70"

void __stdcall FUN_1019dd70(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019dd90; body size 16 bytes.
#line 1 "ENTRY_1019dd90"

void __stdcall FUN_1019dd90(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019ddb0; body size 16 bytes.
#line 1 "ENTRY_1019ddb0"

void __stdcall FUN_1019ddb0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019ddd0; body size 16 bytes.
#line 1 "ENTRY_1019ddd0"

void __stdcall FUN_1019ddd0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019ddf0; body size 16 bytes.
#line 1 "ENTRY_1019ddf0"

void __stdcall FUN_1019ddf0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019de10; body size 16 bytes.
#line 1 "ENTRY_1019de10"

void __stdcall FUN_1019de10(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019de30; body size 16 bytes.
#line 1 "ENTRY_1019de30"

void __stdcall FUN_1019de30(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019de50; body size 16 bytes.
#line 1 "ENTRY_1019de50"

void __stdcall FUN_1019de50(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019de70; body size 16 bytes.
#line 1 "ENTRY_1019de70"

void __stdcall FUN_1019de70(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019de90; body size 16 bytes.
#line 1 "ENTRY_1019de90"

void __stdcall FUN_1019de90(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019deb0; body size 16 bytes.
#line 1 "ENTRY_1019deb0"

void __stdcall FUN_1019deb0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019ded0; body size 16 bytes.
#line 1 "ENTRY_1019ded0"

void __stdcall FUN_1019ded0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019def0; body size 24 bytes.
#line 1 "ENTRY_1019def0"

__declspec(naked) void FUN_1019def0(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm test ecx, ecx
  __asm je 0x1019df05
  __asm mov eax, dword ptr [ecx]
  __asm _emit 0xc7 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm jmp dword ptr [eax + 0x10]
  __asm ret 4
}



// Reference entry 1019df10; body size 16 bytes.
#line 1 "ENTRY_1019df10"

void __stdcall FUN_1019df10(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019df30; body size 16 bytes.
#line 1 "ENTRY_1019df30"

void __stdcall FUN_1019df30(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019df50; body size 16 bytes.
#line 1 "ENTRY_1019df50"

void __stdcall FUN_1019df50(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019df70; body size 16 bytes.
#line 1 "ENTRY_1019df70"

void __stdcall FUN_1019df70(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019df90; body size 16 bytes.
#line 1 "ENTRY_1019df90"

void __stdcall FUN_1019df90(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019dfb0; body size 16 bytes.
#line 1 "ENTRY_1019dfb0"

void __stdcall FUN_1019dfb0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019dfd0; body size 16 bytes.
#line 1 "ENTRY_1019dfd0"

void __stdcall FUN_1019dfd0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019dff0; body size 16 bytes.
#line 1 "ENTRY_1019dff0"

void __stdcall FUN_1019dff0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e010; body size 16 bytes.
#line 1 "ENTRY_1019e010"

void __stdcall FUN_1019e010(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e030; body size 16 bytes.
#line 1 "ENTRY_1019e030"

void __stdcall FUN_1019e030(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e050; body size 16 bytes.
#line 1 "ENTRY_1019e050"

void __stdcall FUN_1019e050(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e070; body size 16 bytes.
#line 1 "ENTRY_1019e070"

void __stdcall FUN_1019e070(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e090; body size 16 bytes.
#line 1 "ENTRY_1019e090"

void __stdcall FUN_1019e090(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e0b0; body size 16 bytes.
#line 1 "ENTRY_1019e0b0"

void __stdcall FUN_1019e0b0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e0d0; body size 16 bytes.
#line 1 "ENTRY_1019e0d0"

void __stdcall FUN_1019e0d0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e0f0; body size 16 bytes.
#line 1 "ENTRY_1019e0f0"

void __stdcall FUN_1019e0f0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e110; body size 16 bytes.
#line 1 "ENTRY_1019e110"

void __stdcall FUN_1019e110(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e130; body size 16 bytes.
#line 1 "ENTRY_1019e130"

void __stdcall FUN_1019e130(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e150; body size 16 bytes.
#line 1 "ENTRY_1019e150"

void __stdcall FUN_1019e150(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e170; body size 16 bytes.
#line 1 "ENTRY_1019e170"

void __stdcall FUN_1019e170(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e190; body size 16 bytes.
#line 1 "ENTRY_1019e190"

void __stdcall FUN_1019e190(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e1b0; body size 16 bytes.
#line 1 "ENTRY_1019e1b0"

void __stdcall FUN_1019e1b0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e1d0; body size 16 bytes.
#line 1 "ENTRY_1019e1d0"

void __stdcall FUN_1019e1d0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e1f0; body size 16 bytes.
#line 1 "ENTRY_1019e1f0"

void __stdcall FUN_1019e1f0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e210; body size 16 bytes.
#line 1 "ENTRY_1019e210"

void __stdcall FUN_1019e210(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e230; body size 16 bytes.
#line 1 "ENTRY_1019e230"

void __stdcall FUN_1019e230(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e250; body size 16 bytes.
#line 1 "ENTRY_1019e250"

void __stdcall FUN_1019e250(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e270; body size 16 bytes.
#line 1 "ENTRY_1019e270"

void __stdcall FUN_1019e270(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e290; body size 16 bytes.
#line 1 "ENTRY_1019e290"

void __stdcall FUN_1019e290(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e2b0; body size 16 bytes.
#line 1 "ENTRY_1019e2b0"

void __stdcall FUN_1019e2b0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e2d0; body size 16 bytes.
#line 1 "ENTRY_1019e2d0"

void __stdcall FUN_1019e2d0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e2f0; body size 16 bytes.
#line 1 "ENTRY_1019e2f0"

void __stdcall FUN_1019e2f0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e310; body size 16 bytes.
#line 1 "ENTRY_1019e310"

void __stdcall FUN_1019e310(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e330; body size 16 bytes.
#line 1 "ENTRY_1019e330"

void __stdcall FUN_1019e330(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e350; body size 16 bytes.
#line 1 "ENTRY_1019e350"

void __stdcall FUN_1019e350(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e370; body size 16 bytes.
#line 1 "ENTRY_1019e370"

void __stdcall FUN_1019e370(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e390; body size 16 bytes.
#line 1 "ENTRY_1019e390"

void __stdcall FUN_1019e390(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e3b0; body size 16 bytes.
#line 1 "ENTRY_1019e3b0"

void __stdcall FUN_1019e3b0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e3d0; body size 16 bytes.
#line 1 "ENTRY_1019e3d0"

void __stdcall FUN_1019e3d0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e3f0; body size 16 bytes.
#line 1 "ENTRY_1019e3f0"

void __stdcall FUN_1019e3f0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e410; body size 16 bytes.
#line 1 "ENTRY_1019e410"

void __stdcall FUN_1019e410(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e430; body size 16 bytes.
#line 1 "ENTRY_1019e430"

void __stdcall FUN_1019e430(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e450; body size 16 bytes.
#line 1 "ENTRY_1019e450"

void __stdcall FUN_1019e450(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e470; body size 16 bytes.
#line 1 "ENTRY_1019e470"

void __stdcall FUN_1019e470(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e490; body size 16 bytes.
#line 1 "ENTRY_1019e490"

void __stdcall FUN_1019e490(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e4b0; body size 16 bytes.
#line 1 "ENTRY_1019e4b0"

void __stdcall FUN_1019e4b0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e4d0; body size 16 bytes.
#line 1 "ENTRY_1019e4d0"

void __stdcall FUN_1019e4d0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e4f0; body size 16 bytes.
#line 1 "ENTRY_1019e4f0"

void __stdcall FUN_1019e4f0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e510; body size 16 bytes.
#line 1 "ENTRY_1019e510"

void __stdcall FUN_1019e510(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e530; body size 16 bytes.
#line 1 "ENTRY_1019e530"

void __stdcall FUN_1019e530(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e550; body size 16 bytes.
#line 1 "ENTRY_1019e550"

void __stdcall FUN_1019e550(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e570; body size 16 bytes.
#line 1 "ENTRY_1019e570"

void __stdcall FUN_1019e570(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e590; body size 16 bytes.
#line 1 "ENTRY_1019e590"

void __stdcall FUN_1019e590(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e5b0; body size 16 bytes.
#line 1 "ENTRY_1019e5b0"

void __stdcall FUN_1019e5b0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e5d0; body size 16 bytes.
#line 1 "ENTRY_1019e5d0"

void __stdcall FUN_1019e5d0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e5f0; body size 16 bytes.
#line 1 "ENTRY_1019e5f0"

void __stdcall FUN_1019e5f0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e610; body size 16 bytes.
#line 1 "ENTRY_1019e610"

void __stdcall FUN_1019e610(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e630; body size 16 bytes.
#line 1 "ENTRY_1019e630"

void __stdcall FUN_1019e630(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e650; body size 16 bytes.
#line 1 "ENTRY_1019e650"

void __stdcall FUN_1019e650(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e670; body size 16 bytes.
#line 1 "ENTRY_1019e670"

void __stdcall FUN_1019e670(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e690; body size 16 bytes.
#line 1 "ENTRY_1019e690"

void __stdcall FUN_1019e690(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e6b0; body size 16 bytes.
#line 1 "ENTRY_1019e6b0"

void __stdcall FUN_1019e6b0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e6d0; body size 16 bytes.
#line 1 "ENTRY_1019e6d0"

void __stdcall FUN_1019e6d0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e6f0; body size 16 bytes.
#line 1 "ENTRY_1019e6f0"

void __stdcall FUN_1019e6f0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e710; body size 16 bytes.
#line 1 "ENTRY_1019e710"

void __stdcall FUN_1019e710(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e730; body size 16 bytes.
#line 1 "ENTRY_1019e730"

void __stdcall FUN_1019e730(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e750; body size 16 bytes.
#line 1 "ENTRY_1019e750"

void __stdcall FUN_1019e750(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e770; body size 16 bytes.
#line 1 "ENTRY_1019e770"

void __stdcall FUN_1019e770(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e790; body size 16 bytes.
#line 1 "ENTRY_1019e790"

void __stdcall FUN_1019e790(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e7b0; body size 16 bytes.
#line 1 "ENTRY_1019e7b0"

void __stdcall FUN_1019e7b0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e7d0; body size 16 bytes.
#line 1 "ENTRY_1019e7d0"

void __stdcall FUN_1019e7d0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e7f0; body size 16 bytes.
#line 1 "ENTRY_1019e7f0"

void __stdcall FUN_1019e7f0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e810; body size 16 bytes.
#line 1 "ENTRY_1019e810"

void __stdcall FUN_1019e810(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e830; body size 24 bytes.
#line 1 "ENTRY_1019e830"

__declspec(naked) void FUN_1019e830(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm test ecx, ecx
  __asm je 0x1019e845
  __asm mov eax, dword ptr [ecx]
  __asm _emit 0xc7 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm jmp dword ptr [eax + 0xc]
  __asm ret 4
}



// Reference entry 1019e850; body size 16 bytes.
#line 1 "ENTRY_1019e850"

void __stdcall FUN_1019e850(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e870; body size 16 bytes.
#line 1 "ENTRY_1019e870"

void __stdcall FUN_1019e870(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e890; body size 16 bytes.
#line 1 "ENTRY_1019e890"

void __stdcall FUN_1019e890(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e8b0; body size 16 bytes.
#line 1 "ENTRY_1019e8b0"

void __stdcall FUN_1019e8b0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e8d0; body size 16 bytes.
#line 1 "ENTRY_1019e8d0"

void __stdcall FUN_1019e8d0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e8f0; body size 16 bytes.
#line 1 "ENTRY_1019e8f0"

void __stdcall FUN_1019e8f0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e910; body size 16 bytes.
#line 1 "ENTRY_1019e910"

void __stdcall FUN_1019e910(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e930; body size 16 bytes.
#line 1 "ENTRY_1019e930"

void __stdcall FUN_1019e930(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e950; body size 16 bytes.
#line 1 "ENTRY_1019e950"

void __stdcall FUN_1019e950(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e970; body size 16 bytes.
#line 1 "ENTRY_1019e970"

void __stdcall FUN_1019e970(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e990; body size 16 bytes.
#line 1 "ENTRY_1019e990"

void __stdcall FUN_1019e990(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e9b0; body size 16 bytes.
#line 1 "ENTRY_1019e9b0"

void __stdcall FUN_1019e9b0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e9d0; body size 16 bytes.
#line 1 "ENTRY_1019e9d0"

void __stdcall FUN_1019e9d0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019e9f0; body size 16 bytes.
#line 1 "ENTRY_1019e9f0"

void __stdcall FUN_1019e9f0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019ea10; body size 16 bytes.
#line 1 "ENTRY_1019ea10"

void __stdcall FUN_1019ea10(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019ea30; body size 16 bytes.
#line 1 "ENTRY_1019ea30"

void __stdcall FUN_1019ea30(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019eaf0; body size 16 bytes.
#line 1 "ENTRY_1019eaf0"

void __stdcall FUN_1019eaf0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019eb10; body size 16 bytes.
#line 1 "ENTRY_1019eb10"

void __stdcall FUN_1019eb10(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019eb30; body size 16 bytes.
#line 1 "ENTRY_1019eb30"

void __stdcall FUN_1019eb30(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019eb50; body size 16 bytes.
#line 1 "ENTRY_1019eb50"

void __stdcall FUN_1019eb50(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019ebf0; body size 16 bytes.
#line 1 "ENTRY_1019ebf0"

void __stdcall FUN_1019ebf0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019ec10; body size 16 bytes.
#line 1 "ENTRY_1019ec10"

void __stdcall FUN_1019ec10(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019ec30; body size 16 bytes.
#line 1 "ENTRY_1019ec30"

void __stdcall FUN_1019ec30(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019ec50; body size 16 bytes.
#line 1 "ENTRY_1019ec50"

void __stdcall FUN_1019ec50(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019ec70; body size 16 bytes.
#line 1 "ENTRY_1019ec70"

void __stdcall FUN_1019ec70(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019ec90; body size 16 bytes.
#line 1 "ENTRY_1019ec90"

void __stdcall FUN_1019ec90(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019ecb0; body size 16 bytes.
#line 1 "ENTRY_1019ecb0"

void __stdcall FUN_1019ecb0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019ecd0; body size 16 bytes.
#line 1 "ENTRY_1019ecd0"

void __stdcall FUN_1019ecd0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019ecf0; body size 16 bytes.
#line 1 "ENTRY_1019ecf0"

void __stdcall FUN_1019ecf0(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
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

__declspec(naked) void FUN_1019edb0(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm test ecx, ecx
  __asm je 0x1019edc5
  __asm mov eax, dword ptr [ecx]
  __asm _emit 0xc7 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm jmp dword ptr [eax + 4]
  __asm ret 4
}



// Reference entry 1019edd0; body size 24 bytes.
#line 1 "ENTRY_1019edd0"

__declspec(naked) void FUN_1019edd0(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm test ecx, ecx
  __asm je 0x1019ede5
  __asm mov eax, dword ptr [ecx]
  __asm _emit 0xc7 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm jmp dword ptr [eax + 4]
  __asm ret 4
}



// Reference entry 1019edf0; body size 24 bytes.
#line 1 "ENTRY_1019edf0"

__declspec(naked) void FUN_1019edf0(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm test ecx, ecx
  __asm je 0x1019ee05
  __asm mov eax, dword ptr [ecx]
  __asm _emit 0xc7 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm jmp dword ptr [eax + 4]
  __asm ret 4
}



// Reference entry 1019ee10; body size 24 bytes.
#line 1 "ENTRY_1019ee10"

__declspec(naked) void FUN_1019ee10(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm test ecx, ecx
  __asm je 0x1019ee25
  __asm mov eax, dword ptr [ecx]
  __asm _emit 0xc7 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm jmp dword ptr [eax + 8]
  __asm ret 4
}



// Reference entry 1019ee30; body size 24 bytes.
#line 1 "ENTRY_1019ee30"

__declspec(naked) void FUN_1019ee30(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm test ecx, ecx
  __asm je 0x1019ee45
  __asm mov eax, dword ptr [ecx]
  __asm _emit 0xc7 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm jmp dword ptr [eax + 8]
  __asm ret 4
}



// Reference entry 1019ee50; body size 24 bytes.
#line 1 "ENTRY_1019ee50"

__declspec(naked) void FUN_1019ee50(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm test ecx, ecx
  __asm je 0x1019ee65
  __asm mov eax, dword ptr [ecx]
  __asm _emit 0xc7 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm jmp dword ptr [eax + 4]
  __asm ret 4
}



// Reference entry 1019ee70; body size 24 bytes.
#line 1 "ENTRY_1019ee70"

__declspec(naked) void FUN_1019ee70(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm test ecx, ecx
  __asm je 0x1019ee85
  __asm mov eax, dword ptr [ecx]
  __asm _emit 0xc7 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm jmp dword ptr [eax + 4]
  __asm ret 4
}



// Reference entry 1019ee90; body size 24 bytes.
#line 1 "ENTRY_1019ee90"

__declspec(naked) void FUN_1019ee90(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm test ecx, ecx
  __asm je 0x1019eea5
  __asm mov eax, dword ptr [ecx]
  __asm _emit 0xc7 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm jmp dword ptr [eax + 4]
  __asm ret 4
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

__declspec(naked) void FUN_1019eee0(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm test ecx, ecx
  __asm je 0x1019eef5
  __asm mov eax, dword ptr [ecx]
  __asm _emit 0xc7 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm jmp dword ptr [eax + 4]
  __asm ret 4
}



// Reference entry 1019ef00; body size 16 bytes.
#line 1 "ENTRY_1019ef00"

void __stdcall FUN_1019ef00(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019ef20; body size 24 bytes.
#line 1 "ENTRY_1019ef20"

__declspec(naked) void FUN_1019ef20(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm test ecx, ecx
  __asm je 0x1019ef35
  __asm mov eax, dword ptr [ecx]
  __asm _emit 0xc7 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm jmp dword ptr [eax + 0x54]
  __asm ret 4
}



// Reference entry 1019ef40; body size 16 bytes.
#line 1 "ENTRY_1019ef40"

void __stdcall FUN_1019ef40(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019ef60; body size 16 bytes.
#line 1 "ENTRY_1019ef60"

void __stdcall FUN_1019ef60(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019ef80; body size 16 bytes.
#line 1 "ENTRY_1019ef80"

void __stdcall FUN_1019ef80(int *param_1)

{
  if ((int *)(param_1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(param_1))->v();
  }
  return;
}


// Reference entry 1019efa0; body size 24 bytes.
#line 1 "ENTRY_1019efa0"

__declspec(naked) void FUN_1019efa0(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm test ecx, ecx
  __asm je 0x1019efb5
  __asm mov eax, dword ptr [ecx]
  __asm _emit 0xc7 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm jmp dword ptr [eax + 8]
  __asm ret 4
}



// Reference entry 1019fe40; body size 25 bytes.
#line 1 "ENTRY_1019fe40"

__declspec(naked) undefined8 * FUN_1019fe40(void)

{
  __asm push 8
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm test eax, eax
  __asm je 0x1019fe56
  __asm xorps xmm0, xmm0
  __asm movq qword ptr [eax], xmm0
  __asm ret
  __asm xor eax, eax
  __asm ret
}



// Reference entry 1019fe60; body size 32 bytes.
#line 1 "ENTRY_1019fe60"

__declspec(naked) undefined8 * FUN_1019fe60(void)

{
  __asm push 0xc
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm test eax, eax
  __asm je 0x1019fe7d
  __asm xorps xmm0, xmm0
  __asm movq qword ptr [eax], xmm0
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm ret
  __asm xor eax, eax
  __asm ret
}



// Reference entry 1019ff40; body size 45 bytes.
#line 1 "ENTRY_1019ff40"

__declspec(naked) undefined4 * FUN_1019ff40(void)

{
  __asm push 0x10
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm test eax, eax
  __asm je 0x1019ff6a
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [eax], LAB_1187078c
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm ret
  __asm xor eax, eax
  __asm ret
}



// Reference entry 101a00b0; body size 45 bytes.
#line 1 "ENTRY_101a00b0"

__declspec(naked) undefined4 * FUN_101a00b0(void)

{
  __asm push 0x10
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm test eax, eax
  __asm je 0x101a00da
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [eax], LAB_118707b0
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm ret
  __asm xor eax, eax
  __asm ret
}



// Reference entry 101a00f0; body size 45 bytes.
#line 1 "ENTRY_101a00f0"

__declspec(naked) undefined4 * FUN_101a00f0(void)

{
  __asm push 0x10
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm test eax, eax
  __asm je 0x101a011a
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [eax], LAB_11870768
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm ret
  __asm xor eax, eax
  __asm ret
}



// Reference entry 101a0130; body size 52 bytes.
#line 1 "ENTRY_101a0130"

__declspec(naked) undefined4 * FUN_101a0130(void)

{
  __asm push 0x14
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm test eax, eax
  __asm je 0x101a0161
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [eax], LAB_11870740
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm ret
  __asm xor eax, eax
  __asm ret
}



// Reference entry 101a0660; body size 52 bytes.
#line 1 "ENTRY_101a0660"

__declspec(naked) undefined4 * FUN_101a0660(void)

{
  __asm push 0x14
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm test eax, eax
  __asm je 0x101a0691
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [eax], LAB_11870af0
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm ret
  __asm xor eax, eax
  __asm ret
}



// Reference entry 101a07c0; body size 52 bytes.
#line 1 "ENTRY_101a07c0"

__declspec(naked) undefined4 * FUN_101a07c0(void)

{
  __asm push 0x14
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm test eax, eax
  __asm je 0x101a07f1
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [eax], LAB_11870ba8
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm ret
  __asm xor eax, eax
  __asm ret
}



// Reference entry 101a08e0; body size 45 bytes.
#line 1 "ENTRY_101a08e0"

__declspec(naked) undefined4 * FUN_101a08e0(void)

{
  __asm push 0x10
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm test eax, eax
  __asm je 0x101a090a
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [eax], LAB_11870c40
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm ret
  __asm xor eax, eax
  __asm ret
}



// Reference entry 101a0920; body size 52 bytes.
#line 1 "ENTRY_101a0920"

__declspec(naked) undefined4 * FUN_101a0920(void)

{
  __asm push 0x14
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm test eax, eax
  __asm je 0x101a0951
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [eax], LAB_11870c64
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm ret
  __asm xor eax, eax
  __asm ret
}



// Reference entry 101a0970; body size 52 bytes.
#line 1 "ENTRY_101a0970"

__declspec(naked) undefined4 * FUN_101a0970(void)

{
  __asm push 0x14
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm test eax, eax
  __asm je 0x101a09a1
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [eax], LAB_11870c8c
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm ret
  __asm xor eax, eax
  __asm ret
}



// Reference entry 101a0aa0; body size 45 bytes.
#line 1 "ENTRY_101a0aa0"

__declspec(naked) undefined4 * FUN_101a0aa0(void)

{
  __asm push 0x10
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm test eax, eax
  __asm je 0x101a0aca
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [eax], LAB_11870d28
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm ret
  __asm xor eax, eax
  __asm ret
}



// Reference entry 101a0e60; body size 52 bytes.
#line 1 "ENTRY_101a0e60"

__declspec(naked) undefined4 * FUN_101a0e60(void)

{
  __asm push 0x14
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm test eax, eax
  __asm je 0x101a0e91
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [eax], LAB_11870f28
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm ret
  __asm xor eax, eax
  __asm ret
}



// Reference entry 101a0eb0; body size 45 bytes.
#line 1 "ENTRY_101a0eb0"

__declspec(naked) undefined4 * FUN_101a0eb0(void)

{
  __asm push 0x10
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm test eax, eax
  __asm je 0x101a0eda
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [eax], LAB_11870f50
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm ret
  __asm xor eax, eax
  __asm ret
}



// Reference entry 101a0f60; body size 45 bytes.
#line 1 "ENTRY_101a0f60"

__declspec(naked) undefined4 * FUN_101a0f60(void)

{
  __asm push 0x10
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm test eax, eax
  __asm je 0x101a0f8a
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [eax], LAB_118706c0
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm ret
  __asm xor eax, eax
  __asm ret
}



// Reference entry 101a0fa0; body size 59 bytes.
#line 1 "ENTRY_101a0fa0"

__declspec(naked) undefined4 * FUN_101a0fa0(void)

{
  __asm push 0x18
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm test eax, eax
  __asm je 0x101a0fd8
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [eax], LAB_11870660
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x40
  __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm ret
  __asm xor eax, eax
  __asm ret
}



// Reference entry 101a1190; body size 52 bytes.
#line 1 "ENTRY_101a1190"

__declspec(naked) undefined4 * FUN_101a1190(void)

{
  __asm push 0x14
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm test eax, eax
  __asm je 0x101a11c1
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [eax], LAB_11871058
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm ret
  __asm xor eax, eax
  __asm ret
}



// Reference entry 101a11e0; body size 45 bytes.
#line 1 "ENTRY_101a11e0"

__declspec(naked) undefined4 * FUN_101a11e0(void)

{
  __asm push 0x10
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm test eax, eax
  __asm je 0x101a120a
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [eax], LAB_11871034
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm ret
  __asm xor eax, eax
  __asm ret
}



// Reference entry 101a1320; body size 52 bytes.
#line 1 "ENTRY_101a1320"

__declspec(naked) undefined4 * FUN_101a1320(void)

{
  __asm push 0x14
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm test eax, eax
  __asm je 0x101a1351
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [eax], LAB_118706a8
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x40
  __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm ret
  __asm xor eax, eax
  __asm ret
}



// Reference entry 101a1440; body size 45 bytes.
#line 1 "ENTRY_101a1440"

__declspec(naked) undefined4 * FUN_101a1440(void)

{
  __asm push 0x10
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm test eax, eax
  __asm je 0x101a146a
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [eax], LAB_118711d4
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm ret
  __asm xor eax, eax
  __asm ret
}



// Reference entry 101a1570; body size 38 bytes.
#line 1 "ENTRY_101a1570"

__declspec(naked) undefined4 * FUN_101a1570(void)

{
  __asm push 0xc
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm test eax, eax
  __asm je 0x101a1593
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x08
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm ret
  __asm xor eax, eax
  __asm ret
}



// Reference entry 101a1600; body size 59 bytes.
#line 1 "ENTRY_101a1600"

__declspec(naked) undefined4 * FUN_101a1600(void)

{
  __asm push 0x18
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm test eax, eax
  __asm je 0x101a1638
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [eax], LAB_11871274
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x40
  __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm ret
  __asm xor eax, eax
  __asm ret
}



// Reference entry 101a16b0; body size 24 bytes.
#line 1 "ENTRY_101a16b0"

__declspec(naked) undefined4 * FUN_101a16b0(void)

{
  __asm push 4
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm test eax, eax
  __asm je 0x101a16c5
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm ret
  __asm xor eax, eax
  __asm ret
}



// Reference entry 101a1800; body size 24 bytes.
#line 1 "ENTRY_101a1800"

__declspec(naked) undefined4 FUN_101a1800(void)

{
  __asm push 8
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm test eax, eax
  __asm je 0x101a1815
  __asm mov ecx, eax
  __asm jmp LAB_1005040c
  __asm xor eax, eax
  __asm ret
}



// Reference entry 101a19a0; body size 35 bytes.
#line 1 "ENTRY_101a19a0"

__declspec(naked) void FUN_101a19a0(void)

{
  __asm push 8
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm test eax, eax
  __asm je 0x101a19be
  __asm mov ecx, dword ptr [esp + 4]
  __asm mov dword ptr [eax], ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [eax + 4], ecx
  __asm ret 8
  __asm xor eax, eax
  __asm ret 8
}



// Reference entry 101a1a30; body size 38 bytes.
#line 1 "ENTRY_101a1a30"

__declspec(naked) undefined4 * FUN_101a1a30(void)

{
  __asm push 0xc
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm test eax, eax
  __asm je 0x101a1a53
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [eax], LAB_11870574
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm ret
  __asm xor eax, eax
  __asm ret
}



// Reference entry 101a1a60; body size 38 bytes.
#line 1 "ENTRY_101a1a60"

__declspec(naked) undefined4 * FUN_101a1a60(void)

{
  __asm push 0xc
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm test eax, eax
  __asm je 0x101a1a83
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [eax], LAB_11870564
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm ret
  __asm xor eax, eax
  __asm ret
}



// Reference entry 101a1a90; body size 45 bytes.
#line 1 "ENTRY_101a1a90"

__declspec(naked) undefined4 * FUN_101a1a90(void)

{
  __asm push 0x10
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm test eax, eax
  __asm je 0x101a1aba
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [eax], LAB_11870638
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm ret
  __asm xor eax, eax
  __asm ret
}



// Reference entry 101a1ad0; body size 45 bytes.
#line 1 "ENTRY_101a1ad0"

__declspec(naked) undefined4 * FUN_101a1ad0(void)

{
  __asm push 0x10
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm test eax, eax
  __asm je 0x101a1afa
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [eax], LAB_1187064c
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm ret
  __asm xor eax, eax
  __asm ret
}



// Reference entry 101a1b10; body size 38 bytes.
#line 1 "ENTRY_101a1b10"

__declspec(naked) undefined4 * FUN_101a1b10(void)

{
  __asm push 0xc
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm test eax, eax
  __asm je 0x101a1b33
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [eax], LAB_11870594
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm ret
  __asm xor eax, eax
  __asm ret
}



// Reference entry 101a1b40; body size 38 bytes.
#line 1 "ENTRY_101a1b40"

__declspec(naked) undefined4 * FUN_101a1b40(void)

{
  __asm push 0xc
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm test eax, eax
  __asm je 0x101a1b63
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [eax], LAB_11870584
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm ret
  __asm xor eax, eax
  __asm ret
}



// Reference entry 101a1b70; body size 38 bytes.
#line 1 "ENTRY_101a1b70"

__declspec(naked) undefined4 * FUN_101a1b70(void)

{
  __asm push 0xc
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm test eax, eax
  __asm je 0x101a1b93
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [eax], LAB_11870554
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm ret
  __asm xor eax, eax
  __asm ret
}



// Reference entry 101a1ba0; body size 27 bytes.
#line 1 "ENTRY_101a1ba0"

__declspec(naked) undefined4 FUN_101a1ba0(void)

{
  __asm push 0x108
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm test eax, eax
  __asm je 0x101a1bb8
  __asm mov ecx, eax
  __asm jmp LAB_10059a93
  __asm xor eax, eax
  __asm ret
}



// Reference entry 101a1bd0; body size 38 bytes.
#line 1 "ENTRY_101a1bd0"

__declspec(naked) undefined4 * FUN_101a1bd0(void)

{
  __asm push 0xc
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm test eax, eax
  __asm je 0x101a1bf3
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [eax], LAB_118705b8
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm ret
  __asm xor eax, eax
  __asm ret
}



// Reference entry 101a1cf0; body size 45 bytes.
#line 1 "ENTRY_101a1cf0"

__declspec(naked) undefined4 * FUN_101a1cf0(void)

{
  __asm push 0x10
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm test eax, eax
  __asm je 0x101a1d1a
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [eax], LAB_118705a4
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm ret
  __asm xor eax, eax
  __asm ret
}



// Reference entry 101a1d30; body size 24 bytes.
#line 1 "ENTRY_101a1d30"

__declspec(naked) undefined4 FUN_101a1d30(void)

{
  __asm push 0x48
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm test eax, eax
  __asm je 0x101a1d45
  __asm mov ecx, eax
  __asm jmp LAB_10015feb
  __asm xor eax, eax
  __asm ret
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

__declspec(naked) void FUN_101a1e50(void)

{
  __asm sub esp, 8
  __asm _emit 0xf3 __asm _emit 0x0f __asm _emit 0x10 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x0c
  __asm sub esp, 8
  __asm cvtps2pd xmm0, xmm0
  __asm _emit 0xf2 __asm _emit 0x0f __asm _emit 0x11 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0xdd __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0xdd __asm _emit 0x1c __asm _emit 0x24
  __asm call LAB_1148ce4d
  __asm _emit 0xd9 __asm _emit 0x5c __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0xd9 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x14
  __asm add esp, 0x10
  __asm ret
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

__declspec(naked) void FUN_101a3710(void)

{
  __asm mov eax, dword ptr [ecx]
  __asm test eax, eax
  __asm je 0x101a3721
  __asm push eax
  __asm call dword ptr [LAB_122fc9c0]
  __asm add esp, 4
  __asm ret
  __asm push offset LAB_1186d2ee
  __asm call dword ptr [LAB_122fc9c0]
  __asm add esp, 4
  __asm ret
}



// Reference entry 101a3cc0; body size 60 bytes.
#line 1 "ENTRY_101a3cc0"

__declspec(naked) void FUN_101a3cc0(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0x85 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp ecx, 0x1000
  __asm jb 0x101a3ce9
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x101a3cf6
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret 8
  __asm call dword ptr [LAB_122fc888]
}



// Reference entry 101a4420; body size 47 bytes.
#line 1 "ENTRY_101a4420"

__declspec(naked) void FUN_101a4420(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, offset LAB_1186d2ee
  __asm mov edx, esi
  __asm mov eax, dword ptr [eax]
  __asm test eax, eax
  __asm push 0
  __asm cmovne edx, eax
  __asm mov eax, dword ptr [ecx]
  __asm test eax, eax
  __asm push edx
  __asm cmovne esi, eax
  __asm push esi
  __asm call LAB_1008878a
  __asm add esp, 0xc
  __asm test eax, eax
  __asm sete al
  __asm pop esi
  __asm ret 4
}



// Reference entry 101a4460; body size 43 bytes.
#line 1 "ENTRY_101a4460"

__declspec(naked) void FUN_101a4460(void)

{
  __asm mov eax, dword ptr [ecx]
  __asm mov edx, offset LAB_1186d2ee
  __asm test eax, eax
  __asm mov ecx, edx
  __asm push 0
  __asm cmovne ecx, eax
  __asm mov eax, dword ptr [esp + 8]
  __asm test eax, eax
  __asm cmovne edx, eax
  __asm push edx
  __asm push ecx
  __asm call LAB_1008878a
  __asm add esp, 0xc
  __asm test eax, eax
  __asm sete al
  __asm ret 4
}



// Reference entry 101a45a0; body size 19 bytes.
#line 1 "ENTRY_101a45a0"

__declspec(naked) void FUN_101a45a0(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm lea eax, [esp + 0xc]
  __asm push eax
  __asm push dword ptr [esp + 0xc]
  __asm call LAB_100617c0
  __asm ret
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

__declspec(naked) void FUN_101a4bf0(void)

{
  __asm push edi
  __asm mov edi, dword ptr [ecx]
  __asm test edi, edi
  __asm je 0x101a4c2a
  __asm cmp dword ptr [edi - 0x10], 0xffff
  __asm push esi
  __asm lea esi, [edi - 0x10]
  __asm jge 0x101a4c29
  __asm push esi
  __asm call LAB_1001718e
  __asm add esp, 4
  __asm test eax, eax
  __asm jne 0x101a4c29
  __asm push dword ptr [esi + 0xc]
  __asm mov dword ptr [esi + 8], eax
  __asm push edi
  __asm mov dword ptr [esi + 4], eax
  __asm call LAB_10087529
  __asm push esi
  __asm call LAB_1005e133
  __asm add esp, 0xc
  __asm pop esi
  __asm pop edi
  __asm ret
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
      iVar4 = (int)((int)strlen((const char *)pcVar2));
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
      iVar4 = (int)((int)strlen((const char *)pcVar2));
      *(int*)(pcVar2 + -0xc) = (int)(iVar4);
    }
    return (int)(iVar4);
  }
  return (int)(0);
}


// Reference entry 101a4d40; body size 47 bytes.
#line 1 "ENTRY_101a4d40"

__declspec(naked) void FUN_101a4d40(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, offset LAB_1186d2ee
  __asm mov edx, esi
  __asm mov eax, dword ptr [eax]
  __asm test eax, eax
  __asm push 0
  __asm cmovne edx, eax
  __asm mov eax, dword ptr [ecx]
  __asm test eax, eax
  __asm push edx
  __asm cmovne esi, eax
  __asm push esi
  __asm call LAB_1008878a
  __asm add esp, 0xc
  __asm test eax, eax
  __asm sets al
  __asm pop esi
  __asm ret 4
}



// Reference entry 101a4d80; body size 43 bytes.
#line 1 "ENTRY_101a4d80"

__declspec(naked) void FUN_101a4d80(void)

{
  __asm mov eax, dword ptr [ecx]
  __asm mov edx, offset LAB_1186d2ee
  __asm test eax, eax
  __asm mov ecx, edx
  __asm push 0
  __asm cmovne ecx, eax
  __asm mov eax, dword ptr [esp + 8]
  __asm test eax, eax
  __asm cmovne edx, eax
  __asm push edx
  __asm push ecx
  __asm call LAB_1008878a
  __asm add esp, 0xc
  __asm test eax, eax
  __asm sets al
  __asm ret 4
}



// Reference entry 101a4fe0; body size 62 bytes.
#line 1 "ENTRY_101a4fe0"

__declspec(naked) void FUN_101a4fe0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm cmp dword ptr [esi], 0xffff
  __asm jl 0x101a4ff2
  __asm mov eax, 0xffff
  __asm pop esi
  __asm ret
  __asm push esi
  __asm call LAB_1001718e
  __asm add esp, 4
  __asm test eax, eax
  __asm jne 0x101a501c
  __asm push dword ptr [esi + 0xc]
  __asm mov dword ptr [esi + 8], eax
  __asm mov dword ptr [esi + 4], eax
  __asm lea eax, [esi + 0x10]
  __asm push eax
  __asm call LAB_10087529
  __asm push esi
  __asm call LAB_1005e133
  __asm add esp, 0xc
  __asm xor eax, eax
  __asm pop esi
  __asm ret
}



// Reference entry 101a5590; body size 38 bytes.
#line 1 "ENTRY_101a5590"

__declspec(naked) void FUN_101a5590(void)

{
  __asm mov edx, dword ptr [esp + 4]
  __asm xor eax, eax
  __asm test edx, edx
  __asm je 0x101a55ac
  __asm push esi
  __asm xor esi, esi
  __asm cmp si, word ptr [edx]
  __asm je 0x101a55ab
  __asm inc eax
  __asm xor esi, esi
  __asm cmp si, word ptr [edx + eax*2]
  __asm jne 0x101a55a2
  __asm pop esi
  __asm push eax
  __asm push edx
  __asm call LAB_1008ac38
  __asm ret 4
}



// Reference entry 101a6af0; body size 32 bytes.
#line 1 "ENTRY_101a6af0"

__declspec(naked) void FUN_101a6af0(void)

{
  __asm push esi
  __asm mov esi, dword ptr [ecx]
  __asm test esi, esi
  __asm je 0x101a6b0c
  __asm mov eax, dword ptr [esi - 8]
  __asm test eax, eax
  __asm jne 0x101a6b0e
  __asm push esi
  __asm call LAB_10066437
  __asm add esp, 4
  __asm mov dword ptr [esi - 8], eax
  __asm pop esi
  __asm ret
  __asm xor eax, eax
  __asm pop esi
  __asm ret
}



// Reference entry 101a6b20; body size 27 bytes.
#line 1 "ENTRY_101a6b20"

__declspec(naked) void FUN_101a6b20(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov eax, dword ptr [esi + 8]
  __asm test eax, eax
  __asm jne 0x101a6b39
  __asm lea eax, [esi + 0x10]
  __asm push eax
  __asm call LAB_10066437
  __asm add esp, 4
  __asm mov dword ptr [esi + 8], eax
  __asm pop esi
  __asm ret
}



// Reference entry 101a8d90; body size 41 bytes.
#line 1 "ENTRY_101a8d90"

__declspec(naked) void FUN_101a8d90(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x101a8db3
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



// Reference entry 101a8dd0; body size 24 bytes.
#line 1 "ENTRY_101a8dd0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101a8dd0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
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
    ((SCVtbl_1_0*)(param_2))->v();
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

__declspec(naked) void FUN_101a90e0(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_114f3770
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ecx]
  __asm test ecx, ecx
  __asm je 0x101a910d
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
}



// Reference entry 101a9140; body size 60 bytes.
#line 1 "ENTRY_101a9140"

__declspec(naked) void FUN_101a9140(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_114f37a0
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ecx]
  __asm test ecx, ecx
  __asm je 0x101a916d
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
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

__declspec(naked) void FUN_101a9d20(void)

{
  __asm mov edx, dword ptr [ecx + 0xc]
  __asm add ecx, 8
  __asm cmp edx, dword ptr [ecx + 8]
  __asm je 0x101a9d38
  __asm mov eax, dword ptr [esp + 4]
  __asm mov dword ptr [edx], eax
  __asm add dword ptr [ecx + 4], 4
  __asm ret 4
  __asm lea eax, [esp + 4]
  __asm push eax
  __asm push edx
  __asm call LAB_100443d2
  __asm ret 4
}



// Reference entry 101aa430; body size 49 bytes.
#line 1 "ENTRY_101aa430"

__declspec(naked) void FUN_101aa430(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov eax, dword ptr [esi]
  __asm call dword ptr [eax + 0x14]
  __asm mov ecx, dword ptr [esp + 8]
  __asm cmp ecx, eax
  __asm jae 0x101aa45d
  __asm mov eax, dword ptr [esi + 8]
  __asm lea edx, [eax + ecx*4]
  __asm mov eax, dword ptr [esi + 0xc]
  __asm lea ecx, [edx + 4]
  __asm sub eax, ecx
  __asm push eax
  __asm push ecx
  __asm push edx
  __asm call LAB_1148cdf3
  __asm add esp, 0xc
  __asm add dword ptr [esi + 0xc], -4
  __asm pop esi
  __asm ret 4
}



// Reference entry 101aa540; body size 30 bytes.
#line 1 "ENTRY_101aa540"

__declspec(naked) void FUN_101aa540(void)

{
  __asm mov eax, dword ptr [ecx + 0xc]
  __asm mov edx, dword ptr [ecx + 8]
  __asm mov ecx, eax
  __asm sub ecx, edx
  __asm push offset LAB_101aa510
  __asm sar ecx, 2
  __asm push ecx
  __asm push eax
  __asm push edx
  __asm call LAB_1005c1e9
  __asm add esp, 0x10
  __asm ret
}



// Reference entry 101aa570; body size 33 bytes.
#line 1 "ENTRY_101aa570"

__declspec(naked) void FUN_101aa570(void)

{
  __asm push ecx
  __asm mov edx, dword ptr [ecx + 0xc]
  __asm mov eax, edx
  __asm mov ecx, dword ptr [ecx + 8]
  __asm sub eax, ecx
  __asm mov byte ptr [esp], 0
  __asm push dword ptr [esp]
  __asm sar eax, 2
  __asm push eax
  __asm push edx
  __asm push ecx
  __asm call LAB_1004204b
  __asm add esp, 0x14
  __asm ret
}



// Reference entry 101ab320; body size 55 bytes.
#line 1 "ENTRY_101ab320"

__declspec(naked) void FUN_101ab320(void)

{
  __asm push ebx
  __asm push ebp
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x14]
  __asm mov ebp, dword ptr [esi + 4]
  __asm mov ebx, dword ptr [edi]
  __asm test ebp, ebp
  __asm je 0x101ab350
  __asm mov edx, dword ptr [esi + 0xc]
  __asm mov eax, dword ptr [ebx + 4]
  __asm mov ecx, dword ptr [esi + 8]
  __asm mov dword ptr [edx + 4], eax
  __asm mov dword ptr [eax], edx
  __asm mov dword ptr [ecx], ebx
  __asm mov dword ptr [ebx + 4], ecx
  __asm add dword ptr [edi + 4], ebp
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop edi
  __asm pop esi
  __asm pop ebp
  __asm pop ebx
  __asm ret 4
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
    ((SCVtbl_2_0*)(piVar1))->v();
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

__declspec(naked) void FUN_101ac3c0(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], LAB_118815a8
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}



// Reference entry 101ac420; body size 41 bytes.
#line 1 "ENTRY_101ac420"

__declspec(naked) void FUN_101ac420(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x101ac443
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



// Reference entry 101ac990; body size 24 bytes.
#line 1 "ENTRY_101ac990"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101ac990(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101acad0; body size 39 bytes.
#line 1 "ENTRY_101acad0"

__declspec(naked) void FUN_101acad0(void)

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



// Reference entry 101aced0; body size 46 bytes.
#line 1 "ENTRY_101aced0"

__declspec(naked) void FUN_101aced0(void)

{
  __asm push ecx
  __asm mov edx, dword ptr [esp + 8]
  __asm push esi
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 4], esi
  __asm mov dword ptr [esi], LAB_118814e8
  __asm mov eax, dword ptr [edx + 4]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, dword ptr [edx + 8]
  __asm mov dword ptr [esi + 8], ecx
  __asm test ecx, ecx
  __asm je 0x101acef7
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 4
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

__declspec(naked) void FUN_101ae8e0(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_114f4640
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ecx]
  __asm test ecx, ecx
  __asm je 0x101ae90d
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
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

__declspec(naked) void FUN_101b1cc0(void)

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

__declspec(naked) void FUN_101b2520(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov eax, dword ptr [esi + 0x10]
  __asm inc eax
  __asm push eax
  __asm call LAB_100518e8
  __asm push eax
  __asm mov ecx, esi
  __asm call LAB_1002a4cd
  __asm pop esi
  __asm ret
}



// Reference entry 101b2540; body size 21 bytes.
#line 1 "ENTRY_101b2540"

__declspec(naked) void FUN_101b2540(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push dword ptr [esi + 0x10]
  __asm call LAB_100518e8
  __asm push eax
  __asm mov ecx, esi
  __asm call LAB_1002a4cd
  __asm pop esi
  __asm ret
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

__declspec(naked) void FUN_101b2980(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x101b299c
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x101b29b2
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
}



// Reference entry 101b29d0; body size 61 bytes.
#line 1 "ENTRY_101b29d0"

__declspec(naked) void FUN_101b29d0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x101b29ec
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x101b2a02
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
}



// Reference entry 101b2a20; body size 61 bytes.
#line 1 "ENTRY_101b2a20"

__declspec(naked) void FUN_101b2a20(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x101b2a3c
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x101b2a52
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
}



// Reference entry 101b2a70; body size 61 bytes.
#line 1 "ENTRY_101b2a70"

__declspec(naked) void FUN_101b2a70(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x101b2a8c
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x101b2aa2
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
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
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 101b2d50; body size 42 bytes.
#line 1 "ENTRY_101b2d50"

__declspec(naked) void FUN_101b2d50(void)

{
  __asm mov eax, ecx
  __asm mov ecx, dword ptr [eax + 0x70]
  __asm test ecx, ecx
  __asm je 0x101b2d75
  __asm mov edx, dword ptr [esp + 4]
  __asm cmp dword ptr [eax + edx*4 + 0x38], 2
  __asm jne 0x101b2d75
  __asm mov eax, dword ptr [ecx]
  __asm push edx
  __asm mov eax, dword ptr [eax + 0x28]
  __asm call eax
  __asm test al, al
  __asm je 0x101b2d75
  __asm mov al, 1
  __asm ret 4
  __asm xor al, al
  __asm ret 4
}



// Reference entry 101b2d90; body size 42 bytes.
#line 1 "ENTRY_101b2d90"

__declspec(naked) void FUN_101b2d90(void)

{
  __asm mov eax, ecx
  __asm mov ecx, dword ptr [eax + 0x70]
  __asm test ecx, ecx
  __asm je 0x101b2db5
  __asm mov edx, dword ptr [esp + 4]
  __asm cmp dword ptr [eax + edx*4 + 0x38], 2
  __asm jne 0x101b2db5
  __asm mov eax, dword ptr [ecx]
  __asm push edx
  __asm mov eax, dword ptr [eax + 0x24]
  __asm call eax
  __asm test al, al
  __asm je 0x101b2db5
  __asm mov al, 1
  __asm ret 4
  __asm xor al, al
  __asm ret 4
}



// Reference entry 101b2dd0; body size 42 bytes.
#line 1 "ENTRY_101b2dd0"

__declspec(naked) void FUN_101b2dd0(void)

{
  __asm mov eax, ecx
  __asm mov ecx, dword ptr [eax + 0x70]
  __asm test ecx, ecx
  __asm je 0x101b2df5
  __asm mov edx, dword ptr [esp + 4]
  __asm cmp dword ptr [eax + edx*4 + 0x38], 1
  __asm je 0x101b2df5
  __asm mov eax, dword ptr [ecx]
  __asm push edx
  __asm mov eax, dword ptr [eax + 0x20]
  __asm call eax
  __asm test al, al
  __asm je 0x101b2df5
  __asm mov al, 1
  __asm ret 4
  __asm xor al, al
  __asm ret 4
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
    ((SCVtbl_2_0*)(piVar1))->v();
    *param_1 = (int)(0);
  }
  return;
}


// Reference entry 101b4d70; body size 63 bytes.
#line 1 "ENTRY_101b4d70"

__declspec(naked) void FUN_101b4d70(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov ecx, dword ptr [esi + 0x70]
  __asm test ecx, ecx
  __asm je 0x101b4da8
  __asm mov edi, dword ptr [esp + 0xc]
  __asm cmp dword ptr [esi + edi*4 + 0x38], 2
  __asm jne 0x101b4da8
  __asm mov eax, dword ptr [ecx]
  __asm push edi
  __asm mov eax, dword ptr [eax + 0x28]
  __asm call eax
  __asm test al, al
  __asm je 0x101b4da8
  __asm mov ecx, dword ptr [esi + 0x70]
  __asm push edi
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x34]
  __asm call eax
  __asm test al, al
  __asm je 0x101b4da8
  __asm pop edi
  __asm mov al, 1
  __asm pop esi
  __asm ret 4
  __asm pop edi
  __asm xor al, al
  __asm pop esi
  __asm ret 4
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

__declspec(naked) void FUN_101b5290(void)

{
  __asm mov ecx, dword ptr [ecx + 0x158]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x101b52a6
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 101b5e00; body size 52 bytes.
#line 1 "ENTRY_101b5e00"

__declspec(naked) void FUN_101b5e00(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov ecx, dword ptr [esi + 0x70]
  __asm test ecx, ecx
  __asm je 0x101b5e2d
  __asm mov eax, dword ptr [ecx]
  __asm push dword ptr [esp + 0xc]
  __asm mov edi, dword ptr [esp + 0x14]
  __asm push edi
  __asm mov eax, dword ptr [eax + 0x1c]
  __asm call eax
  __asm test al, al
  __asm je 0x101b5e2d
  __asm cmp dword ptr [esi + edi*4 + 0x38], 3
  __asm je 0x101b5e2d
  __asm pop edi
  __asm mov al, 1
  __asm pop esi
  __asm ret 8
  __asm pop edi
  __asm xor al, al
  __asm pop esi
  __asm ret 8
}



// Reference entry 101b5e50; body size 27 bytes.
#line 1 "ENTRY_101b5e50"

__declspec(naked) void FUN_101b5e50(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov eax, dword ptr [ecx + eax*4 + 0x10]
  __asm test eax, eax
  __asm je 0x101b5e66
  __asm cmp eax, 1
  __asm je 0x101b5e66
  __asm mov al, 1
  __asm ret 4
  __asm xor al, al
  __asm ret 4
}



// Reference entry 101b5ef0; body size 19 bytes.
#line 1 "ENTRY_101b5ef0"

__declspec(naked) void FUN_101b5ef0(void)

{
  __asm mov ecx, dword ptr [ecx + 8]
  __asm test ecx, ecx
  __asm je 0x101b5efe
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x50]
  __asm jmp eax
  __asm xor al, al
  __asm ret 4
}



// Reference entry 101b7cd0; body size 62 bytes.
#line 1 "ENTRY_101b7cd0"

__declspec(naked) void FUN_101b7cd0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov ecx, dword ptr [esi + 0x70]
  __asm test ecx, ecx
  __asm je 0x101b7d07
  __asm mov edi, dword ptr [esp + 0xc]
  __asm cmp dword ptr [esi + edi*4 + 0x38], 2
  __asm jne 0x101b7d07
  __asm mov eax, dword ptr [ecx]
  __asm push edi
  __asm mov eax, dword ptr [eax + 0x24]
  __asm call eax
  __asm test al, al
  __asm je 0x101b7d07
  __asm mov byte ptr [edi + esi + 0x64], 1
  __asm mov ecx, dword ptr [esi + 0x70]
  __asm push edi
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x30]
  __asm call eax
  __asm pop edi
  __asm pop esi
  __asm ret 4
  __asm pop edi
  __asm xor al, al
  __asm pop esi
  __asm ret 4
}



// Reference entry 101b7d20; body size 17 bytes.
#line 1 "ENTRY_101b7d20"

__declspec(naked) void FUN_101b7d20(void)

{
  __asm mov ecx, dword ptr [ecx + 0x70]
  __asm test ecx, ecx
  __asm je 0x101b7d2e
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x3c]
  __asm jmp eax
  __asm xor al, al
  __asm ret
}



// Reference entry 101b7f90; body size 24 bytes.
#line 1 "ENTRY_101b7f90"

void __thiscall Recovered_Bulk::m_FUN_101b7f90(int *param_2)
{
  int param_1 = (int )this;
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_49_1*)(param_2))->v((int)(*(undefined4 *)(param_1 + 4)));
  }
  return;
}


// Reference entry 101b7fb0; body size 24 bytes.
#line 1 "ENTRY_101b7fb0"

void __thiscall Recovered_Bulk::m_FUN_101b7fb0(int *param_2)
{
  int param_1 = (int )this;
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_50_1*)(param_2))->v((int)(*(undefined4 *)(param_1 + 4)));
  }
  return;
}


// Reference entry 101b7fd0; body size 63 bytes.
#line 1 "ENTRY_101b7fd0"

__declspec(naked) void FUN_101b7fd0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov ecx, dword ptr [esi + 0x70]
  __asm test ecx, ecx
  __asm je 0x101b8008
  __asm mov edi, dword ptr [esp + 0xc]
  __asm cmp dword ptr [esi + edi*4 + 0x38], 1
  __asm je 0x101b8008
  __asm mov eax, dword ptr [ecx]
  __asm push edi
  __asm mov eax, dword ptr [eax + 0x20]
  __asm call eax
  __asm test al, al
  __asm je 0x101b8008
  __asm mov ecx, dword ptr [esi + 0x70]
  __asm push edi
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x2c]
  __asm call eax
  __asm test al, al
  __asm je 0x101b8008
  __asm pop edi
  __asm mov al, 1
  __asm pop esi
  __asm ret 4
  __asm pop edi
  __asm xor al, al
  __asm pop esi
  __asm ret 4
}



// Reference entry 101b8080; body size 24 bytes.
#line 1 "ENTRY_101b8080"

void __thiscall Recovered_Bulk::m_FUN_101b8080(int *param_2)
{
  int param_1 = (int )this;
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_51_1*)(param_2))->v((int)(*(undefined4 *)(param_1 + 4)));
  }
  return;
}


// Reference entry 101b80e0; body size 41 bytes.
#line 1 "ENTRY_101b80e0"

__declspec(naked) void FUN_101b80e0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x101b8103
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



// Reference entry 101b8120; body size 24 bytes.
#line 1 "ENTRY_101b8120"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101b8120(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
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

__declspec(naked) void FUN_101b8530(void)

{
  __asm mov eax, dword ptr [ecx + 0x18]
  __asm mov edx, offset LAB_1186d2ee
  __asm test eax, eax
  __asm cmovne edx, eax
  __asm push edx
  __asm push dword ptr [ecx + 0x10]
  __asm push dword ptr [ecx + 0xc]
  __asm push dword ptr [ecx + 8]
  __asm push offset LAB_11881da4
  __asm push dword ptr [esp + 0x18]
  __asm call LAB_1006a316
  __asm mov eax, dword ptr [esp + 0x1c]
  __asm add esp, 0x18
  __asm ret 4
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

__declspec(naked) void FUN_101b8740(void)

{
  __asm cmp dword ptr [esp + 4], 0
  __asm je 0x101b8779
  __asm mov eax, dword ptr [ecx + 0x18]
  __asm mov edx, offset LAB_1186d2ee
  __asm test eax, eax
  __asm cmovne edx, eax
  __asm push edx
  __asm push dword ptr [ecx + 0x10]
  __asm push dword ptr [ecx + 0xc]
  __asm push dword ptr [ecx + 8]
  __asm push offset LAB_11881da4
  __asm push dword ptr [esp + 0x18]
  __asm call LAB_1003a1de
  __asm xor ecx, ecx
  __asm add esp, 0x18
  __asm test eax, eax
  __asm setns al
  __asm ret 4
  __asm xor al, al
  __asm ret 4
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

__declspec(naked) void FUN_101b8f90(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 0xc], eax
  __asm mov eax, dword ptr [esp + 0xc]
  __asm mov dword ptr [ecx + 0x10], eax
  __asm mov word ptr [ecx + 0x14], 0
  __asm mov byte ptr [ecx + 0x16], 0
  __asm ret 0xc
}



// Reference entry 101b9160; body size 37 bytes.
#line 1 "ENTRY_101b9160"

__declspec(naked) void FUN_101b9160(void)

{
  __asm lea eax, [esp + 0xc]
  __asm push eax
  __asm push 0
  __asm push dword ptr [esp + 0x10]
  __asm push -1
  __asm push dword ptr [esp + 0x14]
  __asm call LAB_100883de
  __asm push dword ptr [eax + 4]
  __asm push dword ptr [eax]
  __asm call dword ptr [LAB_122fc924]
  __asm add esp, 0x1c
  __asm ret
}



// Reference entry 101b9190; body size 43 bytes.
#line 1 "ENTRY_101b9190"

__declspec(naked) void FUN_101b9190(void)

{
  __asm push ebx
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x10]
  __asm lea ebx, [esi + 4]
  __asm mov byte ptr [ebx], 0
  __asm mov dword ptr [esi], edi
  __asm call LAB_1008fc0b
  __asm test eax, eax
  __asm je 0x101b91b3
  __asm push ebx
  __asm push edi
  __asm mov ecx, eax
  __asm call LAB_10099a2b
  __asm pop edi
  __asm mov eax, esi
  __asm pop esi
  __asm pop ebx
  __asm ret 4
}



// Reference entry 101b9240; body size 27 bytes.
#line 1 "ENTRY_101b9240"

__declspec(naked) void FUN_101b9240(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm call LAB_1008fc0b
  __asm test eax, eax
  __asm je 0x101b9259
  __asm lea edx, [esi + 4]
  __asm mov ecx, eax
  __asm push edx
  __asm push dword ptr [esi]
  __asm call LAB_10013c5f
  __asm pop esi
  __asm ret
}



// Reference entry 101b9650; body size 41 bytes.
#line 1 "ENTRY_101b9650"

__declspec(naked) void FUN_101b9650(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x101b9673
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



// Reference entry 101b9700; body size 24 bytes.
#line 1 "ENTRY_101b9700"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101b9700(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101b9890; body size 46 bytes.
#line 1 "ENTRY_101b9890"

__declspec(naked) void FUN_101b9890(void)

{
  __asm push ecx
  __asm mov edx, dword ptr [esp + 8]
  __asm push esi
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 4], esi
  __asm mov dword ptr [esi], LAB_1188224c
  __asm mov eax, dword ptr [edx + 4]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, dword ptr [edx + 8]
  __asm mov dword ptr [esi + 8], ecx
  __asm test ecx, ecx
  __asm je 0x101b98b7
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 4
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

__declspec(naked) void FUN_101b9f90(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_114f5c50
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ecx]
  __asm test ecx, ecx
  __asm je 0x101b9fbd
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
}



// Reference entry 101b9ff0; body size 60 bytes.
#line 1 "ENTRY_101b9ff0"

__declspec(naked) void FUN_101b9ff0(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_114f5c80
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ecx]
  __asm test ecx, ecx
  __asm je 0x101ba01d
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
}



// Reference entry 101ba050; body size 60 bytes.
#line 1 "ENTRY_101ba050"

__declspec(naked) void FUN_101ba050(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_114f5cb0
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ecx]
  __asm test ecx, ecx
  __asm je 0x101ba07d
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
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

__declspec(naked) void FUN_101bac00(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x101bac1c
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x101bac32
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
}



// Reference entry 101bac50; body size 61 bytes.
#line 1 "ENTRY_101bac50"

__declspec(naked) void FUN_101bac50(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x101bac6c
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x101bac82
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
}



// Reference entry 101bad20; body size 59 bytes.
#line 1 "ENTRY_101bad20"

__declspec(naked) void FUN_101bad20(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm mov esi, dword ptr [edi]
  __asm test esi, esi
  __asm je 0x101bad42
  __asm lea eax, [esi + 4]
  __asm push eax
  __asm call LAB_1001718e
  __asm add esp, 4
  __asm test eax, eax
  __asm jne 0x101bad42
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 1
  __asm call dword ptr [eax]
  __asm mov eax, dword ptr [esp + 0xc]
  __asm mov dword ptr [edi], eax
  __asm pop edi
  __asm pop esi
  __asm test eax, eax
  __asm je 0x101bad58
  __asm add eax, 4
  __asm push eax
  __asm call LAB_10066e8c
  __asm pop ecx
  __asm ret 4
}



// Reference entry 101bad70; body size 59 bytes.
#line 1 "ENTRY_101bad70"

__declspec(naked) void FUN_101bad70(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm mov esi, dword ptr [edi]
  __asm test esi, esi
  __asm je 0x101bad92
  __asm lea eax, [esi + 4]
  __asm push eax
  __asm call LAB_1001718e
  __asm add esp, 4
  __asm test eax, eax
  __asm jne 0x101bad92
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 1
  __asm call dword ptr [eax]
  __asm mov eax, dword ptr [esp + 0xc]
  __asm mov dword ptr [edi], eax
  __asm pop edi
  __asm pop esi
  __asm test eax, eax
  __asm je 0x101bada8
  __asm add eax, 4
  __asm push eax
  __asm call LAB_10066e8c
  __asm pop ecx
  __asm ret 4
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

__declspec(naked) void FUN_101bb100(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [esi]
  __asm test edi, edi
  __asm je 0x101bb122
  __asm lea eax, [edi + 4]
  __asm push eax
  __asm call LAB_1001718e
  __asm add esp, 4
  __asm test eax, eax
  __asm jne 0x101bb122
  __asm mov eax, dword ptr [edi]
  __asm mov ecx, edi
  __asm push 1
  __asm call dword ptr [eax]
  __asm pop edi
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret
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
    ((SCVtbl_2_0*)(piVar1))->v();
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
  }
  return;
}


// Reference entry 101bb180; body size 43 bytes.
#line 1 "ENTRY_101bb180"

__declspec(naked) void FUN_101bb180(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [esi]
  __asm test edi, edi
  __asm je 0x101bb1a2
  __asm lea eax, [edi + 4]
  __asm push eax
  __asm call LAB_1001718e
  __asm add esp, 4
  __asm test eax, eax
  __asm jne 0x101bb1a2
  __asm mov eax, dword ptr [edi]
  __asm mov ecx, edi
  __asm push 1
  __asm call dword ptr [eax]
  __asm pop edi
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret
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

__declspec(naked) void FUN_101bbbe0(void)

{
  __asm mov ecx, dword ptr [ecx + 8]
  __asm test ecx, ecx
  __asm je 0x101bbbee
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x14]
  __asm jmp eax
  __asm xor al, al
  __asm ret 4
}



// Reference entry 101bc2d0; body size 39 bytes.
#line 1 "ENTRY_101bc2d0"

__declspec(naked) void FUN_101bc2d0(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm lea eax, [edi + 4]
  __asm push eax
  __asm call LAB_1001718e
  __asm mov esi, eax
  __asm add esp, 4
  __asm test esi, esi
  __asm jne 0x101bc2f4
  __asm test edi, edi
  __asm je 0x101bc2f4
  __asm mov edx, dword ptr [edi]
  __asm mov ecx, edi
  __asm push 1
  __asm call dword ptr [edx]
  __asm mov eax, esi
  __asm pop edi
  __asm pop esi
  __asm ret
}



// Reference entry 101bc330; body size 60 bytes.
#line 1 "ENTRY_101bc330"

__declspec(naked) void FUN_101bc330(void)

{
  __asm push edi
  __asm mov edi, dword ptr [ecx]
  __asm test edi, edi
  __asm je 0x101bc36a
  __asm cmp dword ptr [edi - 0x10], 0xffff
  __asm push esi
  __asm lea esi, [edi - 0x10]
  __asm jge 0x101bc369
  __asm push esi
  __asm call LAB_1001718e
  __asm add esp, 4
  __asm test eax, eax
  __asm jne 0x101bc369
  __asm push dword ptr [esi + 0xc]
  __asm mov dword ptr [esi + 8], eax
  __asm push edi
  __asm mov dword ptr [esi + 4], eax
  __asm call LAB_10087529
  __asm push esi
  __asm call LAB_1005e133
  __asm add esp, 0xc
  __asm pop esi
  __asm pop edi
  __asm ret
}



// Reference entry 101bc3e0; body size 35 bytes.
#line 1 "ENTRY_101bc3e0"

__declspec(naked) void FUN_101bc3e0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x101bc3fe
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0xc]
  __asm call eax
  __asm test al, al
  __asm je 0x101bc3fe
  __asm mov ecx, dword ptr [esi + 4]
  __asm pop esi
  __asm mov eax, dword ptr [ecx]
  __asm jmp dword ptr [eax + 8]
  __asm mov eax, dword ptr [esi + 8]
  __asm pop esi
  __asm ret
}



// Reference entry 101bc430; body size 30 bytes.
#line 1 "ENTRY_101bc430"

__declspec(naked) void FUN_101bc430(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x101bc44a
  __asm push dword ptr [esp + 0xc]
  __asm mov eax, dword ptr [ecx]
  __asm push dword ptr [esp + 0xc]
  __asm call dword ptr [eax + 4]
  __asm mov dword ptr [esi + 8], eax
  __asm pop esi
  __asm ret 8
}



// Reference entry 101bc460; body size 21 bytes.
#line 1 "ENTRY_101bc460"

void __thiscall Recovered_Bulk::m_FUN_101bc460(int *param_2)
{
  int param_1 = (int )this;
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_9_1*)(param_2))->v((int)(*(undefined4 *)(param_1 + 4)));
  }
  return;
}


// Reference entry 101bc480; body size 21 bytes.
#line 1 "ENTRY_101bc480"

void __thiscall Recovered_Bulk::m_FUN_101bc480(int *param_2)
{
  int param_1 = (int )this;
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_10_1*)(param_2))->v((int)(*(undefined4 *)(param_1 + 4)));
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
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101be0d0; body size 60 bytes.
#line 1 "ENTRY_101be0d0"

__declspec(naked) void FUN_101be0d0(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_114f6840
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ecx]
  __asm test ecx, ecx
  __asm je 0x101be0fd
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
}



// Reference entry 101be1b0; body size 47 bytes.
#line 1 "ENTRY_101be1b0"

__declspec(naked) void FUN_101be1b0(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm lea ecx, [edi + 8]
  __asm mov dword ptr [edi], LAB_11882378
  __asm call LAB_10096673
  __asm lea ecx, [edi + 8]
  __asm call LAB_10015a91
  __asm mov dword ptr [edi], LAB_1188230c
  __asm dec dword ptr [LAB_121a0e68]
  __asm mov dword ptr [edi], LAB_1186d2f4
  __asm pop edi
  __asm pop esi
  __asm ret
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

__declspec(naked) void FUN_101be3c0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x101be3dc
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x101be3f2
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
}



// Reference entry 101be410; body size 43 bytes.
#line 1 "ENTRY_101be410"

__declspec(naked) void FUN_101be410(void)

{
  __asm mov eax, dword ptr [ecx + 0xc]
  __asm push esi
  __asm lea esi, [ecx + 8]
  __asm push dword ptr [esp + 8]
  __asm cmp eax, dword ptr [esi + 8]
  __asm je 0x101be42f
  __asm mov ecx, eax
  __asm call LAB_10036c23
  __asm add dword ptr [esi + 4], 4
  __asm pop esi
  __asm ret 4
  __asm push eax
  __asm mov ecx, esi
  __asm call LAB_1007f9ff
  __asm pop esi
  __asm ret 4
}



// Reference entry 101bef40; body size 40 bytes.
#line 1 "ENTRY_101bef40"

__declspec(naked) void FUN_101bef40(void)

{
  __asm push esi
  __asm push dword ptr [esp + 8]
  __asm mov esi, ecx
  __asm mov eax, dword ptr [esi + 4]
  __asm cmp eax, dword ptr [esi + 8]
  __asm je 0x101bef5e
  __asm mov ecx, eax
  __asm call LAB_10036c23
  __asm add dword ptr [esi + 4], 4
  __asm pop esi
  __asm ret 4
  __asm push eax
  __asm call LAB_10043879
  __asm pop esi
  __asm ret 4
}



// Reference entry 101bf1c0; body size 30 bytes.
#line 1 "ENTRY_101bf1c0"

__declspec(naked) void FUN_101bf1c0(void)

{
  __asm mov eax, dword ptr [ecx + 0xc]
  __asm mov edx, dword ptr [ecx + 8]
  __asm mov ecx, eax
  __asm sub ecx, edx
  __asm push offset LAB_1001b7c5
  __asm sar ecx, 2
  __asm push ecx
  __asm push eax
  __asm push edx
  __asm call LAB_1002dd85
  __asm add esp, 0x10
  __asm ret
}



// Reference entry 101c35c0; body size 61 bytes.
#line 1 "ENTRY_101c35c0"

__declspec(naked) void FUN_101c35c0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x101c35dc
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x101c35f2
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
}



// Reference entry 101c3610; body size 17 bytes.
#line 1 "ENTRY_101c3610"

__declspec(naked) void FUN_101c3610(void)

{
  __asm push dword ptr [esp + 4]
  __asm call LAB_1005eb56
  __asm mov eax, dword ptr [esp + 8]
  __asm add esp, 4
  __asm ret
}



// Reference entry 101c4700; body size 40 bytes.
#line 1 "ENTRY_101c4700"

__declspec(naked) void FUN_101c4700(void)

{
  __asm sub esp, 8
  __asm lea eax, [esp]
  __asm push esi
  __asm push dword ptr [esp + 0x14]
  __asm mov esi, ecx
  __asm push dword ptr [esp + 0x14]
  __asm push eax
  __asm call LAB_10010816
  __asm mov eax, dword ptr [eax + 4]
  __asm test eax, eax
  __asm jne 0x101c4721
  __asm mov eax, dword ptr [esi + 4]
  __asm pop esi
  __asm add esp, 8
  __asm ret 8
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
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 101c4f10; body size 40 bytes.
#line 1 "ENTRY_101c4f10"

__declspec(naked) void FUN_101c4f10(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push dword ptr [esp + 8]
  __asm mov edx, dword ptr [eax]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea eax, [esp + 8]
  __asm push eax
  __asm mov dword ptr [esp + 0xc], edx
  __asm call LAB_100399be
  __asm ret 8
}



// Reference entry 101c5120; body size 59 bytes.
#line 1 "ENTRY_101c5120"

__declspec(naked) void FUN_101c5120(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [esi + 4]
  __asm cmp edi, dword ptr [esi + 8]
  __asm je 0x101c514c
  __asm mov edx, dword ptr [esp + 0xc]
  __asm mov eax, dword ptr [edx]
  __asm mov dword ptr [edi], eax
  __asm mov ecx, dword ptr [edx + 4]
  __asm mov dword ptr [edi + 4], ecx
  __asm test ecx, ecx
  __asm je 0x101c5143
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm add dword ptr [esi + 4], 8
  __asm pop edi
  __asm pop esi
  __asm ret 4
  __asm push dword ptr [esp + 0xc]
  __asm push edi
  __asm call LAB_10026b8e
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 101c5210; body size 55 bytes.
#line 1 "ENTRY_101c5210"

__declspec(naked) void FUN_101c5210(void)

{
  __asm sub esp, 8
  __asm push edi
  __asm push dword ptr [esp + 0x14]
  __asm mov edi, ecx
  __asm call LAB_1007f59a
  __asm push eax
  __asm push dword ptr [esp + 0x18]
  __asm lea eax, [esp + 0xc]
  __asm mov ecx, edi
  __asm push eax
  __asm call LAB_10010816
  __asm mov ecx, dword ptr [eax + 4]
  __asm mov eax, dword ptr [esp + 0x10]
  __asm test ecx, ecx
  __asm jne 0x101c523e
  __asm mov ecx, dword ptr [edi + 4]
  __asm mov dword ptr [eax], ecx
  __asm pop edi
  __asm add esp, 8
  __asm ret 8
}



// Reference entry 101c55c0; body size 41 bytes.
#line 1 "ENTRY_101c55c0"

__declspec(naked) void FUN_101c55c0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x101c55e3
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



// Reference entry 101c5640; body size 24 bytes.
#line 1 "ENTRY_101c5640"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101c5640(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
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
    ((SCVtbl_1_0*)(param_2))->v();
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
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101c58b0; body size 39 bytes.
#line 1 "ENTRY_101c58b0"

__declspec(naked) void FUN_101c58b0(void)

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

__declspec(naked) void FUN_101c6790(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_114f8000
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ecx]
  __asm test ecx, ecx
  __asm je 0x101c67bd
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
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

__declspec(naked) void FUN_101c7440(void)

{
  __asm sub esp, 8
  __asm lea eax, [esp]
  __asm push dword ptr [esp + 0xc]
  __asm push eax
  __asm call LAB_1006acda
  __asm mov eax, dword ptr [eax]
  __asm add eax, 0xc
  __asm add esp, 8
  __asm ret 4
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

__declspec(naked) void FUN_101c83f0(void)

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

__declspec(naked) void FUN_101c97f0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x101c980c
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x101c9822
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
}



// Reference entry 101c9840; body size 61 bytes.
#line 1 "ENTRY_101c9840"

__declspec(naked) void FUN_101c9840(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x101c985c
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x101c9872
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
}



// Reference entry 101c9890; body size 61 bytes.
#line 1 "ENTRY_101c9890"

__declspec(naked) void FUN_101c9890(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x101c98ac
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x101c98c2
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
}



// Reference entry 101c98e0; body size 61 bytes.
#line 1 "ENTRY_101c98e0"

__declspec(naked) void FUN_101c98e0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x101c98fc
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x101c9912
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
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
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 101c9af0; body size 32 bytes.
#line 1 "ENTRY_101c9af0"

__declspec(naked) void FUN_101c9af0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x14]
  __asm test ecx, ecx
  __asm je 0x101c9b0e
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x1c]
  __asm call eax
  __asm test al, al
  __asm je 0x101c9b0e
  __asm mov ecx, dword ptr [esi + 0x14]
  __asm pop esi
  __asm mov eax, dword ptr [ecx]
  __asm jmp dword ptr [eax + 0x18]
  __asm pop esi
  __asm ret
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

__declspec(naked) void FUN_101ca860(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0xc5 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp ecx, 0x1000
  __asm jb 0x101ca889
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x101ca896
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret 8
  __asm call dword ptr [LAB_122fc888]
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
    ((SCVtbl_2_0*)(piVar1))->v();
    *param_1 = (int)(0);
  }
  return;
}


// Reference entry 101cb160; body size 59 bytes.
#line 1 "ENTRY_101cb160"

__declspec(naked) void FUN_101cb160(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [esi + 4]
  __asm cmp edi, dword ptr [esi + 8]
  __asm je 0x101cb18c
  __asm mov edx, dword ptr [esp + 0xc]
  __asm mov eax, dword ptr [edx]
  __asm mov dword ptr [edi], eax
  __asm mov ecx, dword ptr [edx + 4]
  __asm mov dword ptr [edi + 4], ecx
  __asm test ecx, ecx
  __asm je 0x101cb183
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm add dword ptr [esi + 4], 8
  __asm pop edi
  __asm pop esi
  __asm ret 4
  __asm push dword ptr [esp + 0xc]
  __asm push edi
  __asm call LAB_10026b8e
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 101cc2c0; body size 35 bytes.
#line 1 "ENTRY_101cc2c0"

__declspec(naked) void FUN_101cc2c0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm lea ecx, [esi + 0x10]
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esi], LAB_1188476c
  __asm call LAB_1007330d
  __asm mov eax, esi
  __asm pop esi
  __asm ret
}



// Reference entry 101cdd70; body size 33 bytes.
#line 1 "ENTRY_101cdd70"

void __thiscall Recovered_Bulk::m_FUN_101cdd70(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_101cde00<>(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 101cdee0; body size 57 bytes.
#line 1 "ENTRY_101cdee0"

__declspec(naked) void FUN_101cdee0(void)

{
  __asm push ebx
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x10]
  __asm mov ebx, ecx
  __asm cmp byte ptr [esi + 0xd], 0
  __asm jne 0x101cdf14
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x10]
  __asm push dword ptr [esi + 8]
  __asm mov ecx, ebx
  __asm push edi
  __asm call LAB_100553ad
  __asm mov eax, esi
  __asm mov esi, dword ptr [esi]
  __asm push 0x30
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm cmp byte ptr [esi + 0xd], 0
  __asm je 0x101cdef3
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm ret 8
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
    ((SCVtbl_2_0*)(piVar1))->v();
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
    ((SCVtbl_2_0*)(piVar1))->v();
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

__declspec(naked) void FUN_101cf8a0(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], LAB_118840e4
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
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

__declspec(naked) void FUN_101cf8f0(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], LAB_1188418c
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}



// Reference entry 101cf920; body size 42 bytes.
#line 1 "ENTRY_101cf920"

__declspec(naked) void FUN_101cf920(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx], LAB_1188418c
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11884250
  __asm pop ecx
  __asm ret 4
}



// Reference entry 101cf960; body size 40 bytes.
#line 1 "ENTRY_101cf960"

__declspec(naked) void FUN_101cf960(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], LAB_1188418c
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11884250
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
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

__declspec(naked) void FUN_101cf9d0(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx], LAB_1188418c
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11884320
  __asm pop ecx
  __asm ret 4
}



// Reference entry 101cfa10; body size 40 bytes.
#line 1 "ENTRY_101cfa10"

__declspec(naked) void FUN_101cfa10(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], LAB_1188418c
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ecx], LAB_11884320
  __asm pop ecx
  __asm ret
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

__declspec(naked) void FUN_101cfae0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x101cfb03
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



// Reference entry 101cfb80; body size 41 bytes.
#line 1 "ENTRY_101cfb80"

__declspec(naked) void FUN_101cfb80(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x101cfba3
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



// Reference entry 101cfbc0; body size 41 bytes.
#line 1 "ENTRY_101cfbc0"

__declspec(naked) void FUN_101cfbc0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x101cfbe3
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



// Reference entry 101cfc00; body size 41 bytes.
#line 1 "ENTRY_101cfc00"

__declspec(naked) void FUN_101cfc00(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x101cfc23
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



// Reference entry 101cfc70; body size 41 bytes.
#line 1 "ENTRY_101cfc70"

__declspec(naked) void FUN_101cfc70(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x101cfc93
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



// Reference entry 101cfcf0; body size 41 bytes.
#line 1 "ENTRY_101cfcf0"

__declspec(naked) void FUN_101cfcf0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x101cfd13
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



// Reference entry 101cfd30; body size 41 bytes.
#line 1 "ENTRY_101cfd30"

__declspec(naked) void FUN_101cfd30(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x101cfd53
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



// Reference entry 101cfdc0; body size 41 bytes.
#line 1 "ENTRY_101cfdc0"

__declspec(naked) void FUN_101cfdc0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x101cfde3
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



// Reference entry 101cfe30; body size 41 bytes.
#line 1 "ENTRY_101cfe30"

__declspec(naked) void FUN_101cfe30(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x101cfe53
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



// Reference entry 101cfe90; body size 24 bytes.
#line 1 "ENTRY_101cfe90"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101cfe90(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
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
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101d0020; body size 48 bytes.
#line 1 "ENTRY_101d0020"

__declspec(naked) void FUN_101d0020(void)

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



// Reference entry 101d0060; body size 48 bytes.
#line 1 "ENTRY_101d0060"

__declspec(naked) void FUN_101d0060(void)

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



// Reference entry 101d0480; body size 37 bytes.
#line 1 "ENTRY_101d0480"

__declspec(naked) void FUN_101d0480(void)

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
  __asm ret
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

__declspec(naked) void FUN_101d2630(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_114fa300
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ecx]
  __asm test ecx, ecx
  __asm je 0x101d265d
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
}



// Reference entry 101d2690; body size 60 bytes.
#line 1 "ENTRY_101d2690"

__declspec(naked) void FUN_101d2690(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_114fa330
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ecx]
  __asm test ecx, ecx
  __asm je 0x101d26bd
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
}



// Reference entry 101d26f0; body size 60 bytes.
#line 1 "ENTRY_101d26f0"

__declspec(naked) void FUN_101d26f0(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_114fa360
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ecx]
  __asm test ecx, ecx
  __asm je 0x101d271d
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
}



// Reference entry 101d2750; body size 60 bytes.
#line 1 "ENTRY_101d2750"

__declspec(naked) void FUN_101d2750(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_114fa390
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ecx]
  __asm test ecx, ecx
  __asm je 0x101d277d
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
}



// Reference entry 101d27b0; body size 60 bytes.
#line 1 "ENTRY_101d27b0"

__declspec(naked) void FUN_101d27b0(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_114fa3c0
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ecx]
  __asm test ecx, ecx
  __asm je 0x101d27dd
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
}



// Reference entry 101d2810; body size 60 bytes.
#line 1 "ENTRY_101d2810"

__declspec(naked) void FUN_101d2810(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_114fa3f0
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ecx]
  __asm test ecx, ecx
  __asm je 0x101d283d
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
}



// Reference entry 101d2870; body size 60 bytes.
#line 1 "ENTRY_101d2870"

__declspec(naked) void FUN_101d2870(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_114fa420
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ecx]
  __asm test ecx, ecx
  __asm je 0x101d289d
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
}



// Reference entry 101d28d0; body size 60 bytes.
#line 1 "ENTRY_101d28d0"

__declspec(naked) void FUN_101d28d0(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_114fa450
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ecx]
  __asm test ecx, ecx
  __asm je 0x101d28fd
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
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

__declspec(naked) void FUN_101d2970(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x101d298f
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



// Reference entry 101d29a0; body size 33 bytes.
#line 1 "ENTRY_101d29a0"

__declspec(naked) void FUN_101d29a0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x101d29bf
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



// Reference entry 101d29d0; body size 33 bytes.
#line 1 "ENTRY_101d29d0"

__declspec(naked) void FUN_101d29d0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x101d29ef
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



// Reference entry 101d2a00; body size 33 bytes.
#line 1 "ENTRY_101d2a00"

__declspec(naked) void FUN_101d2a00(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x101d2a1f
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



// Reference entry 101d2a30; body size 33 bytes.
#line 1 "ENTRY_101d2a30"

__declspec(naked) void FUN_101d2a30(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x101d2a4f
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



// Reference entry 101d2a60; body size 33 bytes.
#line 1 "ENTRY_101d2a60"

__declspec(naked) void FUN_101d2a60(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x101d2a7f
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



// Reference entry 101d2a90; body size 33 bytes.
#line 1 "ENTRY_101d2a90"

__declspec(naked) void FUN_101d2a90(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x101d2aaf
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



// Reference entry 101d2bf0; body size 28 bytes.
#line 1 "ENTRY_101d2bf0"

void __fastcall FUN_101d2bf0(int *param_1)

{
  thunk_FUN_101cde00<>(param_1,*(undefined4 *)(*param_1 + 4));
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

__declspec(naked) void FUN_101d2c60(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x101d2c7f
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



// Reference entry 101d2c90; body size 33 bytes.
#line 1 "ENTRY_101d2c90"

__declspec(naked) void FUN_101d2c90(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x101d2caf
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



// Reference entry 101d2cc0; body size 33 bytes.
#line 1 "ENTRY_101d2cc0"

__declspec(naked) void FUN_101d2cc0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x101d2cdf
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



// Reference entry 101d2cf0; body size 33 bytes.
#line 1 "ENTRY_101d2cf0"

__declspec(naked) void FUN_101d2cf0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x101d2d0f
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



// Reference entry 101d2d20; body size 33 bytes.
#line 1 "ENTRY_101d2d20"

__declspec(naked) void FUN_101d2d20(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x101d2d3f
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



// Reference entry 101d2d50; body size 33 bytes.
#line 1 "ENTRY_101d2d50"

__declspec(naked) void FUN_101d2d50(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x101d2d6f
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



// Reference entry 101d2d80; body size 33 bytes.
#line 1 "ENTRY_101d2d80"

__declspec(naked) void FUN_101d2d80(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x101d2d9f
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
  thunk_FUN_101cde00<>(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 101d2ea0; body size 47 bytes.
#line 1 "ENTRY_101d2ea0"

__declspec(naked) void FUN_101d2ea0(void)

{
  __asm push esi
  __asm mov esi, dword ptr [ecx + 4]
  __asm test esi, esi
  __asm je 0x101d2ecd
  __asm push edi
  __asm or edi, 0xffffffff
  __asm mov eax, edi
  __asm _emit 0xf0 __asm _emit 0x0f __asm _emit 0xc1 __asm _emit 0x46 __asm _emit 0x04
  __asm jne 0x101d2ecc
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax]
  __asm _emit 0xf0 __asm _emit 0x0f __asm _emit 0xc1 __asm _emit 0x7e __asm _emit 0x08
  __asm dec edi
  __asm jne 0x101d2ecc
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm pop edi
  __asm pop esi
  __asm jmp dword ptr [eax + 4]
  __asm pop edi
  __asm pop esi
  __asm ret
}



// Reference entry 101d2ee0; body size 23 bytes.
#line 1 "ENTRY_101d2ee0"

__declspec(naked) void FUN_101d2ee0(void)

{
  __asm mov ecx, dword ptr [ecx + 4]
  __asm test ecx, ecx
  __asm je 0x101d2ef6
  __asm or eax, 0xffffffff
  __asm _emit 0xf0 __asm _emit 0x0f __asm _emit 0xc1 __asm _emit 0x41 __asm _emit 0x08
  __asm jne 0x101d2ef6
  __asm mov eax, dword ptr [ecx]
  __asm jmp dword ptr [eax + 4]
  __asm ret
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

__declspec(naked) void FUN_101d4050(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x101d406f
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



// Reference entry 101d4080; body size 37 bytes.
#line 1 "ENTRY_101d4080"

__declspec(naked) void FUN_101d4080(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x101d409f
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

__declspec(naked) void FUN_101d5800(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x2c]
  __asm push edi
  __asm lea edi, [esi + 8]
  __asm test ecx, ecx
  __asm je 0x101d5823
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, edi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test byte ptr [esp + 0xc], 1
  __asm je 0x101d5835
  __asm push 0x30
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm pop edi
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
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

__declspec(naked) void FUN_101d6000(void)

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



// Reference entry 101d6020; body size 25 bytes.
#line 1 "ENTRY_101d6020"

__declspec(naked) void FUN_101d6020(void)

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



// Reference entry 101d6060; body size 19 bytes.
#line 1 "ENTRY_101d6060"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_101d6060(undefined4 *param_2)
{
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)((int)this + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 101d6080; body size 19 bytes.
#line 1 "ENTRY_101d6080"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_101d6080(undefined4 *param_2)
{
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)((int)this + 4));
  return (undefined4 *)(param_2);
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

__declspec(naked) void FUN_101d6240(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x2c]
  __asm push edi
  __asm lea edi, [esi + 8]
  __asm test ecx, ecx
  __asm je 0x101d6263
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, edi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm cmp byte ptr [esp + 0xc], 0
  __asm je 0x101d6275
  __asm push 0x30
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 101d6440; body size 39 bytes.
#line 1 "ENTRY_101d6440"

__declspec(naked) void FUN_101d6440(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov ecx, dword ptr [ecx + 0x2c]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [esp + 4], eax
  __asm test ecx, ecx
  __asm je 0x101d6462
  __asm push dword ptr [esp + 8]
  __asm mov eax, dword ptr [ecx]
  __asm lea edx, [esp + 8]
  __asm push edx
  __asm call dword ptr [eax + 8]
  __asm ret 8
  __asm call LAB_1148a05a
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

undefined4 *  __thiscall Recovered_Bulk::m_FUN_101d6f80(undefined4 *param_2)
{
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)((int)this + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 101d6fa0; body size 19 bytes.
#line 1 "ENTRY_101d6fa0"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_101d6fa0(undefined4 *param_2)
{
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)((int)this + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 101d7230; body size 33 bytes.
#line 1 "ENTRY_101d7230"

__declspec(naked) void FUN_101d7230(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x101d724f
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



// Reference entry 101d7260; body size 33 bytes.
#line 1 "ENTRY_101d7260"

__declspec(naked) void FUN_101d7260(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x101d727f
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



// Reference entry 101d7290; body size 33 bytes.
#line 1 "ENTRY_101d7290"

__declspec(naked) void FUN_101d7290(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x101d72af
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



// Reference entry 101d72c0; body size 33 bytes.
#line 1 "ENTRY_101d72c0"

__declspec(naked) void FUN_101d72c0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x101d72df
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



// Reference entry 101d72f0; body size 33 bytes.
#line 1 "ENTRY_101d72f0"

__declspec(naked) void FUN_101d72f0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x101d730f
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



// Reference entry 101d7320; body size 33 bytes.
#line 1 "ENTRY_101d7320"

__declspec(naked) void FUN_101d7320(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x101d733f
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



// Reference entry 101d7350; body size 33 bytes.
#line 1 "ENTRY_101d7350"

__declspec(naked) void FUN_101d7350(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x101d736f
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

__declspec(naked) void FUN_101d78c0(void)

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
  __asm jle 0x101d78f0
  __asm cmp dword ptr [edi + 8], 0
  __asm je 0x101d78f0
  __asm mov edx, dword ptr [edi]
  __asm mov ecx, edi
  __asm call dword ptr [edx + 0xa4]
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop edi
  __asm pop esi
  __asm ret
}



// Reference entry 101d7900; body size 51 bytes.
#line 1 "ENTRY_101d7900"

__declspec(naked) void FUN_101d7900(void)

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
  __asm jle 0x101d7930
  __asm cmp dword ptr [edi + 8], 0
  __asm je 0x101d7930
  __asm mov edx, dword ptr [edi]
  __asm mov ecx, edi
  __asm call dword ptr [edx + 0xa4]
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop edi
  __asm pop esi
  __asm ret
}



// Reference entry 101d7950; body size 61 bytes.
#line 1 "ENTRY_101d7950"

__declspec(naked) void FUN_101d7950(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x101d796c
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x101d7982
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
}



// Reference entry 101d79a0; body size 61 bytes.
#line 1 "ENTRY_101d79a0"

__declspec(naked) void FUN_101d79a0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x101d79bc
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x101d79d2
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
}



// Reference entry 101d79f0; body size 61 bytes.
#line 1 "ENTRY_101d79f0"

__declspec(naked) void FUN_101d79f0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x101d7a0c
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x101d7a22
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
}



// Reference entry 101d7a40; body size 61 bytes.
#line 1 "ENTRY_101d7a40"

__declspec(naked) void FUN_101d7a40(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x101d7a5c
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x101d7a72
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
}



// Reference entry 101d7a90; body size 61 bytes.
#line 1 "ENTRY_101d7a90"

__declspec(naked) void FUN_101d7a90(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x101d7aac
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x101d7ac2
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
}



// Reference entry 101d7ae0; body size 61 bytes.
#line 1 "ENTRY_101d7ae0"

__declspec(naked) void FUN_101d7ae0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x101d7afc
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x101d7b12
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
}



// Reference entry 101d7b30; body size 61 bytes.
#line 1 "ENTRY_101d7b30"

__declspec(naked) void FUN_101d7b30(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x101d7b4c
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x101d7b62
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
}



// Reference entry 101d7b80; body size 61 bytes.
#line 1 "ENTRY_101d7b80"

__declspec(naked) void FUN_101d7b80(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x101d7b9c
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x101d7bb2
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
}



// Reference entry 101d7bd0; body size 61 bytes.
#line 1 "ENTRY_101d7bd0"

__declspec(naked) void FUN_101d7bd0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x101d7bec
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x101d7c02
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
}



// Reference entry 101d7c20; body size 61 bytes.
#line 1 "ENTRY_101d7c20"

__declspec(naked) void FUN_101d7c20(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x101d7c3c
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x101d7c52
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
}



// Reference entry 101d7c70; body size 61 bytes.
#line 1 "ENTRY_101d7c70"

__declspec(naked) void FUN_101d7c70(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x101d7c8c
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x101d7ca2
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
}



// Reference entry 101d7cc0; body size 61 bytes.
#line 1 "ENTRY_101d7cc0"

__declspec(naked) void FUN_101d7cc0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x101d7cdc
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x101d7cf2
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
}



// Reference entry 101d7d10; body size 61 bytes.
#line 1 "ENTRY_101d7d10"

__declspec(naked) void FUN_101d7d10(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x101d7d2c
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x101d7d42
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
}



// Reference entry 101d7d60; body size 61 bytes.
#line 1 "ENTRY_101d7d60"

__declspec(naked) void FUN_101d7d60(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x101d7d7c
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x101d7d92
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
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
    ((SCVtbl_2_0*)(piVar1))->v();
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
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 101d83f0; body size 41 bytes.
#line 1 "ENTRY_101d83f0"

__declspec(naked) void FUN_101d83f0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x64]
  __asm test ecx, ecx
  __asm je 0x101d8417
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x1c]
  __asm call eax
  __asm test al, al
  __asm je 0x101d8417
  __asm mov ecx, dword ptr [esi + 0x64]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x18]
  __asm mov eax, dword ptr [esi + 0x60]
  __asm lea ecx, [esi + 0x60]
  __asm pop esi
  __asm jmp dword ptr [eax + 4]
  __asm pop esi
  __asm ret
}



// Reference entry 101d8490; body size 33 bytes.
#line 1 "ENTRY_101d8490"

void __fastcall FUN_101d8490(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_101cde00<>(param_1,*(undefined4 *)(iVar1 + 4));
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

__declspec(naked) void FUN_101d8db0(void)

{
  __asm mov eax, dword ptr [ecx + 8]
  __asm mov ecx, dword ptr [eax + 0x3c]
  __asm test ecx, ecx
  __asm je 0x101d8dd0
  __asm mov eax, dword ptr [esp + 4]
  __asm lea edx, [esp + 4]
  __asm push dword ptr [esp + 8]
  __asm mov dword ptr [esp + 8], eax
  __asm mov eax, dword ptr [ecx]
  __asm push edx
  __asm call dword ptr [eax + 8]
  __asm ret 8
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
    ((SCVtbl_2_0*)(piVar1))->v();
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
    ((SCVtbl_2_0*)(piVar1))->v();
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
    ((SCVtbl_2_0*)(piVar1))->v();
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
    ((SCVtbl_2_0*)(piVar1))->v();
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

__declspec(naked) void FUN_101dce30(void)

{
  __asm mov eax, dword ptr [ecx + 8]
  __asm cmp eax, 2
  __asm je 0x101dce40
  __asm cmp eax, 1
  __asm je 0x101dce40
  __asm xor al, al
  __asm ret
  __asm mov al, 1
  __asm ret
}



// Reference entry 101dcef0; body size 24 bytes.
#line 1 "ENTRY_101dcef0"

__declspec(naked) void FUN_101dcef0(void)

{
  __asm mov ecx, dword ptr [ecx + 4]
  __asm test ecx, ecx
  __asm je 0x101dcf05
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x1c]
  __asm call eax
  __asm test al, al
  __asm je 0x101dcf05
  __asm mov al, 1
  __asm ret
  __asm xor al, al
  __asm ret
}



// Reference entry 101dcf50; body size 19 bytes.
#line 1 "ENTRY_101dcf50"

__declspec(naked) void FUN_101dcf50(void)

{
  __asm mov ecx, dword ptr [ecx + 8]
  __asm test ecx, ecx
  __asm je 0x101dcf5e
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x10]
  __asm jmp eax
  __asm xor al, al
  __asm ret 4
}



// Reference entry 101dcf70; body size 17 bytes.
#line 1 "ENTRY_101dcf70"

__declspec(naked) void FUN_101dcf70(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm push offset LAB_1187b054
  __asm call LAB_1008ca83
  __asm ret 4
}



// Reference entry 101dcf90; body size 17 bytes.
#line 1 "ENTRY_101dcf90"

__declspec(naked) void FUN_101dcf90(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm push offset LAB_1187f834
  __asm call LAB_1008ca83
  __asm ret 4
}



// Reference entry 101dd0a0; body size 35 bytes.
#line 1 "ENTRY_101dd0a0"

__declspec(naked) void FUN_101dd0a0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm cmp byte ptr [esi + 0x48], 0
  __asm je 0x101dd0b7
  __asm cmp dword ptr [esi + 0x34], 0
  __asm jne 0x101dd0b7
  __asm lea ecx, [esi - 0x78]
  __asm call LAB_1001c891
  __asm lea ecx, [esi - 0x78]
  __asm call LAB_10094b89
  __asm pop esi
  __asm ret 4
}



// Reference entry 101de5f0; body size 24 bytes.
#line 1 "ENTRY_101de5f0"

__declspec(naked) void FUN_101de5f0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm cmp byte ptr [esi + 4], 0
  __asm jne 0x101de606
  __asm push dword ptr [esi]
  __asm call LAB_10081697
  __asm add esp, 4
  __asm mov byte ptr [esi + 4], al
  __asm pop esi
  __asm ret
}



// Reference entry 101dfc00; body size 54 bytes.
#line 1 "ENTRY_101dfc00"

__declspec(naked) void FUN_101dfc00(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm cmp byte ptr [esi + 0xc2], 0
  __asm jne 0x101dfc1c
  __asm call LAB_100488b0
  __asm test al, al
  __asm jne 0x101dfc1c
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax + 0x5c]
  __asm mov eax, dword ptr [esp + 8]
  __asm test eax, eax
  __asm je 0x101dfc32
  __asm mov ecx, dword ptr [esi + 0xd4]
  __asm push 0
  __asm push eax
  __asm call LAB_10037bc8
  __asm pop esi
  __asm ret 4
}



// Reference entry 101dfd50; body size 25 bytes.
#line 1 "ENTRY_101dfd50"

void __fastcall FUN_101dfd50(undefined4 *param_1)

{
  if (*(char *)(param_1 + 1) != '\0') {
    FUN_112a9d70(*param_1);
    *(undefined1*)(param_1 + 1) = (undefined1)(0);
  }
  return;
}


// Reference entry 101e0b40; body size 60 bytes.
#line 1 "ENTRY_101e0b40"

__declspec(naked) void FUN_101e0b40(void)

{
  __asm sub esp, 0xc
  __asm push esi
  __asm push edi
  __asm push dword ptr [esp + 0x18]
  __asm lea eax, [esp + 0xc]
  __asm mov edi, ecx
  __asm push eax
  __asm call LAB_10020f9a
  __asm mov esi, dword ptr [esp + 0x10]
  __asm cmp byte ptr [esi + 0xd], 0
  __asm jne 0x101e0b72
  __asm mov ecx, dword ptr [esp + 0x18]
  __asm lea edx, [esi + 0x10]
  __asm push edx
  __asm call LAB_10070fbd
  __asm test al, al
  __asm mov eax, esi
  __asm je 0x101e0b74
  __asm mov eax, dword ptr [edi]
  __asm pop edi
  __asm pop esi
  __asm add esp, 0xc
  __asm ret 4
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
    ((SCVtbl_2_0*)(piVar1))->v();
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
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 101e0f70; body size 41 bytes.
#line 1 "ENTRY_101e0f70"

__declspec(naked) void FUN_101e0f70(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x101e0f93
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



// Reference entry 101e1000; body size 24 bytes.
#line 1 "ENTRY_101e1000"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101e1000(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
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
    ((SCVtbl_1_0*)(param_2))->v();
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
    ((SCVtbl_1_0*)(param_2))->v();
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
    ((SCVtbl_1_0*)(param_2))->v();
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
    ((SCVtbl_1_0*)(param_2))->v();
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
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101e1260; body size 60 bytes.
#line 1 "ENTRY_101e1260"

__declspec(naked) void FUN_101e1260(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_114fc720
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ecx]
  __asm test ecx, ecx
  __asm je 0x101e128d
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
}



// Reference entry 101e12c0; body size 60 bytes.
#line 1 "ENTRY_101e12c0"

__declspec(naked) void FUN_101e12c0(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_114fc750
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ecx]
  __asm test ecx, ecx
  __asm je 0x101e12ed
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
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

__declspec(naked) void FUN_101e19d0(void)

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

__declspec(naked) void FUN_101e23d0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x101e23ec
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x101e2402
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
}



// Reference entry 101e2420; body size 61 bytes.
#line 1 "ENTRY_101e2420"

__declspec(naked) void FUN_101e2420(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x101e243c
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x101e2452
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
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
    ((SCVtbl_2_0*)(piVar1))->v();
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
    ((SCVtbl_2_0*)(piVar1))->v();
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
    ((SCVtbl_2_0*)(piVar1))->v();
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
    ((SCVtbl_2_0*)(piVar1))->v();
    *param_1 = (int)(0);
  }
  return;
}


// Reference entry 101e3570; body size 23 bytes.
#line 1 "ENTRY_101e3570"

__declspec(naked) void FUN_101e3570(void)

{
  __asm cmp dword ptr [ecx + 8], 0
  __asm jne 0x101e3584
  __asm push offset LAB_1187db20
  __asm add ecx, 0x10
  __asm call LAB_1008ca83
  __asm ret
  __asm xor al, al
  __asm ret
}



// Reference entry 101e3a60; body size 22 bytes.
#line 1 "ENTRY_101e3a60"

__declspec(naked) void FUN_101e3a60(void)

{
  __asm sub esp, 8
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x2c]
  __asm call eax
  __asm _emit 0xdd __asm _emit 0x1c __asm _emit 0x24 __asm _emit 0xf2 __asm _emit 0x0f __asm _emit 0x2c __asm _emit 0x04 __asm _emit 0x24
  __asm add esp, 8
  __asm ret
}



// Reference entry 101e3f40; body size 44 bytes.
#line 1 "ENTRY_101e3f40"

__declspec(naked) void FUN_101e3f40(void)

{
  __asm cmp dword ptr [ecx + 8], 7
  __asm jne 0x101e3f5f
  __asm mov ecx, dword ptr [ecx + 0x14]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x101e3f59
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
  __asm mov eax, dword ptr [esp + 4]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm ret 4
}



// Reference entry 101e6b50; body size 62 bytes.
#line 1 "ENTRY_101e6b50"

__declspec(naked) void FUN_101e6b50(void)

{
  __asm push ebx
  __asm mov ebx, ecx
  __asm push esi
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x10]
  __asm lea esi, [ebx + 4]
  __asm cmp edi, esi
  __asm je 0x101e6b72
  __asm mov ecx, esi
  __asm call LAB_1005c315
  __asm mov eax, dword ptr [edi]
  __asm mov ecx, esi
  __asm mov dword ptr [esi], eax
  __asm call LAB_1002a973
  __asm mov eax, dword ptr [edi]
  __asm mov ecx, offset LAB_1186d2ee
  __asm test eax, eax
  __asm cmovne ecx, eax
  __asm push ecx
  __asm mov ecx, ebx
  __asm call LAB_1004142f
  __asm pop edi
  __asm pop esi
  __asm mov eax, ebx
  __asm pop ebx
  __asm ret 4
}



// Reference entry 101e6c60; body size 16 bytes.
#line 1 "ENTRY_101e6c60"

undefined4 __stdcall FUN_101e6c60(undefined4 param_1)

{
  thunk_FUN_101e7240<>(param_1);
  return (undefined4)(param_1);
}


// Reference entry 101e6c80; body size 38 bytes.
#line 1 "ENTRY_101e6c80"

__declspec(naked) void FUN_101e6c80(void)

{
  __asm push esi
  __asm push dword ptr [esp + 8]
  __asm mov esi, ecx
  __asm call LAB_1006a9b5
  __asm push dword ptr [esp + 0xc]
  __asm mov ecx, esi
  __asm call LAB_1006a9b5
  __asm push dword ptr [esp + 0x10]
  __asm mov ecx, esi
  __asm call LAB_1006a9b5
  __asm pop esi
  __asm ret 0xc
}



// Reference entry 101e6cb0; body size 27 bytes.
#line 1 "ENTRY_101e6cb0"

__declspec(naked) void FUN_101e6cb0(void)

{
  __asm push esi
  __asm push dword ptr [esp + 8]
  __asm mov esi, ecx
  __asm call LAB_1006a9b5
  __asm push dword ptr [esp + 0xc]
  __asm mov ecx, esi
  __asm call LAB_1006a9b5
  __asm pop esi
  __asm ret 8
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

__declspec(naked) void FUN_101e71e0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x1c]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x101e71f3
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 101e7200; body size 23 bytes.
#line 1 "ENTRY_101e7200"

__declspec(naked) void FUN_101e7200(void)

{
  __asm mov ecx, dword ptr [ecx + 0x1c]
  __asm push dword ptr [esp + 8]
  __asm push dword ptr [esp + 8]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x18]
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 8
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

__declspec(naked) void FUN_101e9b50(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [esi + 4]
  __asm cmp edi, dword ptr [esi + 8]
  __asm je 0x101e9b7c
  __asm mov edx, dword ptr [esp + 0xc]
  __asm mov eax, dword ptr [edx]
  __asm mov dword ptr [edi], eax
  __asm mov ecx, dword ptr [edx + 4]
  __asm mov dword ptr [edi + 4], ecx
  __asm test ecx, ecx
  __asm je 0x101e9b73
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm add dword ptr [esi + 4], 8
  __asm pop edi
  __asm pop esi
  __asm ret 4
  __asm push dword ptr [esp + 0xc]
  __asm push edi
  __asm call LAB_10093847
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 101e9ba0; body size 59 bytes.
#line 1 "ENTRY_101e9ba0"

__declspec(naked) void FUN_101e9ba0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [esi + 4]
  __asm cmp edi, dword ptr [esi + 8]
  __asm je 0x101e9bcc
  __asm mov edx, dword ptr [esp + 0xc]
  __asm mov eax, dword ptr [edx]
  __asm mov dword ptr [edi], eax
  __asm mov ecx, dword ptr [edx + 4]
  __asm mov dword ptr [edi + 4], ecx
  __asm test ecx, ecx
  __asm je 0x101e9bc3
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm add dword ptr [esi + 4], 8
  __asm pop edi
  __asm pop esi
  __asm ret 4
  __asm push dword ptr [esp + 0xc]
  __asm push edi
  __asm call LAB_1008a436
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 101e9e00; body size 41 bytes.
#line 1 "ENTRY_101e9e00"

__declspec(naked) void FUN_101e9e00(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x101e9e23
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



// Reference entry 101e9e90; body size 41 bytes.
#line 1 "ENTRY_101e9e90"

__declspec(naked) void FUN_101e9e90(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x101e9eb3
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



// Reference entry 101e9ed0; body size 24 bytes.
#line 1 "ENTRY_101e9ed0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101e9ed0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
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
    ((SCVtbl_1_0*)(param_2))->v();
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
    ((SCVtbl_1_0*)(param_2))->v();
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
    ((SCVtbl_1_0*)(param_2))->v();
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

__declspec(naked) void FUN_101eae90(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_114fe6c0
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ecx]
  __asm test ecx, ecx
  __asm je 0x101eaebd
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
}



// Reference entry 101eaef0; body size 60 bytes.
#line 1 "ENTRY_101eaef0"

__declspec(naked) void FUN_101eaef0(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_114fe6f0
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ecx]
  __asm test ecx, ecx
  __asm je 0x101eaf1d
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
}



// Reference entry 101eaf50; body size 60 bytes.
#line 1 "ENTRY_101eaf50"

__declspec(naked) void FUN_101eaf50(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_114fe720
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ecx]
  __asm test ecx, ecx
  __asm je 0x101eaf7d
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
}



// Reference entry 101eafb0; body size 60 bytes.
#line 1 "ENTRY_101eafb0"

__declspec(naked) void FUN_101eafb0(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_114fe750
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ecx]
  __asm test ecx, ecx
  __asm je 0x101eafdd
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
}



// Reference entry 101eb0f0; body size 33 bytes.
#line 1 "ENTRY_101eb0f0"

__declspec(naked) void FUN_101eb0f0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x101eb10f
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

__declspec(naked) void FUN_101eb170(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x101eb18f
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

__declspec(naked) void FUN_101ec470(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x101ec48f
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

__declspec(naked) void FUN_101ec800(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x101ec81c
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x101ec832
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
}



// Reference entry 101ec850; body size 61 bytes.
#line 1 "ENTRY_101ec850"

__declspec(naked) void FUN_101ec850(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x101ec86c
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x101ec882
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
}



// Reference entry 101ec8a0; body size 61 bytes.
#line 1 "ENTRY_101ec8a0"

__declspec(naked) void FUN_101ec8a0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x101ec8bc
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x101ec8d2
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
}



// Reference entry 101ec8f0; body size 61 bytes.
#line 1 "ENTRY_101ec8f0"

__declspec(naked) void FUN_101ec8f0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x101ec90c
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x101ec922
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
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

__declspec(naked) void FUN_101edd80(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0xc5 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp ecx, 0x1000
  __asm jb 0x101edda9
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x101eddb6
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret 8
  __asm call dword ptr [LAB_122fc888]
}



// Reference entry 101eddd0; body size 60 bytes.
#line 1 "ENTRY_101eddd0"

__declspec(naked) void FUN_101eddd0(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0xc5 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp ecx, 0x1000
  __asm jb 0x101eddf9
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x101ede06
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret 8
  __asm call dword ptr [LAB_122fc888]
}



// Reference entry 101ee060; body size 28 bytes.
#line 1 "ENTRY_101ee060"

void __fastcall FUN_101ee060(int *param_1)

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

__declspec(naked) void FUN_101f0da0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x7c]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x101f0db3
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 101f1110; body size 32 bytes.
#line 1 "ENTRY_101f1110"

__declspec(naked) void FUN_101f1110(void)

{
  __asm mov ecx, dword ptr [ecx + 0xc]
  __asm mov eax, dword ptr [esp + 8]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov ecx, dword ptr [ecx + eax*8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x101f112a
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 8
}



// Reference entry 101f1140; body size 51 bytes.
#line 1 "ENTRY_101f1140"

__declspec(naked) void FUN_101f1140(void)

{
  __asm push edi
  __asm push dword ptr [esp + 0xc]
  __asm mov edi, ecx
  __asm call LAB_10028c77
  __asm cmp eax, -1
  __asm jne 0x101f115f
  __asm mov eax, dword ptr [esp + 8]
  __asm pop edi
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm ret 8
  __asm mov edx, dword ptr [edi]
  __asm mov ecx, edi
  __asm push eax
  __asm push dword ptr [esp + 0xc]
  __asm call dword ptr [edx + 0x28]
  __asm mov eax, dword ptr [esp + 8]
  __asm pop edi
  __asm ret 8
}



// Reference entry 101f1190; body size 32 bytes.
#line 1 "ENTRY_101f1190"

__declspec(naked) void FUN_101f1190(void)

{
  __asm mov ecx, dword ptr [ecx + 0x2c]
  __asm mov eax, dword ptr [esp + 8]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov ecx, dword ptr [ecx + eax*8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x101f11aa
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 8
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

__declspec(naked) void FUN_101f1680(void)

{
  __asm lea eax, [ecx + 0x4c]
  __asm mov ecx, dword ptr [esp + 4]
  __asm push eax
  __asm call LAB_1007537e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 101f1c60; body size 47 bytes.
#line 1 "ENTRY_101f1c60"

__declspec(naked) void FUN_101f1c60(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, ecx
  __asm cmp byte ptr [esi + 0x89], 0
  __asm jne 0x101f1c8c
  __asm push 0
  __asm push esi
  __asm push ecx
  __asm mov ecx, esp
  __asm mov byte ptr [esi + 0x89], 1
  __asm push offset LAB_1187e87c
  __asm call LAB_1005273e
  __asm lea ecx, [esi + 8]
  __asm call LAB_10013543
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 101f1e90; body size 27 bytes.
#line 1 "ENTRY_101f1e90"

__declspec(naked) void FUN_101f1e90(void)

{
  __asm cmp dword ptr [ecx - 0x18], 0
  __asm je 0x101f1eaa
  __asm mov eax, dword ptr [ecx - 0x28]
  __asm push esi
  __asm lea esi, [ecx - 0x28]
  __asm mov ecx, esi
  __asm call dword ptr [eax + 0x5c]
  __asm mov ecx, esi
  __asm pop esi
  __asm jmp LAB_1008198f
  __asm ret
}



// Reference entry 101f1ed0; body size 27 bytes.
#line 1 "ENTRY_101f1ed0"

__declspec(naked) void FUN_101f1ed0(void)

{
  __asm cmp dword ptr [ecx - 0x18], 0
  __asm je 0x101f1eea
  __asm mov eax, dword ptr [ecx - 0x28]
  __asm push esi
  __asm lea esi, [ecx - 0x28]
  __asm mov ecx, esi
  __asm call dword ptr [eax + 0x58]
  __asm mov ecx, esi
  __asm pop esi
  __asm jmp LAB_1008198f
  __asm ret
}



// Reference entry 101f2090; body size 59 bytes.
#line 1 "ENTRY_101f2090"

__declspec(naked) void FUN_101f2090(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [esi + 4]
  __asm cmp edi, dword ptr [esi + 8]
  __asm je 0x101f20bc
  __asm mov edx, dword ptr [esp + 0xc]
  __asm mov eax, dword ptr [edx]
  __asm mov dword ptr [edi], eax
  __asm mov ecx, dword ptr [edx + 4]
  __asm mov dword ptr [edi + 4], ecx
  __asm test ecx, ecx
  __asm je 0x101f20b3
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm add dword ptr [esi + 4], 8
  __asm pop edi
  __asm pop esi
  __asm ret 4
  __asm push dword ptr [esp + 0xc]
  __asm push edi
  __asm call LAB_10093847
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 101f20e0; body size 59 bytes.
#line 1 "ENTRY_101f20e0"

__declspec(naked) void FUN_101f20e0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [esi + 4]
  __asm cmp edi, dword ptr [esi + 8]
  __asm je 0x101f210c
  __asm mov edx, dword ptr [esp + 0xc]
  __asm mov eax, dword ptr [edx]
  __asm mov dword ptr [edi], eax
  __asm mov ecx, dword ptr [edx + 4]
  __asm mov dword ptr [edi + 4], ecx
  __asm test ecx, ecx
  __asm je 0x101f2103
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm add dword ptr [esi + 4], 8
  __asm pop edi
  __asm pop esi
  __asm ret 4
  __asm push dword ptr [esp + 0xc]
  __asm push edi
  __asm call LAB_1008a436
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 101f2c10; body size 29 bytes.
#line 1 "ENTRY_101f2c10"

__declspec(naked) void FUN_101f2c10(void)

{
  __asm push esi
  __asm push dword ptr [esp + 8]
  __asm mov esi, ecx
  __asm call LAB_10028c77
  __asm cmp eax, -1
  __asm je 0x101f2c29
  __asm push eax
  __asm mov ecx, esi
  __asm call LAB_1000dbed
  __asm pop esi
  __asm ret 4
}



// Reference entry 101f2ea0; body size 42 bytes.
#line 1 "ENTRY_101f2ea0"

__declspec(naked) void FUN_101f2ea0(void)

{
  __asm mov al, byte ptr [esp + 4]
  __asm push esi
  __asm push 0
  __asm push 0
  __asm mov esi, ecx
  __asm push ecx
  __asm mov ecx, esp
  __asm push offset LAB_1187e914
  __asm mov byte ptr [esi + 0x8a], al
  __asm call LAB_1005273e
  __asm lea ecx, [esi + 8]
  __asm call LAB_10013543
  __asm pop esi
  __asm ret 4
}



// Reference entry 101f3600; body size 39 bytes.
#line 1 "ENTRY_101f3600"

__declspec(naked) void FUN_101f3600(void)

{
  __asm push ebx
  __asm mov ebx, ecx
  __asm push esi
  __asm push edi
  __asm xor edi, edi
  __asm mov esi, dword ptr [ebx + 0x2c]
  __asm cmp esi, dword ptr [ebx + 0x30]
  __asm je 0x101f3621
  __asm nop
  __asm mov ecx, dword ptr [esi]
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 0x18]
  __asm add esi, 8
  __asm add edi, eax
  __asm cmp esi, dword ptr [ebx + 0x30]
  __asm jne 0x101f3610
  __asm mov eax, edi
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm ret
}



// Reference entry 101f4100; body size 56 bytes.
#line 1 "ENTRY_101f4100"

__declspec(naked) void FUN_101f4100(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov eax, dword ptr [esi]
  __asm push dword ptr [eax + 4]
  __asm push dword ptr [esp + 0xc]
  __asm call LAB_100189c1
  __asm mov eax, dword ptr [esi]
  __asm pop esi
  __asm mov ecx, dword ptr [eax - 4]
  __asm sub eax, ecx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm jbe 0x101f4127
  __asm call dword ptr [LAB_122fc888]
  __asm push 0x104f
  __asm push ecx
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret 4
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
    ((SCVtbl_2_0*)(piVar1))->v();
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
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101f4540; body size 41 bytes.
#line 1 "ENTRY_101f4540"

__declspec(naked) void FUN_101f4540(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x101f4563
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



// Reference entry 101f45a0; body size 41 bytes.
#line 1 "ENTRY_101f45a0"

__declspec(naked) void FUN_101f45a0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x101f45c3
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

__declspec(naked) void FUN_101f4840(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov eax, dword ptr [esi]
  __asm push dword ptr [eax + 4]
  __asm push esi
  __asm call LAB_100189c1
  __asm mov eax, dword ptr [esi]
  __asm pop esi
  __asm mov ecx, dword ptr [eax - 4]
  __asm sub eax, ecx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm jbe 0x101f4864
  __asm call dword ptr [LAB_122fc888]
  __asm push 0x104f
  __asm push ecx
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret
}



// Reference entry 101f4880; body size 51 bytes.
#line 1 "ENTRY_101f4880"

__declspec(naked) void FUN_101f4880(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov eax, dword ptr [esi]
  __asm push dword ptr [eax + 4]
  __asm push esi
  __asm call LAB_100189c1
  __asm mov eax, dword ptr [esi]
  __asm pop esi
  __asm mov ecx, dword ptr [eax - 4]
  __asm sub eax, ecx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm jbe 0x101f48a4
  __asm call dword ptr [LAB_122fc888]
  __asm push 0x104f
  __asm push ecx
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret
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

__declspec(naked) void FUN_101f54e0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x101f54fc
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x101f5512
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
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
    ((SCVtbl_2_0*)(piVar1))->v();
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

__declspec(naked) void FUN_101f55f0(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0xc5 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp ecx, 0x1000
  __asm jb 0x101f5619
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x101f5626
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret 8
  __asm call dword ptr [LAB_122fc888]
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
  ((SCVtbl_12_3*)(param_1))->v((int)(param_2),(int)(param_3),(int)(0));
  return;
}


// Reference entry 101f9fd0; body size 41 bytes.
#line 1 "ENTRY_101f9fd0"

__declspec(naked) void FUN_101f9fd0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x101f9ff3
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



// Reference entry 101fa010; body size 41 bytes.
#line 1 "ENTRY_101fa010"

__declspec(naked) void FUN_101fa010(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x101fa033
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



// Reference entry 101fa050; body size 24 bytes.
#line 1 "ENTRY_101fa050"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101fa050(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
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

__declspec(naked) void FUN_101fa610(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_115018a0
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ecx]
  __asm test ecx, ecx
  __asm je 0x101fa63d
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
}



// Reference entry 101fa670; body size 60 bytes.
#line 1 "ENTRY_101fa670"

__declspec(naked) void FUN_101fa670(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_115018d0
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ecx]
  __asm test ecx, ecx
  __asm je 0x101fa69d
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
}



// Reference entry 101fa6d0; body size 33 bytes.
#line 1 "ENTRY_101fa6d0"

__declspec(naked) void FUN_101fa6d0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x101fa6ef
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



// Reference entry 101fa700; body size 33 bytes.
#line 1 "ENTRY_101fa700"

__declspec(naked) void FUN_101fa700(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x101fa71f
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



// Reference entry 101fa760; body size 33 bytes.
#line 1 "ENTRY_101fa760"

__declspec(naked) void FUN_101fa760(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x101fa77f
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



// Reference entry 101fa790; body size 33 bytes.
#line 1 "ENTRY_101fa790"

__declspec(naked) void FUN_101fa790(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x101fa7af
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

__declspec(naked) void FUN_101faae0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x2c]
  __asm push edi
  __asm lea edi, [esi + 8]
  __asm test ecx, ecx
  __asm je 0x101fab03
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, edi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test byte ptr [esp + 0xc], 1
  __asm je 0x101fab15
  __asm push 0x30
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm pop edi
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
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

__declspec(naked) void FUN_101faec0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x2c]
  __asm push edi
  __asm lea edi, [esi + 8]
  __asm test ecx, ecx
  __asm je 0x101faee3
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, edi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm cmp byte ptr [esp + 0xc], 0
  __asm je 0x101faef5
  __asm push 0x30
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 101faf10; body size 39 bytes.
#line 1 "ENTRY_101faf10"

__declspec(naked) void FUN_101faf10(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov ecx, dword ptr [ecx + 0x2c]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [esp + 4], eax
  __asm test ecx, ecx
  __asm je 0x101faf32
  __asm push dword ptr [esp + 8]
  __asm mov eax, dword ptr [ecx]
  __asm lea edx, [esp + 8]
  __asm push edx
  __asm call dword ptr [eax + 8]
  __asm ret 8
  __asm call LAB_1148a05a
}



// Reference entry 101fb0a0; body size 33 bytes.
#line 1 "ENTRY_101fb0a0"

__declspec(naked) void FUN_101fb0a0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x101fb0bf
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



// Reference entry 101fb0d0; body size 33 bytes.
#line 1 "ENTRY_101fb0d0"

__declspec(naked) void FUN_101fb0d0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x101fb0ef
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



// Reference entry 101fb370; body size 35 bytes.
#line 1 "ENTRY_101fb370"

__declspec(naked) void FUN_101fb370(void)

{
  __asm mov eax, dword ptr [ecx + 8]
  __asm mov ecx, dword ptr [eax + 0x3c]
  __asm test ecx, ecx
  __asm je 0x101fb390
  __asm mov eax, dword ptr [esp + 4]
  __asm lea edx, [esp + 4]
  __asm push dword ptr [esp + 8]
  __asm mov dword ptr [esp + 8], eax
  __asm mov eax, dword ptr [ecx]
  __asm push edx
  __asm call dword ptr [eax + 8]
  __asm ret 8
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

__declspec(naked) void FUN_101fb5a0(void)

{
  __asm call LAB_1001c9c2
  __asm mov ecx, dword ptr [esp + 4]
  __asm mov eax, dword ptr [eax + 0x4c]
  __asm add eax, 0x20
  __asm push eax
  __asm call LAB_10036c23
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 101fc380; body size 22 bytes.
#line 1 "ENTRY_101fc380"

__declspec(naked) void FUN_101fc380(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm test eax, eax
  __asm je 0x101fc393
  __asm mov ecx, dword ptr [ecx + 0x28]
  __asm push 0
  __asm push eax
  __asm call LAB_10037bc8
  __asm ret 4
}



// Reference entry 101fc3a0; body size 23 bytes.
#line 1 "ENTRY_101fc3a0"

__declspec(naked) void FUN_101fc3a0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm test eax, eax
  __asm je 0x101fc3b4
  __asm mov ecx, dword ptr [ecx + 0x28]
  __asm mov dword ptr [esp + 4], eax
  __asm jmp LAB_100373d5
  __asm ret 4
}



// Reference entry 101fdb20; body size 33 bytes.
#line 1 "ENTRY_101fdb20"

void __thiscall Recovered_Bulk::m_FUN_101fdb20(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_101fdb50((int)(param_2),(int)(*(undefined4 *)(*param_1 + 4)));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 101fdc40; body size 60 bytes.
#line 1 "ENTRY_101fdc40"

__declspec(naked) void FUN_101fdc40(void)

{
  __asm sub esp, 0xc
  __asm push esi
  __asm push edi
  __asm push dword ptr [esp + 0x18]
  __asm lea eax, [esp + 0xc]
  __asm mov edi, ecx
  __asm push eax
  __asm call LAB_100904df
  __asm mov esi, dword ptr [esp + 0x10]
  __asm cmp byte ptr [esi + 0xd], 0
  __asm jne 0x101fdc72
  __asm mov ecx, dword ptr [esp + 0x18]
  __asm lea edx, [esi + 0x10]
  __asm push edx
  __asm call LAB_10071b61
  __asm test al, al
  __asm mov eax, esi
  __asm je 0x101fdc74
  __asm mov eax, dword ptr [edi]
  __asm pop edi
  __asm pop esi
  __asm add esp, 0xc
  __asm ret 4
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
    ((SCVtbl_2_0*)(piVar1))->v();
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
    ((SCVtbl_2_0*)(piVar1))->v();
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
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101fe850; body size 41 bytes.
#line 1 "ENTRY_101fe850"

__declspec(naked) void FUN_101fe850(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x101fe873
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



// Reference entry 101fe8f0; body size 41 bytes.
#line 1 "ENTRY_101fe8f0"

__declspec(naked) void FUN_101fe8f0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x101fe913
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



// Reference entry 101fe930; body size 41 bytes.
#line 1 "ENTRY_101fe930"

__declspec(naked) void FUN_101fe930(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x101fe953
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



// Reference entry 101fe970; body size 41 bytes.
#line 1 "ENTRY_101fe970"

__declspec(naked) void FUN_101fe970(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x101fe993
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



// Reference entry 101fe9b0; body size 41 bytes.
#line 1 "ENTRY_101fe9b0"

__declspec(naked) void FUN_101fe9b0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x101fe9d3
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



// Reference entry 101fe9f0; body size 41 bytes.
#line 1 "ENTRY_101fe9f0"

__declspec(naked) void FUN_101fe9f0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x101fea13
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



// Reference entry 101fea50; body size 41 bytes.
#line 1 "ENTRY_101fea50"

__declspec(naked) void FUN_101fea50(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x101fea73
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



// Reference entry 101fead0; body size 41 bytes.
#line 1 "ENTRY_101fead0"

__declspec(naked) void FUN_101fead0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x101feaf3
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



// Reference entry 101feb30; body size 41 bytes.
#line 1 "ENTRY_101feb30"

__declspec(naked) void FUN_101feb30(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x101feb53
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



// Reference entry 101feb70; body size 41 bytes.
#line 1 "ENTRY_101feb70"

__declspec(naked) void FUN_101feb70(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x101feb93
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



// Reference entry 101febb0; body size 41 bytes.
#line 1 "ENTRY_101febb0"

__declspec(naked) void FUN_101febb0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x101febd3
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



// Reference entry 101fec10; body size 41 bytes.
#line 1 "ENTRY_101fec10"

__declspec(naked) void FUN_101fec10(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x101fec33
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



// Reference entry 101fec50; body size 41 bytes.
#line 1 "ENTRY_101fec50"

__declspec(naked) void FUN_101fec50(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x101fec73
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



// Reference entry 101fec90; body size 41 bytes.
#line 1 "ENTRY_101fec90"

__declspec(naked) void FUN_101fec90(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x101fecb3
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



// Reference entry 101fecd0; body size 41 bytes.
#line 1 "ENTRY_101fecd0"

__declspec(naked) void FUN_101fecd0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x101fecf3
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



// Reference entry 101fed10; body size 41 bytes.
#line 1 "ENTRY_101fed10"

__declspec(naked) void FUN_101fed10(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x101fed33
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



// Reference entry 101fed50; body size 41 bytes.
#line 1 "ENTRY_101fed50"

__declspec(naked) void FUN_101fed50(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x101fed73
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



// Reference entry 101fedb0; body size 41 bytes.
#line 1 "ENTRY_101fedb0"

__declspec(naked) void FUN_101fedb0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x101fedd3
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



// Reference entry 101fee30; body size 24 bytes.
#line 1 "ENTRY_101fee30"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101fee30(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
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
    ((SCVtbl_1_0*)(param_2))->v();
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
    ((SCVtbl_1_0*)(param_2))->v();
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
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101fef30; body size 48 bytes.
#line 1 "ENTRY_101fef30"

__declspec(naked) void FUN_101fef30(void)

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

__declspec(naked) void FUN_10202680(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_11503320
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ecx]
  __asm test ecx, ecx
  __asm je 0x102026ad
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
}



// Reference entry 102026e0; body size 60 bytes.
#line 1 "ENTRY_102026e0"

__declspec(naked) void FUN_102026e0(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_11503350
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ecx]
  __asm test ecx, ecx
  __asm je 0x1020270d
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
}



// Reference entry 10202740; body size 60 bytes.
#line 1 "ENTRY_10202740"

__declspec(naked) void FUN_10202740(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_11503380
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ecx]
  __asm test ecx, ecx
  __asm je 0x1020276d
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
}



// Reference entry 102027a0; body size 60 bytes.
#line 1 "ENTRY_102027a0"

__declspec(naked) void FUN_102027a0(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_115033b0
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ecx]
  __asm test ecx, ecx
  __asm je 0x102027cd
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
}



// Reference entry 10202800; body size 60 bytes.
#line 1 "ENTRY_10202800"

__declspec(naked) void FUN_10202800(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_115033e0
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ecx]
  __asm test ecx, ecx
  __asm je 0x1020282d
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
}



// Reference entry 10202860; body size 60 bytes.
#line 1 "ENTRY_10202860"

__declspec(naked) void FUN_10202860(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_11503410
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ecx]
  __asm test ecx, ecx
  __asm je 0x1020288d
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
}



// Reference entry 102028c0; body size 60 bytes.
#line 1 "ENTRY_102028c0"

__declspec(naked) void FUN_102028c0(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_11503440
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ecx]
  __asm test ecx, ecx
  __asm je 0x102028ed
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
}



// Reference entry 10202920; body size 60 bytes.
#line 1 "ENTRY_10202920"

__declspec(naked) void FUN_10202920(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_11503470
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ecx]
  __asm test ecx, ecx
  __asm je 0x1020294d
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
}



// Reference entry 10202980; body size 60 bytes.
#line 1 "ENTRY_10202980"

__declspec(naked) void FUN_10202980(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_115034a0
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ecx]
  __asm test ecx, ecx
  __asm je 0x102029ad
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
}



// Reference entry 102029e0; body size 60 bytes.
#line 1 "ENTRY_102029e0"

__declspec(naked) void FUN_102029e0(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_115034d0
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ecx]
  __asm test ecx, ecx
  __asm je 0x10202a0d
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
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
  thunk_FUN_101fdb50((int)(param_1),(int)(*(undefined4 *)(*param_1 + 4)));
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
  thunk_FUN_101fdb50((int)(param_1),(int)(*(undefined4 *)(*param_1 + 4)));
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

__declspec(naked) void FUN_102036a0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm lea ecx, [esi + 0x100]
  __asm call LAB_1004e904
  __asm mov ecx, esi
  __asm pop esi
  __asm jmp LAB_10002171
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
  thunk_FUN_111c0af0<>();
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

__declspec(naked) void FUN_10205ab0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm lea ecx, [esi + 0x100]
  __asm call LAB_1004e904
  __asm mov ecx, esi
  __asm call LAB_10002171
  __asm test byte ptr [esp + 8], 1
  __asm je 0x10205ada
  __asm push 0x108
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
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

__declspec(naked) void FUN_10206bc0(void)

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

__declspec(naked) void FUN_102072c0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov eax, dword ptr [esi]
  __asm call dword ptr [eax + 0x54]
  __asm cmp eax, 1
  __asm jne 0x102072dc
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax + 0x5c]
  __asm pop esi
  __asm mov eax, dword ptr [eax + 0x1e8]
  __asm ret
  __asm mov eax, 0xff
  __asm pop esi
  __asm ret
}



// Reference entry 10207310; body size 32 bytes.
#line 1 "ENTRY_10207310"

__declspec(naked) void FUN_10207310(void)

{
  __asm mov eax, ecx
  __asm mov ecx, dword ptr [esp + 4]
  __asm test ecx, ecx
  __asm je 0x1020732d
  __asm mov byte ptr [eax + 0x274], 1
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x24]
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 0x30]
  __asm ret 4
}



// Reference entry 10207470; body size 61 bytes.
#line 1 "ENTRY_10207470"

__declspec(naked) void FUN_10207470(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x1020748c
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x102074a2
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
}



// Reference entry 102074c0; body size 61 bytes.
#line 1 "ENTRY_102074c0"

__declspec(naked) void FUN_102074c0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x102074dc
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x102074f2
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
}



// Reference entry 10207510; body size 61 bytes.
#line 1 "ENTRY_10207510"

__declspec(naked) void FUN_10207510(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x1020752c
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10207542
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
}



// Reference entry 10207560; body size 61 bytes.
#line 1 "ENTRY_10207560"

__declspec(naked) void FUN_10207560(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x1020757c
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10207592
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
}



// Reference entry 102075b0; body size 61 bytes.
#line 1 "ENTRY_102075b0"

__declspec(naked) void FUN_102075b0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x102075cc
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x102075e2
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
}



// Reference entry 10207600; body size 61 bytes.
#line 1 "ENTRY_10207600"

__declspec(naked) void FUN_10207600(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x1020761c
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10207632
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
}



// Reference entry 10207650; body size 61 bytes.
#line 1 "ENTRY_10207650"

__declspec(naked) void FUN_10207650(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x1020766c
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10207682
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
}



// Reference entry 102076a0; body size 61 bytes.
#line 1 "ENTRY_102076a0"

__declspec(naked) void FUN_102076a0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x102076bc
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x102076d2
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
}



// Reference entry 102076f0; body size 61 bytes.
#line 1 "ENTRY_102076f0"

__declspec(naked) void FUN_102076f0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x1020770c
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10207722
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
}



// Reference entry 10207740; body size 61 bytes.
#line 1 "ENTRY_10207740"

__declspec(naked) void FUN_10207740(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x1020775c
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10207772
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
}



// Reference entry 10207790; body size 61 bytes.
#line 1 "ENTRY_10207790"

__declspec(naked) void FUN_10207790(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x102077ac
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x102077c2
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
}



// Reference entry 102077e0; body size 61 bytes.
#line 1 "ENTRY_102077e0"

__declspec(naked) void FUN_102077e0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x102077fc
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10207812
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
}



// Reference entry 10207830; body size 61 bytes.
#line 1 "ENTRY_10207830"

__declspec(naked) void FUN_10207830(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x1020784c
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10207862
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
}



// Reference entry 10207880; body size 61 bytes.
#line 1 "ENTRY_10207880"

__declspec(naked) void FUN_10207880(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x1020789c
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x102078b2
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
}



// Reference entry 102078d0; body size 61 bytes.
#line 1 "ENTRY_102078d0"

__declspec(naked) void FUN_102078d0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x102078ec
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10207902
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
}



// Reference entry 10207920; body size 61 bytes.
#line 1 "ENTRY_10207920"

__declspec(naked) void FUN_10207920(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x1020793c
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10207952
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
}



// Reference entry 10207970; body size 61 bytes.
#line 1 "ENTRY_10207970"

__declspec(naked) void FUN_10207970(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x1020798c
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x102079a2
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
}



// Reference entry 102079c0; body size 61 bytes.
#line 1 "ENTRY_102079c0"

__declspec(naked) void FUN_102079c0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x102079dc
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x102079f2
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
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
    ((SCVtbl_2_0*)(piVar1))->v();
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
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 10207b90; body size 55 bytes.
#line 1 "ENTRY_10207b90"

__declspec(naked) void FUN_10207b90(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm mov eax, 7
  __asm test ecx, ecx
  __asm je 0x10207bc6
  __asm mov ecx, dword ptr [ecx + 4]
  __asm cmp ecx, 9
  __asm ja 0x10207bc6
  __asm jmp dword ptr [ecx*4 + LAB_10207bc8]
  __asm xor eax, eax
  __asm ret
  __asm mov eax, 1
  __asm ret
  __asm mov eax, 2
  __asm ret
  __asm mov eax, 3
  __asm ret
  __asm mov eax, 4
  __asm ret
}



// Reference entry 10207c10; body size 48 bytes.
#line 1 "ENTRY_10207c10"

__declspec(naked) void FUN_10207c10(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm mov eax, 7
  __asm cmp ecx, 9
  __asm ja 0x10207c3f
  __asm jmp dword ptr [ecx*4 + LAB_10207c40]
  __asm xor eax, eax
  __asm ret
  __asm mov eax, 1
  __asm ret
  __asm mov eax, 2
  __asm ret
  __asm mov eax, 3
  __asm ret
  __asm mov eax, 4
  __asm ret
}



// Reference entry 10207fd0; body size 25 bytes.
#line 1 "ENTRY_10207fd0"

__declspec(naked) void FUN_10207fd0(void)

{
  __asm mov eax, dword ptr [ecx - 0x118]
  __asm add ecx, 0xfffffee8
  __asm push dword ptr [esp + 0x14]
  __asm call dword ptr [eax + 0xe4]
  __asm ret 0x14
}



// Reference entry 10208000; body size 16 bytes.
#line 1 "ENTRY_10208000"

__declspec(naked) void FUN_10208000(void)

{
  __asm push dword ptr [esp + 0x18]
  __asm mov eax, dword ptr [ecx]
  __asm push dword ptr [esp + 0x18]
  __asm call dword ptr [eax + 8]
  __asm ret 0x18
}



// Reference entry 10208020; body size 34 bytes.
#line 1 "ENTRY_10208020"

void __thiscall Recovered_Bulk::m_FUN_10208020(undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)
{
  int *param_1 = (int *)this;
  ((SCVtbl_3_6*)(param_1))->v((int)(*param_2),(int)(param_3),(int)(param_4),(int)(param_5),(int)(param_7),(int)(param_8));
  return;
}


// Reference entry 102088d0; body size 18 bytes.
#line 1 "ENTRY_102088d0"

__declspec(naked) void FUN_102088d0(void)

{
  __asm mov eax, dword ptr [ecx + 0x74]
  __asm test eax, eax
  __asm je 0x102088df
  __asm cmp byte ptr [eax], 0
  __asm je 0x102088df
  __asm mov al, 1
  __asm ret
  __asm xor al, al
  __asm ret
}



// Reference entry 10208c50; body size 20 bytes.
#line 1 "ENTRY_10208c50"

__declspec(naked) void FUN_10208c50(void)

{
  __asm mov eax, dword ptr [ecx - 0x3c]
  __asm add ecx, -0x3c
  __asm mov eax, dword ptr [eax + 0xdc]
  __asm call eax
  __asm test al, al
  __asm sete al
  __asm ret
}



// Reference entry 10208c80; body size 30 bytes.
#line 1 "ENTRY_10208c80"

__declspec(naked) void FUN_10208c80(void)

{
  __asm mov eax, dword ptr [ecx + 0x58]
  __asm mov edx, dword ptr [eax*4 + LAB_122f5650]
  __asm test edx, edx
  __asm je 0x10208c9d
  __asm mov eax, dword ptr [ecx + 0xc]
  __asm test eax, eax
  __asm je 0x10208c9d
  __asm push eax
  __asm mov ecx, edx
  __asm call LAB_10047adc
  __asm ret
}



// Reference entry 10208df0; body size 61 bytes.
#line 1 "ENTRY_10208df0"

__declspec(naked) void FUN_10208df0(void)

{
  __asm sub esp, 0xc
  __asm lea eax, [esp]
  __asm push dword ptr [esp + 0x10]
  __asm push eax
  __asm call LAB_100904df
  __asm mov eax, dword ptr [eax + 8]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm jne 0x10208e25
  __asm mov ecx, dword ptr [esp + 0x10]
  __asm add eax, 0x10
  __asm push eax
  __asm call LAB_10071b61
  __asm test al, al
  __asm jne 0x10208e25
  __asm mov eax, 1
  __asm add esp, 0xc
  __asm ret 4
  __asm xor eax, eax
  __asm add esp, 0xc
  __asm ret 4
}



// Reference entry 1020a070; body size 60 bytes.
#line 1 "ENTRY_1020a070"

__declspec(naked) void FUN_1020a070(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0x85 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp ecx, 0x1000
  __asm jb 0x1020a099
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x1020a0a6
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret 8
  __asm call dword ptr [LAB_122fc888]
}



// Reference entry 1020a260; body size 55 bytes.
#line 1 "ENTRY_1020a260"

__declspec(naked) void FUN_1020a260(void)

{
  __asm push edi
  __asm mov edi, ecx
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm push offset LAB_1186d97c
  __asm call LAB_1002b855
  __asm test al, al
  __asm je 0x1020a293
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm push offset LAB_1188086c
  __asm call LAB_1008ca83
  __asm test al, al
  __asm je 0x1020a293
  __asm mov ecx, dword ptr [edi + 8]
  __asm push dword ptr [esp + 8]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm pop edi
  __asm ret 8
}



// Reference entry 1020a2b0; body size 55 bytes.
#line 1 "ENTRY_1020a2b0"

__declspec(naked) void FUN_1020a2b0(void)

{
  __asm push edi
  __asm mov edi, ecx
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm push offset LAB_1186f434
  __asm call LAB_1002b855
  __asm test al, al
  __asm je 0x1020a2e3
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm push offset LAB_1187f604
  __asm call LAB_1008ca83
  __asm test al, al
  __asm je 0x1020a2e3
  __asm mov ecx, dword ptr [edi + 8]
  __asm push dword ptr [esp + 8]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm pop edi
  __asm ret 8
}



// Reference entry 1020a300; body size 36 bytes.
#line 1 "ENTRY_1020a300"

__declspec(naked) void FUN_1020a300(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov edx, dword ptr [esi + 0x2c]
  __asm lea eax, [esi + 0x2c]
  __asm test edx, edx
  __asm je 0x1020a31b
  __asm cmp byte ptr [edx], 0
  __asm je 0x1020a31b
  __asm mov cl, 1
  __asm test cl, cl
  __asm cmove eax, esi
  __asm pop esi
  __asm ret
  __asm xor cl, cl
  __asm test cl, cl
  __asm cmove eax, esi
  __asm pop esi
  __asm ret
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
    ((SCVtbl_2_0*)(piVar1))->v();
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
    ((SCVtbl_2_0*)(piVar1))->v();
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
    ((SCVtbl_2_0*)(piVar1))->v();
    *param_1 = (int)(0);
  }
  return;
}


// Reference entry 1020a550; body size 36 bytes.
#line 1 "ENTRY_1020a550"

__declspec(naked) void FUN_1020a550(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov eax, dword ptr [esi]
  __asm mov eax, dword ptr [eax + 0xfc]
  __asm call eax
  __asm test al, al
  __asm jne 0x1020a56c
  __asm push dword ptr [esp + 8]
  __asm mov ecx, esi
  __asm call LAB_1006c84b
  __asm mov byte ptr [esi + 0x41], 0
  __asm pop esi
  __asm ret 4
}



// Reference entry 1020a5b0; body size 37 bytes.
#line 1 "ENTRY_1020a5b0"

__declspec(naked) void FUN_1020a5b0(void)

{
  __asm push esi
  __asm push dword ptr [esp + 8]
  __asm mov esi, ecx
  __asm push esi
  __asm push ecx
  __asm mov ecx, esp
  __asm push offset LAB_11880164
  __asm call LAB_1005273e
  __asm lea ecx, [esi + 8]
  __asm call LAB_10013543
  __asm mov byte ptr [esi + 0x41], 0
  __asm pop esi
  __asm ret 4
}



// Reference entry 1020a5e0; body size 35 bytes.
#line 1 "ENTRY_1020a5e0"

__declspec(naked) void FUN_1020a5e0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov eax, dword ptr [esi]
  __asm mov eax, dword ptr [eax + 0x94]
  __asm call eax
  __asm test al, al
  __asm jne 0x1020a5f3
  __asm pop esi
  __asm ret
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 0
  __asm call dword ptr [eax + 0x110]
  __asm mov al, 1
  __asm pop esi
  __asm ret
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

__declspec(naked) void FUN_1020a640(void)

{
  __asm mov eax, dword ptr [ecx]
  __asm push 0
  __asm push 8
  __asm push dword ptr [esp + 0xc]
  __asm call dword ptr [eax + 0x50]
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 1020a660; body size 50 bytes.
#line 1 "ENTRY_1020a660"

__declspec(naked) void FUN_1020a660(void)

{
  __asm mov edx, dword ptr [ecx + 0x10]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm test edx, edx
  __asm je 0x1020a67e
  __asm push dword ptr [esp + 0xc]
  __asm mov eax, dword ptr [edx]
  __asm mov ecx, edx
  __asm push esi
  __asm call dword ptr [eax + 0x34]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 8
  __asm mov ecx, dword ptr [ecx + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x1020a68c
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 8
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

__declspec(naked) void FUN_1020bea0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x68]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x1020beb3
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 1020bfe0; body size 20 bytes.
#line 1 "ENTRY_1020bfe0"

__declspec(naked) void FUN_1020bfe0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x1c]
  __asm test ecx, ecx
  __asm je 0x1020bfec
  __asm mov eax, dword ptr [ecx]
  __asm jmp dword ptr [eax + 0x38]
  __asm mov eax, 7
  __asm ret 4
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

__declspec(naked) void FUN_1020d730(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm lea ecx, [esi + 0x178]
  __asm call LAB_1003986a
  __asm push eax
  __asm lea eax, [esi + 0xb8]
  __asm push eax
  __asm lea eax, [esi + 0xd4]
  __asm push eax
  __asm call LAB_10218f20
  __asm add esp, 0xc
  __asm pop esi
  __asm ret
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

__declspec(naked) void FUN_1020dba0(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push edi
  __asm lea edi, [ecx + 0x20]
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

__declspec(naked) void FUN_1020dc00(void)

{
  __asm mov ecx, dword ptr [ecx + 0x1c]
  __asm test ecx, ecx
  __asm je 0x1020dc0c
  __asm mov eax, dword ptr [ecx]
  __asm jmp dword ptr [eax + 0x18]
  __asm xor eax, eax
  __asm ret 4
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

__declspec(naked) void FUN_10210320(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm test eax, eax
  __asm je 0x10210331
  __asm mov dword ptr [esp + 4], eax
  __asm jmp LAB_1004cb77
  __asm mov eax, dword ptr [ecx + 0x1dc]
  __asm sub eax, dword ptr [ecx + 0x1d8]
  __asm sar eax, 2
  __asm ret 4
  __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc
  __asm mov eax, dword ptr [ecx + 0xc118]
  __asm ret
  __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc
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

__declspec(naked) void FUN_102106d0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm test eax, eax
  __asm je 0x102106e1
  __asm mov dword ptr [esp + 4], eax
  __asm jmp LAB_10078150
  __asm push dword ptr [esp + 8]
  __asm call LAB_1000db57
  __asm ret 8
}



// Reference entry 10210ad0; body size 46 bytes.
#line 1 "ENTRY_10210ad0"

undefined4 __stdcall FUN_10210ad0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4){
  if (param_2 != 0) {
    thunk_FUN_104d8c80((int)(param_1),(int)(param_2),(int)(param_3),(int)(param_4));
    return (undefined4)(param_1);
  }
  thunk_FUN_10218910((int)(param_1),(int)(param_3),(int)(param_4));
  return (undefined4)(param_1);
}


// Reference entry 10210fc0; body size 20 bytes.
#line 1 "ENTRY_10210fc0"

__declspec(naked) void FUN_10210fc0(void)

{
  __asm mov eax, dword ptr [ecx]
  __asm push 0
  __asm push 4
  __asm push dword ptr [esp + 0xc]
  __asm call dword ptr [eax + 0x50]
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 102111d0; body size 20 bytes.
#line 1 "ENTRY_102111d0"

__declspec(naked) void FUN_102111d0(void)

{
  __asm mov eax, dword ptr [ecx]
  __asm push 0
  __asm push 0
  __asm push dword ptr [esp + 0xc]
  __asm call dword ptr [eax + 0x50]
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
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

__declspec(naked) void FUN_10216ec0(void)

{
  __asm mov eax, dword ptr [ecx]
  __asm push 0
  __asm push 5
  __asm push dword ptr [esp + 0xc]
  __asm call dword ptr [eax + 0x50]
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10217320; body size 17 bytes.
#line 1 "ENTRY_10217320"

__declspec(naked) void FUN_10217320(void)

{
  __asm mov ecx, dword ptr [ecx + 0x1c]
  __asm test ecx, ecx
  __asm je 0x1021732c
  __asm mov eax, dword ptr [ecx]
  __asm jmp dword ptr [eax + 0x3c]
  __asm xor eax, eax
  __asm ret 4
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

__declspec(naked) void FUN_10217a70(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm xor eax, eax
  __asm cmp ecx, 7
  __asm ja 0x10217aa2
  __asm jmp dword ptr [ecx*4 + LAB_10217aa4]
  __asm xor eax, eax
  __asm ret
  __asm mov eax, 1
  __asm ret
  __asm mov eax, 2
  __asm ret
  __asm mov eax, 3
  __asm ret
  __asm mov eax, 4
  __asm ret
  __asm mov eax, 5
  __asm ret
}



// Reference entry 10217c30; body size 63 bytes.
#line 1 "ENTRY_10217c30"

__declspec(naked) void FUN_10217c30(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov eax, dword ptr [esi + 0x1c]
  __asm test eax, eax
  __asm je 0x10217c69
  __asm cmp byte ptr [eax], 0
  __asm je 0x10217c69
  __asm push eax
  __asm call LAB_10025360
  __asm add esp, 4
  __asm test al, al
  __asm jne 0x10217c69
  __asm lea eax, [esi + 8]
  __asm push offset LAB_11885c7c
  __asm push eax
  __asm call LAB_10080ed1
  __asm add esp, 8
  __asm test al, al
  __asm jne 0x10217c69
  __asm mov al, 1
  __asm pop esi
  __asm ret 4
  __asm xor al, al
  __asm pop esi
  __asm ret 4
}



// Reference entry 10219030; body size 20 bytes.
#line 1 "ENTRY_10219030"

__declspec(naked) void FUN_10219030(void)

{
  __asm lea eax, [ecx + 0x64]
  __asm mov ecx, dword ptr [esp + 4]
  __asm push eax
  __asm call LAB_1005fd67
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10219050; body size 20 bytes.
#line 1 "ENTRY_10219050"

__declspec(naked) void FUN_10219050(void)

{
  __asm lea eax, [ecx + 0x58]
  __asm mov ecx, dword ptr [esp + 4]
  __asm push eax
  __asm call LAB_1005fd67
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10219a00; body size 54 bytes.
#line 1 "ENTRY_10219a00"

__declspec(naked) void FUN_10219a00(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov ecx, esi
  __asm call LAB_1001c887
  __asm test al, al
  __asm jne 0x10219a30
  __asm test byte ptr [esi + 0x6e], 1
  __asm je 0x10219a2a
  __asm call LAB_1000e23c
  __asm test eax, eax
  __asm je 0x10219a2a
  __asm mov edx, dword ptr [eax]
  __asm mov ecx, eax
  __asm call dword ptr [edx + 0x24]
  __asm _emit 0xa8 __asm _emit 0x01
  __asm jne 0x10219a30
  __asm xor al, al
  __asm pop esi
  __asm ret 4
  __asm mov al, 1
  __asm pop esi
  __asm ret 4
}



// Reference entry 10219bd0; body size 20 bytes.
#line 1 "ENTRY_10219bd0"

__declspec(naked) void FUN_10219bd0(void)

{
  __asm lea eax, [ecx + 0xb8]
  __asm push eax
  __asm call LAB_1006653b
  __asm mov ecx, eax
  __asm call LAB_10028740
  __asm ret
}



// Reference entry 10219c50; body size 19 bytes.
#line 1 "ENTRY_10219c50"

__declspec(naked) void FUN_10219c50(void)

{
  __asm mov ecx, dword ptr [ecx + 0x1c]
  __asm test ecx, ecx
  __asm je 0x10219c5e
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x24]
  __asm jmp eax
  __asm mov al, 1
  __asm ret 4
}



// Reference entry 10219f60; body size 17 bytes.
#line 1 "ENTRY_10219f60"

__declspec(naked) void FUN_10219f60(void)

{
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x64]
  __asm mov ecx, 0x3e8
  __asm cmp ax, cx
  __asm sete al
  __asm ret
}



// Reference entry 1021aa00; body size 44 bytes.
#line 1 "ENTRY_1021aa00"

__declspec(naked) void FUN_1021aa00(void)

{
  __asm push ebx
  __asm push ebp
  __asm push esi
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x14]
  __asm mov esi, ecx
  __asm lea eax, [edi - 9]
  __asm cmp eax, 3
  __asm ja LAB_1021ab6c
  __asm jmp dword ptr [eax*4 + LAB_1021ab7c]
  __asm mov eax, dword ptr [esi + 0x1ac]
  __asm test eax, eax
  __asm je 0x1021aa30
  __asm cmp byte ptr [eax], 0
  __asm _emit 0x0f __asm _emit 0x85
}



// Reference entry 1021adf0; body size 44 bytes.
#line 1 "ENTRY_1021adf0"

__declspec(naked) void FUN_1021adf0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov eax, dword ptr [esi]
  __asm call dword ptr [eax + 0x54]
  __asm cmp eax, 1
  __asm jne 0x1021ae18
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax + 0x5c]
  __asm movzx eax, word ptr [eax + 4]
  __asm and eax, 0x7f
  __asm dec eax
  __asm and eax, 0xfffffffe
  __asm cmp eax, 6
  __asm jne 0x1021ae18
  __asm mov al, 1
  __asm pop esi
  __asm ret
  __asm xor al, al
  __asm pop esi
  __asm ret
}



// Reference entry 1021b1c0; body size 45 bytes.
#line 1 "ENTRY_1021b1c0"

__declspec(naked) void FUN_1021b1c0(void)

{
  __asm push esi
  __asm lea esi, [ecx + 0xb8]
  __asm push offset LAB_118836a4
  __asm mov ecx, esi
  __asm call LAB_1008ca83
  __asm test al, al
  __asm jne 0x1021b1e9
  __asm push offset LAB_118836cc
  __asm mov ecx, esi
  __asm call LAB_1008ca83
  __asm test al, al
  __asm jne 0x1021b1e9
  __asm pop esi
  __asm ret
  __asm mov al, 1
  __asm pop esi
  __asm ret
}



// Reference entry 1021b200; body size 58 bytes.
#line 1 "ENTRY_1021b200"

__declspec(naked) void FUN_1021b200(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, ecx
  __asm cmp byte ptr [esi + 0xc5], 0
  __asm je 0x1021b231
  __asm mov eax, dword ptr [esi]
  __asm call dword ptr [eax + 0x94]
  __asm push 0
  __asm push esi
  __asm push ecx
  __asm mov ecx, esp
  __asm push offset LAB_11880164
  __asm call LAB_1005273e
  __asm lea ecx, [esi + 8]
  __asm call LAB_10013746
  __asm mov byte ptr [esi + 0x41], 0
  __asm mov al, byte ptr [esi + 0xc4]
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 1021b280; body size 17 bytes.
#line 1 "ENTRY_1021b280"

__declspec(naked) void FUN_1021b280(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm push offset LAB_1188086c
  __asm call LAB_1008ca83
  __asm ret 4
}



// Reference entry 1021b2b0; body size 19 bytes.
#line 1 "ENTRY_1021b2b0"

__declspec(naked) void FUN_1021b2b0(void)

{
  __asm mov ecx, dword ptr [ecx + 8]
  __asm test ecx, ecx
  __asm je 0x1021b2be
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 8]
  __asm jmp eax
  __asm xor al, al
  __asm ret 4
}



// Reference entry 1021b2d0; body size 19 bytes.
#line 1 "ENTRY_1021b2d0"

__declspec(naked) void FUN_1021b2d0(void)

{
  __asm mov ecx, dword ptr [ecx + 8]
  __asm test ecx, ecx
  __asm je 0x1021b2de
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 8]
  __asm jmp eax
  __asm xor al, al
  __asm ret 4
}



// Reference entry 1021cbe0; body size 21 bytes.
#line 1 "ENTRY_1021cbe0"

void __fastcall FUN_1021cbe0(int param_1)

{
  ((SCVtbl_68_1*)((int *)(param_1 + -0x8c)))->v((int)(0));
  return;
}


// Reference entry 1021d280; body size 26 bytes.
#line 1 "ENTRY_1021d280"

__declspec(naked) void FUN_1021d280(void)

{
  __asm mov eax, dword ptr [ecx - 0x94]
  __asm add ecx, 0xffffff6c
  __asm _emit 0xc7 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm jmp dword ptr [eax + 0x114]
}



// Reference entry 1021d670; body size 16 bytes.
#line 1 "ENTRY_1021d670"

__declspec(naked) void FUN_1021d670(void)

{
  __asm mov eax, dword ptr [ecx]
  __asm _emit 0xc7 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm jmp dword ptr [eax + 0x114]
}



// Reference entry 1021e260; body size 63 bytes.
#line 1 "ENTRY_1021e260"

__declspec(naked) void FUN_1021e260(void)

{
  __asm push ecx
  __asm push esi
  __asm mov eax, 0x40c
  __asm lea esi, [ecx - 0x90]
  __asm push 0
  __asm cmp word ptr [ecx + 0x3c], ax
  __asm jne 0x1021e292
  __asm push esi
  __asm push ecx
  __asm mov ecx, esp
  __asm push offset LAB_11880164
  __asm call LAB_1005273e
  __asm lea ecx, [esi + 8]
  __asm call LAB_10013746
  __asm mov byte ptr [esi + 0x41], 0
  __asm pop esi
  __asm pop ecx
  __asm ret
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax + 0x114]
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 1021e7e0; body size 50 bytes.
#line 1 "ENTRY_1021e7e0"

__declspec(naked) void FUN_1021e7e0(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, ecx
  __asm push dword ptr [esi + 0x10]
  __asm lea eax, [esi + 4]
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push dword ptr [esi + 8]
  __asm push ecx
  __asm mov ecx, esp
  __asm push eax
  __asm call LAB_10036c23
  __asm mov ecx, dword ptr [esi + 0x18]
  __asm call LAB_10013543
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 1
  __asm call dword ptr [eax]
  __asm pop esi
  __asm pop ecx
  __asm ret 8
}



// Reference entry 102204e0; body size 30 bytes.
#line 1 "ENTRY_102204e0"

__declspec(naked) void FUN_102204e0(void)

{
  __asm mov byte ptr [ecx + 0x274], 0
  __asm mov ecx, dword ptr [esp + 4]
  __asm test ecx, ecx
  __asm je 0x102204fb
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x24]
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 0x34]
  __asm ret 4
}



// Reference entry 10220630; body size 29 bytes.
#line 1 "ENTRY_10220630"

__declspec(naked) void FUN_10220630(void)

{
  __asm mov eax, 0x403
  __asm cmp ax, word ptr [esp + 4]
  __asm jne 0x10220648
  __asm cmp dword ptr [esp + 8], 0
  __asm jle 0x10220648
  __asm mov al, 1
  __asm ret 8
  __asm xor al, al
  __asm ret 8
}



// Reference entry 10220770; body size 24 bytes.
#line 1 "ENTRY_10220770"

undefined4 __stdcall FUN_10220770(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0((int)(param_1),(int)(param_2),(int)(param_3));
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

__declspec(naked) void FUN_10220d50(void)

{
  __asm mov ecx, dword ptr [ecx + 0x1c]
  __asm test ecx, ecx
  __asm je 0x10220d5e
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x28]
  __asm jmp eax
  __asm xor al, al
  __asm ret 4
}



// Reference entry 10221330; body size 59 bytes.
#line 1 "ENTRY_10221330"

__declspec(naked) void FUN_10221330(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push offset LAB_11885cc4
  __asm lea eax, [esi + 0x6c]
  __asm push eax
  __asm call LAB_10080ed1
  __asm add esp, 8
  __asm test al, al
  __asm je 0x10221367
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm mov eax, dword ptr [eax + 0x7c]
  __asm call eax
  __asm test al, al
  __asm jne 0x10221363
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax + 0x80]
  __asm test eax, eax
  __asm jle 0x10221367
  __asm mov al, 1
  __asm pop esi
  __asm ret
  __asm xor al, al
  __asm pop esi
  __asm ret
}



// Reference entry 10221640; body size 31 bytes.
#line 1 "ENTRY_10221640"

__declspec(naked) void FUN_10221640(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm test eax, eax
  __asm je 0x1022165c
  __asm _emit 0xc7 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm add ecx, 0x18
  __asm mov dword ptr [esp + 4], eax
  __asm jmp LAB_10037bc8
  __asm ret 8
}



// Reference entry 10221690; body size 21 bytes.
#line 1 "ENTRY_10221690"

void __thiscall Recovered_Bulk::m_FUN_10221690(int *param_2)
{
  int param_1 = (int )this;
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_10_1*)(param_2))->v((int)(*(undefined4 *)(param_1 + 4)));
  }
  return;
}


// Reference entry 10221800; body size 62 bytes.
#line 1 "ENTRY_10221800"

__declspec(naked) void FUN_10221800(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm test eax, eax
  __asm je 0x10221814
  __asm push eax
  __asm lea ecx, [esi + 0x18]
  __asm call LAB_100373d5
  __asm cmp dword ptr [esi + 0x20], 0
  __asm jne 0x1022183a
  __asm push 1
  __asm call LAB_10095c14
  __asm add esp, 4
  __asm lea ecx, [esi + 0x100]
  __asm pop esi
  __asm mov dword ptr [esp + 4], ecx
  __asm lea ecx, [eax + 0xc4]
  __asm jmp LAB_1005ba00
  __asm pop esi
  __asm ret 4
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
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10221d20; body size 47 bytes.
#line 1 "ENTRY_10221d20"

__declspec(naked) void FUN_10221d20(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], LAB_118875c8
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11887604
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
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

__declspec(naked) void FUN_10221eb0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push dword ptr [esi + 8]
  __asm mov dword ptr [esi], LAB_11887604
  __asm call LAB_1005e133
  __asm add esp, 4
  __asm mov dword ptr [esi], LAB_118875c8
  __asm dec dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esi], LAB_1186d2f4
  __asm pop esi
  __asm ret
}



// Reference entry 10221ef0; body size 46 bytes.
#line 1 "ENTRY_10221ef0"

__declspec(naked) void FUN_10221ef0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov eax, dword ptr [esi + 8]
  __asm mov dword ptr [esi], LAB_11887644
  __asm test eax, eax
  __asm je 0x10221f0a
  __asm push eax
  __asm call dword ptr [LAB_122fc90c]
  __asm add esp, 4
  __asm mov dword ptr [esi], LAB_118875c8
  __asm dec dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esi], LAB_1186d2f4
  __asm pop esi
  __asm ret
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

__declspec(naked) void FUN_10221fa0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push dword ptr [esi + 8]
  __asm mov dword ptr [esi], LAB_11887604
  __asm call LAB_1005e133
  __asm mov dword ptr [esi], LAB_118875c8
  __asm add esp, 4
  __asm dec dword ptr [LAB_121a0e68]
  __asm test byte ptr [esp + 8], 1
  __asm mov dword ptr [esi], LAB_1186d2f4
  __asm je 0x10221fd8
  __asm push 0x10
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
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

__declspec(naked) void FUN_10222240(void)

{
  __asm cmp dword ptr [ecx + 8], 0
  __asm je 0x1022224c
  __asm cmp dword ptr [ecx + 0xc], 0
  __asm ja 0x10222260
  __asm push offset LAB_11887680
  __asm push 2
  __asm push offset LAB_11887690
  __asm call LAB_100238df
  __asm add esp, 0xc
  __asm ret
}



// Reference entry 10222300; body size 60 bytes.
#line 1 "ENTRY_10222300"

__declspec(naked) void FUN_10222300(void)

{
  __asm mov edx, dword ptr [esp + 4]
  __asm push esi
  __asm test edx, edx
  __asm je 0x10222336
  __asm mov eax, dword ptr [esp + 0xc]
  __asm test eax, eax
  __asm je 0x10222336
  __asm cmp dword ptr [ecx + 8], 0
  __asm je 0x10222336
  __asm mov esi, dword ptr [ecx + 0xc]
  __asm test esi, esi
  __asm je 0x10222336
  __asm cmp esi, eax
  __asm cmova esi, eax
  __asm push esi
  __asm push dword ptr [ecx + 8]
  __asm push edx
  __asm call LAB_1148cded
  __asm add esp, 0xc
  __asm mov eax, esi
  __asm pop esi
  __asm ret 8
  __asm xor eax, eax
  __asm pop esi
  __asm ret 8
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

__declspec(naked) void FUN_10222440(void)

{
  __asm cmp dword ptr [ecx + 8], 0
  __asm je 0x1022244f
  __asm cmp dword ptr [ecx + 0xc], 0
  __asm jbe 0x1022244f
  __asm mov al, 1
  __asm ret
  __asm xor al, al
  __asm ret
}



// Reference entry 102233d0; body size 47 bytes.
#line 1 "ENTRY_102233d0"

__declspec(naked) void FUN_102233d0(void)

{
  __asm push offset LAB_1005a105
  __asm call LAB_1148ce05
  __asm add esp, 4
  __asm push offset LAB_1008d708
  __asm push 1
  __asm call dword ptr [LAB_122fc160]
  __asm call LAB_1006ac2b
  __asm test eax, eax
  __asm je 0x102233fe
  __asm push dword ptr [esp + 4]
  __asm mov ecx, eax
  __asm call LAB_1001ba1d
  __asm ret
}



// Reference entry 10223410; body size 46 bytes.
#line 1 "ENTRY_10223410"

__declspec(naked) void FUN_10223410(void)

{
  __asm sub esp, 0xc
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, esp
  __asm mov dword ptr [esp + 8], eax
  __asm mov eax, dword ptr [esp + 0x10]
  __asm lea ecx, [esp]
  __asm push ecx
  __asm push eax
  __asm call LAB_10062f67
  __asm mov ecx, dword ptr [esp + 0x10]
  __asm add esp, 8
  __asm xor ecx, esp
  __asm call LAB_100382f3
  __asm add esp, 0xc
  __asm ret
}



// Reference entry 10223450; body size 21 bytes.
#line 1 "ENTRY_10223450"

__declspec(naked) void FUN_10223450(void)

{
  __asm push offset LAB_1008d708
  __asm call dword ptr [LAB_122fc164]
  __asm call LAB_10065cc1
  __asm jmp LAB_1004f935
}



// Reference entry 10223600; body size 31 bytes.
#line 1 "ENTRY_10223600"

__declspec(naked) void FUN_10223600(void)

{
  __asm push esi
  __asm push dword ptr [esp + 8]
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x2c]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x24]
  __asm mov ecx, dword ptr [esi + 0x34]
  __asm push dword ptr [esp + 0xc]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x24]
  __asm pop esi
  __asm ret 8
}



// Reference entry 10223630; body size 61 bytes.
#line 1 "ENTRY_10223630"

__declspec(naked) void FUN_10223630(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x1022364c
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10223662
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
}



// Reference entry 10223680; body size 28 bytes.
#line 1 "ENTRY_10223680"

__declspec(naked) void FUN_10223680(void)

{
  __asm mov ecx, dword ptr [ecx + 0x100]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10223696
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 102236b0; body size 28 bytes.
#line 1 "ENTRY_102236b0"

__declspec(naked) void FUN_102236b0(void)

{
  __asm mov ecx, dword ptr [ecx + 0xf8]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x102236c6
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 102236e0; body size 28 bytes.
#line 1 "ENTRY_102236e0"

__declspec(naked) void FUN_102236e0(void)

{
  __asm mov ecx, dword ptr [ecx + 0xf0]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x102236f6
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10224b80; body size 39 bytes.
#line 1 "ENTRY_10224b80"

__declspec(naked) void FUN_10224b80(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0xc
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [eax], eax
  __asm mov dword ptr [eax + 4], eax
  __asm mov dword ptr [esi], eax
  __asm mov eax, esi
  __asm pop esi
  __asm ret 8
}



// Reference entry 10225e70; body size 40 bytes.
#line 1 "ENTRY_10225e70"

__declspec(naked) void FUN_10225e70(void)

{
  __asm sub esp, 8
  __asm lea eax, [esp]
  __asm push esi
  __asm push dword ptr [esp + 0x14]
  __asm mov esi, ecx
  __asm push dword ptr [esp + 0x14]
  __asm push eax
  __asm call LAB_10069b96
  __asm mov eax, dword ptr [eax + 4]
  __asm test eax, eax
  __asm jne 0x10225e91
  __asm mov eax, dword ptr [esi + 4]
  __asm pop esi
  __asm add esp, 8
  __asm ret 8
}



// Reference entry 10225eb0; body size 40 bytes.
#line 1 "ENTRY_10225eb0"

__declspec(naked) void FUN_10225eb0(void)

{
  __asm sub esp, 8
  __asm lea eax, [esp]
  __asm push esi
  __asm push dword ptr [esp + 0x14]
  __asm mov esi, ecx
  __asm push dword ptr [esp + 0x14]
  __asm push eax
  __asm call LAB_100064c9
  __asm mov eax, dword ptr [eax + 4]
  __asm test eax, eax
  __asm jne 0x10225ed1
  __asm mov eax, dword ptr [esi + 4]
  __asm pop esi
  __asm add esp, 8
  __asm ret 8
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
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 10228f60; body size 41 bytes.
#line 1 "ENTRY_10228f60"

__declspec(naked) void FUN_10228f60(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10228f83
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



// Reference entry 10228fa0; body size 41 bytes.
#line 1 "ENTRY_10228fa0"

__declspec(naked) void FUN_10228fa0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10228fc3
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



// Reference entry 10228fe0; body size 41 bytes.
#line 1 "ENTRY_10228fe0"

__declspec(naked) void FUN_10228fe0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10229003
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



// Reference entry 10229020; body size 41 bytes.
#line 1 "ENTRY_10229020"

__declspec(naked) void FUN_10229020(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10229043
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



// Reference entry 10229060; body size 41 bytes.
#line 1 "ENTRY_10229060"

__declspec(naked) void FUN_10229060(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10229083
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



// Reference entry 102290a0; body size 41 bytes.
#line 1 "ENTRY_102290a0"

__declspec(naked) void FUN_102290a0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x102290c3
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



// Reference entry 10229120; body size 41 bytes.
#line 1 "ENTRY_10229120"

__declspec(naked) void FUN_10229120(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10229143
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



// Reference entry 10229160; body size 41 bytes.
#line 1 "ENTRY_10229160"

__declspec(naked) void FUN_10229160(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10229183
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



// Reference entry 102291c0; body size 41 bytes.
#line 1 "ENTRY_102291c0"

__declspec(naked) void FUN_102291c0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x102291e3
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



// Reference entry 10229200; body size 41 bytes.
#line 1 "ENTRY_10229200"

__declspec(naked) void FUN_10229200(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10229223
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



// Reference entry 10229240; body size 41 bytes.
#line 1 "ENTRY_10229240"

__declspec(naked) void FUN_10229240(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10229263
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



// Reference entry 10229280; body size 41 bytes.
#line 1 "ENTRY_10229280"

__declspec(naked) void FUN_10229280(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x102292a3
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



// Reference entry 102292e0; body size 41 bytes.
#line 1 "ENTRY_102292e0"

__declspec(naked) void FUN_102292e0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10229303
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



// Reference entry 10229340; body size 41 bytes.
#line 1 "ENTRY_10229340"

__declspec(naked) void FUN_10229340(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10229363
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



// Reference entry 102293d0; body size 41 bytes.
#line 1 "ENTRY_102293d0"

__declspec(naked) void FUN_102293d0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x102293f3
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



// Reference entry 10229410; body size 41 bytes.
#line 1 "ENTRY_10229410"

__declspec(naked) void FUN_10229410(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10229433
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



// Reference entry 10229470; body size 24 bytes.
#line 1 "ENTRY_10229470"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10229470(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1022a1b0; body size 39 bytes.
#line 1 "ENTRY_1022a1b0"

__declspec(naked) void FUN_1022a1b0(void)

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



// Reference entry 1022a1e0; body size 39 bytes.
#line 1 "ENTRY_1022a1e0"

__declspec(naked) void FUN_1022a1e0(void)

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



// Reference entry 1022a210; body size 39 bytes.
#line 1 "ENTRY_1022a210"

__declspec(naked) void FUN_1022a210(void)

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



// Reference entry 1022c710; body size 34 bytes.
#line 1 "ENTRY_1022c710"

__declspec(naked) void FUN_1022c710(void)

{
  __asm push esi
  __asm lea esi, [ecx + 8]
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x1022c730
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

__declspec(naked) void FUN_1022d450(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x1022d46f
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



// Reference entry 1022d480; body size 33 bytes.
#line 1 "ENTRY_1022d480"

__declspec(naked) void FUN_1022d480(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x1022d49f
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



// Reference entry 1022d4b0; body size 33 bytes.
#line 1 "ENTRY_1022d4b0"

__declspec(naked) void FUN_1022d4b0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x1022d4cf
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



// Reference entry 1022d4e0; body size 33 bytes.
#line 1 "ENTRY_1022d4e0"

__declspec(naked) void FUN_1022d4e0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x1022d4ff
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



// Reference entry 1022d510; body size 33 bytes.
#line 1 "ENTRY_1022d510"

__declspec(naked) void FUN_1022d510(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x1022d52f
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



// Reference entry 1022d540; body size 33 bytes.
#line 1 "ENTRY_1022d540"

__declspec(naked) void FUN_1022d540(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x1022d55f
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



// Reference entry 1022d570; body size 33 bytes.
#line 1 "ENTRY_1022d570"

__declspec(naked) void FUN_1022d570(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x1022d58f
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



// Reference entry 1022d5a0; body size 33 bytes.
#line 1 "ENTRY_1022d5a0"

__declspec(naked) void FUN_1022d5a0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x1022d5bf
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



// Reference entry 1022d5d0; body size 33 bytes.
#line 1 "ENTRY_1022d5d0"

__declspec(naked) void FUN_1022d5d0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x1022d5ef
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

__declspec(naked) void FUN_1022db00(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x1022db1f
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



// Reference entry 1022db30; body size 33 bytes.
#line 1 "ENTRY_1022db30"

__declspec(naked) void FUN_1022db30(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x1022db4f
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



// Reference entry 1022db60; body size 33 bytes.
#line 1 "ENTRY_1022db60"

__declspec(naked) void FUN_1022db60(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x1022db7f
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



// Reference entry 1022db90; body size 33 bytes.
#line 1 "ENTRY_1022db90"

__declspec(naked) void FUN_1022db90(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x1022dbaf
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



// Reference entry 1022dbc0; body size 33 bytes.
#line 1 "ENTRY_1022dbc0"

__declspec(naked) void FUN_1022dbc0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x1022dbdf
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



// Reference entry 1022dbf0; body size 33 bytes.
#line 1 "ENTRY_1022dbf0"

__declspec(naked) void FUN_1022dbf0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x1022dc0f
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



// Reference entry 1022dc20; body size 33 bytes.
#line 1 "ENTRY_1022dc20"

__declspec(naked) void FUN_1022dc20(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x1022dc3f
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



// Reference entry 1022dc50; body size 33 bytes.
#line 1 "ENTRY_1022dc50"

__declspec(naked) void FUN_1022dc50(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x1022dc6f
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



// Reference entry 1022dc80; body size 33 bytes.
#line 1 "ENTRY_1022dc80"

__declspec(naked) void FUN_1022dc80(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x1022dc9f
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

__declspec(naked) void FUN_1022de80(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x1022de9f
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



// Reference entry 1022deb0; body size 33 bytes.
#line 1 "ENTRY_1022deb0"

__declspec(naked) void FUN_1022deb0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x1022decf
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



// Reference entry 1022ed40; body size 34 bytes.
#line 1 "ENTRY_1022ed40"

__declspec(naked) void FUN_1022ed40(void)

{
  __asm push esi
  __asm lea esi, [ecx + 0x10]
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x1022ed60
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



// Reference entry 1022ed70; body size 33 bytes.
#line 1 "ENTRY_1022ed70"

__declspec(naked) void FUN_1022ed70(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x1022ed8f
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



// Reference entry 1022ef50; body size 33 bytes.
#line 1 "ENTRY_1022ef50"

__declspec(naked) void FUN_1022ef50(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x1022ef6f
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

__declspec(naked) void FUN_1022f6b0(void)

{
  __asm sub esp, 8
  __asm lea eax, [esp]
  __asm push dword ptr [esp + 0xc]
  __asm push eax
  __asm call LAB_10059403
  __asm mov eax, dword ptr [eax]
  __asm add eax, 0xc
  __asm add esp, 8
  __asm ret 4
}



// Reference entry 1022f6e0; body size 27 bytes.
#line 1 "ENTRY_1022f6e0"

__declspec(naked) void FUN_1022f6e0(void)

{
  __asm sub esp, 8
  __asm lea eax, [esp]
  __asm push dword ptr [esp + 0xc]
  __asm push eax
  __asm call LAB_10073272
  __asm mov eax, dword ptr [eax]
  __asm add eax, 0xc
  __asm add esp, 8
  __asm ret 4
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

__declspec(naked) void FUN_102306b0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x2c]
  __asm push edi
  __asm lea edi, [esi + 8]
  __asm test ecx, ecx
  __asm je 0x102306d3
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, edi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test byte ptr [esp + 0xc], 1
  __asm je 0x102306e5
  __asm push 0x30
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm pop edi
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10230700; body size 60 bytes.
#line 1 "ENTRY_10230700"

__declspec(naked) void FUN_10230700(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x2c]
  __asm push edi
  __asm lea edi, [esi + 8]
  __asm test ecx, ecx
  __asm je 0x10230723
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, edi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test byte ptr [esp + 0xc], 1
  __asm je 0x10230735
  __asm push 0x30
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm pop edi
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10230750; body size 60 bytes.
#line 1 "ENTRY_10230750"

__declspec(naked) void FUN_10230750(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x34]
  __asm push edi
  __asm lea edi, [esi + 0x10]
  __asm test ecx, ecx
  __asm je 0x10230773
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, edi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test byte ptr [esp + 0xc], 1
  __asm je 0x10230785
  __asm push 0x38
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm pop edi
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 102307a0; body size 60 bytes.
#line 1 "ENTRY_102307a0"

__declspec(naked) void FUN_102307a0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x2c]
  __asm push edi
  __asm lea edi, [esi + 8]
  __asm test ecx, ecx
  __asm je 0x102307c3
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, edi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test byte ptr [esp + 0xc], 1
  __asm je 0x102307d5
  __asm push 0x30
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm pop edi
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
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
    ((SCVtbl_8_1*)(*(int **)(param_1 + 0x84)))->v((int)(param_2));
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
    ((SCVtbl_7_1*)(*(int **)(param_1 + 0x84)))->v((int)(param_2));
    return (SCStr *)(param_2);
  }
  ((SCStr *)(param_2))->int_allocRep("");
  return (SCStr *)(param_2);
}


// Reference entry 10231780; body size 18 bytes.
#line 1 "ENTRY_10231780"

__declspec(naked) void FUN_10231780(void)

{
  __asm mov ecx, dword ptr [ecx + 0x84]
  __asm test ecx, ecx
  __asm je 0x1023178f
  __asm mov eax, dword ptr [ecx]
  __asm jmp dword ptr [eax + 0xc]
  __asm xor eax, eax
  __asm ret
}



// Reference entry 102317a0; body size 46 bytes.
#line 1 "ENTRY_102317a0"

SCStr * __thiscall Recovered_Bulk::m_FUN_102317a0(SCStr *param_2)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x84) != (int *)((0x0))) {
    ((SCVtbl_2_1*)(*(int **)(param_1 + 0x84)))->v((int)(param_2));
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
    ((SCVtbl_6_1*)(*(int **)(param_1 + 0x84)))->v((int)(param_2));
    return (SCStr *)(param_2);
  }
  ((SCStr *)(param_2))->int_allocRep("");
  return (SCStr *)(param_2);
}


// Reference entry 102318b0; body size 25 bytes.
#line 1 "ENTRY_102318b0"

__declspec(naked) void FUN_102318b0(void)

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



// Reference entry 102318d0; body size 25 bytes.
#line 1 "ENTRY_102318d0"

__declspec(naked) void FUN_102318d0(void)

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



// Reference entry 102318f0; body size 25 bytes.
#line 1 "ENTRY_102318f0"

__declspec(naked) void FUN_102318f0(void)

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

undefined4 * __thiscall Recovered_Bulk::m_FUN_10232050(undefined4 *param_2)
{
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)((int)this + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 10232070; body size 19 bytes.
#line 1 "ENTRY_10232070"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_10232070(undefined4 *param_2)
{
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)((int)this + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 10232150; body size 19 bytes.
#line 1 "ENTRY_10232150"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_10232150(undefined4 *param_2)
{
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)((int)this + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 10232170; body size 19 bytes.
#line 1 "ENTRY_10232170"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_10232170(undefined4 *param_2)
{
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)((int)this + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 102321b0; body size 19 bytes.
#line 1 "ENTRY_102321b0"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_102321b0(undefined4 *param_2)
{
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)((int)this + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 10232270; body size 58 bytes.
#line 1 "ENTRY_10232270"

__declspec(naked) void FUN_10232270(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x2c]
  __asm push edi
  __asm lea edi, [esi + 8]
  __asm test ecx, ecx
  __asm je 0x10232293
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, edi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm cmp byte ptr [esp + 0xc], 0
  __asm je 0x102322a5
  __asm push 0x30
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 102322c0; body size 58 bytes.
#line 1 "ENTRY_102322c0"

__declspec(naked) void FUN_102322c0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x2c]
  __asm push edi
  __asm lea edi, [esi + 8]
  __asm test ecx, ecx
  __asm je 0x102322e3
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, edi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm cmp byte ptr [esp + 0xc], 0
  __asm je 0x102322f5
  __asm push 0x30
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm pop edi
  __asm pop esi
  __asm ret 4
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

__declspec(naked) void FUN_10232370(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x34]
  __asm push edi
  __asm lea edi, [esi + 0x10]
  __asm test ecx, ecx
  __asm je 0x10232393
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, edi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm cmp byte ptr [esp + 0xc], 0
  __asm je 0x102323a5
  __asm push 0x38
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm pop edi
  __asm pop esi
  __asm ret 4
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

__declspec(naked) void FUN_10232460(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x2c]
  __asm push edi
  __asm lea edi, [esi + 8]
  __asm test ecx, ecx
  __asm je 0x10232483
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, edi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm cmp byte ptr [esp + 0xc], 0
  __asm je 0x10232495
  __asm push 0x30
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10232760; body size 37 bytes.
#line 1 "ENTRY_10232760"

__declspec(naked) void FUN_10232760(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov ecx, dword ptr [ecx + 0x2c]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [esp + 4], eax
  __asm test ecx, ecx
  __asm je 0x10232780
  __asm mov eax, dword ptr [ecx]
  __asm lea edx, [esp + 4]
  __asm push edx
  __asm mov eax, dword ptr [eax + 8]
  __asm call eax
  __asm ret 4
  __asm call LAB_1148a05a
}



// Reference entry 10232790; body size 37 bytes.
#line 1 "ENTRY_10232790"

__declspec(naked) void FUN_10232790(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov ecx, dword ptr [ecx + 0x2c]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [esp + 4], eax
  __asm test ecx, ecx
  __asm je 0x102327b0
  __asm mov eax, dword ptr [ecx]
  __asm lea edx, [esp + 4]
  __asm push edx
  __asm mov eax, dword ptr [eax + 8]
  __asm call eax
  __asm ret 4
  __asm call LAB_1148a05a
}



// Reference entry 102327c0; body size 41 bytes.
#line 1 "ENTRY_102327c0"

__declspec(naked) void FUN_102327c0(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, ecx
  __asm push 0
  __asm push dword ptr [esi + 4]
  __asm push ecx
  __asm mov ecx, esp
  __asm push offset LAB_11878fbc
  __asm call LAB_1005273e
  __asm mov ecx, dword ptr [esi + 4]
  __asm mov ecx, dword ptr [ecx + 0x88]
  __asm call LAB_10013746
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10232800; body size 31 bytes.
#line 1 "ENTRY_10232800"

__declspec(naked) void FUN_10232800(void)

{
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm call LAB_1001fd9d
  __asm add esp, 4
  __asm test al, al
  __asm je 0x1023281b
  __asm mov ecx, dword ptr [esi + 4]
  __asm call LAB_100759aa
  __asm pop esi
  __asm ret 8
}



// Reference entry 10232840; body size 61 bytes.
#line 1 "ENTRY_10232840"

__declspec(naked) void FUN_10232840(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [eax]
  __asm push dword ptr [esi + 8]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x18]
  __asm mov ecx, dword ptr [esi + 0x34]
  __asm mov dword ptr [esp + 0xc], eax
  __asm mov eax, dword ptr [esi + 8]
  __asm mov dword ptr [esp + 4], eax
  __asm pop esi
  __asm test ecx, ecx
  __asm je 0x10232878
  __asm mov eax, dword ptr [ecx]
  __asm lea edx, [esp + 8]
  __asm push edx
  __asm lea edx, [esp + 4]
  __asm push edx
  __asm call dword ptr [eax + 8]
  __asm pop ecx
  __asm ret 8
  __asm call LAB_1148a05a
}



// Reference entry 10232890; body size 17 bytes.
#line 1 "ENTRY_10232890"

__declspec(naked) void FUN_10232890(void)

{
  __asm push dword ptr [ecx + 4]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov ecx, dword ptr [ecx]
  __asm call LAB_10094af8
  __asm ret 4
}



// Reference entry 102328b0; body size 17 bytes.
#line 1 "ENTRY_102328b0"

__declspec(naked) void FUN_102328b0(void)

{
  __asm push dword ptr [ecx + 4]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov ecx, dword ptr [ecx]
  __asm call LAB_10094af8
  __asm ret 4
}



// Reference entry 10232900; body size 39 bytes.
#line 1 "ENTRY_10232900"

__declspec(naked) void FUN_10232900(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov ecx, dword ptr [ecx + 0x2c]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [esp + 4], eax
  __asm test ecx, ecx
  __asm je 0x10232922
  __asm push dword ptr [esp + 8]
  __asm mov eax, dword ptr [ecx]
  __asm lea edx, [esp + 8]
  __asm push edx
  __asm call dword ptr [eax + 8]
  __asm ret 8
  __asm call LAB_1148a05a
}



// Reference entry 10233650; body size 19 bytes.
#line 1 "ENTRY_10233650"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_10233650(undefined4 *param_2)
{
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)((int)this + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 10233670; body size 19 bytes.
#line 1 "ENTRY_10233670"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_10233670(undefined4 *param_2)
{
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)((int)this + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 102336b0; body size 19 bytes.
#line 1 "ENTRY_102336b0"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_102336b0(undefined4 *param_2)
{
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)((int)this + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 102336d0; body size 19 bytes.
#line 1 "ENTRY_102336d0"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_102336d0(undefined4 *param_2)
{
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)((int)this + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 10233710; body size 19 bytes.
#line 1 "ENTRY_10233710"

__declspec(naked) void FUN_10233710(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov dword ptr [eax], LAB_118895c4
  __asm mov ecx, dword ptr [ecx + 4]
  __asm mov dword ptr [eax + 4], ecx
  __asm ret 4
}



// Reference entry 10233740; body size 52 bytes.
#line 1 "ENTRY_10233740"

__declspec(naked) void FUN_10233740(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm call LAB_10013f1b
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



// Reference entry 10233e10; body size 33 bytes.
#line 1 "ENTRY_10233e10"

__declspec(naked) void FUN_10233e10(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10233e2f
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



// Reference entry 10233e40; body size 33 bytes.
#line 1 "ENTRY_10233e40"

__declspec(naked) void FUN_10233e40(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10233e5f
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



// Reference entry 10233e70; body size 33 bytes.
#line 1 "ENTRY_10233e70"

__declspec(naked) void FUN_10233e70(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10233e8f
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



// Reference entry 10233ea0; body size 33 bytes.
#line 1 "ENTRY_10233ea0"

__declspec(naked) void FUN_10233ea0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10233ebf
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



// Reference entry 10233ed0; body size 33 bytes.
#line 1 "ENTRY_10233ed0"

__declspec(naked) void FUN_10233ed0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10233eef
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



// Reference entry 10233f00; body size 33 bytes.
#line 1 "ENTRY_10233f00"

__declspec(naked) void FUN_10233f00(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10233f1f
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



// Reference entry 10233f30; body size 33 bytes.
#line 1 "ENTRY_10233f30"

__declspec(naked) void FUN_10233f30(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10233f4f
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



// Reference entry 10233f60; body size 33 bytes.
#line 1 "ENTRY_10233f60"

__declspec(naked) void FUN_10233f60(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10233f7f
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



// Reference entry 10233f90; body size 33 bytes.
#line 1 "ENTRY_10233f90"

__declspec(naked) void FUN_10233f90(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10233faf
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

__declspec(naked) void FUN_10234c50(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x10234c6c
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10234c82
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
}



// Reference entry 10234ca0; body size 61 bytes.
#line 1 "ENTRY_10234ca0"

__declspec(naked) void FUN_10234ca0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x10234cbc
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10234cd2
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
}



// Reference entry 10234cf0; body size 61 bytes.
#line 1 "ENTRY_10234cf0"

__declspec(naked) void FUN_10234cf0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x10234d0c
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10234d22
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
}



// Reference entry 10234d40; body size 61 bytes.
#line 1 "ENTRY_10234d40"

__declspec(naked) void FUN_10234d40(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x10234d5c
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10234d72
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
}



// Reference entry 10234d90; body size 61 bytes.
#line 1 "ENTRY_10234d90"

__declspec(naked) void FUN_10234d90(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x10234dac
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10234dc2
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
}



// Reference entry 10234de0; body size 61 bytes.
#line 1 "ENTRY_10234de0"

__declspec(naked) void FUN_10234de0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x10234dfc
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10234e12
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
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
    ((SCVtbl_2_0*)(piVar1))->v();
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

__declspec(naked) void FUN_10235f80(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0xc5 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp ecx, 0x1000
  __asm jb 0x10235fa9
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x10235fb6
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret 8
  __asm call dword ptr [LAB_122fc888]
}



// Reference entry 10236170; body size 35 bytes.
#line 1 "ENTRY_10236170"

__declspec(naked) void FUN_10236170(void)

{
  __asm mov eax, dword ptr [ecx + 8]
  __asm mov ecx, dword ptr [eax + 0x3c]
  __asm test ecx, ecx
  __asm je 0x10236190
  __asm mov eax, dword ptr [esp + 4]
  __asm lea edx, [esp + 4]
  __asm push dword ptr [esp + 8]
  __asm mov dword ptr [esp + 8], eax
  __asm mov eax, dword ptr [ecx]
  __asm push edx
  __asm call dword ptr [eax + 8]
  __asm ret 8
}



// Reference entry 10236500; body size 28 bytes.
#line 1 "ENTRY_10236500"

void __fastcall FUN_10236500(int *param_1)

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


// Reference entry 10236530; body size 28 bytes.
#line 1 "ENTRY_10236530"

void __fastcall FUN_10236530(int *param_1)

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

__declspec(naked) void FUN_102365f0(void)

{
  __asm mov eax, ecx
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov ecx, dword ptr [eax + 0x10]
  __asm test ecx, ecx
  __asm je 0x1023660a
  __asm mov edx, dword ptr [ecx]
  __asm push esi
  __asm call dword ptr [edx + 0x34]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
  __asm mov ecx, dword ptr [eax + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10236618
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
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

__declspec(naked) void FUN_10236a60(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm cmp byte ptr [esi + 0xf8], 0
  __asm je 0x10236a93
  __asm cmp byte ptr [esi + 0x74], 0
  __asm je 0x10236a8e
  __asm push dword ptr [esi + 0x78]
  __asm push offset LAB_118885c0
  __asm push 2
  __asm push offset LAB_118885f8
  __asm call LAB_100238df
  __asm mov eax, dword ptr [esi + 0x78]
  __asm add esp, 0x10
  __asm pop esi
  __asm ret
  __asm mov eax, dword ptr [esi + 0x6c]
  __asm pop esi
  __asm ret
  __asm xor eax, eax
  __asm pop esi
  __asm ret
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

__declspec(naked) void FUN_10236c00(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push edi
  __asm lea edi, [ecx + 0x20]
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

__declspec(naked) void FUN_10236cd0(void)

{
  __asm push offset LAB_11882ff0
  __asm push 0x2766
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10236d00; body size 35 bytes.
#line 1 "ENTRY_10236d00"

__declspec(naked) void FUN_10236d00(void)

{
  __asm push offset LAB_11882ff0
  __asm push 0x2766
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
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

__declspec(naked) void FUN_10236e20(void)

{
  __asm push offset LAB_11882ff0
  __asm push 0x2777
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10236e50; body size 44 bytes.
#line 1 "ENTRY_10236e50"

__declspec(naked) void FUN_10236e50(void)

{
  __asm xor eax, eax
  __asm cmp byte ptr [ecx + 0x24], al
  __asm push offset LAB_11882ff0
  __asm setne al
  __asm add eax, 0x2726
  __asm push eax
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10236e90; body size 35 bytes.
#line 1 "ENTRY_10236e90"

__declspec(naked) void FUN_10236e90(void)

{
  __asm push offset LAB_11882ff0
  __asm push 0x2779
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10236ec0; body size 35 bytes.
#line 1 "ENTRY_10236ec0"

__declspec(naked) void FUN_10236ec0(void)

{
  __asm push offset LAB_11882ff0
  __asm push 0x2748
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10236fb0; body size 35 bytes.
#line 1 "ENTRY_10236fb0"

__declspec(naked) void FUN_10236fb0(void)

{
  __asm push offset LAB_11882ff0
  __asm push 0x274a
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10236fe0; body size 35 bytes.
#line 1 "ENTRY_10236fe0"

__declspec(naked) void FUN_10236fe0(void)

{
  __asm push offset LAB_11882ff0
  __asm push 0x275d
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
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

__declspec(naked) void FUN_10237030(void)

{
  __asm push offset LAB_11882ff0
  __asm push 0x2766
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10237060; body size 35 bytes.
#line 1 "ENTRY_10237060"

__declspec(naked) void FUN_10237060(void)

{
  __asm push offset LAB_11882ff0
  __asm push 0x2766
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
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

__declspec(naked) void FUN_10237180(void)

{
  __asm push offset LAB_11882ff0
  __asm push 0x2777
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 102371b0; body size 46 bytes.
#line 1 "ENTRY_102371b0"

__declspec(naked) void FUN_102371b0(void)

{
  __asm xor eax, eax
  __asm cmp byte ptr [ecx + 0x24], al
  __asm push offset LAB_11882ff0
  __asm setne al
  __asm lea eax, [eax*2 + 0x2725]
  __asm push eax
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 102371f0; body size 35 bytes.
#line 1 "ENTRY_102371f0"

__declspec(naked) void FUN_102371f0(void)

{
  __asm push offset LAB_11882ff0
  __asm push 0x2779
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10237220; body size 35 bytes.
#line 1 "ENTRY_10237220"

__declspec(naked) void FUN_10237220(void)

{
  __asm push offset LAB_11882ff0
  __asm push 0x2748
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10237310; body size 35 bytes.
#line 1 "ENTRY_10237310"

__declspec(naked) void FUN_10237310(void)

{
  __asm push offset LAB_11882ff0
  __asm push 0x274a
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10237340; body size 35 bytes.
#line 1 "ENTRY_10237340"

__declspec(naked) void FUN_10237340(void)

{
  __asm push offset LAB_11882ff0
  __asm push 0x275d
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
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

__declspec(naked) void FUN_1023a420(void)

{
  __asm push offset LAB_11882ff0
  __asm push 0x2764
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 1023a450; body size 35 bytes.
#line 1 "ENTRY_1023a450"

__declspec(naked) void FUN_1023a450(void)

{
  __asm push offset LAB_11882ff0
  __asm push 0x2765
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
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

__declspec(naked) void FUN_1023a5f0(void)

{
  __asm push offset LAB_11882ff0
  __asm push 0x2724
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 1023a620; body size 35 bytes.
#line 1 "ENTRY_1023a620"

__declspec(naked) void FUN_1023a620(void)

{
  __asm push offset LAB_11882ff0
  __asm push 0x2778
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 1023a650; body size 35 bytes.
#line 1 "ENTRY_1023a650"

__declspec(naked) void FUN_1023a650(void)

{
  __asm push offset LAB_11882ff0
  __asm push 0x2747
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 1023a6f0; body size 35 bytes.
#line 1 "ENTRY_1023a6f0"

__declspec(naked) void FUN_1023a6f0(void)

{
  __asm push offset LAB_11882ff0
  __asm push 0x2749
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 1023a720; body size 35 bytes.
#line 1 "ENTRY_1023a720"

__declspec(naked) void FUN_1023a720(void)

{
  __asm push offset LAB_11882ff0
  __asm push 0x275c
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
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
    ((SCVtbl_1_0*)((int *)(uint)(DAT_121a0978)))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1023ab10; body size 32 bytes.
#line 1 "ENTRY_1023ab10"

undefined4 * FUN_1023ab10(undefined4 *param_1)

{
  *param_1 = (undefined4)(DAT_121a0978);
  if ((int *)(DAT_121a0978) != (int *)(0x0)) {
    ((SCVtbl_1_0*)((int *)(uint)(DAT_121a0978)))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1023c190; body size 22 bytes.
#line 1 "ENTRY_1023c190"

__declspec(naked) undefined4 FUN_1023c190(void)

{
  __asm call LAB_1007a7a2
  __asm test eax, eax
  __asm je 0x1023c1a3
  __asm push 3
  __asm mov ecx, eax
  __asm call LAB_10002eeb
  __asm ret
  __asm xor al, al
  __asm ret
}



// Reference entry 10242ad0; body size 37 bytes.
#line 1 "ENTRY_10242ad0"

__declspec(naked) void FUN_10242ad0(void)

{
  __asm cmp byte ptr [ecx + 0x74], 0
  __asm je 0x10242ae3
  __asm mov eax, dword ptr [ecx + 0x7c]
  __asm cmp eax, 0xc
  __asm je 0x10242af2
  __asm cmp eax, 0xd
  __asm jmp 0x10242aed
  __asm cmp dword ptr [ecx + 0x70], 0xc
  __asm je 0x10242af2
  __asm cmp dword ptr [ecx + 0x7c], 0xd
  __asm je 0x10242af2
  __asm xor al, al
  __asm ret
  __asm mov al, 1
  __asm ret
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

__declspec(naked) void FUN_10242f20(void)

{
  __asm mov ecx, dword ptr [ecx + 8]
  __asm test ecx, ecx
  __asm je 0x10242f2e
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x10]
  __asm jmp eax
  __asm xor al, al
  __asm ret 4
}



// Reference entry 10242f40; body size 19 bytes.
#line 1 "ENTRY_10242f40"

__declspec(naked) void FUN_10242f40(void)

{
  __asm mov ecx, dword ptr [ecx + 8]
  __asm test ecx, ecx
  __asm je 0x10242f4e
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x14]
  __asm jmp eax
  __asm xor al, al
  __asm ret 4
}



// Reference entry 10242f60; body size 19 bytes.
#line 1 "ENTRY_10242f60"

__declspec(naked) void FUN_10242f60(void)

{
  __asm mov ecx, dword ptr [ecx + 8]
  __asm test ecx, ecx
  __asm je 0x10242f6e
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x14]
  __asm jmp eax
  __asm xor al, al
  __asm ret 4
}



// Reference entry 10242f80; body size 19 bytes.
#line 1 "ENTRY_10242f80"

__declspec(naked) void FUN_10242f80(void)

{
  __asm mov ecx, dword ptr [ecx + 8]
  __asm test ecx, ecx
  __asm je 0x10242f8e
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x20]
  __asm jmp eax
  __asm xor al, al
  __asm ret 4
}



// Reference entry 10243140; body size 20 bytes.
#line 1 "ENTRY_10243140"

__declspec(naked) void FUN_10243140(void)

{
  __asm mov ecx, dword ptr [ecx + 0x84]
  __asm test ecx, ecx
  __asm je 0x10243151
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x14]
  __asm jmp eax
  __asm xor al, al
  __asm ret
}



// Reference entry 102431a0; body size 24 bytes.
#line 1 "ENTRY_102431a0"

__declspec(naked) void FUN_102431a0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm lea ecx, [esi - 0x28]
  __asm call LAB_100759aa
  __asm mov eax, dword ptr [esi + 0x24]
  __asm lea ecx, [esi + 0x24]
  __asm call dword ptr [eax + 0xc]
  __asm pop esi
  __asm ret 4
}



// Reference entry 102431c0; body size 50 bytes.
#line 1 "ENTRY_102431c0"

__declspec(naked) void FUN_102431c0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm cmp dword ptr [esi + 0xac], 1
  __asm je 0x102431d5
  __asm lea ecx, [esi - 0x40]
  __asm call LAB_10045df9
  __asm lea ecx, [esi - 0x40]
  __asm call LAB_100759aa
  __asm push 0
  __asm lea eax, [esi + 0xc]
  __asm push 0
  __asm push eax
  __asm call LAB_10042f64
  __asm add esp, 0xc
  __asm pop edi
  __asm pop esi
  __asm ret 4
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

__declspec(naked) void FUN_102432d0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm lea ecx, [esi - 0x40]
  __asm call LAB_100759aa
  __asm push 0
  __asm lea eax, [esi + 0xc]
  __asm push 0
  __asm push eax
  __asm call LAB_10042f64
  __asm add esp, 0xc
  __asm pop esi
  __asm ret 4
}



// Reference entry 10243650; body size 29 bytes.
#line 1 "ENTRY_10243650"

__declspec(naked) void FUN_10243650(void)

{
  __asm cmp byte ptr [ecx + 0x28], 0
  __asm je 0x10243665
  __asm push dword ptr [ecx + 0x30]
  __asm lea ecx, [ecx - 0x4c]
  __asm push dword ptr [ecx + 0x78]
  __asm call LAB_1001f8ed
  __asm ret
  __asm lea ecx, [ecx - 0x4c]
  __asm jmp LAB_10085b11
}



// Reference entry 10244e30; body size 20 bytes.
#line 1 "ENTRY_10244e30"

__declspec(naked) void FUN_10244e30(void)

{
  __asm mov ecx, dword ptr [ecx + 0x84]
  __asm test ecx, ecx
  __asm je 0x10244e41
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x10]
  __asm jmp eax
  __asm xor al, al
  __asm ret
}



// Reference entry 10245150; body size 41 bytes.
#line 1 "ENTRY_10245150"

__declspec(naked) void FUN_10245150(void)

{
  __asm cmp byte ptr [esp + 8], 0
  __asm push esi
  __asm mov esi, ecx
  __asm je 0x1024515f
  __asm call LAB_10099f30
  __asm mov eax, dword ptr [esp + 8]
  __asm test eax, eax
  __asm je 0x10245175
  __asm mov ecx, dword ptr [esi + 0x88]
  __asm push 0
  __asm push eax
  __asm call LAB_10037bc8
  __asm pop esi
  __asm ret 8
}



// Reference entry 10245940; body size 26 bytes.
#line 1 "ENTRY_10245940"

__declspec(naked) void FUN_10245940(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm test eax, eax
  __asm je 0x10245957
  __asm mov ecx, dword ptr [ecx + 0x88]
  __asm mov dword ptr [esp + 4], eax
  __asm jmp LAB_100373d5
  __asm ret 4
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

__declspec(naked) void FUN_10245a10(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm call LAB_1008ecbb
  __asm test al, al
  __asm jne 0x10245a39
  __asm push 0
  __asm mov byte ptr [esi + 0xe0], al
  __asm lea eax, [esi + 0x4c]
  __asm push 0
  __asm push eax
  __asm mov byte ptr [esi + 0x100], 1
  __asm call LAB_10042f64
  __asm add esp, 0xc
  __asm pop esi
  __asm ret
}



// Reference entry 10246020; body size 33 bytes.
#line 1 "ENTRY_10246020"

void __thiscall Recovered_Bulk::m_FUN_10246020(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_102460b0<>(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 10246050; body size 33 bytes.
#line 1 "ENTRY_10246050"

void __thiscall Recovered_Bulk::m_FUN_10246050(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_10246170<>(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x28);
  return;
}


// Reference entry 10246080; body size 33 bytes.
#line 1 "ENTRY_10246080"

void __thiscall Recovered_Bulk::m_FUN_10246080(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_10246290((int)(param_2),(int)(*(undefined4 *)(*param_1 + 4)));
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
    ((SCVtbl_2_0*)(piVar1))->v();
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
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10246a10; body size 48 bytes.
#line 1 "ENTRY_10246a10"

__declspec(naked) void FUN_10246a10(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x28
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



// Reference entry 10246a50; body size 48 bytes.
#line 1 "ENTRY_10246a50"

__declspec(naked) void FUN_10246a50(void)

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



// Reference entry 10246b40; body size 52 bytes.
#line 1 "ENTRY_10246b40"

__declspec(naked) void FUN_10246b40(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x18
  __asm mov dword ptr [esp + 8], esi
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
  __asm pop ecx
  __asm ret
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
  thunk_FUN_102460b0<>(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 102470c0; body size 28 bytes.
#line 1 "ENTRY_102470c0"

void __fastcall FUN_102470c0(int *param_1)

{
  thunk_FUN_10246170<>(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x28);
  return;
}


// Reference entry 102470f0; body size 28 bytes.
#line 1 "ENTRY_102470f0"

void __fastcall FUN_102470f0(int *param_1)

{
  thunk_FUN_10246290((int)(param_1),(int)(*(undefined4 *)(*param_1 + 4)));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 10247120; body size 28 bytes.
#line 1 "ENTRY_10247120"

void __fastcall FUN_10247120(int *param_1)

{
  thunk_FUN_102460b0<>(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 10247150; body size 28 bytes.
#line 1 "ENTRY_10247150"

void __fastcall FUN_10247150(int *param_1)

{
  thunk_FUN_10246170<>(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x28);
  return;
}


// Reference entry 10247180; body size 28 bytes.
#line 1 "ENTRY_10247180"

void __fastcall FUN_10247180(int *param_1)

{
  thunk_FUN_10246290((int)(param_1),(int)(*(undefined4 *)(*param_1 + 4)));
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

__declspec(naked) void FUN_102481b0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x102481cc
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x102481e2
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
}



// Reference entry 10248200; body size 61 bytes.
#line 1 "ENTRY_10248200"

__declspec(naked) void FUN_10248200(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x1024821c
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10248232
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
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
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 10248600; body size 60 bytes.
#line 1 "ENTRY_10248600"

__declspec(naked) void FUN_10248600(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0xc5 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp ecx, 0x1000
  __asm jb 0x10248629
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x10248636
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret 8
  __asm call dword ptr [LAB_122fc888]
}



// Reference entry 10248650; body size 28 bytes.
#line 1 "ENTRY_10248650"

void __fastcall FUN_10248650(int *param_1)

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


// Reference entry 10248750; body size 50 bytes.
#line 1 "ENTRY_10248750"

__declspec(naked) void FUN_10248750(void)

{
  __asm push esi
  __asm push offset LAB_11889b78
  __asm push 1
  __asm push offset LAB_11889b00
  __asm mov esi, ecx
  __asm call LAB_100238df
  __asm mov ecx, dword ptr [esi + 0xb4]
  __asm add esp, 0xc
  __asm call LAB_100638ae
  __asm push 0
  __asm call LAB_100883ca
  __asm mov ecx, eax
  __asm call LAB_10024a7d
  __asm pop esi
  __asm ret
}



// Reference entry 102493a0; body size 46 bytes.
#line 1 "ENTRY_102493a0"

__declspec(naked) void FUN_102493a0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0xa8]
  __asm test ecx, ecx
  __asm je 0x102493cc
  __asm call LAB_10068caf
  __asm mov ecx, dword ptr [esi + 0xa8]
  __asm test ecx, ecx
  __asm je 0x102493c2
  __asm mov eax, dword ptr [ecx]
  __asm push 1
  __asm call dword ptr [eax]
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xa8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret
}



// Reference entry 10249400; body size 40 bytes.
#line 1 "ENTRY_10249400"

__declspec(naked) void FUN_10249400(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm lea ecx, [edi + 0x80]
  __asm call LAB_10036af2
  __asm push 0x3e8
  __asm lea ecx, [edi + 0x80]
  __asm call LAB_100913f8
  __asm mov dword ptr [edi + 0x9c], eax
  __asm pop edi
  __asm pop esi
  __asm ret
}



// Reference entry 10249440; body size 40 bytes.
#line 1 "ENTRY_10249440"

__declspec(naked) void FUN_10249440(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm lea ecx, [edi + 0x80]
  __asm call LAB_10036af2
  __asm push 0x2710
  __asm lea ecx, [edi + 0x80]
  __asm call LAB_100913f8
  __asm mov dword ptr [edi + 0x98], eax
  __asm pop edi
  __asm pop esi
  __asm ret
}



// Reference entry 10249480; body size 37 bytes.
#line 1 "ENTRY_10249480"

__declspec(naked) void FUN_10249480(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov eax, dword ptr [esi + 0x98]
  __asm test eax, eax
  __asm je 0x10249499
  __asm push eax
  __asm lea ecx, [esi + 0x80]
  __asm call LAB_1001ec63
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0x98 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret
}



// Reference entry 10249b90; body size 40 bytes.
#line 1 "ENTRY_10249b90"

__declspec(naked) void FUN_10249b90(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm lea ecx, [edi + 0x80]
  __asm call LAB_10036af2
  __asm push 0xbb8
  __asm lea ecx, [edi + 0x80]
  __asm call LAB_100913f8
  __asm mov dword ptr [edi + 0xa4], eax
  __asm pop edi
  __asm pop esi
  __asm ret
}



// Reference entry 10249bd0; body size 40 bytes.
#line 1 "ENTRY_10249bd0"

__declspec(naked) void FUN_10249bd0(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm lea ecx, [edi + 0x80]
  __asm call LAB_10036af2
  __asm push 0xbb8
  __asm lea ecx, [edi + 0x80]
  __asm call LAB_100913f8
  __asm mov dword ptr [edi + 0xa0], eax
  __asm pop edi
  __asm pop esi
  __asm ret
}



// Reference entry 10249df0; body size 41 bytes.
#line 1 "ENTRY_10249df0"

__declspec(naked) void FUN_10249df0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10249e13
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



// Reference entry 10249e30; body size 41 bytes.
#line 1 "ENTRY_10249e30"

__declspec(naked) void FUN_10249e30(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10249e53
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

__declspec(naked) void FUN_1024a8f0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x1024a90c
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x1024a922
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
}



// Reference entry 1024a960; body size 26 bytes.
#line 1 "ENTRY_1024a960"

undefined4 * FUN_1024a960(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(DAT_121a0a18);
  *param_1 = (undefined4)(DAT_121a0a18);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1024ac20; body size 17 bytes.
#line 1 "ENTRY_1024ac20"

__declspec(naked) void FUN_1024ac20(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm push offset LAB_1187b054
  __asm call LAB_1008ca83
  __asm ret 4
}



// Reference entry 1024ac40; body size 22 bytes.
#line 1 "ENTRY_1024ac40"

__declspec(naked) void FUN_1024ac40(void)

{
  __asm push esi
  __asm lea esi, [ecx - 0xc]
  __asm mov ecx, esi
  __asm call LAB_10073eb1
  __asm mov ecx, esi
  __asm call LAB_10070662
  __asm pop esi
  __asm ret 4
}



// Reference entry 1024ac60; body size 22 bytes.
#line 1 "ENTRY_1024ac60"

__declspec(naked) void FUN_1024ac60(void)

{
  __asm push esi
  __asm lea esi, [ecx - 0x18]
  __asm mov ecx, esi
  __asm call LAB_10073eb1
  __asm mov ecx, esi
  __asm call LAB_10070662
  __asm pop esi
  __asm ret 4
}



// Reference entry 1024c220; body size 41 bytes.
#line 1 "ENTRY_1024c220"

__declspec(naked) void FUN_1024c220(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x1024c243
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



// Reference entry 1024c360; body size 60 bytes.
#line 1 "ENTRY_1024c360"

__declspec(naked) void FUN_1024c360(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_1150fb80
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ecx]
  __asm test ecx, ecx
  __asm je 0x1024c38d
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
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

__declspec(naked) void FUN_1024ed20(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x1024ed43
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



// Reference entry 1024ed80; body size 41 bytes.
#line 1 "ENTRY_1024ed80"

__declspec(naked) void FUN_1024ed80(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x1024eda3
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
    ((SCVtbl_1_0*)(piVar1))->v();
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
    ((SCVtbl_1_0*)(param_2))->v();
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

__declspec(naked) void FUN_1024f580(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x1024f59f
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



// Reference entry 1024f5e0; body size 33 bytes.
#line 1 "ENTRY_1024f5e0"

__declspec(naked) void FUN_1024f5e0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x1024f5ff
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

__declspec(naked) void FUN_1024fb70(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x2c]
  __asm push edi
  __asm lea edi, [esi + 8]
  __asm test ecx, ecx
  __asm je 0x1024fb93
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, edi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test byte ptr [esp + 0xc], 1
  __asm je 0x1024fba5
  __asm push 0x30
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm pop edi
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
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

__declspec(naked) void FUN_1024fd40(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x2c]
  __asm push edi
  __asm lea edi, [esi + 8]
  __asm test ecx, ecx
  __asm je 0x1024fd63
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, edi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm cmp byte ptr [esp + 0xc], 0
  __asm je 0x1024fd75
  __asm push 0x30
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 1024fd90; body size 39 bytes.
#line 1 "ENTRY_1024fd90"

__declspec(naked) void FUN_1024fd90(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov ecx, dword ptr [ecx + 0x2c]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [esp + 4], eax
  __asm test ecx, ecx
  __asm je 0x1024fdb2
  __asm push dword ptr [esp + 8]
  __asm mov eax, dword ptr [ecx]
  __asm lea edx, [esp + 8]
  __asm push edx
  __asm call dword ptr [eax + 8]
  __asm ret 8
  __asm call LAB_1148a05a
}



// Reference entry 1024fee0; body size 33 bytes.
#line 1 "ENTRY_1024fee0"

__declspec(naked) void FUN_1024fee0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x1024feff
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



// Reference entry 10250150; body size 35 bytes.
#line 1 "ENTRY_10250150"

__declspec(naked) void FUN_10250150(void)

{
  __asm mov eax, dword ptr [ecx + 8]
  __asm mov ecx, dword ptr [eax + 0x3c]
  __asm test ecx, ecx
  __asm je 0x10250170
  __asm mov eax, dword ptr [esp + 4]
  __asm lea edx, [esp + 4]
  __asm push dword ptr [esp + 8]
  __asm mov dword ptr [esp + 8], eax
  __asm mov eax, dword ptr [ecx]
  __asm push edx
  __asm call dword ptr [eax + 8]
  __asm ret 8
}



// Reference entry 10250180; body size 33 bytes.
#line 1 "ENTRY_10250180"

__declspec(naked) void FUN_10250180(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm push offset LAB_1188798c
  __asm call LAB_1008ca83
  __asm test al, al
  __asm je 0x1025019d
  __asm mov ecx, dword ptr [esi + 8]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x5c]
  __asm pop esi
  __asm ret 8
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

__declspec(naked) void FUN_10252b80(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x7c]
  __asm push 0
  __asm push esi
  __asm push ecx
  __asm mov ecx, esp
  __asm push offset LAB_1187aa88
  __asm call LAB_1005273e
  __asm mov ecx, dword ptr [esi + 8]
  __asm call LAB_10013543
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 10252bb0; body size 23 bytes.
#line 1 "ENTRY_10252bb0"

__declspec(naked) void FUN_10252bb0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm call LAB_10072e58
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax + 0x50]
  __asm mov ecx, esi
  __asm pop esi
  __asm jmp LAB_10016d51
}



// Reference entry 10252fa0; body size 34 bytes.
#line 1 "ENTRY_10252fa0"

__declspec(naked) void FUN_10252fa0(void)

{
  __asm push esi
  __asm push dword ptr [esp + 8]
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x18]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x78]
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x7c]
  __asm mov ecx, esi
  __asm call LAB_10073966
  __asm pop esi
  __asm ret 4
}



// Reference entry 10253110; body size 38 bytes.
#line 1 "ENTRY_10253110"

__declspec(naked) void FUN_10253110(void)

{
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm push dword ptr [esp + 0xc]
  __asm mov ecx, dword ptr [esi + 0x18]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x40]
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x7c]
  __asm mov ecx, esi
  __asm call LAB_10073966
  __asm pop esi
  __asm ret 8
}



// Reference entry 10253800; body size 17 bytes.
#line 1 "ENTRY_10253800"

__declspec(naked) void FUN_10253800(void)

{
  __asm mov ecx, dword ptr [ecx + 8]
  __asm push 0
  __asm push dword ptr [esp + 8]
  __asm call LAB_10037bc8
  __asm ret 4
}



// Reference entry 10254ee0; body size 33 bytes.
#line 1 "ENTRY_10254ee0"

void __thiscall Recovered_Bulk::m_FUN_10254ee0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_10254f10((int)(param_2),(int)(*(undefined4 *)(*param_1 + 4)));
  thunk_FUN_1148a50e(*param_1,0x20);
  return;
}


// Reference entry 10255010; body size 60 bytes.
#line 1 "ENTRY_10255010"

__declspec(naked) void FUN_10255010(void)

{
  __asm sub esp, 0xc
  __asm push esi
  __asm push edi
  __asm push dword ptr [esp + 0x18]
  __asm lea eax, [esp + 0xc]
  __asm mov edi, ecx
  __asm push eax
  __asm call LAB_10044dff
  __asm mov esi, dword ptr [esp + 0x10]
  __asm cmp byte ptr [esi + 0xd], 0
  __asm jne 0x10255042
  __asm mov ecx, dword ptr [esp + 0x18]
  __asm lea edx, [esi + 0x10]
  __asm push edx
  __asm call LAB_10070fbd
  __asm test al, al
  __asm mov eax, esi
  __asm je 0x10255044
  __asm mov eax, dword ptr [edi]
  __asm pop edi
  __asm pop esi
  __asm add esp, 0xc
  __asm ret 4
}



// Reference entry 102561c0; body size 59 bytes.
#line 1 "ENTRY_102561c0"

__declspec(naked) void FUN_102561c0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [esi + 4]
  __asm cmp edi, dword ptr [esi + 8]
  __asm je 0x102561ec
  __asm mov edx, dword ptr [esp + 0xc]
  __asm mov eax, dword ptr [edx]
  __asm mov dword ptr [edi], eax
  __asm mov ecx, dword ptr [edx + 4]
  __asm mov dword ptr [edi + 4], ecx
  __asm test ecx, ecx
  __asm je 0x102561e3
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm add dword ptr [esi + 4], 8
  __asm pop edi
  __asm pop esi
  __asm ret 4
  __asm push dword ptr [esp + 0xc]
  __asm push edi
  __asm call LAB_1005855d
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10257090; body size 41 bytes.
#line 1 "ENTRY_10257090"

__declspec(naked) void FUN_10257090(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x102570b3
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



// Reference entry 10257100; body size 41 bytes.
#line 1 "ENTRY_10257100"

__declspec(naked) void FUN_10257100(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10257123
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



// Reference entry 10257140; body size 41 bytes.
#line 1 "ENTRY_10257140"

__declspec(naked) void FUN_10257140(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10257163
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



// Reference entry 102571a0; body size 41 bytes.
#line 1 "ENTRY_102571a0"

__declspec(naked) void FUN_102571a0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x102571c3
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



// Reference entry 102571e0; body size 41 bytes.
#line 1 "ENTRY_102571e0"

__declspec(naked) void FUN_102571e0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10257203
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



// Reference entry 10257220; body size 24 bytes.
#line 1 "ENTRY_10257220"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10257220(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10257300; body size 48 bytes.
#line 1 "ENTRY_10257300"

__declspec(naked) void FUN_10257300(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x20
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



// Reference entry 10257dd0; body size 33 bytes.
#line 1 "ENTRY_10257dd0"

__declspec(naked) void FUN_10257dd0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10257def
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



// Reference entry 10257e00; body size 33 bytes.
#line 1 "ENTRY_10257e00"

__declspec(naked) void FUN_10257e00(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10257e1f
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



// Reference entry 10257e30; body size 33 bytes.
#line 1 "ENTRY_10257e30"

__declspec(naked) void FUN_10257e30(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10257e4f
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



// Reference entry 10257f20; body size 33 bytes.
#line 1 "ENTRY_10257f20"

__declspec(naked) void FUN_10257f20(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10257f3f
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



// Reference entry 10257f50; body size 60 bytes.
#line 1 "ENTRY_10257f50"

__declspec(naked) void FUN_10257f50(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm lea esi, [edi + 8]
  __asm push esi
  __asm mov dword ptr [edi], LAB_1188aaa4
  __asm push dword ptr [esi + 4]
  __asm push dword ptr [esi]
  __asm call LAB_10044a85
  __asm mov eax, dword ptr [esi]
  __asm add esp, 0xc
  __asm mov ecx, esi
  __asm mov dword ptr [esi + 4], eax
  __asm call LAB_1008751a
  __asm mov dword ptr [edi], LAB_11881068
  __asm dec dword ptr [LAB_121a0e68]
  __asm mov dword ptr [edi], LAB_1186d2f4
  __asm pop edi
  __asm pop esi
  __asm ret
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

__declspec(naked) void FUN_10258330(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_115124f0
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ecx]
  __asm test ecx, ecx
  __asm je 0x1025835d
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
}



// Reference entry 10258390; body size 60 bytes.
#line 1 "ENTRY_10258390"

__declspec(naked) void FUN_10258390(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_11512520
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ecx]
  __asm test ecx, ecx
  __asm je 0x102583bd
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
}



// Reference entry 102583f0; body size 60 bytes.
#line 1 "ENTRY_102583f0"

__declspec(naked) void FUN_102583f0(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_11512550
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ecx]
  __asm test ecx, ecx
  __asm je 0x1025841d
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
}



// Reference entry 10258450; body size 60 bytes.
#line 1 "ENTRY_10258450"

__declspec(naked) void FUN_10258450(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_11512580
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ecx]
  __asm test ecx, ecx
  __asm je 0x1025847d
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
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

__declspec(naked) void FUN_102584d0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x102584ef
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



// Reference entry 10258500; body size 33 bytes.
#line 1 "ENTRY_10258500"

__declspec(naked) void FUN_10258500(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x1025851f
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



// Reference entry 10258530; body size 33 bytes.
#line 1 "ENTRY_10258530"

__declspec(naked) void FUN_10258530(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x1025854f
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



// Reference entry 10258560; body size 33 bytes.
#line 1 "ENTRY_10258560"

__declspec(naked) void FUN_10258560(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x1025857f
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



// Reference entry 10258590; body size 33 bytes.
#line 1 "ENTRY_10258590"

__declspec(naked) void FUN_10258590(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x102585af
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



// Reference entry 102585c0; body size 33 bytes.
#line 1 "ENTRY_102585c0"

__declspec(naked) void FUN_102585c0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x102585df
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



// Reference entry 102586c0; body size 28 bytes.
#line 1 "ENTRY_102586c0"

void __fastcall FUN_102586c0(int *param_1)

{
  thunk_FUN_10254f10((int)(param_1),(int)(*(undefined4 *)(*param_1 + 4)));
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

__declspec(naked) void FUN_102587b0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x102587cf
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



// Reference entry 102587e0; body size 33 bytes.
#line 1 "ENTRY_102587e0"

__declspec(naked) void FUN_102587e0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x102587ff
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



// Reference entry 10258810; body size 33 bytes.
#line 1 "ENTRY_10258810"

__declspec(naked) void FUN_10258810(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x1025882f
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



// Reference entry 10258840; body size 33 bytes.
#line 1 "ENTRY_10258840"

__declspec(naked) void FUN_10258840(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x1025885f
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



// Reference entry 10258870; body size 33 bytes.
#line 1 "ENTRY_10258870"

__declspec(naked) void FUN_10258870(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x1025888f
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



// Reference entry 102588a0; body size 33 bytes.
#line 1 "ENTRY_102588a0"

__declspec(naked) void FUN_102588a0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x102588bf
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



// Reference entry 102588d0; body size 28 bytes.
#line 1 "ENTRY_102588d0"

void __fastcall FUN_102588d0(int *param_1)

{
  thunk_FUN_10254f10((int)(param_1),(int)(*(undefined4 *)(*param_1 + 4)));
  thunk_FUN_1148a50e(*param_1,0x20);
  return;
}


// Reference entry 10258c20; body size 62 bytes.
#line 1 "ENTRY_10258c20"

__declspec(naked) void FUN_10258c20(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm lea edi, [esi + 8]
  __asm mov dword ptr [esi], LAB_1188aa80
  __asm mov ecx, dword ptr [edi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10258c49
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, edi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esi], LAB_1188aa5c
  __asm dec dword ptr [LAB_121a0e68]
  __asm pop edi
  __asm mov dword ptr [esi], LAB_1186d2f4
  __asm pop esi
  __asm ret
}



// Reference entry 10258c70; body size 59 bytes.
#line 1 "ENTRY_10258c70"

__declspec(naked) void FUN_10258c70(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm lea esi, [edi + 8]
  __asm mov ecx, esi
  __asm mov dword ptr [edi], LAB_1188a980
  __asm mov eax, dword ptr [esi]
  __asm push dword ptr [eax + 4]
  __asm push esi
  __asm call LAB_10021ac1
  __asm push 0x20
  __asm push dword ptr [esi]
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm mov dword ptr [edi], LAB_1188a964
  __asm dec dword ptr [LAB_121a0e68]
  __asm mov dword ptr [edi], LAB_1186d2f4
  __asm pop edi
  __asm pop esi
  __asm ret
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

__declspec(naked) void FUN_10259a60(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x2c]
  __asm push edi
  __asm lea edi, [esi + 8]
  __asm test ecx, ecx
  __asm je 0x10259a83
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, edi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test byte ptr [esp + 0xc], 1
  __asm je 0x10259a95
  __asm push 0x30
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm pop edi
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10259ab0; body size 60 bytes.
#line 1 "ENTRY_10259ab0"

__declspec(naked) void FUN_10259ab0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x2c]
  __asm push edi
  __asm lea edi, [esi + 8]
  __asm test ecx, ecx
  __asm je 0x10259ad3
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, edi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test byte ptr [esp + 0xc], 1
  __asm je 0x10259ae5
  __asm push 0x30
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm pop edi
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10259b00; body size 60 bytes.
#line 1 "ENTRY_10259b00"

__declspec(naked) void FUN_10259b00(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x2c]
  __asm push edi
  __asm lea edi, [esi + 8]
  __asm test ecx, ecx
  __asm je 0x10259b23
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, edi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test byte ptr [esp + 0xc], 1
  __asm je 0x10259b35
  __asm push 0x30
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm pop edi
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10259b50; body size 35 bytes.
#line 1 "ENTRY_10259b50"

__declspec(naked) void FUN_10259b50(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm lea ecx, [esi + 8]
  __asm call LAB_10257e60
  __asm test byte ptr [esp + 8], 1
  __asm je 0x10259b6d
  __asm push 0x40
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10259b80; body size 60 bytes.
#line 1 "ENTRY_10259b80"

__declspec(naked) void FUN_10259b80(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x2c]
  __asm push edi
  __asm lea edi, [esi + 8]
  __asm test ecx, ecx
  __asm je 0x10259ba3
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, edi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test byte ptr [esp + 0xc], 1
  __asm je 0x10259bb5
  __asm push 0x30
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm pop edi
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
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

__declspec(naked) void FUN_1025a080(void)

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



// Reference entry 1025a4f0; body size 58 bytes.
#line 1 "ENTRY_1025a4f0"

__declspec(naked) void FUN_1025a4f0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x2c]
  __asm push edi
  __asm lea edi, [esi + 8]
  __asm test ecx, ecx
  __asm je 0x1025a513
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, edi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm cmp byte ptr [esp + 0xc], 0
  __asm je 0x1025a525
  __asm push 0x30
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 1025a540; body size 58 bytes.
#line 1 "ENTRY_1025a540"

__declspec(naked) void FUN_1025a540(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x2c]
  __asm push edi
  __asm lea edi, [esi + 8]
  __asm test ecx, ecx
  __asm je 0x1025a563
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, edi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm cmp byte ptr [esp + 0xc], 0
  __asm je 0x1025a575
  __asm push 0x30
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 1025a590; body size 58 bytes.
#line 1 "ENTRY_1025a590"

__declspec(naked) void FUN_1025a590(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x2c]
  __asm push edi
  __asm lea edi, [esi + 8]
  __asm test ecx, ecx
  __asm je 0x1025a5b3
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, edi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm cmp byte ptr [esp + 0xc], 0
  __asm je 0x1025a5c5
  __asm push 0x30
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 1025a5e0; body size 33 bytes.
#line 1 "ENTRY_1025a5e0"

__declspec(naked) void FUN_1025a5e0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm lea ecx, [esi + 8]
  __asm call LAB_10257e60
  __asm cmp byte ptr [esp + 8], 0
  __asm je 0x1025a5fd
  __asm push 0x40
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm pop esi
  __asm ret 4
}



// Reference entry 1025a610; body size 58 bytes.
#line 1 "ENTRY_1025a610"

__declspec(naked) void FUN_1025a610(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x2c]
  __asm push edi
  __asm lea edi, [esi + 8]
  __asm test ecx, ecx
  __asm je 0x1025a633
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, edi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm cmp byte ptr [esp + 0xc], 0
  __asm je 0x1025a645
  __asm push 0x30
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm pop edi
  __asm pop esi
  __asm ret 4
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

__declspec(naked) void FUN_1025a680(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm mov ecx, dword ptr [ecx + 0x2c]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [esp + 8], eax
  __asm test ecx, ecx
  __asm je 0x1025a6a2
  __asm mov eax, dword ptr [ecx]
  __asm lea edx, [esp + 8]
  __asm push edx
  __asm push dword ptr [esp + 8]
  __asm call dword ptr [eax + 8]
  __asm ret 8
  __asm call LAB_1148a05a
}



// Reference entry 1025a8d0; body size 21 bytes.
#line 1 "ENTRY_1025a8d0"

__declspec(naked) void FUN_1025a8d0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm add ecx, 8
  __asm push dword ptr [esp + 8]
  __asm push dword ptr [eax]
  __asm call LAB_10259410
  __asm ret 8
}



// Reference entry 1025a8f0; body size 39 bytes.
#line 1 "ENTRY_1025a8f0"

__declspec(naked) void FUN_1025a8f0(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm mov ecx, dword ptr [ecx + 0x2c]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [esp + 8], eax
  __asm test ecx, ecx
  __asm je 0x1025a912
  __asm mov eax, dword ptr [ecx]
  __asm lea edx, [esp + 8]
  __asm push edx
  __asm push dword ptr [esp + 8]
  __asm call dword ptr [eax + 8]
  __asm ret 8
  __asm call LAB_1148a05a
}



// Reference entry 1025b220; body size 33 bytes.
#line 1 "ENTRY_1025b220"

__declspec(naked) void FUN_1025b220(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x1025b23f
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



// Reference entry 1025b250; body size 33 bytes.
#line 1 "ENTRY_1025b250"

__declspec(naked) void FUN_1025b250(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x1025b26f
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



// Reference entry 1025b280; body size 33 bytes.
#line 1 "ENTRY_1025b280"

__declspec(naked) void FUN_1025b280(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x1025b29f
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



// Reference entry 1025b2b0; body size 33 bytes.
#line 1 "ENTRY_1025b2b0"

__declspec(naked) void FUN_1025b2b0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x1025b2cf
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



// Reference entry 1025b2e0; body size 33 bytes.
#line 1 "ENTRY_1025b2e0"

__declspec(naked) void FUN_1025b2e0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x1025b2ff
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



// Reference entry 1025b310; body size 33 bytes.
#line 1 "ENTRY_1025b310"

__declspec(naked) void FUN_1025b310(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x1025b32f
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



// Reference entry 1025b6c0; body size 61 bytes.
#line 1 "ENTRY_1025b6c0"

__declspec(naked) void FUN_1025b6c0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x1025b6dc
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x1025b6f2
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
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

__declspec(naked) void FUN_1025ba50(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0xc5 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp ecx, 0x1000
  __asm jb 0x1025ba79
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x1025ba86
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret 8
  __asm call dword ptr [LAB_122fc888]
}



// Reference entry 1025c4d0; body size 46 bytes.
#line 1 "ENTRY_1025c4d0"

__declspec(naked) void FUN_1025c4d0(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, ecx
  __asm cmp dword ptr [esi + 0x2c], 0
  __asm je 0x1025c4fb
  __asm mov eax, dword ptr [esi + 0x30]
  __asm sub esp, 8
  __asm mov edx, esp
  __asm mov dword ptr [edx], eax
  __asm mov ecx, dword ptr [esi + 0x34]
  __asm mov dword ptr [edx + 4], ecx
  __asm test ecx, ecx
  __asm je 0x1025c4f3
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm lea ecx, [esi + 8]
  __asm call LAB_10091a06
  __asm pop esi
  __asm pop ecx
  __asm ret
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

__declspec(naked) void FUN_1025c8e0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x2c]
  __asm test ecx, ecx
  __asm je 0x1025c8fd
  __asm mov eax, dword ptr [esp + 8]
  __asm lea edx, [esp + 8]
  __asm mov dword ptr [esp + 8], eax
  __asm mov eax, dword ptr [ecx]
  __asm push edx
  __asm push dword ptr [esp + 8]
  __asm call dword ptr [eax + 8]
  __asm ret 8
}



// Reference entry 1025cbd0; body size 59 bytes.
#line 1 "ENTRY_1025cbd0"

__declspec(naked) void FUN_1025cbd0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [esi + 4]
  __asm cmp edi, dword ptr [esi + 8]
  __asm je 0x1025cbfc
  __asm mov edx, dword ptr [esp + 0xc]
  __asm mov eax, dword ptr [edx]
  __asm mov dword ptr [edi], eax
  __asm mov ecx, dword ptr [edx + 4]
  __asm mov dword ptr [edi + 4], ecx
  __asm test ecx, ecx
  __asm je 0x1025cbf3
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm add dword ptr [esi + 4], 8
  __asm pop edi
  __asm pop esi
  __asm ret 4
  __asm push dword ptr [esp + 0xc]
  __asm push edi
  __asm call LAB_1005855d
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 1025d360; body size 16 bytes.
#line 1 "ENTRY_1025d360"

void FUN_1025d360(void)

{
  if ((int *)(DAT_121a0ae4) != (int *)(0x0)) {
                    
                    
    ((SCVtbl_6_0*)((int *)(uint)(DAT_121a0ae4)))->v();
    return;
  }
  return;
}


// Reference entry 1025d630; body size 41 bytes.
#line 1 "ENTRY_1025d630"

__declspec(naked) void FUN_1025d630(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x1025d653
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



// Reference entry 1025d670; body size 41 bytes.
#line 1 "ENTRY_1025d670"

__declspec(naked) void FUN_1025d670(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x1025d693
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

__declspec(naked) void FUN_1025d840(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_11513240
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ecx]
  __asm test ecx, ecx
  __asm je 0x1025d86d
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
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
  ((SCVtbl_12_1*)(*(int **)(param_1 + 8)))->v((int)(param_2));
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
  ((SCVtbl_5_1*)(*(int **)(param_1 + 8)))->v((int)(param_2));
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
  ((SCVtbl_7_1*)(*(int **)(param_1 + 8)))->v((int)(param_2));
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
  ((SCVtbl_11_1*)(*(int **)(param_1 + 8)))->v((int)(param_2));
  return (SCStr *)(param_2);
}


// Reference entry 1025df30; body size 17 bytes.
#line 1 "ENTRY_1025df30"

__declspec(naked) void FUN_1025df30(void)

{
  __asm mov ecx, dword ptr [ecx + 8]
  __asm test ecx, ecx
  __asm jne 0x1025df3a
  __asm xor al, al
  __asm ret
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x18]
  __asm jmp eax
}



// Reference entry 1025e1d0; body size 24 bytes.
#line 1 "ENTRY_1025e1d0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1025e1d0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1025e250; body size 59 bytes.
#line 1 "ENTRY_1025e250"

__declspec(naked) void FUN_1025e250(void)

{
  __asm push ecx
  __asm mov edx, dword ptr [esp + 8]
  __asm mov dword ptr [ecx], LAB_1188acc0
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ecx], LAB_1188ad1c
  __asm movzx eax, byte ptr [edx]
  __asm mov dword ptr [ecx + 8], eax
  __asm movzx eax, byte ptr [edx + 1]
  __asm mov dword ptr [ecx + 0xc], eax
  __asm movzx eax, byte ptr [edx + 2]
  __asm mov dword ptr [ecx + 0x10], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret 4
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

__declspec(naked) void FUN_1025e530(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [edi]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x38]
  __asm cmp dword ptr [esi + 0x10], eax
  __asm jne 0x1025e563
  __asm mov ecx, dword ptr [edi]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x30]
  __asm cmp dword ptr [esi + 0xc], eax
  __asm jne 0x1025e563
  __asm mov ecx, dword ptr [edi]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x1c]
  __asm cmp dword ptr [esi + 8], eax
  __asm jne 0x1025e563
  __asm pop edi
  __asm mov al, 1
  __asm pop esi
  __asm ret 4
  __asm pop edi
  __asm xor al, al
  __asm pop esi
  __asm ret 4
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

__declspec(naked) void FUN_1025e860(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm test esi, esi
  __asm je 0x1025e890
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x10]
  __asm test edi, edi
  __asm je 0x1025e88f
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax + 0x1c]
  __asm mov byte ptr [edi], al
  __asm mov ecx, esi
  __asm mov eax, dword ptr [esi]
  __asm call dword ptr [eax + 0x30]
  __asm mov byte ptr [edi + 1], al
  __asm mov ecx, esi
  __asm mov eax, dword ptr [esi]
  __asm call dword ptr [eax + 0x38]
  __asm mov byte ptr [edi + 2], al
  __asm pop edi
  __asm pop esi
  __asm ret
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

__declspec(naked) void FUN_1025e8c0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov edx, dword ptr [ecx]
  __asm push esi
  __asm mov esi, dword ptr [eax]
  __asm cmp edx, esi
  __asm jae 0x1025e8dd
  __asm mov eax, dword ptr [ecx + 4]
  __asm dec eax
  __asm add eax, edx
  __asm cmp eax, esi
  __asm jae 0x1025e8dd
  __asm mov al, 1
  __asm pop esi
  __asm ret 4
  __asm xor al, al
  __asm pop esi
  __asm ret 4
}



// Reference entry 1025e8f0; body size 35 bytes.
#line 1 "ENTRY_1025e8f0"

__declspec(naked) void FUN_1025e8f0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov edx, dword ptr [ecx]
  __asm push esi
  __asm mov esi, dword ptr [eax]
  __asm cmp edx, esi
  __asm jae 0x1025e90d
  __asm mov eax, dword ptr [ecx + 4]
  __asm dec eax
  __asm add eax, edx
  __asm cmp eax, esi
  __asm jae 0x1025e90d
  __asm mov al, 1
  __asm pop esi
  __asm ret 4
  __asm xor al, al
  __asm pop esi
  __asm ret 4
}



// Reference entry 1025e920; body size 55 bytes.
#line 1 "ENTRY_1025e920"

__declspec(naked) void FUN_1025e920(void)

{
  __asm mov edx, dword ptr [esp + 4]
  __asm push edi
  __asm mov edi, ecx
  __asm mov eax, dword ptr [edx + 4]
  __asm test eax, eax
  __asm je 0x1025e951
  __asm mov edx, dword ptr [edx]
  __asm mov ecx, dword ptr [edi]
  __asm push esi
  __asm lea esi, [eax - 1]
  __asm mov eax, dword ptr [edi + 4]
  __asm dec eax
  __asm add esi, edx
  __asm add eax, ecx
  __asm cmp ecx, edx
  __asm cmovae ecx, edx
  __asm cmp eax, esi
  __asm mov dword ptr [edi], ecx
  __asm cmovbe eax, esi
  __asm sub eax, ecx
  __asm inc eax
  __asm mov dword ptr [edi + 4], eax
  __asm pop esi
  __asm mov eax, edi
  __asm pop edi
  __asm ret 4
}



// Reference entry 1025e970; body size 61 bytes.
#line 1 "ENTRY_1025e970"

__declspec(naked) void FUN_1025e970(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push ebx
  __asm mov bl, 1
  __asm mov edx, dword ptr [eax + 4]
  __asm test edx, edx
  __asm je 0x1025e9a7
  __asm push esi
  __asm mov esi, dword ptr [eax]
  __asm lea eax, [edx - 1]
  __asm push edi
  __asm mov edi, dword ptr [ecx]
  __asm add eax, esi
  __asm cmp edi, eax
  __asm ja 0x1025e99f
  __asm mov eax, dword ptr [ecx + 4]
  __asm dec eax
  __asm add eax, edi
  __asm cmp eax, esi
  __asm jb 0x1025e99f
  __asm pop edi
  __asm pop esi
  __asm mov al, bl
  __asm pop ebx
  __asm ret 4
  __asm pop edi
  __asm pop esi
  __asm xor al, al
  __asm pop ebx
  __asm ret 4
  __asm mov al, bl
  __asm pop ebx
  __asm ret 4
}



// Reference entry 1025e9c0; body size 62 bytes.
#line 1 "ENTRY_1025e9c0"

__declspec(naked) void FUN_1025e9c0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push ebx
  __asm mov bl, 1
  __asm mov edx, dword ptr [eax + 4]
  __asm test edx, edx
  __asm je 0x1025e9f8
  __asm push esi
  __asm mov esi, dword ptr [eax]
  __asm push edi
  __asm mov edi, dword ptr [ecx]
  __asm lea eax, [esi + edx]
  __asm cmp edi, eax
  __asm ja 0x1025e9f0
  __asm mov ecx, dword ptr [ecx + 4]
  __asm lea eax, [esi - 1]
  __asm dec ecx
  __asm add ecx, edi
  __asm cmp ecx, eax
  __asm jb 0x1025e9f0
  __asm pop edi
  __asm pop esi
  __asm mov al, bl
  __asm pop ebx
  __asm ret 4
  __asm pop edi
  __asm pop esi
  __asm xor al, al
  __asm pop ebx
  __asm ret 4
  __asm mov al, bl
  __asm pop ebx
  __asm ret 4
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

__declspec(naked) void FUN_1025ed20(void)

{
  __asm sub esp, 0xc
  __asm push esi
  __asm push edi
  __asm push dword ptr [esp + 0x18]
  __asm lea eax, [esp + 0xc]
  __asm mov edi, ecx
  __asm push eax
  __asm call LAB_10099378
  __asm mov esi, dword ptr [esp + 0x10]
  __asm cmp byte ptr [esi + 0xd], 0
  __asm jne 0x1025ed52
  __asm mov ecx, dword ptr [esp + 0x18]
  __asm lea edx, [esi + 0x10]
  __asm push edx
  __asm call LAB_10070fbd
  __asm test al, al
  __asm mov eax, esi
  __asm je 0x1025ed54
  __asm mov eax, dword ptr [edi]
  __asm pop edi
  __asm pop esi
  __asm add esp, 0xc
  __asm ret 4
}



// Reference entry 1025f100; body size 41 bytes.
#line 1 "ENTRY_1025f100"

__declspec(naked) void FUN_1025f100(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x1025f123
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



// Reference entry 1025f140; body size 24 bytes.
#line 1 "ENTRY_1025f140"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1025f140(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1025f340; body size 58 bytes.
#line 1 "ENTRY_1025f340"

__declspec(naked) void FUN_1025f340(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm push dword ptr [esp + 0x14]
  __asm mov dword ptr [esp + 0xc], esi
  __asm call LAB_1003718c
  __asm mov dword ptr [esi + 0x18], 0x400
  __asm mov eax, esi
  __asm mov byte ptr [esi + 0x1c], 0
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x20 __asm _emit 0x03 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov word ptr [esi + 0x24], 0
  __asm mov dword ptr [esi], LAB_1188aea4
  __asm pop esi
  __asm pop ecx
  __asm ret 8
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

__declspec(naked) void FUN_10260460(void)

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

__declspec(naked) void FUN_10261170(void)

{
  __asm push offset LAB_1188b074
  __asm add ecx, 0x18
  __asm call LAB_1008ca83
  __asm xor ecx, ecx
  __asm test al, al
  __asm setne cl
  __asm lea eax, [ecx + 3]
  __asm ret
}



// Reference entry 102611e0; body size 27 bytes.
#line 1 "ENTRY_102611e0"

__declspec(naked) void FUN_102611e0(void)

{
  __asm mov edx, dword ptr [ecx + 0x10]
  __asm lea eax, [ecx + 0xc]
  __asm push edi
  __asm push eax
  __asm push dword ptr [esp + 0xc]
  __asm mov edi, dword ptr [edx]
  __asm mov ecx, edx
  __asm call dword ptr [edi + 0x18]
  __asm mov eax, dword ptr [esp + 8]
  __asm pop edi
  __asm ret 4
}



// Reference entry 10261210; body size 30 bytes.
#line 1 "ENTRY_10261210"

__declspec(naked) void FUN_10261210(void)

{
  __asm mov edx, dword ptr [ecx + 0x14]
  __asm lea eax, [ecx + 0xc]
  __asm push edi
  __asm push eax
  __asm push dword ptr [esp + 0xc]
  __asm mov edi, dword ptr [edx]
  __asm mov ecx, edx
  __asm call dword ptr [edi + 0xd0]
  __asm mov eax, dword ptr [esp + 8]
  __asm pop edi
  __asm ret 4
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


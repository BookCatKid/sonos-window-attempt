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
struct SCLibrary { char _pad; SCLibrary(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); template<class... A> int getSCHousehold(A...); template<class... A> int getSingleton(A...); };
struct SCStr { char _pad; SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); template<class... A> int endsWith(A...); template<class... A> int format(A...); template<class... A> int int_addref(A...); template<class... A> int int_allocRep(A...); template<class... A> int int_release(A...); static int op_ctor(...) { return 0; } static int op_eq(...) { return 0; } template<class... A> int stringWithFormat(A...); };
struct Aborting { char _pad; Aborting(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Beginning { char _pad; Beginning(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Connection { char _pad; Connection(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Error { char _pad; Error(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Failed { char _pad; Failed(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Globals { char _pad; Globals(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Page { char _pad; Page(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCAppUrlAction { char _pad; SCAppUrlAction(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIClipboardDelegate { char _pad; SCIClipboardDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIHapticDelegate { char _pad; SCIHapticDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIObj { char _pad; SCIObj(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIUrlSessionCallback { char _pad; SCIUrlSessionCallback(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIUrlSessionProvider { char _pad; SCIUrlSessionProvider(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIWifiDelegate { char _pad; SCIWifiDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCLifecycleOp { char _pad; SCLifecycleOp(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCSubmitDiagsWizard { char _pad; SCSubmitDiagsWizard(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCSubmitDiagsWizardDonePage { char _pad; SCSubmitDiagsWizardDonePage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCSubmitDiagsWizardErrorPage { char _pad; SCSubmitDiagsWizardErrorPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCSubmitDiagsWizardIntroPage { char _pad; SCSubmitDiagsWizardIntroPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCSubmitDiagsWizardSubmittingPage { char _pad; SCSubmitDiagsWizardSubmittingPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
typedef void *HTTP;
typedef void *URL;
typedef void *WARNING;
using namespace std;
struct Recovered_Bulk { char _pad; undefined4 __thiscall m_FUN_1060c450(undefined4 param_2); template<class... A> int m_FUN_1060c450(A...); undefined4 __thiscall m_FUN_1060cfc0(undefined4 param_2); template<class... A> int m_FUN_1060cfc0(A...); undefined4 __thiscall m_FUN_1060ef00(undefined4 param_2); template<class... A> int m_FUN_1060ef00(A...); undefined4 __thiscall m_FUN_10610e90(undefined4 param_2); template<class... A> int m_FUN_10610e90(A...); undefined4 __thiscall m_FUN_10612300(undefined4 param_2); template<class... A> int m_FUN_10612300(A...); undefined4 __thiscall m_FUN_106142d0(undefined4 param_2); template<class... A> int m_FUN_106142d0(A...); SCStr * __thiscall m_FUN_10618a10(SCStr *param_2); template<class... A> int m_FUN_10618a10(A...); int __thiscall m_FUN_106190a0(char param_2,undefined4 param_3); template<class... A> int m_FUN_106190a0(A...); int __thiscall m_FUN_10619290(char param_2,undefined4 param_3); template<class... A> int m_FUN_10619290(A...); int __thiscall m_FUN_10619490(char param_2,undefined4 param_3); template<class... A> int m_FUN_10619490(A...); void __thiscall m_FUN_1061a9b0(int *param_2); template<class... A> int m_FUN_1061a9b0(A...); void __thiscall m_FUN_1061ae30(SCStr *param_2); template<class... A> int m_FUN_1061ae30(A...); void __thiscall m_FUN_1061b850(undefined4 param_2); template<class... A> int m_FUN_1061b850(A...); void __thiscall m_FUN_1061c370(undefined4 *param_2); template<class... A> int m_FUN_1061c370(A...); void __thiscall m_FUN_1061c630(undefined4 param_2); template<class... A> int m_FUN_1061c630(A...); void __thiscall m_FUN_1061c700(int param_2); template<class... A> int m_FUN_1061c700(A...); undefined4 * __thiscall m_FUN_1061cf50(byte param_2); template<class... A> int m_FUN_1061cf50(A...); undefined4 * __thiscall m_FUN_1061dcf0(undefined4 *param_2,SCStr *param_3); template<class... A> int m_FUN_1061dcf0(A...); void __thiscall m_FUN_1061dda0(int *param_2); template<class... A> int m_FUN_1061dda0(A...); int * __thiscall m_FUN_1061e120(int *param_2); template<class... A> int m_FUN_1061e120(A...); int * __thiscall m_FUN_1061e250(undefined4 *param_2); template<class... A> int m_FUN_1061e250(A...); undefined4 * __thiscall m_FUN_1061e420(char *param_2,undefined4 param_3); template<class... A> int m_FUN_1061e420(A...); undefined4 * __thiscall m_FUN_1061e510(char *param_2,undefined4 param_3); template<class... A> int m_FUN_1061e510(A...); undefined4 * __thiscall m_FUN_1061e600(char *param_2,undefined4 param_3); template<class... A> int m_FUN_1061e600(A...); undefined4 * __thiscall m_FUN_1061e6f0(char *param_2,undefined4 param_3); template<class... A> int m_FUN_1061e6f0(A...); undefined4 * __thiscall m_FUN_1061e8b0(undefined4 param_2); template<class... A> int m_FUN_1061e8b0(A...); undefined4 * __thiscall m_FUN_1061ea00(undefined4 param_2); template<class... A> int m_FUN_1061ea00(A...); undefined4 * __thiscall m_FUN_1061eb50(undefined4 param_2); template<class... A> int m_FUN_1061eb50(A...); undefined4 * __thiscall m_FUN_1061ecc0(undefined4 param_2); template<class... A> int m_FUN_1061ecc0(A...); undefined4 * __thiscall m_FUN_1061f960(byte param_2); template<class... A> int m_FUN_1061f960(A...); undefined4 * __thiscall m_FUN_1061fab0(byte param_2); template<class... A> int m_FUN_1061fab0(A...); };

extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern int createPropertyBag(...);
extern int operator_new(...);
extern int thunk_FUN_101aa9f0(...);
extern int thunk_FUN_101b5500(...);
extern int thunk_FUN_101b5540(...);
extern int thunk_FUN_101b5de0(...);
extern int thunk_FUN_101b5e50(...);
extern int thunk_FUN_101b92f0(...);
extern int thunk_FUN_101b9dd0(...);
extern int thunk_FUN_101da390(...);
extern int thunk_FUN_101da4a0(...);
extern int thunk_FUN_10263630(...);
extern int thunk_FUN_10302280(...);
extern int thunk_FUN_1034e150(...);
extern int thunk_FUN_10351370(...);
extern int thunk_FUN_10391e10(...);
extern int thunk_FUN_10436ac0(...);
extern int thunk_FUN_10436c60(...);
extern int thunk_FUN_10436cd0(...);
extern int thunk_FUN_10483f70(...);
extern int thunk_FUN_105a1c80(...);
extern int thunk_FUN_105a1d20(...);
extern int thunk_FUN_105a26b0(...);
extern int thunk_FUN_105a3210(...);
extern int thunk_FUN_105ad8f0(...);
extern int thunk_FUN_105bebd0(...);
extern int thunk_FUN_105c2260(...);
extern int thunk_FUN_105f29d0(...);
extern int thunk_FUN_105f34e0(...);
extern int thunk_FUN_105f36d0(...);
extern int thunk_FUN_105f38c0(...);
extern int thunk_FUN_105f3ab0(...);
extern int thunk_FUN_105f5920(...);
extern int thunk_FUN_105f5a00(...);
extern int thunk_FUN_105f5d20(...);
extern int thunk_FUN_105f5df0(...);
extern int thunk_FUN_105f60e0(...);
extern int thunk_FUN_105f6290(...);
extern int thunk_FUN_105feb30(...);
extern int thunk_FUN_105ff930(...);
extern int thunk_FUN_10601430(...);
extern int thunk_FUN_106045d0(...);
extern int thunk_FUN_10604700(...);
extern int thunk_FUN_10604790(...);
extern int thunk_FUN_10604820(...);
extern int thunk_FUN_10605020(...);
extern int thunk_FUN_10605060(...);
extern int thunk_FUN_106050a0(...);
extern int thunk_FUN_106052d0(...);
extern int thunk_FUN_10607c00(...);
extern int thunk_FUN_10610c60(...);
extern int thunk_FUN_10618a10(...);
extern int thunk_FUN_106190a0(...);
extern int thunk_FUN_10619290(...);
extern int thunk_FUN_1061c630(...);
extern int thunk_FUN_1061d290(...);
extern int thunk_FUN_106bc6b0(...);
extern int thunk_FUN_106d83f0(...);
extern int thunk_FUN_106de0c0(...);
extern int thunk_FUN_106de2c0(...);
extern int thunk_FUN_106de840(...);
extern int thunk_FUN_106dfa00(...);
extern int thunk_FUN_106dfb80(...);
extern int thunk_FUN_10765a30(...);
extern int thunk_FUN_1076bf90(...);
extern int thunk_FUN_1077d290(...);
extern int thunk_FUN_1087e2b0(...);
extern int thunk_FUN_1090a990(...);
extern int thunk_FUN_1090e8d0(...);
extern int thunk_FUN_1090f0a0(...);
extern int thunk_FUN_10916a90(...);
extern int thunk_FUN_109543b0(...);
extern int thunk_FUN_109f3bb0(...);
extern int thunk_FUN_10beed80(...);
extern int thunk_FUN_10bf11c0(...);
extern int thunk_FUN_10bf11e0(...);
extern int thunk_FUN_10c2f5a0(...);
extern int thunk_FUN_10c31e60(...);
extern int thunk_FUN_10c5f1d0(...);
extern int thunk_FUN_10c5f450(...);
extern int thunk_FUN_10c5f8a0(...);
extern int thunk_FUN_10c61010(...);
extern int thunk_FUN_10c61ec0(...);
extern int thunk_FUN_10c61f70(...);
extern int thunk_FUN_10c62d50(...);
extern int thunk_FUN_10c653a0(...);
extern int thunk_FUN_10c65960(...);
extern int thunk_FUN_10c65f30(...);
extern int thunk_FUN_10c96f10(...);
extern int thunk_FUN_10c97610(...);
extern int thunk_FUN_10c97b50(...);
extern int thunk_FUN_10c98710(...);
extern int thunk_FUN_10c99580(...);
extern int thunk_FUN_10c9b9a0(...);
extern int thunk_FUN_10c9c440(...);
extern int thunk_FUN_10c9c730(...);
extern int thunk_FUN_10c9c820(...);
extern int thunk_FUN_10cf34e0(...);
extern int thunk_FUN_10cf3630(...);
extern int thunk_FUN_10cf4ae0(...);
extern int thunk_FUN_10cf4eb0(...);
extern int thunk_FUN_10cf5140(...);
extern int thunk_FUN_10cf5250(...);
extern int thunk_FUN_10deee60(...);
extern int thunk_FUN_10def0d0(...);
extern int thunk_FUN_10def290(...);
extern int thunk_FUN_10def350(...);
extern int thunk_FUN_10def450(...);
extern int thunk_FUN_10def8c0(...);
extern int thunk_FUN_10def940(...);
extern int thunk_FUN_10df1160(...);
extern int thunk_FUN_10df2df0(...);
extern int thunk_FUN_10df6f00(...);
extern int thunk_FUN_10df95e0(...);
extern int thunk_FUN_10df9760(...);
extern int thunk_FUN_10dfa860(...);
extern int thunk_FUN_10dfa930(...);
extern int thunk_FUN_10dfb8f0(...);
extern int thunk_FUN_10dfba00(...);
extern int thunk_FUN_10dfbb10(...);
extern int thunk_FUN_10dfd7b0(...);
extern int thunk_FUN_10e0f250(...);
extern int thunk_FUN_10e0f500(...);
extern int thunk_FUN_10eac670(...);
extern int thunk_FUN_10eac850(...);
extern int thunk_FUN_10eac8a0(...);
extern int thunk_FUN_10eac8c0(...);
extern int thunk_FUN_10eac8d0(...);
extern int thunk_FUN_10eacce0(...);
extern int thunk_FUN_10eacda0(...);
extern int thunk_FUN_10eacdc0(...);
extern int thunk_FUN_10eace90(...);
extern int thunk_FUN_10eacea0(...);
extern int thunk_FUN_10eaceb0(...);
extern int thunk_FUN_10ead100(...);
extern int thunk_FUN_10ead150(...);
extern int thunk_FUN_10ead560(...);
extern int thunk_FUN_10ead570(...);
extern int thunk_FUN_10ead580(...);
extern int thunk_FUN_10ead590(...);
extern int thunk_FUN_10ead5c0(...);
extern int thunk_FUN_10ead920(...);
extern int thunk_FUN_10ead930(...);
extern int thunk_FUN_10ead960(...);
extern int thunk_FUN_10ead9a0(...);
extern int thunk_FUN_10eae090(...);
extern int thunk_FUN_10eb0a60(...);
extern int thunk_FUN_10eb0d90(...);
extern int thunk_FUN_10eb0e10(...);
extern int thunk_FUN_10eb1dc0(...);
extern int thunk_FUN_10eb22a0(...);
extern int thunk_FUN_10eb41b0(...);
extern int thunk_FUN_10eb41c0(...);
extern int thunk_FUN_10eb6cc0(...);
extern int thunk_FUN_10eba400(...);
extern int thunk_FUN_10eba5f0(...);
extern int thunk_FUN_10eba7e0(...);
extern int thunk_FUN_10ebb810(...);
extern int thunk_FUN_10ebb8e0(...);
extern int thunk_FUN_10ebbab0(...);
extern int thunk_FUN_10ebc1d0(...);
extern int thunk_FUN_10ebc1e0(...);
extern int thunk_FUN_10ec0a20(...);
extern int thunk_FUN_10ec0bb0(...);
extern int thunk_FUN_10ec1a10(...);
extern int thunk_FUN_10ec1b40(...);
extern int thunk_FUN_10ec1c00(...);
extern int thunk_FUN_10ec1d20(...);
extern int thunk_FUN_10ec1d40(...);
extern int thunk_FUN_10ec7940(...);
extern int thunk_FUN_10ecb9f0(...);
extern int thunk_FUN_10ecbbd0(...);
extern int thunk_FUN_10ecc7e0(...);
extern int thunk_FUN_10ecd540(...);
extern int thunk_FUN_10ecea60(...);
extern int thunk_FUN_10eced20(...);
extern int thunk_FUN_10ed5f60(...);
extern int thunk_FUN_10ee3000(...);
extern int thunk_FUN_10ee48c0(...);
extern int thunk_FUN_10eeaee0(...);
extern int thunk_FUN_10eeb270(...);
extern int thunk_FUN_1109f100(...);
extern int thunk_FUN_1109f7f0(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1123fce0(...);
extern int thunk_FUN_11248b40(...);
extern int thunk_FUN_112af4e0(...);
extern int thunk_FUN_113cfb70(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148ac28(...);
extern int DAT_1186d2ee;
extern int DAT_11882ff0;
extern int DAT_1188465c;
extern int DAT_1189f4a8;
extern int DAT_118bd268;
extern int DAT_118bd270;
extern int DAT_118be660;
extern int DAT_12126b84;
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
extern int DAT_121a2238;
extern int DAT_121a223c;
extern int DAT_121a2240;
extern int DAT_121a2244;
extern int DAT_121a2248;
extern int _UNK_118be664;
extern int _UNK_118be668;
extern int _UNK_118be66c;
extern int g_lSCObjCount;
extern int ghidra_vftable_SCConditionalElementTree;
extern int ghidra_vftable_SCConditionalElementTreeNoAppendInterface;
extern int ghidra_vftable_SCConditionalVectorBuilderTree;
extern int ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface;
extern int ghidra_vftable_SCDisplayCustomControlActionDescriptor;
extern int ghidra_vftable_SCEventSinkDelegate;
extern int ghidra_vftable_SCEventSinkDelegateInternal;
extern int ghidra_vftable_SCFetchLifecycleDevicesOp;
extern int ghidra_vftable_SCIObj;
extern int ghidra_vftable_SCIObjImpl;
extern int ghidra_vftable_SCNewWizPageFor;
extern int ghidra_vftable_SCNewWizStateTypeFor;
extern int ghidra_vftable_SCOpenUrlActionDescriptor;
extern int ghidra_vftable_SCSubmitDiagsWizardDonePageType;
extern int ghidra_vftable_SCSubmitDiagsWizardErrorPageType;
extern int ghidra_vftable_SCSubmitDiagsWizardIntroPageType;
extern int ghidra_vftable_SCSubmitDiagsWizardSubmittingPageType;
extern int ghidra_vftable_SCSubmitDiagsWizardType;
extern int uStack_1c;
extern int uStack_20;
extern int uStack_24;
extern int uStack_28;
extern int uStack_2c;
extern int uStack_3c;
extern int uStack_48;
extern int uStack_54;
extern int uStack_5c;
extern int uStack_64;
extern int uStack_8;
extern int uStack_88;
extern int unaff_EBX;
extern undefined1 LAB_1060c9c8[];
extern undefined1 LAB_1060cb17[];
extern undefined1 LAB_1060d4d5[];
extern undefined1 LAB_1060d625[];
extern undefined1 LAB_1060e118[];
extern undefined1 LAB_1060eb65[];
extern undefined1 LAB_1060f3e6[];
extern undefined1 LAB_1060f535[];
extern undefined1 LAB_1060fc51[];
extern undefined1 LAB_10610055[];
extern undefined1 LAB_10610759[];
extern undefined1 LAB_10610d8d[];
extern undefined1 LAB_1061143c[];
extern undefined1 LAB_106118ac[];
extern undefined1 LAB_10611b4c[];
extern undefined1 LAB_10611d6c[];
extern undefined1 LAB_10611fbe[];
extern undefined1 LAB_1061222c[];
extern undefined1 LAB_1061240d[];
extern undefined1 LAB_1061257c[];
extern undefined1 LAB_106127cf[];
extern undefined1 LAB_10612a0d[];
extern undefined1 LAB_10612b83[];
extern undefined1 LAB_10612e1c[];
extern undefined1 LAB_106130c1[];
extern undefined1 LAB_10613427[];
extern undefined1 LAB_10613460[];
extern undefined1 LAB_10613652[];
extern undefined1 LAB_106139dd[];
extern undefined1 LAB_10613bce[];
extern undefined1 LAB_10613eec[];
extern undefined1 LAB_106146e5[];
extern undefined1 LAB_10615045[];
extern undefined1 LAB_10615995[];
extern undefined1 LAB_10616735[];
extern undefined1 LAB_10616b65[];
extern undefined1 LAB_10616e75[];
extern undefined1 LAB_106171ec[];
extern undefined1 LAB_10617615[];
extern undefined1 LAB_10617925[];
extern undefined1 LAB_10617d86[];
extern undefined1 LAB_106183d4[];
extern undefined1 LAB_10618755[];
extern undefined1 LAB_106191b7[];
extern undefined1 LAB_106193b2[];
extern undefined1 LAB_106195fc[];
extern undefined1 LAB_1061a74f[];
extern undefined1 LAB_1061abac[];
extern undefined1 LAB_1061abd5[];
extern undefined1 LAB_1061afd6[];
extern undefined1 LAB_1061b497[];
extern undefined1 LAB_1061d5d8[];
extern undefined1 LAB_1061d602[];
extern undefined1 LAB_1061dfe1[];
extern undefined1 LAB_1061e027[];
extern undefined1 LAB_115bbc47[];
extern undefined1 LAB_115bbde7[];
extern undefined1 LAB_115bbf8d[];
extern undefined1 LAB_115bc0e9[];
extern undefined1 LAB_115bc267[];
extern undefined1 LAB_115bc34d[];
extern undefined1 LAB_115bc3f5[];
extern undefined1 LAB_115bc522[];
extern undefined1 LAB_115bc5bd[];
extern undefined1 LAB_115bc67a[];
extern undefined1 LAB_115bc705[];
extern undefined1 LAB_115bc765[];
extern undefined1 LAB_115bc7bd[];
extern undefined1 LAB_115bc815[];
extern undefined1 LAB_115bc875[];
extern undefined1 LAB_115bc8fb[];
extern undefined1 LAB_115bc955[];
extern undefined1 LAB_115bc9c8[];
extern undefined1 LAB_115bca2d[];
extern undefined1 LAB_115bca95[];
extern undefined1 LAB_115bcb51[];
extern undefined1 LAB_115bcbd5[];
extern undefined1 LAB_115bcc25[];
extern undefined1 LAB_115bcce5[];
extern undefined1 LAB_115bce76[];
extern undefined1 LAB_115bcf25[];
extern undefined1 LAB_115bd1de[];
extern undefined1 LAB_115bd319[];
extern undefined1 LAB_115bd395[];
extern undefined1 LAB_115bd405[];
extern undefined1 LAB_115bd4a9[];
extern undefined1 LAB_115bd525[];
extern undefined1 LAB_115bd595[];
extern undefined1 LAB_115bd689[];
extern undefined1 LAB_115bd715[];
extern undefined1 LAB_115bd7b9[];
extern undefined1 LAB_115bd81d[];
extern undefined1 LAB_115bd870[];
extern undefined1 LAB_115bd8ad[];
extern undefined1 LAB_115bd8ed[];
extern undefined1 LAB_115bd92d[];
extern undefined1 LAB_115bd9bf[];
extern undefined1 LAB_115bda55[];
extern undefined1 LAB_115bdaad[];
extern undefined1 LAB_115bdba7[];
extern undefined1 LAB_115bdc1d[];
extern undefined1 LAB_115bdc65[];
extern undefined1 LAB_115bdca5[];
extern undefined1 LAB_115bdd22[];
extern undefined1 LAB_115bdd75[];
extern undefined1 LAB_115bddb5[];
extern undefined1 LAB_115bde15[];
extern undefined1 LAB_115bde6d[];
extern undefined1 LAB_115bdeb5[];
extern undefined1 LAB_115bdeed[];
extern undefined1 LAB_115bdf35[];
extern undefined1 LAB_115bdfd5[];
extern undefined1 LAB_115be082[];
extern undefined1 LAB_115be0c0[];
extern undefined1 LAB_115be0f0[];
extern undefined1 LAB_115be120[];
extern undefined1 LAB_115be40d[];
extern undefined1 LAB_115be4ab[];
extern undefined1 LAB_115be5dd[];
extern undefined1 LAB_115be67d[];
extern undefined1 LAB_115be6cd[];
extern undefined1 LAB_115be715[];
extern undefined1 LAB_115be76e[];
extern undefined1 LAB_115be7ce[];
extern undefined1 LAB_115be82e[];
extern undefined1 LAB_115be88e[];
extern undefined1 LAB_115be8ee[];
extern undefined1 LAB_115be94e[];
extern undefined1 LAB_115be9ae[];
extern undefined1 LAB_115bea0e[];
extern undefined1 LAB_115beb35[];
extern undefined1 LAB_115beba0[];
extern undefined1 LAB_115bebd0[];
extern undefined1 LAB_115bec00[];
extern undefined1 LAB_115bec30[];
extern undefined1 LAB_115bec60[];
extern undefined1 LAB_115bec90[];
extern undefined1 LAB_115becc0[];
extern undefined1 LAB_115becf0[];
extern undefined1 LAB_115bed20[];
extern int *stack0x00000004;
extern int *stack0xffffffb4;
extern int *stack0xfffffffc;
extern void *ExceptionList;
undefined4 __stdcall FUN_1060dac0(undefined4 param_1);
template<class... A> int FUN_1060dac0(A...);
undefined4 __stdcall FUN_1060e600(undefined4 param_1);
template<class... A> int FUN_1060e600(A...);
undefined4 __stdcall FUN_1060f990(undefined4 param_1);
template<class... A> int FUN_1060f990(A...);
undefined4 __stdcall FUN_1060fdb0(undefined4 param_1);
template<class... A> int FUN_1060fdb0(A...);
undefined4 __stdcall FUN_106102b0(undefined4 param_1);
template<class... A> int FUN_106102b0(A...);
SCStr * __stdcall FUN_10610c60(SCStr *param_1);
template<class... A> int FUN_10610c60(A...);
void __stdcall FUN_10610e00(SCStr *param_1);
template<class... A> int FUN_10610e00(A...);
undefined4 __stdcall FUN_10611670(undefined4 param_1);
template<class... A> int FUN_10611670(A...);
undefined4 __stdcall FUN_106119c0(undefined4 param_1);
template<class... A> int FUN_106119c0(A...);
undefined4 __stdcall FUN_10611c20(undefined4 param_1);
template<class... A> int FUN_10611c20(A...);
undefined4 __stdcall FUN_10611e30(undefined4 param_1);
template<class... A> int FUN_10611e30(A...);
undefined4 __stdcall FUN_106120a0(undefined4 param_1);
template<class... A> int FUN_106120a0(A...);
undefined4 __stdcall FUN_106126c0(undefined4 param_1);
template<class... A> int FUN_106126c0(A...);
undefined4 __stdcall FUN_106128c0(undefined4 param_1);
template<class... A> int FUN_106128c0(A...);
undefined4 __stdcall FUN_10612cd0(undefined4 param_1);
template<class... A> int FUN_10612cd0(A...);
undefined4 __stdcall FUN_10612ee0(undefined4 param_1);
template<class... A> int FUN_10612ee0(A...);
void __stdcall FUN_106131c0(int *param_1);
template<class... A> int FUN_106131c0(A...);
undefined4 __stdcall FUN_10613840(undefined4 param_1);
template<class... A> int FUN_10613840(A...);
undefined4 __stdcall FUN_10613ac0(undefined4 param_1);
template<class... A> int FUN_10613ac0(A...);
undefined4 __stdcall FUN_10613ca0(undefined4 param_1);
template<class... A> int FUN_10613ca0(A...);
undefined4 __stdcall FUN_10614ed0(undefined4 param_1);
template<class... A> int FUN_10614ed0(A...);
undefined4 __stdcall FUN_106151e0(undefined4 param_1);
template<class... A> int FUN_106151e0(A...);
undefined4 __stdcall FUN_10616550(undefined4 param_1);
template<class... A> int FUN_10616550(A...);
undefined4 __stdcall FUN_106169f0(undefined4 param_1);
template<class... A> int FUN_106169f0(A...);
undefined4 __stdcall FUN_10616d00(undefined4 param_1);
template<class... A> int FUN_10616d00(A...);
undefined4 __stdcall FUN_10617010(undefined4 param_1);
template<class... A> int FUN_10617010(A...);
undefined4 __stdcall FUN_106174a0(undefined4 param_1);
template<class... A> int FUN_106174a0(A...);
undefined4 __stdcall FUN_106177b0(undefined4 param_1);
template<class... A> int FUN_106177b0(A...);
undefined4 __stdcall FUN_10617ac0(undefined4 param_1);
template<class... A> int FUN_10617ac0(A...);
undefined4 __stdcall FUN_10618260(undefined4 param_1);
template<class... A> int FUN_10618260(A...);
undefined4 __stdcall FUN_10618570(undefined4 param_1);
template<class... A> int FUN_10618570(A...);
void FUN_10619b10(void);
template<class... A> int FUN_10619b10(A...);
void FUN_10619c80(void);
template<class... A> int FUN_10619c80(A...);
void FUN_10619d70(void);
template<class... A> int FUN_10619d70(A...);
void FUN_10619de0(void);
template<class... A> int FUN_10619de0(A...);
void __fastcall FUN_10619e80(int param_1);
template<class... A> int FUN_10619e80(A...);
void FUN_10619f80(void);
template<class... A> int FUN_10619f80(A...);
void FUN_1061a020(void);
template<class... A> int FUN_1061a020(A...);
void FUN_1061a100(void);
template<class... A> int FUN_1061a100(A...);
void FUN_1061a200(void);
template<class... A> int FUN_1061a200(A...);
void FUN_1061a2f0(void);
template<class... A> int FUN_1061a2f0(A...);
void FUN_1061a3f0(void);
template<class... A> int FUN_1061a3f0(A...);
void FUN_1061a4d0(void);
template<class... A> int FUN_1061a4d0(A...);
void FUN_1061a5e0(void);
template<class... A> int FUN_1061a5e0(A...);
void __stdcall FUN_1061ad40(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_1061ad40(A...);
void __stdcall FUN_1061b760(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_1061b760(A...);
void __fastcall FUN_1061b960(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_1061b960(A...);
void __stdcall FUN_1061ba40(int *param_1);
template<class... A> int FUN_1061ba40(A...);
void __fastcall FUN_1061bbf0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_1061bbf0(A...);
void FUN_1061bcd0(void);
template<class... A> int FUN_1061bcd0(A...);
void __stdcall FUN_1061bdf0(undefined4 param_1);
template<class... A> int FUN_1061bdf0(A...);
void __stdcall FUN_1061bf90(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_1061bf90(A...);
void __fastcall FUN_1061c090(int param_1);
template<class... A> int FUN_1061c090(A...);
undefined4 * __fastcall FUN_1061cb50(undefined4 *param_1);
template<class... A> int FUN_1061cb50(A...);
void __fastcall FUN_1061cd50(undefined4 *param_1);
template<class... A> int FUN_1061cd50(A...);
void __fastcall FUN_1061cdc0(undefined4 *param_1);
template<class... A> int FUN_1061cdc0(A...);
void __fastcall FUN_1061d120(int param_1);
template<class... A> int FUN_1061d120(A...);
void __fastcall FUN_1061d290(int *param_1);
template<class... A> int FUN_1061d290(A...);
undefined4 __fastcall FUN_1061d730(int param_1);
template<class... A> int FUN_1061d730(A...);
undefined4 * __fastcall FUN_1061edc0(undefined4 *param_1);
template<class... A> int FUN_1061edc0(A...);
void __fastcall FUN_1061f220(int param_1);
template<class... A> int FUN_1061f220(A...);
void __fastcall FUN_1061f300(int *param_1);
template<class... A> int FUN_1061f300(A...);
void __fastcall FUN_1061f360(int param_1);
template<class... A> int FUN_1061f360(A...);
void __fastcall FUN_1061f3f0(int param_1);
template<class... A> int FUN_1061f3f0(A...);
void __fastcall FUN_1061f490(int param_1);
template<class... A> int FUN_1061f490(A...);
void __fastcall FUN_1061f520(int param_1);
template<class... A> int FUN_1061f520(A...);
void __fastcall FUN_1061f5c0(undefined4 *param_1);
template<class... A> int FUN_1061f5c0(A...);
void __fastcall FUN_1061f730(undefined4 *param_1);
template<class... A> int FUN_1061f730(A...);
void __fastcall FUN_1061f800(undefined4 *param_1);
template<class... A> int FUN_1061f800(A...);
// Reference entry 1060c450; body size 2331 bytes.
#line 1 "ENTRY_1060c450"

undefined4 __thiscall Recovered_Bulk::m_FUN_1060c450(undefined4 param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  undefined1 *puVar8;
  uint uVar9;
  undefined1 *puVar10;
  int *piVar11;
  int **ppiVar12;
  undefined4 uVar13;
  undefined **local_1b4 [8];
  undefined **local_194 [8];
  undefined **local_174 [8];
  undefined **local_154 [8];
  undefined **local_134 [8];
  undefined **local_114 [8];
  undefined1 local_f4 [12];
  undefined4 local_e8;
  int *local_e4;
  undefined4 local_e0 [2];
  undefined4 local_d8;
  int *local_d4;
  undefined4 local_d0 [2];
  undefined4 local_c8;
  int *local_c4;
  undefined4 local_c0 [2];
  undefined4 local_b8;
  int *local_b4;
  undefined4 local_b0 [2];
  undefined4 local_a8;
  int *local_a4;
  undefined4 local_a0;
  int *local_9c;
  undefined1 *local_98 [3];
  undefined4 local_8c;
  int *local_88;
  void *local_84;
  undefined1 *puStack_80;
  undefined4 local_7c;
  undefined4 local_78 [2];
  undefined4 local_70 [2];
  undefined **local_68;
  undefined4 local_64;
  int *piStack_60;
  int *piStack_5c;
  int iStack_58;
  undefined4 *local_54;
  undefined4 *local_50;
  int local_4c;
  int *local_48;
  int *local_44;
  int *local_40;
  int *local_3c;
  int *local_38;
  int *local_34;
  undefined1 *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int *local_10;
  undefined4 local_c;
  char local_5;


  thunk_FUN_10eb41c0(DAT_12126b84 ^ (uint)(uint)&local_78);
  puVar4 = (undefined4 *)((undefined4 *)thunk_FUN_10cf34e0(&local_9c), 0);

  thunk_FUN_10c5f1d0(*puVar4);
  thunk_FUN_10c61010((uint)&local_98,(uint)&local_f4,6,0,0);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(3);
  if ((int *)(local_9c) != (int *)(0x0)) {
    (**(code **)(*local_9c + 8))();
  }
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(2);
  pcVar7 = (char *)("");
  if (*(char **)(param_1 + 0xe0) != (char *)((0x0))) {
    pcVar7 = (char *)(*(char **)(param_1 + 0xe0), 0);
  }
  ((SCStr *)((SCStr *)&local_c))->int_allocRep(pcVar7);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(4);
  thunk_FUN_10c61f70(&local_30,&local_c);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(7);
  ((SCStr *)((SCStr *)&local_c))->int_release();

  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(6);
  iVar5 = (int)(thunk_FUN_10ec1a10("continue"), 0);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(8);
  thunk_FUN_105f6290(iVar5 + 4);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(9);
  thunk_FUN_10c5f8a0(&DAT_1186d2ee);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(10);
  puVar8 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)(local_98[0]) != (undefined1 *)(0x0)) {
    puVar8 = (undefined1 *)(local_98[0]);
  }
  thunk_FUN_10c62d50((SCStr *)(uint)&local_78,(uint)&local_98,0x2c04,&DAT_1188465c,puVar8);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0xb);
  thunk_FUN_10ec0bb0(&DAT_118bd268);
  uVar13 = (undefined4)(1);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0xc);
  thunk_FUN_10eced20((SCStr *)(uint)&local_78);
  iVar5 = (int)(thunk_FUN_10ecd540(uVar13), 0);
  thunk_FUN_105f6290(iVar5 + 4);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0xd);
  puVar8 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)(local_30) != (undefined1 *)(0x0)) {
    puVar8 = (undefined1 *)(local_30);
  }
  thunk_FUN_10c5f8a0(&DAT_1186d2ee);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0xe);
  puVar10 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)(local_98[0]) != (undefined1 *)(0x0)) {
    puVar10 = (undefined1 *)(local_98[0]);
  }
  thunk_FUN_10c62d50((uint)&local_70,(uint)&local_98,0x2c03,"%1$s %2$s",puVar8,puVar10);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0xf);
  thunk_FUN_10ec0bb0(&DAT_118bd268);
  uVar13 = (undefined4)(1);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x10);
  thunk_FUN_10eced20((uint)&local_70);
  iVar5 = (int)(thunk_FUN_10ecd540(uVar13), 0);
  thunk_FUN_105f6290(iVar5 + 4);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x11);
  ((SCStr *)((SCStr *)&local_2c))->int_allocRep("wifi_connected_popup.png");
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x12);
  thunk_FUN_10ec1d20();
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x13);
  thunk_FUN_10ec1c00("image");
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x14);
  uVar13 = (undefined4)(thunk_FUN_10ecc7e0(&local_2c), 0);
  iVar5 = (int)(thunk_FUN_10ecbbd0(uVar13), 0);
  thunk_FUN_105f6290(iVar5 + 4);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x15);
  puVar4 = (undefined4 *)((undefined4 *)thunk_FUN_10ec1d40(), 0);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x16);
  ((SCStr *)((SCStr *)&local_c))->int_allocRep("layoutStyle");
  ppiVar12 = (int **)(&local_34);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x17);
  (**(code **)*puVar4)(ppiVar12);
  thunk_FUN_106d83f0(ppiVar12);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x18);
  (**(code **)(*local_34 + 0x28))(&local_c,1);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x19);
  if ((int *)(local_34) != (int *)(0x0)) {
    (**(code **)(*local_34 + 8))();
  }
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x1a);
  ((SCStr *)((SCStr *)&local_c))->int_release();

  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x16);
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("headerStyle");
  ppiVar12 = (int **)(&local_38);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x1b);
  (**(code **)*puVar4)(ppiVar12);
  thunk_FUN_106d83f0(ppiVar12);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x1c);
  cVar3 = (char)((**(code **)(*local_38 + 0x74))(&local_14), 0);
  local_5 = (char)(cVar3 == '\0');
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x1d);
  if ((int *)(local_38) != (int *)(0x0)) {
    (**(code **)(*local_38 + 8))();
  }
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x1e);
  ((SCStr *)((SCStr *)&local_14))->int_release();

  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x16);
  if (local_5 != '\0') {
    ((SCStr *)((SCStr *)&local_18))->int_allocRep("headerStyle");
    ppiVar12 = (int **)(&local_3c);
    *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x1f);
    (**(code **)*puVar4)(ppiVar12);
    thunk_FUN_106d83f0(ppiVar12);
    *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x20);
    (**(code **)(*local_3c + 0x28))(&local_18,1);
    *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x21);
    if ((int *)(local_3c) != (int *)(0x0)) {
      (**(code **)(*local_3c + 8))();
    }
    *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x22);
    ((SCStr *)((SCStr *)&local_18))->int_release();

  }
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x16);
  ((SCStr *)((SCStr *)&local_1c))->int_allocRep("canvasStyle");
  ppiVar12 = (int **)(&local_40);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x23);
  (**(code **)*puVar4)(ppiVar12);
  thunk_FUN_106d83f0(ppiVar12);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x24);
  cVar3 = (char)((**(code **)(*local_40 + 0x74))(&local_1c), 0);
  local_5 = (char)(cVar3 == '\0');
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x25);
  if ((int *)(local_40) != (int *)(0x0)) {
    (**(code **)(*local_40 + 8))();
  }
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x26);
  ((SCStr *)((SCStr *)&local_1c))->int_release();

  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x16);
  if (local_5 != '\0') {
    ((SCStr *)((SCStr *)&local_20))->int_allocRep("canvasStyle");
    ppiVar12 = (int **)(&local_44);
    *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x27);
    (**(code **)*puVar4)(ppiVar12);
    thunk_FUN_106d83f0(ppiVar12);
    *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x28);
    (**(code **)(*local_44 + 0x28))(&local_20,0);
    *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x29);
    if ((int *)(local_44) != (int *)(0x0)) {
      (**(code **)(*local_44 + 8))();
    }
    *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x2a);
    ((SCStr *)((SCStr *)&local_20))->int_release();

  }
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x16);
  ((SCStr *)((SCStr *)&local_24))->int_allocRep("footerStyle");
  ppiVar12 = (int **)(&local_48);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x2b);
  (**(code **)*puVar4)(ppiVar12);
  thunk_FUN_106d83f0(ppiVar12);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x2c);
  cVar3 = (char)((**(code **)(*local_48 + 0x74))(&local_24), 0);
  local_5 = (char)(cVar3 == '\0');
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x2d);
  if ((int *)(local_48) != (int *)(0x0)) {
    (**(code **)(*local_48 + 8))();
  }
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x2e);
  ((SCStr *)((SCStr *)&local_24))->int_release();

  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x16);
  if (local_5 != '\0') {
    ((SCStr *)((SCStr *)&local_28))->int_allocRep("footerStyle");
    ppiVar12 = (int **)(&local_10);
    *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x2f);
    (**(code **)*puVar4)(ppiVar12);
    thunk_FUN_106d83f0(ppiVar12);
    *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x30);
    (**(code **)(*local_10 + 0x28))(&local_28,0);
    *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x31);
    if ((int *)(local_10) != (int *)(0x0)) {
      (**(code **)(*local_10 + 8))();
    }
    *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x32);
    ((SCStr *)((SCStr *)&local_28))->int_release();

  }
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x16);
  (**(code **)*puVar4)();
  iVar5 = (int)(thunk_FUN_1061c630(0xc), 0);
  thunk_FUN_105f6290(iVar5 + 4);
  local_68 = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTree);

  piStack_60 = (int *)((int *)0x0);
  piStack_5c = (int *)((int *)0x0);
  iStack_58 = (int)(0);
  local_54 = (undefined4 *)((undefined4 *)0x0);
  local_50 = (undefined4 *)((undefined4 *)0x0);

  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x34);
  piVar6 = (int *)((int *)thunk_FUN_106050a0((uint)&local_114), 0);
  thunk_FUN_10eb41c0();
  uVar13 = (undefined4)(thunk_FUN_106052d0((uint)&local_1b4), 0);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x35);
  piVar6 = (int *)((int *)(**(code **)(*piVar6 + 8))(uVar13), 0);
  piVar6 = (int *)((int *)(**(code **)(*piVar6 + 8))((uint)&local_134), 0);
  if (*(char **)(param_1 + 0xe0) == (char *)((0x0))) {
LAB_1060c9c8:
    local_10 = (int *)((int *)((uint)local_10 & 0xffffff00));
  }
  else {
    local_10 = (int *)((int *)((uint)(*(unsigned short *)((char *)&local_10 + 1)) << 8 | (uint)(1)));
    if (**(char **)(param_1 + 0xe0) == '\0') goto LAB_1060c9c8;
  }
  piVar6 = (int *)((int *)(**(code **)(*piVar6 + 0xc))(local_10,(uint)&local_154), 0);
  piVar6 = (int *)((int *)(**(code **)(*piVar6 + 0x14))((uint)&local_174), 0);
  uVar13 = (undefined4)((**(code **)(*piVar6 + 8))((uint)&local_194), 0);
  thunk_FUN_105f60e0(uVar13);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  puVar2 = (undefined4 *)(local_50);
  local_1b4[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x33);
  puVar4 = (undefined4 *)(local_54);
  if ((undefined4 *)(local_54) != (undefined4 *)(0x0)) {
    for (;(undefined4 *)((puVar4)) != (undefined4 *)(puVar2); puVar4 = puVar4 + 8) {
      (**(code **)*puVar4)(0);
    }
    uVar9 = (uint)(local_4c - (int)local_54 & 0xffffffe0);
    puVar4 = (undefined4 *)(local_54);
    if (0xfff < uVar9) {
      puVar4 = (undefined4 *)((undefined4 *)local_54[-1]);
      uVar9 = (uint)(uVar9 + 0x23);
      if (0x1f < (uint)((int)local_54 + (-4 - (int)puVar4))) goto LAB_1060cb17;
    }
    thunk_FUN_1148a50e(puVar4,uVar9);
    local_54 = (undefined4 *)((undefined4 *)0x0);
    local_50 = (undefined4 *)((undefined4 *)0x0);

  }
  piVar6 = (int *)(piStack_5c);
  if ((int *)(piStack_60) != (int *)(0x0)) {
    if ((int *)(piStack_60) != (int *)(piStack_5c)) {
      piVar11 = (int *)(piStack_60 + 1);
      do {
        *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x36);
        ((SCStr *)((SCStr *)(piVar11 + 1)))->int_release();
        piVar11[1] = (int)(0);
        piVar1 = (int *)((int *)*piVar11);
        *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x37);
        if ((int *)(piVar1) != (int *)(0x0)) {
          piVar11[-1] = (int)(0);
          *piVar11 = (int)(0);
          (**(code **)(*piVar1 + 8))();
        }
        *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x33);
        piVar1 = (int *)(piVar11 + 2);
        piVar11 = (int *)(piVar11 + 3);
      } while ((int *)(piVar1) != (int *)(piVar6));
    }
    uVar9 = (uint)(((iStack_58 - (int)piStack_60) / 0xc) * 0xc);
    piVar6 = (int *)(piStack_60);
    if (0xfff < uVar9) {
      piVar6 = (int *)((int *)piStack_60[-1]);
      uVar9 = (uint)(uVar9 + 0x23);
      if (0x1f < (uint)((int)piStack_60 + (-4 - (int)piVar6))) {
LAB_1060cb17:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(piVar6,uVar9);
    piStack_60 = (int *)((int *)0x0);
    piStack_5c = (int *)((int *)0x0);
    iStack_58 = (int)(0);
  }
  local_68 = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_114[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x38);
  ((SCStr *)((SCStr *)&local_a0))->int_release();
  piVar6 = (int *)(local_a4);

  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x39);
  if ((int *)(local_a4) != (int *)(0x0)) {

    local_a4 = (int *)((int *)0x0);
    (**(code **)(*piVar6 + 8))();
  }
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_134[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x3a);
  ((SCStr *)((SCStr *)(uint)&local_b0))->int_release();
  piVar6 = (int *)(local_b4);
  local_b0[0] = (undefined4)(0);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x3b);
  if ((int *)(local_b4) != (int *)(0x0)) {

    local_b4 = (int *)((int *)0x0);
    (**(code **)(*piVar6 + 8))();
  }
  piVar6 = (int *)(local_88);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x3c);
  if ((int *)(local_88) != (int *)(0x0)) {

    local_88 = (int *)((int *)0x0);
    (**(code **)(*piVar6 + 8))();
  }
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x3d);
  ((SCStr *)((SCStr *)&local_2c))->int_release();

  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_154[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x3e);
  ((SCStr *)((SCStr *)(uint)&local_c0))->int_release();
  piVar6 = (int *)(local_c4);
  local_c0[0] = (undefined4)(0);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x3f);
  if ((int *)(local_c4) != (int *)(0x0)) {

    local_c4 = (int *)((int *)0x0);
    (**(code **)(*piVar6 + 8))();
  }
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x40);
  ((SCStr *)((SCStr *)(uint)&local_70))->int_release();
  local_70[0] = (undefined4)(0);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_174[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x41);
  ((SCStr *)((SCStr *)(uint)&local_d0))->int_release();
  piVar6 = (int *)(local_d4);
  local_d0[0] = (undefined4)(0);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x42);
  if ((int *)(local_d4) != (int *)(0x0)) {

    local_d4 = (int *)((int *)0x0);
    (**(code **)(*piVar6 + 8))();
  }
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x43);
  ((SCStr *)((SCStr *)(uint)&local_78))->int_release();
  local_78[0] = (undefined4)(0);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_194[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x44);
  ((SCStr *)((SCStr *)(uint)&local_e0))->int_release();
  piVar6 = (int *)(local_e4);
  local_e0[0] = (undefined4)(0);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x45);
  if ((int *)(local_e4) != (int *)(0x0)) {

    local_e4 = (int *)((int *)0x0);
    (**(code **)(*piVar6 + 8))();
  }
  local_7c = (undefined4)(((uint)(*(unsigned short *)((char *)&local_7c + 1)) << 8 | (uint)(0x46)));
  ((SCStr *)((SCStr *)&local_30))->int_release();
  local_30 = (undefined1 *)((undefined1 *)0x0);

  ((SCStr *)((SCStr *)(uint)&local_98))->int_release();

  return (undefined4)(param_2);

 } catch (...) { }
}


// Reference entry 1060cfc0; body size 2249 bytes.
#line 1 "ENTRY_1060cfc0"

undefined4 __thiscall Recovered_Bulk::m_FUN_1060cfc0(undefined4 param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  char *pcVar9;
  undefined1 *puVar10;
  int *piVar11;
  int **ppiVar12;
  undefined4 uVar13;
  undefined **local_1a8 [8];
  undefined **local_188 [8];
  undefined **local_168 [8];
  undefined **local_148 [8];
  undefined **local_128 [8];
  undefined **local_108 [8];
  undefined4 local_e8 [3];
  undefined4 local_dc;
  int *local_d8;
  undefined4 local_d4 [2];
  undefined4 local_cc;
  int *local_c8;
  undefined4 local_c4 [2];
  undefined4 local_bc;
  int *local_b8;
  undefined4 local_b4 [2];
  undefined4 local_ac;
  int *local_a8;
  undefined4 local_a4 [2];
  undefined4 local_9c;
  int *local_98;
  undefined4 local_94;
  undefined4 local_90 [2];
  undefined4 local_88 [2];
  void *local_80;
  undefined1 *puStack_7c;
  undefined4 local_78;
  int local_74;
  undefined4 local_70;
  int *local_6c;
  undefined4 local_68;
  undefined **local_64;
  undefined4 local_60;
  int *piStack_5c;
  int *piStack_58;
  int iStack_54;
  undefined4 *local_50;
  undefined4 *local_4c;
  int local_48;
  int *local_44;
  int *local_40;
  int *local_3c;
  int *local_38;
  int *local_34;
  int *local_30;
  undefined1 *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int *local_c;
  undefined4 local_8;

  uVar4 = (uint)(DAT_12126b84 ^ (uint)&local_74);


  pcVar9 = (char *)("");
  if (*(char **)(param_1 + 0xe0) != (char *)((0x0))) {
    pcVar9 = (char *)(*(char **)(param_1 + 0xe0), 0);
  }
  local_74 = (int)(param_1);
  ((SCStr *)((SCStr *)&local_8))->int_allocRep(pcVar9);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(1);
  thunk_FUN_10c61f70(&local_2c,&local_8,uVar4);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(4);
  ((SCStr *)((SCStr *)&local_8))->int_release();

  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(3);
  uVar5 = (undefined4)(thunk_FUN_10c5f450((uint)&local_90,0x2878,&DAT_11882ff0), 0);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(5);
  thunk_FUN_10ec0a20("continue");
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(6);
  iVar6 = (int)(thunk_FUN_10ecea60(uVar5), 0);
  thunk_FUN_105f6290(iVar6 + 4);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(7);
  uVar5 = (undefined4)(thunk_FUN_10c5f450((uint)&local_88,0x2877,&DAT_11882ff0), 0);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(8);
  thunk_FUN_10ec0bb0("title");
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(9);
  iVar6 = (int)(thunk_FUN_10eced20(uVar5), 0);
  thunk_FUN_105f6290(iVar6 + 4);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(10);
  puVar10 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)(local_2c) != (undefined1 *)(0x0)) {
    puVar10 = (undefined1 *)(local_2c);
  }
  uVar5 = (undefined4)(thunk_FUN_10c5f450((uint)&local_e8,0x2876,&DAT_1188465c,puVar10), 0);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0xb);
  thunk_FUN_10ec0bb0("title");
  uVar13 = (undefined4)(1);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0xc);
  thunk_FUN_10eced20(uVar5);
  iVar6 = (int)(thunk_FUN_10ecd540(uVar13), 0);
  thunk_FUN_105f6290(iVar6 + 4);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0xd);
  ((SCStr *)((SCStr *)&local_28))->int_allocRep("join_existing_popup.png");
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0xe);
  thunk_FUN_10ec1d20();
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0xf);
  thunk_FUN_10ec1c00("image");
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x10);
  uVar5 = (undefined4)(thunk_FUN_10ecc7e0(&local_28), 0);
  iVar6 = (int)(thunk_FUN_10ecbbd0(uVar5), 0);
  thunk_FUN_105f6290(iVar6 + 4);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x11);
  thunk_FUN_10ec1d40();
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x12);
  puVar7 = (undefined4 *)((undefined4 *)thunk_FUN_1061c630(0xc), 0);
  ((SCStr *)((SCStr *)&local_8))->int_allocRep("layoutStyle");
  ppiVar12 = (int **)(&local_30);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x13);
  (**(code **)*puVar7)(ppiVar12);
  thunk_FUN_106d83f0(ppiVar12);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x14);
  (**(code **)(*local_30 + 0x28))(&local_8,1);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x15);
  if ((int *)(local_30) != (int *)(0x0)) {
    (**(code **)(*local_30 + 8))();
  }
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x16);
  ((SCStr *)((SCStr *)&local_8))->int_release();

  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x12);
  ((SCStr *)((SCStr *)&local_10))->int_allocRep("headerStyle");
  ppiVar12 = (int **)(&local_34);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x17);
  (**(code **)*puVar7)(ppiVar12);
  thunk_FUN_106d83f0(ppiVar12);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x18);
  cVar3 = (char)((**(code **)(*local_34 + 0x74))(&local_10), 0);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x19);
  if ((int *)(local_34) != (int *)(0x0)) {
    (**(code **)(*local_34 + 8))();
  }
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x1a);
  ((SCStr *)((SCStr *)&local_10))->int_release();

  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x12);
  if (cVar3 == '\0') {
    ((SCStr *)((SCStr *)&local_14))->int_allocRep("headerStyle");
    ppiVar12 = (int **)(&local_38);
    *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x1b);
    (**(code **)*puVar7)(ppiVar12);
    thunk_FUN_106d83f0(ppiVar12);
    *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x1c);
    (**(code **)(*local_38 + 0x28))(&local_14,1);
    *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x1d);
    if ((int *)(local_38) != (int *)(0x0)) {
      (**(code **)(*local_38 + 8))();
    }
    *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x1e);
    ((SCStr *)((SCStr *)&local_14))->int_release();

  }
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x12);
  ((SCStr *)((SCStr *)&local_18))->int_allocRep("canvasStyle");
  ppiVar12 = (int **)(&local_3c);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x1f);
  (**(code **)*puVar7)(ppiVar12);
  thunk_FUN_106d83f0(ppiVar12);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x20);
  cVar3 = (char)((**(code **)(*local_3c + 0x74))(&local_18), 0);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x21);
  if ((int *)(local_3c) != (int *)(0x0)) {
    (**(code **)(*local_3c + 8))();
  }
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x22);
  ((SCStr *)((SCStr *)&local_18))->int_release();

  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x12);
  if (cVar3 == '\0') {
    ((SCStr *)((SCStr *)&local_1c))->int_allocRep("canvasStyle");
    ppiVar12 = (int **)(&local_40);
    *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x23);
    (**(code **)*puVar7)(ppiVar12);
    thunk_FUN_106d83f0(ppiVar12);
    *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x24);
    (**(code **)(*local_40 + 0x28))(&local_1c,0);
    *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x25);
    if ((int *)(local_40) != (int *)(0x0)) {
      (**(code **)(*local_40 + 8))();
    }
    *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x26);
    ((SCStr *)((SCStr *)&local_1c))->int_release();

  }
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x12);
  ((SCStr *)((SCStr *)&local_20))->int_allocRep("footerStyle");
  ppiVar12 = (int **)(&local_44);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x27);
  (**(code **)*puVar7)(ppiVar12);
  thunk_FUN_106d83f0(ppiVar12);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x28);
  cVar3 = (char)((**(code **)(*local_44 + 0x74))(&local_20), 0);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x29);
  if ((int *)(local_44) != (int *)(0x0)) {
    (**(code **)(*local_44 + 8))();
  }
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x2a);
  ((SCStr *)((SCStr *)&local_20))->int_release();

  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x12);
  if (cVar3 == '\0') {
    ((SCStr *)((SCStr *)&local_24))->int_allocRep("footerStyle");
    ppiVar12 = (int **)(&local_c);
    *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x2b);
    (**(code **)*puVar7)(ppiVar12);
    thunk_FUN_106d83f0(ppiVar12);
    *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x2c);
    (**(code **)(*local_c + 0x28))(&local_24,0);
    *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x2d);
    if ((int *)(local_c) != (int *)(0x0)) {
      (**(code **)(*local_c + 8))();
    }
    *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x2e);
    ((SCStr *)((SCStr *)&local_24))->int_release();

  }
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x12);
  iVar6 = (int)((**(code **)*puVar7)(), 0);
  thunk_FUN_105f6290(iVar6 + 4);
  local_64 = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTree);

  piStack_5c = (int *)((int *)0x0);
  piStack_58 = (int *)((int *)0x0);
  iStack_54 = (int)(0);
  local_50 = (undefined4 *)((undefined4 *)0x0);
  local_4c = (undefined4 *)((undefined4 *)0x0);

  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x30);
  piVar8 = (int *)((int *)thunk_FUN_106050a0((uint)&local_108), 0);
  iVar6 = (int)(local_74);
  thunk_FUN_10eb41c0();
  uVar5 = (undefined4)(thunk_FUN_106052d0((uint)&local_1a8), 0);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x31);
  piVar8 = (int *)((int *)(**(code **)(*piVar8 + 8))(uVar5), 0);
  piVar8 = (int *)((int *)(**(code **)(*piVar8 + 8))((uint)&local_128), 0);
  if (*(char **)(iVar6 + 0xe0) == (char *)((0x0))) {
LAB_1060d4d5:
    local_c = (int *)((int *)((uint)local_c & 0xffffff00));
  }
  else {
    local_c = (int *)((int *)((uint)(*(unsigned short *)((char *)&local_c + 1)) << 8 | (uint)(1)));
    if (**(char **)(iVar6 + 0xe0) == '\0') goto LAB_1060d4d5;
  }
  piVar8 = (int *)((int *)(**(code **)(*piVar8 + 0xc))(local_c,(uint)&local_148), 0);
  piVar8 = (int *)((int *)(**(code **)(*piVar8 + 0x14))((uint)&local_168), 0);
  uVar5 = (undefined4)((**(code **)(*piVar8 + 8))((uint)&local_188), 0);
  thunk_FUN_105f60e0(uVar5);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  puVar2 = (undefined4 *)(local_4c);
  local_1a8[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x2f);
  puVar7 = (undefined4 *)(local_50);
  if ((undefined4 *)(local_50) != (undefined4 *)(0x0)) {
    for (;(undefined4 *)((puVar7)) != (undefined4 *)(puVar2); puVar7 = puVar7 + 8) {
      (**(code **)*puVar7)(0);
    }
    uVar4 = (uint)(local_48 - (int)local_50 & 0xffffffe0);
    puVar7 = (undefined4 *)(local_50);
    if (0xfff < uVar4) {
      puVar7 = (undefined4 *)((undefined4 *)local_50[-1]);
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (uint)((int)local_50 + (-4 - (int)puVar7))) goto LAB_1060d625;
    }
    thunk_FUN_1148a50e(puVar7,uVar4);
    local_50 = (undefined4 *)((undefined4 *)0x0);
    local_4c = (undefined4 *)((undefined4 *)0x0);

  }
  piVar8 = (int *)(piStack_58);
  if ((int *)(piStack_5c) != (int *)(0x0)) {
    if ((int *)(piStack_5c) != (int *)(piStack_58)) {
      piVar11 = (int *)(piStack_5c + 1);
      do {
        *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x32);
        ((SCStr *)((SCStr *)(piVar11 + 1)))->int_release();
        piVar11[1] = (int)(0);
        piVar1 = (int *)((int *)*piVar11);
        *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x33);
        if ((int *)(piVar1) != (int *)(0x0)) {
          piVar11[-1] = (int)(0);
          *piVar11 = (int)(0);
          (**(code **)(*piVar1 + 8))();
        }
        *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x2f);
        piVar1 = (int *)(piVar11 + 2);
        piVar11 = (int *)(piVar11 + 3);
      } while ((int *)(piVar1) != (int *)(piVar8));
    }
    uVar4 = (uint)(((iStack_54 - (int)piStack_5c) / 0xc) * 0xc);
    piVar8 = (int *)(piStack_5c);
    if (0xfff < uVar4) {
      piVar8 = (int *)((int *)piStack_5c[-1]);
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (uint)((int)piStack_5c + (-4 - (int)piVar8))) {
LAB_1060d625:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(piVar8,uVar4);
    piStack_5c = (int *)((int *)0x0);
    piStack_58 = (int *)((int *)0x0);
    iStack_54 = (int)(0);
  }
  local_64 = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_108[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x34);
  ((SCStr *)((SCStr *)&local_94))->int_release();
  piVar8 = (int *)(local_98);

  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x35);
  if ((int *)(local_98) != (int *)(0x0)) {

    local_98 = (int *)((int *)0x0);
    (**(code **)(*piVar8 + 8))();
  }
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_128[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x36);
  ((SCStr *)((SCStr *)(uint)&local_a4))->int_release();
  piVar8 = (int *)(local_a8);
  local_a4[0] = (undefined4)(0);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x37);
  if ((int *)(local_a8) != (int *)(0x0)) {

    local_a8 = (int *)((int *)0x0);
    (**(code **)(*piVar8 + 8))();
  }
  piVar8 = (int *)(local_6c);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x38);
  if ((int *)(local_6c) != (int *)(0x0)) {

    local_6c = (int *)((int *)0x0);
    (**(code **)(*piVar8 + 8))();
  }
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x39);
  ((SCStr *)((SCStr *)&local_28))->int_release();

  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_148[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x3a);
  ((SCStr *)((SCStr *)(uint)&local_b4))->int_release();
  piVar8 = (int *)(local_b8);
  local_b4[0] = (undefined4)(0);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x3b);
  if ((int *)(local_b8) != (int *)(0x0)) {

    local_b8 = (int *)((int *)0x0);
    (**(code **)(*piVar8 + 8))();
  }
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x3c);
  ((SCStr *)((SCStr *)(uint)&local_e8))->int_release();
  local_e8[0] = (undefined4)(0);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_168[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x3d);
  ((SCStr *)((SCStr *)(uint)&local_c4))->int_release();
  piVar8 = (int *)(local_c8);
  local_c4[0] = (undefined4)(0);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x3e);
  if ((int *)(local_c8) != (int *)(0x0)) {

    local_c8 = (int *)((int *)0x0);
    (**(code **)(*piVar8 + 8))();
  }
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x3f);
  ((SCStr *)((SCStr *)(uint)&local_88))->int_release();
  local_88[0] = (undefined4)(0);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_188[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x40);
  ((SCStr *)((SCStr *)(uint)&local_d4))->int_release();
  piVar8 = (int *)(local_d8);
  local_d4[0] = (undefined4)(0);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x41);
  if ((int *)(local_d8) != (int *)(0x0)) {

    local_d8 = (int *)((int *)0x0);
    (**(code **)(*piVar8 + 8))();
  }
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x42);
  ((SCStr *)((SCStr *)(uint)&local_90))->int_release();
  local_90[0] = (undefined4)(0);
  local_78 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_78 + 1)) << 8 | (uint)(0x43)));
  ((SCStr *)((SCStr *)&local_2c))->int_release();
  local_2c = (undefined1 *)((undefined1 *)0x0);

  ((SCStr *)((SCStr *)&local_68))->int_release();

  return (undefined4)(param_2);

 } catch (...) { }
}


// Reference entry 1060dac0; body size 2304 bytes.
#line 1 "ENTRY_1060dac0"

undefined4 __stdcall FUN_1060dac0(undefined4 param_1)

{
 try {
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  SCLibrary *pSVar8;
  uint uVar9;
  int *piVar10;
  undefined ***pppuVar11;
  int **ppiVar12;
  undefined **local_1d8 [8];
  undefined **local_1b8 [8];
  undefined **local_198 [8];
  undefined **local_178 [8];
  undefined **local_158 [8];
  undefined **local_138 [8];
  undefined **local_118 [8];
  SCStr local_f8 [8];
  undefined4 local_f0 [3];
  undefined4 local_e4;
  int *local_e0;
  undefined4 local_dc [2];
  undefined4 local_d4;
  int *local_d0;
  undefined4 local_cc [2];
  undefined4 local_c4;
  int *local_c0;
  undefined4 local_bc [2];
  undefined4 local_b4;
  int *local_b0;
  undefined4 local_ac [2];
  undefined4 local_a4;
  int *local_a0;
  undefined4 local_9c [2];
  undefined4 local_94;
  int *local_90;
  undefined4 local_8c;
  undefined4 local_88 [2];
  void *local_80;
  undefined1 *puStack_7c;
  undefined4 local_78;
  undefined4 local_74 [2];
  undefined4 local_6c;
  int *local_68;
  undefined **local_60;
  undefined4 local_5c;
  int *piStack_58;
  int *piStack_54;
  int iStack_50;
  undefined4 *local_4c;
  undefined4 *local_48;
  int local_44;
  int *local_40;
  int *local_3c;
  int *local_38;
  int *local_34;
  int *local_30;
  int *local_2c;
  int *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;


  uVar4 = (undefined4)(thunk_FUN_10c5f450((uint)&local_f8,0x208f,&DAT_11882ff0,DAT_12126b84 ^ (uint)(uint)&local_74), 0);

  thunk_FUN_10ec0a20(&DAT_118bd270);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(1);
  iVar5 = (int)(thunk_FUN_10ecea60(uVar4), 0);
  thunk_FUN_105f6290(iVar5 + 4);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(2);
  uVar4 = (undefined4)(thunk_FUN_10c5f450((uint)&local_88,0x2c01,&DAT_11882ff0), 0);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(3);
  thunk_FUN_10ec0a20("continue");
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(4);
  iVar5 = (int)(thunk_FUN_10ecea60(uVar4), 0);
  thunk_FUN_105f6290(iVar5 + 4);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(5);
  uVar4 = (undefined4)(thunk_FUN_10c5f450((SCStr *)(uint)&local_74,0x2bff,&DAT_11882ff0), 0);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(6);
  thunk_FUN_10ec0bb0(&DAT_118bd268);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(7);
  iVar5 = (int)(thunk_FUN_10eced20(uVar4), 0);
  thunk_FUN_105f6290(iVar5 + 4);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(8);
  uVar4 = (undefined4)(thunk_FUN_10c5f450((uint)&local_f0,0x2c00,&DAT_11882ff0), 0);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(9);
  thunk_FUN_10ec0bb0(&DAT_118bd268);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(10);
  iVar5 = (int)(thunk_FUN_10eced20(uVar4), 0);
  thunk_FUN_105f6290(iVar5 + 4);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0xb);
  ((SCStr *)((SCStr *)&local_24))->int_allocRep("wifi_disabled_popup.png");
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0xc);
  thunk_FUN_10ec1d20();
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0xd);
  thunk_FUN_10ec1c00("image");
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0xe);
  uVar4 = (undefined4)(thunk_FUN_10ecc7e0(&local_24), 0);
  iVar5 = (int)(thunk_FUN_10ecbbd0(uVar4), 0);
  thunk_FUN_105f6290(iVar5 + 4);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0xf);
  puVar6 = (undefined4 *)((undefined4 *)thunk_FUN_10ec1d40(), 0);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x10);
  ((SCStr *)((SCStr *)&local_8))->int_allocRep("layoutStyle");
  ppiVar12 = (int **)(&local_28);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x11);
  (**(code **)*puVar6)(ppiVar12);
  thunk_FUN_106d83f0(ppiVar12);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x12);
  (**(code **)(*local_28 + 0x28))(&local_8,1);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x13);
  if ((int *)(local_28) != (int *)(0x0)) {
    (**(code **)(*local_28 + 8))();
  }
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x14);
  ((SCStr *)((SCStr *)&local_8))->int_release();

  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x10);
  ((SCStr *)((SCStr *)&local_c))->int_allocRep("headerStyle");
  ppiVar12 = (int **)(&local_2c);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x15);
  (**(code **)*puVar6)(ppiVar12);
  thunk_FUN_106d83f0(ppiVar12);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x16);
  cVar3 = (char)((**(code **)(*local_2c + 0x74))(&local_c), 0);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x17);
  if ((int *)(local_2c) != (int *)(0x0)) {
    (**(code **)(*local_2c + 8))();
  }
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x18);
  ((SCStr *)((SCStr *)&local_c))->int_release();

  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x10);
  if (cVar3 == '\0') {
    ((SCStr *)((SCStr *)&local_10))->int_allocRep("headerStyle");
    ppiVar12 = (int **)(&local_30);
    *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x19);
    (**(code **)*puVar6)(ppiVar12);
    thunk_FUN_106d83f0(ppiVar12);
    *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x1a);
    (**(code **)(*local_30 + 0x28))(&local_10,1);
    *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x1b);
    if ((int *)(local_30) != (int *)(0x0)) {
      (**(code **)(*local_30 + 8))();
    }
    *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x1c);
    ((SCStr *)((SCStr *)&local_10))->int_release();

  }
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x10);
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("canvasStyle");
  ppiVar12 = (int **)(&local_34);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x1d);
  (**(code **)*puVar6)(ppiVar12);
  thunk_FUN_106d83f0(ppiVar12);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x1e);
  cVar3 = (char)((**(code **)(*local_34 + 0x74))(&local_14), 0);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x1f);
  if ((int *)(local_34) != (int *)(0x0)) {
    (**(code **)(*local_34 + 8))();
  }
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x20);
  ((SCStr *)((SCStr *)&local_14))->int_release();

  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x10);
  if (cVar3 == '\0') {
    ((SCStr *)((SCStr *)&local_18))->int_allocRep("canvasStyle");
    ppiVar12 = (int **)(&local_38);
    *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x21);
    (**(code **)*puVar6)(ppiVar12);
    thunk_FUN_106d83f0(ppiVar12);
    *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x22);
    (**(code **)(*local_38 + 0x28))(&local_18,0);
    *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x23);
    if ((int *)(local_38) != (int *)(0x0)) {
      (**(code **)(*local_38 + 8))();
    }
    *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x24);
    ((SCStr *)((SCStr *)&local_18))->int_release();

  }
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x10);
  ((SCStr *)((SCStr *)&local_1c))->int_allocRep("footerStyle");
  ppiVar12 = (int **)(&local_3c);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x25);
  (**(code **)*puVar6)(ppiVar12);
  thunk_FUN_106d83f0(ppiVar12);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x26);
  cVar3 = (char)((**(code **)(*local_3c + 0x74))(&local_1c), 0);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x27);
  if ((int *)(local_3c) != (int *)(0x0)) {
    (**(code **)(*local_3c + 8))();
  }
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x28);
  ((SCStr *)((SCStr *)&local_1c))->int_release();

  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x10);
  if (cVar3 == '\0') {
    ((SCStr *)((SCStr *)&local_20))->int_allocRep("footerStyle");
    ppiVar12 = (int **)(&local_40);
    *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x29);
    (**(code **)*puVar6)(ppiVar12);
    thunk_FUN_106d83f0(ppiVar12);
    *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x2a);
    (**(code **)(*local_40 + 0x28))(&local_20,0);
    *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x2b);
    if ((int *)(local_40) != (int *)(0x0)) {
      (**(code **)(*local_40 + 8))();
    }
    *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x2c);
    ((SCStr *)((SCStr *)&local_20))->int_release();

  }
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x10);
  (**(code **)*puVar6)();
  iVar5 = (int)(thunk_FUN_1061c630(0xc), 0);
  thunk_FUN_105f6290(iVar5 + 4);
  local_60 = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTree);

  piStack_58 = (int *)((int *)0x0);
  piStack_54 = (int *)((int *)0x0);
  iStack_50 = (int)(0);
  local_4c = (undefined4 *)((undefined4 *)0x0);
  local_48 = (undefined4 *)((undefined4 *)0x0);

  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x2e);
  piVar7 = (int *)((int *)thunk_FUN_106050a0((uint)&local_118), 0);
  thunk_FUN_10eb41c0();
  uVar4 = (undefined4)(thunk_FUN_106052d0((uint)&local_1d8), 0);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x2f);
  piVar7 = (int *)((int *)(**(code **)(*piVar7 + 8))(uVar4), 0);
  piVar7 = (int *)((int *)(**(code **)(*piVar7 + 8))((uint)&local_138), 0);
  pppuVar11 = (undefined ***)((uint)&local_158);
  iVar5 = (int)(*piVar7);
  pSVar8 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton(), 0);
  piVar7 = (int *)((int *)(**(code **)(iVar5 + 0xc)) (*(undefined1 *)(*(int *)(pSVar8 + 0x4c) + 0x53),pppuVar11), 0);
  piVar7 = (int *)((int *)(**(code **)(*piVar7 + 0x14))((uint)&local_178), 0);
  pppuVar11 = (undefined ***)((uint)&local_198);
  iVar5 = (int)(*piVar7);
  pSVar8 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton(), 0);
  piVar7 = (int *)((int *)(**(code **)(iVar5 + 0xc)) (*(undefined1 *)(*(int *)(pSVar8 + 0x4c) + 0x53),pppuVar11), 0);
  uVar4 = (undefined4)((**(code **)(*piVar7 + 0x14))((uint)&local_1b8), 0);
  thunk_FUN_105f60e0(uVar4);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  puVar2 = (undefined4 *)(local_48);
  local_1d8[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x2d);
  puVar6 = (undefined4 *)(local_4c);
  if ((undefined4 *)(local_4c) != (undefined4 *)(0x0)) {
    for (;(undefined4 *)((puVar6)) != (undefined4 *)(puVar2); puVar6 = puVar6 + 8) {
      (**(code **)*puVar6)(0);
    }
    uVar9 = (uint)(local_44 - (int)local_4c & 0xffffffe0);
    puVar6 = (undefined4 *)(local_4c);
    if (0xfff < uVar9) {
      puVar6 = (undefined4 *)((undefined4 *)local_4c[-1]);
      uVar9 = (uint)(uVar9 + 0x23);
      if (0x1f < (uint)((int)local_4c + (-4 - (int)puVar6))) goto LAB_1060e118;
    }
    thunk_FUN_1148a50e(puVar6,uVar9);
    local_4c = (undefined4 *)((undefined4 *)0x0);
    local_48 = (undefined4 *)((undefined4 *)0x0);

  }
  piVar7 = (int *)(piStack_54);
  if ((int *)(piStack_58) != (int *)(0x0)) {
    if ((int *)(piStack_58) != (int *)(piStack_54)) {
      piVar10 = (int *)(piStack_58 + 1);
      do {
        *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x30);
        ((SCStr *)((SCStr *)(piVar10 + 1)))->int_release();
        piVar10[1] = (int)(0);
        piVar1 = (int *)((int *)*piVar10);
        *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x31);
        if ((int *)(piVar1) != (int *)(0x0)) {
          piVar10[-1] = (int)(0);
          *piVar10 = (int)(0);
          (**(code **)(*piVar1 + 8))();
        }
        *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x2d);
        piVar1 = (int *)(piVar10 + 2);
        piVar10 = (int *)(piVar10 + 3);
      } while ((int *)(piVar1) != (int *)(piVar7));
    }
    uVar9 = (uint)(((iStack_50 - (int)piStack_58) / 0xc) * 0xc);
    piVar7 = (int *)(piStack_58);
    if (0xfff < uVar9) {
      piVar7 = (int *)((int *)piStack_58[-1]);
      uVar9 = (uint)(uVar9 + 0x23);
      if (0x1f < (uint)((int)piStack_58 + (-4 - (int)piVar7))) {
LAB_1060e118:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(piVar7,uVar9);
    piStack_58 = (int *)((int *)0x0);
    piStack_54 = (int *)((int *)0x0);
    iStack_50 = (int)(0);
  }
  local_60 = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_118[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x32);
  ((SCStr *)((SCStr *)&local_8c))->int_release();
  piVar7 = (int *)(local_90);

  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x33);
  if ((int *)(local_90) != (int *)(0x0)) {

    local_90 = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_138[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x34);
  ((SCStr *)((SCStr *)(uint)&local_9c))->int_release();
  piVar7 = (int *)(local_a0);
  local_9c[0] = (undefined4)(0);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x35);
  if ((int *)(local_a0) != (int *)(0x0)) {

    local_a0 = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  piVar7 = (int *)(local_68);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x36);
  if ((int *)(local_68) != (int *)(0x0)) {

    local_68 = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x37);
  ((SCStr *)((SCStr *)&local_24))->int_release();

  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_158[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x38);
  ((SCStr *)((SCStr *)(uint)&local_ac))->int_release();
  piVar7 = (int *)(local_b0);
  local_ac[0] = (undefined4)(0);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x39);
  if ((int *)(local_b0) != (int *)(0x0)) {

    local_b0 = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x3a);
  ((SCStr *)((SCStr *)(uint)&local_f0))->int_release();
  local_f0[0] = (undefined4)(0);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_178[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x3b);
  ((SCStr *)((SCStr *)(uint)&local_bc))->int_release();
  piVar7 = (int *)(local_c0);
  local_bc[0] = (undefined4)(0);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x3c);
  if ((int *)(local_c0) != (int *)(0x0)) {

    local_c0 = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x3d);
  ((SCStr *)((SCStr *)(uint)&local_74))->int_release();
  local_74[0] = (undefined4)(0);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_198[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x3e);
  ((SCStr *)((SCStr *)(uint)&local_cc))->int_release();
  piVar7 = (int *)(local_d0);
  local_cc[0] = (undefined4)(0);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x3f);
  if ((int *)(local_d0) != (int *)(0x0)) {

    local_d0 = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x40);
  ((SCStr *)((SCStr *)(uint)&local_88))->int_release();
  local_88[0] = (undefined4)(0);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_1b8[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x41);
  ((SCStr *)((SCStr *)(uint)&local_dc))->int_release();
  piVar7 = (int *)(local_e0);
  local_dc[0] = (undefined4)(0);
  local_78 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_78 + 1)) << 8 | (uint)(0x42)));
  if ((int *)(local_e0) != (int *)(0x0)) {

    local_e0 = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }

  ((SCStr *)((uint)&local_f8))->int_release();

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 1060e600; body size 1837 bytes.
#line 1 "ENTRY_1060e600"

undefined4 __stdcall FUN_1060e600(undefined4 param_1)

{
 try {
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *piVar9;
  int **ppiVar10;
  undefined **local_160 [8];
  undefined **local_140 [8];
  undefined **local_120 [8];
  undefined **local_100 [8];
  undefined **local_e0 [9];
  undefined4 local_bc;
  int *local_b8;
  undefined4 local_b4 [2];
  undefined4 local_ac;
  int *local_a8;
  undefined4 local_a4 [2];
  undefined4 local_9c;
  int *local_98;
  undefined4 local_94 [2];
  undefined4 local_8c;
  int *local_88;
  undefined4 local_84;
  void *local_80;
  undefined1 *puStack_7c;
  undefined4 local_78;
  undefined4 local_74 [2];
  undefined4 local_6c;
  int *local_68;
  undefined **local_60;
  undefined4 local_5c;
  int *piStack_58;
  int *piStack_54;
  int iStack_50;
  undefined4 *local_4c;
  undefined4 *local_48;
  int local_44;
  int *local_40;
  int *local_3c;
  int *local_38;
  int *local_34;
  int *local_30;
  int *local_2c;
  int *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;


  uVar4 = (uint)(DAT_12126b84 ^ (uint)(uint)&local_74);

  iVar5 = (int)(thunk_FUN_10ec1a10("continue"), 0);

  thunk_FUN_105f6290(iVar5 + 4);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(1);
  uVar6 = (undefined4)(thunk_FUN_10c5f450((SCStr *)(uint)&local_74,0x2bfc,&DAT_11882ff0,uVar4), 0);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(2);
  thunk_FUN_10ec0bb0(&DAT_118bd268);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(3);
  iVar5 = (int)(thunk_FUN_10eced20(uVar6), 0);
  thunk_FUN_105f6290(iVar5 + 4);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(4);
  ((SCStr *)((SCStr *)&local_24))->int_allocRep("alert_popup.png");
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(5);
  thunk_FUN_10ec1d20();
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(6);
  thunk_FUN_10ec1c00("image");
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(7);
  uVar6 = (undefined4)(thunk_FUN_10ecc7e0(&local_24), 0);
  iVar5 = (int)(thunk_FUN_10ecbbd0(uVar6), 0);
  thunk_FUN_105f6290(iVar5 + 4);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(8);
  puVar7 = (undefined4 *)((undefined4 *)thunk_FUN_10ec1d40(), 0);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(9);
  ((SCStr *)((SCStr *)&local_8))->int_allocRep("layoutStyle");
  ppiVar10 = (int **)(&local_28);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(10);
  (**(code **)*puVar7)(ppiVar10);
  thunk_FUN_106d83f0(ppiVar10);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0xb);
  (**(code **)(*local_28 + 0x28))(&local_8,1);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0xc);
  if ((int *)(local_28) != (int *)(0x0)) {
    (**(code **)(*local_28 + 8))();
  }
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0xd);
  ((SCStr *)((SCStr *)&local_8))->int_release();

  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(9);
  ((SCStr *)((SCStr *)&local_c))->int_allocRep("headerStyle");
  ppiVar10 = (int **)(&local_2c);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0xe);
  (**(code **)*puVar7)(ppiVar10);
  thunk_FUN_106d83f0(ppiVar10);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0xf);
  cVar3 = (char)((**(code **)(*local_2c + 0x74))(&local_c), 0);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x10);
  if ((int *)(local_2c) != (int *)(0x0)) {
    (**(code **)(*local_2c + 8))();
  }
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x11);
  ((SCStr *)((SCStr *)&local_c))->int_release();

  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(9);
  if (cVar3 == '\0') {
    ((SCStr *)((SCStr *)&local_10))->int_allocRep("headerStyle");
    ppiVar10 = (int **)(&local_30);
    *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x12);
    (**(code **)*puVar7)(ppiVar10);
    thunk_FUN_106d83f0(ppiVar10);
    *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x13);
    (**(code **)(*local_30 + 0x28))(&local_10,1);
    *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x14);
    if ((int *)(local_30) != (int *)(0x0)) {
      (**(code **)(*local_30 + 8))();
    }
    *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x15);
    ((SCStr *)((SCStr *)&local_10))->int_release();

  }
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(9);
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("canvasStyle");
  ppiVar10 = (int **)(&local_34);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x16);
  (**(code **)*puVar7)(ppiVar10);
  thunk_FUN_106d83f0(ppiVar10);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x17);
  cVar3 = (char)((**(code **)(*local_34 + 0x74))(&local_14), 0);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x18);
  if ((int *)(local_34) != (int *)(0x0)) {
    (**(code **)(*local_34 + 8))();
  }
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x19);
  ((SCStr *)((SCStr *)&local_14))->int_release();

  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(9);
  if (cVar3 == '\0') {
    ((SCStr *)((SCStr *)&local_18))->int_allocRep("canvasStyle");
    ppiVar10 = (int **)(&local_38);
    *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x1a);
    (**(code **)*puVar7)(ppiVar10);
    thunk_FUN_106d83f0(ppiVar10);
    *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x1b);
    (**(code **)(*local_38 + 0x28))(&local_18,0);
    *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x1c);
    if ((int *)(local_38) != (int *)(0x0)) {
      (**(code **)(*local_38 + 8))();
    }
    *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x1d);
    ((SCStr *)((SCStr *)&local_18))->int_release();

  }
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(9);
  ((SCStr *)((SCStr *)&local_1c))->int_allocRep("footerStyle");
  ppiVar10 = (int **)(&local_3c);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x1e);
  (**(code **)*puVar7)(ppiVar10);
  thunk_FUN_106d83f0(ppiVar10);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x1f);
  cVar3 = (char)((**(code **)(*local_3c + 0x74))(&local_1c), 0);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x20);
  if ((int *)(local_3c) != (int *)(0x0)) {
    (**(code **)(*local_3c + 8))();
  }
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x21);
  ((SCStr *)((SCStr *)&local_1c))->int_release();

  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(9);
  if (cVar3 == '\0') {
    ((SCStr *)((SCStr *)&local_20))->int_allocRep("footerStyle");
    ppiVar10 = (int **)(&local_40);
    *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x22);
    (**(code **)*puVar7)(ppiVar10);
    thunk_FUN_106d83f0(ppiVar10);
    *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x23);
    (**(code **)(*local_40 + 0x28))(&local_20,0);
    *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x24);
    if ((int *)(local_40) != (int *)(0x0)) {
      (**(code **)(*local_40 + 8))();
    }
    *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x25);
    ((SCStr *)((SCStr *)&local_20))->int_release();

  }
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(9);
  (**(code **)*puVar7)();
  iVar5 = (int)(thunk_FUN_1061c630(0xc), 0);
  thunk_FUN_105f6290(iVar5 + 4);
  local_60 = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTree);

  piStack_58 = (int *)((int *)0x0);
  piStack_54 = (int *)((int *)0x0);
  iStack_50 = (int)(0);
  local_4c = (undefined4 *)((undefined4 *)0x0);
  local_48 = (undefined4 *)((undefined4 *)0x0);

  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x27);
  piVar8 = (int *)((int *)thunk_FUN_106050a0((uint)&local_e0), 0);
  thunk_FUN_10eb41c0();
  uVar6 = (undefined4)(thunk_FUN_106052d0((uint)&local_160), 0);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x28);
  piVar8 = (int *)((int *)(**(code **)(*piVar8 + 8))(uVar6), 0);
  piVar8 = (int *)((int *)(**(code **)(*piVar8 + 8))((uint)&local_100), 0);
  piVar8 = (int *)((int *)(**(code **)(*piVar8 + 8))((uint)&local_120), 0);
  uVar6 = (undefined4)((**(code **)(*piVar8 + 8))((uint)&local_140), 0);
  thunk_FUN_105f60e0(uVar6);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  puVar2 = (undefined4 *)(local_48);
  local_160[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x26);
  puVar7 = (undefined4 *)(local_4c);
  if ((undefined4 *)(local_4c) != (undefined4 *)(0x0)) {
    for (;(undefined4 *)((puVar7)) != (undefined4 *)(puVar2); puVar7 = puVar7 + 8) {
      (**(code **)*puVar7)(0);
    }
    uVar4 = (uint)(local_44 - (int)local_4c & 0xffffffe0);
    puVar7 = (undefined4 *)(local_4c);
    if (0xfff < uVar4) {
      puVar7 = (undefined4 *)((undefined4 *)local_4c[-1]);
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (uint)((int)local_4c + (-4 - (int)puVar7))) goto LAB_1060eb65;
    }
    thunk_FUN_1148a50e(puVar7,uVar4);
    local_4c = (undefined4 *)((undefined4 *)0x0);
    local_48 = (undefined4 *)((undefined4 *)0x0);

  }
  piVar8 = (int *)(piStack_54);
  if ((int *)(piStack_58) != (int *)(0x0)) {
    if ((int *)(piStack_58) != (int *)(piStack_54)) {
      piVar9 = (int *)(piStack_58 + 1);
      do {
        *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x29);
        ((SCStr *)((SCStr *)(piVar9 + 1)))->int_release();
        piVar9[1] = (int)(0);
        piVar1 = (int *)((int *)*piVar9);
        *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x2a);
        if ((int *)(piVar1) != (int *)(0x0)) {
          piVar9[-1] = (int)(0);
          *piVar9 = (int)(0);
          (**(code **)(*piVar1 + 8))();
        }
        *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x26);
        piVar1 = (int *)(piVar9 + 2);
        piVar9 = (int *)(piVar9 + 3);
      } while ((int *)(piVar1) != (int *)(piVar8));
    }
    uVar4 = (uint)(((iStack_50 - (int)piStack_58) / 0xc) * 0xc);
    piVar8 = (int *)(piStack_58);
    if (0xfff < uVar4) {
      piVar8 = (int *)((int *)piStack_58[-1]);
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (uint)((int)piStack_58 + (-4 - (int)piVar8))) {
LAB_1060eb65:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(piVar8,uVar4);
    piStack_58 = (int *)((int *)0x0);
    piStack_54 = (int *)((int *)0x0);
    iStack_50 = (int)(0);
  }
  local_60 = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_e0[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x2b);
  ((SCStr *)((SCStr *)&local_84))->int_release();
  piVar8 = (int *)(local_88);

  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x2c);
  if ((int *)(local_88) != (int *)(0x0)) {

    local_88 = (int *)((int *)0x0);
    (**(code **)(*piVar8 + 8))();
  }
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_100[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x2d);
  ((SCStr *)((SCStr *)(uint)&local_94))->int_release();
  piVar8 = (int *)(local_98);
  local_94[0] = (undefined4)(0);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x2e);
  if ((int *)(local_98) != (int *)(0x0)) {

    local_98 = (int *)((int *)0x0);
    (**(code **)(*piVar8 + 8))();
  }
  piVar8 = (int *)(local_68);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x2f);
  if ((int *)(local_68) != (int *)(0x0)) {

    local_68 = (int *)((int *)0x0);
    (**(code **)(*piVar8 + 8))();
  }
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x30);
  ((SCStr *)((SCStr *)&local_24))->int_release();

  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_120[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x31);
  ((SCStr *)((SCStr *)(uint)&local_a4))->int_release();
  piVar8 = (int *)(local_a8);
  local_a4[0] = (undefined4)(0);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x32);
  if ((int *)(local_a8) != (int *)(0x0)) {

    local_a8 = (int *)((int *)0x0);
    (**(code **)(*piVar8 + 8))();
  }
  local_78 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_78 + 1)) << 8 | (uint)(0x33)));
  ((SCStr *)((SCStr *)(uint)&local_74))->int_release();
  local_74[0] = (undefined4)(0);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_140[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);

  ((SCStr *)((SCStr *)(uint)&local_b4))->int_release();
  piVar8 = (int *)(local_b8);
  local_b4[0] = (undefined4)(0);

  if ((int *)(local_b8) != (int *)(0x0)) {

    local_b8 = (int *)((int *)0x0);
    (**(code **)(*piVar8 + 8))();
  }

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 1060ef00; body size 2163 bytes.
#line 1 "ENTRY_1060ef00"

undefined4 __thiscall Recovered_Bulk::m_FUN_1060ef00(undefined4 param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int *piVar8;
  char *pcVar9;
  undefined1 *puVar10;
  int *piVar11;
  int **ppiVar12;
  undefined4 uVar13;
  undefined **local_1a0 [8];
  undefined **local_180 [8];
  undefined **local_160 [8];
  undefined **local_140 [8];
  undefined **local_120 [8];
  undefined **local_100 [9];
  undefined4 local_dc;
  int *local_d8;
  undefined4 local_d4 [2];
  undefined4 local_cc;
  int *local_c8;
  undefined4 local_c4 [2];
  undefined4 local_bc;
  int *local_b8;
  undefined4 local_b4 [2];
  undefined4 local_ac;
  int *local_a8;
  undefined4 local_a4 [2];
  undefined4 local_9c;
  int *local_98;
  undefined4 local_94;
  undefined4 local_90 [2];
  undefined4 local_88 [2];
  void *local_80;
  undefined1 *puStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  int *local_70;
  int local_6c;
  undefined **local_68;
  undefined4 local_64;
  int *piStack_60;
  int *piStack_5c;
  int iStack_58;
  undefined4 *local_54;
  undefined4 *local_50;
  int local_4c;
  undefined1 *local_48;
  int *local_44;
  int *local_40;
  int *local_3c;
  int *local_38;
  int *local_34;
  int *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;


  uVar4 = (uint)(DAT_12126b84 ^ (uint)&local_74);

  pcVar9 = (char *)("");
  if (*(char **)(param_1 + 0xe0) != (char *)((0x0))) {
    pcVar9 = (char *)(*(char **)(param_1 + 0xe0), 0);
  }
  local_6c = (int)(param_1);
  ((SCStr *)((SCStr *)&local_c))->int_allocRep(pcVar9);

  thunk_FUN_10c61f70(&local_48,&local_c,uVar4);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(3);
  ((SCStr *)((SCStr *)&local_c))->int_release();

  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(2);
  iVar5 = (int)(thunk_FUN_10ec1a10("continue"), 0);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(4);
  thunk_FUN_105f6290(iVar5 + 4);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(5);
  uVar6 = (undefined4)(thunk_FUN_10c5f450((uint)&local_90,0x2bf2,&DAT_11882ff0), 0);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(6);
  thunk_FUN_10ec0bb0(&DAT_118bd268);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(7);
  iVar5 = (int)(thunk_FUN_10eced20(uVar6), 0);
  thunk_FUN_105f6290(iVar5 + 4);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(8);
  puVar10 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)(local_48) != (undefined1 *)(0x0)) {
    puVar10 = (undefined1 *)(local_48);
  }
  uVar6 = (undefined4)(thunk_FUN_10c5f450((uint)&local_88,0x2bf1,&DAT_1188465c,puVar10), 0);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(9);
  thunk_FUN_10ec0bb0(&DAT_118bd268);
  uVar13 = (undefined4)(1);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(10);
  thunk_FUN_10eced20(uVar6);
  iVar5 = (int)(thunk_FUN_10ecd540(uVar13), 0);
  thunk_FUN_105f6290(iVar5 + 4);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0xb);
  ((SCStr *)((SCStr *)&local_2c))->int_allocRep("wifi_connected_popup.png");
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0xc);
  thunk_FUN_10ec1d20();
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0xd);
  thunk_FUN_10ec1c00("image");
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0xe);
  uVar6 = (undefined4)(thunk_FUN_10ecc7e0(&local_2c), 0);
  iVar5 = (int)(thunk_FUN_10ecbbd0(uVar6), 0);
  thunk_FUN_105f6290(iVar5 + 4);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0xf);
  puVar7 = (undefined4 *)((undefined4 *)thunk_FUN_10ec1d40(), 0);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x10);
  ((SCStr *)((SCStr *)&local_10))->int_allocRep("layoutStyle");
  ppiVar12 = (int **)(&local_30);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x11);
  (**(code **)*puVar7)(ppiVar12);
  thunk_FUN_106d83f0(ppiVar12);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x12);
  (**(code **)(*local_30 + 0x28))(&local_10,1);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x13);
  if ((int *)(local_30) != (int *)(0x0)) {
    (**(code **)(*local_30 + 8))();
  }
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x14);
  ((SCStr *)((SCStr *)&local_10))->int_release();

  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x10);
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("headerStyle");
  ppiVar12 = (int **)(&local_34);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x15);
  (**(code **)*puVar7)(ppiVar12);
  thunk_FUN_106d83f0(ppiVar12);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x16);
  cVar3 = (char)((**(code **)(*local_34 + 0x74))(&local_14), 0);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x17);
  if ((int *)(local_34) != (int *)(0x0)) {
    (**(code **)(*local_34 + 8))();
  }
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x18);
  ((SCStr *)((SCStr *)&local_14))->int_release();

  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x10);
  if (cVar3 == '\0') {
    ((SCStr *)((SCStr *)&local_18))->int_allocRep("headerStyle");
    ppiVar12 = (int **)(&local_38);
    *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x19);
    (**(code **)*puVar7)(ppiVar12);
    thunk_FUN_106d83f0(ppiVar12);
    *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x1a);
    (**(code **)(*local_38 + 0x28))(&local_18,1);
    *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x1b);
    if ((int *)(local_38) != (int *)(0x0)) {
      (**(code **)(*local_38 + 8))();
    }
    *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x1c);
    ((SCStr *)((SCStr *)&local_18))->int_release();

  }
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x10);
  ((SCStr *)((SCStr *)&local_1c))->int_allocRep("canvasStyle");
  ppiVar12 = (int **)(&local_3c);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x1d);
  (**(code **)*puVar7)(ppiVar12);
  thunk_FUN_106d83f0(ppiVar12);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x1e);
  cVar3 = (char)((**(code **)(*local_3c + 0x74))(&local_1c), 0);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x1f);
  if ((int *)(local_3c) != (int *)(0x0)) {
    (**(code **)(*local_3c + 8))();
  }
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x20);
  ((SCStr *)((SCStr *)&local_1c))->int_release();

  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x10);
  if (cVar3 == '\0') {
    ((SCStr *)((SCStr *)&local_20))->int_allocRep("canvasStyle");
    ppiVar12 = (int **)(&local_40);
    *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x21);
    (**(code **)*puVar7)(ppiVar12);
    thunk_FUN_106d83f0(ppiVar12);
    *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x22);
    (**(code **)(*local_40 + 0x28))(&local_20,0);
    *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x23);
    if ((int *)(local_40) != (int *)(0x0)) {
      (**(code **)(*local_40 + 8))();
    }
    *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x24);
    ((SCStr *)((SCStr *)&local_20))->int_release();

  }
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x10);
  ((SCStr *)((SCStr *)&local_24))->int_allocRep("footerStyle");
  ppiVar12 = (int **)(&local_44);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x25);
  (**(code **)*puVar7)(ppiVar12);
  thunk_FUN_106d83f0(ppiVar12);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x26);
  cVar3 = (char)((**(code **)(*local_44 + 0x74))(&local_24), 0);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x27);
  if ((int *)(local_44) != (int *)(0x0)) {
    (**(code **)(*local_44 + 8))();
  }
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x28);
  ((SCStr *)((SCStr *)&local_24))->int_release();

  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x10);
  if (cVar3 == '\0') {
    ((SCStr *)((SCStr *)&local_28))->int_allocRep("footerStyle");
    ppiVar12 = (int **)(&local_8);
    *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x29);
    (**(code **)*puVar7)(ppiVar12);
    thunk_FUN_106d83f0(ppiVar12);
    *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x2a);
    (**(code **)(*local_8 + 0x28))(&local_28,0);
    *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x2b);
    if ((int *)(local_8) != (int *)(0x0)) {
      (**(code **)(*local_8 + 8))();
    }
    *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x2c);
    ((SCStr *)((SCStr *)&local_28))->int_release();

  }
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x10);
  (**(code **)*puVar7)();
  iVar5 = (int)(thunk_FUN_1061c630(0xc), 0);
  thunk_FUN_105f6290(iVar5 + 4);
  local_68 = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTree);

  piStack_60 = (int *)((int *)0x0);
  piStack_5c = (int *)((int *)0x0);
  iStack_58 = (int)(0);
  local_54 = (undefined4 *)((undefined4 *)0x0);
  local_50 = (undefined4 *)((undefined4 *)0x0);

  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x2e);
  piVar8 = (int *)((int *)thunk_FUN_106050a0((uint)&local_100), 0);
  iVar5 = (int)(local_6c);
  thunk_FUN_10eb41c0();
  uVar6 = (undefined4)(thunk_FUN_106052d0((uint)&local_1a0), 0);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x2f);
  piVar8 = (int *)((int *)(**(code **)(*piVar8 + 8))(uVar6), 0);
  piVar8 = (int *)((int *)(**(code **)(*piVar8 + 8))((uint)&local_120), 0);
  if (*(char **)(iVar5 + 0xe0) == (char *)((0x0))) {
LAB_1060f3e6:
    local_8 = (int *)((int *)((uint)local_8 & 0xffffff00));
  }
  else {
    local_8 = (int *)((int *)((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    if (**(char **)(iVar5 + 0xe0) == '\0') goto LAB_1060f3e6;
  }
  piVar8 = (int *)((int *)(**(code **)(*piVar8 + 0xc))(local_8,(uint)&local_140), 0);
  piVar8 = (int *)((int *)(**(code **)(*piVar8 + 0x14))((uint)&local_160), 0);
  uVar6 = (undefined4)((**(code **)(*piVar8 + 8))((uint)&local_180), 0);
  thunk_FUN_105f60e0(uVar6);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  puVar2 = (undefined4 *)(local_50);
  local_1a0[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x2d);
  puVar7 = (undefined4 *)(local_54);
  if ((undefined4 *)(local_54) != (undefined4 *)(0x0)) {
    for (;(undefined4 *)((puVar7)) != (undefined4 *)(puVar2); puVar7 = puVar7 + 8) {
      (**(code **)*puVar7)(0);
    }
    uVar4 = (uint)(local_4c - (int)local_54 & 0xffffffe0);
    puVar7 = (undefined4 *)(local_54);
    if (0xfff < uVar4) {
      puVar7 = (undefined4 *)((undefined4 *)local_54[-1]);
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (uint)((int)local_54 + (-4 - (int)puVar7))) goto LAB_1060f535;
    }
    thunk_FUN_1148a50e(puVar7,uVar4);
    local_54 = (undefined4 *)((undefined4 *)0x0);
    local_50 = (undefined4 *)((undefined4 *)0x0);

  }
  piVar8 = (int *)(piStack_5c);
  if ((int *)(piStack_60) != (int *)(0x0)) {
    if ((int *)(piStack_60) != (int *)(piStack_5c)) {
      piVar11 = (int *)(piStack_60 + 1);
      do {
        *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x30);
        ((SCStr *)((SCStr *)(piVar11 + 1)))->int_release();
        piVar11[1] = (int)(0);
        piVar1 = (int *)((int *)*piVar11);
        *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x31);
        if ((int *)(piVar1) != (int *)(0x0)) {
          piVar11[-1] = (int)(0);
          *piVar11 = (int)(0);
          (**(code **)(*piVar1 + 8))();
        }
        *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x2d);
        piVar1 = (int *)(piVar11 + 2);
        piVar11 = (int *)(piVar11 + 3);
      } while ((int *)(piVar1) != (int *)(piVar8));
    }
    uVar4 = (uint)(((iStack_58 - (int)piStack_60) / 0xc) * 0xc);
    piVar8 = (int *)(piStack_60);
    if (0xfff < uVar4) {
      piVar8 = (int *)((int *)piStack_60[-1]);
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (uint)((int)piStack_60 + (-4 - (int)piVar8))) {
LAB_1060f535:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(piVar8,uVar4);
    piStack_60 = (int *)((int *)0x0);
    piStack_5c = (int *)((int *)0x0);
    iStack_58 = (int)(0);
  }
  local_68 = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_100[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x32);
  ((SCStr *)((SCStr *)&local_94))->int_release();
  piVar8 = (int *)(local_98);

  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x33);
  if ((int *)(local_98) != (int *)(0x0)) {

    local_98 = (int *)((int *)0x0);
    (**(code **)(*piVar8 + 8))();
  }
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_120[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x34);
  ((SCStr *)((SCStr *)(uint)&local_a4))->int_release();
  piVar8 = (int *)(local_a8);
  local_a4[0] = (undefined4)(0);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x35);
  if ((int *)(local_a8) != (int *)(0x0)) {

    local_a8 = (int *)((int *)0x0);
    (**(code **)(*piVar8 + 8))();
  }
  piVar8 = (int *)(local_70);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x36);
  if ((int *)(local_70) != (int *)(0x0)) {

    local_70 = (int *)((int *)0x0);
    (**(code **)(*piVar8 + 8))();
  }
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x37);
  ((SCStr *)((SCStr *)&local_2c))->int_release();

  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_140[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x38);
  ((SCStr *)((SCStr *)(uint)&local_b4))->int_release();
  piVar8 = (int *)(local_b8);
  local_b4[0] = (undefined4)(0);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x39);
  if ((int *)(local_b8) != (int *)(0x0)) {

    local_b8 = (int *)((int *)0x0);
    (**(code **)(*piVar8 + 8))();
  }
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x3a);
  ((SCStr *)((SCStr *)(uint)&local_88))->int_release();
  local_88[0] = (undefined4)(0);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_160[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x3b);
  ((SCStr *)((SCStr *)(uint)&local_c4))->int_release();
  piVar8 = (int *)(local_c8);
  local_c4[0] = (undefined4)(0);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x3c);
  if ((int *)(local_c8) != (int *)(0x0)) {

    local_c8 = (int *)((int *)0x0);
    (**(code **)(*piVar8 + 8))();
  }
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x3d);
  ((SCStr *)((SCStr *)(uint)&local_90))->int_release();
  local_90[0] = (undefined4)(0);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_180[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x3e);
  ((SCStr *)((SCStr *)(uint)&local_d4))->int_release();
  piVar8 = (int *)(local_d8);
  local_d4[0] = (undefined4)(0);
  local_78 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_78 + 1)) << 8 | (uint)(0x3f)));
  if ((int *)(local_d8) != (int *)(0x0)) {

    local_d8 = (int *)((int *)0x0);
    (**(code **)(*piVar8 + 8))();
  }

  ((SCStr *)((SCStr *)&local_48))->int_release();

  return (undefined4)(param_2);

 } catch (...) { }
}


// Reference entry 1060f990; body size 839 bytes.
#line 1 "ENTRY_1060f990"

undefined4 __stdcall FUN_1060f990(undefined4 param_1)

{
 try {
  int *piVar1;
  undefined1 uVar2;
  int *piVar3;
  int iVar4;
  SCStr *pSVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined1 *local_44 [3];
  SCStr local_38 [8];
  int *local_30;
  int *local_2c;
  undefined4 local_28;
  int *local_24;
  undefined4 local_20;
  int *local_1c;
  undefined4 local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  thunk_FUN_10eb41c0(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  piVar3 = (int *)((int *)thunk_FUN_10cf34e0(&local_14), 0);
  piVar1 = (int *)((int *)*piVar3);

  *piVar3 = (int)(0);
  local_30 = (int *)(piVar1);
  if ((int *)(piVar1) == (int *)(0x0)) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(), 0);
  }
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(3);
  local_2c = (int *)(piVar3);
  if ((int *)(local_14) != (int *)(0x0)) {
    (**(code **)(*local_14 + 8))();
  }
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(2);
  thunk_FUN_10c5f1d0(piVar1);
  thunk_FUN_10c61010((uint)&local_44,(uint)&local_38,6,0,0);
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(4);
  thunk_FUN_10eb41c0();
  iVar4 = (int)(thunk_FUN_10eac8c0(), 0);
  thunk_FUN_10c5f8a0(&DAT_1186d2ee);
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(5);
  thunk_FUN_10c5f8a0(&DAT_1186d2ee);
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(6);
  uVar2 = (undefined1)((undefined1)local_8);
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(6);
  if (((iVar4 == 2) || (iVar4 == 4)) || (iVar4 == 5)) {
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(uVar2);
    thunk_FUN_10c5f8a0(&DAT_1186d2ee);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(7);
    puVar7 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)(local_44[0]) != (undefined1 *)(0x0)) {
      puVar7 = (undefined1 *)(local_44[0]);
    }
    thunk_FUN_10c62d50(&local_18,(uint)&local_44,0x2796,&DAT_1188465c,puVar7);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(8);
    ((SCStr *)((SCStr *)&local_28))->int_release();
    local_28 = (undefined4)(local_18);
    ((SCStr *)((SCStr *)&local_28))->int_addref();
    local_24 = (int *)(local_14);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(9);
    ((SCStr *)((SCStr *)&local_18))->int_release();
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(6);
    thunk_FUN_10c5f8a0(&DAT_1186d2ee);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(10);
    puVar7 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)(local_44[0]) != (undefined1 *)(0x0)) {
      puVar7 = (undefined1 *)(local_44[0]);
    }
    thunk_FUN_10c62d50(&local_18,(uint)&local_44,0x2797,&DAT_1188465c,puVar7);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0xb);
    ((SCStr *)((SCStr *)&local_20))->int_release();
    local_20 = (undefined4)(local_18);
    ((SCStr *)((SCStr *)&local_20))->int_addref();
    local_1c = (int *)(local_14);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0xc);
    pSVar5 = (SCStr *)((SCStr *)&local_18);
  }
  else if (iVar4 == 1) {
    pSVar5 = (SCStr *)((SCStr *)thunk_FUN_10483f70(0x2798,&DAT_1188465c,(uint)&local_44), 0);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0xd);
    if ((SCStr *)(pSVar5) != (SCStr *)((SCStr*)&local_28)) {
      ((SCStr *)((SCStr *)&local_28))->int_release();
      local_28 = (undefined4)(*(undefined4 *)pSVar5);
      ((SCStr *)((SCStr *)&local_28))->int_addref();
    }
    local_24 = (int *)(*(int **)(pSVar5 + 4), 0);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0xe);
    ((SCStr *)((uint)&local_38))->int_release();
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(6);
    pSVar5 = (SCStr *)((SCStr *)thunk_FUN_10483f70(0x2799,&DAT_1188465c,(uint)&local_44), 0);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0xf);
    if ((SCStr *)(pSVar5) != (SCStr *)((SCStr*)&local_20)) {
      ((SCStr *)((SCStr *)&local_20))->int_release();
      local_20 = (undefined4)(*(undefined4 *)pSVar5);
      ((SCStr *)((SCStr *)&local_20))->int_addref();
    }
    local_1c = (int *)(*(int **)(pSVar5 + 4), 0);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x10);
    pSVar5 = (SCStr *)((uint)&local_38);
  }
  else {
    if (iVar4 != 3) goto LAB_1060fc51;
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(uVar2);
    uVar6 = (undefined4)(thunk_FUN_10c5f450((uint)&local_38,0x279a,&DAT_11882ff0), 0);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x11);
    thunk_FUN_10601430(uVar6);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x12);
    ((SCStr *)((uint)&local_38))->int_release();
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(6);
    uVar6 = (undefined4)(thunk_FUN_10c5f450((uint)&local_38,0x279b,&DAT_11882ff0), 0);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x13);
    thunk_FUN_10601430(uVar6);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x14);
    pSVar5 = (SCStr *)((uint)&local_38);
  }
  ((SCStr *)(pSVar5))->int_release();
LAB_1060fc51:
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(6);
  thunk_FUN_10c5f1d0(piVar1);
  thunk_FUN_10ed5f60(param_1,(uint)&local_38,&local_28,&local_20,1,0);
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x15);
  ((SCStr *)((SCStr *)&local_20))->int_release();

  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x16);
  ((SCStr *)((SCStr *)&local_28))->int_release();

  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x17)));
  ((SCStr *)((SCStr *)(uint)&local_44))->int_release();
  local_44[0] = (undefined1 *)((undefined1 *)0x0);

  if ((int *)(piVar3) != (int *)(0x0)) {
    (**(code **)(*piVar3 + 8))();
  }

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 1060fdb0; body size 1016 bytes.
#line 1 "ENTRY_1060fdb0"

undefined4 __stdcall FUN_1060fdb0(undefined4 param_1)

{
 try {
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined1 *puVar10;
  undefined4 uVar11;
  undefined **local_dc [8];
  undefined **local_bc [8];
  undefined **local_9c [8];
  void *local_7c;
  undefined1 *puStack_78;
  undefined4 local_74;
  undefined1 local_70 [4];
  undefined4 local_6c;
  int *local_68;
  undefined4 local_64 [2];
  undefined4 local_5c;
  int *local_58;
  undefined4 local_54 [2];
  undefined4 local_4c;
  int *local_48;
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined4 local_38 [2];
  undefined **local_30;
  undefined4 local_2c;
  int *piStack_28;
  int *piStack_24;
  int iStack_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  int local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;


  thunk_FUN_10eb41c0(DAT_12126b84 ^ (uint)(uint)&local_70);
  piVar3 = (int *)((int *)thunk_FUN_10eacda0(&local_c), 0);

  pcVar6 = (char *)("");
  if ((char *)*piVar3 != (char *)((0x0))) {
    pcVar6 = (char *)((char *)*piVar3);
  }
  ((SCStr *)((SCStr *)&local_8))->int_allocRep(pcVar6);
  *(unsigned char*)((char *)&local_74 + 0) = (unsigned char)(1);
  thunk_FUN_10c61f70(&local_10,&local_8);
  *(unsigned char*)((char *)&local_74 + 0) = (unsigned char)(4);
  ((SCStr *)((SCStr *)&local_8))->int_release();

  *(unsigned char*)((char *)&local_74 + 0) = (unsigned char)(6);
  ((SCStr *)((SCStr *)&local_c))->int_release();

  *(unsigned char*)((char *)&local_74 + 0) = (unsigned char)(5);
  uVar4 = (undefined4)(thunk_FUN_10c5f450((uint)&local_40,0x208f,&DAT_11882ff0), 0);
  *(unsigned char*)((char *)&local_74 + 0) = (unsigned char)(7);
  thunk_FUN_10ec0a20(&DAT_118bd270);
  *(unsigned char*)((char *)&local_74 + 0) = (unsigned char)(8);
  iVar5 = (int)(thunk_FUN_10ecea60(uVar4), 0);
  thunk_FUN_105f6290(iVar5 + 4);
  *(unsigned char*)((char *)&local_74 + 0) = (unsigned char)(9);
  puVar10 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)(local_10) != (undefined1 *)(0x0)) {
    puVar10 = (undefined1 *)(local_10);
  }
  uVar4 = (undefined4)(thunk_FUN_10c5f450((uint)&local_38,0x2c06,&DAT_1188465c,puVar10), 0);
  *(unsigned char*)((char *)&local_74 + 0) = (unsigned char)(10);
  thunk_FUN_10ec1b40("header");
  uVar11 = (undefined4)(1);
  *(unsigned char*)((char *)&local_74 + 0) = (unsigned char)(0xb);
  thunk_FUN_10eced20(uVar4);
  iVar5 = (int)(thunk_FUN_10ecd540(uVar11), 0);
  thunk_FUN_105f6290(iVar5 + 4);
  *(unsigned char*)((char *)&local_74 + 0) = (unsigned char)(0xc);
  thunk_FUN_10ec1d40();
  *(unsigned char*)((char *)&local_74 + 0) = (unsigned char)(0xd);
  iVar5 = (int)(thunk_FUN_1061c630(1), 0);
  thunk_FUN_105f6290(iVar5 + 4);
  local_30 = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTree);

  piStack_28 = (int *)((int *)0x0);
  piStack_24 = (int *)((int *)0x0);
  iStack_20 = (int)(0);
  local_1c = (undefined4 *)((undefined4 *)0x0);
  local_18 = (undefined4 *)((undefined4 *)0x0);

  *(unsigned char*)((char *)&local_74 + 0) = (unsigned char)(0xf);
  piVar3 = (int *)((int *)thunk_FUN_106050a0((uint)&local_9c), 0);
  piVar3 = (int *)((int *)(**(code **)(*piVar3 + 8))((uint)&local_bc), 0);
  uVar4 = (undefined4)((**(code **)(*piVar3 + 8))((uint)&local_dc), 0);
  thunk_FUN_105f60e0(uVar4);
  puVar2 = (undefined4 *)(local_18);
  *(unsigned char*)((char *)&local_74 + 0) = (unsigned char)(0xe);
  puVar8 = (undefined4 *)(local_1c);
  if ((undefined4 *)(local_1c) != (undefined4 *)(0x0)) {
    for (;(undefined4 *)((puVar8)) != (undefined4 *)(puVar2); puVar8 = puVar8 + 8) {
      (**(code **)*puVar8)(0);
    }
    uVar7 = (uint)(local_14 - (int)local_1c & 0xffffffe0);
    puVar8 = (undefined4 *)(local_1c);
    if (0xfff < uVar7) {
      puVar8 = (undefined4 *)((undefined4 *)local_1c[-1]);
      uVar7 = (uint)(uVar7 + 0x23);
      if (0x1f < (uint)((int)local_1c + (-4 - (int)puVar8))) goto LAB_10610055;
    }
    thunk_FUN_1148a50e(puVar8,uVar7);
    local_1c = (undefined4 *)((undefined4 *)0x0);
    local_18 = (undefined4 *)((undefined4 *)0x0);

  }
  piVar3 = (int *)(piStack_24);
  if ((int *)(piStack_28) != (int *)(0x0)) {
    if ((int *)(piStack_28) != (int *)(piStack_24)) {
      piVar9 = (int *)(piStack_28 + 1);
      do {
        *(unsigned char*)((char *)&local_74 + 0) = (unsigned char)(0x10);
        ((SCStr *)((SCStr *)(piVar9 + 1)))->int_release();
        piVar9[1] = (int)(0);
        piVar1 = (int *)((int *)*piVar9);
        *(unsigned char*)((char *)&local_74 + 0) = (unsigned char)(0x11);
        if ((int *)(piVar1) != (int *)(0x0)) {
          piVar9[-1] = (int)(0);
          *piVar9 = (int)(0);
          (**(code **)(*piVar1 + 8))();
        }
        *(unsigned char*)((char *)&local_74 + 0) = (unsigned char)(0xe);
        piVar1 = (int *)(piVar9 + 2);
        piVar9 = (int *)(piVar9 + 3);
      } while ((int *)(piVar1) != (int *)(piVar3));
    }
    uVar7 = (uint)(((iStack_20 - (int)piStack_28) / 0xc) * 0xc);
    piVar3 = (int *)(piStack_28);
    if (0xfff < uVar7) {
      piVar3 = (int *)((int *)piStack_28[-1]);
      uVar7 = (uint)(uVar7 + 0x23);
      if (0x1f < (uint)((int)piStack_28 + (-4 - (int)piVar3))) {
LAB_10610055:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(piVar3,uVar7);
    piStack_28 = (int *)((int *)0x0);
    piStack_24 = (int *)((int *)0x0);
    iStack_20 = (int)(0);
  }
  local_30 = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_9c[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char*)((char *)&local_74 + 0) = (unsigned char)(0x12);
  ((SCStr *)((SCStr *)&local_44))->int_release();
  piVar3 = (int *)(local_48);

  *(unsigned char*)((char *)&local_74 + 0) = (unsigned char)(0x13);
  if ((int *)(local_48) != (int *)(0x0)) {

    local_48 = (int *)((int *)0x0);
    (**(code **)(*piVar3 + 8))();
  }
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_bc[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char*)((char *)&local_74 + 0) = (unsigned char)(0x14);
  ((SCStr *)((SCStr *)(uint)&local_54))->int_release();
  piVar3 = (int *)(local_58);
  local_54[0] = (undefined4)(0);
  *(unsigned char*)((char *)&local_74 + 0) = (unsigned char)(0x15);
  if ((int *)(local_58) != (int *)(0x0)) {

    local_58 = (int *)((int *)0x0);
    (**(code **)(*piVar3 + 8))();
  }
  *(unsigned char*)((char *)&local_74 + 0) = (unsigned char)(0x16);
  ((SCStr *)((SCStr *)(uint)&local_38))->int_release();
  local_38[0] = (undefined4)(0);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_dc[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char*)((char *)&local_74 + 0) = (unsigned char)(0x17);
  ((SCStr *)((SCStr *)(uint)&local_64))->int_release();
  piVar3 = (int *)(local_68);
  local_64[0] = (undefined4)(0);
  *(unsigned char*)((char *)&local_74 + 0) = (unsigned char)(0x18);
  if ((int *)(local_68) != (int *)(0x0)) {

    local_68 = (int *)((int *)0x0);
    (**(code **)(*piVar3 + 8))();
  }
  local_74 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_74 + 1)) << 8 | (uint)(0x19)));
  ((SCStr *)((SCStr *)(uint)&local_40))->int_release();
  local_40[0] = (undefined4)(0);

  ((SCStr *)((SCStr *)&local_10))->int_release();

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 106102b0; body size 1911 bytes.
#line 1 "ENTRY_106102b0"

undefined4 __stdcall FUN_106102b0(undefined4 param_1)

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
  undefined **local_1c8 [8];
  undefined **local_1a8 [8];
  undefined **local_188 [8];
  undefined **local_168 [8];
  undefined **local_148 [8];
  undefined **local_128 [8];
  undefined **local_108 [8];
  undefined1 local_e8 [12];
  undefined4 local_dc;
  int *local_d8;
  undefined4 local_d4 [2];
  undefined4 local_cc;
  int *local_c8;
  undefined4 local_c4 [2];
  undefined4 local_bc;
  int *local_b8;
  undefined4 local_b4 [2];
  undefined4 local_ac;
  int *local_a8;
  undefined4 local_a4 [2];
  undefined4 local_9c;
  int *local_98;
  undefined4 local_94 [2];
  undefined4 local_8c;
  int *local_88;
  undefined4 local_84;
  void *local_80;
  undefined1 *puStack_7c;
  undefined4 local_78;
  undefined4 local_74 [2];
  undefined4 local_6c [2];
  undefined1 *local_64 [3];
  int *local_58;
  int *local_54;
  undefined4 local_50;
  int *local_4c;
  undefined4 local_48;
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


  thunk_FUN_10eb41c0(DAT_12126b84 ^ (uint)(uint)&local_74);
  piVar3 = (int *)((int *)thunk_FUN_10cf34e0(&local_8), 0);
  piVar5 = (int *)((int *)*piVar3);

  *piVar3 = (int)(0);
  local_58 = (int *)(piVar5);
  if ((int *)(piVar5) == (int *)(0x0)) {
    local_54 = (int *)((int *)0x0);
  }
  else {
    local_54 = (int *)((int *)(**(code **)(*piVar5 + 0xc))(), 0);
  }
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(3);
  if ((int *)(local_8) != (int *)(0x0)) {
    (**(code **)(*local_8 + 8))();
  }
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(2);
  thunk_FUN_10c5f1d0(piVar5);
  thunk_FUN_10c61010((uint)&local_64,(uint)&local_3c,6,0,0);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(4);
  thunk_FUN_10c5f1d0(piVar5);
  puVar7 = (undefined1 *)((uint)&local_e8);
  thunk_FUN_105bebd0(puVar7);
  local_40 = (undefined4)(thunk_FUN_10e0f250(puVar7), 0);
  uVar4 = (undefined4)(thunk_FUN_10c98710(&local_8), 0);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(5);
  thunk_FUN_10c61ec0(&local_c,uVar4);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(8);
  ((SCStr *)((SCStr *)&local_8))->int_release();
  local_8 = (int *)((int *)0x0);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(7);
  thunk_FUN_10eb41c0();
  piVar5 = (int *)((int *)thunk_FUN_10eace90(), 0);
  local_48 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_48 + 1)) << 8 | (uint)(1 < (uint)((piVar5[1] - *piVar5) / 0x4c))));
  uVar4 = (undefined4)(thunk_FUN_10c5f450((uint)&local_3c,0x20a6,&DAT_11882ff0), 0);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(9);
  thunk_FUN_10ec0a20("needHelp");
  uVar10 = (undefined4)(2);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(10);
  thunk_FUN_10ecea60(uVar4);
  iVar6 = (int)(thunk_FUN_10ec7940(uVar10), 0);
  thunk_FUN_105f6290(iVar6 + 4);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0xb);
  iVar6 = (int)(thunk_FUN_10ec1a10(&DAT_118bd270), 0);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0xc);
  thunk_FUN_105f6290(iVar6 + 4);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0xd);
  uVar4 = (undefined4)(thunk_FUN_10c5f450((SCStr *)(uint)&local_74,0x20a3,&DAT_11882ff0), 0);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0xe);
  thunk_FUN_10ec0a20(&DAT_1189f4a8);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0xf);
  iVar6 = (int)(thunk_FUN_10ecea60(uVar4), 0);
  thunk_FUN_105f6290(iVar6 + 4);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x10);
  puVar7 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)(local_c) != (undefined1 *)(0x0)) {
    puVar7 = (undefined1 *)(local_c);
  }
  uVar4 = (undefined4)(thunk_FUN_10c5f450((uint)&local_6c,0x277d,&DAT_1188465c,puVar7), 0);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x11);
  uVar10 = (undefined4)(thunk_FUN_10e0f500(&local_50,1), 0);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x12);
  thunk_FUN_10ec1c00("image");
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x13);
  thunk_FUN_10ecbbd0(uVar10);
  iVar6 = (int)(thunk_FUN_10ecb9f0(uVar4), 0);
  thunk_FUN_105f6290(iVar6 + 4);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x14);
  thunk_FUN_10c5f8a0(&DAT_1186d2ee);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x15);
  puVar7 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)(local_64[0]) != (undefined1 *)(0x0)) {
    puVar7 = (undefined1 *)(local_64[0]);
  }
  thunk_FUN_10c62d50((uint)&local_34,(uint)&local_64,0x2c09,&DAT_1188465c,puVar7);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x16);
  thunk_FUN_10ec1b40("header");
  uVar4 = (undefined4)(1);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x17);
  thunk_FUN_10eced20((uint)&local_34);
  iVar6 = (int)(thunk_FUN_10ecd540(uVar4), 0);
  thunk_FUN_105f6290(iVar6 + 4);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x18);
  thunk_FUN_10ec1d40();
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x19);
  iVar6 = (int)(thunk_FUN_1061c630(1), 0);
  thunk_FUN_105f6290(iVar6 + 4);
  local_2c = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTree);

  piStack_24 = (int *)((int *)0x0);
  piStack_20 = (int *)((int *)0x0);
  iStack_1c = (int)(0);
  local_18 = (undefined4 *)((undefined4 *)0x0);
  local_14 = (undefined4 *)((undefined4 *)0x0);

  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x1b);
  piVar5 = (int *)((int *)thunk_FUN_106050a0((uint)&local_108), 0);
  thunk_FUN_10eb41c0();
  uVar4 = (undefined4)(thunk_FUN_106052d0((uint)&local_1c8), 0);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x1c);
  piVar5 = (int *)((int *)(**(code **)(*piVar5 + 8))(uVar4), 0);
  piVar5 = (int *)((int *)(**(code **)(*piVar5 + 8))((uint)&local_128), 0);
  piVar5 = (int *)((int *)(**(code **)(*piVar5 + 8))((uint)&local_148), 0);
  piVar5 = (int *)((int *)(**(code **)(*piVar5 + 0xc))(local_48,(uint)&local_168), 0);
  piVar5 = (int *)((int *)(**(code **)(*piVar5 + 0x14))((uint)&local_188), 0);
  uVar4 = (undefined4)((**(code **)(*piVar5 + 8))((uint)&local_1a8), 0);
  thunk_FUN_105f60e0(uVar4);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  puVar2 = (undefined4 *)(local_14);
  local_1c8[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x1a);
  puVar9 = (undefined4 *)(local_18);
  if ((undefined4 *)(local_18) != (undefined4 *)(0x0)) {
    for (;(undefined4 *)((puVar9)) != (undefined4 *)(puVar2); puVar9 = puVar9 + 8) {
      (**(code **)*puVar9)(0);
    }
    uVar8 = (uint)(local_10 - (int)local_18 & 0xffffffe0);
    puVar9 = (undefined4 *)(local_18);
    if (0xfff < uVar8) {
      puVar9 = (undefined4 *)((undefined4 *)local_18[-1]);
      uVar8 = (uint)(uVar8 + 0x23);
      if (0x1f < (uint)((int)local_18 + (-4 - (int)puVar9))) goto LAB_10610759;
    }
    thunk_FUN_1148a50e(puVar9,uVar8);
    local_18 = (undefined4 *)((undefined4 *)0x0);
    local_14 = (undefined4 *)((undefined4 *)0x0);

  }
  piVar5 = (int *)(piStack_20);
  if ((int *)(piStack_24) != (int *)(0x0)) {
    if ((int *)(piStack_24) != (int *)(piStack_20)) {
      piVar3 = (int *)(piStack_24 + 1);
      do {
        *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x1d);
        ((SCStr *)((SCStr *)(piVar3 + 1)))->int_release();
        piVar3[1] = (int)(0);
        piVar1 = (int *)((int *)*piVar3);
        *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x1e);
        if ((int *)(piVar1) != (int *)(0x0)) {
          piVar3[-1] = (int)(0);
          *piVar3 = (int)(0);
          (**(code **)(*piVar1 + 8))();
        }
        *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x1a);
        piVar1 = (int *)(piVar3 + 2);
        piVar3 = (int *)(piVar3 + 3);
      } while ((int *)(piVar1) != (int *)(piVar5));
    }
    uVar8 = (uint)(((iStack_1c - (int)piStack_24) / 0xc) * 0xc);
    piVar5 = (int *)(piStack_24);
    if (0xfff < uVar8) {
      piVar5 = (int *)((int *)piStack_24[-1]);
      uVar8 = (uint)(uVar8 + 0x23);
      if (0x1f < (uint)((int)piStack_24 + (-4 - (int)piVar5))) {
LAB_10610759:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(piVar5,uVar8);
    piStack_24 = (int *)((int *)0x0);
    piStack_20 = (int *)((int *)0x0);
    iStack_1c = (int)(0);
  }
  local_2c = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_108[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x1f);
  ((SCStr *)((SCStr *)&local_84))->int_release();
  piVar5 = (int *)(local_88);

  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x20);
  if ((int *)(local_88) != (int *)(0x0)) {

    local_88 = (int *)((int *)0x0);
    (**(code **)(*piVar5 + 8))();
  }
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_128[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x21);
  ((SCStr *)((SCStr *)(uint)&local_94))->int_release();
  piVar5 = (int *)(local_98);
  local_94[0] = (undefined4)(0);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x22);
  if ((int *)(local_98) != (int *)(0x0)) {

    local_98 = (int *)((int *)0x0);
    (**(code **)(*piVar5 + 8))();
  }
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x23);
  ((SCStr *)((SCStr *)(uint)&local_34))->int_release();
  local_34[0] = (undefined4)(0);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_148[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x24);
  ((SCStr *)((SCStr *)(uint)&local_a4))->int_release();
  piVar5 = (int *)(local_a8);
  local_a4[0] = (undefined4)(0);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x25);
  if ((int *)(local_a8) != (int *)(0x0)) {

    local_a8 = (int *)((int *)0x0);
    (**(code **)(*piVar5 + 8))();
  }
  piVar5 = (int *)(local_4c);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x26);
  if ((int *)(local_4c) != (int *)(0x0)) {

    local_4c = (int *)((int *)0x0);
    (**(code **)(*piVar5 + 8))();
  }
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x27);
  ((SCStr *)((SCStr *)(uint)&local_6c))->int_release();
  local_6c[0] = (undefined4)(0);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_168[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x28);
  ((SCStr *)((SCStr *)(uint)&local_b4))->int_release();
  piVar5 = (int *)(local_b8);
  local_b4[0] = (undefined4)(0);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x29);
  if ((int *)(local_b8) != (int *)(0x0)) {

    local_b8 = (int *)((int *)0x0);
    (**(code **)(*piVar5 + 8))();
  }
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x2a);
  ((SCStr *)((SCStr *)(uint)&local_74))->int_release();
  local_74[0] = (undefined4)(0);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_188[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x2b);
  ((SCStr *)((SCStr *)(uint)&local_c4))->int_release();
  piVar5 = (int *)(local_c8);
  local_c4[0] = (undefined4)(0);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x2c);
  if ((int *)(local_c8) != (int *)(0x0)) {

    local_c8 = (int *)((int *)0x0);
    (**(code **)(*piVar5 + 8))();
  }
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_1a8[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x2d);
  ((SCStr *)((SCStr *)(uint)&local_d4))->int_release();
  piVar5 = (int *)(local_d8);
  local_d4[0] = (undefined4)(0);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x2e);
  if ((int *)(local_d8) != (int *)(0x0)) {

    local_d8 = (int *)((int *)0x0);
    (**(code **)(*piVar5 + 8))();
  }
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x2f);
  ((SCStr *)((SCStr *)(uint)&local_3c))->int_release();
  local_3c[0] = (undefined4)(0);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x30);
  ((SCStr *)((SCStr *)&local_c))->int_release();
  local_c = (undefined1 *)((undefined1 *)0x0);
  local_78 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_78 + 1)) << 8 | (uint)(0x31)));
  ((SCStr *)((SCStr *)(uint)&local_64))->int_release();
  local_64[0] = (undefined1 *)((undefined1 *)0x0);

  if ((int *)(local_54) != (int *)(0x0)) {
    (**(code **)(*local_54 + 8))();
  }

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 10610c60; body size 329 bytes.
#line 1 "ENTRY_10610c60"

SCStr * __stdcall FUN_10610c60(SCStr *param_1)

{
 try {
  char cVar1;
  uint uVar2;
  SCLibrary *pSVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 uVar7;
  int *local_20;
  int *local_1c;
  int *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  pSVar3 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton(), 0);
  piVar4 = (int *)((int *)(**(code **)(**(int **)(*(int *)(pSVar3 + 0x4c) + 0xe8) + 4))(&local_20,0xd,uVar2), 0);
  piVar6 = (int *)((int *)*piVar4);

  *piVar4 = (int)(0);
  if ((int *)(piVar6) == (int *)(0x0)) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)(**(code **)(*piVar6 + 0xc))(), 0);
  }
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(1);
  if ((int *)(piVar6) == (int *)(0x0)) {
    local_1c = (int *)((int *)0x0);
    piVar6 = (int *)((int *)0x0);
  }
  else {
    ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCIWifiDelegate");
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(2);
    puVar5 = (undefined4 *)((undefined4 *)(**(code **)*piVar6)(&local_18,&local_14), 0);
    piVar6 = (int *)((int *)*puVar5);
    *puVar5 = (undefined4)(0);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(4);
    local_1c = (int *)(piVar6);
    if ((int *)(local_18) != (int *)(0x0)) {
      (**(code **)(*local_18 + 8))();
    }
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(5);
    ((SCStr *)((SCStr *)&local_14))->int_release();

  }
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(6);
  if ((int *)(piVar4) != (int *)(0x0)) {
    (**(code **)(*piVar4 + 8))();
  }
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(9);
  if ((int *)(local_20) != (int *)(0x0)) {
    (**(code **)(*local_20 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(8)));
  if ((int *)(piVar6) != (int *)(0x0)) {
    uVar7 = (undefined4)(2);
    thunk_FUN_101b5540(2);
    cVar1 = (char)(thunk_FUN_101b5de0(uVar7), 0);
    if (cVar1 != '\0') {
      (**(code **)(*piVar6 + 0x38))(param_1);

      goto LAB_10610d8d;
    }
  }
  ((SCStr *)(param_1))->int_allocRep("");

  if ((int *)(piVar6) == (int *)(0x0)) {

    return (SCStr *)(param_1);
  }
LAB_10610d8d:
  (**(code **)(*piVar6 + 8))();

  return (SCStr *)(param_1);

 } catch (...) { }
}


// Reference entry 10610e00; body size 79 bytes.
#line 1 "ENTRY_10610e00"

void __stdcall FUN_10610e00(SCStr *param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  SCStr *local_2c;
  char local_28 [36];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_2c);
  pcVar1 = (char *)((uint)&local_28);
  uVar2 = (undefined4)(0x21);
  local_2c = (SCStr *)(param_1);
  local_28[0] = (char)('\0');
  thunk_FUN_1109f7f0(pcVar1,0x21);
  thunk_FUN_1109f100(pcVar1,uVar2);
  ((SCStr *)(param_1))->int_allocRep((uint)&local_28);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 10610e90; body size 1612 bytes.
#line 1 "ENTRY_10610e90"

undefined4 __thiscall Recovered_Bulk::m_FUN_10610e90(undefined4 param_2)
{
  int param_1 = (int )this;
 try {
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined1 local_1c4 [32];
  undefined1 local_1a4 [32];
  undefined1 local_184 [32];
  undefined1 local_164 [32];
  undefined1 local_144 [32];
  undefined1 local_124 [32];
  undefined1 local_104 [32];
  undefined1 local_e4 [32];
  undefined1 local_c4 [32];
  int *local_a4;
  int *local_a0;
  int local_9c;
  int *local_98;
  undefined **local_94;
  undefined4 local_90;
  int iStack_8c;
  undefined4 uStack_88;
  int iStack_84;
  undefined4 *local_80;
  undefined4 *local_7c;
  int local_78;
  void *local_74;
  undefined1 *puStack_70;
  undefined4 local_6c;
  undefined **local_68;
  undefined4 local_64;
  int iStack_60;
  undefined4 uStack_5c;
  int iStack_58;
  undefined4 *local_54;
  undefined4 *local_50;
  int local_4c;
  undefined **local_48;
  undefined4 local_44;
  int iStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 *local_34;
  undefined4 *local_30;
  int local_2c;
  undefined **local_28;
  undefined4 local_24;
  int iStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 *local_14;
  undefined4 *local_10;
  int local_c;
  undefined4 local_8;


  local_8 = (undefined4)(DAT_121a2128);
  local_9c = (int)(param_1);
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a2128);

  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a2138);
  *(unsigned char*)((char *)&local_6c + 0) = (unsigned char)(1);
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a2148);
  *(unsigned char*)((char *)&local_6c + 0) = (unsigned char)(2);
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a2134);
  *(unsigned char*)((char *)&local_6c + 0) = (unsigned char)(3);
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a2128);
  *(unsigned char*)((char *)&local_6c + 0) = (unsigned char)(4);
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a2140);
  *(unsigned char*)((char *)&local_6c + 0) = (unsigned char)(5);
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a213c);
  *(unsigned char*)((char *)&local_6c + 0) = (unsigned char)(6);
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a2130);
  *(unsigned char*)((char *)&local_6c + 0) = (unsigned char)(7);
  thunk_FUN_105f5920(&local_8);
  local_94 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTree);

  iStack_8c = (int)(0);

  iStack_84 = (int)(0);
  local_80 = (undefined4 *)((undefined4 *)0x0);
  local_7c = (undefined4 *)((undefined4 *)0x0);

  *(unsigned char*)((char *)&local_6c + 0) = (unsigned char)(9);
  piVar3 = (int *)((int *)thunk_FUN_106190a0(0,(uint)&local_184), 0);
  local_a0 = (int *)((int *)(**(code **)(*piVar3 + 0x10))((uint)&local_1a4), 0);
  local_68 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTree);

  iStack_60 = (int)(0);

  iStack_58 = (int)(0);
  local_54 = (undefined4 *)((undefined4 *)0x0);
  local_50 = (undefined4 *)((undefined4 *)0x0);

  *(unsigned char*)((char *)&local_6c + 0) = (unsigned char)(10);
  piVar3 = (int *)((int *)thunk_FUN_106190a0(0,(uint)&local_144), 0);
  local_98 = (int *)((int *)(**(code **)(*piVar3 + 0x10))((uint)&local_164), 0);
  local_48 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTree);

  iStack_40 = (int)(0);

  iStack_38 = (int)(0);
  local_34 = (undefined4 *)((undefined4 *)0x0);
  local_30 = (undefined4 *)((undefined4 *)0x0);

  *(unsigned char*)((char *)&local_6c + 0) = (unsigned char)(0xb);
  piVar3 = (int *)((int *)thunk_FUN_106190a0(0,(uint)&local_104), 0);
  piVar3 = (int *)((int *)(**(code **)(*piVar3 + 0x10))((uint)&local_124), 0);
  local_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTree);
  local_14 = (undefined4 *)((undefined4 *)0x0);

  iStack_20 = (int)(0);

  iStack_18 = (int)(0);
  local_10 = (undefined4 *)((undefined4 *)0x0);

  *(unsigned char*)((char *)&local_6c + 0) = (unsigned char)(0xc);
  piVar4 = (int *)((int *)thunk_FUN_106190a0(*(int *)(param_1 + 0x11c) == 1,(uint)&local_c4), 0);
  piVar4 = (int *)((int *)(**(code **)(*piVar4 + 0xc))(*(int *)(param_1 + 0x11c) == 4,(uint)&local_e4), 0);
  piVar5 = (int *)((int *)thunk_FUN_10cf34e0(&local_a4), 0);
  *(unsigned char*)((char *)&local_6c + 0) = (unsigned char)(0xd);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(*piVar5 != (int)((0)))));
  iVar8 = (int)(*piVar4);
  uVar6 = (undefined4)((**(code **)(*piVar3 + 4))(), 0);
  piVar3 = (int *)((int *)(**(code **)(iVar8 + 0xc))(local_8,uVar6), 0);
  iVar8 = (int)(*piVar3);
  uVar6 = (undefined4)((**(code **)(*local_98 + 4))(), 0);
  iVar1 = (int)(local_9c);
  piVar3 = (int *)((int *)(**(code **)(iVar8 + 0xc))(*(int *)(local_9c + 0x11c) == 2,uVar6), 0);
  iVar8 = (int)(*piVar3);
  uVar6 = (undefined4)((**(code **)(*local_a0 + 4))(), 0);
  piVar3 = (int *)((int *)(**(code **)(iVar8 + 0xc))(*(int *)(iVar1 + 0x11c) == 3,uVar6), 0);
  piVar3 = (int *)((int *)(**(code **)(*piVar3 + 0x10))((uint)&local_1c4), 0);
  uVar6 = (undefined4)((**(code **)(*piVar3 + 4))(), 0);
  thunk_FUN_105f5a00(uVar6);
  local_6c = (undefined4)(((uint)(*(unsigned short *)((char *)&local_6c + 1)) << 8 | (uint)(0xe)));
  if ((int *)(local_a4) != (int *)(0x0)) {
    (**(code **)(*local_a4 + 8))();
  }
  puVar2 = (undefined4 *)(local_10);
  puVar9 = (undefined4 *)(local_14);
  if ((undefined4 *)(local_14) != (undefined4 *)(0x0)) {
    for (;(undefined4 *)((puVar9)) != (undefined4 *)(puVar2); puVar9 = puVar9 + 8) {
      (**(code **)*puVar9)(0);
    }
    uVar7 = (uint)(local_c - (int)local_14 & 0xffffffe0);
    puVar9 = (undefined4 *)(local_14);
    if (0xfff < uVar7) {
      puVar9 = (undefined4 *)((undefined4 *)local_14[-1]);
      uVar7 = (uint)(uVar7 + 0x23);
      if (0x1f < (uint)((int)local_14 + (-4 - (int)puVar9))) goto LAB_1061143c;
    }
    thunk_FUN_1148a50e(puVar9,uVar7);
    local_14 = (undefined4 *)((undefined4 *)0x0);
    local_10 = (undefined4 *)((undefined4 *)0x0);

  }
  if (iStack_20 != 0) {
    uVar7 = (uint)(iStack_18 - iStack_20 & 0xfffffffc);
    iVar8 = (int)(iStack_20);
    if (0xfff < uVar7) {
      iVar8 = (int)(*(int *)(iStack_20 + -4));
      uVar7 = (uint)(uVar7 + 0x23);
      if (0x1f < (iStack_20 - iVar8) - 4U) goto LAB_1061143c;
    }
    thunk_FUN_1148a50e(iVar8,uVar7);
    iStack_20 = (int)(0);

    iStack_18 = (int)(0);
  }
  puVar2 = (undefined4 *)(local_30);
  local_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  puVar9 = (undefined4 *)(local_34);
  if ((undefined4 *)(local_34) != (undefined4 *)(0x0)) {
    for (;(undefined4 *)((puVar9)) != (undefined4 *)(puVar2); puVar9 = puVar9 + 8) {
      (**(code **)*puVar9)(0);
    }
    uVar7 = (uint)(local_2c - (int)local_34 & 0xffffffe0);
    puVar9 = (undefined4 *)(local_34);
    if (0xfff < uVar7) {
      puVar9 = (undefined4 *)((undefined4 *)local_34[-1]);
      uVar7 = (uint)(uVar7 + 0x23);
      if (0x1f < (uint)((int)local_34 + (-4 - (int)puVar9))) goto LAB_1061143c;
    }
    thunk_FUN_1148a50e(puVar9,uVar7);
    local_34 = (undefined4 *)((undefined4 *)0x0);
    local_30 = (undefined4 *)((undefined4 *)0x0);

  }
  if (iStack_40 != 0) {
    uVar7 = (uint)(iStack_38 - iStack_40 & 0xfffffffc);
    iVar8 = (int)(iStack_40);
    if (0xfff < uVar7) {
      iVar8 = (int)(*(int *)(iStack_40 + -4));
      uVar7 = (uint)(uVar7 + 0x23);
      if (0x1f < (iStack_40 - iVar8) - 4U) goto LAB_1061143c;
    }
    thunk_FUN_1148a50e(iVar8,uVar7);
    iStack_40 = (int)(0);

    iStack_38 = (int)(0);
  }
  puVar2 = (undefined4 *)(local_50);
  local_48 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  puVar9 = (undefined4 *)(local_54);
  if ((undefined4 *)(local_54) != (undefined4 *)(0x0)) {
    for (;(undefined4 *)((puVar9)) != (undefined4 *)(puVar2); puVar9 = puVar9 + 8) {
      (**(code **)*puVar9)(0);
    }
    uVar7 = (uint)(local_4c - (int)local_54 & 0xffffffe0);
    puVar9 = (undefined4 *)(local_54);
    if (0xfff < uVar7) {
      puVar9 = (undefined4 *)((undefined4 *)local_54[-1]);
      uVar7 = (uint)(uVar7 + 0x23);
      if (0x1f < (uint)((int)local_54 + (-4 - (int)puVar9))) goto LAB_1061143c;
    }
    thunk_FUN_1148a50e(puVar9,uVar7);
    local_54 = (undefined4 *)((undefined4 *)0x0);
    local_50 = (undefined4 *)((undefined4 *)0x0);

  }
  if (iStack_60 != 0) {
    uVar7 = (uint)(iStack_58 - iStack_60 & 0xfffffffc);
    iVar8 = (int)(iStack_60);
    if (0xfff < uVar7) {
      iVar8 = (int)(*(int *)(iStack_60 + -4));
      uVar7 = (uint)(uVar7 + 0x23);
      if (0x1f < (iStack_60 - iVar8) - 4U) goto LAB_1061143c;
    }
    thunk_FUN_1148a50e(iVar8,uVar7);
    iStack_60 = (int)(0);

    iStack_58 = (int)(0);
  }
  puVar2 = (undefined4 *)(local_7c);
  local_68 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  puVar9 = (undefined4 *)(local_80);
  if ((undefined4 *)(local_80) != (undefined4 *)(0x0)) {
    for (;(undefined4 *)((puVar9)) != (undefined4 *)(puVar2); puVar9 = puVar9 + 8) {
      (**(code **)*puVar9)(0);
    }
    uVar7 = (uint)(local_78 - (int)local_80 & 0xffffffe0);
    puVar9 = (undefined4 *)(local_80);
    if (0xfff < uVar7) {
      puVar9 = (undefined4 *)((undefined4 *)local_80[-1]);
      uVar7 = (uint)(uVar7 + 0x23);
      if (0x1f < (uint)((int)local_80 + (-4 - (int)puVar9))) goto LAB_1061143c;
    }
    thunk_FUN_1148a50e(puVar9,uVar7);
    local_80 = (undefined4 *)((undefined4 *)0x0);
    local_7c = (undefined4 *)((undefined4 *)0x0);

  }
  if (iStack_8c != 0) {
    uVar7 = (uint)(iStack_84 - iStack_8c & 0xfffffffc);
    iVar8 = (int)(iStack_8c);
    if (0xfff < uVar7) {
      iVar8 = (int)(*(int *)(iStack_8c + -4));
      uVar7 = (uint)(uVar7 + 0x23);
      if (0x1f < (iStack_8c - iVar8) - 4U) {
LAB_1061143c:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar8,uVar7);
    iStack_8c = (int)(0);

    iStack_84 = (int)(0);
  }
  local_94 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();

  return (undefined4)(param_2);

 } catch (...) { }
}


// Reference entry 10611670; body size 671 bytes.
#line 1 "ENTRY_10611670"

undefined4 __stdcall FUN_10611670(undefined4 param_1)

{
 try {
  undefined4 *puVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  void *local_78;
  undefined1 *puStack_74;
  undefined4 local_70;
  undefined1 local_6c [32];
  undefined1 local_4c [32];
  undefined **local_2c;
  undefined4 local_28;
  int iStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  int local_10;
  int *local_c;
  int *local_8;


  puVar5 = (undefined4 *)((undefined4 *)thunk_FUN_101da4a0(&local_8,DAT_12126b84 ^ (uint)(uint)&local_6c), 0);

  piVar6 = (int *)((int *)(**(code **)(*(int *)*puVar5 + 0x3c))(&local_c), 0);
  iVar10 = (int)(*piVar6);
  local_70 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_70 + 1)) << 8 | (uint)(1)));
  if ((int *)(local_c) != (int *)(0x0)) {
    (**(code **)(*local_c + 8))();
  }

  if ((int *)(local_8) != (int *)(0x0)) {
    (**(code **)(*local_8 + 8))();
  }

  thunk_FUN_10eb41c0();
  cVar2 = (char)(thunk_FUN_10eacce0(1), 0);
  iVar7 = (int)(thunk_FUN_10ebc1e0(), 0);
  if ((*(char *)(iVar7 + 0xf8) != '\0') ||
     (local_c = (int *)((int *)((uint)local_c & 0xffffff00)), iVar10 == 0)) {
    local_c = (int *)((int *)((uint)(*(unsigned short *)((char *)&local_c + 1)) << 8 | (uint)(1)));
  }
  local_8 = (int *)(DAT_121a2154);
  thunk_FUN_105f5920(&local_8);
  local_8 = (int *)(DAT_121a2158);

  thunk_FUN_105f5920(&local_8);
  local_8 = (int *)(DAT_121a215c);
  *(unsigned char*)((char *)&local_70 + 0) = (unsigned char)(4);
  thunk_FUN_105f5920(&local_8);
  *(unsigned char*)((char *)&local_70 + 0) = (unsigned char)(5);
  thunk_FUN_10eb41c0();
  cVar3 = (char)(thunk_FUN_11248b40(0x15), 0);
  if ((cVar3 == '\0') && (cVar2 == '\0')) {
    uVar8 = (undefined4)(1);
  }
  else {
    uVar8 = (undefined4)(0);
  }
  local_8 = (int *)((int *)0x0);
  thunk_FUN_105f5920(&local_8);
  local_2c = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTree);

  iStack_24 = (int)(0);

  iStack_1c = (int)(0);
  local_18 = (undefined4 *)((undefined4 *)0x0);
  local_14 = (undefined4 *)((undefined4 *)0x0);

  local_70 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_70 + 1)) << 8 | (uint)(7)));
  piVar6 = (int *)((int *)thunk_FUN_106190a0(local_c,(uint)&local_4c), 0);
  piVar6 = (int *)((int *)(**(code **)(*piVar6 + 0xc))(uVar8,(uint)&local_6c), 0);
  thunk_FUN_10eb41c0();
  iVar10 = (int)(*piVar6);
  uVar4 = (undefined1)(thunk_FUN_10cf5140((uint)&local_98), 0);
  piVar6 = (int *)((int *)(**(code **)(iVar10 + 0xc))(uVar4), 0);
  piVar6 = (int *)((int *)(**(code **)(*piVar6 + 0x10))((uint)&local_b8), 0);
  uVar8 = (undefined4)((**(code **)(*piVar6 + 4))(), 0);
  thunk_FUN_105f5a00(uVar8);
  puVar1 = (undefined4 *)(local_14);
  puVar5 = (undefined4 *)(local_18);
  if ((undefined4 *)(local_18) != (undefined4 *)(0x0)) {
    for (;(undefined4 *)((puVar5)) != (undefined4 *)(puVar1); puVar5 = puVar5 + 8) {
      (**(code **)*puVar5)(0);
    }
    uVar9 = (uint)(local_10 - (int)local_18 & 0xffffffe0);
    puVar5 = (undefined4 *)(local_18);
    if (0xfff < uVar9) {
      puVar5 = (undefined4 *)((undefined4 *)local_18[-1]);
      uVar9 = (uint)(uVar9 + 0x23);
      if (0x1f < (uint)((int)local_18 + (-4 - (int)puVar5))) goto LAB_106118ac;
    }
    thunk_FUN_1148a50e(puVar5,uVar9);
    local_18 = (undefined4 *)((undefined4 *)0x0);
    local_14 = (undefined4 *)((undefined4 *)0x0);

  }
  if (iStack_24 != 0) {
    uVar9 = (uint)(iStack_1c - iStack_24 & 0xfffffffc);
    iVar10 = (int)(iStack_24);
    if (0xfff < uVar9) {
      iVar10 = (int)(*(int *)(iStack_24 + -4));
      uVar9 = (uint)(uVar9 + 0x23);
      if (0x1f < (iStack_24 - iVar10) - 4U) {
LAB_106118ac:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar10,uVar9);
    iStack_24 = (int)(0);

    iStack_1c = (int)(0);
  }
  local_2c = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 106119c0; body size 487 bytes.
#line 1 "ENTRY_106119c0"

undefined4 __stdcall FUN_106119c0(undefined4 param_1)

{
 try {
  undefined **ppuVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined1 local_94 [32];
  void *local_74;
  undefined1 *puStack_70;
  undefined4 local_6c;
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  undefined **local_28;
  undefined4 local_24;
  int iStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 *local_14;
  undefined4 *local_10;
  int local_c;
  undefined4 local_8;


  uVar4 = (uint)(DAT_12126b84 ^ (uint)(uint)&local_68);

  local_8 = (undefined4)(DAT_121a218c);
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a2158);

  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a2174);
  *(unsigned char*)((char *)&local_6c + 0) = (unsigned char)(1);
  thunk_FUN_105f5920(&local_8);
  local_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTree);

  iStack_20 = (int)(0);

  iStack_18 = (int)(0);
  local_14 = (undefined4 *)((undefined4 *)0x0);
  local_10 = (undefined4 *)((undefined4 *)0x0);

  local_6c = (undefined4)(((uint)(*(unsigned short *)((char *)&local_6c + 1)) << 8 | (uint)(3)));
  thunk_FUN_10ebc1e0(uVar4);
  ppuVar1 = (undefined **)(local_28);
  uVar3 = (undefined1)(thunk_FUN_10765a30((uint)&local_48), 0);
  piVar5 = (int *)((int *)(*(code *)ppuVar1[2])(uVar3), 0);
  thunk_FUN_10eb41c0();
  iVar7 = (int)(*piVar5);
  uVar3 = (undefined1)(thunk_FUN_10cf5140((uint)&local_68), 0);
  piVar5 = (int *)((int *)(**(code **)(iVar7 + 0xc))(uVar3), 0);
  piVar5 = (int *)((int *)(**(code **)(*piVar5 + 0x10))((uint)&local_94), 0);
  uVar6 = (undefined4)((**(code **)(*piVar5 + 4))(), 0);
  thunk_FUN_105f5a00(uVar6);
  puVar2 = (undefined4 *)(local_10);
  puVar8 = (undefined4 *)(local_14);
  if ((undefined4 *)(local_14) != (undefined4 *)(0x0)) {
    for (;(undefined4 *)((puVar8)) != (undefined4 *)(puVar2); puVar8 = puVar8 + 8) {
      (**(code **)*puVar8)(0);
    }
    uVar4 = (uint)(local_c - (int)local_14 & 0xffffffe0);
    puVar8 = (undefined4 *)(local_14);
    if (0xfff < uVar4) {
      puVar8 = (undefined4 *)((undefined4 *)local_14[-1]);
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (uint)((int)local_14 + (-4 - (int)puVar8))) goto LAB_10611b4c;
    }
    thunk_FUN_1148a50e(puVar8,uVar4);
    local_14 = (undefined4 *)((undefined4 *)0x0);
    local_10 = (undefined4 *)((undefined4 *)0x0);

  }
  if (iStack_20 != 0) {
    uVar4 = (uint)(iStack_18 - iStack_20 & 0xfffffffc);
    iVar7 = (int)(iStack_20);
    if (0xfff < uVar4) {
      iVar7 = (int)(*(int *)(iStack_20 + -4));
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (iStack_20 - iVar7) - 4U) {
LAB_10611b4c:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar7,uVar4);
    iStack_20 = (int)(0);

    iStack_18 = (int)(0);
  }
  local_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 10611c20; body size 414 bytes.
#line 1 "ENTRY_10611c20"

undefined4 __stdcall FUN_10611c20(undefined4 param_1)

{
 try {
  undefined **ppuVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined1 local_74 [32];
  undefined1 local_54 [32];
  undefined **local_34;
  undefined4 local_30;
  int iStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  int local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar4 = (uint)(DAT_12126b84);

  local_14 = (undefined4)(DAT_121a216c);
  thunk_FUN_105f5920(&local_14);
  local_14 = (undefined4)(DAT_121a2158);

  thunk_FUN_105f5920(&local_14);
  local_34 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTree);

  iStack_2c = (int)(0);

  iStack_24 = (int)(0);
  local_20 = (undefined4 *)((undefined4 *)0x0);
  local_1c = (undefined4 *)((undefined4 *)0x0);

  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  thunk_FUN_10eb41c0(uVar4);
  ppuVar1 = (undefined **)(local_34);
  uVar3 = (undefined1)(thunk_FUN_10cf5140((uint)&local_54), 0);
  piVar5 = (int *)((int *)(*(code *)ppuVar1[2])(uVar3), 0);
  piVar5 = (int *)((int *)(**(code **)(*piVar5 + 0x10))((uint)&local_74), 0);
  uVar6 = (undefined4)((**(code **)(*piVar5 + 4))(), 0);
  thunk_FUN_105f5a00(uVar6);
  puVar2 = (undefined4 *)(local_1c);
  puVar8 = (undefined4 *)(local_20);
  if ((undefined4 *)(local_20) != (undefined4 *)(0x0)) {
    for (;(undefined4 *)((puVar8)) != (undefined4 *)(puVar2); puVar8 = puVar8 + 8) {
      (**(code **)*puVar8)(0);
    }
    uVar4 = (uint)(local_18 - (int)local_20 & 0xffffffe0);
    puVar8 = (undefined4 *)(local_20);
    if (0xfff < uVar4) {
      puVar8 = (undefined4 *)((undefined4 *)local_20[-1]);
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (uint)((int)local_20 + (-4 - (int)puVar8))) goto LAB_10611d6c;
    }
    thunk_FUN_1148a50e(puVar8,uVar4);
    local_20 = (undefined4 *)((undefined4 *)0x0);
    local_1c = (undefined4 *)((undefined4 *)0x0);

  }
  if (iStack_2c != 0) {
    uVar4 = (uint)(iStack_24 - iStack_2c & 0xfffffffc);
    iVar7 = (int)(iStack_2c);
    if (0xfff < uVar4) {
      iVar7 = (int)(*(int *)(iStack_2c + -4));
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (iStack_2c - iVar7) - 4U) {
LAB_10611d6c:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar7,uVar4);
    iStack_2c = (int)(0);

    iStack_24 = (int)(0);
  }
  local_34 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 10611e30; body size 489 bytes.
#line 1 "ENTRY_10611e30"

undefined4 __stdcall FUN_10611e30(undefined4 param_1)

{
 try {
  undefined **ppuVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined1 local_94 [32];
  void *local_74;
  undefined1 *puStack_70;
  undefined4 local_6c;
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  undefined **local_28;
  undefined4 local_24;
  int iStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 *local_14;
  undefined4 *local_10;
  int local_c;
  undefined4 local_8;


  uVar5 = (uint)(DAT_12126b84 ^ (uint)(uint)&local_68);

  local_8 = (undefined4)(DAT_121a2154);
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a2158);

  thunk_FUN_105f5920(&local_8);
  *(unsigned char*)((char *)&local_6c + 0) = (unsigned char)(1);

  thunk_FUN_105f5920(&local_8);
  local_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTree);

  iStack_20 = (int)(0);

  iStack_18 = (int)(0);
  local_14 = (undefined4 *)((undefined4 *)0x0);
  local_10 = (undefined4 *)((undefined4 *)0x0);

  local_6c = (undefined4)(((uint)(*(unsigned short *)((char *)&local_6c + 1)) << 8 | (uint)(3)));
  thunk_FUN_10ebc1e0(uVar5);
  ppuVar1 = (undefined **)(local_28);
  cVar3 = (char)(thunk_FUN_10eac8a0((uint)&local_48), 0);
  piVar6 = (int *)((int *)(*(code *)ppuVar1[2])(cVar3 == '\0'), 0);
  thunk_FUN_10eb41c0();
  iVar8 = (int)(*piVar6);
  uVar4 = (undefined1)(thunk_FUN_10cf5140((uint)&local_68), 0);
  piVar6 = (int *)((int *)(**(code **)(iVar8 + 0xc))(uVar4), 0);
  piVar6 = (int *)((int *)(**(code **)(*piVar6 + 0x10))((uint)&local_94), 0);
  uVar7 = (undefined4)((**(code **)(*piVar6 + 4))(), 0);
  thunk_FUN_105f5a00(uVar7);
  puVar2 = (undefined4 *)(local_10);
  puVar9 = (undefined4 *)(local_14);
  if ((undefined4 *)(local_14) != (undefined4 *)(0x0)) {
    for (;(undefined4 *)((puVar9)) != (undefined4 *)(puVar2); puVar9 = puVar9 + 8) {
      (**(code **)*puVar9)(0);
    }
    uVar5 = (uint)(local_c - (int)local_14 & 0xffffffe0);
    puVar9 = (undefined4 *)(local_14);
    if (0xfff < uVar5) {
      puVar9 = (undefined4 *)((undefined4 *)local_14[-1]);
      uVar5 = (uint)(uVar5 + 0x23);
      if (0x1f < (uint)((int)local_14 + (-4 - (int)puVar9))) goto LAB_10611fbe;
    }
    thunk_FUN_1148a50e(puVar9,uVar5);
    local_14 = (undefined4 *)((undefined4 *)0x0);
    local_10 = (undefined4 *)((undefined4 *)0x0);

  }
  if (iStack_20 != 0) {
    uVar5 = (uint)(iStack_18 - iStack_20 & 0xfffffffc);
    iVar8 = (int)(iStack_20);
    if (0xfff < uVar5) {
      iVar8 = (int)(*(int *)(iStack_20 + -4));
      uVar5 = (uint)(uVar5 + 0x23);
      if (0x1f < (iStack_20 - iVar8) - 4U) {
LAB_10611fbe:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar8,uVar5);
    iStack_20 = (int)(0);

    iStack_18 = (int)(0);
  }
  local_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 106120a0; body size 487 bytes.
#line 1 "ENTRY_106120a0"

undefined4 __stdcall FUN_106120a0(undefined4 param_1)

{
 try {
  undefined **ppuVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined1 local_94 [32];
  void *local_74;
  undefined1 *puStack_70;
  undefined4 local_6c;
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  undefined **local_28;
  undefined4 local_24;
  int iStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 *local_14;
  undefined4 *local_10;
  int local_c;
  undefined4 local_8;


  uVar4 = (uint)(DAT_12126b84 ^ (uint)(uint)&local_68);

  local_8 = (undefined4)(DAT_121a218c);
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a2158);

  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a2174);
  *(unsigned char*)((char *)&local_6c + 0) = (unsigned char)(1);
  thunk_FUN_105f5920(&local_8);
  local_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTree);

  iStack_20 = (int)(0);

  iStack_18 = (int)(0);
  local_14 = (undefined4 *)((undefined4 *)0x0);
  local_10 = (undefined4 *)((undefined4 *)0x0);

  local_6c = (undefined4)(((uint)(*(unsigned short *)((char *)&local_6c + 1)) << 8 | (uint)(3)));
  thunk_FUN_10ebc1e0(uVar4);
  ppuVar1 = (undefined **)(local_28);
  uVar3 = (undefined1)(thunk_FUN_1077d290((uint)&local_48), 0);
  piVar5 = (int *)((int *)(*(code *)ppuVar1[2])(uVar3), 0);
  thunk_FUN_10eb41c0();
  iVar7 = (int)(*piVar5);
  uVar3 = (undefined1)(thunk_FUN_10cf5140((uint)&local_68), 0);
  piVar5 = (int *)((int *)(**(code **)(iVar7 + 0xc))(uVar3), 0);
  piVar5 = (int *)((int *)(**(code **)(*piVar5 + 0x10))((uint)&local_94), 0);
  uVar6 = (undefined4)((**(code **)(*piVar5 + 4))(), 0);
  thunk_FUN_105f5a00(uVar6);
  puVar2 = (undefined4 *)(local_10);
  puVar8 = (undefined4 *)(local_14);
  if ((undefined4 *)(local_14) != (undefined4 *)(0x0)) {
    for (;(undefined4 *)((puVar8)) != (undefined4 *)(puVar2); puVar8 = puVar8 + 8) {
      (**(code **)*puVar8)(0);
    }
    uVar4 = (uint)(local_c - (int)local_14 & 0xffffffe0);
    puVar8 = (undefined4 *)(local_14);
    if (0xfff < uVar4) {
      puVar8 = (undefined4 *)((undefined4 *)local_14[-1]);
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (uint)((int)local_14 + (-4 - (int)puVar8))) goto LAB_1061222c;
    }
    thunk_FUN_1148a50e(puVar8,uVar4);
    local_14 = (undefined4 *)((undefined4 *)0x0);
    local_10 = (undefined4 *)((undefined4 *)0x0);

  }
  if (iStack_20 != 0) {
    uVar4 = (uint)(iStack_18 - iStack_20 & 0xfffffffc);
    iVar7 = (int)(iStack_20);
    if (0xfff < uVar4) {
      iVar7 = (int)(*(int *)(iStack_20 + -4));
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (iStack_20 - iVar7) - 4U) {
LAB_1061222c:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar7,uVar4);
    iStack_20 = (int)(0);

    iStack_18 = (int)(0);
  }
  local_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 10612300; body size 765 bytes.
#line 1 "ENTRY_10612300"

undefined4 __thiscall Recovered_Bulk::m_FUN_10612300(undefined4 param_2)
{
  int param_1 = (int )this;
 try {
  undefined **ppuVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined1 local_114 [32];
  undefined1 local_f4 [32];
  undefined1 local_d4 [32];
  undefined1 local_b4 [32];
  undefined1 local_94 [32];
  void *local_74;
  undefined1 *puStack_70;
  undefined4 local_6c;
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  undefined **local_28;
  undefined4 local_24;
  int iStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 *local_14;
  undefined4 *local_10;
  int local_c;
  undefined4 local_8;


  thunk_FUN_10eb41c0(DAT_12126b84 ^ (uint)(uint)&local_68);
  iVar5 = (int)(thunk_FUN_10eac8c0(), 0);
  if (((int)(iVar5) == *(int *)(param_1 + 0xc0)) && (iVar5 == 2)) {
    iVar5 = (int)(1);
  }
  local_8 = (undefined4)(DAT_121a2168);
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a2170);

  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a2168);
  *(unsigned char*)((char *)&local_6c + 0) = (unsigned char)(1);
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a2174);
  *(unsigned char*)((char *)&local_6c + 0) = (unsigned char)(2);
  thunk_FUN_105f5920(&local_8);
  *(unsigned char*)((char *)&local_6c + 0) = (unsigned char)(3);

  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a2164);
  *(unsigned char*)((char *)&local_6c + 0) = (unsigned char)(4);
  thunk_FUN_105f5920(&local_8);
  local_6c = (undefined4)(((uint)(*(unsigned short *)((char *)&local_6c + 1)) << 8 | (uint)(5)));
  if (iVar5 == 0) {
    thunk_FUN_10eb41c0();
    cVar3 = (char)(thunk_FUN_10eacea0(), 0);
    if (cVar3 != '\0') goto LAB_1061240d;
    uVar7 = (undefined4)(1);
  }
  else {
LAB_1061240d:
    uVar7 = (undefined4)(0);
  }
  local_8 = (undefined4)(DAT_121a2158);
  thunk_FUN_105f5920(&local_8);
  local_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTree);

  iStack_20 = (int)(0);

  iStack_18 = (int)(0);
  local_14 = (undefined4 *)((undefined4 *)0x0);
  local_10 = (undefined4 *)((undefined4 *)0x0);

  local_6c = (undefined4)(((uint)(*(unsigned short *)((char *)&local_6c + 1)) << 8 | (uint)(7)));
  thunk_FUN_10eb41c0();
  ppuVar1 = (undefined **)(local_28);
  uVar4 = (undefined1)(thunk_FUN_10cf5140((uint)&local_48), 0);
  piVar6 = (int *)((int *)(*(code *)ppuVar1[2])(uVar4), 0);
  piVar6 = (int *)((int *)(**(code **)(*piVar6 + 0xc))(uVar7,(uint)&local_68), 0);
  piVar6 = (int *)((int *)(**(code **)(*piVar6 + 0xc))(iVar5 == 0,(uint)&local_94), 0);
  piVar6 = (int *)((int *)(**(code **)(*piVar6 + 0xc))(iVar5 == 4,(uint)&local_b4), 0);
  piVar6 = (int *)((int *)(**(code **)(*piVar6 + 0xc))(iVar5 == 1,(uint)&local_d4), 0);
  piVar6 = (int *)((int *)(**(code **)(*piVar6 + 0xc))(iVar5 == 2,(uint)&local_f4), 0);
  piVar6 = (int *)((int *)(**(code **)(*piVar6 + 0x10))((uint)&local_114), 0);
  uVar7 = (undefined4)((**(code **)(*piVar6 + 4))(), 0);
  thunk_FUN_105f5a00(uVar7);
  puVar2 = (undefined4 *)(local_10);
  puVar9 = (undefined4 *)(local_14);
  if ((undefined4 *)(local_14) != (undefined4 *)(0x0)) {
    for (;(undefined4 *)((puVar9)) != (undefined4 *)(puVar2); puVar9 = puVar9 + 8) {
      (**(code **)*puVar9)(0);
    }
    uVar8 = (uint)(local_c - (int)local_14 & 0xffffffe0);
    puVar9 = (undefined4 *)(local_14);
    if (0xfff < uVar8) {
      puVar9 = (undefined4 *)((undefined4 *)local_14[-1]);
      uVar8 = (uint)(uVar8 + 0x23);
      if (0x1f < (uint)((int)local_14 + (-4 - (int)puVar9))) goto LAB_1061257c;
    }
    thunk_FUN_1148a50e(puVar9,uVar8);
    local_14 = (undefined4 *)((undefined4 *)0x0);
    local_10 = (undefined4 *)((undefined4 *)0x0);

  }
  if (iStack_20 != 0) {
    uVar8 = (uint)(iStack_18 - iStack_20 & 0xfffffffc);
    iVar5 = (int)(iStack_20);
    if (0xfff < uVar8) {
      iVar5 = (int)(*(int *)(iStack_20 + -4));
      uVar8 = (uint)(uVar8 + 0x23);
      if (0x1f < (iStack_20 - iVar5) - 4U) {
LAB_1061257c:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar5,uVar8);
    iStack_20 = (int)(0);

    iStack_18 = (int)(0);
  }
  local_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();

  return (undefined4)(param_2);

 } catch (...) { }
}


// Reference entry 106126c0; body size 345 bytes.
#line 1 "ENTRY_106126c0"

undefined4 __stdcall FUN_106126c0(undefined4 param_1)

{
 try {
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 local_54 [32];
  undefined **local_34;
  undefined4 local_30;
  int iStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  int local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  local_14 = (undefined4)(DAT_121a2154);
  thunk_FUN_105f5920(&local_14);
  local_34 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTree);

  iStack_2c = (int)(0);

  iStack_24 = (int)(0);
  local_20 = (undefined4 *)((undefined4 *)0x0);
  local_1c = (undefined4 *)((undefined4 *)0x0);


  piVar3 = (int *)((int *)thunk_FUN_10605020((uint)&local_54), 0);
  uVar4 = (undefined4)((**(code **)(*piVar3 + 4))(uVar2), 0);
  thunk_FUN_105f5a00(uVar4);
  puVar1 = (undefined4 *)(local_1c);
  puVar6 = (undefined4 *)(local_20);
  if ((undefined4 *)(local_20) != (undefined4 *)(0x0)) {
    for (;(undefined4 *)((puVar6)) != (undefined4 *)(puVar1); puVar6 = puVar6 + 8) {
      (**(code **)*puVar6)(0);
    }
    uVar2 = (uint)(local_18 - (int)local_20 & 0xffffffe0);
    puVar6 = (undefined4 *)(local_20);
    if (0xfff < uVar2) {
      puVar6 = (undefined4 *)((undefined4 *)local_20[-1]);
      uVar2 = (uint)(uVar2 + 0x23);
      if (0x1f < (uint)((int)local_20 + (-4 - (int)puVar6))) goto LAB_106127cf;
    }
    thunk_FUN_1148a50e(puVar6,uVar2);
    local_20 = (undefined4 *)((undefined4 *)0x0);
    local_1c = (undefined4 *)((undefined4 *)0x0);

  }
  if (iStack_2c != 0) {
    uVar2 = (uint)(iStack_24 - iStack_2c & 0xfffffffc);
    iVar5 = (int)(iStack_2c);
    if (0xfff < uVar2) {
      iVar5 = (int)(*(int *)(iStack_2c + -4));
      uVar2 = (uint)(uVar2 + 0x23);
      if (0x1f < (iStack_2c - iVar5) - 4U) {
LAB_106127cf:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar5,uVar2);
    iStack_2c = (int)(0);

    iStack_24 = (int)(0);
  }
  local_34 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  thunk_FUN_105feb30();

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 106128c0; body size 825 bytes.
#line 1 "ENTRY_106128c0"

undefined4 __stdcall FUN_106128c0(undefined4 param_1)

{
 try {
  undefined **ppuVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  int *piVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined4 unaff_EBX;
  uint3 uVar12;
  undefined4 *puVar13;
  undefined1 local_100 [32];
  undefined1 local_e0 [32];
  undefined1 local_c0 [32];
  undefined1 local_a0 [32];
  void *local_80;
  undefined1 *puStack_7c;
  undefined4 local_78;
  undefined1 local_74 [32];
  undefined1 local_54 [32];
  undefined4 local_34;
  undefined **local_30;
  undefined4 local_2c;
  int iStack_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  int local_14;
  undefined4 local_10;
  int *local_c;
  uint local_8;


  thunk_FUN_10ebc1e0(DAT_12126b84 ^ (uint)(uint)&local_74);
  uVar3 = (undefined1)(thunk_FUN_1090e8d0(), 0);
  local_34 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_34 + 1)) << 8 | (uint)(uVar3)));
  thunk_FUN_10ebc1e0();
  cVar4 = (char)(thunk_FUN_1090a990(), 0);
  thunk_FUN_10eb41c0();
  thunk_FUN_10cf34e0(&local_c);

  cVar5 = (char)(thunk_FUN_10c9c730(), 0);

  if ((int *)(local_c) != (int *)(0x0)) {
    (**(code **)(*local_c + 8))();
  }

  thunk_FUN_10eb41c0();
  piVar7 = (int *)((int *)thunk_FUN_10eace90(), 0);
  uVar9 = (uint)((uint)local_c >> 8);
  local_c = (int *)((int *)((uint)local_c & 0xffffff00));
  iVar11 = (int)(piVar7[1] - *piVar7 >> 0x1f);
  iVar10 = (int)((piVar7[1] - *piVar7) / 0x4c + iVar11);
  if (((cVar5 == '\0') && (iVar10 != iVar11)) || (cVar4 != '\0')) {
    local_c = (int *)((int *)((uint)((int3)uVar9) << 8 | (uint)(1)));
  }
  local_8 = (uint)(DAT_121a2160);
  thunk_FUN_105f5920(&local_8);
  local_8 = (uint)(DAT_121a2164);

  thunk_FUN_105f5920(&local_8);
  local_8 = (uint)(DAT_121a218c);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(3);
  thunk_FUN_105f5920(&local_8);
  local_8 = (uint)(DAT_121a2164);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(4);
  thunk_FUN_105f5920(&local_8);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(5);
  thunk_FUN_10ebc1e0();
  cVar6 = (char)(thunk_FUN_1090f0a0(), 0);
  if (cVar6 == '\0') {
LAB_10612a0d:
    local_8 = (uint)(local_8 & 0xffffff00);
  }
  else {
    local_8 = (uint)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    if (iVar10 == iVar11) goto LAB_10612a0d;
  }
  local_10 = (undefined4)(DAT_121a2144);
  thunk_FUN_105f5920(&local_10);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(6);
  thunk_FUN_10ebc1e0();
  cVar6 = (char)(thunk_FUN_1090f0a0(), 0);
  uVar12 = (uint3)((uint3)(((uint)((short)((uint)unaff_EBX >> 0x10)) << 16 | (uint)(((uint)(cVar5) << 8 | (uint)(cVar4)))) >> 8));
  if ((cVar6 == '\0') || (iVar10 != iVar11)) {
    iVar11 = (int)((uint)uVar12 << 8);
  }
  else {
    iVar11 = (int)(((uint)(uVar12) << 8 | (uint)(1)));
  }
  local_10 = (undefined4)(DAT_121a2158);
  thunk_FUN_105f5920(&local_10);
  local_30 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTree);

  iStack_28 = (int)(0);

  iStack_20 = (int)(0);
  local_1c = (undefined4 *)((undefined4 *)0x0);
  local_18 = (undefined4 *)((undefined4 *)0x0);

  local_78 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_78 + 1)) << 8 | (uint)(8)));
  thunk_FUN_10eb41c0();
  ppuVar1 = (undefined **)(local_30);
  uVar3 = (undefined1)(thunk_FUN_10cf5140((uint)&local_54), 0);
  piVar7 = (int *)((int *)(*(code *)ppuVar1[2])(uVar3), 0);
  piVar7 = (int *)((int *)(**(code **)(*piVar7 + 0xc))(iVar11,(uint)&local_74), 0);
  piVar7 = (int *)((int *)(**(code **)(*piVar7 + 0xc))(local_8,(uint)&local_a0), 0);
  piVar7 = (int *)((int *)(**(code **)(*piVar7 + 0xc))(local_34,(uint)&local_c0), 0);
  piVar7 = (int *)((int *)(**(code **)(*piVar7 + 0xc))(local_c,(uint)&local_e0), 0);
  piVar7 = (int *)((int *)(**(code **)(*piVar7 + 0x10))((uint)&local_100), 0);
  uVar8 = (undefined4)((**(code **)(*piVar7 + 4))(), 0);
  thunk_FUN_105f5a00(uVar8);
  puVar2 = (undefined4 *)(local_18);
  puVar13 = (undefined4 *)(local_1c);
  if ((undefined4 *)(local_1c) != (undefined4 *)(0x0)) {
    for (;(undefined4 *)((puVar13)) != (undefined4 *)(puVar2); puVar13 = puVar13 + 8) {
      (**(code **)*puVar13)(0);
    }
    uVar9 = (uint)(local_14 - (int)local_1c & 0xffffffe0);
    puVar13 = (undefined4 *)(local_1c);
    if (0xfff < uVar9) {
      puVar13 = (undefined4 *)((undefined4 *)local_1c[-1]);
      uVar9 = (uint)(uVar9 + 0x23);
      if (0x1f < (uint)((int)local_1c + (-4 - (int)puVar13))) goto LAB_10612b83;
    }
    thunk_FUN_1148a50e(puVar13,uVar9);
    local_1c = (undefined4 *)((undefined4 *)0x0);
    local_18 = (undefined4 *)((undefined4 *)0x0);

  }
  if (iStack_28 != 0) {
    uVar9 = (uint)(iStack_20 - iStack_28 & 0xfffffffc);
    iVar11 = (int)(iStack_28);
    if (0xfff < uVar9) {
      iVar11 = (int)(*(int *)(iStack_28 + -4));
      uVar9 = (uint)(uVar9 + 0x23);
      if (0x1f < (iStack_28 - iVar11) - 4U) {
LAB_10612b83:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar11,uVar9);
    iStack_28 = (int)(0);

    iStack_20 = (int)(0);
  }
  local_30 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 10612cd0; body size 414 bytes.
#line 1 "ENTRY_10612cd0"

undefined4 __stdcall FUN_10612cd0(undefined4 param_1)

{
 try {
  undefined **ppuVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined1 local_74 [32];
  undefined1 local_54 [32];
  undefined **local_34;
  undefined4 local_30;
  int iStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  int local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar4 = (uint)(DAT_12126b84);

  local_14 = (undefined4)(DAT_121a2188);
  thunk_FUN_105f5920(&local_14);
  local_14 = (undefined4)(DAT_121a2158);

  thunk_FUN_105f5920(&local_14);
  local_34 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTree);

  iStack_2c = (int)(0);

  iStack_24 = (int)(0);
  local_20 = (undefined4 *)((undefined4 *)0x0);
  local_1c = (undefined4 *)((undefined4 *)0x0);

  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  thunk_FUN_10eb41c0(uVar4);
  ppuVar1 = (undefined **)(local_34);
  uVar3 = (undefined1)(thunk_FUN_10cf5140((uint)&local_54), 0);
  piVar5 = (int *)((int *)(*(code *)ppuVar1[2])(uVar3), 0);
  piVar5 = (int *)((int *)(**(code **)(*piVar5 + 0x10))((uint)&local_74), 0);
  uVar6 = (undefined4)((**(code **)(*piVar5 + 4))(), 0);
  thunk_FUN_105f5a00(uVar6);
  puVar2 = (undefined4 *)(local_1c);
  puVar8 = (undefined4 *)(local_20);
  if ((undefined4 *)(local_20) != (undefined4 *)(0x0)) {
    for (;(undefined4 *)((puVar8)) != (undefined4 *)(puVar2); puVar8 = puVar8 + 8) {
      (**(code **)*puVar8)(0);
    }
    uVar4 = (uint)(local_18 - (int)local_20 & 0xffffffe0);
    puVar8 = (undefined4 *)(local_20);
    if (0xfff < uVar4) {
      puVar8 = (undefined4 *)((undefined4 *)local_20[-1]);
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (uint)((int)local_20 + (-4 - (int)puVar8))) goto LAB_10612e1c;
    }
    thunk_FUN_1148a50e(puVar8,uVar4);
    local_20 = (undefined4 *)((undefined4 *)0x0);
    local_1c = (undefined4 *)((undefined4 *)0x0);

  }
  if (iStack_2c != 0) {
    uVar4 = (uint)(iStack_24 - iStack_2c & 0xfffffffc);
    iVar7 = (int)(iStack_2c);
    if (0xfff < uVar4) {
      iVar7 = (int)(*(int *)(iStack_2c + -4));
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (iStack_2c - iVar7) - 4U) {
LAB_10612e1c:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar7,uVar4);
    iStack_2c = (int)(0);

    iStack_24 = (int)(0);
  }
  local_34 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 10612ee0; body size 580 bytes.
#line 1 "ENTRY_10612ee0"

undefined4 __stdcall FUN_10612ee0(undefined4 param_1)

{
 try {
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  void *local_78;
  undefined1 *puStack_74;
  undefined4 local_70;
  undefined1 local_6c [32];
  undefined1 local_4c [32];
  int *local_2c;
  undefined **local_28;
  undefined4 local_24;
  int iStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 *local_14;
  undefined4 *local_10;
  int local_c;
  undefined4 local_8;


  thunk_FUN_10eb41c0(DAT_12126b84 ^ (uint)(uint)&local_6c);
  iVar2 = (int)(thunk_FUN_10eac8c0(), 0);
  local_8 = (undefined4)(DAT_121a2170);
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a2168);

  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a2174);
  *(unsigned char*)((char *)&local_70 + 0) = (unsigned char)(1);
  thunk_FUN_105f5920(&local_8);
  *(unsigned char*)((char *)&local_70 + 0) = (unsigned char)(2);

  thunk_FUN_105f5920(&local_8);
  local_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTree);

  iStack_20 = (int)(0);

  iStack_18 = (int)(0);
  local_14 = (undefined4 *)((undefined4 *)0x0);
  local_10 = (undefined4 *)((undefined4 *)0x0);

  *(unsigned char*)((char *)&local_70 + 0) = (unsigned char)(4);
  thunk_FUN_10eb41c0();
  piVar3 = (int *)((int *)thunk_FUN_10cf34e0(&local_2c), 0);
  *(unsigned char*)((char *)&local_70 + 0) = (unsigned char)(5);
  piVar3 = (int *)((int *)(*(code *)local_28[2])(*piVar3 == (int)((0)),(uint)&local_4c), 0);
  piVar3 = (int *)((int *)(**(code **)(*piVar3 + 0xc))(iVar2 == 4,(uint)&local_6c), 0);
  piVar3 = (int *)((int *)(**(code **)(*piVar3 + 0xc))(iVar2 == 1,(uint)&local_98), 0);
  piVar3 = (int *)((int *)(**(code **)(*piVar3 + 0xc))(iVar2 == 2,(uint)&local_b8), 0);
  uVar4 = (undefined4)((**(code **)(*piVar3 + 4))(), 0);
  thunk_FUN_105f5a00(uVar4);
  local_70 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_70 + 1)) << 8 | (uint)(6)));
  if ((int *)(local_2c) != (int *)(0x0)) {
    (**(code **)(*local_2c + 8))();
  }
  puVar1 = (undefined4 *)(local_10);
  puVar6 = (undefined4 *)(local_14);
  if ((undefined4 *)(local_14) != (undefined4 *)(0x0)) {
    for (;(undefined4 *)((puVar6)) != (undefined4 *)(puVar1); puVar6 = puVar6 + 8) {
      (**(code **)*puVar6)(0);
    }
    uVar5 = (uint)(local_c - (int)local_14 & 0xffffffe0);
    puVar6 = (undefined4 *)(local_14);
    if (0xfff < uVar5) {
      puVar6 = (undefined4 *)((undefined4 *)local_14[-1]);
      uVar5 = (uint)(uVar5 + 0x23);
      if (0x1f < (uint)((int)local_14 + (-4 - (int)puVar6))) goto LAB_106130c1;
    }
    thunk_FUN_1148a50e(puVar6,uVar5);
    local_14 = (undefined4 *)((undefined4 *)0x0);
    local_10 = (undefined4 *)((undefined4 *)0x0);

  }
  if (iStack_20 != 0) {
    uVar5 = (uint)(iStack_18 - iStack_20 & 0xfffffffc);
    iVar2 = (int)(iStack_20);
    if (0xfff < uVar5) {
      iVar2 = (int)(*(int *)(iStack_20 + -4));
      uVar5 = (uint)(uVar5 + 0x23);
      if (0x1f < (iStack_20 - iVar2) - 4U) {
LAB_106130c1:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar2,uVar5);
    iStack_20 = (int)(0);

    iStack_18 = (int)(0);
  }
  local_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 106131c0; body size 1323 bytes.
#line 1 "ENTRY_106131c0"

void __stdcall FUN_106131c0(int *param_1)

{
 try {
  undefined4 *puVar1;
  undefined1 uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 uVar10;
  undefined1 local_160 [32];
  undefined1 local_140 [32];
  undefined1 local_120 [32];
  undefined1 local_100 [32];
  undefined1 local_e0 [32];
  undefined1 local_c0 [32];
  undefined1 local_a0 [32];
  void *local_80;
  undefined1 *puStack_7c;
  undefined4 local_78;
  int *local_74;
  undefined **local_70;
  undefined4 local_6c;
  int iStack_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined4 *local_5c;
  undefined4 *local_58;
  int local_54;
  int *local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  char local_35;
  int *local_34;
  undefined4 local_30;
  char local_2c [36];
  uint local_8;


  local_8 = (uint)(DAT_12126b84 ^ (uint)&local_74);

  local_74 = (int *)(param_1);
  local_50 = (int *)(param_1);
  local_48 = (uint)(local_48 & 0xffffff00);
  thunk_FUN_10eb41c0(local_8);
  iVar4 = (int)(thunk_FUN_10eac8c0(), 0);
  thunk_FUN_105a26b0();
  iVar5 = (int)(thunk_FUN_10df2df0(), 0);
  local_35 = (char)(iVar5 == DAT_121a216c);
  iVar5 = (int)(thunk_FUN_10ebc1e0(), 0);
  if ((*(char *)(iVar5 + 0x118) != '\0') && ((iVar4 == 4 || (iVar4 == 2)))) {
    uVar2 = (undefined1)((undefined1)local_48);
    if (local_35 == '\0') {
      uVar2 = (undefined1)(1);
    }
    local_48 = (uint)(((uint)(*(unsigned short *)((char *)&local_48 + 1)) << 8 | (uint)(uVar2)));
  }
  local_4c = (uint)(local_4c & 0xffffff00);
  iVar4 = (int)(thunk_FUN_10ebc1e0(), 0);
  if (*(char *)(iVar4 + 0x118) == '\0') {
    thunk_FUN_10eb41c0();
    thunk_FUN_10cf34e0(&local_34);

    uVar2 = (undefined1)(thunk_FUN_10c9b9a0(), 0);
    local_4c = (uint)(((uint)(*(unsigned short *)((char *)&local_4c + 1)) << 8 | (uint)(uVar2)));

    if ((int *)(local_34) != (int *)(0x0)) {
      (**(code **)(*local_34 + 8))();
    }

  }
  local_40 = (uint)(local_40 & 0xffffff00);
  iVar4 = (int)(thunk_FUN_10ebc1e0(), 0);
  if (*(char *)(iVar4 + 0x118) != '\0') {
    thunk_FUN_10eb41c0();
    thunk_FUN_10cf34e0(&local_34);

    iVar4 = (int)(thunk_FUN_10c97b50(), 0);

    if ((int *)(local_34) != (int *)(0x0)) {
      (**(code **)(*local_34 + 8))();
    }
    local_40 = (uint)(local_40 & 0xff);
    if (0x18 < iVar4) {

    }

  }
  local_44 = (uint)(local_44 & 0xffffff00);
  iVar4 = (int)(thunk_FUN_10ebc1e0(), 0);
  if (*(char *)(iVar4 + 0x118) != '\0') {
    thunk_FUN_10eb41c0();
    thunk_FUN_10cf34e0(&local_50);

    thunk_FUN_10c96f10(&local_34);
    *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(7);
    if ((int *)(local_50) != (int *)(0x0)) {
      (**(code **)(*local_50 + 8))();
    }
    *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(6);
    thunk_FUN_10eb41c0();
    pcVar9 = (char *)((uint)&local_2c);
    local_2c[0] = (char)('\0');
    uVar10 = (undefined4)(0x21);
    thunk_FUN_1109f7f0(pcVar9,0x21);
    thunk_FUN_1109f100(pcVar9,uVar10);
    ((SCStr *)((SCStr *)&local_3c))->int_allocRep((uint)&local_2c);
    *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(8);
    bVar3 = (bool)(((SCStr *)((SCStr *)&local_34))->op_eq((SCStr *)&local_3c), 0);
    local_78 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_78 + 1)) << 8 | (uint)(9)));
    ((SCStr *)((SCStr *)&local_3c))->int_release();
    local_44 = (uint)(local_44 & 0xff);
    if (bVar3) {

    }

    ((SCStr *)((SCStr *)&local_34))->int_release();

  }
  local_30 = (undefined4)(DAT_121a2184);
  thunk_FUN_105f5920(&local_30);
  local_30 = (undefined4)(DAT_121a214c);

  thunk_FUN_105f5920(&local_30);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0xc);
  iVar4 = (int)(thunk_FUN_10ebc1e0(), 0);
  if (*(char *)(iVar4 + 0x118) == '\0') {
LAB_10613427:
    local_3c = (uint)(local_3c & 0xffffff00);
  }
  else {
    local_3c = (uint)(((uint)(*(unsigned short *)((char *)&local_3c + 1)) << 8 | (uint)(1)));
    if ((char)local_40 != '\0') goto LAB_10613427;
  }
  local_30 = (undefined4)(DAT_121a2150);
  thunk_FUN_105f5920(&local_30);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0xd);
  iVar4 = (int)(thunk_FUN_10ebc1e0(), 0);
  if (*(char *)(iVar4 + 0x118) == '\0') {
LAB_10613460:
    local_34 = (int *)((int *)((uint)local_34 & 0xffffff00));
  }
  else {
    local_34 = (int *)((int *)((uint)(*(unsigned short *)((char *)&local_34 + 1)) << 8 | (uint)(1)));
    if ((char)local_44 != '\0') goto LAB_10613460;
  }
  local_30 = (undefined4)(DAT_121a218c);
  thunk_FUN_105f5920(&local_30);
  local_30 = (undefined4)(DAT_121a217c);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0xe);
  thunk_FUN_105f5920(&local_30);
  local_30 = (undefined4)(DAT_121a218c);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0xf);
  thunk_FUN_105f5920(&local_30);
  local_30 = (undefined4)(DAT_121a2158);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x10);
  thunk_FUN_105f5920(&local_30);
  local_30 = (undefined4)(DAT_121a2178);
  *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0x11);
  thunk_FUN_105f5920(&local_30);
  local_70 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTree);

  iStack_68 = (int)(0);

  iStack_60 = (int)(0);
  local_5c = (undefined4 *)((undefined4 *)0x0);
  local_58 = (undefined4 *)((undefined4 *)0x0);

  local_78 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_78 + 1)) << 8 | (uint)(0x13)));
  piVar6 = (int *)((int *)thunk_FUN_106190a0(local_48,(uint)&local_a0), 0);
  thunk_FUN_10eb41c0();
  iVar4 = (int)(*piVar6);
  uVar2 = (undefined1)(thunk_FUN_10cf5140((uint)&local_c0), 0);
  piVar6 = (int *)((int *)(**(code **)(iVar4 + 0xc))(uVar2), 0);
  iVar4 = (int)(thunk_FUN_10ebc1e0(), 0);
  piVar6 = (int *)((int *)(**(code **)(*piVar6 + 0xc))(*(undefined1 *)(iVar4 + 0x11c),(uint)&local_e0), 0);
  piVar6 = (int *)((int *)(**(code **)(*piVar6 + 0xc))(local_4c,(uint)&local_100), 0);
  iVar4 = (int)(thunk_FUN_10ebc1e0(), 0);
  piVar6 = (int *)((int *)(**(code **)(*piVar6 + 0xc))(*(char *)(iVar4 + 0x118) == '\0',(uint)&local_120), 0);
  piVar6 = (int *)((int *)(**(code **)(*piVar6 + 0xc))(local_34,(uint)&local_140), 0);
  piVar6 = (int *)((int *)(**(code **)(*piVar6 + 0xc))(local_3c,(uint)&local_160), 0);
  piVar6 = (int *)((int *)(**(code **)(*piVar6 + 0x10))((uint)&local_2c), 0);
  uVar10 = (undefined4)((**(code **)(*piVar6 + 4))(), 0);
  thunk_FUN_105f5a00(uVar10);
  puVar1 = (undefined4 *)(local_58);
  puVar8 = (undefined4 *)(local_5c);
  if ((undefined4 *)(local_5c) != (undefined4 *)(0x0)) {
    for (;(undefined4 *)((puVar8)) != (undefined4 *)(puVar1); puVar8 = puVar8 + 8) {
      (**(code **)*puVar8)(0);
    }
    uVar7 = (uint)(local_54 - (int)local_5c & 0xffffffe0);
    puVar8 = (undefined4 *)(local_5c);
    if (0xfff < uVar7) {
      puVar8 = (undefined4 *)((undefined4 *)local_5c[-1]);
      uVar7 = (uint)(uVar7 + 0x23);
      if (0x1f < (uint)((int)local_5c + (-4 - (int)puVar8))) goto LAB_10613652;
    }
    thunk_FUN_1148a50e(puVar8,uVar7);
    local_5c = (undefined4 *)((undefined4 *)0x0);
    local_58 = (undefined4 *)((undefined4 *)0x0);

  }
  if (iStack_68 != 0) {
    uVar7 = (uint)(iStack_60 - iStack_68 & 0xfffffffc);
    iVar4 = (int)(iStack_68);
    if (0xfff < uVar7) {
      iVar4 = (int)(*(int *)(iStack_68 + -4));
      uVar7 = (uint)(uVar7 + 0x23);
      if (0x1f < (iStack_68 - iVar4) - 4U) {
LAB_10613652:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar4,uVar7);
    iStack_68 = (int)(0);

    iStack_60 = (int)(0);
  }
  local_70 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 10613840; body size 504 bytes.
#line 1 "ENTRY_10613840"

undefined4 __stdcall FUN_10613840(undefined4 param_1)

{
 try {
  int iVar1;
  undefined **ppuVar2;
  undefined4 *puVar3;
  undefined1 uVar4;
  int *piVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined1 local_94 [32];
  void *local_74;
  undefined1 *puStack_70;
  undefined4 local_6c;
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  undefined **local_28;
  undefined4 local_24;
  int iStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 *local_14;
  undefined4 *local_10;
  int local_c;
  undefined4 local_8;


  thunk_FUN_10eb41c0(DAT_12126b84 ^ (uint)(uint)&local_68);
  piVar5 = (int *)((int *)thunk_FUN_10eace90(), 0);
  iVar8 = (int)(piVar5[1]);
  iVar1 = (int)(*piVar5);
  local_8 = (undefined4)(DAT_121a2164);
  thunk_FUN_105f5920(&local_8);


  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a2158);
  *(unsigned char*)((char *)&local_6c + 0) = (unsigned char)(1);
  thunk_FUN_105f5920(&local_8);
  local_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTree);

  iStack_20 = (int)(0);

  iStack_18 = (int)(0);
  local_14 = (undefined4 *)((undefined4 *)0x0);
  local_10 = (undefined4 *)((undefined4 *)0x0);

  local_6c = (undefined4)(((uint)(*(unsigned short *)((char *)&local_6c + 1)) << 8 | (uint)(3)));
  thunk_FUN_10eb41c0();
  ppuVar2 = (undefined **)(local_28);
  uVar4 = (undefined1)(thunk_FUN_10cf5140((uint)&local_48), 0);
  piVar5 = (int *)((int *)(*(code *)ppuVar2[2])(uVar4), 0);
  piVar5 = (int *)((int *)(**(code **)(*piVar5 + 0xc))((iVar8 - iVar1) / 0x4c < 1,(uint)&local_68), 0);
  piVar5 = (int *)((int *)(**(code **)(*piVar5 + 0x10))((uint)&local_94), 0);
  uVar6 = (undefined4)((**(code **)(*piVar5 + 4))(), 0);
  thunk_FUN_105f5a00(uVar6);
  puVar3 = (undefined4 *)(local_10);
  puVar9 = (undefined4 *)(local_14);
  if ((undefined4 *)(local_14) != (undefined4 *)(0x0)) {
    for (;(undefined4 *)((puVar9)) != (undefined4 *)(puVar3); puVar9 = puVar9 + 8) {
      (**(code **)*puVar9)(0);
    }
    uVar7 = (uint)(local_c - (int)local_14 & 0xffffffe0);
    puVar9 = (undefined4 *)(local_14);
    if (0xfff < uVar7) {
      puVar9 = (undefined4 *)((undefined4 *)local_14[-1]);
      uVar7 = (uint)(uVar7 + 0x23);
      if (0x1f < (uint)((int)local_14 + (-4 - (int)puVar9))) goto LAB_106139dd;
    }
    thunk_FUN_1148a50e(puVar9,uVar7);
    local_14 = (undefined4 *)((undefined4 *)0x0);
    local_10 = (undefined4 *)((undefined4 *)0x0);

  }
  if (iStack_20 != 0) {
    uVar7 = (uint)(iStack_18 - iStack_20 & 0xfffffffc);
    iVar8 = (int)(iStack_20);
    if (0xfff < uVar7) {
      iVar8 = (int)(*(int *)(iStack_20 + -4));
      uVar7 = (uint)(uVar7 + 0x23);
      if (0x1f < (iStack_20 - iVar8) - 4U) {
LAB_106139dd:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar8,uVar7);
    iStack_20 = (int)(0);

    iStack_18 = (int)(0);
  }
  local_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 10613ac0; body size 344 bytes.
#line 1 "ENTRY_10613ac0"

undefined4 __stdcall FUN_10613ac0(undefined4 param_1)

{
 try {
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 local_54 [32];
  undefined **local_34;
  undefined4 local_30;
  int iStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  int local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  thunk_FUN_105f5920(&local_14);
  local_34 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTree);

  iStack_2c = (int)(0);

  iStack_24 = (int)(0);
  local_20 = (undefined4 *)((undefined4 *)0x0);
  local_1c = (undefined4 *)((undefined4 *)0x0);


  piVar3 = (int *)((int *)thunk_FUN_10605020((uint)&local_54), 0);
  uVar4 = (undefined4)((**(code **)(*piVar3 + 4))(uVar2), 0);
  thunk_FUN_105f5a00(uVar4);
  puVar1 = (undefined4 *)(local_1c);
  puVar6 = (undefined4 *)(local_20);
  if ((undefined4 *)(local_20) != (undefined4 *)(0x0)) {
    for (;(undefined4 *)((puVar6)) != (undefined4 *)(puVar1); puVar6 = puVar6 + 8) {
      (**(code **)*puVar6)(0);
    }
    uVar2 = (uint)(local_18 - (int)local_20 & 0xffffffe0);
    puVar6 = (undefined4 *)(local_20);
    if (0xfff < uVar2) {
      puVar6 = (undefined4 *)((undefined4 *)local_20[-1]);
      uVar2 = (uint)(uVar2 + 0x23);
      if (0x1f < (uint)((int)local_20 + (-4 - (int)puVar6))) goto LAB_10613bce;
    }
    thunk_FUN_1148a50e(puVar6,uVar2);
    local_20 = (undefined4 *)((undefined4 *)0x0);
    local_1c = (undefined4 *)((undefined4 *)0x0);

  }
  if (iStack_2c != 0) {
    uVar2 = (uint)(iStack_24 - iStack_2c & 0xfffffffc);
    iVar5 = (int)(iStack_2c);
    if (0xfff < uVar2) {
      iVar5 = (int)(*(int *)(iStack_2c + -4));
      uVar2 = (uint)(uVar2 + 0x23);
      if (0x1f < (iStack_2c - iVar5) - 4U) {
LAB_10613bce:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar5,uVar2);
    iStack_2c = (int)(0);

    iStack_24 = (int)(0);
  }
  local_34 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  thunk_FUN_105feb30();

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 10613ca0; body size 1264 bytes.
#line 1 "ENTRY_10613ca0"

undefined4 __stdcall FUN_10613ca0(undefined4 param_1)

{
 try {
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined1 local_1a4 [28];
  undefined **local_188 [8];
  undefined **local_168 [8];
  undefined **local_148 [8];
  undefined1 local_128 [36];
  undefined4 local_104;
  int *local_100;
  undefined4 local_fc;
  int *local_f8;
  undefined1 local_f4 [36];
  undefined4 local_d0;
  int *local_cc;
  undefined4 local_c8;
  int *local_c4;
  undefined1 local_c0 [36];
  undefined4 local_9c;
  int *local_98;
  undefined4 local_94;
  int *local_90;
  undefined4 local_80;
  int *local_7c;
  undefined4 local_78;
  int *local_74;
  void *local_70;
  undefined1 *puStack_6c;
  undefined4 local_68;
  undefined4 local_58;
  int *local_54;
  undefined4 local_50;
  int *local_4c;
  undefined4 local_3c;
  int *local_38;
  undefined4 local_34;
  int *local_30;
  undefined **local_2c;
  undefined4 local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  int local_10;
  SCStr local_c [4];
  undefined4 local_8;


  ((SCStr *)((uint)&local_c))->int_allocRep("no");

  iVar3 = (int)(thunk_FUN_10eb22a0(DAT_121a2160), 0);
  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(1);
  thunk_FUN_10df6f00((uint)&local_c);
  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(2);
  uVar4 = (undefined4)(thunk_FUN_10def290((uint)&local_128,iVar3 + 4), 0);
  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(3);
  thunk_FUN_105f5d20(uVar4);
  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(4);
  ((SCStr *)((SCStr *)&local_8))->int_allocRep("yes");
  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(5);
  iVar3 = (int)(thunk_FUN_10eb22a0(DAT_121a2128), 0);
  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(6);
  thunk_FUN_10df6f00(&local_8);
  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(7);
  uVar4 = (undefined4)(thunk_FUN_10def290((uint)&local_f4,iVar3 + 4), 0);
  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(8);
  thunk_FUN_105f5d20(uVar4);
  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(9);
  iVar3 = (int)(thunk_FUN_10eb1dc0(), 0);
  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(10);
  thunk_FUN_10eb41c0();
  thunk_FUN_10cf4eb0((uint)&local_1a4);
  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(0xb);
  uVar4 = (undefined4)(thunk_FUN_10def350((uint)&local_c0,iVar3 + 4), 0);
  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(0xc);
  thunk_FUN_105f5d20(uVar4);
  local_2c = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTree);

  iStack_24 = (int)(0);
  iStack_20 = (int)(0);
  iStack_1c = (int)(0);
  local_18 = (undefined4 *)((undefined4 *)0x0);
  local_14 = (undefined4 *)((undefined4 *)0x0);

  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(0xe);
  piVar5 = (int *)((int *)thunk_FUN_10605060((uint)&local_148), 0);
  piVar5 = (int *)((int *)(**(code **)(*piVar5 + 8))((uint)&local_168), 0);
  uVar4 = (undefined4)((**(code **)(*piVar5 + 8))((uint)&local_188), 0);
  thunk_FUN_105f5df0(uVar4);
  puVar2 = (undefined4 *)(local_14);
  local_68 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_68 + 1)) << 8 | (uint)(0xd)));
  puVar7 = (undefined4 *)(local_18);
  if ((undefined4 *)(local_18) != (undefined4 *)(0x0)) {
    for (;(undefined4 *)((puVar7)) != (undefined4 *)(puVar2); puVar7 = puVar7 + 8) {
      (**(code **)*puVar7)(0);
    }
    uVar6 = (uint)(local_10 - (int)local_18 & 0xffffffe0);
    puVar7 = (undefined4 *)(local_18);
    if (0xfff < uVar6) {
      puVar7 = (undefined4 *)((undefined4 *)local_18[-1]);
      uVar6 = (uint)(uVar6 + 0x23);
      if (0x1f < (uint)((int)local_18 + (-4 - (int)puVar7))) goto LAB_10613eec;
    }
    thunk_FUN_1148a50e(puVar7,uVar6);
    local_18 = (undefined4 *)((undefined4 *)0x0);
    local_14 = (undefined4 *)((undefined4 *)0x0);

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
LAB_10613eec:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar3,uVar6);
    iStack_24 = (int)(0);
    iStack_20 = (int)(0);
    iStack_1c = (int)(0);
  }
  local_2c = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  thunk_FUN_10604700();
  thunk_FUN_106045d0();
  piVar5 = (int *)(local_90);
  local_148[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(0xf);
  if ((int *)(local_90) != (int *)(0x0)) {

    local_90 = (int *)((int *)0x0);
    (**(code **)(*piVar5 + 8))();
  }
  piVar5 = (int *)(local_98);
  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(0x10);
  if ((int *)(local_98) != (int *)(0x0)) {

    local_98 = (int *)((int *)0x0);
    (**(code **)(*piVar5 + 8))();
  }
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  piVar5 = (int *)(local_30);
  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(0x11);
  if ((int *)(local_30) != (int *)(0x0)) {

    local_30 = (int *)((int *)0x0);
    (**(code **)(*piVar5 + 8))();
  }
  piVar5 = (int *)(local_38);
  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(0x12);
  if ((int *)(local_38) != (int *)(0x0)) {

    local_38 = (int *)((int *)0x0);
    (**(code **)(*piVar5 + 8))();
  }
  thunk_FUN_10604700();
  thunk_FUN_106045d0();
  piVar5 = (int *)(local_c4);
  local_168[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(0x13);
  if ((int *)(local_c4) != (int *)(0x0)) {

    local_c4 = (int *)((int *)0x0);
    (**(code **)(*piVar5 + 8))();
  }
  piVar5 = (int *)(local_cc);
  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(0x14);
  if ((int *)(local_cc) != (int *)(0x0)) {

    local_cc = (int *)((int *)0x0);
    (**(code **)(*piVar5 + 8))();
  }
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  thunk_FUN_10def0d0();
  piVar5 = (int *)(local_4c);
  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(0x15);
  if ((int *)(local_4c) != (int *)(0x0)) {

    local_4c = (int *)((int *)0x0);
    (**(code **)(*piVar5 + 8))();
  }
  piVar5 = (int *)(local_54);
  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(0x16);
  if ((int *)(local_54) != (int *)(0x0)) {

    local_54 = (int *)((int *)0x0);
    (**(code **)(*piVar5 + 8))();
  }
  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(0x17);
  ((SCStr *)((SCStr *)&local_8))->int_release();

  thunk_FUN_10604700();
  thunk_FUN_106045d0();
  piVar5 = (int *)(local_f8);
  local_188[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(0x18);
  if ((int *)(local_f8) != (int *)(0x0)) {

    local_f8 = (int *)((int *)0x0);
    (**(code **)(*piVar5 + 8))();
  }
  piVar5 = (int *)(local_100);
  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(0x19);
  if ((int *)(local_100) != (int *)(0x0)) {

    local_100 = (int *)((int *)0x0);
    (**(code **)(*piVar5 + 8))();
  }
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  thunk_FUN_10def0d0();
  piVar5 = (int *)(local_74);
  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(0x1a);
  if ((int *)(local_74) != (int *)(0x0)) {

    local_74 = (int *)((int *)0x0);
    (**(code **)(*piVar5 + 8))();
  }
  piVar5 = (int *)(local_7c);
  local_68 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_68 + 1)) << 8 | (uint)(0x1b)));
  if ((int *)(local_7c) != (int *)(0x0)) {

    local_7c = (int *)((int *)0x0);
    (**(code **)(*piVar5 + 8))();
  }

  ((SCStr *)((uint)&local_c))->int_release();

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 106142d0; body size 2452 bytes.
#line 1 "ENTRY_106142d0"

undefined4 __thiscall Recovered_Bulk::m_FUN_106142d0(undefined4 param_2)
{
  int param_1 = (int )this;
 try {
  undefined4 *puVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined **local_2f0 [8];
  undefined **local_2d0 [8];
  undefined **local_2b0 [8];
  undefined **local_290 [8];
  undefined **local_270 [8];
  undefined **local_250 [8];
  undefined1 local_230 [36];
  undefined4 local_20c;
  int *local_208;
  undefined4 local_204;
  int *local_200;
  undefined1 local_1fc [36];
  undefined4 local_1d8;
  int *local_1d4;
  undefined4 local_1d0;
  int *local_1cc;
  undefined1 local_1c8 [36];
  undefined4 local_1a4;
  int *local_1a0;
  undefined4 local_19c;
  int *local_198;
  undefined1 local_194 [36];
  undefined4 local_170;
  int *local_16c;
  undefined4 local_168;
  int *local_164;
  undefined1 local_160 [36];
  undefined4 local_13c;
  int *local_138;
  undefined4 local_134;
  int *local_130;
  undefined1 local_12c [36];
  undefined4 local_108;
  int *local_104;
  undefined4 local_100;
  int *local_fc;
  undefined4 local_ec;
  int *local_e8;
  undefined4 local_e4;
  int *local_e0;
  undefined4 local_d0;
  int *local_cc;
  undefined4 local_c8;
  int *local_c4;
  undefined4 local_b4;
  int *local_b0;
  undefined4 local_ac;
  int *local_a8;
  undefined4 local_98;
  int *local_94;
  undefined4 local_90;
  int *local_8c;
  undefined4 local_7c;
  int *local_78;
  undefined4 local_74;
  int *local_70;
  void *local_6c;
  undefined1 *puStack_68;
  undefined4 local_64;
  undefined1 local_60 [12];
  undefined4 local_54;
  int *local_50;
  undefined4 local_4c;
  int *local_48;
  int local_44;
  undefined **local_40;
  undefined4 local_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  int local_24;
  SCStr local_20 [4];
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;


  local_44 = (int)(param_1);
  thunk_FUN_10eb41c0(DAT_12126b84 ^ (uint)(uint)&local_60);
  iVar3 = (int)(thunk_FUN_10eac8c0(), 0);
  ((SCStr *)((uint)&local_20))->int_allocRep("leaveItWired");

  iVar4 = (int)(thunk_FUN_10eb22a0(DAT_121a2164), 0);
  *(unsigned char*)((char *)&local_64 + 0) = (unsigned char)(1);
  thunk_FUN_10df6f00((uint)&local_20);
  *(unsigned char*)((char *)&local_64 + 0) = (unsigned char)(2);
  uVar5 = (undefined4)(thunk_FUN_10def290((uint)&local_230,iVar4 + 4), 0);
  *(unsigned char*)((char *)&local_64 + 0) = (unsigned char)(3);
  thunk_FUN_105f5d20(uVar5);
  *(unsigned char*)((char *)&local_64 + 0) = (unsigned char)(4);
  ((SCStr *)((SCStr *)&local_18))->int_allocRep("leaveItWired");
  *(unsigned char*)((char *)&local_64 + 0) = (unsigned char)(5);
  iVar4 = (int)(thunk_FUN_10eb1dc0(), 0);
  *(unsigned char*)((char *)&local_64 + 0) = (unsigned char)(6);
  thunk_FUN_10df6f00(&local_18);
  *(unsigned char*)((char *)&local_64 + 0) = (unsigned char)(7);
  uVar5 = (undefined4)(thunk_FUN_10def290((uint)&local_1fc,iVar4 + 4), 0);
  *(unsigned char*)((char *)&local_64 + 0) = (unsigned char)(8);
  thunk_FUN_105f5d20(uVar5);
  *(unsigned char*)((char *)&local_64 + 0) = (unsigned char)(9);
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("continue");
  *(unsigned char*)((char *)&local_64 + 0) = (unsigned char)(10);
  iVar4 = (int)(thunk_FUN_10eb22a0(DAT_121a218c), 0);
  *(unsigned char*)((char *)&local_64 + 0) = (unsigned char)(0xb);
  thunk_FUN_10df6f00(&local_14);
  *(unsigned char*)((char *)&local_64 + 0) = (unsigned char)(0xc);
  uVar5 = (undefined4)(thunk_FUN_10def290((uint)&local_1c8,iVar4 + 4), 0);
  *(unsigned char*)((char *)&local_64 + 0) = (unsigned char)(0xd);
  thunk_FUN_105f5d20(uVar5);
  *(unsigned char*)((char *)&local_64 + 0) = (unsigned char)(0xe);
  ((SCStr *)((SCStr *)&local_10))->int_allocRep("continue");
  *(unsigned char*)((char *)&local_64 + 0) = (unsigned char)(0xf);
  iVar4 = (int)(thunk_FUN_10eb22a0(DAT_121a2174), 0);
  *(unsigned char*)((char *)&local_64 + 0) = (unsigned char)(0x10);
  thunk_FUN_10df6f00(&local_10);
  *(unsigned char*)((char *)&local_64 + 0) = (unsigned char)(0x11);
  uVar5 = (undefined4)(thunk_FUN_10def290((uint)&local_194,iVar4 + 4), 0);
  *(unsigned char*)((char *)&local_64 + 0) = (unsigned char)(0x12);
  thunk_FUN_105f5d20(uVar5);
  *(unsigned char*)((char *)&local_64 + 0) = (unsigned char)(0x13);
  if ((iVar3 == 1) || (local_1c = (uint)(local_1c & 0xffffff00), iVar3 == 2)) {
    local_1c = (uint)(((uint)(*(unsigned short *)((char *)&local_1c + 1)) << 8 | (uint)(1)));
  }
  ((SCStr *)((SCStr *)&local_c))->int_allocRep("continue");
  *(unsigned char*)((char *)&local_64 + 0) = (unsigned char)(0x14);
  iVar4 = (int)(thunk_FUN_10eb22a0(DAT_121a2170), 0);
  *(unsigned char*)((char *)&local_64 + 0) = (unsigned char)(0x15);
  thunk_FUN_10df6f00(&local_c);
  *(unsigned char*)((char *)&local_64 + 0) = (unsigned char)(0x16);
  uVar5 = (undefined4)(thunk_FUN_10def290((uint)&local_160,iVar4 + 4), 0);
  *(unsigned char*)((char *)&local_64 + 0) = (unsigned char)(0x17);
  thunk_FUN_105f5d20(uVar5);
  *(unsigned char*)((char *)&local_64 + 0) = (unsigned char)(0x18);
  if ((*(char *)(param_1 + 0xe0) == '\0') || (iVar3 != 2)) {
    uVar5 = (undefined4)(0);
  }
  else {
    uVar5 = (undefined4)(1);
  }
  ((SCStr *)((SCStr *)&local_8))->int_allocRep("continue");
  *(unsigned char*)((char *)&local_64 + 0) = (unsigned char)(0x19);
  iVar4 = (int)(thunk_FUN_10eb22a0(DAT_121a2168), 0);
  *(unsigned char*)((char *)&local_64 + 0) = (unsigned char)(0x1a);
  thunk_FUN_10df6f00(&local_8);
  *(unsigned char*)((char *)&local_64 + 0) = (unsigned char)(0x1b);
  uVar6 = (undefined4)(thunk_FUN_10def290((uint)&local_12c,iVar4 + 4), 0);
  *(unsigned char*)((char *)&local_64 + 0) = (unsigned char)(0x1c);
  thunk_FUN_105f5d20(uVar6);
  if ((*(char *)(local_44 + 0xe0) == '\0') || (iVar3 != 1)) {
    uVar6 = (undefined4)(0);
  }
  else {
    uVar6 = (undefined4)(1);
  }
  local_40 = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTree);

  iStack_38 = (int)(0);
  iStack_34 = (int)(0);
  iStack_30 = (int)(0);
  local_2c = (undefined4 *)((undefined4 *)0x0);
  local_28 = (undefined4 *)((undefined4 *)0x0);

  *(unsigned char*)((char *)&local_64 + 0) = (unsigned char)(0x1e);
  piVar7 = (int *)((int *)thunk_FUN_10619290(uVar6,(uint)&local_250), 0);
  piVar7 = (int *)((int *)(**(code **)(*piVar7 + 0x10))(uVar5,(uint)&local_270), 0);
  piVar7 = (int *)((int *)(**(code **)(*piVar7 + 0x10))(local_1c,(uint)&local_290), 0);
  piVar7 = (int *)((int *)(**(code **)(*piVar7 + 0x14))((uint)&local_2b0), 0);
  thunk_FUN_10eb41c0();
  iVar3 = (int)(*piVar7);
  uVar2 = (undefined1)(thunk_FUN_10eacea0((uint)&local_2d0), 0);
  piVar7 = (int *)((int *)(**(code **)(iVar3 + 0xc))(uVar2), 0);
  uVar5 = (undefined4)((**(code **)(*piVar7 + 0x14))((uint)&local_2f0), 0);
  thunk_FUN_105f5df0(uVar5);
  puVar1 = (undefined4 *)(local_28);
  local_64 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_64 + 1)) << 8 | (uint)(0x1d)));
  puVar9 = (undefined4 *)(local_2c);
  if ((undefined4 *)(local_2c) != (undefined4 *)(0x0)) {
    for (;(undefined4 *)((puVar9)) != (undefined4 *)(puVar1); puVar9 = puVar9 + 8) {
      (**(code **)*puVar9)(0);
    }
    uVar8 = (uint)(local_24 - (int)local_2c & 0xffffffe0);
    puVar9 = (undefined4 *)(local_2c);
    if (0xfff < uVar8) {
      puVar9 = (undefined4 *)((undefined4 *)local_2c[-1]);
      uVar8 = (uint)(uVar8 + 0x23);
      if (0x1f < (uint)((int)local_2c + (-4 - (int)puVar9))) goto LAB_106146e5;
    }
    thunk_FUN_1148a50e(puVar9,uVar8);
    local_2c = (undefined4 *)((undefined4 *)0x0);
    local_28 = (undefined4 *)((undefined4 *)0x0);

  }
  iVar4 = (int)(iStack_34);
  iVar3 = (int)(iStack_38);
  if (iStack_38 != 0) {
    for (; iVar3 != iVar4; iVar3 = iVar3 + 0x34) {
      thunk_FUN_105ff930();
    }
    uVar8 = (uint)(((iStack_30 - iStack_38) / 0x34) * 0x34);
    iVar3 = (int)(iStack_38);
    if (0xfff < uVar8) {
      iVar3 = (int)(*(int *)(iStack_38 + -4));
      uVar8 = (uint)(uVar8 + 0x23);
      if (0x1f < (iStack_38 - iVar3) - 4U) {
LAB_106146e5:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar3,uVar8);
    iStack_38 = (int)(0);
    iStack_34 = (int)(0);
    iStack_30 = (int)(0);
  }
  local_40 = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  thunk_FUN_10604700();
  thunk_FUN_106045d0();
  piVar7 = (int *)(local_fc);
  local_250[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char*)((char *)&local_64 + 0) = (unsigned char)(0x1f);
  if ((int *)(local_fc) != (int *)(0x0)) {

    local_fc = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  piVar7 = (int *)(local_104);
  *(unsigned char*)((char *)&local_64 + 0) = (unsigned char)(0x20);
  if ((int *)(local_104) != (int *)(0x0)) {

    local_104 = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  thunk_FUN_10def0d0();
  piVar7 = (int *)(local_e0);
  *(unsigned char*)((char *)&local_64 + 0) = (unsigned char)(0x21);
  if ((int *)(local_e0) != (int *)(0x0)) {

    local_e0 = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  piVar7 = (int *)(local_e8);
  *(unsigned char*)((char *)&local_64 + 0) = (unsigned char)(0x22);
  if ((int *)(local_e8) != (int *)(0x0)) {

    local_e8 = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  *(unsigned char*)((char *)&local_64 + 0) = (unsigned char)(0x23);
  ((SCStr *)((SCStr *)&local_8))->int_release();

  thunk_FUN_10604700();
  thunk_FUN_106045d0();
  piVar7 = (int *)(local_130);
  local_270[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char*)((char *)&local_64 + 0) = (unsigned char)(0x24);
  if ((int *)(local_130) != (int *)(0x0)) {

    local_130 = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  piVar7 = (int *)(local_138);
  *(unsigned char*)((char *)&local_64 + 0) = (unsigned char)(0x25);
  if ((int *)(local_138) != (int *)(0x0)) {

    local_138 = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  thunk_FUN_10def0d0();
  piVar7 = (int *)(local_48);
  *(unsigned char*)((char *)&local_64 + 0) = (unsigned char)(0x26);
  if ((int *)(local_48) != (int *)(0x0)) {

    local_48 = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  piVar7 = (int *)(local_50);
  *(unsigned char*)((char *)&local_64 + 0) = (unsigned char)(0x27);
  if ((int *)(local_50) != (int *)(0x0)) {

    local_50 = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  *(unsigned char*)((char *)&local_64 + 0) = (unsigned char)(0x28);
  ((SCStr *)((SCStr *)&local_c))->int_release();

  thunk_FUN_10604700();
  thunk_FUN_106045d0();
  piVar7 = (int *)(local_164);
  local_290[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char*)((char *)&local_64 + 0) = (unsigned char)(0x29);
  if ((int *)(local_164) != (int *)(0x0)) {

    local_164 = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  piVar7 = (int *)(local_16c);
  *(unsigned char*)((char *)&local_64 + 0) = (unsigned char)(0x2a);
  if ((int *)(local_16c) != (int *)(0x0)) {

    local_16c = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  thunk_FUN_10def0d0();
  piVar7 = (int *)(local_70);
  *(unsigned char*)((char *)&local_64 + 0) = (unsigned char)(0x2b);
  if ((int *)(local_70) != (int *)(0x0)) {

    local_70 = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  piVar7 = (int *)(local_78);
  *(unsigned char*)((char *)&local_64 + 0) = (unsigned char)(0x2c);
  if ((int *)(local_78) != (int *)(0x0)) {

    local_78 = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  *(unsigned char*)((char *)&local_64 + 0) = (unsigned char)(0x2d);
  ((SCStr *)((SCStr *)&local_10))->int_release();

  thunk_FUN_10604700();
  thunk_FUN_106045d0();
  piVar7 = (int *)(local_198);
  local_2b0[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char*)((char *)&local_64 + 0) = (unsigned char)(0x2e);
  if ((int *)(local_198) != (int *)(0x0)) {

    local_198 = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  piVar7 = (int *)(local_1a0);
  *(unsigned char*)((char *)&local_64 + 0) = (unsigned char)(0x2f);
  if ((int *)(local_1a0) != (int *)(0x0)) {

    local_1a0 = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  thunk_FUN_10def0d0();
  piVar7 = (int *)(local_8c);
  *(unsigned char*)((char *)&local_64 + 0) = (unsigned char)(0x30);
  if ((int *)(local_8c) != (int *)(0x0)) {

    local_8c = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  piVar7 = (int *)(local_94);
  *(unsigned char*)((char *)&local_64 + 0) = (unsigned char)(0x31);
  if ((int *)(local_94) != (int *)(0x0)) {

    local_94 = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  *(unsigned char*)((char *)&local_64 + 0) = (unsigned char)(0x32);
  ((SCStr *)((SCStr *)&local_14))->int_release();

  thunk_FUN_10604700();
  thunk_FUN_106045d0();
  piVar7 = (int *)(local_1cc);
  local_2d0[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char*)((char *)&local_64 + 0) = (unsigned char)(0x33);
  if ((int *)(local_1cc) != (int *)(0x0)) {

    local_1cc = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  piVar7 = (int *)(local_1d4);
  *(unsigned char*)((char *)&local_64 + 0) = (unsigned char)(0x34);
  if ((int *)(local_1d4) != (int *)(0x0)) {

    local_1d4 = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  thunk_FUN_10def0d0();
  piVar7 = (int *)(local_a8);
  *(unsigned char*)((char *)&local_64 + 0) = (unsigned char)(0x35);
  if ((int *)(local_a8) != (int *)(0x0)) {

    local_a8 = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  piVar7 = (int *)(local_b0);
  *(unsigned char*)((char *)&local_64 + 0) = (unsigned char)(0x36);
  if ((int *)(local_b0) != (int *)(0x0)) {

    local_b0 = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  *(unsigned char*)((char *)&local_64 + 0) = (unsigned char)(0x37);
  ((SCStr *)((SCStr *)&local_18))->int_release();

  thunk_FUN_10604700();
  thunk_FUN_106045d0();
  piVar7 = (int *)(local_200);
  local_2f0[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char*)((char *)&local_64 + 0) = (unsigned char)(0x38);
  if ((int *)(local_200) != (int *)(0x0)) {

    local_200 = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  piVar7 = (int *)(local_208);
  *(unsigned char*)((char *)&local_64 + 0) = (unsigned char)(0x39);
  if ((int *)(local_208) != (int *)(0x0)) {

    local_208 = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  thunk_FUN_10def0d0();
  piVar7 = (int *)(local_c4);
  *(unsigned char*)((char *)&local_64 + 0) = (unsigned char)(0x3a);
  if ((int *)(local_c4) != (int *)(0x0)) {

    local_c4 = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  piVar7 = (int *)(local_cc);
  local_64 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_64 + 1)) << 8 | (uint)(0x3b)));
  if ((int *)(local_cc) != (int *)(0x0)) {

    local_cc = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }

  ((SCStr *)((uint)&local_20))->int_release();

  return (undefined4)(param_2);

 } catch (...) { }
}


// Reference entry 10614ed0; body size 622 bytes.
#line 1 "ENTRY_10614ed0"

undefined4 __stdcall FUN_10614ed0(undefined4 param_1)

{
 try {
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined **local_a4 [8];
  void *local_84;
  undefined1 *puStack_80;
  undefined4 local_7c;
  undefined1 local_78 [36];
  undefined4 local_54;
  int *local_50;
  undefined4 local_4c;
  int *local_48;
  undefined4 local_38;
  int *local_34;
  undefined4 local_30;
  int *local_2c;
  undefined **local_28;
  undefined4 local_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  undefined4 *local_14;
  undefined4 *local_10;
  int local_c;
  SCStr local_8 [4];


  ((SCStr *)((uint)&local_8))->int_allocRep("continue");

  iVar4 = (int)(thunk_FUN_10eb22a0(DAT_121a2180), 0);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(1);
  thunk_FUN_10df6f00((uint)&local_8);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(2);
  uVar5 = (undefined4)(thunk_FUN_10def290((uint)&local_78,iVar4 + 4), 0);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(3);
  thunk_FUN_105f5d20(uVar5);
  local_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTree);

  iStack_20 = (int)(0);
  iStack_1c = (int)(0);
  iStack_18 = (int)(0);
  local_14 = (undefined4 *)((undefined4 *)0x0);
  local_10 = (undefined4 *)((undefined4 *)0x0);

  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(5);
  uVar5 = (undefined4)(thunk_FUN_10605060((uint)&local_a4), 0);
  thunk_FUN_105f5df0(uVar5);
  puVar3 = (undefined4 *)(local_10);
  local_7c = (undefined4)(((uint)(*(unsigned short *)((char *)&local_7c + 1)) << 8 | (uint)(4)));
  puVar7 = (undefined4 *)(local_14);
  if ((undefined4 *)(local_14) != (undefined4 *)(0x0)) {
    for (;(undefined4 *)((puVar7)) != (undefined4 *)(puVar3); puVar7 = puVar7 + 8) {
      (**(code **)*puVar7)(0);
    }
    uVar6 = (uint)(local_c - (int)local_14 & 0xffffffe0);
    puVar7 = (undefined4 *)(local_14);
    if (0xfff < uVar6) {
      puVar7 = (undefined4 *)((undefined4 *)local_14[-1]);
      uVar6 = (uint)(uVar6 + 0x23);
      if (0x1f < (uint)((int)local_14 + (-4 - (int)puVar7))) goto LAB_10615045;
    }
    thunk_FUN_1148a50e(puVar7,uVar6);
    local_14 = (undefined4 *)((undefined4 *)0x0);
    local_10 = (undefined4 *)((undefined4 *)0x0);

  }
  iVar2 = (int)(iStack_1c);
  iVar4 = (int)(iStack_20);
  if (iStack_20 != 0) {
    for (; iVar4 != iVar2; iVar4 = iVar4 + 0x34) {
      thunk_FUN_105ff930();
    }
    uVar6 = (uint)(((iStack_18 - iStack_20) / 0x34) * 0x34);
    iVar4 = (int)(iStack_20);
    if (0xfff < uVar6) {
      iVar4 = (int)(*(int *)(iStack_20 + -4));
      uVar6 = (uint)(uVar6 + 0x23);
      if (0x1f < (iStack_20 - iVar4) - 4U) {
LAB_10615045:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar4,uVar6);
    iStack_20 = (int)(0);
    iStack_1c = (int)(0);
    iStack_18 = (int)(0);
  }
  local_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  thunk_FUN_10604700();
  thunk_FUN_106045d0();
  piVar1 = (int *)(local_48);
  local_a4[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(6);
  if ((int *)(local_48) != (int *)(0x0)) {

    local_48 = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)(local_50);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(7);
  if ((int *)(local_50) != (int *)(0x0)) {

    local_50 = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  thunk_FUN_10def0d0();
  piVar1 = (int *)(local_2c);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(8);
  if ((int *)(local_2c) != (int *)(0x0)) {

    local_2c = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)(local_34);
  local_7c = (undefined4)(((uint)(*(unsigned short *)((char *)&local_7c + 1)) << 8 | (uint)(9)));
  if ((int *)(local_34) != (int *)(0x0)) {

    local_34 = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))();
  }

  ((SCStr *)((uint)&local_8))->int_release();

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 106151e0; body size 3974 bytes.
#line 1 "ENTRY_106151e0"

undefined4 __stdcall FUN_106151e0(undefined4 param_1)

{
 try {
  int iVar1;
  undefined4 *puVar2;
  undefined **ppuVar3;
  char cVar4;
  undefined1 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  undefined1 local_4c4 [28];
  undefined1 local_4a8 [28];
  undefined1 local_48c [28];
  undefined1 local_470 [28];
  undefined1 local_454 [28];
  undefined1 local_438 [28];
  undefined1 local_41c [28];
  undefined1 local_400 [28];
  undefined1 local_3e4 [28];
  undefined1 local_3c8 [28];
  undefined1 local_3ac [28];
  undefined1 local_390 [28];
  undefined1 local_374 [28];
  undefined1 local_358 [28];
  undefined **local_33c [8];
  undefined **local_31c [8];
  undefined **local_2fc [8];
  undefined **local_2dc [8];
  undefined **local_2bc [8];
  undefined **local_29c [8];
  undefined1 local_27c [36];
  undefined4 local_258;
  int *local_254;
  undefined4 local_250;
  int *local_24c;
  undefined1 local_248 [36];
  undefined4 local_224;
  int *local_220;
  undefined4 local_21c;
  int *local_218;
  undefined1 local_214 [36];
  undefined4 local_1f0;
  int *local_1ec;
  undefined4 local_1e8;
  int *local_1e4;
  undefined1 local_1e0 [36];
  undefined4 local_1bc;
  int *local_1b8;
  undefined4 local_1b4;
  int *local_1b0;
  undefined1 local_1ac [36];
  undefined4 local_188;
  int *local_184;
  undefined4 local_180;
  int *local_17c;
  undefined1 local_178 [36];
  undefined4 local_154;
  int *local_150;
  undefined4 local_14c;
  int *local_148;
  undefined4 local_138;
  int *local_134;
  undefined4 local_130;
  int *local_12c;
  undefined4 local_11c;
  int *local_118;
  undefined4 local_114;
  int *local_110;
  undefined4 local_100;
  int *local_fc;
  undefined4 local_f8;
  int *local_f4;
  undefined4 local_e4;
  int *local_e0;
  undefined4 local_dc;
  int *local_d8;
  undefined4 local_c8;
  int *local_c4;
  undefined4 local_c0;
  int *local_bc;
  undefined4 local_ac;
  int *local_a8;
  undefined4 local_a4;
  int *local_a0;
  int *local_9c;
  int *local_98;
  int local_94;
  int *local_90;
  int *local_8c;
  undefined **local_88;
  undefined4 local_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  undefined4 *local_74;
  undefined4 *local_70;
  int local_6c;
  void *local_68;
  undefined1 *puStack_64;
  undefined4 local_60;
  undefined **local_5c;
  undefined4 local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  undefined4 *local_48;
  undefined4 *local_44;
  int local_40;
  int *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;


  puVar6 = (undefined4 *)((undefined4 *)thunk_FUN_101da4a0(&local_90,DAT_12126b84 ^ (uint)&local_5c), 0);

  piVar7 = (int *)((int *)(**(code **)(*(int *)*puVar6 + 0x3c))(&local_8c), 0);
  local_9c = (int *)((int *)*piVar7);
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(1);
  *piVar7 = (int)(0);
  local_3c = (int *)(local_9c);
  if ((int *)(local_9c) == (int *)(0x0)) {
    local_98 = (int *)((int *)0x0);
  }
  else {
    local_98 = (int *)((int *)(**(code **)(*local_9c + 0xc))(), 0);
  }
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(4);
  if ((int *)(local_8c) != (int *)(0x0)) {
    (**(code **)(*local_8c + 8))();
  }
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(6);
  if ((int *)(local_90) != (int *)(0x0)) {
    (**(code **)(*local_90 + 8))();
  }
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(5);
  ((SCStr *)((SCStr *)&local_38))->int_allocRep("minDuration");
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(7);
  uVar8 = (undefined4)(thunk_FUN_10dfd7b0(&local_38), 0);
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(8);
  thunk_FUN_10deee60(uVar8);
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(9);
  ((SCStr *)((SCStr *)&local_34))->int_allocRep("continue");
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(10);
  iVar9 = (int)(thunk_FUN_10eb22a0(DAT_121a2154), 0);
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0xb);
  thunk_FUN_10df6f00(&local_34);
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0xc);
  thunk_FUN_10def8c0((uint)&local_4a8,(uint)&local_3c8);
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0xd);
  uVar8 = (undefined4)(thunk_FUN_10def350((uint)&local_27c,iVar9 + 4), 0);
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0xe);
  thunk_FUN_105f5d20(uVar8);
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0xf);
  ((SCStr *)((SCStr *)&local_30))->int_allocRep("minDuration");
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x10);
  uVar8 = (undefined4)(thunk_FUN_10dfd7b0(&local_30), 0);
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x11);
  thunk_FUN_10deee60(uVar8);
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x12);
  ((SCStr *)((SCStr *)&local_2c))->int_allocRep("continue");
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x13);
  iVar9 = (int)(thunk_FUN_10eb22a0(DAT_121a2158), 0);
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x14);
  thunk_FUN_10df6f00(&local_2c);
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x15);
  thunk_FUN_10def8c0((uint)&local_48c,(uint)&local_3ac);
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x16);
  uVar8 = (undefined4)(thunk_FUN_10def350((uint)&local_178,iVar9 + 4), 0);
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x17);
  thunk_FUN_105f5d20(uVar8);
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x18);
  ((SCStr *)((SCStr *)&local_28))->int_allocRep("minDuration");
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x19);
  uVar8 = (undefined4)(thunk_FUN_10dfd7b0(&local_28), 0);
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x1a);
  thunk_FUN_10deee60(uVar8);
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x1b);
  ((SCStr *)((SCStr *)&local_24))->int_allocRep("appVersionCheck");
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x1c);
  uVar8 = (undefined4)(thunk_FUN_10dfba00(&local_24), 0);
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x1d);
  thunk_FUN_10deee60(uVar8);
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x1e);
  ((SCStr *)((SCStr *)&local_20))->int_allocRep("continue");
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x1f);
  iVar9 = (int)(thunk_FUN_10eb22a0(DAT_121a2158), 0);
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x20);
  thunk_FUN_10df6f00(&local_20);
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x21);
  thunk_FUN_10def8c0((uint)&local_4c4,(uint)&local_3e4);
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x22);
  thunk_FUN_10def940((uint)&local_470,(uint)&local_390);
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x23);
  uVar8 = (undefined4)(thunk_FUN_10def350((uint)&local_1ac,iVar9 + 4), 0);
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x24);
  thunk_FUN_105f5d20(uVar8);
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x25);
  ((SCStr *)((SCStr *)&local_1c))->int_allocRep("minDuration");
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x26);
  uVar8 = (undefined4)(thunk_FUN_10dfd7b0(&local_1c), 0);
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x27);
  thunk_FUN_10deee60(uVar8);
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x28);
  ((SCStr *)((SCStr *)&local_18))->int_allocRep("appVersionCheck");
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x29);
  uVar8 = (undefined4)(thunk_FUN_10dfba00(&local_18), 0);
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x2a);
  thunk_FUN_10deee60(uVar8);
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x2b);
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("continue");
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x2c);
  iVar9 = (int)(thunk_FUN_10eb22a0(DAT_121a215c), 0);
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x2d);
  thunk_FUN_10df6f00(&local_14);
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x2e);
  thunk_FUN_10def8c0((uint)&local_454,(uint)&local_358);
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x2f);
  thunk_FUN_10def940((uint)&local_438,(uint)&local_374);
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x30);
  uVar8 = (undefined4)(thunk_FUN_10def350((uint)&local_1e0,iVar9 + 4), 0);
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x31);
  thunk_FUN_105f5d20(uVar8);
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x32);
  ((SCStr *)((SCStr *)&local_10))->int_allocRep("appVersionCheckTimeout");
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x33);
  uVar8 = (undefined4)(thunk_FUN_10dfd7b0(&local_10), 0);
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x34);
  thunk_FUN_10deee60(uVar8);
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x35);
  ((SCStr *)((SCStr *)&local_c))->int_allocRep("continue");
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x36);
  iVar9 = (int)(thunk_FUN_10eb22a0(DAT_121a215c), 0);
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x37);
  thunk_FUN_10df6f00(&local_c);
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x38);
  thunk_FUN_10def8c0((uint)&local_41c,(uint)&local_400);
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x39);
  uVar8 = (undefined4)(thunk_FUN_10def350((uint)&local_214,iVar9 + 4), 0);
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x3a);
  thunk_FUN_105f5d20(uVar8);
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x3b);
  ((SCStr *)((SCStr *)&local_8))->int_allocRep("continue");
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x3c);
  iVar9 = (int)(thunk_FUN_10eb22a0(DAT_121a212c), 0);
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x3d);
  thunk_FUN_10df6f00(&local_8);
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x3e);
  uVar8 = (undefined4)(thunk_FUN_10def290((uint)&local_248,iVar9 + 4), 0);
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x3f);
  thunk_FUN_105f5d20(uVar8);
  local_5c = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTree);

  iStack_54 = (int)(0);
  iStack_50 = (int)(0);
  iStack_4c = (int)(0);
  local_48 = (undefined4 *)((undefined4 *)0x0);
  local_44 = (undefined4 *)((undefined4 *)0x0);

  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x41);
  thunk_FUN_10eb41c0();
  ppuVar3 = (undefined **)(local_5c);
  cVar4 = (char)(thunk_FUN_10eac8a0((uint)&local_2dc), 0);
  piVar7 = (int *)((int *)(*(code *)ppuVar3[3])(cVar4 == '\0'), 0);
  thunk_FUN_10eb41c0();
  iVar9 = (int)(*piVar7);
  uVar5 = (undefined1)(thunk_FUN_10eac850((uint)&local_2fc), 0);
  piVar7 = (int *)((int *)(**(code **)(iVar9 + 0x10))(uVar5), 0);
  local_88 = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTree);
  local_74 = (undefined4 *)((undefined4 *)0x0);

  iStack_80 = (int)(0);
  iStack_7c = (int)(0);
  iStack_78 = (int)(0);
  local_70 = (undefined4 *)((undefined4 *)0x0);

  local_3c = (int *)((int *)((uint)(*(unsigned short *)((char *)&local_3c + 1)) << 8 | (uint)((int *)(local_3c) == (int *)(0x0))));
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x42);
  piVar10 = (int *)((int *)thunk_FUN_10619290(local_3c,(uint)&local_2bc), 0);
  iVar9 = (int)(*piVar10);
  uVar8 = (undefined4)((**(code **)(*piVar7 + 0x14))((uint)&local_29c), 0);
  piVar7 = (int *)((int *)(**(code **)(iVar9 + 0x10))(*(undefined1 *)(local_94 + 0xe9),uVar8), 0);
  thunk_FUN_10eb41c0();
  iVar9 = (int)(*piVar7);
  uVar5 = (undefined1)(thunk_FUN_10cf5140((uint)&local_31c), 0);
  piVar7 = (int *)((int *)(**(code **)(iVar9 + 0x10))(uVar5), 0);
  uVar8 = (undefined4)((**(code **)(*piVar7 + 0x14))((uint)&local_33c), 0);
  thunk_FUN_105f5df0(uVar8);
  puVar2 = (undefined4 *)(local_70);
  local_60 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_60 + 1)) << 8 | (uint)(0x41)));
  puVar6 = (undefined4 *)(local_74);
  if ((undefined4 *)(local_74) != (undefined4 *)(0x0)) {
    for (;(undefined4 *)((puVar6)) != (undefined4 *)(puVar2); puVar6 = puVar6 + 8) {
      (**(code **)*puVar6)(0);
    }
    uVar11 = (uint)(local_6c - (int)local_74 & 0xffffffe0);
    puVar6 = (undefined4 *)(local_74);
    if (0xfff < uVar11) {
      puVar6 = (undefined4 *)((undefined4 *)local_74[-1]);
      uVar11 = (uint)(uVar11 + 0x23);
      if (0x1f < (uint)((int)local_74 + (-4 - (int)puVar6))) goto LAB_10615995;
    }
    thunk_FUN_1148a50e(puVar6,uVar11);
    local_74 = (undefined4 *)((undefined4 *)0x0);
    local_70 = (undefined4 *)((undefined4 *)0x0);

  }
  iVar1 = (int)(iStack_7c);
  iVar9 = (int)(iStack_80);
  if (iStack_80 != 0) {
    for (; iVar9 != iVar1; iVar9 = iVar9 + 0x34) {
      thunk_FUN_105ff930();
    }
    uVar11 = (uint)(((iStack_78 - iStack_80) / 0x34) * 0x34);
    iVar9 = (int)(iStack_80);
    if (0xfff < uVar11) {
      iVar9 = (int)(*(int *)(iStack_80 + -4));
      uVar11 = (uint)(uVar11 + 0x23);
      if (0x1f < (iStack_80 - iVar9) - 4U) goto LAB_10615995;
    }
    thunk_FUN_1148a50e(iVar9,uVar11);
    iStack_80 = (int)(0);
    iStack_7c = (int)(0);
    iStack_78 = (int)(0);
  }
  puVar2 = (undefined4 *)(local_44);
  local_88 = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  local_60 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_60 + 1)) << 8 | (uint)(0x40)));
  puVar6 = (undefined4 *)(local_48);
  if ((undefined4 *)(local_48) != (undefined4 *)(0x0)) {
    for (;(undefined4 *)((puVar6)) != (undefined4 *)(puVar2); puVar6 = puVar6 + 8) {
      (**(code **)*puVar6)(0);
    }
    uVar11 = (uint)(local_40 - (int)local_48 & 0xffffffe0);
    puVar6 = (undefined4 *)(local_48);
    if (0xfff < uVar11) {
      puVar6 = (undefined4 *)((undefined4 *)local_48[-1]);
      uVar11 = (uint)(uVar11 + 0x23);
      if (0x1f < (uint)((int)local_48 + (-4 - (int)puVar6))) goto LAB_10615995;
    }
    thunk_FUN_1148a50e(puVar6,uVar11);
    local_48 = (undefined4 *)((undefined4 *)0x0);
    local_44 = (undefined4 *)((undefined4 *)0x0);

  }
  iVar1 = (int)(iStack_50);
  iVar9 = (int)(iStack_54);
  if (iStack_54 != 0) {
    for (; iVar9 != iVar1; iVar9 = iVar9 + 0x34) {
      thunk_FUN_105ff930();
    }
    uVar11 = (uint)(((iStack_4c - iStack_54) / 0x34) * 0x34);
    iVar9 = (int)(iStack_54);
    if (0xfff < uVar11) {
      iVar9 = (int)(*(int *)(iStack_54 + -4));
      uVar11 = (uint)(uVar11 + 0x23);
      if (0x1f < (iStack_54 - iVar9) - 4U) {
LAB_10615995:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar9,uVar11);
    iStack_54 = (int)(0);
    iStack_50 = (int)(0);
    iStack_4c = (int)(0);
  }
  local_5c = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  thunk_FUN_10604700();
  thunk_FUN_106045d0();
  piVar7 = (int *)(local_218);
  local_2bc[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x43);
  if ((int *)(local_218) != (int *)(0x0)) {

    local_218 = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  piVar7 = (int *)(local_220);
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x44);
  if ((int *)(local_220) != (int *)(0x0)) {

    local_220 = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  thunk_FUN_10def0d0();
  piVar7 = (int *)(local_12c);
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x45);
  if ((int *)(local_12c) != (int *)(0x0)) {

    local_12c = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  piVar7 = (int *)(local_134);
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x46);
  if ((int *)(local_134) != (int *)(0x0)) {

    local_134 = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x47);
  ((SCStr *)((SCStr *)&local_8))->int_release();

  thunk_FUN_10604700();
  thunk_FUN_106045d0();
  piVar7 = (int *)(local_1e4);
  local_2dc[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x48);
  if ((int *)(local_1e4) != (int *)(0x0)) {

    local_1e4 = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  piVar7 = (int *)(local_1ec);
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x49);
  if ((int *)(local_1ec) != (int *)(0x0)) {

    local_1ec = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  thunk_FUN_10def0d0();
  piVar7 = (int *)(local_a0);
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x4a);
  if ((int *)(local_a0) != (int *)(0x0)) {

    local_a0 = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  piVar7 = (int *)(local_a8);
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x4b);
  if ((int *)(local_a8) != (int *)(0x0)) {

    local_a8 = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x4c);
  ((SCStr *)((SCStr *)&local_c))->int_release();

  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  thunk_FUN_10def0d0();
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x4d);
  ((SCStr *)((SCStr *)&local_10))->int_release();

  thunk_FUN_10604700();
  thunk_FUN_106045d0();
  piVar7 = (int *)(local_1b0);
  local_2fc[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x4e);
  if ((int *)(local_1b0) != (int *)(0x0)) {

    local_1b0 = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  piVar7 = (int *)(local_1b8);
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x4f);
  if ((int *)(local_1b8) != (int *)(0x0)) {

    local_1b8 = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  thunk_FUN_10def0d0();
  piVar7 = (int *)(local_110);
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x50);
  if ((int *)(local_110) != (int *)(0x0)) {

    local_110 = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  piVar7 = (int *)(local_118);
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x51);
  if ((int *)(local_118) != (int *)(0x0)) {

    local_118 = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x52);
  ((SCStr *)((SCStr *)&local_14))->int_release();

  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  thunk_FUN_10def0d0();
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x53);
  ((SCStr *)((SCStr *)&local_18))->int_release();

  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  thunk_FUN_10def0d0();
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x54);
  ((SCStr *)((SCStr *)&local_1c))->int_release();

  thunk_FUN_10604700();
  thunk_FUN_106045d0();
  piVar7 = (int *)(local_17c);
  local_29c[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x55);
  if ((int *)(local_17c) != (int *)(0x0)) {

    local_17c = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  piVar7 = (int *)(local_184);
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x56);
  if ((int *)(local_184) != (int *)(0x0)) {

    local_184 = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  thunk_FUN_10def0d0();
  piVar7 = (int *)(local_f4);
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x57);
  if ((int *)(local_f4) != (int *)(0x0)) {

    local_f4 = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  piVar7 = (int *)(local_fc);
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x58);
  if ((int *)(local_fc) != (int *)(0x0)) {

    local_fc = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x59);
  ((SCStr *)((SCStr *)&local_20))->int_release();

  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  thunk_FUN_10def0d0();
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x5a);
  ((SCStr *)((SCStr *)&local_24))->int_release();

  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  thunk_FUN_10def0d0();
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x5b);
  ((SCStr *)((SCStr *)&local_28))->int_release();

  thunk_FUN_10604700();
  thunk_FUN_106045d0();
  piVar7 = (int *)(local_148);
  local_31c[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x5c);
  if ((int *)(local_148) != (int *)(0x0)) {

    local_148 = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  piVar7 = (int *)(local_150);
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x5d);
  if ((int *)(local_150) != (int *)(0x0)) {

    local_150 = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  thunk_FUN_10def0d0();
  piVar7 = (int *)(local_d8);
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x5e);
  if ((int *)(local_d8) != (int *)(0x0)) {

    local_d8 = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  piVar7 = (int *)(local_e0);
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x5f);
  if ((int *)(local_e0) != (int *)(0x0)) {

    local_e0 = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x60);
  ((SCStr *)((SCStr *)&local_2c))->int_release();

  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  thunk_FUN_10def0d0();
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x61);
  ((SCStr *)((SCStr *)&local_30))->int_release();

  thunk_FUN_10604700();
  thunk_FUN_106045d0();
  piVar7 = (int *)(local_24c);
  local_33c[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x62);
  if ((int *)(local_24c) != (int *)(0x0)) {

    local_24c = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  piVar7 = (int *)(local_254);
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(99);
  if ((int *)(local_254) != (int *)(0x0)) {

    local_254 = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  thunk_FUN_10def0d0();
  piVar7 = (int *)(local_bc);
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(100);
  if ((int *)(local_bc) != (int *)(0x0)) {

    local_bc = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  piVar7 = (int *)(local_c4);
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x65);
  if ((int *)(local_c4) != (int *)(0x0)) {

    local_c4 = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  *(unsigned char*)((char *)&local_60 + 0) = (unsigned char)(0x66);
  ((SCStr *)((SCStr *)&local_34))->int_release();

  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  thunk_FUN_10def0d0();
  local_60 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_60 + 1)) << 8 | (uint)(0x67)));
  ((SCStr *)((SCStr *)&local_38))->int_release();


  if ((int *)(local_98) != (int *)(0x0)) {
    (**(code **)(*local_98 + 8))();
  }

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 10616550; body size 941 bytes.
#line 1 "ENTRY_10616550"

undefined4 __stdcall FUN_10616550(undefined4 param_1)

{
 try {
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined **local_118 [8];
  undefined **local_f8 [8];
  undefined1 local_d8 [36];
  undefined4 local_b4;
  int *local_b0;
  undefined4 local_ac;
  int *local_a8;
  undefined1 local_a4 [36];
  undefined4 local_80;
  int *local_7c;
  undefined4 local_78;
  int *local_74;
  void *local_70;
  undefined1 *puStack_6c;
  undefined4 local_68;
  undefined1 local_64 [12];
  undefined4 local_58;
  int *local_54;
  undefined4 local_50;
  int *local_4c;
  undefined4 local_3c;
  int *local_38;
  undefined4 local_34;
  int *local_30;
  undefined **local_2c;
  undefined4 local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  int local_10;
  SCStr local_c [4];
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84 ^ (uint)(uint)&local_64);

  ((SCStr *)((uint)&local_c))->int_allocRep("done");

  iVar4 = (int)(thunk_FUN_10eb1dc0(uVar3), 0);
  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(1);
  thunk_FUN_10df6f00((uint)&local_c);
  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(2);
  uVar5 = (undefined4)(thunk_FUN_10def290((uint)&local_d8,iVar4 + 4), 0);
  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(3);
  thunk_FUN_105f5d20(uVar5);
  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(4);
  ((SCStr *)((SCStr *)&local_8))->int_allocRep("differentProduct");
  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(5);
  iVar4 = (int)(thunk_FUN_10eb22a0(DAT_121a2164), 0);
  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(6);
  thunk_FUN_10df6f00(&local_8);
  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(7);
  uVar5 = (undefined4)(thunk_FUN_10def290((uint)&local_a4,iVar4 + 4), 0);
  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(8);
  thunk_FUN_105f5d20(uVar5);
  local_2c = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTree);

  iStack_24 = (int)(0);
  iStack_20 = (int)(0);
  iStack_1c = (int)(0);
  local_18 = (undefined4 *)((undefined4 *)0x0);
  local_14 = (undefined4 *)((undefined4 *)0x0);

  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(10);
  piVar6 = (int *)((int *)thunk_FUN_10605060((uint)&local_f8), 0);
  uVar5 = (undefined4)((**(code **)(*piVar6 + 8))((uint)&local_118), 0);
  thunk_FUN_105f5df0(uVar5);
  puVar2 = (undefined4 *)(local_14);
  local_68 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_68 + 1)) << 8 | (uint)(9)));
  puVar7 = (undefined4 *)(local_18);
  if ((undefined4 *)(local_18) != (undefined4 *)(0x0)) {
    for (;(undefined4 *)((puVar7)) != (undefined4 *)(puVar2); puVar7 = puVar7 + 8) {
      (**(code **)*puVar7)(0);
    }
    uVar3 = (uint)(local_10 - (int)local_18 & 0xffffffe0);
    puVar7 = (undefined4 *)(local_18);
    if (0xfff < uVar3) {
      puVar7 = (undefined4 *)((undefined4 *)local_18[-1]);
      uVar3 = (uint)(uVar3 + 0x23);
      if (0x1f < (uint)((int)local_18 + (-4 - (int)puVar7))) goto LAB_10616735;
    }
    thunk_FUN_1148a50e(puVar7,uVar3);
    local_18 = (undefined4 *)((undefined4 *)0x0);
    local_14 = (undefined4 *)((undefined4 *)0x0);

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
LAB_10616735:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar4,uVar3);
    iStack_24 = (int)(0);
    iStack_20 = (int)(0);
    iStack_1c = (int)(0);
  }
  local_2c = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  thunk_FUN_10604700();
  thunk_FUN_106045d0();
  piVar6 = (int *)(local_74);
  local_f8[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(0xb);
  if ((int *)(local_74) != (int *)(0x0)) {

    local_74 = (int *)((int *)0x0);
    (**(code **)(*piVar6 + 8))();
  }
  piVar6 = (int *)(local_7c);
  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(0xc);
  if ((int *)(local_7c) != (int *)(0x0)) {

    local_7c = (int *)((int *)0x0);
    (**(code **)(*piVar6 + 8))();
  }
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  thunk_FUN_10def0d0();
  piVar6 = (int *)(local_30);
  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(0xd);
  if ((int *)(local_30) != (int *)(0x0)) {

    local_30 = (int *)((int *)0x0);
    (**(code **)(*piVar6 + 8))();
  }
  piVar6 = (int *)(local_38);
  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(0xe);
  if ((int *)(local_38) != (int *)(0x0)) {

    local_38 = (int *)((int *)0x0);
    (**(code **)(*piVar6 + 8))();
  }
  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(0xf);
  ((SCStr *)((SCStr *)&local_8))->int_release();

  thunk_FUN_10604700();
  thunk_FUN_106045d0();
  piVar6 = (int *)(local_a8);
  local_118[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(0x10);
  if ((int *)(local_a8) != (int *)(0x0)) {

    local_a8 = (int *)((int *)0x0);
    (**(code **)(*piVar6 + 8))();
  }
  piVar6 = (int *)(local_b0);
  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(0x11);
  if ((int *)(local_b0) != (int *)(0x0)) {

    local_b0 = (int *)((int *)0x0);
    (**(code **)(*piVar6 + 8))();
  }
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  thunk_FUN_10def0d0();
  piVar6 = (int *)(local_4c);
  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(0x12);
  if ((int *)(local_4c) != (int *)(0x0)) {

    local_4c = (int *)((int *)0x0);
    (**(code **)(*piVar6 + 8))();
  }
  piVar6 = (int *)(local_54);
  local_68 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_68 + 1)) << 8 | (uint)(0x13)));
  if ((int *)(local_54) != (int *)(0x0)) {

    local_54 = (int *)((int *)0x0);
    (**(code **)(*piVar6 + 8))();
  }

  ((SCStr *)((uint)&local_c))->int_release();

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 106169f0; body size 622 bytes.
#line 1 "ENTRY_106169f0"

undefined4 __stdcall FUN_106169f0(undefined4 param_1)

{
 try {
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined **local_a4 [8];
  void *local_84;
  undefined1 *puStack_80;
  undefined4 local_7c;
  undefined1 local_78 [36];
  undefined4 local_54;
  int *local_50;
  undefined4 local_4c;
  int *local_48;
  undefined4 local_38;
  int *local_34;
  undefined4 local_30;
  int *local_2c;
  undefined **local_28;
  undefined4 local_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  undefined4 *local_14;
  undefined4 *local_10;
  int local_c;
  SCStr local_8 [4];


  ((SCStr *)((uint)&local_8))->int_allocRep("continue");

  iVar4 = (int)(thunk_FUN_10eb22a0(DAT_121a2128), 0);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(1);
  thunk_FUN_10df6f00((uint)&local_8);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(2);
  uVar5 = (undefined4)(thunk_FUN_10def290((uint)&local_78,iVar4 + 4), 0);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(3);
  thunk_FUN_105f5d20(uVar5);
  local_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTree);

  iStack_20 = (int)(0);
  iStack_1c = (int)(0);
  iStack_18 = (int)(0);
  local_14 = (undefined4 *)((undefined4 *)0x0);
  local_10 = (undefined4 *)((undefined4 *)0x0);

  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(5);
  uVar5 = (undefined4)(thunk_FUN_10605060((uint)&local_a4), 0);
  thunk_FUN_105f5df0(uVar5);
  puVar3 = (undefined4 *)(local_10);
  local_7c = (undefined4)(((uint)(*(unsigned short *)((char *)&local_7c + 1)) << 8 | (uint)(4)));
  puVar7 = (undefined4 *)(local_14);
  if ((undefined4 *)(local_14) != (undefined4 *)(0x0)) {
    for (;(undefined4 *)((puVar7)) != (undefined4 *)(puVar3); puVar7 = puVar7 + 8) {
      (**(code **)*puVar7)(0);
    }
    uVar6 = (uint)(local_c - (int)local_14 & 0xffffffe0);
    puVar7 = (undefined4 *)(local_14);
    if (0xfff < uVar6) {
      puVar7 = (undefined4 *)((undefined4 *)local_14[-1]);
      uVar6 = (uint)(uVar6 + 0x23);
      if (0x1f < (uint)((int)local_14 + (-4 - (int)puVar7))) goto LAB_10616b65;
    }
    thunk_FUN_1148a50e(puVar7,uVar6);
    local_14 = (undefined4 *)((undefined4 *)0x0);
    local_10 = (undefined4 *)((undefined4 *)0x0);

  }
  iVar2 = (int)(iStack_1c);
  iVar4 = (int)(iStack_20);
  if (iStack_20 != 0) {
    for (; iVar4 != iVar2; iVar4 = iVar4 + 0x34) {
      thunk_FUN_105ff930();
    }
    uVar6 = (uint)(((iStack_18 - iStack_20) / 0x34) * 0x34);
    iVar4 = (int)(iStack_20);
    if (0xfff < uVar6) {
      iVar4 = (int)(*(int *)(iStack_20 + -4));
      uVar6 = (uint)(uVar6 + 0x23);
      if (0x1f < (iStack_20 - iVar4) - 4U) {
LAB_10616b65:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar4,uVar6);
    iStack_20 = (int)(0);
    iStack_1c = (int)(0);
    iStack_18 = (int)(0);
  }
  local_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  thunk_FUN_10604700();
  thunk_FUN_106045d0();
  piVar1 = (int *)(local_48);
  local_a4[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(6);
  if ((int *)(local_48) != (int *)(0x0)) {

    local_48 = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)(local_50);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(7);
  if ((int *)(local_50) != (int *)(0x0)) {

    local_50 = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  thunk_FUN_10def0d0();
  piVar1 = (int *)(local_2c);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(8);
  if ((int *)(local_2c) != (int *)(0x0)) {

    local_2c = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)(local_34);
  local_7c = (undefined4)(((uint)(*(unsigned short *)((char *)&local_7c + 1)) << 8 | (uint)(9)));
  if ((int *)(local_34) != (int *)(0x0)) {

    local_34 = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))();
  }

  ((SCStr *)((uint)&local_8))->int_release();

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 10616d00; body size 622 bytes.
#line 1 "ENTRY_10616d00"

undefined4 __stdcall FUN_10616d00(undefined4 param_1)

{
 try {
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined **local_a4 [8];
  void *local_84;
  undefined1 *puStack_80;
  undefined4 local_7c;
  undefined1 local_78 [36];
  undefined4 local_54;
  int *local_50;
  undefined4 local_4c;
  int *local_48;
  undefined4 local_38;
  int *local_34;
  undefined4 local_30;
  int *local_2c;
  undefined **local_28;
  undefined4 local_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  undefined4 *local_14;
  undefined4 *local_10;
  int local_c;
  SCStr local_8 [4];


  ((SCStr *)((uint)&local_8))->int_allocRep("continue");

  iVar4 = (int)(thunk_FUN_10eb22a0(DAT_121a2190), 0);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(1);
  thunk_FUN_10df6f00((uint)&local_8);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(2);
  uVar5 = (undefined4)(thunk_FUN_10def290((uint)&local_78,iVar4 + 4), 0);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(3);
  thunk_FUN_105f5d20(uVar5);
  local_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTree);

  iStack_20 = (int)(0);
  iStack_1c = (int)(0);
  iStack_18 = (int)(0);
  local_14 = (undefined4 *)((undefined4 *)0x0);
  local_10 = (undefined4 *)((undefined4 *)0x0);

  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(5);
  uVar5 = (undefined4)(thunk_FUN_10605060((uint)&local_a4), 0);
  thunk_FUN_105f5df0(uVar5);
  puVar3 = (undefined4 *)(local_10);
  local_7c = (undefined4)(((uint)(*(unsigned short *)((char *)&local_7c + 1)) << 8 | (uint)(4)));
  puVar7 = (undefined4 *)(local_14);
  if ((undefined4 *)(local_14) != (undefined4 *)(0x0)) {
    for (;(undefined4 *)((puVar7)) != (undefined4 *)(puVar3); puVar7 = puVar7 + 8) {
      (**(code **)*puVar7)(0);
    }
    uVar6 = (uint)(local_c - (int)local_14 & 0xffffffe0);
    puVar7 = (undefined4 *)(local_14);
    if (0xfff < uVar6) {
      puVar7 = (undefined4 *)((undefined4 *)local_14[-1]);
      uVar6 = (uint)(uVar6 + 0x23);
      if (0x1f < (uint)((int)local_14 + (-4 - (int)puVar7))) goto LAB_10616e75;
    }
    thunk_FUN_1148a50e(puVar7,uVar6);
    local_14 = (undefined4 *)((undefined4 *)0x0);
    local_10 = (undefined4 *)((undefined4 *)0x0);

  }
  iVar2 = (int)(iStack_1c);
  iVar4 = (int)(iStack_20);
  if (iStack_20 != 0) {
    for (; iVar4 != iVar2; iVar4 = iVar4 + 0x34) {
      thunk_FUN_105ff930();
    }
    uVar6 = (uint)(((iStack_18 - iStack_20) / 0x34) * 0x34);
    iVar4 = (int)(iStack_20);
    if (0xfff < uVar6) {
      iVar4 = (int)(*(int *)(iStack_20 + -4));
      uVar6 = (uint)(uVar6 + 0x23);
      if (0x1f < (iStack_20 - iVar4) - 4U) {
LAB_10616e75:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar4,uVar6);
    iStack_20 = (int)(0);
    iStack_1c = (int)(0);
    iStack_18 = (int)(0);
  }
  local_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  thunk_FUN_10604700();
  thunk_FUN_106045d0();
  piVar1 = (int *)(local_48);
  local_a4[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(6);
  if ((int *)(local_48) != (int *)(0x0)) {

    local_48 = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)(local_50);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(7);
  if ((int *)(local_50) != (int *)(0x0)) {

    local_50 = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  thunk_FUN_10def0d0();
  piVar1 = (int *)(local_2c);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(8);
  if ((int *)(local_2c) != (int *)(0x0)) {

    local_2c = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)(local_34);
  local_7c = (undefined4)(((uint)(*(unsigned short *)((char *)&local_7c + 1)) << 8 | (uint)(9)));
  if ((int *)(local_34) != (int *)(0x0)) {

    local_34 = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))();
  }

  ((SCStr *)((uint)&local_8))->int_release();

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 10617010; body size 932 bytes.
#line 1 "ENTRY_10617010"

undefined4 __stdcall FUN_10617010(undefined4 param_1)

{
 try {
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined **local_118 [8];
  undefined **local_f8 [8];
  undefined1 local_d8 [36];
  undefined4 local_b4;
  int *local_b0;
  undefined4 local_ac;
  int *local_a8;
  undefined1 local_a4 [36];
  undefined4 local_80;
  int *local_7c;
  undefined4 local_78;
  int *local_74;
  void *local_70;
  undefined1 *puStack_6c;
  undefined4 local_68;
  undefined1 local_64 [12];
  undefined4 local_58;
  int *local_54;
  undefined4 local_50;
  int *local_4c;
  undefined4 local_3c;
  int *local_38;
  undefined4 local_34;
  int *local_30;
  undefined **local_2c;
  undefined4 local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  int local_10;
  SCStr local_c [4];
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84 ^ (uint)(uint)&local_64);

  ((SCStr *)((uint)&local_c))->int_allocRep("continue");

  iVar4 = (int)(thunk_FUN_10eb1dc0(uVar3), 0);
  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(1);
  thunk_FUN_10df6f00((uint)&local_c);
  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(2);
  uVar5 = (undefined4)(thunk_FUN_10def290((uint)&local_d8,iVar4 + 4), 0);
  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(3);
  thunk_FUN_105f5d20(uVar5);
  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(4);
  ((SCStr *)((SCStr *)&local_8))->int_allocRep("done");
  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(5);
  iVar4 = (int)(thunk_FUN_10eb1dc0(), 0);
  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(6);
  thunk_FUN_10df6f00(&local_8);
  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(7);
  uVar5 = (undefined4)(thunk_FUN_10def290((uint)&local_a4,iVar4 + 4), 0);
  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(8);
  thunk_FUN_105f5d20(uVar5);
  local_2c = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTree);

  iStack_24 = (int)(0);
  iStack_20 = (int)(0);
  iStack_1c = (int)(0);
  local_18 = (undefined4 *)((undefined4 *)0x0);
  local_14 = (undefined4 *)((undefined4 *)0x0);

  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(10);
  piVar6 = (int *)((int *)thunk_FUN_10605060((uint)&local_f8), 0);
  uVar5 = (undefined4)((**(code **)(*piVar6 + 8))((uint)&local_118), 0);
  thunk_FUN_105f5df0(uVar5);
  puVar2 = (undefined4 *)(local_14);
  local_68 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_68 + 1)) << 8 | (uint)(9)));
  puVar7 = (undefined4 *)(local_18);
  if ((undefined4 *)(local_18) != (undefined4 *)(0x0)) {
    for (;(undefined4 *)((puVar7)) != (undefined4 *)(puVar2); puVar7 = puVar7 + 8) {
      (**(code **)*puVar7)(0);
    }
    uVar3 = (uint)(local_10 - (int)local_18 & 0xffffffe0);
    puVar7 = (undefined4 *)(local_18);
    if (0xfff < uVar3) {
      puVar7 = (undefined4 *)((undefined4 *)local_18[-1]);
      uVar3 = (uint)(uVar3 + 0x23);
      if (0x1f < (uint)((int)local_18 + (-4 - (int)puVar7))) goto LAB_106171ec;
    }
    thunk_FUN_1148a50e(puVar7,uVar3);
    local_18 = (undefined4 *)((undefined4 *)0x0);
    local_14 = (undefined4 *)((undefined4 *)0x0);

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
LAB_106171ec:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar4,uVar3);
    iStack_24 = (int)(0);
    iStack_20 = (int)(0);
    iStack_1c = (int)(0);
  }
  local_2c = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  thunk_FUN_10604700();
  thunk_FUN_106045d0();
  piVar6 = (int *)(local_74);
  local_f8[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(0xb);
  if ((int *)(local_74) != (int *)(0x0)) {

    local_74 = (int *)((int *)0x0);
    (**(code **)(*piVar6 + 8))();
  }
  piVar6 = (int *)(local_7c);
  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(0xc);
  if ((int *)(local_7c) != (int *)(0x0)) {

    local_7c = (int *)((int *)0x0);
    (**(code **)(*piVar6 + 8))();
  }
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  thunk_FUN_10def0d0();
  piVar6 = (int *)(local_30);
  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(0xd);
  if ((int *)(local_30) != (int *)(0x0)) {

    local_30 = (int *)((int *)0x0);
    (**(code **)(*piVar6 + 8))();
  }
  piVar6 = (int *)(local_38);
  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(0xe);
  if ((int *)(local_38) != (int *)(0x0)) {

    local_38 = (int *)((int *)0x0);
    (**(code **)(*piVar6 + 8))();
  }
  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(0xf);
  ((SCStr *)((SCStr *)&local_8))->int_release();

  thunk_FUN_10604700();
  thunk_FUN_106045d0();
  piVar6 = (int *)(local_a8);
  local_118[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(0x10);
  if ((int *)(local_a8) != (int *)(0x0)) {

    local_a8 = (int *)((int *)0x0);
    (**(code **)(*piVar6 + 8))();
  }
  piVar6 = (int *)(local_b0);
  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(0x11);
  if ((int *)(local_b0) != (int *)(0x0)) {

    local_b0 = (int *)((int *)0x0);
    (**(code **)(*piVar6 + 8))();
  }
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  thunk_FUN_10def0d0();
  piVar6 = (int *)(local_4c);
  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(0x12);
  if ((int *)(local_4c) != (int *)(0x0)) {

    local_4c = (int *)((int *)0x0);
    (**(code **)(*piVar6 + 8))();
  }
  piVar6 = (int *)(local_54);
  local_68 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_68 + 1)) << 8 | (uint)(0x13)));
  if ((int *)(local_54) != (int *)(0x0)) {

    local_54 = (int *)((int *)0x0);
    (**(code **)(*piVar6 + 8))();
  }

  ((SCStr *)((uint)&local_c))->int_release();

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 106174a0; body size 622 bytes.
#line 1 "ENTRY_106174a0"

undefined4 __stdcall FUN_106174a0(undefined4 param_1)

{
 try {
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined **local_a4 [8];
  void *local_84;
  undefined1 *puStack_80;
  undefined4 local_7c;
  undefined1 local_78 [36];
  undefined4 local_54;
  int *local_50;
  undefined4 local_4c;
  int *local_48;
  undefined4 local_38;
  int *local_34;
  undefined4 local_30;
  int *local_2c;
  undefined **local_28;
  undefined4 local_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  undefined4 *local_14;
  undefined4 *local_10;
  int local_c;
  SCStr local_8 [4];


  ((SCStr *)((uint)&local_8))->int_allocRep("continue");

  iVar4 = (int)(thunk_FUN_10eb22a0(DAT_121a2148), 0);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(1);
  thunk_FUN_10df6f00((uint)&local_8);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(2);
  uVar5 = (undefined4)(thunk_FUN_10def290((uint)&local_78,iVar4 + 4), 0);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(3);
  thunk_FUN_105f5d20(uVar5);
  local_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTree);

  iStack_20 = (int)(0);
  iStack_1c = (int)(0);
  iStack_18 = (int)(0);
  local_14 = (undefined4 *)((undefined4 *)0x0);
  local_10 = (undefined4 *)((undefined4 *)0x0);

  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(5);
  uVar5 = (undefined4)(thunk_FUN_10605060((uint)&local_a4), 0);
  thunk_FUN_105f5df0(uVar5);
  puVar3 = (undefined4 *)(local_10);
  local_7c = (undefined4)(((uint)(*(unsigned short *)((char *)&local_7c + 1)) << 8 | (uint)(4)));
  puVar7 = (undefined4 *)(local_14);
  if ((undefined4 *)(local_14) != (undefined4 *)(0x0)) {
    for (;(undefined4 *)((puVar7)) != (undefined4 *)(puVar3); puVar7 = puVar7 + 8) {
      (**(code **)*puVar7)(0);
    }
    uVar6 = (uint)(local_c - (int)local_14 & 0xffffffe0);
    puVar7 = (undefined4 *)(local_14);
    if (0xfff < uVar6) {
      puVar7 = (undefined4 *)((undefined4 *)local_14[-1]);
      uVar6 = (uint)(uVar6 + 0x23);
      if (0x1f < (uint)((int)local_14 + (-4 - (int)puVar7))) goto LAB_10617615;
    }
    thunk_FUN_1148a50e(puVar7,uVar6);
    local_14 = (undefined4 *)((undefined4 *)0x0);
    local_10 = (undefined4 *)((undefined4 *)0x0);

  }
  iVar2 = (int)(iStack_1c);
  iVar4 = (int)(iStack_20);
  if (iStack_20 != 0) {
    for (; iVar4 != iVar2; iVar4 = iVar4 + 0x34) {
      thunk_FUN_105ff930();
    }
    uVar6 = (uint)(((iStack_18 - iStack_20) / 0x34) * 0x34);
    iVar4 = (int)(iStack_20);
    if (0xfff < uVar6) {
      iVar4 = (int)(*(int *)(iStack_20 + -4));
      uVar6 = (uint)(uVar6 + 0x23);
      if (0x1f < (iStack_20 - iVar4) - 4U) {
LAB_10617615:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar4,uVar6);
    iStack_20 = (int)(0);
    iStack_1c = (int)(0);
    iStack_18 = (int)(0);
  }
  local_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  thunk_FUN_10604700();
  thunk_FUN_106045d0();
  piVar1 = (int *)(local_48);
  local_a4[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(6);
  if ((int *)(local_48) != (int *)(0x0)) {

    local_48 = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)(local_50);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(7);
  if ((int *)(local_50) != (int *)(0x0)) {

    local_50 = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  thunk_FUN_10def0d0();
  piVar1 = (int *)(local_2c);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(8);
  if ((int *)(local_2c) != (int *)(0x0)) {

    local_2c = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)(local_34);
  local_7c = (undefined4)(((uint)(*(unsigned short *)((char *)&local_7c + 1)) << 8 | (uint)(9)));
  if ((int *)(local_34) != (int *)(0x0)) {

    local_34 = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))();
  }

  ((SCStr *)((uint)&local_8))->int_release();

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 106177b0; body size 622 bytes.
#line 1 "ENTRY_106177b0"

undefined4 __stdcall FUN_106177b0(undefined4 param_1)

{
 try {
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined **local_a4 [8];
  void *local_84;
  undefined1 *puStack_80;
  undefined4 local_7c;
  undefined1 local_78 [36];
  undefined4 local_54;
  int *local_50;
  undefined4 local_4c;
  int *local_48;
  undefined4 local_38;
  int *local_34;
  undefined4 local_30;
  int *local_2c;
  undefined **local_28;
  undefined4 local_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  undefined4 *local_14;
  undefined4 *local_10;
  int local_c;
  SCStr local_8 [4];


  ((SCStr *)((uint)&local_8))->int_allocRep("continue");

  iVar4 = (int)(thunk_FUN_10eb22a0(DAT_121a2128), 0);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(1);
  thunk_FUN_10df6f00((uint)&local_8);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(2);
  uVar5 = (undefined4)(thunk_FUN_10def290((uint)&local_78,iVar4 + 4), 0);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(3);
  thunk_FUN_105f5d20(uVar5);
  local_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTree);

  iStack_20 = (int)(0);
  iStack_1c = (int)(0);
  iStack_18 = (int)(0);
  local_14 = (undefined4 *)((undefined4 *)0x0);
  local_10 = (undefined4 *)((undefined4 *)0x0);

  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(5);
  uVar5 = (undefined4)(thunk_FUN_10605060((uint)&local_a4), 0);
  thunk_FUN_105f5df0(uVar5);
  puVar3 = (undefined4 *)(local_10);
  local_7c = (undefined4)(((uint)(*(unsigned short *)((char *)&local_7c + 1)) << 8 | (uint)(4)));
  puVar7 = (undefined4 *)(local_14);
  if ((undefined4 *)(local_14) != (undefined4 *)(0x0)) {
    for (;(undefined4 *)((puVar7)) != (undefined4 *)(puVar3); puVar7 = puVar7 + 8) {
      (**(code **)*puVar7)(0);
    }
    uVar6 = (uint)(local_c - (int)local_14 & 0xffffffe0);
    puVar7 = (undefined4 *)(local_14);
    if (0xfff < uVar6) {
      puVar7 = (undefined4 *)((undefined4 *)local_14[-1]);
      uVar6 = (uint)(uVar6 + 0x23);
      if (0x1f < (uint)((int)local_14 + (-4 - (int)puVar7))) goto LAB_10617925;
    }
    thunk_FUN_1148a50e(puVar7,uVar6);
    local_14 = (undefined4 *)((undefined4 *)0x0);
    local_10 = (undefined4 *)((undefined4 *)0x0);

  }
  iVar2 = (int)(iStack_1c);
  iVar4 = (int)(iStack_20);
  if (iStack_20 != 0) {
    for (; iVar4 != iVar2; iVar4 = iVar4 + 0x34) {
      thunk_FUN_105ff930();
    }
    uVar6 = (uint)(((iStack_18 - iStack_20) / 0x34) * 0x34);
    iVar4 = (int)(iStack_20);
    if (0xfff < uVar6) {
      iVar4 = (int)(*(int *)(iStack_20 + -4));
      uVar6 = (uint)(uVar6 + 0x23);
      if (0x1f < (iStack_20 - iVar4) - 4U) {
LAB_10617925:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar4,uVar6);
    iStack_20 = (int)(0);
    iStack_1c = (int)(0);
    iStack_18 = (int)(0);
  }
  local_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  thunk_FUN_10604700();
  thunk_FUN_106045d0();
  piVar1 = (int *)(local_48);
  local_a4[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(6);
  if ((int *)(local_48) != (int *)(0x0)) {

    local_48 = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)(local_50);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(7);
  if ((int *)(local_50) != (int *)(0x0)) {

    local_50 = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  thunk_FUN_10def0d0();
  piVar1 = (int *)(local_2c);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(8);
  if ((int *)(local_2c) != (int *)(0x0)) {

    local_2c = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)(local_34);
  local_7c = (undefined4)(((uint)(*(unsigned short *)((char *)&local_7c + 1)) << 8 | (uint)(9)));
  if ((int *)(local_34) != (int *)(0x0)) {

    local_34 = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))();
  }

  ((SCStr *)((uint)&local_8))->int_release();

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 10617ac0; body size 1550 bytes.
#line 1 "ENTRY_10617ac0"

undefined4 __stdcall FUN_10617ac0(undefined4 param_1)

{
 try {
  int iVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined ***pppuVar9;
  undefined **local_1f0 [8];
  undefined **local_1d0 [8];
  undefined **local_1b0 [8];
  undefined **local_190 [8];
  undefined1 local_170 [36];
  undefined4 local_14c;
  int *local_148;
  undefined4 local_144;
  int *local_140;
  undefined1 local_13c [36];
  undefined4 local_118;
  int *local_114;
  undefined4 local_110;
  int *local_10c;
  undefined1 local_108 [36];
  undefined4 local_e4;
  int *local_e0;
  undefined4 local_dc;
  int *local_d8;
  undefined1 local_d4 [36];
  undefined4 local_b0;
  int *local_ac;
  undefined4 local_a8;
  int *local_a4;
  undefined4 local_94;
  int *local_90;
  undefined4 local_8c;
  int *local_88;
  void *local_84;
  undefined1 *puStack_80;
  undefined4 local_7c;
  undefined1 local_78 [12];
  undefined4 local_6c;
  int *local_68;
  undefined4 local_64;
  int *local_60;
  undefined4 local_50;
  int *local_4c;
  undefined4 local_48;
  int *local_44;
  undefined4 local_34;
  int *local_30;
  undefined4 local_2c;
  int *local_28;
  undefined **local_24;
  undefined4 local_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  undefined4 *local_10;
  undefined4 *local_c;
  int local_8;


  uVar4 = (uint)(DAT_12126b84 ^ (uint)(uint)&local_78);

  iVar5 = (int)(thunk_FUN_10eb22a0(DAT_121a2184), 0);

  thunk_FUN_10dfa930(uVar4);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(1);
  uVar6 = (undefined4)(thunk_FUN_10def290((uint)&local_170,iVar5 + 4), 0);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(2);
  thunk_FUN_105f5d20(uVar6);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(3);
  iVar5 = (int)(thunk_FUN_10eb22a0(DAT_121a216c), 0);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(4);
  thunk_FUN_10dfa930();
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(5);
  uVar6 = (undefined4)(thunk_FUN_10def290((uint)&local_13c,iVar5 + 4), 0);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(6);
  thunk_FUN_105f5d20(uVar6);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(7);
  iVar5 = (int)(thunk_FUN_10eb22a0(DAT_121a218c), 0);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(8);
  thunk_FUN_10dfa860();
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(9);
  uVar6 = (undefined4)(thunk_FUN_10def290((uint)&local_108,iVar5 + 4), 0);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(10);
  thunk_FUN_105f5d20(uVar6);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0xb);
  iVar5 = (int)(thunk_FUN_10eb22a0(DAT_121a217c), 0);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0xc);
  thunk_FUN_10df9760();
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0xd);
  uVar6 = (undefined4)(thunk_FUN_10def290((uint)&local_d4,iVar5 + 4), 0);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0xe);
  thunk_FUN_105f5d20(uVar6);
  local_24 = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTree);

  iStack_1c = (int)(0);
  iStack_18 = (int)(0);
  iStack_14 = (int)(0);
  local_10 = (undefined4 *)((undefined4 *)0x0);
  local_c = (undefined4 *)((undefined4 *)0x0);

  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x10);
  piVar7 = (int *)((int *)thunk_FUN_10605060((uint)&local_190), 0);
  uVar6 = (undefined4)(thunk_FUN_10df95e0(), 0);
  iVar5 = (int)(*piVar7);
  pppuVar9 = (undefined ***)((uint)&local_1b0);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x11);
  uVar3 = (undefined1)(thunk_FUN_10df1160(uVar6), 0);
  piVar7 = (int *)((int *)(**(code **)(iVar5 + 0xc))(uVar3,pppuVar9), 0);
  thunk_FUN_10eb41c0();
  iVar5 = (int)(thunk_FUN_10eac8d0(), 0);
  piVar7 = (int *)((int *)(**(code **)(*piVar7 + 0xc))(iVar5 != 1,(uint)&local_1d0), 0);
  uVar6 = (undefined4)((**(code **)(*piVar7 + 0x14))((uint)&local_1f0), 0);
  thunk_FUN_105f5df0(uVar6);
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  puVar2 = (undefined4 *)(local_c);
  local_7c = (undefined4)(((uint)(*(unsigned short *)((char *)&local_7c + 1)) << 8 | (uint)(0xf)));
  puVar8 = (undefined4 *)(local_10);
  if ((undefined4 *)(local_10) != (undefined4 *)(0x0)) {
    for (;(undefined4 *)((puVar8)) != (undefined4 *)(puVar2); puVar8 = puVar8 + 8) {
      (**(code **)*puVar8)(0);
    }
    uVar4 = (uint)(local_8 - (int)local_10 & 0xffffffe0);
    puVar8 = (undefined4 *)(local_10);
    if (0xfff < uVar4) {
      puVar8 = (undefined4 *)((undefined4 *)local_10[-1]);
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (uint)((int)local_10 + (-4 - (int)puVar8))) goto LAB_10617d86;
    }
    thunk_FUN_1148a50e(puVar8,uVar4);
    local_10 = (undefined4 *)((undefined4 *)0x0);
    local_c = (undefined4 *)((undefined4 *)0x0);

  }
  iVar1 = (int)(iStack_18);
  iVar5 = (int)(iStack_1c);
  if (iStack_1c != 0) {
    for (; iVar5 != iVar1; iVar5 = iVar5 + 0x34) {
      thunk_FUN_105ff930();
    }
    uVar4 = (uint)(((iStack_14 - iStack_1c) / 0x34) * 0x34);
    iVar5 = (int)(iStack_1c);
    if (0xfff < uVar4) {
      iVar5 = (int)(*(int *)(iStack_1c + -4));
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (iStack_1c - iVar5) - 4U) {
LAB_10617d86:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar5,uVar4);
    iStack_1c = (int)(0);
    iStack_18 = (int)(0);
    iStack_14 = (int)(0);
  }
  local_24 = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  thunk_FUN_10604700();
  thunk_FUN_106045d0();
  piVar7 = (int *)(local_a4);
  local_190[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x12);
  if ((int *)(local_a4) != (int *)(0x0)) {

    local_a4 = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  piVar7 = (int *)(local_ac);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x13);
  if ((int *)(local_ac) != (int *)(0x0)) {

    local_ac = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  thunk_FUN_10def0d0();
  piVar7 = (int *)(local_28);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x14);
  if ((int *)(local_28) != (int *)(0x0)) {

    local_28 = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  piVar7 = (int *)(local_30);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x15);
  if ((int *)(local_30) != (int *)(0x0)) {

    local_30 = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  thunk_FUN_10604700();
  thunk_FUN_106045d0();
  piVar7 = (int *)(local_d8);
  local_1b0[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x16);
  if ((int *)(local_d8) != (int *)(0x0)) {

    local_d8 = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  piVar7 = (int *)(local_e0);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x17);
  if ((int *)(local_e0) != (int *)(0x0)) {

    local_e0 = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  thunk_FUN_10def0d0();
  piVar7 = (int *)(local_44);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x18);
  if ((int *)(local_44) != (int *)(0x0)) {

    local_44 = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  piVar7 = (int *)(local_4c);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x19);
  if ((int *)(local_4c) != (int *)(0x0)) {

    local_4c = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  thunk_FUN_10604700();
  thunk_FUN_106045d0();
  piVar7 = (int *)(local_10c);
  local_1d0[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x1a);
  if ((int *)(local_10c) != (int *)(0x0)) {

    local_10c = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  piVar7 = (int *)(local_114);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x1b);
  if ((int *)(local_114) != (int *)(0x0)) {

    local_114 = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  thunk_FUN_10def0d0();
  piVar7 = (int *)(local_60);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x1c);
  if ((int *)(local_60) != (int *)(0x0)) {

    local_60 = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  piVar7 = (int *)(local_68);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x1d);
  if ((int *)(local_68) != (int *)(0x0)) {

    local_68 = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  thunk_FUN_10604700();
  thunk_FUN_106045d0();
  piVar7 = (int *)(local_140);
  local_1f0[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(0x1e);
  if ((int *)(local_140) != (int *)(0x0)) {

    local_140 = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  piVar7 = (int *)(local_148);
  local_7c = (undefined4)(((uint)(*(unsigned short *)((char *)&local_7c + 1)) << 8 | (uint)(0x1f)));
  if ((int *)(local_148) != (int *)(0x0)) {

    local_148 = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  thunk_FUN_10def0d0();
  piVar7 = (int *)(local_88);

  if ((int *)(local_88) != (int *)(0x0)) {

    local_88 = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  piVar7 = (int *)(local_90);

  if ((int *)(local_90) != (int *)(0x0)) {

    local_90 = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 10618260; body size 621 bytes.
#line 1 "ENTRY_10618260"

undefined4 __stdcall FUN_10618260(undefined4 param_1)

{
 try {
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined **local_a4 [8];
  void *local_84;
  undefined1 *puStack_80;
  undefined4 local_7c;
  undefined1 local_78 [36];
  undefined4 local_54;
  int *local_50;
  undefined4 local_4c;
  int *local_48;
  undefined4 local_38;
  int *local_34;
  undefined4 local_30;
  int *local_2c;
  undefined **local_28;
  undefined4 local_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  undefined4 *local_14;
  undefined4 *local_10;
  int local_c;
  SCStr local_8 [4];


  uVar4 = (uint)(DAT_12126b84 ^ (uint)(uint)&local_78);

  ((SCStr *)((uint)&local_8))->int_allocRep("done");

  iVar5 = (int)(thunk_FUN_10eb1dc0(uVar4), 0);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(1);
  thunk_FUN_10df6f00((uint)&local_8);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(2);
  uVar6 = (undefined4)(thunk_FUN_10def290((uint)&local_78,iVar5 + 4), 0);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(3);
  thunk_FUN_105f5d20(uVar6);
  local_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTree);

  iStack_20 = (int)(0);
  iStack_1c = (int)(0);
  iStack_18 = (int)(0);
  local_14 = (undefined4 *)((undefined4 *)0x0);
  local_10 = (undefined4 *)((undefined4 *)0x0);

  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(5);
  uVar6 = (undefined4)(thunk_FUN_10605060((uint)&local_a4), 0);
  thunk_FUN_105f5df0(uVar6);
  puVar3 = (undefined4 *)(local_10);
  local_7c = (undefined4)(((uint)(*(unsigned short *)((char *)&local_7c + 1)) << 8 | (uint)(4)));
  puVar7 = (undefined4 *)(local_14);
  if ((undefined4 *)(local_14) != (undefined4 *)(0x0)) {
    for (;(undefined4 *)((puVar7)) != (undefined4 *)(puVar3); puVar7 = puVar7 + 8) {
      (**(code **)*puVar7)(0);
    }
    uVar4 = (uint)(local_c - (int)local_14 & 0xffffffe0);
    puVar7 = (undefined4 *)(local_14);
    if (0xfff < uVar4) {
      puVar7 = (undefined4 *)((undefined4 *)local_14[-1]);
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (uint)((int)local_14 + (-4 - (int)puVar7))) goto LAB_106183d4;
    }
    thunk_FUN_1148a50e(puVar7,uVar4);
    local_14 = (undefined4 *)((undefined4 *)0x0);
    local_10 = (undefined4 *)((undefined4 *)0x0);

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
LAB_106183d4:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar5,uVar4);
    iStack_20 = (int)(0);
    iStack_1c = (int)(0);
    iStack_18 = (int)(0);
  }
  local_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  thunk_FUN_10604700();
  thunk_FUN_106045d0();
  piVar1 = (int *)(local_48);
  local_a4[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(6);
  if ((int *)(local_48) != (int *)(0x0)) {

    local_48 = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)(local_50);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(7);
  if ((int *)(local_50) != (int *)(0x0)) {

    local_50 = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  thunk_FUN_10def0d0();
  piVar1 = (int *)(local_2c);
  *(unsigned char*)((char *)&local_7c + 0) = (unsigned char)(8);
  if ((int *)(local_2c) != (int *)(0x0)) {

    local_2c = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)(local_34);
  local_7c = (undefined4)(((uint)(*(unsigned short *)((char *)&local_7c + 1)) << 8 | (uint)(9)));
  if ((int *)(local_34) != (int *)(0x0)) {

    local_34 = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))();
  }

  ((SCStr *)((uint)&local_8))->int_release();

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 10618570; body size 941 bytes.
#line 1 "ENTRY_10618570"

undefined4 __stdcall FUN_10618570(undefined4 param_1)

{
 try {
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined **local_118 [8];
  undefined **local_f8 [8];
  undefined1 local_d8 [36];
  undefined4 local_b4;
  int *local_b0;
  undefined4 local_ac;
  int *local_a8;
  undefined1 local_a4 [36];
  undefined4 local_80;
  int *local_7c;
  undefined4 local_78;
  int *local_74;
  void *local_70;
  undefined1 *puStack_6c;
  undefined4 local_68;
  undefined1 local_64 [12];
  undefined4 local_58;
  int *local_54;
  undefined4 local_50;
  int *local_4c;
  undefined4 local_3c;
  int *local_38;
  undefined4 local_34;
  int *local_30;
  undefined **local_2c;
  undefined4 local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  int local_10;
  SCStr local_c [4];
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84 ^ (uint)(uint)&local_64);

  ((SCStr *)((uint)&local_c))->int_allocRep("done");

  iVar4 = (int)(thunk_FUN_10eb1dc0(uVar3), 0);
  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(1);
  thunk_FUN_10df6f00((uint)&local_c);
  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(2);
  uVar5 = (undefined4)(thunk_FUN_10def290((uint)&local_d8,iVar4 + 4), 0);
  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(3);
  thunk_FUN_105f5d20(uVar5);
  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(4);
  ((SCStr *)((SCStr *)&local_8))->int_allocRep("ok");
  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(5);
  iVar4 = (int)(thunk_FUN_10eb22a0(DAT_121a2164), 0);
  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(6);
  thunk_FUN_10df6f00(&local_8);
  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(7);
  uVar5 = (undefined4)(thunk_FUN_10def290((uint)&local_a4,iVar4 + 4), 0);
  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(8);
  thunk_FUN_105f5d20(uVar5);
  local_2c = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTree);

  iStack_24 = (int)(0);
  iStack_20 = (int)(0);
  iStack_1c = (int)(0);
  local_18 = (undefined4 *)((undefined4 *)0x0);
  local_14 = (undefined4 *)((undefined4 *)0x0);

  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(10);
  piVar6 = (int *)((int *)thunk_FUN_10605060((uint)&local_f8), 0);
  uVar5 = (undefined4)((**(code **)(*piVar6 + 8))((uint)&local_118), 0);
  thunk_FUN_105f5df0(uVar5);
  puVar2 = (undefined4 *)(local_14);
  local_68 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_68 + 1)) << 8 | (uint)(9)));
  puVar7 = (undefined4 *)(local_18);
  if ((undefined4 *)(local_18) != (undefined4 *)(0x0)) {
    for (;(undefined4 *)((puVar7)) != (undefined4 *)(puVar2); puVar7 = puVar7 + 8) {
      (**(code **)*puVar7)(0);
    }
    uVar3 = (uint)(local_10 - (int)local_18 & 0xffffffe0);
    puVar7 = (undefined4 *)(local_18);
    if (0xfff < uVar3) {
      puVar7 = (undefined4 *)((undefined4 *)local_18[-1]);
      uVar3 = (uint)(uVar3 + 0x23);
      if (0x1f < (uint)((int)local_18 + (-4 - (int)puVar7))) goto LAB_10618755;
    }
    thunk_FUN_1148a50e(puVar7,uVar3);
    local_18 = (undefined4 *)((undefined4 *)0x0);
    local_14 = (undefined4 *)((undefined4 *)0x0);

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
LAB_10618755:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar4,uVar3);
    iStack_24 = (int)(0);
    iStack_20 = (int)(0);
    iStack_1c = (int)(0);
  }
  local_2c = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  thunk_FUN_10604700();
  thunk_FUN_106045d0();
  piVar6 = (int *)(local_74);
  local_f8[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(0xb);
  if ((int *)(local_74) != (int *)(0x0)) {

    local_74 = (int *)((int *)0x0);
    (**(code **)(*piVar6 + 8))();
  }
  piVar6 = (int *)(local_7c);
  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(0xc);
  if ((int *)(local_7c) != (int *)(0x0)) {

    local_7c = (int *)((int *)0x0);
    (**(code **)(*piVar6 + 8))();
  }
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  thunk_FUN_10def0d0();
  piVar6 = (int *)(local_30);
  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(0xd);
  if ((int *)(local_30) != (int *)(0x0)) {

    local_30 = (int *)((int *)0x0);
    (**(code **)(*piVar6 + 8))();
  }
  piVar6 = (int *)(local_38);
  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(0xe);
  if ((int *)(local_38) != (int *)(0x0)) {

    local_38 = (int *)((int *)0x0);
    (**(code **)(*piVar6 + 8))();
  }
  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(0xf);
  ((SCStr *)((SCStr *)&local_8))->int_release();

  thunk_FUN_10604700();
  thunk_FUN_106045d0();
  piVar6 = (int *)(local_a8);
  local_118[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(0x10);
  if ((int *)(local_a8) != (int *)(0x0)) {

    local_a8 = (int *)((int *)0x0);
    (**(code **)(*piVar6 + 8))();
  }
  piVar6 = (int *)(local_b0);
  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(0x11);
  if ((int *)(local_b0) != (int *)(0x0)) {

    local_b0 = (int *)((int *)0x0);
    (**(code **)(*piVar6 + 8))();
  }
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  thunk_FUN_10def0d0();
  piVar6 = (int *)(local_4c);
  *(unsigned char*)((char *)&local_68 + 0) = (unsigned char)(0x12);
  if ((int *)(local_4c) != (int *)(0x0)) {

    local_4c = (int *)((int *)0x0);
    (**(code **)(*piVar6 + 8))();
  }
  piVar6 = (int *)(local_54);
  local_68 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_68 + 1)) << 8 | (uint)(0x13)));
  if ((int *)(local_54) != (int *)(0x0)) {

    local_54 = (int *)((int *)0x0);
    (**(code **)(*piVar6 + 8))();
  }

  ((SCStr *)((uint)&local_c))->int_release();

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 10618a10; body size 376 bytes.
#line 1 "ENTRY_10618a10"

SCStr * __thiscall Recovered_Bulk::m_FUN_10618a10(SCStr *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  int *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar4 = (uint)(DAT_12126b84);

  piVar5 = (int *)((int *)thunk_FUN_10cf34e0(&local_18), 0);
  piVar1 = (int *)((int *)*piVar5);

  *piVar5 = (int)(0);
  if ((int *)(piVar1) == (int *)(0x0)) {
    piVar5 = (int *)((int *)0x0);
  }
  else {
    piVar5 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(uVar4), 0);
  }
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(3);
  if ((int *)(local_18) != (int *)(0x0)) {
    (**(code **)(*local_18 + 8))();
  }
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(2);
  uVar3 = (undefined1)((undefined1)local_8);
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(2);
  if ((int *)(piVar1) == (int *)(0x0)) {
    iVar2 = (int)(*(int *)(param_1 + 0x11c));
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(uVar3);
    if (iVar2 == 1) {
      ((SCStr *)(param_2))->int_allocRep("wifiConfig-noNetwork");

      if ((int *)(piVar5) != (int *)(0x0)) {
        (**(code **)(*piVar5 + 8))();
      }
    }
    else if (iVar2 == 2) {
      ((SCStr *)(param_2))->int_allocRep("wifiConfig-nothingFound");

      if ((int *)(piVar5) != (int *)(0x0)) {
        (**(code **)(*piVar5 + 8))();
      }
    }
    else if (iVar2 == 3) {
      ((SCStr *)(param_2))->int_allocRep("wifiConfig-unrecognizedNetwork");

      if ((int *)(piVar5) != (int *)(0x0)) {
        (**(code **)(*piVar5 + 8))();
      }
    }
    else {
      ((SCStr *)(param_2))->int_allocRep("wifiConfig-none");

      if ((int *)(piVar5) != (int *)(0x0)) {
        (**(code **)(*piVar5 + 8))();
      }
    }
  }
  else {
    puVar6 = (undefined4 *)((undefined4 *)thunk_FUN_10c98710(&local_14), 0);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(4);
    puVar7 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*puVar6 != (undefined1 *)((0x0))) {
      puVar7 = (undefined1 *)((undefined1 *)*puVar6);
    }
    ((SCStr *)((char *)param_2))->stringWithFormat("wifiConfig-%s",puVar7);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
    ((SCStr *)((SCStr *)&local_14))->int_release();


    if ((int *)(piVar5) != (int *)(0x0)) {
      (**(code **)(*piVar5 + 8))();
    }
  }

  return (SCStr *)(param_2);

 } catch (...) { }
}


// Reference entry 106190a0; body size 391 bytes.
#line 1 "ENTRY_106190a0"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ int __thiscall Recovered_Bulk::m_FUN_106190a0(char param_2,undefined4 param_3)
{
  int param_1 = (int )this;
 try {
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined **local_38;
  undefined4 local_34;
  int iStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 *local_24;
  undefined4 *local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar3 = (uint)(DAT_12126b84);

  local_38 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTree);
  local_24 = (undefined4 *)((undefined4 *)0x0);
  local_34 = (undefined4)(DAT_118be660);
  iStack_30 = (int)(_UNK_118be664);
  uStack_2c = (undefined4)(_UNK_118be668);
  iStack_28 = (int)(_UNK_118be66c);
  local_20 = (undefined4 *)((undefined4 *)0x0);


  puVar5 = (undefined4 *)(*(undefined4 **)(param_1 + 0x18), 0);

  local_18 = (int)(param_1);
  if ((undefined4 *)(puVar5) == *(undefined4 **)(param_1 + 0x1c)) {
    thunk_FUN_105f34e0(puVar5,&local_38);
    local_14 = (int)(local_1c);
  }
  else {
    *puVar5 = (undefined4)((uint)&ghidra_vftable_SCConditionalElementTree);
    puVar5[1] = (undefined4)(2);
    puVar5[2] = (undefined4)(0);
    puVar5[3] = (undefined4)(0);
    puVar5[4] = (undefined4)(0);
    puVar5[5] = (undefined4)(0);
    puVar5[6] = (undefined4)(0);
    puVar5[7] = (undefined4)(0);
    *(int*)(param_1 + 0x18) = (int)(*(int *)(param_1 + 0x18) + 0x20);
  }
  puVar2 = (undefined4 *)(local_20);
  puVar1 = (undefined4 *)(local_24);

  local_1c = (int)(local_14);
  puVar5 = (undefined4 *)(local_24);
  if ((undefined4 *)(local_24) != (undefined4 *)(0x0)) {
    for (;(undefined4 *)((puVar5)) != (undefined4 *)(puVar2); puVar5 = puVar5 + 8) {
      (**(code **)*puVar5)(0,uVar3);
    }
    uVar3 = (uint)(local_14 - (int)puVar1 & 0xffffffe0);
    puVar5 = (undefined4 *)(puVar1);
    if (0xfff < uVar3) {
      puVar5 = (undefined4 *)((undefined4 *)puVar1[-1]);
      uVar3 = (uint)(uVar3 + 0x23);
      if (0x1f < (uint)((int)puVar1 + (-4 - (int)puVar5))) goto LAB_106191b7;
    }
    thunk_FUN_1148a50e(puVar5,uVar3);
    param_1 = (int)(local_18);
  }
  if (iStack_30 != 0) {
    uVar3 = (uint)(iStack_28 - iStack_30 & 0xfffffffc);
    iVar4 = (int)(iStack_30);
    if (0xfff < uVar3) {
      iVar4 = (int)(*(int *)(iStack_30 + -4));
      uVar3 = (uint)(uVar3 + 0x23);
      if (0x1f < (iStack_30 - iVar4) - 4U) {
LAB_106191b7:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar4,uVar3);
  }
  iVar4 = (int)(*(int *)(param_1 + 0x18));
  if (*(int *)((iVar4 + -8)) == *(int *)((iVar4 + -4))) {
    thunk_FUN_105f34e0(*(int *)(iVar4 + -8),param_3);
  }
  else {
    thunk_FUN_105f5a00(param_3);
    *(int*)(iVar4 + -8) = (int)(*(int *)(iVar4 + -8) + 0x20);
  }
  iVar4 = (int)(*(int *)(iVar4 + -8));
  if (param_2 == '\0') {
    if (*(int *)(iVar4 + -0x1c) == 4) {
      *(undefined4*)(iVar4 + -0x1c) = (undefined4)(5);
    }
    else if (*(int *)(iVar4 + -0x1c) == 0) {
      *(undefined4*)(iVar4 + -0x1c) = (undefined4)(1);
    }
  }

  return (int)(local_18);

 } catch (...) { }
}


// Reference entry 10619290; body size 404 bytes.
#line 1 "ENTRY_10619290"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ int __thiscall Recovered_Bulk::m_FUN_10619290(char param_2,undefined4 param_3)
{
  int param_1 = (int )this;
 try {
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined **local_34;
  undefined4 local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar5 = (uint)(DAT_12126b84);

  local_34 = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTree);
  local_30 = (undefined4)(DAT_118be660);
  iStack_2c = (int)(_UNK_118be664);
  iStack_28 = (int)(_UNK_118be668);
  iStack_24 = (int)(_UNK_118be66c);
  local_20 = (undefined4 *)((undefined4 *)0x0);
  local_1c = (undefined4 *)((undefined4 *)0x0);


  local_14 = (int)(param_1);
  if (*(int *)((param_1 + 0x18)) == *(int *)((param_1 + 0x1c))) {
    thunk_FUN_105f36d0(*(int *)(param_1 + 0x18),&local_34);
  }
  else {
    thunk_FUN_105f5df0(&local_34);
    *(int*)(param_1 + 0x18) = (int)(*(int *)(param_1 + 0x18) + 0x20);
  }
  puVar4 = (undefined4 *)(local_1c);
  puVar3 = (undefined4 *)(local_20);

  puVar6 = (undefined4 *)(local_20);
  if ((undefined4 *)(local_20) != (undefined4 *)(0x0)) {
    for (;(undefined4 *)((puVar6)) != (undefined4 *)(puVar4); puVar6 = puVar6 + 8) {
      (**(code **)*puVar6)(0,uVar5);
    }
    uVar5 = (uint)(local_18 - (int)puVar3 & 0xffffffe0);
    puVar6 = (undefined4 *)(puVar3);
    if (0xfff < uVar5) {
      puVar6 = (undefined4 *)((undefined4 *)puVar3[-1]);
      uVar5 = (uint)(uVar5 + 0x23);
      if (0x1f < (uint)((int)puVar3 + (-4 - (int)puVar6))) goto LAB_106193b2;
    }
    thunk_FUN_1148a50e(puVar6,uVar5);
  }
  iVar2 = (int)(iStack_28);
  iVar1 = (int)(iStack_2c);
  iVar7 = (int)(iStack_2c);
  if (iStack_2c != 0) {
    for (; iVar7 != iVar2; iVar7 = iVar7 + 0x34) {
      thunk_FUN_105ff930();
    }
    uVar5 = (uint)(((iStack_24 - iVar1) / 0x34) * 0x34);
    iVar7 = (int)(iVar1);
    if (0xfff < uVar5) {
      iVar7 = (int)(*(int *)(iVar1 + -4));
      uVar5 = (uint)(uVar5 + 0x23);
      if (0x1f < (iVar1 - iVar7) - 4U) {
LAB_106193b2:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar7,uVar5);
  }
  iVar1 = (int)(local_14);
  iVar7 = (int)(*(int *)(local_14 + 0x18));
  if (*(int *)((iVar7 + -8)) == *(int *)((iVar7 + -4))) {
    thunk_FUN_105f36d0(*(int *)(iVar7 + -8),param_3);
  }
  else {
    thunk_FUN_105f5df0(param_3);
    *(int*)(iVar7 + -8) = (int)(*(int *)(iVar7 + -8) + 0x20);
  }
  iVar7 = (int)(*(int *)(iVar7 + -8));
  if (param_2 == '\0') {
    if (*(int *)(iVar7 + -0x1c) == 4) {
      *(undefined4*)(iVar7 + -0x1c) = (undefined4)(5);
    }
    else if (*(int *)(iVar7 + -0x1c) == 0) {
      *(undefined4*)(iVar7 + -0x1c) = (undefined4)(1);
    }
  }

  return (int)(iVar1);

 } catch (...) { }
}


// Reference entry 10619490; body size 478 bytes.
#line 1 "ENTRY_10619490"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ int __thiscall Recovered_Bulk::m_FUN_10619490(char param_2,undefined4 param_3)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined **local_34;
  undefined4 local_30;
  int *piStack_2c;
  int *piStack_28;
  int iStack_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar7 = (uint)(DAT_12126b84);

  local_34 = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTree);
  local_30 = (undefined4)(DAT_118be660);
  piStack_2c = (int *)(_UNK_118be664);
  piStack_28 = (int *)(_UNK_118be668);
  iStack_24 = (int)(_UNK_118be66c);
  local_20 = (undefined4 *)((undefined4 *)0x0);
  local_1c = (undefined4 *)((undefined4 *)0x0);


  local_14 = (int)(param_1);
  if (*(int *)((param_1 + 0x18)) == *(int *)((param_1 + 0x1c))) {
    thunk_FUN_105f38c0(*(int *)(param_1 + 0x18),&local_34);
  }
  else {
    thunk_FUN_105f60e0(&local_34);
    *(int*)(param_1 + 0x18) = (int)(*(int *)(param_1 + 0x18) + 0x20);
  }
  puVar5 = (undefined4 *)(local_1c);
  puVar4 = (undefined4 *)(local_20);

  puVar9 = (undefined4 *)(local_20);
  if ((undefined4 *)(local_20) != (undefined4 *)(0x0)) {
    for (;(undefined4 *)((puVar9)) != (undefined4 *)(puVar5); puVar9 = puVar9 + 8) {
      (**(code **)*puVar9)(0,uVar7);
    }
    uVar7 = (uint)(local_18 - (int)puVar4 & 0xffffffe0);
    puVar9 = (undefined4 *)(puVar4);
    if (0xfff < uVar7) {
      puVar9 = (undefined4 *)((undefined4 *)puVar4[-1]);
      uVar7 = (uint)(uVar7 + 0x23);
      if (0x1f < (uint)((int)puVar4 + (-4 - (int)puVar9))) goto LAB_106195fc;
    }
    thunk_FUN_1148a50e(puVar9,uVar7);
  }
  piVar3 = (int *)(piStack_2c);
  if ((int *)(piStack_2c) != (int *)(0x0)) {
    if ((int *)(piStack_2c) != (int *)(piStack_28)) {
      piVar8 = (int *)(piStack_2c + 1);
      do {

        ((SCStr *)((SCStr *)(piVar8 + 1)))->int_release();
        piVar8[1] = (int)(0);
        piVar1 = (int *)((int *)*piVar8);

        if ((int *)(piVar1) != (int *)(0x0)) {
          piVar8[-1] = (int)(0);
          *piVar8 = (int)(0);
          (**(code **)(*piVar1 + 8))();
        }

        piVar1 = (int *)(piVar8 + 2);
        piVar8 = (int *)(piVar8 + 3);
      } while ((int *)(piVar1) != (int *)(piStack_28));
    }
    uVar7 = (uint)(((iStack_24 - (int)piVar3) / 0xc) * 0xc);
    piVar8 = (int *)(piVar3);
    if (0xfff < uVar7) {
      piVar8 = (int *)((int *)piVar3[-1]);
      uVar7 = (uint)(uVar7 + 0x23);
      if (0x1f < (uint)((int)piVar3 + (-4 - (int)piVar8))) {
LAB_106195fc:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(piVar8,uVar7);
  }
  iVar6 = (int)(local_14);
  iVar2 = (int)(*(int *)(local_14 + 0x18));
  if (*(int *)((iVar2 + -8)) == *(int *)((iVar2 + -4))) {
    thunk_FUN_105f38c0(*(int *)(iVar2 + -8),param_3);
  }
  else {
    thunk_FUN_105f60e0(param_3);
    *(int*)(iVar2 + -8) = (int)(*(int *)(iVar2 + -8) + 0x20);
  }
  iVar2 = (int)(*(int *)(iVar2 + -8));
  if (param_2 == '\0') {
    if (*(int *)(iVar2 + -0x1c) == 4) {
      *(undefined4*)(iVar2 + -0x1c) = (undefined4)(5);
    }
    else if (*(int *)(iVar2 + -0x1c) == 0) {
      *(undefined4*)(iVar2 + -0x1c) = (undefined4)(1);
    }
  }

  return (int)(iVar6);

 } catch (...) { }
}


// Reference entry 10619b10; body size 291 bytes.
#line 1 "ENTRY_10619b10"

void FUN_10619b10(void)

{
 try {
  undefined4 *puVar1;
  int iVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  thunk_FUN_10eb41b0(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10cf34e0(&local_14), 0);

  thunk_FUN_10eb41b0();
  thunk_FUN_10ead9a0(*puVar1,2,1);

  if ((int *)(local_14) != (int *)(0x0)) {
    (**(code **)(*local_14 + 8))();
  }

  iVar2 = (int)(thunk_FUN_10eb41b0(), 0);
  if (iVar2 == 0) {
    iVar2 = (int)(0);
  }
  else {
    iVar2 = (int)(iVar2 + 0xe8);
  }
  thunk_FUN_10ebc1d0(iVar2);
  thunk_FUN_10cf3630(iVar2);
  iVar2 = (int)(thunk_FUN_10eb41b0(), 0);
  if (iVar2 == 0) {
    iVar2 = (int)(0);
  }
  else {
    iVar2 = (int)(iVar2 + 0xf4);
  }
  thunk_FUN_10ebc1d0(iVar2);
  thunk_FUN_10cf5250(iVar2);
  iVar2 = (int)(thunk_FUN_10eb41b0(), 0);
  if (iVar2 == 0) {
    iVar2 = (int)(0);
  }
  else {
    iVar2 = (int)(iVar2 + 0x100);
  }
  thunk_FUN_10ebc1d0(iVar2);
  thunk_FUN_10ead100(iVar2);
  iVar2 = (int)(thunk_FUN_10eb41b0(), 0);
  if (iVar2 == 0) {
    iVar2 = (int)(0);
  }
  else {
    iVar2 = (int)(iVar2 + 0x10c);
  }
  thunk_FUN_10ebc1d0(iVar2);
  thunk_FUN_10ead150(iVar2);

  return;

 } catch (...) { }
}


// Reference entry 10619c80; body size 192 bytes.
#line 1 "ENTRY_10619c80"

void FUN_10619c80(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10eb41b0(), 0);
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xe8);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf3630(iVar1);
  iVar1 = (int)(thunk_FUN_10eb41b0(), 0);
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xf4);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf5250(iVar1);
  iVar1 = (int)(thunk_FUN_10eb41b0(), 0);
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0x100);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10ead100(iVar1);
  iVar1 = (int)(thunk_FUN_10eb41b0(), 0);
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0x10c);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10ead150(iVar1);
  iVar1 = (int)(thunk_FUN_10eb41b0(), 0);
  thunk_FUN_10ebc1d0();
  thunk_FUN_1076bf90(*(undefined1 *)(iVar1 + 0x120));
  return;
}


// Reference entry 10619d70; body size 81 bytes.
#line 1 "ENTRY_10619d70"

void FUN_10619d70(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10eb41b0(), 0);
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xe8);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf3630(iVar1);
  iVar1 = (int)(thunk_FUN_10eb41b0(), 0);
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0x100);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10ead100(iVar1);
  return;
}


// Reference entry 10619de0; body size 120 bytes.
#line 1 "ENTRY_10619de0"

void FUN_10619de0(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10eb41b0(), 0);
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xe8);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf3630(iVar1);
  iVar1 = (int)(thunk_FUN_10eb41b0(), 0);
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xf4);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf5250(iVar1);
  iVar1 = (int)(thunk_FUN_10eb41b0(), 0);
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0x100);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10ead100(iVar1);
  return;
}


// Reference entry 10619e80; body size 200 bytes.
#line 1 "ENTRY_10619e80"

void __fastcall FUN_10619e80(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  thunk_FUN_10eb41b0();
  uVar1 = (undefined4)(thunk_FUN_10eac8c0(), 0);
  *(undefined4*)(param_1 + 0xc0) = (undefined4)(uVar1);
  iVar2 = (int)(thunk_FUN_10ebc1d0(), 0);
  *(undefined4*)(iVar2 + 0x118) = (undefined4)(2);
  iVar2 = (int)(thunk_FUN_10eb41b0(), 0);
  if (iVar2 == 0) {
    iVar2 = (int)(0);
  }
  else {
    iVar2 = (int)(iVar2 + 0xe8);
  }
  thunk_FUN_10ebc1d0(iVar2);
  thunk_FUN_10cf3630(iVar2);
  iVar2 = (int)(thunk_FUN_10eb41b0(), 0);
  if (iVar2 == 0) {
    iVar2 = (int)(0);
  }
  else {
    iVar2 = (int)(iVar2 + 0xf4);
  }
  thunk_FUN_10ebc1d0(iVar2);
  thunk_FUN_10cf5250(iVar2);
  iVar2 = (int)(thunk_FUN_10eb41b0(), 0);
  if (iVar2 == 0) {
    iVar2 = (int)(0);
  }
  else {
    iVar2 = (int)(iVar2 + 0x100);
  }
  thunk_FUN_10ebc1d0(iVar2);
  thunk_FUN_10ead100(iVar2);
  iVar2 = (int)(thunk_FUN_10eb41b0(), 0);
  if (iVar2 == 0) {
    iVar2 = (int)(0);
  }
  else {
    iVar2 = (int)(iVar2 + 0x10c);
  }
  thunk_FUN_10ebc1d0(iVar2);
  thunk_FUN_10ead150(iVar2);
  return;
}


// Reference entry 10619f80; body size 120 bytes.
#line 1 "ENTRY_10619f80"

void FUN_10619f80(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10eb41b0(), 0);
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xe8);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf3630(iVar1);
  iVar1 = (int)(thunk_FUN_10eb41b0(), 0);
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xf4);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf5250(iVar1);
  iVar1 = (int)(thunk_FUN_10eb41b0(), 0);
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0x100);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10ead100(iVar1);
  return;
}


// Reference entry 1061a020; body size 175 bytes.
#line 1 "ENTRY_1061a020"

void FUN_1061a020(void)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)(1);
  thunk_FUN_10ebc1d0(1);
  thunk_FUN_1087e2b0(uVar2);
  iVar1 = (int)(thunk_FUN_10eb41b0(), 0);
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xe8);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf3630(iVar1);
  iVar1 = (int)(thunk_FUN_10eb41b0(), 0);
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xf4);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf5250(iVar1);
  iVar1 = (int)(thunk_FUN_10eb41b0(), 0);
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0x100);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10ead100(iVar1);
  iVar1 = (int)(thunk_FUN_10eb41b0(), 0);
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0x10c);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10ead150(iVar1);
  return;
}


// Reference entry 1061a100; body size 196 bytes.
#line 1 "ENTRY_1061a100"

void FUN_1061a100(void)

{
  int iVar1;
  undefined4 local_4;
  
  iVar1 = (int)(thunk_FUN_10eb41b0(), 0);
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xe8);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf3630(iVar1);
  iVar1 = (int)(thunk_FUN_10eb41b0(), 0);
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xf4);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf5250(iVar1);
  iVar1 = (int)(thunk_FUN_10eb41b0(), 0);
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0x100);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10ead100(iVar1);
  iVar1 = (int)(thunk_FUN_10eb41b0(), 0);
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0x10c);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10ead150(iVar1);
  iVar1 = (int)(thunk_FUN_10eb41b0(), 0);
  local_4 = (undefined4)((uint)*(byte *)(iVar1 + 0x120));
  thunk_FUN_10ebc1d0(local_4);
  thunk_FUN_10916a90(local_4);
  return;
}


// Reference entry 1061a200; body size 184 bytes.
#line 1 "ENTRY_1061a200"

void FUN_1061a200(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10eb41b0(), 0);
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xe8);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf3630(iVar1);
  iVar1 = (int)(thunk_FUN_10eb41b0(), 0);
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xf4);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf5250(iVar1);
  iVar1 = (int)(thunk_FUN_10eb41b0(), 0);
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0x100);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10ead100(iVar1);
  iVar1 = (int)(thunk_FUN_10eb41b0(), 0);
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0x10c);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10ead150(iVar1);
  iVar1 = (int)(thunk_FUN_10ebc1d0(), 0);
  *(undefined1*)(iVar1 + 0x118) = (undefined1)(1);
  thunk_FUN_10ee48c0();
  thunk_FUN_10eeb270();
  return;
}


// Reference entry 1061a2f0; body size 198 bytes.
#line 1 "ENTRY_1061a2f0"

void FUN_1061a2f0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (int)(thunk_FUN_10eb41b0(), 0);
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xe8);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf3630(iVar1);
  iVar1 = (int)(thunk_FUN_10eb41b0(), 0);
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xf4);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf5250(iVar1);
  iVar1 = (int)(thunk_FUN_10eb41b0(), 0);
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0x100);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10ead100(iVar1);
  iVar1 = (int)(thunk_FUN_10eb41b0(), 0);
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0x10c);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10ead150(iVar1);
  thunk_FUN_105a26b0();
  iVar1 = (int)(thunk_FUN_10df2df0(), 0);
  if (iVar1 == DAT_121a2188) {
    uVar2 = (undefined4)(1);
    thunk_FUN_10ebc1d0(1);
    thunk_FUN_109543b0(uVar2);
  }
  return;
}


// Reference entry 1061a3f0; body size 173 bytes.
#line 1 "ENTRY_1061a3f0"

void FUN_1061a3f0(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10eb41b0(), 0);
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xe8);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf3630(iVar1);
  iVar1 = (int)(thunk_FUN_10eb41b0(), 0);
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xf4);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf5250(iVar1);
  iVar1 = (int)(thunk_FUN_10eb41b0(), 0);
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0x100);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10ead100(iVar1);
  iVar1 = (int)(thunk_FUN_10eb41b0(), 0);
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0x10c);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10ead150(iVar1);
  iVar1 = (int)(thunk_FUN_10ebc1d0(), 0);
  *(undefined1*)(iVar1 + 0x119) = (undefined1)(1);
  return;
}


// Reference entry 1061a4d0; body size 208 bytes.
#line 1 "ENTRY_1061a4d0"

void FUN_1061a4d0(void)

{
  char cVar1;
  int iVar2;
  
  iVar2 = (int)(thunk_FUN_10eb41b0(), 0);
  if (iVar2 == 0) {
    iVar2 = (int)(0);
  }
  else {
    iVar2 = (int)(iVar2 + 0xe8);
  }
  thunk_FUN_10ebc1d0(iVar2);
  thunk_FUN_10cf3630(iVar2);
  iVar2 = (int)(thunk_FUN_10eb41b0(), 0);
  if (iVar2 == 0) {
    iVar2 = (int)(0);
  }
  else {
    iVar2 = (int)(iVar2 + 0xf4);
  }
  thunk_FUN_10ebc1d0(iVar2);
  thunk_FUN_10cf5250(iVar2);
  iVar2 = (int)(thunk_FUN_10eb41b0(), 0);
  if (iVar2 == 0) {
    iVar2 = (int)(0);
  }
  else {
    iVar2 = (int)(iVar2 + 0x100);
  }
  thunk_FUN_10ebc1d0(iVar2);
  thunk_FUN_10ead100(iVar2);
  iVar2 = (int)(thunk_FUN_10eb41b0(), 0);
  if (iVar2 == 0) {
    iVar2 = (int)(0);
  }
  else {
    iVar2 = (int)(iVar2 + 0x10c);
  }
  thunk_FUN_10ebc1d0(iVar2);
  thunk_FUN_10ead150(iVar2);
  thunk_FUN_10eb41b0();
  thunk_FUN_10ebc1d0();
  cVar1 = (char)(thunk_FUN_10eacce0(1), 0);
  thunk_FUN_109f3bb0(cVar1 == '\0');
  return;
}


// Reference entry 1061a5e0; body size 778 bytes.
#line 1 "ENTRY_1061a5e0"

void FUN_1061a5e0(void)

{
 try {
  char cVar1;
  char cVar2;
  int *piVar3;
  undefined4 uStack_54;
  SCStr aSStack_4c [4];
  undefined4 uStack_48;
  char *pcStack_44;
  int *local_24;
  int *local_20;
  int local_1c;
  int *local_18;
  char local_12;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_18 = (int *)((int *)0x0);
  pcStack_44 = (char *)("wifiConfigEntryPoint");

  thunk_FUN_10eb0d90();
  pcStack_44 = (char *)((char *)0x1061a640);
  thunk_FUN_10cf34e0();

  pcStack_44 = (char *)("wifiConfigEntryProductSet");

  thunk_FUN_10eb0e10();

  if ((int *)(local_18) != (int *)(0x0)) {
    (**(code **)(*local_18 + 8))();
  }

  pcStack_44 = (char *)((char *)0x1061a686);
  thunk_FUN_10cf4ae0();
  pcStack_44 = (char *)((char *)0x1061a68f);
  thunk_FUN_10cf4ae0();
  pcStack_44 = (char *)((char *)0x1061a698);
  thunk_FUN_10cf4ae0();
  pcStack_44 = (char *)((char *)0x1061a6a1);
  thunk_FUN_10cf4ae0();
  cVar1 = (char)(thunk_FUN_105a3210(), 0);
  pcStack_44 = (char *)((char *)0x1061a6b1);
  thunk_FUN_101b5540();
  pcStack_44 = (char *)((char *)0x1061a6b8);
  cVar2 = (char)(thunk_FUN_101b5e50(), 0);
  if ((cVar2 == '\0') || (cVar1 != '\0')) {
    cVar1 = (char)('\0');
  }
  else {
    cVar1 = (char)('\x01');
  }
  pcStack_44 = (char *)((char *)0x1061a6d4);
  local_11 = (char)(cVar1);
  piVar3 = (int *)((int *)thunk_FUN_10cf34e0(), 0);
  local_1c = (int)(*piVar3);

  if ((int *)(local_18) != (int *)(0x0)) {
    (**(code **)(*local_18 + 8))();
  }

  if (local_1c == 0) {
    pcStack_44 = (char *)((char *)0x1061a7f2);
    thunk_FUN_10cf4ae0();
    goto joined_r0x1061a7f4;
  }
  pcStack_44 = (char *)((char *)0x1061a709);
  thunk_FUN_10cf34e0();
  piVar3 = (int *)((int *)0x1);

  local_18 = (int *)((int *)0x1);
  cVar1 = (char)(thunk_FUN_10c9c820(), 0);
  if (cVar1 == '\0') {
LAB_1061a74f:
    local_12 = (char)('\0');
  }
  else {
    pcStack_44 = (char *)((char *)0x1061a72e);
    thunk_FUN_10cf34e0();
    piVar3 = (int *)((int *)0x3);

    local_18 = (int *)((int *)0x3);
    pcStack_44 = (char *)((char *)0x1061a744);
    cVar1 = (char)(thunk_FUN_105c2260(), 0);
    local_12 = (char)('\x01');
    if (cVar1 != '\0') goto LAB_1061a74f;
  }
  if (((uint)piVar3 & 2) != 0) {
    piVar3 = (int *)((int *)((uint)piVar3 & 0xfffffffd));

    local_18 = (int *)(piVar3);
    if ((int *)(local_20) != (int *)(0x0)) {
      (**(code **)(*local_20 + 8))();
    }
  }
  if ((((uint)piVar3 & 1) != 0) && (local_8 = (undefined4)(6),(int *)( local_24) != (int *)(0x0))) {
    (**(code **)(*local_24 + 8))();
  }

  if ((local_11 != '\0') && (local_12 != '\0')) {
    pcStack_44 = (char *)((char *)0x1061a7ac);
    thunk_FUN_10cf4ae0();
  }
  pcStack_44 = (char *)((char *)0x1061a7b7);
  thunk_FUN_10cf34e0();

  cVar1 = (char)(thunk_FUN_10c9c440(), 0);

  if ((int *)(local_24) != (int *)(0x0)) {
    (**(code **)(*local_24 + 8))();
  }

joined_r0x1061a7f4:
  if (cVar1 != '\0') {
    pcStack_44 = (char *)((char *)0x1061a7ff);
    thunk_FUN_10cf4ae0();
  }
  thunk_FUN_10eb0a60();
  pcStack_44 = (char *)((char *)0x0);


  ((SCStr *)((uint)&aSStack_4c))->int_allocRep("popup once");

  thunk_FUN_10618a10(&uStack_54);

  thunk_FUN_106bc6b0();
  thunk_FUN_10c2f5a0();
  pcStack_44 = (char *)((char *)0x1061a852);
  thunk_FUN_10c31e60();
  pcStack_44 = (char *)((char *)0x1061a85f);
  ((SCStr *)((SCStr *)&local_18))->int_allocRep("");

  pcStack_44 = (char *)((char *)0x1061a875);
  thunk_FUN_10ead960();

  ((SCStr *)((SCStr *)&local_18))->int_release();

  pcStack_44 = (char *)((char *)0x1061a898);
  ((SCStr *)((SCStr *)&local_1c))->int_allocRep("");

  pcStack_44 = (char *)((char *)0x1061a8ae);
  thunk_FUN_10ead930();

  ((SCStr *)((SCStr *)&local_1c))->int_release();


  pcStack_44 = (char *)((char *)0x1061a8d8);
  thunk_FUN_10ead920();

  return;

 } catch (...) { }
}


// Reference entry 1061a9b0; body size 724 bytes.
#line 1 "ENTRY_1061a9b0"

void __thiscall Recovered_Bulk::m_FUN_1061a9b0(int *param_2)
{
  int param_1 = (int )this;
 try {
  undefined1 uVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  int local_28;
  int *local_24;
  int local_20;
  int *local_1c;
  uint local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->int_allocRep("leaveItWired");

  uVar4 = (undefined4)(thunk_FUN_10df6f00(&local_14), 0);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  cVar2 = (char)(thunk_FUN_10def450(uVar4), 0);
  thunk_FUN_10def0d0(uVar3);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  if (cVar2 != '\0') {
    thunk_FUN_10eb41b0();
    cVar2 = (char)(thunk_FUN_10eaceb0(), 0);
    if (cVar2 != '\0') {
      thunk_FUN_10eb41b0();
      thunk_FUN_10eac670();
    }
    iVar5 = (int)(thunk_FUN_10eb41b0(), 0);
    *(undefined1*)(iVar5 + 0x120) = (undefined1)(0);

    return;
  }
  ((SCStr *)((SCStr *)&param_2))->int_allocRep("continue");

  uVar4 = (undefined4)(thunk_FUN_10df6f00(&param_2), 0);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  cVar2 = (char)(thunk_FUN_10def450(uVar4), 0);
  thunk_FUN_10def0d0();

  ((SCStr *)((SCStr *)&param_2))->int_release();

  if (cVar2 == '\0') {

    return;
  }
  thunk_FUN_10eb41b0();
  iVar5 = (int)(thunk_FUN_10eac8c0(), 0);
  if (iVar5 != 4) {

    return;
  }
  *(undefined1*)(param_1 + 0xe0) = (undefined1)(1);
  uVar4 = (undefined4)(2);
  param_2 = (int *)((int *)0x1);
  thunk_FUN_10eb41b0();
  uVar6 = (undefined4)(thunk_FUN_10cf34e0(&local_14), 0);

  thunk_FUN_10351370(uVar6);
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(9);
  if ((int *)(local_14) != (int *)(0x0)) {
    (**(code **)(*local_14 + 8))();
  }
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(8);
  uVar1 = (undefined1)((undefined1)local_8);
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(8);
  if ((local_28 == 0) || (cVar2 = (char)(thunk_FUN_10c99580(), 0), uVar1 = (undefined1)((undefined1)local_8), cVar2 == '\0')) goto LAB_1061abd5;
  uVar4 = (undefined4)(thunk_FUN_10c97610(&param_2), 0);
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(10);
  thunk_FUN_101b92f0(uVar4);
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0xd);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xc)));
  uVar3 = (uint)(local_18);
  if (local_20 == 0) {
LAB_1061abac:
    param_2 = (int *)((int *)0x1);
    uVar4 = (undefined4)(2);
  }
  else {
    puVar7 = (undefined4 *)((undefined4 *)thunk_FUN_1034e150(&local_18), 0);
    uVar3 = (uint)(1);
    if (((char *)*puVar7 == (char *)((0x0))) || (*(char *)*puVar7 == (char)((('\0'))))) goto LAB_1061abac;
    param_2 = (int *)((int *)0x2);
    uVar4 = (undefined4)(1);
  }
  if ((uVar3 & 1) != 0) {
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xe)));
    ((SCStr *)((SCStr *)&local_18))->int_release();
  }
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(8);
  thunk_FUN_101b9dd0();
  uVar1 = (undefined1)((undefined1)local_8);
LAB_1061abd5:
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(uVar1);
  puVar7 = (undefined4 *)((undefined4 *)thunk_FUN_10c98710(&local_18), 0);
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0xf);
  puVar8 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*puVar7 != (undefined1 *)((0x0))) {
    puVar8 = (undefined1 *)((undefined1 *)*puVar7);
  }
  thunk_FUN_10302280(param_1 + 0xa8,"switching %s permwire to prot=%d type=%d",puVar8,uVar4,param_2) ;
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x10);
  ((SCStr *)((SCStr *)&local_18))->int_release();
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(8);
  thunk_FUN_10eb41b0();
  puVar7 = (undefined4 *)((undefined4 *)thunk_FUN_10cf34e0(&local_1c), 0);
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x11);
  thunk_FUN_10eb41b0();
  thunk_FUN_10ead9a0(*puVar7,uVar4,param_2);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x12)));
  if ((int *)(local_1c) != (int *)(0x0)) {
    (**(code **)(*local_1c + 8))();
  }

  if ((int *)(local_24) != (int *)(0x0)) {
    (**(code **)(*local_24 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 1061ad40; body size 187 bytes.
#line 1 "ENTRY_1061ad40"

void __stdcall FUN_1061ad40(unsigned int recovered_unused_stack_0)

{
 try {
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((uint)&local_14))->int_allocRep("moreInfo");

  uVar3 = (undefined4)(thunk_FUN_10df6f00((uint)&local_14), 0);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  cVar1 = (char)(thunk_FUN_10def450(uVar3), 0);
  thunk_FUN_10def0d0(uVar2);

  ((SCStr *)((uint)&local_14))->int_release();

  if (cVar1 != '\0') {
    ((SCStr *)((SCStr *)&stack0x00000004))->int_allocRep("wifiConfig-wiredTroubleshoot");

    thunk_FUN_10eba7e0(&stack0x00000004);

    ((SCStr *)((SCStr *)&stack0x00000004))->int_release();
  }

  return;

 } catch (...) { }
}


// Reference entry 1061ae30; body size 1871 bytes.
#line 1 "ENTRY_1061ae30"

void __thiscall Recovered_Bulk::m_FUN_1061ae30(SCStr *param_2)
{
  int *param_1 = (int *)this;
 try {
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  SCStr *pSVar7;
  uint uVar8;
  int *local_20;
  int *local_1c;
  SCStr local_18 [4];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (undefined4)(thunk_FUN_10dfbb10(DAT_12126b84 ^ (uint)&stack0xfffffffc), 0);

  cVar1 = (char)(thunk_FUN_10def450(uVar3), 0);

  thunk_FUN_10def0d0();
  if (cVar1 == '\0') {
    ((SCStr *)((SCStr * *)(&param_2)))->int_allocRep("appVersionCheck");

    uVar3 = (undefined4)(thunk_FUN_10dfba00(&param_2), 0);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xb)));
    cVar1 = (char)(thunk_FUN_10def450(uVar3), 0);
    thunk_FUN_10def0d0();

    ((SCStr *)((SCStr * *)(&param_2)))->int_release();

    if (cVar1 != '\0') {
      uVar3 = (undefined4)(1);
      thunk_FUN_10eb41b0(1);
      thunk_FUN_10ead5c0(uVar3);
      thunk_FUN_10eb41b0();
      thunk_FUN_10ead560(*(undefined1 *)(param_1[0x38] + 0x111));
      ((SCStr *)((SCStr * *)(&param_2)))->m_op_ctor((SCStr *)(param_1[0x38] + 0x114));
      puVar6 = (undefined4 *)(&param_2);

      thunk_FUN_10eb41b0(puVar6);
      thunk_FUN_10ead590(puVar6);

      ((SCStr *)((SCStr * *)(&param_2)))->int_release();

      thunk_FUN_10eb41b0();
      thunk_FUN_10ead570(*(undefined1 *)(param_1[0x38] + 0x118));
      thunk_FUN_10eb41b0();
      thunk_FUN_10ead580(*(undefined1 *)(param_1[0x38] + 0x119));

      return;
    }
    ((SCStr *)((SCStr * *)(&param_2)))->int_allocRep("appVersionCheck");

    uVar3 = (undefined4)(thunk_FUN_10dfb8f0(&param_2), 0);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x10)));
    cVar1 = (char)(thunk_FUN_10def450(uVar3), 0);
    thunk_FUN_10def0d0();

    ((SCStr *)((SCStr * *)(&param_2)))->int_release();

    if (cVar1 == '\0') {
      ((SCStr *)((SCStr * *)(&param_2)))->int_allocRep("appVersionCheckDuration");

      uVar3 = (undefined4)(thunk_FUN_10dfd7b0(&param_2), 0);
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x15)));
      cVar1 = (char)(thunk_FUN_10def450(uVar3), 0);
      thunk_FUN_10def0d0();

      ((SCStr *)((SCStr * *)(&param_2)))->int_release();

      if (cVar1 != '\0') {
        cVar1 = (char)(thunk_FUN_10eba5f0("appVersionCheckTimeout"), 0);
        if (cVar1 == '\0') {

          return;
        }
        thunk_FUN_10eb41b0();
        cVar1 = (char)(thunk_FUN_10eac8a0(), 0);
        if (cVar1 != '\0') {

          return;
        }
        param_1[0x3b] = (int)(1);
        thunk_FUN_10ebb8e0("appVersionCheckDuration",1000);
        cVar1 = (char)(thunk_FUN_10eba400("appVersionCheck"), 0);
        if (cVar1 != '\0') {

          return;
        }
        thunk_FUN_10eb41b0();
        uVar3 = (undefined4)(thunk_FUN_10607c00(&param_2), 0);

        thunk_FUN_105f29d0(uVar3);

        if ((SCStr *)(param_2) != (SCStr *)(0x0)) {
          (**(code **)(*(int *)param_2 + 8))();
        }

        thunk_FUN_10ebb810("appVersionCheck",param_1[0x38],0);

        return;
      }
      ((SCStr *)((SCStr * *)(&param_2)))->int_allocRep("continue");

      uVar3 = (undefined4)(thunk_FUN_10df6f00(&param_2), 0);
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x1a)));
      cVar1 = (char)(thunk_FUN_10def450(uVar3), 0);
      thunk_FUN_10def0d0();

      ((SCStr *)((SCStr * *)(&param_2)))->int_release();

      if (cVar1 == '\0') {
        ((SCStr *)((SCStr * *)(&param_2)))->int_allocRep("info");

        uVar3 = (undefined4)(thunk_FUN_10df6f00(&param_2), 0);
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x1d)));
        cVar1 = (char)(thunk_FUN_10def450(uVar3), 0);
        thunk_FUN_10def0d0();

        ((SCStr *)((SCStr * *)(&param_2)))->int_release();

        if (cVar1 == '\0') {

          return;
        }
        iVar4 = (int)(thunk_FUN_10eb41b0(), 0);
        if (*(int *)(iVar4 + 0x11c) == 3) {
          ((SCStr *)((SCStr * *)(&param_2)))->int_allocRep("wifiConfig-unrecognizedNetwork");

          thunk_FUN_10eba7e0(&param_2);

          pSVar7 = (SCStr *)((SCStr * *)(&param_2));
        }
        else {
          ((SCStr *)((uint)&local_18))->int_allocRep("wifiConfig-intro");

          thunk_FUN_10eba7e0((uint)&local_18);

          pSVar7 = (SCStr *)((uint)&local_18);
        }
        ((SCStr *)(pSVar7))->int_release();

        return;
      }
      if (*(char *)((int)param_1 + 0xe9) != '\0') {
        thunk_FUN_10eb41b0();
        cVar1 = (char)(thunk_FUN_10eac8a0(), 0);
        if ((cVar1 == '\0') && (cVar1 = (char)(thunk_FUN_10eba5f0("appVersionCheckTimeout"), 0), cVar1 != '\0') ) goto LAB_1061b497;
      }
      cVar1 = (char)(thunk_FUN_10eba5f0("minDuration"), 0);
      if (cVar1 != '\0') {
LAB_1061b497:
        *(undefined1*)(param_1 + 0x3a) = (undefined1)(1);

        return;
      }
    }
    else {
      cVar1 = (char)(thunk_FUN_10eba5f0("appVersionCheckTimeout"), 0);
      if (((cVar1 != '\0') && (cVar1 = (char)(thunk_FUN_10eba5f0("appVersionCheckDuration"), 0), cVar1 != '\0') ) && (param_1[0x3b] < 2)) {
        param_1[0x3b] = (int)(param_1[0x3b] + 1);
        thunk_FUN_10eb41b0();
        uVar3 = (undefined4)(thunk_FUN_10607c00(&param_2), 0);

        thunk_FUN_105f29d0(uVar3);

        if ((SCStr *)(param_2) != (SCStr *)(0x0)) {
          (**(code **)(*(int *)param_2 + 8))();
        }

        thunk_FUN_10ebb810("appVersionCheck",param_1[0x38],0);

        return;
      }
    }

    return;
  }
  (**(code **)(*param_1 + 0xc))();
  iVar4 = (int)(thunk_FUN_105ad8f0(), 0);
  thunk_FUN_10eb41b0();
  piVar5 = (int *)((int *)thunk_FUN_10cf34e0(&param_2), 0);


  if ((*piVar5 == (int)((0))) || (iVar4 != 10)) {
    uVar3 = (undefined4)(0);
  }
  else {
    uVar3 = (undefined4)(1);
  }
  thunk_FUN_10eb41b0(uVar3);
  thunk_FUN_10eae090(uVar3);
  uVar8 = (uint)(0);

  if ((SCStr *)(param_2) != (SCStr *)(0x0)) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  thunk_FUN_10eb41b0();
  param_2 = (SCStr *)((SCStr *)thunk_FUN_10610c60(&local_14), 0);
  pSVar7 = (SCStr *)((SCStr *)(param_1 + 0x3c));

  if ((SCStr *)((param_2)) != (SCStr *)(pSVar7)) {
    ((SCStr *)(pSVar7))->int_release();
    *(undefined4*)pSVar7 = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(pSVar7))->int_addref();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  thunk_FUN_10ebb8e0("minDuration",2000);
  thunk_FUN_10eb41b0();
  cVar1 = (char)(thunk_FUN_10eacce0(1), 0);
  param_2 = (SCStr *)((SCStr *)((uint)(cVar1 == '\0') << 24 | (uint)(*(uint *)((char *)&param_2 + 0))));
  thunk_FUN_10eb41b0();
  cVar1 = (char)(thunk_FUN_11248b40(0x15), 0);
  if (cVar1 == '\0') {
    puVar6 = (undefined4 *)((undefined4 *)thunk_FUN_101da4a0(&local_20), 0);


    piVar5 = (int *)((int *)(**(code **)(*(int *)*puVar6 + 0x3c))(&local_1c), 0);
    uVar8 = (uint)(6);
    if ((*piVar5 != (int)((0))) && (*(uint *)((char *)&param_2 + 3) != '\0')) {
      uVar2 = (undefined1)(1);
      goto LAB_1061afd6;
    }
  }
  uVar2 = (undefined1)(0);
LAB_1061afd6:
  *(undefined1*)((int)param_1 + 0xe9) = (undefined1)(uVar2);
  if ((uVar8 & 4) != 0) {
    uVar8 = (uint)(uVar8 & 0xfffffffb);

    local_14 = (uint)(uVar8);
    if ((int *)(local_1c) != (int *)(0x0)) {
      (**(code **)(*local_1c + 8))();
    }
  }
  if (((uVar8 & 2) != 0) && (local_8 = (undefined4)(7),(int *)( local_20) != (int *)(0x0))) {
    (**(code **)(*local_20 + 8))();
  }

  if (*(char *)((int)param_1 + 0xe9) != '\0') {
    thunk_FUN_10ebb8e0("appVersionCheckTimeout",5000);
    thunk_FUN_10ebb8e0("appVersionCheckDuration",1000);
    param_1[0x3b] = (int)(1);
    thunk_FUN_10eb41b0();
    uVar3 = (undefined4)(thunk_FUN_10607c00(&param_2), 0);

    thunk_FUN_105f29d0(uVar3);

    if ((SCStr *)(param_2) != (SCStr *)(0x0)) {
      (**(code **)(*(int *)param_2 + 8))();
    }

    thunk_FUN_10ebb810("appVersionCheck",param_1[0x38],0);
  }
  thunk_FUN_10302280(param_1 + 0x2a,"Beginning wifi config...");

  return;

 } catch (...) { }
}


// Reference entry 1061b760; body size 187 bytes.
#line 1 "ENTRY_1061b760"

void __stdcall FUN_1061b760(unsigned int recovered_unused_stack_0)

{
 try {
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((uint)&local_14))->int_allocRep("needHelp");

  uVar3 = (undefined4)(thunk_FUN_10df6f00((uint)&local_14), 0);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  cVar1 = (char)(thunk_FUN_10def450(uVar3), 0);
  thunk_FUN_10def0d0(uVar2);

  ((SCStr *)((uint)&local_14))->int_release();

  if (cVar1 != '\0') {
    ((SCStr *)((SCStr *)&stack0x00000004))->int_allocRep("wifiConfig-incompatibleDevice");

    thunk_FUN_10eba7e0(&stack0x00000004);

    ((SCStr *)((SCStr *)&stack0x00000004))->int_release();
  }

  return;

 } catch (...) { }
}


// Reference entry 1061b850; body size 211 bytes.
#line 1 "ENTRY_1061b850"

void __thiscall Recovered_Bulk::m_FUN_1061b850(undefined4 param_2)
{
  int param_1 = (int )this;
 try {
  SCStr *this_;
  char cVar1;
  undefined4 uVar2;
  SCStr *pSVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (undefined4)(thunk_FUN_10dfbb10(DAT_12126b84 ^ (uint)&stack0xfffffffc), 0);

  cVar1 = (char)(thunk_FUN_10def450(uVar2), 0);

  thunk_FUN_10def0d0();
  if (cVar1 != '\0') {
    thunk_FUN_10eb41b0();
    pSVar3 = (SCStr *)((SCStr *)thunk_FUN_10610c60(&param_2), 0);
    this_ = (SCStr *)((SCStr *)(param_1 + 0xe0));

    if ((SCStr *)((pSVar3)) != (SCStr *)(this_)) {
      ((SCStr *)(this_))->int_release();
      *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)pSVar3));
      ((SCStr *)(this_))->int_addref();
    }

    ((SCStr *)((SCStr *)&param_2))->int_release();
    uVar2 = (undefined4)(1);
    param_2 = (undefined4)(0);

    thunk_FUN_10eb41b0(1);
    thunk_FUN_10eae090(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 1061b960; body size 177 bytes.
#line 1 "ENTRY_1061b960"

void __fastcall FUN_1061b960(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
 try {
  char cVar1;
  undefined4 uVar2;
  SCStr *pSVar3;
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (undefined4)(thunk_FUN_10dfbb10(DAT_12126b84 ^ (uint)&stack0xfffffffc), 0);

  cVar1 = (char)(thunk_FUN_10def450(uVar2), 0);

  thunk_FUN_10def0d0();
  if (cVar1 != '\0') {
    thunk_FUN_10eb41b0();
    pSVar3 = (SCStr *)((SCStr *)thunk_FUN_10610c60(&stack0x00000004), 0);
    this_ = (SCStr *)((SCStr *)(param_1 + 0xe0));

    if ((SCStr *)(pSVar3) != (SCStr *)(this_)) {
      ((SCStr *)(this_))->int_release();
      *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)pSVar3));
      ((SCStr *)(this_))->int_addref();
    }

    ((SCStr *)((SCStr *)&stack0x00000004))->int_release();
  }

  return;

 } catch (...) { }
}


// Reference entry 1061ba40; body size 335 bytes.
#line 1 "ENTRY_1061ba40"

void __stdcall FUN_1061ba40(int *param_1)

{
 try {
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->int_allocRep("continue");

  uVar3 = (undefined4)(thunk_FUN_10df6f00(&local_14), 0);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  cVar1 = (char)(thunk_FUN_10def450(uVar3), 0);
  thunk_FUN_10def0d0(uVar2);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  if (cVar1 != '\0') {
    param_1 = (int *)(operator_new(0x18), 0);
    if ((int *)(param_1) == (int *)(0x0)) {
      piVar5 = (int *)((int *)0x0);
    }
    else {
      *param_1 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
      param_1[1] = (int)(0);
      g_lSCObjCount = (int)(g_lSCObjCount + 1);
      *param_1 = (int)((int)(uint)&ghidra_vftable_SCDisplayCustomControlActionDescriptor);
      param_1[2] = (int)(0x15);
      param_1[3] = (int)(0);
      param_1[4] = (int)(0);
      param_1[5] = (int)(0);
      piVar5 = (int *)(param_1);
    }
    piVar6 = (int *)((int *)0x0);

    local_14 = (int *)((int *)0x0);
    if ((int *)(piVar5) != (int *)(0x0)) {
      piVar6 = (int *)(piVar5);
      if (*(code **)(*piVar5 + 0xc) != (code *)((thunk_FUN_101da390))) {
        piVar6 = (int *)((int *)(**(code **)(*piVar5 + 0xc))(), 0);
      }
      local_14 = (int *)(piVar6);
      (**(code **)(*piVar6 + 4))();
    }

    puVar4 = (undefined4 *)((undefined4 *)(**(code **)(*piVar5 + 0x34))(&param_1), 0);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(10);
    (**(code **)(*(int *)*puVar4 + 0x14))();
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xb)));
    if ((int *)(param_1) != (int *)(0x0)) {
      (**(code **)(*param_1 + 8))();
    }

    if ((int *)(piVar6) != (int *)(0x0)) {
      (**(code **)(*piVar6 + 8))();
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 1061bbf0; body size 177 bytes.
#line 1 "ENTRY_1061bbf0"

void __fastcall FUN_1061bbf0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
 try {
  char cVar1;
  undefined4 uVar2;
  SCStr *pSVar3;
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (undefined4)(thunk_FUN_10dfbb10(DAT_12126b84 ^ (uint)&stack0xfffffffc), 0);

  cVar1 = (char)(thunk_FUN_10def450(uVar2), 0);

  thunk_FUN_10def0d0();
  if (cVar1 != '\0') {
    thunk_FUN_10eb41b0();
    pSVar3 = (SCStr *)((SCStr *)thunk_FUN_10610c60(&stack0x00000004), 0);
    this_ = (SCStr *)((SCStr *)(param_1 + 0xe0));

    if ((SCStr *)(pSVar3) != (SCStr *)(this_)) {
      ((SCStr *)(this_))->int_release();
      *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)pSVar3));
      ((SCStr *)(this_))->int_addref();
    }

    ((SCStr *)((SCStr *)&stack0x00000004))->int_release();
  }

  return;

 } catch (...) { }
}


// Reference entry 1061bcd0; body size 230 bytes.
#line 1 "ENTRY_1061bcd0"

void FUN_1061bcd0(void)

{
 try {
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (undefined4)(thunk_FUN_10dfbb10(DAT_12126b84 ^ (uint)&stack0xfffffffc), 0);

  cVar1 = (char)(thunk_FUN_10def450(uVar2), 0);

  thunk_FUN_10def0d0();
  if (cVar1 != '\0') {
    thunk_FUN_10ebbab0(0x4000);
    thunk_FUN_10ee48c0();
    thunk_FUN_10eeaee0();

    return;
  }
  uVar2 = (undefined4)(thunk_FUN_10dfa860(), 0);

  cVar1 = (char)(thunk_FUN_10def450(uVar2), 0);

  thunk_FUN_10def0d0();
  if (cVar1 != '\0') {
    thunk_FUN_10eb41b0();
    iVar3 = (int)(thunk_FUN_10eac8c0(), 0);
    if (iVar3 == 4) {
      uVar2 = (undefined4)(0);
      thunk_FUN_10ee48c0(0);
      thunk_FUN_10ee3000(uVar2);
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 1061bdf0; body size 330 bytes.
#line 1 "ENTRY_1061bdf0"

void __stdcall FUN_1061bdf0(undefined4 param_1)

{
 try {
  char cVar1;
  undefined4 uVar2;
  SCLibrary *pSVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (undefined4)(thunk_FUN_10dfbb10(DAT_12126b84 ^ (uint)&stack0xfffffffc), 0);

  cVar1 = (char)(thunk_FUN_10def450(uVar2), 0);

  thunk_FUN_10def0d0();
  if (cVar1 != '\0') {
    pSVar3 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton(), 0);
    piVar4 = (int *)((int *)(**(code **)(**(int **)(*(int *)(pSVar3 + 0x4c) + 0xe8) + 4))(&local_1c,7), 0);
    piVar6 = (int *)((int *)*piVar4);

    *piVar4 = (int)(0);
    if ((int *)(piVar6) == (int *)(0x0)) {
      piVar4 = (int *)((int *)0x0);
    }
    else {
      piVar4 = (int *)((int *)(**(code **)(*piVar6 + 0xc))(), 0);
    }
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(2);
    if ((int *)(piVar6) == (int *)(0x0)) {
      piVar6 = (int *)((int *)0x0);
      local_18 = (int *)((int *)0x0);
    }
    else {
      ((SCStr *)((SCStr *)&param_1))->int_allocRep("SCIHapticDelegate");
      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(3);
      puVar5 = (undefined4 *)((undefined4 *)(**(code **)*piVar6)(&local_14,&param_1), 0);
      piVar6 = (int *)((int *)*puVar5);
      *puVar5 = (undefined4)(0);
      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(5);
      local_18 = (int *)(piVar6);
      if ((int *)(local_14) != (int *)(0x0)) {
        (**(code **)(*local_14 + 8))();
      }
      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(6);
      ((SCStr *)((SCStr *)&param_1))->int_release();
      param_1 = (undefined4)(0);
    }
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(7);
    if ((int *)(piVar4) != (int *)(0x0)) {
      (**(code **)(*piVar4 + 8))();
    }
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(10);
    if ((int *)(local_1c) != (int *)(0x0)) {
      (**(code **)(*local_1c + 8))();
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(9)));
    if ((int *)(piVar6) != (int *)(0x0)) {
      (**(code **)(*piVar6 + 0x14))(0);
    }

    if ((int *)(piVar6) != (int *)(0x0)) {
      (**(code **)(*piVar6 + 8))();
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 1061bf90; body size 187 bytes.
#line 1 "ENTRY_1061bf90"

void __stdcall FUN_1061bf90(unsigned int recovered_unused_stack_0)

{
 try {
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((uint)&local_14))->int_allocRep("needHelp");

  uVar3 = (undefined4)(thunk_FUN_10df6f00((uint)&local_14), 0);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  cVar1 = (char)(thunk_FUN_10def450(uVar3), 0);
  thunk_FUN_10def0d0(uVar2);

  ((SCStr *)((uint)&local_14))->int_release();

  if (cVar1 != '\0') {
    ((SCStr *)((SCStr *)&stack0x00000004))->int_allocRep("wifiConfig-factoryReset");

    thunk_FUN_10eba7e0(&stack0x00000004);

    ((SCStr *)((SCStr *)&stack0x00000004))->int_release();
  }

  return;

 } catch (...) { }
}


// Reference entry 1061c090; body size 363 bytes.
#line 1 "ENTRY_1061c090"

void __fastcall FUN_1061c090(int param_1)

{
 try {
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  int *local_18;
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  int local_8;


  thunk_FUN_105a26b0(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  thunk_FUN_10df2df0();
  thunk_FUN_10eb41b0();
  iVar1 = (int)(thunk_FUN_10eac8c0(), 0);
  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_106dfa00((uint)&local_14), 0);

  puVar5 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*puVar2 != (undefined1 *)((0x0))) {
    puVar5 = (undefined1 *)((undefined1 *)*puVar2);
  }
  thunk_FUN_10eb41b0();
  uVar3 = (undefined4)(thunk_FUN_10eacdc0(*(undefined4 *)(param_1 + 0xc0),puVar5), 0);
  thunk_FUN_10302280(param_1 + 0xa8,"flow=%d prev=%d entry=%d from=%s",iVar1,uVar3);

  ((SCStr *)((uint)&local_14))->int_release();

  if ((int)(iVar1) == *(int *)(param_1 + 0xc0)) {
    iVar4 = (int)(thunk_FUN_10eb41b0(), 0);
    *(undefined1*)(iVar4 + 0x120) = (undefined1)(1);
    if (iVar1 == 2) {
      thunk_FUN_10302280(param_1 + 0xa8,"switching from ble to ap");
      iVar4 = (int)(thunk_FUN_10eb41b0(), 0);
      *(undefined1*)(iVar4 + 0x120) = (undefined1)(1);
      thunk_FUN_10eb41b0();
      puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_10cf34e0(&local_18), 0);
      local_8 = (int)(iVar1);
      thunk_FUN_10eb41b0();
      thunk_FUN_10ead9a0(*puVar2,2,1);

      if ((int *)(local_18) != (int *)(0x0)) {
        (**(code **)(*local_18 + 8))();

        return;
      }
    }
  }
  else if (iVar1 == 0) {
    iVar1 = (int)(thunk_FUN_10eb41b0(), 0);
    *(undefined1*)(iVar1 + 0x120) = (undefined1)(0);
  }

  return;

 } catch (...) { }
}


// Reference entry 1061c370; body size 145 bytes.
#line 1 "ENTRY_1061c370"

void __thiscall Recovered_Bulk::m_FUN_1061c370(undefined4 *param_2)
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

  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)(0x0)) {
      (**(code **)(*piVar2 + 4))(uVar3);
    }

    ((SCStr *)((SCStr *)(puVar1 + 2)))->m_op_ctor((SCStr *)(param_2 + 2));
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0xc);

    return;
  }
  thunk_FUN_105f3ab0(puVar1,param_2);

  return;

 } catch (...) { }
}


// Reference entry 1061c630; body size 166 bytes.
#line 1 "ENTRY_1061c630"

void __thiscall Recovered_Bulk::m_FUN_1061c630(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  int **ppiVar2;
  int *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->int_allocRep("canvasStyle");
  ppiVar2 = (int **)(&local_18);

  (**(code **)*param_1)(ppiVar2,uVar1);
  thunk_FUN_106d83f0(ppiVar2);
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(1);
  (**(code **)(*local_18 + 0x28))(&local_14,param_2);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  if ((int *)(local_18) != (int *)(0x0)) {
    (**(code **)(*local_18 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();


  (**(code **)*param_1)();

  return;

 } catch (...) { }
}


// Reference entry 1061c700; body size 774 bytes.
#line 1 "ENTRY_1061c700"

void __thiscall Recovered_Bulk::m_FUN_1061c700(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int iVar1;
  char cVar2;
  uint uVar3;
  int **ppiVar4;
  int *local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_18))->int_allocRep("layoutStyle");
  ppiVar4 = (int **)(&local_14);

  (**(code **)*param_1)(ppiVar4,uVar3);
  thunk_FUN_106d83f0(ppiVar4);
  iVar1 = (int)(param_2);
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(1);
  (**(code **)(*local_14 + 0x28))(&local_18,param_2);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  if ((int *)(local_14) != (int *)(0x0)) {
    (**(code **)(*local_14 + 8))();
  }

  ((SCStr *)((SCStr *)&local_18))->int_release();

  ((SCStr *)((SCStr *)&local_14))->int_allocRep("headerStyle");
  ppiVar4 = (int **)(&local_18);

  (**(code **)*param_1)(ppiVar4);
  thunk_FUN_106d83f0(ppiVar4);
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(5);
  cVar2 = (char)((**(code **)(*local_18 + 0x74))(&local_14), 0);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  *(uint*)((char *)&param_2 + 3) = (uint)(cVar2 == '\0');
  if ((int *)(local_18) != (int *)(0x0)) {
    (**(code **)(*local_18 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  if (*(uint *)((char *)&param_2 + 3) != '\0') {
    ((SCStr *)((SCStr *)&local_14))->int_allocRep("headerStyle");
    ppiVar4 = (int **)(&local_18);

    (**(code **)*param_1)(ppiVar4);
    thunk_FUN_106d83f0(ppiVar4);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(9);
    (**(code **)(*local_18 + 0x28))(&local_14,iVar1 == 1);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(10)));
    if ((int *)(local_18) != (int *)(0x0)) {
      (**(code **)(*local_18 + 8))();
    }

    ((SCStr *)((SCStr *)&local_14))->int_release();
  }

  ((SCStr *)((SCStr *)&local_14))->int_allocRep("canvasStyle");
  ppiVar4 = (int **)(&local_18);

  (**(code **)*param_1)(ppiVar4);
  thunk_FUN_106d83f0(ppiVar4);
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0xd);
  cVar2 = (char)((**(code **)(*local_18 + 0x74))(&local_14), 0);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xe)));
  if ((int *)(local_18) != (int *)(0x0)) {
    (**(code **)(*local_18 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  if (cVar2 == '\0') {
    ((SCStr *)((SCStr *)&local_14))->int_allocRep("canvasStyle");
    ppiVar4 = (int **)(&local_18);

    (**(code **)*param_1)(ppiVar4);
    thunk_FUN_106d83f0(ppiVar4);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x11);
    (**(code **)(*local_18 + 0x28))(&local_14,0);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x12)));
    if ((int *)(local_18) != (int *)(0x0)) {
      (**(code **)(*local_18 + 8))();
    }

    ((SCStr *)((SCStr *)&local_14))->int_release();
  }

  ((SCStr *)((SCStr *)&local_14))->int_allocRep("footerStyle");
  ppiVar4 = (int **)(&local_18);

  (**(code **)*param_1)(ppiVar4);
  thunk_FUN_106d83f0(ppiVar4);
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x15);
  cVar2 = (char)((**(code **)(*local_18 + 0x74))(&local_14), 0);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x16)));
  if ((int *)(local_18) != (int *)(0x0)) {
    (**(code **)(*local_18 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  if (cVar2 == '\0') {
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("footerStyle");
    ppiVar4 = (int **)(&local_1c);

    (**(code **)*param_1)(ppiVar4);
    thunk_FUN_106d83f0(ppiVar4);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x19);
    (**(code **)(*local_1c + 0x28))(&param_2,0);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x1a)));
    if ((int *)(local_1c) != (int *)(0x0)) {
      (**(code **)(*local_1c + 8))();
    }

    ((SCStr *)((SCStr *)&param_2))->int_release();
    *(uint*)((char *)&param_2 + 0) = (uint)(0);
    *(uint*)((char *)&param_2 + 3) = (uint)('\0');
  }

  (**(code **)*param_1)();

  return;

 } catch (...) { }
}


// Reference entry 1061cb50; body size 410 bytes.
#line 1 "ENTRY_1061cb50"

undefined4 * __fastcall FUN_1061cb50(undefined4 *param_1)

{
 try {
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  SCLibrary *this_;
  undefined4 uVar5;
  int **ppiVar6;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar3 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  piVar2 = (int *)(param_1 + 2);
  *piVar2 = (int)((int)(uint)&ghidra_vftable_SCEventSinkDelegate);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);

  local_14 = (int *)(piVar2);
  piVar4 = (int *)(operator_new(0xc), 0);
  if ((int *)(piVar4) == (int *)(0x0)) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    *piVar4 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar4[1] = (int)(0);
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    *piVar4 = (int)((int)(uint)&ghidra_vftable_SCEventSinkDelegateInternal);
    piVar4[2] = (int)((int)piVar2);
  }
  if ((int *)(piVar4) != (int *)param_1[3]) {
    piVar1 = (int *)((int *)param_1[4]);
    if ((int *)(piVar1) != (int *)(0x0)) {
      param_1[3] = (undefined4)(0);
      param_1[4] = (undefined4)(0);
      (**(code **)(*piVar1 + 8))(uVar3);
    }
    param_1[3] = (undefined4)(piVar4);
    if ((int *)(piVar4) == (int *)(0x0)) {
      param_1[4] = (undefined4)(0);
    }
    else {
      if (*(code **)(*piVar4 + 0xc) != (code *)((thunk_FUN_101b5500))) {
        piVar4 = (int *)((int *)(**(code **)(*piVar4 + 0xc))(), 0);
      }
      param_1[4] = (undefined4)(piVar4);
      (**(code **)(*piVar4 + 4))();
    }
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCFetchLifecycleDevicesOp);
  *piVar2 = (int)((int)(uint)&ghidra_vftable_SCFetchLifecycleDevicesOp);
  param_1[5] = (undefined4)(0);
  param_1[6] = (undefined4)(0);
  param_1[7] = (undefined4)(0);
  param_1[8] = (undefined4)(0);
  param_1[9] = (undefined4)(0);
  param_1[10] = (undefined4)(0);
  param_1[0xb] = (undefined4)(0);
  param_1[0xc] = (undefined4)(0);
  ppiVar6 = (int **)(&local_14);
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(7);
  this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton(), 0);
  piVar4 = (int *)((int *)((SCLibrary *)(this_))->getSCHousehold(), 0);
  piVar2 = (int *)((int *)*piVar4);
  *piVar4 = (int)(0);
  piVar4 = (int *)((int *)param_1[6]);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(8)));
  if ((int *)(piVar4) != (int *)(0x0)) {
    param_1[5] = (undefined4)(0);
    param_1[6] = (undefined4)(0);
    (**(code **)(*piVar4 + 8))(ppiVar6);
  }
  param_1[5] = (undefined4)(piVar2);
  if ((int *)(piVar2) == (int *)(0x0)) {
    uVar5 = (undefined4)(0);
  }
  else {
    uVar5 = (undefined4)((**(code **)(*piVar2 + 0xc))(), 0);
  }
  param_1[6] = (undefined4)(uVar5);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(9)));
  if ((int *)(local_14) != (int *)(0x0)) {
    (**(code **)(*local_14 + 8))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1061cd50; body size 76 bytes.
#line 1 "ENTRY_1061cd50"

void __fastcall FUN_1061cd50(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 1061cdc0; body size 273 bytes.
#line 1 "ENTRY_1061cdc0"

void __fastcall FUN_1061cdc0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCFetchLifecycleDevicesOp);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCFetchLifecycleDevicesOp);
  piVar1 = (int *)((int *)param_1[0xc]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[0xb] = (undefined4)(0);
    param_1[0xc] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)((int *)param_1[10]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[10] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }

  ((SCStr *)((SCStr *)(param_1 + 9)))->int_release();
  param_1[9] = (undefined4)(0);
  piVar1 = (int *)((int *)param_1[8]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[7] = (undefined4)(0);
    param_1[8] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[6]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[5] = (undefined4)(0);
    param_1[6] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCEventSinkDelegate);
  piVar1 = (int *)((int *)param_1[4]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[3] = (undefined4)(0);
    param_1[4] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 1061cf50; body size 294 bytes.
#line 1 "ENTRY_1061cf50"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1061cf50(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCFetchLifecycleDevicesOp);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCFetchLifecycleDevicesOp);
  piVar1 = (int *)((int *)param_1[0xc]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[0xb] = (undefined4)(0);
    param_1[0xc] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)((int *)param_1[10]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[10] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }

  ((SCStr *)((SCStr *)(param_1 + 9)))->int_release();
  param_1[9] = (undefined4)(0);
  piVar1 = (int *)((int *)param_1[8]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[7] = (undefined4)(0);
    param_1[8] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[6]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[5] = (undefined4)(0);
    param_1[6] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCEventSinkDelegate);
  piVar1 = (int *)((int *)param_1[4]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[3] = (undefined4)(0);
    param_1[4] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x34);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1061d120; body size 295 bytes.
#line 1 "ENTRY_1061d120"

void __fastcall FUN_1061d120(int param_1)

{
 try {
  SCStr *this_;
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  SCStr *pSVar5;
  int *local_1c;
  int *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_101da4a0(&local_1c,DAT_12126b84 ^ (uint)&stack0xfffffffc), 0);

  piVar3 = (int *)((int *)(**(code **)(*(int *)*puVar2 + 0x3c))(&local_18), 0);
  piVar1 = (int *)((int *)*piVar3);
  *piVar3 = (int)(0);
  piVar3 = (int *)(*(int **)(param_1 + 0x30), 0);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  if ((int *)(piVar3) != (int *)(0x0)) {
    *(undefined4*)(param_1 + 0x2c) = (undefined4)(0);
    *(undefined4*)(param_1 + 0x30) = (undefined4)(0);
    (**(code **)(*piVar3 + 8))();
  }
  *(int**)(param_1 + 0x2c) = (int *)(piVar1);
  if ((int *)(piVar1) == (int *)(0x0)) {
    uVar4 = (undefined4)(0);
  }
  else {
    uVar4 = (undefined4)((**(code **)(*piVar1 + 0xc))(), 0);
  }
  *(undefined4*)(param_1 + 0x30) = (undefined4)(uVar4);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  if ((int *)(local_18) != (int *)(0x0)) {
    (**(code **)(*local_18 + 8))();
  }

  if ((int *)(local_1c) != (int *)(0x0)) {
    (**(code **)(*local_1c + 8))();
  }

  if (*(int **)(param_1 + 0x2c) != (int *)((0x0))) {
    pSVar5 = (SCStr *)((SCStr *)(**(code **)(**(int **)(param_1 + 0x2c) + 0x84))(&local_14,0,0), 0);
    this_ = (SCStr *)((SCStr *)(param_1 + 0x24));

    if ((SCStr *)((pSVar5)) != (SCStr *)(this_)) {
      ((SCStr *)(this_))->int_release();
      *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)pSVar5));
      ((SCStr *)(this_))->int_addref();
    }

    ((SCStr *)((SCStr *)&local_14))->int_release();


    if ((*(char **)this_ != (char *)((0x0))) && (**(char **)this_ != '\0')) {
      thunk_FUN_1061d290();
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 1061d290; body size 938 bytes.
#line 1 "ENTRY_1061d290"

void __fastcall FUN_1061d290(int *param_1)

{
 try {
  SCLibrary *pSVar1;
  int *piVar2;
  int *piVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  SCStr *this_;
  int *local_24;
  int *local_20;
  int *local_1c;
  int local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  pSVar1 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton(), 0);
  if (*(int **)(*(int *)(pSVar1 + 0x4c) + 0xe8) == (int *)((0x0))) {
    thunk_FUN_112af4e0();

    return;
  }
  piVar2 = (int *)((int *)(**(code **)(**(int **)(*(int *)(pSVar1 + 0x4c) + 0xe8) + 4))(), 0);
  piVar3 = (int *)((int *)*piVar2);

  *piVar2 = (int)(0);
  if ((int *)(piVar3) == (int *)(0x0)) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar3 + 0xc))(), 0);
  }
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(1);
  if ((int *)(piVar3) == (int *)(0x0)) {
    piVar3 = (int *)((int *)param_1[10]);
    if ((int *)(piVar3) != (int *)(0x0)) {
      param_1[10] = (int)(0);
      (**(code **)(*piVar3 + 8))();
    }
    param_1[10] = (int)(0);
  }
  else {
    ((SCStr *)((SCStr *)&local_18))->int_allocRep("SCIUrlSessionProvider");
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(2);
    piVar3 = (int *)((int *)(**(code **)*piVar3)(), 0);
    iVar5 = (int)(*piVar3);
    *piVar3 = (int)(0);
    piVar3 = (int *)((int *)param_1[10]);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(3);
    if ((int *)(piVar3) != (int *)(0x0)) {
      param_1[10] = (int)(0);
      (**(code **)(*piVar3 + 8))();
    }
    param_1[10] = (int)(iVar5);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(4);
    if ((int *)(local_1c) != (int *)(0x0)) {
      (**(code **)(*local_1c + 8))();
    }
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(5);
    ((SCStr *)((SCStr *)&local_18))->int_release();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  if ((int *)(piVar2) != (int *)(0x0)) {
    (**(code **)(*piVar2 + 8))();
  }

  if ((int *)(local_20) != (int *)(0x0)) {
    (**(code **)(*local_20 + 8))();
  }

  if (param_1[10] == 0) {
    thunk_FUN_112af4e0();

    return;
  }
  pvVar4 = (void *)(operator_new(0x50), 0);

  if ((void *)(pvVar4) == (void *)(0x0)) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)thunk_FUN_10c653a0(), 0);
  }

  local_24 = (int *)((int *)0x0);
  if ((int *)(piVar3) != (int *)(0x0)) {
    local_24 = (int *)((int *)(**(code **)(*piVar3 + 0xc))(), 0);
    (**(code **)(*local_24 + 4))();
  }

  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(10);
  *(unsigned short*)((char *)&local_8 + 1) = (unsigned short)(0);
  piVar2 = (int *)((int *)(**(code **)(*(int *)param_1[5] + 0x14))(), 0);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xb)));
  iVar5 = (int)(thunk_FUN_1109f7f0(), 0);
  iVar5 = (int)(*(int *)(iVar5 + 0xfc));
  local_18 = (int)(iVar5);
  if ((iVar5 != 0) && (*(int *)(iVar5 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0();
  }
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0xc);
  this_ = (SCStr *)((SCStr *)&DAT_1186d2ee);
  if ((SCStr *)*piVar2 != (SCStr *)((0x0))) {
    this_ = (SCStr *)((SCStr *)*piVar2);
  }
  ((SCStr *)(this_))->format((char *)&local_14);
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0xd);
  if (((iVar5 != 0) && (*(int *)(iVar5 + -0x10) < 0xffff)) &&
     (iVar6 = (int)(thunk_FUN_1123fcd0(), 0), iVar6 == 0)) {
    *(undefined4*)(iVar5 + -8) = (undefined4)(0);
    *(undefined4*)(iVar5 + -0xc) = (undefined4)(0);
    thunk_FUN_113cfb70();
    free((int *)(iVar5 + -0x10));
  }
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0xe);
  ((SCStr *)((SCStr *)&local_1c))->int_release();
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(10);
  thunk_FUN_10c65f30();
  thunk_FUN_10c65960();
  (**(code **)(*piVar3 + 0x3c))();
  pvVar4 = (void *)(operator_new(0x34), 0);
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0xf);
  if ((void *)(pvVar4) == (void *)(0x0)) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    local_1c = (int *)((int * *)(&stack0xffffffb4));
    piVar2 = (int *)((int *)(**(code **)(*param_1 + 0xc))(), 0);
    (**(code **)(*piVar2 + 4))();
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x10);
    piVar2 = (int *)((int *)(**(code **)(*piVar3 + 0xc))(piVar3,0), 0);
    (**(code **)(*piVar2 + 4))(piVar3,piVar2);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0xf);
    piVar3 = (int *)((int *)thunk_FUN_10beed80(piVar3,piVar2), 0);
  }
  piVar2 = (int *)((int *)param_1[7]);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(10)));
  if ((int *)((piVar3)) == (int *)(piVar2)) {
LAB_1061d5d8:
    if ((int *)(piVar2) != (int *)(0x0)) {
      (**(code **)(*(int *)param_1[10] + 0x14))();
      goto LAB_1061d602;
    }
  }
  else {
    piVar2 = (int *)((int *)param_1[8]);
    if ((int *)(piVar2) != (int *)(0x0)) {
      param_1[7] = (int)(0);
      param_1[8] = (int)(0);
      (**(code **)(*piVar2 + 8))();
    }
    param_1[7] = (int)((int)piVar3);
    if ((int *)(piVar3) != (int *)(0x0)) {
      piVar3 = (int *)((int *)(**(code **)(*piVar3 + 0xc))(), 0);
      param_1[8] = (int)((int)piVar3);
      (**(code **)(*piVar3 + 4))();
      piVar2 = (int *)((int *)param_1[7]);
      goto LAB_1061d5d8;
    }
    param_1[8] = (int)(0);
  }
  thunk_FUN_112af4e0("SCLifecycleOp");
LAB_1061d602:
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x11)));
  ((SCStr *)((SCStr *)&local_14))->int_release();


  if ((int *)(local_24) != (int *)(0x0)) {
    (**(code **)(*local_24 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 1061d730; body size 1153 bytes.
#line 1 "ENTRY_1061d730"

undefined4 __fastcall FUN_1061d730(int param_1)

{
 try {
  SCStr *pSVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  bool bVar5;
  int *local_3c;
  int *local_38;
  int *local_34;
  int *local_30;
  int *local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  int *local_1c;
  int *local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;

  local_34 = (int *)((int *)0x0);
  local_14 = (char *)((char *)0x0);

  local_28 = (int)(param_1);
  if (*(char *)(param_1 + 0x2c) == '\0') {
    thunk_FUN_10436cd0(&local_2c,DAT_12126b84 ^ (uint)&stack0xfffffffc);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(5);
    pSVar1 = (SCStr *)((SCStr *)thunk_FUN_10436ac0(&local_18,&local_24), 0);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(6);
    if ((SCStr *)(pSVar1) != (SCStr *)((SCStr*)&local_14)) {
      ((SCStr *)((SCStr *)&local_14))->int_release();
      local_14 = (char *)(*(char **)pSVar1);
      ((SCStr *)((SCStr *)&local_14))->int_addref();
    }
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(7);
    ((SCStr *)((SCStr *)&local_18))->int_release();
    local_8 = (uint)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(8)));
  }
  else {
    thunk_FUN_10436cd0(&local_2c,DAT_12126b84 ^ (uint)&stack0xfffffffc);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(1);
    pSVar1 = (SCStr *)((SCStr *)thunk_FUN_10436c60(&local_18,&local_24), 0);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(2);
    if ((SCStr *)(pSVar1) != (SCStr *)((SCStr*)&local_14)) {
      ((SCStr *)((SCStr *)&local_14))->int_release();
      local_14 = (char *)(*(char **)pSVar1);
      ((SCStr *)((SCStr *)&local_14))->int_addref();
    }
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(3);
    ((SCStr *)((SCStr *)&local_18))->int_release();
    local_8 = (uint)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  }
  local_18 = (int *)((int *)0x0);
  if ((int *)(local_2c) != (int *)(0x0)) {
    (**(code **)(*local_2c + 8))();
  }
  local_8 = (uint)(local_8 & 0xffffff00);
  if (((char *)(local_14) == (char *)(0x0)) || (*local_14 == (char)(('\0')))) {
    thunk_FUN_112af4e0("SCAppUrlAction",1,"Aborting opening app store: URL is not available.");
    uVar3 = (undefined4)(0);
  }
  else if (*(char *)(param_1 + 0x2d) == '\0') {
    uVar3 = (undefined4)(createPropertyBag(), 0);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x19);
    thunk_FUN_101aa9f0(uVar3);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x1c);
    if ((int *)(local_34) != (int *)(0x0)) {
      (**(code **)(*local_34 + 8))();
    }
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x1b);
    ((SCStr *)((SCStr *)&local_18))->int_allocRep("appStoreUrl");
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x1d);
    (**(code **)(*local_3c + 0x1c))(&local_18,&local_14);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x1e);
    ((SCStr *)((SCStr *)&local_18))->int_release();
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x1b);
    ((SCStr *)((SCStr *)&local_18))->int_allocRep("isAppStoreUrl");
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x1f);
    (**(code **)(*local_3c + 0x40))(&local_18,local_24);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x20);
    ((SCStr *)((SCStr *)&local_18))->int_release();
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x1b);
    piVar2 = (int *)(operator_new(0x18), 0);
    if ((int *)(piVar2) == (int *)(0x0)) {
      piVar2 = (int *)((int *)0x0);
    }
    else {
      *piVar2 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
      piVar2[1] = (int)(0);
      g_lSCObjCount = (int)(g_lSCObjCount + 1);
      *piVar2 = (int)((int)(uint)&ghidra_vftable_SCDisplayCustomControlActionDescriptor);
      piVar2[2] = (int)(0x17);
      piVar2[3] = (int)(0);
      piVar2[4] = (int)(0);
      pSVar1 = (SCStr *)((SCStr *)(piVar2 + 5));
      *(undefined4*)pSVar1 = (undefined4)((SCStr *)(0));
      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x24);
      local_2c = (int *)(piVar2);
      if ((int *)(local_3c) != (int *)(0x0)) {
        piVar4 = (int *)((int *)piVar2[4]);
        if ((int *)(piVar4) != (int *)(0x0)) {
          piVar2[3] = (int)(0);
          piVar2[4] = (int)(0);
          (**(code **)(*piVar4 + 8))();
        }
        piVar2[3] = (int)((int)local_3c);
        piVar4 = (int *)((int *)(**(code **)(*local_3c + 0xc))(), 0);
        piVar2[4] = (int)((int)piVar4);
        (**(code **)(*piVar4 + 4))();
      }
      ((SCStr *)((SCStr *)&local_20))->int_allocRep("");
      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x25);
      if ((SCStr *)(&local_20) != (SCStr *)((pSVar1))) {
        ((SCStr *)(pSVar1))->int_release();
        *(undefined4*)pSVar1 = (undefined4)((SCStr *)(local_20));
        ((SCStr *)(pSVar1))->int_addref();
      }
      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x26);
      ((SCStr *)((SCStr *)&local_20))->int_release();
    }
    piVar4 = (int *)((int *)0x0);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x1b);
    local_2c = (int *)((int *)0x0);
    local_30 = (int *)(piVar2);
    if ((int *)(piVar2) != (int *)(0x0)) {
      piVar4 = (int *)(piVar2);
      if (*(code **)(*piVar2 + 0xc) != (code *)((thunk_FUN_101da390))) {
        piVar4 = (int *)((int *)(**(code **)(*piVar2 + 0xc))(), 0);
      }
      local_2c = (int *)(piVar4);
      (**(code **)(*piVar4 + 4))();
    }
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x27);
    uVar3 = (undefined4)((**(code **)(*piVar2 + 0x34))(&local_34), 0);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x28);
    thunk_FUN_10263630(uVar3);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x2b);
    if ((int *)(local_34) != (int *)(0x0)) {
      (**(code **)(*local_34 + 8))();
    }
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x2a);
    if (*(int *)(local_28 + 0x30) != 0) {
      (**(code **)(*local_1c + 0x1c))(*(int *)(local_28 + 0x30));
    }
    uVar3 = (undefined4)((**(code **)(*local_1c + 0x14))(), 0);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x2c);
    if ((int *)(local_18) != (int *)(0x0)) {
      (**(code **)(*local_18 + 8))();
    }
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x2d);
    if ((int *)(piVar4) != (int *)(0x0)) {
      (**(code **)(*piVar4 + 8))();
    }
    local_8 = (uint)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x2e)));
    if ((int *)(local_38) != (int *)(0x0)) {
      (**(code **)(*local_38 + 8))();
    }
  }
  else {
    piVar2 = (int *)(operator_new(0x10), 0);
    local_8 = (uint)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(10)));
    bVar5 = (bool)((int *)(piVar2) == (int *)(0x0));
    if (bVar5) {
      piVar2 = (int *)((int *)0x0);
    }
    else {
      local_2c = (int *)(piVar2);
      ((SCStr *)((SCStr *)&local_18))->int_allocRep("");
      *piVar2 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
      piVar2[1] = (int)(0);
      g_lSCObjCount = (int)(g_lSCObjCount + 1);
      local_34 = (int *)((int *)0x1);

      *piVar2 = (int)((int)(uint)&ghidra_vftable_SCOpenUrlActionDescriptor);
      ((SCStr *)((SCStr *)(piVar2 + 2)))->m_op_ctor((SCStr *)&local_18);
      local_8 = (uint)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xd)));
      ((SCStr *)((SCStr *)(piVar2 + 3)))->m_op_ctor((SCStr *)&local_14);
    }
    piVar4 = (int *)((int *)0x0);

    local_2c = (int *)((int *)0x0);
    local_30 = (int *)(piVar2);
    if ((int *)(piVar2) != (int *)(0x0)) {
      piVar4 = (int *)(piVar2);
      if (*(code **)(*piVar2 + 0xc) != (code *)((thunk_FUN_101da390))) {
        piVar4 = (int *)((int *)(**(code **)(*piVar2 + 0xc))(), 0);
      }
      local_2c = (int *)(piVar4);
      (**(code **)(*piVar4 + 4))();
    }
    *(unsigned short*)((char *)&local_8 + 1) = (unsigned short)(0);
    if (!bVar5) {
      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x11);
      *(unsigned short*)((char *)&local_8 + 1) = (unsigned short)(0);
      ((SCStr *)((SCStr *)&local_18))->int_release();
      local_18 = (int *)((int *)0x0);
    }
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x10);
    uVar3 = (undefined4)((**(code **)(*piVar2 + 0x34))(&local_34), 0);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x12);
    thunk_FUN_10263630(uVar3);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x15);
    if ((int *)(local_34) != (int *)(0x0)) {
      (**(code **)(*local_34 + 8))();
    }
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x14);
    if (*(int *)(local_28 + 0x30) != 0) {
      (**(code **)(*local_1c + 0x1c))(*(int *)(local_28 + 0x30));
    }
    uVar3 = (undefined4)((**(code **)(*local_1c + 0x14))(), 0);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x16);
    if ((int *)(local_18) != (int *)(0x0)) {
      (**(code **)(*local_18 + 8))();
    }
    local_8 = (uint)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x17)));
    if ((int *)(piVar4) != (int *)(0x0)) {
      (**(code **)(*piVar4 + 8))();
    }
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar3);

 } catch (...) { }
}


// Reference entry 1061dcf0; body size 103 bytes.
#line 1 "ENTRY_1061dcf0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1061dcf0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIUrlSessionCallback"), 0);
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if ((int *)(param_1) != (int *)(0x0)) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"), 0);
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
    *param_2 = (undefined4)(param_1);
    if ((int *)(param_1) != (int *)(0x0)) {
      (**(code **)(*param_1 + 4))();
    }
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1061dda0; body size 697 bytes.
#line 1 "ENTRY_1061dda0"

void __thiscall Recovered_Bulk::m_FUN_1061dda0(int *param_2)
{
  int param_1 = (int )this;
 try {
  undefined1 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined1 *puVar6;
  int *piVar7;
  undefined4 uVar8;
  char *pcVar9;
  int *local_30;
  int *local_24;
  int *local_20;
  int *local_1c;
  undefined1 *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (int)(param_1);
  puVar2 = (undefined4 *)((undefined4 *) (**(code **)(**(int **)(param_1 + 0x14) + 0x14)) (&local_1c,DAT_12126b84 ^ (uint)&stack0xfffffffc), 0);

  iVar3 = (int)(thunk_FUN_1109f7f0(), 0);
  piVar7 = (int *)(*(int **)(iVar3 + 0xfc), 0);
  local_24 = (int *)(piVar7);
  if (((int *)(piVar7) != (int *)(0x0)) && (piVar7[-4] < 0xffff)) {
    thunk_FUN_1123fce0(piVar7 + -4);
  }
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(1);
  puVar6 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*puVar2 != (undefined1 *)((0x0))) {
    puVar6 = (undefined1 *)((undefined1 *)*puVar2);
  }
  piVar4 = (int *)((int *)&DAT_1186d2ee);
  if ((int *)(piVar7) != (int *)(0x0)) {
    piVar4 = (int *)(piVar7);
  }
  ((SCStr *)((char *)&local_18))->stringWithFormat("/account/v1/users/%s/households/%s/lifecycleDevices",piVar4,puVar6);
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(4);
  if ((((int *)(piVar7) != (int *)(0x0)) && (piVar4 = (int *)(piVar7 + -4), *piVar4 < (int)((0xffff)))) &&
     (iVar3 = (int)(thunk_FUN_1123fcd0(piVar4), 0), iVar3 == 0)) {
    piVar7[-2] = (int)(0);
    piVar7[-3] = (int)(0);
    thunk_FUN_113cfb70(piVar7,piVar7[-1]);
    free(piVar4);
  }
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(6);
  ((SCStr *)((SCStr *)&local_1c))->int_release();
  piVar7 = (int *)((int *)0x0);
  local_1c = (int *)((int *)0x0);
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(7);
  uVar1 = (undefined1)((undefined1)local_8);
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(7);
  if (((int *)(param_2) == (int *)(0x0)) || ((int *)(param_2) != *(int **)(local_14 + 0x1c))) {
    puVar6 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)(local_18) != (undefined1 *)(0x0)) {
      puVar6 = (undefined1 *)(local_18);
    }
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(uVar1);
    thunk_FUN_112af4e0("SCLifecycleOp",1,"Error: bad connection from %s",puVar6);
    thunk_FUN_10391e10(0x194,0);
    goto LAB_1061e027;
  }
  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_10bf11c0(&local_20), 0);
  piVar4 = (int *)((int *)*puVar2);
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(10);
  *puVar2 = (undefined4)(0);
  local_24 = (int *)(piVar4);
  if ((int *)(piVar4) == (int *)(0x0)) {
    local_30 = (int *)((int *)0x0);
  }
  else {
    local_30 = (int *)((int *)(**(code **)(*piVar4 + 0xc))(), 0);
  }
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0xd);
  if ((int *)(local_20) != (int *)(0x0)) {
    (**(code **)(*local_20 + 8))();
  }
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0xc);
  if ((int *)(piVar4) == (int *)(0x0)) {
    puVar6 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)(local_18) != (undefined1 *)(0x0)) {
      puVar6 = (undefined1 *)(local_18);
    }
    thunk_FUN_112af4e0("SCLifecycleOp",1,"Error: null response from %s",puVar6);
    iVar3 = (int)(0x194);
    piVar4 = (int *)((int *)0x0);
LAB_1061dfe1:
    thunk_FUN_10391e10(iVar3,piVar4);
  }
  else {
    piVar4 = (int *)(*(int **)(local_14 + 0x1c), 0);
    iVar3 = (int)((**(code **)(*param_2 + 0x1c))(), 0);
    iVar5 = (int)((**(code **)(*piVar4 + 0x1c))(), 0);
    piVar4 = (int *)(local_24);
    if (iVar3 == iVar5) {
      iVar3 = (int)((**(code **)(*local_24 + 0x14))(), 0);
      iVar5 = (int)(thunk_FUN_10bf11e0(), 0);
      if (iVar5 == 0) {
        if (iVar3 != 200) {
          thunk_FUN_112af4e0("SCLifecycleOp",1,"HTTP error %d",iVar3);
          piVar4 = (int *)(local_1c);
          goto LAB_1061dfe1;
        }
        piVar7 = (int *)((int *)(**(code **)(*piVar4 + 0x2c))(&local_24), 0);
        local_1c = (int *)((int *)*piVar7);
        *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x11);
        *piVar7 = (int)(0);
        if ((int *)(local_1c) == (int *)(0x0)) {
          piVar7 = (int *)((int *)0x0);
        }
        else {
          piVar7 = (int *)((int *)(**(code **)(*local_1c + 0xc))(), 0);
        }
        *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x12);
        if ((int *)(local_24) != (int *)(0x0)) {
          (**(code **)(*local_24 + 8))();
        }
        pcVar9 = (char *)("HTTP 200: request has succeeded");
        *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0xc);
        uVar8 = (undefined4)(2);
      }
      else {
        pcVar9 = (char *)("Error: Connection Failed");
        uVar8 = (undefined4)(1);
      }
      thunk_FUN_112af4e0("SCLifecycleOp",uVar8,pcVar9);
      piVar4 = (int *)(local_1c);
      goto LAB_1061dfe1;
    }
  }
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x13);
  if ((int *)(local_30) != (int *)(0x0)) {
    (**(code **)(*local_30 + 8))();
  }
LAB_1061e027:
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x14)));
  if ((int *)(piVar7) != (int *)(0x0)) {
    (**(code **)(*piVar7 + 8))();
  }

  ((SCStr *)((SCStr *)&local_18))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 1061e120; body size 242 bytes.
#line 1 "ENTRY_1061e120"

int * __thiscall Recovered_Bulk::m_FUN_1061e120(int *param_2)
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
  if ((int *)(piVar4) == (int *)(0x0)) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar4 + 0xc))(uVar2), 0);
  }

  if ((int *)(piVar4) == (int *)(0x0)) {
    piVar4 = (int *)((int *)*param_1);
    if ((int *)(piVar4) != (int *)(0x0)) {
      *param_1 = (int)(0);
      (**(code **)(*piVar4 + 8))();
    }
    *param_1 = (int)(0);
  }
  else {
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("SCIClipboardDelegate");
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(1);
    piVar4 = (int *)((int *)(**(code **)*piVar4)(&local_14,&param_2), 0);
    iVar1 = (int)(*piVar4);
    *piVar4 = (int)(0);
    piVar4 = (int *)((int *)*param_1);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(2);
    if ((int *)(piVar4) != (int *)(0x0)) {
      *param_1 = (int)(0);
      (**(code **)(*piVar4 + 8))();
    }
    *param_1 = (int)(iVar1);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(3);
    if ((int *)(local_14) != (int *)(0x0)) {
      (**(code **)(*local_14 + 8))();
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
    ((SCStr *)((SCStr *)&param_2))->int_release();
  }

  if ((int *)(piVar3) != (int *)(0x0)) {
    (**(code **)(*piVar3 + 8))();
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 1061e250; body size 188 bytes.
#line 1 "ENTRY_1061e250"

int * __thiscall Recovered_Bulk::m_FUN_1061e250(undefined4 *param_2)
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
  if ((undefined4 *)(param_2) == (undefined4 *)(0x0)) {
    piVar4 = (int *)((int *)*param_1);
    if ((int *)(piVar4) != (int *)(0x0)) {
      *param_1 = (int)(0);
      (**(code **)(*piVar4 + 8))(uVar3);
    }
    *param_1 = (int)(0);
  }
  else {
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("SCIClipboardDelegate");

    piVar4 = (int *)((int *)(**(code **)*puVar2)(&local_14,&param_2), 0);
    iVar1 = (int)(*piVar4);
    *piVar4 = (int)(0);
    piVar4 = (int *)((int *)*param_1);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(1);
    if ((int *)(piVar4) != (int *)(0x0)) {
      *param_1 = (int)(0);
      (**(code **)(*piVar4 + 8))();
    }
    *param_1 = (int)(iVar1);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    if ((int *)(local_14) != (int *)(0x0)) {
      (**(code **)(*local_14 + 8))();
    }

    ((SCStr *)((SCStr *)&param_2))->int_release();
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 1061e420; body size 180 bytes.
#line 1 "ENTRY_1061e420"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1061e420(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);

  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(3);
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3), 0);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");

  ((SCStr *)((SCStr *)&param_3))->int_release();

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1061e510; body size 180 bytes.
#line 1 "ENTRY_1061e510"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1061e510(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);

  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(3);
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3), 0);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");

  ((SCStr *)((SCStr *)&param_3))->int_release();

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1061e600; body size 180 bytes.
#line 1 "ENTRY_1061e600"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1061e600(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);

  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(3);
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3), 0);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");

  ((SCStr *)((SCStr *)&param_3))->int_release();

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1061e6f0; body size 180 bytes.
#line 1 "ENTRY_1061e6f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1061e6f0(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);

  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(3);
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3), 0);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");

  ((SCStr *)((SCStr *)&param_3))->int_release();

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1061e8b0; body size 194 bytes.
#line 1 "ENTRY_1061e8b0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1061e8b0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCSubmitDiagsWizardDonePage");

  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(3);
  ((SCStr *)((SCStr *)&local_14))->int_release();

  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2), 0);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");

  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubmitDiagsWizardDonePageType);
  DAT_121a2244 = (int)(param_1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1061ea00; body size 194 bytes.
#line 1 "ENTRY_1061ea00"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1061ea00(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCSubmitDiagsWizardErrorPage");

  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(3);
  ((SCStr *)((SCStr *)&local_14))->int_release();

  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2), 0);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");

  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubmitDiagsWizardErrorPageType);
  DAT_121a2240 = (int)(param_1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1061eb50; body size 194 bytes.
#line 1 "ENTRY_1061eb50"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1061eb50(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCSubmitDiagsWizardIntroPage");

  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(3);
  ((SCStr *)((SCStr *)&local_14))->int_release();

  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2), 0);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");

  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubmitDiagsWizardIntroPageType);
  DAT_121a2238 = (int)(param_1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1061ecc0; body size 194 bytes.
#line 1 "ENTRY_1061ecc0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1061ecc0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCSubmitDiagsWizardSubmittingPage");

  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(3);
  ((SCStr *)((SCStr *)&local_14))->int_release();

  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2), 0);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");

  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubmitDiagsWizardSubmittingPageType);
  DAT_121a223c = (int)(param_1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1061edc0; body size 850 bytes.
#line 1 "ENTRY_1061edc0"

undefined4 * __fastcall FUN_1061edc0(undefined4 *param_1)

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


  ((SCStr *)((SCStr *)&local_18))->int_allocRep("SCSubmitDiagsWizard");

  thunk_FUN_106de2c0(&local_18);
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(3);
  ((SCStr *)((SCStr *)&local_18))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubmitDiagsWizardType);

  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(2);
  DAT_121a2248 = (int)(param_1);
  puVar2 = (undefined4 *)(operator_new(0xc), 0);
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(4);
  if ((undefined4 *)(puVar2) == (undefined4 *)(0x0)) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    ((SCStr *)((SCStr *)&local_1c))->int_allocRep("SCSubmitDiagsWizardIntroPage");
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(5);
    thunk_FUN_106de0c0(&local_1c,param_1);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(8);
    ((SCStr *)((SCStr *)&local_1c))->int_release();

    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(7);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
    pSVar3 = (SCStr *)((SCStr *)thunk_FUN_106dfa00((uint)&local_20), 0);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(9)));

    bVar1 = (bool)(((SCStr *)(pSVar3))->endsWith("Page"), 0);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(10);
    *(unsigned short*)((char *)&local_8 + 1) = (unsigned short)(0);
    ((SCStr *)((uint)&local_20))->int_release();
    if (bVar1) {
      *(unsigned short*)((char *)&local_8 + 1) = (unsigned short)(0);
    }
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCSubmitDiagsWizardIntroPageType);
    DAT_121a2238 = (int)(puVar2);
  }
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(2);
  thunk_FUN_106dfb80(puVar2);
  puVar2 = (undefined4 *)(operator_new(0xc), 0);
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0xd);
  if ((undefined4 *)(puVar2) == (undefined4 *)(0x0)) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    ((SCStr *)((SCStr *)&local_1c))->int_allocRep("SCSubmitDiagsWizardSubmittingPage");
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0xe);
    thunk_FUN_106de0c0(&local_1c,param_1);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x11);
    ((SCStr *)((SCStr *)&local_1c))->int_release();

    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x10);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
    pSVar3 = (SCStr *)((SCStr *)thunk_FUN_106dfa00((uint)&local_20), 0);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x12)));

    bVar1 = (bool)(((SCStr *)(pSVar3))->endsWith("Page"), 0);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x13);
    *(unsigned short*)((char *)&local_8 + 1) = (unsigned short)(0);
    ((SCStr *)((uint)&local_20))->int_release();
    if (bVar1) {
      *(unsigned short*)((char *)&local_8 + 1) = (unsigned short)(0);
    }
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCSubmitDiagsWizardSubmittingPageType);
    DAT_121a223c = (int)(puVar2);
  }
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(2);
  thunk_FUN_106dfb80(puVar2);
  puVar2 = (undefined4 *)(operator_new(0xc), 0);
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x16);
  if ((undefined4 *)(puVar2) == (undefined4 *)(0x0)) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    ((SCStr *)((SCStr *)&local_1c))->int_allocRep("SCSubmitDiagsWizardErrorPage");
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x17);
    thunk_FUN_106de0c0(&local_1c,param_1);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x1a);
    ((SCStr *)((SCStr *)&local_1c))->int_release();

    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x19);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
    pSVar3 = (SCStr *)((SCStr *)thunk_FUN_106dfa00((uint)&local_20), 0);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x1b)));

    bVar1 = (bool)(((SCStr *)(pSVar3))->endsWith("Page"), 0);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x1c);
    *(unsigned short*)((char *)&local_8 + 1) = (unsigned short)(0);
    ((SCStr *)((uint)&local_20))->int_release();
    if (bVar1) {
      *(unsigned short*)((char *)&local_8 + 1) = (unsigned short)(0);
    }
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCSubmitDiagsWizardErrorPageType);
    DAT_121a2240 = (int)(puVar2);
  }
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(2);
  thunk_FUN_106dfb80(puVar2);
  puVar2 = (undefined4 *)(operator_new(0xc), 0);
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x1f);
  if ((undefined4 *)(puVar2) == (undefined4 *)(0x0)) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    ((SCStr *)((SCStr *)&local_1c))->int_allocRep("SCSubmitDiagsWizardDonePage");
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x20);
    thunk_FUN_106de0c0(&local_1c,param_1);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x23);
    ((SCStr *)((SCStr *)&local_1c))->int_release();

    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x22);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
    pSVar3 = (SCStr *)((SCStr *)thunk_FUN_106dfa00((uint)&local_20), 0);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x24)));

    bVar1 = (bool)(((SCStr *)(pSVar3))->endsWith("Page"), 0);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x25);
    *(unsigned short*)((char *)&local_8 + 1) = (unsigned short)(0);
    ((SCStr *)((uint)&local_20))->int_release();
    if (bVar1) {
      *(unsigned short*)((char *)&local_8 + 1) = (unsigned short)(0);
    }
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCSubmitDiagsWizardDonePageType);
    DAT_121a2244 = (int)(puVar2);
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  thunk_FUN_106dfb80(puVar2);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1061f220; body size 119 bytes.
#line 1 "ENTRY_1061f220"

void __fastcall FUN_1061f220(int param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)(*(int **)(param_1 + 0x18), 0);

  if ((int *)(piVar1) != (int *)(0x0)) {
    *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
    *(undefined4*)(param_1 + 0x18) = (undefined4)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)(*(int **)(param_1 + 0x10), 0);

  if ((int *)(piVar1) != (int *)(0x0)) {
    *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
    *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 1061f300; body size 68 bytes.
#line 1 "ENTRY_1061f300"

void __fastcall FUN_1061f300(int *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)*param_1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (int)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 1061f360; body size 110 bytes.
#line 1 "ENTRY_1061f360"

void __fastcall FUN_1061f360(int param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_1 + 0xc)))->int_release();
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  piVar1 = (int *)(*(int **)(param_1 + 8), 0);

  if ((int *)(piVar1) != (int *)(0x0)) {
    *(undefined4*)(param_1 + 4) = (undefined4)(0);
    *(undefined4*)(param_1 + 8) = (undefined4)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 1061f3f0; body size 119 bytes.
#line 1 "ENTRY_1061f3f0"

void __fastcall FUN_1061f3f0(int param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)(*(int **)(param_1 + 0x18), 0);

  if ((int *)(piVar1) != (int *)(0x0)) {
    *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
    *(undefined4*)(param_1 + 0x18) = (undefined4)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)(*(int **)(param_1 + 0x10), 0);

  if ((int *)(piVar1) != (int *)(0x0)) {
    *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
    *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 1061f490; body size 110 bytes.
#line 1 "ENTRY_1061f490"

void __fastcall FUN_1061f490(int param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_1 + 0xc)))->int_release();
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  piVar1 = (int *)(*(int **)(param_1 + 8), 0);

  if ((int *)(piVar1) != (int *)(0x0)) {
    *(undefined4*)(param_1 + 4) = (undefined4)(0);
    *(undefined4*)(param_1 + 8) = (undefined4)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 1061f520; body size 110 bytes.
#line 1 "ENTRY_1061f520"

void __fastcall FUN_1061f520(int param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_1 + 0xc)))->int_release();
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  piVar1 = (int *)(*(int **)(param_1 + 8), 0);

  if ((int *)(piVar1) != (int *)(0x0)) {
    *(undefined4*)(param_1 + 4) = (undefined4)(0);
    *(undefined4*)(param_1 + 8) = (undefined4)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 1061f5c0; body size 125 bytes.
#line 1 "ENTRY_1061f5c0"

void __fastcall FUN_1061f5c0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[0x38]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[0x38] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb6cc0();

  return;

 } catch (...) { }
}


// Reference entry 1061f730; body size 135 bytes.
#line 1 "ENTRY_1061f730"

void __fastcall FUN_1061f730(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[0x39]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[0x38] = (undefined4)(0);
    param_1[0x39] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb6cc0();

  return;

 } catch (...) { }
}


// Reference entry 1061f800; body size 81 bytes.
#line 1 "ENTRY_1061f800"

void __fastcall FUN_1061f800(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubmitDiagsWizardType);
  if ((undefined4 *)(DAT_121a2238) != (undefined4 *)(0x0)) {
    (**(code **)DAT_121a2238)(1);
  }
  if ((undefined4 *)(DAT_121a223c) != (undefined4 *)(0x0)) {
    (**(code **)DAT_121a223c)(1);
  }
  if ((undefined4 *)(DAT_121a2240) != (undefined4 *)(0x0)) {
    (**(code **)DAT_121a2240)(1);
  }
  if ((undefined4 *)(DAT_121a2244) != (undefined4 *)(0x0)) {
    (**(code **)DAT_121a2244)(1);
  }
  thunk_FUN_106de840();
  return;
}


// Reference entry 1061f960; body size 68 bytes.
#line 1 "ENTRY_1061f960"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1061f960(byte param_2)
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


// Reference entry 1061fab0; body size 149 bytes.
#line 1 "ENTRY_1061fab0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1061fab0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[0x38]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[0x38] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe4);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


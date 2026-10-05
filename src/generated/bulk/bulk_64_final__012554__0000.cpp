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
extern "C" void LAB_1000117c(void);
extern "C" void LAB_100021ee(void);
extern "C" void LAB_10002699(void);
extern "C" void LAB_1000269e(void);
extern "C" void LAB_10002e55(void);
extern "C" void LAB_10002eeb(void);
extern "C" void LAB_1000335f(void);
extern "C" void LAB_10005975(void);
extern "C" void LAB_10005f9c(void);
extern "C" void LAB_1000825b(void);
extern "C" void LAB_1000858a(void);
extern "C" void LAB_1000a416(void);
extern "C" void LAB_1000ba05(void);
extern "C" void LAB_1000c54a(void);
extern "C" void LAB_1000d2bf(void);
extern "C" void LAB_1000dbd9(void);
extern "C" void LAB_1000dce2(void);
extern "C" void LAB_1000e845(void);
extern "C" void LAB_10011153(void);
extern "C" void LAB_100121fc(void);
extern "C" void LAB_1001246d(void);
extern "C" void LAB_10013192(void);
extern "C" void LAB_100131d8(void);
extern "C" void LAB_10013f02(void);
extern "C" void LAB_10014e57(void);
extern "C" void LAB_100151b3(void);
extern "C" void LAB_10015e74(void);
extern "C" void LAB_1001718e(void);
extern "C" void LAB_10017436(void);
extern "C" void LAB_10017f3a(void);
extern "C" void LAB_10018bab(void);
extern "C" void LAB_10019754(void);
extern "C" void LAB_1001a0a5(void);
extern "C" void LAB_1001adca(void);
extern "C" void LAB_1001c9c2(void);
extern "C" void LAB_1001df39(void);
extern "C" void LAB_1001fe15(void);
extern "C" void LAB_1002097d(void);
extern "C" void LAB_100217ec(void);
extern "C" void LAB_10021b66(void);
extern "C" void LAB_100238df(void);
extern "C" void LAB_10023fe2(void);
extern "C" void LAB_10024127(void);
extern "C" void LAB_100246a4(void);
extern "C" void LAB_100246a9(void);
extern "C" void LAB_10024da2(void);
extern "C" void LAB_10024f14(void);
extern "C" void LAB_1002585b(void);
extern "C" void LAB_1002682d(void);
extern "C" void LAB_10026ac6(void);
extern "C" void LAB_1002806a(void);
extern "C" void LAB_10029d89(void);
extern "C" void LAB_1002a973(void);
extern "C" void LAB_1002b78d(void);
extern "C" void LAB_1002c8cc(void);
extern "C" void LAB_1002c94e(void);
extern "C" void LAB_1002da2e(void);
extern "C" void LAB_1002dc09(void);
extern "C" void LAB_1002e40b(void);
extern "C" void LAB_1002e410(void);
extern "C" void LAB_1002f969(void);
extern "C" void LAB_10036c23(void);
extern "C" void LAB_10038122(void);
extern "C" void LAB_100382f3(void);
extern "C" void LAB_100389b0(void);
extern "C" void LAB_10038c3a(void);
extern "C" void LAB_100391cb(void);
extern "C" void LAB_10039261(void);
extern "C" void LAB_10039978(void);
extern "C" void LAB_10039ef5(void);
extern "C" void LAB_1003a1de(void);
extern "C" void LAB_1003a6cf(void);
extern "C" void LAB_1003b6d8(void);
extern "C" void LAB_1003c03d(void);
extern "C" void LAB_1003d1f9(void);
extern "C" void LAB_1003d9dd(void);
extern "C" void LAB_1003e9c8(void);
extern "C" void LAB_1003f9e0(void);
extern "C" void LAB_100420b9(void);
extern "C" void LAB_100420be(void);
extern "C" void LAB_1004216d(void);
extern "C" void LAB_10042208(void);
extern "C" void LAB_10043856(void);
extern "C" void LAB_10045610(void);
extern "C" void LAB_100461eb(void);
extern "C" void LAB_10047b68(void);
extern "C" void LAB_1004980a(void);
extern "C" void LAB_10049a94(void);
extern "C" void LAB_10049fb7(void);
extern "C" void LAB_1004ba10(void);
extern "C" void LAB_1004d513(void);
extern "C" void LAB_1004d7d9(void);
extern "C" void LAB_1004dc43(void);
extern "C" void LAB_1004ec47(void);
extern "C" void LAB_1004f4c1(void);
extern "C" void LAB_1004f886(void);
extern "C" void LAB_10050d58(void);
extern "C" void LAB_10050d6c(void);
extern "C" void LAB_10051c49(void);
extern "C" void LAB_10051e4c(void);
extern "C" void LAB_1005273e(void);
extern "C" void LAB_100535ad(void);
extern "C" void LAB_10053e77(void);
extern "C" void LAB_1005600f(void);
extern "C" void LAB_100569d3(void);
extern "C" void LAB_100584db(void);
extern "C" void LAB_10058544(void);
extern "C" void LAB_10058fb7(void);
extern "C" void LAB_100593ef(void);
extern "C" void LAB_10059e7b(void);
extern "C" void LAB_1005a0d8(void);
extern "C" void LAB_1005c06d(void);
extern "C" void LAB_1005c11c(void);
extern "C" void LAB_1005c315(void);
extern "C" void LAB_1005d2f6(void);
extern "C" void LAB_1005dcb0(void);
extern "C" void LAB_1005de7c(void);
extern "C" void LAB_1005e133(void);
extern "C" void LAB_1005e372(void);
extern "C" void LAB_1005ff38(void);
extern "C" void LAB_1006005a(void);
extern "C" void LAB_100606b8(void);
extern "C" void LAB_10061455(void);
extern "C" void LAB_100619fa(void);
extern "C" void LAB_10062152(void);
extern "C" void LAB_10062b93(void);
extern "C" void LAB_10063403(void);
extern "C" void LAB_1006403d(void);
extern "C" void LAB_10064623(void);
extern "C" void LAB_10066c8e(void);
extern "C" void LAB_10066e8c(void);
extern "C" void LAB_100686e2(void);
extern "C" void LAB_1006912d(void);
extern "C" void LAB_100692db(void);
extern "C" void LAB_1006a316(void);
extern "C" void LAB_1006b3f1(void);
extern "C" void LAB_1006ce95(void);
extern "C" void LAB_1006dabb(void);
extern "C" void LAB_10070bd5(void);
extern "C" void LAB_10070cb6(void);
extern "C" void LAB_100713f0(void);
extern "C" void LAB_10073146(void);
extern "C" void LAB_10073fce(void);
extern "C" void LAB_10074c85(void);
extern "C" void LAB_1007610c(void);
extern "C" void LAB_100763b9(void);
extern "C" void LAB_10076445(void);
extern "C" void LAB_1007693b(void);
extern "C" void LAB_10077f70(void);
extern "C" void LAB_10079cad(void);
extern "C" void LAB_1007a365(void);
extern "C" void LAB_1007a7a2(void);
extern "C" void LAB_1007a8a6(void);
extern "C" void LAB_1007af4a(void);
extern "C" void LAB_1007b788(void);
extern "C" void LAB_1007e307(void);
extern "C" void LAB_1007e695(void);
extern "C" void LAB_1007e749(void);
extern "C" void LAB_1007eadc(void);
extern "C" void LAB_1007f8c4(void);
extern "C" void LAB_1007f941(void);
extern "C" void LAB_1007fcc0(void);
extern "C" void LAB_1007ff40(void);
extern "C" void LAB_10080bcf(void);
extern "C" void LAB_100819df(void);
extern "C" void LAB_10081b9c(void);
extern "C" void LAB_1008339d(void);
extern "C" void LAB_1008354b(void);
extern "C" void LAB_10084699(void);
extern "C" void LAB_10086075(void);
extern "C" void LAB_10086381(void);
extern "C" void LAB_10086ecb(void);
extern "C" void LAB_10087128(void);
extern "C" void LAB_10087529(void);
extern "C" void LAB_10088190(void);
extern "C" void LAB_10088a0f(void);
extern "C" void LAB_10089f2c(void);
extern "C" void LAB_1008ab11(void);
extern "C" void LAB_1008b8b8(void);
extern "C" void LAB_1008ca83(void);
extern "C" void LAB_1008cc95(void);
extern "C" void LAB_1008cfec(void);
extern "C" void LAB_1008d771(void);
extern "C" void LAB_1008dd25(void);
extern "C" void LAB_1008dd2a(void);
extern "C" void LAB_1008f6a7(void);
extern "C" void LAB_100904ad(void);
extern "C" void LAB_1009058e(void);
extern "C" void LAB_10090cd2(void);
extern "C" void LAB_10090eb7(void);
extern "C" void LAB_10093da1(void);
extern "C" void LAB_10094611(void);
extern "C" void LAB_10095656(void);
extern "C" void LAB_10095a84(void);
extern "C" void LAB_10095bf1(void);
extern "C" void LAB_10097217(void);
extern "C" void LAB_100974ab(void);
extern "C" void LAB_10097cbc(void);
extern "C" void LAB_10098626(void);
extern "C" void LAB_10098694(void);
extern "C" void LAB_10098c70(void);
extern "C" void LAB_10099acb(void);
extern "C" void LAB_1060cb17(void);
extern "C" void LAB_1060cb3f(void);
extern "C" void LAB_1060d625(void);
extern "C" void LAB_1060d64d(void);
extern "C" void LAB_1060e118(void);
extern "C" void LAB_1060e140(void);
extern "C" void LAB_1060eb65(void);
extern "C" void LAB_1060eb8d(void);
extern "C" void LAB_1060f535(void);
extern "C" void LAB_1060f55d(void);
extern "C" void LAB_1060fb1b(void);
extern "C" void LAB_1060fb86(void);
extern "C" void LAB_1060fc48(void);
extern "C" void LAB_1060fc51(void);
extern "C" void LAB_10610055(void);
extern "C" void LAB_1061007d(void);
extern "C" void LAB_10610759(void);
extern "C" void LAB_10610781(void);
extern "C" void LAB_1061143c(void);
extern "C" void LAB_106133d7(void);
extern "C" void LAB_10615995(void);
extern "C" void LAB_10618b72(void);
extern "C" void LAB_106195fc(void);
extern "C" void LAB_1061960c(void);
extern "C" void LAB_1061a7e9(void);
extern "C" void LAB_1061abd5(void);
extern "C" void LAB_1061ac70(void);
extern "C" void LAB_1061b0d0(void);
extern "C" void LAB_1061b1f3(void);
extern "C" void LAB_1061b2ec(void);
extern "C" void LAB_1061b404(void);
extern "C" void LAB_1061b56b(void);
extern "C" void LAB_1061bb7b(void);
extern "C" void LAB_1061bf26(void);
extern "C" void LAB_1061c1d8(void);
extern "C" void LAB_1061c1e9(void);
extern "C" void LAB_1061d97b(void);
extern "C" void LAB_1061dac7(void);
extern "C" void LAB_1061db78(void);
extern "C" void LAB_1061db8e(void);
extern "C" void LAB_1061dfe1(void);
extern "C" void LAB_1061dfe6(void);
extern "C" void LAB_1061dff8(void);
extern "C" void LAB_1061eeda(void);
extern "C" void LAB_1061ef8c(void);
extern "C" void LAB_1061f03e(void);
extern "C" void LAB_1061f0f0(void);
extern "C" void LAB_115bbc47(void);
extern "C" void LAB_115bbde7(void);
extern "C" void LAB_115bbf8d(void);
extern "C" void LAB_115bc0e9(void);
extern "C" void LAB_115bc267(void);
extern "C" void LAB_115bc34d(void);
extern "C" void LAB_115bc3f5(void);
extern "C" void LAB_115bc522(void);
extern "C" void LAB_115bc5bd(void);
extern "C" void LAB_115bc67a(void);
extern "C" void LAB_115bc705(void);
extern "C" void LAB_115bc765(void);
extern "C" void LAB_115bc7bd(void);
extern "C" void LAB_115bc815(void);
extern "C" void LAB_115bc875(void);
extern "C" void LAB_115bc8fb(void);
extern "C" void LAB_115bc955(void);
extern "C" void LAB_115bc9c8(void);
extern "C" void LAB_115bca2d(void);
extern "C" void LAB_115bca95(void);
extern "C" void LAB_115bcb51(void);
extern "C" void LAB_115bcbd5(void);
extern "C" void LAB_115bcc25(void);
extern "C" void LAB_115bcce5(void);
extern "C" void LAB_115bce76(void);
extern "C" void LAB_115bcf25(void);
extern "C" void LAB_115bd1de(void);
extern "C" void LAB_115bd319(void);
extern "C" void LAB_115bd395(void);
extern "C" void LAB_115bd405(void);
extern "C" void LAB_115bd4a9(void);
extern "C" void LAB_115bd525(void);
extern "C" void LAB_115bd595(void);
extern "C" void LAB_115bd689(void);
extern "C" void LAB_115bd715(void);
extern "C" void LAB_115bd7b9(void);
extern "C" void LAB_115bd81d(void);
extern "C" void LAB_115bd870(void);
extern "C" void LAB_115bd8ad(void);
extern "C" void LAB_115bd8ed(void);
extern "C" void LAB_115bd92d(void);
extern "C" void LAB_115bd9bf(void);
extern "C" void LAB_115bda55(void);
extern "C" void LAB_115bdaad(void);
extern "C" void LAB_115bdba7(void);
extern "C" void LAB_115bdc1d(void);
extern "C" void LAB_115bdc65(void);
extern "C" void LAB_115bdca5(void);
extern "C" void LAB_115bdd22(void);
extern "C" void LAB_115bdd75(void);
extern "C" void LAB_115bddb5(void);
extern "C" void LAB_115bde15(void);
extern "C" void LAB_115bde6d(void);
extern "C" void LAB_115bdeb5(void);
extern "C" void LAB_115bdeed(void);
extern "C" void LAB_115bdf35(void);
extern "C" void LAB_115bdfd5(void);
extern "C" void LAB_115be082(void);
extern "C" void LAB_115be0c0(void);
extern "C" void LAB_115be0f0(void);
extern "C" void LAB_115be120(void);
extern "C" void LAB_115be40d(void);
extern "C" void LAB_115be4ab(void);
extern "C" void LAB_115be5dd(void);
extern "C" void LAB_115be67d(void);
extern "C" void LAB_115be6cd(void);
extern "C" void LAB_115be715(void);
extern "C" void LAB_115be76e(void);
extern "C" void LAB_115be7ce(void);
extern "C" void LAB_115be82e(void);
extern "C" void LAB_115be88e(void);
extern "C" void LAB_115be8ee(void);
extern "C" void LAB_115be94e(void);
extern "C" void LAB_115be9ae(void);
extern "C" void LAB_115bea0e(void);
extern "C" void LAB_115beb35(void);
extern "C" void LAB_115beba0(void);
extern "C" void LAB_115bebd0(void);
extern "C" void LAB_115bec00(void);
extern "C" void LAB_115bec30(void);
extern "C" void LAB_115bec60(void);
extern "C" void LAB_115bec90(void);
extern "C" void LAB_115becc0(void);
extern "C" void LAB_115becf0(void);
extern "C" void LAB_115bed20(void);
extern "C" void LAB_1186d2ee(void);
extern "C" void LAB_1186d2f4(void);
extern "C" void LAB_1186d30c(void);
extern "C" void LAB_1186de50(void);
extern "C" void LAB_1186e230(void);
extern "C" void LAB_1186f62c(void);
extern "C" void LAB_1186f6c0(void);
extern "C" void LAB_1186f88c(void);
extern "C" void LAB_11878170(void);
extern "C" void LAB_11878294(void);
extern "C" void LAB_118782a4(void);
extern "C" void LAB_11878d88(void);
extern "C" void LAB_1187b7d4(void);
extern "C" void LAB_1187bf80(void);
extern "C" void LAB_1187bf90(void);
extern "C" void LAB_1187bfa0(void);
extern "C" void LAB_11881498(void);
extern "C" void LAB_11882ff0(void);
extern "C" void LAB_11883704(void);
extern "C" void LAB_11883dcc(void);
extern "C" void LAB_1188465c(void);
extern "C" void LAB_118871d4(void);
extern "C" void LAB_11888200(void);
extern "C" void LAB_11889228(void);
extern "C" void LAB_1189cc48(void);
extern "C" void LAB_1189cc70(void);
extern "C" void LAB_1189f4a8(void);
extern "C" void LAB_118a2cac(void);
extern "C" void LAB_118a6bec(void);
extern "C" void LAB_118abe0c(void);
extern "C" void LAB_118bc0c0(void);
extern "C" void LAB_118bc0e4(void);
extern "C" void LAB_118bc9b4(void);
extern "C" void LAB_118bc9e0(void);
extern "C" void LAB_118bca00(void);
extern "C" void LAB_118bca1c(void);
extern "C" void LAB_118bca3c(void);
extern "C" void LAB_118bca4c(void);
extern "C" void LAB_118bca5c(void);
extern "C" void LAB_118bca78(void);
extern "C" void LAB_118bcaa0(void);
extern "C" void LAB_118bcabc(void);
extern "C" void LAB_118bcc00(void);
extern "C" void LAB_118bcc10(void);
extern "C" void LAB_118bcc2c(void);
extern "C" void LAB_118bcc48(void);
extern "C" void LAB_118bcc5c(void);
extern "C" void LAB_118bcc7c(void);
extern "C" void LAB_118bcc88(void);
extern "C" void LAB_118bcc90(void);
extern "C" void LAB_118bccb0(void);
extern "C" void LAB_118bccd4(void);
extern "C" void LAB_118bd24c(void);
extern "C" void LAB_118bd268(void);
extern "C" void LAB_118bd270(void);
extern "C" void LAB_118bd310(void);
extern "C" void LAB_118bd3bc(void);
extern "C" void LAB_118bd474(void);
extern "C" void LAB_118bd5c0(void);
extern "C" void LAB_118bdbb4(void);
extern "C" void LAB_118bdbdc(void);
extern "C" void LAB_118bdef4(void);
extern "C" void LAB_118bdf00(void);
extern "C" void LAB_118bdf24(void);
extern "C" void LAB_118bdfd0(void);
extern "C" void LAB_118be11c(void);
extern "C" void LAB_118be1d8(void);
extern "C" void LAB_118be1e8(void);
extern "C" void LAB_118be644(void);
extern "C" void LAB_118be660(void);
extern "C" void LAB_118be678(void);
extern "C" void LAB_118be6a0(void);
extern "C" void LAB_118be6b0(void);
extern "C" void LAB_118be6f0(void);
extern "C" void LAB_118be714(void);
extern "C" void LAB_118be724(void);
extern "C" void LAB_118be748(void);
extern "C" void LAB_118be770(void);
extern "C" void LAB_118be780(void);
extern "C" void LAB_118be7a0(void);
extern "C" void LAB_118be7dc(void);
extern "C" void LAB_118be81c(void);
extern "C" void LAB_118be860(void);
extern "C" void LAB_118be89c(void);
extern "C" void LAB_118be944(void);
extern "C" void LAB_118be95c(void);
extern "C" void LAB_118be970(void);
extern "C" void LAB_118be980(void);
extern "C" void LAB_118be9a8(void);
extern "C" void LAB_118be9bc(void);
extern "C" void LAB_118be9cc(void);
extern "C" void LAB_118be9f8(void);
extern "C" void LAB_118bea0c(void);
extern "C" void LAB_118bea1c(void);
extern "C" void LAB_118bea44(void);
extern "C" void LAB_118bea58(void);
extern "C" void LAB_118bea68(void);
extern "C" void LAB_118bea8c(void);
extern "C" void LAB_118beaa8(void);
extern "C" void LAB_118beb04(void);
extern "C" void LAB_118beb10(void);
extern "C" void LAB_118beb1c(void);
extern "C" void LAB_12126b84(void);
extern "C" void LAB_121a0e68(void);
extern "C" void LAB_121a2128(void);
extern "C" void LAB_121a212c(void);
extern "C" void LAB_121a2130(void);
extern "C" void LAB_121a2134(void);
extern "C" void LAB_121a2138(void);
extern "C" void LAB_121a213c(void);
extern "C" void LAB_121a2140(void);
extern "C" void LAB_121a2144(void);
extern "C" void LAB_121a2148(void);
extern "C" void LAB_121a214c(void);
extern "C" void LAB_121a2150(void);
extern "C" void LAB_121a2154(void);
extern "C" void LAB_121a2158(void);
extern "C" void LAB_121a215c(void);
extern "C" void LAB_121a2160(void);
extern "C" void LAB_121a2164(void);
extern "C" void LAB_121a2168(void);
extern "C" void LAB_121a216c(void);
extern "C" void LAB_121a2170(void);
extern "C" void LAB_121a2174(void);
extern "C" void LAB_121a2178(void);
extern "C" void LAB_121a217c(void);
extern "C" void LAB_121a2180(void);
extern "C" void LAB_121a2184(void);
extern "C" void LAB_121a2188(void);
extern "C" void LAB_121a218c(void);
extern "C" void LAB_121a2190(void);
extern "C" void LAB_121a2238(void);
extern "C" void LAB_121a223c(void);
extern "C" void LAB_121a2240(void);
extern "C" void LAB_121a2244(void);
extern "C" void LAB_121a2248(void);
extern "C" void LAB_121a2650(void);
extern "C" void LAB_122f5674(void);
extern "C" void LAB_122fc888(void);

extern "C" void LAB_1000117c(void);
extern "C" void LAB_100021ee(void);
extern "C" void LAB_10002699(void);
extern "C" void LAB_1000269e(void);
extern "C" void LAB_10002e55(void);
extern "C" void LAB_10002eeb(void);
extern "C" void LAB_1000335f(void);
extern "C" void LAB_10005975(void);
extern "C" void LAB_10005f9c(void);
extern "C" void LAB_1000825b(void);
extern "C" void LAB_1000858a(void);
extern "C" void LAB_1000a416(void);
extern "C" void LAB_1000ba05(void);
extern "C" void LAB_1000c54a(void);
extern "C" void LAB_1000d2bf(void);
extern "C" void LAB_1000dbd9(void);
extern "C" void LAB_1000dce2(void);
extern "C" void LAB_1000e845(void);
extern "C" void LAB_10011153(void);
extern "C" void LAB_100121fc(void);
extern "C" void LAB_1001246d(void);
extern "C" void LAB_10013192(void);
extern "C" void LAB_100131d8(void);
extern "C" void LAB_10013f02(void);
extern "C" void LAB_10014e57(void);
extern "C" void LAB_100151b3(void);
extern "C" void LAB_10015e74(void);
extern "C" void LAB_1001718e(void);
extern "C" void LAB_10017436(void);
extern "C" void LAB_10017f3a(void);
extern "C" void LAB_10018bab(void);
extern "C" void LAB_10019754(void);
extern "C" void LAB_1001a0a5(void);
extern "C" void LAB_1001adca(void);
extern "C" void LAB_1001c9c2(void);
extern "C" void LAB_1001df39(void);
extern "C" void LAB_1001fe15(void);
extern "C" void LAB_1002097d(void);
extern "C" void LAB_100217ec(void);
extern "C" void LAB_10021b66(void);
extern "C" void LAB_100238df(void);
extern "C" void LAB_10023fe2(void);
extern "C" void LAB_10024127(void);
extern "C" void LAB_100246a4(void);
extern "C" void LAB_100246a9(void);
extern "C" void LAB_10024da2(void);
extern "C" void LAB_10024f14(void);
extern "C" void LAB_1002585b(void);
extern "C" void LAB_1002682d(void);
extern "C" void LAB_10026ac6(void);
extern "C" void LAB_1002806a(void);
extern "C" void LAB_10029d89(void);
extern "C" void LAB_1002a973(void);
extern "C" void LAB_1002b78d(void);
extern "C" void LAB_1002c8cc(void);
extern "C" void LAB_1002c94e(void);
extern "C" void LAB_1002da2e(void);
extern "C" void LAB_1002dc09(void);
extern "C" void LAB_1002e40b(void);
extern "C" void LAB_1002e410(void);
extern "C" void LAB_1002f969(void);
extern "C" void LAB_10036c23(void);
extern "C" void LAB_10038122(void);
extern "C" void LAB_100382f3(void);
extern "C" void LAB_100389b0(void);
extern "C" void LAB_10038c3a(void);
extern "C" void LAB_100391cb(void);
extern "C" void LAB_10039261(void);
extern "C" void LAB_10039978(void);
extern "C" void LAB_10039ef5(void);
extern "C" void LAB_1003a1de(void);
extern "C" void LAB_1003a6cf(void);
extern "C" void LAB_1003b6d8(void);
extern "C" void LAB_1003c03d(void);
extern "C" void LAB_1003d1f9(void);
extern "C" void LAB_1003d9dd(void);
extern "C" void LAB_1003e9c8(void);
extern "C" void LAB_1003f9e0(void);
extern "C" void LAB_100420b9(void);
extern "C" void LAB_100420be(void);
extern "C" void LAB_1004216d(void);
extern "C" void LAB_10042208(void);
extern "C" void LAB_10043856(void);
extern "C" void LAB_10045610(void);
extern "C" void LAB_100461eb(void);
extern "C" void LAB_10047b68(void);
extern "C" void LAB_1004980a(void);
extern "C" void LAB_10049a94(void);
extern "C" void LAB_10049fb7(void);
extern "C" void LAB_1004ba10(void);
extern "C" void LAB_1004d513(void);
extern "C" void LAB_1004d7d9(void);
extern "C" void LAB_1004dc43(void);
extern "C" void LAB_1004ec47(void);
extern "C" void LAB_1004f4c1(void);
extern "C" void LAB_1004f886(void);
extern "C" void LAB_10050d58(void);
extern "C" void LAB_10050d6c(void);
extern "C" void LAB_10051c49(void);
extern "C" void LAB_10051e4c(void);
extern "C" void LAB_1005273e(void);
extern "C" void LAB_100535ad(void);
extern "C" void LAB_10053e77(void);
extern "C" void LAB_1005600f(void);
extern "C" void LAB_100569d3(void);
extern "C" void LAB_100584db(void);
extern "C" void LAB_10058544(void);
extern "C" void LAB_10058fb7(void);
extern "C" void LAB_100593ef(void);
extern "C" void LAB_10059e7b(void);
extern "C" void LAB_1005a0d8(void);
extern "C" void LAB_1005c06d(void);
extern "C" void LAB_1005c11c(void);
extern "C" void LAB_1005c315(void);
extern "C" void LAB_1005d2f6(void);
extern "C" void LAB_1005dcb0(void);
extern "C" void LAB_1005de7c(void);
extern "C" void LAB_1005e133(void);
extern "C" void LAB_1005e372(void);
extern "C" void LAB_1005ff38(void);
extern "C" void LAB_1006005a(void);
extern "C" void LAB_100606b8(void);
extern "C" void LAB_10061455(void);
extern "C" void LAB_100619fa(void);
extern "C" void LAB_10062152(void);
extern "C" void LAB_10062b93(void);
extern "C" void LAB_10063403(void);
extern "C" void LAB_1006403d(void);
extern "C" void LAB_10064623(void);
extern "C" void LAB_10066c8e(void);
extern "C" void LAB_10066e8c(void);
extern "C" void LAB_100686e2(void);
extern "C" void LAB_1006912d(void);
extern "C" void LAB_100692db(void);
extern "C" void LAB_1006a316(void);
extern "C" void LAB_1006b3f1(void);
extern "C" void LAB_1006ce95(void);
extern "C" void LAB_1006dabb(void);
extern "C" void LAB_10070bd5(void);
extern "C" void LAB_10070cb6(void);
extern "C" void LAB_100713f0(void);
extern "C" void LAB_10073146(void);
extern "C" void LAB_10073fce(void);
extern "C" void LAB_10074c85(void);
extern "C" void LAB_1007610c(void);
extern "C" void LAB_100763b9(void);
extern "C" void LAB_10076445(void);
extern "C" void LAB_1007693b(void);
extern "C" void LAB_10077f70(void);
extern "C" void LAB_10079cad(void);
extern "C" void LAB_1007a365(void);
extern "C" void LAB_1007a7a2(void);
extern "C" void LAB_1007a8a6(void);
extern "C" void LAB_1007af4a(void);
extern "C" void LAB_1007b788(void);
extern "C" void LAB_1007e307(void);
extern "C" void LAB_1007e695(void);
extern "C" void LAB_1007e749(void);
extern "C" void LAB_1007eadc(void);
extern "C" void LAB_1007f8c4(void);
extern "C" void LAB_1007f941(void);
extern "C" void LAB_1007fcc0(void);
extern "C" void LAB_1007ff40(void);
extern "C" void LAB_10080bcf(void);
extern "C" void LAB_100819df(void);
extern "C" void LAB_10081b9c(void);
extern "C" void LAB_1008339d(void);
extern "C" void LAB_1008354b(void);
extern "C" void LAB_10084699(void);
extern "C" void LAB_10086075(void);
extern "C" void LAB_10086381(void);
extern "C" void LAB_10086ecb(void);
extern "C" void LAB_10087128(void);
extern "C" void LAB_10087529(void);
extern "C" void LAB_10088190(void);
extern "C" void LAB_10088a0f(void);
extern "C" void LAB_10089f2c(void);
extern "C" void LAB_1008ab11(void);
extern "C" void LAB_1008b8b8(void);
extern "C" void LAB_1008ca83(void);
extern "C" void LAB_1008cc95(void);
extern "C" void LAB_1008cfec(void);
extern "C" void LAB_1008d771(void);
extern "C" void LAB_1008dd25(void);
extern "C" void LAB_1008dd2a(void);
extern "C" void LAB_1008f6a7(void);
extern "C" void LAB_100904ad(void);
extern "C" void LAB_1009058e(void);
extern "C" void LAB_10090cd2(void);
extern "C" void LAB_10090eb7(void);
extern "C" void LAB_10093da1(void);
extern "C" void LAB_10094611(void);
extern "C" void LAB_10095656(void);
extern "C" void LAB_10095a84(void);
extern "C" void LAB_10095bf1(void);
extern "C" void LAB_10097217(void);
extern "C" void LAB_100974ab(void);
extern "C" void LAB_10097cbc(void);
extern "C" void LAB_10098626(void);
extern "C" void LAB_10098694(void);
extern "C" void LAB_10098c70(void);
extern "C" void LAB_10099acb(void);
extern "C" void LAB_1060cb3f(void);
extern "C" void LAB_1060d64d(void);
extern "C" void LAB_1060e140(void);
extern "C" void LAB_1060eb8d(void);
extern "C" void LAB_1060f55d(void);
extern "C" void LAB_1060fb1b(void);
extern "C" void LAB_1060fb86(void);
extern "C" void LAB_1060fc48(void);
extern "C" void LAB_1061007d(void);
extern "C" void LAB_10610781(void);
extern "C" void LAB_106133d7(void);
extern "C" void LAB_10618b72(void);
extern "C" void LAB_1061960c(void);
extern "C" void LAB_1061a7e9(void);
extern "C" void LAB_1061ac70(void);
extern "C" void LAB_1061b0d0(void);
extern "C" void LAB_1061b1f3(void);
extern "C" void LAB_1061b2ec(void);
extern "C" void LAB_1061b404(void);
extern "C" void LAB_1061b56b(void);
extern "C" void LAB_1061bb7b(void);
extern "C" void LAB_1061bf26(void);
extern "C" void LAB_1061c1d8(void);
extern "C" void LAB_1061c1e9(void);
extern "C" void LAB_1061d97b(void);
extern "C" void LAB_1061dac7(void);
extern "C" void LAB_1061db78(void);
extern "C" void LAB_1061db8e(void);
extern "C" void LAB_1061dfe6(void);
extern "C" void LAB_1061dff8(void);
extern "C" void LAB_1061eeda(void);
extern "C" void LAB_1061ef8c(void);
extern "C" void LAB_1061f03e(void);
extern "C" void LAB_1061f0f0(void);
extern "C" void LAB_1186d2ee(void);
extern "C" void LAB_1186d2f4(void);
extern "C" void LAB_1186d30c(void);
extern "C" void LAB_1186de50(void);
extern "C" void LAB_1186e230(void);
extern "C" void LAB_1186f62c(void);
extern "C" void LAB_1186f6c0(void);
extern "C" void LAB_1186f88c(void);
extern "C" void LAB_11878170(void);
extern "C" void LAB_11878294(void);
extern "C" void LAB_118782a4(void);
extern "C" void LAB_11878d88(void);
extern "C" void LAB_1187b7d4(void);
extern "C" void LAB_1187bf80(void);
extern "C" void LAB_1187bf90(void);
extern "C" void LAB_1187bfa0(void);
extern "C" void LAB_11881498(void);
extern "C" void LAB_11882ff0(void);
extern "C" void LAB_11883704(void);
extern "C" void LAB_11883dcc(void);
extern "C" void LAB_1188465c(void);
extern "C" void LAB_118871d4(void);
extern "C" void LAB_11888200(void);
extern "C" void LAB_11889228(void);
extern "C" void LAB_1189cc48(void);
extern "C" void LAB_1189cc70(void);
extern "C" void LAB_1189f4a8(void);
extern "C" void LAB_118a2cac(void);
extern "C" void LAB_118a6bec(void);
extern "C" void LAB_118abe0c(void);
extern "C" void LAB_118bc0c0(void);
extern "C" void LAB_118bc0e4(void);
extern "C" void LAB_118bc9b4(void);
extern "C" void LAB_118bc9e0(void);
extern "C" void LAB_118bca00(void);
extern "C" void LAB_118bca1c(void);
extern "C" void LAB_118bca3c(void);
extern "C" void LAB_118bca4c(void);
extern "C" void LAB_118bca5c(void);
extern "C" void LAB_118bca78(void);
extern "C" void LAB_118bcaa0(void);
extern "C" void LAB_118bcabc(void);
extern "C" void LAB_118bcc00(void);
extern "C" void LAB_118bcc10(void);
extern "C" void LAB_118bcc2c(void);
extern "C" void LAB_118bcc48(void);
extern "C" void LAB_118bcc5c(void);
extern "C" void LAB_118bcc7c(void);
extern "C" void LAB_118bcc88(void);
extern "C" void LAB_118bcc90(void);
extern "C" void LAB_118bccb0(void);
extern "C" void LAB_118bccd4(void);
extern "C" void LAB_118bd24c(void);
extern "C" void LAB_118bd268(void);
extern "C" void LAB_118bd270(void);
extern "C" void LAB_118bd310(void);
extern "C" void LAB_118bd3bc(void);
extern "C" void LAB_118bd474(void);
extern "C" void LAB_118bd5c0(void);
extern "C" void LAB_118bdbb4(void);
extern "C" void LAB_118bdbdc(void);
extern "C" void LAB_118bdef4(void);
extern "C" void LAB_118bdf00(void);
extern "C" void LAB_118bdf24(void);
extern "C" void LAB_118bdfd0(void);
extern "C" void LAB_118be11c(void);
extern "C" void LAB_118be1d8(void);
extern "C" void LAB_118be1e8(void);
extern "C" void LAB_118be644(void);
extern "C" void LAB_118be660(void);
extern "C" void LAB_118be678(void);
extern "C" void LAB_118be6a0(void);
extern "C" void LAB_118be6b0(void);
extern "C" void LAB_118be6f0(void);
extern "C" void LAB_118be714(void);
extern "C" void LAB_118be724(void);
extern "C" void LAB_118be748(void);
extern "C" void LAB_118be770(void);
extern "C" void LAB_118be780(void);
extern "C" void LAB_118be7a0(void);
extern "C" void LAB_118be7dc(void);
extern "C" void LAB_118be81c(void);
extern "C" void LAB_118be860(void);
extern "C" void LAB_118be89c(void);
extern "C" void LAB_118be944(void);
extern "C" void LAB_118be95c(void);
extern "C" void LAB_118be970(void);
extern "C" void LAB_118be980(void);
extern "C" void LAB_118be9a8(void);
extern "C" void LAB_118be9bc(void);
extern "C" void LAB_118be9cc(void);
extern "C" void LAB_118be9f8(void);
extern "C" void LAB_118bea0c(void);
extern "C" void LAB_118bea1c(void);
extern "C" void LAB_118bea44(void);
extern "C" void LAB_118bea58(void);
extern "C" void LAB_118bea68(void);
extern "C" void LAB_118bea8c(void);
extern "C" void LAB_118beaa8(void);
extern "C" void LAB_118beb04(void);
extern "C" void LAB_118beb10(void);
extern "C" void LAB_118beb1c(void);
extern "C" void LAB_12126b84(void);
extern "C" void LAB_121a0e68(void);
extern "C" void LAB_121a2128(void);
extern "C" void LAB_121a212c(void);
extern "C" void LAB_121a2130(void);
extern "C" void LAB_121a2134(void);
extern "C" void LAB_121a2138(void);
extern "C" void LAB_121a213c(void);
extern "C" void LAB_121a2140(void);
extern "C" void LAB_121a2144(void);
extern "C" void LAB_121a2148(void);
extern "C" void LAB_121a214c(void);
extern "C" void LAB_121a2150(void);
extern "C" void LAB_121a2154(void);
extern "C" void LAB_121a2158(void);
extern "C" void LAB_121a215c(void);
extern "C" void LAB_121a2160(void);
extern "C" void LAB_121a2164(void);
extern "C" void LAB_121a2168(void);
extern "C" void LAB_121a216c(void);
extern "C" void LAB_121a2170(void);
extern "C" void LAB_121a2174(void);
extern "C" void LAB_121a2178(void);
extern "C" void LAB_121a217c(void);
extern "C" void LAB_121a2180(void);
extern "C" void LAB_121a2184(void);
extern "C" void LAB_121a2188(void);
extern "C" void LAB_121a218c(void);
extern "C" void LAB_121a2190(void);
extern "C" void LAB_121a2238(void);
extern "C" void LAB_121a223c(void);
extern "C" void LAB_121a2240(void);
extern "C" void LAB_121a2244(void);
extern "C" void LAB_121a2248(void);
extern "C" void LAB_121a2650(void);
extern "C" void LAB_122f5674(void);
extern "C" void LAB_122fc888(void);


struct Recovered_Bulk { char _pad; undefined4 __thiscall m_FUN_1060c450(undefined4 param_2); template<class... A> int m_FUN_1060c450(A...); undefined4 __thiscall m_FUN_1060cfc0(undefined4 param_2); template<class... A> int m_FUN_1060cfc0(A...); undefined4 __thiscall m_FUN_1060ef00(undefined4 param_2); template<class... A> int m_FUN_1060ef00(A...); undefined4 __thiscall m_FUN_10610e90(undefined4 param_2); template<class... A> int m_FUN_10610e90(A...); undefined4 __thiscall m_FUN_10612300(undefined4 param_2); template<class... A> int m_FUN_10612300(A...); undefined4 __thiscall m_FUN_106142d0(undefined4 param_2); template<class... A> int m_FUN_106142d0(A...); SCStr * __thiscall m_FUN_10618a10(SCStr *param_2); template<class... A> int m_FUN_10618a10(A...); int __thiscall m_FUN_106190a0(char param_2,undefined4 param_3); template<class... A> int m_FUN_106190a0(A...); int __thiscall m_FUN_10619290(char param_2,undefined4 param_3); template<class... A> int m_FUN_10619290(A...); int __thiscall m_FUN_10619490(char param_2,undefined4 param_3); template<class... A> int m_FUN_10619490(A...); void __thiscall m_FUN_1061a9b0(int *param_2); template<class... A> int m_FUN_1061a9b0(A...); void __thiscall m_FUN_1061ae30(SCStr *param_2); template<class... A> int m_FUN_1061ae30(A...); void __thiscall m_FUN_1061b850(undefined4 param_2); template<class... A> int m_FUN_1061b850(A...); void __thiscall m_FUN_1061c370(undefined4 *param_2); template<class... A> int m_FUN_1061c370(A...); void __thiscall m_FUN_1061c630(undefined4 param_2); template<class... A> int m_FUN_1061c630(A...); void __thiscall m_FUN_1061c700(int param_2); template<class... A> int m_FUN_1061c700(A...); undefined4 * __thiscall m_FUN_1061cf50(byte param_2); template<class... A> int m_FUN_1061cf50(A...); undefined4 * __thiscall m_FUN_1061dcf0(undefined4 *param_2,SCStr *param_3); template<class... A> int m_FUN_1061dcf0(A...); void __thiscall m_FUN_1061dda0(int *param_2); template<class... A> int m_FUN_1061dda0(A...); int * __thiscall m_FUN_1061e120(int *param_2); template<class... A> int m_FUN_1061e120(A...); int * __thiscall m_FUN_1061e250(undefined4 *param_2); template<class... A> int m_FUN_1061e250(A...); undefined4 * __thiscall m_FUN_1061e420(char *param_2,undefined4 param_3); template<class... A> int m_FUN_1061e420(A...); undefined4 * __thiscall m_FUN_1061e510(char *param_2,undefined4 param_3); template<class... A> int m_FUN_1061e510(A...); undefined4 * __thiscall m_FUN_1061e600(char *param_2,undefined4 param_3); template<class... A> int m_FUN_1061e600(A...); undefined4 * __thiscall m_FUN_1061e6f0(char *param_2,undefined4 param_3); template<class... A> int m_FUN_1061e6f0(A...); undefined4 * __thiscall m_FUN_1061e8b0(undefined4 param_2); template<class... A> int m_FUN_1061e8b0(A...); undefined4 * __thiscall m_FUN_1061ea00(undefined4 param_2); template<class... A> int m_FUN_1061ea00(A...); undefined4 * __thiscall m_FUN_1061eb50(undefined4 param_2); template<class... A> int m_FUN_1061eb50(A...); undefined4 * __thiscall m_FUN_1061ecc0(undefined4 param_2); template<class... A> int m_FUN_1061ecc0(A...); undefined4 * __thiscall m_FUN_1061f960(byte param_2); template<class... A> int m_FUN_1061f960(A...); undefined4 * __thiscall m_FUN_1061fab0(byte param_2); template<class... A> int m_FUN_1061fab0(A...); };

extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern int createPropertyBag(...);
extern int operator_new(...);
template<class... A> int __stdcall thunk_FUN_101aa9f0(A...);
extern int thunk_FUN_101b5500(...);
extern int thunk_FUN_101b5540(...);
extern int thunk_FUN_101b5de0(...);
extern int thunk_FUN_101b5e50(...);
extern int thunk_FUN_101b92f0(...);
extern int thunk_FUN_101b9dd0(...);
extern int thunk_FUN_101da390(...);
extern int thunk_FUN_101da4a0(...);
template<class... A> int __stdcall thunk_FUN_10263630(A...);
extern int thunk_FUN_10302280(...);
extern int thunk_FUN_1034e150(...);
template<class... A> int __stdcall thunk_FUN_10351370(A...);
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
template<class... A> int __stdcall thunk_FUN_105f34e0(A...);
template<class... A> int __stdcall thunk_FUN_105f36d0(A...);
template<class... A> int __stdcall thunk_FUN_105f38c0(A...);
template<class... A> int __stdcall thunk_FUN_105f3ab0(A...);
template<class... A> int __stdcall thunk_FUN_105f5920(A...);
extern int thunk_FUN_105f5a00(...);
template<class... A> int __stdcall thunk_FUN_105f5d20(A...);
extern int thunk_FUN_105f5df0(...);
template<class... A> int __stdcall thunk_FUN_105f60e0(A...);
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
template<class... A> int __stdcall thunk_FUN_10607c00(A...);
template<class... A> int __stdcall thunk_FUN_10610c60(A...);
extern int thunk_FUN_10618a10(...);
template<class... A> int __stdcall thunk_FUN_106190a0(A...);
template<class... A> int __stdcall thunk_FUN_10619290(A...);
template<class... A> int __stdcall thunk_FUN_1061c630(A...);
extern int thunk_FUN_1061d290(...);
extern int thunk_FUN_106bc6b0(...);
extern int thunk_FUN_106d83f0(...);
template<class... A> int __stdcall thunk_FUN_106de0c0(A...);
template<class... A> int __stdcall thunk_FUN_106de2c0(A...);
extern int thunk_FUN_106de840(...);
extern int thunk_FUN_106dfa00(...);
template<class... A> int __stdcall thunk_FUN_106dfb80(A...);
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
template<class... A> int __stdcall thunk_FUN_10beed80(A...);
extern int thunk_FUN_10bf11c0(...);
extern int thunk_FUN_10bf11e0(...);
extern int thunk_FUN_10c2f5a0(...);
extern int thunk_FUN_10c31e60(...);
template<class... A> int __stdcall thunk_FUN_10c5f1d0(A...);
extern int thunk_FUN_10c5f450(...);
extern int thunk_FUN_10c5f8a0(...);
extern int thunk_FUN_10c61010(...);
extern int thunk_FUN_10c61ec0(...);
extern int thunk_FUN_10c61f70(...);
extern int thunk_FUN_10c62d50(...);
extern int thunk_FUN_10c653a0(...);
template<class... A> int __stdcall thunk_FUN_10c65960(A...);
extern int thunk_FUN_10c65f30(...);
template<class... A> int __stdcall thunk_FUN_10c96f10(A...);
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
template<class... A> int __stdcall thunk_FUN_10cf4eb0(A...);
extern int thunk_FUN_10cf5140(...);
extern int thunk_FUN_10cf5250(...);
extern int thunk_FUN_10deee60(...);
extern int thunk_FUN_10def0d0(...);
extern int thunk_FUN_10def290(...);
extern int thunk_FUN_10def350(...);
template<class... A> int __stdcall thunk_FUN_10def450(A...);
extern int thunk_FUN_10def8c0(...);
extern int thunk_FUN_10def940(...);
extern int thunk_FUN_10df1160(...);
extern int thunk_FUN_10df2df0(...);
template<class... A> int __stdcall thunk_FUN_10df6f00(A...);
extern int thunk_FUN_10df95e0(...);
extern int thunk_FUN_10df9760(...);
extern int thunk_FUN_10dfa860(...);
extern int thunk_FUN_10dfa930(...);
template<class... A> int __stdcall thunk_FUN_10dfb8f0(A...);
extern int thunk_FUN_10dfba00(...);
extern int thunk_FUN_10dfbb10(...);
extern int thunk_FUN_10dfd7b0(...);
extern int thunk_FUN_10e0f250(...);
template<class... A> int __stdcall thunk_FUN_10e0f500(A...);
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
template<class... A> int __stdcall thunk_FUN_10ead920(A...);
template<class... A> int __stdcall thunk_FUN_10ead930(A...);
template<class... A> int __stdcall thunk_FUN_10ead960(A...);
extern int thunk_FUN_10ead9a0(...);
extern int thunk_FUN_10eae090(...);
extern int thunk_FUN_10eb0a60(...);
extern int thunk_FUN_10eb0d90(...);
extern int thunk_FUN_10eb0e10(...);
extern int thunk_FUN_10eb1dc0(...);
template<class... A> int __stdcall thunk_FUN_10eb22a0(A...);
extern int thunk_FUN_10eb41b0(...);
extern int thunk_FUN_10eb41c0(...);
extern int thunk_FUN_10eb6cc0(...);
template<class... A> int __stdcall thunk_FUN_10eba400(A...);
template<class... A> int __stdcall thunk_FUN_10eba5f0(A...);
extern int thunk_FUN_10eba7e0(...);
extern int thunk_FUN_10ebb810(...);
extern int thunk_FUN_10ebb8e0(...);
extern int thunk_FUN_10ebbab0(...);
extern int thunk_FUN_10ebc1d0(...);
extern int thunk_FUN_10ebc1e0(...);
template<class... A> int __stdcall thunk_FUN_10ec0a20(A...);
template<class... A> int __stdcall thunk_FUN_10ec0bb0(A...);
template<class... A> int __stdcall thunk_FUN_10ec1a10(A...);
extern int thunk_FUN_10ec1b40(...);
extern int thunk_FUN_10ec1c00(...);
extern int thunk_FUN_10ec1d20(...);
extern int thunk_FUN_10ec1d40(...);
template<class... A> int __stdcall thunk_FUN_10ec7940(A...);
template<class... A> int __stdcall thunk_FUN_10ecb9f0(A...);
template<class... A> int __stdcall thunk_FUN_10ecbbd0(A...);
template<class... A> int __stdcall thunk_FUN_10ecc7e0(A...);
template<class... A> int __stdcall thunk_FUN_10ecd540(A...);
template<class... A> int __stdcall thunk_FUN_10ecea60(A...);
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
extern "C" void LAB_1060cb17(void);
extern undefined1 LAB_1060d4d5[];
extern "C" void LAB_1060d625(void);
extern "C" void LAB_1060e118(void);
extern "C" void LAB_1060eb65(void);
extern undefined1 LAB_1060f3e6[];
extern "C" void LAB_1060f535(void);
extern "C" void LAB_1060fc51(void);
extern "C" void LAB_10610055(void);
extern "C" void LAB_10610759(void);
extern undefined1 LAB_10610d8d[];
extern "C" void LAB_1061143c(void);
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
extern "C" void LAB_10615995(void);
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
extern "C" void LAB_106195fc(void);
extern undefined1 LAB_1061a74f[];
extern undefined1 LAB_1061abac[];
extern "C" void LAB_1061abd5(void);
extern undefined1 LAB_1061afd6[];
extern undefined1 LAB_1061b497[];
extern undefined1 LAB_1061d5d8[];
extern undefined1 LAB_1061d602[];
extern "C" void LAB_1061dfe1(void);
extern undefined1 LAB_1061e027[];
extern "C" void LAB_115bbc47(void);
extern "C" void LAB_115bbde7(void);
extern "C" void LAB_115bbf8d(void);
extern "C" void LAB_115bc0e9(void);
extern "C" void LAB_115bc267(void);
extern "C" void LAB_115bc34d(void);
extern "C" void LAB_115bc3f5(void);
extern "C" void LAB_115bc522(void);
extern "C" void LAB_115bc5bd(void);
extern "C" void LAB_115bc67a(void);
extern "C" void LAB_115bc705(void);
extern "C" void LAB_115bc765(void);
extern "C" void LAB_115bc7bd(void);
extern "C" void LAB_115bc815(void);
extern "C" void LAB_115bc875(void);
extern "C" void LAB_115bc8fb(void);
extern "C" void LAB_115bc955(void);
extern "C" void LAB_115bc9c8(void);
extern "C" void LAB_115bca2d(void);
extern "C" void LAB_115bca95(void);
extern "C" void LAB_115bcb51(void);
extern "C" void LAB_115bcbd5(void);
extern "C" void LAB_115bcc25(void);
extern "C" void LAB_115bcce5(void);
extern "C" void LAB_115bce76(void);
extern "C" void LAB_115bcf25(void);
extern "C" void LAB_115bd1de(void);
extern "C" void LAB_115bd319(void);
extern "C" void LAB_115bd395(void);
extern "C" void LAB_115bd405(void);
extern "C" void LAB_115bd4a9(void);
extern "C" void LAB_115bd525(void);
extern "C" void LAB_115bd595(void);
extern "C" void LAB_115bd689(void);
extern "C" void LAB_115bd715(void);
extern "C" void LAB_115bd7b9(void);
extern "C" void LAB_115bd81d(void);
extern "C" void LAB_115bd870(void);
extern "C" void LAB_115bd8ad(void);
extern "C" void LAB_115bd8ed(void);
extern "C" void LAB_115bd92d(void);
extern "C" void LAB_115bd9bf(void);
extern "C" void LAB_115bda55(void);
extern "C" void LAB_115bdaad(void);
extern "C" void LAB_115bdba7(void);
extern "C" void LAB_115bdc1d(void);
extern "C" void LAB_115bdc65(void);
extern "C" void LAB_115bdca5(void);
extern "C" void LAB_115bdd22(void);
extern "C" void LAB_115bdd75(void);
extern "C" void LAB_115bddb5(void);
extern "C" void LAB_115bde15(void);
extern "C" void LAB_115bde6d(void);
extern "C" void LAB_115bdeb5(void);
extern "C" void LAB_115bdeed(void);
extern "C" void LAB_115bdf35(void);
extern "C" void LAB_115bdfd5(void);
extern "C" void LAB_115be082(void);
extern "C" void LAB_115be0c0(void);
extern "C" void LAB_115be0f0(void);
extern "C" void LAB_115be120(void);
extern "C" void LAB_115be40d(void);
extern "C" void LAB_115be4ab(void);
extern "C" void LAB_115be5dd(void);
extern "C" void LAB_115be67d(void);
extern "C" void LAB_115be6cd(void);
extern "C" void LAB_115be715(void);
extern "C" void LAB_115be76e(void);
extern "C" void LAB_115be7ce(void);
extern "C" void LAB_115be82e(void);
extern "C" void LAB_115be88e(void);
extern "C" void LAB_115be8ee(void);
extern "C" void LAB_115be94e(void);
extern "C" void LAB_115be9ae(void);
extern "C" void LAB_115bea0e(void);
extern "C" void LAB_115beb35(void);
extern "C" void LAB_115beba0(void);
extern "C" void LAB_115bebd0(void);
extern "C" void LAB_115bec00(void);
extern "C" void LAB_115bec30(void);
extern "C" void LAB_115bec60(void);
extern "C" void LAB_115bec90(void);
extern "C" void LAB_115becc0(void);
extern "C" void LAB_115becf0(void);
extern "C" void LAB_115bed20(void);
extern void *ExceptionList;
undefined4 __stdcall FUN_1060dac0(undefined4 param_1);
template<class... A> int __stdcall FUN_1060dac0(A...);
undefined4 __stdcall FUN_1060e600(undefined4 param_1);
template<class... A> int __stdcall FUN_1060e600(A...);
undefined4 __stdcall FUN_1060f990(undefined4 param_1);
template<class... A> int __stdcall FUN_1060f990(A...);
undefined4 __stdcall FUN_1060fdb0(undefined4 param_1);
template<class... A> int __stdcall FUN_1060fdb0(A...);
undefined4 __stdcall FUN_106102b0(undefined4 param_1);
template<class... A> int __stdcall FUN_106102b0(A...);
SCStr * __stdcall FUN_10610c60(SCStr *param_1);
template<class... A> int __stdcall FUN_10610c60(A...);
void __stdcall FUN_10610e00(SCStr *param_1);
template<class... A> int __stdcall FUN_10610e00(A...);
undefined4 __stdcall FUN_10611670(undefined4 param_1);
template<class... A> int __stdcall FUN_10611670(A...);
undefined4 __stdcall FUN_106119c0(undefined4 param_1);
template<class... A> int __stdcall FUN_106119c0(A...);
undefined4 __stdcall FUN_10611c20(undefined4 param_1);
template<class... A> int __stdcall FUN_10611c20(A...);
undefined4 __stdcall FUN_10611e30(undefined4 param_1);
template<class... A> int __stdcall FUN_10611e30(A...);
undefined4 __stdcall FUN_106120a0(undefined4 param_1);
template<class... A> int __stdcall FUN_106120a0(A...);
undefined4 __stdcall FUN_106126c0(undefined4 param_1);
template<class... A> int __stdcall FUN_106126c0(A...);
undefined4 __stdcall FUN_106128c0(undefined4 param_1);
template<class... A> int __stdcall FUN_106128c0(A...);
undefined4 __stdcall FUN_10612cd0(undefined4 param_1);
template<class... A> int __stdcall FUN_10612cd0(A...);
undefined4 __stdcall FUN_10612ee0(undefined4 param_1);
template<class... A> int __stdcall FUN_10612ee0(A...);
void __stdcall FUN_106131c0(int *param_1);
template<class... A> int __stdcall FUN_106131c0(A...);
undefined4 __stdcall FUN_10613840(undefined4 param_1);
template<class... A> int __stdcall FUN_10613840(A...);
undefined4 __stdcall FUN_10613ac0(undefined4 param_1);
template<class... A> int __stdcall FUN_10613ac0(A...);
undefined4 __stdcall FUN_10613ca0(undefined4 param_1);
template<class... A> int __stdcall FUN_10613ca0(A...);
undefined4 __stdcall FUN_10614ed0(undefined4 param_1);
template<class... A> int __stdcall FUN_10614ed0(A...);
undefined4 __stdcall FUN_106151e0(undefined4 param_1);
template<class... A> int __stdcall FUN_106151e0(A...);
undefined4 __stdcall FUN_10616550(undefined4 param_1);
template<class... A> int __stdcall FUN_10616550(A...);
undefined4 __stdcall FUN_106169f0(undefined4 param_1);
template<class... A> int __stdcall FUN_106169f0(A...);
undefined4 __stdcall FUN_10616d00(undefined4 param_1);
template<class... A> int __stdcall FUN_10616d00(A...);
undefined4 __stdcall FUN_10617010(undefined4 param_1);
template<class... A> int __stdcall FUN_10617010(A...);
undefined4 __stdcall FUN_106174a0(undefined4 param_1);
template<class... A> int __stdcall FUN_106174a0(A...);
undefined4 __stdcall FUN_106177b0(undefined4 param_1);
template<class... A> int __stdcall FUN_106177b0(A...);
undefined4 __stdcall FUN_10617ac0(undefined4 param_1);
template<class... A> int __stdcall FUN_10617ac0(A...);
undefined4 __stdcall FUN_10618260(undefined4 param_1);
template<class... A> int __stdcall FUN_10618260(A...);
undefined4 __stdcall FUN_10618570(undefined4 param_1);
template<class... A> int __stdcall FUN_10618570(A...);
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
template<class... A> int __stdcall FUN_1061ad40(A...);
void __stdcall FUN_1061b760(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_1061b760(A...);
void __fastcall FUN_1061b960(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_1061b960(A...);
void __stdcall FUN_1061ba40(int *param_1);
template<class... A> int __stdcall FUN_1061ba40(A...);
void __fastcall FUN_1061bbf0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_1061bbf0(A...);
void __stdcall FUN_1061bcd0(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_1061bcd0(A...);
void __stdcall FUN_1061bdf0(undefined4 param_1);
template<class... A> int __stdcall FUN_1061bdf0(A...);
void __stdcall FUN_1061bf90(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_1061bf90(A...);
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
extern int ghidra_vftable_SCConditionalElementTree_SCNewWizStateType_const__;
extern int ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface_SCNewWizComponent_;

// Reference entry 1060c450; body size 2331 bytes.
extern int __stdcall thunk_FUN_101b5de0(int a1);
extern int __stdcall thunk_FUN_101b92f0(int a1);
extern int __stdcall thunk_FUN_1034e150(int a1);
extern int __stdcall thunk_FUN_10391e10(int a1,int a2);
extern int __stdcall thunk_FUN_10436ac0(int a1,int a2);
extern int __stdcall thunk_FUN_10436c60(int a1,int a2);
extern int __stdcall thunk_FUN_10483f70(int a1,int a2,int a3);
extern int __stdcall thunk_FUN_105f29d0(int a1);
extern int __stdcall thunk_FUN_105f5a00(int a1);
extern int __stdcall thunk_FUN_105f5df0(int a1);
extern int __stdcall thunk_FUN_105f6290(int a1);
extern int __stdcall thunk_FUN_10601430(int a1);
extern int __stdcall thunk_FUN_10605020(int a1);
extern int __stdcall thunk_FUN_10605060(int a1);
extern int __stdcall thunk_FUN_106050a0(int a1);
extern int __stdcall thunk_FUN_106052d0(int a1);
extern int __stdcall thunk_FUN_10618a10(int a1);
extern int __stdcall thunk_FUN_106190a0(int a1,int a2);
extern int __stdcall thunk_FUN_10619290(int a1,int a2);
extern int __stdcall thunk_FUN_106d83f0(int a1);
extern int __stdcall thunk_FUN_106dfa00(int a1);
extern int __stdcall thunk_FUN_1076bf90(int a1);
extern int __stdcall thunk_FUN_1087e2b0(int a1);
extern int __stdcall thunk_FUN_10916a90(int a1);
extern int __stdcall thunk_FUN_109543b0(int a1);
extern int __stdcall thunk_FUN_109f3bb0(int a1);
extern int __stdcall thunk_FUN_10bf11c0(int a1);
extern int __stdcall thunk_FUN_10c5f8a0(int a1);
extern int __stdcall thunk_FUN_10c97610(int a1);
extern int __stdcall thunk_FUN_10c98710(int a1);
extern int __stdcall thunk_FUN_10cf34e0(int a1);
extern int __stdcall thunk_FUN_10cf3630(int a1);
extern int __stdcall thunk_FUN_10cf5250(int a1);
extern int __stdcall thunk_FUN_10deee60(int a1);
extern int __stdcall thunk_FUN_10def290(int a1,int a2);
extern int __stdcall thunk_FUN_10def350(int a1,int a2);
extern int __stdcall thunk_FUN_10def8c0(int a1,int a2);
extern int __stdcall thunk_FUN_10def940(int a1,int a2);
extern int __stdcall thunk_FUN_10df1160(int a1);
extern int __stdcall thunk_FUN_10dfba00(int a1);
extern int __stdcall thunk_FUN_10dfd7b0(int a1);
extern int __stdcall thunk_FUN_10e0f250(int a1);
extern int __stdcall thunk_FUN_10e0f500(int a1,int a2);
extern int __stdcall thunk_FUN_10eacce0(int a1);
extern int __stdcall thunk_FUN_10eacda0(int a1);
extern int __stdcall thunk_FUN_10ead100(int a1);
extern int __stdcall thunk_FUN_10ead150(int a1);
extern int __stdcall thunk_FUN_10ead560(int a1);
extern int __stdcall thunk_FUN_10ead570(int a1);
extern int __stdcall thunk_FUN_10ead580(int a1);
extern int __stdcall thunk_FUN_10ead590(int a1);
extern int __stdcall thunk_FUN_10ead5c0(int a1);
extern int __stdcall thunk_FUN_10ead9a0(int a1,int a2,int a3);
extern int __stdcall thunk_FUN_10eae090(int a1);
extern int __stdcall thunk_FUN_10eba7e0(int a1);
extern int __stdcall thunk_FUN_10ebb810(int a1,int a2,int a3);
extern int __stdcall thunk_FUN_10ebb8e0(int a1,int a2);
extern int __stdcall thunk_FUN_10ebbab0(int a1);
extern int __stdcall thunk_FUN_10ec1b40(int a1);
extern int __stdcall thunk_FUN_10ec1c00(int a1);
extern int __stdcall thunk_FUN_10eced20(int a1);
extern int __stdcall thunk_FUN_10ee3000(int a1);
extern int __stdcall thunk_FUN_1109f100(int a1,int a2);
extern int __stdcall thunk_FUN_11248b40(int a1);
struct SCFp_0_1 { int (__thiscall *v)(int a1); };
struct SCFp_12_1 { char _p[12]; int (__thiscall *v)(int a1); };
struct SCFp_12_2 { char _p[12]; int (__thiscall *v)(int a1,int a2); };
struct SCFp_16_1 { char _p[16]; int (__thiscall *v)(int a1); };
struct SCFp_16_2 { char _p[16]; int (__thiscall *v)(int a1,int a2); };
struct SCVtbl_0_0 { virtual int v(void); };
struct SCVtbl_0_1 { virtual int v(int a1); };
struct SCVtbl_0_2 { virtual int v(int a1,int a2); };
struct SCVtbl_1_3 { virtual void _p0(); virtual int v(int a1,int a2,int a3); };
struct SCVtbl_5_2 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual int v(int a1,int a2); };
struct SCVtbl_15_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual int v(int a1); };
struct SCVtbl_33_3 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual int v(int a1,int a2,int a3); };
struct SCVtbl_1_0 { virtual void _p0(); virtual int v(void); };
struct SCVtbl_1_1 { virtual void _p0(); virtual int v(int a1); };
struct SCVtbl_1_2 { virtual void _p0(); virtual int v(int a1,int a2); };
struct SCVtbl_2_0 { virtual void _p0(); virtual void _p1(); virtual int v(void); };
struct SCVtbl_2_1 { virtual void _p0(); virtual void _p1(); virtual int v(int a1); };
struct SCVtbl_3_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual int v(void); };
struct SCVtbl_3_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual int v(int a1); };
struct SCVtbl_3_2 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual int v(int a1,int a2); };
struct SCVtbl_4_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual int v(int a1); };
struct SCVtbl_4_2 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual int v(int a1,int a2); };
struct SCVtbl_5_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual int v(void); };
struct SCVtbl_5_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual int v(int a1); };
struct SCVtbl_7_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual int v(void); };
struct SCVtbl_7_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual int v(int a1); };
struct SCVtbl_7_2 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual int v(int a1,int a2); };
struct SCVtbl_10_2 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual int v(int a1,int a2); };
struct SCVtbl_11_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual int v(int a1); };
struct SCVtbl_13_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual int v(int a1); };
struct SCVtbl_14_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual int v(int a1); };
struct SCVtbl_15_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual int v(void); };
struct SCVtbl_16_2 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual int v(int a1,int a2); };
struct SCVtbl_29_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual int v(int a1); };
#line 1 "ENTRY_1060c450"

__declspec(naked) void FUN_1060c450(void)

{
  __asm push ebp
  __asm lea ebp, [esp - 0x74]
  __asm sub esp, 0x74
  __asm push -1
  __asm push offset LAB_115bbc47
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 0x130
  __asm push ebx
  __asm push esi
  __asm push edi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ebx, ecx
  __asm call LAB_1000d2bf
  __asm lea ecx, [ebp - 0x24]
  __asm push ecx
  __asm lea ecx, [eax + 0xe8]
  __asm call LAB_10090cd2
  __asm push dword ptr [eax]
  __asm lea ecx, [ebp - 0x7c]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1006b3f1
  __asm push 0
  __asm push 0
  __asm push 6
  __asm lea eax, [ebp - 0x7c]
  __asm push eax
  __asm lea eax, [ebp - 0x20]
  __asm push eax
  __asm call LAB_10049fb7
  __asm add esp, 0x14
  __asm mov ecx, dword ptr [ebp - 0x24]
  __asm mov byte ptr [ebp - 4], 3
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov eax, dword ptr [ebx + 0xe0]
  __asm mov edi, offset LAB_1186d2ee
  __asm test eax, eax
  __asm mov byte ptr [ebp - 4], 2
  __asm mov ecx, edi
  __asm cmovne ecx, eax
  __asm push ecx
  __asm lea ecx, [ebp + 0x6c]
  __asm call LAB_1005273e
  __asm lea eax, [ebp + 0x6c]
  __asm mov byte ptr [ebp - 4], 4
  __asm push eax
  __asm lea eax, [ebp + 0x48]
  __asm push eax
  __asm call LAB_10063403
  __asm add esp, 8
  __asm lea ecx, [ebp + 0x6c]
  __asm mov byte ptr [ebp - 4], 7
  __asm call LAB_1005c315
  __asm push offset LAB_118bcc7c
  __asm lea ecx, [ebp - 0x74]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x6c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov byte ptr [ebp - 4], 6
  __asm call LAB_1008354b
  __asm add eax, 4
  __asm mov byte ptr [ebp - 4], 8
  __asm push eax
  __asm lea ecx, [ebp - 0x11c]
  __asm call LAB_1005c11c
  __asm push edi
  __asm lea ecx, [ebp]
  __asm mov byte ptr [ebp - 4], 9
  __asm call LAB_1007f941
  __asm mov eax, dword ptr [ebp - 0x20]
  __asm mov ecx, edi
  __asm test eax, eax
  __asm mov byte ptr [ebp - 4], 0xa
  __asm cmovne ecx, eax
  __asm lea eax, [ebp - 0x20]
  __asm push ecx
  __asm push offset LAB_1188465c
  __asm push 0x2c04
  __asm push eax
  __asm lea eax, [ebp]
  __asm push eax
  __asm call LAB_10080bcf
  __asm add esp, 0x14
  __asm push offset LAB_118bd268
  __asm lea ecx, [ebp - 0x64]
  __asm mov byte ptr [ebp - 4], 0xb
  __asm call LAB_1007f8c4
  __asm push 1
  __asm lea ecx, [ebp]
  __asm mov byte ptr [ebp - 4], 0xc
  __asm push ecx
  __asm mov ecx, eax
  __asm call LAB_10019754
  __asm mov ecx, eax
  __asm call LAB_1000dbd9
  __asm add eax, 4
  __asm lea ecx, [ebp - 0xfc]
  __asm push eax
  __asm call LAB_1005c11c
  __asm mov eax, dword ptr [ebp + 0x48]
  __asm lea ecx, [ebp + 8]
  __asm test eax, eax
  __asm mov byte ptr [ebp - 4], 0xd
  __asm mov esi, edi
  __asm push edi
  __asm cmovne esi, eax
  __asm call LAB_1007f941
  __asm mov eax, dword ptr [ebp - 0x20]
  __asm test eax, eax
  __asm mov byte ptr [ebp - 4], 0xe
  __asm cmovne edi, eax
  __asm lea eax, [ebp - 0x20]
  __asm push edi
  __asm push esi
  __asm push offset LAB_11889228
  __asm push 0x2c03
  __asm push eax
  __asm lea eax, [ebp + 8]
  __asm push eax
  __asm call LAB_10080bcf
  __asm add esp, 0x18
  __asm push offset LAB_118bd268
  __asm lea ecx, [ebp - 0x54]
  __asm mov byte ptr [ebp - 4], 0xf
  __asm call LAB_1007f8c4
  __asm push 1
  __asm lea ecx, [ebp + 8]
  __asm mov byte ptr [ebp - 4], 0x10
  __asm push ecx
  __asm mov ecx, eax
  __asm call LAB_10019754
  __asm mov ecx, eax
  __asm call LAB_1000dbd9
  __asm add eax, 4
  __asm lea ecx, [ebp - 0xdc]
  __asm push eax
  __asm call LAB_1005c11c
  __asm push offset LAB_118bd3bc
  __asm lea ecx, [ebp + 0x4c]
  __asm mov byte ptr [ebp - 4], 0x11
  __asm call LAB_1005273e
  __asm lea ecx, [ebp - 0x14]
  __asm mov byte ptr [ebp - 4], 0x12
  __asm call LAB_1007e307
  __asm mov edi, eax
  __asm push offset LAB_11878d88
  __asm lea ecx, [ebp - 0x44]
  __asm mov byte ptr [ebp - 4], 0x13
  __asm call LAB_10015e74
  __asm mov esi, eax
  __asm lea eax, [ebp + 0x4c]
  __asm mov byte ptr [ebp - 4], 0x14
  __asm push eax
  __asm mov ecx, edi
  __asm call LAB_1007610c
  __asm push eax
  __asm mov ecx, esi
  __asm call LAB_1000858a
  __asm add eax, 4
  __asm lea ecx, [ebp - 0xbc]
  __asm push eax
  __asm call LAB_1005c11c
  __asm lea ecx, [ebp - 0x34]
  __asm mov byte ptr [ebp - 4], 0x15
  __asm call LAB_10066c8e
  __asm mov esi, eax
  __asm push offset LAB_1187b7d4
  __asm lea ecx, [ebp + 0x6c]
  __asm mov byte ptr [ebp - 4], 0x16
  __asm call LAB_1005273e
  __asm lea eax, [ebp + 0x44]
  __asm mov byte ptr [ebp - 4], 0x17
  __asm push eax
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax]
  __asm lea ecx, [eax + 4]
  __asm call LAB_10051e4c
  __asm mov ecx, dword ptr [ebp + 0x44]
  __asm lea edx, [ebp + 0x6c]
  __asm push 1
  __asm push edx
  __asm mov byte ptr [ebp - 4], 0x18
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x28]
  __asm mov ecx, dword ptr [ebp + 0x44]
  __asm mov byte ptr [ebp - 4], 0x19
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp + 0x6c]
  __asm mov byte ptr [ebp - 4], 0x1a
  __asm call LAB_1005c315
  __asm push offset LAB_1187bf80
  __asm lea ecx, [ebp + 0x64]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x6c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov byte ptr [ebp - 4], 0x16
  __asm call LAB_1005273e
  __asm lea eax, [ebp + 0x40]
  __asm mov byte ptr [ebp - 4], 0x1b
  __asm push eax
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax]
  __asm lea ecx, [eax + 4]
  __asm call LAB_10051e4c
  __asm mov ecx, dword ptr [ebp + 0x40]
  __asm lea edx, [ebp + 0x64]
  __asm push edx
  __asm mov byte ptr [ebp - 4], 0x1c
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x74]
  __asm call eax
  __asm test al, al
  __asm sete byte ptr [ebp + 0x73]
  __asm mov ecx, dword ptr [ebp + 0x40]
  __asm mov byte ptr [ebp - 4], 0x1d
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp + 0x64]
  __asm mov byte ptr [ebp - 4], 0x1e
  __asm call LAB_1005c315
  __asm cmp byte ptr [ebp + 0x73], 0
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x64 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov byte ptr [ebp - 4], 0x16
  __asm _emit 0x74 __asm _emit 0x5c
  __asm push offset LAB_1187bf80
  __asm lea ecx, [ebp + 0x60]
  __asm call LAB_1005273e
  __asm lea eax, [ebp + 0x3c]
  __asm mov byte ptr [ebp - 4], 0x1f
  __asm push eax
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax]
  __asm lea ecx, [eax + 4]
  __asm call LAB_10051e4c
  __asm mov ecx, dword ptr [ebp + 0x3c]
  __asm lea edx, [ebp + 0x60]
  __asm push 1
  __asm push edx
  __asm mov byte ptr [ebp - 4], 0x20
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x28]
  __asm mov ecx, dword ptr [ebp + 0x3c]
  __asm mov byte ptr [ebp - 4], 0x21
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp + 0x60]
  __asm mov byte ptr [ebp - 4], 0x22
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x60 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov byte ptr [ebp - 4], 0x16
  __asm push offset LAB_1187bf90
  __asm lea ecx, [ebp + 0x5c]
  __asm call LAB_1005273e
  __asm lea eax, [ebp + 0x38]
  __asm mov byte ptr [ebp - 4], 0x23
  __asm push eax
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax]
  __asm lea ecx, [eax + 4]
  __asm call LAB_10051e4c
  __asm mov ecx, dword ptr [ebp + 0x38]
  __asm lea edx, [ebp + 0x5c]
  __asm push edx
  __asm mov byte ptr [ebp - 4], 0x24
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x74]
  __asm call eax
  __asm test al, al
  __asm sete byte ptr [ebp + 0x73]
  __asm mov ecx, dword ptr [ebp + 0x38]
  __asm mov byte ptr [ebp - 4], 0x25
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp + 0x5c]
  __asm mov byte ptr [ebp - 4], 0x26
  __asm call LAB_1005c315
  __asm cmp byte ptr [ebp + 0x73], 0
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x5c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov byte ptr [ebp - 4], 0x16
  __asm _emit 0x74 __asm _emit 0x5c
  __asm push offset LAB_1187bf90
  __asm lea ecx, [ebp + 0x58]
  __asm call LAB_1005273e
  __asm lea eax, [ebp + 0x34]
  __asm mov byte ptr [ebp - 4], 0x27
  __asm push eax
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax]
  __asm lea ecx, [eax + 4]
  __asm call LAB_10051e4c
  __asm mov ecx, dword ptr [ebp + 0x34]
  __asm lea edx, [ebp + 0x58]
  __asm push 0
  __asm push edx
  __asm mov byte ptr [ebp - 4], 0x28
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x28]
  __asm mov ecx, dword ptr [ebp + 0x34]
  __asm mov byte ptr [ebp - 4], 0x29
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp + 0x58]
  __asm mov byte ptr [ebp - 4], 0x2a
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x58 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov byte ptr [ebp - 4], 0x16
  __asm push offset LAB_1187bfa0
  __asm lea ecx, [ebp + 0x54]
  __asm call LAB_1005273e
  __asm lea eax, [ebp + 0x30]
  __asm mov byte ptr [ebp - 4], 0x2b
  __asm push eax
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax]
  __asm lea ecx, [eax + 4]
  __asm call LAB_10051e4c
  __asm mov ecx, dword ptr [ebp + 0x30]
  __asm lea edx, [ebp + 0x54]
  __asm push edx
  __asm mov byte ptr [ebp - 4], 0x2c
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x74]
  __asm call eax
  __asm test al, al
  __asm sete byte ptr [ebp + 0x73]
  __asm mov ecx, dword ptr [ebp + 0x30]
  __asm mov byte ptr [ebp - 4], 0x2d
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp + 0x54]
  __asm mov byte ptr [ebp - 4], 0x2e
  __asm call LAB_1005c315
  __asm cmp byte ptr [ebp + 0x73], 0
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x54 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov byte ptr [ebp - 4], 0x16
  __asm _emit 0x74 __asm _emit 0x5c
  __asm push offset LAB_1187bfa0
  __asm lea ecx, [ebp + 0x50]
  __asm call LAB_1005273e
  __asm lea eax, [ebp + 0x68]
  __asm mov byte ptr [ebp - 4], 0x2f
  __asm push eax
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax]
  __asm lea ecx, [eax + 4]
  __asm call LAB_10051e4c
  __asm mov ecx, dword ptr [ebp + 0x68]
  __asm lea edx, [ebp + 0x50]
  __asm push 0
  __asm push edx
  __asm mov byte ptr [ebp - 4], 0x30
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x28]
  __asm mov ecx, dword ptr [ebp + 0x68]
  __asm mov byte ptr [ebp - 4], 0x31
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp + 0x50]
  __asm mov byte ptr [ebp - 4], 0x32
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x50 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov byte ptr [ebp - 4], 0x16
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax]
  __asm push 0xc
  __asm mov ecx, eax
  __asm call LAB_1008dd25
  __asm add eax, 4
  __asm lea ecx, [ebp - 0x9c]
  __asm push eax
  __asm call LAB_1005c11c
  __asm xorps xmm0, xmm0
  __asm mov dword ptr [ebp + 0x10], LAB_118bc0e4
  __asm movups xmmword ptr [ebp + 0x14], xmm0
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x28 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x2c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea eax, [ebp - 0x9c]
  __asm mov byte ptr [ebp - 4], 0x34
  __asm push eax
  __asm lea ecx, [ebp + 0x10]
  __asm call LAB_10026ac6
  __asm mov ecx, ebx
  __asm mov esi, eax
  __asm call LAB_1000d2bf
  __asm lea ecx, [ebp - 0x13c]
  __asm push ecx
  __asm mov ecx, eax
  __asm call LAB_100692db
  __asm mov edx, dword ptr [esi]
  __asm mov ecx, esi
  __asm push eax
  __asm mov byte ptr [ebp - 4], 0x35
  __asm call dword ptr [edx + 8]
  __asm lea ecx, [ebp - 0xbc]
  __asm push ecx
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 8]
  __asm mov ecx, dword ptr [ebx + 0xe0]
  __asm mov edx, eax
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x09
  __asm cmp byte ptr [ecx], 0
  __asm mov byte ptr [ebp + 0x68], 1
  __asm _emit 0x75 __asm _emit 0x04
  __asm mov byte ptr [ebp + 0x68], 0
  __asm mov eax, dword ptr [edx]
  __asm lea ecx, [ebp - 0xdc]
  __asm push ecx
  __asm push dword ptr [ebp + 0x68]
  __asm mov ecx, edx
  __asm call dword ptr [eax + 0xc]
  __asm lea ecx, [ebp - 0xfc]
  __asm push ecx
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 0x14]
  __asm lea ecx, [ebp - 0x11c]
  __asm push ecx
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 8]
  __asm mov ebx, dword ptr [ebp + 0x7c]
  __asm mov ecx, ebx
  __asm push eax
  __asm call LAB_10005975
  __asm lea ecx, [ebp - 0x128]
  __asm call LAB_10051c49
  __asm lea ecx, [ebp - 0x134]
  __asm call LAB_1005dcb0
  __asm mov esi, dword ptr [ebp + 0x24]
  __asm mov dword ptr [ebp - 0x13c], LAB_118bc0c0
  __asm mov byte ptr [ebp - 4], 0x33
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x5e
  __asm mov edi, dword ptr [ebp + 0x28]
  __asm cmp esi, edi
  __asm _emit 0x74 __asm _emit 0x12
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 0
  __asm call dword ptr [eax]
  __asm add esi, 0x20
  __asm cmp esi, edi
  __asm _emit 0x75 __asm _emit 0xf1
  __asm mov esi, dword ptr [ebp + 0x24]
  __asm mov ecx, dword ptr [ebp + 0x2c]
  __asm mov eax, esi
  __asm sub ecx, esi
  __asm and ecx, 0xffffffe0
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x14
  __asm mov esi, dword ptr [esi - 4]
  __asm add ecx, 0x23
  __asm sub eax, esi
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja LAB_1060cb17
  __asm push ecx
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x28 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x2c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov esi, dword ptr [ebp + 0x18]
  __asm test esi, esi
  __asm je LAB_1060cb3f
  __asm mov ebx, dword ptr [ebp + 0x1c]
  __asm cmp esi, ebx
  __asm _emit 0x74 __asm _emit 0x43
  __asm lea edi, [esi + 4]
  __asm lea ecx, [edi + 4]
  __asm mov byte ptr [ebp - 4], 0x36
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [edi]
  __asm mov byte ptr [ebp - 4], 0x37
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x12 __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x07 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm add edi, 0xc
  __asm mov byte ptr [ebp - 4], 0x33
  __asm lea eax, [edi - 4]
  __asm cmp eax, ebx
  __asm _emit 0x75 __asm _emit 0xc3
  __asm mov esi, dword ptr [ebp + 0x18]
  __asm mov ecx, dword ptr [ebp + 0x20]
  __asm mov eax, 0x2aaaaaab
  __asm sub ecx, esi
  __asm imul ecx
  __asm _emit 0xd1 __asm _emit 0xfa
  __asm mov eax, edx
  __asm shr eax, 0x1f
  __asm add eax, edx
  __asm lea ecx, [eax + eax*2]
  __asm mov eax, esi
  __asm shl ecx, 2
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x16
  __asm mov esi, dword ptr [esi - 4]
  __asm add ecx, 0x23
  __asm sub eax, esi
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x76 __asm _emit 0x06
  __asm call dword ptr [LAB_122fc888]
  __asm push ecx
  __asm push esi
  __asm call LAB_100131d8
  __asm mov ebx, dword ptr [ebp + 0x7c]
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x1c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x20 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea ecx, [ebp - 0x88]
  __asm mov dword ptr [ebp + 0x10], LAB_118bc0c0
  __asm call LAB_10051c49
  __asm lea ecx, [ebp - 0x94]
  __asm call LAB_1005dcb0
  __asm mov dword ptr [ebp - 0x9c], LAB_118bc0c0
  __asm lea ecx, [ebp - 0x28]
  __asm mov byte ptr [ebp - 4], 0x38
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xd8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ebp - 0x2c]
  __asm mov byte ptr [ebp - 4], 0x39
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xd0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xd4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp - 0xa8]
  __asm call LAB_10051c49
  __asm lea ecx, [ebp - 0xb4]
  __asm call LAB_1005dcb0
  __asm mov dword ptr [ebp - 0xbc], LAB_118bc0c0
  __asm lea ecx, [ebp - 0x38]
  __asm mov byte ptr [ebp - 4], 0x3a
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xc8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ebp - 0x3c]
  __asm mov byte ptr [ebp - 4], 0x3b
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xc0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xc4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0x10]
  __asm mov byte ptr [ebp - 4], 0x3c
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xec __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xf0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp + 0x4c]
  __asm mov byte ptr [ebp - 4], 0x3d
  __asm call LAB_1005c315
  __asm lea ecx, [ebp - 0xc8]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x4c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10051c49
  __asm lea ecx, [ebp - 0xd4]
  __asm call LAB_1005dcb0
  __asm mov dword ptr [ebp - 0xdc], LAB_118bc0c0
  __asm lea ecx, [ebp - 0x48]
  __asm mov byte ptr [ebp - 4], 0x3e
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xb8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ebp - 0x4c]
  __asm mov byte ptr [ebp - 4], 0x3f
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xb0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xb4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp + 8]
  __asm mov byte ptr [ebp - 4], 0x40
  __asm call LAB_1005c315
  __asm lea ecx, [ebp - 0xe8]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10051c49
  __asm lea ecx, [ebp - 0xf4]
  __asm call LAB_1005dcb0
  __asm mov dword ptr [ebp - 0xfc], LAB_118bc0c0
  __asm lea ecx, [ebp - 0x58]
  __asm mov byte ptr [ebp - 4], 0x41
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xa8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ebp - 0x5c]
  __asm mov byte ptr [ebp - 4], 0x42
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xa0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xa4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp]
  __asm mov byte ptr [ebp - 4], 0x43
  __asm call LAB_1005c315
  __asm lea ecx, [ebp - 0x108]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10051c49
  __asm lea ecx, [ebp - 0x114]
  __asm call LAB_1005dcb0
  __asm mov dword ptr [ebp - 0x11c], LAB_118bc0c0
  __asm lea ecx, [ebp - 0x68]
  __asm mov byte ptr [ebp - 4], 0x44
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x98 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ebp - 0x6c]
  __asm mov byte ptr [ebp - 4], 0x45
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x90 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x94 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp + 0x48]
  __asm mov byte ptr [ebp - 4], 0x46
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x48 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea ecx, [ebp - 0x20]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x47 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm mov eax, ebx
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm lea esp, [ebp + 0x74]
  __asm pop ebp
  __asm ret 4
}




// Reference entry 1060cfc0; body size 2249 bytes.
#line 1 "ENTRY_1060cfc0"

__declspec(naked) void FUN_1060cfc0(void)

{
  __asm push ebp
  __asm lea ebp, [esp - 0x70]
  __asm sub esp, 0x70
  __asm push -1
  __asm push offset LAB_115bbde7
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 0x128
  __asm push ebx
  __asm push esi
  __asm push edi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm mov dword ptr [ebp], eax
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [eax + 0xe0]
  __asm lea ecx, [ebp + 0x6c]
  __asm mov edi, offset LAB_1186d2ee
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test eax, eax
  __asm mov edx, edi
  __asm cmovne edx, eax
  __asm push edx
  __asm call LAB_1005273e
  __asm lea eax, [ebp + 0x6c]
  __asm mov byte ptr [ebp - 4], 1
  __asm push eax
  __asm lea eax, [ebp + 0x48]
  __asm push eax
  __asm call LAB_10063403
  __asm add esp, 8
  __asm lea ecx, [ebp + 0x6c]
  __asm mov byte ptr [ebp - 4], 4
  __asm call LAB_1005c315
  __asm push offset LAB_11882ff0
  __asm lea eax, [ebp - 0x1c]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x6c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push 0x2878
  __asm push eax
  __asm mov byte ptr [ebp - 4], 3
  __asm call LAB_10098626
  __asm add esp, 0xc
  __asm mov esi, eax
  __asm push offset LAB_118bcc7c
  __asm lea ecx, [ebp - 0x6c]
  __asm mov byte ptr [ebp - 4], 5
  __asm call LAB_1002f969
  __asm push esi
  __asm mov ecx, eax
  __asm mov byte ptr [ebp - 4], 6
  __asm call LAB_10024da2
  __asm add eax, 4
  __asm lea ecx, [ebp - 0x114]
  __asm push eax
  __asm call LAB_1005c11c
  __asm push offset LAB_11882ff0
  __asm lea eax, [ebp - 0x14]
  __asm mov byte ptr [ebp - 4], 7
  __asm push 0x2877
  __asm push eax
  __asm call LAB_10098626
  __asm add esp, 0xc
  __asm mov esi, eax
  __asm push offset LAB_11878170
  __asm lea ecx, [ebp - 0x5c]
  __asm mov byte ptr [ebp - 4], 8
  __asm call LAB_1007f8c4
  __asm push esi
  __asm mov ecx, eax
  __asm mov byte ptr [ebp - 4], 9
  __asm call LAB_10019754
  __asm add eax, 4
  __asm lea ecx, [ebp - 0xf4]
  __asm push eax
  __asm call LAB_1005c11c
  __asm mov eax, dword ptr [ebp + 0x48]
  __asm test eax, eax
  __asm mov byte ptr [ebp - 4], 0xa
  __asm cmovne edi, eax
  __asm lea eax, [ebp - 0x74]
  __asm push edi
  __asm push offset LAB_1188465c
  __asm push 0x2876
  __asm push eax
  __asm call LAB_10098626
  __asm add esp, 0x10
  __asm mov esi, eax
  __asm push offset LAB_11878170
  __asm lea ecx, [ebp - 0x4c]
  __asm mov byte ptr [ebp - 4], 0xb
  __asm call LAB_1007f8c4
  __asm push 1
  __asm push esi
  __asm mov ecx, eax
  __asm mov byte ptr [ebp - 4], 0xc
  __asm call LAB_10019754
  __asm mov ecx, eax
  __asm call LAB_1000dbd9
  __asm add eax, 4
  __asm lea ecx, [ebp - 0xd4]
  __asm push eax
  __asm call LAB_1005c11c
  __asm push offset LAB_118bd474
  __asm lea ecx, [ebp + 0x4c]
  __asm mov byte ptr [ebp - 4], 0xd
  __asm call LAB_1005273e
  __asm lea ecx, [ebp + 4]
  __asm mov byte ptr [ebp - 4], 0xe
  __asm call LAB_1007e307
  __asm mov edi, eax
  __asm push offset LAB_11878d88
  __asm lea ecx, [ebp - 0x3c]
  __asm mov byte ptr [ebp - 4], 0xf
  __asm call LAB_10015e74
  __asm mov esi, eax
  __asm lea eax, [ebp + 0x4c]
  __asm mov byte ptr [ebp - 4], 0x10
  __asm push eax
  __asm mov ecx, edi
  __asm call LAB_1007610c
  __asm push eax
  __asm mov ecx, esi
  __asm call LAB_1000858a
  __asm add eax, 4
  __asm lea ecx, [ebp - 0xb4]
  __asm push eax
  __asm call LAB_1005c11c
  __asm lea ecx, [ebp - 0x2c]
  __asm mov byte ptr [ebp - 4], 0x11
  __asm call LAB_10066c8e
  __asm push 0xc
  __asm mov ecx, eax
  __asm mov byte ptr [ebp - 4], 0x12
  __asm call LAB_1008dd25
  __asm push offset LAB_1187b7d4
  __asm lea ecx, [ebp + 0x6c]
  __asm mov esi, eax
  __asm call LAB_1005273e
  __asm mov edx, dword ptr [esi]
  __asm lea eax, [ebp + 0x44]
  __asm push eax
  __asm mov ecx, esi
  __asm mov byte ptr [ebp - 4], 0x13
  __asm call dword ptr [edx]
  __asm lea ecx, [eax + 4]
  __asm call LAB_10051e4c
  __asm mov ecx, dword ptr [ebp + 0x44]
  __asm lea edx, [ebp + 0x6c]
  __asm push 1
  __asm push edx
  __asm mov byte ptr [ebp - 4], 0x14
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x28]
  __asm mov byte ptr [ebp - 4], 0x15
  __asm mov ecx, dword ptr [ebp + 0x44]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp + 0x6c]
  __asm mov byte ptr [ebp - 4], 0x16
  __asm call LAB_1005c315
  __asm push offset LAB_1187bf80
  __asm lea ecx, [ebp + 0x64]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x6c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov byte ptr [ebp - 4], 0x12
  __asm call LAB_1005273e
  __asm lea eax, [ebp + 0x40]
  __asm mov byte ptr [ebp - 4], 0x17
  __asm push eax
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax]
  __asm lea ecx, [eax + 4]
  __asm call LAB_10051e4c
  __asm mov ecx, dword ptr [ebp + 0x40]
  __asm lea edx, [ebp + 0x64]
  __asm push edx
  __asm mov byte ptr [ebp - 4], 0x18
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x74]
  __asm call eax
  __asm test al, al
  __asm sete bl
  __asm mov ecx, dword ptr [ebp + 0x40]
  __asm mov byte ptr [ebp - 4], 0x19
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp + 0x64]
  __asm mov byte ptr [ebp - 4], 0x1a
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x64 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov byte ptr [ebp - 4], 0x12
  __asm test bl, bl
  __asm _emit 0x74 __asm _emit 0x5c
  __asm push offset LAB_1187bf80
  __asm lea ecx, [ebp + 0x60]
  __asm call LAB_1005273e
  __asm lea eax, [ebp + 0x3c]
  __asm mov byte ptr [ebp - 4], 0x1b
  __asm push eax
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax]
  __asm lea ecx, [eax + 4]
  __asm call LAB_10051e4c
  __asm mov ecx, dword ptr [ebp + 0x3c]
  __asm lea edx, [ebp + 0x60]
  __asm push 1
  __asm push edx
  __asm mov byte ptr [ebp - 4], 0x1c
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x28]
  __asm mov ecx, dword ptr [ebp + 0x3c]
  __asm mov byte ptr [ebp - 4], 0x1d
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp + 0x60]
  __asm mov byte ptr [ebp - 4], 0x1e
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x60 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov byte ptr [ebp - 4], 0x12
  __asm push offset LAB_1187bf90
  __asm lea ecx, [ebp + 0x5c]
  __asm call LAB_1005273e
  __asm lea eax, [ebp + 0x38]
  __asm mov byte ptr [ebp - 4], 0x1f
  __asm push eax
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax]
  __asm lea ecx, [eax + 4]
  __asm call LAB_10051e4c
  __asm mov ecx, dword ptr [ebp + 0x38]
  __asm lea edx, [ebp + 0x5c]
  __asm push edx
  __asm mov byte ptr [ebp - 4], 0x20
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x74]
  __asm call eax
  __asm test al, al
  __asm sete bl
  __asm mov ecx, dword ptr [ebp + 0x38]
  __asm mov byte ptr [ebp - 4], 0x21
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp + 0x5c]
  __asm mov byte ptr [ebp - 4], 0x22
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x5c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov byte ptr [ebp - 4], 0x12
  __asm test bl, bl
  __asm _emit 0x74 __asm _emit 0x5c
  __asm push offset LAB_1187bf90
  __asm lea ecx, [ebp + 0x58]
  __asm call LAB_1005273e
  __asm lea eax, [ebp + 0x34]
  __asm mov byte ptr [ebp - 4], 0x23
  __asm push eax
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax]
  __asm lea ecx, [eax + 4]
  __asm call LAB_10051e4c
  __asm mov ecx, dword ptr [ebp + 0x34]
  __asm lea edx, [ebp + 0x58]
  __asm push 0
  __asm push edx
  __asm mov byte ptr [ebp - 4], 0x24
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x28]
  __asm mov ecx, dword ptr [ebp + 0x34]
  __asm mov byte ptr [ebp - 4], 0x25
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp + 0x58]
  __asm mov byte ptr [ebp - 4], 0x26
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x58 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov byte ptr [ebp - 4], 0x12
  __asm push offset LAB_1187bfa0
  __asm lea ecx, [ebp + 0x54]
  __asm call LAB_1005273e
  __asm lea eax, [ebp + 0x30]
  __asm mov byte ptr [ebp - 4], 0x27
  __asm push eax
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax]
  __asm lea ecx, [eax + 4]
  __asm call LAB_10051e4c
  __asm mov ecx, dword ptr [ebp + 0x30]
  __asm lea edx, [ebp + 0x54]
  __asm push edx
  __asm mov byte ptr [ebp - 4], 0x28
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x74]
  __asm call eax
  __asm test al, al
  __asm sete bl
  __asm mov ecx, dword ptr [ebp + 0x30]
  __asm mov byte ptr [ebp - 4], 0x29
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp + 0x54]
  __asm mov byte ptr [ebp - 4], 0x2a
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x54 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov byte ptr [ebp - 4], 0x12
  __asm test bl, bl
  __asm _emit 0x74 __asm _emit 0x5c
  __asm push offset LAB_1187bfa0
  __asm lea ecx, [ebp + 0x50]
  __asm call LAB_1005273e
  __asm lea eax, [ebp + 0x68]
  __asm mov byte ptr [ebp - 4], 0x2b
  __asm push eax
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax]
  __asm lea ecx, [eax + 4]
  __asm call LAB_10051e4c
  __asm mov ecx, dword ptr [ebp + 0x68]
  __asm lea edx, [ebp + 0x50]
  __asm push 0
  __asm push edx
  __asm mov byte ptr [ebp - 4], 0x2c
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x28]
  __asm mov ecx, dword ptr [ebp + 0x68]
  __asm mov byte ptr [ebp - 4], 0x2d
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp + 0x50]
  __asm mov byte ptr [ebp - 4], 0x2e
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x50 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov byte ptr [ebp - 4], 0x12
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax]
  __asm add eax, 4
  __asm lea ecx, [ebp - 0x94]
  __asm push eax
  __asm call LAB_1005c11c
  __asm xorps xmm0, xmm0
  __asm mov dword ptr [ebp + 0x10], LAB_118bc0e4
  __asm movups xmmword ptr [ebp + 0x14], xmm0
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x28 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x2c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea eax, [ebp - 0x94]
  __asm mov byte ptr [ebp - 4], 0x30
  __asm push eax
  __asm lea ecx, [ebp + 0x10]
  __asm call LAB_10026ac6
  __asm mov edi, dword ptr [ebp]
  __asm mov esi, eax
  __asm mov ecx, edi
  __asm call LAB_1000d2bf
  __asm lea ecx, [ebp - 0x134]
  __asm push ecx
  __asm mov ecx, eax
  __asm call LAB_100692db
  __asm mov edx, dword ptr [esi]
  __asm mov ecx, esi
  __asm push eax
  __asm mov byte ptr [ebp - 4], 0x31
  __asm call dword ptr [edx + 8]
  __asm lea ecx, [ebp - 0xb4]
  __asm push ecx
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 8]
  __asm mov ecx, dword ptr [edi + 0xe0]
  __asm mov edx, eax
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x09
  __asm cmp byte ptr [ecx], 0
  __asm mov byte ptr [ebp + 0x68], 1
  __asm _emit 0x75 __asm _emit 0x04
  __asm mov byte ptr [ebp + 0x68], 0
  __asm mov eax, dword ptr [edx]
  __asm lea ecx, [ebp - 0xd4]
  __asm push ecx
  __asm push dword ptr [ebp + 0x68]
  __asm mov ecx, edx
  __asm call dword ptr [eax + 0xc]
  __asm lea ecx, [ebp - 0xf4]
  __asm push ecx
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 0x14]
  __asm lea ecx, [ebp - 0x114]
  __asm push ecx
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 8]
  __asm mov ebx, dword ptr [ebp + 0x78]
  __asm mov ecx, ebx
  __asm push eax
  __asm call LAB_10005975
  __asm lea ecx, [ebp - 0x120]
  __asm call LAB_10051c49
  __asm lea ecx, [ebp - 0x12c]
  __asm call LAB_1005dcb0
  __asm mov esi, dword ptr [ebp + 0x24]
  __asm mov dword ptr [ebp - 0x134], LAB_118bc0c0
  __asm mov byte ptr [ebp - 4], 0x2f
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x5e
  __asm mov edi, dword ptr [ebp + 0x28]
  __asm cmp esi, edi
  __asm _emit 0x74 __asm _emit 0x12
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 0
  __asm call dword ptr [eax]
  __asm add esi, 0x20
  __asm cmp esi, edi
  __asm _emit 0x75 __asm _emit 0xf1
  __asm mov esi, dword ptr [ebp + 0x24]
  __asm mov ecx, dword ptr [ebp + 0x2c]
  __asm mov eax, esi
  __asm sub ecx, esi
  __asm and ecx, 0xffffffe0
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x14
  __asm mov esi, dword ptr [esi - 4]
  __asm add ecx, 0x23
  __asm sub eax, esi
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja LAB_1060d625
  __asm push ecx
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x28 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x2c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov esi, dword ptr [ebp + 0x18]
  __asm test esi, esi
  __asm je LAB_1060d64d
  __asm mov ebx, dword ptr [ebp + 0x1c]
  __asm cmp esi, ebx
  __asm _emit 0x74 __asm _emit 0x44
  __asm lea edi, [esi + 4]
  __asm nop
  __asm lea ecx, [edi + 4]
  __asm mov byte ptr [ebp - 4], 0x32
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [edi]
  __asm mov byte ptr [ebp - 4], 0x33
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x12 __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x07 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm add edi, 0xc
  __asm mov byte ptr [ebp - 4], 0x2f
  __asm lea eax, [edi - 4]
  __asm cmp eax, ebx
  __asm _emit 0x75 __asm _emit 0xc3
  __asm mov esi, dword ptr [ebp + 0x18]
  __asm mov ecx, dword ptr [ebp + 0x20]
  __asm mov eax, 0x2aaaaaab
  __asm sub ecx, esi
  __asm imul ecx
  __asm _emit 0xd1 __asm _emit 0xfa
  __asm mov eax, edx
  __asm shr eax, 0x1f
  __asm add eax, edx
  __asm lea ecx, [eax + eax*2]
  __asm mov eax, esi
  __asm shl ecx, 2
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x16
  __asm mov esi, dword ptr [esi - 4]
  __asm add ecx, 0x23
  __asm sub eax, esi
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x76 __asm _emit 0x06
  __asm call dword ptr [LAB_122fc888]
  __asm push ecx
  __asm push esi
  __asm call LAB_100131d8
  __asm mov ebx, dword ptr [ebp + 0x78]
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x1c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x20 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea ecx, [ebp - 0x80]
  __asm mov dword ptr [ebp + 0x10], LAB_118bc0c0
  __asm call LAB_10051c49
  __asm lea ecx, [ebp - 0x8c]
  __asm call LAB_1005dcb0
  __asm mov dword ptr [ebp - 0x94], LAB_118bc0c0
  __asm lea ecx, [ebp - 0x20]
  __asm mov byte ptr [ebp - 4], 0x34
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xe0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ebp - 0x24]
  __asm mov byte ptr [ebp - 4], 0x35
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xd8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xdc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp - 0xa0]
  __asm call LAB_10051c49
  __asm lea ecx, [ebp - 0xac]
  __asm call LAB_1005dcb0
  __asm mov dword ptr [ebp - 0xb4], LAB_118bc0c0
  __asm lea ecx, [ebp - 0x30]
  __asm mov byte ptr [ebp - 4], 0x36
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xd0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ebp - 0x34]
  __asm mov byte ptr [ebp - 4], 0x37
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xc8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xcc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp + 8]
  __asm mov byte ptr [ebp - 4], 0x38
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp + 0x4c]
  __asm mov byte ptr [ebp - 4], 0x39
  __asm call LAB_1005c315
  __asm lea ecx, [ebp - 0xc0]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x4c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10051c49
  __asm lea ecx, [ebp - 0xcc]
  __asm call LAB_1005dcb0
  __asm mov dword ptr [ebp - 0xd4], LAB_118bc0c0
  __asm lea ecx, [ebp - 0x40]
  __asm mov byte ptr [ebp - 4], 0x3a
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xc0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ebp - 0x44]
  __asm mov byte ptr [ebp - 4], 0x3b
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xb8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xbc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp - 0x74]
  __asm mov byte ptr [ebp - 4], 0x3c
  __asm call LAB_1005c315
  __asm lea ecx, [ebp - 0xe0]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x8c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10051c49
  __asm lea ecx, [ebp - 0xec]
  __asm call LAB_1005dcb0
  __asm mov dword ptr [ebp - 0xf4], LAB_118bc0c0
  __asm lea ecx, [ebp - 0x50]
  __asm mov byte ptr [ebp - 4], 0x3d
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xb0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ebp - 0x54]
  __asm mov byte ptr [ebp - 4], 0x3e
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xa8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xac __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp - 0x14]
  __asm mov byte ptr [ebp - 4], 0x3f
  __asm call LAB_1005c315
  __asm lea ecx, [ebp - 0x100]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xec __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10051c49
  __asm lea ecx, [ebp - 0x10c]
  __asm call LAB_1005dcb0
  __asm mov dword ptr [ebp - 0x114], LAB_118bc0c0
  __asm lea ecx, [ebp - 0x60]
  __asm mov byte ptr [ebp - 4], 0x40
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xa0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ebp - 0x64]
  __asm mov byte ptr [ebp - 4], 0x41
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x98 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x9c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp - 0x1c]
  __asm mov byte ptr [ebp - 4], 0x42
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xe4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea ecx, [ebp + 0x48]
  __asm mov byte ptr [ebp - 4], 0x43
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x48 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea ecx, [ebp + 0xc]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x44 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm mov eax, ebx
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm lea esp, [ebp + 0x70]
  __asm pop ebp
  __asm ret 4
}




// Reference entry 1060dac0; body size 2304 bytes.
#line 1 "ENTRY_1060dac0"

__declspec(naked) void FUN_1060dac0(void)

{
  __asm push ebp
  __asm lea ebp, [esp - 0x70]
  __asm sub esp, 0x70
  __asm push -1
  __asm push offset LAB_115bbf8d
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 0x158
  __asm push ebx
  __asm push esi
  __asm push edi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ebp + 0x10], ecx
  __asm push offset LAB_11882ff0
  __asm lea eax, [ebp - 0x84]
  __asm push 0x208f
  __asm push eax
  __asm call LAB_10098626
  __asm add esp, 0xc
  __asm mov esi, eax
  __asm push offset LAB_118bd270
  __asm lea ecx, [ebp - 0x74]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1002f969
  __asm push esi
  __asm mov ecx, eax
  __asm mov byte ptr [ebp - 4], 1
  __asm call LAB_10024da2
  __asm add eax, 4
  __asm lea ecx, [ebp - 0x144]
  __asm push eax
  __asm call LAB_1005c11c
  __asm push offset LAB_11882ff0
  __asm lea eax, [ebp - 0x14]
  __asm mov byte ptr [ebp - 4], 2
  __asm push 0x2c01
  __asm push eax
  __asm call LAB_10098626
  __asm add esp, 0xc
  __asm mov esi, eax
  __asm push offset LAB_118bcc7c
  __asm lea ecx, [ebp - 0x64]
  __asm mov byte ptr [ebp - 4], 3
  __asm call LAB_1002f969
  __asm push esi
  __asm mov ecx, eax
  __asm mov byte ptr [ebp - 4], 4
  __asm call LAB_10024da2
  __asm add eax, 4
  __asm lea ecx, [ebp - 0x124]
  __asm push eax
  __asm call LAB_1005c11c
  __asm push offset LAB_11882ff0
  __asm lea eax, [ebp]
  __asm mov byte ptr [ebp - 4], 5
  __asm push 0x2bff
  __asm push eax
  __asm call LAB_10098626
  __asm add esp, 0xc
  __asm mov esi, eax
  __asm push offset LAB_118bd268
  __asm lea ecx, [ebp - 0x54]
  __asm mov byte ptr [ebp - 4], 6
  __asm call LAB_1007f8c4
  __asm push esi
  __asm mov ecx, eax
  __asm mov byte ptr [ebp - 4], 7
  __asm call LAB_10019754
  __asm add eax, 4
  __asm lea ecx, [ebp - 0x104]
  __asm push eax
  __asm call LAB_1005c11c
  __asm push offset LAB_11882ff0
  __asm lea eax, [ebp - 0x7c]
  __asm mov byte ptr [ebp - 4], 8
  __asm push 0x2c00
  __asm push eax
  __asm call LAB_10098626
  __asm add esp, 0xc
  __asm mov esi, eax
  __asm push offset LAB_118bd268
  __asm lea ecx, [ebp - 0x44]
  __asm mov byte ptr [ebp - 4], 9
  __asm call LAB_1007f8c4
  __asm push esi
  __asm mov ecx, eax
  __asm mov byte ptr [ebp - 4], 0xa
  __asm call LAB_10019754
  __asm add eax, 4
  __asm lea ecx, [ebp - 0xe4]
  __asm push eax
  __asm call LAB_1005c11c
  __asm push offset LAB_118bd24c
  __asm lea ecx, [ebp + 0x50]
  __asm mov byte ptr [ebp - 4], 0xb
  __asm call LAB_1005273e
  __asm lea ecx, [ebp + 8]
  __asm mov byte ptr [ebp - 4], 0xc
  __asm call LAB_1007e307
  __asm mov edi, eax
  __asm push offset LAB_11878d88
  __asm lea ecx, [ebp - 0x34]
  __asm mov byte ptr [ebp - 4], 0xd
  __asm call LAB_10015e74
  __asm mov esi, eax
  __asm lea eax, [ebp + 0x50]
  __asm mov byte ptr [ebp - 4], 0xe
  __asm push eax
  __asm mov ecx, edi
  __asm call LAB_1007610c
  __asm push eax
  __asm mov ecx, esi
  __asm call LAB_1000858a
  __asm add eax, 4
  __asm lea ecx, [ebp - 0xc4]
  __asm push eax
  __asm call LAB_1005c11c
  __asm lea ecx, [ebp - 0x24]
  __asm mov byte ptr [ebp - 4], 0xf
  __asm call LAB_10066c8e
  __asm mov esi, eax
  __asm push offset LAB_1187b7d4
  __asm lea ecx, [ebp + 0x6c]
  __asm mov byte ptr [ebp - 4], 0x10
  __asm call LAB_1005273e
  __asm lea eax, [ebp + 0x4c]
  __asm mov byte ptr [ebp - 4], 0x11
  __asm push eax
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax]
  __asm lea ecx, [eax + 4]
  __asm call LAB_10051e4c
  __asm mov ecx, dword ptr [ebp + 0x4c]
  __asm lea edx, [ebp + 0x6c]
  __asm push 1
  __asm push edx
  __asm mov byte ptr [ebp - 4], 0x12
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x28]
  __asm mov ecx, dword ptr [ebp + 0x4c]
  __asm mov byte ptr [ebp - 4], 0x13
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp + 0x6c]
  __asm mov byte ptr [ebp - 4], 0x14
  __asm call LAB_1005c315
  __asm push offset LAB_1187bf80
  __asm lea ecx, [ebp + 0x68]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x6c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov byte ptr [ebp - 4], 0x10
  __asm call LAB_1005273e
  __asm lea eax, [ebp + 0x48]
  __asm mov byte ptr [ebp - 4], 0x15
  __asm push eax
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax]
  __asm lea ecx, [eax + 4]
  __asm call LAB_10051e4c
  __asm mov ecx, dword ptr [ebp + 0x48]
  __asm lea edx, [ebp + 0x68]
  __asm push edx
  __asm mov byte ptr [ebp - 4], 0x16
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x74]
  __asm call eax
  __asm test al, al
  __asm sete bl
  __asm mov ecx, dword ptr [ebp + 0x48]
  __asm mov byte ptr [ebp - 4], 0x17
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp + 0x68]
  __asm mov byte ptr [ebp - 4], 0x18
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x68 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov byte ptr [ebp - 4], 0x10
  __asm test bl, bl
  __asm _emit 0x74 __asm _emit 0x5c
  __asm push offset LAB_1187bf80
  __asm lea ecx, [ebp + 0x64]
  __asm call LAB_1005273e
  __asm lea eax, [ebp + 0x44]
  __asm mov byte ptr [ebp - 4], 0x19
  __asm push eax
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax]
  __asm lea ecx, [eax + 4]
  __asm call LAB_10051e4c
  __asm mov ecx, dword ptr [ebp + 0x44]
  __asm lea edx, [ebp + 0x64]
  __asm push 1
  __asm push edx
  __asm mov byte ptr [ebp - 4], 0x1a
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x28]
  __asm mov ecx, dword ptr [ebp + 0x44]
  __asm mov byte ptr [ebp - 4], 0x1b
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp + 0x64]
  __asm mov byte ptr [ebp - 4], 0x1c
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x64 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov byte ptr [ebp - 4], 0x10
  __asm push offset LAB_1187bf90
  __asm lea ecx, [ebp + 0x60]
  __asm call LAB_1005273e
  __asm lea eax, [ebp + 0x40]
  __asm mov byte ptr [ebp - 4], 0x1d
  __asm push eax
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax]
  __asm lea ecx, [eax + 4]
  __asm call LAB_10051e4c
  __asm mov ecx, dword ptr [ebp + 0x40]
  __asm lea edx, [ebp + 0x60]
  __asm push edx
  __asm mov byte ptr [ebp - 4], 0x1e
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x74]
  __asm call eax
  __asm test al, al
  __asm sete bl
  __asm mov ecx, dword ptr [ebp + 0x40]
  __asm mov byte ptr [ebp - 4], 0x1f
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp + 0x60]
  __asm mov byte ptr [ebp - 4], 0x20
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x60 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov byte ptr [ebp - 4], 0x10
  __asm test bl, bl
  __asm _emit 0x74 __asm _emit 0x5c
  __asm push offset LAB_1187bf90
  __asm lea ecx, [ebp + 0x5c]
  __asm call LAB_1005273e
  __asm lea eax, [ebp + 0x3c]
  __asm mov byte ptr [ebp - 4], 0x21
  __asm push eax
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax]
  __asm lea ecx, [eax + 4]
  __asm call LAB_10051e4c
  __asm mov ecx, dword ptr [ebp + 0x3c]
  __asm lea edx, [ebp + 0x5c]
  __asm push 0
  __asm push edx
  __asm mov byte ptr [ebp - 4], 0x22
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x28]
  __asm mov ecx, dword ptr [ebp + 0x3c]
  __asm mov byte ptr [ebp - 4], 0x23
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp + 0x5c]
  __asm mov byte ptr [ebp - 4], 0x24
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x5c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov byte ptr [ebp - 4], 0x10
  __asm push offset LAB_1187bfa0
  __asm lea ecx, [ebp + 0x58]
  __asm call LAB_1005273e
  __asm lea eax, [ebp + 0x38]
  __asm mov byte ptr [ebp - 4], 0x25
  __asm push eax
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax]
  __asm lea ecx, [eax + 4]
  __asm call LAB_10051e4c
  __asm mov ecx, dword ptr [ebp + 0x38]
  __asm lea edx, [ebp + 0x58]
  __asm push edx
  __asm mov byte ptr [ebp - 4], 0x26
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x74]
  __asm call eax
  __asm test al, al
  __asm sete bl
  __asm mov ecx, dword ptr [ebp + 0x38]
  __asm mov byte ptr [ebp - 4], 0x27
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp + 0x58]
  __asm mov byte ptr [ebp - 4], 0x28
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x58 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov byte ptr [ebp - 4], 0x10
  __asm test bl, bl
  __asm _emit 0x74 __asm _emit 0x5c
  __asm push offset LAB_1187bfa0
  __asm lea ecx, [ebp + 0x54]
  __asm call LAB_1005273e
  __asm lea eax, [ebp + 0x34]
  __asm mov byte ptr [ebp - 4], 0x29
  __asm push eax
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax]
  __asm lea ecx, [eax + 4]
  __asm call LAB_10051e4c
  __asm mov ecx, dword ptr [ebp + 0x34]
  __asm lea edx, [ebp + 0x54]
  __asm push 0
  __asm push edx
  __asm mov byte ptr [ebp - 4], 0x2a
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x28]
  __asm mov ecx, dword ptr [ebp + 0x34]
  __asm mov byte ptr [ebp - 4], 0x2b
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp + 0x54]
  __asm mov byte ptr [ebp - 4], 0x2c
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x54 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov byte ptr [ebp - 4], 0x10
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax]
  __asm push 0xc
  __asm mov ecx, eax
  __asm call LAB_1008dd25
  __asm add eax, 4
  __asm lea ecx, [ebp - 0xa4]
  __asm push eax
  __asm call LAB_1005c11c
  __asm xorps xmm0, xmm0
  __asm mov dword ptr [ebp + 0x14], LAB_118bc0e4
  __asm movups xmmword ptr [ebp + 0x18], xmm0
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x28 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x2c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x30 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea eax, [ebp - 0xa4]
  __asm mov byte ptr [ebp - 4], 0x2e
  __asm push eax
  __asm lea ecx, [ebp + 0x14]
  __asm call LAB_10026ac6
  __asm mov ecx, dword ptr [ebp + 0x10]
  __asm mov esi, eax
  __asm call LAB_1000d2bf
  __asm lea ecx, [ebp - 0x164]
  __asm push ecx
  __asm mov ecx, eax
  __asm call LAB_100692db
  __asm mov edx, dword ptr [esi]
  __asm mov ecx, esi
  __asm push eax
  __asm mov byte ptr [ebp - 4], 0x2f
  __asm call dword ptr [edx + 8]
  __asm lea ecx, [ebp - 0xc4]
  __asm push ecx
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 8]
  __asm mov esi, eax
  __asm lea eax, [ebp - 0xe4]
  __asm push eax
  __asm mov edi, dword ptr [esi]
  __asm call LAB_1001c9c2
  __asm mov ecx, dword ptr [eax + 0x4c]
  __asm movzx ecx, byte ptr [ecx + 0x53]
  __asm push ecx
  __asm mov ecx, esi
  __asm call dword ptr [edi + 0xc]
  __asm lea ecx, [ebp - 0x104]
  __asm push ecx
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 0x14]
  __asm mov esi, eax
  __asm lea eax, [ebp - 0x124]
  __asm push eax
  __asm mov edi, dword ptr [esi]
  __asm call LAB_1001c9c2
  __asm mov ecx, dword ptr [eax + 0x4c]
  __asm movzx ecx, byte ptr [ecx + 0x53]
  __asm push ecx
  __asm mov ecx, esi
  __asm call dword ptr [edi + 0xc]
  __asm lea ecx, [ebp - 0x144]
  __asm push ecx
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 0x14]
  __asm mov ebx, dword ptr [ebp + 0x78]
  __asm mov ecx, ebx
  __asm push eax
  __asm call LAB_10005975
  __asm lea ecx, [ebp - 0x150]
  __asm call LAB_10051c49
  __asm lea ecx, [ebp - 0x15c]
  __asm call LAB_1005dcb0
  __asm mov dword ptr [ebp - 0x164], LAB_118bc0c0
  __asm mov byte ptr [ebp - 4], 0x2d
  __asm mov esi, dword ptr [ebp + 0x28]
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x5e
  __asm mov edi, dword ptr [ebp + 0x2c]
  __asm cmp esi, edi
  __asm _emit 0x74 __asm _emit 0x12
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 0
  __asm call dword ptr [eax]
  __asm add esi, 0x20
  __asm cmp esi, edi
  __asm _emit 0x75 __asm _emit 0xf1
  __asm mov esi, dword ptr [ebp + 0x28]
  __asm mov ecx, dword ptr [ebp + 0x30]
  __asm mov eax, esi
  __asm sub ecx, esi
  __asm and ecx, 0xffffffe0
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x14
  __asm mov esi, dword ptr [esi - 4]
  __asm add ecx, 0x23
  __asm sub eax, esi
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja LAB_1060e118
  __asm push ecx
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x28 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x2c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x30 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov esi, dword ptr [ebp + 0x1c]
  __asm test esi, esi
  __asm je LAB_1060e140
  __asm mov ebx, dword ptr [ebp + 0x20]
  __asm cmp esi, ebx
  __asm _emit 0x74 __asm _emit 0x43
  __asm add esi, 4
  __asm lea ecx, [esi + 4]
  __asm mov byte ptr [ebp - 4], 0x30
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [esi]
  __asm mov byte ptr [ebp - 4], 0x31
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x12 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm add esi, 0xc
  __asm mov byte ptr [ebp - 4], 0x2d
  __asm lea eax, [esi - 4]
  __asm cmp eax, ebx
  __asm _emit 0x75 __asm _emit 0xc3
  __asm mov esi, dword ptr [ebp + 0x1c]
  __asm mov ecx, dword ptr [ebp + 0x24]
  __asm mov eax, 0x2aaaaaab
  __asm sub ecx, esi
  __asm imul ecx
  __asm _emit 0xd1 __asm _emit 0xfa
  __asm mov eax, edx
  __asm shr eax, 0x1f
  __asm add eax, edx
  __asm lea ecx, [eax + eax*2]
  __asm mov eax, esi
  __asm shl ecx, 2
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x16
  __asm mov esi, dword ptr [esi - 4]
  __asm add ecx, 0x23
  __asm sub eax, esi
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x76 __asm _emit 0x06
  __asm call dword ptr [LAB_122fc888]
  __asm push ecx
  __asm push esi
  __asm call LAB_100131d8
  __asm mov ebx, dword ptr [ebp + 0x78]
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x1c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x20 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea ecx, [ebp - 0x90]
  __asm mov dword ptr [ebp + 0x14], LAB_118bc0c0
  __asm call LAB_10051c49
  __asm lea ecx, [ebp - 0x9c]
  __asm call LAB_1005dcb0
  __asm mov dword ptr [ebp - 0xa4], LAB_118bc0c0
  __asm lea ecx, [ebp - 0x18]
  __asm mov byte ptr [ebp - 4], 0x32
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xe8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ebp - 0x1c]
  __asm mov byte ptr [ebp - 4], 0x33
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xe0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xe4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp - 0xb0]
  __asm call LAB_10051c49
  __asm lea ecx, [ebp - 0xbc]
  __asm call LAB_1005dcb0
  __asm mov dword ptr [ebp - 0xc4], LAB_118bc0c0
  __asm lea ecx, [ebp - 0x28]
  __asm mov byte ptr [ebp - 4], 0x34
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xd8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ebp - 0x2c]
  __asm mov byte ptr [ebp - 4], 0x35
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xd0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xd4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp + 0xc]
  __asm mov byte ptr [ebp - 4], 0x36
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp + 0x50]
  __asm mov byte ptr [ebp - 4], 0x37
  __asm call LAB_1005c315
  __asm lea ecx, [ebp - 0xd0]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x50 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10051c49
  __asm lea ecx, [ebp - 0xdc]
  __asm call LAB_1005dcb0
  __asm mov dword ptr [ebp - 0xe4], LAB_118bc0c0
  __asm lea ecx, [ebp - 0x38]
  __asm mov byte ptr [ebp - 4], 0x38
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xc8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ebp - 0x3c]
  __asm mov byte ptr [ebp - 4], 0x39
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xc0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xc4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp - 0x7c]
  __asm mov byte ptr [ebp - 4], 0x3a
  __asm call LAB_1005c315
  __asm lea ecx, [ebp - 0xf0]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x84 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10051c49
  __asm lea ecx, [ebp - 0xfc]
  __asm call LAB_1005dcb0
  __asm mov dword ptr [ebp - 0x104], LAB_118bc0c0
  __asm lea ecx, [ebp - 0x48]
  __asm mov byte ptr [ebp - 4], 0x3b
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xb8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ebp - 0x4c]
  __asm mov byte ptr [ebp - 4], 0x3c
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xb0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xb4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp]
  __asm mov byte ptr [ebp - 4], 0x3d
  __asm call LAB_1005c315
  __asm lea ecx, [ebp - 0x110]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10051c49
  __asm lea ecx, [ebp - 0x11c]
  __asm call LAB_1005dcb0
  __asm mov dword ptr [ebp - 0x124], LAB_118bc0c0
  __asm lea ecx, [ebp - 0x58]
  __asm mov byte ptr [ebp - 4], 0x3e
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xa8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ebp - 0x5c]
  __asm mov byte ptr [ebp - 4], 0x3f
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xa0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xa4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp - 0x14]
  __asm mov byte ptr [ebp - 4], 0x40
  __asm call LAB_1005c315
  __asm lea ecx, [ebp - 0x130]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xec __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10051c49
  __asm lea ecx, [ebp - 0x13c]
  __asm call LAB_1005dcb0
  __asm mov dword ptr [ebp - 0x144], LAB_118bc0c0
  __asm lea ecx, [ebp - 0x68]
  __asm mov byte ptr [ebp - 4], 0x41
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x98 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ebp - 0x6c]
  __asm mov byte ptr [ebp - 4], 0x42
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x90 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x94 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 8]
  __asm lea ecx, [ebp - 0x84]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x43 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm mov eax, ebx
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm lea esp, [ebp + 0x70]
  __asm pop ebp
  __asm ret 4
}




// Reference entry 1060e600; body size 1837 bytes.
#line 1 "ENTRY_1060e600"

__declspec(naked) void FUN_1060e600(void)

{
  __asm push ebp
  __asm lea ebp, [esp - 0x70]
  __asm sub esp, 0x70
  __asm push -1
  __asm push offset LAB_115bc0e9
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 0xe0
  __asm push ebx
  __asm push esi
  __asm push edi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ebp + 0x10], ecx
  __asm push offset LAB_118bcc7c
  __asm lea ecx, [ebp - 0x4c]
  __asm call LAB_1008354b
  __asm add eax, 4
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm lea ecx, [ebp - 0xcc]
  __asm call LAB_1005c11c
  __asm push offset LAB_11882ff0
  __asm lea eax, [ebp]
  __asm mov byte ptr [ebp - 4], 1
  __asm push 0x2bfc
  __asm push eax
  __asm call LAB_10098626
  __asm add esp, 0xc
  __asm mov esi, eax
  __asm push offset LAB_118bd268
  __asm lea ecx, [ebp - 0x3c]
  __asm mov byte ptr [ebp - 4], 2
  __asm call LAB_1007f8c4
  __asm push esi
  __asm mov ecx, eax
  __asm mov byte ptr [ebp - 4], 3
  __asm call LAB_10019754
  __asm add eax, 4
  __asm lea ecx, [ebp - 0xac]
  __asm push eax
  __asm call LAB_1005c11c
  __asm push offset LAB_118bd310
  __asm lea ecx, [ebp + 0x50]
  __asm mov byte ptr [ebp - 4], 4
  __asm call LAB_1005273e
  __asm lea ecx, [ebp + 8]
  __asm mov byte ptr [ebp - 4], 5
  __asm call LAB_1007e307
  __asm mov edi, eax
  __asm push offset LAB_11878d88
  __asm lea ecx, [ebp - 0x2c]
  __asm mov byte ptr [ebp - 4], 6
  __asm call LAB_10015e74
  __asm mov esi, eax
  __asm lea eax, [ebp + 0x50]
  __asm mov byte ptr [ebp - 4], 7
  __asm push eax
  __asm mov ecx, edi
  __asm call LAB_1007610c
  __asm push eax
  __asm mov ecx, esi
  __asm call LAB_1000858a
  __asm add eax, 4
  __asm lea ecx, [ebp - 0x8c]
  __asm push eax
  __asm call LAB_1005c11c
  __asm lea ecx, [ebp - 0x1c]
  __asm mov byte ptr [ebp - 4], 8
  __asm call LAB_10066c8e
  __asm mov esi, eax
  __asm push offset LAB_1187b7d4
  __asm lea ecx, [ebp + 0x6c]
  __asm mov byte ptr [ebp - 4], 9
  __asm call LAB_1005273e
  __asm lea eax, [ebp + 0x4c]
  __asm mov byte ptr [ebp - 4], 0xa
  __asm push eax
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax]
  __asm lea ecx, [eax + 4]
  __asm call LAB_10051e4c
  __asm mov ecx, dword ptr [ebp + 0x4c]
  __asm lea edx, [ebp + 0x6c]
  __asm push 1
  __asm push edx
  __asm mov byte ptr [ebp - 4], 0xb
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x28]
  __asm mov ecx, dword ptr [ebp + 0x4c]
  __asm mov byte ptr [ebp - 4], 0xc
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp + 0x6c]
  __asm mov byte ptr [ebp - 4], 0xd
  __asm call LAB_1005c315
  __asm push offset LAB_1187bf80
  __asm lea ecx, [ebp + 0x68]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x6c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov byte ptr [ebp - 4], 9
  __asm call LAB_1005273e
  __asm lea eax, [ebp + 0x48]
  __asm mov byte ptr [ebp - 4], 0xe
  __asm push eax
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax]
  __asm lea ecx, [eax + 4]
  __asm call LAB_10051e4c
  __asm mov ecx, dword ptr [ebp + 0x48]
  __asm lea edx, [ebp + 0x68]
  __asm push edx
  __asm mov byte ptr [ebp - 4], 0xf
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x74]
  __asm call eax
  __asm test al, al
  __asm sete bl
  __asm mov ecx, dword ptr [ebp + 0x48]
  __asm mov byte ptr [ebp - 4], 0x10
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp + 0x68]
  __asm mov byte ptr [ebp - 4], 0x11
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x68 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov byte ptr [ebp - 4], 9
  __asm test bl, bl
  __asm _emit 0x74 __asm _emit 0x5c
  __asm push offset LAB_1187bf80
  __asm lea ecx, [ebp + 0x64]
  __asm call LAB_1005273e
  __asm lea eax, [ebp + 0x44]
  __asm mov byte ptr [ebp - 4], 0x12
  __asm push eax
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax]
  __asm lea ecx, [eax + 4]
  __asm call LAB_10051e4c
  __asm mov ecx, dword ptr [ebp + 0x44]
  __asm lea edx, [ebp + 0x64]
  __asm push 1
  __asm push edx
  __asm mov byte ptr [ebp - 4], 0x13
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x28]
  __asm mov ecx, dword ptr [ebp + 0x44]
  __asm mov byte ptr [ebp - 4], 0x14
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp + 0x64]
  __asm mov byte ptr [ebp - 4], 0x15
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x64 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov byte ptr [ebp - 4], 9
  __asm push offset LAB_1187bf90
  __asm lea ecx, [ebp + 0x60]
  __asm call LAB_1005273e
  __asm lea eax, [ebp + 0x40]
  __asm mov byte ptr [ebp - 4], 0x16
  __asm push eax
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax]
  __asm lea ecx, [eax + 4]
  __asm call LAB_10051e4c
  __asm mov ecx, dword ptr [ebp + 0x40]
  __asm lea edx, [ebp + 0x60]
  __asm push edx
  __asm mov byte ptr [ebp - 4], 0x17
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x74]
  __asm call eax
  __asm test al, al
  __asm sete bl
  __asm mov ecx, dword ptr [ebp + 0x40]
  __asm mov byte ptr [ebp - 4], 0x18
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp + 0x60]
  __asm mov byte ptr [ebp - 4], 0x19
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x60 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov byte ptr [ebp - 4], 9
  __asm test bl, bl
  __asm _emit 0x74 __asm _emit 0x5c
  __asm push offset LAB_1187bf90
  __asm lea ecx, [ebp + 0x5c]
  __asm call LAB_1005273e
  __asm lea eax, [ebp + 0x3c]
  __asm mov byte ptr [ebp - 4], 0x1a
  __asm push eax
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax]
  __asm lea ecx, [eax + 4]
  __asm call LAB_10051e4c
  __asm mov ecx, dword ptr [ebp + 0x3c]
  __asm lea edx, [ebp + 0x5c]
  __asm push 0
  __asm push edx
  __asm mov byte ptr [ebp - 4], 0x1b
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x28]
  __asm mov ecx, dword ptr [ebp + 0x3c]
  __asm mov byte ptr [ebp - 4], 0x1c
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp + 0x5c]
  __asm mov byte ptr [ebp - 4], 0x1d
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x5c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov byte ptr [ebp - 4], 9
  __asm push offset LAB_1187bfa0
  __asm lea ecx, [ebp + 0x58]
  __asm call LAB_1005273e
  __asm lea eax, [ebp + 0x38]
  __asm mov byte ptr [ebp - 4], 0x1e
  __asm push eax
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax]
  __asm lea ecx, [eax + 4]
  __asm call LAB_10051e4c
  __asm mov ecx, dword ptr [ebp + 0x38]
  __asm lea edx, [ebp + 0x58]
  __asm push edx
  __asm mov byte ptr [ebp - 4], 0x1f
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x74]
  __asm call eax
  __asm test al, al
  __asm sete bl
  __asm mov ecx, dword ptr [ebp + 0x38]
  __asm mov byte ptr [ebp - 4], 0x20
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp + 0x58]
  __asm mov byte ptr [ebp - 4], 0x21
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x58 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov byte ptr [ebp - 4], 9
  __asm test bl, bl
  __asm _emit 0x74 __asm _emit 0x5c
  __asm push offset LAB_1187bfa0
  __asm lea ecx, [ebp + 0x54]
  __asm call LAB_1005273e
  __asm lea eax, [ebp + 0x34]
  __asm mov byte ptr [ebp - 4], 0x22
  __asm push eax
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax]
  __asm lea ecx, [eax + 4]
  __asm call LAB_10051e4c
  __asm mov ecx, dword ptr [ebp + 0x34]
  __asm lea edx, [ebp + 0x54]
  __asm push 0
  __asm push edx
  __asm mov byte ptr [ebp - 4], 0x23
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x28]
  __asm mov ecx, dword ptr [ebp + 0x34]
  __asm mov byte ptr [ebp - 4], 0x24
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp + 0x54]
  __asm mov byte ptr [ebp - 4], 0x25
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x54 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov byte ptr [ebp - 4], 9
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax]
  __asm push 0xc
  __asm mov ecx, eax
  __asm call LAB_1008dd25
  __asm add eax, 4
  __asm lea ecx, [ebp - 0x6c]
  __asm push eax
  __asm call LAB_1005c11c
  __asm xorps xmm0, xmm0
  __asm mov dword ptr [ebp + 0x14], LAB_118bc0e4
  __asm movups xmmword ptr [ebp + 0x18], xmm0
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x28 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x2c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x30 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea eax, [ebp - 0x6c]
  __asm mov byte ptr [ebp - 4], 0x27
  __asm push eax
  __asm lea ecx, [ebp + 0x14]
  __asm call LAB_10026ac6
  __asm mov ecx, dword ptr [ebp + 0x10]
  __asm mov esi, eax
  __asm call LAB_1000d2bf
  __asm lea ecx, [ebp - 0xec]
  __asm push ecx
  __asm mov ecx, eax
  __asm call LAB_100692db
  __asm mov edx, dword ptr [esi]
  __asm mov ecx, esi
  __asm push eax
  __asm mov byte ptr [ebp - 4], 0x28
  __asm call dword ptr [edx + 8]
  __asm lea ecx, [ebp - 0x8c]
  __asm push ecx
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 8]
  __asm lea ecx, [ebp - 0xac]
  __asm push ecx
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 8]
  __asm lea ecx, [ebp - 0xcc]
  __asm push ecx
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 8]
  __asm mov ebx, dword ptr [ebp + 0x78]
  __asm mov ecx, ebx
  __asm push eax
  __asm call LAB_10005975
  __asm lea ecx, [ebp - 0xd8]
  __asm call LAB_10051c49
  __asm lea ecx, [ebp - 0xe4]
  __asm call LAB_1005dcb0
  __asm mov esi, dword ptr [ebp + 0x28]
  __asm mov dword ptr [ebp - 0xec], LAB_118bc0c0
  __asm mov byte ptr [ebp - 4], 0x26
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x5e
  __asm mov edi, dword ptr [ebp + 0x2c]
  __asm cmp esi, edi
  __asm _emit 0x74 __asm _emit 0x12
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 0
  __asm call dword ptr [eax]
  __asm add esi, 0x20
  __asm cmp esi, edi
  __asm _emit 0x75 __asm _emit 0xf1
  __asm mov esi, dword ptr [ebp + 0x28]
  __asm mov ecx, dword ptr [ebp + 0x30]
  __asm mov eax, esi
  __asm sub ecx, esi
  __asm and ecx, 0xffffffe0
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x14
  __asm mov esi, dword ptr [esi - 4]
  __asm add ecx, 0x23
  __asm sub eax, esi
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja LAB_1060eb65
  __asm push ecx
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x28 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x2c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x30 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov esi, dword ptr [ebp + 0x1c]
  __asm test esi, esi
  __asm je LAB_1060eb8d
  __asm mov ebx, dword ptr [ebp + 0x20]
  __asm cmp esi, ebx
  __asm _emit 0x74 __asm _emit 0x47
  __asm lea edi, [esi + 4]
  __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x40 __asm _emit 0x00
  __asm lea ecx, [edi + 4]
  __asm mov byte ptr [ebp - 4], 0x29
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [edi]
  __asm mov byte ptr [ebp - 4], 0x2a
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x12 __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x07 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm add edi, 0xc
  __asm mov byte ptr [ebp - 4], 0x26
  __asm lea eax, [edi - 4]
  __asm cmp eax, ebx
  __asm _emit 0x75 __asm _emit 0xc3
  __asm mov esi, dword ptr [ebp + 0x1c]
  __asm mov ecx, dword ptr [ebp + 0x24]
  __asm mov eax, 0x2aaaaaab
  __asm sub ecx, esi
  __asm imul ecx
  __asm _emit 0xd1 __asm _emit 0xfa
  __asm mov eax, edx
  __asm shr eax, 0x1f
  __asm add eax, edx
  __asm lea ecx, [eax + eax*2]
  __asm mov eax, esi
  __asm shl ecx, 2
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x16
  __asm mov esi, dword ptr [esi - 4]
  __asm add ecx, 0x23
  __asm sub eax, esi
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x76 __asm _emit 0x06
  __asm call dword ptr [LAB_122fc888]
  __asm push ecx
  __asm push esi
  __asm call LAB_100131d8
  __asm mov ebx, dword ptr [ebp + 0x78]
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x1c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x20 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea ecx, [ebp - 0x58]
  __asm mov dword ptr [ebp + 0x14], LAB_118bc0c0
  __asm call LAB_10051c49
  __asm lea ecx, [ebp - 0x64]
  __asm call LAB_1005dcb0
  __asm mov dword ptr [ebp - 0x6c], LAB_118bc0c0
  __asm lea ecx, [ebp - 0x10]
  __asm mov byte ptr [ebp - 4], 0x2b
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xf0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ebp - 0x14]
  __asm mov byte ptr [ebp - 4], 0x2c
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xe8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xec __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp - 0x78]
  __asm call LAB_10051c49
  __asm lea ecx, [ebp - 0x84]
  __asm call LAB_1005dcb0
  __asm mov dword ptr [ebp - 0x8c], LAB_118bc0c0
  __asm lea ecx, [ebp - 0x20]
  __asm mov byte ptr [ebp - 4], 0x2d
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xe0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ebp - 0x24]
  __asm mov byte ptr [ebp - 4], 0x2e
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xd8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xdc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp + 0xc]
  __asm mov byte ptr [ebp - 4], 0x2f
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp + 0x50]
  __asm mov byte ptr [ebp - 4], 0x30
  __asm call LAB_1005c315
  __asm lea ecx, [ebp - 0x98]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x50 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10051c49
  __asm lea ecx, [ebp - 0xa4]
  __asm call LAB_1005dcb0
  __asm mov dword ptr [ebp - 0xac], LAB_118bc0c0
  __asm lea ecx, [ebp - 0x30]
  __asm mov byte ptr [ebp - 4], 0x31
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xd0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ebp - 0x34]
  __asm mov byte ptr [ebp - 4], 0x32
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xc8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xcc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp]
  __asm mov byte ptr [ebp - 4], 0x33
  __asm call LAB_1005c315
  __asm lea ecx, [ebp - 0xb8]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10051c49
  __asm lea ecx, [ebp - 0xc4]
  __asm call LAB_1005dcb0
  __asm mov dword ptr [ebp - 0xcc], LAB_118bc0c0
  __asm lea ecx, [ebp - 0x40]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x34 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xc0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ebp - 0x44]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x35 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xb8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xbc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 8]
  __asm mov eax, ebx
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm lea esp, [ebp + 0x70]
  __asm pop ebp
  __asm ret 4
}




// Reference entry 1060ef00; body size 2163 bytes.
#line 1 "ENTRY_1060ef00"

__declspec(naked) void FUN_1060ef00(void)

{
  __asm push ebp
  __asm lea ebp, [esp - 0x70]
  __asm sub esp, 0x70
  __asm push -1
  __asm push offset LAB_115bc267
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 0x120
  __asm push ebx
  __asm push esi
  __asm push edi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm mov dword ptr [ebp + 8], eax
  __asm mov eax, dword ptr [eax + 0xe0]
  __asm lea ecx, [ebp + 0x68]
  __asm mov edi, offset LAB_1186d2ee
  __asm test eax, eax
  __asm mov edx, edi
  __asm cmovne edx, eax
  __asm push edx
  __asm call LAB_1005273e
  __asm lea eax, [ebp + 0x68]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm lea eax, [ebp + 0x2c]
  __asm push eax
  __asm call LAB_10063403
  __asm add esp, 8
  __asm lea ecx, [ebp + 0x68]
  __asm mov byte ptr [ebp - 4], 3
  __asm call LAB_1005c315
  __asm push offset LAB_118bcc7c
  __asm lea ecx, [ebp - 0x6c]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x68 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov byte ptr [ebp - 4], 2
  __asm call LAB_1008354b
  __asm add eax, 4
  __asm mov byte ptr [ebp - 4], 4
  __asm push eax
  __asm lea ecx, [ebp - 0x10c]
  __asm call LAB_1005c11c
  __asm push offset LAB_11882ff0
  __asm lea eax, [ebp - 0x1c]
  __asm mov byte ptr [ebp - 4], 5
  __asm push 0x2bf2
  __asm push eax
  __asm call LAB_10098626
  __asm add esp, 0xc
  __asm mov esi, eax
  __asm push offset LAB_118bd268
  __asm lea ecx, [ebp - 0x5c]
  __asm mov byte ptr [ebp - 4], 6
  __asm call LAB_1007f8c4
  __asm push esi
  __asm mov ecx, eax
  __asm mov byte ptr [ebp - 4], 7
  __asm call LAB_10019754
  __asm add eax, 4
  __asm lea ecx, [ebp - 0xec]
  __asm push eax
  __asm call LAB_1005c11c
  __asm mov eax, dword ptr [ebp + 0x2c]
  __asm test eax, eax
  __asm mov byte ptr [ebp - 4], 8
  __asm cmovne edi, eax
  __asm lea eax, [ebp - 0x14]
  __asm push edi
  __asm push offset LAB_1188465c
  __asm push 0x2bf1
  __asm push eax
  __asm call LAB_10098626
  __asm add esp, 0x10
  __asm mov esi, eax
  __asm push offset LAB_118bd268
  __asm lea ecx, [ebp - 0x4c]
  __asm mov byte ptr [ebp - 4], 9
  __asm call LAB_1007f8c4
  __asm push 1
  __asm push esi
  __asm mov ecx, eax
  __asm mov byte ptr [ebp - 4], 0xa
  __asm call LAB_10019754
  __asm mov ecx, eax
  __asm call LAB_1000dbd9
  __asm add eax, 4
  __asm lea ecx, [ebp - 0xcc]
  __asm push eax
  __asm call LAB_1005c11c
  __asm push offset LAB_118bd3bc
  __asm lea ecx, [ebp + 0x48]
  __asm mov byte ptr [ebp - 4], 0xb
  __asm call LAB_1005273e
  __asm lea ecx, [ebp]
  __asm mov byte ptr [ebp - 4], 0xc
  __asm call LAB_1007e307
  __asm mov edi, eax
  __asm push offset LAB_11878d88
  __asm lea ecx, [ebp - 0x3c]
  __asm mov byte ptr [ebp - 4], 0xd
  __asm call LAB_10015e74
  __asm mov esi, eax
  __asm lea eax, [ebp + 0x48]
  __asm mov byte ptr [ebp - 4], 0xe
  __asm push eax
  __asm mov ecx, edi
  __asm call LAB_1007610c
  __asm push eax
  __asm mov ecx, esi
  __asm call LAB_1000858a
  __asm add eax, 4
  __asm lea ecx, [ebp - 0xac]
  __asm push eax
  __asm call LAB_1005c11c
  __asm lea ecx, [ebp - 0x2c]
  __asm mov byte ptr [ebp - 4], 0xf
  __asm call LAB_10066c8e
  __asm mov esi, eax
  __asm push offset LAB_1187b7d4
  __asm lea ecx, [ebp + 0x64]
  __asm mov byte ptr [ebp - 4], 0x10
  __asm call LAB_1005273e
  __asm lea eax, [ebp + 0x44]
  __asm mov byte ptr [ebp - 4], 0x11
  __asm push eax
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax]
  __asm lea ecx, [eax + 4]
  __asm call LAB_10051e4c
  __asm mov ecx, dword ptr [ebp + 0x44]
  __asm lea edx, [ebp + 0x64]
  __asm push 1
  __asm push edx
  __asm mov byte ptr [ebp - 4], 0x12
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x28]
  __asm mov ecx, dword ptr [ebp + 0x44]
  __asm mov byte ptr [ebp - 4], 0x13
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp + 0x64]
  __asm mov byte ptr [ebp - 4], 0x14
  __asm call LAB_1005c315
  __asm push offset LAB_1187bf80
  __asm lea ecx, [ebp + 0x60]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x64 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov byte ptr [ebp - 4], 0x10
  __asm call LAB_1005273e
  __asm lea eax, [ebp + 0x40]
  __asm mov byte ptr [ebp - 4], 0x15
  __asm push eax
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax]
  __asm lea ecx, [eax + 4]
  __asm call LAB_10051e4c
  __asm mov ecx, dword ptr [ebp + 0x40]
  __asm lea edx, [ebp + 0x60]
  __asm push edx
  __asm mov byte ptr [ebp - 4], 0x16
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x74]
  __asm call eax
  __asm test al, al
  __asm sete bl
  __asm mov ecx, dword ptr [ebp + 0x40]
  __asm mov byte ptr [ebp - 4], 0x17
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp + 0x60]
  __asm mov byte ptr [ebp - 4], 0x18
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x60 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov byte ptr [ebp - 4], 0x10
  __asm test bl, bl
  __asm _emit 0x74 __asm _emit 0x5c
  __asm push offset LAB_1187bf80
  __asm lea ecx, [ebp + 0x5c]
  __asm call LAB_1005273e
  __asm lea eax, [ebp + 0x3c]
  __asm mov byte ptr [ebp - 4], 0x19
  __asm push eax
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax]
  __asm lea ecx, [eax + 4]
  __asm call LAB_10051e4c
  __asm mov ecx, dword ptr [ebp + 0x3c]
  __asm lea edx, [ebp + 0x5c]
  __asm push 1
  __asm push edx
  __asm mov byte ptr [ebp - 4], 0x1a
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x28]
  __asm mov ecx, dword ptr [ebp + 0x3c]
  __asm mov byte ptr [ebp - 4], 0x1b
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp + 0x5c]
  __asm mov byte ptr [ebp - 4], 0x1c
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x5c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov byte ptr [ebp - 4], 0x10
  __asm push offset LAB_1187bf90
  __asm lea ecx, [ebp + 0x58]
  __asm call LAB_1005273e
  __asm lea eax, [ebp + 0x38]
  __asm mov byte ptr [ebp - 4], 0x1d
  __asm push eax
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax]
  __asm lea ecx, [eax + 4]
  __asm call LAB_10051e4c
  __asm mov ecx, dword ptr [ebp + 0x38]
  __asm lea edx, [ebp + 0x58]
  __asm push edx
  __asm mov byte ptr [ebp - 4], 0x1e
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x74]
  __asm call eax
  __asm test al, al
  __asm sete bl
  __asm mov ecx, dword ptr [ebp + 0x38]
  __asm mov byte ptr [ebp - 4], 0x1f
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp + 0x58]
  __asm mov byte ptr [ebp - 4], 0x20
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x58 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov byte ptr [ebp - 4], 0x10
  __asm test bl, bl
  __asm _emit 0x74 __asm _emit 0x5c
  __asm push offset LAB_1187bf90
  __asm lea ecx, [ebp + 0x54]
  __asm call LAB_1005273e
  __asm lea eax, [ebp + 0x34]
  __asm mov byte ptr [ebp - 4], 0x21
  __asm push eax
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax]
  __asm lea ecx, [eax + 4]
  __asm call LAB_10051e4c
  __asm mov ecx, dword ptr [ebp + 0x34]
  __asm lea edx, [ebp + 0x54]
  __asm push 0
  __asm push edx
  __asm mov byte ptr [ebp - 4], 0x22
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x28]
  __asm mov ecx, dword ptr [ebp + 0x34]
  __asm mov byte ptr [ebp - 4], 0x23
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp + 0x54]
  __asm mov byte ptr [ebp - 4], 0x24
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x54 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov byte ptr [ebp - 4], 0x10
  __asm push offset LAB_1187bfa0
  __asm lea ecx, [ebp + 0x50]
  __asm call LAB_1005273e
  __asm lea eax, [ebp + 0x30]
  __asm mov byte ptr [ebp - 4], 0x25
  __asm push eax
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax]
  __asm lea ecx, [eax + 4]
  __asm call LAB_10051e4c
  __asm mov ecx, dword ptr [ebp + 0x30]
  __asm lea edx, [ebp + 0x50]
  __asm push edx
  __asm mov byte ptr [ebp - 4], 0x26
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x74]
  __asm call eax
  __asm test al, al
  __asm sete bl
  __asm mov ecx, dword ptr [ebp + 0x30]
  __asm mov byte ptr [ebp - 4], 0x27
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp + 0x50]
  __asm mov byte ptr [ebp - 4], 0x28
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x50 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov byte ptr [ebp - 4], 0x10
  __asm test bl, bl
  __asm _emit 0x74 __asm _emit 0x5c
  __asm push offset LAB_1187bfa0
  __asm lea ecx, [ebp + 0x4c]
  __asm call LAB_1005273e
  __asm lea eax, [ebp + 0x6c]
  __asm mov byte ptr [ebp - 4], 0x29
  __asm push eax
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax]
  __asm lea ecx, [eax + 4]
  __asm call LAB_10051e4c
  __asm mov ecx, dword ptr [ebp + 0x6c]
  __asm lea edx, [ebp + 0x4c]
  __asm push 0
  __asm push edx
  __asm mov byte ptr [ebp - 4], 0x2a
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x28]
  __asm mov ecx, dword ptr [ebp + 0x6c]
  __asm mov byte ptr [ebp - 4], 0x2b
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp + 0x4c]
  __asm mov byte ptr [ebp - 4], 0x2c
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x4c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov byte ptr [ebp - 4], 0x10
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax]
  __asm push 0xc
  __asm mov ecx, eax
  __asm call LAB_1008dd25
  __asm add eax, 4
  __asm lea ecx, [ebp - 0x8c]
  __asm push eax
  __asm call LAB_1005c11c
  __asm xorps xmm0, xmm0
  __asm mov dword ptr [ebp + 0xc], LAB_118bc0e4
  __asm movups xmmword ptr [ebp + 0x10], xmm0
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x20 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x28 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea eax, [ebp - 0x8c]
  __asm mov byte ptr [ebp - 4], 0x2e
  __asm push eax
  __asm lea ecx, [ebp + 0xc]
  __asm call LAB_10026ac6
  __asm mov edi, dword ptr [ebp + 8]
  __asm mov esi, eax
  __asm mov ecx, edi
  __asm call LAB_1000d2bf
  __asm lea ecx, [ebp - 0x12c]
  __asm push ecx
  __asm mov ecx, eax
  __asm call LAB_100692db
  __asm mov edx, dword ptr [esi]
  __asm mov ecx, esi
  __asm push eax
  __asm mov byte ptr [ebp - 4], 0x2f
  __asm call dword ptr [edx + 8]
  __asm lea ecx, [ebp - 0xac]
  __asm push ecx
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 8]
  __asm mov ecx, dword ptr [edi + 0xe0]
  __asm mov edx, eax
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x09
  __asm cmp byte ptr [ecx], 0
  __asm mov byte ptr [ebp + 0x6c], 1
  __asm _emit 0x75 __asm _emit 0x04
  __asm mov byte ptr [ebp + 0x6c], 0
  __asm mov eax, dword ptr [edx]
  __asm lea ecx, [ebp - 0xcc]
  __asm push ecx
  __asm push dword ptr [ebp + 0x6c]
  __asm mov ecx, edx
  __asm call dword ptr [eax + 0xc]
  __asm lea ecx, [ebp - 0xec]
  __asm push ecx
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 0x14]
  __asm lea ecx, [ebp - 0x10c]
  __asm push ecx
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 8]
  __asm mov ebx, dword ptr [ebp + 0x78]
  __asm mov ecx, ebx
  __asm push eax
  __asm call LAB_10005975
  __asm lea ecx, [ebp - 0x118]
  __asm call LAB_10051c49
  __asm lea ecx, [ebp - 0x124]
  __asm call LAB_1005dcb0
  __asm mov esi, dword ptr [ebp + 0x20]
  __asm mov dword ptr [ebp - 0x12c], LAB_118bc0c0
  __asm mov byte ptr [ebp - 4], 0x2d
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x5e
  __asm mov edi, dword ptr [ebp + 0x24]
  __asm cmp esi, edi
  __asm _emit 0x74 __asm _emit 0x12
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 0
  __asm call dword ptr [eax]
  __asm add esi, 0x20
  __asm cmp esi, edi
  __asm _emit 0x75 __asm _emit 0xf1
  __asm mov esi, dword ptr [ebp + 0x20]
  __asm mov ecx, dword ptr [ebp + 0x28]
  __asm mov eax, esi
  __asm sub ecx, esi
  __asm and ecx, 0xffffffe0
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x14
  __asm mov esi, dword ptr [esi - 4]
  __asm add ecx, 0x23
  __asm sub eax, esi
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja LAB_1060f535
  __asm push ecx
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x20 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x28 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov esi, dword ptr [ebp + 0x14]
  __asm test esi, esi
  __asm je LAB_1060f55d
  __asm mov ebx, dword ptr [ebp + 0x18]
  __asm cmp esi, ebx
  __asm _emit 0x74 __asm _emit 0x43
  __asm lea edi, [esi + 4]
  __asm lea ecx, [edi + 4]
  __asm mov byte ptr [ebp - 4], 0x30
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [edi]
  __asm mov byte ptr [ebp - 4], 0x31
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x12 __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x07 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm add edi, 0xc
  __asm mov byte ptr [ebp - 4], 0x2d
  __asm lea eax, [edi - 4]
  __asm cmp eax, ebx
  __asm _emit 0x75 __asm _emit 0xc3
  __asm mov esi, dword ptr [ebp + 0x14]
  __asm mov ecx, dword ptr [ebp + 0x1c]
  __asm mov eax, 0x2aaaaaab
  __asm sub ecx, esi
  __asm imul ecx
  __asm _emit 0xd1 __asm _emit 0xfa
  __asm mov eax, edx
  __asm shr eax, 0x1f
  __asm add eax, edx
  __asm lea ecx, [eax + eax*2]
  __asm mov eax, esi
  __asm shl ecx, 2
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x16
  __asm mov esi, dword ptr [esi - 4]
  __asm add ecx, 0x23
  __asm sub eax, esi
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x76 __asm _emit 0x06
  __asm call dword ptr [LAB_122fc888]
  __asm push ecx
  __asm push esi
  __asm call LAB_100131d8
  __asm mov ebx, dword ptr [ebp + 0x78]
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x1c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea ecx, [ebp - 0x78]
  __asm mov dword ptr [ebp + 0xc], LAB_118bc0c0
  __asm call LAB_10051c49
  __asm lea ecx, [ebp - 0x84]
  __asm call LAB_1005dcb0
  __asm mov dword ptr [ebp - 0x8c], LAB_118bc0c0
  __asm lea ecx, [ebp - 0x20]
  __asm mov byte ptr [ebp - 4], 0x32
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xe0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ebp - 0x24]
  __asm mov byte ptr [ebp - 4], 0x33
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xd8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xdc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp - 0x98]
  __asm call LAB_10051c49
  __asm lea ecx, [ebp - 0xa4]
  __asm call LAB_1005dcb0
  __asm mov dword ptr [ebp - 0xac], LAB_118bc0c0
  __asm lea ecx, [ebp - 0x30]
  __asm mov byte ptr [ebp - 4], 0x34
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xd0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ebp - 0x34]
  __asm mov byte ptr [ebp - 4], 0x35
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xc8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xcc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp + 4]
  __asm mov byte ptr [ebp - 4], 0x36
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp + 0x48]
  __asm mov byte ptr [ebp - 4], 0x37
  __asm call LAB_1005c315
  __asm lea ecx, [ebp - 0xb8]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x48 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10051c49
  __asm lea ecx, [ebp - 0xc4]
  __asm call LAB_1005dcb0
  __asm mov dword ptr [ebp - 0xcc], LAB_118bc0c0
  __asm lea ecx, [ebp - 0x40]
  __asm mov byte ptr [ebp - 4], 0x38
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xc0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ebp - 0x44]
  __asm mov byte ptr [ebp - 4], 0x39
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xb8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xbc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp - 0x14]
  __asm mov byte ptr [ebp - 4], 0x3a
  __asm call LAB_1005c315
  __asm lea ecx, [ebp - 0xd8]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xec __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10051c49
  __asm lea ecx, [ebp - 0xe4]
  __asm call LAB_1005dcb0
  __asm mov dword ptr [ebp - 0xec], LAB_118bc0c0
  __asm lea ecx, [ebp - 0x50]
  __asm mov byte ptr [ebp - 4], 0x3b
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xb0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ebp - 0x54]
  __asm mov byte ptr [ebp - 4], 0x3c
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xa8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xac __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp - 0x1c]
  __asm mov byte ptr [ebp - 4], 0x3d
  __asm call LAB_1005c315
  __asm lea ecx, [ebp - 0xf8]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xe4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10051c49
  __asm lea ecx, [ebp - 0x104]
  __asm call LAB_1005dcb0
  __asm mov dword ptr [ebp - 0x10c], LAB_118bc0c0
  __asm lea ecx, [ebp - 0x60]
  __asm mov byte ptr [ebp - 4], 0x3e
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xa0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ebp - 0x64]
  __asm mov byte ptr [ebp - 4], 0x3f
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x98 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x9c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 8]
  __asm lea ecx, [ebp + 0x2c]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x40 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm mov eax, ebx
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm lea esp, [ebp + 0x70]
  __asm pop ebp
  __asm ret 4
}




// Reference entry 1060f990; body size 839 bytes.
#line 1 "ENTRY_1060f990"

__declspec(naked) void FUN_1060f990(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_115bc34d
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 0x34
  __asm push ebx
  __asm push esi
  __asm push edi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov esi, ecx
  __asm call LAB_1000d2bf
  __asm lea ecx, [ebp - 0x10]
  __asm push ecx
  __asm lea ecx, [eax + 0xe8]
  __asm call LAB_10090cd2
  __asm mov ebx, dword ptr [eax]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ebp - 0x2c], ebx
  __asm test ebx, ebx
  __asm _emit 0x74 __asm _emit 0x0b
  __asm mov eax, dword ptr [ebx]
  __asm mov ecx, ebx
  __asm call dword ptr [eax + 0xc]
  __asm mov edi, eax
  __asm _emit 0xeb __asm _emit 0x02
  __asm xor edi, edi
  __asm mov dword ptr [ebp - 0x28], edi
  __asm mov ecx, dword ptr [ebp - 0x10]
  __asm mov byte ptr [ebp - 4], 3
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm push ebx
  __asm lea ecx, [ebp - 0x34]
  __asm mov byte ptr [ebp - 4], 2
  __asm call LAB_1006b3f1
  __asm push 0
  __asm push 0
  __asm push 6
  __asm lea eax, [ebp - 0x34]
  __asm push eax
  __asm lea eax, [ebp - 0x40]
  __asm push eax
  __asm call LAB_10049fb7
  __asm add esp, 0x14
  __asm mov ecx, esi
  __asm mov byte ptr [ebp - 4], 4
  __asm call LAB_1000d2bf
  __asm lea ecx, [eax + 0x100]
  __asm call LAB_10011153
  __asm push offset LAB_1186d2ee
  __asm lea ecx, [ebp - 0x24]
  __asm mov esi, eax
  __asm call LAB_1007f941
  __asm push offset LAB_1186d2ee
  __asm lea ecx, [ebp - 0x1c]
  __asm mov byte ptr [ebp - 4], 5
  __asm call LAB_1007f941
  __asm mov byte ptr [ebp - 4], 6
  __asm cmp esi, 2
  __asm je LAB_1060fb86
  __asm cmp esi, 4
  __asm je LAB_1060fb86
  __asm cmp esi, 5
  __asm je LAB_1060fb86
  __asm cmp esi, 1
  __asm jne LAB_1060fb1b
  __asm lea eax, [ebp - 0x40]
  __asm push eax
  __asm push offset LAB_1188465c
  __asm push 0x2798
  __asm lea ecx, [ebp - 0x34]
  __asm call LAB_1003b6d8
  __asm mov esi, eax
  __asm lea eax, [ebp - 0x24]
  __asm mov byte ptr [ebp - 4], 0xd
  __asm cmp esi, eax
  __asm _emit 0x74 __asm _emit 0x14
  __asm mov ecx, eax
  __asm call LAB_1005c315
  __asm mov ecx, dword ptr [esi]
  __asm mov dword ptr [ebp - 0x24], ecx
  __asm lea ecx, [ebp - 0x24]
  __asm call LAB_1002a973
  __asm mov eax, dword ptr [esi + 4]
  __asm mov dword ptr [ebp - 0x20], eax
  __asm lea ecx, [ebp - 0x34]
  __asm mov byte ptr [ebp - 4], 0xe
  __asm call LAB_1005c315
  __asm lea eax, [ebp - 0x40]
  __asm mov byte ptr [ebp - 4], 6
  __asm push eax
  __asm push offset LAB_1188465c
  __asm push 0x2799
  __asm lea ecx, [ebp - 0x34]
  __asm call LAB_1003b6d8
  __asm mov esi, eax
  __asm lea eax, [ebp - 0x1c]
  __asm mov byte ptr [ebp - 4], 0xf
  __asm cmp esi, eax
  __asm _emit 0x74 __asm _emit 0x14
  __asm mov ecx, eax
  __asm call LAB_1005c315
  __asm mov ecx, dword ptr [esi]
  __asm mov dword ptr [ebp - 0x1c], ecx
  __asm lea ecx, [ebp - 0x1c]
  __asm call LAB_1002a973
  __asm mov eax, dword ptr [esi + 4]
  __asm mov dword ptr [ebp - 0x18], eax
  __asm mov byte ptr [ebp - 4], 0x10
  __asm lea ecx, [ebp - 0x34]
  __asm jmp LAB_1060fc48
  __asm cmp esi, 3
  __asm jne LAB_1060fc51
  __asm push offset LAB_11882ff0
  __asm lea eax, [ebp - 0x34]
  __asm push 0x279a
  __asm push eax
  __asm call LAB_10098626
  __asm add esp, 0xc
  __asm push eax
  __asm lea ecx, [ebp - 0x24]
  __asm mov byte ptr [ebp - 4], 0x11
  __asm call LAB_10081b9c
  __asm lea ecx, [ebp - 0x34]
  __asm mov byte ptr [ebp - 4], 0x12
  __asm call LAB_1005c315
  __asm push offset LAB_11882ff0
  __asm lea eax, [ebp - 0x34]
  __asm mov byte ptr [ebp - 4], 6
  __asm push 0x279b
  __asm push eax
  __asm call LAB_10098626
  __asm add esp, 0xc
  __asm push eax
  __asm lea ecx, [ebp - 0x1c]
  __asm mov byte ptr [ebp - 4], 0x13
  __asm call LAB_10081b9c
  __asm mov byte ptr [ebp - 4], 0x14
  __asm lea ecx, [ebp - 0x34]
  __asm jmp LAB_1060fc48
  __asm push offset LAB_1186d2ee
  __asm lea ecx, [ebp - 0x14]
  __asm call LAB_1007f941
  __asm mov eax, dword ptr [ebp - 0x40]
  __asm mov esi, offset LAB_1186d2ee
  __asm test eax, eax
  __asm mov byte ptr [ebp - 4], 7
  __asm mov ecx, esi
  __asm cmovne ecx, eax
  __asm lea eax, [ebp - 0x40]
  __asm push ecx
  __asm push offset LAB_1188465c
  __asm push 0x2796
  __asm push eax
  __asm lea eax, [ebp - 0x14]
  __asm push eax
  __asm call LAB_10080bcf
  __asm add esp, 0x14
  __asm lea ecx, [ebp - 0x24]
  __asm mov byte ptr [ebp - 4], 8
  __asm call LAB_1005c315
  __asm mov eax, dword ptr [ebp - 0x14]
  __asm lea ecx, [ebp - 0x24]
  __asm mov dword ptr [ebp - 0x24], eax
  __asm call LAB_1002a973
  __asm mov eax, dword ptr [ebp - 0x10]
  __asm mov dword ptr [ebp - 0x20], eax
  __asm lea ecx, [ebp - 0x14]
  __asm mov byte ptr [ebp - 4], 9
  __asm call LAB_1005c315
  __asm push esi
  __asm lea ecx, [ebp - 0x14]
  __asm mov byte ptr [ebp - 4], 6
  __asm call LAB_1007f941
  __asm mov eax, dword ptr [ebp - 0x40]
  __asm test eax, eax
  __asm mov byte ptr [ebp - 4], 0xa
  __asm cmovne esi, eax
  __asm lea eax, [ebp - 0x40]
  __asm push esi
  __asm push offset LAB_1188465c
  __asm push 0x2797
  __asm push eax
  __asm lea eax, [ebp - 0x14]
  __asm push eax
  __asm call LAB_10080bcf
  __asm add esp, 0x14
  __asm lea ecx, [ebp - 0x1c]
  __asm mov byte ptr [ebp - 4], 0xb
  __asm call LAB_1005c315
  __asm mov eax, dword ptr [ebp - 0x14]
  __asm lea ecx, [ebp - 0x1c]
  __asm mov dword ptr [ebp - 0x1c], eax
  __asm call LAB_1002a973
  __asm mov eax, dword ptr [ebp - 0x10]
  __asm mov dword ptr [ebp - 0x18], eax
  __asm mov byte ptr [ebp - 4], 0xc
  __asm lea ecx, [ebp - 0x14]
  __asm call LAB_1005c315
  __asm mov byte ptr [ebp - 4], 6
  __asm push ebx
  __asm lea ecx, [ebp - 0x34]
  __asm call LAB_1006b3f1
  __asm mov esi, dword ptr [ebp + 8]
  __asm lea eax, [ebp - 0x1c]
  __asm push 0
  __asm push 1
  __asm push eax
  __asm lea eax, [ebp - 0x24]
  __asm push eax
  __asm lea eax, [ebp - 0x34]
  __asm push eax
  __asm push esi
  __asm call LAB_1005a0d8
  __asm add esp, 0x18
  __asm lea ecx, [ebp - 0x1c]
  __asm mov byte ptr [ebp - 4], 0x15
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xe4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea ecx, [ebp - 0x24]
  __asm mov byte ptr [ebp - 4], 0x16
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xdc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea ecx, [ebp - 0x40]
  __asm mov byte ptr [ebp - 4], 0x17
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xc0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test edi, edi
  __asm _emit 0x74 __asm _emit 0x07
  __asm mov edx, dword ptr [edi]
  __asm mov ecx, edi
  __asm call dword ptr [edx + 8]
  __asm mov eax, esi
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret 4
}




// Reference entry 1060fdb0; body size 1016 bytes.
#line 1 "ENTRY_1060fdb0"

__declspec(naked) void FUN_1060fdb0(void)

{
  __asm push ebp
  __asm lea ebp, [esp - 0x6c]
  __asm sub esp, 0x6c
  __asm push -1
  __asm push offset LAB_115bc3f5
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 0x60
  __asm push ebx
  __asm push esi
  __asm push edi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1000d2bf
  __asm lea ecx, [ebp + 0x64]
  __asm push ecx
  __asm lea ecx, [eax + 0x100]
  __asm call LAB_1007eadc
  __asm mov eax, dword ptr [eax]
  __asm mov edi, offset LAB_1186d2ee
  __asm test eax, eax
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, edi
  __asm cmovne ecx, eax
  __asm push ecx
  __asm lea ecx, [ebp + 0x68]
  __asm call LAB_1005273e
  __asm lea eax, [ebp + 0x68]
  __asm mov byte ptr [ebp - 4], 1
  __asm push eax
  __asm lea eax, [ebp + 0x60]
  __asm push eax
  __asm call LAB_10063403
  __asm add esp, 8
  __asm lea ecx, [ebp + 0x68]
  __asm mov byte ptr [ebp - 4], 4
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x68 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea ecx, [ebp + 0x64]
  __asm mov byte ptr [ebp - 4], 6
  __asm call LAB_1005c315
  __asm push offset LAB_11882ff0
  __asm lea eax, [ebp + 0x30]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x64 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push 0x208f
  __asm push eax
  __asm mov byte ptr [ebp - 4], 5
  __asm call LAB_10098626
  __asm add esp, 0xc
  __asm mov esi, eax
  __asm push offset LAB_118bd270
  __asm lea ecx, [ebp]
  __asm mov byte ptr [ebp - 4], 7
  __asm call LAB_1002f969
  __asm push esi
  __asm mov ecx, eax
  __asm mov byte ptr [ebp - 4], 8
  __asm call LAB_10024da2
  __asm add eax, 4
  __asm lea ecx, [ebp - 0x6c]
  __asm push eax
  __asm call LAB_1005c11c
  __asm mov eax, dword ptr [ebp + 0x60]
  __asm test eax, eax
  __asm mov byte ptr [ebp - 4], 9
  __asm cmovne edi, eax
  __asm lea eax, [ebp + 0x38]
  __asm push edi
  __asm push offset LAB_1188465c
  __asm push 0x2c06
  __asm push eax
  __asm call LAB_10098626
  __asm add esp, 0x10
  __asm mov esi, eax
  __asm push offset LAB_118a2cac
  __asm lea ecx, [ebp + 0x10]
  __asm mov byte ptr [ebp - 4], 0xa
  __asm call LAB_10077f70
  __asm push 1
  __asm mov byte ptr [ebp - 4], 0xb
  __asm mov ecx, eax
  __asm push esi
  __asm call LAB_10019754
  __asm mov ecx, eax
  __asm call LAB_1000dbd9
  __asm add eax, 4
  __asm lea ecx, [ebp - 0x4c]
  __asm push eax
  __asm call LAB_1005c11c
  __asm lea ecx, [ebp + 0x20]
  __asm mov byte ptr [ebp - 4], 0xc
  __asm call LAB_10066c8e
  __asm push 1
  __asm mov ecx, eax
  __asm mov byte ptr [ebp - 4], 0xd
  __asm call LAB_1008dd25
  __asm add eax, 4
  __asm lea ecx, [ebp - 0x2c]
  __asm push eax
  __asm call LAB_1005c11c
  __asm xorps xmm0, xmm0
  __asm mov dword ptr [ebp + 0x40], LAB_118bc0e4
  __asm movups xmmword ptr [ebp + 0x44], xmm0
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x54 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x58 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x5c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea eax, [ebp - 0x2c]
  __asm mov byte ptr [ebp - 4], 0xf
  __asm push eax
  __asm lea ecx, [ebp + 0x40]
  __asm call LAB_10026ac6
  __asm lea ecx, [ebp - 0x4c]
  __asm push ecx
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 8]
  __asm lea ecx, [ebp - 0x6c]
  __asm push ecx
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 8]
  __asm mov ebx, dword ptr [ebp + 0x74]
  __asm mov ecx, ebx
  __asm push eax
  __asm call LAB_10005975
  __asm mov esi, dword ptr [ebp + 0x54]
  __asm mov byte ptr [ebp - 4], 0xe
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x5e
  __asm mov edi, dword ptr [ebp + 0x58]
  __asm cmp esi, edi
  __asm _emit 0x74 __asm _emit 0x12
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 0
  __asm call dword ptr [eax]
  __asm add esi, 0x20
  __asm cmp esi, edi
  __asm _emit 0x75 __asm _emit 0xf1
  __asm mov esi, dword ptr [ebp + 0x54]
  __asm mov ecx, dword ptr [ebp + 0x5c]
  __asm mov eax, esi
  __asm sub ecx, esi
  __asm and ecx, 0xffffffe0
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x14
  __asm mov esi, dword ptr [esi - 4]
  __asm add ecx, 0x23
  __asm sub eax, esi
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja LAB_10610055
  __asm push ecx
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x54 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x58 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x5c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov esi, dword ptr [ebp + 0x48]
  __asm test esi, esi
  __asm je LAB_1061007d
  __asm mov ebx, dword ptr [ebp + 0x4c]
  __asm cmp esi, ebx
  __asm _emit 0x74 __asm _emit 0x47
  __asm add esi, 4
  __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x40 __asm _emit 0x00
  __asm lea ecx, [esi + 4]
  __asm mov byte ptr [ebp - 4], 0x10
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [esi]
  __asm mov byte ptr [ebp - 4], 0x11
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x12 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm add esi, 0xc
  __asm mov byte ptr [ebp - 4], 0xe
  __asm lea eax, [esi - 4]
  __asm cmp eax, ebx
  __asm _emit 0x75 __asm _emit 0xc3
  __asm mov esi, dword ptr [ebp + 0x48]
  __asm mov ecx, dword ptr [ebp + 0x50]
  __asm mov eax, 0x2aaaaaab
  __asm sub ecx, esi
  __asm imul ecx
  __asm _emit 0xd1 __asm _emit 0xfa
  __asm mov eax, edx
  __asm shr eax, 0x1f
  __asm add eax, edx
  __asm lea ecx, [eax + eax*2]
  __asm mov eax, esi
  __asm shl ecx, 2
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x16
  __asm mov esi, dword ptr [esi - 4]
  __asm add ecx, 0x23
  __asm sub eax, esi
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x76 __asm _emit 0x06
  __asm call dword ptr [LAB_122fc888]
  __asm push ecx
  __asm push esi
  __asm call LAB_100131d8
  __asm mov ebx, dword ptr [ebp + 0x74]
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x48 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x4c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x50 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea ecx, [ebp - 0x18]
  __asm mov dword ptr [ebp + 0x40], LAB_118bc0c0
  __asm call LAB_10051c49
  __asm lea ecx, [ebp - 0x24]
  __asm call LAB_1005dcb0
  __asm mov dword ptr [ebp - 0x2c], LAB_118bc0c0
  __asm lea ecx, [ebp + 0x2c]
  __asm mov byte ptr [ebp - 4], 0x12
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x2c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ebp + 0x28]
  __asm mov byte ptr [ebp - 4], 0x13
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x28 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp - 0x38]
  __asm call LAB_10051c49
  __asm lea ecx, [ebp - 0x44]
  __asm call LAB_1005dcb0
  __asm mov dword ptr [ebp - 0x4c], LAB_118bc0c0
  __asm lea ecx, [ebp + 0x1c]
  __asm mov byte ptr [ebp - 4], 0x14
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x1c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ebp + 0x18]
  __asm mov byte ptr [ebp - 4], 0x15
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp + 0x38]
  __asm mov byte ptr [ebp - 4], 0x16
  __asm call LAB_1005c315
  __asm lea ecx, [ebp - 0x58]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x38 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10051c49
  __asm lea ecx, [ebp - 0x64]
  __asm call LAB_1005dcb0
  __asm mov dword ptr [ebp - 0x6c], LAB_118bc0c0
  __asm lea ecx, [ebp + 0xc]
  __asm mov byte ptr [ebp - 4], 0x17
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ebp + 8]
  __asm mov byte ptr [ebp - 4], 0x18
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp + 0x30]
  __asm mov byte ptr [ebp - 4], 0x19
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x30 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea ecx, [ebp + 0x60]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x1a __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm mov eax, ebx
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm lea esp, [ebp + 0x6c]
  __asm pop ebp
  __asm ret 4
}




// Reference entry 106102b0; body size 1911 bytes.
#line 1 "ENTRY_106102b0"

__declspec(naked) void FUN_106102b0(void)

{
  __asm push ebp
  __asm lea ebp, [esp - 0x70]
  __asm sub esp, 0x70
  __asm push -1
  __asm push offset LAB_115bc522
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 0x148
  __asm push ebx
  __asm push esi
  __asm push edi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ebx, ecx
  __asm mov dword ptr [ebp + 0x30], ebx
  __asm call LAB_1000d2bf
  __asm lea ecx, [ebp + 0x6c]
  __asm push ecx
  __asm lea ecx, [eax + 0xe8]
  __asm call LAB_10090cd2
  __asm mov esi, dword ptr [eax]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ebp + 0x1c], esi
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x0c
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [ebp + 0x20], eax
  __asm _emit 0xeb __asm _emit 0x07 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x20 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ebp + 0x6c]
  __asm mov byte ptr [ebp - 4], 3
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm push esi
  __asm lea ecx, [ebp + 0x38]
  __asm mov byte ptr [ebp - 4], 2
  __asm call LAB_1006b3f1
  __asm push 0
  __asm push 0
  __asm push 6
  __asm lea eax, [ebp + 0x38]
  __asm push eax
  __asm lea eax, [ebp + 0x10]
  __asm push eax
  __asm call LAB_10049fb7
  __asm add esp, 0x14
  __asm push esi
  __asm lea ecx, [ebp - 0x74]
  __asm mov byte ptr [ebp - 4], 4
  __asm call LAB_1006b3f1
  __asm lea eax, [ebp - 0x74]
  __asm push eax
  __asm call LAB_10062152
  __asm mov ecx, eax
  __asm call LAB_10094611
  __asm mov dword ptr [ebp + 0x34], eax
  __asm mov ecx, esi
  __asm lea eax, [ebp + 0x6c]
  __asm push eax
  __asm call LAB_1008ab11
  __asm push eax
  __asm lea eax, [ebp + 0x68]
  __asm mov byte ptr [ebp - 4], 5
  __asm push eax
  __asm call LAB_1007a8a6
  __asm add esp, 8
  __asm lea ecx, [ebp + 0x6c]
  __asm mov byte ptr [ebp - 4], 8
  __asm call LAB_1005c315
  __asm mov ecx, ebx
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x6c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov byte ptr [ebp - 4], 7
  __asm call LAB_1000d2bf
  __asm lea ecx, [eax + 0x10c]
  __asm call LAB_100389b0
  __asm push offset LAB_11882ff0
  __asm push 0x20a6
  __asm mov ecx, dword ptr [eax + 4]
  __asm sub ecx, dword ptr [eax]
  __asm mov eax, 0x6bca1af3
  __asm imul ecx
  __asm sar edx, 5
  __asm mov eax, edx
  __asm shr eax, 0x1f
  __asm add eax, edx
  __asm cmp eax, 1
  __asm lea eax, [ebp + 0x38]
  __asm push eax
  __asm seta byte ptr [ebp + 0x2c]
  __asm call LAB_10098626
  __asm add esp, 0xc
  __asm mov esi, eax
  __asm push offset LAB_118bdef4
  __asm lea ecx, [ebp - 0x6c]
  __asm mov byte ptr [ebp - 4], 9
  __asm call LAB_1002f969
  __asm push 2
  __asm push esi
  __asm mov ecx, eax
  __asm mov byte ptr [ebp - 4], 0xa
  __asm call LAB_10024da2
  __asm mov ecx, eax
  __asm call LAB_1007ff40
  __asm add eax, 4
  __asm lea ecx, [ebp - 0x134]
  __asm push eax
  __asm call LAB_1005c11c
  __asm push offset LAB_118bd270
  __asm lea ecx, [ebp - 0x5c]
  __asm mov byte ptr [ebp - 4], 0xb
  __asm call LAB_1008354b
  __asm add eax, 4
  __asm mov byte ptr [ebp - 4], 0xc
  __asm push eax
  __asm lea ecx, [ebp - 0x114]
  __asm call LAB_1005c11c
  __asm push offset LAB_11882ff0
  __asm lea eax, [ebp]
  __asm mov byte ptr [ebp - 4], 0xd
  __asm push 0x20a3
  __asm push eax
  __asm call LAB_10098626
  __asm add esp, 0xc
  __asm mov esi, eax
  __asm push offset LAB_1189f4a8
  __asm lea ecx, [ebp - 0x4c]
  __asm mov byte ptr [ebp - 4], 0xe
  __asm call LAB_1002f969
  __asm push esi
  __asm mov ecx, eax
  __asm mov byte ptr [ebp - 4], 0xf
  __asm call LAB_10024da2
  __asm add eax, 4
  __asm lea ecx, [ebp - 0xf4]
  __asm push eax
  __asm call LAB_1005c11c
  __asm mov eax, dword ptr [ebp + 0x68]
  __asm mov ebx, offset LAB_1186d2ee
  __asm test eax, eax
  __asm mov byte ptr [ebp - 4], 0x10
  __asm mov ecx, ebx
  __asm cmovne ecx, eax
  __asm lea eax, [ebp + 8]
  __asm push ecx
  __asm push offset LAB_1188465c
  __asm push 0x277d
  __asm push eax
  __asm call LAB_10098626
  __asm add esp, 0x10
  __asm mov edi, eax
  __asm mov ecx, dword ptr [ebp + 0x34]
  __asm lea eax, [ebp + 0x24]
  __asm push 1
  __asm push eax
  __asm mov byte ptr [ebp - 4], 0x11
  __asm call LAB_1007fcc0
  __asm mov esi, eax
  __asm push offset LAB_11878d88
  __asm lea ecx, [ebp - 0x3c]
  __asm mov byte ptr [ebp - 4], 0x12
  __asm call LAB_10015e74
  __asm push edi
  __asm push esi
  __asm mov ecx, eax
  __asm mov byte ptr [ebp - 4], 0x13
  __asm call LAB_1000858a
  __asm mov ecx, eax
  __asm call LAB_10097cbc
  __asm add eax, 4
  __asm lea ecx, [ebp - 0xd4]
  __asm push eax
  __asm call LAB_1005c11c
  __asm push ebx
  __asm lea ecx, [ebp + 0x40]
  __asm mov byte ptr [ebp - 4], 0x14
  __asm call LAB_1007f941
  __asm mov byte ptr [ebp - 4], 0x15
  __asm mov eax, dword ptr [ebp + 0x10]
  __asm test eax, eax
  __asm cmovne ebx, eax
  __asm lea eax, [ebp + 0x10]
  __asm push ebx
  __asm push offset LAB_1188465c
  __asm push 0x2c09
  __asm push eax
  __asm lea eax, [ebp + 0x40]
  __asm push eax
  __asm call LAB_10080bcf
  __asm add esp, 0x14
  __asm push offset LAB_118a2cac
  __asm lea ecx, [ebp - 0x2c]
  __asm mov byte ptr [ebp - 4], 0x16
  __asm call LAB_10077f70
  __asm push 1
  __asm lea ecx, [ebp + 0x40]
  __asm mov byte ptr [ebp - 4], 0x17
  __asm push ecx
  __asm mov ecx, eax
  __asm call LAB_10019754
  __asm mov ecx, eax
  __asm call LAB_1000dbd9
  __asm add eax, 4
  __asm lea ecx, [ebp - 0xb4]
  __asm push eax
  __asm call LAB_1005c11c
  __asm lea ecx, [ebp - 0x1c]
  __asm mov byte ptr [ebp - 4], 0x18
  __asm call LAB_10066c8e
  __asm push 1
  __asm mov ecx, eax
  __asm mov byte ptr [ebp - 4], 0x19
  __asm call LAB_1008dd25
  __asm add eax, 4
  __asm lea ecx, [ebp - 0x94]
  __asm push eax
  __asm call LAB_1005c11c
  __asm xorps xmm0, xmm0
  __asm mov dword ptr [ebp + 0x48], LAB_118bc0e4
  __asm movups xmmword ptr [ebp + 0x4c], xmm0
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x5c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x60 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x64 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea eax, [ebp - 0x94]
  __asm mov byte ptr [ebp - 4], 0x1b
  __asm push eax
  __asm lea ecx, [ebp + 0x48]
  __asm call LAB_10026ac6
  __asm mov ecx, dword ptr [ebp + 0x30]
  __asm mov esi, eax
  __asm call LAB_1000d2bf
  __asm lea ecx, [ebp - 0x154]
  __asm push ecx
  __asm mov ecx, eax
  __asm call LAB_100692db
  __asm mov edx, dword ptr [esi]
  __asm mov ecx, esi
  __asm push eax
  __asm mov byte ptr [ebp - 4], 0x1c
  __asm call dword ptr [edx + 8]
  __asm lea ecx, [ebp - 0xb4]
  __asm push ecx
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 8]
  __asm lea ecx, [ebp - 0xd4]
  __asm push ecx
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 8]
  __asm lea ecx, [ebp - 0xf4]
  __asm mov edx, dword ptr [eax]
  __asm push ecx
  __asm push dword ptr [ebp + 0x2c]
  __asm mov ecx, eax
  __asm call dword ptr [edx + 0xc]
  __asm lea ecx, [ebp - 0x114]
  __asm push ecx
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 0x14]
  __asm lea ecx, [ebp - 0x134]
  __asm push ecx
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 8]
  __asm mov ebx, dword ptr [ebp + 0x78]
  __asm mov ecx, ebx
  __asm push eax
  __asm call LAB_10005975
  __asm lea ecx, [ebp - 0x140]
  __asm call LAB_10051c49
  __asm lea ecx, [ebp - 0x14c]
  __asm call LAB_1005dcb0
  __asm mov esi, dword ptr [ebp + 0x5c]
  __asm mov dword ptr [ebp - 0x154], LAB_118bc0c0
  __asm mov byte ptr [ebp - 4], 0x1a
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x5e
  __asm mov edi, dword ptr [ebp + 0x60]
  __asm cmp esi, edi
  __asm _emit 0x74 __asm _emit 0x12
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 0
  __asm call dword ptr [eax]
  __asm add esi, 0x20
  __asm cmp esi, edi
  __asm _emit 0x75 __asm _emit 0xf1
  __asm mov esi, dword ptr [ebp + 0x5c]
  __asm mov ecx, dword ptr [ebp + 0x64]
  __asm mov eax, esi
  __asm sub ecx, esi
  __asm and ecx, 0xffffffe0
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x14
  __asm mov esi, dword ptr [esi - 4]
  __asm add ecx, 0x23
  __asm sub eax, esi
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja LAB_10610759
  __asm push ecx
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x5c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x60 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x64 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov esi, dword ptr [ebp + 0x50]
  __asm test esi, esi
  __asm je LAB_10610781
  __asm mov ebx, dword ptr [ebp + 0x54]
  __asm cmp esi, ebx
  __asm _emit 0x74 __asm _emit 0x43
  __asm add esi, 4
  __asm lea ecx, [esi + 4]
  __asm mov byte ptr [ebp - 4], 0x1d
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [esi]
  __asm mov byte ptr [ebp - 4], 0x1e
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x12 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm add esi, 0xc
  __asm mov byte ptr [ebp - 4], 0x1a
  __asm lea eax, [esi - 4]
  __asm cmp eax, ebx
  __asm _emit 0x75 __asm _emit 0xc3
  __asm mov esi, dword ptr [ebp + 0x50]
  __asm mov ecx, dword ptr [ebp + 0x58]
  __asm mov eax, 0x2aaaaaab
  __asm sub ecx, esi
  __asm imul ecx
  __asm _emit 0xd1 __asm _emit 0xfa
  __asm mov eax, edx
  __asm shr eax, 0x1f
  __asm add eax, edx
  __asm lea ecx, [eax + eax*2]
  __asm mov eax, esi
  __asm shl ecx, 2
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x16
  __asm mov esi, dword ptr [esi - 4]
  __asm add ecx, 0x23
  __asm sub eax, esi
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x76 __asm _emit 0x06
  __asm call dword ptr [LAB_122fc888]
  __asm push ecx
  __asm push esi
  __asm call LAB_100131d8
  __asm mov ebx, dword ptr [ebp + 0x78]
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x50 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x54 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x58 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea ecx, [ebp - 0x80]
  __asm mov dword ptr [ebp + 0x48], LAB_118bc0c0
  __asm call LAB_10051c49
  __asm lea ecx, [ebp - 0x8c]
  __asm call LAB_1005dcb0
  __asm mov dword ptr [ebp - 0x94], LAB_118bc0c0
  __asm lea ecx, [ebp - 0x10]
  __asm mov byte ptr [ebp - 4], 0x1f
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xf0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ebp - 0x14]
  __asm mov byte ptr [ebp - 4], 0x20
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xe8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xec __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp - 0xa0]
  __asm call LAB_10051c49
  __asm lea ecx, [ebp - 0xac]
  __asm call LAB_1005dcb0
  __asm mov dword ptr [ebp - 0xb4], LAB_118bc0c0
  __asm lea ecx, [ebp - 0x20]
  __asm mov byte ptr [ebp - 4], 0x21
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xe0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ebp - 0x24]
  __asm mov byte ptr [ebp - 4], 0x22
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xd8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xdc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp + 0x40]
  __asm mov byte ptr [ebp - 4], 0x23
  __asm call LAB_1005c315
  __asm lea ecx, [ebp - 0xc0]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x40 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10051c49
  __asm lea ecx, [ebp - 0xcc]
  __asm call LAB_1005dcb0
  __asm mov dword ptr [ebp - 0xd4], LAB_118bc0c0
  __asm lea ecx, [ebp - 0x30]
  __asm mov byte ptr [ebp - 4], 0x24
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xd0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ebp - 0x34]
  __asm mov byte ptr [ebp - 4], 0x25
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xc8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xcc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp + 0x28]
  __asm mov byte ptr [ebp - 4], 0x26
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x28 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp + 8]
  __asm mov byte ptr [ebp - 4], 0x27
  __asm call LAB_1005c315
  __asm lea ecx, [ebp - 0xe0]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10051c49
  __asm lea ecx, [ebp - 0xec]
  __asm call LAB_1005dcb0
  __asm mov dword ptr [ebp - 0xf4], LAB_118bc0c0
  __asm lea ecx, [ebp - 0x40]
  __asm mov byte ptr [ebp - 4], 0x28
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xc0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ebp - 0x44]
  __asm mov byte ptr [ebp - 4], 0x29
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xb8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xbc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp]
  __asm mov byte ptr [ebp - 4], 0x2a
  __asm call LAB_1005c315
  __asm lea ecx, [ebp - 0x100]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10051c49
  __asm lea ecx, [ebp - 0x10c]
  __asm call LAB_1005dcb0
  __asm mov dword ptr [ebp - 0x114], LAB_118bc0c0
  __asm lea ecx, [ebp - 0x50]
  __asm mov byte ptr [ebp - 4], 0x2b
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xb0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ebp - 0x54]
  __asm mov byte ptr [ebp - 4], 0x2c
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xa8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xac __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp - 0x120]
  __asm call LAB_10051c49
  __asm lea ecx, [ebp - 0x12c]
  __asm call LAB_1005dcb0
  __asm mov dword ptr [ebp - 0x134], LAB_118bc0c0
  __asm lea ecx, [ebp - 0x60]
  __asm mov byte ptr [ebp - 4], 0x2d
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xa0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ebp - 0x64]
  __asm mov byte ptr [ebp - 4], 0x2e
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x98 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x9c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp + 0x38]
  __asm mov byte ptr [ebp - 4], 0x2f
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x38 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea ecx, [ebp + 0x68]
  __asm mov byte ptr [ebp - 4], 0x30
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x68 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea ecx, [ebp + 0x10]
  __asm mov byte ptr [ebp - 4], 0x31
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ebp + 0x20]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x32 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x07
  __asm mov edx, dword ptr [eax]
  __asm mov ecx, eax
  __asm call dword ptr [edx + 8]
  __asm mov eax, ebx
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm lea esp, [ebp + 0x70]
  __asm pop ebp
  __asm ret 4
}




// Reference entry 10610c60; body size 329 bytes.
#line 1 "ENTRY_10610c60"

__declspec(naked) void FUN_10610c60(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_115bc5bd
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 0x18
  __asm push esi
  __asm push edi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1001c9c2
  __asm push 0xd
  __asm lea edx, [ebp - 0x1c]
  __asm push edx
  __asm mov eax, dword ptr [eax + 0x4c]
  __asm mov ecx, dword ptr [eax + 0xe8]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm mov edi, dword ptr [eax]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ebp - 0x24], edi
  __asm test edi, edi
  __asm _emit 0x74 __asm _emit 0x0b
  __asm mov eax, dword ptr [edi]
  __asm mov ecx, edi
  __asm call dword ptr [eax + 0xc]
  __asm mov esi, eax
  __asm _emit 0xeb __asm _emit 0x02
  __asm xor esi, esi
  __asm mov dword ptr [ebp - 0x20], esi
  __asm mov byte ptr [ebp - 4], 1
  __asm test edi, edi
  __asm _emit 0x74 __asm _emit 0x4f
  __asm push offset LAB_1186f88c
  __asm lea ecx, [ebp - 0x10]
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [edi]
  __asm lea ecx, [ebp - 0x10]
  __asm push ecx
  __asm lea ecx, [ebp - 0x14]
  __asm mov byte ptr [ebp - 4], 2
  __asm push ecx
  __asm mov ecx, edi
  __asm call dword ptr [eax]
  __asm mov edi, dword ptr [eax]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ebp - 0x18], edi
  __asm mov ecx, dword ptr [ebp - 0x14]
  __asm mov byte ptr [ebp - 4], 4
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp - 0x10]
  __asm mov byte ptr [ebp - 4], 5
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xf0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xeb __asm _emit 0x09 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xe8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm xor edi, edi
  __asm mov byte ptr [ebp - 4], 6
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x07
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0x1c]
  __asm mov byte ptr [ebp - 4], 9
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov byte ptr [ebp - 4], 8
  __asm test edi, edi
  __asm _emit 0x74 __asm _emit 0x26
  __asm push 2
  __asm call LAB_1007a7a2
  __asm mov ecx, eax
  __asm call LAB_10002eeb
  __asm test al, al
  __asm _emit 0x74 __asm _emit 0x14
  __asm mov edx, dword ptr [edi]
  __asm mov ecx, edi
  __asm mov esi, dword ptr [ebp + 8]
  __asm push esi
  __asm call dword ptr [edx + 0x38]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x0a __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xeb __asm _emit 0x1a
  __asm mov esi, dword ptr [ebp + 8]
  __asm mov ecx, esi
  __asm push offset LAB_1186d2ee
  __asm call LAB_1005273e
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x0b __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test edi, edi
  __asm _emit 0x74 __asm _emit 0x07
  __asm mov edx, dword ptr [edi]
  __asm mov ecx, edi
  __asm call dword ptr [edx + 8]
  __asm mov eax, esi
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret 4
}




// Reference entry 10610e00; body size 79 bytes.
#line 1 "ENTRY_10610e00"

__declspec(naked) void FUN_10610e00(void)

{
  __asm sub esp, 0x2c
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, esp
  __asm mov dword ptr [esp + 0x28], eax
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x34]
  __asm lea eax, [esp + 8]
  __asm push 0x21
  __asm push eax
  __asm mov dword ptr [esp + 0xc], esi
  __asm mov byte ptr [esp + 0x10], 0
  __asm call LAB_1004ec47
  __asm mov ecx, eax
  __asm call LAB_1006dabb
  __asm lea eax, [esp + 8]
  __asm mov ecx, esi
  __asm push eax
  __asm call LAB_1005273e
  __asm mov ecx, dword ptr [esp + 0x2c]
  __asm mov eax, esi
  __asm pop esi
  __asm xor ecx, esp
  __asm call LAB_100382f3
  __asm add esp, 0x2c
  __asm ret 4
}




// Reference entry 10610e90; body size 1612 bytes.
#line 1 "ENTRY_10610e90"

__declspec(naked) void FUN_10610e90(void)

{
  __asm push ebp
  __asm lea ebp, [esp - 0x64]
  __asm sub esp, 0x64
  __asm push -1
  __asm push offset LAB_115bc67a
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 0x150
  __asm push ebx
  __asm push esi
  __asm push edi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov esi, ecx
  __asm mov dword ptr [ebp - 0x34], esi
  __asm mov eax, dword ptr [LAB_121a2128]
  __asm lea ecx, [ebp - 0x15c]
  __asm mov dword ptr [ebp + 0x60], eax
  __asm lea eax, [ebp + 0x60]
  __asm push eax
  __asm call LAB_100121fc
  __asm mov eax, dword ptr [LAB_121a2128]
  __asm lea ecx, [ebp - 0x13c]
  __asm mov dword ptr [ebp + 0x60], eax
  __asm lea eax, [ebp + 0x60]
  __asm push eax
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_100121fc
  __asm mov eax, dword ptr [LAB_121a2138]
  __asm lea ecx, [ebp - 0x11c]
  __asm mov dword ptr [ebp + 0x60], eax
  __asm lea eax, [ebp + 0x60]
  __asm push eax
  __asm mov byte ptr [ebp - 4], 1
  __asm call LAB_100121fc
  __asm mov eax, dword ptr [LAB_121a2148]
  __asm lea ecx, [ebp - 0xfc]
  __asm mov dword ptr [ebp + 0x60], eax
  __asm lea eax, [ebp + 0x60]
  __asm push eax
  __asm mov byte ptr [ebp - 4], 2
  __asm call LAB_100121fc
  __asm mov eax, dword ptr [LAB_121a2134]
  __asm lea ecx, [ebp - 0xdc]
  __asm mov dword ptr [ebp + 0x60], eax
  __asm lea eax, [ebp + 0x60]
  __asm push eax
  __asm mov byte ptr [ebp - 4], 3
  __asm call LAB_100121fc
  __asm mov eax, dword ptr [LAB_121a2128]
  __asm lea ecx, [ebp - 0xbc]
  __asm mov dword ptr [ebp + 0x60], eax
  __asm lea eax, [ebp + 0x60]
  __asm push eax
  __asm mov byte ptr [ebp - 4], 4
  __asm call LAB_100121fc
  __asm mov eax, dword ptr [LAB_121a2140]
  __asm lea ecx, [ebp - 0x9c]
  __asm mov dword ptr [ebp + 0x60], eax
  __asm lea eax, [ebp + 0x60]
  __asm push eax
  __asm mov byte ptr [ebp - 4], 5
  __asm call LAB_100121fc
  __asm mov eax, dword ptr [LAB_121a213c]
  __asm lea ecx, [ebp - 0x7c]
  __asm mov dword ptr [ebp + 0x60], eax
  __asm lea eax, [ebp + 0x60]
  __asm push eax
  __asm mov byte ptr [ebp - 4], 6
  __asm call LAB_100121fc
  __asm mov eax, dword ptr [LAB_121a2130]
  __asm lea ecx, [ebp - 0x5c]
  __asm mov dword ptr [ebp + 0x60], eax
  __asm lea eax, [ebp + 0x60]
  __asm push eax
  __asm mov byte ptr [ebp - 4], 7
  __asm call LAB_100121fc
  __asm xorps xmm0, xmm0
  __asm mov dword ptr [ebp - 0x2c], LAB_118bc9e0
  __asm movups xmmword ptr [ebp - 0x28], xmm0
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xe8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xec __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0xf0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea eax, [ebp - 0x11c]
  __asm mov byte ptr [ebp - 4], 9
  __asm push eax
  __asm push 0
  __asm lea ecx, [ebp - 0x2c]
  __asm call LAB_100974ab
  __asm lea ecx, [ebp - 0x13c]
  __asm push ecx
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 0x10]
  __asm xorps xmm0, xmm0
  __asm mov dword ptr [ebp - 0x38], eax
  __asm mov dword ptr [ebp], LAB_118bc9e0
  __asm movups xmmword ptr [ebp + 4], xmm0
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x1c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea eax, [ebp - 0xdc]
  __asm mov byte ptr [ebp - 4], 0xa
  __asm push eax
  __asm push 0
  __asm lea ecx, [ebp]
  __asm call LAB_100974ab
  __asm lea ecx, [ebp - 0xfc]
  __asm push ecx
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 0x10]
  __asm xorps xmm0, xmm0
  __asm mov dword ptr [ebp - 0x30], eax
  __asm mov dword ptr [ebp + 0x20], LAB_118bc9e0
  __asm movups xmmword ptr [ebp + 0x24], xmm0
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x34 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x38 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x3c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea eax, [ebp - 0x9c]
  __asm mov byte ptr [ebp - 4], 0xb
  __asm push eax
  __asm push 0
  __asm lea ecx, [ebp + 0x20]
  __asm call LAB_100974ab
  __asm lea ecx, [ebp - 0xbc]
  __asm push ecx
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 0x10]
  __asm xorps xmm0, xmm0
  __asm mov dword ptr [ebp + 0x40], LAB_118bc9e0
  __asm mov ebx, eax
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x54 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm movups xmmword ptr [ebp + 0x44], xmm0
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x58 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x5c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm cmp dword ptr [esi + 0x11c], 1
  __asm lea eax, [ebp - 0x5c]
  __asm push eax
  __asm sete al
  __asm mov byte ptr [ebp - 4], 0xc
  __asm movzx eax, al
  __asm lea ecx, [ebp + 0x40]
  __asm push eax
  __asm call LAB_100974ab
  __asm cmp dword ptr [esi + 0x11c], 4
  __asm lea ecx, [ebp - 0x7c]
  __asm push ecx
  __asm sete cl
  __asm mov edx, dword ptr [eax]
  __asm movzx ecx, cl
  __asm push ecx
  __asm mov ecx, eax
  __asm call dword ptr [edx + 0xc]
  __asm mov edi, eax
  __asm lea ecx, [esi + 0xe8]
  __asm lea eax, [ebp - 0x3c]
  __asm push eax
  __asm call LAB_10090cd2
  __asm cmp dword ptr [eax], 0
  __asm mov byte ptr [ebp - 4], 0xd
  __asm setne byte ptr [ebp + 0x60]
  __asm mov eax, dword ptr [ebx]
  __asm mov ecx, ebx
  __asm mov esi, dword ptr [edi]
  __asm call dword ptr [eax + 4]
  __asm push eax
  __asm push dword ptr [ebp + 0x60]
  __asm mov ecx, edi
  __asm call dword ptr [esi + 0xc]
  __asm mov esi, eax
  __asm mov eax, dword ptr [ebp - 0x30]
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm mov edi, dword ptr [esi]
  __asm call dword ptr [edx + 4]
  __asm mov ebx, dword ptr [ebp - 0x34]
  __asm mov ecx, esi
  __asm push eax
  __asm cmp dword ptr [ebx + 0x11c], 2
  __asm sete al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edi + 0xc]
  __asm mov esi, eax
  __asm mov eax, dword ptr [ebp - 0x38]
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm mov edi, dword ptr [esi]
  __asm call dword ptr [edx + 4]
  __asm cmp dword ptr [ebx + 0x11c], 3
  __asm mov ecx, esi
  __asm push eax
  __asm sete al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edi + 0xc]
  __asm lea ecx, [ebp - 0x15c]
  __asm push ecx
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 0x10]
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov ebx, dword ptr [ebp + 0x6c]
  __asm mov ecx, ebx
  __asm push eax
  __asm call LAB_1000c54a
  __asm mov ecx, dword ptr [ebp - 0x3c]
  __asm mov byte ptr [ebp - 4], 0xe
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov esi, dword ptr [ebp + 0x54]
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x5e
  __asm mov edi, dword ptr [ebp + 0x58]
  __asm cmp esi, edi
  __asm _emit 0x74 __asm _emit 0x12
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 0
  __asm call dword ptr [eax]
  __asm add esi, 0x20
  __asm cmp esi, edi
  __asm _emit 0x75 __asm _emit 0xf1
  __asm mov esi, dword ptr [ebp + 0x54]
  __asm mov ecx, dword ptr [ebp + 0x5c]
  __asm mov eax, esi
  __asm sub ecx, esi
  __asm and ecx, 0xffffffe0
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x14
  __asm mov esi, dword ptr [esi - 4]
  __asm add ecx, 0x23
  __asm sub eax, esi
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja LAB_1061143c
  __asm push ecx
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x54 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x58 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x5c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov edx, dword ptr [ebp + 0x48]
  __asm test edx, edx
  __asm _emit 0x74 __asm _emit 0x45
  __asm mov ecx, dword ptr [ebp + 0x50]
  __asm mov eax, edx
  __asm sub ecx, edx
  __asm and ecx, 0xfffffffc
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x14
  __asm mov edx, dword ptr [edx - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja LAB_1061143c
  __asm push ecx
  __asm push edx
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x48 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x4c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x50 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov esi, dword ptr [ebp + 0x34]
  __asm mov dword ptr [ebp + 0x40], LAB_118bc9b4
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x5e
  __asm mov edi, dword ptr [ebp + 0x38]
  __asm cmp esi, edi
  __asm _emit 0x74 __asm _emit 0x12
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 0
  __asm call dword ptr [eax]
  __asm add esi, 0x20
  __asm cmp esi, edi
  __asm _emit 0x75 __asm _emit 0xf1
  __asm mov esi, dword ptr [ebp + 0x34]
  __asm mov ecx, dword ptr [ebp + 0x3c]
  __asm mov eax, esi
  __asm sub ecx, esi
  __asm and ecx, 0xffffffe0
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x14
  __asm mov esi, dword ptr [esi - 4]
  __asm add ecx, 0x23
  __asm sub eax, esi
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja LAB_1061143c
  __asm push ecx
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x34 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x38 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x3c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov edx, dword ptr [ebp + 0x28]
  __asm test edx, edx
  __asm _emit 0x74 __asm _emit 0x45
  __asm mov ecx, dword ptr [ebp + 0x30]
  __asm mov eax, edx
  __asm sub ecx, edx
  __asm and ecx, 0xfffffffc
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x14
  __asm mov edx, dword ptr [edx - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja LAB_1061143c
  __asm push ecx
  __asm push edx
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x28 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x2c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x30 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov esi, dword ptr [ebp + 0x14]
  __asm mov dword ptr [ebp + 0x20], LAB_118bc9b4
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x5e
  __asm mov edi, dword ptr [ebp + 0x18]
  __asm cmp esi, edi
  __asm _emit 0x74 __asm _emit 0x12
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 0
  __asm call dword ptr [eax]
  __asm add esi, 0x20
  __asm cmp esi, edi
  __asm _emit 0x75 __asm _emit 0xf1
  __asm mov esi, dword ptr [ebp + 0x14]
  __asm mov ecx, dword ptr [ebp + 0x1c]
  __asm mov eax, esi
  __asm sub ecx, esi
  __asm and ecx, 0xffffffe0
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x14
  __asm mov esi, dword ptr [esi - 4]
  __asm add ecx, 0x23
  __asm sub eax, esi
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja LAB_1061143c
  __asm push ecx
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x1c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov edx, dword ptr [ebp + 8]
  __asm test edx, edx
  __asm _emit 0x74 __asm _emit 0x45
  __asm mov ecx, dword ptr [ebp + 0x10]
  __asm mov eax, edx
  __asm sub ecx, edx
  __asm and ecx, 0xfffffffc
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x14
  __asm mov edx, dword ptr [edx - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja LAB_1061143c
  __asm push ecx
  __asm push edx
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov esi, dword ptr [ebp - 0x18]
  __asm mov dword ptr [ebp], LAB_118bc9b4
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x5a
  __asm mov edi, dword ptr [ebp - 0x14]
  __asm cmp esi, edi
  __asm _emit 0x74 __asm _emit 0x12
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 0
  __asm call dword ptr [eax]
  __asm add esi, 0x20
  __asm cmp esi, edi
  __asm _emit 0x75 __asm _emit 0xf1
  __asm mov esi, dword ptr [ebp - 0x18]
  __asm mov ecx, dword ptr [ebp - 0x10]
  __asm mov eax, esi
  __asm sub ecx, esi
  __asm and ecx, 0xffffffe0
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x10
  __asm mov esi, dword ptr [esi - 4]
  __asm add ecx, 0x23
  __asm sub eax, esi
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x77 __asm _emit 0x48
  __asm push ecx
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xe8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xec __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0xf0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov edx, dword ptr [ebp - 0x24]
  __asm test edx, edx
  __asm _emit 0x74 __asm _emit 0x47
  __asm mov ecx, dword ptr [ebp - 0x1c]
  __asm mov eax, edx
  __asm sub ecx, edx
  __asm and ecx, 0xfffffffc
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x16
  __asm mov edx, dword ptr [edx - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x76 __asm _emit 0x06
  __asm call dword ptr [LAB_122fc888]
  __asm push ecx
  __asm push edx
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xdc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xe0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0xe4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea ecx, [ebp - 0x5c]
  __asm mov dword ptr [ebp - 0x2c], LAB_118bc9b4
  __asm call LAB_10021b66
  __asm lea ecx, [ebp - 0x7c]
  __asm call LAB_10021b66
  __asm lea ecx, [ebp - 0x9c]
  __asm call LAB_10021b66
  __asm lea ecx, [ebp - 0xbc]
  __asm call LAB_10021b66
  __asm lea ecx, [ebp - 0xdc]
  __asm call LAB_10021b66
  __asm lea ecx, [ebp - 0xfc]
  __asm call LAB_10021b66
  __asm lea ecx, [ebp - 0x11c]
  __asm call LAB_10021b66
  __asm lea ecx, [ebp - 0x13c]
  __asm call LAB_10021b66
  __asm lea ecx, [ebp - 0x15c]
  __asm call LAB_10021b66
  __asm mov eax, ebx
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm lea esp, [ebp + 0x64]
  __asm pop ebp
  __asm ret 4
}




// Reference entry 10611670; body size 671 bytes.
#line 1 "ENTRY_10611670"

__declspec(naked) void FUN_10611670(void)

{
  __asm push ebp
  __asm lea ebp, [esp - 0x68]
  __asm sub esp, 0x68
  __asm push -1
  __asm push offset LAB_115bc705
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 0x40
  __asm push ebx
  __asm push esi
  __asm push edi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov esi, ecx
  __asm lea eax, [ebp + 0x64]
  __asm push eax
  __asm call LAB_1009058e
  __asm add esp, 4
  __asm mov ecx, dword ptr [eax]
  __asm lea edx, [ebp + 0x60]
  __asm push edx
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x3c]
  __asm mov edi, dword ptr [eax]
  __asm mov ecx, dword ptr [ebp + 0x60]
  __asm mov byte ptr [ebp - 4], 1
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp + 0x64]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x02 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, esi
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
  __asm call LAB_1000d2bf
  __asm push 1
  __asm lea ecx, [eax + 0x100]
  __asm call LAB_1008dd2a
  __asm test al, al
  __asm mov ecx, esi
  __asm sete bl
  __asm call LAB_10064623
  __asm cmp byte ptr [eax + 0xf8], 0
  __asm _emit 0x75 __asm _emit 0x08
  __asm mov byte ptr [ebp + 0x60], 0
  __asm test edi, edi
  __asm _emit 0x75 __asm _emit 0x04
  __asm mov byte ptr [ebp + 0x60], 1
  __asm mov eax, dword ptr [LAB_121a2154]
  __asm lea ecx, [ebp - 0x4c]
  __asm mov dword ptr [ebp + 0x64], eax
  __asm lea eax, [ebp + 0x64]
  __asm push eax
  __asm call LAB_100121fc
  __asm mov eax, dword ptr [LAB_121a2158]
  __asm lea ecx, [ebp - 0x2c]
  __asm mov dword ptr [ebp + 0x64], eax
  __asm lea eax, [ebp + 0x64]
  __asm push eax
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x03 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_100121fc
  __asm mov eax, dword ptr [LAB_121a215c]
  __asm lea ecx, [ebp]
  __asm mov dword ptr [ebp + 0x64], eax
  __asm lea eax, [ebp + 0x64]
  __asm push eax
  __asm mov byte ptr [ebp - 4], 4
  __asm call LAB_100121fc
  __asm mov ecx, esi
  __asm mov byte ptr [ebp - 4], 5
  __asm call LAB_1000d2bf
  __asm mov ecx, dword ptr [LAB_122f5674]
  __asm push 0x15
  __asm call LAB_1005ff38
  __asm test al, al
  __asm _emit 0x75 __asm _emit 0x08
  __asm test bl, bl
  __asm _emit 0x74 __asm _emit 0x04
  __asm mov bl, 1
  __asm _emit 0xeb __asm _emit 0x02
  __asm xor bl, bl
  __asm lea eax, [ebp + 0x64]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x64 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm lea ecx, [ebp + 0x20]
  __asm call LAB_100121fc
  __asm xorps xmm0, xmm0
  __asm mov dword ptr [ebp + 0x40], LAB_118bc9e0
  __asm movups xmmword ptr [ebp + 0x44], xmm0
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x54 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x58 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x5c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea eax, [ebp + 0x20]
  __asm mov byte ptr [ebp - 4], 7
  __asm push eax
  __asm push dword ptr [ebp + 0x60]
  __asm lea ecx, [ebp + 0x40]
  __asm call LAB_100974ab
  __asm lea ecx, [ebp]
  __asm push ecx
  __asm push ebx
  __asm mov edx, dword ptr [eax]
  __asm mov ecx, eax
  __asm call dword ptr [edx + 0xc]
  __asm mov ecx, esi
  __asm mov edi, eax
  __asm call LAB_1000d2bf
  __asm mov esi, dword ptr [edi]
  __asm lea ecx, [ebp - 0x2c]
  __asm push ecx
  __asm lea ecx, [eax + 0xf4]
  __asm call LAB_1003a6cf
  __asm movzx eax, al
  __asm mov ecx, edi
  __asm push eax
  __asm call dword ptr [esi + 0xc]
  __asm lea ecx, [ebp - 0x4c]
  __asm push ecx
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 0x10]
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov ebx, dword ptr [ebp + 0x70]
  __asm mov ecx, ebx
  __asm push eax
  __asm call LAB_1000c54a
  __asm mov esi, dword ptr [ebp + 0x54]
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x5c
  __asm mov edi, dword ptr [ebp + 0x58]
  __asm cmp esi, edi
  __asm _emit 0x74 __asm _emit 0x14
  __asm nop
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 0
  __asm call dword ptr [eax]
  __asm add esi, 0x20
  __asm cmp esi, edi
  __asm _emit 0x75 __asm _emit 0xf1
  __asm mov esi, dword ptr [ebp + 0x54]
  __asm mov ecx, dword ptr [ebp + 0x5c]
  __asm mov eax, esi
  __asm sub ecx, esi
  __asm and ecx, 0xffffffe0
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x10
  __asm mov esi, dword ptr [esi - 4]
  __asm add ecx, 0x23
  __asm sub eax, esi
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x77 __asm _emit 0x48
  __asm push ecx
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x54 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x58 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x5c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov edx, dword ptr [ebp + 0x48]
  __asm test edx, edx
  __asm _emit 0x74 __asm _emit 0x47
  __asm mov ecx, dword ptr [ebp + 0x50]
  __asm mov eax, edx
  __asm sub ecx, edx
  __asm and ecx, 0xfffffffc
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x16
  __asm mov edx, dword ptr [edx - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x76 __asm _emit 0x06
  __asm call dword ptr [LAB_122fc888]
  __asm push ecx
  __asm push edx
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x48 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x4c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x50 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea ecx, [ebp + 0x20]
  __asm mov dword ptr [ebp + 0x40], LAB_118bc9b4
  __asm call LAB_10021b66
  __asm lea ecx, [ebp]
  __asm call LAB_10021b66
  __asm lea ecx, [ebp - 0x2c]
  __asm call LAB_10021b66
  __asm lea ecx, [ebp - 0x4c]
  __asm call LAB_10021b66
  __asm mov eax, ebx
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm lea esp, [ebp + 0x68]
  __asm pop ebp
  __asm ret 4
}




// Reference entry 106119c0; body size 487 bytes.
#line 1 "ENTRY_106119c0"

__declspec(naked) void FUN_106119c0(void)

{
  __asm push ebp
  __asm lea ebp, [esp - 0x64]
  __asm sub esp, 0x64
  __asm push -1
  __asm push offset LAB_115bc765
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 0x20
  __asm push ebx
  __asm push esi
  __asm push edi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ebx, ecx
  __asm mov eax, dword ptr [LAB_121a218c]
  __asm lea ecx, [ebp - 0x2c]
  __asm mov dword ptr [ebp + 0x60], eax
  __asm lea eax, [ebp + 0x60]
  __asm push eax
  __asm call LAB_100121fc
  __asm mov eax, dword ptr [LAB_121a2158]
  __asm lea ecx, [ebp]
  __asm mov dword ptr [ebp + 0x60], eax
  __asm lea eax, [ebp + 0x60]
  __asm push eax
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_100121fc
  __asm mov eax, dword ptr [LAB_121a2174]
  __asm lea ecx, [ebp + 0x20]
  __asm mov dword ptr [ebp + 0x60], eax
  __asm lea eax, [ebp + 0x60]
  __asm push eax
  __asm mov byte ptr [ebp - 4], 1
  __asm call LAB_100121fc
  __asm xorps xmm0, xmm0
  __asm mov dword ptr [ebp + 0x40], LAB_118bc9e0
  __asm movups xmmword ptr [ebp + 0x44], xmm0
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x54 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x58 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x5c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, ebx
  __asm mov byte ptr [ebp - 4], 3
  __asm call LAB_10064623
  __asm mov esi, dword ptr [ebp + 0x40]
  __asm lea ecx, [ebp + 0x20]
  __asm push ecx
  __asm mov ecx, eax
  __asm call LAB_1008d771
  __asm movzx eax, al
  __asm lea ecx, [ebp + 0x40]
  __asm push eax
  __asm call dword ptr [esi + 8]
  __asm mov ecx, ebx
  __asm mov edi, eax
  __asm call LAB_1000d2bf
  __asm mov esi, dword ptr [edi]
  __asm lea ecx, [ebp]
  __asm push ecx
  __asm lea ecx, [eax + 0xf4]
  __asm call LAB_1003a6cf
  __asm movzx eax, al
  __asm mov ecx, edi
  __asm push eax
  __asm call dword ptr [esi + 0xc]
  __asm lea ecx, [ebp - 0x2c]
  __asm push ecx
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 0x10]
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov ebx, dword ptr [ebp + 0x6c]
  __asm mov ecx, ebx
  __asm push eax
  __asm call LAB_1000c54a
  __asm mov esi, dword ptr [ebp + 0x54]
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x60
  __asm mov edi, dword ptr [ebp + 0x58]
  __asm cmp esi, edi
  __asm _emit 0x74 __asm _emit 0x18
  __asm nop word ptr [eax + eax]
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 0
  __asm call dword ptr [eax]
  __asm add esi, 0x20
  __asm cmp esi, edi
  __asm _emit 0x75 __asm _emit 0xf1
  __asm mov esi, dword ptr [ebp + 0x54]
  __asm mov ecx, dword ptr [ebp + 0x5c]
  __asm mov eax, esi
  __asm sub ecx, esi
  __asm and ecx, 0xffffffe0
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x10
  __asm mov esi, dword ptr [esi - 4]
  __asm add ecx, 0x23
  __asm sub eax, esi
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x77 __asm _emit 0x48
  __asm push ecx
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x54 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x58 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x5c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov edx, dword ptr [ebp + 0x48]
  __asm test edx, edx
  __asm _emit 0x74 __asm _emit 0x47
  __asm mov ecx, dword ptr [ebp + 0x50]
  __asm mov eax, edx
  __asm sub ecx, edx
  __asm and ecx, 0xfffffffc
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x16
  __asm mov edx, dword ptr [edx - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x76 __asm _emit 0x06
  __asm call dword ptr [LAB_122fc888]
  __asm push ecx
  __asm push edx
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x48 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x4c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x50 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea ecx, [ebp + 0x20]
  __asm mov dword ptr [ebp + 0x40], LAB_118bc9b4
  __asm call LAB_10021b66
  __asm lea ecx, [ebp]
  __asm call LAB_10021b66
  __asm lea ecx, [ebp - 0x2c]
  __asm call LAB_10021b66
  __asm mov eax, ebx
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm lea esp, [ebp + 0x64]
  __asm pop ebp
  __asm ret 4
}




// Reference entry 10611c20; body size 414 bytes.
#line 1 "ENTRY_10611c20"

__declspec(naked) void FUN_10611c20(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_115bc7bd
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 0x64
  __asm push esi
  __asm push edi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov esi, ecx
  __asm mov eax, dword ptr [LAB_121a216c]
  __asm lea ecx, [ebp - 0x70]
  __asm mov dword ptr [ebp - 0x10], eax
  __asm lea eax, [ebp - 0x10]
  __asm push eax
  __asm call LAB_100121fc
  __asm mov eax, dword ptr [LAB_121a2158]
  __asm lea ecx, [ebp - 0x50]
  __asm mov dword ptr [ebp - 0x10], eax
  __asm lea eax, [ebp - 0x10]
  __asm push eax
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_100121fc
  __asm xorps xmm0, xmm0
  __asm mov dword ptr [ebp - 0x30], LAB_118bc9e0
  __asm movups xmmword ptr [ebp - 0x2c], xmm0
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xe4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xe8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0xec __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, esi
  __asm mov byte ptr [ebp - 4], 2
  __asm call LAB_1000d2bf
  __asm mov esi, dword ptr [ebp - 0x30]
  __asm lea ecx, [ebp - 0x50]
  __asm push ecx
  __asm lea ecx, [eax + 0xf4]
  __asm call LAB_1003a6cf
  __asm movzx eax, al
  __asm lea ecx, [ebp - 0x30]
  __asm push eax
  __asm call dword ptr [esi + 8]
  __asm lea ecx, [ebp - 0x70]
  __asm push ecx
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 0x10]
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov ecx, dword ptr [ebp + 8]
  __asm push eax
  __asm call LAB_1000c54a
  __asm mov esi, dword ptr [ebp - 0x1c]
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x5f
  __asm mov edi, dword ptr [ebp - 0x18]
  __asm cmp esi, edi
  __asm _emit 0x74 __asm _emit 0x17 __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x44 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 0
  __asm call dword ptr [eax]
  __asm add esi, 0x20
  __asm cmp esi, edi
  __asm _emit 0x75 __asm _emit 0xf1
  __asm mov esi, dword ptr [ebp - 0x1c]
  __asm mov ecx, dword ptr [ebp - 0x14]
  __asm mov eax, esi
  __asm sub ecx, esi
  __asm and ecx, 0xffffffe0
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x10
  __asm mov esi, dword ptr [esi - 4]
  __asm add ecx, 0x23
  __asm sub eax, esi
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x77 __asm _emit 0x48
  __asm push ecx
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xe4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xe8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0xec __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov edx, dword ptr [ebp - 0x28]
  __asm test edx, edx
  __asm _emit 0x74 __asm _emit 0x47
  __asm mov ecx, dword ptr [ebp - 0x20]
  __asm mov eax, edx
  __asm sub ecx, edx
  __asm and ecx, 0xfffffffc
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x16
  __asm mov edx, dword ptr [edx - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x76 __asm _emit 0x06
  __asm call dword ptr [LAB_122fc888]
  __asm push ecx
  __asm push edx
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xd8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xdc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0xe0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea ecx, [ebp - 0x50]
  __asm mov dword ptr [ebp - 0x30], LAB_118bc9b4
  __asm call LAB_10021b66
  __asm lea ecx, [ebp - 0x70]
  __asm call LAB_10021b66
  __asm mov eax, dword ptr [ebp + 8]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret 4
}




// Reference entry 10611e30; body size 489 bytes.
#line 1 "ENTRY_10611e30"

__declspec(naked) void FUN_10611e30(void)

{
  __asm push ebp
  __asm lea ebp, [esp - 0x64]
  __asm sub esp, 0x64
  __asm push -1
  __asm push offset LAB_115bc815
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 0x20
  __asm push ebx
  __asm push esi
  __asm push edi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ebx, ecx
  __asm mov eax, dword ptr [LAB_121a2154]
  __asm lea ecx, [ebp - 0x2c]
  __asm mov dword ptr [ebp + 0x60], eax
  __asm lea eax, [ebp + 0x60]
  __asm push eax
  __asm call LAB_100121fc
  __asm mov eax, dword ptr [LAB_121a2158]
  __asm lea ecx, [ebp]
  __asm mov dword ptr [ebp + 0x60], eax
  __asm lea eax, [ebp + 0x60]
  __asm push eax
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_100121fc
  __asm lea eax, [ebp + 0x60]
  __asm mov byte ptr [ebp - 4], 1
  __asm push eax
  __asm lea ecx, [ebp + 0x20]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x60 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_100121fc
  __asm xorps xmm0, xmm0
  __asm mov dword ptr [ebp + 0x40], LAB_118bc9e0
  __asm movups xmmword ptr [ebp + 0x44], xmm0
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x54 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x58 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x5c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, ebx
  __asm mov byte ptr [ebp - 4], 3
  __asm call LAB_10064623
  __asm mov esi, dword ptr [ebp + 0x40]
  __asm lea ecx, [ebp + 0x20]
  __asm push ecx
  __asm lea ecx, [eax + 0xf4]
  __asm call LAB_100535ad
  __asm test al, al
  __asm lea ecx, [ebp + 0x40]
  __asm sete al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [esi + 8]
  __asm mov ecx, ebx
  __asm mov edi, eax
  __asm call LAB_1000d2bf
  __asm mov esi, dword ptr [edi]
  __asm lea ecx, [ebp]
  __asm push ecx
  __asm lea ecx, [eax + 0xf4]
  __asm call LAB_1003a6cf
  __asm movzx eax, al
  __asm mov ecx, edi
  __asm push eax
  __asm call dword ptr [esi + 0xc]
  __asm lea ecx, [ebp - 0x2c]
  __asm push ecx
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 0x10]
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov ebx, dword ptr [ebp + 0x6c]
  __asm mov ecx, ebx
  __asm push eax
  __asm call LAB_1000c54a
  __asm mov esi, dword ptr [ebp + 0x54]
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x5a
  __asm mov edi, dword ptr [ebp + 0x58]
  __asm cmp esi, edi
  __asm _emit 0x74 __asm _emit 0x12
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 0
  __asm call dword ptr [eax]
  __asm add esi, 0x20
  __asm cmp esi, edi
  __asm _emit 0x75 __asm _emit 0xf1
  __asm mov esi, dword ptr [ebp + 0x54]
  __asm mov ecx, dword ptr [ebp + 0x5c]
  __asm mov eax, esi
  __asm sub ecx, esi
  __asm and ecx, 0xffffffe0
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x10
  __asm mov esi, dword ptr [esi - 4]
  __asm add ecx, 0x23
  __asm sub eax, esi
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x77 __asm _emit 0x48
  __asm push ecx
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x54 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x58 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x5c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov edx, dword ptr [ebp + 0x48]
  __asm test edx, edx
  __asm _emit 0x74 __asm _emit 0x47
  __asm mov ecx, dword ptr [ebp + 0x50]
  __asm mov eax, edx
  __asm sub ecx, edx
  __asm and ecx, 0xfffffffc
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x16
  __asm mov edx, dword ptr [edx - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x76 __asm _emit 0x06
  __asm call dword ptr [LAB_122fc888]
  __asm push ecx
  __asm push edx
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x48 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x4c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x50 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea ecx, [ebp + 0x20]
  __asm mov dword ptr [ebp + 0x40], LAB_118bc9b4
  __asm call LAB_10021b66
  __asm lea ecx, [ebp]
  __asm call LAB_10021b66
  __asm lea ecx, [ebp - 0x2c]
  __asm call LAB_10021b66
  __asm mov eax, ebx
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm lea esp, [ebp + 0x64]
  __asm pop ebp
  __asm ret 4
}




// Reference entry 106120a0; body size 487 bytes.
#line 1 "ENTRY_106120a0"

__declspec(naked) void FUN_106120a0(void)

{
  __asm push ebp
  __asm lea ebp, [esp - 0x64]
  __asm sub esp, 0x64
  __asm push -1
  __asm push offset LAB_115bc875
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 0x20
  __asm push ebx
  __asm push esi
  __asm push edi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ebx, ecx
  __asm mov eax, dword ptr [LAB_121a218c]
  __asm lea ecx, [ebp - 0x2c]
  __asm mov dword ptr [ebp + 0x60], eax
  __asm lea eax, [ebp + 0x60]
  __asm push eax
  __asm call LAB_100121fc
  __asm mov eax, dword ptr [LAB_121a2158]
  __asm lea ecx, [ebp]
  __asm mov dword ptr [ebp + 0x60], eax
  __asm lea eax, [ebp + 0x60]
  __asm push eax
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_100121fc
  __asm mov eax, dword ptr [LAB_121a2174]
  __asm lea ecx, [ebp + 0x20]
  __asm mov dword ptr [ebp + 0x60], eax
  __asm lea eax, [ebp + 0x60]
  __asm push eax
  __asm mov byte ptr [ebp - 4], 1
  __asm call LAB_100121fc
  __asm xorps xmm0, xmm0
  __asm mov dword ptr [ebp + 0x40], LAB_118bc9e0
  __asm movups xmmword ptr [ebp + 0x44], xmm0
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x54 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x58 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x5c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, ebx
  __asm mov byte ptr [ebp - 4], 3
  __asm call LAB_10064623
  __asm mov esi, dword ptr [ebp + 0x40]
  __asm lea ecx, [ebp + 0x20]
  __asm push ecx
  __asm mov ecx, eax
  __asm call LAB_100619fa
  __asm movzx eax, al
  __asm lea ecx, [ebp + 0x40]
  __asm push eax
  __asm call dword ptr [esi + 8]
  __asm mov ecx, ebx
  __asm mov edi, eax
  __asm call LAB_1000d2bf
  __asm mov esi, dword ptr [edi]
  __asm lea ecx, [ebp]
  __asm push ecx
  __asm lea ecx, [eax + 0xf4]
  __asm call LAB_1003a6cf
  __asm movzx eax, al
  __asm mov ecx, edi
  __asm push eax
  __asm call dword ptr [esi + 0xc]
  __asm lea ecx, [ebp - 0x2c]
  __asm push ecx
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 0x10]
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov ebx, dword ptr [ebp + 0x6c]
  __asm mov ecx, ebx
  __asm push eax
  __asm call LAB_1000c54a
  __asm mov esi, dword ptr [ebp + 0x54]
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x60
  __asm mov edi, dword ptr [ebp + 0x58]
  __asm cmp esi, edi
  __asm _emit 0x74 __asm _emit 0x18
  __asm nop word ptr [eax + eax]
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 0
  __asm call dword ptr [eax]
  __asm add esi, 0x20
  __asm cmp esi, edi
  __asm _emit 0x75 __asm _emit 0xf1
  __asm mov esi, dword ptr [ebp + 0x54]
  __asm mov ecx, dword ptr [ebp + 0x5c]
  __asm mov eax, esi
  __asm sub ecx, esi
  __asm and ecx, 0xffffffe0
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x10
  __asm mov esi, dword ptr [esi - 4]
  __asm add ecx, 0x23
  __asm sub eax, esi
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x77 __asm _emit 0x48
  __asm push ecx
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x54 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x58 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x5c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov edx, dword ptr [ebp + 0x48]
  __asm test edx, edx
  __asm _emit 0x74 __asm _emit 0x47
  __asm mov ecx, dword ptr [ebp + 0x50]
  __asm mov eax, edx
  __asm sub ecx, edx
  __asm and ecx, 0xfffffffc
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x16
  __asm mov edx, dword ptr [edx - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x76 __asm _emit 0x06
  __asm call dword ptr [LAB_122fc888]
  __asm push ecx
  __asm push edx
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x48 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x4c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x50 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea ecx, [ebp + 0x20]
  __asm mov dword ptr [ebp + 0x40], LAB_118bc9b4
  __asm call LAB_10021b66
  __asm lea ecx, [ebp]
  __asm call LAB_10021b66
  __asm lea ecx, [ebp - 0x2c]
  __asm call LAB_10021b66
  __asm mov eax, ebx
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm lea esp, [ebp + 0x64]
  __asm pop ebp
  __asm ret 4
}




// Reference entry 10612300; body size 765 bytes.
#line 1 "ENTRY_10612300"

__declspec(naked) void FUN_10612300(void)

{
  __asm push ebp
  __asm lea ebp, [esp - 0x64]
  __asm sub esp, 0x64
  __asm push -1
  __asm push offset LAB_115bc8fb
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 0xa0
  __asm push ebx
  __asm push esi
  __asm push edi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov esi, ecx
  __asm call LAB_1000d2bf
  __asm lea ecx, [eax + 0x100]
  __asm call LAB_10011153
  __asm mov edi, eax
  __asm cmp edi, dword ptr [esi + 0xc0]
  __asm _emit 0x75 __asm _emit 0x0b
  __asm cmp edi, 2
  __asm mov eax, 1
  __asm cmove edi, eax
  __asm mov eax, dword ptr [LAB_121a2168]
  __asm lea ecx, [ebp - 0xac]
  __asm mov dword ptr [ebp + 0x60], eax
  __asm lea eax, [ebp + 0x60]
  __asm push eax
  __asm call LAB_100121fc
  __asm mov eax, dword ptr [LAB_121a2170]
  __asm lea ecx, [ebp - 0x8c]
  __asm mov dword ptr [ebp + 0x60], eax
  __asm lea eax, [ebp + 0x60]
  __asm push eax
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_100121fc
  __asm mov eax, dword ptr [LAB_121a2168]
  __asm lea ecx, [ebp - 0x6c]
  __asm mov dword ptr [ebp + 0x60], eax
  __asm lea eax, [ebp + 0x60]
  __asm push eax
  __asm mov byte ptr [ebp - 4], 1
  __asm call LAB_100121fc
  __asm mov eax, dword ptr [LAB_121a2174]
  __asm lea ecx, [ebp - 0x4c]
  __asm mov dword ptr [ebp + 0x60], eax
  __asm lea eax, [ebp + 0x60]
  __asm push eax
  __asm mov byte ptr [ebp - 4], 2
  __asm call LAB_100121fc
  __asm lea eax, [ebp + 0x60]
  __asm mov byte ptr [ebp - 4], 3
  __asm push eax
  __asm lea ecx, [ebp - 0x2c]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x60 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_100121fc
  __asm mov eax, dword ptr [LAB_121a2164]
  __asm lea ecx, [ebp]
  __asm mov dword ptr [ebp + 0x60], eax
  __asm lea eax, [ebp + 0x60]
  __asm push eax
  __asm mov byte ptr [ebp - 4], 4
  __asm call LAB_100121fc
  __asm mov byte ptr [ebp - 4], 5
  __asm test edi, edi
  __asm _emit 0x75 __asm _emit 0x1a
  __asm mov ecx, esi
  __asm call LAB_1000d2bf
  __asm lea ecx, [eax + 0x10c]
  __asm call LAB_1002b78d
  __asm test al, al
  __asm _emit 0x75 __asm _emit 0x04
  __asm mov bl, 1
  __asm _emit 0xeb __asm _emit 0x02
  __asm xor bl, bl
  __asm mov eax, dword ptr [LAB_121a2158]
  __asm lea ecx, [ebp + 0x20]
  __asm mov dword ptr [ebp + 0x60], eax
  __asm lea eax, [ebp + 0x60]
  __asm push eax
  __asm call LAB_100121fc
  __asm xorps xmm0, xmm0
  __asm mov dword ptr [ebp + 0x40], LAB_118bc9e0
  __asm movups xmmword ptr [ebp + 0x44], xmm0
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x54 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x58 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x5c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, esi
  __asm mov byte ptr [ebp - 4], 7
  __asm call LAB_1000d2bf
  __asm mov esi, dword ptr [ebp + 0x40]
  __asm lea ecx, [ebp + 0x20]
  __asm push ecx
  __asm lea ecx, [eax + 0xf4]
  __asm call LAB_1003a6cf
  __asm movzx eax, al
  __asm lea ecx, [ebp + 0x40]
  __asm push eax
  __asm call dword ptr [esi + 8]
  __asm lea ecx, [ebp]
  __asm push ecx
  __asm push ebx
  __asm mov edx, dword ptr [eax]
  __asm mov ecx, eax
  __asm call dword ptr [edx + 0xc]
  __asm lea ecx, [ebp - 0x2c]
  __asm test edi, edi
  __asm push ecx
  __asm sete cl
  __asm mov edx, dword ptr [eax]
  __asm movzx ecx, cl
  __asm push ecx
  __asm mov ecx, eax
  __asm call dword ptr [edx + 0xc]
  __asm lea ecx, [ebp - 0x4c]
  __asm cmp edi, 4
  __asm push ecx
  __asm sete cl
  __asm mov edx, dword ptr [eax]
  __asm movzx ecx, cl
  __asm push ecx
  __asm mov ecx, eax
  __asm call dword ptr [edx + 0xc]
  __asm lea ecx, [ebp - 0x6c]
  __asm cmp edi, 1
  __asm push ecx
  __asm sete cl
  __asm mov edx, dword ptr [eax]
  __asm movzx ecx, cl
  __asm push ecx
  __asm mov ecx, eax
  __asm call dword ptr [edx + 0xc]
  __asm lea ecx, [ebp - 0x8c]
  __asm cmp edi, 2
  __asm push ecx
  __asm sete cl
  __asm mov edx, dword ptr [eax]
  __asm movzx ecx, cl
  __asm push ecx
  __asm mov ecx, eax
  __asm call dword ptr [edx + 0xc]
  __asm lea ecx, [ebp - 0xac]
  __asm push ecx
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 0x10]
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov ebx, dword ptr [ebp + 0x6c]
  __asm mov ecx, ebx
  __asm push eax
  __asm call LAB_1000c54a
  __asm mov esi, dword ptr [ebp + 0x54]
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x5d
  __asm mov edi, dword ptr [ebp + 0x58]
  __asm cmp esi, edi
  __asm _emit 0x74 __asm _emit 0x15 __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x00
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 0
  __asm call dword ptr [eax]
  __asm add esi, 0x20
  __asm cmp esi, edi
  __asm _emit 0x75 __asm _emit 0xf1
  __asm mov esi, dword ptr [ebp + 0x54]
  __asm mov ecx, dword ptr [ebp + 0x5c]
  __asm mov eax, esi
  __asm sub ecx, esi
  __asm and ecx, 0xffffffe0
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x10
  __asm mov esi, dword ptr [esi - 4]
  __asm add ecx, 0x23
  __asm sub eax, esi
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x77 __asm _emit 0x48
  __asm push ecx
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x54 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x58 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x5c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov edx, dword ptr [ebp + 0x48]
  __asm test edx, edx
  __asm _emit 0x74 __asm _emit 0x47
  __asm mov ecx, dword ptr [ebp + 0x50]
  __asm mov eax, edx
  __asm sub ecx, edx
  __asm and ecx, 0xfffffffc
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x16
  __asm mov edx, dword ptr [edx - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x76 __asm _emit 0x06
  __asm call dword ptr [LAB_122fc888]
  __asm push ecx
  __asm push edx
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x48 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x4c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x50 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea ecx, [ebp + 0x20]
  __asm mov dword ptr [ebp + 0x40], LAB_118bc9b4
  __asm call LAB_10021b66
  __asm lea ecx, [ebp]
  __asm call LAB_10021b66
  __asm lea ecx, [ebp - 0x2c]
  __asm call LAB_10021b66
  __asm lea ecx, [ebp - 0x4c]
  __asm call LAB_10021b66
  __asm lea ecx, [ebp - 0x6c]
  __asm call LAB_10021b66
  __asm lea ecx, [ebp - 0x8c]
  __asm call LAB_10021b66
  __asm lea ecx, [ebp - 0xac]
  __asm call LAB_10021b66
  __asm mov eax, ebx
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm lea esp, [ebp + 0x64]
  __asm pop ebp
  __asm ret 4
}




// Reference entry 106126c0; body size 345 bytes.
#line 1 "ENTRY_106126c0"

__declspec(naked) void FUN_106126c0(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_115bc955
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 0x44
  __asm push esi
  __asm push edi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [LAB_121a2154]
  __asm lea ecx, [ebp - 0x50]
  __asm mov dword ptr [ebp - 0x10], eax
  __asm lea eax, [ebp - 0x10]
  __asm push eax
  __asm call LAB_100121fc
  __asm xorps xmm0, xmm0
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ebp - 0x30], LAB_118bc9e0
  __asm movups xmmword ptr [ebp - 0x2c], xmm0
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xe4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xe8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0xec __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea eax, [ebp - 0x50]
  __asm mov byte ptr [ebp - 4], 1
  __asm push eax
  __asm lea ecx, [ebp - 0x30]
  __asm call LAB_10039ef5
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov ecx, dword ptr [ebp + 8]
  __asm push eax
  __asm call LAB_1000c54a
  __asm mov esi, dword ptr [ebp - 0x1c]
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x5a
  __asm mov edi, dword ptr [ebp - 0x18]
  __asm cmp esi, edi
  __asm _emit 0x74 __asm _emit 0x12
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 0
  __asm call dword ptr [eax]
  __asm add esi, 0x20
  __asm cmp esi, edi
  __asm _emit 0x75 __asm _emit 0xf1
  __asm mov esi, dword ptr [ebp - 0x1c]
  __asm mov ecx, dword ptr [ebp - 0x14]
  __asm mov eax, esi
  __asm sub ecx, esi
  __asm and ecx, 0xffffffe0
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x10
  __asm mov esi, dword ptr [esi - 4]
  __asm add ecx, 0x23
  __asm sub eax, esi
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x77 __asm _emit 0x48
  __asm push ecx
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xe4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xe8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0xec __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov edx, dword ptr [ebp - 0x28]
  __asm test edx, edx
  __asm _emit 0x74 __asm _emit 0x47
  __asm mov ecx, dword ptr [ebp - 0x20]
  __asm mov eax, edx
  __asm sub ecx, edx
  __asm and ecx, 0xfffffffc
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x16
  __asm mov edx, dword ptr [edx - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x76 __asm _emit 0x06
  __asm call dword ptr [LAB_122fc888]
  __asm push ecx
  __asm push edx
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xd8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xdc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0xe0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea ecx, [ebp - 0x50]
  __asm mov dword ptr [ebp - 0x30], LAB_118bc9b4
  __asm call LAB_10021b66
  __asm mov eax, dword ptr [ebp + 8]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret 4
}




// Reference entry 106128c0; body size 825 bytes.
#line 1 "ENTRY_106128c0"

__declspec(naked) void FUN_106128c0(void)

{
  __asm push ebp
  __asm lea ebp, [esp - 0x70]
  __asm sub esp, 0x70
  __asm push -1
  __asm push offset LAB_115bc9c8
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 0x80
  __asm push ebx
  __asm push esi
  __asm push edi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov edi, ecx
  __asm call LAB_10064623
  __asm mov ecx, eax
  __asm call LAB_10073fce
  __asm mov ecx, edi
  __asm mov byte ptr [ebp + 0x40], al
  __asm call LAB_10064623
  __asm mov ecx, eax
  __asm call LAB_10087128
  __asm mov ecx, edi
  __asm mov bl, al
  __asm call LAB_1000d2bf
  __asm lea ecx, [ebp + 0x68]
  __asm push ecx
  __asm lea ecx, [eax + 0xe8]
  __asm call LAB_10090cd2
  __asm mov ecx, dword ptr [eax]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_100151b3
  __asm mov bh, al
  __asm mov ecx, dword ptr [ebp + 0x68]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 8]
  __asm mov ecx, edi
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
  __asm call LAB_1000d2bf
  __asm lea ecx, [eax + 0x10c]
  __asm call LAB_100389b0
  __asm mov byte ptr [ebp + 0x68], 0
  __asm mov ecx, dword ptr [eax + 4]
  __asm sub ecx, dword ptr [eax]
  __asm mov eax, 0x6bca1af3
  __asm imul ecx
  __asm sar edx, 5
  __asm mov esi, edx
  __asm shr esi, 0x1f
  __asm add esi, edx
  __asm test bh, bh
  __asm _emit 0x75 __asm _emit 0x04
  __asm test esi, esi
  __asm _emit 0x75 __asm _emit 0x04
  __asm test bl, bl
  __asm _emit 0x74 __asm _emit 0x04
  __asm mov byte ptr [ebp + 0x68], 1
  __asm mov eax, dword ptr [LAB_121a2160]
  __asm lea ecx, [ebp - 0x8c]
  __asm mov dword ptr [ebp + 0x6c], eax
  __asm lea eax, [ebp + 0x6c]
  __asm push eax
  __asm call LAB_100121fc
  __asm mov eax, dword ptr [LAB_121a2164]
  __asm lea ecx, [ebp - 0x6c]
  __asm mov dword ptr [ebp + 0x6c], eax
  __asm lea eax, [ebp + 0x6c]
  __asm push eax
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x02 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_100121fc
  __asm mov eax, dword ptr [LAB_121a218c]
  __asm lea ecx, [ebp - 0x4c]
  __asm mov dword ptr [ebp + 0x6c], eax
  __asm lea eax, [ebp + 0x6c]
  __asm push eax
  __asm mov byte ptr [ebp - 4], 3
  __asm call LAB_100121fc
  __asm mov eax, dword ptr [LAB_121a2164]
  __asm lea ecx, [ebp - 0x2c]
  __asm mov dword ptr [ebp + 0x6c], eax
  __asm lea eax, [ebp + 0x6c]
  __asm push eax
  __asm mov byte ptr [ebp - 4], 4
  __asm call LAB_100121fc
  __asm mov ecx, edi
  __asm mov byte ptr [ebp - 4], 5
  __asm call LAB_10064623
  __asm mov ecx, eax
  __asm call LAB_10039261
  __asm test al, al
  __asm _emit 0x74 __asm _emit 0x08
  __asm mov byte ptr [ebp + 0x6c], 1
  __asm test esi, esi
  __asm _emit 0x75 __asm _emit 0x04
  __asm mov byte ptr [ebp + 0x6c], 0
  __asm mov eax, dword ptr [LAB_121a2144]
  __asm lea ecx, [ebp]
  __asm mov dword ptr [ebp + 0x64], eax
  __asm lea eax, [ebp + 0x64]
  __asm push eax
  __asm call LAB_100121fc
  __asm mov ecx, edi
  __asm mov byte ptr [ebp - 4], 6
  __asm call LAB_10064623
  __asm mov ecx, eax
  __asm call LAB_10039261
  __asm test al, al
  __asm _emit 0x74 __asm _emit 0x08
  __asm test esi, esi
  __asm _emit 0x75 __asm _emit 0x04
  __asm mov bl, 1
  __asm _emit 0xeb __asm _emit 0x02
  __asm xor bl, bl
  __asm mov eax, dword ptr [LAB_121a2158]
  __asm lea ecx, [ebp + 0x20]
  __asm mov dword ptr [ebp + 0x64], eax
  __asm lea eax, [ebp + 0x64]
  __asm push eax
  __asm call LAB_100121fc
  __asm xorps xmm0, xmm0
  __asm mov dword ptr [ebp + 0x44], LAB_118bc9e0
  __asm movups xmmword ptr [ebp + 0x48], xmm0
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x58 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x5c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x60 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, edi
  __asm mov byte ptr [ebp - 4], 8
  __asm call LAB_1000d2bf
  __asm mov esi, dword ptr [ebp + 0x44]
  __asm lea ecx, [ebp + 0x20]
  __asm push ecx
  __asm lea ecx, [eax + 0xf4]
  __asm call LAB_1003a6cf
  __asm movzx eax, al
  __asm lea ecx, [ebp + 0x44]
  __asm push eax
  __asm call dword ptr [esi + 8]
  __asm lea ecx, [ebp]
  __asm push ecx
  __asm push ebx
  __asm mov edx, dword ptr [eax]
  __asm mov ecx, eax
  __asm call dword ptr [edx + 0xc]
  __asm lea ecx, [ebp - 0x2c]
  __asm push ecx
  __asm push dword ptr [ebp + 0x6c]
  __asm mov edx, dword ptr [eax]
  __asm mov ecx, eax
  __asm call dword ptr [edx + 0xc]
  __asm lea ecx, [ebp - 0x4c]
  __asm push ecx
  __asm push dword ptr [ebp + 0x40]
  __asm mov edx, dword ptr [eax]
  __asm mov ecx, eax
  __asm call dword ptr [edx + 0xc]
  __asm lea ecx, [ebp - 0x6c]
  __asm push ecx
  __asm push dword ptr [ebp + 0x68]
  __asm mov edx, dword ptr [eax]
  __asm mov ecx, eax
  __asm call dword ptr [edx + 0xc]
  __asm lea ecx, [ebp - 0x8c]
  __asm push ecx
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 0x10]
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov ebx, dword ptr [ebp + 0x78]
  __asm mov ecx, ebx
  __asm push eax
  __asm call LAB_1000c54a
  __asm mov esi, dword ptr [ebp + 0x58]
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x5a
  __asm mov edi, dword ptr [ebp + 0x5c]
  __asm cmp esi, edi
  __asm _emit 0x74 __asm _emit 0x12
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 0
  __asm call dword ptr [eax]
  __asm add esi, 0x20
  __asm cmp esi, edi
  __asm _emit 0x75 __asm _emit 0xf1
  __asm mov esi, dword ptr [ebp + 0x58]
  __asm mov ecx, dword ptr [ebp + 0x60]
  __asm mov eax, esi
  __asm sub ecx, esi
  __asm and ecx, 0xffffffe0
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x10
  __asm mov esi, dword ptr [esi - 4]
  __asm add ecx, 0x23
  __asm sub eax, esi
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x77 __asm _emit 0x48
  __asm push ecx
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x58 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x5c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x60 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov edx, dword ptr [ebp + 0x4c]
  __asm test edx, edx
  __asm _emit 0x74 __asm _emit 0x47
  __asm mov ecx, dword ptr [ebp + 0x54]
  __asm mov eax, edx
  __asm sub ecx, edx
  __asm and ecx, 0xfffffffc
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x16
  __asm mov edx, dword ptr [edx - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x76 __asm _emit 0x06
  __asm call dword ptr [LAB_122fc888]
  __asm push ecx
  __asm push edx
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x4c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x50 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x54 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea ecx, [ebp + 0x20]
  __asm mov dword ptr [ebp + 0x44], LAB_118bc9b4
  __asm call LAB_10021b66
  __asm lea ecx, [ebp]
  __asm call LAB_10021b66
  __asm lea ecx, [ebp - 0x2c]
  __asm call LAB_10021b66
  __asm lea ecx, [ebp - 0x4c]
  __asm call LAB_10021b66
  __asm lea ecx, [ebp - 0x6c]
  __asm call LAB_10021b66
  __asm lea ecx, [ebp - 0x8c]
  __asm call LAB_10021b66
  __asm mov eax, ebx
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm lea esp, [ebp + 0x70]
  __asm pop ebp
  __asm ret 4
}




// Reference entry 10612cd0; body size 414 bytes.
#line 1 "ENTRY_10612cd0"

__declspec(naked) void FUN_10612cd0(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_115bca2d
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 0x64
  __asm push esi
  __asm push edi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov esi, ecx
  __asm mov eax, dword ptr [LAB_121a2188]
  __asm lea ecx, [ebp - 0x70]
  __asm mov dword ptr [ebp - 0x10], eax
  __asm lea eax, [ebp - 0x10]
  __asm push eax
  __asm call LAB_100121fc
  __asm mov eax, dword ptr [LAB_121a2158]
  __asm lea ecx, [ebp - 0x50]
  __asm mov dword ptr [ebp - 0x10], eax
  __asm lea eax, [ebp - 0x10]
  __asm push eax
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_100121fc
  __asm xorps xmm0, xmm0
  __asm mov dword ptr [ebp - 0x30], LAB_118bc9e0
  __asm movups xmmword ptr [ebp - 0x2c], xmm0
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xe4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xe8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0xec __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, esi
  __asm mov byte ptr [ebp - 4], 2
  __asm call LAB_1000d2bf
  __asm mov esi, dword ptr [ebp - 0x30]
  __asm lea ecx, [ebp - 0x50]
  __asm push ecx
  __asm lea ecx, [eax + 0xf4]
  __asm call LAB_1003a6cf
  __asm movzx eax, al
  __asm lea ecx, [ebp - 0x30]
  __asm push eax
  __asm call dword ptr [esi + 8]
  __asm lea ecx, [ebp - 0x70]
  __asm push ecx
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 0x10]
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov ecx, dword ptr [ebp + 8]
  __asm push eax
  __asm call LAB_1000c54a
  __asm mov esi, dword ptr [ebp - 0x1c]
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x5f
  __asm mov edi, dword ptr [ebp - 0x18]
  __asm cmp esi, edi
  __asm _emit 0x74 __asm _emit 0x17 __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x44 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 0
  __asm call dword ptr [eax]
  __asm add esi, 0x20
  __asm cmp esi, edi
  __asm _emit 0x75 __asm _emit 0xf1
  __asm mov esi, dword ptr [ebp - 0x1c]
  __asm mov ecx, dword ptr [ebp - 0x14]
  __asm mov eax, esi
  __asm sub ecx, esi
  __asm and ecx, 0xffffffe0
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x10
  __asm mov esi, dword ptr [esi - 4]
  __asm add ecx, 0x23
  __asm sub eax, esi
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x77 __asm _emit 0x48
  __asm push ecx
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xe4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xe8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0xec __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov edx, dword ptr [ebp - 0x28]
  __asm test edx, edx
  __asm _emit 0x74 __asm _emit 0x47
  __asm mov ecx, dword ptr [ebp - 0x20]
  __asm mov eax, edx
  __asm sub ecx, edx
  __asm and ecx, 0xfffffffc
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x16
  __asm mov edx, dword ptr [edx - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x76 __asm _emit 0x06
  __asm call dword ptr [LAB_122fc888]
  __asm push ecx
  __asm push edx
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xd8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xdc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0xe0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea ecx, [ebp - 0x50]
  __asm mov dword ptr [ebp - 0x30], LAB_118bc9b4
  __asm call LAB_10021b66
  __asm lea ecx, [ebp - 0x70]
  __asm call LAB_10021b66
  __asm mov eax, dword ptr [ebp + 8]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret 4
}




// Reference entry 10612ee0; body size 580 bytes.
#line 1 "ENTRY_10612ee0"

__declspec(naked) void FUN_10612ee0(void)

{
  __asm push ebp
  __asm lea ebp, [esp - 0x68]
  __asm sub esp, 0x68
  __asm push -1
  __asm push offset LAB_115bca95
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 0x40
  __asm push esi
  __asm push edi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov esi, ecx
  __asm call LAB_1000d2bf
  __asm lea ecx, [eax + 0x100]
  __asm call LAB_10011153
  __asm mov edx, dword ptr [LAB_121a2170]
  __asm lea ecx, [ebp - 0x4c]
  __asm mov edi, eax
  __asm mov dword ptr [ebp + 0x64], edx
  __asm lea eax, [ebp + 0x64]
  __asm push eax
  __asm call LAB_100121fc
  __asm mov ecx, dword ptr [LAB_121a2168]
  __asm lea eax, [ebp + 0x64]
  __asm mov dword ptr [ebp + 0x64], ecx
  __asm lea ecx, [ebp - 0x2c]
  __asm push eax
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_100121fc
  __asm mov eax, dword ptr [LAB_121a2174]
  __asm lea ecx, [ebp]
  __asm mov dword ptr [ebp + 0x64], eax
  __asm lea eax, [ebp + 0x64]
  __asm push eax
  __asm mov byte ptr [ebp - 4], 1
  __asm call LAB_100121fc
  __asm lea eax, [ebp + 0x64]
  __asm mov byte ptr [ebp - 4], 2
  __asm push eax
  __asm lea ecx, [ebp + 0x20]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x64 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_100121fc
  __asm xorps xmm0, xmm0
  __asm mov dword ptr [ebp + 0x44], LAB_118bc9e0
  __asm movups xmmword ptr [ebp + 0x48], xmm0
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x58 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x5c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x60 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, esi
  __asm mov byte ptr [ebp - 4], 4
  __asm call LAB_1000d2bf
  __asm lea ecx, [ebp + 0x40]
  __asm push ecx
  __asm lea ecx, [eax + 0xe8]
  __asm call LAB_10090cd2
  __asm cmp dword ptr [eax], 0
  __asm lea ecx, [ebp + 0x20]
  __asm push ecx
  __asm sete al
  __asm mov byte ptr [ebp - 4], 5
  __asm movzx eax, al
  __asm lea ecx, [ebp + 0x44]
  __asm push eax
  __asm mov eax, dword ptr [ebp + 0x44]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp]
  __asm cmp edi, 4
  __asm push ecx
  __asm sete cl
  __asm mov edx, dword ptr [eax]
  __asm movzx ecx, cl
  __asm push ecx
  __asm mov ecx, eax
  __asm call dword ptr [edx + 0xc]
  __asm lea ecx, [ebp - 0x2c]
  __asm cmp edi, 1
  __asm push ecx
  __asm sete cl
  __asm mov edx, dword ptr [eax]
  __asm movzx ecx, cl
  __asm push ecx
  __asm mov ecx, eax
  __asm call dword ptr [edx + 0xc]
  __asm lea ecx, [ebp - 0x4c]
  __asm cmp edi, 2
  __asm push ecx
  __asm mov edx, dword ptr [eax]
  __asm sete cl
  __asm movzx ecx, cl
  __asm push ecx
  __asm mov ecx, eax
  __asm call dword ptr [edx + 0xc]
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov ecx, dword ptr [ebp + 0x70]
  __asm push eax
  __asm call LAB_1000c54a
  __asm mov ecx, dword ptr [ebp + 0x40]
  __asm mov byte ptr [ebp - 4], 6
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov esi, dword ptr [ebp + 0x58]
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x5a
  __asm mov edi, dword ptr [ebp + 0x5c]
  __asm cmp esi, edi
  __asm _emit 0x74 __asm _emit 0x12
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 0
  __asm call dword ptr [eax]
  __asm add esi, 0x20
  __asm cmp esi, edi
  __asm _emit 0x75 __asm _emit 0xf1
  __asm mov esi, dword ptr [ebp + 0x58]
  __asm mov ecx, dword ptr [ebp + 0x60]
  __asm mov eax, esi
  __asm sub ecx, esi
  __asm and ecx, 0xffffffe0
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x10
  __asm mov esi, dword ptr [esi - 4]
  __asm add ecx, 0x23
  __asm sub eax, esi
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x77 __asm _emit 0x48
  __asm push ecx
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x58 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x5c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x60 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov edx, dword ptr [ebp + 0x4c]
  __asm test edx, edx
  __asm _emit 0x74 __asm _emit 0x47
  __asm mov ecx, dword ptr [ebp + 0x54]
  __asm mov eax, edx
  __asm sub ecx, edx
  __asm and ecx, 0xfffffffc
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x16
  __asm mov edx, dword ptr [edx - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x76 __asm _emit 0x06
  __asm call dword ptr [LAB_122fc888]
  __asm push ecx
  __asm push edx
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x4c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x50 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x54 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea ecx, [ebp + 0x20]
  __asm mov dword ptr [ebp + 0x44], LAB_118bc9b4
  __asm call LAB_10021b66
  __asm lea ecx, [ebp]
  __asm call LAB_10021b66
  __asm lea ecx, [ebp - 0x2c]
  __asm call LAB_10021b66
  __asm lea ecx, [ebp - 0x4c]
  __asm call LAB_10021b66
  __asm mov eax, dword ptr [ebp + 0x70]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm lea esp, [ebp + 0x68]
  __asm pop ebp
  __asm ret 4
}




// Reference entry 106131c0; body size 1323 bytes.
#line 1 "ENTRY_106131c0"

__declspec(naked) void FUN_106131c0(void)

{
  __asm push ebp
  __asm lea ebp, [esp - 0x70]
  __asm sub esp, 0x70
  __asm push -1
  __asm push offset LAB_115bcb51
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 0xe0
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm mov dword ptr [ebp + 0x6c], eax
  __asm push ebx
  __asm push esi
  __asm push edi
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ebx, ecx
  __asm mov dword ptr [ebp + 0x44], ebx
  __asm mov eax, dword ptr [ebp + 0x78]
  __asm mov dword ptr [ebp], eax
  __asm mov dword ptr [ebp + 0x24], eax
  __asm mov byte ptr [ebp + 0x2c], 0
  __asm call LAB_1000d2bf
  __asm lea ecx, [eax + 0x100]
  __asm call LAB_10011153
  __asm lea ecx, [ebx + 0x10]
  __asm mov esi, eax
  __asm call LAB_1000ba05
  __asm mov ecx, eax
  __asm call LAB_10086381
  __asm cmp eax, dword ptr [LAB_121a216c]
  __asm mov ecx, ebx
  __asm sete byte ptr [ebp + 0x3f]
  __asm call LAB_10064623
  __asm mov edi, 1
  __asm cmp byte ptr [eax + 0x118], 0
  __asm _emit 0x74 __asm _emit 0x18
  __asm cmp esi, 4
  __asm _emit 0x74 __asm _emit 0x05
  __asm cmp esi, 2
  __asm _emit 0x75 __asm _emit 0x0e
  __asm movzx eax, byte ptr [ebp + 0x2c]
  __asm cmp byte ptr [ebp + 0x3f], 0
  __asm cmove eax, edi
  __asm mov byte ptr [ebp + 0x2c], al
  __asm mov ecx, ebx
  __asm mov byte ptr [ebp + 0x28], 0
  __asm call LAB_10064623
  __asm cmp byte ptr [eax + 0x118], 0
  __asm _emit 0x75 __asm _emit 0x41
  __asm mov ecx, ebx
  __asm call LAB_1000d2bf
  __asm lea ecx, [ebp + 0x40]
  __asm push ecx
  __asm lea ecx, [eax + 0xe8]
  __asm call LAB_10090cd2
  __asm mov ecx, dword ptr [eax]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_100420be
  __asm mov byte ptr [ebp + 0x28], al
  __asm mov ecx, dword ptr [ebp + 0x40]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
  __asm mov ecx, ebx
  __asm mov byte ptr [ebp + 0x34], 0
  __asm call LAB_10064623
  __asm cmp byte ptr [eax + 0x118], 0
  __asm _emit 0x74 __asm _emit 0x4f
  __asm mov ecx, ebx
  __asm call LAB_1000d2bf
  __asm lea ecx, [ebp + 0x40]
  __asm push ecx
  __asm lea ecx, [eax + 0xe8]
  __asm call LAB_10090cd2
  __asm mov ecx, dword ptr [eax]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x02 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1003d9dd
  __asm mov esi, eax
  __asm mov ecx, dword ptr [ebp + 0x40]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x03 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 8]
  __asm mov eax, dword ptr [ebp + 0x34]
  __asm cmp esi, 0x19
  __asm movzx eax, al
  __asm cmovge eax, edi
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
  __asm mov dword ptr [ebp + 0x34], eax
  __asm mov ecx, ebx
  __asm mov byte ptr [ebp + 0x30], 0
  __asm call LAB_10064623
  __asm cmp byte ptr [eax + 0x118], 0
  __asm je LAB_106133d7
  __asm mov ecx, ebx
  __asm call LAB_1000d2bf
  __asm lea ecx, [ebp + 0x24]
  __asm push ecx
  __asm lea ecx, [eax + 0xe8]
  __asm call LAB_10090cd2
  __asm lea ecx, [ebp + 0x40]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push ecx
  __asm mov ecx, dword ptr [eax]
  __asm call LAB_1002097d
  __asm mov ecx, dword ptr [ebp + 0x24]
  __asm mov byte ptr [ebp - 4], 7
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, ebx
  __asm mov byte ptr [ebp - 4], 6
  __asm call LAB_1000d2bf
  __asm lea eax, [ebp + 0x48]
  __asm mov byte ptr [ebp + 0x48], 0
  __asm push 0x21
  __asm push eax
  __asm call LAB_1004ec47
  __asm mov ecx, eax
  __asm call LAB_1006dabb
  __asm lea eax, [ebp + 0x48]
  __asm push eax
  __asm lea ecx, [ebp + 0x38]
  __asm call LAB_1005273e
  __asm lea eax, [ebp + 0x38]
  __asm mov byte ptr [ebp - 4], 8
  __asm push eax
  __asm lea ecx, [ebp + 0x40]
  __asm call LAB_10049a94
  __asm mov bl, al
  __asm lea ecx, [ebp + 0x38]
  __asm mov byte ptr [ebp - 4], 9
  __asm call LAB_1005c315
  __asm mov eax, dword ptr [ebp + 0x30]
  __asm test bl, bl
  __asm movzx eax, al
  __asm cmovne eax, edi
  __asm mov dword ptr [ebp + 0x30], eax
  __asm lea ecx, [ebp + 0x40]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x0a __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm mov ebx, dword ptr [ebp + 0x44]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
  __asm mov eax, dword ptr [LAB_121a2184]
  __asm lea ecx, [ebp + 0x48]
  __asm mov dword ptr [ebp + 0x44], eax
  __asm lea eax, [ebp + 0x44]
  __asm push eax
  __asm call LAB_100121fc
  __asm mov eax, dword ptr [LAB_121a214c]
  __asm lea ecx, [ebp - 0xec]
  __asm mov dword ptr [ebp + 0x44], eax
  __asm lea eax, [ebp + 0x44]
  __asm push eax
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x0b __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_100121fc
  __asm mov ecx, ebx
  __asm mov byte ptr [ebp - 4], 0xc
  __asm call LAB_10064623
  __asm cmp byte ptr [eax + 0x118], 0
  __asm _emit 0x74 __asm _emit 0x0a
  __asm cmp byte ptr [ebp + 0x34], 0
  __asm mov byte ptr [ebp + 0x38], 1
  __asm _emit 0x74 __asm _emit 0x04
  __asm mov byte ptr [ebp + 0x38], 0
  __asm mov eax, dword ptr [LAB_121a2150]
  __asm lea ecx, [ebp - 0xcc]
  __asm mov dword ptr [ebp + 0x44], eax
  __asm lea eax, [ebp + 0x44]
  __asm push eax
  __asm call LAB_100121fc
  __asm mov ecx, ebx
  __asm mov byte ptr [ebp - 4], 0xd
  __asm call LAB_10064623
  __asm cmp byte ptr [eax + 0x118], 0
  __asm _emit 0x74 __asm _emit 0x0a
  __asm cmp byte ptr [ebp + 0x30], 0
  __asm mov byte ptr [ebp + 0x40], 1
  __asm _emit 0x74 __asm _emit 0x04
  __asm mov byte ptr [ebp + 0x40], 0
  __asm mov eax, dword ptr [LAB_121a218c]
  __asm lea ecx, [ebp - 0xac]
  __asm mov dword ptr [ebp + 0x44], eax
  __asm lea eax, [ebp + 0x44]
  __asm push eax
  __asm call LAB_100121fc
  __asm mov eax, dword ptr [LAB_121a217c]
  __asm lea ecx, [ebp - 0x8c]
  __asm mov dword ptr [ebp + 0x44], eax
  __asm lea eax, [ebp + 0x44]
  __asm push eax
  __asm mov byte ptr [ebp - 4], 0xe
  __asm call LAB_100121fc
  __asm mov eax, dword ptr [LAB_121a218c]
  __asm lea ecx, [ebp - 0x6c]
  __asm mov dword ptr [ebp + 0x44], eax
  __asm lea eax, [ebp + 0x44]
  __asm push eax
  __asm mov byte ptr [ebp - 4], 0xf
  __asm call LAB_100121fc
  __asm mov eax, dword ptr [LAB_121a2158]
  __asm lea ecx, [ebp - 0x4c]
  __asm mov dword ptr [ebp + 0x44], eax
  __asm lea eax, [ebp + 0x44]
  __asm push eax
  __asm mov byte ptr [ebp - 4], 0x10
  __asm call LAB_100121fc
  __asm mov eax, dword ptr [LAB_121a2178]
  __asm lea ecx, [ebp - 0x2c]
  __asm mov dword ptr [ebp + 0x44], eax
  __asm lea eax, [ebp + 0x44]
  __asm push eax
  __asm mov byte ptr [ebp - 4], 0x11
  __asm call LAB_100121fc
  __asm xorps xmm0, xmm0
  __asm mov dword ptr [ebp + 4], LAB_118bc9e0
  __asm movups xmmword ptr [ebp + 8], xmm0
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x1c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x20 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea eax, [ebp - 0x2c]
  __asm mov byte ptr [ebp - 4], 0x13
  __asm push eax
  __asm push dword ptr [ebp + 0x2c]
  __asm lea ecx, [ebp + 4]
  __asm call LAB_100974ab
  __asm mov ecx, ebx
  __asm mov edi, eax
  __asm call LAB_1000d2bf
  __asm mov esi, dword ptr [edi]
  __asm lea ecx, [ebp - 0x4c]
  __asm push ecx
  __asm lea ecx, [eax + 0xf4]
  __asm call LAB_1003a6cf
  __asm movzx eax, al
  __asm mov ecx, edi
  __asm push eax
  __asm call dword ptr [esi + 0xc]
  __asm mov ecx, ebx
  __asm mov esi, eax
  __asm call LAB_10064623
  __asm mov edx, dword ptr [esi]
  __asm lea ecx, [ebp - 0x6c]
  __asm push ecx
  __asm movzx ecx, byte ptr [eax + 0x11c]
  __asm push ecx
  __asm mov ecx, esi
  __asm call dword ptr [edx + 0xc]
  __asm lea ecx, [ebp - 0x8c]
  __asm push ecx
  __asm push dword ptr [ebp + 0x28]
  __asm mov edx, dword ptr [eax]
  __asm mov ecx, eax
  __asm call dword ptr [edx + 0xc]
  __asm mov esi, eax
  __asm mov ecx, ebx
  __asm call LAB_10064623
  __asm mov edx, dword ptr [esi]
  __asm lea ecx, [ebp - 0xac]
  __asm push ecx
  __asm cmp byte ptr [eax + 0x118], 0
  __asm sete cl
  __asm movzx ecx, cl
  __asm push ecx
  __asm mov ecx, esi
  __asm call dword ptr [edx + 0xc]
  __asm lea ecx, [ebp - 0xcc]
  __asm push ecx
  __asm push dword ptr [ebp + 0x40]
  __asm mov edx, dword ptr [eax]
  __asm mov ecx, eax
  __asm call dword ptr [edx + 0xc]
  __asm lea ecx, [ebp - 0xec]
  __asm push ecx
  __asm push dword ptr [ebp + 0x38]
  __asm mov edx, dword ptr [eax]
  __asm mov ecx, eax
  __asm call dword ptr [edx + 0xc]
  __asm lea ecx, [ebp + 0x48]
  __asm push ecx
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 0x10]
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov ebx, dword ptr [ebp]
  __asm mov ecx, ebx
  __asm push eax
  __asm call LAB_1000c54a
  __asm mov esi, dword ptr [ebp + 0x18]
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x5a
  __asm mov edi, dword ptr [ebp + 0x1c]
  __asm cmp esi, edi
  __asm _emit 0x74 __asm _emit 0x12
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 0
  __asm call dword ptr [eax]
  __asm add esi, 0x20
  __asm cmp esi, edi
  __asm _emit 0x75 __asm _emit 0xf1
  __asm mov esi, dword ptr [ebp + 0x18]
  __asm mov ecx, dword ptr [ebp + 0x20]
  __asm mov eax, esi
  __asm sub ecx, esi
  __asm and ecx, 0xffffffe0
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x10
  __asm mov esi, dword ptr [esi - 4]
  __asm add ecx, 0x23
  __asm sub eax, esi
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x77 __asm _emit 0x48
  __asm push ecx
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x1c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x20 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov edx, dword ptr [ebp + 0xc]
  __asm test edx, edx
  __asm _emit 0x74 __asm _emit 0x47
  __asm mov ecx, dword ptr [ebp + 0x14]
  __asm mov eax, edx
  __asm sub ecx, edx
  __asm and ecx, 0xfffffffc
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x16
  __asm mov edx, dword ptr [edx - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x76 __asm _emit 0x06
  __asm call dword ptr [LAB_122fc888]
  __asm push ecx
  __asm push edx
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea ecx, [ebp - 0x2c]
  __asm mov dword ptr [ebp + 4], LAB_118bc9b4
  __asm call LAB_10021b66
  __asm lea ecx, [ebp - 0x4c]
  __asm call LAB_10021b66
  __asm lea ecx, [ebp - 0x6c]
  __asm call LAB_10021b66
  __asm lea ecx, [ebp - 0x8c]
  __asm call LAB_10021b66
  __asm lea ecx, [ebp - 0xac]
  __asm call LAB_10021b66
  __asm lea ecx, [ebp - 0xcc]
  __asm call LAB_10021b66
  __asm lea ecx, [ebp - 0xec]
  __asm call LAB_10021b66
  __asm lea ecx, [ebp + 0x48]
  __asm call LAB_10021b66
  __asm mov eax, ebx
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm mov ecx, dword ptr [ebp + 0x6c]
  __asm xor ecx, ebp
  __asm call LAB_100382f3
  __asm lea esp, [ebp + 0x70]
  __asm pop ebp
  __asm ret 4
}




// Reference entry 10613840; body size 504 bytes.
#line 1 "ENTRY_10613840"

__declspec(naked) void FUN_10613840(void)

{
  __asm push ebp
  __asm lea ebp, [esp - 0x64]
  __asm sub esp, 0x64
  __asm push -1
  __asm push offset LAB_115bcbd5
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 0x20
  __asm push esi
  __asm push edi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov esi, ecx
  __asm call LAB_1000d2bf
  __asm lea ecx, [eax + 0x10c]
  __asm call LAB_100389b0
  __asm lea ecx, [ebp - 0x2c]
  __asm mov edx, dword ptr [eax + 4]
  __asm sub edx, dword ptr [eax]
  __asm mov eax, 0x6bca1af3
  __asm imul edx
  __asm mov eax, dword ptr [LAB_121a2164]
  __asm sar edx, 5
  __asm mov edi, edx
  __asm mov dword ptr [ebp + 0x60], eax
  __asm lea eax, [ebp + 0x60]
  __asm shr edi, 0x1f
  __asm push eax
  __asm add edi, edx
  __asm call LAB_100121fc
  __asm lea eax, [ebp + 0x60]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm lea ecx, [ebp]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x60 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_100121fc
  __asm mov eax, dword ptr [LAB_121a2158]
  __asm lea ecx, [ebp + 0x20]
  __asm mov dword ptr [ebp + 0x60], eax
  __asm lea eax, [ebp + 0x60]
  __asm push eax
  __asm mov byte ptr [ebp - 4], 1
  __asm call LAB_100121fc
  __asm xorps xmm0, xmm0
  __asm mov dword ptr [ebp + 0x40], LAB_118bc9e0
  __asm movups xmmword ptr [ebp + 0x44], xmm0
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x54 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x58 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x5c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, esi
  __asm mov byte ptr [ebp - 4], 3
  __asm call LAB_1000d2bf
  __asm mov esi, dword ptr [ebp + 0x40]
  __asm lea ecx, [ebp + 0x20]
  __asm push ecx
  __asm lea ecx, [eax + 0xf4]
  __asm call LAB_1003a6cf
  __asm movzx eax, al
  __asm lea ecx, [ebp + 0x40]
  __asm push eax
  __asm call dword ptr [esi + 8]
  __asm lea ecx, [ebp]
  __asm test edi, edi
  __asm push ecx
  __asm setle cl
  __asm mov edx, dword ptr [eax]
  __asm movzx ecx, cl
  __asm push ecx
  __asm mov ecx, eax
  __asm call dword ptr [edx + 0xc]
  __asm lea ecx, [ebp - 0x2c]
  __asm push ecx
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 0x10]
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov ecx, dword ptr [ebp + 0x6c]
  __asm push eax
  __asm call LAB_1000c54a
  __asm mov esi, dword ptr [ebp + 0x54]
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x5a
  __asm mov edi, dword ptr [ebp + 0x58]
  __asm cmp esi, edi
  __asm _emit 0x74 __asm _emit 0x12
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 0
  __asm call dword ptr [eax]
  __asm add esi, 0x20
  __asm cmp esi, edi
  __asm _emit 0x75 __asm _emit 0xf1
  __asm mov esi, dword ptr [ebp + 0x54]
  __asm mov ecx, dword ptr [ebp + 0x5c]
  __asm mov eax, esi
  __asm sub ecx, esi
  __asm and ecx, 0xffffffe0
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x10
  __asm mov esi, dword ptr [esi - 4]
  __asm add ecx, 0x23
  __asm sub eax, esi
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x77 __asm _emit 0x48
  __asm push ecx
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x54 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x58 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x5c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov edx, dword ptr [ebp + 0x48]
  __asm test edx, edx
  __asm _emit 0x74 __asm _emit 0x47
  __asm mov ecx, dword ptr [ebp + 0x50]
  __asm mov eax, edx
  __asm sub ecx, edx
  __asm and ecx, 0xfffffffc
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x16
  __asm mov edx, dword ptr [edx - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x76 __asm _emit 0x06
  __asm call dword ptr [LAB_122fc888]
  __asm push ecx
  __asm push edx
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x48 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x4c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x50 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea ecx, [ebp + 0x20]
  __asm mov dword ptr [ebp + 0x40], LAB_118bc9b4
  __asm call LAB_10021b66
  __asm lea ecx, [ebp]
  __asm call LAB_10021b66
  __asm lea ecx, [ebp - 0x2c]
  __asm call LAB_10021b66
  __asm mov eax, dword ptr [ebp + 0x6c]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm lea esp, [ebp + 0x64]
  __asm pop ebp
  __asm ret 4
}




// Reference entry 10613ac0; body size 344 bytes.
#line 1 "ENTRY_10613ac0"

__declspec(naked) void FUN_10613ac0(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_115bcc25
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 0x44
  __asm push esi
  __asm push edi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea eax, [ebp - 0x10]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xf0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm lea ecx, [ebp - 0x50]
  __asm call LAB_100121fc
  __asm xorps xmm0, xmm0
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ebp - 0x30], LAB_118bc9e0
  __asm movups xmmword ptr [ebp - 0x2c], xmm0
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xe4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xe8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0xec __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea eax, [ebp - 0x50]
  __asm mov byte ptr [ebp - 4], 1
  __asm push eax
  __asm lea ecx, [ebp - 0x30]
  __asm call LAB_10039ef5
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov ecx, dword ptr [ebp + 8]
  __asm push eax
  __asm call LAB_1000c54a
  __asm mov esi, dword ptr [ebp - 0x1c]
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x5a
  __asm mov edi, dword ptr [ebp - 0x18]
  __asm cmp esi, edi
  __asm _emit 0x74 __asm _emit 0x12
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 0
  __asm call dword ptr [eax]
  __asm add esi, 0x20
  __asm cmp esi, edi
  __asm _emit 0x75 __asm _emit 0xf1
  __asm mov esi, dword ptr [ebp - 0x1c]
  __asm mov ecx, dword ptr [ebp - 0x14]
  __asm mov eax, esi
  __asm sub ecx, esi
  __asm and ecx, 0xffffffe0
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x10
  __asm mov esi, dword ptr [esi - 4]
  __asm add ecx, 0x23
  __asm sub eax, esi
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x77 __asm _emit 0x48
  __asm push ecx
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xe4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xe8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0xec __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov edx, dword ptr [ebp - 0x28]
  __asm test edx, edx
  __asm _emit 0x74 __asm _emit 0x47
  __asm mov ecx, dword ptr [ebp - 0x20]
  __asm mov eax, edx
  __asm sub ecx, edx
  __asm and ecx, 0xfffffffc
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x16
  __asm mov edx, dword ptr [edx - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x76 __asm _emit 0x06
  __asm call dword ptr [LAB_122fc888]
  __asm push ecx
  __asm push edx
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xd8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xdc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0xe0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea ecx, [ebp - 0x50]
  __asm mov dword ptr [ebp - 0x30], LAB_118bc9b4
  __asm call LAB_10021b66
  __asm mov eax, dword ptr [ebp + 8]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret 4
}




// Reference entry 10613ca0; body size 1264 bytes.
#line 1 "ENTRY_10613ca0"

__declspec(naked) void FUN_10613ca0(void)

{
  __asm push ebp
  __asm lea ebp, [esp - 0x60]
  __asm sub esp, 0x60
  __asm push -1
  __asm push offset LAB_115bcce5
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 0x164
  __asm push esi
  __asm push edi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov edi, ecx
  __asm push offset LAB_11883704
  __asm lea ecx, [ebp + 0x58]
  __asm call LAB_1005273e
  __asm push dword ptr [LAB_121a2160]
  __asm lea ecx, [ebp - 0x28]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10088a0f
  __asm mov esi, eax
  __asm lea eax, [ebp + 0x58]
  __asm mov byte ptr [ebp - 4], 1
  __asm push eax
  __asm lea ecx, [ebp - 0x170]
  __asm call LAB_1000269e
  __asm lea ecx, [esi + 4]
  __asm mov byte ptr [ebp - 4], 2
  __asm push ecx
  __asm lea ecx, [ebp - 0xc4]
  __asm push ecx
  __asm mov ecx, eax
  __asm call LAB_10047b68
  __asm push eax
  __asm lea ecx, [ebp - 0x124]
  __asm mov byte ptr [ebp - 4], 3
  __asm call LAB_10014e57
  __asm push offset LAB_118bd5c0
  __asm lea ecx, [ebp + 0x5c]
  __asm mov byte ptr [ebp - 4], 4
  __asm call LAB_1005273e
  __asm push dword ptr [LAB_121a2128]
  __asm lea ecx, [ebp]
  __asm mov byte ptr [ebp - 4], 5
  __asm call LAB_10088a0f
  __asm mov esi, eax
  __asm lea eax, [ebp + 0x5c]
  __asm mov byte ptr [ebp - 4], 6
  __asm push eax
  __asm lea ecx, [ebp - 0x158]
  __asm call LAB_1000269e
  __asm lea ecx, [esi + 4]
  __asm mov byte ptr [ebp - 4], 7
  __asm push ecx
  __asm lea ecx, [ebp - 0x90]
  __asm push ecx
  __asm mov ecx, eax
  __asm call LAB_10047b68
  __asm push eax
  __asm lea ecx, [ebp - 0x104]
  __asm mov byte ptr [ebp - 4], 8
  __asm call LAB_10014e57
  __asm lea ecx, [ebp + 0x1c]
  __asm mov byte ptr [ebp - 4], 9
  __asm call LAB_10061455
  __asm mov esi, eax
  __asm mov ecx, edi
  __asm mov byte ptr [ebp - 4], 0xa
  __asm call LAB_1000d2bf
  __asm lea ecx, [ebp - 0x140]
  __asm push ecx
  __asm lea ecx, [eax + 0xf4]
  __asm call LAB_1002c94e
  __asm lea ecx, [esi + 4]
  __asm mov byte ptr [ebp - 4], 0xb
  __asm push ecx
  __asm lea ecx, [ebp - 0x5c]
  __asm push ecx
  __asm mov ecx, eax
  __asm call LAB_1004f4c1
  __asm mov byte ptr [ebp - 4], 0xc
  __asm push eax
  __asm lea ecx, [ebp - 0xe4]
  __asm call LAB_10014e57
  __asm xorps xmm0, xmm0
  __asm mov dword ptr [ebp + 0x38], LAB_118bccd4
  __asm movups xmmword ptr [ebp + 0x3c], xmm0
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x4c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x50 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x54 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea eax, [ebp - 0xe4]
  __asm mov byte ptr [ebp - 4], 0xe
  __asm push eax
  __asm lea ecx, [ebp + 0x38]
  __asm call LAB_1001adca
  __asm lea ecx, [ebp - 0x104]
  __asm push ecx
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 8]
  __asm lea ecx, [ebp - 0x124]
  __asm push ecx
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 8]
  __asm mov ecx, dword ptr [ebp + 0x68]
  __asm push eax
  __asm call LAB_100904ad
  __asm mov esi, dword ptr [ebp + 0x4c]
  __asm mov byte ptr [ebp - 4], 0xd
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x5a
  __asm mov edi, dword ptr [ebp + 0x50]
  __asm cmp esi, edi
  __asm _emit 0x74 __asm _emit 0x12
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 0
  __asm call dword ptr [eax]
  __asm add esi, 0x20
  __asm cmp esi, edi
  __asm _emit 0x75 __asm _emit 0xf1
  __asm mov esi, dword ptr [ebp + 0x4c]
  __asm mov ecx, dword ptr [ebp + 0x54]
  __asm mov eax, esi
  __asm sub ecx, esi
  __asm and ecx, 0xffffffe0
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x10
  __asm mov esi, dword ptr [esi - 4]
  __asm add ecx, 0x23
  __asm sub eax, esi
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x77 __asm _emit 0x71
  __asm push ecx
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x4c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x50 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x54 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov esi, dword ptr [ebp + 0x40]
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x70
  __asm mov edi, dword ptr [ebp + 0x44]
  __asm cmp esi, edi
  __asm _emit 0x74 __asm _emit 0x11
  __asm mov ecx, esi
  __asm call LAB_10002699
  __asm add esi, 0x34
  __asm cmp esi, edi
  __asm _emit 0x75 __asm _emit 0xf2
  __asm mov esi, dword ptr [ebp + 0x40]
  __asm mov ecx, dword ptr [ebp + 0x48]
  __asm mov eax, 0x4ec4ec4f
  __asm sub ecx, esi
  __asm imul ecx
  __asm sar edx, 4
  __asm mov eax, edx
  __asm shr eax, 0x1f
  __asm add eax, edx
  __asm imul ecx, eax, 0x34
  __asm mov eax, esi
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x16
  __asm mov esi, dword ptr [esi - 4]
  __asm add ecx, 0x23
  __asm sub eax, esi
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x76 __asm _emit 0x06
  __asm call dword ptr [LAB_122fc888]
  __asm push ecx
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x40 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x44 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x48 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea ecx, [ebp - 0xd0]
  __asm mov dword ptr [ebp + 0x38], LAB_118bccb0
  __asm call LAB_1007e695
  __asm lea ecx, [ebp - 0xdc]
  __asm call LAB_1005600f
  __asm mov dword ptr [ebp - 0xe4], LAB_118bccb0
  __asm mov ecx, dword ptr [ebp - 0x2c]
  __asm mov byte ptr [ebp - 4], 0xf
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xd0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xd4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0x34]
  __asm mov byte ptr [ebp - 4], 0x10
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xc8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xcc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp - 0x4c]
  __asm call LAB_10005f9c
  __asm lea ecx, [ebp - 0x58]
  __asm call LAB_1005de7c
  __asm lea ecx, [ebp - 0x130]
  __asm call LAB_10005f9c
  __asm lea ecx, [ebp - 0x13c]
  __asm call LAB_1005de7c
  __asm mov ecx, dword ptr [ebp + 0x34]
  __asm mov byte ptr [ebp - 4], 0x11
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x30 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x34 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp + 0x2c]
  __asm mov byte ptr [ebp - 4], 0x12
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x28 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x2c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp - 0xf0]
  __asm call LAB_1007e695
  __asm lea ecx, [ebp - 0xfc]
  __asm call LAB_1005600f
  __asm mov dword ptr [ebp - 0x104], LAB_118bccb0
  __asm mov ecx, dword ptr [ebp - 0x60]
  __asm mov byte ptr [ebp - 4], 0x13
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x9c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xa0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0x68]
  __asm mov byte ptr [ebp - 4], 0x14
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x94 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x98 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp - 0x80]
  __asm call LAB_10005f9c
  __asm lea ecx, [ebp - 0x8c]
  __asm call LAB_1005de7c
  __asm lea ecx, [ebp - 0x158]
  __asm call LAB_10074c85
  __asm mov ecx, dword ptr [ebp + 0x18]
  __asm mov byte ptr [ebp - 4], 0x15
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp + 0x10]
  __asm mov byte ptr [ebp - 4], 0x16
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp + 0x5c]
  __asm mov byte ptr [ebp - 4], 0x17
  __asm call LAB_1005c315
  __asm lea ecx, [ebp - 0x110]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x5c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1007e695
  __asm lea ecx, [ebp - 0x11c]
  __asm call LAB_1005600f
  __asm mov dword ptr [ebp - 0x124], LAB_118bccb0
  __asm mov ecx, dword ptr [ebp - 0x94]
  __asm mov byte ptr [ebp - 4], 0x18
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x19 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0x68 __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0x6c __asm _emit 0xff
  __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0x9c]
  __asm mov byte ptr [ebp - 4], 0x19
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x19 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0x60 __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0x64 __asm _emit 0xff
  __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp - 0xb4]
  __asm call LAB_10005f9c
  __asm lea ecx, [ebp - 0xc0]
  __asm call LAB_1005de7c
  __asm lea ecx, [ebp - 0x170]
  __asm call LAB_10074c85
  __asm mov ecx, dword ptr [ebp - 0x10]
  __asm mov byte ptr [ebp - 4], 0x1a
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xec __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xf0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0x18]
  __asm mov byte ptr [ebp - 4], 0x1b
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xe4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xe8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 8]
  __asm lea ecx, [ebp + 0x58]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x1c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm mov eax, dword ptr [ebp + 0x68]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm lea esp, [ebp + 0x60]
  __asm pop ebp
  __asm ret 4
}




// Reference entry 106142d0; body size 2452 bytes.
#line 1 "ENTRY_106142d0"

__declspec(naked) void FUN_106142d0(void)

{
  __asm push ebp
  __asm lea ebp, [esp - 0x5c]
  __asm sub esp, 0x5c
  __asm push -1
  __asm push offset LAB_115bce76
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 0x314
  __asm push ebx
  __asm push esi
  __asm push edi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ebx, ecx
  __asm mov dword ptr [ebp + 0x1c], ebx
  __asm call LAB_1000d2bf
  __asm lea ecx, [eax + 0x100]
  __asm call LAB_10011153
  __asm push offset LAB_118be1d8
  __asm lea ecx, [ebp + 0x40]
  __asm mov edi, eax
  __asm call LAB_1005273e
  __asm push dword ptr [LAB_121a2164]
  __asm lea ecx, [ebp - 0x7c]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10088a0f
  __asm mov esi, eax
  __asm lea eax, [ebp + 0x40]
  __asm mov byte ptr [ebp - 4], 1
  __asm push eax
  __asm lea ecx, [ebp - 0x320]
  __asm call LAB_1000269e
  __asm lea ecx, [esi + 4]
  __asm mov byte ptr [ebp - 4], 2
  __asm push ecx
  __asm lea ecx, [ebp - 0x1d0]
  __asm push ecx
  __asm mov ecx, eax
  __asm call LAB_10047b68
  __asm push eax
  __asm lea ecx, [ebp - 0x290]
  __asm mov byte ptr [ebp - 4], 3
  __asm call LAB_10014e57
  __asm push offset LAB_118be1d8
  __asm lea ecx, [ebp + 0x48]
  __asm mov byte ptr [ebp - 4], 4
  __asm call LAB_1005273e
  __asm lea ecx, [ebp - 0x60]
  __asm mov byte ptr [ebp - 4], 5
  __asm call LAB_10061455
  __asm mov esi, eax
  __asm lea eax, [ebp + 0x48]
  __asm mov byte ptr [ebp - 4], 6
  __asm push eax
  __asm lea ecx, [ebp - 0x308]
  __asm call LAB_1000269e
  __asm lea ecx, [esi + 4]
  __asm mov byte ptr [ebp - 4], 7
  __asm push ecx
  __asm lea ecx, [ebp - 0x19c]
  __asm push ecx
  __asm mov ecx, eax
  __asm call LAB_10047b68
  __asm push eax
  __asm lea ecx, [ebp - 0x270]
  __asm mov byte ptr [ebp - 4], 8
  __asm call LAB_10014e57
  __asm push offset LAB_118bcc7c
  __asm lea ecx, [ebp + 0x4c]
  __asm mov byte ptr [ebp - 4], 9
  __asm call LAB_1005273e
  __asm push dword ptr [LAB_121a218c]
  __asm lea ecx, [ebp - 0x44]
  __asm mov byte ptr [ebp - 4], 0xa
  __asm call LAB_10088a0f
  __asm mov esi, eax
  __asm lea eax, [ebp + 0x4c]
  __asm mov byte ptr [ebp - 4], 0xb
  __asm push eax
  __asm lea ecx, [ebp - 0x2f0]
  __asm call LAB_1000269e
  __asm mov byte ptr [ebp - 4], 0xc
  __asm lea ecx, [esi + 4]
  __asm push ecx
  __asm lea ecx, [ebp - 0x168]
  __asm push ecx
  __asm mov ecx, eax
  __asm call LAB_10047b68
  __asm push eax
  __asm lea ecx, [ebp - 0x250]
  __asm mov byte ptr [ebp - 4], 0xd
  __asm call LAB_10014e57
  __asm push offset LAB_118bcc7c
  __asm lea ecx, [ebp + 0x50]
  __asm mov byte ptr [ebp - 4], 0xe
  __asm call LAB_1005273e
  __asm push dword ptr [LAB_121a2174]
  __asm lea ecx, [ebp - 0x28]
  __asm mov byte ptr [ebp - 4], 0xf
  __asm call LAB_10088a0f
  __asm mov esi, eax
  __asm lea eax, [ebp + 0x50]
  __asm mov byte ptr [ebp - 4], 0x10
  __asm push eax
  __asm lea ecx, [ebp - 0x2d8]
  __asm call LAB_1000269e
  __asm lea ecx, [esi + 4]
  __asm mov byte ptr [ebp - 4], 0x11
  __asm push ecx
  __asm lea ecx, [ebp - 0x134]
  __asm push ecx
  __asm mov ecx, eax
  __asm call LAB_10047b68
  __asm push eax
  __asm lea ecx, [ebp - 0x230]
  __asm mov byte ptr [ebp - 4], 0x12
  __asm call LAB_10014e57
  __asm mov byte ptr [ebp - 4], 0x13
  __asm cmp edi, 1
  __asm _emit 0x74 __asm _emit 0x09
  __asm mov byte ptr [ebp + 0x44], 0
  __asm cmp edi, 2
  __asm _emit 0x75 __asm _emit 0x04
  __asm mov byte ptr [ebp + 0x44], 1
  __asm push offset LAB_118bcc7c
  __asm lea ecx, [ebp + 0x54]
  __asm call LAB_1005273e
  __asm push dword ptr [LAB_121a2170]
  __asm lea ecx, [ebp]
  __asm mov byte ptr [ebp - 4], 0x14
  __asm call LAB_10088a0f
  __asm mov esi, eax
  __asm lea eax, [ebp + 0x54]
  __asm mov byte ptr [ebp - 4], 0x15
  __asm push eax
  __asm lea ecx, [ebp - 0x2c0]
  __asm call LAB_1000269e
  __asm lea ecx, [esi + 4]
  __asm mov byte ptr [ebp - 4], 0x16
  __asm push ecx
  __asm lea ecx, [ebp - 0x100]
  __asm push ecx
  __asm mov ecx, eax
  __asm call LAB_10047b68
  __asm push eax
  __asm lea ecx, [ebp - 0x210]
  __asm mov byte ptr [ebp - 4], 0x17
  __asm call LAB_10014e57
  __asm cmp byte ptr [ebx + 0xe0], 0
  __asm mov byte ptr [ebp - 4], 0x18
  __asm _emit 0x74 __asm _emit 0x09
  __asm cmp edi, 2
  __asm _emit 0x75 __asm _emit 0x04
  __asm mov bl, 1
  __asm _emit 0xeb __asm _emit 0x02
  __asm xor bl, bl
  __asm push offset LAB_118bcc7c
  __asm lea ecx, [ebp + 0x58]
  __asm call LAB_1005273e
  __asm push dword ptr [LAB_121a2168]
  __asm lea ecx, [ebp - 0x98]
  __asm mov byte ptr [ebp - 4], 0x19
  __asm call LAB_10088a0f
  __asm mov esi, eax
  __asm lea eax, [ebp + 0x58]
  __asm mov byte ptr [ebp - 4], 0x1a
  __asm push eax
  __asm lea ecx, [ebp - 0x2a8]
  __asm call LAB_1000269e
  __asm lea ecx, [esi + 4]
  __asm mov byte ptr [ebp - 4], 0x1b
  __asm push ecx
  __asm lea ecx, [ebp - 0xcc]
  __asm push ecx
  __asm mov ecx, eax
  __asm call LAB_10047b68
  __asm push eax
  __asm lea ecx, [ebp - 0x1f0]
  __asm mov byte ptr [ebp - 4], 0x1c
  __asm call LAB_10014e57
  __asm mov esi, dword ptr [ebp + 0x1c]
  __asm cmp byte ptr [esi + 0xe0], 0
  __asm _emit 0x74 __asm _emit 0x09
  __asm cmp edi, 1
  __asm _emit 0x75 __asm _emit 0x04
  __asm mov al, 1
  __asm _emit 0xeb __asm _emit 0x02
  __asm xor al, al
  __asm xorps xmm0, xmm0
  __asm mov dword ptr [ebp + 0x20], LAB_118bccd4
  __asm movups xmmword ptr [ebp + 0x24], xmm0
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x34 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x38 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x3c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea ecx, [ebp - 0x1f0]
  __asm mov byte ptr [ebp - 4], 0x1e
  __asm push ecx
  __asm push eax
  __asm lea ecx, [ebp + 0x20]
  __asm call LAB_100606b8
  __asm lea ecx, [ebp - 0x210]
  __asm push ecx
  __asm push ebx
  __asm mov edx, dword ptr [eax]
  __asm mov ecx, eax
  __asm call dword ptr [edx + 0x10]
  __asm lea ecx, [ebp - 0x230]
  __asm push ecx
  __asm push dword ptr [ebp + 0x44]
  __asm mov edx, dword ptr [eax]
  __asm mov ecx, eax
  __asm call dword ptr [edx + 0x10]
  __asm lea ecx, [ebp - 0x250]
  __asm push ecx
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 0x14]
  __asm mov ecx, esi
  __asm mov edi, eax
  __asm call LAB_1000d2bf
  __asm mov esi, dword ptr [edi]
  __asm lea ecx, [ebp - 0x270]
  __asm push ecx
  __asm lea ecx, [eax + 0x10c]
  __asm call LAB_1002b78d
  __asm movzx eax, al
  __asm mov ecx, edi
  __asm push eax
  __asm call dword ptr [esi + 0xc]
  __asm lea ecx, [ebp - 0x290]
  __asm push ecx
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 0x14]
  __asm mov ebx, dword ptr [ebp + 0x64]
  __asm mov ecx, ebx
  __asm push eax
  __asm call LAB_100904ad
  __asm mov esi, dword ptr [ebp + 0x34]
  __asm mov byte ptr [ebp - 4], 0x1d
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x60
  __asm mov edi, dword ptr [ebp + 0x38]
  __asm cmp esi, edi
  __asm _emit 0x74 __asm _emit 0x18
  __asm nop word ptr [eax + eax]
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 0
  __asm call dword ptr [eax]
  __asm add esi, 0x20
  __asm cmp esi, edi
  __asm _emit 0x75 __asm _emit 0xf1
  __asm mov esi, dword ptr [ebp + 0x34]
  __asm mov ecx, dword ptr [ebp + 0x3c]
  __asm mov eax, esi
  __asm sub ecx, esi
  __asm and ecx, 0xffffffe0
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x10
  __asm mov esi, dword ptr [esi - 4]
  __asm add ecx, 0x23
  __asm sub eax, esi
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x77 __asm _emit 0x71
  __asm push ecx
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x34 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x38 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x3c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov esi, dword ptr [ebp + 0x28]
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x70
  __asm mov edi, dword ptr [ebp + 0x2c]
  __asm cmp esi, edi
  __asm _emit 0x74 __asm _emit 0x11
  __asm mov ecx, esi
  __asm call LAB_10002699
  __asm add esi, 0x34
  __asm cmp esi, edi
  __asm _emit 0x75 __asm _emit 0xf2
  __asm mov esi, dword ptr [ebp + 0x28]
  __asm mov ecx, dword ptr [ebp + 0x30]
  __asm mov eax, 0x4ec4ec4f
  __asm sub ecx, esi
  __asm imul ecx
  __asm sar edx, 4
  __asm mov eax, edx
  __asm shr eax, 0x1f
  __asm add eax, edx
  __asm imul ecx, eax, 0x34
  __asm mov eax, esi
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x16
  __asm mov esi, dword ptr [esi - 4]
  __asm add ecx, 0x23
  __asm sub eax, esi
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x76 __asm _emit 0x06
  __asm call dword ptr [LAB_122fc888]
  __asm push ecx
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x28 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x2c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x30 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea ecx, [ebp - 0x1dc]
  __asm mov dword ptr [ebp + 0x20], LAB_118bccb0
  __asm call LAB_1007e695
  __asm lea ecx, [ebp - 0x1e8]
  __asm call LAB_1005600f
  __asm mov dword ptr [ebp - 0x1f0], LAB_118bccb0
  __asm mov ecx, dword ptr [ebp - 0x9c]
  __asm mov byte ptr [ebp - 4], 0x1f
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x19 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0x60 __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0x64 __asm _emit 0xff
  __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xa4]
  __asm mov byte ptr [ebp - 4], 0x20
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x19 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0x58 __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0x5c __asm _emit 0xff
  __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp - 0xbc]
  __asm call LAB_10005f9c
  __asm lea ecx, [ebp - 0xc8]
  __asm call LAB_1005de7c
  __asm lea ecx, [ebp - 0x2a8]
  __asm call LAB_10074c85
  __asm mov ecx, dword ptr [ebp - 0x80]
  __asm mov byte ptr [ebp - 4], 0x21
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x16 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0x7c __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x80 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0x88]
  __asm mov byte ptr [ebp - 4], 0x22
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x19 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0x74 __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0x78 __asm _emit 0xff
  __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp + 0x58]
  __asm mov byte ptr [ebp - 4], 0x23
  __asm call LAB_1005c315
  __asm lea ecx, [ebp - 0x1fc]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x58 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1007e695
  __asm lea ecx, [ebp - 0x208]
  __asm call LAB_1005600f
  __asm mov dword ptr [ebp - 0x210], LAB_118bccb0
  __asm mov ecx, dword ptr [ebp - 0xd0]
  __asm mov byte ptr [ebp - 4], 0x24
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x19 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0x2c __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0x30 __asm _emit 0xff
  __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xd8]
  __asm mov byte ptr [ebp - 4], 0x25
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x19 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0x24 __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0x28 __asm _emit 0xff
  __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp - 0xf0]
  __asm call LAB_10005f9c
  __asm lea ecx, [ebp - 0xfc]
  __asm call LAB_1005de7c
  __asm lea ecx, [ebp - 0x2c0]
  __asm call LAB_10074c85
  __asm mov ecx, dword ptr [ebp + 0x18]
  __asm mov byte ptr [ebp - 4], 0x26
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp + 0x10]
  __asm mov byte ptr [ebp - 4], 0x27
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp + 0x54]
  __asm mov byte ptr [ebp - 4], 0x28
  __asm call LAB_1005c315
  __asm lea ecx, [ebp - 0x21c]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x54 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1007e695
  __asm lea ecx, [ebp - 0x228]
  __asm call LAB_1005600f
  __asm mov dword ptr [ebp - 0x230], LAB_118bccb0
  __asm mov ecx, dword ptr [ebp - 0x104]
  __asm mov byte ptr [ebp - 4], 0x29
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x19 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0xf8 __asm _emit 0xfe __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0xfc __asm _emit 0xfe
  __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0x10c]
  __asm mov byte ptr [ebp - 4], 0x2a
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x19 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0xf0 __asm _emit 0xfe __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0xf4 __asm _emit 0xfe
  __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp - 0x124]
  __asm call LAB_10005f9c
  __asm lea ecx, [ebp - 0x130]
  __asm call LAB_1005de7c
  __asm lea ecx, [ebp - 0x2d8]
  __asm call LAB_10074c85
  __asm mov ecx, dword ptr [ebp - 0x10]
  __asm mov byte ptr [ebp - 4], 0x2b
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xec __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xf0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0x18]
  __asm mov byte ptr [ebp - 4], 0x2c
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xe4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xe8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp + 0x50]
  __asm mov byte ptr [ebp - 4], 0x2d
  __asm call LAB_1005c315
  __asm lea ecx, [ebp - 0x23c]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x50 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1007e695
  __asm lea ecx, [ebp - 0x248]
  __asm call LAB_1005600f
  __asm mov dword ptr [ebp - 0x250], LAB_118bccb0
  __asm mov ecx, dword ptr [ebp - 0x138]
  __asm mov byte ptr [ebp - 4], 0x2e
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x19 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0xc4 __asm _emit 0xfe __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0xc8 __asm _emit 0xfe
  __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0x140]
  __asm mov byte ptr [ebp - 4], 0x2f
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x19 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0xbc __asm _emit 0xfe __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0xfe
  __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp - 0x158]
  __asm call LAB_10005f9c
  __asm lea ecx, [ebp - 0x164]
  __asm call LAB_1005de7c
  __asm lea ecx, [ebp - 0x2f0]
  __asm call LAB_10074c85
  __asm mov ecx, dword ptr [ebp - 0x2c]
  __asm mov byte ptr [ebp - 4], 0x30
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xd0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xd4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0x34]
  __asm mov byte ptr [ebp - 4], 0x31
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xc8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xcc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp + 0x4c]
  __asm mov byte ptr [ebp - 4], 0x32
  __asm call LAB_1005c315
  __asm lea ecx, [ebp - 0x25c]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x4c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1007e695
  __asm lea ecx, [ebp - 0x268]
  __asm call LAB_1005600f
  __asm mov dword ptr [ebp - 0x270], LAB_118bccb0
  __asm mov ecx, dword ptr [ebp - 0x16c]
  __asm mov byte ptr [ebp - 4], 0x33
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x19 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0x90 __asm _emit 0xfe __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0x94 __asm _emit 0xfe
  __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0x174]
  __asm mov byte ptr [ebp - 4], 0x34
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x19 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0x88 __asm _emit 0xfe __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0x8c __asm _emit 0xfe
  __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp - 0x18c]
  __asm call LAB_10005f9c
  __asm lea ecx, [ebp - 0x198]
  __asm call LAB_1005de7c
  __asm lea ecx, [ebp - 0x308]
  __asm call LAB_10074c85
  __asm mov ecx, dword ptr [ebp - 0x48]
  __asm mov byte ptr [ebp - 4], 0x35
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xb4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xb8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0x50]
  __asm mov byte ptr [ebp - 4], 0x36
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xac __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xb0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp + 0x48]
  __asm mov byte ptr [ebp - 4], 0x37
  __asm call LAB_1005c315
  __asm lea ecx, [ebp - 0x27c]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x48 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1007e695
  __asm lea ecx, [ebp - 0x288]
  __asm call LAB_1005600f
  __asm mov dword ptr [ebp - 0x290], LAB_118bccb0
  __asm mov ecx, dword ptr [ebp - 0x1a0]
  __asm mov byte ptr [ebp - 4], 0x38
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x19 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0x5c __asm _emit 0xfe __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0x60 __asm _emit 0xfe
  __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0x1a8]
  __asm mov byte ptr [ebp - 4], 0x39
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x19 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0x54 __asm _emit 0xfe __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0x58 __asm _emit 0xfe
  __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp - 0x1c0]
  __asm call LAB_10005f9c
  __asm lea ecx, [ebp - 0x1cc]
  __asm call LAB_1005de7c
  __asm lea ecx, [ebp - 0x320]
  __asm call LAB_10074c85
  __asm mov ecx, dword ptr [ebp - 0x64]
  __asm mov byte ptr [ebp - 4], 0x3a
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x98 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x9c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0x6c]
  __asm mov byte ptr [ebp - 4], 0x3b
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x90 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x94 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 8]
  __asm lea ecx, [ebp + 0x40]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x3c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm mov eax, ebx
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm lea esp, [ebp + 0x5c]
  __asm pop ebp
  __asm ret 4
}




// Reference entry 10614ed0; body size 622 bytes.
#line 1 "ENTRY_10614ed0"

__declspec(naked) void FUN_10614ed0(void)

{
  __asm push ebp
  __asm lea ebp, [esp - 0x74]
  __asm sub esp, 0x74
  __asm push -1
  __asm push offset LAB_115bcf25
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 0x38
  __asm push esi
  __asm push edi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push offset LAB_118bcc7c
  __asm lea ecx, [ebp + 0x70]
  __asm call LAB_1005273e
  __asm push dword ptr [LAB_121a2180]
  __asm lea ecx, [ebp + 0x34]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10088a0f
  __asm mov esi, eax
  __asm lea eax, [ebp + 0x70]
  __asm mov byte ptr [ebp - 4], 1
  __asm push eax
  __asm lea ecx, [ebp - 0x44]
  __asm call LAB_1000269e
  __asm lea ecx, [esi + 4]
  __asm mov byte ptr [ebp - 4], 2
  __asm push ecx
  __asm lea ecx, [ebp]
  __asm push ecx
  __asm mov ecx, eax
  __asm call LAB_10047b68
  __asm push eax
  __asm lea ecx, [ebp - 0x2c]
  __asm mov byte ptr [ebp - 4], 3
  __asm call LAB_10014e57
  __asm xorps xmm0, xmm0
  __asm mov dword ptr [ebp + 0x50], LAB_118bccd4
  __asm movups xmmword ptr [ebp + 0x54], xmm0
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x64 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x68 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x6c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea eax, [ebp - 0x2c]
  __asm mov byte ptr [ebp - 4], 5
  __asm push eax
  __asm lea ecx, [ebp + 0x50]
  __asm call LAB_1001adca
  __asm mov ecx, dword ptr [ebp + 0x7c]
  __asm push eax
  __asm call LAB_100904ad
  __asm mov esi, dword ptr [ebp + 0x64]
  __asm mov byte ptr [ebp - 4], 4
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x5c
  __asm mov edi, dword ptr [ebp + 0x68]
  __asm cmp esi, edi
  __asm _emit 0x74 __asm _emit 0x14
  __asm nop
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 0
  __asm call dword ptr [eax]
  __asm add esi, 0x20
  __asm cmp esi, edi
  __asm _emit 0x75 __asm _emit 0xf1
  __asm mov esi, dword ptr [ebp + 0x64]
  __asm mov ecx, dword ptr [ebp + 0x6c]
  __asm mov eax, esi
  __asm sub ecx, esi
  __asm and ecx, 0xffffffe0
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x10
  __asm mov esi, dword ptr [esi - 4]
  __asm add ecx, 0x23
  __asm sub eax, esi
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x77 __asm _emit 0x71
  __asm push ecx
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x64 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x68 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x6c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov esi, dword ptr [ebp + 0x58]
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x70
  __asm mov edi, dword ptr [ebp + 0x5c]
  __asm cmp esi, edi
  __asm _emit 0x74 __asm _emit 0x11
  __asm mov ecx, esi
  __asm call LAB_10002699
  __asm add esi, 0x34
  __asm cmp esi, edi
  __asm _emit 0x75 __asm _emit 0xf2
  __asm mov esi, dword ptr [ebp + 0x58]
  __asm mov ecx, dword ptr [ebp + 0x60]
  __asm mov eax, 0x4ec4ec4f
  __asm sub ecx, esi
  __asm imul ecx
  __asm sar edx, 4
  __asm mov eax, edx
  __asm shr eax, 0x1f
  __asm add eax, edx
  __asm imul ecx, eax, 0x34
  __asm mov eax, esi
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x16
  __asm mov esi, dword ptr [esi - 4]
  __asm add ecx, 0x23
  __asm sub eax, esi
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x76 __asm _emit 0x06
  __asm call dword ptr [LAB_122fc888]
  __asm push ecx
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x58 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x5c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x60 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea ecx, [ebp - 0x18]
  __asm mov dword ptr [ebp + 0x50], LAB_118bccb0
  __asm call LAB_1007e695
  __asm lea ecx, [ebp - 0x24]
  __asm call LAB_1005600f
  __asm mov dword ptr [ebp - 0x2c], LAB_118bccb0
  __asm mov ecx, dword ptr [ebp + 0x30]
  __asm mov byte ptr [ebp - 4], 6
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x2c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x30 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp + 0x28]
  __asm mov byte ptr [ebp - 4], 7
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x28 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp + 0x10]
  __asm call LAB_10005f9c
  __asm lea ecx, [ebp + 4]
  __asm call LAB_1005de7c
  __asm lea ecx, [ebp - 0x44]
  __asm call LAB_10074c85
  __asm mov ecx, dword ptr [ebp + 0x4c]
  __asm mov byte ptr [ebp - 4], 8
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x48 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x4c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp + 0x44]
  __asm mov byte ptr [ebp - 4], 9
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x40 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x44 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 8]
  __asm lea ecx, [ebp + 0x70]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x0a __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm mov eax, dword ptr [ebp + 0x7c]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm lea esp, [ebp + 0x74]
  __asm pop ebp
  __asm ret 4
}




// Reference entry 106151e0; body size 3974 bytes.
#line 1 "ENTRY_106151e0"

__declspec(naked) void FUN_106151e0(void)

{
  __asm push ebp
  __asm lea ebp, [esp - 0x58]
  __asm sub esp, 0x58
  __asm push -1
  __asm push offset LAB_115bd1de
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 0x594
  __asm push ebx
  __asm push esi
  __asm push edi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ebx, ecx
  __asm mov dword ptr [ebp - 0x38], ebx
  __asm lea eax, [ebp - 0x34]
  __asm push eax
  __asm call LAB_1009058e
  __asm add esp, 4
  __asm mov ecx, dword ptr [eax]
  __asm lea edx, [ebp - 0x30]
  __asm push edx
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x3c]
  __asm mov ecx, dword ptr [eax]
  __asm mov byte ptr [ebp - 4], 1
  __asm mov dword ptr [ebp + 0x20], ecx
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ebp - 0x40], ecx
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x0a
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [ebp - 0x3c], eax
  __asm _emit 0xeb __asm _emit 0x07 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xc4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ebp - 0x30]
  __asm mov byte ptr [ebp - 4], 4
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0x34]
  __asm mov byte ptr [ebp - 4], 6
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm push offset LAB_118bcc00
  __asm lea ecx, [ebp + 0x24]
  __asm mov byte ptr [ebp - 4], 5
  __asm call LAB_1005273e
  __asm lea eax, [ebp + 0x24]
  __asm mov byte ptr [ebp - 4], 7
  __asm push eax
  __asm lea ecx, [ebp - 0x4e0]
  __asm call LAB_1000117c
  __asm push eax
  __asm lea ecx, [ebp - 0x36c]
  __asm mov byte ptr [ebp - 4], 8
  __asm call LAB_1002c8cc
  __asm push offset LAB_118bcc7c
  __asm lea ecx, [ebp + 0x28]
  __asm mov byte ptr [ebp - 4], 9
  __asm call LAB_1005273e
  __asm push dword ptr [LAB_121a2154]
  __asm lea ecx, [ebp - 0x78]
  __asm mov byte ptr [ebp - 4], 0xa
  __asm call LAB_10088a0f
  __asm mov esi, eax
  __asm lea eax, [ebp + 0x28]
  __asm mov byte ptr [ebp - 4], 0xb
  __asm push eax
  __asm lea ecx, [ebp - 0x4f8]
  __asm call LAB_1000269e
  __asm lea ecx, [ebp - 0x36c]
  __asm mov byte ptr [ebp - 4], 0xc
  __asm push ecx
  __asm lea ecx, [ebp - 0x44c]
  __asm push ecx
  __asm mov ecx, eax
  __asm call LAB_10090eb7
  __asm lea ecx, [esi + 4]
  __asm mov byte ptr [ebp - 4], 0xd
  __asm push ecx
  __asm lea ecx, [ebp - 0x220]
  __asm push ecx
  __asm mov ecx, eax
  __asm call LAB_1004f4c1
  __asm push eax
  __asm lea ecx, [ebp - 0x2e0]
  __asm mov byte ptr [ebp - 4], 0xe
  __asm call LAB_10014e57
  __asm push offset LAB_118bcc00
  __asm lea ecx, [ebp + 0x2c]
  __asm mov byte ptr [ebp - 4], 0xf
  __asm call LAB_1005273e
  __asm lea eax, [ebp + 0x2c]
  __asm mov byte ptr [ebp - 4], 0x10
  __asm push eax
  __asm lea ecx, [ebp - 0x510]
  __asm call LAB_1000117c
  __asm push eax
  __asm lea ecx, [ebp - 0x350]
  __asm mov byte ptr [ebp - 4], 0x11
  __asm call LAB_1002c8cc
  __asm push offset LAB_118bcc7c
  __asm lea ecx, [ebp + 0x30]
  __asm mov byte ptr [ebp - 4], 0x12
  __asm call LAB_1005273e
  __asm push dword ptr [LAB_121a2158]
  __asm lea ecx, [ebp - 0x94]
  __asm mov byte ptr [ebp - 4], 0x13
  __asm call LAB_10088a0f
  __asm mov esi, eax
  __asm lea eax, [ebp + 0x30]
  __asm mov byte ptr [ebp - 4], 0x14
  __asm push eax
  __asm lea ecx, [ebp - 0x528]
  __asm call LAB_1000269e
  __asm lea ecx, [ebp - 0x350]
  __asm mov byte ptr [ebp - 4], 0x15
  __asm push ecx
  __asm lea ecx, [ebp - 0x430]
  __asm push ecx
  __asm mov ecx, eax
  __asm call LAB_10090eb7
  __asm lea ecx, [esi + 4]
  __asm mov byte ptr [ebp - 4], 0x16
  __asm push ecx
  __asm lea ecx, [ebp - 0x11c]
  __asm push ecx
  __asm mov ecx, eax
  __asm call LAB_1004f4c1
  __asm push eax
  __asm lea ecx, [ebp - 0x2c0]
  __asm mov byte ptr [ebp - 4], 0x17
  __asm call LAB_10014e57
  __asm push offset LAB_118bcc00
  __asm lea ecx, [ebp + 0x34]
  __asm mov byte ptr [ebp - 4], 0x18
  __asm call LAB_1005273e
  __asm lea eax, [ebp + 0x34]
  __asm mov byte ptr [ebp - 4], 0x19
  __asm push eax
  __asm lea ecx, [ebp - 0x498]
  __asm call LAB_1000117c
  __asm push eax
  __asm lea ecx, [ebp - 0x334]
  __asm mov byte ptr [ebp - 4], 0x1a
  __asm call LAB_1002c8cc
  __asm push offset LAB_118bcc48
  __asm lea ecx, [ebp + 0x38]
  __asm mov byte ptr [ebp - 4], 0x1b
  __asm call LAB_1005273e
  __asm lea eax, [ebp + 0x38]
  __asm mov byte ptr [ebp - 4], 0x1c
  __asm push eax
  __asm lea ecx, [ebp - 0x4b0]
  __asm call LAB_10095656
  __asm push eax
  __asm lea ecx, [ebp - 0x388]
  __asm mov byte ptr [ebp - 4], 0x1d
  __asm call LAB_1002c8cc
  __asm push offset LAB_118bcc7c
  __asm lea ecx, [ebp + 0x3c]
  __asm mov byte ptr [ebp - 4], 0x1e
  __asm call LAB_1005273e
  __asm push dword ptr [LAB_121a2158]
  __asm lea ecx, [ebp - 0xb0]
  __asm mov byte ptr [ebp - 4], 0x1f
  __asm call LAB_10088a0f
  __asm mov esi, eax
  __asm lea eax, [ebp + 0x3c]
  __asm mov byte ptr [ebp - 4], 0x20
  __asm push eax
  __asm lea ecx, [ebp - 0x480]
  __asm call LAB_1000269e
  __asm lea ecx, [ebp - 0x388]
  __asm mov byte ptr [ebp - 4], 0x21
  __asm push ecx
  __asm lea ecx, [ebp - 0x468]
  __asm push ecx
  __asm mov ecx, eax
  __asm call LAB_10090eb7
  __asm lea ecx, [ebp - 0x334]
  __asm mov byte ptr [ebp - 4], 0x22
  __asm push ecx
  __asm lea ecx, [ebp - 0x414]
  __asm push ecx
  __asm mov ecx, eax
  __asm call LAB_100461eb
  __asm lea ecx, [esi + 4]
  __asm mov byte ptr [ebp - 4], 0x23
  __asm push ecx
  __asm lea ecx, [ebp - 0x150]
  __asm push ecx
  __asm mov ecx, eax
  __asm call LAB_1004f4c1
  __asm push eax
  __asm lea ecx, [ebp - 0x240]
  __asm mov byte ptr [ebp - 4], 0x24
  __asm call LAB_10014e57
  __asm push offset LAB_118bcc00
  __asm lea ecx, [ebp + 0x40]
  __asm mov byte ptr [ebp - 4], 0x25
  __asm call LAB_1005273e
  __asm lea eax, [ebp + 0x40]
  __asm mov byte ptr [ebp - 4], 0x26
  __asm push eax
  __asm lea ecx, [ebp - 0x4c8]
  __asm call LAB_1000117c
  __asm push eax
  __asm lea ecx, [ebp - 0x318]
  __asm mov byte ptr [ebp - 4], 0x27
  __asm call LAB_1002c8cc
  __asm push offset LAB_118bcc48
  __asm lea ecx, [ebp + 0x44]
  __asm mov byte ptr [ebp - 4], 0x28
  __asm call LAB_1005273e
  __asm lea eax, [ebp + 0x44]
  __asm mov byte ptr [ebp - 4], 0x29
  __asm push eax
  __asm lea ecx, [ebp - 0x540]
  __asm call LAB_10095656
  __asm push eax
  __asm lea ecx, [ebp - 0x2fc]
  __asm mov byte ptr [ebp - 4], 0x2a
  __asm call LAB_1002c8cc
  __asm push offset LAB_118bcc7c
  __asm lea ecx, [ebp + 0x48]
  __asm mov byte ptr [ebp - 4], 0x2b
  __asm call LAB_1005273e
  __asm push dword ptr [LAB_121a215c]
  __asm lea ecx, [ebp - 0xcc]
  __asm mov byte ptr [ebp - 4], 0x2c
  __asm call LAB_10088a0f
  __asm mov esi, eax
  __asm lea eax, [ebp + 0x48]
  __asm mov byte ptr [ebp - 4], 0x2d
  __asm push eax
  __asm lea ecx, [ebp - 0x558]
  __asm call LAB_1000269e
  __asm lea ecx, [ebp - 0x2fc]
  __asm mov byte ptr [ebp - 4], 0x2e
  __asm push ecx
  __asm lea ecx, [ebp - 0x3f8]
  __asm push ecx
  __asm mov ecx, eax
  __asm call LAB_10090eb7
  __asm lea ecx, [ebp - 0x318]
  __asm mov byte ptr [ebp - 4], 0x2f
  __asm push ecx
  __asm lea ecx, [ebp - 0x3dc]
  __asm push ecx
  __asm mov ecx, eax
  __asm call LAB_100461eb
  __asm lea ecx, [esi + 4]
  __asm mov byte ptr [ebp - 4], 0x30
  __asm push ecx
  __asm lea ecx, [ebp - 0x184]
  __asm push ecx
  __asm mov ecx, eax
  __asm call LAB_1004f4c1
  __asm push eax
  __asm lea ecx, [ebp - 0x2a0]
  __asm mov byte ptr [ebp - 4], 0x31
  __asm call LAB_10014e57
  __asm push offset LAB_118bcc10
  __asm lea ecx, [ebp + 0x4c]
  __asm mov byte ptr [ebp - 4], 0x32
  __asm call LAB_1005273e
  __asm lea eax, [ebp + 0x4c]
  __asm mov byte ptr [ebp - 4], 0x33
  __asm push eax
  __asm lea ecx, [ebp - 0x570]
  __asm call LAB_1000117c
  __asm push eax
  __asm lea ecx, [ebp - 0x3a4]
  __asm mov byte ptr [ebp - 4], 0x34
  __asm call LAB_1002c8cc
  __asm push offset LAB_118bcc7c
  __asm lea ecx, [ebp + 0x50]
  __asm mov byte ptr [ebp - 4], 0x35
  __asm call LAB_1005273e
  __asm push dword ptr [LAB_121a215c]
  __asm lea ecx, [ebp - 0x5c]
  __asm mov byte ptr [ebp - 4], 0x36
  __asm call LAB_10088a0f
  __asm mov esi, eax
  __asm lea eax, [ebp + 0x50]
  __asm mov byte ptr [ebp - 4], 0x37
  __asm push eax
  __asm lea ecx, [ebp - 0x588]
  __asm call LAB_1000269e
  __asm lea ecx, [ebp - 0x3a4]
  __asm mov byte ptr [ebp - 4], 0x38
  __asm push ecx
  __asm lea ecx, [ebp - 0x3c0]
  __asm push ecx
  __asm mov ecx, eax
  __asm call LAB_10090eb7
  __asm lea ecx, [esi + 4]
  __asm mov byte ptr [ebp - 4], 0x39
  __asm push ecx
  __asm lea ecx, [ebp - 0x1b8]
  __asm push ecx
  __asm mov ecx, eax
  __asm call LAB_1004f4c1
  __asm push eax
  __asm lea ecx, [ebp - 0x280]
  __asm mov byte ptr [ebp - 4], 0x3a
  __asm call LAB_10014e57
  __asm push offset LAB_118bcc7c
  __asm lea ecx, [ebp + 0x54]
  __asm mov byte ptr [ebp - 4], 0x3b
  __asm call LAB_1005273e
  __asm mov byte ptr [ebp - 4], 0x3c
  __asm push dword ptr [LAB_121a212c]
  __asm lea ecx, [ebp - 0xe8]
  __asm call LAB_10088a0f
  __asm mov esi, eax
  __asm lea eax, [ebp + 0x54]
  __asm mov byte ptr [ebp - 4], 0x3d
  __asm push eax
  __asm lea ecx, [ebp - 0x5a0]
  __asm call LAB_1000269e
  __asm lea ecx, [esi + 4]
  __asm mov byte ptr [ebp - 4], 0x3e
  __asm push ecx
  __asm lea ecx, [ebp - 0x1ec]
  __asm push ecx
  __asm mov ecx, eax
  __asm call LAB_10047b68
  __asm push eax
  __asm lea ecx, [ebp - 0x260]
  __asm mov byte ptr [ebp - 4], 0x3f
  __asm call LAB_10014e57
  __asm xorps xmm0, xmm0
  __asm mov dword ptr [ebp], LAB_118bccd4
  __asm movups xmmword ptr [ebp + 4], xmm0
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x1c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, ebx
  __asm mov byte ptr [ebp - 4], 0x41
  __asm call LAB_1000d2bf
  __asm mov esi, dword ptr [ebp]
  __asm lea ecx, [ebp - 0x280]
  __asm push ecx
  __asm lea ecx, [eax + 0x100]
  __asm call LAB_100535ad
  __asm test al, al
  __asm lea ecx, [ebp]
  __asm sete al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [esi + 0xc]
  __asm mov ecx, ebx
  __asm mov edi, eax
  __asm call LAB_1000d2bf
  __asm mov esi, dword ptr [edi]
  __asm lea ecx, [ebp - 0x2a0]
  __asm push ecx
  __asm lea ecx, [eax + 0x100]
  __asm call LAB_10073146
  __asm movzx eax, al
  __asm mov ecx, edi
  __asm push eax
  __asm call dword ptr [esi + 0x10]
  __asm xorps xmm0, xmm0
  __asm mov dword ptr [ebp - 0x2c], LAB_118bccd4
  __asm mov ebx, eax
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xe8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm movups xmmword ptr [ebp - 0x28], xmm0
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xec __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xf0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm cmp dword ptr [ebp + 0x20], 0
  __asm lea eax, [ebp - 0x260]
  __asm push eax
  __asm sete byte ptr [ebp + 0x20]
  __asm mov byte ptr [ebp - 4], 0x42
  __asm push dword ptr [ebp + 0x20]
  __asm lea ecx, [ebp - 0x2c]
  __asm call LAB_100606b8
  __asm mov edx, dword ptr [ebx]
  __asm mov esi, eax
  __asm lea eax, [ebp - 0x240]
  __asm mov ecx, ebx
  __asm push eax
  __asm mov edi, dword ptr [esi]
  __asm call dword ptr [edx + 0x14]
  __asm push eax
  __asm mov ebx, dword ptr [ebp - 0x38]
  __asm mov ecx, esi
  __asm movzx eax, byte ptr [ebx + 0xe9]
  __asm push eax
  __asm call dword ptr [edi + 0x10]
  __asm mov ecx, ebx
  __asm mov edi, eax
  __asm call LAB_1000d2bf
  __asm mov esi, dword ptr [edi]
  __asm lea ecx, [ebp - 0x2c0]
  __asm push ecx
  __asm lea ecx, [eax + 0xf4]
  __asm call LAB_1003a6cf
  __asm movzx eax, al
  __asm mov ecx, edi
  __asm push eax
  __asm call dword ptr [esi + 0x10]
  __asm lea ecx, [ebp - 0x2e0]
  __asm push ecx
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 0x14]
  __asm mov ebx, dword ptr [ebp + 0x60]
  __asm mov ecx, ebx
  __asm push eax
  __asm call LAB_100904ad
  __asm mov esi, dword ptr [ebp - 0x18]
  __asm mov byte ptr [ebp - 4], 0x41
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x5e
  __asm mov edi, dword ptr [ebp - 0x14]
  __asm cmp esi, edi
  __asm _emit 0x74 __asm _emit 0x12
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 0
  __asm call dword ptr [eax]
  __asm add esi, 0x20
  __asm cmp esi, edi
  __asm _emit 0x75 __asm _emit 0xf1
  __asm mov esi, dword ptr [ebp - 0x18]
  __asm mov ecx, dword ptr [ebp - 0x10]
  __asm mov eax, esi
  __asm sub ecx, esi
  __asm and ecx, 0xffffffe0
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x14
  __asm mov esi, dword ptr [esi - 4]
  __asm add ecx, 0x23
  __asm sub eax, esi
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja LAB_10615995
  __asm push ecx
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xe8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xec __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0xf0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov esi, dword ptr [ebp - 0x24]
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x75
  __asm mov edi, dword ptr [ebp - 0x20]
  __asm cmp esi, edi
  __asm _emit 0x74 __asm _emit 0x18 __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x80 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, esi
  __asm call LAB_10002699
  __asm add esi, 0x34
  __asm cmp esi, edi
  __asm _emit 0x75 __asm _emit 0xf2
  __asm mov esi, dword ptr [ebp - 0x24]
  __asm mov ecx, dword ptr [ebp - 0x1c]
  __asm mov eax, 0x4ec4ec4f
  __asm sub ecx, esi
  __asm imul ecx
  __asm sar edx, 4
  __asm mov eax, edx
  __asm shr eax, 0x1f
  __asm add eax, edx
  __asm imul ecx, eax, 0x34
  __asm mov eax, esi
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x14
  __asm mov esi, dword ptr [esi - 4]
  __asm add ecx, 0x23
  __asm sub eax, esi
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja LAB_10615995
  __asm push ecx
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xdc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xe0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0xe4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov esi, dword ptr [ebp + 0x14]
  __asm mov dword ptr [ebp - 0x2c], LAB_118bccb0
  __asm mov byte ptr [ebp - 4], 0x40
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x5a
  __asm mov edi, dword ptr [ebp + 0x18]
  __asm cmp esi, edi
  __asm _emit 0x74 __asm _emit 0x12
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 0
  __asm call dword ptr [eax]
  __asm add esi, 0x20
  __asm cmp esi, edi
  __asm _emit 0x75 __asm _emit 0xf1
  __asm mov esi, dword ptr [ebp + 0x14]
  __asm mov ecx, dword ptr [ebp + 0x1c]
  __asm mov eax, esi
  __asm sub ecx, esi
  __asm and ecx, 0xffffffe0
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x10
  __asm mov esi, dword ptr [esi - 4]
  __asm add ecx, 0x23
  __asm sub eax, esi
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x77 __asm _emit 0x71
  __asm push ecx
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x1c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov esi, dword ptr [ebp + 8]
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x70
  __asm mov edi, dword ptr [ebp + 0xc]
  __asm cmp esi, edi
  __asm _emit 0x74 __asm _emit 0x11
  __asm mov ecx, esi
  __asm call LAB_10002699
  __asm add esi, 0x34
  __asm cmp esi, edi
  __asm _emit 0x75 __asm _emit 0xf2
  __asm mov esi, dword ptr [ebp + 8]
  __asm mov ecx, dword ptr [ebp + 0x10]
  __asm mov eax, 0x4ec4ec4f
  __asm sub ecx, esi
  __asm imul ecx
  __asm sar edx, 4
  __asm mov eax, edx
  __asm shr eax, 0x1f
  __asm add eax, edx
  __asm imul ecx, eax, 0x34
  __asm mov eax, esi
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x16
  __asm mov esi, dword ptr [esi - 4]
  __asm add ecx, 0x23
  __asm sub eax, esi
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x76 __asm _emit 0x06
  __asm call dword ptr [LAB_122fc888]
  __asm push ecx
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea ecx, [ebp - 0x24c]
  __asm mov dword ptr [ebp], LAB_118bccb0
  __asm call LAB_1007e695
  __asm lea ecx, [ebp - 0x258]
  __asm call LAB_1005600f
  __asm mov dword ptr [ebp - 0x260], LAB_118bccb0
  __asm mov ecx, dword ptr [ebp - 0x1bc]
  __asm mov byte ptr [ebp - 4], 0x43
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x19 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0x40 __asm _emit 0xfe __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0x44 __asm _emit 0xfe
  __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0x1c4]
  __asm mov byte ptr [ebp - 4], 0x44
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x19 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0x38 __asm _emit 0xfe __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0x3c __asm _emit 0xfe
  __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp - 0x1dc]
  __asm call LAB_10005f9c
  __asm lea ecx, [ebp - 0x1e8]
  __asm call LAB_1005de7c
  __asm lea ecx, [ebp - 0x5a0]
  __asm call LAB_10074c85
  __asm mov ecx, dword ptr [ebp - 0xd0]
  __asm mov byte ptr [ebp - 4], 0x45
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x19 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0x2c __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0x30 __asm _emit 0xff
  __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xd8]
  __asm mov byte ptr [ebp - 4], 0x46
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x19 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0x24 __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0x28 __asm _emit 0xff
  __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp + 0x54]
  __asm mov byte ptr [ebp - 4], 0x47
  __asm call LAB_1005c315
  __asm lea ecx, [ebp - 0x26c]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x54 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1007e695
  __asm lea ecx, [ebp - 0x278]
  __asm call LAB_1005600f
  __asm mov dword ptr [ebp - 0x280], LAB_118bccb0
  __asm mov ecx, dword ptr [ebp - 0x188]
  __asm mov byte ptr [ebp - 4], 0x48
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x19 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0x74 __asm _emit 0xfe __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0x78 __asm _emit 0xfe
  __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0x190]
  __asm mov byte ptr [ebp - 4], 0x49
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x19 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0x6c __asm _emit 0xfe __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0x70 __asm _emit 0xfe
  __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp - 0x1a8]
  __asm call LAB_10005f9c
  __asm lea ecx, [ebp - 0x1b4]
  __asm call LAB_1005de7c
  __asm lea ecx, [ebp - 0x3b0]
  __asm call LAB_10005f9c
  __asm lea ecx, [ebp - 0x3bc]
  __asm call LAB_1005de7c
  __asm lea ecx, [ebp - 0x588]
  __asm call LAB_10074c85
  __asm mov ecx, dword ptr [ebp - 0x44]
  __asm mov byte ptr [ebp - 4], 0x4a
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xb8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xbc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0x4c]
  __asm mov byte ptr [ebp - 4], 0x4b
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xb0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xb4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp + 0x50]
  __asm mov byte ptr [ebp - 4], 0x4c
  __asm call LAB_1005c315
  __asm lea ecx, [ebp - 0x394]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x50 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10005f9c
  __asm lea ecx, [ebp - 0x3a0]
  __asm call LAB_1005de7c
  __asm lea ecx, [ebp - 0x570]
  __asm call LAB_10074c85
  __asm lea ecx, [ebp + 0x4c]
  __asm mov byte ptr [ebp - 4], 0x4d
  __asm call LAB_1005c315
  __asm lea ecx, [ebp - 0x28c]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x4c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1007e695
  __asm lea ecx, [ebp - 0x298]
  __asm call LAB_1005600f
  __asm mov dword ptr [ebp - 0x2a0], LAB_118bccb0
  __asm mov ecx, dword ptr [ebp - 0x154]
  __asm mov byte ptr [ebp - 4], 0x4e
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x19 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0xa8 __asm _emit 0xfe __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0xac __asm _emit 0xfe
  __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0x15c]
  __asm mov byte ptr [ebp - 4], 0x4f
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x19 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0xa0 __asm _emit 0xfe __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0xa4 __asm _emit 0xfe
  __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp - 0x174]
  __asm call LAB_10005f9c
  __asm lea ecx, [ebp - 0x180]
  __asm call LAB_1005de7c
  __asm lea ecx, [ebp - 0x3cc]
  __asm call LAB_10005f9c
  __asm lea ecx, [ebp - 0x3d8]
  __asm call LAB_1005de7c
  __asm lea ecx, [ebp - 0x3e8]
  __asm call LAB_10005f9c
  __asm lea ecx, [ebp - 0x3f4]
  __asm call LAB_1005de7c
  __asm lea ecx, [ebp - 0x558]
  __asm call LAB_10074c85
  __asm mov ecx, dword ptr [ebp - 0xb4]
  __asm mov byte ptr [ebp - 4], 0x50
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x19 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0x48 __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0x4c __asm _emit 0xff
  __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xbc]
  __asm mov byte ptr [ebp - 4], 0x51
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x19 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0x40 __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0x44 __asm _emit 0xff
  __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp + 0x48]
  __asm mov byte ptr [ebp - 4], 0x52
  __asm call LAB_1005c315
  __asm lea ecx, [ebp - 0x2ec]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x48 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10005f9c
  __asm lea ecx, [ebp - 0x2f8]
  __asm call LAB_1005de7c
  __asm lea ecx, [ebp - 0x540]
  __asm call LAB_10074c85
  __asm lea ecx, [ebp + 0x44]
  __asm mov byte ptr [ebp - 4], 0x53
  __asm call LAB_1005c315
  __asm lea ecx, [ebp - 0x308]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x44 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10005f9c
  __asm lea ecx, [ebp - 0x314]
  __asm call LAB_1005de7c
  __asm lea ecx, [ebp - 0x4c8]
  __asm call LAB_10074c85
  __asm lea ecx, [ebp + 0x40]
  __asm mov byte ptr [ebp - 4], 0x54
  __asm call LAB_1005c315
  __asm lea ecx, [ebp - 0x22c]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x40 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1007e695
  __asm lea ecx, [ebp - 0x238]
  __asm call LAB_1005600f
  __asm mov dword ptr [ebp - 0x240], LAB_118bccb0
  __asm mov ecx, dword ptr [ebp - 0x120]
  __asm mov byte ptr [ebp - 4], 0x55
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x19 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0xdc __asm _emit 0xfe __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0xe0 __asm _emit 0xfe
  __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0x128]
  __asm mov byte ptr [ebp - 4], 0x56
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x19 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0xd4 __asm _emit 0xfe __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0xd8 __asm _emit 0xfe
  __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp - 0x140]
  __asm call LAB_10005f9c
  __asm lea ecx, [ebp - 0x14c]
  __asm call LAB_1005de7c
  __asm lea ecx, [ebp - 0x404]
  __asm call LAB_10005f9c
  __asm lea ecx, [ebp - 0x410]
  __asm call LAB_1005de7c
  __asm lea ecx, [ebp - 0x458]
  __asm call LAB_10005f9c
  __asm lea ecx, [ebp - 0x464]
  __asm call LAB_1005de7c
  __asm lea ecx, [ebp - 0x480]
  __asm call LAB_10074c85
  __asm mov ecx, dword ptr [ebp - 0x98]
  __asm mov byte ptr [ebp - 4], 0x57
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x19 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0x64 __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0x68 __asm _emit 0xff
  __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xa0]
  __asm mov byte ptr [ebp - 4], 0x58
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x19 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0x5c __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0x60 __asm _emit 0xff
  __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp + 0x3c]
  __asm mov byte ptr [ebp - 4], 0x59
  __asm call LAB_1005c315
  __asm lea ecx, [ebp - 0x378]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x3c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10005f9c
  __asm lea ecx, [ebp - 0x384]
  __asm call LAB_1005de7c
  __asm lea ecx, [ebp - 0x4b0]
  __asm call LAB_10074c85
  __asm lea ecx, [ebp + 0x38]
  __asm mov byte ptr [ebp - 4], 0x5a
  __asm call LAB_1005c315
  __asm lea ecx, [ebp - 0x324]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x38 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10005f9c
  __asm lea ecx, [ebp - 0x330]
  __asm call LAB_1005de7c
  __asm lea ecx, [ebp - 0x498]
  __asm call LAB_10074c85
  __asm lea ecx, [ebp + 0x34]
  __asm mov byte ptr [ebp - 4], 0x5b
  __asm call LAB_1005c315
  __asm lea ecx, [ebp - 0x2ac]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x34 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1007e695
  __asm lea ecx, [ebp - 0x2b8]
  __asm call LAB_1005600f
  __asm mov dword ptr [ebp - 0x2c0], LAB_118bccb0
  __asm mov ecx, dword ptr [ebp - 0xec]
  __asm mov byte ptr [ebp - 4], 0x5c
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x19 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0x10 __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0x14 __asm _emit 0xff
  __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xf4]
  __asm mov byte ptr [ebp - 4], 0x5d
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x19 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0x08 __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0x0c __asm _emit 0xff
  __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp - 0x10c]
  __asm call LAB_10005f9c
  __asm lea ecx, [ebp - 0x118]
  __asm call LAB_1005de7c
  __asm lea ecx, [ebp - 0x420]
  __asm call LAB_10005f9c
  __asm lea ecx, [ebp - 0x42c]
  __asm call LAB_1005de7c
  __asm lea ecx, [ebp - 0x528]
  __asm call LAB_10074c85
  __asm mov ecx, dword ptr [ebp - 0x7c]
  __asm mov byte ptr [ebp - 4], 0x5e
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x80 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x84 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0x84]
  __asm mov byte ptr [ebp - 4], 0x5f
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x19 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0x78 __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0x7c __asm _emit 0xff
  __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp + 0x30]
  __asm mov byte ptr [ebp - 4], 0x60
  __asm call LAB_1005c315
  __asm lea ecx, [ebp - 0x340]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x30 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10005f9c
  __asm lea ecx, [ebp - 0x34c]
  __asm call LAB_1005de7c
  __asm lea ecx, [ebp - 0x510]
  __asm call LAB_10074c85
  __asm lea ecx, [ebp + 0x2c]
  __asm mov byte ptr [ebp - 4], 0x61
  __asm call LAB_1005c315
  __asm lea ecx, [ebp - 0x2cc]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x2c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1007e695
  __asm lea ecx, [ebp - 0x2d8]
  __asm call LAB_1005600f
  __asm mov dword ptr [ebp - 0x2e0], LAB_118bccb0
  __asm mov ecx, dword ptr [ebp - 0x1f0]
  __asm mov byte ptr [ebp - 4], 0x62
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x19 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0x0c __asm _emit 0xfe __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0x10 __asm _emit 0xfe
  __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0x1f8]
  __asm mov byte ptr [ebp - 4], 0x63
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x19 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0x04 __asm _emit 0xfe __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0x08 __asm _emit 0xfe
  __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp - 0x210]
  __asm call LAB_10005f9c
  __asm lea ecx, [ebp - 0x21c]
  __asm call LAB_1005de7c
  __asm lea ecx, [ebp - 0x43c]
  __asm call LAB_10005f9c
  __asm lea ecx, [ebp - 0x448]
  __asm call LAB_1005de7c
  __asm lea ecx, [ebp - 0x4f8]
  __asm call LAB_10074c85
  __asm mov ecx, dword ptr [ebp - 0x60]
  __asm mov byte ptr [ebp - 4], 0x64
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x9c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xa0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0x68]
  __asm mov byte ptr [ebp - 4], 0x65
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x94 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x98 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp + 0x28]
  __asm mov byte ptr [ebp - 4], 0x66
  __asm call LAB_1005c315
  __asm lea ecx, [ebp - 0x35c]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x28 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10005f9c
  __asm lea ecx, [ebp - 0x368]
  __asm call LAB_1005de7c
  __asm lea ecx, [ebp - 0x4e0]
  __asm call LAB_10074c85
  __asm lea ecx, [ebp + 0x24]
  __asm mov byte ptr [ebp - 4], 0x67
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ebp - 0x3c]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x68 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x07
  __asm mov edx, dword ptr [eax]
  __asm mov ecx, eax
  __asm call dword ptr [edx + 8]
  __asm mov eax, ebx
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm lea esp, [ebp + 0x58]
  __asm pop ebp
  __asm ret 4
}




// Reference entry 10616550; body size 941 bytes.
#line 1 "ENTRY_10616550"

__declspec(naked) void FUN_10616550(void)

{
  __asm push ebp
  __asm lea ebp, [esp - 0x60]
  __asm sub esp, 0x60
  __asm push -1
  __asm push offset LAB_115bd319
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 0xd8
  __asm push esi
  __asm push edi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push offset LAB_118bd270
  __asm lea ecx, [ebp + 0x58]
  __asm call LAB_1005273e
  __asm lea ecx, [ebp]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10061455
  __asm mov esi, eax
  __asm lea eax, [ebp + 0x58]
  __asm mov byte ptr [ebp - 4], 1
  __asm push eax
  __asm lea ecx, [ebp - 0xe4]
  __asm call LAB_1000269e
  __asm lea ecx, [esi + 4]
  __asm mov byte ptr [ebp - 4], 2
  __asm push ecx
  __asm lea ecx, [ebp - 0x74]
  __asm push ecx
  __asm mov ecx, eax
  __asm call LAB_10047b68
  __asm push eax
  __asm lea ecx, [ebp - 0xb4]
  __asm mov byte ptr [ebp - 4], 3
  __asm call LAB_10014e57
  __asm push offset LAB_118bdf24
  __asm lea ecx, [ebp + 0x5c]
  __asm mov byte ptr [ebp - 4], 4
  __asm call LAB_1005273e
  __asm push dword ptr [LAB_121a2164]
  __asm lea ecx, [ebp + 0x1c]
  __asm mov byte ptr [ebp - 4], 5
  __asm call LAB_10088a0f
  __asm mov esi, eax
  __asm lea eax, [ebp + 0x5c]
  __asm mov byte ptr [ebp - 4], 6
  __asm push eax
  __asm lea ecx, [ebp - 0xcc]
  __asm call LAB_1000269e
  __asm lea ecx, [esi + 4]
  __asm mov byte ptr [ebp - 4], 7
  __asm push ecx
  __asm lea ecx, [ebp - 0x40]
  __asm push ecx
  __asm mov ecx, eax
  __asm call LAB_10047b68
  __asm push eax
  __asm lea ecx, [ebp - 0x94]
  __asm mov byte ptr [ebp - 4], 8
  __asm call LAB_10014e57
  __asm xorps xmm0, xmm0
  __asm mov dword ptr [ebp + 0x38], LAB_118bccd4
  __asm movups xmmword ptr [ebp + 0x3c], xmm0
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x4c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x50 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x54 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea eax, [ebp - 0x94]
  __asm mov byte ptr [ebp - 4], 0xa
  __asm push eax
  __asm lea ecx, [ebp + 0x38]
  __asm call LAB_1001adca
  __asm lea ecx, [ebp - 0xb4]
  __asm push ecx
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 8]
  __asm mov ecx, dword ptr [ebp + 0x68]
  __asm push eax
  __asm call LAB_100904ad
  __asm mov esi, dword ptr [ebp + 0x4c]
  __asm test esi, esi
  __asm mov byte ptr [ebp - 4], 9
  __asm _emit 0x74 __asm _emit 0x5d
  __asm mov edi, dword ptr [ebp + 0x50]
  __asm cmp esi, edi
  __asm _emit 0x74 __asm _emit 0x15 __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x00
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 0
  __asm call dword ptr [eax]
  __asm add esi, 0x20
  __asm cmp esi, edi
  __asm _emit 0x75 __asm _emit 0xf1
  __asm mov esi, dword ptr [ebp + 0x4c]
  __asm mov ecx, dword ptr [ebp + 0x54]
  __asm mov eax, esi
  __asm sub ecx, esi
  __asm and ecx, 0xffffffe0
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x10
  __asm mov esi, dword ptr [esi - 4]
  __asm add ecx, 0x23
  __asm sub eax, esi
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x77 __asm _emit 0x71
  __asm push ecx
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x4c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x50 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x54 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov esi, dword ptr [ebp + 0x40]
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x70
  __asm mov edi, dword ptr [ebp + 0x44]
  __asm cmp esi, edi
  __asm _emit 0x74 __asm _emit 0x11
  __asm mov ecx, esi
  __asm call LAB_10002699
  __asm add esi, 0x34
  __asm cmp esi, edi
  __asm _emit 0x75 __asm _emit 0xf2
  __asm mov esi, dword ptr [ebp + 0x40]
  __asm mov ecx, dword ptr [ebp + 0x48]
  __asm mov eax, 0x4ec4ec4f
  __asm sub ecx, esi
  __asm imul ecx
  __asm sar edx, 4
  __asm mov eax, edx
  __asm shr eax, 0x1f
  __asm add eax, edx
  __asm imul ecx, eax, 0x34
  __asm mov eax, esi
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x16
  __asm mov esi, dword ptr [esi - 4]
  __asm add ecx, 0x23
  __asm sub eax, esi
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x76 __asm _emit 0x06
  __asm call dword ptr [LAB_122fc888]
  __asm push ecx
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x40 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x44 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x48 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea ecx, [ebp - 0x80]
  __asm mov dword ptr [ebp + 0x38], LAB_118bccb0
  __asm call LAB_1007e695
  __asm lea ecx, [ebp - 0x8c]
  __asm call LAB_1005600f
  __asm mov dword ptr [ebp - 0x94], LAB_118bccb0
  __asm mov ecx, dword ptr [ebp - 0x10]
  __asm mov byte ptr [ebp - 4], 0xb
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xec __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xf0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0x18]
  __asm mov byte ptr [ebp - 4], 0xc
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xe4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xe8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp - 0x30]
  __asm call LAB_10005f9c
  __asm lea ecx, [ebp - 0x3c]
  __asm call LAB_1005de7c
  __asm lea ecx, [ebp - 0xcc]
  __asm call LAB_10074c85
  __asm mov ecx, dword ptr [ebp + 0x34]
  __asm mov byte ptr [ebp - 4], 0xd
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x30 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x34 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp + 0x2c]
  __asm mov byte ptr [ebp - 4], 0xe
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x28 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x2c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp + 0x5c]
  __asm mov byte ptr [ebp - 4], 0xf
  __asm call LAB_1005c315
  __asm lea ecx, [ebp - 0xa0]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x5c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1007e695
  __asm lea ecx, [ebp - 0xac]
  __asm call LAB_1005600f
  __asm mov dword ptr [ebp - 0xb4], LAB_118bccb0
  __asm mov ecx, dword ptr [ebp - 0x44]
  __asm mov byte ptr [ebp - 4], 0x10
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xb8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xbc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0x4c]
  __asm mov byte ptr [ebp - 4], 0x11
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xb0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xb4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp - 0x64]
  __asm call LAB_10005f9c
  __asm lea ecx, [ebp - 0x70]
  __asm call LAB_1005de7c
  __asm lea ecx, [ebp - 0xe4]
  __asm call LAB_10074c85
  __asm mov ecx, dword ptr [ebp + 0x18]
  __asm mov byte ptr [ebp - 4], 0x12
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp + 0x10]
  __asm mov byte ptr [ebp - 4], 0x13
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 8]
  __asm lea ecx, [ebp + 0x58]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm mov eax, dword ptr [ebp + 0x68]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm lea esp, [ebp + 0x60]
  __asm pop ebp
  __asm ret 4
}




// Reference entry 106169f0; body size 622 bytes.
#line 1 "ENTRY_106169f0"

__declspec(naked) void FUN_106169f0(void)

{
  __asm push ebp
  __asm lea ebp, [esp - 0x74]
  __asm sub esp, 0x74
  __asm push -1
  __asm push offset LAB_115bd395
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 0x38
  __asm push esi
  __asm push edi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push offset LAB_118bcc7c
  __asm lea ecx, [ebp + 0x70]
  __asm call LAB_1005273e
  __asm push dword ptr [LAB_121a2128]
  __asm lea ecx, [ebp + 0x34]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10088a0f
  __asm mov esi, eax
  __asm lea eax, [ebp + 0x70]
  __asm mov byte ptr [ebp - 4], 1
  __asm push eax
  __asm lea ecx, [ebp - 0x44]
  __asm call LAB_1000269e
  __asm lea ecx, [esi + 4]
  __asm mov byte ptr [ebp - 4], 2
  __asm push ecx
  __asm lea ecx, [ebp]
  __asm push ecx
  __asm mov ecx, eax
  __asm call LAB_10047b68
  __asm push eax
  __asm lea ecx, [ebp - 0x2c]
  __asm mov byte ptr [ebp - 4], 3
  __asm call LAB_10014e57
  __asm xorps xmm0, xmm0
  __asm mov dword ptr [ebp + 0x50], LAB_118bccd4
  __asm movups xmmword ptr [ebp + 0x54], xmm0
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x64 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x68 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x6c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea eax, [ebp - 0x2c]
  __asm mov byte ptr [ebp - 4], 5
  __asm push eax
  __asm lea ecx, [ebp + 0x50]
  __asm call LAB_1001adca
  __asm mov ecx, dword ptr [ebp + 0x7c]
  __asm push eax
  __asm call LAB_100904ad
  __asm mov esi, dword ptr [ebp + 0x64]
  __asm mov byte ptr [ebp - 4], 4
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x5c
  __asm mov edi, dword ptr [ebp + 0x68]
  __asm cmp esi, edi
  __asm _emit 0x74 __asm _emit 0x14
  __asm nop
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 0
  __asm call dword ptr [eax]
  __asm add esi, 0x20
  __asm cmp esi, edi
  __asm _emit 0x75 __asm _emit 0xf1
  __asm mov esi, dword ptr [ebp + 0x64]
  __asm mov ecx, dword ptr [ebp + 0x6c]
  __asm mov eax, esi
  __asm sub ecx, esi
  __asm and ecx, 0xffffffe0
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x10
  __asm mov esi, dword ptr [esi - 4]
  __asm add ecx, 0x23
  __asm sub eax, esi
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x77 __asm _emit 0x71
  __asm push ecx
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x64 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x68 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x6c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov esi, dword ptr [ebp + 0x58]
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x70
  __asm mov edi, dword ptr [ebp + 0x5c]
  __asm cmp esi, edi
  __asm _emit 0x74 __asm _emit 0x11
  __asm mov ecx, esi
  __asm call LAB_10002699
  __asm add esi, 0x34
  __asm cmp esi, edi
  __asm _emit 0x75 __asm _emit 0xf2
  __asm mov esi, dword ptr [ebp + 0x58]
  __asm mov ecx, dword ptr [ebp + 0x60]
  __asm mov eax, 0x4ec4ec4f
  __asm sub ecx, esi
  __asm imul ecx
  __asm sar edx, 4
  __asm mov eax, edx
  __asm shr eax, 0x1f
  __asm add eax, edx
  __asm imul ecx, eax, 0x34
  __asm mov eax, esi
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x16
  __asm mov esi, dword ptr [esi - 4]
  __asm add ecx, 0x23
  __asm sub eax, esi
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x76 __asm _emit 0x06
  __asm call dword ptr [LAB_122fc888]
  __asm push ecx
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x58 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x5c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x60 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea ecx, [ebp - 0x18]
  __asm mov dword ptr [ebp + 0x50], LAB_118bccb0
  __asm call LAB_1007e695
  __asm lea ecx, [ebp - 0x24]
  __asm call LAB_1005600f
  __asm mov dword ptr [ebp - 0x2c], LAB_118bccb0
  __asm mov ecx, dword ptr [ebp + 0x30]
  __asm mov byte ptr [ebp - 4], 6
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x2c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x30 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp + 0x28]
  __asm mov byte ptr [ebp - 4], 7
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x28 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp + 0x10]
  __asm call LAB_10005f9c
  __asm lea ecx, [ebp + 4]
  __asm call LAB_1005de7c
  __asm lea ecx, [ebp - 0x44]
  __asm call LAB_10074c85
  __asm mov ecx, dword ptr [ebp + 0x4c]
  __asm mov byte ptr [ebp - 4], 8
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x48 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x4c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp + 0x44]
  __asm mov byte ptr [ebp - 4], 9
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x40 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x44 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 8]
  __asm lea ecx, [ebp + 0x70]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x0a __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm mov eax, dword ptr [ebp + 0x7c]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm lea esp, [ebp + 0x74]
  __asm pop ebp
  __asm ret 4
}




// Reference entry 10616d00; body size 622 bytes.
#line 1 "ENTRY_10616d00"

__declspec(naked) void FUN_10616d00(void)

{
  __asm push ebp
  __asm lea ebp, [esp - 0x74]
  __asm sub esp, 0x74
  __asm push -1
  __asm push offset LAB_115bd405
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 0x38
  __asm push esi
  __asm push edi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push offset LAB_118bcc7c
  __asm lea ecx, [ebp + 0x70]
  __asm call LAB_1005273e
  __asm push dword ptr [LAB_121a2190]
  __asm lea ecx, [ebp + 0x34]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10088a0f
  __asm mov esi, eax
  __asm lea eax, [ebp + 0x70]
  __asm mov byte ptr [ebp - 4], 1
  __asm push eax
  __asm lea ecx, [ebp - 0x44]
  __asm call LAB_1000269e
  __asm lea ecx, [esi + 4]
  __asm mov byte ptr [ebp - 4], 2
  __asm push ecx
  __asm lea ecx, [ebp]
  __asm push ecx
  __asm mov ecx, eax
  __asm call LAB_10047b68
  __asm push eax
  __asm lea ecx, [ebp - 0x2c]
  __asm mov byte ptr [ebp - 4], 3
  __asm call LAB_10014e57
  __asm xorps xmm0, xmm0
  __asm mov dword ptr [ebp + 0x50], LAB_118bccd4
  __asm movups xmmword ptr [ebp + 0x54], xmm0
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x64 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x68 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x6c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea eax, [ebp - 0x2c]
  __asm mov byte ptr [ebp - 4], 5
  __asm push eax
  __asm lea ecx, [ebp + 0x50]
  __asm call LAB_1001adca
  __asm mov ecx, dword ptr [ebp + 0x7c]
  __asm push eax
  __asm call LAB_100904ad
  __asm mov esi, dword ptr [ebp + 0x64]
  __asm mov byte ptr [ebp - 4], 4
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x5c
  __asm mov edi, dword ptr [ebp + 0x68]
  __asm cmp esi, edi
  __asm _emit 0x74 __asm _emit 0x14
  __asm nop
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 0
  __asm call dword ptr [eax]
  __asm add esi, 0x20
  __asm cmp esi, edi
  __asm _emit 0x75 __asm _emit 0xf1
  __asm mov esi, dword ptr [ebp + 0x64]
  __asm mov ecx, dword ptr [ebp + 0x6c]
  __asm mov eax, esi
  __asm sub ecx, esi
  __asm and ecx, 0xffffffe0
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x10
  __asm mov esi, dword ptr [esi - 4]
  __asm add ecx, 0x23
  __asm sub eax, esi
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x77 __asm _emit 0x71
  __asm push ecx
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x64 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x68 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x6c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov esi, dword ptr [ebp + 0x58]
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x70
  __asm mov edi, dword ptr [ebp + 0x5c]
  __asm cmp esi, edi
  __asm _emit 0x74 __asm _emit 0x11
  __asm mov ecx, esi
  __asm call LAB_10002699
  __asm add esi, 0x34
  __asm cmp esi, edi
  __asm _emit 0x75 __asm _emit 0xf2
  __asm mov esi, dword ptr [ebp + 0x58]
  __asm mov ecx, dword ptr [ebp + 0x60]
  __asm mov eax, 0x4ec4ec4f
  __asm sub ecx, esi
  __asm imul ecx
  __asm sar edx, 4
  __asm mov eax, edx
  __asm shr eax, 0x1f
  __asm add eax, edx
  __asm imul ecx, eax, 0x34
  __asm mov eax, esi
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x16
  __asm mov esi, dword ptr [esi - 4]
  __asm add ecx, 0x23
  __asm sub eax, esi
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x76 __asm _emit 0x06
  __asm call dword ptr [LAB_122fc888]
  __asm push ecx
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x58 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x5c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x60 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea ecx, [ebp - 0x18]
  __asm mov dword ptr [ebp + 0x50], LAB_118bccb0
  __asm call LAB_1007e695
  __asm lea ecx, [ebp - 0x24]
  __asm call LAB_1005600f
  __asm mov dword ptr [ebp - 0x2c], LAB_118bccb0
  __asm mov ecx, dword ptr [ebp + 0x30]
  __asm mov byte ptr [ebp - 4], 6
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x2c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x30 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp + 0x28]
  __asm mov byte ptr [ebp - 4], 7
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x28 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp + 0x10]
  __asm call LAB_10005f9c
  __asm lea ecx, [ebp + 4]
  __asm call LAB_1005de7c
  __asm lea ecx, [ebp - 0x44]
  __asm call LAB_10074c85
  __asm mov ecx, dword ptr [ebp + 0x4c]
  __asm mov byte ptr [ebp - 4], 8
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x48 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x4c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp + 0x44]
  __asm mov byte ptr [ebp - 4], 9
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x40 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x44 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 8]
  __asm lea ecx, [ebp + 0x70]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x0a __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm mov eax, dword ptr [ebp + 0x7c]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm lea esp, [ebp + 0x74]
  __asm pop ebp
  __asm ret 4
}




// Reference entry 10617010; body size 932 bytes.
#line 1 "ENTRY_10617010"

__declspec(naked) void FUN_10617010(void)

{
  __asm push ebp
  __asm lea ebp, [esp - 0x60]
  __asm sub esp, 0x60
  __asm push -1
  __asm push offset LAB_115bd4a9
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 0xd8
  __asm push esi
  __asm push edi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push offset LAB_118bcc7c
  __asm lea ecx, [ebp + 0x58]
  __asm call LAB_1005273e
  __asm lea ecx, [ebp]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10061455
  __asm mov esi, eax
  __asm lea eax, [ebp + 0x58]
  __asm mov byte ptr [ebp - 4], 1
  __asm push eax
  __asm lea ecx, [ebp - 0xe4]
  __asm call LAB_1000269e
  __asm lea ecx, [esi + 4]
  __asm mov byte ptr [ebp - 4], 2
  __asm push ecx
  __asm lea ecx, [ebp - 0x74]
  __asm push ecx
  __asm mov ecx, eax
  __asm call LAB_10047b68
  __asm push eax
  __asm lea ecx, [ebp - 0xb4]
  __asm mov byte ptr [ebp - 4], 3
  __asm call LAB_10014e57
  __asm push offset LAB_118bd270
  __asm lea ecx, [ebp + 0x5c]
  __asm mov byte ptr [ebp - 4], 4
  __asm call LAB_1005273e
  __asm lea ecx, [ebp + 0x1c]
  __asm mov byte ptr [ebp - 4], 5
  __asm call LAB_10061455
  __asm mov esi, eax
  __asm lea eax, [ebp + 0x5c]
  __asm mov byte ptr [ebp - 4], 6
  __asm push eax
  __asm lea ecx, [ebp - 0xcc]
  __asm call LAB_1000269e
  __asm lea ecx, [esi + 4]
  __asm mov byte ptr [ebp - 4], 7
  __asm push ecx
  __asm lea ecx, [ebp - 0x40]
  __asm push ecx
  __asm mov ecx, eax
  __asm call LAB_10047b68
  __asm push eax
  __asm lea ecx, [ebp - 0x94]
  __asm mov byte ptr [ebp - 4], 8
  __asm call LAB_10014e57
  __asm xorps xmm0, xmm0
  __asm mov dword ptr [ebp + 0x38], LAB_118bccd4
  __asm movups xmmword ptr [ebp + 0x3c], xmm0
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x4c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x50 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x54 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea eax, [ebp - 0x94]
  __asm mov byte ptr [ebp - 4], 0xa
  __asm push eax
  __asm lea ecx, [ebp + 0x38]
  __asm call LAB_1001adca
  __asm lea ecx, [ebp - 0xb4]
  __asm push ecx
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 8]
  __asm mov ecx, dword ptr [ebp + 0x68]
  __asm push eax
  __asm call LAB_100904ad
  __asm mov esi, dword ptr [ebp + 0x4c]
  __asm mov byte ptr [ebp - 4], 9
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x5a
  __asm mov edi, dword ptr [ebp + 0x50]
  __asm cmp esi, edi
  __asm _emit 0x74 __asm _emit 0x12
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 0
  __asm call dword ptr [eax]
  __asm add esi, 0x20
  __asm cmp esi, edi
  __asm _emit 0x75 __asm _emit 0xf1
  __asm mov esi, dword ptr [ebp + 0x4c]
  __asm mov ecx, dword ptr [ebp + 0x54]
  __asm mov eax, esi
  __asm sub ecx, esi
  __asm and ecx, 0xffffffe0
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x10
  __asm mov esi, dword ptr [esi - 4]
  __asm add ecx, 0x23
  __asm sub eax, esi
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x77 __asm _emit 0x71
  __asm push ecx
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x4c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x50 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x54 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov esi, dword ptr [ebp + 0x40]
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x70
  __asm mov edi, dword ptr [ebp + 0x44]
  __asm cmp esi, edi
  __asm _emit 0x74 __asm _emit 0x11
  __asm mov ecx, esi
  __asm call LAB_10002699
  __asm add esi, 0x34
  __asm cmp esi, edi
  __asm _emit 0x75 __asm _emit 0xf2
  __asm mov esi, dword ptr [ebp + 0x40]
  __asm mov ecx, dword ptr [ebp + 0x48]
  __asm mov eax, 0x4ec4ec4f
  __asm sub ecx, esi
  __asm imul ecx
  __asm sar edx, 4
  __asm mov eax, edx
  __asm shr eax, 0x1f
  __asm add eax, edx
  __asm imul ecx, eax, 0x34
  __asm mov eax, esi
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x16
  __asm mov esi, dword ptr [esi - 4]
  __asm add ecx, 0x23
  __asm sub eax, esi
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x76 __asm _emit 0x06
  __asm call dword ptr [LAB_122fc888]
  __asm push ecx
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x40 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x44 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x48 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea ecx, [ebp - 0x80]
  __asm mov dword ptr [ebp + 0x38], LAB_118bccb0
  __asm call LAB_1007e695
  __asm lea ecx, [ebp - 0x8c]
  __asm call LAB_1005600f
  __asm mov dword ptr [ebp - 0x94], LAB_118bccb0
  __asm mov ecx, dword ptr [ebp - 0x10]
  __asm mov byte ptr [ebp - 4], 0xb
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xec __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xf0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0x18]
  __asm mov byte ptr [ebp - 4], 0xc
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xe4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xe8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp - 0x30]
  __asm call LAB_10005f9c
  __asm lea ecx, [ebp - 0x3c]
  __asm call LAB_1005de7c
  __asm lea ecx, [ebp - 0xcc]
  __asm call LAB_10074c85
  __asm mov ecx, dword ptr [ebp + 0x34]
  __asm mov byte ptr [ebp - 4], 0xd
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x30 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x34 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp + 0x2c]
  __asm mov byte ptr [ebp - 4], 0xe
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x28 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x2c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp + 0x5c]
  __asm mov byte ptr [ebp - 4], 0xf
  __asm call LAB_1005c315
  __asm lea ecx, [ebp - 0xa0]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x5c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1007e695
  __asm lea ecx, [ebp - 0xac]
  __asm call LAB_1005600f
  __asm mov dword ptr [ebp - 0xb4], LAB_118bccb0
  __asm mov ecx, dword ptr [ebp - 0x44]
  __asm mov byte ptr [ebp - 4], 0x10
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xb8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xbc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0x4c]
  __asm mov byte ptr [ebp - 4], 0x11
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xb0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xb4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp - 0x64]
  __asm call LAB_10005f9c
  __asm lea ecx, [ebp - 0x70]
  __asm call LAB_1005de7c
  __asm lea ecx, [ebp - 0xe4]
  __asm call LAB_10074c85
  __asm mov ecx, dword ptr [ebp + 0x18]
  __asm mov byte ptr [ebp - 4], 0x12
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp + 0x10]
  __asm mov byte ptr [ebp - 4], 0x13
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 8]
  __asm lea ecx, [ebp + 0x58]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm mov eax, dword ptr [ebp + 0x68]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm lea esp, [ebp + 0x60]
  __asm pop ebp
  __asm ret 4
}




// Reference entry 106174a0; body size 622 bytes.
#line 1 "ENTRY_106174a0"

__declspec(naked) void FUN_106174a0(void)

{
  __asm push ebp
  __asm lea ebp, [esp - 0x74]
  __asm sub esp, 0x74
  __asm push -1
  __asm push offset LAB_115bd525
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 0x38
  __asm push esi
  __asm push edi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push offset LAB_118bcc7c
  __asm lea ecx, [ebp + 0x70]
  __asm call LAB_1005273e
  __asm push dword ptr [LAB_121a2148]
  __asm lea ecx, [ebp + 0x34]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10088a0f
  __asm mov esi, eax
  __asm lea eax, [ebp + 0x70]
  __asm mov byte ptr [ebp - 4], 1
  __asm push eax
  __asm lea ecx, [ebp - 0x44]
  __asm call LAB_1000269e
  __asm lea ecx, [esi + 4]
  __asm mov byte ptr [ebp - 4], 2
  __asm push ecx
  __asm lea ecx, [ebp]
  __asm push ecx
  __asm mov ecx, eax
  __asm call LAB_10047b68
  __asm push eax
  __asm lea ecx, [ebp - 0x2c]
  __asm mov byte ptr [ebp - 4], 3
  __asm call LAB_10014e57
  __asm xorps xmm0, xmm0
  __asm mov dword ptr [ebp + 0x50], LAB_118bccd4
  __asm movups xmmword ptr [ebp + 0x54], xmm0
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x64 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x68 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x6c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea eax, [ebp - 0x2c]
  __asm mov byte ptr [ebp - 4], 5
  __asm push eax
  __asm lea ecx, [ebp + 0x50]
  __asm call LAB_1001adca
  __asm mov ecx, dword ptr [ebp + 0x7c]
  __asm push eax
  __asm call LAB_100904ad
  __asm mov esi, dword ptr [ebp + 0x64]
  __asm mov byte ptr [ebp - 4], 4
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x5c
  __asm mov edi, dword ptr [ebp + 0x68]
  __asm cmp esi, edi
  __asm _emit 0x74 __asm _emit 0x14
  __asm nop
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 0
  __asm call dword ptr [eax]
  __asm add esi, 0x20
  __asm cmp esi, edi
  __asm _emit 0x75 __asm _emit 0xf1
  __asm mov esi, dword ptr [ebp + 0x64]
  __asm mov ecx, dword ptr [ebp + 0x6c]
  __asm mov eax, esi
  __asm sub ecx, esi
  __asm and ecx, 0xffffffe0
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x10
  __asm mov esi, dword ptr [esi - 4]
  __asm add ecx, 0x23
  __asm sub eax, esi
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x77 __asm _emit 0x71
  __asm push ecx
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x64 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x68 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x6c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov esi, dword ptr [ebp + 0x58]
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x70
  __asm mov edi, dword ptr [ebp + 0x5c]
  __asm cmp esi, edi
  __asm _emit 0x74 __asm _emit 0x11
  __asm mov ecx, esi
  __asm call LAB_10002699
  __asm add esi, 0x34
  __asm cmp esi, edi
  __asm _emit 0x75 __asm _emit 0xf2
  __asm mov esi, dword ptr [ebp + 0x58]
  __asm mov ecx, dword ptr [ebp + 0x60]
  __asm mov eax, 0x4ec4ec4f
  __asm sub ecx, esi
  __asm imul ecx
  __asm sar edx, 4
  __asm mov eax, edx
  __asm shr eax, 0x1f
  __asm add eax, edx
  __asm imul ecx, eax, 0x34
  __asm mov eax, esi
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x16
  __asm mov esi, dword ptr [esi - 4]
  __asm add ecx, 0x23
  __asm sub eax, esi
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x76 __asm _emit 0x06
  __asm call dword ptr [LAB_122fc888]
  __asm push ecx
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x58 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x5c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x60 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea ecx, [ebp - 0x18]
  __asm mov dword ptr [ebp + 0x50], LAB_118bccb0
  __asm call LAB_1007e695
  __asm lea ecx, [ebp - 0x24]
  __asm call LAB_1005600f
  __asm mov dword ptr [ebp - 0x2c], LAB_118bccb0
  __asm mov ecx, dword ptr [ebp + 0x30]
  __asm mov byte ptr [ebp - 4], 6
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x2c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x30 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp + 0x28]
  __asm mov byte ptr [ebp - 4], 7
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x28 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp + 0x10]
  __asm call LAB_10005f9c
  __asm lea ecx, [ebp + 4]
  __asm call LAB_1005de7c
  __asm lea ecx, [ebp - 0x44]
  __asm call LAB_10074c85
  __asm mov ecx, dword ptr [ebp + 0x4c]
  __asm mov byte ptr [ebp - 4], 8
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x48 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x4c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp + 0x44]
  __asm mov byte ptr [ebp - 4], 9
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x40 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x44 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 8]
  __asm lea ecx, [ebp + 0x70]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x0a __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm mov eax, dword ptr [ebp + 0x7c]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm lea esp, [ebp + 0x74]
  __asm pop ebp
  __asm ret 4
}




// Reference entry 106177b0; body size 622 bytes.
#line 1 "ENTRY_106177b0"

__declspec(naked) void FUN_106177b0(void)

{
  __asm push ebp
  __asm lea ebp, [esp - 0x74]
  __asm sub esp, 0x74
  __asm push -1
  __asm push offset LAB_115bd595
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 0x38
  __asm push esi
  __asm push edi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push offset LAB_118bcc7c
  __asm lea ecx, [ebp + 0x70]
  __asm call LAB_1005273e
  __asm push dword ptr [LAB_121a2128]
  __asm lea ecx, [ebp + 0x34]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10088a0f
  __asm mov esi, eax
  __asm lea eax, [ebp + 0x70]
  __asm mov byte ptr [ebp - 4], 1
  __asm push eax
  __asm lea ecx, [ebp - 0x44]
  __asm call LAB_1000269e
  __asm lea ecx, [esi + 4]
  __asm mov byte ptr [ebp - 4], 2
  __asm push ecx
  __asm lea ecx, [ebp]
  __asm push ecx
  __asm mov ecx, eax
  __asm call LAB_10047b68
  __asm push eax
  __asm lea ecx, [ebp - 0x2c]
  __asm mov byte ptr [ebp - 4], 3
  __asm call LAB_10014e57
  __asm xorps xmm0, xmm0
  __asm mov dword ptr [ebp + 0x50], LAB_118bccd4
  __asm movups xmmword ptr [ebp + 0x54], xmm0
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x64 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x68 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x6c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea eax, [ebp - 0x2c]
  __asm mov byte ptr [ebp - 4], 5
  __asm push eax
  __asm lea ecx, [ebp + 0x50]
  __asm call LAB_1001adca
  __asm mov ecx, dword ptr [ebp + 0x7c]
  __asm push eax
  __asm call LAB_100904ad
  __asm mov esi, dword ptr [ebp + 0x64]
  __asm mov byte ptr [ebp - 4], 4
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x5c
  __asm mov edi, dword ptr [ebp + 0x68]
  __asm cmp esi, edi
  __asm _emit 0x74 __asm _emit 0x14
  __asm nop
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 0
  __asm call dword ptr [eax]
  __asm add esi, 0x20
  __asm cmp esi, edi
  __asm _emit 0x75 __asm _emit 0xf1
  __asm mov esi, dword ptr [ebp + 0x64]
  __asm mov ecx, dword ptr [ebp + 0x6c]
  __asm mov eax, esi
  __asm sub ecx, esi
  __asm and ecx, 0xffffffe0
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x10
  __asm mov esi, dword ptr [esi - 4]
  __asm add ecx, 0x23
  __asm sub eax, esi
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x77 __asm _emit 0x71
  __asm push ecx
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x64 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x68 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x6c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov esi, dword ptr [ebp + 0x58]
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x70
  __asm mov edi, dword ptr [ebp + 0x5c]
  __asm cmp esi, edi
  __asm _emit 0x74 __asm _emit 0x11
  __asm mov ecx, esi
  __asm call LAB_10002699
  __asm add esi, 0x34
  __asm cmp esi, edi
  __asm _emit 0x75 __asm _emit 0xf2
  __asm mov esi, dword ptr [ebp + 0x58]
  __asm mov ecx, dword ptr [ebp + 0x60]
  __asm mov eax, 0x4ec4ec4f
  __asm sub ecx, esi
  __asm imul ecx
  __asm sar edx, 4
  __asm mov eax, edx
  __asm shr eax, 0x1f
  __asm add eax, edx
  __asm imul ecx, eax, 0x34
  __asm mov eax, esi
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x16
  __asm mov esi, dword ptr [esi - 4]
  __asm add ecx, 0x23
  __asm sub eax, esi
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x76 __asm _emit 0x06
  __asm call dword ptr [LAB_122fc888]
  __asm push ecx
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x58 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x5c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x60 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea ecx, [ebp - 0x18]
  __asm mov dword ptr [ebp + 0x50], LAB_118bccb0
  __asm call LAB_1007e695
  __asm lea ecx, [ebp - 0x24]
  __asm call LAB_1005600f
  __asm mov dword ptr [ebp - 0x2c], LAB_118bccb0
  __asm mov ecx, dword ptr [ebp + 0x30]
  __asm mov byte ptr [ebp - 4], 6
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x2c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x30 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp + 0x28]
  __asm mov byte ptr [ebp - 4], 7
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x28 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp + 0x10]
  __asm call LAB_10005f9c
  __asm lea ecx, [ebp + 4]
  __asm call LAB_1005de7c
  __asm lea ecx, [ebp - 0x44]
  __asm call LAB_10074c85
  __asm mov ecx, dword ptr [ebp + 0x4c]
  __asm mov byte ptr [ebp - 4], 8
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x48 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x4c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp + 0x44]
  __asm mov byte ptr [ebp - 4], 9
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x40 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x44 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 8]
  __asm lea ecx, [ebp + 0x70]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x0a __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm mov eax, dword ptr [ebp + 0x7c]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm lea esp, [ebp + 0x74]
  __asm pop ebp
  __asm ret 4
}




// Reference entry 10617ac0; body size 1550 bytes.
#line 1 "ENTRY_10617ac0"

__declspec(naked) void FUN_10617ac0(void)

{
  __asm push ebp
  __asm lea ebp, [esp - 0x74]
  __asm sub esp, 0x74
  __asm push -1
  __asm push offset LAB_115bd689
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 0x1e8
  __asm push ebx
  __asm push esi
  __asm push edi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ebx, ecx
  __asm push dword ptr [LAB_121a2184]
  __asm lea ecx, [ebp - 0x28]
  __asm call LAB_10088a0f
  __asm mov esi, eax
  __asm lea ecx, [ebp - 0x1f4]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_100246a4
  __asm lea ecx, [esi + 4]
  __asm mov byte ptr [ebp - 4], 1
  __asm push ecx
  __asm lea ecx, [ebp - 0xf8]
  __asm push ecx
  __asm mov ecx, eax
  __asm call LAB_10047b68
  __asm push eax
  __asm lea ecx, [ebp - 0x178]
  __asm mov byte ptr [ebp - 4], 2
  __asm call LAB_10014e57
  __asm push dword ptr [LAB_121a216c]
  __asm lea ecx, [ebp]
  __asm mov byte ptr [ebp - 4], 3
  __asm call LAB_10088a0f
  __asm mov esi, eax
  __asm lea ecx, [ebp - 0x1dc]
  __asm mov byte ptr [ebp - 4], 4
  __asm call LAB_100246a4
  __asm lea ecx, [esi + 4]
  __asm mov byte ptr [ebp - 4], 5
  __asm push ecx
  __asm lea ecx, [ebp - 0xc4]
  __asm push ecx
  __asm mov ecx, eax
  __asm call LAB_10047b68
  __asm push eax
  __asm lea ecx, [ebp - 0x158]
  __asm mov byte ptr [ebp - 4], 6
  __asm call LAB_10014e57
  __asm push dword ptr [LAB_121a218c]
  __asm lea ecx, [ebp + 0x1c]
  __asm mov byte ptr [ebp - 4], 7
  __asm call LAB_10088a0f
  __asm mov esi, eax
  __asm lea ecx, [ebp - 0x1c4]
  __asm mov byte ptr [ebp - 4], 8
  __asm call LAB_100763b9
  __asm lea ecx, [esi + 4]
  __asm mov byte ptr [ebp - 4], 9
  __asm push ecx
  __asm lea ecx, [ebp - 0x90]
  __asm push ecx
  __asm mov ecx, eax
  __asm call LAB_10047b68
  __asm push eax
  __asm lea ecx, [ebp - 0x138]
  __asm mov byte ptr [ebp - 4], 0xa
  __asm call LAB_10014e57
  __asm push dword ptr [LAB_121a217c]
  __asm lea ecx, [ebp + 0x38]
  __asm mov byte ptr [ebp - 4], 0xb
  __asm call LAB_10088a0f
  __asm mov esi, eax
  __asm lea ecx, [ebp - 0x1ac]
  __asm mov byte ptr [ebp - 4], 0xc
  __asm call LAB_10038c3a
  __asm lea ecx, [esi + 4]
  __asm mov byte ptr [ebp - 4], 0xd
  __asm push ecx
  __asm lea ecx, [ebp - 0x5c]
  __asm push ecx
  __asm mov ecx, eax
  __asm call LAB_10047b68
  __asm push eax
  __asm lea ecx, [ebp - 0x118]
  __asm mov byte ptr [ebp - 4], 0xe
  __asm call LAB_10014e57
  __asm xorps xmm0, xmm0
  __asm mov dword ptr [ebp + 0x54], LAB_118bccd4
  __asm movups xmmword ptr [ebp + 0x58], xmm0
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x68 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x6c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x70 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea eax, [ebp - 0x118]
  __asm mov byte ptr [ebp - 4], 0x10
  __asm push eax
  __asm lea ecx, [ebp + 0x54]
  __asm call LAB_1001adca
  __asm lea ecx, [ebp - 0x194]
  __asm mov edi, eax
  __asm call LAB_10058fb7
  __asm mov esi, dword ptr [edi]
  __asm lea ecx, [ebp - 0x138]
  __asm push ecx
  __asm push eax
  __asm lea ecx, [ebx + 0xac]
  __asm mov byte ptr [ebp - 4], 0x11
  __asm call LAB_10017f3a
  __asm movzx eax, al
  __asm mov ecx, edi
  __asm push eax
  __asm call dword ptr [esi + 0xc]
  __asm mov ecx, ebx
  __asm mov esi, eax
  __asm call LAB_1000d2bf
  __asm lea ecx, [eax + 0x100]
  __asm call LAB_100713f0
  __asm cmp eax, 1
  __asm lea edx, [ebp - 0x158]
  __asm mov eax, dword ptr [esi]
  __asm setne cl
  __asm push edx
  __asm push ecx
  __asm mov ecx, esi
  __asm call dword ptr [eax + 0xc]
  __asm lea ecx, [ebp - 0x178]
  __asm push ecx
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 0x14]
  __asm mov ebx, dword ptr [ebp + 0x7c]
  __asm mov ecx, ebx
  __asm push eax
  __asm call LAB_100904ad
  __asm lea ecx, [ebp - 0x184]
  __asm call LAB_10005f9c
  __asm lea ecx, [ebp - 0x190]
  __asm call LAB_1005de7c
  __asm mov esi, dword ptr [ebp + 0x68]
  __asm mov byte ptr [ebp - 4], 0xf
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x5a
  __asm mov edi, dword ptr [ebp + 0x6c]
  __asm cmp esi, edi
  __asm _emit 0x74 __asm _emit 0x12
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 0
  __asm call dword ptr [eax]
  __asm add esi, 0x20
  __asm cmp esi, edi
  __asm _emit 0x75 __asm _emit 0xf1
  __asm mov esi, dword ptr [ebp + 0x68]
  __asm mov ecx, dword ptr [ebp + 0x70]
  __asm mov eax, esi
  __asm sub ecx, esi
  __asm and ecx, 0xffffffe0
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x10
  __asm mov esi, dword ptr [esi - 4]
  __asm add ecx, 0x23
  __asm sub eax, esi
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x77 __asm _emit 0x71
  __asm push ecx
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x68 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x6c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x70 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov esi, dword ptr [ebp + 0x5c]
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x70
  __asm mov edi, dword ptr [ebp + 0x60]
  __asm cmp esi, edi
  __asm _emit 0x74 __asm _emit 0x11
  __asm mov ecx, esi
  __asm call LAB_10002699
  __asm add esi, 0x34
  __asm cmp esi, edi
  __asm _emit 0x75 __asm _emit 0xf2
  __asm mov esi, dword ptr [ebp + 0x5c]
  __asm mov ecx, dword ptr [ebp + 0x64]
  __asm mov eax, 0x4ec4ec4f
  __asm sub ecx, esi
  __asm imul ecx
  __asm sar edx, 4
  __asm mov eax, edx
  __asm shr eax, 0x1f
  __asm add eax, edx
  __asm imul ecx, eax, 0x34
  __asm mov eax, esi
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x16
  __asm mov esi, dword ptr [esi - 4]
  __asm add ecx, 0x23
  __asm sub eax, esi
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x76 __asm _emit 0x06
  __asm call dword ptr [LAB_122fc888]
  __asm push ecx
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x5c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x60 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x64 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea ecx, [ebp - 0x104]
  __asm mov dword ptr [ebp + 0x54], LAB_118bccb0
  __asm call LAB_1007e695
  __asm lea ecx, [ebp - 0x110]
  __asm call LAB_1005600f
  __asm mov dword ptr [ebp - 0x118], LAB_118bccb0
  __asm mov ecx, dword ptr [ebp - 0x2c]
  __asm mov byte ptr [ebp - 4], 0x12
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xd0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xd4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0x34]
  __asm mov byte ptr [ebp - 4], 0x13
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xc8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xcc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp - 0x4c]
  __asm call LAB_10005f9c
  __asm lea ecx, [ebp - 0x58]
  __asm call LAB_1005de7c
  __asm lea ecx, [ebp - 0x1ac]
  __asm call LAB_10074c85
  __asm mov ecx, dword ptr [ebp + 0x50]
  __asm mov byte ptr [ebp - 4], 0x14
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x4c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x50 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp + 0x48]
  __asm mov byte ptr [ebp - 4], 0x15
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x44 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x48 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp - 0x124]
  __asm call LAB_1007e695
  __asm lea ecx, [ebp - 0x130]
  __asm call LAB_1005600f
  __asm mov dword ptr [ebp - 0x138], LAB_118bccb0
  __asm mov ecx, dword ptr [ebp - 0x60]
  __asm mov byte ptr [ebp - 4], 0x16
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x9c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xa0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0x68]
  __asm mov byte ptr [ebp - 4], 0x17
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x94 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x98 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp - 0x80]
  __asm call LAB_10005f9c
  __asm lea ecx, [ebp - 0x8c]
  __asm call LAB_1005de7c
  __asm lea ecx, [ebp - 0x1c4]
  __asm call LAB_10074c85
  __asm mov ecx, dword ptr [ebp + 0x34]
  __asm mov byte ptr [ebp - 4], 0x18
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x30 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x34 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp + 0x2c]
  __asm mov byte ptr [ebp - 4], 0x19
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x28 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x2c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp - 0x144]
  __asm call LAB_1007e695
  __asm lea ecx, [ebp - 0x150]
  __asm call LAB_1005600f
  __asm mov dword ptr [ebp - 0x158], LAB_118bccb0
  __asm mov ecx, dword ptr [ebp - 0x94]
  __asm mov byte ptr [ebp - 4], 0x1a
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x19 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0x68 __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0x6c __asm _emit 0xff
  __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0x9c]
  __asm mov byte ptr [ebp - 4], 0x1b
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x19 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0x60 __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0x64 __asm _emit 0xff
  __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp - 0xb4]
  __asm call LAB_10005f9c
  __asm lea ecx, [ebp - 0xc0]
  __asm call LAB_1005de7c
  __asm lea ecx, [ebp - 0x1dc]
  __asm call LAB_10074c85
  __asm mov ecx, dword ptr [ebp + 0x18]
  __asm mov byte ptr [ebp - 4], 0x1c
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp + 0x10]
  __asm mov byte ptr [ebp - 4], 0x1d
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp - 0x164]
  __asm call LAB_1007e695
  __asm lea ecx, [ebp - 0x170]
  __asm call LAB_1005600f
  __asm mov dword ptr [ebp - 0x178], LAB_118bccb0
  __asm mov ecx, dword ptr [ebp - 0xc8]
  __asm mov byte ptr [ebp - 4], 0x1e
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x19 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0x34 __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0x38 __asm _emit 0xff
  __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xd0]
  __asm mov byte ptr [ebp - 4], 0x1f
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x19 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0x2c __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0x30 __asm _emit 0xff
  __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp - 0xe8]
  __asm call LAB_10005f9c
  __asm lea ecx, [ebp - 0xf4]
  __asm call LAB_1005de7c
  __asm lea ecx, [ebp - 0x1f4]
  __asm call LAB_10074c85
  __asm mov ecx, dword ptr [ebp - 0x10]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x20 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xec __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xf0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0x18]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x21 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xe4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xe8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 8]
  __asm mov eax, ebx
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm lea esp, [ebp + 0x74]
  __asm pop ebp
  __asm ret 4
}




// Reference entry 10618260; body size 621 bytes.
#line 1 "ENTRY_10618260"

__declspec(naked) void FUN_10618260(void)

{
  __asm push ebp
  __asm lea ebp, [esp - 0x74]
  __asm sub esp, 0x74
  __asm push -1
  __asm push offset LAB_115bd715
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 0x38
  __asm push esi
  __asm push edi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push offset LAB_118bd270
  __asm lea ecx, [ebp + 0x70]
  __asm call LAB_1005273e
  __asm lea ecx, [ebp + 0x34]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10061455
  __asm mov esi, eax
  __asm lea eax, [ebp + 0x70]
  __asm mov byte ptr [ebp - 4], 1
  __asm push eax
  __asm lea ecx, [ebp - 0x44]
  __asm call LAB_1000269e
  __asm lea ecx, [esi + 4]
  __asm mov byte ptr [ebp - 4], 2
  __asm push ecx
  __asm lea ecx, [ebp]
  __asm push ecx
  __asm mov ecx, eax
  __asm call LAB_10047b68
  __asm push eax
  __asm lea ecx, [ebp - 0x2c]
  __asm mov byte ptr [ebp - 4], 3
  __asm call LAB_10014e57
  __asm xorps xmm0, xmm0
  __asm mov dword ptr [ebp + 0x50], LAB_118bccd4
  __asm movups xmmword ptr [ebp + 0x54], xmm0
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x64 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x68 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x6c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea eax, [ebp - 0x2c]
  __asm mov byte ptr [ebp - 4], 5
  __asm push eax
  __asm lea ecx, [ebp + 0x50]
  __asm call LAB_1001adca
  __asm mov ecx, dword ptr [ebp + 0x7c]
  __asm push eax
  __asm call LAB_100904ad
  __asm mov esi, dword ptr [ebp + 0x64]
  __asm mov byte ptr [ebp - 4], 4
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x5a
  __asm mov edi, dword ptr [ebp + 0x68]
  __asm cmp esi, edi
  __asm _emit 0x74 __asm _emit 0x12
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 0
  __asm call dword ptr [eax]
  __asm add esi, 0x20
  __asm cmp esi, edi
  __asm _emit 0x75 __asm _emit 0xf1
  __asm mov esi, dword ptr [ebp + 0x64]
  __asm mov ecx, dword ptr [ebp + 0x6c]
  __asm mov eax, esi
  __asm sub ecx, esi
  __asm and ecx, 0xffffffe0
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x10
  __asm mov esi, dword ptr [esi - 4]
  __asm add ecx, 0x23
  __asm sub eax, esi
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x77 __asm _emit 0x78
  __asm push ecx
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x64 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x68 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x6c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov esi, dword ptr [ebp + 0x58]
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x77
  __asm mov edi, dword ptr [ebp + 0x5c]
  __asm cmp esi, edi
  __asm _emit 0x74 __asm _emit 0x18 __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x80 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, esi
  __asm call LAB_10002699
  __asm add esi, 0x34
  __asm cmp esi, edi
  __asm _emit 0x75 __asm _emit 0xf2
  __asm mov esi, dword ptr [ebp + 0x58]
  __asm mov ecx, dword ptr [ebp + 0x60]
  __asm mov eax, 0x4ec4ec4f
  __asm sub ecx, esi
  __asm imul ecx
  __asm sar edx, 4
  __asm mov eax, edx
  __asm shr eax, 0x1f
  __asm add eax, edx
  __asm imul ecx, eax, 0x34
  __asm mov eax, esi
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x16
  __asm mov esi, dword ptr [esi - 4]
  __asm add ecx, 0x23
  __asm sub eax, esi
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x76 __asm _emit 0x06
  __asm call dword ptr [LAB_122fc888]
  __asm push ecx
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x58 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x5c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x60 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea ecx, [ebp - 0x18]
  __asm mov dword ptr [ebp + 0x50], LAB_118bccb0
  __asm call LAB_1007e695
  __asm lea ecx, [ebp - 0x24]
  __asm call LAB_1005600f
  __asm mov dword ptr [ebp - 0x2c], LAB_118bccb0
  __asm mov ecx, dword ptr [ebp + 0x30]
  __asm mov byte ptr [ebp - 4], 6
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x2c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x30 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp + 0x28]
  __asm mov byte ptr [ebp - 4], 7
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x28 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp + 0x10]
  __asm call LAB_10005f9c
  __asm lea ecx, [ebp + 4]
  __asm call LAB_1005de7c
  __asm lea ecx, [ebp - 0x44]
  __asm call LAB_10074c85
  __asm mov ecx, dword ptr [ebp + 0x4c]
  __asm mov byte ptr [ebp - 4], 8
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x48 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x4c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp + 0x44]
  __asm mov byte ptr [ebp - 4], 9
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x40 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x44 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 8]
  __asm lea ecx, [ebp + 0x70]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x0a __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm mov eax, dword ptr [ebp + 0x7c]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm lea esp, [ebp + 0x74]
  __asm pop ebp
  __asm ret 4
}




// Reference entry 10618570; body size 941 bytes.
#line 1 "ENTRY_10618570"

__declspec(naked) void FUN_10618570(void)

{
  __asm push ebp
  __asm lea ebp, [esp - 0x60]
  __asm sub esp, 0x60
  __asm push -1
  __asm push offset LAB_115bd7b9
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 0xd8
  __asm push esi
  __asm push edi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push offset LAB_118bd270
  __asm lea ecx, [ebp + 0x58]
  __asm call LAB_1005273e
  __asm lea ecx, [ebp]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10061455
  __asm mov esi, eax
  __asm lea eax, [ebp + 0x58]
  __asm mov byte ptr [ebp - 4], 1
  __asm push eax
  __asm lea ecx, [ebp - 0xe4]
  __asm call LAB_1000269e
  __asm lea ecx, [esi + 4]
  __asm mov byte ptr [ebp - 4], 2
  __asm push ecx
  __asm lea ecx, [ebp - 0x74]
  __asm push ecx
  __asm mov ecx, eax
  __asm call LAB_10047b68
  __asm push eax
  __asm lea ecx, [ebp - 0xb4]
  __asm mov byte ptr [ebp - 4], 3
  __asm call LAB_10014e57
  __asm push offset LAB_1189f4a8
  __asm lea ecx, [ebp + 0x5c]
  __asm mov byte ptr [ebp - 4], 4
  __asm call LAB_1005273e
  __asm push dword ptr [LAB_121a2164]
  __asm lea ecx, [ebp + 0x1c]
  __asm mov byte ptr [ebp - 4], 5
  __asm call LAB_10088a0f
  __asm mov esi, eax
  __asm lea eax, [ebp + 0x5c]
  __asm mov byte ptr [ebp - 4], 6
  __asm push eax
  __asm lea ecx, [ebp - 0xcc]
  __asm call LAB_1000269e
  __asm lea ecx, [esi + 4]
  __asm mov byte ptr [ebp - 4], 7
  __asm push ecx
  __asm lea ecx, [ebp - 0x40]
  __asm push ecx
  __asm mov ecx, eax
  __asm call LAB_10047b68
  __asm push eax
  __asm lea ecx, [ebp - 0x94]
  __asm mov byte ptr [ebp - 4], 8
  __asm call LAB_10014e57
  __asm xorps xmm0, xmm0
  __asm mov dword ptr [ebp + 0x38], LAB_118bccd4
  __asm movups xmmword ptr [ebp + 0x3c], xmm0
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x4c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x50 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x54 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea eax, [ebp - 0x94]
  __asm mov byte ptr [ebp - 4], 0xa
  __asm push eax
  __asm lea ecx, [ebp + 0x38]
  __asm call LAB_1001adca
  __asm lea ecx, [ebp - 0xb4]
  __asm push ecx
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 8]
  __asm mov ecx, dword ptr [ebp + 0x68]
  __asm push eax
  __asm call LAB_100904ad
  __asm mov esi, dword ptr [ebp + 0x4c]
  __asm test esi, esi
  __asm mov byte ptr [ebp - 4], 9
  __asm _emit 0x74 __asm _emit 0x5d
  __asm mov edi, dword ptr [ebp + 0x50]
  __asm cmp esi, edi
  __asm _emit 0x74 __asm _emit 0x15 __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x00
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 0
  __asm call dword ptr [eax]
  __asm add esi, 0x20
  __asm cmp esi, edi
  __asm _emit 0x75 __asm _emit 0xf1
  __asm mov esi, dword ptr [ebp + 0x4c]
  __asm mov ecx, dword ptr [ebp + 0x54]
  __asm mov eax, esi
  __asm sub ecx, esi
  __asm and ecx, 0xffffffe0
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x10
  __asm mov esi, dword ptr [esi - 4]
  __asm add ecx, 0x23
  __asm sub eax, esi
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x77 __asm _emit 0x71
  __asm push ecx
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x4c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x50 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x54 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov esi, dword ptr [ebp + 0x40]
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x70
  __asm mov edi, dword ptr [ebp + 0x44]
  __asm cmp esi, edi
  __asm _emit 0x74 __asm _emit 0x11
  __asm mov ecx, esi
  __asm call LAB_10002699
  __asm add esi, 0x34
  __asm cmp esi, edi
  __asm _emit 0x75 __asm _emit 0xf2
  __asm mov esi, dword ptr [ebp + 0x40]
  __asm mov ecx, dword ptr [ebp + 0x48]
  __asm mov eax, 0x4ec4ec4f
  __asm sub ecx, esi
  __asm imul ecx
  __asm sar edx, 4
  __asm mov eax, edx
  __asm shr eax, 0x1f
  __asm add eax, edx
  __asm imul ecx, eax, 0x34
  __asm mov eax, esi
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x16
  __asm mov esi, dword ptr [esi - 4]
  __asm add ecx, 0x23
  __asm sub eax, esi
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x76 __asm _emit 0x06
  __asm call dword ptr [LAB_122fc888]
  __asm push ecx
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x40 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x44 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0x48 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea ecx, [ebp - 0x80]
  __asm mov dword ptr [ebp + 0x38], LAB_118bccb0
  __asm call LAB_1007e695
  __asm lea ecx, [ebp - 0x8c]
  __asm call LAB_1005600f
  __asm mov dword ptr [ebp - 0x94], LAB_118bccb0
  __asm mov ecx, dword ptr [ebp - 0x10]
  __asm mov byte ptr [ebp - 4], 0xb
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xec __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xf0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0x18]
  __asm mov byte ptr [ebp - 4], 0xc
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xe4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xe8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp - 0x30]
  __asm call LAB_10005f9c
  __asm lea ecx, [ebp - 0x3c]
  __asm call LAB_1005de7c
  __asm lea ecx, [ebp - 0xcc]
  __asm call LAB_10074c85
  __asm mov ecx, dword ptr [ebp + 0x34]
  __asm mov byte ptr [ebp - 4], 0xd
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x30 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x34 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp + 0x2c]
  __asm mov byte ptr [ebp - 4], 0xe
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x28 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x2c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp + 0x5c]
  __asm mov byte ptr [ebp - 4], 0xf
  __asm call LAB_1005c315
  __asm lea ecx, [ebp - 0xa0]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x5c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1007e695
  __asm lea ecx, [ebp - 0xac]
  __asm call LAB_1005600f
  __asm mov dword ptr [ebp - 0xb4], LAB_118bccb0
  __asm mov ecx, dword ptr [ebp - 0x44]
  __asm mov byte ptr [ebp - 4], 0x10
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xb8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xbc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0x4c]
  __asm mov byte ptr [ebp - 4], 0x11
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xb0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xb4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp - 0x64]
  __asm call LAB_10005f9c
  __asm lea ecx, [ebp - 0x70]
  __asm call LAB_1005de7c
  __asm lea ecx, [ebp - 0xe4]
  __asm call LAB_10074c85
  __asm mov ecx, dword ptr [ebp + 0x18]
  __asm mov byte ptr [ebp - 4], 0x12
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp + 0x10]
  __asm mov byte ptr [ebp - 4], 0x13
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 8]
  __asm lea ecx, [ebp + 0x58]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm mov eax, dword ptr [ebp + 0x68]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm lea esp, [ebp + 0x60]
  __asm pop ebp
  __asm ret 4
}




// Reference entry 10618a10; body size 376 bytes.
#line 1 "ENTRY_10618a10"

__declspec(naked) void FUN_10618a10(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_115bd81d
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 0x10
  __asm push ebx
  __asm push esi
  __asm push edi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ebx, ecx
  __asm lea eax, [ebp - 0x14]
  __asm push eax
  __asm lea ecx, [ebx + 0xe8]
  __asm call LAB_10090cd2
  __asm mov edi, dword ptr [eax]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ebp - 0x1c], edi
  __asm test edi, edi
  __asm _emit 0x74 __asm _emit 0x0b
  __asm mov eax, dword ptr [edi]
  __asm mov ecx, edi
  __asm call dword ptr [eax + 0xc]
  __asm mov esi, eax
  __asm _emit 0xeb __asm _emit 0x02
  __asm xor esi, esi
  __asm mov dword ptr [ebp - 0x18], esi
  __asm mov ecx, dword ptr [ebp - 0x14]
  __asm mov byte ptr [ebp - 4], 3
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov byte ptr [ebp - 4], 2
  __asm test edi, edi
  __asm _emit 0x74 __asm _emit 0x5b
  __asm lea eax, [ebp - 0x10]
  __asm mov ecx, edi
  __asm push eax
  __asm call LAB_1008ab11
  __asm mov eax, dword ptr [eax]
  __asm mov ecx, offset LAB_1186d2ee
  __asm mov edi, dword ptr [ebp + 8]
  __asm test eax, eax
  __asm mov byte ptr [ebp - 4], 4
  __asm cmovne ecx, eax
  __asm push ecx
  __asm push offset LAB_118bca4c
  __asm push edi
  __asm call LAB_1006a316
  __asm add esp, 0xc
  __asm lea ecx, [ebp - 0x10]
  __asm mov byte ptr [ebp - 4], 5
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xf0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test esi, esi
  __asm je LAB_10618b72
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax + 8]
  __asm jmp LAB_10618b72
  __asm mov eax, dword ptr [ebx + 0x11c]
  __asm mov edi, dword ptr [ebp + 8]
  __asm mov ecx, edi
  __asm sub eax, 1
  __asm _emit 0x74 __asm _emit 0x64
  __asm sub eax, 1
  __asm _emit 0x74 __asm _emit 0x41
  __asm sub eax, 1
  __asm _emit 0x74 __asm _emit 0x1e
  __asm push offset LAB_118bcabc
  __asm call LAB_1005273e
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x0a __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x61
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax + 8]
  __asm _emit 0xeb __asm _emit 0x58
  __asm push offset LAB_118bca78
  __asm call LAB_1005273e
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x43
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax + 8]
  __asm _emit 0xeb __asm _emit 0x3a
  __asm push offset LAB_118bcaa0
  __asm call LAB_1005273e
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x09 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x25
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax + 8]
  __asm _emit 0xeb __asm _emit 0x1c
  __asm push offset LAB_118bca5c
  __asm call LAB_1005273e
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x07 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x07
  __asm mov edx, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [edx + 8]
  __asm mov eax, edi
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret 4
}




// Reference entry 106190a0; body size 391 bytes.
#line 1 "ENTRY_106190a0"

__declspec(naked) void FUN_106190a0(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_115bd870
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 0x2c
  __asm push ebx
  __asm push esi
  __asm push edi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov esi, ecx
  __asm mov dword ptr [ebp - 0x14], esi
  __asm movaps xmm0, xmmword ptr [LAB_118be660]
  __asm xor edi, edi
  __asm xor ebx, ebx
  __asm mov dword ptr [ebp - 0x34], LAB_118bc9e0
  __asm xor eax, eax
  __asm mov dword ptr [ebp - 0x20], ebx
  __asm movups xmmword ptr [ebp - 0x30], xmm0
  __asm mov dword ptr [ebp - 0x1c], eax
  __asm mov dword ptr [ebp - 0x10], edi
  __asm mov dword ptr [ebp - 0x18], edi
  __asm mov ecx, dword ptr [esi + 0x18]
  __asm mov dword ptr [ebp - 4], edi
  __asm cmp ecx, dword ptr [esi + 0x1c]
  __asm _emit 0x74 __asm _emit 0x25
  __asm mov dword ptr [ecx], LAB_118bc9e0
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x02 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ecx + 8], edi
  __asm mov dword ptr [ecx + 0xc], edi
  __asm mov dword ptr [ecx + 0x10], edi
  __asm mov dword ptr [ecx + 0x14], edi
  __asm mov dword ptr [ecx + 0x18], edi
  __asm mov dword ptr [ecx + 0x1c], edi
  __asm add dword ptr [esi + 0x18], 0x20
  __asm _emit 0xeb __asm _emit 0x19
  __asm lea eax, [ebp - 0x34]
  __asm push eax
  __asm push ecx
  __asm lea ecx, [esi + 0x14]
  __asm call LAB_1002e40b
  __asm mov edi, dword ptr [ebp - 0x18]
  __asm mov ebx, dword ptr [ebp - 0x20]
  __asm mov eax, dword ptr [ebp - 0x1c]
  __asm mov dword ptr [ebp - 0x10], edi
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
  __asm test ebx, ebx
  __asm _emit 0x74 __asm _emit 0x49
  __asm mov esi, ebx
  __asm cmp esi, eax
  __asm _emit 0x74 __asm _emit 0x17
  __asm mov edi, dword ptr [ebp - 0x1c]
  __asm nop
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 0
  __asm call dword ptr [eax]
  __asm add esi, 0x20
  __asm cmp esi, edi
  __asm _emit 0x75 __asm _emit 0xf1
  __asm mov edi, dword ptr [ebp - 0x10]
  __asm sub edi, ebx
  __asm mov eax, ebx
  __asm and edi, 0xffffffe0
  __asm cmp edi, 0x1000
  __asm _emit 0x72 __asm _emit 0x10
  __asm mov ebx, dword ptr [ebx - 4]
  __asm add edi, 0x23
  __asm sub eax, ebx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x77 __asm _emit 0x36
  __asm push edi
  __asm push ebx
  __asm call LAB_100131d8
  __asm mov esi, dword ptr [ebp - 0x14]
  __asm add esp, 8
  __asm mov edx, dword ptr [ebp - 0x2c]
  __asm test edx, edx
  __asm _emit 0x74 __asm _emit 0x32
  __asm mov ecx, dword ptr [ebp - 0x24]
  __asm mov eax, edx
  __asm sub ecx, edx
  __asm and ecx, 0xfffffffc
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x16
  __asm mov edx, dword ptr [edx - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x76 __asm _emit 0x06
  __asm call dword ptr [LAB_122fc888]
  __asm push ecx
  __asm push edx
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm mov esi, dword ptr [esi + 0x18]
  __asm push dword ptr [ebp + 0xc]
  __asm mov eax, dword ptr [esi - 8]
  __asm cmp eax, dword ptr [esi - 4]
  __asm _emit 0x74 __asm _emit 0x0d
  __asm mov ecx, eax
  __asm call LAB_1000c54a
  __asm add dword ptr [esi - 8], 0x20
  __asm _emit 0xeb __asm _emit 0x09
  __asm push eax
  __asm lea ecx, [esi - 0xc]
  __asm call LAB_1002e40b
  __asm cmp byte ptr [ebp + 8], 0
  __asm mov eax, dword ptr [esi - 8]
  __asm _emit 0x75 __asm _emit 0x1c
  __asm mov ecx, dword ptr [eax - 0x1c]
  __asm cmp ecx, 4
  __asm _emit 0x75 __asm _emit 0x09 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0xe4 __asm _emit 0x05 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xeb __asm _emit 0x0b
  __asm test ecx, ecx
  __asm _emit 0x75 __asm _emit 0x07 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0xe4 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ebp - 0x14]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret 8
}




// Reference entry 10619290; body size 404 bytes.
#line 1 "ENTRY_10619290"

__declspec(naked) void FUN_10619290(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_115bd8ad
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 0x24
  __asm push ebx
  __asm push esi
  __asm push edi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm mov dword ptr [ebp - 0x10], eax
  __asm movaps xmm0, xmmword ptr [LAB_118be660]
  __asm mov dword ptr [ebp - 0x30], LAB_118bccd4
  __asm movups xmmword ptr [ebp - 0x2c], xmm0
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xe4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xe8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0xec __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea esi, [eax + 0x14]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esi + 4]
  __asm lea ecx, [ebp - 0x30]
  __asm push ecx
  __asm cmp eax, dword ptr [esi + 8]
  __asm _emit 0x74 __asm _emit 0x0d
  __asm mov ecx, eax
  __asm call LAB_100904ad
  __asm add dword ptr [esi + 4], 0x20
  __asm _emit 0xeb __asm _emit 0x08
  __asm push eax
  __asm mov ecx, esi
  __asm call LAB_1000e845
  __asm mov edi, dword ptr [ebp - 0x1c]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
  __asm test edi, edi
  __asm _emit 0x74 __asm _emit 0x44
  __asm mov ebx, dword ptr [ebp - 0x18]
  __asm mov esi, edi
  __asm cmp esi, ebx
  __asm _emit 0x74 __asm _emit 0x0f
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 0
  __asm call dword ptr [eax]
  __asm add esi, 0x20
  __asm cmp esi, ebx
  __asm _emit 0x75 __asm _emit 0xf1
  __asm mov ecx, dword ptr [ebp - 0x14]
  __asm mov eax, edi
  __asm sub ecx, edi
  __asm and ecx, 0xffffffe0
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x10
  __asm mov edi, dword ptr [edi - 4]
  __asm add ecx, 0x23
  __asm sub eax, edi
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x77 __asm _emit 0x5b
  __asm push ecx
  __asm push edi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm mov edi, dword ptr [ebp - 0x28]
  __asm test edi, edi
  __asm _emit 0x74 __asm _emit 0x5a
  __asm mov ebx, dword ptr [ebp - 0x24]
  __asm mov esi, edi
  __asm cmp esi, ebx
  __asm _emit 0x74 __asm _emit 0x0e
  __asm mov ecx, esi
  __asm call LAB_10002699
  __asm add esi, 0x34
  __asm cmp esi, ebx
  __asm _emit 0x75 __asm _emit 0xf2
  __asm mov ecx, dword ptr [ebp - 0x20]
  __asm mov eax, 0x4ec4ec4f
  __asm sub ecx, edi
  __asm imul ecx
  __asm sar edx, 4
  __asm mov eax, edx
  __asm shr eax, 0x1f
  __asm add eax, edx
  __asm imul ecx, eax, 0x34
  __asm mov eax, edi
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x16
  __asm mov edi, dword ptr [edi - 4]
  __asm add ecx, 0x23
  __asm sub eax, edi
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x76 __asm _emit 0x06
  __asm call dword ptr [LAB_122fc888]
  __asm push ecx
  __asm push edi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm mov ebx, dword ptr [ebp - 0x10]
  __asm push dword ptr [ebp + 0xc]
  __asm mov esi, dword ptr [ebx + 0x18]
  __asm mov eax, dword ptr [esi - 8]
  __asm cmp eax, dword ptr [esi - 4]
  __asm _emit 0x74 __asm _emit 0x0d
  __asm mov ecx, eax
  __asm call LAB_100904ad
  __asm add dword ptr [esi - 8], 0x20
  __asm _emit 0xeb __asm _emit 0x09
  __asm push eax
  __asm lea ecx, [esi - 0xc]
  __asm call LAB_1000e845
  __asm cmp byte ptr [ebp + 8], 0
  __asm mov eax, dword ptr [esi - 8]
  __asm _emit 0x75 __asm _emit 0x1c
  __asm mov ecx, dword ptr [eax - 0x1c]
  __asm cmp ecx, 4
  __asm _emit 0x75 __asm _emit 0x09 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0xe4 __asm _emit 0x05 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xeb __asm _emit 0x0b
  __asm test ecx, ecx
  __asm _emit 0x75 __asm _emit 0x07 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0xe4 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ebx
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret 8
}




// Reference entry 10619490; body size 478 bytes.
#line 1 "ENTRY_10619490"

__declspec(naked) void FUN_10619490(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_115bd8ed
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 0x24
  __asm push ebx
  __asm push esi
  __asm push edi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm mov dword ptr [ebp - 0x10], eax
  __asm movaps xmm0, xmmword ptr [LAB_118be660]
  __asm mov dword ptr [ebp - 0x30], LAB_118bc0e4
  __asm movups xmmword ptr [ebp - 0x2c], xmm0
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xe4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xe8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45
  __asm _emit 0xec __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea esi, [eax + 0x14]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esi + 4]
  __asm lea ecx, [ebp - 0x30]
  __asm push ecx
  __asm cmp eax, dword ptr [esi + 8]
  __asm _emit 0x74 __asm _emit 0x0d
  __asm mov ecx, eax
  __asm call LAB_10005975
  __asm add dword ptr [esi + 4], 0x20
  __asm _emit 0xeb __asm _emit 0x08
  __asm push eax
  __asm mov ecx, esi
  __asm call LAB_10079cad
  __asm mov edi, dword ptr [ebp - 0x1c]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
  __asm test edi, edi
  __asm _emit 0x74 __asm _emit 0x48
  __asm mov ebx, dword ptr [ebp - 0x18]
  __asm mov esi, edi
  __asm cmp esi, ebx
  __asm _emit 0x74 __asm _emit 0x0f
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 0
  __asm call dword ptr [eax]
  __asm add esi, 0x20
  __asm cmp esi, ebx
  __asm _emit 0x75 __asm _emit 0xf1
  __asm mov ecx, dword ptr [ebp - 0x14]
  __asm mov eax, edi
  __asm sub ecx, edi
  __asm and ecx, 0xffffffe0
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x14
  __asm mov edi, dword ptr [edi - 4]
  __asm add ecx, 0x23
  __asm sub eax, edi
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja LAB_106195fc
  __asm push ecx
  __asm push edi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm mov ebx, dword ptr [ebp - 0x28]
  __asm test ebx, ebx
  __asm je LAB_1061960c
  __asm cmp ebx, dword ptr [ebp - 0x24]
  __asm _emit 0x74 __asm _emit 0x52
  __asm lea edi, [ebx + 4]
  __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x84 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea ecx, [edi + 4]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [edi]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x02 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x12 __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x07 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm add edi, 0xc
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
  __asm lea eax, [edi - 4]
  __asm cmp eax, dword ptr [ebp - 0x24]
  __asm _emit 0x75 __asm _emit 0xb9
  __asm mov ecx, dword ptr [ebp - 0x20]
  __asm mov eax, 0x2aaaaaab
  __asm sub ecx, ebx
  __asm imul ecx
  __asm _emit 0xd1 __asm _emit 0xfa
  __asm mov eax, edx
  __asm shr eax, 0x1f
  __asm add eax, edx
  __asm lea ecx, [eax + eax*2]
  __asm mov eax, ebx
  __asm shl ecx, 2
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x16
  __asm mov ebx, dword ptr [ebx - 4]
  __asm add ecx, 0x23
  __asm sub eax, ebx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x76 __asm _emit 0x06
  __asm call dword ptr [LAB_122fc888]
  __asm push ecx
  __asm push ebx
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm mov ebx, dword ptr [ebp - 0x10]
  __asm push dword ptr [ebp + 0xc]
  __asm mov esi, dword ptr [ebx + 0x18]
  __asm mov eax, dword ptr [esi - 8]
  __asm cmp eax, dword ptr [esi - 4]
  __asm _emit 0x74 __asm _emit 0x0d
  __asm mov ecx, eax
  __asm call LAB_10005975
  __asm add dword ptr [esi - 8], 0x20
  __asm _emit 0xeb __asm _emit 0x09
  __asm push eax
  __asm lea ecx, [esi - 0xc]
  __asm call LAB_10079cad
  __asm cmp byte ptr [ebp + 8], 0
  __asm mov eax, dword ptr [esi - 8]
  __asm _emit 0x75 __asm _emit 0x1c
  __asm mov ecx, dword ptr [eax - 0x1c]
  __asm cmp ecx, 4
  __asm _emit 0x75 __asm _emit 0x09 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0xe4 __asm _emit 0x05 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xeb __asm _emit 0x0b
  __asm test ecx, ecx
  __asm _emit 0x75 __asm _emit 0x07 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0xe4 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ebx
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret 8
}




// Reference entry 10619b10; body size 291 bytes.
#line 1 "ENTRY_10619b10"

__declspec(naked) void FUN_10619b10(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_115bd92d
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm push ecx
  __asm push esi
  __asm push edi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov edi, ecx
  __asm call LAB_1008cfec
  __asm lea ecx, [ebp - 0x10]
  __asm push ecx
  __asm lea ecx, [eax + 0xe8]
  __asm call LAB_10090cd2
  __asm mov esi, eax
  __asm mov ecx, edi
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1008cfec
  __asm push 1
  __asm push 2
  __asm push dword ptr [esi]
  __asm lea ecx, [eax + 0x10c]
  __asm call LAB_10013f02
  __asm mov ecx, dword ptr [ebp - 0x10]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, edi
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
  __asm call LAB_1008cfec
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x07
  __asm add eax, 0xe8
  __asm _emit 0xeb __asm _emit 0x02
  __asm xor eax, eax
  __asm push eax
  __asm mov ecx, edi
  __asm call LAB_10002e55
  __asm lea ecx, [eax + 0xe8]
  __asm call LAB_10095bf1
  __asm mov ecx, edi
  __asm call LAB_1008cfec
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x07
  __asm add eax, 0xf4
  __asm _emit 0xeb __asm _emit 0x02
  __asm xor eax, eax
  __asm push eax
  __asm mov ecx, edi
  __asm call LAB_10002e55
  __asm lea ecx, [eax + 0xf4]
  __asm call LAB_1008b8b8
  __asm mov ecx, edi
  __asm call LAB_1008cfec
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x07
  __asm add eax, 0x100
  __asm _emit 0xeb __asm _emit 0x02
  __asm xor eax, eax
  __asm push eax
  __asm mov ecx, edi
  __asm call LAB_10002e55
  __asm lea ecx, [eax + 0x100]
  __asm call LAB_10070cb6
  __asm mov ecx, edi
  __asm call LAB_1008cfec
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x07
  __asm add eax, 0x10c
  __asm _emit 0xeb __asm _emit 0x02
  __asm xor eax, eax
  __asm push eax
  __asm mov ecx, edi
  __asm call LAB_10002e55
  __asm lea ecx, [eax + 0x10c]
  __asm call LAB_10043856
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
}




// Reference entry 10619c80; body size 192 bytes.
#line 1 "ENTRY_10619c80"

__declspec(naked) void FUN_10619c80(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm call LAB_1008cfec
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x07
  __asm add eax, 0xe8
  __asm _emit 0xeb __asm _emit 0x02
  __asm xor eax, eax
  __asm push eax
  __asm mov ecx, edi
  __asm call LAB_10002e55
  __asm lea ecx, [eax + 0xe8]
  __asm call LAB_10095bf1
  __asm mov ecx, edi
  __asm call LAB_1008cfec
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x07
  __asm add eax, 0xf4
  __asm _emit 0xeb __asm _emit 0x02
  __asm xor eax, eax
  __asm push eax
  __asm mov ecx, edi
  __asm call LAB_10002e55
  __asm lea ecx, [eax + 0xf4]
  __asm call LAB_1008b8b8
  __asm mov ecx, edi
  __asm call LAB_1008cfec
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x07
  __asm add eax, 0x100
  __asm _emit 0xeb __asm _emit 0x02
  __asm xor eax, eax
  __asm push eax
  __asm mov ecx, edi
  __asm call LAB_10002e55
  __asm lea ecx, [eax + 0x100]
  __asm call LAB_10070cb6
  __asm mov ecx, edi
  __asm call LAB_1008cfec
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x07
  __asm add eax, 0x10c
  __asm _emit 0xeb __asm _emit 0x02
  __asm xor eax, eax
  __asm push eax
  __asm mov ecx, edi
  __asm call LAB_10002e55
  __asm lea ecx, [eax + 0x10c]
  __asm call LAB_10043856
  __asm mov ecx, edi
  __asm call LAB_1008cfec
  __asm mov ecx, edi
  __asm mov esi, eax
  __asm call LAB_10002e55
  __asm movzx ecx, byte ptr [esi + 0x120]
  __asm push ecx
  __asm mov ecx, eax
  __asm call LAB_1003c03d
  __asm pop edi
  __asm pop esi
  __asm ret
}




// Reference entry 10619d70; body size 81 bytes.
#line 1 "ENTRY_10619d70"

__declspec(naked) void FUN_10619d70(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm call LAB_1008cfec
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x07
  __asm add eax, 0xe8
  __asm _emit 0xeb __asm _emit 0x02
  __asm xor eax, eax
  __asm push eax
  __asm mov ecx, esi
  __asm call LAB_10002e55
  __asm lea ecx, [eax + 0xe8]
  __asm call LAB_10095bf1
  __asm mov ecx, esi
  __asm call LAB_1008cfec
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x07
  __asm add eax, 0x100
  __asm _emit 0xeb __asm _emit 0x02
  __asm xor eax, eax
  __asm push eax
  __asm mov ecx, esi
  __asm call LAB_10002e55
  __asm lea ecx, [eax + 0xf4]
  __asm call LAB_10070cb6
  __asm pop esi
  __asm ret
}




// Reference entry 10619de0; body size 120 bytes.
#line 1 "ENTRY_10619de0"

__declspec(naked) void FUN_10619de0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm call LAB_1008cfec
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x07
  __asm add eax, 0xe8
  __asm _emit 0xeb __asm _emit 0x02
  __asm xor eax, eax
  __asm push eax
  __asm mov ecx, esi
  __asm call LAB_10002e55
  __asm lea ecx, [eax + 0xe8]
  __asm call LAB_10095bf1
  __asm mov ecx, esi
  __asm call LAB_1008cfec
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x07
  __asm add eax, 0xf4
  __asm _emit 0xeb __asm _emit 0x02
  __asm xor eax, eax
  __asm push eax
  __asm mov ecx, esi
  __asm call LAB_10002e55
  __asm lea ecx, [eax + 0xf4]
  __asm call LAB_1008b8b8
  __asm mov ecx, esi
  __asm call LAB_1008cfec
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x07
  __asm add eax, 0x100
  __asm _emit 0xeb __asm _emit 0x02
  __asm xor eax, eax
  __asm push eax
  __asm mov ecx, esi
  __asm call LAB_10002e55
  __asm lea ecx, [eax + 0x100]
  __asm call LAB_10070cb6
  __asm pop esi
  __asm ret
}




// Reference entry 10619e80; body size 200 bytes.
#line 1 "ENTRY_10619e80"

__declspec(naked) void FUN_10619e80(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm call LAB_1008cfec
  __asm lea ecx, [eax + 0x100]
  __asm call LAB_10011153
  __asm mov ecx, esi
  __asm mov dword ptr [esi + 0xc0], eax
  __asm call LAB_10002e55
  __asm mov ecx, esi
  __asm _emit 0xc7 __asm _emit 0x80 __asm _emit 0x18 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x02 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1008cfec
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x07
  __asm add eax, 0xe8
  __asm _emit 0xeb __asm _emit 0x02
  __asm xor eax, eax
  __asm push eax
  __asm mov ecx, esi
  __asm call LAB_10002e55
  __asm lea ecx, [eax + 0xe8]
  __asm call LAB_10095bf1
  __asm mov ecx, esi
  __asm call LAB_1008cfec
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x07
  __asm add eax, 0xf4
  __asm _emit 0xeb __asm _emit 0x02
  __asm xor eax, eax
  __asm push eax
  __asm mov ecx, esi
  __asm call LAB_10002e55
  __asm lea ecx, [eax + 0xf4]
  __asm call LAB_1008b8b8
  __asm mov ecx, esi
  __asm call LAB_1008cfec
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x07
  __asm add eax, 0x100
  __asm _emit 0xeb __asm _emit 0x02
  __asm xor eax, eax
  __asm push eax
  __asm mov ecx, esi
  __asm call LAB_10002e55
  __asm lea ecx, [eax + 0x100]
  __asm call LAB_10070cb6
  __asm mov ecx, esi
  __asm call LAB_1008cfec
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x07
  __asm add eax, 0x10c
  __asm _emit 0xeb __asm _emit 0x02
  __asm xor eax, eax
  __asm push eax
  __asm mov ecx, esi
  __asm call LAB_10002e55
  __asm lea ecx, [eax + 0x10c]
  __asm call LAB_10043856
  __asm pop esi
  __asm ret
}




// Reference entry 10619f80; body size 120 bytes.
#line 1 "ENTRY_10619f80"

__declspec(naked) void FUN_10619f80(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm call LAB_1008cfec
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x07
  __asm add eax, 0xe8
  __asm _emit 0xeb __asm _emit 0x02
  __asm xor eax, eax
  __asm push eax
  __asm mov ecx, esi
  __asm call LAB_10002e55
  __asm lea ecx, [eax + 0xe8]
  __asm call LAB_10095bf1
  __asm mov ecx, esi
  __asm call LAB_1008cfec
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x07
  __asm add eax, 0xf4
  __asm _emit 0xeb __asm _emit 0x02
  __asm xor eax, eax
  __asm push eax
  __asm mov ecx, esi
  __asm call LAB_10002e55
  __asm lea ecx, [eax + 0xf4]
  __asm call LAB_1008b8b8
  __asm mov ecx, esi
  __asm call LAB_1008cfec
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x07
  __asm add eax, 0x100
  __asm _emit 0xeb __asm _emit 0x02
  __asm xor eax, eax
  __asm push eax
  __asm mov ecx, esi
  __asm call LAB_10002e55
  __asm lea ecx, [eax + 0x100]
  __asm call LAB_10070cb6
  __asm pop esi
  __asm ret
}




// Reference entry 1061a020; body size 175 bytes.
#line 1 "ENTRY_1061a020"

__declspec(naked) void FUN_1061a020(void)

{
  __asm push esi
  __asm push 1
  __asm mov esi, ecx
  __asm call LAB_10002e55
  __asm mov ecx, eax
  __asm call LAB_1006912d
  __asm mov ecx, esi
  __asm call LAB_1008cfec
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x07
  __asm add eax, 0xe8
  __asm _emit 0xeb __asm _emit 0x02
  __asm xor eax, eax
  __asm push eax
  __asm mov ecx, esi
  __asm call LAB_10002e55
  __asm lea ecx, [eax + 0xe8]
  __asm call LAB_10095bf1
  __asm mov ecx, esi
  __asm call LAB_1008cfec
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x07
  __asm add eax, 0xf4
  __asm _emit 0xeb __asm _emit 0x02
  __asm xor eax, eax
  __asm push eax
  __asm mov ecx, esi
  __asm call LAB_10002e55
  __asm lea ecx, [eax + 0xf4]
  __asm call LAB_1008b8b8
  __asm mov ecx, esi
  __asm call LAB_1008cfec
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x07
  __asm add eax, 0x100
  __asm _emit 0xeb __asm _emit 0x02
  __asm xor eax, eax
  __asm push eax
  __asm mov ecx, esi
  __asm call LAB_10002e55
  __asm lea ecx, [eax + 0x100]
  __asm call LAB_10070cb6
  __asm mov ecx, esi
  __asm call LAB_1008cfec
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x07
  __asm add eax, 0x10c
  __asm _emit 0xeb __asm _emit 0x02
  __asm xor eax, eax
  __asm push eax
  __asm mov ecx, esi
  __asm call LAB_10002e55
  __asm lea ecx, [eax + 0x10c]
  __asm call LAB_10043856
  __asm pop esi
  __asm ret
}




// Reference entry 1061a100; body size 196 bytes.
#line 1 "ENTRY_1061a100"

__declspec(naked) void FUN_1061a100(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, ecx
  __asm call LAB_1008cfec
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x07
  __asm add eax, 0xe8
  __asm _emit 0xeb __asm _emit 0x02
  __asm xor eax, eax
  __asm push eax
  __asm mov ecx, esi
  __asm call LAB_10002e55
  __asm lea ecx, [eax + 0xe8]
  __asm call LAB_10095bf1
  __asm mov ecx, esi
  __asm call LAB_1008cfec
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x07
  __asm add eax, 0xf4
  __asm _emit 0xeb __asm _emit 0x02
  __asm xor eax, eax
  __asm push eax
  __asm mov ecx, esi
  __asm call LAB_10002e55
  __asm lea ecx, [eax + 0xf4]
  __asm call LAB_1008b8b8
  __asm mov ecx, esi
  __asm call LAB_1008cfec
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x07
  __asm add eax, 0x100
  __asm _emit 0xeb __asm _emit 0x02
  __asm xor eax, eax
  __asm push eax
  __asm mov ecx, esi
  __asm call LAB_10002e55
  __asm lea ecx, [eax + 0x100]
  __asm call LAB_10070cb6
  __asm mov ecx, esi
  __asm call LAB_1008cfec
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x07
  __asm add eax, 0x10c
  __asm _emit 0xeb __asm _emit 0x02
  __asm xor eax, eax
  __asm push eax
  __asm mov ecx, esi
  __asm call LAB_10002e55
  __asm lea ecx, [eax + 0x10c]
  __asm call LAB_10043856
  __asm mov ecx, esi
  __asm call LAB_1008cfec
  __asm mov ecx, esi
  __asm mov al, byte ptr [eax + 0x120]
  __asm mov byte ptr [esp + 4], al
  __asm push dword ptr [esp + 4]
  __asm call LAB_10002e55
  __asm mov ecx, eax
  __asm call LAB_100420b9
  __asm pop esi
  __asm pop ecx
  __asm ret
}




// Reference entry 1061a200; body size 184 bytes.
#line 1 "ENTRY_1061a200"

__declspec(naked) void FUN_1061a200(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm call LAB_1008cfec
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x07
  __asm add eax, 0xe8
  __asm _emit 0xeb __asm _emit 0x02
  __asm xor eax, eax
  __asm push eax
  __asm mov ecx, esi
  __asm call LAB_10002e55
  __asm lea ecx, [eax + 0xe8]
  __asm call LAB_10095bf1
  __asm mov ecx, esi
  __asm call LAB_1008cfec
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x07
  __asm add eax, 0xf4
  __asm _emit 0xeb __asm _emit 0x02
  __asm xor eax, eax
  __asm push eax
  __asm mov ecx, esi
  __asm call LAB_10002e55
  __asm lea ecx, [eax + 0xf4]
  __asm call LAB_1008b8b8
  __asm mov ecx, esi
  __asm call LAB_1008cfec
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x07
  __asm add eax, 0x100
  __asm _emit 0xeb __asm _emit 0x02
  __asm xor eax, eax
  __asm push eax
  __asm mov ecx, esi
  __asm call LAB_10002e55
  __asm lea ecx, [eax + 0x100]
  __asm call LAB_10070cb6
  __asm mov ecx, esi
  __asm call LAB_1008cfec
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x07
  __asm add eax, 0x10c
  __asm _emit 0xeb __asm _emit 0x02
  __asm xor eax, eax
  __asm push eax
  __asm mov ecx, esi
  __asm call LAB_10002e55
  __asm lea ecx, [eax + 0x10c]
  __asm call LAB_10043856
  __asm mov ecx, esi
  __asm call LAB_10002e55
  __asm mov byte ptr [eax + 0x118], 1
  __asm call LAB_100391cb
  __asm mov ecx, eax
  __asm pop esi
  __asm jmp LAB_10099acb
}




// Reference entry 1061a2f0; body size 198 bytes.
#line 1 "ENTRY_1061a2f0"

__declspec(naked) void FUN_1061a2f0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm call LAB_1008cfec
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x07
  __asm add eax, 0xe8
  __asm _emit 0xeb __asm _emit 0x02
  __asm xor eax, eax
  __asm push eax
  __asm mov ecx, esi
  __asm call LAB_10002e55
  __asm lea ecx, [eax + 0xe8]
  __asm call LAB_10095bf1
  __asm mov ecx, esi
  __asm call LAB_1008cfec
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x07
  __asm add eax, 0xf4
  __asm _emit 0xeb __asm _emit 0x02
  __asm xor eax, eax
  __asm push eax
  __asm mov ecx, esi
  __asm call LAB_10002e55
  __asm lea ecx, [eax + 0xf4]
  __asm call LAB_1008b8b8
  __asm mov ecx, esi
  __asm call LAB_1008cfec
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x07
  __asm add eax, 0x100
  __asm _emit 0xeb __asm _emit 0x02
  __asm xor eax, eax
  __asm push eax
  __asm mov ecx, esi
  __asm call LAB_10002e55
  __asm lea ecx, [eax + 0x100]
  __asm call LAB_10070cb6
  __asm mov ecx, esi
  __asm call LAB_1008cfec
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x07
  __asm add eax, 0x10c
  __asm _emit 0xeb __asm _emit 0x02
  __asm xor eax, eax
  __asm push eax
  __asm mov ecx, esi
  __asm call LAB_10002e55
  __asm lea ecx, [eax + 0x10c]
  __asm call LAB_10043856
  __asm lea ecx, [esi + 0x10]
  __asm call LAB_1000ba05
  __asm mov ecx, eax
  __asm call LAB_10086381
  __asm cmp eax, dword ptr [LAB_121a2188]
  __asm _emit 0x75 __asm _emit 0x10
  __asm push 1
  __asm mov ecx, esi
  __asm call LAB_10002e55
  __asm mov ecx, eax
  __asm call LAB_1002682d
  __asm pop esi
  __asm ret
}




// Reference entry 1061a3f0; body size 173 bytes.
#line 1 "ENTRY_1061a3f0"

__declspec(naked) void FUN_1061a3f0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm call LAB_1008cfec
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x07
  __asm add eax, 0xe8
  __asm _emit 0xeb __asm _emit 0x02
  __asm xor eax, eax
  __asm push eax
  __asm mov ecx, esi
  __asm call LAB_10002e55
  __asm lea ecx, [eax + 0xe8]
  __asm call LAB_10095bf1
  __asm mov ecx, esi
  __asm call LAB_1008cfec
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x07
  __asm add eax, 0xf4
  __asm _emit 0xeb __asm _emit 0x02
  __asm xor eax, eax
  __asm push eax
  __asm mov ecx, esi
  __asm call LAB_10002e55
  __asm lea ecx, [eax + 0xf4]
  __asm call LAB_1008b8b8
  __asm mov ecx, esi
  __asm call LAB_1008cfec
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x07
  __asm add eax, 0x100
  __asm _emit 0xeb __asm _emit 0x02
  __asm xor eax, eax
  __asm push eax
  __asm mov ecx, esi
  __asm call LAB_10002e55
  __asm lea ecx, [eax + 0x100]
  __asm call LAB_10070cb6
  __asm mov ecx, esi
  __asm call LAB_1008cfec
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x07
  __asm add eax, 0x10c
  __asm _emit 0xeb __asm _emit 0x02
  __asm xor eax, eax
  __asm push eax
  __asm mov ecx, esi
  __asm call LAB_10002e55
  __asm lea ecx, [eax + 0x10c]
  __asm call LAB_10043856
  __asm mov ecx, esi
  __asm call LAB_10002e55
  __asm pop esi
  __asm mov byte ptr [eax + 0x119], 1
  __asm ret
}




// Reference entry 1061a4d0; body size 208 bytes.
#line 1 "ENTRY_1061a4d0"

__declspec(naked) void FUN_1061a4d0(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm call LAB_1008cfec
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x07
  __asm add eax, 0xe8
  __asm _emit 0xeb __asm _emit 0x02
  __asm xor eax, eax
  __asm push eax
  __asm mov ecx, edi
  __asm call LAB_10002e55
  __asm lea ecx, [eax + 0xe8]
  __asm call LAB_10095bf1
  __asm mov ecx, edi
  __asm call LAB_1008cfec
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x07
  __asm add eax, 0xf4
  __asm _emit 0xeb __asm _emit 0x02
  __asm xor eax, eax
  __asm push eax
  __asm mov ecx, edi
  __asm call LAB_10002e55
  __asm lea ecx, [eax + 0xf4]
  __asm call LAB_1008b8b8
  __asm mov ecx, edi
  __asm call LAB_1008cfec
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x07
  __asm add eax, 0x100
  __asm _emit 0xeb __asm _emit 0x02
  __asm xor eax, eax
  __asm push eax
  __asm mov ecx, edi
  __asm call LAB_10002e55
  __asm lea ecx, [eax + 0x100]
  __asm call LAB_10070cb6
  __asm mov ecx, edi
  __asm call LAB_1008cfec
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x07
  __asm add eax, 0x10c
  __asm _emit 0xeb __asm _emit 0x02
  __asm xor eax, eax
  __asm push eax
  __asm mov ecx, edi
  __asm call LAB_10002e55
  __asm lea ecx, [eax + 0x10c]
  __asm call LAB_10043856
  __asm mov ecx, edi
  __asm call LAB_1008cfec
  __asm mov ecx, edi
  __asm mov esi, eax
  __asm call LAB_10002e55
  __asm push 1
  __asm lea ecx, [esi + 0x100]
  __asm mov edi, eax
  __asm call LAB_1008dd2a
  __asm test al, al
  __asm sete cl
  __asm movzx ecx, cl
  __asm push ecx
  __asm mov ecx, edi
  __asm call LAB_1002585b
  __asm pop edi
  __asm pop esi
  __asm ret
}




// Reference entry 1061a5e0; body size 778 bytes.
#line 1 "ENTRY_1061a5e0"

__declspec(naked) void FUN_1061a5e0(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_115bd9bf
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 0x1c
  __asm push ebx
  __asm push esi
  __asm push edi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ebx, ecx
  __asm mov dword ptr [ebp - 0x28], ebx
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xec __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea esi, [ebx + 0x8c]
  __asm push dword ptr [ebx + 0x11c]
  __asm mov ecx, esi
  __asm mov dword ptr [ebp - 0x24], esi
  __asm push offset LAB_118bca00
  __asm call LAB_1004ba10
  __asm lea eax, [ebp - 0x14]
  __asm lea edi, [ebx + 0xe8]
  __asm push eax
  __asm mov ecx, edi
  __asm call LAB_10090cd2
  __asm cmp dword ptr [eax], 0
  __asm mov ecx, esi
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm push offset LAB_118bca1c
  __asm call LAB_1001a0a5
  __asm mov ecx, dword ptr [ebp - 0x14]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea esi, [ebx + 0xf4]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
  __asm push 0
  __asm mov ecx, esi
  __asm call LAB_1006005a
  __asm push 1
  __asm mov ecx, esi
  __asm call LAB_1006005a
  __asm push 3
  __asm mov ecx, esi
  __asm call LAB_1006005a
  __asm push 2
  __asm mov ecx, esi
  __asm call LAB_1006005a
  __asm mov ecx, ebx
  __asm call LAB_1004f886
  __asm push 5
  __asm mov bl, al
  __asm call LAB_1007a7a2
  __asm mov ecx, eax
  __asm call LAB_1003f9e0
  __asm test al, al
  __asm _emit 0x74 __asm _emit 0x08
  __asm test bl, bl
  __asm _emit 0x75 __asm _emit 0x04
  __asm mov bl, 1
  __asm _emit 0xeb __asm _emit 0x02
  __asm xor bl, bl
  __asm lea eax, [ebp - 0x14]
  __asm mov byte ptr [ebp - 0xd], bl
  __asm push eax
  __asm mov ecx, edi
  __asm call LAB_10090cd2
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [ebp - 0x18], eax
  __asm mov ecx, dword ptr [ebp - 0x14]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x02 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x08
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov eax, dword ptr [ebp - 0x18]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
  __asm test eax, eax
  __asm je LAB_1061a7e9
  __asm lea eax, [ebp - 0x20]
  __asm mov ecx, edi
  __asm push eax
  __asm call LAB_10090cd2
  __asm mov ecx, dword ptr [eax]
  __asm mov ebx, 1
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x03 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ebp - 0x14], ebx
  __asm call LAB_1008f6a7
  __asm test al, al
  __asm _emit 0x74 __asm _emit 0x2c
  __asm lea eax, [ebp - 0x1c]
  __asm mov ecx, edi
  __asm push eax
  __asm call LAB_10090cd2
  __asm push dword ptr [eax]
  __asm mov ebx, 3
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ebp - 0x14], ebx
  __asm call LAB_10029d89
  __asm add esp, 4
  __asm mov byte ptr [ebp - 0xe], 1
  __asm test al, al
  __asm _emit 0x74 __asm _emit 0x04
  __asm mov byte ptr [ebp - 0xe], 0
  __asm test bl, 2
  __asm _emit 0x74 __asm _emit 0x19
  __asm and ebx, 0xfffffffd
  __asm mov dword ptr [ebp - 0x14], ebx
  __asm mov ecx, dword ptr [ebp - 0x1c]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x05 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
  __asm test bl, 1
  __asm _emit 0x74 __asm _emit 0x1a
  __asm mov ecx, dword ptr [ebp - 0x20]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
  __asm cmp byte ptr [ebp - 0xd], 0
  __asm _emit 0x74 __asm _emit 0x0f
  __asm cmp byte ptr [ebp - 0xe], 0
  __asm _emit 0x74 __asm _emit 0x09
  __asm push 5
  __asm mov ecx, esi
  __asm call LAB_1006005a
  __asm lea eax, [ebp - 0x20]
  __asm mov ecx, edi
  __asm push eax
  __asm call LAB_10090cd2
  __asm mov ecx, dword ptr [eax]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x07 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1003d1f9
  __asm mov bl, al
  __asm mov ecx, dword ptr [ebp - 0x20]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 8]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
  __asm test bl, bl
  __asm _emit 0x74 __asm _emit 0x1a
  __asm push 6
  __asm _emit 0xeb __asm _emit 0x0f
  __asm push 6
  __asm mov ecx, esi
  __asm call LAB_1006005a
  __asm test bl, bl
  __asm _emit 0x74 __asm _emit 0x09
  __asm push 5
  __asm mov ecx, esi
  __asm call LAB_1006005a
  __asm mov ecx, dword ptr [ebp - 0x24]
  __asm call LAB_1006ce95
  __asm push 1
  __asm push 0
  __asm push 0
  __asm push ecx
  __asm mov dword ptr [ebp - 0x24], esp
  __asm mov ecx, esp
  __asm push offset LAB_118bca3c
  __asm call LAB_1005273e
  __asm mov edi, dword ptr [ebp - 0x28]
  __asm push 0x12
  __asm push ecx
  __asm push esp
  __asm mov ecx, edi
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x09 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10039978
  __asm mov ecx, dword ptr [LAB_121a2650]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
  __asm call LAB_1002dc09
  __asm call LAB_100593ef
  __asm push 1
  __asm mov ecx, eax
  __asm call LAB_10045610
  __asm push offset LAB_1186d2ee
  __asm lea ecx, [ebp - 0x14]
  __asm call LAB_1005273e
  __asm lea eax, [ebp - 0x14]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x0a __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm lea ecx, [edi + 0x100]
  __asm call LAB_10023fe2
  __asm lea ecx, [ebp - 0x14]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x0b __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm push offset LAB_1186d2ee
  __asm lea ecx, [ebp - 0x18]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
  __asm call LAB_1005273e
  __asm lea eax, [ebp - 0x18]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm lea ecx, [edi + 0x100]
  __asm call LAB_1007b788
  __asm lea ecx, [ebp - 0x18]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm push 1
  __asm lea ecx, [edi + 0x10c]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xe8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
  __asm call LAB_10093da1
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
}




// Reference entry 1061a9b0; body size 724 bytes.
#line 1 "ENTRY_1061a9b0"

__declspec(naked) void FUN_1061a9b0(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_115bda55
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 0x30
  __asm push ebx
  __asm push esi
  __asm push edi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov edi, ecx
  __asm push offset LAB_118be1d8
  __asm lea ecx, [ebp - 0x10]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xec __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005273e
  __asm lea eax, [ebp - 0x10]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm lea ecx, [ebp - 0x3c]
  __asm call LAB_1000269e
  __asm mov esi, dword ptr [ebp + 8]
  __asm mov ecx, esi
  __asm push eax
  __asm mov byte ptr [ebp - 4], 1
  __asm call LAB_1005e372
  __asm lea ecx, [ebp - 0x3c]
  __asm mov bl, al
  __asm call LAB_10074c85
  __asm lea ecx, [ebp - 0x10]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x02 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
  __asm test bl, bl
  __asm _emit 0x74 __asm _emit 0x4a
  __asm mov ecx, edi
  __asm call LAB_1008cfec
  __asm lea ecx, [eax + 0x100]
  __asm call LAB_10095a84
  __asm test al, al
  __asm _emit 0x74 __asm _emit 0x12
  __asm mov ecx, edi
  __asm call LAB_1008cfec
  __asm lea ecx, [eax + 0x100]
  __asm call LAB_1000dce2
  __asm mov ecx, edi
  __asm call LAB_1008cfec
  __asm mov byte ptr [eax + 0x120], 0
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret 4
  __asm push offset LAB_118bcc7c
  __asm lea ecx, [ebp + 8]
  __asm call LAB_1005273e
  __asm lea eax, [ebp + 8]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x03 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm lea ecx, [ebp - 0x3c]
  __asm call LAB_1000269e
  __asm push eax
  __asm mov ecx, esi
  __asm mov byte ptr [ebp - 4], 4
  __asm call LAB_1005e372
  __asm lea ecx, [ebp - 0x3c]
  __asm mov bl, al
  __asm call LAB_10074c85
  __asm lea ecx, [ebp + 8]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x05 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
  __asm test bl, bl
  __asm je LAB_1061ac70
  __asm mov ecx, edi
  __asm call LAB_1008cfec
  __asm lea ecx, [eax + 0x100]
  __asm call LAB_10011153
  __asm cmp eax, 4
  __asm jne LAB_1061ac70
  __asm mov ecx, edi
  __asm mov byte ptr [edi + 0xe0], 1
  __asm lea ebx, [eax - 2]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x08 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1008cfec
  __asm lea ecx, [ebp - 0x10]
  __asm push ecx
  __asm lea ecx, [eax + 0xe8]
  __asm call LAB_10090cd2
  __asm push eax
  __asm lea ecx, [ebp - 0x24]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_100569d3
  __asm mov ecx, dword ptr [ebp - 0x10]
  __asm mov byte ptr [ebp - 4], 9
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov esi, dword ptr [ebp - 0x24]
  __asm mov byte ptr [ebp - 4], 8
  __asm test esi, esi
  __asm je LAB_1061abd5
  __asm mov ecx, esi
  __asm call LAB_1002e410
  __asm test al, al
  __asm je LAB_1061abd5
  __asm lea eax, [ebp + 8]
  __asm mov ecx, esi
  __asm push eax
  __asm call LAB_1008cc95
  __asm push eax
  __asm lea ecx, [ebp - 0x1c]
  __asm mov byte ptr [ebp - 4], 0xa
  __asm call LAB_1006403d
  __asm mov ecx, dword ptr [ebp + 8]
  __asm mov byte ptr [ebp - 4], 0xd
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0x1c]
  __asm mov byte ptr [ebp - 4], 0xc
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x24
  __asm lea eax, [ebp - 0x14]
  __asm push eax
  __asm call LAB_10086ecb
  __asm mov ecx, 1
  __asm mov eax, dword ptr [eax]
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x13
  __asm cmp byte ptr [eax], 0
  __asm _emit 0x74 __asm _emit 0x0e __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x08 __asm _emit 0x02 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ebx, ecx
  __asm _emit 0xeb __asm _emit 0x0f
  __asm mov ecx, dword ptr [ebp - 0x14]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x08 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ebx, 2
  __asm test cl, 1
  __asm _emit 0x74 __asm _emit 0x0c
  __asm lea ecx, [ebp - 0x14]
  __asm mov byte ptr [ebp - 4], 0xe
  __asm call LAB_1005c315
  __asm lea ecx, [ebp - 0x1c]
  __asm mov byte ptr [ebp - 4], 8
  __asm call LAB_1000335f
  __asm lea eax, [ebp - 0x14]
  __asm mov ecx, esi
  __asm push eax
  __asm call LAB_1008ab11
  __asm mov eax, dword ptr [eax]
  __asm mov ecx, offset LAB_1186d2ee
  __asm push dword ptr [ebp + 8]
  __asm test eax, eax
  __asm mov byte ptr [ebp - 4], 0xf
  __asm push ebx
  __asm cmovne ecx, eax
  __asm lea eax, [edi + 0xa8]
  __asm push ecx
  __asm push offset LAB_118be1e8
  __asm push eax
  __asm call LAB_10018bab
  __asm add esp, 0x14
  __asm lea ecx, [ebp - 0x14]
  __asm mov byte ptr [ebp - 4], 0x10
  __asm call LAB_1005c315
  __asm mov ecx, edi
  __asm mov byte ptr [ebp - 4], 8
  __asm call LAB_1008cfec
  __asm lea ecx, [ebp - 0x18]
  __asm push ecx
  __asm lea ecx, [eax + 0xe8]
  __asm call LAB_10090cd2
  __asm mov esi, eax
  __asm mov ecx, edi
  __asm mov byte ptr [ebp - 4], 0x11
  __asm call LAB_1008cfec
  __asm push dword ptr [ebp + 8]
  __asm push ebx
  __asm push dword ptr [esi]
  __asm lea ecx, [eax + 0x10c]
  __asm call LAB_10013f02
  __asm mov ecx, dword ptr [ebp - 0x18]
  __asm mov byte ptr [ebp - 4], 0x12
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0x20]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x13 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret 4
}




// Reference entry 1061ad40; body size 187 bytes.
#line 1 "ENTRY_1061ad40"

__declspec(naked) void FUN_1061ad40(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_115bdaad
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 0x1c
  __asm push ebx
  __asm push esi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov esi, ecx
  __asm push offset LAB_118a6bec
  __asm lea ecx, [ebp - 0x10]
  __asm call LAB_1005273e
  __asm lea eax, [ebp - 0x10]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm lea ecx, [ebp - 0x28]
  __asm call LAB_1000269e
  __asm mov ecx, dword ptr [ebp + 8]
  __asm push eax
  __asm mov byte ptr [ebp - 4], 1
  __asm call LAB_1005e372
  __asm lea ecx, [ebp - 0x28]
  __asm mov bl, al
  __asm call LAB_10074c85
  __asm lea ecx, [ebp - 0x10]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x02 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
  __asm test bl, bl
  __asm _emit 0x74 __asm _emit 0x2e
  __asm push offset LAB_118be11c
  __asm lea ecx, [ebp + 8]
  __asm call LAB_1005273e
  __asm lea eax, [ebp + 8]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x03 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov ecx, esi
  __asm call LAB_1001246d
  __asm lea ecx, [ebp + 8]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop esi
  __asm pop ebx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret 4
}




// Reference entry 1061ae30; body size 1871 bytes.
#line 1 "ENTRY_1061ae30"

__declspec(naked) void FUN_1061ae30(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_115bdba7
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 0x28
  __asm push ebx
  __asm push esi
  __asm push edi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov esi, ecx
  __asm lea ecx, [ebp - 0x34]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xf0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10098c70
  __asm mov edi, dword ptr [ebp + 8]
  __asm mov ecx, edi
  __asm push eax
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005e372
  __asm lea ecx, [ebp - 0x34]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
  __asm mov bl, al
  __asm call LAB_10074c85
  __asm test bl, bl
  __asm je LAB_1061b0d0
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax + 0xc]
  __asm mov ecx, eax
  __asm call LAB_1003e9c8
  __asm mov ecx, esi
  __asm mov edi, eax
  __asm call LAB_1008cfec
  __asm lea ecx, [ebp + 8]
  __asm push ecx
  __asm lea ecx, [eax + 0xe8]
  __asm call LAB_10090cd2
  __asm cmp dword ptr [eax], 0
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xf0 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x74 __asm _emit 0x09
  __asm cmp edi, 0xa
  __asm _emit 0x75 __asm _emit 0x04
  __asm mov al, 1
  __asm _emit 0xeb __asm _emit 0x02
  __asm xor al, al
  __asm push eax
  __asm mov ecx, esi
  __asm call LAB_1008cfec
  __asm lea ecx, [eax + 0x10c]
  __asm call LAB_100819df
  __asm xor ebx, ebx
  __asm mov ecx, dword ptr [ebp + 8]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x02 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, esi
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
  __asm call LAB_1008cfec
  __asm lea ecx, [ebp - 0x10]
  __asm push ecx
  __asm mov ecx, eax
  __asm call LAB_1002806a
  __asm mov dword ptr [ebp + 8], eax
  __asm lea edi, [esi + 0xf0]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x03 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm cmp eax, edi
  __asm _emit 0x74 __asm _emit 0x15
  __asm mov ecx, edi
  __asm call LAB_1005c315
  __asm mov ecx, dword ptr [ebp + 8]
  __asm mov eax, dword ptr [ecx]
  __asm mov ecx, edi
  __asm mov dword ptr [edi], eax
  __asm call LAB_1002a973
  __asm lea ecx, [ebp - 0x10]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm push 0x7d0
  __asm push offset LAB_118bcc00
  __asm mov ecx, esi
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
  __asm call LAB_1005d2f6
  __asm mov ecx, esi
  __asm call LAB_1008cfec
  __asm push 1
  __asm lea ecx, [eax + 0x100]
  __asm call LAB_1008dd2a
  __asm test al, al
  __asm mov ecx, esi
  __asm sete byte ptr [ebp + 0xb]
  __asm call LAB_1008cfec
  __asm mov ecx, dword ptr [LAB_122f5674]
  __asm push 0x15
  __asm call LAB_1005ff38
  __asm test al, al
  __asm _emit 0x75 __asm _emit 0x39
  __asm lea eax, [ebp - 0x1c]
  __asm push eax
  __asm call LAB_1009058e
  __asm add esp, 4
  __asm mov ecx, dword ptr [eax]
  __asm lea edx, [ebp - 0x18]
  __asm push edx
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x05 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xf0 __asm _emit 0x02 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x3c]
  __asm mov ebx, 6
  __asm cmp dword ptr [eax], 0
  __asm _emit 0x74 __asm _emit 0x0a
  __asm cmp byte ptr [ebp + 0xb], 0
  __asm _emit 0x74 __asm _emit 0x04
  __asm mov al, 1
  __asm _emit 0xeb __asm _emit 0x02
  __asm xor al, al
  __asm mov byte ptr [esi + 0xe9], al
  __asm test bl, 4
  __asm _emit 0x74 __asm _emit 0x19
  __asm and ebx, 0xfffffffb
  __asm mov dword ptr [ebp - 0x10], ebx
  __asm mov ecx, dword ptr [ebp - 0x18]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
  __asm test bl, 2
  __asm _emit 0x74 __asm _emit 0x1a
  __asm mov ecx, dword ptr [ebp - 0x1c]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x07 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
  __asm cmp byte ptr [esi + 0xe9], 0
  __asm _emit 0x74 __asm _emit 0x7f
  __asm push 0x1388
  __asm push offset LAB_118bcc10
  __asm mov ecx, esi
  __asm call LAB_1005d2f6
  __asm push 0x3e8
  __asm push offset LAB_118bcc2c
  __asm mov ecx, esi
  __asm call LAB_1005d2f6
  __asm mov ecx, esi
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xec __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1008cfec
  __asm lea ecx, [ebp + 8]
  __asm push ecx
  __asm mov ecx, eax
  __asm call LAB_1004d7d9
  __asm push eax
  __asm lea ecx, [esi + 0xe0]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1000a416
  __asm mov ecx, dword ptr [ebp + 8]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x09 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm push 0
  __asm push dword ptr [esi + 0xe0]
  __asm mov ecx, esi
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
  __asm push offset LAB_118bcc48
  __asm call LAB_1002da2e
  __asm lea eax, [esi + 0xa8]
  __asm push offset LAB_118bcc5c
  __asm push eax
  __asm call LAB_10018bab
  __asm add esp, 8
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret 4
  __asm push offset LAB_118bcc48
  __asm lea ecx, [ebp + 8]
  __asm call LAB_1005273e
  __asm lea eax, [ebp + 8]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x0a __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm lea ecx, [ebp - 0x34]
  __asm call LAB_10095656
  __asm push eax
  __asm mov ecx, edi
  __asm mov byte ptr [ebp - 4], 0xb
  __asm call LAB_1005e372
  __asm lea ecx, [ebp - 0x34]
  __asm mov bl, al
  __asm call LAB_10074c85
  __asm lea ecx, [ebp + 8]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
  __asm test bl, bl
  __asm je LAB_1061b1f3
  __asm push 1
  __asm mov ecx, esi
  __asm call LAB_1008cfec
  __asm lea ecx, [eax + 0x100]
  __asm call LAB_1007693b
  __asm mov ecx, esi
  __asm call LAB_1008cfec
  __asm mov ecx, dword ptr [esi + 0xe0]
  __asm movzx ecx, byte ptr [ecx + 0x111]
  __asm push ecx
  __asm lea ecx, [eax + 0x100]
  __asm call LAB_10098694
  __asm mov eax, dword ptr [esi + 0xe0]
  __asm lea ecx, [ebp + 8]
  __asm add eax, 0x114
  __asm push eax
  __asm call LAB_10036c23
  __asm lea eax, [ebp + 8]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov ecx, esi
  __asm call LAB_1008cfec
  __asm lea ecx, [eax + 0x100]
  __asm call LAB_10059e7b
  __asm lea ecx, [ebp + 8]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x0e __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm mov ecx, esi
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
  __asm call LAB_1008cfec
  __asm mov ecx, dword ptr [esi + 0xe0]
  __asm movzx ecx, byte ptr [ecx + 0x118]
  __asm push ecx
  __asm lea ecx, [eax + 0x100]
  __asm call LAB_100246a9
  __asm mov ecx, esi
  __asm call LAB_1008cfec
  __asm mov ecx, dword ptr [esi + 0xe0]
  __asm movzx ecx, byte ptr [ecx + 0x119]
  __asm push ecx
  __asm lea ecx, [eax + 0x100]
  __asm call LAB_10038122
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret 4
  __asm push offset LAB_118bcc48
  __asm lea ecx, [ebp + 8]
  __asm call LAB_1005273e
  __asm lea eax, [ebp + 8]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x0f __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm lea ecx, [ebp - 0x34]
  __asm call LAB_1004d513
  __asm push eax
  __asm mov ecx, edi
  __asm mov byte ptr [ebp - 4], 0x10
  __asm call LAB_1005e372
  __asm lea ecx, [ebp - 0x34]
  __asm mov bl, al
  __asm call LAB_10074c85
  __asm lea ecx, [ebp + 8]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x11 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
  __asm test bl, bl
  __asm je LAB_1061b2ec
  __asm push offset LAB_118bcc10
  __asm mov ecx, esi
  __asm call LAB_10086075
  __asm test al, al
  __asm je LAB_1061b56b
  __asm push offset LAB_118bcc2c
  __asm mov ecx, esi
  __asm call LAB_10086075
  __asm test al, al
  __asm je LAB_1061b56b
  __asm mov eax, dword ptr [esi + 0xec]
  __asm cmp eax, 2
  __asm jge LAB_1061b56b
  __asm inc eax
  __asm mov ecx, esi
  __asm mov dword ptr [esi + 0xec], eax
  __asm call LAB_1008cfec
  __asm lea ecx, [ebp + 8]
  __asm push ecx
  __asm mov ecx, eax
  __asm call LAB_1004d7d9
  __asm push eax
  __asm lea ecx, [esi + 0xe0]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x12 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1000a416
  __asm mov ecx, dword ptr [ebp + 8]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x13 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm push 0
  __asm push dword ptr [esi + 0xe0]
  __asm mov ecx, esi
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
  __asm push offset LAB_118bcc48
  __asm call LAB_1002da2e
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret 4
  __asm push offset LAB_118bcc2c
  __asm lea ecx, [ebp + 8]
  __asm call LAB_1005273e
  __asm lea eax, [ebp + 8]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm lea ecx, [ebp - 0x34]
  __asm call LAB_1000117c
  __asm push eax
  __asm mov ecx, edi
  __asm mov byte ptr [ebp - 4], 0x15
  __asm call LAB_1005e372
  __asm lea ecx, [ebp - 0x34]
  __asm mov bl, al
  __asm call LAB_10074c85
  __asm lea ecx, [ebp + 8]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x16 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
  __asm test bl, bl
  __asm je LAB_1061b404
  __asm push offset LAB_118bcc10
  __asm mov ecx, esi
  __asm call LAB_10086075
  __asm test al, al
  __asm je LAB_1061b56b
  __asm mov ecx, esi
  __asm call LAB_1008cfec
  __asm lea ecx, [eax + 0x100]
  __asm call LAB_100535ad
  __asm test al, al
  __asm jne LAB_1061b56b
  __asm push 0x3e8
  __asm push offset LAB_118bcc2c
  __asm mov ecx, esi
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xec __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005d2f6
  __asm push offset LAB_118bcc48
  __asm mov ecx, esi
  __asm call LAB_1001df39
  __asm test al, al
  __asm jne LAB_1061b56b
  __asm mov ecx, esi
  __asm call LAB_1008cfec
  __asm lea ecx, [ebp + 8]
  __asm push ecx
  __asm mov ecx, eax
  __asm call LAB_1004d7d9
  __asm push eax
  __asm lea ecx, [esi + 0xe0]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x17 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1000a416
  __asm mov ecx, dword ptr [ebp + 8]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm push 0
  __asm push dword ptr [esi + 0xe0]
  __asm mov ecx, esi
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
  __asm push offset LAB_118bcc48
  __asm call LAB_1002da2e
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret 4
  __asm push offset LAB_118bcc7c
  __asm lea ecx, [ebp + 8]
  __asm call LAB_1005273e
  __asm lea eax, [ebp + 8]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x19 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm lea ecx, [ebp - 0x34]
  __asm call LAB_1000269e
  __asm push eax
  __asm mov ecx, edi
  __asm mov byte ptr [ebp - 4], 0x1a
  __asm call LAB_1005e372
  __asm lea ecx, [ebp - 0x34]
  __asm mov bl, al
  __asm call LAB_10074c85
  __asm lea ecx, [ebp + 8]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x1b __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
  __asm test bl, bl
  __asm _emit 0x74 __asm _emit 0x5e
  __asm cmp byte ptr [esi + 0xe9], 0
  __asm _emit 0x74 __asm _emit 0x26
  __asm mov ecx, esi
  __asm call LAB_1008cfec
  __asm lea ecx, [eax + 0x100]
  __asm call LAB_100535ad
  __asm test al, al
  __asm _emit 0x75 __asm _emit 0x10
  __asm push offset LAB_118bcc10
  __asm mov ecx, esi
  __asm call LAB_10086075
  __asm test al, al
  __asm _emit 0x75 __asm _emit 0x14
  __asm push offset LAB_118bcc00
  __asm mov ecx, esi
  __asm call LAB_10086075
  __asm test al, al
  __asm je LAB_1061b56b
  __asm mov byte ptr [esi + 0xe8], 1
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret 4
  __asm push offset LAB_118bcc88
  __asm lea ecx, [ebp + 8]
  __asm call LAB_1005273e
  __asm lea eax, [ebp + 8]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x1c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm lea ecx, [ebp - 0x34]
  __asm call LAB_1000269e
  __asm push eax
  __asm mov ecx, edi
  __asm mov byte ptr [ebp - 4], 0x1d
  __asm call LAB_1005e372
  __asm lea ecx, [ebp - 0x34]
  __asm mov bl, al
  __asm call LAB_10074c85
  __asm lea ecx, [ebp + 8]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x1e __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
  __asm test bl, bl
  __asm _emit 0x74 __asm _emit 0x69
  __asm mov ecx, esi
  __asm call LAB_1008cfec
  __asm cmp dword ptr [eax + 0x11c], 3
  __asm _emit 0x74 __asm _emit 0x2b
  __asm push offset LAB_118bcc90
  __asm lea ecx, [ebp - 0x14]
  __asm call LAB_1005273e
  __asm lea eax, [ebp - 0x14]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x21 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov ecx, esi
  __asm call LAB_1001246d
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x22 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea ecx, [ebp - 0x14]
  __asm _emit 0xeb __asm _emit 0x29
  __asm push offset LAB_118bca78
  __asm lea ecx, [ebp + 8]
  __asm call LAB_1005273e
  __asm lea eax, [ebp + 8]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x1f __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov ecx, esi
  __asm call LAB_1001246d
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x20 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea ecx, [ebp + 8]
  __asm call LAB_1005c315
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret 4
}




// Reference entry 1061b760; body size 187 bytes.
#line 1 "ENTRY_1061b760"

__declspec(naked) void FUN_1061b760(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_115bdc1d
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 0x1c
  __asm push ebx
  __asm push esi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov esi, ecx
  __asm push offset LAB_118bdef4
  __asm lea ecx, [ebp - 0x10]
  __asm call LAB_1005273e
  __asm lea eax, [ebp - 0x10]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm lea ecx, [ebp - 0x28]
  __asm call LAB_1000269e
  __asm mov ecx, dword ptr [ebp + 8]
  __asm push eax
  __asm mov byte ptr [ebp - 4], 1
  __asm call LAB_1005e372
  __asm lea ecx, [ebp - 0x28]
  __asm mov bl, al
  __asm call LAB_10074c85
  __asm lea ecx, [ebp - 0x10]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x02 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
  __asm test bl, bl
  __asm _emit 0x74 __asm _emit 0x2e
  __asm push offset LAB_118bdf00
  __asm lea ecx, [ebp + 8]
  __asm call LAB_1005273e
  __asm lea eax, [ebp + 8]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x03 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov ecx, esi
  __asm call LAB_1001246d
  __asm lea ecx, [ebp + 8]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop esi
  __asm pop ebx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret 4
}




// Reference entry 1061b850; body size 211 bytes.
#line 1 "ENTRY_1061b850"

__declspec(naked) void FUN_1061b850(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_115bdc65
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 0x18
  __asm push ebx
  __asm push esi
  __asm push edi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov edi, ecx
  __asm lea ecx, [ebp - 0x24]
  __asm call LAB_10098c70
  __asm mov ecx, dword ptr [ebp + 8]
  __asm push eax
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005e372
  __asm lea ecx, [ebp - 0x24]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
  __asm mov bl, al
  __asm call LAB_10074c85
  __asm test bl, bl
  __asm _emit 0x74 __asm _emit 0x68
  __asm mov ecx, edi
  __asm call LAB_1008cfec
  __asm lea ecx, [ebp + 8]
  __asm push ecx
  __asm mov ecx, eax
  __asm call LAB_1002806a
  __asm mov ebx, eax
  __asm lea esi, [edi + 0xe0]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm cmp ebx, esi
  __asm _emit 0x74 __asm _emit 0x12
  __asm mov ecx, esi
  __asm call LAB_1005c315
  __asm mov eax, dword ptr [ebx]
  __asm mov ecx, esi
  __asm mov dword ptr [esi], eax
  __asm call LAB_1002a973
  __asm lea ecx, [ebp + 8]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x02 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm push 1
  __asm mov ecx, edi
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
  __asm call LAB_1008cfec
  __asm lea ecx, [eax + 0x10c]
  __asm call LAB_100819df
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret 4
}




// Reference entry 1061b960; body size 177 bytes.
#line 1 "ENTRY_1061b960"

__declspec(naked) void FUN_1061b960(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_115bdca5
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 0x18
  __asm push ebx
  __asm push esi
  __asm push edi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov esi, ecx
  __asm lea ecx, [ebp - 0x24]
  __asm call LAB_10098c70
  __asm mov ecx, dword ptr [ebp + 8]
  __asm push eax
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005e372
  __asm lea ecx, [ebp - 0x24]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
  __asm mov bl, al
  __asm call LAB_10074c85
  __asm test bl, bl
  __asm _emit 0x74 __asm _emit 0x46
  __asm mov ecx, esi
  __asm call LAB_1008cfec
  __asm lea ecx, [ebp + 8]
  __asm push ecx
  __asm mov ecx, eax
  __asm call LAB_1002806a
  __asm mov edi, eax
  __asm add esi, 0xe0
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm cmp edi, esi
  __asm _emit 0x74 __asm _emit 0x12
  __asm mov ecx, esi
  __asm call LAB_1005c315
  __asm mov eax, dword ptr [edi]
  __asm mov ecx, esi
  __asm mov dword ptr [esi], eax
  __asm call LAB_1002a973
  __asm lea ecx, [ebp + 8]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x02 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret 4
}




// Reference entry 1061ba40; body size 335 bytes.
#line 1 "ENTRY_1061ba40"

__declspec(naked) void FUN_1061ba40(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_115bdd22
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 0x20
  __asm push ebx
  __asm push esi
  __asm push edi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push offset LAB_118bcc7c
  __asm lea ecx, [ebp - 0x10]
  __asm call LAB_1005273e
  __asm lea eax, [ebp - 0x10]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm lea ecx, [ebp - 0x2c]
  __asm call LAB_1000269e
  __asm mov ecx, dword ptr [ebp + 8]
  __asm push eax
  __asm mov byte ptr [ebp - 4], 1
  __asm call LAB_1005e372
  __asm lea ecx, [ebp - 0x2c]
  __asm mov bl, al
  __asm call LAB_10074c85
  __asm lea ecx, [ebp - 0x10]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x02 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
  __asm test bl, bl
  __asm je LAB_1061bb7b
  __asm push 0x18
  __asm call LAB_10024f14
  __asm mov esi, eax
  __asm add esp, 4
  __asm mov dword ptr [ebp + 8], esi
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x37
  __asm mov dword ptr [esi], LAB_11883dcc
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esi], LAB_118871d4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x15 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46
  __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xeb __asm _emit 0x02
  __asm xor esi, esi
  __asm xor edi, edi
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
  __asm mov dword ptr [ebp - 0x14], esi
  __asm mov dword ptr [ebp - 0x10], edi
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x20
  __asm mov eax, dword ptr [esi]
  __asm mov eax, dword ptr [eax + 0xc]
  __asm cmp eax, offset LAB_1004dc43
  __asm _emit 0x75 __asm _emit 0x04
  __asm mov edi, esi
  __asm _emit 0xeb __asm _emit 0x06
  __asm mov ecx, esi
  __asm call eax
  __asm mov edi, eax
  __asm mov edx, dword ptr [edi]
  __asm mov ecx, edi
  __asm mov dword ptr [ebp - 0x10], edi
  __asm call dword ptr [edx + 4]
  __asm mov eax, dword ptr [esi]
  __asm lea ecx, [ebp + 8]
  __asm push ecx
  __asm mov ecx, esi
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x09 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call dword ptr [eax + 0x34]
  __asm mov ecx, dword ptr [eax]
  __asm mov byte ptr [ebp - 4], 0xa
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x14]
  __asm mov ecx, dword ptr [ebp + 8]
  __asm mov byte ptr [ebp - 4], 0xb
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test edi, edi
  __asm _emit 0x74 __asm _emit 0x07
  __asm mov eax, dword ptr [edi]
  __asm mov ecx, edi
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret 4
}




// Reference entry 1061bbf0; body size 177 bytes.
#line 1 "ENTRY_1061bbf0"

__declspec(naked) void FUN_1061bbf0(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_115bdd75
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 0x18
  __asm push ebx
  __asm push esi
  __asm push edi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov esi, ecx
  __asm lea ecx, [ebp - 0x24]
  __asm call LAB_10098c70
  __asm mov ecx, dword ptr [ebp + 8]
  __asm push eax
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005e372
  __asm lea ecx, [ebp - 0x24]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
  __asm mov bl, al
  __asm call LAB_10074c85
  __asm test bl, bl
  __asm _emit 0x74 __asm _emit 0x46
  __asm mov ecx, esi
  __asm call LAB_1008cfec
  __asm lea ecx, [ebp + 8]
  __asm push ecx
  __asm mov ecx, eax
  __asm call LAB_1002806a
  __asm mov edi, eax
  __asm add esi, 0xe0
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm cmp edi, esi
  __asm _emit 0x74 __asm _emit 0x12
  __asm mov ecx, esi
  __asm call LAB_1005c315
  __asm mov eax, dword ptr [edi]
  __asm mov ecx, esi
  __asm mov dword ptr [esi], eax
  __asm call LAB_1002a973
  __asm lea ecx, [ebp + 8]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x02 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret 4
}




// Reference entry 1061bcd0; body size 230 bytes.
#line 1 "ENTRY_1061bcd0"

__declspec(naked) void FUN_1061bcd0(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_115bddb5
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 0x30
  __asm push ebx
  __asm push esi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov esi, ecx
  __asm lea ecx, [ebp - 0x24]
  __asm call LAB_10098c70
  __asm mov ecx, dword ptr [ebp + 8]
  __asm push eax
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005e372
  __asm lea ecx, [ebp - 0x24]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
  __asm mov bl, al
  __asm call LAB_10074c85
  __asm test bl, bl
  __asm _emit 0x74 __asm _emit 0x2b
  __asm push 0x4000
  __asm mov ecx, esi
  __asm call LAB_10084699
  __asm call LAB_100391cb
  __asm mov ecx, eax
  __asm call LAB_10070bd5
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop esi
  __asm pop ebx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret 4
  __asm lea ecx, [ebp - 0x3c]
  __asm call LAB_100763b9
  __asm mov ecx, dword ptr [ebp + 8]
  __asm push eax
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005e372
  __asm lea ecx, [ebp - 0x3c]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
  __asm mov bl, al
  __asm call LAB_10074c85
  __asm test bl, bl
  __asm _emit 0x74 __asm _emit 0x25
  __asm mov ecx, esi
  __asm call LAB_1008cfec
  __asm lea ecx, [eax + 0x100]
  __asm call LAB_10011153
  __asm cmp eax, 4
  __asm _emit 0x75 __asm _emit 0x0e
  __asm push 0
  __asm call LAB_100391cb
  __asm mov ecx, eax
  __asm call LAB_1007a365
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop esi
  __asm pop ebx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret 4
}




// Reference entry 1061bdf0; body size 330 bytes.
#line 1 "ENTRY_1061bdf0"

__declspec(naked) void FUN_1061bdf0(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_115bde15
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 0x2c
  __asm push ebx
  __asm push esi
  __asm push edi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea ecx, [ebp - 0x38]
  __asm call LAB_10098c70
  __asm mov ecx, dword ptr [ebp + 8]
  __asm push eax
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005e372
  __asm lea ecx, [ebp - 0x38]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
  __asm mov bl, al
  __asm call LAB_10074c85
  __asm test bl, bl
  __asm je LAB_1061bf26
  __asm call LAB_1001c9c2
  __asm push 7
  __asm lea edx, [ebp - 0x18]
  __asm push edx
  __asm mov eax, dword ptr [eax + 0x4c]
  __asm mov ecx, dword ptr [eax + 0xe8]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm mov esi, dword ptr [eax]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ebp - 0x20], esi
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x0b
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax + 0xc]
  __asm mov edi, eax
  __asm _emit 0xeb __asm _emit 0x02
  __asm xor edi, edi
  __asm mov dword ptr [ebp - 0x1c], edi
  __asm mov byte ptr [ebp - 4], 2
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x4f
  __asm push offset LAB_1186e230
  __asm lea ecx, [ebp + 8]
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esi]
  __asm lea ecx, [ebp + 8]
  __asm push ecx
  __asm lea ecx, [ebp - 0x10]
  __asm mov byte ptr [ebp - 4], 3
  __asm push ecx
  __asm mov ecx, esi
  __asm call dword ptr [eax]
  __asm mov esi, dword ptr [eax]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ebp - 0x14], esi
  __asm mov ecx, dword ptr [ebp - 0x10]
  __asm mov byte ptr [ebp - 4], 5
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp + 8]
  __asm mov byte ptr [ebp - 4], 6
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xeb __asm _emit 0x05
  __asm xor esi, esi
  __asm mov dword ptr [ebp - 0x14], esi
  __asm mov byte ptr [ebp - 4], 7
  __asm test edi, edi
  __asm _emit 0x74 __asm _emit 0x07
  __asm mov eax, dword ptr [edi]
  __asm mov ecx, edi
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0x18]
  __asm mov byte ptr [ebp - 4], 0xa
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov byte ptr [ebp - 4], 9
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x09
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 0
  __asm call dword ptr [eax + 0x14]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x0b __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x07
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret 4
}




// Reference entry 1061bf90; body size 187 bytes.
#line 1 "ENTRY_1061bf90"

__declspec(naked) void FUN_1061bf90(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_115bde6d
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 0x1c
  __asm push ebx
  __asm push esi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov esi, ecx
  __asm push offset LAB_118bdef4
  __asm lea ecx, [ebp - 0x10]
  __asm call LAB_1005273e
  __asm lea eax, [ebp - 0x10]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm lea ecx, [ebp - 0x28]
  __asm call LAB_1000269e
  __asm mov ecx, dword ptr [ebp + 8]
  __asm push eax
  __asm mov byte ptr [ebp - 4], 1
  __asm call LAB_1005e372
  __asm lea ecx, [ebp - 0x28]
  __asm mov bl, al
  __asm call LAB_10074c85
  __asm lea ecx, [ebp - 0x10]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x02 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
  __asm test bl, bl
  __asm _emit 0x74 __asm _emit 0x2e
  __asm push offset LAB_118bdfd0
  __asm lea ecx, [ebp + 8]
  __asm call LAB_1005273e
  __asm lea eax, [ebp + 8]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x03 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov ecx, esi
  __asm call LAB_1001246d
  __asm lea ecx, [ebp + 8]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop esi
  __asm pop ebx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret 4
}




// Reference entry 1061c090; body size 363 bytes.
#line 1 "ENTRY_1061c090"

__declspec(naked) void FUN_1061c090(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_115bdeb5
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 8
  __asm push ebx
  __asm push esi
  __asm push edi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov edi, ecx
  __asm lea ecx, [edi + 0x10]
  __asm call LAB_1000ba05
  __asm mov ecx, eax
  __asm call LAB_10086381
  __asm mov ecx, edi
  __asm mov esi, eax
  __asm call LAB_1008cfec
  __asm lea ecx, [eax + 0x100]
  __asm call LAB_10011153
  __asm mov ebx, eax
  __asm mov ecx, esi
  __asm lea eax, [ebp - 0x10]
  __asm push eax
  __asm call LAB_1004216d
  __asm mov ecx, dword ptr [eax]
  __asm mov esi, offset LAB_1186d2ee
  __asm test ecx, ecx
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm cmovne esi, ecx
  __asm mov ecx, edi
  __asm call LAB_1008cfec
  __asm push esi
  __asm push dword ptr [edi + 0xc0]
  __asm lea ecx, [eax + 0x100]
  __asm call LAB_10017436
  __asm push eax
  __asm push ebx
  __asm push offset LAB_118bdbb4
  __asm lea esi, [edi + 0xa8]
  __asm push esi
  __asm call LAB_10018bab
  __asm add esp, 0x18
  __asm lea ecx, [ebp - 0x10]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
  __asm cmp ebx, dword ptr [edi + 0xc0]
  __asm jne LAB_1061c1d8
  __asm mov ecx, edi
  __asm call LAB_1008cfec
  __asm mov byte ptr [eax + 0x120], 1
  __asm cmp ebx, 2
  __asm jne LAB_1061c1e9
  __asm push offset LAB_118bdbdc
  __asm push esi
  __asm call LAB_10018bab
  __asm add esp, 8
  __asm mov ecx, edi
  __asm call LAB_1008cfec
  __asm mov ecx, edi
  __asm mov byte ptr [eax + 0x120], 1
  __asm call LAB_1008cfec
  __asm lea ecx, [ebp - 0x14]
  __asm push ecx
  __asm lea ecx, [eax + 0xe8]
  __asm call LAB_10090cd2
  __asm mov esi, eax
  __asm mov ecx, edi
  __asm mov dword ptr [ebp - 4], ebx
  __asm call LAB_1008cfec
  __asm push 1
  __asm push ebx
  __asm push dword ptr [esi]
  __asm lea ecx, [eax + 0x10c]
  __asm call LAB_10013f02
  __asm mov ecx, dword ptr [ebp - 0x14]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x03 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x28
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
  __asm test ebx, ebx
  __asm _emit 0x75 __asm _emit 0x0d
  __asm mov ecx, edi
  __asm call LAB_1008cfec
  __asm mov byte ptr [eax + 0x120], bl
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
}




// Reference entry 1061c370; body size 145 bytes.
#line 1 "ENTRY_1061c370"

__declspec(naked) void FUN_1061c370(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_115bdeed
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm push ecx
  __asm push ebx
  __asm push esi
  __asm push edi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov edi, ecx
  __asm mov esi, dword ptr [edi + 4]
  __asm cmp esi, dword ptr [edi + 8]
  __asm _emit 0x74 __asm _emit 0x44
  __asm mov ebx, dword ptr [ebp + 8]
  __asm mov dword ptr [ebp - 0x10], esi
  __asm mov eax, dword ptr [ebx]
  __asm mov dword ptr [esi], eax
  __asm mov ecx, dword ptr [ebx + 4]
  __asm mov dword ptr [esi + 4], ecx
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm lea eax, [ebx + 8]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm lea ecx, [esi + 8]
  __asm call LAB_10036c23
  __asm add dword ptr [edi + 4], 0xc
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret 4
  __asm push dword ptr [ebp + 8]
  __asm push esi
  __asm call LAB_1007af4a
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret 4
}




// Reference entry 1061c630; body size 166 bytes.
#line 1 "ENTRY_1061c630"

__declspec(naked) void FUN_1061c630(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_115bdf35
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 8
  __asm push esi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov esi, ecx
  __asm push offset LAB_1187bf90
  __asm lea ecx, [ebp - 0x10]
  __asm call LAB_1005273e
  __asm lea eax, [ebp - 0x14]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax]
  __asm lea ecx, [eax + 4]
  __asm call LAB_10051e4c
  __asm mov ecx, dword ptr [ebp - 0x14]
  __asm lea edx, [ebp - 0x10]
  __asm push dword ptr [ebp + 8]
  __asm mov byte ptr [ebp - 4], 1
  __asm push edx
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x28]
  __asm mov ecx, dword ptr [ebp - 0x14]
  __asm mov byte ptr [ebp - 4], 2
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp - 0x10]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x03 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xf0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
  __asm call dword ptr [eax]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop esi
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret 4
}




// Reference entry 1061c700; body size 774 bytes.
#line 1 "ENTRY_1061c700"

__declspec(naked) void FUN_1061c700(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_115bdfd5
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 0xc
  __asm push ebx
  __asm push esi
  __asm push edi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov esi, ecx
  __asm push offset LAB_1187b7d4
  __asm lea ecx, [ebp - 0x14]
  __asm call LAB_1005273e
  __asm lea eax, [ebp - 0x10]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax]
  __asm lea ecx, [eax + 4]
  __asm call LAB_10051e4c
  __asm mov ecx, dword ptr [ebp - 0x10]
  __asm lea edx, [ebp - 0x14]
  __asm mov edi, dword ptr [ebp + 8]
  __asm push edi
  __asm push edx
  __asm mov eax, dword ptr [ecx]
  __asm mov byte ptr [ebp - 4], 1
  __asm call dword ptr [eax + 0x28]
  __asm mov ecx, dword ptr [ebp - 0x10]
  __asm mov byte ptr [ebp - 4], 2
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp - 0x14]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x03 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm xor ebx, ebx
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
  __asm sub edi, 1
  __asm _emit 0x75 __asm _emit 0x03
  __asm lea ebx, [edi + 1]
  __asm push offset LAB_1187bf80
  __asm lea ecx, [ebp - 0x10]
  __asm call LAB_1005273e
  __asm lea eax, [ebp - 0x14]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax]
  __asm lea ecx, [eax + 4]
  __asm call LAB_10051e4c
  __asm mov ecx, dword ptr [ebp - 0x14]
  __asm lea edx, [ebp - 0x10]
  __asm push edx
  __asm mov byte ptr [ebp - 4], 5
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x74]
  __asm call eax
  __asm test al, al
  __asm sete byte ptr [ebp + 0xb]
  __asm mov ecx, dword ptr [ebp - 0x14]
  __asm mov byte ptr [ebp - 4], 6
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp - 0x10]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x07 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm cmp byte ptr [ebp + 0xb], 0
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x5d
  __asm push offset LAB_1187bf80
  __asm lea ecx, [ebp - 0x10]
  __asm call LAB_1005273e
  __asm lea eax, [ebp - 0x14]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax]
  __asm lea ecx, [eax + 4]
  __asm call LAB_10051e4c
  __asm mov ecx, dword ptr [ebp - 0x14]
  __asm lea edx, [ebp - 0x10]
  __asm push ebx
  __asm push edx
  __asm mov byte ptr [ebp - 4], 9
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x28]
  __asm mov ecx, dword ptr [ebp - 0x14]
  __asm mov byte ptr [ebp - 4], 0xa
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp - 0x10]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x0b __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
  __asm push offset LAB_1187bf90
  __asm lea ecx, [ebp - 0x10]
  __asm call LAB_1005273e
  __asm lea eax, [ebp - 0x14]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax]
  __asm lea ecx, [eax + 4]
  __asm call LAB_10051e4c
  __asm mov ecx, dword ptr [ebp - 0x14]
  __asm lea edx, [ebp - 0x10]
  __asm push edx
  __asm mov byte ptr [ebp - 4], 0xd
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x74]
  __asm call eax
  __asm test al, al
  __asm sete bl
  __asm mov ecx, dword ptr [ebp - 0x14]
  __asm mov byte ptr [ebp - 4], 0xe
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp - 0x10]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x0f __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
  __asm test bl, bl
  __asm _emit 0x74 __asm _emit 0x5e
  __asm push offset LAB_1187bf90
  __asm lea ecx, [ebp - 0x10]
  __asm call LAB_1005273e
  __asm lea eax, [ebp - 0x14]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax]
  __asm lea ecx, [eax + 4]
  __asm call LAB_10051e4c
  __asm mov ecx, dword ptr [ebp - 0x14]
  __asm lea edx, [ebp - 0x10]
  __asm push 0
  __asm push edx
  __asm mov byte ptr [ebp - 4], 0x11
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x28]
  __asm mov ecx, dword ptr [ebp - 0x14]
  __asm mov byte ptr [ebp - 4], 0x12
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp - 0x10]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x13 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
  __asm push offset LAB_1187bfa0
  __asm lea ecx, [ebp - 0x10]
  __asm call LAB_1005273e
  __asm lea eax, [ebp - 0x14]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax]
  __asm lea ecx, [eax + 4]
  __asm call LAB_10051e4c
  __asm mov ecx, dword ptr [ebp - 0x14]
  __asm lea edx, [ebp - 0x10]
  __asm push edx
  __asm mov byte ptr [ebp - 4], 0x15
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x74]
  __asm call eax
  __asm test al, al
  __asm sete bl
  __asm mov ecx, dword ptr [ebp - 0x14]
  __asm mov byte ptr [ebp - 4], 0x16
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp - 0x10]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x17 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
  __asm test bl, bl
  __asm _emit 0x74 __asm _emit 0x65
  __asm push offset LAB_1187bfa0
  __asm lea ecx, [ebp + 8]
  __asm call LAB_1005273e
  __asm lea eax, [ebp - 0x18]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax]
  __asm lea ecx, [eax + 4]
  __asm call LAB_10051e4c
  __asm mov ecx, dword ptr [ebp - 0x18]
  __asm lea edx, [ebp + 8]
  __asm push 0
  __asm push edx
  __asm mov byte ptr [ebp - 4], 0x19
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x28]
  __asm mov ecx, dword ptr [ebp - 0x18]
  __asm mov byte ptr [ebp - 4], 0x1a
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp + 8]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x1b __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret 4
}




// Reference entry 1061cb50; body size 410 bytes.
#line 1 "ENTRY_1061cb50"

__declspec(naked) void FUN_1061cb50(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_115be082
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 0xc
  __asm push ebx
  __asm push esi
  __asm push edi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ebx, ecx
  __asm mov dword ptr [ebp - 0x14], ebx
  __asm mov dword ptr [ebx], LAB_118abe0c
  __asm _emit 0xc7 __asm _emit 0x43 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm lea edi, [ebx + 8]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ebp - 0x10], edi
  __asm mov dword ptr [edi], LAB_1189cc70
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push 0xc
  __asm mov byte ptr [ebp - 4], 1
  __asm call LAB_10024f14
  __asm mov esi, eax
  __asm add esp, 4
  __asm mov dword ptr [ebp - 0x18], esi
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x1e
  __asm mov dword ptr [esi], LAB_11881498
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esi], LAB_1189cc48
  __asm mov dword ptr [esi + 8], edi
  __asm _emit 0xeb __asm _emit 0x02
  __asm xor esi, esi
  __asm cmp esi, dword ptr [edi + 4]
  __asm _emit 0x74 __asm _emit 0x46
  __asm mov ecx, dword ptr [edi + 8]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov dword ptr [edi + 4], esi
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x1e
  __asm mov eax, dword ptr [esi]
  __asm mov eax, dword ptr [eax + 0xc]
  __asm cmp eax, offset LAB_1007e749
  __asm _emit 0x74 __asm _emit 0x06
  __asm mov ecx, esi
  __asm call eax
  __asm mov esi, eax
  __asm mov dword ptr [edi + 8], esi
  __asm mov ecx, esi
  __asm mov eax, dword ptr [esi]
  __asm call dword ptr [eax + 4]
  __asm _emit 0xeb __asm _emit 0x07 __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ebx], LAB_118be678
  __asm mov dword ptr [edi], LAB_118be6a0
  __asm _emit 0xc7 __asm _emit 0x43 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x43 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x43
  __asm _emit 0x1c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x43 __asm _emit 0x20 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x43 __asm _emit 0x24 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x43 __asm _emit 0x28 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x43 __asm _emit 0x2c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x43 __asm _emit 0x30 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea eax, [ebp - 0x10]
  __asm mov byte ptr [ebp - 4], 7
  __asm push eax
  __asm call LAB_1001c9c2
  __asm mov ecx, eax
  __asm call LAB_1000825b
  __asm mov esi, dword ptr [eax]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ebx + 0x18]
  __asm mov byte ptr [ebp - 4], 8
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x43 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x43 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov dword ptr [ebx + 0x14], esi
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x09
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax + 0xc]
  __asm _emit 0xeb __asm _emit 0x02
  __asm xor eax, eax
  __asm mov dword ptr [ebx + 0x18], eax
  __asm mov ecx, dword ptr [ebp - 0x10]
  __asm mov byte ptr [ebp - 4], 9
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov eax, ebx
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
}




// Reference entry 1061cd50; body size 76 bytes.
#line 1 "ENTRY_1061cd50"

__declspec(naked) void FUN_1061cd50(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_115be0c0
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov edx, dword ptr [ecx + 4]
  __asm test edx, edx
  __asm _emit 0x74 __asm _emit 0x14 __asm _emit 0xc7 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, edx
  __asm mov eax, dword ptr [edx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
}




// Reference entry 1061cdc0; body size 273 bytes.
#line 1 "ENTRY_1061cdc0"

__declspec(naked) void FUN_1061cdc0(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_115be0f0
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm push esi
  __asm push edi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov edi, ecx
  __asm mov dword ptr [edi], LAB_118be678
  __asm mov dword ptr [edi + 8], LAB_118be6a0
  __asm mov ecx, dword ptr [edi + 0x30]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x2c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x30 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [edi + 0x28]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x0c __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x28 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [edi + 0x24]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x02 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [edi + 0x20]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x03 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x1c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x20 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [edi + 0x18]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov dword ptr [edi + 8], LAB_1189cc70
  __asm mov ecx, dword ptr [edi + 0x10]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x05 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov dword ptr [edi], LAB_118abe0c
  __asm dec dword ptr [LAB_121a0e68]
  __asm mov dword ptr [edi], LAB_1186d2f4
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
}




// Reference entry 1061cf50; body size 294 bytes.
#line 1 "ENTRY_1061cf50"

__declspec(naked) void FUN_1061cf50(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_115be120
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm push esi
  __asm push edi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov edi, ecx
  __asm mov dword ptr [edi], LAB_118be678
  __asm mov dword ptr [edi + 8], LAB_118be6a0
  __asm mov ecx, dword ptr [edi + 0x30]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x2c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x30 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [edi + 0x28]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x0c __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x28 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [edi + 0x24]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x02 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [edi + 0x20]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x03 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x1c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x20 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [edi + 0x18]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov dword ptr [edi + 8], LAB_1189cc70
  __asm mov ecx, dword ptr [edi + 0x10]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x05 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov dword ptr [edi], LAB_118abe0c
  __asm dec dword ptr [LAB_121a0e68]
  __asm test byte ptr [ebp + 8], 1
  __asm mov dword ptr [edi], LAB_1186d2f4
  __asm _emit 0x74 __asm _emit 0x0b
  __asm push 0x34
  __asm push edi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm mov eax, edi
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret 4
}




// Reference entry 1061d120; body size 295 bytes.
#line 1 "ENTRY_1061d120"

__declspec(naked) void FUN_1061d120(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_115be40d
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 0xc
  __asm push ebx
  __asm push esi
  __asm push edi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov esi, ecx
  __asm lea eax, [ebp - 0x18]
  __asm push eax
  __asm call LAB_1009058e
  __asm add esp, 4
  __asm mov ecx, dword ptr [eax]
  __asm lea edx, [ebp - 0x14]
  __asm push edx
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x3c]
  __asm mov edi, dword ptr [eax]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [esi + 0x30]
  __asm mov byte ptr [ebp - 4], 1
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x2c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x30 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov dword ptr [esi + 0x2c], edi
  __asm test edi, edi
  __asm _emit 0x74 __asm _emit 0x09
  __asm mov eax, dword ptr [edi]
  __asm mov ecx, edi
  __asm call dword ptr [eax + 0xc]
  __asm _emit 0xeb __asm _emit 0x02
  __asm xor eax, eax
  __asm mov dword ptr [esi + 0x30], eax
  __asm mov ecx, dword ptr [ebp - 0x14]
  __asm mov byte ptr [ebp - 4], 2
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0x18]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x03 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esi + 0x2c]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x61
  __asm mov eax, dword ptr [ecx]
  __asm lea edx, [ebp - 0x10]
  __asm push 0
  __asm push 0
  __asm push edx
  __asm call dword ptr [eax + 0x84]
  __asm mov ebx, eax
  __asm lea edi, [esi + 0x24]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm cmp ebx, edi
  __asm _emit 0x74 __asm _emit 0x12
  __asm mov ecx, edi
  __asm call LAB_1005c315
  __asm mov eax, dword ptr [ebx]
  __asm mov ecx, edi
  __asm mov dword ptr [edi], eax
  __asm call LAB_1002a973
  __asm lea ecx, [ebp - 0x10]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x05 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm mov eax, dword ptr [edi]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xf0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x0c
  __asm cmp byte ptr [eax], 0
  __asm _emit 0x74 __asm _emit 0x07
  __asm mov ecx, esi
  __asm call LAB_10058544
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
}




// Reference entry 1061d290; body size 938 bytes.
#line 1 "ENTRY_1061d290"

__declspec(naked) void FUN_1061d290(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_115be4ab
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 0x18
  __asm push ebx
  __asm push esi
  __asm push edi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov edi, ecx
  __asm call LAB_1001c9c2
  __asm mov eax, dword ptr [eax + 0x4c]
  __asm mov ecx, dword ptr [eax + 0xe8]
  __asm test ecx, ecx
  __asm _emit 0x75 __asm _emit 0x26
  __asm push offset LAB_118be7a0
  __asm push 2
  __asm push offset LAB_118be714
  __asm call LAB_100238df
  __asm add esp, 0xc
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
  __asm mov eax, dword ptr [ecx]
  __asm lea edx, [ebp - 0x1c]
  __asm push 0x10
  __asm push edx
  __asm call dword ptr [eax + 4]
  __asm mov ebx, dword ptr [eax]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ebp - 0x24], ebx
  __asm test ebx, ebx
  __asm _emit 0x74 __asm _emit 0x0b
  __asm mov eax, dword ptr [ebx]
  __asm mov ecx, ebx
  __asm call dword ptr [eax + 0xc]
  __asm mov esi, eax
  __asm _emit 0xeb __asm _emit 0x02
  __asm xor esi, esi
  __asm mov dword ptr [ebp - 0x20], esi
  __asm mov byte ptr [ebp - 4], 1
  __asm test ebx, ebx
  __asm _emit 0x74 __asm _emit 0x5f
  __asm push offset LAB_1186f6c0
  __asm lea ecx, [ebp - 0x14]
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [ebx]
  __asm lea ecx, [ebp - 0x14]
  __asm push ecx
  __asm lea ecx, [ebp - 0x18]
  __asm mov byte ptr [ebp - 4], 2
  __asm push ecx
  __asm mov ecx, ebx
  __asm call dword ptr [eax]
  __asm mov ebx, dword ptr [eax]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [edi + 0x28]
  __asm mov byte ptr [ebp - 4], 3
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x0c __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x28 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov dword ptr [edi + 0x28], ebx
  __asm mov ecx, dword ptr [ebp - 0x18]
  __asm mov byte ptr [ebp - 4], 4
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp - 0x14]
  __asm mov byte ptr [ebp - 4], 5
  __asm call LAB_1005c315
  __asm _emit 0xeb __asm _emit 0x1a
  __asm mov ecx, dword ptr [edi + 0x28]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x0c __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x28 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x28 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov byte ptr [ebp - 4], 6
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x07
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0x1c]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x07 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm cmp dword ptr [edi + 0x28], 0
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0x75 __asm _emit 0x26
  __asm push offset LAB_118be7dc
  __asm push 2
  __asm push offset LAB_118be714
  __asm call LAB_100238df
  __asm add esp, 0xc
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
  __asm push 0x50
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [ebp - 0x1c], eax
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x0b
  __asm mov ecx, eax
  __asm call LAB_100686e2
  __asm mov ebx, eax
  __asm _emit 0xeb __asm _emit 0x02
  __asm xor ebx, ebx
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
  __asm mov dword ptr [ebp - 0x24], ebx
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xe0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ebx, ebx
  __asm _emit 0x74 __asm _emit 0x11
  __asm mov eax, dword ptr [ebx]
  __asm mov ecx, ebx
  __asm call dword ptr [eax + 0xc]
  __asm mov ecx, eax
  __asm mov dword ptr [ebp - 0x20], eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x09 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xf0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [edi + 0x14]
  __asm lea edx, [ebp - 0x18]
  __asm push edx
  __asm mov byte ptr [ebp - 4], 0xa
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x14]
  __asm mov dword ptr [ebp - 0x1c], eax
  __asm mov byte ptr [ebp - 4], 0xb
  __asm call LAB_1004ec47
  __asm mov esi, dword ptr [eax + 0xfc]
  __asm mov dword ptr [ebp - 0x14], esi
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x15
  __asm cmp dword ptr [esi - 0x10], 0xffff
  __asm lea eax, [esi - 0x10]
  __asm _emit 0x7d __asm _emit 0x09
  __asm push eax
  __asm call LAB_10066e8c
  __asm add esp, 4
  __asm mov eax, dword ptr [ebp - 0x1c]
  __asm mov edx, offset LAB_1186d2ee
  __asm mov ecx, edx
  __asm mov byte ptr [ebp - 4], 0xc
  __asm mov eax, dword ptr [eax]
  __asm test eax, eax
  __asm cmovne ecx, eax
  __asm test esi, esi
  __asm push ecx
  __asm cmovne edx, esi
  __asm lea eax, [ebp - 0x10]
  __asm push edx
  __asm push offset LAB_118be6b0
  __asm push eax
  __asm call LAB_1003a1de
  __asm add esp, 0x10
  __asm mov byte ptr [ebp - 4], 0xd
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x33
  __asm add esi, -0x10
  __asm cmp dword ptr [esi], 0xffff
  __asm _emit 0x7d __asm _emit 0x28
  __asm push esi
  __asm call LAB_1001718e
  __asm add esp, 4
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x1b
  __asm push dword ptr [esi + 0xc]
  __asm mov dword ptr [esi + 8], eax
  __asm mov dword ptr [esi + 4], eax
  __asm lea eax, [esi + 0x10]
  __asm push eax
  __asm call LAB_10087529
  __asm push esi
  __asm call LAB_1005e133
  __asm add esp, 0xc
  __asm lea ecx, [ebp - 0x18]
  __asm mov byte ptr [ebp - 4], 0xe
  __asm call LAB_1005c315
  __asm push 4
  __asm lea eax, [ebp - 0x10]
  __asm mov byte ptr [ebp - 4], 0xa
  __asm push eax
  __asm mov ecx, ebx
  __asm call LAB_10089f2c
  __asm lea eax, [edi + 0x24]
  __asm mov ecx, ebx
  __asm push eax
  __asm call LAB_1005c06d
  __asm mov eax, dword ptr [ebx]
  __asm mov ecx, ebx
  __asm push 0x2710
  __asm call dword ptr [eax + 0x3c]
  __asm push 0x34
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [ebp - 0x1c], eax
  __asm mov byte ptr [ebp - 4], 0xf
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x55
  __asm sub esp, 8
  __asm mov ecx, edi
  __asm mov esi, esp
  __asm mov dword ptr [ebp - 0x18], esp
  __asm mov dword ptr [esi], edi
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [edi]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm sub esp, 8
  __asm mov byte ptr [ebp - 4], 0x10
  __asm mov esi, esp
  __asm mov ecx, ebx
  __asm mov dword ptr [esi], ebx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ebx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov ecx, dword ptr [ebp - 0x1c]
  __asm mov byte ptr [ebp - 4], 0xf
  __asm call LAB_10050d6c
  __asm mov esi, eax
  __asm _emit 0xeb __asm _emit 0x02
  __asm xor esi, esi
  __asm mov edx, dword ptr [edi + 0x1c]
  __asm mov byte ptr [ebp - 4], 0xa
  __asm cmp esi, edx
  __asm _emit 0x74 __asm _emit 0x35
  __asm mov ecx, dword ptr [edi + 0x20]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x1c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x20 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov dword ptr [edi + 0x1c], esi
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x23
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [edi + 0x20], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov edx, dword ptr [edi + 0x1c]
  __asm test edx, edx
  __asm _emit 0x74 __asm _emit 0x12
  __asm mov ecx, dword ptr [edi + 0x28]
  __asm push edx
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x14]
  __asm _emit 0xeb __asm _emit 0x1b __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x20 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push offset LAB_118be81c
  __asm push 2
  __asm push offset LAB_118be714
  __asm call LAB_100238df
  __asm add esp, 0xc
  __asm lea ecx, [ebp - 0x10]
  __asm mov byte ptr [ebp - 4], 0x11
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xf0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ebp - 0x20]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x12 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
}




// Reference entry 1061d730; body size 1153 bytes.
#line 1 "ENTRY_1061d730"

__declspec(naked) void FUN_1061d730(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_115be5dd
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 0x2c
  __asm push ebx
  __asm push esi
  __asm push edi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov esi, ecx
  __asm mov dword ptr [ebp - 0x24], esi
  __asm xor ebx, ebx
  __asm mov dword ptr [ebp - 0x30], ebx
  __asm mov dword ptr [ebp - 0x10], ebx
  __asm lea eax, [ebp - 0x28]
  __asm mov dword ptr [ebp - 4], ebx
  __asm push eax
  __asm cmp byte ptr [esi + 0x2c], bl
  __asm _emit 0x74 __asm _emit 0x55
  __asm call LAB_10088190
  __asm add esp, 4
  __asm lea ecx, [ebp - 0x20]
  __asm mov byte ptr [ebp - 4], 1
  __asm push ecx
  __asm lea ecx, [ebp - 0x14]
  __asm push ecx
  __asm mov ecx, dword ptr [eax]
  __asm call LAB_1004980a
  __asm mov edi, eax
  __asm lea eax, [ebp - 0x10]
  __asm mov byte ptr [ebp - 4], 2
  __asm cmp edi, eax
  __asm _emit 0x74 __asm _emit 0x14
  __asm mov ecx, eax
  __asm call LAB_1005c315
  __asm mov eax, dword ptr [edi]
  __asm lea ecx, [ebp - 0x10]
  __asm mov dword ptr [ebp - 0x10], eax
  __asm call LAB_1002a973
  __asm lea ecx, [ebp - 0x14]
  __asm mov byte ptr [ebp - 4], 3
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xec __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov byte ptr [ebp - 4], 4
  __asm _emit 0xeb __asm _emit 0x53
  __asm call LAB_10088190
  __asm add esp, 4
  __asm lea ecx, [ebp - 0x20]
  __asm mov byte ptr [ebp - 4], 5
  __asm push ecx
  __asm lea ecx, [ebp - 0x14]
  __asm push ecx
  __asm mov ecx, dword ptr [eax]
  __asm call LAB_10042208
  __asm mov edi, eax
  __asm lea eax, [ebp - 0x10]
  __asm mov byte ptr [ebp - 4], 6
  __asm cmp edi, eax
  __asm _emit 0x74 __asm _emit 0x14
  __asm mov ecx, eax
  __asm call LAB_1005c315
  __asm mov eax, dword ptr [edi]
  __asm lea ecx, [ebp - 0x10]
  __asm mov dword ptr [ebp - 0x10], eax
  __asm call LAB_1002a973
  __asm lea ecx, [ebp - 0x14]
  __asm mov byte ptr [ebp - 4], 7
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xec __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov byte ptr [ebp - 4], 8
  __asm mov ecx, dword ptr [ebp - 0x28]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov eax, dword ptr [ebp - 0x10]
  __asm mov byte ptr [ebp - 4], 0
  __asm test eax, eax
  __asm je LAB_1061db78
  __asm cmp byte ptr [eax], 0
  __asm je LAB_1061db78
  __asm cmp byte ptr [esi + 0x2d], 0
  __asm je LAB_1061d97b
  __asm push 0x10
  __asm call LAB_10024f14
  __asm mov esi, eax
  __asm add esp, 4
  __asm mov dword ptr [ebp - 0x28], esi
  __asm mov byte ptr [ebp - 4], 0xa
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x53
  __asm push offset LAB_1186d2ee
  __asm lea ecx, [ebp - 0x14]
  __asm call LAB_1005273e
  __asm mov ebx, 1
  __asm mov dword ptr [esi], LAB_11883dcc
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ebp - 0x30], ebx
  __asm lea eax, [ebp - 0x14]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm lea ecx, [esi + 8]
  __asm mov dword ptr [esi], LAB_11888200
  __asm call LAB_10036c23
  __asm lea eax, [ebp - 0x10]
  __asm mov byte ptr [ebp - 4], 0xd
  __asm push eax
  __asm lea ecx, [esi + 0xc]
  __asm call LAB_10036c23
  __asm _emit 0xeb __asm _emit 0x02
  __asm xor esi, esi
  __asm xor edi, edi
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x0e __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ebp - 0x2c], esi
  __asm mov dword ptr [ebp - 0x28], edi
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x20
  __asm mov eax, dword ptr [esi]
  __asm mov eax, dword ptr [eax + 0xc]
  __asm cmp eax, offset LAB_1004dc43
  __asm _emit 0x75 __asm _emit 0x04
  __asm mov edi, esi
  __asm _emit 0xeb __asm _emit 0x06
  __asm mov ecx, esi
  __asm call eax
  __asm mov edi, eax
  __asm mov edx, dword ptr [edi]
  __asm mov ecx, edi
  __asm mov dword ptr [ebp - 0x28], edi
  __asm call dword ptr [edx + 4]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test bl, 1
  __asm _emit 0x74 __asm _emit 0x17
  __asm lea ecx, [ebp - 0x14]
  __asm mov byte ptr [ebp - 4], 0x11
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xec __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov byte ptr [ebp - 4], 0x10
  __asm mov eax, dword ptr [esi]
  __asm lea ecx, [ebp - 0x30]
  __asm push ecx
  __asm mov ecx, esi
  __asm call dword ptr [eax + 0x34]
  __asm push eax
  __asm lea ecx, [ebp - 0x18]
  __asm mov byte ptr [ebp - 4], 0x12
  __asm call LAB_10097217
  __asm mov ecx, dword ptr [ebp - 0x30]
  __asm mov byte ptr [ebp - 4], 0x15
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov eax, dword ptr [ebp - 0x24]
  __asm mov esi, dword ptr [ebp - 0x18]
  __asm mov byte ptr [ebp - 4], 0x14
  __asm mov ecx, dword ptr [eax + 0x30]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x08
  __asm mov eax, dword ptr [esi]
  __asm push ecx
  __asm mov ecx, esi
  __asm call dword ptr [eax + 0x1c]
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax + 0x14]
  __asm mov esi, eax
  __asm mov ecx, dword ptr [ebp - 0x14]
  __asm mov byte ptr [ebp - 4], 0x16
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov byte ptr [ebp - 4], 0x17
  __asm test edi, edi
  __asm je LAB_1061db8e
  __asm mov eax, dword ptr [edi]
  __asm mov ecx, edi
  __asm call dword ptr [eax + 8]
  __asm jmp LAB_1061db8e
  __asm lea eax, [ebp - 0x30]
  __asm push eax
  __asm call LAB_1008339d
  __asm add esp, 4
  __asm push eax
  __asm lea ecx, [ebp - 0x38]
  __asm mov byte ptr [ebp - 4], 0x19
  __asm call LAB_10062b93
  __asm mov ecx, dword ptr [ebp - 0x30]
  __asm mov byte ptr [ebp - 4], 0x1c
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm push offset LAB_11878294
  __asm lea ecx, [ebp - 0x14]
  __asm mov byte ptr [ebp - 4], 0x1b
  __asm call LAB_1005273e
  __asm mov ebx, dword ptr [ebp - 0x38]
  __asm lea ecx, [ebp - 0x10]
  __asm push ecx
  __asm lea ecx, [ebp - 0x14]
  __asm mov byte ptr [ebp - 4], 0x1d
  __asm push ecx
  __asm mov eax, dword ptr [ebx]
  __asm mov ecx, ebx
  __asm call dword ptr [eax + 0x1c]
  __asm lea ecx, [ebp - 0x14]
  __asm mov byte ptr [ebp - 4], 0x1e
  __asm call LAB_1005c315
  __asm push offset LAB_118782a4
  __asm lea ecx, [ebp - 0x14]
  __asm mov byte ptr [ebp - 4], 0x1b
  __asm call LAB_1005273e
  __asm push dword ptr [ebp - 0x20]
  __asm mov eax, dword ptr [ebx]
  __asm lea ecx, [ebp - 0x14]
  __asm push ecx
  __asm mov ecx, ebx
  __asm mov byte ptr [ebp - 4], 0x1f
  __asm call dword ptr [eax + 0x40]
  __asm lea ecx, [ebp - 0x14]
  __asm mov byte ptr [ebp - 4], 0x20
  __asm call LAB_1005c315
  __asm push 0x18
  __asm mov byte ptr [ebp - 4], 0x1b
  __asm call LAB_10024f14
  __asm mov esi, eax
  __asm add esp, 4
  __asm mov dword ptr [ebp - 0x28], esi
  __asm test esi, esi
  __asm je LAB_1061dac7
  __asm mov dword ptr [esi], LAB_11883dcc
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esi], LAB_118871d4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x17 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46
  __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea edi, [esi + 0x14]
  __asm _emit 0xc7 __asm _emit 0x07 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov byte ptr [ebp - 4], 0x24
  __asm test ebx, ebx
  __asm _emit 0x74 __asm _emit 0x2e
  __asm mov ecx, dword ptr [esi + 0x10]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov dword ptr [esi + 0xc], ebx
  __asm mov ecx, ebx
  __asm mov eax, dword ptr [ebx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 0x10], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm push offset LAB_1186d2ee
  __asm lea ecx, [ebp - 0x1c]
  __asm call LAB_1005273e
  __asm lea eax, [ebp - 0x1c]
  __asm mov byte ptr [ebp - 4], 0x25
  __asm cmp eax, edi
  __asm _emit 0x74 __asm _emit 0x13
  __asm mov ecx, edi
  __asm call LAB_1005c315
  __asm mov eax, dword ptr [ebp - 0x1c]
  __asm mov ecx, edi
  __asm mov dword ptr [edi], eax
  __asm call LAB_1002a973
  __asm lea ecx, [ebp - 0x1c]
  __asm mov byte ptr [ebp - 4], 0x26
  __asm call LAB_1005c315
  __asm _emit 0xeb __asm _emit 0x02
  __asm xor esi, esi
  __asm xor edi, edi
  __asm mov byte ptr [ebp - 4], 0x1b
  __asm mov dword ptr [ebp - 0x2c], esi
  __asm mov dword ptr [ebp - 0x28], edi
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x20
  __asm mov eax, dword ptr [esi]
  __asm mov eax, dword ptr [eax + 0xc]
  __asm cmp eax, offset LAB_1004dc43
  __asm _emit 0x75 __asm _emit 0x04
  __asm mov edi, esi
  __asm _emit 0xeb __asm _emit 0x06
  __asm mov ecx, esi
  __asm call eax
  __asm mov edi, eax
  __asm mov edx, dword ptr [edi]
  __asm mov ecx, edi
  __asm mov dword ptr [ebp - 0x28], edi
  __asm call dword ptr [edx + 4]
  __asm mov eax, dword ptr [esi]
  __asm lea ecx, [ebp - 0x30]
  __asm push ecx
  __asm mov ecx, esi
  __asm mov byte ptr [ebp - 4], 0x27
  __asm call dword ptr [eax + 0x34]
  __asm push eax
  __asm lea ecx, [ebp - 0x18]
  __asm mov byte ptr [ebp - 4], 0x28
  __asm call LAB_10097217
  __asm mov ecx, dword ptr [ebp - 0x30]
  __asm mov byte ptr [ebp - 4], 0x2b
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov eax, dword ptr [ebp - 0x24]
  __asm mov esi, dword ptr [ebp - 0x18]
  __asm mov byte ptr [ebp - 4], 0x2a
  __asm mov ecx, dword ptr [eax + 0x30]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x08
  __asm mov eax, dword ptr [esi]
  __asm push ecx
  __asm mov ecx, esi
  __asm call dword ptr [eax + 0x1c]
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax + 0x14]
  __asm mov esi, eax
  __asm mov ecx, dword ptr [ebp - 0x14]
  __asm mov byte ptr [ebp - 4], 0x2c
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 8]
  __asm mov byte ptr [ebp - 4], 0x2d
  __asm test edi, edi
  __asm _emit 0x74 __asm _emit 0x07
  __asm mov eax, dword ptr [edi]
  __asm mov ecx, edi
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0x34]
  __asm mov byte ptr [ebp - 4], 0x2e
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x1d
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm _emit 0xeb __asm _emit 0x16
  __asm push offset LAB_118be860
  __asm push 1
  __asm push offset LAB_118be89c
  __asm call LAB_100238df
  __asm add esp, 0xc
  __asm xor esi, esi
  __asm lea ecx, [ebp - 0x10]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x2f __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm mov eax, esi
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
}




// Reference entry 1061dcf0; body size 103 bytes.
#line 1 "ENTRY_1061dcf0"

__declspec(naked) void FUN_1061dcf0(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x10]
  __asm mov esi, ecx
  __asm push offset LAB_1186f62c
  __asm mov ecx, edi
  __asm call LAB_1008ca83
  __asm test al, al
  __asm _emit 0x74 __asm _emit 0x18
  __asm mov edi, dword ptr [esp + 0xc]
  __asm mov dword ptr [edi], esi
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x2f
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax + 4]
  __asm mov eax, edi
  __asm pop edi
  __asm pop esi
  __asm ret 8
  __asm push offset LAB_1186d30c
  __asm mov ecx, edi
  __asm call LAB_1008ca83
  __asm test al, al
  __asm _emit 0x74 __asm _emit 0x18
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
  __asm mov eax, dword ptr [esp + 0xc]
  __asm pop edi
  __asm pop esi
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm ret 8
}




// Reference entry 1061dda0; body size 697 bytes.
#line 1 "ENTRY_1061dda0"

__declspec(naked) void FUN_1061dda0(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_115be67d
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 0x24
  __asm push ebx
  __asm push esi
  __asm push edi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm mov dword ptr [ebp - 0x10], eax
  __asm mov ecx, dword ptr [eax + 0x14]
  __asm lea edx, [ebp - 0x18]
  __asm push edx
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x14]
  __asm mov edi, eax
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1004ec47
  __asm mov esi, dword ptr [eax + 0xfc]
  __asm mov dword ptr [ebp - 0x20], esi
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x15
  __asm cmp dword ptr [esi - 0x10], 0xffff
  __asm lea eax, [esi - 0x10]
  __asm _emit 0x7d __asm _emit 0x09
  __asm push eax
  __asm call LAB_10066e8c
  __asm add esp, 4
  __asm mov eax, dword ptr [edi]
  __asm mov edi, offset LAB_1186d2ee
  __asm test eax, eax
  __asm mov byte ptr [ebp - 4], 1
  __asm mov ecx, edi
  __asm cmovne ecx, eax
  __asm test esi, esi
  __asm push ecx
  __asm mov eax, edi
  __asm cmovne eax, esi
  __asm push eax
  __asm lea eax, [ebp - 0x14]
  __asm push offset LAB_118be6b0
  __asm push eax
  __asm call LAB_1006a316
  __asm add esp, 0x10
  __asm mov byte ptr [ebp - 4], 4
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x33
  __asm add esi, -0x10
  __asm cmp dword ptr [esi], 0xffff
  __asm _emit 0x7d __asm _emit 0x28
  __asm push esi
  __asm call LAB_1001718e
  __asm add esp, 4
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x1b
  __asm push dword ptr [esi + 0xc]
  __asm mov dword ptr [esi + 8], eax
  __asm mov dword ptr [esi + 4], eax
  __asm lea eax, [esi + 0x10]
  __asm push eax
  __asm call LAB_10087529
  __asm push esi
  __asm call LAB_1005e133
  __asm add esp, 0xc
  __asm lea ecx, [ebp - 0x18]
  __asm mov byte ptr [ebp - 4], 6
  __asm call LAB_1005c315
  __asm xor eax, eax
  __asm xor ebx, ebx
  __asm mov dword ptr [ebp - 0x18], eax
  __asm mov dword ptr [ebp - 0x28], eax
  __asm mov dword ptr [ebp - 0x24], ebx
  __asm mov ecx, dword ptr [ebp + 8]
  __asm mov byte ptr [ebp - 4], 7
  __asm test ecx, ecx
  __asm je LAB_1061dff8
  __asm mov eax, dword ptr [ebp - 0x10]
  __asm mov eax, dword ptr [eax + 0x1c]
  __asm cmp ecx, eax
  __asm jne LAB_1061dff8
  __asm lea ecx, [ebp - 0x1c]
  __asm push ecx
  __asm mov ecx, eax
  __asm call LAB_100217ec
  __asm mov esi, dword ptr [eax]
  __asm mov byte ptr [ebp - 4], 0xa
  __asm mov dword ptr [ebp - 0x20], esi
  __asm mov dword ptr [eax], ebx
  __asm mov dword ptr [ebp - 0x30], esi
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x0c
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [ebp - 0x2c], eax
  __asm _emit 0xeb __asm _emit 0x07 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xd4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ebp - 0x1c]
  __asm mov byte ptr [ebp - 4], 0xd
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov byte ptr [ebp - 4], 0xc
  __asm test esi, esi
  __asm _emit 0x75 __asm _emit 0x2e
  __asm mov eax, dword ptr [ebp - 0x14]
  __asm test eax, eax
  __asm cmovne edi, eax
  __asm push edi
  __asm push offset LAB_118be724
  __asm push 1
  __asm push offset LAB_118be714
  __asm call LAB_100238df
  __asm mov eax, dword ptr [ebp - 0x10]
  __asm add esp, 0x10
  __asm mov ecx, dword ptr [eax + 0x14]
  __asm push esi
  __asm push 0x194
  __asm jmp LAB_1061dfe1
  __asm mov eax, dword ptr [ebp - 0x10]
  __asm mov ecx, dword ptr [ebp + 8]
  __asm mov edi, dword ptr [eax + 0x1c]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x1c]
  __asm mov edx, dword ptr [edi]
  __asm mov ecx, edi
  __asm mov esi, eax
  __asm call dword ptr [edx + 0x1c]
  __asm cmp esi, eax
  __asm jne LAB_1061dfe6
  __asm mov esi, dword ptr [ebp - 0x20]
  __asm mov ecx, esi
  __asm mov eax, dword ptr [esi]
  __asm call dword ptr [eax + 0x14]
  __asm mov edi, dword ptr [ebp - 0x10]
  __asm mov dword ptr [ebp + 8], eax
  __asm mov ecx, dword ptr [edi + 0x1c]
  __asm call LAB_10076445
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x6d
  __asm mov eax, dword ptr [ebp + 8]
  __asm cmp eax, 0xc8
  __asm _emit 0x75 __asm _emit 0x4c
  __asm mov edx, dword ptr [esi]
  __asm lea eax, [ebp - 0x20]
  __asm push eax
  __asm mov ecx, esi
  __asm call dword ptr [edx + 0x2c]
  __asm mov ecx, dword ptr [eax]
  __asm mov byte ptr [ebp - 4], 0x11
  __asm mov dword ptr [ebp - 0x18], ecx
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ebp - 0x28], ecx
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x09
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov ebx, eax
  __asm _emit 0xeb __asm _emit 0x02
  __asm xor ebx, ebx
  __asm mov dword ptr [ebp - 0x24], ebx
  __asm mov ecx, dword ptr [ebp - 0x20]
  __asm mov byte ptr [ebp - 4], 0x12
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm push offset LAB_118be748
  __asm mov byte ptr [ebp - 4], 0xc
  __asm push 2
  __asm _emit 0xeb __asm _emit 0x1e
  __asm push eax
  __asm push offset LAB_118be770
  __asm push 1
  __asm push offset LAB_118be714
  __asm call LAB_100238df
  __asm add esp, 0x10
  __asm _emit 0xeb __asm _emit 0x14
  __asm push offset LAB_118be780
  __asm push 1
  __asm push offset LAB_118be714
  __asm call LAB_100238df
  __asm add esp, 0xc
  __asm push dword ptr [ebp - 0x18]
  __asm mov ecx, dword ptr [edi + 0x14]
  __asm push dword ptr [ebp + 8]
  __asm call LAB_100584db
  __asm mov ecx, dword ptr [ebp - 0x2c]
  __asm mov byte ptr [ebp - 4], 0x13
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x36
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm _emit 0xeb __asm _emit 0x2f
  __asm mov eax, dword ptr [ebp - 0x14]
  __asm test eax, eax
  __asm cmovne edi, eax
  __asm push edi
  __asm push offset LAB_118be6f0
  __asm push 1
  __asm push offset LAB_118be714
  __asm call LAB_100238df
  __asm mov eax, dword ptr [ebp - 0x10]
  __asm add esp, 0x10
  __asm mov ecx, dword ptr [eax + 0x14]
  __asm push 0
  __asm push 0x194
  __asm call LAB_100584db
  __asm mov byte ptr [ebp - 4], 0x14
  __asm test ebx, ebx
  __asm _emit 0x74 __asm _emit 0x07
  __asm mov eax, dword ptr [ebx]
  __asm mov ecx, ebx
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp - 0x14]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x15 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret 4
}




// Reference entry 1061e120; body size 242 bytes.
#line 1 "ENTRY_1061e120"

__declspec(naked) void FUN_1061e120(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_115be6cd
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 0xc
  __asm push ebx
  __asm push esi
  __asm push edi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov esi, ecx
  __asm mov eax, dword ptr [ebp + 8]
  __asm mov edi, dword ptr [eax]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ebp - 0x18], edi
  __asm test edi, edi
  __asm _emit 0x74 __asm _emit 0x0b
  __asm mov eax, dword ptr [edi]
  __asm mov ecx, edi
  __asm call dword ptr [eax + 0xc]
  __asm mov ebx, eax
  __asm _emit 0xeb __asm _emit 0x02
  __asm xor ebx, ebx
  __asm mov dword ptr [ebp - 0x14], ebx
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test edi, edi
  __asm _emit 0x74 __asm _emit 0x5c
  __asm push offset LAB_1186de50
  __asm lea ecx, [ebp + 8]
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [edi]
  __asm lea ecx, [ebp + 8]
  __asm push ecx
  __asm lea ecx, [ebp - 0x10]
  __asm mov byte ptr [ebp - 4], 1
  __asm push ecx
  __asm mov ecx, edi
  __asm call dword ptr [eax]
  __asm mov edi, dword ptr [eax]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [esi]
  __asm mov byte ptr [ebp - 4], 2
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x0b __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov dword ptr [esi], edi
  __asm mov ecx, dword ptr [ebp - 0x10]
  __asm mov byte ptr [ebp - 4], 3
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp + 8]
  __asm mov byte ptr [ebp - 4], 4
  __asm call LAB_1005c315
  __asm _emit 0xeb __asm _emit 0x17
  __asm mov ecx, dword ptr [esi]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x0b __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x05 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ebx, ebx
  __asm _emit 0x74 __asm _emit 0x07
  __asm mov eax, dword ptr [ebx]
  __asm mov ecx, ebx
  __asm call dword ptr [eax + 8]
  __asm mov eax, esi
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret 4
}




// Reference entry 1061e250; body size 188 bytes.
#line 1 "ENTRY_1061e250"

__declspec(naked) void FUN_1061e250(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_115be715
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm push ecx
  __asm push esi
  __asm push edi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov esi, ecx
  __asm mov edi, dword ptr [ebp + 8]
  __asm test edi, edi
  __asm _emit 0x74 __asm _emit 0x62
  __asm push offset LAB_1186de50
  __asm lea ecx, [ebp + 8]
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [edi]
  __asm lea ecx, [ebp + 8]
  __asm push ecx
  __asm lea ecx, [ebp - 0x10]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push ecx
  __asm mov ecx, edi
  __asm call dword ptr [eax]
  __asm mov edi, dword ptr [eax]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [esi]
  __asm mov byte ptr [ebp - 4], 1
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x0b __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov dword ptr [esi], edi
  __asm mov ecx, dword ptr [ebp - 0x10]
  __asm mov byte ptr [ebp - 4], 2
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm lea ecx, [ebp + 8]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x03 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm _emit 0xeb __asm _emit 0x17
  __asm mov ecx, dword ptr [esi]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x0b __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, esi
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret 4
}




// Reference entry 1061e420; body size 180 bytes.
#line 1 "ENTRY_1061e420"

__declspec(naked) void FUN_1061e420(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_115be76e
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 8
  __asm push esi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov esi, ecx
  __asm mov dword ptr [ebp - 0x14], esi
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xf0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea ecx, [ebp + 8]
  __asm push dword ptr [ebp + 8]
  __asm call LAB_1005273e
  __asm push dword ptr [ebp + 0xc]
  __asm lea eax, [ebp + 8]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov ecx, esi
  __asm call LAB_10050d58
  __asm lea ecx, [ebp + 8]
  __asm mov byte ptr [ebp - 4], 3
  __asm call LAB_1005c315
  __asm lea eax, [ebp + 0xc]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov ecx, esi
  __asm mov byte ptr [ebp - 4], 2
  __asm mov dword ptr [esi], LAB_118bea44
  __asm call LAB_1004216d
  __asm push offset LAB_118be644
  __asm mov ecx, eax
  __asm mov byte ptr [ebp - 4], 4
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xf0 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_100021ee
  __asm lea ecx, [ebp + 0xc]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x05 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm mov eax, esi
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop esi
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret 8
}




// Reference entry 1061e510; body size 180 bytes.
#line 1 "ENTRY_1061e510"

__declspec(naked) void FUN_1061e510(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_115be7ce
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 8
  __asm push esi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov esi, ecx
  __asm mov dword ptr [ebp - 0x14], esi
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xf0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea ecx, [ebp + 8]
  __asm push dword ptr [ebp + 8]
  __asm call LAB_1005273e
  __asm push dword ptr [ebp + 0xc]
  __asm lea eax, [ebp + 8]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov ecx, esi
  __asm call LAB_10050d58
  __asm lea ecx, [ebp + 8]
  __asm mov byte ptr [ebp - 4], 3
  __asm call LAB_1005c315
  __asm lea eax, [ebp + 0xc]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov ecx, esi
  __asm mov byte ptr [ebp - 4], 2
  __asm mov dword ptr [esi], LAB_118be9f8
  __asm call LAB_1004216d
  __asm push offset LAB_118be644
  __asm mov ecx, eax
  __asm mov byte ptr [ebp - 4], 4
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xf0 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_100021ee
  __asm lea ecx, [ebp + 0xc]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x05 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm mov eax, esi
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop esi
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret 8
}




// Reference entry 1061e600; body size 180 bytes.
#line 1 "ENTRY_1061e600"

__declspec(naked) void FUN_1061e600(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_115be82e
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 8
  __asm push esi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov esi, ecx
  __asm mov dword ptr [ebp - 0x14], esi
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xf0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea ecx, [ebp + 8]
  __asm push dword ptr [ebp + 8]
  __asm call LAB_1005273e
  __asm push dword ptr [ebp + 0xc]
  __asm lea eax, [ebp + 8]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov ecx, esi
  __asm call LAB_10050d58
  __asm lea ecx, [ebp + 8]
  __asm mov byte ptr [ebp - 4], 3
  __asm call LAB_1005c315
  __asm lea eax, [ebp + 0xc]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov ecx, esi
  __asm mov byte ptr [ebp - 4], 2
  __asm mov dword ptr [esi], LAB_118be95c
  __asm call LAB_1004216d
  __asm push offset LAB_118be644
  __asm mov ecx, eax
  __asm mov byte ptr [ebp - 4], 4
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xf0 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_100021ee
  __asm lea ecx, [ebp + 0xc]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x05 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm mov eax, esi
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop esi
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret 8
}




// Reference entry 1061e6f0; body size 180 bytes.
#line 1 "ENTRY_1061e6f0"

__declspec(naked) void FUN_1061e6f0(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_115be88e
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 8
  __asm push esi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov esi, ecx
  __asm mov dword ptr [ebp - 0x14], esi
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xf0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea ecx, [ebp + 8]
  __asm push dword ptr [ebp + 8]
  __asm call LAB_1005273e
  __asm push dword ptr [ebp + 0xc]
  __asm lea eax, [ebp + 8]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov ecx, esi
  __asm call LAB_10050d58
  __asm lea ecx, [ebp + 8]
  __asm mov byte ptr [ebp - 4], 3
  __asm call LAB_1005c315
  __asm lea eax, [ebp + 0xc]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov ecx, esi
  __asm mov byte ptr [ebp - 4], 2
  __asm mov dword ptr [esi], LAB_118be9a8
  __asm call LAB_1004216d
  __asm push offset LAB_118be644
  __asm mov ecx, eax
  __asm mov byte ptr [ebp - 4], 4
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xf0 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_100021ee
  __asm lea ecx, [ebp + 0xc]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x05 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm mov eax, esi
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop esi
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret 8
}




// Reference entry 1061e8b0; body size 194 bytes.
#line 1 "ENTRY_1061e8b0"

__declspec(naked) void FUN_1061e8b0(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_115be8ee
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 0xc
  __asm push esi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov esi, ecx
  __asm mov dword ptr [ebp - 0x18], esi
  __asm push offset LAB_118bea68
  __asm lea ecx, [ebp - 0x10]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xec __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005273e
  __asm push dword ptr [ebp + 8]
  __asm lea eax, [ebp - 0x10]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov ecx, esi
  __asm call LAB_10050d58
  __asm lea ecx, [ebp - 0x10]
  __asm mov byte ptr [ebp - 4], 3
  __asm call LAB_1005c315
  __asm lea eax, [ebp + 8]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xf0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov ecx, esi
  __asm mov byte ptr [ebp - 4], 2
  __asm mov dword ptr [esi], LAB_118bea44
  __asm call LAB_1004216d
  __asm push offset LAB_118be644
  __asm mov ecx, eax
  __asm mov byte ptr [ebp - 4], 4
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xec __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_100021ee
  __asm lea ecx, [ebp + 8]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x05 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm mov dword ptr [esi], LAB_118bea58
  __asm mov eax, esi
  __asm mov dword ptr [LAB_121a2244], esi
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop esi
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret 4
}




// Reference entry 1061ea00; body size 194 bytes.
#line 1 "ENTRY_1061ea00"

__declspec(naked) void FUN_1061ea00(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_115be94e
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 0xc
  __asm push esi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov esi, ecx
  __asm mov dword ptr [ebp - 0x18], esi
  __asm push offset LAB_118bea1c
  __asm lea ecx, [ebp - 0x10]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xec __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005273e
  __asm push dword ptr [ebp + 8]
  __asm lea eax, [ebp - 0x10]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov ecx, esi
  __asm call LAB_10050d58
  __asm lea ecx, [ebp - 0x10]
  __asm mov byte ptr [ebp - 4], 3
  __asm call LAB_1005c315
  __asm lea eax, [ebp + 8]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xf0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov ecx, esi
  __asm mov byte ptr [ebp - 4], 2
  __asm mov dword ptr [esi], LAB_118be9f8
  __asm call LAB_1004216d
  __asm push offset LAB_118be644
  __asm mov ecx, eax
  __asm mov byte ptr [ebp - 4], 4
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xec __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_100021ee
  __asm lea ecx, [ebp + 8]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x05 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm mov dword ptr [esi], LAB_118bea0c
  __asm mov eax, esi
  __asm mov dword ptr [LAB_121a2240], esi
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop esi
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret 4
}




// Reference entry 1061eb50; body size 194 bytes.
#line 1 "ENTRY_1061eb50"

__declspec(naked) void FUN_1061eb50(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_115be9ae
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 0xc
  __asm push esi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov esi, ecx
  __asm mov dword ptr [ebp - 0x18], esi
  __asm push offset LAB_118be980
  __asm lea ecx, [ebp - 0x10]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xec __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005273e
  __asm push dword ptr [ebp + 8]
  __asm lea eax, [ebp - 0x10]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov ecx, esi
  __asm call LAB_10050d58
  __asm lea ecx, [ebp - 0x10]
  __asm mov byte ptr [ebp - 4], 3
  __asm call LAB_1005c315
  __asm lea eax, [ebp + 8]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xf0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov ecx, esi
  __asm mov byte ptr [ebp - 4], 2
  __asm mov dword ptr [esi], LAB_118be95c
  __asm call LAB_1004216d
  __asm push offset LAB_118be644
  __asm mov ecx, eax
  __asm mov byte ptr [ebp - 4], 4
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xec __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_100021ee
  __asm lea ecx, [ebp + 8]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x05 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm mov dword ptr [esi], LAB_118be970
  __asm mov eax, esi
  __asm mov dword ptr [LAB_121a2238], esi
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop esi
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret 4
}




// Reference entry 1061ecc0; body size 194 bytes.
#line 1 "ENTRY_1061ecc0"

__declspec(naked) void FUN_1061ecc0(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_115bea0e
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 0xc
  __asm push esi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov esi, ecx
  __asm mov dword ptr [ebp - 0x18], esi
  __asm push offset LAB_118be9cc
  __asm lea ecx, [ebp - 0x10]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xec __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005273e
  __asm push dword ptr [ebp + 8]
  __asm lea eax, [ebp - 0x10]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov ecx, esi
  __asm call LAB_10050d58
  __asm lea ecx, [ebp - 0x10]
  __asm mov byte ptr [ebp - 4], 3
  __asm call LAB_1005c315
  __asm lea eax, [ebp + 8]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xf0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov ecx, esi
  __asm mov byte ptr [ebp - 4], 2
  __asm mov dword ptr [esi], LAB_118be9a8
  __asm call LAB_1004216d
  __asm push offset LAB_118be644
  __asm mov ecx, eax
  __asm mov byte ptr [ebp - 4], 4
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xec __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_100021ee
  __asm lea ecx, [ebp + 8]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x05 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm mov dword ptr [esi], LAB_118be9bc
  __asm mov eax, esi
  __asm mov dword ptr [LAB_121a223c], esi
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop esi
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret 4
}




// Reference entry 1061edc0; body size 850 bytes.
#line 1 "ENTRY_1061edc0"

__declspec(naked) void FUN_1061edc0(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_115beb35
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 0x18
  __asm push ebx
  __asm push esi
  __asm push edi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov esi, ecx
  __asm mov dword ptr [ebp - 0x20], esi
  __asm push offset LAB_118bea8c
  __asm lea ecx, [ebp - 0x14]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xf0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005273e
  __asm lea eax, [ebp - 0x14]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov ecx, esi
  __asm call LAB_1001fe15
  __asm lea ecx, [ebp - 0x14]
  __asm mov byte ptr [ebp - 4], 3
  __asm call LAB_1005c315
  __asm mov dword ptr [esi], LAB_118be944
  __asm push 0xc
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xec __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov byte ptr [ebp - 4], 2
  __asm mov dword ptr [LAB_121a2248], esi
  __asm call LAB_10024f14
  __asm mov edi, eax
  __asm add esp, 4
  __asm mov dword ptr [ebp - 0x24], edi
  __asm mov byte ptr [ebp - 4], 4
  __asm test edi, edi
  __asm je LAB_1061eeda
  __asm push offset LAB_118be980
  __asm lea ecx, [ebp - 0x18]
  __asm call LAB_1005273e
  __asm push esi
  __asm lea eax, [ebp - 0x18]
  __asm mov byte ptr [ebp - 4], 5
  __asm push eax
  __asm mov ecx, edi
  __asm call LAB_10050d58
  __asm lea ecx, [ebp - 0x18]
  __asm mov byte ptr [ebp - 4], 8
  __asm call LAB_1005c315
  __asm lea eax, [ebp - 0x1c]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xe8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov ecx, edi
  __asm mov byte ptr [ebp - 4], 7
  __asm mov dword ptr [edi], LAB_118be95c
  __asm call LAB_1004216d
  __asm push offset LAB_118be644
  __asm mov ecx, eax
  __asm mov byte ptr [ebp - 4], 9
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xf0 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_100021ee
  __asm test al, al
  __asm sete bl
  __asm lea ecx, [ebp - 0x1c]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x0a __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm test bl, bl
  __asm _emit 0x75 __asm _emit 0x07 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x07 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [edi], LAB_118be970
  __asm mov dword ptr [LAB_121a2238], edi
  __asm _emit 0xeb __asm _emit 0x02
  __asm xor edi, edi
  __asm push edi
  __asm mov ecx, esi
  __asm mov byte ptr [ebp - 4], 2
  __asm call LAB_10053e77
  __asm push 0xc
  __asm call LAB_10024f14
  __asm mov edi, eax
  __asm add esp, 4
  __asm mov dword ptr [ebp - 0x24], edi
  __asm mov byte ptr [ebp - 4], 0xd
  __asm test edi, edi
  __asm je LAB_1061ef8c
  __asm push offset LAB_118be9cc
  __asm lea ecx, [ebp - 0x18]
  __asm call LAB_1005273e
  __asm push esi
  __asm lea eax, [ebp - 0x18]
  __asm mov byte ptr [ebp - 4], 0xe
  __asm push eax
  __asm mov ecx, edi
  __asm call LAB_10050d58
  __asm lea ecx, [ebp - 0x18]
  __asm mov byte ptr [ebp - 4], 0x11
  __asm call LAB_1005c315
  __asm lea eax, [ebp - 0x1c]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xe8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov ecx, edi
  __asm mov byte ptr [ebp - 4], 0x10
  __asm mov dword ptr [edi], LAB_118be9a8
  __asm call LAB_1004216d
  __asm push offset LAB_118be644
  __asm mov ecx, eax
  __asm mov byte ptr [ebp - 4], 0x12
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xf0 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_100021ee
  __asm test al, al
  __asm sete bl
  __asm lea ecx, [ebp - 0x1c]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x13 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm test bl, bl
  __asm _emit 0x75 __asm _emit 0x07 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [edi], LAB_118be9bc
  __asm mov dword ptr [LAB_121a223c], edi
  __asm _emit 0xeb __asm _emit 0x02
  __asm xor edi, edi
  __asm push edi
  __asm mov ecx, esi
  __asm mov byte ptr [ebp - 4], 2
  __asm call LAB_10053e77
  __asm push 0xc
  __asm call LAB_10024f14
  __asm mov edi, eax
  __asm add esp, 4
  __asm mov dword ptr [ebp - 0x24], edi
  __asm mov byte ptr [ebp - 4], 0x16
  __asm test edi, edi
  __asm je LAB_1061f03e
  __asm push offset LAB_118bea1c
  __asm lea ecx, [ebp - 0x18]
  __asm call LAB_1005273e
  __asm push esi
  __asm lea eax, [ebp - 0x18]
  __asm mov byte ptr [ebp - 4], 0x17
  __asm push eax
  __asm mov ecx, edi
  __asm call LAB_10050d58
  __asm lea ecx, [ebp - 0x18]
  __asm mov byte ptr [ebp - 4], 0x1a
  __asm call LAB_1005c315
  __asm lea eax, [ebp - 0x1c]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xe8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov ecx, edi
  __asm mov byte ptr [ebp - 4], 0x19
  __asm mov dword ptr [edi], LAB_118be9f8
  __asm call LAB_1004216d
  __asm push offset LAB_118be644
  __asm mov ecx, eax
  __asm mov byte ptr [ebp - 4], 0x1b
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xf0 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_100021ee
  __asm test al, al
  __asm sete bl
  __asm lea ecx, [ebp - 0x1c]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x1c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm test bl, bl
  __asm _emit 0x75 __asm _emit 0x07 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x19 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [edi], LAB_118bea0c
  __asm mov dword ptr [LAB_121a2240], edi
  __asm _emit 0xeb __asm _emit 0x02
  __asm xor edi, edi
  __asm push edi
  __asm mov ecx, esi
  __asm mov byte ptr [ebp - 4], 2
  __asm call LAB_10053e77
  __asm push 0xc
  __asm call LAB_10024f14
  __asm mov edi, eax
  __asm add esp, 4
  __asm mov dword ptr [ebp - 0x24], edi
  __asm mov byte ptr [ebp - 4], 0x1f
  __asm test edi, edi
  __asm je LAB_1061f0f0
  __asm push offset LAB_118bea68
  __asm lea ecx, [ebp - 0x18]
  __asm call LAB_1005273e
  __asm push esi
  __asm lea eax, [ebp - 0x18]
  __asm mov byte ptr [ebp - 4], 0x20
  __asm push eax
  __asm mov ecx, edi
  __asm call LAB_10050d58
  __asm lea ecx, [ebp - 0x18]
  __asm mov byte ptr [ebp - 4], 0x23
  __asm call LAB_1005c315
  __asm lea eax, [ebp - 0x1c]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xe8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov ecx, edi
  __asm mov byte ptr [ebp - 4], 0x22
  __asm mov dword ptr [edi], LAB_118bea44
  __asm call LAB_1004216d
  __asm push offset LAB_118be644
  __asm mov ecx, eax
  __asm mov byte ptr [ebp - 4], 0x24
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xf0 __asm _emit 0x40 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_100021ee
  __asm test al, al
  __asm sete bl
  __asm lea ecx, [ebp - 0x1c]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x25 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm test bl, bl
  __asm _emit 0x75 __asm _emit 0x07 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x22 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [edi], LAB_118bea58
  __asm mov dword ptr [LAB_121a2244], edi
  __asm _emit 0xeb __asm _emit 0x02
  __asm xor edi, edi
  __asm push edi
  __asm mov ecx, esi
  __asm mov byte ptr [ebp - 4], 2
  __asm call LAB_10053e77
  __asm mov eax, esi
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
}




// Reference entry 1061f220; body size 119 bytes.
#line 1 "ENTRY_1061f220"

__declspec(naked) void FUN_1061f220(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_115beba0
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm push esi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x18]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esi + 0x10]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop esi
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
}




// Reference entry 1061f300; body size 68 bytes.
#line 1 "ENTRY_1061f300"

__declspec(naked) void FUN_1061f300(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_115bebd0
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm mov ecx, dword ptr [eax]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x0b __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
}




// Reference entry 1061f360; body size 110 bytes.
#line 1 "ENTRY_1061f360"

__declspec(naked) void FUN_1061f360(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_115bec00
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm push esi
  __asm push edi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov edi, ecx
  __asm lea ecx, [edi + 0xc]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [edi + 8]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
}




// Reference entry 1061f3f0; body size 119 bytes.
#line 1 "ENTRY_1061f3f0"

__declspec(naked) void FUN_1061f3f0(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_115bec30
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm push esi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x18]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esi + 0x10]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop esi
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
}




// Reference entry 1061f490; body size 110 bytes.
#line 1 "ENTRY_1061f490"

__declspec(naked) void FUN_1061f490(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_115bec60
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm push esi
  __asm push edi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov edi, ecx
  __asm lea ecx, [edi + 0xc]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [edi + 8]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
}




// Reference entry 1061f520; body size 110 bytes.
#line 1 "ENTRY_1061f520"

__declspec(naked) void FUN_1061f520(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_115bec90
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm push esi
  __asm push edi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov edi, ecx
  __asm lea ecx, [edi + 0xc]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [edi + 8]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
}




// Reference entry 1061f5c0; body size 125 bytes.
#line 1 "ENTRY_1061f5c0"

__declspec(naked) void FUN_1061f5c0(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_115becc0
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm push esi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0xe0]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x0f __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, esi
  __asm mov dword ptr [esi], LAB_118beaa8
  __asm mov dword ptr [esi + 0x10], LAB_118beb04
  __asm mov dword ptr [esi + 0x8c], LAB_118beb10
  __asm mov dword ptr [esi + 0xa8], LAB_118beb1c
  __asm call LAB_10024127
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop esi
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
}




// Reference entry 1061f730; body size 135 bytes.
#line 1 "ENTRY_1061f730"

__declspec(naked) void FUN_1061f730(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_115becf0
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm push esi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0xe4]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x19 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe4 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, esi
  __asm mov dword ptr [esi], LAB_118beaa8
  __asm mov dword ptr [esi + 0x10], LAB_118beb04
  __asm mov dword ptr [esi + 0x8c], LAB_118beb10
  __asm mov dword ptr [esi + 0xa8], LAB_118beb1c
  __asm call LAB_10024127
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop esi
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
}




// Reference entry 1061f800; body size 81 bytes.
#line 1 "ENTRY_1061f800"

__declspec(naked) void FUN_1061f800(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov dword ptr [esi], LAB_118be944
  __asm mov ecx, dword ptr [LAB_121a2238]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x06
  __asm mov eax, dword ptr [ecx]
  __asm push 1
  __asm call dword ptr [eax]
  __asm mov ecx, dword ptr [LAB_121a223c]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x06
  __asm mov eax, dword ptr [ecx]
  __asm push 1
  __asm call dword ptr [eax]
  __asm mov ecx, dword ptr [LAB_121a2240]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x06
  __asm mov eax, dword ptr [ecx]
  __asm push 1
  __asm call dword ptr [eax]
  __asm mov ecx, dword ptr [LAB_121a2244]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x06
  __asm mov eax, dword ptr [ecx]
  __asm push 1
  __asm call dword ptr [eax]
  __asm mov ecx, esi
  __asm pop esi
  __asm jmp LAB_10013192
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

__declspec(naked) void FUN_1061fab0(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_115bed20
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm push esi
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0xe0]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x0f __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, esi
  __asm mov dword ptr [esi], LAB_118beaa8
  __asm mov dword ptr [esi + 0x10], LAB_118beb04
  __asm mov dword ptr [esi + 0x8c], LAB_118beb10
  __asm mov dword ptr [esi + 0xa8], LAB_118beb1c
  __asm call LAB_10024127
  __asm test byte ptr [ebp + 8], 1
  __asm _emit 0x74 __asm _emit 0x0e
  __asm push 0xe4
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm mov eax, esi
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop esi
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret 4
}




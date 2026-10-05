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
using namespace std;
extern "C" void LAB_10005c86(void);
extern "C" void LAB_100116ee(void);
extern "C" void LAB_10013e6c(void);
extern "C" void LAB_10013f39(void);
extern "C" void LAB_10017003(void);
extern "C" void LAB_1001fc8a(void);
extern "C" void LAB_10023f2e(void);
extern "C" void LAB_10030021(void);
extern "C" void LAB_1003217d(void);
extern "C" void LAB_100382f3(void);
extern "C" void LAB_100474fb(void);
extern "C" void LAB_10047a00(void);
extern "C" void LAB_1004f3a4(void);
extern "C" void LAB_10051f4b(void);
extern "C" void LAB_1005b807(void);
extern "C" void LAB_1005c5b8(void);
extern "C" void LAB_100606e5(void);
extern "C" void LAB_10065fbe(void);
extern "C" void LAB_100699e8(void);
extern "C" void LAB_1006a95b(void);
extern "C" void LAB_1006af23(void);
extern "C" void LAB_100755d1(void);
extern "C" void LAB_10087bd7(void);
extern "C" void LAB_1008b926(void);
extern "C" void LAB_1008bf16(void);
extern "C" void LAB_1008c50b(void);
extern "C" void LAB_10099413(void);
extern "C" void LAB_1148cde7(void);
extern "C" void LAB_1205d768(void);
extern "C" void LAB_1205d798(void);
extern "C" void LAB_1205d7c8(void);
extern "C" void LAB_1205d7f8(void);
extern "C" void LAB_1205d850(void);
extern "C" void LAB_1205d880(void);
extern "C" void LAB_1205d8b0(void);
extern "C" void LAB_1205d8f0(void);
extern "C" void LAB_1205d924(void);
extern "C" void LAB_1205d954(void);
extern "C" void LAB_1205d984(void);
extern "C" void LAB_1205d9b4(void);
extern "C" void LAB_1205d9e4(void);
extern "C" void LAB_1205da14(void);
extern "C" void LAB_1205da74(void);
extern "C" void LAB_1205daa4(void);
extern "C" void LAB_1205dad4(void);
extern "C" void LAB_1205de30(void);
extern "C" void LAB_1205e0c0(void);
extern "C" void LAB_1205e0f0(void);
extern "C" void LAB_1205e130(void);
extern "C" void LAB_1205e41c(void);
extern "C" void LAB_1205e464(void);
extern "C" void LAB_1205e4a8(void);
extern "C" void LAB_1205e4ec(void);
extern "C" void LAB_1205e6a0(void);
extern "C" void LAB_1205e6d0(void);
extern "C" void LAB_1205e730(void);
extern "C" void LAB_1205e838(void);
extern "C" void LAB_1205e92c(void);
extern "C" void LAB_1205ea64(void);
extern "C" void LAB_1205eb1c(void);
extern "C" void LAB_1205eb4c(void);
extern "C" void LAB_1205eb7c(void);
extern "C" void LAB_1205eeb4(void);
extern "C" void LAB_1205ef3c(void);
extern "C" void LAB_1205efb4(void);
extern "C" void LAB_1205f5c0(void);
extern "C" void LAB_1205f5f0(void);
extern "C" void LAB_1205f620(void);
extern "C" void LAB_1205f660(void);
extern "C" void LAB_1205f69c(void);
extern "C" void LAB_1205f6d8(void);
extern "C" void LAB_1205f78c(void);
extern "C" void LAB_1205f814(void);
extern "C" void LAB_1205f8f0(void);
extern "C" void LAB_1205fa08(void);
extern "C" void LAB_1205fa30(void);
extern "C" void LAB_1205fab0(void);
extern "C" void LAB_1205fad8(void);
extern "C" void LAB_1205fb68(void);
extern "C" void LAB_1205fcdc(void);
extern "C" void LAB_1205fd3c(void);
extern "C" void LAB_1205fe04(void);
extern "C" void LAB_1205feac(void);
extern "C" void LAB_1206006c(void);
extern "C" void LAB_1206009c(void);
extern "C" void LAB_120600fc(void);
extern "C" void LAB_12060160(void);
extern "C" void LAB_12119d20(void);
extern "C" void LAB_12119fa0(void);
extern "C" void LAB_1211a0e0(void);
extern "C" void LAB_1211c1d0(void);
extern "C" void LAB_1211dbf8(void);
extern "C" void LAB_121205b0(void);
extern "C" void LAB_121a07bc(void);
extern "C" void LAB_121a07f0(void);
extern "C" void LAB_121a0954(void);
extern "C" void LAB_121a0c1c(void);
extern "C" void LAB_121a0df4(void);
extern "C" void LAB_121a10e4(void);
extern "C" void LAB_121a1490(void);
extern "C" void LAB_121a2070(void);
extern "C" void LAB_121a26d0(void);
extern "C" void LAB_121a49a0(void);
extern "C" void LAB_121a4eb8(void);
extern "C" void LAB_121a4f68(void);
extern "C" void LAB_121a4f98(void);
extern "C" void LAB_121a5180(void);
extern "C" void LAB_121a5268(void);
extern "C" void LAB_121a5454(void);
extern "C" void LAB_121a5548(void);
extern "C" void LAB_121a5568(void);
extern "C" void LAB_121a55c0(void);
extern "C" void LAB_121a5b30(void);
extern "C" void LAB_121a5f78(void);
extern "C" void LAB_121a6ab8(void);
extern "C" void LAB_121a7364(void);
extern "C" void LAB_121a74fc(void);
extern "C" void LAB_121a7518(void);
extern "C" void LAB_121a754c(void);
extern "C" void LAB_121a784c(void);
extern "C" void LAB_121a79dc(void);
extern "C" void LAB_122f33fc(void);
extern "C" void LAB_122f5d30(void);

extern "C" void LAB_10005c86(void);
extern "C" void LAB_100116ee(void);
extern "C" void LAB_10013e6c(void);
extern "C" void LAB_10013f39(void);
extern "C" void LAB_10017003(void);
extern "C" void LAB_1001fc8a(void);
extern "C" void LAB_10023f2e(void);
extern "C" void LAB_10030021(void);
extern "C" void LAB_1003217d(void);
extern "C" void LAB_100382f3(void);
extern "C" void LAB_100474fb(void);
extern "C" void LAB_10047a00(void);
extern "C" void LAB_1004f3a4(void);
extern "C" void LAB_10051f4b(void);
extern "C" void LAB_1005b807(void);
extern "C" void LAB_1005c5b8(void);
extern "C" void LAB_100606e5(void);
extern "C" void LAB_10065fbe(void);
extern "C" void LAB_100699e8(void);
extern "C" void LAB_1006a95b(void);
extern "C" void LAB_1006af23(void);
extern "C" void LAB_100755d1(void);
extern "C" void LAB_10087bd7(void);
extern "C" void LAB_1008b926(void);
extern "C" void LAB_1008bf16(void);
extern "C" void LAB_1008c50b(void);
extern "C" void LAB_10099413(void);
extern "C" void LAB_1148cde7(void);
extern "C" void LAB_1205d768(void);
extern "C" void LAB_1205d798(void);
extern "C" void LAB_1205d7c8(void);
extern "C" void LAB_1205d7f8(void);
extern "C" void LAB_1205d850(void);
extern "C" void LAB_1205d880(void);
extern "C" void LAB_1205d8b0(void);
extern "C" void LAB_1205d8f0(void);
extern "C" void LAB_1205d924(void);
extern "C" void LAB_1205d954(void);
extern "C" void LAB_1205d984(void);
extern "C" void LAB_1205d9b4(void);
extern "C" void LAB_1205d9e4(void);
extern "C" void LAB_1205da14(void);
extern "C" void LAB_1205da74(void);
extern "C" void LAB_1205daa4(void);
extern "C" void LAB_1205dad4(void);
extern "C" void LAB_1205de30(void);
extern "C" void LAB_1205e0c0(void);
extern "C" void LAB_1205e0f0(void);
extern "C" void LAB_1205e130(void);
extern "C" void LAB_1205e41c(void);
extern "C" void LAB_1205e464(void);
extern "C" void LAB_1205e4a8(void);
extern "C" void LAB_1205e4ec(void);
extern "C" void LAB_1205e6a0(void);
extern "C" void LAB_1205e6d0(void);
extern "C" void LAB_1205e730(void);
extern "C" void LAB_1205e838(void);
extern "C" void LAB_1205e92c(void);
extern "C" void LAB_1205ea64(void);
extern "C" void LAB_1205eb1c(void);
extern "C" void LAB_1205eb4c(void);
extern "C" void LAB_1205eb7c(void);
extern "C" void LAB_1205eeb4(void);
extern "C" void LAB_1205ef3c(void);
extern "C" void LAB_1205efb4(void);
extern "C" void LAB_1205f5c0(void);
extern "C" void LAB_1205f5f0(void);
extern "C" void LAB_1205f620(void);
extern "C" void LAB_1205f660(void);
extern "C" void LAB_1205f69c(void);
extern "C" void LAB_1205f6d8(void);
extern "C" void LAB_1205f78c(void);
extern "C" void LAB_1205f814(void);
extern "C" void LAB_1205f8f0(void);
extern "C" void LAB_1205fa08(void);
extern "C" void LAB_1205fa30(void);
extern "C" void LAB_1205fab0(void);
extern "C" void LAB_1205fad8(void);
extern "C" void LAB_1205fb68(void);
extern "C" void LAB_1205fcdc(void);
extern "C" void LAB_1205fd3c(void);
extern "C" void LAB_1205fe04(void);
extern "C" void LAB_1205feac(void);
extern "C" void LAB_1206006c(void);
extern "C" void LAB_1206009c(void);
extern "C" void LAB_120600fc(void);
extern "C" void LAB_12060160(void);
extern "C" void LAB_12119d20(void);
extern "C" void LAB_12119fa0(void);
extern "C" void LAB_1211a0e0(void);
extern "C" void LAB_1211c1d0(void);
extern "C" void LAB_1211dbf8(void);
extern "C" void LAB_121205b0(void);
extern "C" void LAB_121a07bc(void);
extern "C" void LAB_121a07f0(void);
extern "C" void LAB_121a0954(void);
extern "C" void LAB_121a0c1c(void);
extern "C" void LAB_121a0df4(void);
extern "C" void LAB_121a10e4(void);
extern "C" void LAB_121a1490(void);
extern "C" void LAB_121a2070(void);
extern "C" void LAB_121a26d0(void);
extern "C" void LAB_121a49a0(void);
extern "C" void LAB_121a4eb8(void);
extern "C" void LAB_121a4f68(void);
extern "C" void LAB_121a4f98(void);
extern "C" void LAB_121a5180(void);
extern "C" void LAB_121a5268(void);
extern "C" void LAB_121a5454(void);
extern "C" void LAB_121a5548(void);
extern "C" void LAB_121a5568(void);
extern "C" void LAB_121a55c0(void);
extern "C" void LAB_121a5b30(void);
extern "C" void LAB_121a5f78(void);
extern "C" void LAB_121a6ab8(void);
extern "C" void LAB_121a7364(void);
extern "C" void LAB_121a74fc(void);
extern "C" void LAB_121a7518(void);
extern "C" void LAB_121a754c(void);
extern "C" void LAB_121a784c(void);
extern "C" void LAB_121a79dc(void);
extern "C" void LAB_122f33fc(void);
extern "C" void LAB_122f5d30(void);

extern "C" void LAB_10005c86(void);
extern "C" void LAB_100116ee(void);
extern "C" void LAB_10013e6c(void);
extern "C" void LAB_10013f39(void);
extern "C" void LAB_10017003(void);
extern "C" void LAB_1001fc8a(void);
extern "C" void LAB_10023f2e(void);
extern "C" void LAB_10030021(void);
extern "C" void LAB_1003217d(void);
extern "C" void LAB_100382f3(void);
extern "C" void LAB_100474fb(void);
extern "C" void LAB_10047a00(void);
extern "C" void LAB_1004f3a4(void);
extern "C" void LAB_10051f4b(void);
extern "C" void LAB_1005b807(void);
extern "C" void LAB_1005c5b8(void);
extern "C" void LAB_100606e5(void);
extern "C" void LAB_10065fbe(void);
extern "C" void LAB_100699e8(void);
extern "C" void LAB_1006a95b(void);
extern "C" void LAB_1006af23(void);
extern "C" void LAB_100755d1(void);
extern "C" void LAB_10087bd7(void);
extern "C" void LAB_1008b926(void);
extern "C" void LAB_1008bf16(void);
extern "C" void LAB_1008c50b(void);
extern "C" void LAB_10099413(void);
extern "C" void LAB_1148cde7(void);
extern "C" void LAB_1205d768(void);
extern "C" void LAB_1205d798(void);
extern "C" void LAB_1205d7c8(void);
extern "C" void LAB_1205d7f8(void);
extern "C" void LAB_1205d850(void);
extern "C" void LAB_1205d880(void);
extern "C" void LAB_1205d8b0(void);
extern "C" void LAB_1205d8f0(void);
extern "C" void LAB_1205d924(void);
extern "C" void LAB_1205d954(void);
extern "C" void LAB_1205d984(void);
extern "C" void LAB_1205d9b4(void);
extern "C" void LAB_1205d9e4(void);
extern "C" void LAB_1205da14(void);
extern "C" void LAB_1205da74(void);
extern "C" void LAB_1205daa4(void);
extern "C" void LAB_1205dad4(void);
extern "C" void LAB_1205de30(void);
extern "C" void LAB_1205e0c0(void);
extern "C" void LAB_1205e0f0(void);
extern "C" void LAB_1205e130(void);
extern "C" void LAB_1205e41c(void);
extern "C" void LAB_1205e464(void);
extern "C" void LAB_1205e4a8(void);
extern "C" void LAB_1205e4ec(void);
extern "C" void LAB_1205e6a0(void);
extern "C" void LAB_1205e6d0(void);
extern "C" void LAB_1205e730(void);
extern "C" void LAB_1205e838(void);
extern "C" void LAB_1205e92c(void);
extern "C" void LAB_1205ea64(void);
extern "C" void LAB_1205eb1c(void);
extern "C" void LAB_1205eb4c(void);
extern "C" void LAB_1205eb7c(void);
extern "C" void LAB_1205eeb4(void);
extern "C" void LAB_1205ef3c(void);
extern "C" void LAB_1205efb4(void);
extern "C" void LAB_1205f5c0(void);
extern "C" void LAB_1205f5f0(void);
extern "C" void LAB_1205f620(void);
extern "C" void LAB_1205f660(void);
extern "C" void LAB_1205f69c(void);
extern "C" void LAB_1205f6d8(void);
extern "C" void LAB_1205f78c(void);
extern "C" void LAB_1205f814(void);
extern "C" void LAB_1205f8f0(void);
extern "C" void LAB_1205fa08(void);
extern "C" void LAB_1205fa30(void);
extern "C" void LAB_1205fab0(void);
extern "C" void LAB_1205fad8(void);
extern "C" void LAB_1205fb68(void);
extern "C" void LAB_1205fcdc(void);
extern "C" void LAB_1205fd3c(void);
extern "C" void LAB_1205fe04(void);
extern "C" void LAB_1205feac(void);
extern "C" void LAB_1206006c(void);
extern "C" void LAB_1206009c(void);
extern "C" void LAB_120600fc(void);
extern "C" void LAB_12060160(void);
extern "C" void LAB_12119d20(void);
extern "C" void LAB_12119fa0(void);
extern "C" void LAB_1211a0e0(void);
extern "C" void LAB_1211c1d0(void);
extern "C" void LAB_1211dbf8(void);
extern "C" void LAB_121205b0(void);
extern "C" void LAB_121a07bc(void);
extern "C" void LAB_121a07f0(void);
extern "C" void LAB_121a0954(void);
extern "C" void LAB_121a0c1c(void);
extern "C" void LAB_121a0df4(void);
extern "C" void LAB_121a10e4(void);
extern "C" void LAB_121a1490(void);
extern "C" void LAB_121a2070(void);
extern "C" void LAB_121a26d0(void);
extern "C" void LAB_121a49a0(void);
extern "C" void LAB_121a4eb8(void);
extern "C" void LAB_121a4f68(void);
extern "C" void LAB_121a4f98(void);
extern "C" void LAB_121a5180(void);
extern "C" void LAB_121a5268(void);
extern "C" void LAB_121a5454(void);
extern "C" void LAB_121a5548(void);
extern "C" void LAB_121a5568(void);
extern "C" void LAB_121a55c0(void);
extern "C" void LAB_121a5b30(void);
extern "C" void LAB_121a5f78(void);
extern "C" void LAB_121a6ab8(void);
extern "C" void LAB_121a7364(void);
extern "C" void LAB_121a74fc(void);
extern "C" void LAB_121a7518(void);
extern "C" void LAB_121a754c(void);
extern "C" void LAB_121a784c(void);
extern "C" void LAB_121a79dc(void);
extern "C" void LAB_122f33fc(void);
extern "C" void LAB_122f5d30(void);

extern "C" void LAB_10005c86(void);
extern "C" void LAB_100116ee(void);
extern "C" void LAB_10013e6c(void);
extern "C" void LAB_10013f39(void);
extern "C" void LAB_10017003(void);
extern "C" void LAB_1001fc8a(void);
extern "C" void LAB_10023f2e(void);
extern "C" void LAB_10030021(void);
extern "C" void LAB_1003217d(void);
extern "C" void LAB_100382f3(void);
extern "C" void LAB_100474fb(void);
extern "C" void LAB_10047a00(void);
extern "C" void LAB_1004f3a4(void);
extern "C" void LAB_10051f4b(void);
extern "C" void LAB_1005b807(void);
extern "C" void LAB_1005c5b8(void);
extern "C" void LAB_100606e5(void);
extern "C" void LAB_10065fbe(void);
extern "C" void LAB_100699e8(void);
extern "C" void LAB_1006a95b(void);
extern "C" void LAB_1006af23(void);
extern "C" void LAB_100755d1(void);
extern "C" void LAB_10087bd7(void);
extern "C" void LAB_1008b926(void);
extern "C" void LAB_1008bf16(void);
extern "C" void LAB_1008c50b(void);
extern "C" void LAB_10099413(void);
extern "C" void LAB_1148cde7(void);
extern "C" void LAB_1205d768(void);
extern "C" void LAB_1205d798(void);
extern "C" void LAB_1205d7c8(void);
extern "C" void LAB_1205d7f8(void);
extern "C" void LAB_1205d850(void);
extern "C" void LAB_1205d880(void);
extern "C" void LAB_1205d8b0(void);
extern "C" void LAB_1205d8f0(void);
extern "C" void LAB_1205d924(void);
extern "C" void LAB_1205d954(void);
extern "C" void LAB_1205d984(void);
extern "C" void LAB_1205d9b4(void);
extern "C" void LAB_1205d9e4(void);
extern "C" void LAB_1205da14(void);
extern "C" void LAB_1205da74(void);
extern "C" void LAB_1205daa4(void);
extern "C" void LAB_1205dad4(void);
extern "C" void LAB_1205de30(void);
extern "C" void LAB_1205e0c0(void);
extern "C" void LAB_1205e0f0(void);
extern "C" void LAB_1205e130(void);
extern "C" void LAB_1205e41c(void);
extern "C" void LAB_1205e464(void);
extern "C" void LAB_1205e4a8(void);
extern "C" void LAB_1205e4ec(void);
extern "C" void LAB_1205e6a0(void);
extern "C" void LAB_1205e6d0(void);
extern "C" void LAB_1205e730(void);
extern "C" void LAB_1205e838(void);
extern "C" void LAB_1205e92c(void);
extern "C" void LAB_1205ea64(void);
extern "C" void LAB_1205eb1c(void);
extern "C" void LAB_1205eb4c(void);
extern "C" void LAB_1205eb7c(void);
extern "C" void LAB_1205eeb4(void);
extern "C" void LAB_1205ef3c(void);
extern "C" void LAB_1205efb4(void);
extern "C" void LAB_1205f5c0(void);
extern "C" void LAB_1205f5f0(void);
extern "C" void LAB_1205f620(void);
extern "C" void LAB_1205f660(void);
extern "C" void LAB_1205f69c(void);
extern "C" void LAB_1205f6d8(void);
extern "C" void LAB_1205f78c(void);
extern "C" void LAB_1205f814(void);
extern "C" void LAB_1205f8f0(void);
extern "C" void LAB_1205fa08(void);
extern "C" void LAB_1205fa30(void);
extern "C" void LAB_1205fab0(void);
extern "C" void LAB_1205fad8(void);
extern "C" void LAB_1205fb68(void);
extern "C" void LAB_1205fcdc(void);
extern "C" void LAB_1205fd3c(void);
extern "C" void LAB_1205fe04(void);
extern "C" void LAB_1205feac(void);
extern "C" void LAB_1206006c(void);
extern "C" void LAB_1206009c(void);
extern "C" void LAB_120600fc(void);
extern "C" void LAB_12060160(void);
extern "C" void LAB_12119d20(void);
extern "C" void LAB_12119fa0(void);
extern "C" void LAB_1211a0e0(void);
extern "C" void LAB_1211c1d0(void);
extern "C" void LAB_1211dbf8(void);
extern "C" void LAB_121205b0(void);
extern "C" void LAB_121a07bc(void);
extern "C" void LAB_121a07f0(void);
extern "C" void LAB_121a0954(void);
extern "C" void LAB_121a0c1c(void);
extern "C" void LAB_121a0df4(void);
extern "C" void LAB_121a10e4(void);
extern "C" void LAB_121a1490(void);
extern "C" void LAB_121a2070(void);
extern "C" void LAB_121a26d0(void);
extern "C" void LAB_121a49a0(void);
extern "C" void LAB_121a4eb8(void);
extern "C" void LAB_121a4f68(void);
extern "C" void LAB_121a4f98(void);
extern "C" void LAB_121a5180(void);
extern "C" void LAB_121a5268(void);
extern "C" void LAB_121a5454(void);
extern "C" void LAB_121a5548(void);
extern "C" void LAB_121a5568(void);
extern "C" void LAB_121a55c0(void);
extern "C" void LAB_121a5b30(void);
extern "C" void LAB_121a5f78(void);
extern "C" void LAB_121a6ab8(void);
extern "C" void LAB_121a7364(void);
extern "C" void LAB_121a74fc(void);
extern "C" void LAB_121a7518(void);
extern "C" void LAB_121a754c(void);
extern "C" void LAB_121a784c(void);
extern "C" void LAB_121a79dc(void);
extern "C" void LAB_122f33fc(void);
extern "C" void LAB_122f5d30(void);


extern int FUN_100116ee(...);
extern int FUN_10013f39(...);
extern int FUN_10030021(...);
extern int FUN_100474fb(...);
extern int FUN_1004f3a4(...);
extern int FUN_1005c5b8(...);
extern int FUN_100606e5(...);
extern int FUN_100699e8(...);
extern int FUN_1008c50b(...);
extern int FUN_117f6ebb(...);
extern int FUN_117f6ec1(...);
extern int FUN_117f6eca(...);
extern int FUN_117f6ed4(...);
extern int FUN_11831514(...);
extern int FUN_1183151d(...);
extern int FUN_11831527(...);
extern int FUN_11831537(...);
extern int FUN_11840f8c(...);
extern int FUN_11840f94(...);
extern int FUN_11840fa4(...);
extern __declspec(dllimport) int _Mtx_destroy_in_situ(...);
extern __declspec(dllimport) int __CxxFrameHandler3(...);
extern int thunk_FUN_1011f5e0(...);
extern int thunk_FUN_101a33f0(...);
extern int thunk_FUN_1022d740(...);
extern int thunk_FUN_10264380(...);
extern int thunk_FUN_102d3c00(...);
extern int thunk_FUN_10346a50(...);
extern int thunk_FUN_103f6950(...);
extern int thunk_FUN_108288d0(...);
extern int thunk_FUN_10af43b0(...);
extern int thunk_FUN_10b90fe0(...);
extern int thunk_FUN_10bc9d70(...);
extern int thunk_FUN_10bd7200(...);
extern int thunk_FUN_10bf5720(...);
extern int thunk_FUN_10c35e50(...);
extern int thunk_FUN_10c410d0(...);
extern int thunk_FUN_10c41200(...);
extern int thunk_FUN_10c47ef0(...);
extern int thunk_FUN_10c5e210(...);
extern int thunk_FUN_10cee930(...);
extern int thunk_FUN_10f4e610(...);
extern int thunk_FUN_11098770(...);
extern int thunk_FUN_111d2f40(...);
extern int thunk_FUN_11242a10(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148ac28(...);
extern int DAT_12119638;
extern int DAT_12119648;
extern int DAT_1211964c;
extern int DAT_1211a0dc;
extern int DAT_1211a0e0;
extern int DAT_1211c1d0;
extern int DAT_1211dbf8;
extern int DAT_121205b0;
extern int DAT_121a07bc;
extern int DAT_121a07f0;
extern int DAT_121a1348;
extern int DAT_121a1490;
extern int DAT_121a49a0;
extern int DAT_121a4ad8;
extern int DAT_121a5238;
extern int DAT_121a523c;
extern int DAT_121a5240;
extern int DAT_121a56a8;
extern int DAT_121a56d0;
extern int DAT_121a56fc;
extern int DAT_121a5f78;
extern int DAT_121a6524;
extern int DAT_121a652c;
extern int DAT_121a6ab8;
extern int DAT_121a7bb0;
extern int DAT_121a7bb8;
extern int DAT_121a7bc0;
extern int DAT_122f6c20;
extern int *PTR_FUN_12119fa0;
int FUN_117cd8c2(int a1);
template<class... A> int FUN_117cd8c2(A...);
int FUN_117cd8f2(int a1);
template<class... A> int FUN_117cd8f2(A...);
int FUN_117cd922(int a1);
template<class... A> int FUN_117cd922(A...);
int FUN_117cd952(int a1);
template<class... A> int FUN_117cd952(A...);
int FUN_117cd982(int a1);
template<class... A> int FUN_117cd982(A...);
int FUN_117cd9b2(int a1);
template<class... A> int FUN_117cd9b2(A...);
int FUN_117cd9e2(int a1);
template<class... A> int FUN_117cd9e2(A...);
int FUN_117cda12(int a1);
template<class... A> int FUN_117cda12(A...);
int FUN_117cda42(int a1);
template<class... A> int FUN_117cda42(A...);
int FUN_117cda72(int a1);
template<class... A> int FUN_117cda72(A...);
int FUN_117cdaa2(int a1);
template<class... A> int FUN_117cdaa2(A...);
int FUN_117cdad2(int a1);
template<class... A> int FUN_117cdad2(A...);
int FUN_117cdb17(int a1);
template<class... A> int FUN_117cdb17(A...);
int FUN_117cdb4f(int a1);
template<class... A> int FUN_117cdb4f(A...);
int FUN_117cdb59(void);
template<class... A> int FUN_117cdb59(A...);
int FUN_117cdb97(int a1);
template<class... A> int FUN_117cdb97(A...);
int FUN_117cdbd7(int a1);
template<class... A> int FUN_117cdbd7(A...);
int FUN_117cdc12(int a1);
template<class... A> int FUN_117cdc12(A...);
int FUN_117cdc52(int a1);
template<class... A> int FUN_117cdc52(A...);
int FUN_117cdc8f(int a1);
template<class... A> int FUN_117cdc8f(A...);
int FUN_117cdcdf(int a1);
template<class... A> int FUN_117cdcdf(A...);
int FUN_117cdd2f(int a1);
template<class... A> int FUN_117cdd2f(A...);
int FUN_117cdd7f(int a1);
template<class... A> int FUN_117cdd7f(A...);
int FUN_117cddc2(int a1);
template<class... A> int FUN_117cddc2(A...);
int FUN_117cde02(int a1);
template<class... A> int FUN_117cde02(A...);
int FUN_117cde4f(int a1);
template<class... A> int FUN_117cde4f(A...);
int FUN_117cdeb8(int a1);
template<class... A> int FUN_117cdeb8(A...);
int FUN_117cdf12(int a1);
template<class... A> int FUN_117cdf12(A...);
int FUN_117cdf5f(int a1);
template<class... A> int FUN_117cdf5f(A...);
int FUN_117cdfaf(int a1);
template<class... A> int FUN_117cdfaf(A...);
int FUN_117cdfff(int a1);
template<class... A> int FUN_117cdfff(A...);
int FUN_117ce04f(int a1);
template<class... A> int FUN_117ce04f(A...);
int FUN_117ce09f(int a1);
template<class... A> int FUN_117ce09f(A...);
int FUN_117ce0ef(int a1);
template<class... A> int FUN_117ce0ef(A...);
int FUN_117ce13f(int a1);
template<class... A> int FUN_117ce13f(A...);
int FUN_117ce149(void);
template<class... A> int FUN_117ce149(A...);
int FUN_117ce18f(int a1);
template<class... A> int FUN_117ce18f(A...);
int FUN_117ce1df(int a1);
template<class... A> int FUN_117ce1df(A...);
int FUN_117ce22f(int a1);
template<class... A> int FUN_117ce22f(A...);
int FUN_117ce27f(int a1);
template<class... A> int FUN_117ce27f(A...);
int FUN_117ce30c(int a1);
template<class... A> int FUN_117ce30c(A...);
int FUN_117ce375(int a1);
template<class... A> int FUN_117ce375(A...);
int FUN_117ce3be(int a1);
template<class... A> int FUN_117ce3be(A...);
int FUN_117ce3f2(int a1);
template<class... A> int FUN_117ce3f2(A...);
int FUN_117ce422(int a1);
template<class... A> int FUN_117ce422(A...);
int FUN_117ce452(int a1);
template<class... A> int FUN_117ce452(A...);
int FUN_117ce48f(int a1);
template<class... A> int FUN_117ce48f(A...);
int FUN_117ce4a2(int a1);
template<class... A> int FUN_117ce4a2(A...);
int FUN_117ce4c2(int a1);
template<class... A> int FUN_117ce4c2(A...);
int FUN_117ce4ff(int a1);
template<class... A> int FUN_117ce4ff(A...);
int FUN_117ce53f(int a1);
template<class... A> int FUN_117ce53f(A...);
int FUN_117ce5b4(int a1);
template<class... A> int FUN_117ce5b4(A...);
int FUN_117ce5ff(int a1);
template<class... A> int FUN_117ce5ff(A...);
int FUN_117ce647(int a1);
template<class... A> int FUN_117ce647(A...);
int FUN_117ce68f(int a1);
template<class... A> int FUN_117ce68f(A...);
int FUN_117ce6c2(int a1);
template<class... A> int FUN_117ce6c2(A...);
int FUN_117ce6f2(int a1);
template<class... A> int FUN_117ce6f2(A...);
int FUN_117ce722(int a1);
template<class... A> int FUN_117ce722(A...);
int FUN_117ce752(int a1);
template<class... A> int FUN_117ce752(A...);
int FUN_117ce782(int a1);
template<class... A> int FUN_117ce782(A...);
int FUN_117ce7b2(int a1);
template<class... A> int FUN_117ce7b2(A...);
int FUN_117ce7e2(int a1);
template<class... A> int FUN_117ce7e2(A...);
int FUN_117ce812(int a1);
template<class... A> int FUN_117ce812(A...);
int FUN_117ce842(int a1);
template<class... A> int FUN_117ce842(A...);
int FUN_117ce882(int a1);
template<class... A> int FUN_117ce882(A...);
int FUN_117ce8d2(int a1);
template<class... A> int FUN_117ce8d2(A...);
int FUN_117ce927(int a1);
template<class... A> int FUN_117ce927(A...);
int FUN_117ce962(int a1);
template<class... A> int FUN_117ce962(A...);
int FUN_117ce9af(int a1);
template<class... A> int FUN_117ce9af(A...);
int FUN_117ce9ef(int a1);
template<class... A> int FUN_117ce9ef(A...);
int FUN_117cea2f(int a1);
template<class... A> int FUN_117cea2f(A...);
int FUN_117cea6f(int a1);
template<class... A> int FUN_117cea6f(A...);
int FUN_117ceaaf(int a1);
template<class... A> int FUN_117ceaaf(A...);
int FUN_117ceaef(int a1);
template<class... A> int FUN_117ceaef(A...);
int FUN_117ceb45(int a1);
template<class... A> int FUN_117ceb45(A...);
int FUN_117ceb4f(void);
template<class... A> int FUN_117ceb4f(A...);
int FUN_117ceb9d(int a1);
template<class... A> int FUN_117ceb9d(A...);
int FUN_117cebdf(int a1);
template<class... A> int FUN_117cebdf(A...);
int FUN_117cec27(int a1);
template<class... A> int FUN_117cec27(A...);
int FUN_117cec5f(int a1);
template<class... A> int FUN_117cec5f(A...);
int FUN_117cec9f(int a1);
template<class... A> int FUN_117cec9f(A...);
int FUN_117cecdf(int a1);
template<class... A> int FUN_117cecdf(A...);
int FUN_117ced1f(int a1);
template<class... A> int FUN_117ced1f(A...);
int FUN_117ced5f(int a1);
template<class... A> int FUN_117ced5f(A...);
int FUN_117ceda2(int a1);
template<class... A> int FUN_117ceda2(A...);
int FUN_117cedf6(int a1);
template<class... A> int FUN_117cedf6(A...);
int FUN_117cee37(int a1);
template<class... A> int FUN_117cee37(A...);
int FUN_117cee9e(int a1);
template<class... A> int FUN_117cee9e(A...);
int FUN_117ceef7(int a1);
template<class... A> int FUN_117ceef7(A...);
int FUN_117cef63(int a1);
template<class... A> int FUN_117cef63(A...);
int FUN_117cefc5(int a1);
template<class... A> int FUN_117cefc5(A...);
int FUN_117cefff(int a1);
template<class... A> int FUN_117cefff(A...);
int FUN_117cf03f(int a1);
template<class... A> int FUN_117cf03f(A...);
int FUN_117cf07f(int a1);
template<class... A> int FUN_117cf07f(A...);
int FUN_117cf0cf(int a1);
template<class... A> int FUN_117cf0cf(A...);
int FUN_117cf11f(int a1);
template<class... A> int FUN_117cf11f(A...);
int FUN_117cf15f(int a1);
template<class... A> int FUN_117cf15f(A...);
int FUN_117cf19f(int a1);
template<class... A> int FUN_117cf19f(A...);
int FUN_117cf1df(int a1);
template<class... A> int FUN_117cf1df(A...);
int FUN_117cf245(int a1);
template<class... A> int FUN_117cf245(A...);
int FUN_117cf287(int a1);
template<class... A> int FUN_117cf287(A...);
int FUN_117cf2b2(int a1);
template<class... A> int FUN_117cf2b2(A...);
int FUN_117cf2f2(int a1);
template<class... A> int FUN_117cf2f2(A...);
int FUN_117cf332(int a1);
template<class... A> int FUN_117cf332(A...);
int FUN_117cf37f(int a1);
template<class... A> int FUN_117cf37f(A...);
int FUN_117cf3bf(int a1);
template<class... A> int FUN_117cf3bf(A...);
int FUN_117cf3ff(int a1);
template<class... A> int FUN_117cf3ff(A...);
int FUN_117cf43f(int a1);
template<class... A> int FUN_117cf43f(A...);
int FUN_117cf483(int a1);
template<class... A> int FUN_117cf483(A...);
int FUN_117cf4c7(int a1);
template<class... A> int FUN_117cf4c7(A...);
int FUN_117cf507(int a1);
template<class... A> int FUN_117cf507(A...);
int FUN_117cf546(int a1);
template<class... A> int FUN_117cf546(A...);
int FUN_117cf586(int a1);
template<class... A> int FUN_117cf586(A...);
int FUN_117cf5b2(int a1);
template<class... A> int FUN_117cf5b2(A...);
int FUN_117cf5ef(int a1);
template<class... A> int FUN_117cf5ef(A...);
int FUN_117cf62f(int a1);
template<class... A> int FUN_117cf62f(A...);
int FUN_117cf66f(int a1);
template<class... A> int FUN_117cf66f(A...);
int FUN_117cf6c2(int a1);
template<class... A> int FUN_117cf6c2(A...);
int FUN_117cf70f(int a1);
template<class... A> int FUN_117cf70f(A...);
int FUN_117cf75f(int a1);
template<class... A> int FUN_117cf75f(A...);
int FUN_117cf7ca(int a1);
template<class... A> int FUN_117cf7ca(A...);
int FUN_117cf82a(int a1);
template<class... A> int FUN_117cf82a(A...);
int FUN_117cf862(int a1);
template<class... A> int FUN_117cf862(A...);
int FUN_117cf892(int a1);
template<class... A> int FUN_117cf892(A...);
int FUN_117cf8c2(int a1);
template<class... A> int FUN_117cf8c2(A...);
int FUN_117cf8ff(int a1);
template<class... A> int FUN_117cf8ff(A...);
int FUN_117cf93f(int a1);
template<class... A> int FUN_117cf93f(A...);
int FUN_117cf97f(int a1);
template<class... A> int FUN_117cf97f(A...);
int FUN_117cf9b2(int a1);
template<class... A> int FUN_117cf9b2(A...);
int FUN_117cf9e2(int a1);
template<class... A> int FUN_117cf9e2(A...);
int FUN_117cfa12(int a1);
template<class... A> int FUN_117cfa12(A...);
int FUN_117cfa42(int a1);
template<class... A> int FUN_117cfa42(A...);
int FUN_117cfa72(int a1);
template<class... A> int FUN_117cfa72(A...);
int FUN_117cfaa2(int a1);
template<class... A> int FUN_117cfaa2(A...);
int FUN_117cfad2(int a1);
template<class... A> int FUN_117cfad2(A...);
int FUN_117cfb02(int a1);
template<class... A> int FUN_117cfb02(A...);
int FUN_117cfb3f(int a1);
template<class... A> int FUN_117cfb3f(A...);
int FUN_117cfb8f(int a1);
template<class... A> int FUN_117cfb8f(A...);
int FUN_117cfbcf(int a1);
template<class... A> int FUN_117cfbcf(A...);
int FUN_117cfc48(int a1);
template<class... A> int FUN_117cfc48(A...);
int FUN_117cfcaa(int a1);
template<class... A> int FUN_117cfcaa(A...);
int FUN_117cfcff(int a1);
template<class... A> int FUN_117cfcff(A...);
int FUN_117cfd3f(int a1);
template<class... A> int FUN_117cfd3f(A...);
int FUN_117cfd7f(int a1);
template<class... A> int FUN_117cfd7f(A...);
int FUN_117cfdbf(int a1);
template<class... A> int FUN_117cfdbf(A...);
int FUN_117cfdff(int a1);
template<class... A> int FUN_117cfdff(A...);
int FUN_117cfe32(int a1);
template<class... A> int FUN_117cfe32(A...);
int FUN_117cfe62(int a1);
template<class... A> int FUN_117cfe62(A...);
int FUN_117cfe9f(int a1);
template<class... A> int FUN_117cfe9f(A...);
int FUN_117cfedf(int a1);
template<class... A> int FUN_117cfedf(A...);
int FUN_117cff12(int a1);
template<class... A> int FUN_117cff12(A...);
int FUN_117cff42(int a1);
template<class... A> int FUN_117cff42(A...);
int FUN_117cff86(int a1);
template<class... A> int FUN_117cff86(A...);
int FUN_117cffb2(int a1);
template<class... A> int FUN_117cffb2(A...);
int FUN_117cffe2(int a1);
template<class... A> int FUN_117cffe2(A...);
int FUN_117d0012(int a1);
template<class... A> int FUN_117d0012(A...);
int FUN_117d0042(int a1);
template<class... A> int FUN_117d0042(A...);
int FUN_117d0072(int a1);
template<class... A> int FUN_117d0072(A...);
int FUN_117d00a2(int a1);
template<class... A> int FUN_117d00a2(A...);
int FUN_117d01e9(int a1);
template<class... A> int FUN_117d01e9(A...);
int FUN_117d0222(int a1);
template<class... A> int FUN_117d0222(A...);
int FUN_117d0269(int a1);
template<class... A> int FUN_117d0269(A...);
int FUN_117d02d7(int a1);
template<class... A> int FUN_117d02d7(A...);
int FUN_117d031f(int a1);
template<class... A> int FUN_117d031f(A...);
int FUN_117d035f(int a1);
template<class... A> int FUN_117d035f(A...);
int FUN_117d03a9(int a1);
template<class... A> int FUN_117d03a9(A...);
int FUN_117d03ef(int a1);
template<class... A> int FUN_117d03ef(A...);
int FUN_117d042f(int a1);
template<class... A> int FUN_117d042f(A...);
int FUN_117d047f(int a1);
template<class... A> int FUN_117d047f(A...);
int FUN_117d04cf(int a1);
template<class... A> int FUN_117d04cf(A...);
int FUN_117d0527(int a1);
template<class... A> int FUN_117d0527(A...);
int FUN_117d0577(int a1);
template<class... A> int FUN_117d0577(A...);
int FUN_117d05c7(int a1);
template<class... A> int FUN_117d05c7(A...);
int FUN_117d0602(int a1);
template<class... A> int FUN_117d0602(A...);
int FUN_117d0632(int a1);
template<class... A> int FUN_117d0632(A...);
int FUN_117d066f(int a1);
template<class... A> int FUN_117d066f(A...);
int FUN_117d06b2(int a1);
template<class... A> int FUN_117d06b2(A...);
int FUN_117d06ef(int a1);
template<class... A> int FUN_117d06ef(A...);
int FUN_117d072f(int a1);
template<class... A> int FUN_117d072f(A...);
int FUN_117d0777(int a1);
template<class... A> int FUN_117d0777(A...);
int FUN_117d07b7(int a1);
template<class... A> int FUN_117d07b7(A...);
int FUN_117d07f7(int a1);
template<class... A> int FUN_117d07f7(A...);
int FUN_117d0847(int a1);
template<class... A> int FUN_117d0847(A...);
int FUN_117d0897(int a1);
template<class... A> int FUN_117d0897(A...);
int FUN_117d08d7(int a1);
template<class... A> int FUN_117d08d7(A...);
int FUN_117d090f(int a1);
template<class... A> int FUN_117d090f(A...);
int FUN_117d0922(int a1);
template<class... A> int FUN_117d0922(A...);
int FUN_117d094f(int a1);
template<class... A> int FUN_117d094f(A...);
int FUN_117d098f(int a1);
template<class... A> int FUN_117d098f(A...);
int FUN_117d09cf(int a1);
template<class... A> int FUN_117d09cf(A...);
int FUN_117d0a0f(int a1);
template<class... A> int FUN_117d0a0f(A...);
int FUN_117d0a4f(int a1);
template<class... A> int FUN_117d0a4f(A...);
int FUN_117d0a9d(int a1);
template<class... A> int FUN_117d0a9d(A...);
int FUN_117d0ad2(int a1);
template<class... A> int FUN_117d0ad2(A...);
int FUN_117d0b02(int a1);
template<class... A> int FUN_117d0b02(A...);
int FUN_117d0b32(int a1);
template<class... A> int FUN_117d0b32(A...);
int FUN_117d0b6f(int a1);
template<class... A> int FUN_117d0b6f(A...);
int FUN_117d0bbf(int a1);
template<class... A> int FUN_117d0bbf(A...);
int FUN_117d0c02(int a1);
template<class... A> int FUN_117d0c02(A...);
int FUN_117d0c32(int a1);
template<class... A> int FUN_117d0c32(A...);
int FUN_117d0c62(int a1);
template<class... A> int FUN_117d0c62(A...);
int FUN_117d0ca7(int a1);
template<class... A> int FUN_117d0ca7(A...);
int FUN_117d0ce7(int a1);
template<class... A> int FUN_117d0ce7(A...);
int FUN_117d0d1f(int a1);
template<class... A> int FUN_117d0d1f(A...);
int FUN_117d0da4(int a1);
template<class... A> int FUN_117d0da4(A...);
int FUN_117d0dff(int a1);
template<class... A> int FUN_117d0dff(A...);
int FUN_117d0e3f(int a1);
template<class... A> int FUN_117d0e3f(A...);
int FUN_117d0ea7(int a1);
template<class... A> int FUN_117d0ea7(A...);
int FUN_117d0f0f(int a1);
template<class... A> int FUN_117d0f0f(A...);
int FUN_117d0f69(int a1);
template<class... A> int FUN_117d0f69(A...);
int FUN_117d101d(int a1);
template<class... A> int FUN_117d101d(A...);
int FUN_117d108f(int a1);
template<class... A> int FUN_117d108f(A...);
int FUN_117d10df(int a1);
template<class... A> int FUN_117d10df(A...);
int FUN_117d113c(int a1);
template<class... A> int FUN_117d113c(A...);
int FUN_117d1182(int a1);
template<class... A> int FUN_117d1182(A...);
int FUN_117d11c2(int a1);
template<class... A> int FUN_117d11c2(A...);
int FUN_117d120f(int a1);
template<class... A> int FUN_117d120f(A...);
int FUN_117d125f(int a1);
template<class... A> int FUN_117d125f(A...);
int FUN_117d12af(int a1);
template<class... A> int FUN_117d12af(A...);
int FUN_117d12cc(void);
template<class... A> int FUN_117d12cc(A...);
int FUN_117d12ff(int a1);
template<class... A> int FUN_117d12ff(A...);
int FUN_117d135d(int a1);
template<class... A> int FUN_117d135d(A...);
int FUN_117d13ad(int a1);
template<class... A> int FUN_117d13ad(A...);
int FUN_117d13e2(int a1);
template<class... A> int FUN_117d13e2(A...);
int FUN_117d1412(int a1);
template<class... A> int FUN_117d1412(A...);
int FUN_117d1467(int a1);
template<class... A> int FUN_117d1467(A...);
int FUN_117d14b9(int a1);
template<class... A> int FUN_117d14b9(A...);
int FUN_117d150d(int a1);
template<class... A> int FUN_117d150d(A...);
int FUN_117d155d(int a1);
template<class... A> int FUN_117d155d(A...);
int FUN_117d15af(int a1);
template<class... A> int FUN_117d15af(A...);
int FUN_117d15ff(int a1);
template<class... A> int FUN_117d15ff(A...);
int FUN_117d162a(int a1);
template<class... A> int FUN_117d162a(A...);
int FUN_117e96b0(void);
template<class... A> int FUN_117e96b0(A...);
int FUN_117e9740(void);
template<class... A> int FUN_117e9740(A...);
int FUN_117eb690(void);
template<class... A> int FUN_117eb690(A...);
int FUN_117edc30(void);
template<class... A> int FUN_117edc30(A...);
int FUN_117f06b0(void);
template<class... A> int FUN_117f06b0(A...);
int FUN_117f33d0(void);
template<class... A> int FUN_117f33d0(A...);
int FUN_117f6180(void);
template<class... A> int FUN_117f6180(A...);
int FUN_117f6eb0(void);
template<class... A> int FUN_117f6eb0(A...);
int FUN_117f7c00(void);
template<class... A> int FUN_117f7c00(A...);
int FUN_11806490(void);
template<class... A> int FUN_11806490(A...);
int FUN_1180bb90(void);
template<class... A> int FUN_1180bb90(A...);
int FUN_1182aca0(void);
template<class... A> int FUN_1182aca0(A...);
int FUN_1182b5d0(void);
template<class... A> int FUN_1182b5d0(A...);
int FUN_1182ded0(void);
template<class... A> int FUN_1182ded0(A...);
int FUN_1182edc0(void);
template<class... A> int FUN_1182edc0(A...);
int FUN_1182ee40(void);
template<class... A> int FUN_1182ee40(A...);
int FUN_11830ef0(void);
template<class... A> int FUN_11830ef0(A...);
int FUN_118314f0(void);
template<class... A> int FUN_118314f0(A...);
int FUN_11831500(void);
template<class... A> int FUN_11831500(A...);
int FUN_11831660(void);
template<class... A> int FUN_11831660(A...);
int FUN_11833fb0(void);
template<class... A> int FUN_11833fb0(A...);
int FUN_11834bd0(void);
template<class... A> int FUN_11834bd0(A...);
int FUN_11834be0(void);
template<class... A> int FUN_11834be0(A...);
int FUN_11834d50(void);
template<class... A> int FUN_11834d50(A...);
int FUN_11835470(void);
template<class... A> int FUN_11835470(A...);
int FUN_11835560(void);
template<class... A> int FUN_11835560(A...);
int FUN_118355a0(void);
template<class... A> int FUN_118355a0(A...);
int FUN_1183a740(void);
template<class... A> int FUN_1183a740(A...);
int FUN_1183b100(void);
template<class... A> int FUN_1183b100(A...);
int FUN_1183f350(void);
template<class... A> int FUN_1183f350(A...);
int FUN_11840f70(void);
template<class... A> int FUN_11840f70(A...);
int FUN_11840f7e(void);
template<class... A> int FUN_11840f7e(A...);
int FUN_11846210(void);
template<class... A> int FUN_11846210(A...);
int FUN_11846250(void);
template<class... A> int FUN_11846250(A...);
int FUN_1184e030(void);
template<class... A> int FUN_1184e030(A...);
int FUN_11859b90(void);
template<class... A> int FUN_11859b90(A...);
int FUN_1185b590(void);
template<class... A> int FUN_1185b590(A...);
int FUN_1185b5a0(void);
template<class... A> int FUN_1185b5a0(A...);
int FUN_1185b620(void);
template<class... A> int FUN_1185b620(A...);
int FUN_1185ef90(void);
template<class... A> int FUN_1185ef90(A...);
int FUN_11861320(void);
template<class... A> int FUN_11861320(A...);
int FUN_11861ea2(void);
template<class... A> int FUN_11861ea2(A...);
int FUN_11861ee0(void);
template<class... A> int FUN_11861ee0(A...);
int FUN_11861f20(void);
template<class... A> int FUN_11861f20(A...);
int FUN_11861f60(void);
template<class... A> int FUN_11861f60(A...);
int FUN_118620a0(void);
template<class... A> int FUN_118620a0(A...);
int FUN_11862550(void);
template<class... A> int FUN_11862550(A...);
int FUN_118625f0(void);
template<class... A> int FUN_118625f0(A...);
int FUN_11862600(void);
template<class... A> int FUN_11862600(A...);
int FUN_11862710(void);
template<class... A> int FUN_11862710(A...);
// Reference entry 117cd8c2; body size 27 bytes.
extern int DAT_1205d30c;
extern int DAT_1205d3e0;
extern int DAT_1205d468;
extern int DAT_1205d598;
extern int DAT_1205d6a8;
extern int DAT_1205d820;
extern int DAT_1205ddc4;
extern int DAT_1205ea8c;
extern int DAT_1205ec4c;
extern int DAT_1205eca4;
extern int DAT_1205f154;
extern int DAT_1205f218;
extern int DAT_1205f500;
extern int DAT_1205f704;
extern int DAT_1205f75c;
extern int DAT_1205f9a8;
extern int DAT_1205fbbc;
extern int DAT_120601f0;
extern int FUN_1148cde7(...);
extern int FuncInfo_1205d144;
extern int FuncInfo_1205d180;
extern int FuncInfo_1205d1bc;
extern int FuncInfo_1205d284;
extern int FuncInfo_1205d33c;
extern int FuncInfo_1205d410;
extern int FuncInfo_1205d498;
extern int FuncInfo_1205d5c8;
extern int FuncInfo_1205d650;
extern int FuncInfo_1205d6d8;
extern int FuncInfo_1205d708;
extern int FuncInfo_1205d738;
extern int FuncInfo_1205db04;
extern int FuncInfo_1205db44;
extern int FuncInfo_1205db70;
extern int FuncInfo_1205dbf8;
extern int FuncInfo_1205dc2c;
extern int FuncInfo_1205dc5c;
extern int FuncInfo_1205dc8c;
extern int FuncInfo_1205dd08;
extern int FuncInfo_1205dd44;
extern int FuncInfo_1205dd70;
extern int FuncInfo_1205ddfc;
extern int FuncInfo_1205de60;
extern int FuncInfo_1205de90;
extern int FuncInfo_1205dec0;
extern int FuncInfo_1205def0;
extern int FuncInfo_1205df20;
extern int FuncInfo_1205df50;
extern int FuncInfo_1205df80;
extern int FuncInfo_1205dfb0;
extern int FuncInfo_1205dfe0;
extern int FuncInfo_1205e018;
extern int FuncInfo_1205e04c;
extern int FuncInfo_1205e08c;
extern int FuncInfo_1205e16c;
extern int FuncInfo_1205e1a8;
extern int FuncInfo_1205e1dc;
extern int FuncInfo_1205e20c;
extern int FuncInfo_1205e23c;
extern int FuncInfo_1205e26c;
extern int FuncInfo_1205e29c;
extern int FuncInfo_1205e2fc;
extern int FuncInfo_1205e32c;
extern int FuncInfo_1205e35c;
extern int FuncInfo_1205e38c;
extern int FuncInfo_1205e3bc;
extern int FuncInfo_1205e3ec;
extern int FuncInfo_1205e520;
extern int FuncInfo_1205e560;
extern int FuncInfo_1205e5ac;
extern int FuncInfo_1205e5e0;
extern int FuncInfo_1205e610;
extern int FuncInfo_1205e640;
extern int FuncInfo_1205e670;
extern int FuncInfo_1205e700;
extern int FuncInfo_1205e778;
extern int FuncInfo_1205e7ac;
extern int FuncInfo_1205e7f4;
extern int FuncInfo_1205e86c;
extern int FuncInfo_1205e89c;
extern int FuncInfo_1205e8fc;
extern int FuncInfo_1205e95c;
extern int FuncInfo_1205e994;
extern int FuncInfo_1205e9d0;
extern int FuncInfo_1205ea04;
extern int FuncInfo_1205ea34;
extern int FuncInfo_1205eabc;
extern int FuncInfo_1205eaec;
extern int FuncInfo_1205ebb4;
extern int FuncInfo_1205ebe8;
extern int FuncInfo_1205ec20;
extern int FuncInfo_1205ec7c;
extern int FuncInfo_1205ecd4;
extern int FuncInfo_1205ed04;
extern int FuncInfo_1205ed34;
extern int FuncInfo_1205ed64;
extern int FuncInfo_1205ed94;
extern int FuncInfo_1205edc4;
extern int FuncInfo_1205edf4;
extern int FuncInfo_1205ee24;
extern int FuncInfo_1205ee54;
extern int FuncInfo_1205ee84;
extern int FuncInfo_1205eee4;
extern int FuncInfo_1205ef14;
extern int FuncInfo_1205efe8;
extern int FuncInfo_1205f018;
extern int FuncInfo_1205f0fc;
extern int FuncInfo_1205f12c;
extern int FuncInfo_1205f184;
extern int FuncInfo_1205f1bc;
extern int FuncInfo_1205f1f0;
extern int FuncInfo_1205f248;
extern int FuncInfo_1205f278;
extern int FuncInfo_1205f2a8;
extern int FuncInfo_1205f2d8;
extern int FuncInfo_1205f308;
extern int FuncInfo_1205f338;
extern int FuncInfo_1205f368;
extern int FuncInfo_1205f398;
extern int FuncInfo_1205f3c8;
extern int FuncInfo_1205f408;
extern int FuncInfo_1205f43c;
extern int FuncInfo_1205f46c;
extern int FuncInfo_1205f49c;
extern int FuncInfo_1205f530;
extern int FuncInfo_1205f560;
extern int FuncInfo_1205f590;
extern int FuncInfo_1205f734;
extern int FuncInfo_1205f7bc;
extern int FuncInfo_1205f7ec;
extern int FuncInfo_1205f8ac;
extern int FuncInfo_1205f91c;
extern int FuncInfo_1205f980;
extern int FuncInfo_1205f9d8;
extern int FuncInfo_1205fb3c;
extern int FuncInfo_1205fbec;
extern int FuncInfo_1205fc1c;
extern int FuncInfo_1205fc4c;
extern int FuncInfo_1205fc7c;
extern int FuncInfo_1205fcac;
extern int FuncInfo_1205fd0c;
extern int FuncInfo_1205fd6c;
extern int FuncInfo_1205fd9c;
extern int FuncInfo_1205fe40;
extern int FuncInfo_1205fe74;
extern int FuncInfo_1205fee8;
extern int FuncInfo_1205ff24;
extern int FuncInfo_1205ff60;
extern int FuncInfo_1205ff9c;
extern int FuncInfo_1205ffd8;
extern int FuncInfo_1206000c;
extern int FuncInfo_1206003c;
extern int FuncInfo_12060134;
extern int FuncInfo_120601c4;
extern int FuncInfo_12060220;
extern int FuncInfo_12060250;
extern int FuncInfo_12060288;
extern int FuncInfo_12060310;
extern int FuncInfo_1206034c;
extern int FuncInfo_120604bc;
extern int FuncInfo_1205d2b4;
extern int __stdcall FUN_100699e8(int a1,int a2,int a3,int a4);
#line 1 "ENTRY_117cd8c2"
__declspec(naked) int FUN_117cd8c2(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-8]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset DAT_1205d598
        jmp FUN_1148cde7
    }
}

// Reference entry 117cd8f2; body size 27 bytes.
#line 1 "ENTRY_117cd8f2"
__declspec(naked) int FUN_117cd8f2(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-8]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset DAT_1205d468
        jmp FUN_1148cde7
    }
}

// Reference entry 117cd922; body size 27 bytes.
#line 1 "ENTRY_117cd922"
__declspec(naked) int FUN_117cd922(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-8]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset DAT_1205d3e0
        jmp FUN_1148cde7
    }
}

// Reference entry 117cd952; body size 27 bytes.
#line 1 "ENTRY_117cd952"
__declspec(naked) int FUN_117cd952(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-8]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset DAT_1205d30c
        jmp FUN_1148cde7
    }
}

// Reference entry 117cd982; body size 27 bytes.
#line 1 "ENTRY_117cd982"
__declspec(naked) int FUN_117cd982(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-8]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset DAT_1205d6a8
        jmp FUN_1148cde7
    }
}

// Reference entry 117cd9b2; body size 27 bytes.
#line 1 "ENTRY_117cd9b2"
__declspec(naked) int FUN_117cd9b2(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-12]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205d284
        jmp FUN_1148cde7
    }
}

// Reference entry 117cd9e2; body size 27 bytes.
#line 1 "ENTRY_117cd9e2"
__declspec(naked) int FUN_117cd9e2(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-8]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205d650
        jmp FUN_1148cde7
    }
}

// Reference entry 117cda12; body size 27 bytes.
#line 1 "ENTRY_117cda12"
__declspec(naked) int FUN_117cda12(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-8]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205d5c8
        jmp FUN_1148cde7
    }
}

// Reference entry 117cda42; body size 27 bytes.
#line 1 "ENTRY_117cda42"
__declspec(naked) int FUN_117cda42(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-8]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205d498
        jmp FUN_1148cde7
    }
}

// Reference entry 117cda72; body size 27 bytes.
#line 1 "ENTRY_117cda72"
__declspec(naked) int FUN_117cda72(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-8]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205d410
        jmp FUN_1148cde7
    }
}

// Reference entry 117cdaa2; body size 27 bytes.
#line 1 "ENTRY_117cdaa2"
__declspec(naked) int FUN_117cdaa2(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-8]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205d33c
        jmp FUN_1148cde7
    }
}

// Reference entry 117cdad2; body size 27 bytes.
#line 1 "ENTRY_117cdad2"
__declspec(naked) int FUN_117cdad2(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-8]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205d6d8
        jmp FUN_1148cde7
    }
}

// Reference entry 117cdb17; body size 27 bytes.
#line 1 "ENTRY_117cdb17"
__declspec(naked) int FUN_117cdb17(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-56]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205d144
        jmp FUN_1148cde7
    }
}

// Reference entry 117cdb4f; body size 7 bytes.
#line 1 "ENTRY_117cdb4f"

__declspec(naked) void FUN_117cdb4f(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x42 __asm _emit 0x0c
}





// Reference entry 117cdb59; body size 17 bytes.
#line 1 "ENTRY_117cdb59"
__declspec(naked) int FUN_117cdb59(void) {
    __asm {
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205d2b4
        jmp FUN_1148cde7
    }
}

// Reference entry 117cdb97; body size 27 bytes.
#line 1 "ENTRY_117cdb97"
__declspec(naked) int FUN_117cdb97(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-84]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205d1bc
        jmp FUN_1148cde7
    }
}

// Reference entry 117cdbd7; body size 27 bytes.
#line 1 "ENTRY_117cdbd7"
__declspec(naked) int FUN_117cdbd7(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-32]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205d180
        jmp FUN_1148cde7
    }
}

// Reference entry 117cdc12; body size 27 bytes.
#line 1 "ENTRY_117cdc12"
__declspec(naked) int FUN_117cdc12(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-44]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205d738
        jmp FUN_1148cde7
    }
}

// Reference entry 117cdc52; body size 27 bytes.
#line 1 "ENTRY_117cdc52"
__declspec(naked) int FUN_117cdc52(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-16]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205d708
        jmp FUN_1148cde7
    }
}

// Reference entry 117cdc8f; body size 40 bytes.
#line 1 "ENTRY_117cdc8f"

__declspec(naked) void FUN_117cdc8f(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x42 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0xf0 __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm _emit 0x8b __asm _emit 0x8a __asm _emit 0x30 __asm _emit 0x05 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_1205d768
  __asm jmp LAB_1148cde7
}





// Reference entry 117cdcdf; body size 40 bytes.
#line 1 "ENTRY_117cdcdf"

__declspec(naked) void FUN_117cdcdf(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x42 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0xe0 __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm _emit 0x8b __asm _emit 0x8a __asm _emit 0x30 __asm _emit 0x05 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_1205d7c8
  __asm jmp LAB_1148cde7
}





// Reference entry 117cdd2f; body size 40 bytes.
#line 1 "ENTRY_117cdd2f"

__declspec(naked) void FUN_117cdd2f(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x42 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0xe0 __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm _emit 0x8b __asm _emit 0x8a __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_1205d7f8
  __asm jmp LAB_1148cde7
}





// Reference entry 117cdd7f; body size 40 bytes.
#line 1 "ENTRY_117cdd7f"

__declspec(naked) void FUN_117cdd7f(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x42 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0xec __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm _emit 0x8b __asm _emit 0x8a __asm _emit 0xe0 __asm _emit 0x02 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_1205d798
  __asm jmp LAB_1148cde7
}





// Reference entry 117cddc2; body size 27 bytes.
#line 1 "ENTRY_117cddc2"
__declspec(naked) int FUN_117cddc2(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-16]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset DAT_1205d820
        jmp FUN_1148cde7
    }
}

// Reference entry 117cde02; body size 40 bytes.
#line 1 "ENTRY_117cde02"

__declspec(naked) void FUN_117cde02(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x42 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x8a __asm _emit 0x70 __asm _emit 0xf3 __asm _emit 0xff __asm _emit 0xff __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0xfc __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_1205d8b0
  __asm jmp LAB_1148cde7
}





// Reference entry 117cde4f; body size 40 bytes.
#line 1 "ENTRY_117cde4f"

__declspec(naked) void FUN_117cde4f(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x42 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0xc4 __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm _emit 0x8b __asm _emit 0x8a __asm _emit 0x88 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_1205d880
  __asm jmp LAB_1148cde7
}





// Reference entry 117cdeb8; body size 40 bytes.
#line 1 "ENTRY_117cdeb8"

__declspec(naked) void FUN_117cdeb8(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x42 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x8a __asm _emit 0x8c __asm _emit 0xe6 __asm _emit 0xff __asm _emit 0xff __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0xfc __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_1205d8f0
  __asm jmp LAB_1148cde7
}





// Reference entry 117cdf12; body size 40 bytes.
#line 1 "ENTRY_117cdf12"

__declspec(naked) void FUN_117cdf12(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x42 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x8a __asm _emit 0xec __asm _emit 0xf6 __asm _emit 0xff __asm _emit 0xff __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0xfc __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_1205d850
  __asm jmp LAB_1148cde7
}





// Reference entry 117cdf5f; body size 40 bytes.
#line 1 "ENTRY_117cdf5f"

__declspec(naked) void FUN_117cdf5f(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x42 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0xc8 __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm _emit 0x8b __asm _emit 0x8a __asm _emit 0x44 __asm _emit 0x09 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_1205dad4
  __asm jmp LAB_1148cde7
}





// Reference entry 117cdfaf; body size 40 bytes.
#line 1 "ENTRY_117cdfaf"

__declspec(naked) void FUN_117cdfaf(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x42 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0xc4 __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm _emit 0x8b __asm _emit 0x8a __asm _emit 0x44 __asm _emit 0x09 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_1205d954
  __asm jmp LAB_1148cde7
}





// Reference entry 117cdfff; body size 40 bytes.
#line 1 "ENTRY_117cdfff"

__declspec(naked) void FUN_117cdfff(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x42 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0xc8 __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm _emit 0x8b __asm _emit 0x8a __asm _emit 0x44 __asm _emit 0x09 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_1205d984
  __asm jmp LAB_1148cde7
}





// Reference entry 117ce04f; body size 40 bytes.
#line 1 "ENTRY_117ce04f"

__declspec(naked) void FUN_117ce04f(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x42 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0xc0 __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm _emit 0x8b __asm _emit 0x8a __asm _emit 0x44 __asm _emit 0x09 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_1205d9b4
  __asm jmp LAB_1148cde7
}





// Reference entry 117ce09f; body size 40 bytes.
#line 1 "ENTRY_117ce09f"

__declspec(naked) void FUN_117ce09f(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x42 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0xb8 __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm _emit 0x8b __asm _emit 0x8a __asm _emit 0x44 __asm _emit 0x09 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_1205da14
  __asm jmp LAB_1148cde7
}





// Reference entry 117ce0ef; body size 43 bytes.
#line 1 "ENTRY_117ce0ef"

__declspec(naked) void FUN_117ce0ef(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x42 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x8a __asm _emit 0x7c __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm _emit 0x8b __asm _emit 0x8a __asm _emit 0x90 __asm _emit 0x09 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_1205d924
  __asm jmp LAB_1148cde7
}





// Reference entry 117ce13f; body size 7 bytes.
#line 1 "ENTRY_117ce13f"

__declspec(naked) void FUN_117ce13f(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x42 __asm _emit 0x0c
}





// Reference entry 117ce18f; body size 40 bytes.
#line 1 "ENTRY_117ce18f"

__declspec(naked) void FUN_117ce18f(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x42 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0xb8 __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm _emit 0x8b __asm _emit 0x8a __asm _emit 0x44 __asm _emit 0x09 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_1205da74
  __asm jmp LAB_1148cde7
}





// Reference entry 117ce1df; body size 40 bytes.
#line 1 "ENTRY_117ce1df"

__declspec(naked) void FUN_117ce1df(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x42 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0xc4 __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm _emit 0x8b __asm _emit 0x8a __asm _emit 0x44 __asm _emit 0x09 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_1205daa4
  __asm jmp LAB_1148cde7
}





// Reference entry 117ce22f; body size 40 bytes.
#line 1 "ENTRY_117ce22f"

__declspec(naked) void FUN_117ce22f(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x42 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0xb4 __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm _emit 0x8b __asm _emit 0x8a __asm _emit 0x44 __asm _emit 0x09 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_1205d9e4
  __asm jmp LAB_1148cde7
}





// Reference entry 117ce27f; body size 27 bytes.
#line 1 "ENTRY_117ce27f"
__declspec(naked) int FUN_117ce27f(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-20]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205db04
        jmp FUN_1148cde7
    }
}

// Reference entry 117ce30c; body size 27 bytes.
#line 1 "ENTRY_117ce30c"
__declspec(naked) int FUN_117ce30c(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-20]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205db70
        jmp FUN_1148cde7
    }
}

// Reference entry 117ce375; body size 27 bytes.
#line 1 "ENTRY_117ce375"
__declspec(naked) int FUN_117ce375(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-16]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205db44
        jmp FUN_1148cde7
    }
}

// Reference entry 117ce3be; body size 27 bytes.
#line 1 "ENTRY_117ce3be"
__declspec(naked) int FUN_117ce3be(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-36]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205dbf8
        jmp FUN_1148cde7
    }
}

// Reference entry 117ce3f2; body size 27 bytes.
#line 1 "ENTRY_117ce3f2"
__declspec(naked) int FUN_117ce3f2(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-4]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205dc2c
        jmp FUN_1148cde7
    }
}

// Reference entry 117ce422; body size 27 bytes.
#line 1 "ENTRY_117ce422"
__declspec(naked) int FUN_117ce422(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-8]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205dc8c
        jmp FUN_1148cde7
    }
}

// Reference entry 117ce452; body size 27 bytes.
#line 1 "ENTRY_117ce452"
__declspec(naked) int FUN_117ce452(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-8]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205dc5c
        jmp FUN_1148cde7
    }
}

// Reference entry 117ce48f; body size 17 bytes.
#line 1 "ENTRY_117ce48f"

__declspec(naked) void FUN_117ce48f(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x42 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0xe8 __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
}





// Reference entry 117ce4a2; body size 7 bytes.
#line 1 "ENTRY_117ce4a2"

__declspec(naked) void FUN_117ce4a2(void)

{
  __asm _emit 0xdc __asm _emit 0x05 __asm _emit 0x12 __asm _emit 0xe9 __asm _emit 0x3d __asm _emit 0xe9 __asm _emit 0xcb
}





// Reference entry 117ce4c2; body size 27 bytes.
#line 1 "ENTRY_117ce4c2"
__declspec(naked) int FUN_117ce4c2(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-8]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205dd08
        jmp FUN_1148cde7
    }
}

// Reference entry 117ce4ff; body size 27 bytes.
#line 1 "ENTRY_117ce4ff"
__declspec(naked) int FUN_117ce4ff(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-32]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205dd44
        jmp FUN_1148cde7
    }
}

// Reference entry 117ce53f; body size 27 bytes.
#line 1 "ENTRY_117ce53f"
__declspec(naked) int FUN_117ce53f(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-12]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205de90
        jmp FUN_1148cde7
    }
}

// Reference entry 117ce5b4; body size 27 bytes.
#line 1 "ENTRY_117ce5b4"
__declspec(naked) int FUN_117ce5b4(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-20]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205dd70
        jmp FUN_1148cde7
    }
}

// Reference entry 117ce5ff; body size 27 bytes.
#line 1 "ENTRY_117ce5ff"
__declspec(naked) int FUN_117ce5ff(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-12]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205df80
        jmp FUN_1148cde7
    }
}

// Reference entry 117ce647; body size 27 bytes.
#line 1 "ENTRY_117ce647"
__declspec(naked) int FUN_117ce647(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-12]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205e018
        jmp FUN_1148cde7
    }
}

// Reference entry 117ce68f; body size 27 bytes.
#line 1 "ENTRY_117ce68f"
__declspec(naked) int FUN_117ce68f(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-20]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205e08c
        jmp FUN_1148cde7
    }
}

// Reference entry 117ce6c2; body size 27 bytes.
#line 1 "ENTRY_117ce6c2"
__declspec(naked) int FUN_117ce6c2(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-8]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205df20
        jmp FUN_1148cde7
    }
}

// Reference entry 117ce6f2; body size 27 bytes.
#line 1 "ENTRY_117ce6f2"
__declspec(naked) int FUN_117ce6f2(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-8]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset DAT_1205ddc4
        jmp FUN_1148cde7
    }
}

// Reference entry 117ce722; body size 27 bytes.
#line 1 "ENTRY_117ce722"
__declspec(naked) int FUN_117ce722(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-8]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205dfb0
        jmp FUN_1148cde7
    }
}

// Reference entry 117ce752; body size 27 bytes.
#line 1 "ENTRY_117ce752"
__declspec(naked) int FUN_117ce752(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-8]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205e04c
        jmp FUN_1148cde7
    }
}

// Reference entry 117ce782; body size 27 bytes.
#line 1 "ENTRY_117ce782"
__declspec(naked) int FUN_117ce782(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-8]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205dec0
        jmp FUN_1148cde7
    }
}

// Reference entry 117ce7b2; body size 27 bytes.
#line 1 "ENTRY_117ce7b2"
__declspec(naked) int FUN_117ce7b2(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-8]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205df50
        jmp FUN_1148cde7
    }
}

// Reference entry 117ce7e2; body size 27 bytes.
#line 1 "ENTRY_117ce7e2"
__declspec(naked) int FUN_117ce7e2(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-8]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205de60
        jmp FUN_1148cde7
    }
}

// Reference entry 117ce812; body size 27 bytes.
#line 1 "ENTRY_117ce812"
__declspec(naked) int FUN_117ce812(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-8]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205dfe0
        jmp FUN_1148cde7
    }
}

// Reference entry 117ce842; body size 27 bytes.
#line 1 "ENTRY_117ce842"
__declspec(naked) int FUN_117ce842(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-8]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205def0
        jmp FUN_1148cde7
    }
}

// Reference entry 117ce882; body size 40 bytes.
#line 1 "ENTRY_117ce882"

__declspec(naked) void FUN_117ce882(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x42 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x8a __asm _emit 0x4c __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0xfc __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_1205de30
  __asm jmp LAB_1148cde7
}





// Reference entry 117ce8d2; body size 40 bytes.
#line 1 "ENTRY_117ce8d2"

__declspec(naked) void FUN_117ce8d2(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x42 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x8a __asm _emit 0x30 __asm _emit 0x7a __asm _emit 0xff __asm _emit 0xff __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0xfc __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_1205e0f0
  __asm jmp LAB_1148cde7
}





// Reference entry 117ce927; body size 27 bytes.
#line 1 "ENTRY_117ce927"
__declspec(naked) int FUN_117ce927(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-12]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205ddfc
        jmp FUN_1148cde7
    }
}

// Reference entry 117ce962; body size 40 bytes.
#line 1 "ENTRY_117ce962"

__declspec(naked) void FUN_117ce962(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x42 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x8a __asm _emit 0x30 __asm _emit 0x7a __asm _emit 0xff __asm _emit 0xff __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0xfc __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_1205e0c0
  __asm jmp LAB_1148cde7
}





// Reference entry 117ce9af; body size 27 bytes.
#line 1 "ENTRY_117ce9af"
__declspec(naked) int FUN_117ce9af(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-12]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205e3ec
        jmp FUN_1148cde7
    }
}

// Reference entry 117ce9ef; body size 27 bytes.
#line 1 "ENTRY_117ce9ef"
__declspec(naked) int FUN_117ce9ef(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-12]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205e3bc
        jmp FUN_1148cde7
    }
}

// Reference entry 117cea2f; body size 27 bytes.
#line 1 "ENTRY_117cea2f"
__declspec(naked) int FUN_117cea2f(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-36]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205e35c
        jmp FUN_1148cde7
    }
}

// Reference entry 117cea6f; body size 27 bytes.
#line 1 "ENTRY_117cea6f"
__declspec(naked) int FUN_117cea6f(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-36]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205e32c
        jmp FUN_1148cde7
    }
}

// Reference entry 117ceaaf; body size 27 bytes.
#line 1 "ENTRY_117ceaaf"
__declspec(naked) int FUN_117ceaaf(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-60]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205e2fc
        jmp FUN_1148cde7
    }
}

// Reference entry 117ceaef; body size 27 bytes.
#line 1 "ENTRY_117ceaef"
__declspec(naked) int FUN_117ceaef(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-12]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205e38c
        jmp FUN_1148cde7
    }
}

// Reference entry 117ceb45; body size 7 bytes.
#line 1 "ENTRY_117ceb45"

__declspec(naked) void FUN_117ceb45(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x42 __asm _emit 0x0c
}





// Reference entry 117ceb4f; body size 27 bytes.
#line 1 "ENTRY_117ceb4f"

__declspec(naked) int FUN_117ceb4f(void)

{
  __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0xfc __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_1205e130
  __asm jmp LAB_1148cde7
}





// Reference entry 117ceb9d; body size 27 bytes.
#line 1 "ENTRY_117ceb9d"
__declspec(naked) int FUN_117ceb9d(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-20]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205e16c
        jmp FUN_1148cde7
    }
}

// Reference entry 117cebdf; body size 27 bytes.
#line 1 "ENTRY_117cebdf"
__declspec(naked) int FUN_117cebdf(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-36]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205e26c
        jmp FUN_1148cde7
    }
}

// Reference entry 117cec27; body size 27 bytes.
#line 1 "ENTRY_117cec27"
__declspec(naked) int FUN_117cec27(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-80]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205e1a8
        jmp FUN_1148cde7
    }
}

// Reference entry 117cec5f; body size 17 bytes.
#line 1 "ENTRY_117cec5f"

__declspec(naked) void FUN_117cec5f(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x42 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0xbc __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
}





// Reference entry 117cec9f; body size 27 bytes.
#line 1 "ENTRY_117cec9f"
__declspec(naked) int FUN_117cec9f(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-24]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205e20c
        jmp FUN_1148cde7
    }
}

// Reference entry 117cecdf; body size 27 bytes.
#line 1 "ENTRY_117cecdf"
__declspec(naked) int FUN_117cecdf(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-28]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205e23c
        jmp FUN_1148cde7
    }
}

// Reference entry 117ced1f; body size 27 bytes.
#line 1 "ENTRY_117ced1f"
__declspec(naked) int FUN_117ced1f(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-24]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205e1dc
        jmp FUN_1148cde7
    }
}

// Reference entry 117ced5f; body size 30 bytes.
#line 1 "ENTRY_117ced5f"
__declspec(naked) int FUN_117ced5f(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-160]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205e29c
        jmp FUN_1148cde7
    }
}

// Reference entry 117ceda2; body size 40 bytes.
#line 1 "ENTRY_117ceda2"

__declspec(naked) void FUN_117ceda2(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x42 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x8a __asm _emit 0xd0 __asm _emit 0xef __asm _emit 0xff __asm _emit 0xff __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0xfc __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_1205e41c
  __asm jmp LAB_1148cde7
}





// Reference entry 117cedf6; body size 27 bytes.
#line 1 "ENTRY_117cedf6"
__declspec(naked) int FUN_117cedf6(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-12]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205e520
        jmp FUN_1148cde7
    }
}

// Reference entry 117cee37; body size 40 bytes.
#line 1 "ENTRY_117cee37"

__declspec(naked) void FUN_117cee37(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x42 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0xd8 __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm _emit 0x8b __asm _emit 0x8a __asm _emit 0x94 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_1205e4ec
  __asm jmp LAB_1148cde7
}





// Reference entry 117cee9e; body size 37 bytes.
#line 1 "ENTRY_117cee9e"

__declspec(naked) void FUN_117cee9e(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x42 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0x9c __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0xfc __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_1205e464
  __asm jmp LAB_1148cde7
}





// Reference entry 117ceef7; body size 40 bytes.
#line 1 "ENTRY_117ceef7"

__declspec(naked) void FUN_117ceef7(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x42 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0xd4 __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm _emit 0x8b __asm _emit 0x8a __asm _emit 0x80 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_1205e4a8
  __asm jmp LAB_1148cde7
}





// Reference entry 117cef63; body size 27 bytes.
#line 1 "ENTRY_117cef63"
__declspec(naked) int FUN_117cef63(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-20]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205e5ac
        jmp FUN_1148cde7
    }
}

// Reference entry 117cefc5; body size 27 bytes.
#line 1 "ENTRY_117cefc5"
__declspec(naked) int FUN_117cefc5(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-16]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205e560
        jmp FUN_1148cde7
    }
}

// Reference entry 117cefff; body size 27 bytes.
#line 1 "ENTRY_117cefff"
__declspec(naked) int FUN_117cefff(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-24]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205e670
        jmp FUN_1148cde7
    }
}

// Reference entry 117cf03f; body size 27 bytes.
#line 1 "ENTRY_117cf03f"
__declspec(naked) int FUN_117cf03f(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-24]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205e640
        jmp FUN_1148cde7
    }
}

// Reference entry 117cf07f; body size 40 bytes.
#line 1 "ENTRY_117cf07f"

__declspec(naked) void FUN_117cf07f(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x42 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0xd0 __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm _emit 0x8b __asm _emit 0x8a __asm _emit 0xc4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_1205e6a0
  __asm jmp LAB_1148cde7
}





// Reference entry 117cf0cf; body size 40 bytes.
#line 1 "ENTRY_117cf0cf"

__declspec(naked) void FUN_117cf0cf(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x42 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0xdc __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm _emit 0x8b __asm _emit 0x8a __asm _emit 0xb4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_1205e6d0
  __asm jmp LAB_1148cde7
}





// Reference entry 117cf11f; body size 27 bytes.
#line 1 "ENTRY_117cf11f"
__declspec(naked) int FUN_117cf11f(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-24]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205e5e0
        jmp FUN_1148cde7
    }
}

// Reference entry 117cf15f; body size 27 bytes.
#line 1 "ENTRY_117cf15f"
__declspec(naked) int FUN_117cf15f(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-24]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205e610
        jmp FUN_1148cde7
    }
}

// Reference entry 117cf19f; body size 27 bytes.
#line 1 "ENTRY_117cf19f"
__declspec(naked) int FUN_117cf19f(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-16]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205e700
        jmp FUN_1148cde7
    }
}

// Reference entry 117cf1df; body size 40 bytes.
#line 1 "ENTRY_117cf1df"

__declspec(naked) void FUN_117cf1df(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x42 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0xe4 __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm _emit 0x8b __asm _emit 0x8a __asm _emit 0x7c __asm _emit 0x95 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_1205e730
  __asm jmp LAB_1148cde7
}





// Reference entry 117cf245; body size 27 bytes.
#line 1 "ENTRY_117cf245"
__declspec(naked) int FUN_117cf245(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-20]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205e778
        jmp FUN_1148cde7
    }
}

// Reference entry 117cf287; body size 27 bytes.
#line 1 "ENTRY_117cf287"
__declspec(naked) int FUN_117cf287(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-36]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205e7f4
        jmp FUN_1148cde7
    }
}

// Reference entry 117cf2b2; body size 40 bytes.
#line 1 "ENTRY_117cf2b2"

__declspec(naked) void FUN_117cf2b2(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x42 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0xe8 __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm _emit 0x8b __asm _emit 0x8a __asm _emit 0x10 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_1205e838
  __asm jmp LAB_1148cde7
}





// Reference entry 117cf2f2; body size 27 bytes.
#line 1 "ENTRY_117cf2f2"
__declspec(naked) int FUN_117cf2f2(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-16]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205e7ac
        jmp FUN_1148cde7
    }
}

// Reference entry 117cf332; body size 40 bytes.
#line 1 "ENTRY_117cf332"

__declspec(naked) void FUN_117cf332(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x42 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x8a __asm _emit 0xc0 __asm _emit 0xf5 __asm _emit 0xff __asm _emit 0xff __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0xfc __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_1205e92c
  __asm jmp LAB_1148cde7
}





// Reference entry 117cf37f; body size 27 bytes.
#line 1 "ENTRY_117cf37f"
__declspec(naked) int FUN_117cf37f(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-36]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205e89c
        jmp FUN_1148cde7
    }
}

// Reference entry 117cf3bf; body size 27 bytes.
#line 1 "ENTRY_117cf3bf"
__declspec(naked) int FUN_117cf3bf(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-36]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205e86c
        jmp FUN_1148cde7
    }
}

// Reference entry 117cf3ff; body size 17 bytes.
#line 1 "ENTRY_117cf3ff"

__declspec(naked) void FUN_117cf3ff(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x42 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0xd8 __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
}





// Reference entry 117cf43f; body size 27 bytes.
#line 1 "ENTRY_117cf43f"
__declspec(naked) int FUN_117cf43f(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-40]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205e8fc
        jmp FUN_1148cde7
    }
}

// Reference entry 117cf483; body size 27 bytes.
#line 1 "ENTRY_117cf483"
__declspec(naked) int FUN_117cf483(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-8]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205e95c
        jmp FUN_1148cde7
    }
}

// Reference entry 117cf4c7; body size 27 bytes.
#line 1 "ENTRY_117cf4c7"
__declspec(naked) int FUN_117cf4c7(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-40]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205e994
        jmp FUN_1148cde7
    }
}

// Reference entry 117cf507; body size 27 bytes.
#line 1 "ENTRY_117cf507"
__declspec(naked) int FUN_117cf507(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-36]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205e9d0
        jmp FUN_1148cde7
    }
}

// Reference entry 117cf546; body size 27 bytes.
#line 1 "ENTRY_117cf546"
__declspec(naked) int FUN_117cf546(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-24]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205ea04
        jmp FUN_1148cde7
    }
}

// Reference entry 117cf586; body size 27 bytes.
#line 1 "ENTRY_117cf586"
__declspec(naked) int FUN_117cf586(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-16]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205ea34
        jmp FUN_1148cde7
    }
}

// Reference entry 117cf5b2; body size 27 bytes.
#line 1 "ENTRY_117cf5b2"
__declspec(naked) int FUN_117cf5b2(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-4]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset DAT_1205ea8c
        jmp FUN_1148cde7
    }
}

// Reference entry 117cf5ef; body size 27 bytes.
#line 1 "ENTRY_117cf5ef"
__declspec(naked) int FUN_117cf5ef(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-40]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205eabc
        jmp FUN_1148cde7
    }
}

// Reference entry 117cf62f; body size 27 bytes.
#line 1 "ENTRY_117cf62f"
__declspec(naked) int FUN_117cf62f(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-36]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205eaec
        jmp FUN_1148cde7
    }
}

// Reference entry 117cf66f; body size 40 bytes.
#line 1 "ENTRY_117cf66f"

__declspec(naked) void FUN_117cf66f(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x42 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0xe8 __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm _emit 0x8b __asm _emit 0x8a __asm _emit 0x50 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_1205eb1c
  __asm jmp LAB_1148cde7
}





// Reference entry 117cf6c2; body size 40 bytes.
#line 1 "ENTRY_117cf6c2"

__declspec(naked) void FUN_117cf6c2(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x42 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x8a __asm _emit 0xac __asm _emit 0xfe __asm _emit 0xff __asm _emit 0xff __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0xfc __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_1205ea64
  __asm jmp LAB_1148cde7
}





// Reference entry 117cf70f; body size 37 bytes.
#line 1 "ENTRY_117cf70f"

__declspec(naked) void FUN_117cf70f(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x42 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0x9c __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0xfc __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_1205eb4c
  __asm jmp LAB_1148cde7
}





// Reference entry 117cf75f; body size 37 bytes.
#line 1 "ENTRY_117cf75f"

__declspec(naked) void FUN_117cf75f(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x42 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0x80 __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0xfc __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_1205eb7c
  __asm jmp LAB_1148cde7
}





// Reference entry 117cf7ca; body size 27 bytes.
#line 1 "ENTRY_117cf7ca"
__declspec(naked) int FUN_117cf7ca(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-56]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205ebb4
        jmp FUN_1148cde7
    }
}

// Reference entry 117cf82a; body size 27 bytes.
#line 1 "ENTRY_117cf82a"
__declspec(naked) int FUN_117cf82a(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-56]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205ec20
        jmp FUN_1148cde7
    }
}

// Reference entry 117cf862; body size 27 bytes.
#line 1 "ENTRY_117cf862"
__declspec(naked) int FUN_117cf862(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-8]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset DAT_1205ec4c
        jmp FUN_1148cde7
    }
}

// Reference entry 117cf892; body size 27 bytes.
#line 1 "ENTRY_117cf892"
__declspec(naked) int FUN_117cf892(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-8]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205ebe8
        jmp FUN_1148cde7
    }
}

// Reference entry 117cf8c2; body size 27 bytes.
#line 1 "ENTRY_117cf8c2"
__declspec(naked) int FUN_117cf8c2(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-8]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205ec7c
        jmp FUN_1148cde7
    }
}

// Reference entry 117cf8ff; body size 27 bytes.
#line 1 "ENTRY_117cf8ff"
__declspec(naked) int FUN_117cf8ff(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-12]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205ed94
        jmp FUN_1148cde7
    }
}

// Reference entry 117cf93f; body size 27 bytes.
#line 1 "ENTRY_117cf93f"
__declspec(naked) int FUN_117cf93f(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-12]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205ed04
        jmp FUN_1148cde7
    }
}

// Reference entry 117cf97f; body size 27 bytes.
#line 1 "ENTRY_117cf97f"
__declspec(naked) int FUN_117cf97f(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-12]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205ee24
        jmp FUN_1148cde7
    }
}

// Reference entry 117cf9b2; body size 27 bytes.
#line 1 "ENTRY_117cf9b2"
__declspec(naked) int FUN_117cf9b2(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-8]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205edc4
        jmp FUN_1148cde7
    }
}

// Reference entry 117cf9e2; body size 27 bytes.
#line 1 "ENTRY_117cf9e2"
__declspec(naked) int FUN_117cf9e2(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-8]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205ed34
        jmp FUN_1148cde7
    }
}

// Reference entry 117cfa12; body size 27 bytes.
#line 1 "ENTRY_117cfa12"
__declspec(naked) int FUN_117cfa12(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-8]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205ee54
        jmp FUN_1148cde7
    }
}

// Reference entry 117cfa42; body size 27 bytes.
#line 1 "ENTRY_117cfa42"
__declspec(naked) int FUN_117cfa42(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-4]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset DAT_1205eca4
        jmp FUN_1148cde7
    }
}

// Reference entry 117cfa72; body size 27 bytes.
#line 1 "ENTRY_117cfa72"
__declspec(naked) int FUN_117cfa72(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-8]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205edf4
        jmp FUN_1148cde7
    }
}

// Reference entry 117cfaa2; body size 27 bytes.
#line 1 "ENTRY_117cfaa2"
__declspec(naked) int FUN_117cfaa2(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-8]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205ed64
        jmp FUN_1148cde7
    }
}

// Reference entry 117cfad2; body size 27 bytes.
#line 1 "ENTRY_117cfad2"
__declspec(naked) int FUN_117cfad2(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-8]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205ee84
        jmp FUN_1148cde7
    }
}

// Reference entry 117cfb02; body size 27 bytes.
#line 1 "ENTRY_117cfb02"
__declspec(naked) int FUN_117cfb02(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-8]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205ecd4
        jmp FUN_1148cde7
    }
}

// Reference entry 117cfb3f; body size 37 bytes.
#line 1 "ENTRY_117cfb3f"

__declspec(naked) void FUN_117cfb3f(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x42 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0xbc __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0xfc __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_1205eeb4
  __asm jmp LAB_1148cde7
}





// Reference entry 117cfb8f; body size 27 bytes.
#line 1 "ENTRY_117cfb8f"
__declspec(naked) int FUN_117cfb8f(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-20]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205eee4
        jmp FUN_1148cde7
    }
}

// Reference entry 117cfbcf; body size 27 bytes.
#line 1 "ENTRY_117cfbcf"
__declspec(naked) int FUN_117cfbcf(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-20]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205ef14
        jmp FUN_1148cde7
    }
}

// Reference entry 117cfc48; body size 43 bytes.
#line 1 "ENTRY_117cfc48"

__declspec(naked) void FUN_117cfc48(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x42 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x8a __asm _emit 0x48 __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm _emit 0x8b __asm _emit 0x8a __asm _emit 0x3c __asm _emit 0x17 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_1205ef3c
  __asm jmp LAB_1148cde7
}





// Reference entry 117cfcaa; body size 40 bytes.
#line 1 "ENTRY_117cfcaa"

__declspec(naked) void FUN_117cfcaa(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x42 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x8a __asm _emit 0xf4 __asm _emit 0xfe __asm _emit 0xff __asm _emit 0xff __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0xfc __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_1205efb4
  __asm jmp LAB_1148cde7
}





// Reference entry 117cfcff; body size 27 bytes.
#line 1 "ENTRY_117cfcff"
__declspec(naked) int FUN_117cfcff(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-12]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205f3c8
        jmp FUN_1148cde7
    }
}

// Reference entry 117cfd3f; body size 27 bytes.
#line 1 "ENTRY_117cfd3f"
__declspec(naked) int FUN_117cfd3f(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-12]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205f398
        jmp FUN_1148cde7
    }
}

// Reference entry 117cfd7f; body size 27 bytes.
#line 1 "ENTRY_117cfd7f"
__declspec(naked) int FUN_117cfd7f(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-36]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205f308
        jmp FUN_1148cde7
    }
}

// Reference entry 117cfdbf; body size 27 bytes.
#line 1 "ENTRY_117cfdbf"
__declspec(naked) int FUN_117cfdbf(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-36]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205f338
        jmp FUN_1148cde7
    }
}

// Reference entry 117cfdff; body size 27 bytes.
#line 1 "ENTRY_117cfdff"
__declspec(naked) int FUN_117cfdff(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-12]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205f368
        jmp FUN_1148cde7
    }
}

// Reference entry 117cfe32; body size 27 bytes.
#line 1 "ENTRY_117cfe32"
__declspec(naked) int FUN_117cfe32(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-8]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset DAT_1205f218
        jmp FUN_1148cde7
    }
}

// Reference entry 117cfe62; body size 27 bytes.
#line 1 "ENTRY_117cfe62"
__declspec(naked) int FUN_117cfe62(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-16]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset DAT_1205f154
        jmp FUN_1148cde7
    }
}

// Reference entry 117cfe9f; body size 27 bytes.
#line 1 "ENTRY_117cfe9f"
__declspec(naked) int FUN_117cfe9f(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-36]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205f2a8
        jmp FUN_1148cde7
    }
}

// Reference entry 117cfedf; body size 27 bytes.
#line 1 "ENTRY_117cfedf"
__declspec(naked) int FUN_117cfedf(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-36]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205f2d8
        jmp FUN_1148cde7
    }
}

// Reference entry 117cff12; body size 27 bytes.
#line 1 "ENTRY_117cff12"
__declspec(naked) int FUN_117cff12(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-8]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205f248
        jmp FUN_1148cde7
    }
}

// Reference entry 117cff42; body size 27 bytes.
#line 1 "ENTRY_117cff42"
__declspec(naked) int FUN_117cff42(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-16]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205f184
        jmp FUN_1148cde7
    }
}

// Reference entry 117cff86; body size 27 bytes.
#line 1 "ENTRY_117cff86"
__declspec(naked) int FUN_117cff86(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-12]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205f1bc
        jmp FUN_1148cde7
    }
}

// Reference entry 117cffb2; body size 27 bytes.
#line 1 "ENTRY_117cffb2"
__declspec(naked) int FUN_117cffb2(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-20]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205f018
        jmp FUN_1148cde7
    }
}

// Reference entry 117cffe2; body size 27 bytes.
#line 1 "ENTRY_117cffe2"
__declspec(naked) int FUN_117cffe2(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-20]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205f278
        jmp FUN_1148cde7
    }
}

// Reference entry 117d0012; body size 27 bytes.
#line 1 "ENTRY_117d0012"
__declspec(naked) int FUN_117d0012(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-4]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205f0fc
        jmp FUN_1148cde7
    }
}

// Reference entry 117d0042; body size 27 bytes.
#line 1 "ENTRY_117d0042"
__declspec(naked) int FUN_117d0042(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-8]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205efe8
        jmp FUN_1148cde7
    }
}

// Reference entry 117d0072; body size 27 bytes.
#line 1 "ENTRY_117d0072"
__declspec(naked) int FUN_117d0072(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-20]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205f12c
        jmp FUN_1148cde7
    }
}

// Reference entry 117d00a2; body size 27 bytes.
#line 1 "ENTRY_117d00a2"
__declspec(naked) int FUN_117d00a2(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-12]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205f1f0
        jmp FUN_1148cde7
    }
}

// Reference entry 117d01e9; body size 27 bytes.
#line 1 "ENTRY_117d01e9"
__declspec(naked) int FUN_117d01e9(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-12]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205f530
        jmp FUN_1148cde7
    }
}

// Reference entry 117d0222; body size 27 bytes.
#line 1 "ENTRY_117d0222"
__declspec(naked) int FUN_117d0222(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-16]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset DAT_1205f500
        jmp FUN_1148cde7
    }
}

// Reference entry 117d0269; body size 27 bytes.
#line 1 "ENTRY_117d0269"
__declspec(naked) int FUN_117d0269(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-16]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205f590
        jmp FUN_1148cde7
    }
}

// Reference entry 117d02d7; body size 27 bytes.
#line 1 "ENTRY_117d02d7"
__declspec(naked) int FUN_117d02d7(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-28]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205f408
        jmp FUN_1148cde7
    }
}

// Reference entry 117d031f; body size 27 bytes.
#line 1 "ENTRY_117d031f"
__declspec(naked) int FUN_117d031f(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-28]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205f49c
        jmp FUN_1148cde7
    }
}

// Reference entry 117d035f; body size 27 bytes.
#line 1 "ENTRY_117d035f"
__declspec(naked) int FUN_117d035f(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-40]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205f43c
        jmp FUN_1148cde7
    }
}

// Reference entry 117d03a9; body size 27 bytes.
#line 1 "ENTRY_117d03a9"
__declspec(naked) int FUN_117d03a9(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-36]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205f560
        jmp FUN_1148cde7
    }
}

// Reference entry 117d03ef; body size 27 bytes.
#line 1 "ENTRY_117d03ef"
__declspec(naked) int FUN_117d03ef(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-28]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205f46c
        jmp FUN_1148cde7
    }
}

// Reference entry 117d042f; body size 40 bytes.
#line 1 "ENTRY_117d042f"

__declspec(naked) void FUN_117d042f(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x42 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0xb8 __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm _emit 0x8b __asm _emit 0x8a __asm _emit 0xfc __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_1205f5c0
  __asm jmp LAB_1148cde7
}





// Reference entry 117d047f; body size 37 bytes.
#line 1 "ENTRY_117d047f"

__declspec(naked) void FUN_117d047f(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x42 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0xa0 __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0xfc __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_1205f620
  __asm jmp LAB_1148cde7
}





// Reference entry 117d04cf; body size 40 bytes.
#line 1 "ENTRY_117d04cf"

__declspec(naked) void FUN_117d04cf(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x42 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x8a __asm _emit 0xf8 __asm _emit 0xfb __asm _emit 0xff __asm _emit 0xff __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0xfc __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_1205f5f0
  __asm jmp LAB_1148cde7
}





// Reference entry 117d0527; body size 37 bytes.
#line 1 "ENTRY_117d0527"

__declspec(naked) void FUN_117d0527(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x42 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0xa8 __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0xfc __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_1205f660
  __asm jmp LAB_1148cde7
}





// Reference entry 117d0577; body size 40 bytes.
#line 1 "ENTRY_117d0577"

__declspec(naked) void FUN_117d0577(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x42 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x8a __asm _emit 0x7c __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0xfc __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_1205f69c
  __asm jmp LAB_1148cde7
}





// Reference entry 117d05c7; body size 40 bytes.
#line 1 "ENTRY_117d05c7"

__declspec(naked) void FUN_117d05c7(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x42 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0xd8 __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm _emit 0x8b __asm _emit 0x8a __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_1205f6d8
  __asm jmp LAB_1148cde7
}





// Reference entry 117d0602; body size 27 bytes.
#line 1 "ENTRY_117d0602"
__declspec(naked) int FUN_117d0602(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-16]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205f734
        jmp FUN_1148cde7
    }
}

// Reference entry 117d0632; body size 27 bytes.
#line 1 "ENTRY_117d0632"
__declspec(naked) int FUN_117d0632(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-16]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset DAT_1205f75c
        jmp FUN_1148cde7
    }
}

// Reference entry 117d066f; body size 37 bytes.
#line 1 "ENTRY_117d066f"

__declspec(naked) void FUN_117d066f(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x42 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0x98 __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0xfc __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_1205f78c
  __asm jmp LAB_1148cde7
}





// Reference entry 117d06b2; body size 27 bytes.
#line 1 "ENTRY_117d06b2"
__declspec(naked) int FUN_117d06b2(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-16]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset DAT_1205f704
        jmp FUN_1148cde7
    }
}

// Reference entry 117d06ef; body size 27 bytes.
#line 1 "ENTRY_117d06ef"
__declspec(naked) int FUN_117d06ef(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-16]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1206003c
        jmp FUN_1148cde7
    }
}

// Reference entry 117d072f; body size 27 bytes.
#line 1 "ENTRY_117d072f"
__declspec(naked) int FUN_117d072f(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-16]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1206000c
        jmp FUN_1148cde7
    }
}

// Reference entry 117d0777; body size 27 bytes.
#line 1 "ENTRY_117d0777"
__declspec(naked) int FUN_117d0777(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-24]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205fe40
        jmp FUN_1148cde7
    }
}

// Reference entry 117d07b7; body size 27 bytes.
#line 1 "ENTRY_117d07b7"
__declspec(naked) int FUN_117d07b7(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-24]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205fee8
        jmp FUN_1148cde7
    }
}

// Reference entry 117d07f7; body size 37 bytes.
#line 1 "ENTRY_117d07f7"

__declspec(naked) void FUN_117d07f7(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x42 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0x9c __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0xfc __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_1205fe04
  __asm jmp LAB_1148cde7
}





// Reference entry 117d0847; body size 37 bytes.
#line 1 "ENTRY_117d0847"

__declspec(naked) void FUN_117d0847(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x42 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0x9c __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0xfc __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_1205feac
  __asm jmp LAB_1148cde7
}





// Reference entry 117d0897; body size 27 bytes.
#line 1 "ENTRY_117d0897"
__declspec(naked) int FUN_117d0897(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-20]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205ffd8
        jmp FUN_1148cde7
    }
}

// Reference entry 117d08d7; body size 27 bytes.
#line 1 "ENTRY_117d08d7"
__declspec(naked) int FUN_117d08d7(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-20]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205ff9c
        jmp FUN_1148cde7
    }
}

// Reference entry 117d090f; body size 17 bytes.
#line 1 "ENTRY_117d090f"

__declspec(naked) void FUN_117d090f(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x42 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0xf4 __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
}





// Reference entry 117d0922; body size 7 bytes.
#line 1 "ENTRY_117d0922"

__declspec(naked) void FUN_117d0922(void)

{
  __asm _emit 0xfd __asm _emit 0x05 __asm _emit 0x12 __asm _emit 0xe9 __asm _emit 0xbd __asm _emit 0xc4 __asm _emit 0xcb
}





// Reference entry 117d094f; body size 27 bytes.
#line 1 "ENTRY_117d094f"
__declspec(naked) int FUN_117d094f(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-12]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205fe74
        jmp FUN_1148cde7
    }
}

// Reference entry 117d098f; body size 27 bytes.
#line 1 "ENTRY_117d098f"
__declspec(naked) int FUN_117d098f(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-12]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205fd0c
        jmp FUN_1148cde7
    }
}

// Reference entry 117d09cf; body size 27 bytes.
#line 1 "ENTRY_117d09cf"
__declspec(naked) int FUN_117d09cf(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-12]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205fd9c
        jmp FUN_1148cde7
    }
}

// Reference entry 117d0a0f; body size 27 bytes.
#line 1 "ENTRY_117d0a0f"
__declspec(naked) int FUN_117d0a0f(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-12]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205fcac
        jmp FUN_1148cde7
    }
}

// Reference entry 117d0a4f; body size 27 bytes.
#line 1 "ENTRY_117d0a4f"
__declspec(naked) int FUN_117d0a4f(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-12]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205fd6c
        jmp FUN_1148cde7
    }
}

// Reference entry 117d0a9d; body size 27 bytes.
#line 1 "ENTRY_117d0a9d"
__declspec(naked) int FUN_117d0a9d(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-16]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205fb3c
        jmp FUN_1148cde7
    }
}

// Reference entry 117d0ad2; body size 27 bytes.
#line 1 "ENTRY_117d0ad2"
__declspec(naked) int FUN_117d0ad2(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-12]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset DAT_1205fbbc
        jmp FUN_1148cde7
    }
}

// Reference entry 117d0b02; body size 27 bytes.
#line 1 "ENTRY_117d0b02"
__declspec(naked) int FUN_117d0b02(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-8]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205fc1c
        jmp FUN_1148cde7
    }
}

// Reference entry 117d0b32; body size 27 bytes.
#line 1 "ENTRY_117d0b32"
__declspec(naked) int FUN_117d0b32(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-8]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset DAT_1205f9a8
        jmp FUN_1148cde7
    }
}

// Reference entry 117d0b6f; body size 37 bytes.
#line 1 "ENTRY_117d0b6f"

__declspec(naked) void FUN_117d0b6f(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x42 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0xc8 __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0xfc __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_1205fd3c
  __asm jmp LAB_1148cde7
}





// Reference entry 117d0bbf; body size 37 bytes.
#line 1 "ENTRY_117d0bbf"

__declspec(naked) void FUN_117d0bbf(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x42 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0xc8 __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0xfc __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_1205fcdc
  __asm jmp LAB_1148cde7
}





// Reference entry 117d0c02; body size 27 bytes.
#line 1 "ENTRY_117d0c02"
__declspec(naked) int FUN_117d0c02(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-8]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205fbec
        jmp FUN_1148cde7
    }
}

// Reference entry 117d0c32; body size 27 bytes.
#line 1 "ENTRY_117d0c32"
__declspec(naked) int FUN_117d0c32(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-8]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205f9d8
        jmp FUN_1148cde7
    }
}

// Reference entry 117d0c62; body size 27 bytes.
#line 1 "ENTRY_117d0c62"
__declspec(naked) int FUN_117d0c62(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-8]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205fc7c
        jmp FUN_1148cde7
    }
}

// Reference entry 117d0ca7; body size 27 bytes.
#line 1 "ENTRY_117d0ca7"
__declspec(naked) int FUN_117d0ca7(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-24]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205ff24
        jmp FUN_1148cde7
    }
}

// Reference entry 117d0ce7; body size 27 bytes.
#line 1 "ENTRY_117d0ce7"
__declspec(naked) int FUN_117d0ce7(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-24]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205ff60
        jmp FUN_1148cde7
    }
}

// Reference entry 117d0d1f; body size 27 bytes.
#line 1 "ENTRY_117d0d1f"
__declspec(naked) int FUN_117d0d1f(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-20]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205f8ac
        jmp FUN_1148cde7
    }
}

// Reference entry 117d0da4; body size 40 bytes.
#line 1 "ENTRY_117d0da4"

__declspec(naked) void FUN_117d0da4(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x42 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0xe4 __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm _emit 0x8b __asm _emit 0x8a __asm _emit 0xfc __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_1205fa30
  __asm jmp LAB_1148cde7
}





// Reference entry 117d0dff; body size 27 bytes.
#line 1 "ENTRY_117d0dff"
__declspec(naked) int FUN_117d0dff(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-12]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205f7bc
        jmp FUN_1148cde7
    }
}

// Reference entry 117d0e3f; body size 27 bytes.
#line 1 "ENTRY_117d0e3f"
__declspec(naked) int FUN_117d0e3f(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-24]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205f7ec
        jmp FUN_1148cde7
    }
}

// Reference entry 117d0ea7; body size 27 bytes.
#line 1 "ENTRY_117d0ea7"
__declspec(naked) int FUN_117d0ea7(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-32]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205f91c
        jmp FUN_1148cde7
    }
}

// Reference entry 117d0f0f; body size 37 bytes.
#line 1 "ENTRY_117d0f0f"

__declspec(naked) void FUN_117d0f0f(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x42 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0x9c __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0xfc __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_1205fad8
  __asm jmp LAB_1148cde7
}





// Reference entry 117d0f69; body size 40 bytes.
#line 1 "ENTRY_117d0f69"

__declspec(naked) void FUN_117d0f69(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x42 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0xd8 __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm _emit 0x8b __asm _emit 0x8a __asm _emit 0x0c __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_1205fab0
  __asm jmp LAB_1148cde7
}





// Reference entry 117d101d; body size 40 bytes.
#line 1 "ENTRY_117d101d"

__declspec(naked) void FUN_117d101d(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x42 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x8a __asm _emit 0x6c __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0xfc __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_1205f814
  __asm jmp LAB_1148cde7
}





// Reference entry 117d108f; body size 40 bytes.
#line 1 "ENTRY_117d108f"

__declspec(naked) void FUN_117d108f(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x42 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x8a __asm _emit 0x44 __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0xfc __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_1205fb68
  __asm jmp LAB_1148cde7
}





// Reference entry 117d10df; body size 27 bytes.
#line 1 "ENTRY_117d10df"
__declspec(naked) int FUN_117d10df(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-20]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205f980
        jmp FUN_1148cde7
    }
}

// Reference entry 117d113c; body size 40 bytes.
#line 1 "ENTRY_117d113c"

__declspec(naked) void FUN_117d113c(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x42 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0xdc __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm _emit 0x8b __asm _emit 0x8a __asm _emit 0xf4 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_1205f8f0
  __asm jmp LAB_1148cde7
}





// Reference entry 117d1182; body size 27 bytes.
#line 1 "ENTRY_117d1182"
__declspec(naked) int FUN_117d1182(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-8]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1205fc4c
        jmp FUN_1148cde7
    }
}

// Reference entry 117d11c2; body size 40 bytes.
#line 1 "ENTRY_117d11c2"

__declspec(naked) void FUN_117d11c2(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x42 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x8a __asm _emit 0x4c __asm _emit 0xf9 __asm _emit 0xff __asm _emit 0xff __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0xfc __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_1205fa08
  __asm jmp LAB_1148cde7
}





// Reference entry 117d120f; body size 37 bytes.
#line 1 "ENTRY_117d120f"

__declspec(naked) void FUN_117d120f(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x42 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0xd4 __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0xfc __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_1206009c
  __asm jmp LAB_1148cde7
}





// Reference entry 117d125f; body size 37 bytes.
#line 1 "ENTRY_117d125f"

__declspec(naked) void FUN_117d125f(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x42 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0xd4 __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0xfc __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_1206006c
  __asm jmp LAB_1148cde7
}





// Reference entry 117d12af; body size 27 bytes.
#line 1 "ENTRY_117d12af"

__declspec(naked) void FUN_117d12af(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x42 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0xc4 __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0xfc __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
}





// Reference entry 117d12cc; body size 4 bytes.
#line 1 "ENTRY_117d12cc"

__declspec(naked) int FUN_117d12cc(void)

{
  __asm _emit 0x00 __asm _emit 0x06 __asm _emit 0x12 __asm _emit 0xe9
}





// Reference entry 117d12ff; body size 37 bytes.
#line 1 "ENTRY_117d12ff"

__declspec(naked) void FUN_117d12ff(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x42 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0xc4 __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0xfc __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_120600fc
  __asm jmp LAB_1148cde7
}





// Reference entry 117d135d; body size 27 bytes.
#line 1 "ENTRY_117d135d"
__declspec(naked) int FUN_117d135d(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-20]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_12060134
        jmp FUN_1148cde7
    }
}

// Reference entry 117d13ad; body size 27 bytes.
#line 1 "ENTRY_117d13ad"
__declspec(naked) int FUN_117d13ad(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-20]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_120601c4
        jmp FUN_1148cde7
    }
}

// Reference entry 117d13e2; body size 27 bytes.
#line 1 "ENTRY_117d13e2"
__declspec(naked) int FUN_117d13e2(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-8]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset DAT_120601f0
        jmp FUN_1148cde7
    }
}

// Reference entry 117d1412; body size 27 bytes.
#line 1 "ENTRY_117d1412"
__declspec(naked) int FUN_117d1412(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-8]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_12060220
        jmp FUN_1148cde7
    }
}

// Reference entry 117d1467; body size 37 bytes.
#line 1 "ENTRY_117d1467"

__declspec(naked) void FUN_117d1467(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x42 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0xa8 __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0xfc __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_12060160
  __asm jmp LAB_1148cde7
}





// Reference entry 117d14b9; body size 27 bytes.
#line 1 "ENTRY_117d14b9"
__declspec(naked) int FUN_117d14b9(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-12]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_12060250
        jmp FUN_1148cde7
    }
}

// Reference entry 117d150d; body size 27 bytes.
#line 1 "ENTRY_117d150d"
__declspec(naked) int FUN_117d150d(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-20]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_12060288
        jmp FUN_1148cde7
    }
}

// Reference entry 117d155d; body size 27 bytes.
#line 1 "ENTRY_117d155d"
__declspec(naked) int FUN_117d155d(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-20]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_1206034c
        jmp FUN_1148cde7
    }
}

// Reference entry 117d15af; body size 27 bytes.
#line 1 "ENTRY_117d15af"
__declspec(naked) int FUN_117d15af(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-60]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_12060310
        jmp FUN_1148cde7
    }
}

// Reference entry 117d15ff; body size 17 bytes.
#line 1 "ENTRY_117d15ff"

__declspec(naked) void FUN_117d15ff(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x42 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0xc4 __asm _emit 0x33 __asm _emit 0xc8
  __asm call LAB_100382f3
}





// Reference entry 117d162a; body size 27 bytes.
#line 1 "ENTRY_117d162a"
__declspec(naked) int FUN_117d162a(int a1) {
    __asm {
        mov edx, [esp+8]
        lea eax, [edx+12]
        mov ecx, [edx-20]
        xor ecx, eax
        call thunk_FUN_1148ac28
        mov eax, offset FuncInfo_120604bc
        jmp FUN_1148cde7
    }
}

// Reference entry 117e96b0; body size 20 bytes.
#line 1 "ENTRY_117e96b0"

__declspec(naked) int FUN_117e96b0(void)

{
  __asm push offset LAB_1008c50b
  __asm _emit 0x6a __asm _emit 0x0a __asm _emit 0x6a __asm _emit 0x04
  __asm push offset LAB_121a07bc
  __asm call LAB_100699e8
  __asm _emit 0xc3
}





// Reference entry 117e9740; body size 20 bytes.
#line 1 "ENTRY_117e9740"

__declspec(naked) int FUN_117e9740(void)

{
  __asm push offset LAB_1008c50b
  __asm _emit 0x6a __asm _emit 0x0b __asm _emit 0x6a __asm _emit 0x04
  __asm push offset LAB_121a07f0
  __asm call LAB_100699e8
  __asm _emit 0xc3
}





// Reference entry 117eb690; body size 10 bytes.
#line 1 "ENTRY_117eb690"

__declspec(naked) int FUN_117eb690(void)

{
  __asm mov ecx, offset LAB_121a0954
  __asm jmp LAB_1006af23
}





// Reference entry 117edc30; body size 10 bytes.
#line 1 "ENTRY_117edc30"

__declspec(naked) int FUN_117edc30(void)

{
  __asm mov ecx, offset LAB_121a0c1c
  __asm jmp LAB_1001fc8a
}





// Reference entry 117f06b0; body size 10 bytes.
#line 1 "ENTRY_117f06b0"

__declspec(naked) int FUN_117f06b0(void)

{
  __asm mov ecx, offset LAB_121a0df4
  __asm jmp LAB_10065fbe
}





// Reference entry 117f33d0; body size 10 bytes.
#line 1 "ENTRY_117f33d0"

__declspec(naked) int FUN_117f33d0(void)

{
  __asm mov ecx, offset LAB_121a10e4
  __asm jmp LAB_10005c86
}





// Reference entry 117f7c00; body size 20 bytes.
#line 1 "ENTRY_117f7c00"

__declspec(naked) int FUN_117f7c00(void)

{
  __asm push offset LAB_100116ee
  __asm _emit 0x6a __asm _emit 0x07 __asm _emit 0x6a __asm _emit 0x10
  __asm push offset LAB_121a1490
  __asm call LAB_100699e8
  __asm _emit 0xc3
}





// Reference entry 11806490; body size 10 bytes.
#line 1 "ENTRY_11806490"

__declspec(naked) int FUN_11806490(void)

{
  __asm mov ecx, offset LAB_121a2070
  __asm jmp LAB_1001fc8a
}





// Reference entry 1180bb90; body size 10 bytes.
#line 1 "ENTRY_1180bb90"

__declspec(naked) int FUN_1180bb90(void)

{
  __asm mov ecx, offset LAB_121a26d0
  __asm jmp LAB_1005c5b8
}





// Reference entry 1182aca0; body size 20 bytes.
#line 1 "ENTRY_1182aca0"

__declspec(naked) int FUN_1182aca0(void)

{
  __asm push offset LAB_1008c50b
  __asm _emit 0x6a __asm _emit 0x03 __asm _emit 0x6a __asm _emit 0x04
  __asm push offset LAB_121a49a0
  __asm call LAB_100699e8
  __asm _emit 0xc3
}





// Reference entry 1182ded0; body size 10 bytes.
#line 1 "ENTRY_1182ded0"

__declspec(naked) int FUN_1182ded0(void)

{
  __asm mov ecx, offset LAB_121a4eb8
  __asm jmp LAB_1004f3a4
}





// Reference entry 1182edc0; body size 10 bytes.
#line 1 "ENTRY_1182edc0"

__declspec(naked) int FUN_1182edc0(void)

{
  __asm mov ecx, offset LAB_121a4f98
  __asm jmp LAB_10017003
}





// Reference entry 1182ee40; body size 10 bytes.
#line 1 "ENTRY_1182ee40"

__declspec(naked) int FUN_1182ee40(void)

{
  __asm mov ecx, offset LAB_121a4f68
  __asm jmp LAB_1008b926
}





// Reference entry 11830ef0; body size 10 bytes.
#line 1 "ENTRY_11830ef0"

__declspec(naked) int FUN_11830ef0(void)

{
  __asm mov ecx, offset LAB_12119d20
  __asm jmp LAB_1006a95b
}





// Reference entry 118314f0; body size 10 bytes.
#line 1 "ENTRY_118314f0"

__declspec(naked) int FUN_118314f0(void)

{
  __asm mov ecx, offset LAB_121a5180
  __asm jmp LAB_10087bd7
}





// Reference entry 11831660; body size 10 bytes.
#line 1 "ENTRY_11831660"

__declspec(naked) int FUN_11831660(void)

{
  __asm mov ecx, offset LAB_121a5268
  __asm jmp LAB_10047a00
}





// Reference entry 11833fb0; body size 10 bytes.
#line 1 "ENTRY_11833fb0"

__declspec(naked) int FUN_11833fb0(void)

{
  __asm mov ecx, offset LAB_121a5454
  __asm jmp LAB_10013e6c
}





// Reference entry 11834bd0; body size 10 bytes.
#line 1 "ENTRY_11834bd0"

__declspec(naked) int FUN_11834bd0(void)

{
  __asm mov ecx, offset LAB_121a5548
  __asm jmp LAB_1005b807
}





// Reference entry 11834be0; body size 10 bytes.
#line 1 "ENTRY_11834be0"

__declspec(naked) int FUN_11834be0(void)

{
  __asm mov ecx, offset LAB_121a5568
  __asm jmp LAB_1003217d
}





// Reference entry 11834d50; body size 10 bytes.
#line 1 "ENTRY_11834d50"

__declspec(naked) int FUN_11834d50(void)

{
  __asm mov ecx, offset LAB_121a55c0
  __asm jmp LAB_10023f2e
}





// Reference entry 1183a740; body size 20 bytes.
#line 1 "ENTRY_1183a740"

__declspec(naked) int FUN_1183a740(void)

{
  __asm push offset LAB_100474fb
  __asm _emit 0x6a __asm _emit 0x03 __asm _emit 0x6a __asm _emit 0x30
  __asm push offset LAB_12119fa0
  __asm call LAB_100699e8
  __asm _emit 0xc3
}





// Reference entry 1183b100; body size 10 bytes.
#line 1 "ENTRY_1183b100"

__declspec(naked) int FUN_1183b100(void)

{
  __asm mov ecx, offset LAB_121a5b30
  __asm jmp LAB_1008bf16
}





// Reference entry 1183f350; body size 20 bytes.
#line 1 "ENTRY_1183f350"

__declspec(naked) int FUN_1183f350(void)

{
  __asm push offset LAB_10030021
  __asm _emit 0x6a __asm _emit 0x09 __asm _emit 0x6a __asm _emit 0x10
  __asm push offset LAB_121a5f78
  __asm call LAB_100699e8
  __asm _emit 0xc3
}





// Reference entry 11840f70; body size 11 bytes.
#line 1 "ENTRY_11840f70"

__declspec(naked) int FUN_11840f70(void)

{
  __asm mov edx, dword ptr [LAB_1211a0e0]
  __asm _emit 0x83 __asm _emit 0xfa __asm _emit 0x10 __asm _emit 0x72 __asm _emit 0x31
}





// Reference entry 1184e030; body size 20 bytes.
#line 1 "ENTRY_1184e030"

__declspec(naked) int FUN_1184e030(void)

{
  __asm push offset LAB_1008c50b
  __asm _emit 0x6a __asm _emit 0x0e __asm _emit 0x6a __asm _emit 0x04
  __asm push offset LAB_121a6ab8
  __asm call LAB_100699e8
  __asm _emit 0xc3
}





// Reference entry 11859b90; body size 10 bytes.
#line 1 "ENTRY_11859b90"

__declspec(naked) int FUN_11859b90(void)

{
  __asm mov ecx, offset LAB_121a7364
  __asm jmp LAB_10051f4b
}





// Reference entry 1185b590; body size 10 bytes.
#line 1 "ENTRY_1185b590"

__declspec(naked) int FUN_1185b590(void)

{
  __asm mov ecx, offset LAB_121a754c
  __asm jmp LAB_10017003
}





// Reference entry 1185b5a0; body size 10 bytes.
#line 1 "ENTRY_1185b5a0"

__declspec(naked) int FUN_1185b5a0(void)

{
  __asm mov ecx, offset LAB_121a74fc
  __asm jmp LAB_10017003
}





// Reference entry 1185b620; body size 10 bytes.
#line 1 "ENTRY_1185b620"

__declspec(naked) int FUN_1185b620(void)

{
  __asm mov ecx, offset LAB_121a7518
  __asm jmp LAB_10017003
}





// Reference entry 1185ef90; body size 10 bytes.
#line 1 "ENTRY_1185ef90"

__declspec(naked) int FUN_1185ef90(void)

{
  __asm mov ecx, offset LAB_121a784c
  __asm jmp LAB_1004f3a4
}





// Reference entry 11861320; body size 10 bytes.
#line 1 "ENTRY_11861320"

__declspec(naked) int FUN_11861320(void)

{
  __asm mov ecx, offset LAB_121a79dc
  __asm jmp LAB_1004f3a4
}





// Reference entry 11861ea2; body size 13 bytes.
#line 1 "ENTRY_11861ea2"

__declspec(naked) int FUN_11861ea2(void)

{
  __asm _emit 0xc1 __asm _emit 0x11 __asm _emit 0x12
  __asm mov dword ptr [LAB_1211c1d0], 0x119bebf0
}





// Reference entry 118620a0; body size 20 bytes.
#line 1 "ENTRY_118620a0"

__declspec(naked) int FUN_118620a0(void)

{
  __asm push offset LAB_10013f39
  __asm _emit 0x6a __asm _emit 0x22 __asm _emit 0x6a __asm _emit 0x10
  __asm push offset LAB_1211dbf8
  __asm call LAB_100699e8
  __asm _emit 0xc3
}





// Reference entry 11862550; body size 10 bytes.
#line 1 "ENTRY_11862550"

__declspec(naked) int FUN_11862550(void)

{
  __asm mov ecx, offset LAB_122f33fc
  __asm jmp LAB_10099413
}





// Reference entry 118625f0; body size 10 bytes.
#line 1 "ENTRY_118625f0"

__declspec(naked) int FUN_118625f0(void)

{
  __asm mov ecx, offset LAB_122f5d30
  __asm jmp LAB_100755d1
}





// Reference entry 11862600; body size 20 bytes.
#line 1 "ENTRY_11862600"

__declspec(naked) int FUN_11862600(void)

{
  __asm push offset LAB_100606e5
  __asm _emit 0x6a __asm _emit 0x44 __asm _emit 0x6a __asm _emit 0x14
  __asm push offset LAB_121205b0
  __asm call LAB_100699e8
  __asm _emit 0xc3
}






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
struct SCIndexRange { char _pad; SCIndexRange(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); static int op_assign(...) { return 0; } };
struct SCLibrary { char _pad; SCLibrary(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); template<class... A> static int getSingleton(A...) { return 0; } };
struct SCStr { char _pad; SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); template<class... A> static int hash(A...) { return 0; } template<class... A> static int int_addref(A...) { return 0; } template<class... A> static int int_allocRep(A...) { return 0; } template<class... A> static int int_release(A...) { return 0; } template<class... A> static int length(A...) { return 0; } static int op_ctor(...) { return 0; } static int op_eq(...) { return 0; } static int op_lt(...) { return 0; } };
template<class...> struct _Tree { char _pad; _Tree(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); static int op_dtor(...) { return 0; } };
namespace std { template<class...> struct basic_ios { char _pad; basic_ios(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); static int op_dtor(...); }; }
namespace std { template<class...> struct basic_ostream { char _pad; basic_ostream(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); static int op_dtor(...); }; }
namespace std { template<class...> struct char_traits { char _pad; char_traits(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); }; }
struct AVTransportURIMetaData { char _pad; AVTransportURIMetaData(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct AddAtNumber { char _pad; AddAtNumber(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct AddFavorite { char _pad; AddFavorite(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct AddToGeneric { char _pad; AddToGeneric(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct AddToPlaylist { char _pad; AddToPlaylist(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct CurrentTrackMetaData { char _pad; CurrentTrackMetaData(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct DeleteItem { char _pad; DeleteItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct EnqueuedTransportURIMetaData { char _pad; EnqueuedTransportURIMetaData(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Exit { char _pad; Exit(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct MusicServiceLogin { char _pad; MusicServiceLogin(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct MusicServiceNickname { char _pad; MusicServiceNickname(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct MusicServicePassword { char _pad; MusicServicePassword(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct MusicServiceWizard { char _pad; MusicServiceWizard(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct ObjectID { char _pad; ObjectID(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct PlayMenuAdd { char _pad; PlayMenuAdd(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct PlayMenuPlayContainer { char _pad; PlayMenuPlayContainer(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct PlayMenuPlayNext { char _pad; PlayMenuPlayNext(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct PlayMenuPlayNow { char _pad; PlayMenuPlayNow(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct PlayMenuReplace { char _pad; PlayMenuReplace(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct PlayMenuShuffleContainer { char _pad; PlayMenuShuffleContainer(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct PlayMenuShuffleNow { char _pad; PlayMenuShuffleNow(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct PlayNow { char _pad; PlayNow(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct PlaylistNew { char _pad; PlaylistNew(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct RINCON_AssociatedZPUDN { char _pad; RINCON_AssociatedZPUDN(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct RadioEditCustomStation { char _pad; RadioEditCustomStation(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct RadioLocationCity { char _pad; RadioLocationCity(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct RadioLocationZIP { char _pad; RadioLocationZIP(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct RenameFavorite { char _pad; RenameFavorite(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct RenameItem { char _pad; RenameItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCActionContext { char _pad; SCActionContext(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCFavoritesManager { char _pad; SCFavoritesManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIActionCategoryCollection { char _pad; SCIActionCategoryCollection(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIActionCategoryDefault { char _pad; SCIActionCategoryDefault(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIActionCategoryDiscovery { char _pad; SCIActionCategoryDiscovery(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIActionCategoryEdit { char _pad; SCIActionCategoryEdit(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIActionCategoryInstant { char _pad; SCIActionCategoryInstant(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIActionCategoryLongInput { char _pad; SCIActionCategoryLongInput(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIActionWithBoolDescriptor { char _pad; SCIActionWithBoolDescriptor(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIAddToAction { char _pad; SCIAddToAction(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIAddToQueueAtNumberDescriptor { char _pad; SCIAddToQueueAtNumberDescriptor(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIAddToQueueUIAction { char _pad; SCIAddToQueueUIAction(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIBrowseDataSource { char _pad; SCIBrowseDataSource(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIBrowseItem { char _pad; SCIBrowseItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIInfoViewHeaderDataSource { char _pad; SCIInfoViewHeaderDataSource(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCINowPlaying { char _pad; SCINowPlaying(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIObj { char _pad; SCIObj(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIPlayNextUIAction { char _pad; SCIPlayNextUIAction(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIPlayNowUIAction { char _pad; SCIPlayNowUIAction(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIReplaceQueueUIAction { char _pad; SCIReplaceQueueUIAction(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIStringInput { char _pad; SCIStringInput(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIWizard { char _pad; SCIWizard(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCOpWithProgressInfo { char _pad; SCOpWithProgressInfo(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCPlaylistsBrowseItem { char _pad; SCPlaylistsBrowseItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCSelectedItemsAddToQueueAtIdxAction { char _pad; SCSelectedItemsAddToQueueAtIdxAction(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCSelectedItemsPlayNextAction { char _pad; SCSelectedItemsPlayNextAction(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCSelectedItemsPlayNowAction { char _pad; SCSelectedItemsPlayNowAction(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCSelectedItemsReplaceQueueAction { char _pad; SCSelectedItemsReplaceQueueAction(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCSwfObjBCInternalListener { char _pad; SCSwfObjBCInternalListener(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCSwfObjHHInternalListener { char _pad; SCSwfObjHHInternalListener(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCThreadSafeInc { char _pad; SCThreadSafeInc(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SelectionManager { char _pad; SelectionManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct ShowInfoview { char _pad; ShowInfoview(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Wizard { char _pad; Wizard(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
typedef void *FV;
typedef void *LOCK;
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
typedef void *UNLOCK;
typedef void *WARNING;
using namespace std;
struct Recovered_Bulk { char _pad; undefined4 * __thiscall FUN_104d7cb0(byte param_2); template<class... A> int FUN_104d7cb0(A...); undefined4 * __thiscall FUN_104d7cf0(byte param_2); template<class... A> int FUN_104d7cf0(A...); void __thiscall FUN_104d7e00(undefined4 *param_2); template<class... A> int FUN_104d7e00(A...); void __thiscall FUN_104d7e20(char param_2); template<class... A> int FUN_104d7e20(A...); void __thiscall FUN_104d7e40(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_104d7e40(A...); void __thiscall FUN_104d7ed0(undefined4 *param_2); template<class... A> int FUN_104d7ed0(A...); void __thiscall FUN_104d8190(int *param_2); template<class... A> int FUN_104d8190(A...); void __thiscall FUN_104d82e0(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_104d82e0(A...); void __thiscall FUN_104d8330(undefined4 param_2); template<class... A> int FUN_104d8330(A...); void __thiscall FUN_104d8370(undefined4 param_2); template<class... A> int FUN_104d8370(A...); undefined4 __thiscall FUN_104d8c80(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int FUN_104d8c80(A...); void __thiscall FUN_104d9d00(undefined4 param_2); template<class... A> int FUN_104d9d00(A...); void __thiscall FUN_104d9d40(undefined4 *param_2); template<class... A> int FUN_104d9d40(A...); void __thiscall FUN_104d9e10(int param_2); template<class... A> int FUN_104d9e10(A...); undefined4 * __thiscall FUN_104da4a0(int *param_2); template<class... A> int FUN_104da4a0(A...); undefined4 * __thiscall FUN_104da4e0(int *param_2); template<class... A> int FUN_104da4e0(A...); undefined4 * __thiscall FUN_104da520(int *param_2); template<class... A> int FUN_104da520(A...); undefined4 * __thiscall FUN_104da860(byte param_2); template<class... A> int FUN_104da860(A...); undefined4 __thiscall FUN_104dacb0(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_104dacb0(A...); int * __thiscall FUN_104daf10(int *param_2); template<class... A> int FUN_104daf10(A...); undefined4 __thiscall FUN_104daf30(undefined4 param_2); template<class... A> int FUN_104daf30(A...); int * __thiscall FUN_104daf80(int *param_2); template<class... A> int FUN_104daf80(A...); undefined4 __thiscall FUN_104db380(undefined4 param_2); template<class... A> int FUN_104db380(A...); undefined4 __thiscall FUN_104dc4b0(byte param_2); template<class... A> int FUN_104dc4b0(A...); undefined4 * __thiscall FUN_104dc4e0(byte param_2); template<class... A> int FUN_104dc4e0(A...); undefined4 * __thiscall FUN_104dc5c0(byte param_2); template<class... A> int FUN_104dc5c0(A...); undefined4 * __thiscall FUN_104dc600(byte param_2); template<class... A> int FUN_104dc600(A...); undefined4 __thiscall FUN_104dcfc0(SCIndexRange *param_2); template<class... A> int FUN_104dcfc0(A...); undefined4 * __thiscall FUN_104ddc30(undefined4 param_2); template<class... A> int FUN_104ddc30(A...); undefined4 * __thiscall FUN_104ddfd0(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_104ddfd0(A...); void __thiscall FUN_104dfa90(int *param_2); template<class... A> int FUN_104dfa90(A...); int __thiscall FUN_104e0430(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_104e0430(A...); int __thiscall FUN_104e0470(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_104e0470(A...); int __thiscall FUN_104e04b0(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_104e04b0(A...); void __thiscall FUN_104e1d40(undefined4 *param_2); template<class... A> int FUN_104e1d40(A...); void __thiscall FUN_104e1d90(undefined4 *param_2); template<class... A> int FUN_104e1d90(A...); undefined4 * __thiscall FUN_104e26c0(int *param_2); template<class... A> int FUN_104e26c0(A...); undefined4 * __thiscall FUN_104e2750(int *param_2); template<class... A> int FUN_104e2750(A...); undefined4 * __thiscall FUN_104e27b0(int *param_2); template<class... A> int FUN_104e27b0(A...); int * __thiscall FUN_104e4750(char param_2); template<class... A> int FUN_104e4750(A...); undefined4 __thiscall FUN_104e4e60(byte param_2); template<class... A> int FUN_104e4e60(A...); undefined4 * __thiscall FUN_104e4f50(byte param_2); template<class... A> int FUN_104e4f50(A...); undefined4 __thiscall FUN_104e4f90(byte param_2); template<class... A> int FUN_104e4f90(A...); undefined4 __thiscall FUN_104e4fc0(byte param_2); template<class... A> int FUN_104e4fc0(A...); void __thiscall FUN_104e5bc0(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_104e5bc0(A...); void __thiscall FUN_104e5be0(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_104e5be0(A...); int __thiscall FUN_104ea530(int param_2); template<class... A> int FUN_104ea530(A...); void __thiscall FUN_104ec340(int param_2); template<class... A> int FUN_104ec340(A...); void __thiscall FUN_104eca70(undefined4 *param_2); template<class... A> int FUN_104eca70(A...); void __thiscall FUN_104ecac0(undefined4 *param_2); template<class... A> int FUN_104ecac0(A...); undefined4 * __thiscall FUN_104eda20(byte param_2); template<class... A> int FUN_104eda20(A...); undefined4 __thiscall FUN_104eda60(byte param_2); template<class... A> int FUN_104eda60(A...); undefined4 * __thiscall FUN_104eda90(byte param_2); template<class... A> int FUN_104eda90(A...); undefined4 * __thiscall FUN_104edac0(byte param_2); template<class... A> int FUN_104edac0(A...); undefined4 __thiscall FUN_104ef330(byte param_2); template<class... A> int FUN_104ef330(A...); void __thiscall FUN_104f8a40(undefined4 param_2); template<class... A> int FUN_104f8a40(A...); int __thiscall FUN_104f8b50(SCStr *param_2); template<class... A> int FUN_104f8b50(A...); void __thiscall FUN_104f97a0(undefined4 *param_2); template<class... A> int FUN_104f97a0(A...); undefined4 * __thiscall FUN_104f9b30(int *param_2); template<class... A> int FUN_104f9b30(A...); undefined4 * __thiscall FUN_104f9bf0(int *param_2); template<class... A> int FUN_104f9bf0(A...); undefined4 * __thiscall FUN_104f9c30(int *param_2); template<class... A> int FUN_104f9c30(A...); undefined4 * __thiscall FUN_104f9ca0(int *param_2); template<class... A> int FUN_104f9ca0(A...); undefined4 * __thiscall FUN_104fbb10(byte param_2); template<class... A> int FUN_104fbb10(A...); undefined4 * __thiscall FUN_104fbb40(byte param_2); template<class... A> int FUN_104fbb40(A...); undefined4 __thiscall FUN_104fbd40(byte param_2); template<class... A> int FUN_104fbd40(A...); undefined4 __thiscall FUN_104fbd70(byte param_2); template<class... A> int FUN_104fbd70(A...); undefined4 * __thiscall FUN_104fbda0(byte param_2); template<class... A> int FUN_104fbda0(A...); void __thiscall FUN_104fc3b0(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_104fc3b0(A...); void __thiscall FUN_104fd5b0(int *param_2); template<class... A> int FUN_104fd5b0(A...); void __thiscall FUN_104fd600(int *param_2); template<class... A> int FUN_104fd600(A...); void __thiscall FUN_104fd650(int *param_2); template<class... A> int FUN_104fd650(A...); uint __thiscall FUN_104fd890(SCStr *param_2); template<class... A> int FUN_104fd890(A...); void __thiscall FUN_104ff720(undefined4 *param_2); template<class... A> int FUN_104ff720(A...); undefined4 * __thiscall FUN_104ff770(undefined4 *param_2,SCStr *param_3); template<class... A> int FUN_104ff770(A...); undefined4 * __thiscall FUN_104ff840(undefined4 *param_2,SCStr *param_3); template<class... A> int FUN_104ff840(A...); void __thiscall FUN_105000e0(undefined4 param_2); template<class... A> int FUN_105000e0(A...); int * __thiscall FUN_105006c0(int param_2); template<class... A> int FUN_105006c0(A...); undefined4 * __thiscall FUN_10500720(int *param_2); template<class... A> int FUN_10500720(A...); undefined4 * __thiscall FUN_10500740(int *param_2); template<class... A> int FUN_10500740(A...); undefined4 * __thiscall FUN_10504810(byte param_2); template<class... A> int FUN_10504810(A...); undefined4 * __thiscall FUN_10504840(byte param_2); template<class... A> int FUN_10504840(A...); undefined4 * __thiscall FUN_10504870(byte param_2); template<class... A> int FUN_10504870(A...); undefined4 * __thiscall FUN_105048b0(byte param_2); template<class... A> int FUN_105048b0(A...); undefined4 * __thiscall FUN_105048f0(byte param_2); template<class... A> int FUN_105048f0(A...); undefined4 * __thiscall FUN_10504940(byte param_2); template<class... A> int FUN_10504940(A...); undefined4 * __thiscall FUN_10504a10(byte param_2); template<class... A> int FUN_10504a10(A...); undefined4 * __thiscall FUN_10504a40(byte param_2); template<class... A> int FUN_10504a40(A...); undefined4 * __thiscall FUN_10504a70(byte param_2); template<class... A> int FUN_10504a70(A...); undefined4 __thiscall FUN_10504aa0(byte param_2); template<class... A> int FUN_10504aa0(A...); undefined4 __thiscall FUN_10504ad0(byte param_2); template<class... A> int FUN_10504ad0(A...); undefined4 __thiscall FUN_10504b00(byte param_2); template<class... A> int FUN_10504b00(A...); undefined4 * __thiscall FUN_10504b30(byte param_2); template<class... A> int FUN_10504b30(A...); undefined4 __thiscall FUN_10504b70(byte param_2); template<class... A> int FUN_10504b70(A...); undefined4 * __thiscall FUN_10504c00(byte param_2); template<class... A> int FUN_10504c00(A...); undefined4 * __thiscall FUN_10504d70(byte param_2); template<class... A> int FUN_10504d70(A...); undefined4 * __thiscall FUN_10504da0(byte param_2); template<class... A> int FUN_10504da0(A...); undefined4 * __thiscall FUN_10504e30(byte param_2); template<class... A> int FUN_10504e30(A...); undefined4 __thiscall FUN_10504f20(byte param_2); template<class... A> int FUN_10504f20(A...); undefined4 __thiscall FUN_10504f50(byte param_2); template<class... A> int FUN_10504f50(A...); undefined4 __thiscall FUN_10504f80(byte param_2); template<class... A> int FUN_10504f80(A...); undefined4 __thiscall FUN_10505060(byte param_2); template<class... A> int FUN_10505060(A...); undefined4 * __thiscall FUN_105050a0(byte param_2); template<class... A> int FUN_105050a0(A...); undefined4 __thiscall FUN_10505160(byte param_2); template<class... A> int FUN_10505160(A...); undefined4 __thiscall FUN_10505190(byte param_2); template<class... A> int FUN_10505190(A...); undefined4 __thiscall FUN_10505340(byte param_2); template<class... A> int FUN_10505340(A...); undefined4 __thiscall FUN_10505370(byte param_2); template<class... A> int FUN_10505370(A...); void __thiscall FUN_10505b90(int *param_2); template<class... A> int FUN_10505b90(A...); void __thiscall FUN_10505d30(void); template<class... A> int FUN_10505d30(A...); void __thiscall FUN_10505d70(void); template<class... A> int FUN_10505d70(A...); SCStr * __thiscall FUN_10507f20(SCStr *param_2); template<class... A> int FUN_10507f20(A...); SCStr * __thiscall FUN_10507f40(SCStr *param_2); template<class... A> int FUN_10507f40(A...); SCStr * __thiscall FUN_10507f60(SCStr *param_2); template<class... A> int FUN_10507f60(A...); SCStr * __thiscall FUN_10508260(SCStr *param_2); template<class... A> int FUN_10508260(A...); SCStr * __thiscall FUN_10508280(SCStr *param_2); template<class... A> int FUN_10508280(A...); SCStr * __thiscall FUN_105082a0(SCStr *param_2); template<class... A> int FUN_105082a0(A...); SCStr * __thiscall FUN_105082c0(SCStr *param_2); template<class... A> int FUN_105082c0(A...); SCStr * __thiscall FUN_10508ad0(SCStr *param_2,int param_3); template<class... A> int FUN_10508ad0(A...); undefined4 * __thiscall FUN_105095e0(undefined4 *param_2,undefined4 *param_3); template<class... A> int FUN_105095e0(A...); undefined4 * __thiscall FUN_10509620(undefined4 *param_2); template<class... A> int FUN_10509620(A...); SCStr * __thiscall FUN_10509650(SCStr *param_2); template<class... A> int FUN_10509650(A...); undefined4 __thiscall FUN_10509980(undefined4 param_2); template<class... A> int FUN_10509980(A...); SCStr * __thiscall FUN_10509c60(SCStr *param_2); template<class... A> int FUN_10509c60(A...); void __thiscall FUN_1050ae30(int param_2); template<class... A> int FUN_1050ae30(A...); void __thiscall FUN_1050ea60(int param_2); template<class... A> int FUN_1050ea60(A...); undefined4 * __thiscall FUN_1050eb60(int *param_2); template<class... A> int FUN_1050eb60(A...); undefined4 * __thiscall FUN_1050eba0(int *param_2); template<class... A> int FUN_1050eba0(A...); undefined4 * __thiscall FUN_1050ebe0(int *param_2); template<class... A> int FUN_1050ebe0(A...); undefined4 * __thiscall FUN_1050ec40(int *param_2); template<class... A> int FUN_1050ec40(A...); undefined4 * __thiscall FUN_105109f0(byte param_2); template<class... A> int FUN_105109f0(A...); undefined4 * __thiscall FUN_10510a40(byte param_2); template<class... A> int FUN_10510a40(A...); undefined4 __thiscall FUN_10510b40(byte param_2); template<class... A> int FUN_10510b40(A...); undefined4 * __thiscall FUN_10510c40(byte param_2); template<class... A> int FUN_10510c40(A...); void __thiscall FUN_10510d30(int param_2); template<class... A> int FUN_10510d30(A...); void __thiscall FUN_10510d60(undefined4 *param_2); template<class... A> int FUN_10510d60(A...); void __thiscall FUN_10510db0(void); template<class... A> int FUN_10510db0(A...); SCStr * __thiscall FUN_10513950(SCStr *param_2,undefined4 param_3); template<class... A> int FUN_10513950(A...); SCStr * __thiscall FUN_10513990(SCStr *param_2); template<class... A> int FUN_10513990(A...); undefined4 * __thiscall FUN_10515050(undefined4 *param_2,undefined4 *param_3); template<class... A> int FUN_10515050(A...); int * __thiscall FUN_105168d0(int *param_2); template<class... A> int FUN_105168d0(A...); int * __thiscall FUN_105169c0(int *param_2); template<class... A> int FUN_105169c0(A...); int * __thiscall FUN_10516c90(int *param_2); template<class... A> int FUN_10516c90(A...); void __thiscall FUN_1051b580(int param_2); template<class... A> int FUN_1051b580(A...); undefined4 * __thiscall FUN_1051b880(int *param_2); template<class... A> int FUN_1051b880(A...); undefined4 * __thiscall FUN_1051d610(byte param_2); template<class... A> int FUN_1051d610(A...); undefined4 * __thiscall FUN_1051d640(byte param_2); template<class... A> int FUN_1051d640(A...); undefined4 * __thiscall FUN_1051d670(byte param_2); template<class... A> int FUN_1051d670(A...); undefined4 * __thiscall FUN_1051d6a0(byte param_2); template<class... A> int FUN_1051d6a0(A...); undefined4 * __thiscall FUN_1051d6d0(byte param_2); template<class... A> int FUN_1051d6d0(A...); undefined4 * __thiscall FUN_1051d700(byte param_2); template<class... A> int FUN_1051d700(A...); undefined4 * __thiscall FUN_1051d730(byte param_2); template<class... A> int FUN_1051d730(A...); undefined4 * __thiscall FUN_1051d760(byte param_2); template<class... A> int FUN_1051d760(A...); undefined4 __thiscall FUN_1051d790(byte param_2); template<class... A> int FUN_1051d790(A...); undefined4 __thiscall FUN_1051dc50(byte param_2); template<class... A> int FUN_1051dc50(A...); undefined4 * __thiscall FUN_1051dc80(byte param_2); template<class... A> int FUN_1051dc80(A...); undefined4 * __thiscall FUN_1051dcd0(byte param_2); template<class... A> int FUN_1051dcd0(A...); undefined4 * __thiscall FUN_1051dd00(byte param_2); template<class... A> int FUN_1051dd00(A...); void __thiscall FUN_1051e090(int param_2); template<class... A> int FUN_1051e090(A...); void __thiscall FUN_10523660(undefined4 param_2); template<class... A> int FUN_10523660(A...); void __thiscall FUN_105236b0(undefined4 param_2); template<class... A> int FUN_105236b0(A...); void __thiscall FUN_105238c0(undefined4 param_2); template<class... A> int FUN_105238c0(A...); void __thiscall FUN_10525980(int param_2); template<class... A> int FUN_10525980(A...); void __thiscall FUN_105259b0(int param_2); template<class... A> int FUN_105259b0(A...); undefined4 * __thiscall FUN_10525b50(int *param_2); template<class... A> int FUN_10525b50(A...); undefined4 * __thiscall FUN_10525c00(int *param_2); template<class... A> int FUN_10525c00(A...); undefined4 * __thiscall FUN_10525c40(int *param_2); template<class... A> int FUN_10525c40(A...); undefined4 * __thiscall FUN_10525ca0(int *param_2); template<class... A> int FUN_10525ca0(A...); undefined4 * __thiscall FUN_1052ad80(byte param_2); template<class... A> int FUN_1052ad80(A...); undefined4 * __thiscall FUN_1052adb0(byte param_2); template<class... A> int FUN_1052adb0(A...); undefined4 * __thiscall FUN_1052ade0(byte param_2); template<class... A> int FUN_1052ade0(A...); undefined4 __thiscall FUN_1052ae10(byte param_2); template<class... A> int FUN_1052ae10(A...); undefined4 * __thiscall FUN_1052ae40(byte param_2); template<class... A> int FUN_1052ae40(A...); undefined4 __thiscall FUN_1052ae70(byte param_2); template<class... A> int FUN_1052ae70(A...); undefined4 * __thiscall FUN_1052aea0(byte param_2); template<class... A> int FUN_1052aea0(A...); undefined4 * __thiscall FUN_1052b200(byte param_2); template<class... A> int FUN_1052b200(A...); undefined4 * __thiscall FUN_1052b230(byte param_2); template<class... A> int FUN_1052b230(A...); undefined4 * __thiscall FUN_1052b4a0(byte param_2); template<class... A> int FUN_1052b4a0(A...); undefined4 * __thiscall FUN_1052bbf0(byte param_2); template<class... A> int FUN_1052bbf0(A...); undefined4 * __thiscall FUN_1052bfd0(byte param_2); template<class... A> int FUN_1052bfd0(A...); undefined4 * __thiscall FUN_1052c000(byte param_2); template<class... A> int FUN_1052c000(A...); undefined4 __thiscall FUN_1052c210(byte param_2); template<class... A> int FUN_1052c210(A...); undefined4 * __thiscall FUN_1052c590(byte param_2); template<class... A> int FUN_1052c590(A...); undefined4 * __thiscall FUN_1052c5d0(byte param_2); template<class... A> int FUN_1052c5d0(A...); undefined4 * __thiscall FUN_1052c710(byte param_2); template<class... A> int FUN_1052c710(A...); void __thiscall FUN_1052da20(int *param_2); template<class... A> int FUN_1052da20(A...); void __thiscall FUN_1052da70(int *param_2); template<class... A> int FUN_1052da70(A...); void __thiscall FUN_1052dac0(int *param_2); template<class... A> int FUN_1052dac0(A...); void __thiscall FUN_1052db10(int *param_2); template<class... A> int FUN_1052db10(A...); void __thiscall FUN_1052db60(int *param_2); template<class... A> int FUN_1052db60(A...); void __thiscall FUN_1052dbb0(int *param_2); template<class... A> int FUN_1052dbb0(A...); void __thiscall FUN_1052dc00(int param_2); template<class... A> int FUN_1052dc00(A...); void __thiscall FUN_1052dc30(int param_2); template<class... A> int FUN_1052dc30(A...); undefined4 __thiscall FUN_10533c20(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10533c20(A...); bool __thiscall FUN_10534e40(int param_2); template<class... A> int FUN_10534e40(A...); SCStr * __thiscall FUN_10534fc0(SCStr *param_2); template<class... A> int FUN_10534fc0(A...); int * __thiscall FUN_10535380(int *param_2); template<class... A> int FUN_10535380(A...); undefined4 __thiscall FUN_10535630(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10535630(A...); undefined4 __thiscall FUN_10535770(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10535770(A...); undefined4 __thiscall FUN_105357c0(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_105357c0(A...); int * __thiscall FUN_10535a90(int *param_2); template<class... A> int FUN_10535a90(A...); int * __thiscall FUN_10535ae0(int *param_2); template<class... A> int FUN_10535ae0(A...); int * __thiscall FUN_10535d30(int *param_2); template<class... A> int FUN_10535d30(A...); undefined4 __thiscall FUN_105361f0(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_105361f0(A...); undefined4 __thiscall FUN_10536220(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10536220(A...); SCStr * __thiscall FUN_10536250(SCStr *param_2); template<class... A> int FUN_10536250(A...); SCStr * __thiscall FUN_10536270(SCStr *param_2); template<class... A> int FUN_10536270(A...); SCStr * __thiscall FUN_10536290(SCStr *param_2); template<class... A> int FUN_10536290(A...); undefined4 __thiscall FUN_10541b60(SCStr *param_2); template<class... A> int FUN_10541b60(A...); void __thiscall FUN_1054af60(int param_2,int param_3); template<class... A> int FUN_1054af60(A...); void __thiscall FUN_1054b5b0(undefined4 param_2,undefined8 param_3); template<class... A> int FUN_1054b5b0(A...); void __thiscall FUN_1054b710(SCStr *param_2); template<class... A> int FUN_1054b710(A...); void __thiscall FUN_1054b740(SCStr *param_2); template<class... A> int FUN_1054b740(A...); void __thiscall FUN_1054bd00(char param_2); template<class... A> int FUN_1054bd00(A...); undefined4 * __thiscall FUN_1054c390(int *param_2); template<class... A> int FUN_1054c390(A...); undefined4 * __thiscall FUN_1054cab0(byte param_2); template<class... A> int FUN_1054cab0(A...); undefined4 * __thiscall FUN_1054cae0(byte param_2); template<class... A> int FUN_1054cae0(A...); undefined4 * __thiscall FUN_1054cb20(byte param_2); template<class... A> int FUN_1054cb20(A...); SCStr * __thiscall FUN_1054cfc0(SCStr *param_2); template<class... A> int FUN_1054cfc0(A...); void __thiscall FUN_1054e0e0(undefined4 param_2); template<class... A> int FUN_1054e0e0(A...); int __thiscall FUN_1054e1f0(SCStr *param_2); template<class... A> int FUN_1054e1f0(A...); void __thiscall FUN_1054ea60(undefined4 *param_2); template<class... A> int FUN_1054ea60(A...); undefined4 * __thiscall FUN_1054edd0(int *param_2); template<class... A> int FUN_1054edd0(A...); undefined4 * __thiscall FUN_1054ee30(int *param_2); template<class... A> int FUN_1054ee30(A...); undefined4 * __thiscall FUN_1054ee70(int *param_2); template<class... A> int FUN_1054ee70(A...); undefined4 * __thiscall FUN_1054ee90(int *param_2); template<class... A> int FUN_1054ee90(A...); undefined4 * __thiscall FUN_10550820(byte param_2); template<class... A> int FUN_10550820(A...); undefined4 __thiscall FUN_10550850(byte param_2); template<class... A> int FUN_10550850(A...); undefined4 * __thiscall FUN_10550af0(byte param_2); template<class... A> int FUN_10550af0(A...); undefined4 __thiscall FUN_10550b20(byte param_2); template<class... A> int FUN_10550b20(A...); undefined4 __thiscall FUN_10550b50(byte param_2); template<class... A> int FUN_10550b50(A...); undefined4 __thiscall FUN_10550c50(byte param_2); template<class... A> int FUN_10550c50(A...); void __thiscall FUN_10550ea0(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10550ea0(A...); void __thiscall FUN_10552010(int *param_2); template<class... A> int FUN_10552010(A...); void __thiscall FUN_105564a0(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_105564a0(A...); void __thiscall FUN_10556c40(undefined4 *param_2); template<class... A> int FUN_10556c40(A...); undefined4 * __thiscall FUN_105587d0(int *param_2); template<class... A> int FUN_105587d0(A...); undefined4 * __thiscall FUN_10558810(int *param_2); template<class... A> int FUN_10558810(A...); undefined4 * __thiscall FUN_10558850(int *param_2); template<class... A> int FUN_10558850(A...); undefined4 * __thiscall FUN_105588b0(int *param_2); template<class... A> int FUN_105588b0(A...); undefined4 * __thiscall FUN_105588f0(int *param_2); template<class... A> int FUN_105588f0(A...); undefined4 * __thiscall FUN_1055a570(byte param_2); template<class... A> int FUN_1055a570(A...); undefined4 * __thiscall FUN_1055a5a0(byte param_2); template<class... A> int FUN_1055a5a0(A...); undefined4 * __thiscall FUN_1055a910(byte param_2); template<class... A> int FUN_1055a910(A...); undefined4 __thiscall FUN_1055abe0(byte param_2); template<class... A> int FUN_1055abe0(A...); undefined4 * __thiscall FUN_1055afd0(byte param_2); template<class... A> int FUN_1055afd0(A...); void __thiscall FUN_1055b730(int *param_2); template<class... A> int FUN_1055b730(A...); SCStr * __thiscall FUN_1055d3c0(SCStr *param_2); template<class... A> int FUN_1055d3c0(A...); SCStr * __thiscall FUN_1055d400(SCStr *param_2); template<class... A> int FUN_1055d400(A...); SCStr * __thiscall FUN_1055d580(SCStr *param_2); template<class... A> int FUN_1055d580(A...); SCStr * __thiscall FUN_1055d5c0(SCStr *param_2); template<class... A> int FUN_1055d5c0(A...); SCStr * __thiscall FUN_1055db90(SCStr *param_2); template<class... A> int FUN_1055db90(A...); SCStr * __thiscall FUN_1055dbe0(SCStr *param_2); template<class... A> int FUN_1055dbe0(A...); int * __thiscall FUN_1055dc90(int *param_2); template<class... A> int FUN_1055dc90(A...); undefined4 * __thiscall FUN_105600b0(int *param_2); template<class... A> int FUN_105600b0(A...); undefined4 * __thiscall FUN_105600f0(int *param_2); template<class... A> int FUN_105600f0(A...); void __thiscall FUN_10562940(int param_2); template<class... A> int FUN_10562940(A...); void __thiscall FUN_10562970(int param_2); template<class... A> int FUN_10562970(A...); void __thiscall FUN_105629a0(int param_2); template<class... A> int FUN_105629a0(A...); void __thiscall FUN_105629d0(int param_2); template<class... A> int FUN_105629d0(A...); undefined4 * __thiscall FUN_10562e90(int *param_2); template<class... A> int FUN_10562e90(A...); undefined4 * __thiscall FUN_10562ed0(int *param_2); template<class... A> int FUN_10562ed0(A...); undefined4 * __thiscall FUN_10562f10(int *param_2); template<class... A> int FUN_10562f10(A...); undefined4 * __thiscall FUN_10562f50(int *param_2); template<class... A> int FUN_10562f50(A...); undefined4 * __thiscall FUN_10562f90(int *param_2); template<class... A> int FUN_10562f90(A...); undefined4 * __thiscall FUN_10562ff0(int *param_2); template<class... A> int FUN_10562ff0(A...); undefined4 * __thiscall FUN_10563030(int *param_2); template<class... A> int FUN_10563030(A...); undefined4 * __thiscall FUN_10563070(int *param_2); template<class... A> int FUN_10563070(A...); undefined4 * __thiscall FUN_105630b0(int *param_2); template<class... A> int FUN_105630b0(A...); undefined4 * __thiscall FUN_10563120(int *param_2); template<class... A> int FUN_10563120(A...); undefined4 __thiscall FUN_10566db0(int param_2); template<class... A> int FUN_10566db0(A...); undefined4 * __thiscall FUN_10566ea0(byte param_2); template<class... A> int FUN_10566ea0(A...); undefined4 * __thiscall FUN_10566ed0(byte param_2); template<class... A> int FUN_10566ed0(A...); undefined4 __thiscall FUN_10566f10(byte param_2); template<class... A> int FUN_10566f10(A...); undefined4 * __thiscall FUN_10566f40(byte param_2); template<class... A> int FUN_10566f40(A...); undefined4 * __thiscall FUN_10566f90(byte param_2); template<class... A> int FUN_10566f90(A...); undefined4 * __thiscall FUN_10566fe0(byte param_2); template<class... A> int FUN_10566fe0(A...); undefined4 * __thiscall FUN_10567030(byte param_2); template<class... A> int FUN_10567030(A...); undefined4 * __thiscall FUN_10567320(byte param_2); template<class... A> int FUN_10567320(A...); undefined4 * __thiscall FUN_10567460(byte param_2); template<class... A> int FUN_10567460(A...); undefined4 * __thiscall FUN_10567ae0(byte param_2); template<class... A> int FUN_10567ae0(A...); undefined4 __thiscall FUN_10567b20(byte param_2); template<class... A> int FUN_10567b20(A...); void __thiscall FUN_1056d380(int *param_2); template<class... A> int FUN_1056d380(A...); void __thiscall FUN_1056d3d0(int *param_2); template<class... A> int FUN_1056d3d0(A...); void __thiscall FUN_1056d420(int param_2); template<class... A> int FUN_1056d420(A...); void __thiscall FUN_1056d450(int param_2); template<class... A> int FUN_1056d450(A...); void __thiscall FUN_1056d480(int param_2); template<class... A> int FUN_1056d480(A...); void __thiscall FUN_1056d4b0(int param_2); template<class... A> int FUN_1056d4b0(A...); SCStr * __thiscall FUN_10574790(SCStr *param_2); template<class... A> int FUN_10574790(A...); SCStr * __thiscall FUN_105747e0(SCStr *param_2); template<class... A> int FUN_105747e0(A...); SCStr * __thiscall FUN_105749b0(SCStr *param_2); template<class... A> int FUN_105749b0(A...); SCStr * __thiscall FUN_10574e60(SCStr *param_2); template<class... A> int FUN_10574e60(A...); void __thiscall FUN_10576160(int *param_2); template<class... A> int FUN_10576160(A...); undefined4 * __thiscall FUN_10579850(int *param_2); template<class... A> int FUN_10579850(A...); undefined4 * __thiscall FUN_10579890(int *param_2); template<class... A> int FUN_10579890(A...); undefined4 * __thiscall FUN_105798f0(int *param_2); template<class... A> int FUN_105798f0(A...); undefined4 * __thiscall FUN_10579960(int *param_2); template<class... A> int FUN_10579960(A...); undefined4 * __thiscall FUN_105799a0(int *param_2); template<class... A> int FUN_105799a0(A...); undefined4 * __thiscall FUN_1057c200(byte param_2); template<class... A> int FUN_1057c200(A...); undefined4 * __thiscall FUN_1057c250(byte param_2); template<class... A> int FUN_1057c250(A...); undefined4 * __thiscall FUN_1057c2a0(byte param_2); template<class... A> int FUN_1057c2a0(A...); undefined4 * __thiscall FUN_1057c2f0(byte param_2); template<class... A> int FUN_1057c2f0(A...); undefined4 __thiscall FUN_1057ca70(byte param_2); template<class... A> int FUN_1057ca70(A...); undefined4 * __thiscall FUN_1057cdf0(byte param_2); template<class... A> int FUN_1057cdf0(A...); void __thiscall FUN_1057d590(void); template<class... A> int FUN_1057d590(A...); SCStr * __thiscall FUN_10581a60(SCStr *param_2); template<class... A> int FUN_10581a60(A...); bool __thiscall FUN_10585890(undefined4 param_2); template<class... A> int FUN_10585890(A...); undefined4 __thiscall FUN_10585f20(undefined4 param_2); template<class... A> int FUN_10585f20(A...); undefined4 * __thiscall FUN_10586670(int *param_2); template<class... A> int FUN_10586670(A...); undefined4 * __thiscall FUN_105866b0(int *param_2); template<class... A> int FUN_105866b0(A...); undefined4 * __thiscall FUN_10586710(int *param_2); template<class... A> int FUN_10586710(A...); undefined4 * __thiscall FUN_10588fe0(byte param_2); template<class... A> int FUN_10588fe0(A...); undefined4 * __thiscall FUN_10589010(byte param_2); template<class... A> int FUN_10589010(A...); undefined4 * __thiscall FUN_10589040(byte param_2); template<class... A> int FUN_10589040(A...); undefined4 __thiscall FUN_10589080(byte param_2); template<class... A> int FUN_10589080(A...); undefined4 __thiscall FUN_10589670(byte param_2); template<class... A> int FUN_10589670(A...); undefined4 * __thiscall FUN_105897c0(byte param_2); template<class... A> int FUN_105897c0(A...); undefined4 * __thiscall FUN_105897f0(byte param_2); template<class... A> int FUN_105897f0(A...); undefined4 * __thiscall FUN_10589820(byte param_2); template<class... A> int FUN_10589820(A...); SCStr * __thiscall FUN_1058de30(SCStr *param_2); template<class... A> int FUN_1058de30(A...); SCStr * __thiscall FUN_1058de60(SCStr *param_2); template<class... A> int FUN_1058de60(A...); int __thiscall FUN_1058ec70(int param_2); template<class... A> int FUN_1058ec70(A...); SCStr * __thiscall FUN_10590620(SCStr *param_2); template<class... A> int FUN_10590620(A...); undefined4 __thiscall FUN_10590f60(undefined4 param_2); template<class... A> int FUN_10590f60(A...); undefined4 __thiscall FUN_10590f80(undefined4 param_2); template<class... A> int FUN_10590f80(A...); void __thiscall FUN_105917c0(undefined4 param_2); template<class... A> int FUN_105917c0(A...); void __thiscall FUN_10592e90(undefined4 param_2); template<class... A> int FUN_10592e90(A...); void __thiscall FUN_10593ce0(undefined4 param_2); template<class... A> int FUN_10593ce0(A...); int __thiscall FUN_10593dd0(SCStr *param_2); template<class... A> int FUN_10593dd0(A...); undefined4 * __thiscall FUN_10594990(int *param_2); template<class... A> int FUN_10594990(A...); undefined4 * __thiscall FUN_105949f0(int *param_2); template<class... A> int FUN_105949f0(A...); undefined4 __thiscall FUN_10595a80(byte param_2); template<class... A> int FUN_10595a80(A...); undefined4 __thiscall FUN_10595ab0(byte param_2); template<class... A> int FUN_10595ab0(A...); void __thiscall FUN_10595f70(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10595f70(A...); void __thiscall FUN_10596a90(int *param_2); template<class... A> int FUN_10596a90(A...); int __thiscall FUN_1059b720(uint *param_2); template<class... A> int FUN_1059b720(A...); undefined4 __thiscall FUN_1059c3d0(byte param_2); template<class... A> int FUN_1059c3d0(A...); undefined4 * __thiscall FUN_1059da00(int *param_2); template<class... A> int FUN_1059da00(A...); int * __thiscall FUN_1059e630(int *param_2); template<class... A> int FUN_1059e630(A...); int __thiscall FUN_1059f160(int *param_2); template<class... A> int FUN_1059f160(A...); undefined4 * __thiscall FUN_1059ff10(undefined4 param_2); template<class... A> int FUN_1059ff10(A...); undefined4 * __thiscall FUN_1059ff40(undefined4 param_2); template<class... A> int FUN_1059ff40(A...); undefined4 __thiscall FUN_105a0c80(byte param_2); template<class... A> int FUN_105a0c80(A...); undefined4 __thiscall FUN_105a0cb0(byte param_2); template<class... A> int FUN_105a0cb0(A...); undefined4 * __thiscall FUN_105a0d80(byte param_2); template<class... A> int FUN_105a0d80(A...); uint __thiscall FUN_105a2bb0(int param_2); template<class... A> int FUN_105a2bb0(A...); uint __thiscall FUN_105a2bf0(int param_2); template<class... A> int FUN_105a2bf0(A...); };

extern int FUN_100517a8(...);
extern int FUN_10065348(...);
extern int FUN_1006aac8(...);
extern int FUN_10070892(...);
extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern int createPropertyBag(...);
extern int createSCIntArray(...);
extern int deselectAll(...);
extern int failed(...);
extern int getSingleton(...);
extern int hash(...);
extern int int_addref(...);
extern int int_allocRep(...);
extern int int_release(...);
extern int length(...);
extern int op_assign(...);
extern int op_ctor(...);
extern int op_dtor(...);
extern int op_eq(...);
extern int op_lt(...);
extern int operator_new(...);
extern __declspec(dllimport) int strtoul(...);
extern int thunk_FUN_101b9ba0(...);
extern int thunk_FUN_101ba0d0(...);
extern int thunk_FUN_101c42f0(...);
extern int thunk_FUN_101c6ae0(...);
extern int thunk_FUN_101ff410(...);
extern int thunk_FUN_10202e00(...);
extern int thunk_FUN_102082f0(...);
extern int thunk_FUN_10208940(...);
extern int thunk_FUN_10208c50(...);
extern int thunk_FUN_1020b530(...);
extern int thunk_FUN_1020fe60(...);
extern int thunk_FUN_10210390(...);
extern int thunk_FUN_102105a0(...);
extern int thunk_FUN_10210700(...);
extern int thunk_FUN_102111f0(...);
extern int thunk_FUN_10217af0(...);
extern int thunk_FUN_10219a00(...);
extern int thunk_FUN_1021bf80(...);
extern int thunk_FUN_1021cc40(...);
extern int thunk_FUN_102207b0(...);
extern int thunk_FUN_1026e620(...);
extern int thunk_FUN_102d65b0(...);
extern int thunk_FUN_103beae0(...);
extern int thunk_FUN_103d60a0(...);
extern int thunk_FUN_103d61d0(...);
extern int thunk_FUN_103d63d0(...);
extern int thunk_FUN_103d65f0(...);
extern int thunk_FUN_103d6930(...);
extern int thunk_FUN_104d4740(...);
extern int thunk_FUN_104d6780(...);
extern int thunk_FUN_104d68b0(...);
extern int thunk_FUN_104d98f0(...);
extern int thunk_FUN_104d9cc0(...);
extern int thunk_FUN_104da760(...);
extern int thunk_FUN_104dc060(...);
extern int thunk_FUN_104dec20(...);
extern int thunk_FUN_104dfcb0(...);
extern int thunk_FUN_104dfd50(...);
extern int thunk_FUN_104dff70(...);
extern int thunk_FUN_104e0170(...);
extern int thunk_FUN_104e04f0(...);
extern int thunk_FUN_104e05c0(...);
extern int thunk_FUN_104e0690(...);
extern int thunk_FUN_104e0760(...);
extern int thunk_FUN_104e0880(...);
extern int thunk_FUN_104e0ca0(...);
extern int thunk_FUN_104e0f40(...);
extern int thunk_FUN_104e11c0(...);
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
extern int thunk_FUN_104f8780(...);
extern int thunk_FUN_104f8a70(...);
extern int thunk_FUN_104f8c40(...);
extern int thunk_FUN_104f8cb0(...);
extern int thunk_FUN_104f8fb0(...);
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
extern int thunk_FUN_1054dd50(...);
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
extern int thunk_FUN_1059d5a0(...);
extern int thunk_FUN_1059d940(...);
extern int thunk_FUN_1059f110(...);
extern int thunk_FUN_1059f1a0(...);
extern int thunk_FUN_105a1c80(...);
extern int thunk_FUN_105a1d20(...);
extern int thunk_FUN_10db8460(...);
extern int thunk_FUN_10dd3060(...);
extern int thunk_FUN_10dd4b80(...);
extern int thunk_FUN_10de8ec0(...);
extern int thunk_FUN_10def0d0(...);
extern int thunk_FUN_1109aba0(...);
extern int thunk_FUN_110a5ba0(...);
extern int thunk_FUN_110adac0(...);
extern int thunk_FUN_110b0460(...);
extern int thunk_FUN_110b2900(...);
extern int thunk_FUN_110c1f30(...);
extern int thunk_FUN_110c2c60(...);
extern int thunk_FUN_11128910(...);
extern int thunk_FUN_1113ecc0(...);
extern int thunk_FUN_111a05c0(...);
extern int thunk_FUN_111a05e0(...);
extern int thunk_FUN_111a0620(...);
extern int thunk_FUN_111a36f0(...);
extern int thunk_FUN_111a4bc0(...);
extern int thunk_FUN_111c0af0(...);
extern int thunk_FUN_11202570(...);
extern int thunk_FUN_1123fce0(...);
extern int thunk_FUN_11240850(...);
extern int thunk_FUN_1124ffa0(...);
extern int thunk_FUN_11285a90(...);
extern int thunk_FUN_112af4e0(...);
extern int thunk_FUN_1148a50e(...);
extern int DAT_118823e4;
extern int DAT_11882ff0;
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
extern int ghidra_vftable_RUpnpAVTAddMultipleURIsToQueueAIOOp;
extern int ghidra_vftable_RUpnpAVTCreateSavedQueueAIOOp;
extern int ghidra_vftable_RUpnpAVTGetMediaInfoAIOOp;
extern int ghidra_vftable_RUpnpAVTPlayAIOOp;
extern int ghidra_vftable_RUpnpAVTSetAVTransportURIAIOOp;
extern int ghidra_vftable_RUpnpCDDestroyObjectAIOOp;
extern int ghidra_vftable_RUpnpCDUpdateObjectAIOOp;
extern int ghidra_vftable_RUpnpSPSetAccountNicknameXAIOOp;
extern int ghidra_vftable_SCAddPlaylistAction;
extern int ghidra_vftable_SCAddQueueOp;
extern int ghidra_vftable_SCArray;
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
extern int ghidra_vftable_SCRenamePlaylistAction;
extern int ghidra_vftable_SCSwfObjBCInternalListener;
extern int ghidra_vftable_SCSwfObjHHInternalListener;
extern int ghidra_vftable_SCWizardState;
extern int ghidra_vftable_std_Func_impl_no_alloc;
extern int ghidra_vftable_std_basic_ostringstream;
extern int in_EAX;
extern int in_stack_00000010;
extern int in_stack_00000014;
extern int uStack00000004;
extern int uStack_8;
extern int uStack_c;
extern undefined1 LAB_1050ae52[];
extern undefined1 LAB_1158a050[];
extern undefined1 LAB_1158a080[];
extern undefined1 LAB_1158b700[];
extern undefined1 LAB_1158d570[];
extern undefined1 LAB_1158d5a0[];
extern undefined1 LAB_1158f7e0[];
extern undefined1 LAB_115982d0[];
extern undefined1 LAB_11599d40[];
extern int *stack0xfffffffc;
extern void *ExceptionList;
void __fastcall FUN_104d7e60(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
void __fastcall FUN_104d7e60(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
void __fastcall FUN_104d8270(undefined4 *param_1);
extern void __fastcall FUN_104d8270(...);
void __stdcall FUN_104d8290(int param_1,int param_2);
void __stdcall FUN_104d8290(int param_1,int param_2);
SCStr * __stdcall FUN_104d8510(SCStr *param_1);
SCStr * __stdcall FUN_104d8510(SCStr *param_1);
SCStr * __stdcall FUN_104d8550(SCStr *param_1);
SCStr * __stdcall FUN_104d8550(SCStr *param_1);
undefined4 __stdcall FUN_104d9010(int param_1);
undefined4 __stdcall FUN_104d9010(int param_1);
undefined4 __stdcall FUN_104d9030(int param_1);
undefined4 __stdcall FUN_104d9030(int param_1);
SCStr * __stdcall FUN_104d9270(SCStr *param_1);
SCStr * __stdcall FUN_104d9270(SCStr *param_1);
undefined4 FUN_104d9780(undefined4 param_1);
extern undefined4 FUN_104d9780(...);
void __fastcall FUN_104d9cc0(int param_1);
extern void __fastcall FUN_104d9cc0(...);
void __fastcall FUN_104da5f0(undefined4 *param_1);
extern void __fastcall FUN_104da5f0(...);
SCStr * __stdcall FUN_104da990(SCStr *param_1);
SCStr * __stdcall FUN_104da990(SCStr *param_1);
SCStr * __stdcall FUN_104dac40(SCStr *param_1);
SCStr * __stdcall FUN_104dac40(SCStr *param_1);
SCStr * __stdcall FUN_104dacd0(SCStr *param_1);
SCStr * __stdcall FUN_104dacd0(SCStr *param_1);
SCStr * __stdcall FUN_104db0d0(SCStr *param_1);
SCStr * __stdcall FUN_104db0d0(SCStr *param_1);
SCStr * __stdcall FUN_104db100(SCStr *param_1, unsigned int recovered_unused_stack_0);
SCStr * __stdcall FUN_104db100(SCStr *param_1, unsigned int recovered_unused_stack_0);
SCStr * __stdcall FUN_104db600(SCStr *param_1);
SCStr * __stdcall FUN_104db600(SCStr *param_1);
void __fastcall FUN_104dc0f0(undefined4 *param_1);
extern void __fastcall FUN_104dc0f0(...);
void __fastcall FUN_104dccd0(int param_1);
extern void __fastcall FUN_104dccd0(...);
void __fastcall FUN_104dce00(int param_1);
extern void __fastcall FUN_104dce00(...);
int __fastcall FUN_104dd0e0(int param_1);
extern int __fastcall FUN_104dd0e0(...);
uint __fastcall FUN_104dd520(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
uint __fastcall FUN_104dd520(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_104dd540(int param_1);
extern void __fastcall FUN_104dd540(...);
void __fastcall FUN_104dd5a0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_104dd5a0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_104ddf60(int param_1);
extern void __fastcall FUN_104ddf60(...);
void __fastcall FUN_104ddf90(int param_1);
extern void __fastcall FUN_104ddf90(...);
undefined4 * __fastcall FUN_104e2dd0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_104e2dd0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_104e2e00(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_104e2e00(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_104e2e30(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_104e2e30(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_104e3740(int param_1);
extern void __fastcall FUN_104e3740(...);
void __fastcall FUN_104e3760(int param_1);
extern void __fastcall FUN_104e3760(...);
void __fastcall FUN_104e3780(int param_1);
extern void __fastcall FUN_104e3780(...);
void __fastcall FUN_104e3b20(int param_1);
extern void __fastcall FUN_104e3b20(...);
void __fastcall FUN_104e3ca0(undefined4 *param_1);
extern void __fastcall FUN_104e3ca0(...);
void __fastcall FUN_104e3cc0(undefined4 *param_1);
extern void __fastcall FUN_104e3cc0(...);
void __fastcall FUN_104e3ce0(undefined4 *param_1);
extern void __fastcall FUN_104e3ce0(...);
void __fastcall FUN_104e3d60(undefined4 *param_1);
extern void __fastcall FUN_104e3d60(...);
void __fastcall FUN_104e40d0(undefined4 *param_1);
extern void __fastcall FUN_104e40d0(...);
int __stdcall FUN_104e4970(undefined4 param_1);
int __stdcall FUN_104e4970(undefined4 param_1);
int __stdcall FUN_104e49a0(undefined4 param_1);
int __stdcall FUN_104e49a0(undefined4 param_1);
int __stdcall FUN_104e49d0(undefined4 param_1);
int __stdcall FUN_104e49d0(undefined4 param_1);
void __fastcall FUN_104e5100(int param_1);
extern void __fastcall FUN_104e5100(...);
void __fastcall FUN_104e5120(int param_1);
extern void __fastcall FUN_104e5120(...);
void __fastcall FUN_104e5140(int param_1);
extern void __fastcall FUN_104e5140(...);
void __fastcall FUN_104e6ab0(int param_1);
extern void __fastcall FUN_104e6ab0(...);
void __fastcall FUN_104e6b80(int param_1);
extern void __fastcall FUN_104e6b80(...);
void __fastcall FUN_104e6df0(undefined4 *param_1);
extern void __fastcall FUN_104e6df0(...);
void __fastcall FUN_104e6e70(undefined4 *param_1);
extern void __fastcall FUN_104e6e70(...);
void __fastcall FUN_104e9b60(int *param_1);
extern void __fastcall FUN_104e9b60(...);
void __fastcall FUN_104e9bf0(int *param_1);
extern void __fastcall FUN_104e9bf0(...);
void __fastcall FUN_104e9c20(undefined4 *param_1);
extern void __fastcall FUN_104e9c20(...);
void __stdcall FUN_104e9f10(int param_1,int param_2);
void __stdcall FUN_104e9f10(int param_1,int param_2);
void __stdcall FUN_104e9f60(int param_1,int param_2);
void __stdcall FUN_104e9f60(int param_1,int param_2);
SCStr * __stdcall FUN_104ea0a0(SCStr *param_1);
SCStr * __stdcall FUN_104ea0a0(SCStr *param_1);
void __fastcall FUN_104ea0c0(undefined4 *param_1);
extern void __fastcall FUN_104ea0c0(...);
void __stdcall FUN_104ec220(SCStr *param_1, SCStr *param_2, unsigned int recovered_unused_stack_0);
void __stdcall FUN_104ec220(SCStr *param_1, SCStr *param_2, unsigned int recovered_unused_stack_0);
void __fastcall FUN_104ed650(int param_1);
extern void __fastcall FUN_104ed650(...);
SCStr * __stdcall FUN_104ede50(SCStr *param_1);
SCStr * __stdcall FUN_104ede50(SCStr *param_1);
void __fastcall FUN_104ede70(undefined4 *param_1);
extern void __fastcall FUN_104ede70(...);
void __fastcall FUN_104edeb0(undefined4 *param_1);
extern void __fastcall FUN_104edeb0(...);
void __fastcall FUN_104ee000(int *param_1);
extern void __fastcall FUN_104ee000(...);
int __fastcall FUN_104ee0a0(int param_1);
extern int __fastcall FUN_104ee0a0(...);
void __fastcall FUN_104eefb0(int param_1);
extern void __fastcall FUN_104eefb0(...);
void __fastcall FUN_104ef270(int *param_1);
extern void __fastcall FUN_104ef270(...);
undefined4 * __fastcall FUN_104f9e70(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_104f9e70(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_104fa0a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_104fa0a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_104fa830(undefined4 *param_1);
extern void __fastcall FUN_104fa830(...);
void __fastcall FUN_104fab60(int *param_1);
extern void __fastcall FUN_104fab60(...);
void __fastcall FUN_104fabc0(int *param_1);
extern void __fastcall FUN_104fabc0(...);
void __fastcall FUN_104fac20(int param_1);
extern void __fastcall FUN_104fac20(...);
void __fastcall FUN_104fac40(int param_1);
extern void __fastcall FUN_104fac40(...);
void __fastcall FUN_104fade0(int *param_1);
extern void __fastcall FUN_104fade0(...);
void __fastcall FUN_104faec0(int param_1);
extern void __fastcall FUN_104faec0(...);
void __fastcall FUN_104faef0(undefined4 *param_1);
extern void __fastcall FUN_104faef0(...);
void __fastcall FUN_104faf10(undefined4 *param_1);
extern void __fastcall FUN_104faf10(...);
void __fastcall FUN_104faf30(int *param_1);
extern void __fastcall FUN_104faf30(...);
int __stdcall FUN_104fb850(undefined4 param_1);
int __stdcall FUN_104fb850(undefined4 param_1);
void __fastcall FUN_104fc010(int param_1);
extern void __fastcall FUN_104fc010(...);
void __fastcall FUN_104fc030(int param_1);
extern void __fastcall FUN_104fc030(...);
int * FUN_104fcf30(int *param_1);
extern int * FUN_104fcf30(...);
void __fastcall FUN_104fd1d0(undefined4 *param_1);
extern void __fastcall FUN_104fd1d0(...);
void __fastcall FUN_104fd940(int *param_1);
extern void __fastcall FUN_104fd940(...);
void __fastcall FUN_104fd970(int *param_1);
extern void __fastcall FUN_104fd970(...);
void __stdcall FUN_104fde60(int param_1,int param_2);
void __stdcall FUN_104fde60(int param_1,int param_2);
undefined4 __stdcall FUN_104ffd30(undefined4 param_1);
undefined4 __stdcall FUN_104ffd30(undefined4 param_1);
void __stdcall FUN_10500110(undefined4 param_1,int *param_2);
void __stdcall FUN_10500110(undefined4 param_1,int *param_2);
undefined4 * __fastcall FUN_10500760(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10500760(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_105007a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_105007a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_10503090(undefined4 *param_1);
extern void __fastcall FUN_10503090(...);
void __fastcall FUN_105030d0(undefined4 *param_1);
extern void __fastcall FUN_105030d0(...);
void __fastcall FUN_10503240(int *param_1);
extern void __fastcall FUN_10503240(...);
void __fastcall FUN_105032f0(int *param_1);
extern void __fastcall FUN_105032f0(...);
void __fastcall FUN_10503330(int *param_1);
extern void __fastcall FUN_10503330(...);
void __fastcall FUN_10503690(undefined4 *param_1);
extern void __fastcall FUN_10503690(...);
void __fastcall FUN_10503780(undefined4 *param_1);
extern void __fastcall FUN_10503780(...);
void __fastcall FUN_105037c0(undefined4 *param_1);
extern void __fastcall FUN_105037c0(...);
void __fastcall FUN_10503910(undefined4 *param_1);
extern void __fastcall FUN_10503910(...);
void FUN_10503d30(void);
extern void FUN_10503d30(...);
void __fastcall FUN_10503d50(undefined4 *param_1);
extern void __fastcall FUN_10503d50(...);
void __fastcall FUN_10503d80(int param_1);
extern void __fastcall FUN_10503d80(...);
void FUN_10503ef0(void);
extern void FUN_10503ef0(...);
void FUN_10504240(void);
extern void FUN_10504240(...);
void __fastcall FUN_10504260(undefined4 *param_1);
extern void __fastcall FUN_10504260(...);
void __fastcall FUN_10504370(undefined4 *param_1);
extern void __fastcall FUN_10504370(...);
undefined4 * __stdcall FUN_105056e0(undefined4 *param_1);
undefined4 * __stdcall FUN_105056e0(undefined4 *param_1);
undefined4 * __stdcall FUN_105057b0(undefined4 *param_1);
undefined4 * __stdcall FUN_105057b0(undefined4 *param_1);
undefined4 * __stdcall FUN_10505800(undefined4 *param_1);
undefined4 * __stdcall FUN_10505800(undefined4 *param_1);
int __fastcall FUN_10505b50(int *param_1);
extern int __fastcall FUN_10505b50(...);
undefined4 __fastcall FUN_105077d0(int *param_1);
extern undefined4 __fastcall FUN_105077d0(...);
SCStr * __stdcall FUN_10507cd0(SCStr *param_1);
SCStr * __stdcall FUN_10507cd0(SCStr *param_1);
SCStr * __stdcall FUN_10508240(SCStr *param_1);
SCStr * __stdcall FUN_10508240(SCStr *param_1);
SCStr * __stdcall FUN_105088c0(SCStr *param_1, unsigned int recovered_unused_stack_0);
SCStr * __stdcall FUN_105088c0(SCStr *param_1, unsigned int recovered_unused_stack_0);
SCStr * __stdcall FUN_105089e0(SCStr *param_1, unsigned int recovered_unused_stack_0);
SCStr * __stdcall FUN_105089e0(SCStr *param_1, unsigned int recovered_unused_stack_0);
SCStr * __stdcall FUN_10508a00(SCStr *param_1, unsigned int recovered_unused_stack_0);
SCStr * __stdcall FUN_10508a00(SCStr *param_1, unsigned int recovered_unused_stack_0);
undefined4 __fastcall FUN_10509940(int *param_1);
extern undefined4 __fastcall FUN_10509940(...);
uint __fastcall FUN_1050a980(int param_1);
extern uint __fastcall FUN_1050a980(...);
uint __fastcall FUN_1050a9e0(int param_1);
extern uint __fastcall FUN_1050a9e0(...);
bool __fastcall FUN_1050aa40(int param_1);
extern bool __fastcall FUN_1050aa40(...);
void __fastcall FUN_1050aac0(int *param_1);
extern void __fastcall FUN_1050aac0(...);
undefined4 __fastcall FUN_1050aae0(int *param_1);
extern undefined4 __fastcall FUN_1050aae0(...);
void __fastcall FUN_1050adb0(int *param_1);
extern void __fastcall FUN_1050adb0(...);
void __fastcall FUN_1050adf0(int *param_1);
extern void __fastcall FUN_1050adf0(...);
void __stdcall FUN_1050e590(int param_1);
void __stdcall FUN_1050e590(int param_1);
void __fastcall FUN_1050fcf0(undefined4 *param_1);
extern void __fastcall FUN_1050fcf0(...);
void __fastcall FUN_1050fd60(undefined4 *param_1);
extern void __fastcall FUN_1050fd60(...);
void __fastcall FUN_1050ff30(int *param_1);
extern void __fastcall FUN_1050ff30(...);
void __fastcall FUN_1050ff90(int *param_1);
extern void __fastcall FUN_1050ff90(...);
void __fastcall FUN_105106c0(undefined4 *param_1);
extern void __fastcall FUN_105106c0(...);
int __fastcall FUN_10510cb0(int *param_1);
extern int __fastcall FUN_10510cb0(...);
void __fastcall FUN_10511170(undefined4 *param_1);
extern void __fastcall FUN_10511170(...);
void __fastcall FUN_10513690(undefined4 *param_1);
extern void __fastcall FUN_10513690(...);
void __fastcall FUN_105136d0(int *param_1);
extern void __fastcall FUN_105136d0(...);
undefined4 __fastcall FUN_10513930(int param_1);
extern undefined4 __fastcall FUN_10513930(...);
undefined4 __fastcall FUN_10513af0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 __fastcall FUN_10513af0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 __fastcall FUN_10514040(int param_1);
extern undefined4 __fastcall FUN_10514040(...);
undefined4 __fastcall FUN_10514290(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 __fastcall FUN_10514290(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 __fastcall FUN_105142b0(int param_1);
extern undefined4 __fastcall FUN_105142b0(...);
undefined4 __fastcall FUN_10515150(int param_1);
extern undefined4 __fastcall FUN_10515150(...);
SCStr * __stdcall FUN_10516880(SCStr *param_1);
SCStr * __stdcall FUN_10516880(SCStr *param_1);
undefined4 __fastcall FUN_105169a0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 __fastcall FUN_105169a0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_10516cd0(int param_1);
extern void __fastcall FUN_10516cd0(...);
undefined4 __fastcall FUN_10516e40(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 __fastcall FUN_10516e40(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 __fastcall FUN_10517030(int param_1);
extern undefined4 __fastcall FUN_10517030(...);
undefined4 __fastcall FUN_10517060(int param_1);
extern undefined4 __fastcall FUN_10517060(...);
void __fastcall FUN_105171a0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_105171a0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_105171d0(int param_1);
extern void __fastcall FUN_105171d0(...);
undefined4 __fastcall FUN_1051a170(int param_1);
extern undefined4 __fastcall FUN_1051a170(...);
uint __fastcall FUN_1051a4a0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
uint __fastcall FUN_1051a4a0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
uint __fastcall FUN_1051a4c0(int param_1);
extern uint __fastcall FUN_1051a4c0(...);
void __stdcall FUN_1051b480(int param_1);
void __stdcall FUN_1051b480(int param_1);
void FUN_1051d480(void);
extern void FUN_1051d480(...);
SCStr * __stdcall FUN_1051f960(SCStr *param_1);
SCStr * __stdcall FUN_1051f960(SCStr *param_1);
SCStr * __stdcall FUN_1051f980(SCStr *param_1);
SCStr * __stdcall FUN_1051f980(SCStr *param_1);
SCStr * __stdcall FUN_1051f9a0(SCStr *param_1);
SCStr * __stdcall FUN_1051f9a0(SCStr *param_1);
SCStr * __stdcall FUN_1051f9c0(SCStr *param_1);
SCStr * __stdcall FUN_1051f9c0(SCStr *param_1);
SCStr * __stdcall FUN_1051f9e0(SCStr *param_1);
SCStr * __stdcall FUN_1051f9e0(SCStr *param_1);
void __fastcall FUN_1051fa00(undefined4 *param_1);
extern void __fastcall FUN_1051fa00(...);
void __fastcall FUN_1051fa40(undefined4 *param_1);
extern void __fastcall FUN_1051fa40(...);
SCStr * __stdcall FUN_105208d0(SCStr *param_1);
SCStr * __stdcall FUN_105208d0(SCStr *param_1);
SCStr * __stdcall FUN_10520900(SCStr *param_1);
SCStr * __stdcall FUN_10520900(SCStr *param_1);
SCStr * __stdcall FUN_10520930(SCStr *param_1);
SCStr * __stdcall FUN_10520930(SCStr *param_1);
SCStr * __stdcall FUN_10520990(SCStr *param_1);
SCStr * __stdcall FUN_10520990(SCStr *param_1);
int __fastcall FUN_105209f0(int param_1);
extern int __fastcall FUN_105209f0(...);
void __stdcall FUN_10523d10(SCStr *param_1);
void __stdcall FUN_10523d10(SCStr *param_1);
undefined4 __fastcall FUN_1052dfd0(int param_1);
extern undefined4 __fastcall FUN_1052dfd0(...);
int __fastcall FUN_1052e200(int param_1);
extern int __fastcall FUN_1052e200(...);
int __fastcall FUN_1052e5b0(int param_1);
extern int __fastcall FUN_1052e5b0(...);
uint __fastcall FUN_1052e790(int *param_1);
extern uint __fastcall FUN_1052e790(...);
void __fastcall FUN_1052e820(int param_1);
extern void __fastcall FUN_1052e820(...);
void __fastcall FUN_1052e850(int param_1);
extern void __fastcall FUN_1052e850(...);
void __fastcall FUN_1052e8b0(int param_1);
extern void __fastcall FUN_1052e8b0(...);
undefined4 __fastcall FUN_1052e8f0(int *param_1);
extern undefined4 __fastcall FUN_1052e8f0(...);
undefined4 * __fastcall FUN_1052e9f0(undefined4 param_1);
extern undefined4 * __fastcall FUN_1052e9f0(...);
undefined4 * __fastcall FUN_1052fd10(int param_1);
extern undefined4 * __fastcall FUN_1052fd10(...);
undefined4 * __fastcall FUN_1052fe50(int param_1);
extern undefined4 * __fastcall FUN_1052fe50(...);
undefined4 * __fastcall FUN_10531c00(int param_1);
extern undefined4 * __fastcall FUN_10531c00(...);
undefined4 * __fastcall FUN_10531dd0(int param_1);
extern undefined4 * __fastcall FUN_10531dd0(...);
undefined4 * __fastcall FUN_10531e10(int param_1);
extern undefined4 * __fastcall FUN_10531e10(...);
undefined4 * __fastcall FUN_105322f0(int param_1);
extern undefined4 * __fastcall FUN_105322f0(...);
undefined4 __stdcall FUN_105327f0(undefined4 param_1);
undefined4 __stdcall FUN_105327f0(undefined4 param_1);
void __fastcall FUN_10532df0(undefined4 *param_1);
extern void __fastcall FUN_10532df0(...);
void __fastcall FUN_10532e30(undefined4 *param_1);
extern void __fastcall FUN_10532e30(...);
void __fastcall FUN_10532e70(int *param_1);
extern void __fastcall FUN_10532e70(...);
void __fastcall FUN_10532ea0(int *param_1);
extern void __fastcall FUN_10532ea0(...);
void FUN_105330f0(void);
extern void FUN_105330f0(...);
void FUN_10533120(void);
extern void FUN_10533120(...);
void FUN_10533150(void);
extern void FUN_10533150(...);
SCStr * __stdcall FUN_10534170(SCStr *param_1);
SCStr * __stdcall FUN_10534170(SCStr *param_1);
SCStr * FUN_10534670(SCStr *param_1,int param_2);
extern SCStr * FUN_10534670(...);
SCStr * __stdcall FUN_105349e0(SCStr *param_1);
SCStr * __stdcall FUN_105349e0(SCStr *param_1);
SCStr * __stdcall FUN_10534a20(SCStr *param_1);
SCStr * __stdcall FUN_10534a20(SCStr *param_1);
SCStr * __stdcall FUN_10534a40(SCStr *param_1);
SCStr * __stdcall FUN_10534a40(SCStr *param_1);
SCStr * __stdcall FUN_10534b00(SCStr *param_1);
SCStr * __stdcall FUN_10534b00(SCStr *param_1);
SCStr * __stdcall FUN_10534b20(SCStr *param_1);
SCStr * __stdcall FUN_10534b20(SCStr *param_1);
SCStr * __stdcall FUN_10534b40(SCStr *param_1);
SCStr * __stdcall FUN_10534b40(SCStr *param_1);
SCStr * __stdcall FUN_10534b60(SCStr *param_1);
SCStr * __stdcall FUN_10534b60(SCStr *param_1);
SCStr * __stdcall FUN_10534b80(SCStr *param_1);
SCStr * __stdcall FUN_10534b80(SCStr *param_1);
SCStr * __stdcall FUN_10534ba0(SCStr *param_1);
SCStr * __stdcall FUN_10534ba0(SCStr *param_1);
SCStr * __stdcall FUN_10534bc0(SCStr *param_1);
SCStr * __stdcall FUN_10534bc0(SCStr *param_1);
SCStr * __stdcall FUN_10534be0(SCStr *param_1);
SCStr * __stdcall FUN_10534be0(SCStr *param_1);
SCStr * __stdcall FUN_10534c00(SCStr *param_1);
SCStr * __stdcall FUN_10534c00(SCStr *param_1);
SCStr * __stdcall FUN_10534c20(SCStr *param_1);
SCStr * __stdcall FUN_10534c20(SCStr *param_1);
SCStr * __stdcall FUN_10534c40(SCStr *param_1);
SCStr * __stdcall FUN_10534c40(SCStr *param_1);
SCStr * __stdcall FUN_10534c60(SCStr *param_1);
SCStr * __stdcall FUN_10534c60(SCStr *param_1);
SCStr * __stdcall FUN_10534c80(SCStr *param_1);
SCStr * __stdcall FUN_10534c80(SCStr *param_1);
SCStr * __stdcall FUN_10534ca0(SCStr *param_1);
SCStr * __stdcall FUN_10534ca0(SCStr *param_1);
SCStr * __stdcall FUN_10534cc0(SCStr *param_1);
SCStr * __stdcall FUN_10534cc0(SCStr *param_1);
SCStr * __stdcall FUN_10534ce0(SCStr *param_1);
SCStr * __stdcall FUN_10534ce0(SCStr *param_1);
SCStr * __stdcall FUN_10534d00(SCStr *param_1);
SCStr * __stdcall FUN_10534d00(SCStr *param_1);
SCStr * __stdcall FUN_10534d20(SCStr *param_1);
SCStr * __stdcall FUN_10534d20(SCStr *param_1);
SCStr * __stdcall FUN_10534d40(SCStr *param_1);
SCStr * __stdcall FUN_10534d40(SCStr *param_1);
SCStr * __stdcall FUN_10534d60(SCStr *param_1);
SCStr * __stdcall FUN_10534d60(SCStr *param_1);
SCStr * __stdcall FUN_10534d80(SCStr *param_1);
SCStr * __stdcall FUN_10534d80(SCStr *param_1);
SCStr * __stdcall FUN_10534da0(SCStr *param_1);
SCStr * __stdcall FUN_10534da0(SCStr *param_1);
SCStr * __stdcall FUN_10534dc0(SCStr *param_1);
SCStr * __stdcall FUN_10534dc0(SCStr *param_1);
SCStr * __stdcall FUN_10534de0(SCStr *param_1);
SCStr * __stdcall FUN_10534de0(SCStr *param_1);
SCStr * __stdcall FUN_10534e00(SCStr *param_1);
SCStr * __stdcall FUN_10534e00(SCStr *param_1);
SCStr * __stdcall FUN_10534e20(SCStr *param_1);
SCStr * __stdcall FUN_10534e20(SCStr *param_1);
SCStr * __stdcall FUN_10534f30(SCStr *param_1);
SCStr * __stdcall FUN_10534f30(SCStr *param_1);
SCStr * __stdcall FUN_10534f50(SCStr *param_1);
SCStr * __stdcall FUN_10534f50(SCStr *param_1);
SCStr * __stdcall FUN_10534f70(SCStr *param_1);
SCStr * __stdcall FUN_10534f70(SCStr *param_1);
SCStr * __stdcall FUN_10535000(SCStr *param_1);
SCStr * __stdcall FUN_10535000(SCStr *param_1);
undefined4 FUN_105358a0(void);
extern undefined4 FUN_105358a0(...);
SCStr * __stdcall FUN_10535900(SCStr *param_1, unsigned int recovered_unused_stack_0);
SCStr * __stdcall FUN_10535900(SCStr *param_1, unsigned int recovered_unused_stack_0);
undefined4 __stdcall FUN_10535a50(undefined4 param_1);
undefined4 __stdcall FUN_10535a50(undefined4 param_1);
SCStr * __stdcall FUN_10536850(SCStr *param_1);
SCStr * __stdcall FUN_10536850(SCStr *param_1);
SCStr * __stdcall FUN_10536a00(SCStr *param_1);
SCStr * __stdcall FUN_10536a00(SCStr *param_1);
SCStr * __stdcall FUN_1053d150(SCStr *param_1);
SCStr * __stdcall FUN_1053d150(SCStr *param_1);
void __fastcall FUN_1053dbc0(int param_1);
extern void __fastcall FUN_1053dbc0(...);
undefined4 __fastcall FUN_1053dc00(int param_1);
extern undefined4 __fastcall FUN_1053dc00(...);
undefined4 __fastcall FUN_1053e3e0(int param_1);
extern undefined4 __fastcall FUN_1053e3e0(...);
void __fastcall FUN_1053f5b0(int param_1);
extern void __fastcall FUN_1053f5b0(...);
void __fastcall FUN_1053f5d0(int param_1);
extern void __fastcall FUN_1053f5d0(...);
void __fastcall FUN_1053f5f0(int param_1);
extern void __fastcall FUN_1053f5f0(...);
void __fastcall FUN_1053f620(int param_1);
extern void __fastcall FUN_1053f620(...);
void __fastcall FUN_10541030(int param_1);
extern void __fastcall FUN_10541030(...);
uint __fastcall FUN_10541090(int *param_1);
extern uint __fastcall FUN_10541090(...);
undefined4 __fastcall FUN_10541290(int param_1);
extern undefined4 __fastcall FUN_10541290(...);
undefined1 __fastcall FUN_105414f0(int param_1);
extern undefined1 __fastcall FUN_105414f0(...);
undefined1 __fastcall FUN_105417f0(int param_1);
extern undefined1 __fastcall FUN_105417f0(...);
uint __fastcall FUN_10541c30(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
uint __fastcall FUN_10541c30(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_10542ed0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_10542ed0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_10544a10(int param_1);
extern void __fastcall FUN_10544a10(...);
void __fastcall FUN_10546be0(int param_1);
extern void __fastcall FUN_10546be0(...);
void __stdcall FUN_1054ac50(int param_1, unsigned int recovered_unused_stack_0);
void __stdcall FUN_1054ac50(int param_1, unsigned int recovered_unused_stack_0);
void __stdcall FUN_1054c0c0(int param_1);
void __stdcall FUN_1054c0c0(int param_1);
int __fastcall FUN_1054c100(int param_1);
extern int __fastcall FUN_1054c100(...);
int __fastcall FUN_1054c140(int param_1);
extern int __fastcall FUN_1054c140(...);
uint __fastcall FUN_1054c2a0(int *param_1);
extern uint __fastcall FUN_1054c2a0(...);
void __stdcall FUN_1054c2e0(int param_1);
void __stdcall FUN_1054c2e0(int param_1);
void __fastcall FUN_1054c8b0(undefined4 *param_1);
extern void __fastcall FUN_1054c8b0(...);
SCStr * __stdcall FUN_1054cff0(SCStr *param_1);
SCStr * __stdcall FUN_1054cff0(SCStr *param_1);
undefined4 * __fastcall FUN_1054eed0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_1054eed0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_1054fae0(int *param_1);
extern void __fastcall FUN_1054fae0(...);
void __fastcall FUN_1054fb40(int param_1);
extern void __fastcall FUN_1054fb40(...);
void __fastcall FUN_1054fb60(int *param_1);
extern void __fastcall FUN_1054fb60(...);
void __fastcall FUN_1054fc40(int param_1);
extern void __fastcall FUN_1054fc40(...);
void __fastcall FUN_1054fc60(undefined4 *param_1);
extern void __fastcall FUN_1054fc60(...);
void __fastcall FUN_1054fc80(int *param_1);
extern void __fastcall FUN_1054fc80(...);
void __fastcall FUN_10550cb0(int param_1);
extern void __fastcall FUN_10550cb0(...);
int * FUN_10551850(int *param_1);
extern int * FUN_10551850(...);
void __fastcall FUN_10552460(int *param_1);
extern void __fastcall FUN_10552460(...);
void __fastcall FUN_105524a0(undefined4 *param_1);
extern void __fastcall FUN_105524a0(...);
void __stdcall FUN_105526b0(int param_1,int param_2);
void __stdcall FUN_105526b0(int param_1,int param_2);
SCStr * __stdcall FUN_10553fb0(SCStr *param_1);
SCStr * __stdcall FUN_10553fb0(SCStr *param_1);
void __fastcall FUN_105579d0(int param_1);
extern void __fastcall FUN_105579d0(...);
void __fastcall FUN_105597d0(int *param_1);
extern void __fastcall FUN_105597d0(...);
void __fastcall FUN_10559b30(undefined4 *param_1);
extern void __fastcall FUN_10559b30(...);
SCStr * __stdcall FUN_1055d3e0(SCStr *param_1);
SCStr * __stdcall FUN_1055d3e0(SCStr *param_1);
SCStr * __stdcall FUN_1055d420(SCStr *param_1);
SCStr * __stdcall FUN_1055d420(SCStr *param_1);
SCStr * __stdcall FUN_1055d440(SCStr *param_1);
SCStr * __stdcall FUN_1055d440(SCStr *param_1);
SCStr * __stdcall FUN_1055d470(SCStr *param_1);
SCStr * __stdcall FUN_1055d470(SCStr *param_1);
SCStr * __stdcall FUN_1055d5a0(SCStr *param_1);
SCStr * __stdcall FUN_1055d5a0(SCStr *param_1);
SCStr * __stdcall FUN_1055d5e0(SCStr *param_1);
SCStr * __stdcall FUN_1055d5e0(SCStr *param_1);
SCStr * __stdcall FUN_1055d600(SCStr *param_1);
SCStr * __stdcall FUN_1055d600(SCStr *param_1);
SCStr * __stdcall FUN_1055db60(SCStr *param_1);
SCStr * __stdcall FUN_1055db60(SCStr *param_1);
SCStr * __stdcall FUN_1055dbb0(SCStr *param_1);
SCStr * __stdcall FUN_1055dbb0(SCStr *param_1);
SCStr * __stdcall FUN_1055dc00(SCStr *param_1);
SCStr * __stdcall FUN_1055dc00(SCStr *param_1);
SCStr * __stdcall FUN_1055dc30(SCStr *param_1);
SCStr * __stdcall FUN_1055dc30(SCStr *param_1);
int __fastcall FUN_1055dc70(int param_1);
extern int __fastcall FUN_1055dc70(...);
SCStr * __stdcall FUN_1055dce0(SCStr *param_1);
SCStr * __stdcall FUN_1055dce0(SCStr *param_1);
SCStr * __stdcall FUN_1055ec50(SCStr *param_1);
SCStr * __stdcall FUN_1055ec50(SCStr *param_1);
SCStr * __stdcall FUN_1055f260(SCStr *param_1);
SCStr * __stdcall FUN_1055f260(SCStr *param_1);
void __stdcall FUN_1055f480(undefined4 param_1,undefined4 param_2);
void __stdcall FUN_1055f480(undefined4 param_1,undefined4 param_2);
void __stdcall FUN_1055f4b0(undefined4 param_1);
void __stdcall FUN_1055f4b0(undefined4 param_1);
void __stdcall FUN_10560090(int param_1);
void __stdcall FUN_10560090(int param_1);
void __stdcall FUN_10562a40(undefined4 *param_1,undefined4 param_2);
void __stdcall FUN_10562a40(undefined4 *param_1,undefined4 param_2);
void __stdcall FUN_10562a80(undefined4 *param_1,undefined4 param_2);
void __stdcall FUN_10562a80(undefined4 *param_1,undefined4 param_2);
void __stdcall FUN_10562b00(undefined4 *param_1,undefined4 param_2);
void __stdcall FUN_10562b00(undefined4 *param_1,undefined4 param_2);
void __fastcall FUN_105650b0(undefined4 *param_1);
extern void __fastcall FUN_105650b0(...);
void __fastcall FUN_10566560(undefined4 *param_1);
extern void __fastcall FUN_10566560(...);
void __fastcall FUN_10566670(undefined4 *param_1);
extern void __fastcall FUN_10566670(...);
SCStr * __stdcall FUN_10572510(SCStr *param_1);
SCStr * __stdcall FUN_10572510(SCStr *param_1);
SCStr * __stdcall FUN_10572530(SCStr *param_1);
SCStr * __stdcall FUN_10572530(SCStr *param_1);
SCStr * __stdcall FUN_10572550(SCStr *param_1);
SCStr * __stdcall FUN_10572550(SCStr *param_1);
SCStr * __stdcall FUN_10572570(SCStr *param_1);
SCStr * __stdcall FUN_10572570(SCStr *param_1);
SCStr * __stdcall FUN_10572590(SCStr *param_1);
SCStr * __stdcall FUN_10572590(SCStr *param_1);
void __fastcall FUN_105725b0(int *param_1);
extern void __fastcall FUN_105725b0(...);
void __fastcall FUN_105725e0(int *param_1);
extern void __fastcall FUN_105725e0(...);
void __fastcall FUN_10572610(int *param_1);
extern void __fastcall FUN_10572610(...);
void __fastcall FUN_10572640(int *param_1);
extern void __fastcall FUN_10572640(...);
SCStr * __stdcall FUN_10574610(SCStr *param_1);
SCStr * __stdcall FUN_10574610(SCStr *param_1);
SCStr * __stdcall FUN_10574630(SCStr *param_1);
SCStr * __stdcall FUN_10574630(SCStr *param_1);
SCStr * __stdcall FUN_10574650(SCStr *param_1);
SCStr * __stdcall FUN_10574650(SCStr *param_1);
SCStr * __stdcall FUN_10574770(SCStr *param_1);
SCStr * __stdcall FUN_10574770(SCStr *param_1);
SCStr * __stdcall FUN_105747c0(SCStr *param_1);
SCStr * __stdcall FUN_105747c0(SCStr *param_1);
SCStr * __stdcall FUN_10574810(SCStr *param_1);
SCStr * __stdcall FUN_10574810(SCStr *param_1);
SCStr * __stdcall FUN_10574830(SCStr *param_1);
SCStr * __stdcall FUN_10574830(SCStr *param_1);
SCStr * __stdcall FUN_10574880(SCStr *param_1);
SCStr * __stdcall FUN_10574880(SCStr *param_1);
SCStr * __stdcall FUN_105748a0(SCStr *param_1);
SCStr * __stdcall FUN_105748a0(SCStr *param_1);
SCStr * __stdcall FUN_105748c0(SCStr *param_1);
SCStr * __stdcall FUN_105748c0(SCStr *param_1);
SCStr * __stdcall FUN_10574950(SCStr *param_1);
SCStr * __stdcall FUN_10574950(SCStr *param_1);
SCStr * __stdcall FUN_10574970(SCStr *param_1);
SCStr * __stdcall FUN_10574970(SCStr *param_1);
SCStr * __stdcall FUN_10574990(SCStr *param_1);
SCStr * __stdcall FUN_10574990(SCStr *param_1);
SCStr * __stdcall FUN_105749e0(SCStr *param_1);
SCStr * __stdcall FUN_105749e0(SCStr *param_1);
SCStr * __stdcall FUN_10574a00(SCStr *param_1);
SCStr * __stdcall FUN_10574a00(SCStr *param_1);
SCStr * __stdcall FUN_10574a30(SCStr *param_1);
SCStr * __stdcall FUN_10574a30(SCStr *param_1);
SCStr * __stdcall FUN_10574a50(SCStr *param_1);
SCStr * __stdcall FUN_10574a50(SCStr *param_1);
SCStr * __stdcall FUN_10574b70(SCStr *param_1);
SCStr * __stdcall FUN_10574b70(SCStr *param_1);
SCStr * __stdcall FUN_10574ba0(SCStr *param_1);
SCStr * __stdcall FUN_10574ba0(SCStr *param_1);
SCStr * __stdcall FUN_10574cf0(SCStr *param_1);
SCStr * __stdcall FUN_10574cf0(SCStr *param_1);
SCStr * __stdcall FUN_10574d10(SCStr *param_1);
SCStr * __stdcall FUN_10574d10(SCStr *param_1);
SCStr * __stdcall FUN_10574d30(SCStr *param_1);
SCStr * __stdcall FUN_10574d30(SCStr *param_1);
SCStr * __stdcall FUN_10574d60(SCStr *param_1);
SCStr * __stdcall FUN_10574d60(SCStr *param_1);
SCStr * __stdcall FUN_10574d90(SCStr *param_1);
SCStr * __stdcall FUN_10574d90(SCStr *param_1);
SCStr * __stdcall FUN_10574e30(SCStr *param_1);
SCStr * __stdcall FUN_10574e30(SCStr *param_1);
SCStr * __stdcall FUN_10574ea0(SCStr *param_1);
SCStr * __stdcall FUN_10574ea0(SCStr *param_1);
SCStr * __stdcall FUN_10574ed0(SCStr *param_1);
SCStr * __stdcall FUN_10574ed0(SCStr *param_1);
SCStr * __stdcall FUN_10574f00(SCStr *param_1);
SCStr * __stdcall FUN_10574f00(SCStr *param_1);
SCStr * __stdcall FUN_10574f30(SCStr *param_1);
SCStr * __stdcall FUN_10574f30(SCStr *param_1);
SCStr * __stdcall FUN_10574f70(SCStr *param_1);
SCStr * __stdcall FUN_10574f70(SCStr *param_1);
uint __fastcall FUN_10576040(int param_1);
extern uint __fastcall FUN_10576040(...);
undefined1 __fastcall FUN_1057d5b0(int param_1);
extern undefined1 __fastcall FUN_1057d5b0(...);
undefined1 __fastcall FUN_1057d600(int param_1);
extern undefined1 __fastcall FUN_1057d600(...);
undefined1 __fastcall FUN_1057d640(int param_1);
extern undefined1 __fastcall FUN_1057d640(...);
SCStr * __stdcall FUN_10580800(SCStr *param_1);
SCStr * __stdcall FUN_10580800(SCStr *param_1);
void __fastcall FUN_105809d0(undefined4 *param_1);
extern void __fastcall FUN_105809d0(...);
SCStr * __stdcall FUN_105818e0(SCStr *param_1);
SCStr * __stdcall FUN_105818e0(SCStr *param_1);
SCStr * __stdcall FUN_10581900(SCStr *param_1);
SCStr * __stdcall FUN_10581900(SCStr *param_1);
SCStr * __stdcall FUN_10581920(SCStr *param_1);
SCStr * __stdcall FUN_10581920(SCStr *param_1);
SCStr * __stdcall FUN_10581940(SCStr *param_1);
SCStr * __stdcall FUN_10581940(SCStr *param_1);
SCStr * __stdcall FUN_10581960(SCStr *param_1);
SCStr * __stdcall FUN_10581960(SCStr *param_1);
undefined4 __fastcall FUN_10581980(int param_1);
extern undefined4 __fastcall FUN_10581980(...);
SCStr * __stdcall FUN_10581a80(SCStr *param_1);
SCStr * __stdcall FUN_10581a80(SCStr *param_1);
SCStr * __stdcall FUN_10581aa0(SCStr *param_1);
SCStr * __stdcall FUN_10581aa0(SCStr *param_1);
SCStr * __stdcall FUN_10581b90(SCStr *param_1);
SCStr * __stdcall FUN_10581b90(SCStr *param_1);
SCStr * __stdcall FUN_10581bb0(SCStr *param_1);
SCStr * __stdcall FUN_10581bb0(SCStr *param_1);
SCStr * __stdcall FUN_10582630(SCStr *param_1);
SCStr * __stdcall FUN_10582630(SCStr *param_1);
SCStr * __stdcall FUN_10582660(SCStr *param_1);
SCStr * __stdcall FUN_10582660(SCStr *param_1);
SCStr * __stdcall FUN_10582b20(SCStr *param_1);
SCStr * __stdcall FUN_10582b20(SCStr *param_1);
undefined4 __stdcall FUN_105839a0(int param_1);
undefined4 __stdcall FUN_105839a0(int param_1);
SCStr * FUN_105839d0(SCStr *param_1,int param_2,undefined4 param_3);
extern SCStr * FUN_105839d0(...);
void __fastcall FUN_10585850(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_10585850(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_10588070(undefined4 *param_1);
extern void __fastcall FUN_10588070(...);
undefined4 __fastcall FUN_1058a650(int param_1);
extern undefined4 __fastcall FUN_1058a650(...);
void __fastcall FUN_1058c3d0(undefined4 *param_1);
extern void __fastcall FUN_1058c3d0(...);
void __fastcall FUN_1058c410(undefined4 *param_1);
extern void __fastcall FUN_1058c410(...);
SCStr * __stdcall FUN_1058d100(SCStr *param_1);
SCStr * __stdcall FUN_1058d100(SCStr *param_1);
SCStr * __stdcall FUN_1058d120(SCStr *param_1);
SCStr * __stdcall FUN_1058d120(SCStr *param_1);
SCStr * __stdcall FUN_1058d140(SCStr *param_1);
SCStr * __stdcall FUN_1058d140(SCStr *param_1);
SCStr * __stdcall FUN_1058de90(SCStr *param_1);
SCStr * __stdcall FUN_1058de90(SCStr *param_1);
SCStr * __stdcall FUN_1058e810(SCStr *param_1);
SCStr * __stdcall FUN_1058e810(SCStr *param_1);
SCStr * __stdcall FUN_1058f660(SCStr *param_1);
SCStr * __stdcall FUN_1058f660(SCStr *param_1);
int __fastcall FUN_10591870(int param_1);
extern int __fastcall FUN_10591870(...);
void __fastcall FUN_10591bc0(int param_1);
extern void __fastcall FUN_10591bc0(...);
void __fastcall FUN_105920b0(int param_1);
extern void __fastcall FUN_105920b0(...);
undefined4 * __fastcall FUN_10594a50(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10594a50(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_10595260(int param_1);
extern void __fastcall FUN_10595260(...);
void __fastcall FUN_10595290(int *param_1);
extern void __fastcall FUN_10595290(...);
void __fastcall FUN_10595360(int param_1);
extern void __fastcall FUN_10595360(...);
void __fastcall FUN_10595380(undefined4 *param_1);
extern void __fastcall FUN_10595380(...);
void __fastcall FUN_105953a0(int *param_1);
extern void __fastcall FUN_105953a0(...);
void __fastcall FUN_105953d0(int *param_1);
extern void __fastcall FUN_105953d0(...);
void __fastcall FUN_10595bd0(int param_1);
extern void __fastcall FUN_10595bd0(...);
void __stdcall FUN_10595f90(int param_1,int param_2);
void __stdcall FUN_10595f90(int param_1,int param_2);
int * FUN_10596820(int *param_1);
extern int * FUN_10596820(...);
void __stdcall FUN_105970f0(int param_1,int param_2);
void __stdcall FUN_105970f0(int param_1,int param_2);
void __stdcall FUN_10598470(SCStr *param_1);
void __stdcall FUN_10598470(SCStr *param_1);
void __stdcall FUN_1059b6d0(undefined4 param_1,int *param_2);
void __stdcall FUN_1059b6d0(undefined4 param_1,int *param_2);
undefined4 * __fastcall FUN_1059bb70(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_1059bb70(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_1059bf30(int param_1);
extern void __fastcall FUN_1059bf30(...);
void __fastcall FUN_1059c010(int param_1);
extern void __fastcall FUN_1059c010(...);
void __fastcall FUN_1059c600(int param_1);
extern void __fastcall FUN_1059c600(...);
int * FUN_1059ce00(int *param_1);
extern int * FUN_1059ce00(...);
void __fastcall FUN_1059d1e0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_1059d1e0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 __fastcall FUN_1059d2f0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 __fastcall FUN_1059d2f0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void FUN_1059ed40(int param_1,int param_2);
extern void FUN_1059ed40(...);
void __stdcall FUN_1059f110(undefined4 param_1,int *param_2);
void __stdcall FUN_1059f110(undefined4 param_1,int *param_2);
undefined4 * __fastcall FUN_1059fa40(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_1059fa40(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_1059ff80(undefined4 *param_1);
extern undefined4 * __fastcall FUN_1059ff80(...);
void __fastcall FUN_105a0080(int param_1);
extern void __fastcall FUN_105a0080(...);
void __fastcall FUN_105a0130(int param_1);
extern void __fastcall FUN_105a0130(...);
void __fastcall FUN_105a0150(int *param_1);
extern void __fastcall FUN_105a0150(...);
void __fastcall FUN_105a0660(undefined4 *param_1);
extern void __fastcall FUN_105a0660(...);
void __fastcall FUN_105a0e00(int param_1);
extern void __fastcall FUN_105a0e00(...);
void __stdcall FUN_105a1540(int param_1,int param_2);
void __stdcall FUN_105a1540(int param_1,int param_2);
void __stdcall FUN_105a1570(int param_1,int param_2);
void __stdcall FUN_105a1570(int param_1,int param_2);
void __stdcall FUN_105a2380(int param_1,int param_2);
void __stdcall FUN_105a2380(int param_1,int param_2);
undefined4 __fastcall FUN_105a2990(int *param_1);
extern undefined4 __fastcall FUN_105a2990(...);
undefined4 __fastcall FUN_105a29c0(int *param_1);
extern undefined4 __fastcall FUN_105a29c0(...);
undefined4 __fastcall FUN_105a2a70(int *param_1);
extern undefined4 __fastcall FUN_105a2a70(...);
undefined4 __fastcall FUN_105a2aa0(int *param_1);
extern undefined4 __fastcall FUN_105a2aa0(...);
void __fastcall FUN_105a2c70(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_105a2c70(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_105a2ca0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_105a2ca0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 FUN_105a3210(void);
extern undefined4 FUN_105a3210(...);
// Reference entry 104d7cb0; body size 45 bytes.
#line 1 "ENTRY_104d7cb0"

undefined4 * __thiscall Recovered_Bulk::FUN_104d7cb0(byte param_2)
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

undefined4 * __thiscall Recovered_Bulk::FUN_104d7cf0(byte param_2)
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

void __thiscall Recovered_Bulk::FUN_104d7e00(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 104d7e20; body size 21 bytes.
#line 1 "ENTRY_104d7e20"

void __thiscall Recovered_Bulk::FUN_104d7e20(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 104d7e40; body size 20 bytes.
#line 1 "ENTRY_104d7e40"

void __thiscall Recovered_Bulk::FUN_104d7e40(undefined4 param_2,undefined4 param_3)
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

void __thiscall Recovered_Bulk::FUN_104d7ed0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 104d8190; body size 61 bytes.
#line 1 "ENTRY_104d8190"

void __thiscall Recovered_Bulk::FUN_104d8190(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    uVar2 = (undefined4)((**(code **)(*param_2 + 0xc))());
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

void __thiscall Recovered_Bulk::FUN_104d82e0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_102d65b0(param_3));
  if ((cVar1 != '\0') && (*(int **)(param_1 + 8) != (int *)((0x0)))) {
    (**(code **)(**(int **)(param_1 + 8) + 0x110))(0);
  }
  return;
}


// Reference entry 104d8330; body size 51 bytes.
#line 1 "ENTRY_104d8330"

void __thiscall Recovered_Bulk::FUN_104d8330(undefined4 param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  SCStr aSStack_10 [4];
  int *piStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0x104d833d);
  cVar1 = (char)((**(code **)(*param_1 + 0xfc))());
  if (cVar1 == '\0') {
    uStack_8 = (undefined4)(param_2);
    piStack_c = (int *)(param_1);
    ((SCStr *)(aSStack_10))->int_allocRep("SCIBrowseDataSource:onBrowseChanged");
    thunk_FUN_103d65f0();
  }
  *(undefined1*)((int)param_1 + 0x41) = (undefined1)(0);
  return;
}


// Reference entry 104d8370; body size 51 bytes.
#line 1 "ENTRY_104d8370"

void __thiscall Recovered_Bulk::FUN_104d8370(undefined4 param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  SCStr aSStack_10 [4];
  int *piStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0x104d837d);
  cVar1 = (char)((**(code **)(*param_1 + 0xfc))());
  if (cVar1 == '\0') {
    uStack_8 = (undefined4)(param_2);
    piStack_c = (int *)(param_1);
    ((SCStr *)(aSStack_10))->int_allocRep("SCIBrowseDataSource:onBrowseChanged");
    thunk_FUN_103d63d0();
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

undefined4 __thiscall Recovered_Bulk::FUN_104d8c80(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  int *param_1 = (int *)this;
  (**(code **)(*param_1 + 0x38))(param_2,param_3,param_4);
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
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x1af,&DAT_11882ff0));
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 104d9780; body size 33 bytes.
#line 1 "ENTRY_104d9780"

undefined4 FUN_104d9780(undefined4 param_1)

{
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
    piVar1 = (int *)(*(int **)(param_1 + 0x78));
    if ((int *)(piVar1) != (int *)0x0) {
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

void __thiscall Recovered_Bulk::FUN_104d9d00(undefined4 param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  
  cVar1 = (char)((**(code **)(*param_1 + 0x5c))());
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x114))(param_2);
  }
  return;
}


// Reference entry 104d9d40; body size 59 bytes.
#line 1 "ENTRY_104d9d40"

void __thiscall Recovered_Bulk::FUN_104d9d40(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
    return;
  }
  thunk_FUN_104d68b0(puVar1,param_2);
  return;
}


// Reference entry 104d9e10; body size 53 bytes.
#line 1 "ENTRY_104d9e10"

void __thiscall Recovered_Bulk::FUN_104d9e10(int param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  
  cVar1 = (char)((**(code **)(*param_1 + 0xd8))());
  if (cVar1 != '\0') {
    param_1[0x18] = (int)(param_2);
    cVar1 = (char)((**(code **)(*param_1 + 0x5c))());
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x110))(0);
    }
  }
  return;
}


// Reference entry 104da4a0; body size 41 bytes.
#line 1 "ENTRY_104da4a0"

undefined4 * __thiscall Recovered_Bulk::FUN_104da4a0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 104da4e0; body size 41 bytes.
#line 1 "ENTRY_104da4e0"

undefined4 * __thiscall Recovered_Bulk::FUN_104da4e0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 104da520; body size 41 bytes.
#line 1 "ENTRY_104da520"

undefined4 * __thiscall Recovered_Bulk::FUN_104da520(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
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

undefined4 * __thiscall Recovered_Bulk::FUN_104da860(byte param_2)
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
  ((SCStr *)(param_1))->op_ctor((SCStr *)&DAT_121a07b0);
  *(undefined4*)(param_1 + 4) = (undefined4)(DAT_121a07b4);
  return (SCStr *)(param_1);
}


// Reference entry 104dacb0; body size 20 bytes.
#line 1 "ENTRY_104dacb0"

undefined4 __thiscall Recovered_Bulk::FUN_104dacb0(undefined4 param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  (**(code **)(*param_1 + 0x58))(param_2);
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

int * __thiscall Recovered_Bulk::FUN_104daf10(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 4));
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 104daf30; body size 30 bytes.
#line 1 "ENTRY_104daf30"

undefined4 __thiscall Recovered_Bulk::FUN_104daf30(undefined4 param_2)
{
  undefined4 param_1 = (undefined4 )this;
  SCLibrary *pSVar1;
  
  pSVar1 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  (**(code **)(*(int *)pSVar1 + 0xc4))(param_2,param_1);
  return (undefined4)(param_2);
}


// Reference entry 104daf80; body size 25 bytes.
#line 1 "ENTRY_104daf80"

int * __thiscall Recovered_Bulk::FUN_104daf80(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x10));
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
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
  ((SCStr *)(param_1))->op_ctor((SCStr *)&DAT_121a07b0);
  *(undefined4*)(param_1 + 4) = (undefined4)(DAT_121a07b4);
  return (SCStr *)(param_1);
}


// Reference entry 104db380; body size 36 bytes.
#line 1 "ENTRY_104db380"

undefined4 __thiscall Recovered_Bulk::FUN_104db380(undefined4 param_2)
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
    uVar1 = (undefined4)((**(code **)(*param_1 + 0x40))());
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

undefined4 __thiscall Recovered_Bulk::FUN_104dc4b0(byte param_2)
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

undefined4 * __thiscall Recovered_Bulk::FUN_104dc4e0(byte param_2)
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

undefined4 * __thiscall Recovered_Bulk::FUN_104dc5c0(byte param_2)
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

undefined4 * __thiscall Recovered_Bulk::FUN_104dc600(byte param_2)
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

undefined4 __thiscall Recovered_Bulk::FUN_104dcfc0(SCIndexRange *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)((int *)(param_1 + 0x2c));
  *piVar1 = (int)(*piVar1 + 1);
  if (*piVar1 < 0) {
    return (undefined4)(0);
  }
  if (*(uint *)(param_1 + 0x2c) < (uint)(*(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20) >> 3))
  {
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

uint __fastcall FUN_104dd520(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 8) != (int *)((0x0))) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 8) + 0x18))());
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
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
     (iVar1 = *(int *)(param_1 + 0x2c) + -1, *(int *)(param_1 + 0x2c) = iVar1, iVar1 == 0)) {
    *(undefined1*)(param_1 + 0x28) = (undefined1)(0);
  }
  return;
}


// Reference entry 104ddc30; body size 44 bytes.
#line 1 "ENTRY_104ddc30"

undefined4 * __thiscall Recovered_Bulk::FUN_104ddc30(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_111a4bc0(0,"SCSwfObjBCInternalListener");
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
    iVar1 = (int)(thunk_FUN_11128910());
    if (iVar1 != 0) {
      FUN_10070892(param_1);
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
    iVar1 = (int)(thunk_FUN_11128910());
    if (iVar1 != 0) {
      FUN_10065348(param_1);
    }
    *(undefined1*)(param_1 + 0x14) = (undefined1)(0);
  }
  return;
}


// Reference entry 104ddfd0; body size 51 bytes.
#line 1 "ENTRY_104ddfd0"

undefined4 * __thiscall Recovered_Bulk::FUN_104ddfd0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_111a4bc0(0,"SCSwfObjHHInternalListener");
  param_1[6] = (undefined4)(param_2);
  param_1[7] = (undefined4)(param_3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwfObjHHInternalListener);
  *(undefined1*)(param_1 + 5) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104dfa90; body size 55 bytes.
#line 1 "ENTRY_104dfa90"

void __thiscall Recovered_Bulk::FUN_104dfa90(int *param_2)
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
    piVar4 = (int *)(*(int **)(iVar2 + 4));
    piVar5 = (int *)(*(int **)(param_1 + 8));
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

int __thiscall Recovered_Bulk::FUN_104e0430(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int iVar1;
  undefined1 local_8 [8];
  
  iVar1 = (int)(thunk_FUN_104e04f0(local_8,param_2,param_3));
  iVar1 = (int)(*(int *)(iVar1 + 4));
  if (iVar1 == 0) {
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  return (int)(iVar1);
}


// Reference entry 104e0470; body size 40 bytes.
#line 1 "ENTRY_104e0470"

int __thiscall Recovered_Bulk::FUN_104e0470(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int iVar1;
  undefined1 local_8 [8];
  
  iVar1 = (int)(thunk_FUN_104e05c0(local_8,param_2,param_3));
  iVar1 = (int)(*(int *)(iVar1 + 4));
  if (iVar1 == 0) {
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  return (int)(iVar1);
}


// Reference entry 104e04b0; body size 40 bytes.
#line 1 "ENTRY_104e04b0"

int __thiscall Recovered_Bulk::FUN_104e04b0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int iVar1;
  undefined1 local_8 [8];
  
  iVar1 = (int)(thunk_FUN_104e0690(local_8,param_2,param_3));
  iVar1 = (int)(*(int *)(iVar1 + 4));
  if (iVar1 == 0) {
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  return (int)(iVar1);
}


// Reference entry 104e1d40; body size 59 bytes.
#line 1 "ENTRY_104e1d40"

void __thiscall Recovered_Bulk::FUN_104e1d40(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
    return;
  }
  thunk_FUN_104dff70(puVar1,param_2);
  return;
}


// Reference entry 104e1d90; body size 59 bytes.
#line 1 "ENTRY_104e1d90"

void __thiscall Recovered_Bulk::FUN_104e1d90(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
    return;
  }
  thunk_FUN_104e0170(puVar1,param_2);
  return;
}


// Reference entry 104e26c0; body size 41 bytes.
#line 1 "ENTRY_104e26c0"

undefined4 * __thiscall Recovered_Bulk::FUN_104e26c0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 104e2750; body size 41 bytes.
#line 1 "ENTRY_104e2750"

undefined4 * __thiscall Recovered_Bulk::FUN_104e2750(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 104e27b0; body size 24 bytes.
#line 1 "ENTRY_104e27b0"

undefined4 * __thiscall Recovered_Bulk::FUN_104e27b0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
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
  pvVar1 = (void *)(operator_new(0x10));
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
  pvVar1 = (void *)(operator_new(0x14));
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
  pvVar1 = (void *)(operator_new(0x18));
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

int * __thiscall Recovered_Bulk::FUN_104e4750(char param_2)
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
  
  piVar1 = (int *)((int *)thunk_FUN_104e0f40(local_8,param_1));
  return (int)(*piVar1 + 0xc);
}


// Reference entry 104e49a0; body size 27 bytes.
#line 1 "ENTRY_104e49a0"

int __stdcall FUN_104e49a0(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_8 [8];
  
  piVar1 = (int *)((int *)thunk_FUN_104e11c0(local_8,param_1));
  return (int)(*piVar1 + 0xc);
}


// Reference entry 104e49d0; body size 27 bytes.
#line 1 "ENTRY_104e49d0"

int __stdcall FUN_104e49d0(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_8 [8];
  
  piVar1 = (int *)((int *)thunk_FUN_104e0ca0(local_8,param_1));
  return (int)(*piVar1 + 0xc);
}


// Reference entry 104e4e60; body size 32 bytes.
#line 1 "ENTRY_104e4e60"

undefined4 __thiscall Recovered_Bulk::FUN_104e4e60(byte param_2)
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

undefined4 * __thiscall Recovered_Bulk::FUN_104e4f50(byte param_2)
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

undefined4 __thiscall Recovered_Bulk::FUN_104e4f90(byte param_2)
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

undefined4 __thiscall Recovered_Bulk::FUN_104e4fc0(byte param_2)
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
  pvVar1 = (void *)(operator_new(0x10));
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 104e5120; body size 25 bytes.
#line 1 "ENTRY_104e5120"

void __fastcall FUN_104e5120(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x14));
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 104e5140; body size 25 bytes.
#line 1 "ENTRY_104e5140"

void __fastcall FUN_104e5140(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x18));
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 104e5bc0; body size 20 bytes.
#line 1 "ENTRY_104e5bc0"

void __thiscall Recovered_Bulk::FUN_104e5bc0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_104dfcb0(param_2,param_3,param_1);
  return;
}


// Reference entry 104e5be0; body size 20 bytes.
#line 1 "ENTRY_104e5be0"

void __thiscall Recovered_Bulk::FUN_104e5be0(undefined4 param_2,undefined4 param_3)
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
  
  uVar1 = (undefined4)(thunk_FUN_104e5a60(*(int *)(param_1 + 8) + 1));
  thunk_FUN_104e5f10(uVar1);
  return;
}


// Reference entry 104e6b80; body size 21 bytes.
#line 1 "ENTRY_104e6b80"

void __fastcall FUN_104e6b80(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(thunk_FUN_104e5a60(*(undefined4 *)(param_1 + 8)));
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
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
  }
  return;
}


// Reference entry 104ea530; body size 35 bytes.
#line 1 "ENTRY_104ea530"

int __thiscall Recovered_Bulk::FUN_104ea530(int param_2)
{
  int param_1 = (int )this;
  if (0xb < param_2) {
    return (int)(0);
  }
  return (int)(*(int *)(param_1 + 0x3c + param_2 * 0xc) - *(int *)(param_1 + 0x38 + param_2 * 0xc) >> 3);
}


// Reference entry 104ec220; body size 51 bytes.
#line 1 "ENTRY_104ec220"

void __stdcall FUN_104ec220(SCStr *param_1, SCStr *param_2, unsigned int recovered_unused_stack_0)

{
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_1))->op_eq("RINCON_AssociatedZPUDN"));
  if (bVar1) {
    bVar1 = (bool)(((SCStr *)(param_2))->op_eq("FV:2"));
    if (bVar1) {
      thunk_FUN_104ecc10();
    }
  }
  return;
}


// Reference entry 104ec340; body size 39 bytes.
#line 1 "ENTRY_104ec340"

void __thiscall Recovered_Bulk::FUN_104ec340(int param_2)
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

void __thiscall Recovered_Bulk::FUN_104eca70(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
    return;
  }
  thunk_FUN_104dff70(puVar1,param_2);
  return;
}


// Reference entry 104ecac0; body size 59 bytes.
#line 1 "ENTRY_104ecac0"

void __thiscall Recovered_Bulk::FUN_104ecac0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
    return;
  }
  thunk_FUN_104e0170(puVar1,param_2);
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

undefined4 * __thiscall Recovered_Bulk::FUN_104eda20(byte param_2)
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

undefined4 __thiscall Recovered_Bulk::FUN_104eda60(byte param_2)
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

undefined4 * __thiscall Recovered_Bulk::FUN_104eda90(byte param_2)
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

undefined4 * __thiscall Recovered_Bulk::FUN_104edac0(byte param_2)
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
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
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
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
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
  
  (**(code **)(*param_1 + 4))();
  if (param_1[2] != 0) {
    piVar1 = (int *)((int *)param_1[3]);
    if ((int *)(piVar1) != (int *)0x0) {
      param_1[2] = (int)(0);
      param_1[3] = (int)(0);
      (**(code **)(*piVar1 + 8))();
    }
    param_1[2] = (int)(0);
    param_1[3] = (int)(0);
  }
                    
                    
  (**(code **)(*param_1 + 8))();
  return;
}


// Reference entry 104ee0a0; body size 39 bytes.
#line 1 "ENTRY_104ee0a0"

int __fastcall FUN_104ee0a0(int param_1)

{
  int iVar1;
  
  if (*(int **)(param_1 + 8) != (int *)((0x0))) {
    iVar1 = (int)((**(code **)(**(int **)(param_1 + 8) + 0x14))(param_1));
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
                    
                    
  ((std::basic_ostream<> *)((basic_ostream<char,std::char_traits<char>> *)(param_1 + -0x48)))->op_dtor();
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
  ((std::basic_ostream<> *)((basic_ostream<char,std::char_traits<char>> *)(param_1 + 2)))->op_dtor();
                    
                    
  ((std::basic_ios<> *)(this_))->op_dtor();
  return;
}


// Reference entry 104ef330; body size 32 bytes.
#line 1 "ENTRY_104ef330"

undefined4 __thiscall Recovered_Bulk::FUN_104ef330(byte param_2)
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

void __thiscall Recovered_Bulk::FUN_104f8a40(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_104f8a70(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 104f8b50; body size 60 bytes.
#line 1 "ENTRY_104f8b50"

int __thiscall Recovered_Bulk::FUN_104f8b50(SCStr *param_2)
{
  int *param_1 = (int *)this;
  bool bVar1;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_104f8c40(local_c,param_2);
  if ((*(char *)(local_4 + 0xd) == '\0') &&
     (bVar1 = ((SCStr *)(param_2))->op_lt((SCStr *)(local_4 + 0x10)), !bVar1)) {
    return (int)(local_4);
  }
  return (int)(*param_1);
}


// Reference entry 104f97a0; body size 59 bytes.
#line 1 "ENTRY_104f97a0"

void __thiscall Recovered_Bulk::FUN_104f97a0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
    return;
  }
  thunk_FUN_104f8780(puVar1,param_2);
  return;
}


// Reference entry 104f9b30; body size 41 bytes.
#line 1 "ENTRY_104f9b30"

undefined4 * __thiscall Recovered_Bulk::FUN_104f9b30(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 104f9bf0; body size 41 bytes.
#line 1 "ENTRY_104f9bf0"

undefined4 * __thiscall Recovered_Bulk::FUN_104f9bf0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 104f9c30; body size 41 bytes.
#line 1 "ENTRY_104f9c30"

undefined4 * __thiscall Recovered_Bulk::FUN_104f9c30(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 104f9ca0; body size 41 bytes.
#line 1 "ENTRY_104f9ca0"

undefined4 * __thiscall Recovered_Bulk::FUN_104f9ca0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
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
  pvVar1 = (void *)(operator_new(0x1c));
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
  pvVar1 = (void *)(operator_new(0x10));
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


// Reference entry 104fabc0; body size 60 bytes.
#line 1 "ENTRY_104fabc0"

void __fastcall FUN_104fabc0(int *param_1)

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
  thunk_FUN_104f8a70(param_1,*(undefined4 *)(*param_1 + 4));
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
  thunk_FUN_104f8a70(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 104fb850; body size 27 bytes.
#line 1 "ENTRY_104fb850"

int __stdcall FUN_104fb850(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_8 [8];
  
  piVar1 = (int *)((int *)thunk_FUN_104f8fb0(local_8,param_1));
  return (int)(*piVar1 + 0xc);
}


// Reference entry 104fbb10; body size 38 bytes.
#line 1 "ENTRY_104fbb10"

undefined4 * __thiscall Recovered_Bulk::FUN_104fbb10(byte param_2)
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

undefined4 * __thiscall Recovered_Bulk::FUN_104fbb40(byte param_2)
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

undefined4 __thiscall Recovered_Bulk::FUN_104fbd40(byte param_2)
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

undefined4 __thiscall Recovered_Bulk::FUN_104fbd70(byte param_2)
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

undefined4 * __thiscall Recovered_Bulk::FUN_104fbda0(byte param_2)
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
  pvVar1 = (void *)(operator_new(0x10));
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 104fc030; body size 25 bytes.
#line 1 "ENTRY_104fc030"

void __fastcall FUN_104fc030(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x1c));
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 104fc3b0; body size 20 bytes.
#line 1 "ENTRY_104fc3b0"

void __thiscall Recovered_Bulk::FUN_104fc3b0(undefined4 param_2,undefined4 param_3)
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
  while (piVar3 = piVar2, cVar1 == '\0') {
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

void __thiscall Recovered_Bulk::FUN_104fd5b0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    uVar2 = (undefined4)((**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 104fd600; body size 61 bytes.
#line 1 "ENTRY_104fd600"

void __thiscall Recovered_Bulk::FUN_104fd600(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    uVar2 = (undefined4)((**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 104fd650; body size 61 bytes.
#line 1 "ENTRY_104fd650"

void __thiscall Recovered_Bulk::FUN_104fd650(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    uVar2 = (undefined4)((**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 104fd890; body size 19 bytes.
#line 1 "ENTRY_104fd890"

uint __thiscall Recovered_Bulk::FUN_104fd890(SCStr *param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  
  uVar1 = (uint)(((SCStr *)(param_2))->hash());
  return (uint)(uVar1 & *(uint *)(param_1 + 0x18));
}


// Reference entry 104fd940; body size 33 bytes.
#line 1 "ENTRY_104fd940"

void __fastcall FUN_104fd940(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_104f8a70(param_1,*(undefined4 *)(iVar1 + 4));
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

void __thiscall Recovered_Bulk::FUN_104ff720(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
    return;
  }
  thunk_FUN_104f8780(puVar1,param_2);
  return;
}


// Reference entry 104ff770; body size 60 bytes.
#line 1 "ENTRY_104ff770"

undefined4 * __thiscall Recovered_Bulk::FUN_104ff770(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if ((int *)(param_1) != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
    }
    return (undefined4 *)(param_2);
  }
  *param_2 = (undefined4)(0);
  return (undefined4 *)(param_2);
}


// Reference entry 104ff840; body size 60 bytes.
#line 1 "ENTRY_104ff840"

undefined4 * __thiscall Recovered_Bulk::FUN_104ff840(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if ((int *)(param_1) != (int *)0x0) {
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
  
  piVar1 = (int *)((int *)thunk_FUN_104f8fb0(local_8,param_1));
  return (undefined4)(((uint)((int3)((uint)*piVar1 >> 8)) << 8 | (uint)(*(undefined1 *)(*piVar1 + 0xc))));
}


// Reference entry 105000e0; body size 33 bytes.
#line 1 "ENTRY_105000e0"

void __thiscall Recovered_Bulk::FUN_105000e0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_10500160(param_2,*(undefined4 *)(*param_1 + 4));
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
    thunk_FUN_10500110(param_1,param_2[2]);
    piVar2 = (int *)((int *)*param_2);
    thunk_FUN_1148a50e(param_2,0x18);
    param_2 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }
  return;
}


// Reference entry 105006c0; body size 51 bytes.
#line 1 "ENTRY_105006c0"

int * __thiscall Recovered_Bulk::FUN_105006c0(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  *param_1 = (int)(param_2);
  param_1[1] = (int)(0);
  if (param_2 != 0) {
    piVar1 = (int *)((int *)(**(code **)(*(int *)(param_2 + 0xa8) + 0xc))());
    param_1[1] = (int)((int)piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 10500720; body size 24 bytes.
#line 1 "ENTRY_10500720"

undefined4 * __thiscall Recovered_Bulk::FUN_10500720(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10500740; body size 24 bytes.
#line 1 "ENTRY_10500740"

undefined4 * __thiscall Recovered_Bulk::FUN_10500740(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
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
  pvVar1 = (void *)(operator_new(0x18));
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
  pvVar1 = (void *)(operator_new(0x18));
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


// Reference entry 105032f0; body size 28 bytes.
#line 1 "ENTRY_105032f0"

void __fastcall FUN_105032f0(int *param_1)

{
  thunk_FUN_10500160(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 10503330; body size 28 bytes.
#line 1 "ENTRY_10503330"

void __fastcall FUN_10503330(int *param_1)

{
  thunk_FUN_10500160(param_1,*(undefined4 *)(*param_1 + 4));
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

undefined4 * __thiscall Recovered_Bulk::FUN_10504810(byte param_2)
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

undefined4 * __thiscall Recovered_Bulk::FUN_10504840(byte param_2)
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

undefined4 * __thiscall Recovered_Bulk::FUN_10504870(byte param_2)
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

undefined4 * __thiscall Recovered_Bulk::FUN_105048b0(byte param_2)
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

undefined4 * __thiscall Recovered_Bulk::FUN_105048f0(byte param_2)
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

undefined4 * __thiscall Recovered_Bulk::FUN_10504940(byte param_2)
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

undefined4 * __thiscall Recovered_Bulk::FUN_10504a10(byte param_2)
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

undefined4 * __thiscall Recovered_Bulk::FUN_10504a40(byte param_2)
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

undefined4 * __thiscall Recovered_Bulk::FUN_10504a70(byte param_2)
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

undefined4 __thiscall Recovered_Bulk::FUN_10504aa0(byte param_2)
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

undefined4 __thiscall Recovered_Bulk::FUN_10504ad0(byte param_2)
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

undefined4 __thiscall Recovered_Bulk::FUN_10504b00(byte param_2)
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

undefined4 * __thiscall Recovered_Bulk::FUN_10504b30(byte param_2)
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

undefined4 __thiscall Recovered_Bulk::FUN_10504b70(byte param_2)
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

undefined4 * __thiscall Recovered_Bulk::FUN_10504c00(byte param_2)
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

undefined4 * __thiscall Recovered_Bulk::FUN_10504d70(byte param_2)
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

undefined4 * __thiscall Recovered_Bulk::FUN_10504da0(byte param_2)
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

undefined4 * __thiscall Recovered_Bulk::FUN_10504e30(byte param_2)
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

undefined4 __thiscall Recovered_Bulk::FUN_10504f20(byte param_2)
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

undefined4 __thiscall Recovered_Bulk::FUN_10504f50(byte param_2)
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

undefined4 __thiscall Recovered_Bulk::FUN_10504f80(byte param_2)
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

undefined4 __thiscall Recovered_Bulk::FUN_10505060(byte param_2)
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

undefined4 * __thiscall Recovered_Bulk::FUN_105050a0(byte param_2)
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

undefined4 __thiscall Recovered_Bulk::FUN_10505160(byte param_2)
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

undefined4 __thiscall Recovered_Bulk::FUN_10505190(byte param_2)
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

undefined4 __thiscall Recovered_Bulk::FUN_10505340(byte param_2)
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

undefined4 __thiscall Recovered_Bulk::FUN_10505370(byte param_2)
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
  
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_1113ecc0(local_8,"AVTransportURIMetaData"));
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
  
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_1113ecc0(local_8,"CurrentTrackMetaData"));
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
  
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_1113ecc0(local_8,"r:EnqueuedTransportURIMetaData"));
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
  
  iVar1 = (int)(SCThreadSafeInc(param_1 + 1));
  if ((1 < iVar1) && (param_1[2] != 0)) {
    piVar2 = (int *)((int *)(**(code **)(*param_1 + 0x3c))());
    (**(code **)(*piVar2 + 4))();
  }
  return (int)(iVar1);
}


// Reference entry 10505b90; body size 61 bytes.
#line 1 "ENTRY_10505b90"

void __thiscall Recovered_Bulk::FUN_10505b90(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    uVar2 = (undefined4)((**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 10505d30; body size 50 bytes.
#line 1 "ENTRY_10505d30"

void __thiscall Recovered_Bulk::FUN_10505d30(void)
{
  int param_1 = (int )this;
  int in_stack_00000010;
  int iStack_10;
  int iStack_c;
  undefined4 uStack_8;
  
  *(undefined1*)(param_1 + 0x14) = (undefined1)(1);
  if ((in_stack_00000010 != 0) && (iStack_c = *(int *)(param_1 + -0xa8), iStack_c != 0)) {
    uStack_8 = (undefined4)(0);
    iStack_10 = (int)(param_1);
    ((SCStr *)((SCStr *)&iStack_10))->int_allocRep("SCIInfoViewHeaderDataSource:onChanged");
    thunk_FUN_103d65f0();
  }
  return;
}


// Reference entry 10505d70; body size 50 bytes.
#line 1 "ENTRY_10505d70"

void __thiscall Recovered_Bulk::FUN_10505d70(void)
{
  int param_1 = (int )this;
  int in_stack_00000010;
  int iStack_10;
  int iStack_c;
  undefined4 uStack_8;
  
  *(undefined1*)(param_1 + 0x18) = (undefined1)(1);
  if ((in_stack_00000010 != 0) && (iStack_c = *(int *)(param_1 + -0xa8), iStack_c != 0)) {
    uStack_8 = (undefined4)(0);
    iStack_10 = (int)(param_1);
    ((SCStr *)((SCStr *)&iStack_10))->int_allocRep("SCIInfoViewHeaderDataSource:onChanged");
    thunk_FUN_103d65f0();
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
  
  cVar1 = (char)((**(code **)(*param_1 + 0x20))());
  if (cVar1 != '\0') {
    piVar2 = (int *)((int *)(**(code **)(*param_1 + 0x38))());
                    
                    
    uVar3 = (undefined4)((**(code **)(*piVar2 + 0x17c))());
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

SCStr * __thiscall Recovered_Bulk::FUN_10507f20(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x134));
  return (SCStr *)(param_2);
}


// Reference entry 10507f40; body size 23 bytes.
#line 1 "ENTRY_10507f40"

SCStr * __thiscall Recovered_Bulk::FUN_10507f40(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x130));
  return (SCStr *)(param_2);
}


// Reference entry 10507f60; body size 23 bytes.
#line 1 "ENTRY_10507f60"

SCStr * __thiscall Recovered_Bulk::FUN_10507f60(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x134));
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

SCStr * __thiscall Recovered_Bulk::FUN_10508260(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x130));
  return (SCStr *)(param_2);
}


// Reference entry 10508280; body size 23 bytes.
#line 1 "ENTRY_10508280"

SCStr * __thiscall Recovered_Bulk::FUN_10508280(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x134));
  return (SCStr *)(param_2);
}


// Reference entry 105082a0; body size 23 bytes.
#line 1 "ENTRY_105082a0"

SCStr * __thiscall Recovered_Bulk::FUN_105082a0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x1e4));
  return (SCStr *)(param_2);
}


// Reference entry 105082c0; body size 23 bytes.
#line 1 "ENTRY_105082c0"

SCStr * __thiscall Recovered_Bulk::FUN_105082c0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x1e4));
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

SCStr * __thiscall Recovered_Bulk::FUN_10508ad0(SCStr *param_2,int param_3)
{
  int param_1 = (int )this;
  if (param_3 != 0) {
    ((SCStr *)(param_2))->int_allocRep((char *)0x0);
    return (SCStr *)(param_2);
  }
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x134));
  return (SCStr *)(param_2);
}


// Reference entry 105095e0; body size 49 bytes.
#line 1 "ENTRY_105095e0"

undefined4 * __thiscall Recovered_Bulk::FUN_105095e0(undefined4 *param_2,undefined4 *param_3)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  if (param_1[2] != 0) {
    piVar1 = (int *)((int *)(**(code **)(*param_1 + 0x38))());
    (**(code **)(*piVar1 + 0x184))(param_2);
    return (undefined4 *)(param_3);
  }
  *param_2 = (undefined4)(0);
  return (undefined4 *)(param_2);
}


// Reference entry 10509620; body size 37 bytes.
#line 1 "ENTRY_10509620"

undefined4 * __thiscall Recovered_Bulk::FUN_10509620(undefined4 *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 0xb0));
  piVar1 = (int *)(*(int **)(param_1 + 0xb4));
  param_2[1] = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 10509650; body size 20 bytes.
#line 1 "ENTRY_10509650"

SCStr * __thiscall Recovered_Bulk::FUN_10509650(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 8));
  return (SCStr *)(param_2);
}


// Reference entry 10509940; body size 24 bytes.
#line 1 "ENTRY_10509940"

undefined4 __fastcall FUN_10509940(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  if (param_1[2] != 0) {
    piVar1 = (int *)((int *)(**(code **)(*param_1 + 0x38))());
                    
                    
    uVar2 = (undefined4)((**(code **)(*piVar1 + 0x168))());
    return (undefined4)(uVar2);
  }
  return (undefined4)(0);
}


// Reference entry 10509980; body size 23 bytes.
#line 1 "ENTRY_10509980"

undefined4 __thiscall Recovered_Bulk::FUN_10509980(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_102111f0(param_2,param_1 + 8);
  return (undefined4)(param_2);
}


// Reference entry 10509c60; body size 20 bytes.
#line 1 "ENTRY_10509c60"

SCStr * __thiscall Recovered_Bulk::FUN_10509c60(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0xc));
  return (SCStr *)(param_2);
}


// Reference entry 1050a980; body size 45 bytes.
#line 1 "ENTRY_1050a980"

uint __fastcall FUN_1050a980(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(char **)(param_1 + 0x13c));
  if ((((((char *)(pcVar1) == (char *)0x0) || (*pcVar1 == '\0')) ||
       (pcVar1 = *(char **)(param_1 + 0x138),(char *)( pcVar1) == (char *)0x0)) || (*pcVar1 == '\0')) &&
     (*(char *)(param_1 + 0x144) == '\0')) {
    return (uint)((uint)pcVar1 & 0xffffff00);
  }
  return (uint)(((uint)((int3)((uint)pcVar1 >> 8)) << 8 | (uint)(1)));
}


// Reference entry 1050a9e0; body size 60 bytes.
#line 1 "ENTRY_1050a9e0"

uint __fastcall FUN_1050a9e0(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(char **)(param_1 + 0x140));
  if ((((((char *)(pcVar1) == (char *)0x0) || (*pcVar1 == '\0')) ||
       (pcVar1 = *(char **)(param_1 + 0x13c),(char *)( pcVar1) == (char *)0x0)) ||
      (((*pcVar1 == '\0' || (pcVar1 = *(char **)(param_1 + 0x138),(char *)( pcVar1) == (char *)0x0)) ||
       (*pcVar1 == '\0')))) && (*(char *)(param_1 + 0x148) == '\0')) {
    return (uint)((uint)pcVar1 & 0xffffff00);
  }
  return (uint)(((uint)((int3)((uint)pcVar1 >> 8)) << 8 | (uint)(1)));
}


// Reference entry 1050aa40; body size 23 bytes.
#line 1 "ENTRY_1050aa40"

bool __fastcall FUN_1050aa40(int param_1)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_110a5ba0(param_1 + 8,"object.container"));
  return (bool)(cVar1 == '\0');
}


// Reference entry 1050aac0; body size 17 bytes.
#line 1 "ENTRY_1050aac0"

void __fastcall FUN_1050aac0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)(**(code **)(*param_1 + 0x180))());
                    
                    
  (**(code **)(*piVar1 + 0x14))();
  return;
}


// Reference entry 1050aae0; body size 33 bytes.
#line 1 "ENTRY_1050aae0"

undefined4 __fastcall FUN_1050aae0(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  if (param_1[2] != 0) {
    piVar2 = (int *)((int *)(**(code **)(*param_1 + 0x38))());
    cVar1 = (char)((**(code **)(*piVar2 + 0x164))());
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
  cVar1 = (char)((**(code **)(*param_1 + 0x5c))());
  if (cVar1 == '\0') {
    piVar2 = (int *)(param_1 + 0x20);
    (**(code **)(*param_1 + 0x180))(piVar2);
    thunk_FUN_111a05c0(piVar2);
  }
  return;
}


// Reference entry 1050adf0; body size 42 bytes.
#line 1 "ENTRY_1050adf0"

void __fastcall FUN_1050adf0(int *param_1)

{
  uint uVar1;
  
  thunk_FUN_104d9cc0();
  uVar1 = (uint)(-(uint)((int *)(param_1) != (int *)0x0) & (uint)(param_1 + 0x20));
  (**(code **)(*param_1 + 0x180))(uVar1);
  thunk_FUN_111a05e0(uVar1);
  return;
}


// Reference entry 1050ae30; body size 63 bytes.
#line 1 "ENTRY_1050ae30"

void __thiscall Recovered_Bulk::FUN_1050ae30(int param_2)
{
  int param_1 = (int )this;
  char cVar1;
  int iVar2;
  
  if (*(int **)(param_1 + 8) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 8) + 0xc))());
    if (cVar1 != '\0') {
      iVar2 = (int)((**(code **)(**(int **)(param_1 + 8) + 8))());
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

void __thiscall Recovered_Bulk::FUN_1050ea60(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (int)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 1050eb60; body size 41 bytes.
#line 1 "ENTRY_1050eb60"

undefined4 * __thiscall Recovered_Bulk::FUN_1050eb60(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1050eba0; body size 41 bytes.
#line 1 "ENTRY_1050eba0"

undefined4 * __thiscall Recovered_Bulk::FUN_1050eba0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1050ebe0; body size 41 bytes.
#line 1 "ENTRY_1050ebe0"

undefined4 * __thiscall Recovered_Bulk::FUN_1050ebe0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1050ec40; body size 24 bytes.
#line 1 "ENTRY_1050ec40"

undefined4 * __thiscall Recovered_Bulk::FUN_1050ec40(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1050fcf0; body size 60 bytes.
#line 1 "ENTRY_1050fcf0"

void __fastcall FUN_1050fcf0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + 2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCArray);
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


// Reference entry 1050ff90; body size 60 bytes.
#line 1 "ENTRY_1050ff90"

void __fastcall FUN_1050ff90(int *param_1)

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

undefined4 * __thiscall Recovered_Bulk::FUN_105109f0(byte param_2)
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

undefined4 * __thiscall Recovered_Bulk::FUN_10510a40(byte param_2)
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

undefined4 __thiscall Recovered_Bulk::FUN_10510b40(byte param_2)
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

undefined4 * __thiscall Recovered_Bulk::FUN_10510c40(byte param_2)
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
  
  iVar1 = (int)(SCThreadSafeInc(param_1 + 1));
  if ((1 < iVar1) && (param_1[2] != 0)) {
    piVar2 = (int *)((int *)(**(code **)(*param_1 + 0x3c))());
    (**(code **)(*piVar2 + 4))();
  }
  return (int)(iVar1);
}


// Reference entry 10510d30; body size 30 bytes.
#line 1 "ENTRY_10510d30"

void __thiscall Recovered_Bulk::FUN_10510d30(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (int)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 10510d60; body size 59 bytes.
#line 1 "ENTRY_10510d60"

void __thiscall Recovered_Bulk::FUN_10510d60(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0xc));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 0x10)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int*)(param_1 + 0xc) = (int)(*(int *)(param_1 + 0xc) + 8);
    return;
  }
  thunk_FUN_1026e620(puVar1,param_2);
  return;
}


// Reference entry 10510db0; body size 31 bytes.
#line 1 "ENTRY_10510db0"

void __thiscall Recovered_Bulk::FUN_10510db0(void)
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
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
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
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
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
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x30) + 0x34))());
    return (undefined4)(uVar1);
  }
  return (undefined4)(7);
}


// Reference entry 10513950; body size 50 bytes.
#line 1 "ENTRY_10513950"

SCStr * __thiscall Recovered_Bulk::FUN_10513950(SCStr *param_2,undefined4 param_3)
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

SCStr * __thiscall Recovered_Bulk::FUN_10513990(SCStr *param_2)
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
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x1c8) + 0x38))());
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
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x21c) + 0x188))());
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
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x1c8) + 0x18))());
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 105142b0; body size 26 bytes.
#line 1 "ENTRY_105142b0"

undefined4 __fastcall FUN_105142b0(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10508f40(param_1 + 4));
  if (iVar1 != 0) {
    return (undefined4)(0);
  }
  return (undefined4)(1);
}


// Reference entry 10515050; body size 40 bytes.
#line 1 "ENTRY_10515050"

undefined4 * __thiscall Recovered_Bulk::FUN_10515050(undefined4 *param_2,undefined4 *param_3)
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
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x1c8) + 0x14))());
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

int * __thiscall Recovered_Bulk::FUN_105168d0(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x68));
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
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
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x1c8) + 0x3c))());
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 105169c0; body size 39 bytes.
#line 1 "ENTRY_105169c0"

int * __thiscall Recovered_Bulk::FUN_105169c0(int *param_2)
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

int * __thiscall Recovered_Bulk::FUN_10516c90(int *param_2)
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
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x1c8) + 0x24))());
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
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x21c) + 0x5c))());
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
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x30) + 0x20))());
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
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x21c) + 0x94))());
    if (cVar1 != '\0') {
      thunk_FUN_10511190();
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 1051a4a0; body size 22 bytes.
#line 1 "ENTRY_1051a4a0"

uint __fastcall FUN_1051a4a0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 0x1c8) != (int *)((0x0))) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 0x1c8) + 0x28))());
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 1051a4c0; body size 35 bytes.
#line 1 "ENTRY_1051a4c0"

uint __fastcall FUN_1051a4c0(int param_1)

{
  char *_Str;
  ulong uVar1;
  
  _Str = (char *)(*(char **)(param_1 + 0xcc));
  if (((char *)(_Str) != (char *)0x0) && (*_Str != '\0')) {
    uVar1 = (ulong)(strtoul(_Str,(char **)0x0,10));
    return (uint)(uVar1 & 0xffffff01);
  }
  return (uint)((uint)_Str & 0xffffff00);
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

void __thiscall Recovered_Bulk::FUN_1051b580(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (int)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 1051b880; body size 41 bytes.
#line 1 "ENTRY_1051b880"

undefined4 * __thiscall Recovered_Bulk::FUN_1051b880(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1051d480; body size 54 bytes.
#line 1 "ENTRY_1051d480"

void FUN_1051d480(void)

{
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

undefined4 * __thiscall Recovered_Bulk::FUN_1051d610(byte param_2)
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

undefined4 * __thiscall Recovered_Bulk::FUN_1051d640(byte param_2)
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

undefined4 * __thiscall Recovered_Bulk::FUN_1051d670(byte param_2)
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

undefined4 * __thiscall Recovered_Bulk::FUN_1051d6a0(byte param_2)
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

undefined4 * __thiscall Recovered_Bulk::FUN_1051d6d0(byte param_2)
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

undefined4 * __thiscall Recovered_Bulk::FUN_1051d700(byte param_2)
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

undefined4 * __thiscall Recovered_Bulk::FUN_1051d730(byte param_2)
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

undefined4 * __thiscall Recovered_Bulk::FUN_1051d760(byte param_2)
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

undefined4 __thiscall Recovered_Bulk::FUN_1051d790(byte param_2)
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

undefined4 __thiscall Recovered_Bulk::FUN_1051dc50(byte param_2)
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

undefined4 * __thiscall Recovered_Bulk::FUN_1051dc80(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTAddMultipleURIsToQueueAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTAddMultipleURIsToQueueAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTAddMultipleURIsToQueueAIOOp);
  thunk_FUN_111c0af0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7e0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1051dcd0; body size 33 bytes.
#line 1 "ENTRY_1051dcd0"

undefined4 * __thiscall Recovered_Bulk::FUN_1051dcd0(byte param_2)
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

undefined4 * __thiscall Recovered_Bulk::FUN_1051dd00(byte param_2)
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

void __thiscall Recovered_Bulk::FUN_1051e090(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (int)(0);
    (**(code **)(*piVar1 + 8))();
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
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
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
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
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
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2229,&DAT_11882ff0));
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10520900; body size 35 bytes.
#line 1 "ENTRY_10520900"

SCStr * __stdcall FUN_10520900(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2229,&DAT_11882ff0));
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10520930; body size 35 bytes.
#line 1 "ENTRY_10520930"

SCStr * __stdcall FUN_10520930(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2228,&DAT_11882ff0));
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10520990; body size 35 bytes.
#line 1 "ENTRY_10520990"

SCStr * __stdcall FUN_10520990(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2227,&DAT_11882ff0));
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

void __thiscall Recovered_Bulk::FUN_10523660(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xb0) = (undefined4)(4000);
  thunk_FUN_10578900(param_2,param_1 + 0xb4,param_1 + 0xa8,(undefined4 *)(param_1 + 0xb0),
                     param_1 + 0xac);
  *(undefined1*)(param_1 + 0xbc) = (undefined1)(1);
  return;
}


// Reference entry 105236b0; body size 60 bytes.
#line 1 "ENTRY_105236b0"

void __thiscall Recovered_Bulk::FUN_105236b0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xac) = (undefined4)(4000);
  thunk_FUN_10578900(param_2,param_1 + 0xb0,param_1 + 0xa4,(undefined4 *)(param_1 + 0xac),
                     param_1 + 0xa8);
  *(undefined1*)(param_1 + 0xbc) = (undefined1)(1);
  return;
}


// Reference entry 105238c0; body size 44 bytes.
#line 1 "ENTRY_105238c0"

void __thiscall Recovered_Bulk::FUN_105238c0(undefined4 param_2)
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

void __thiscall Recovered_Bulk::FUN_10525980(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (int)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 105259b0; body size 30 bytes.
#line 1 "ENTRY_105259b0"

void __thiscall Recovered_Bulk::FUN_105259b0(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (int)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 10525b50; body size 41 bytes.
#line 1 "ENTRY_10525b50"

undefined4 * __thiscall Recovered_Bulk::FUN_10525b50(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10525c00; body size 41 bytes.
#line 1 "ENTRY_10525c00"

undefined4 * __thiscall Recovered_Bulk::FUN_10525c00(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10525c40; body size 41 bytes.
#line 1 "ENTRY_10525c40"

undefined4 * __thiscall Recovered_Bulk::FUN_10525c40(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10525ca0; body size 24 bytes.
#line 1 "ENTRY_10525ca0"

undefined4 * __thiscall Recovered_Bulk::FUN_10525ca0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1052ad80; body size 38 bytes.
#line 1 "ENTRY_1052ad80"

undefined4 * __thiscall Recovered_Bulk::FUN_1052ad80(byte param_2)
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

undefined4 * __thiscall Recovered_Bulk::FUN_1052adb0(byte param_2)
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

undefined4 * __thiscall Recovered_Bulk::FUN_1052ade0(byte param_2)
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

undefined4 __thiscall Recovered_Bulk::FUN_1052ae10(byte param_2)
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

undefined4 * __thiscall Recovered_Bulk::FUN_1052ae40(byte param_2)
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

undefined4 __thiscall Recovered_Bulk::FUN_1052ae70(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4)(param_1);
}


// Reference entry 1052aea0; body size 58 bytes.
#line 1 "ENTRY_1052aea0"

undefined4 * __thiscall Recovered_Bulk::FUN_1052aea0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpSPSetAccountNicknameXAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpSPSetAccountNicknameXAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpSPSetAccountNicknameXAIOOp);
  thunk_FUN_111c0af0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1052b200; body size 33 bytes.
#line 1 "ENTRY_1052b200"

undefined4 * __thiscall Recovered_Bulk::FUN_1052b200(byte param_2)
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

undefined4 * __thiscall Recovered_Bulk::FUN_1052b230(byte param_2)
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

undefined4 * __thiscall Recovered_Bulk::FUN_1052b4a0(byte param_2)
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

undefined4 * __thiscall Recovered_Bulk::FUN_1052bbf0(byte param_2)
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

undefined4 * __thiscall Recovered_Bulk::FUN_1052bfd0(byte param_2)
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

undefined4 * __thiscall Recovered_Bulk::FUN_1052c000(byte param_2)
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

undefined4 __thiscall Recovered_Bulk::FUN_1052c210(byte param_2)
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

undefined4 * __thiscall Recovered_Bulk::FUN_1052c590(byte param_2)
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

undefined4 * __thiscall Recovered_Bulk::FUN_1052c5d0(byte param_2)
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

undefined4 * __thiscall Recovered_Bulk::FUN_1052c710(byte param_2)
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

void __thiscall Recovered_Bulk::FUN_1052da20(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    uVar2 = (undefined4)((**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 1052da70; body size 61 bytes.
#line 1 "ENTRY_1052da70"

void __thiscall Recovered_Bulk::FUN_1052da70(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    uVar2 = (undefined4)((**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 1052dac0; body size 61 bytes.
#line 1 "ENTRY_1052dac0"

void __thiscall Recovered_Bulk::FUN_1052dac0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    uVar2 = (undefined4)((**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 1052db10; body size 61 bytes.
#line 1 "ENTRY_1052db10"

void __thiscall Recovered_Bulk::FUN_1052db10(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    uVar2 = (undefined4)((**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 1052db60; body size 61 bytes.
#line 1 "ENTRY_1052db60"

void __thiscall Recovered_Bulk::FUN_1052db60(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    uVar2 = (undefined4)((**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 1052dbb0; body size 61 bytes.
#line 1 "ENTRY_1052dbb0"

void __thiscall Recovered_Bulk::FUN_1052dbb0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    uVar2 = (undefined4)((**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 1052dc00; body size 30 bytes.
#line 1 "ENTRY_1052dc00"

void __thiscall Recovered_Bulk::FUN_1052dc00(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (int)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 1052dc30; body size 30 bytes.
#line 1 "ENTRY_1052dc30"

void __thiscall Recovered_Bulk::FUN_1052dc30(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (int)(0);
    (**(code **)(*piVar1 + 8))();
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
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x1c) + 0x1c))());
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
  return (int)(*(int *)(*(int *)(param_1 + 4) + (uVar1 >> 2 & *(int *)(param_1 + 8) - 1U) * 4) +
         (uVar1 & 3) * 4);
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

uint __fastcall FUN_1052e790(int *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)((**(code **)(*param_1 + 0x68))());
  if ((char)uVar1 != '\0') {
    uVar1 = (uint)(thunk_FUN_10dd3060());
    return (uint)(uVar1);
  }
  return (uint)(uVar1 & 0xffffff00);
}


// Reference entry 1052e820; body size 33 bytes.
#line 1 "ENTRY_1052e820"

void __fastcall FUN_1052e820(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x10) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x10) + 0x1c))());
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
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x78) + 0x1c))());
    if (cVar1 != '\0') {
      (**(code **)(*(int *)(param_1 + 0x74) + 4))();
    }
  }
  if (*(int **)(param_1 + 0x10) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x10) + 0x1c))());
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
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x10) + 0x1c))());
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
  
  cVar1 = (char)((**(code **)(*param_1 + 0x2c))());
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
  
  puVar1 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
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
  
  puVar2 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar2) != (undefined4 *)0x0) {
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
  puVar2 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar2) != (undefined4 *)0x0) {
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
  
  puVar2 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar2) != (undefined4 *)0x0) {
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
  
  puVar2 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar2) != (undefined4 *)0x0) {
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
  
  puVar2 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar2) != (undefined4 *)0x0) {
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
  puVar2 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar2) != (undefined4 *)0x0) {
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
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
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
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
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
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
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
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
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
  ((SCStr *)(aSStack_14))->int_allocRep("SCIWizard:onStateChanged");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10533120; body size 31 bytes.
#line 1 "ENTRY_10533120"

void FUN_10533120(void)

{
  SCStr aSStack_14 [8];
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(0);
  ((SCStr *)(aSStack_14))->int_allocRep("SCIWizard:onStateTransitionsEnabled");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10533150; body size 31 bytes.
#line 1 "ENTRY_10533150"

void FUN_10533150(void)

{
  SCStr aSStack_14 [8];
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(0);
  ((SCStr *)(aSStack_14))->int_allocRep("SCIWizard:onStateUpdate");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10533c20; body size 26 bytes.
#line 1 "ENTRY_10533c20"

undefined4 __thiscall Recovered_Bulk::FUN_10533c20(undefined4 param_2,undefined4 param_3)
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

bool __thiscall Recovered_Bulk::FUN_10534e40(int param_2)
{
  int param_1 = (int )this;
  char cVar1;
  
  if (param_2 != 0) {
    return (bool)(false);
  }
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 8) + 0x1e8))());
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

SCStr * __thiscall Recovered_Bulk::FUN_10534fc0(SCStr *param_2)
{
  int param_1 = (int )this;
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0((*(char *)(param_1 + 8) == '\0') + 0x2065,&DAT_11882ff0));
  ((SCStr *)(param_2))->int_allocRep(pcVar1);
  return (SCStr *)(param_2);
}


// Reference entry 10535000; body size 35 bytes.
#line 1 "ENTRY_10535000"

SCStr * __stdcall FUN_10535000(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2ba,&DAT_11882ff0));
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10535380; body size 28 bytes.
#line 1 "ENTRY_10535380"

int * __thiscall Recovered_Bulk::FUN_10535380(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0xb4));
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10535630; body size 26 bytes.
#line 1 "ENTRY_10535630"

undefined4 __thiscall Recovered_Bulk::FUN_10535630(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0xc4) + 0x6c))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10535770; body size 26 bytes.
#line 1 "ENTRY_10535770"

undefined4 __thiscall Recovered_Bulk::FUN_10535770(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0xc4) + 0x48))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 105357c0; body size 29 bytes.
#line 1 "ENTRY_105357c0"

undefined4 __thiscall Recovered_Bulk::FUN_105357c0(undefined4 param_2,undefined4 param_3)
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
  
  iVar1 = (int)(thunk_FUN_110c2c60());
  if (iVar1 != 0) {
    uVar2 = (undefined4)(thunk_FUN_10533e90());
    uVar2 = (undefined4)(thunk_FUN_110c1f30(uVar2));
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

int * __thiscall Recovered_Bulk::FUN_10535a90(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0xbc));
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10535ae0; body size 37 bytes.
#line 1 "ENTRY_10535ae0"

int * __thiscall Recovered_Bulk::FUN_10535ae0(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0xe0));
  if ((int *)(piVar1) == (int *)0x0) {
    *param_2 = (int)(0);
    return (int *)(param_2);
  }
  *param_2 = (int)((int)piVar1);
  (**(code **)(*piVar1 + 4))();
  return (int *)(param_2);
}


// Reference entry 10535d30; body size 37 bytes.
#line 1 "ENTRY_10535d30"

int * __thiscall Recovered_Bulk::FUN_10535d30(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0xd8));
  if ((int *)(piVar1) == (int *)0x0) {
    *param_2 = (int)(0);
    return (int *)(param_2);
  }
  *param_2 = (int)((int)piVar1);
  (**(code **)(*piVar1 + 4))();
  return (int *)(param_2);
}


// Reference entry 105361f0; body size 26 bytes.
#line 1 "ENTRY_105361f0"

undefined4 __thiscall Recovered_Bulk::FUN_105361f0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0xc4) + 0x54))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10536220; body size 26 bytes.
#line 1 "ENTRY_10536220"

undefined4 __thiscall Recovered_Bulk::FUN_10536220(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0xc4) + 0x18))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10536250; body size 25 bytes.
#line 1 "ENTRY_10536250"

SCStr * __thiscall Recovered_Bulk::FUN_10536250(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(*(int *)(param_1 + 8) + 0xf8));
  return (SCStr *)(param_2);
}


// Reference entry 10536270; body size 25 bytes.
#line 1 "ENTRY_10536270"

SCStr * __thiscall Recovered_Bulk::FUN_10536270(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(*(int *)(param_1 + 8) + 0x100));
  return (SCStr *)(param_2);
}


// Reference entry 10536290; body size 25 bytes.
#line 1 "ENTRY_10536290"

SCStr * __thiscall Recovered_Bulk::FUN_10536290(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(*(int *)(param_1 + 8) + 0xfc));
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
  return (undefined4)(*(undefined4 *)
          (*(int *)(*(int *)(param_1 + 0x5c) + (uVar1 >> 2 & *(int *)(param_1 + 0x60) - 1U) * 4) +
          (uVar1 & 3) * 4));
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
  return (undefined4)(*(undefined4 *)
          (*(int *)(*(int *)(param_1 + 0x5c) + (uVar1 >> 2 & *(int *)(param_1 + 0x60) - 1U) * 4) +
          (uVar1 & 3) * 4));
}


// Reference entry 1053f5b0; body size 21 bytes.
#line 1 "ENTRY_1053f5b0"

void __fastcall FUN_1053f5b0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(thunk_FUN_1059d5a0(0x9c4));
  *(undefined4*)(param_1 + 0x2c) = (undefined4)(uVar1);
  return;
}


// Reference entry 1053f5d0; body size 21 bytes.
#line 1 "ENTRY_1053f5d0"

void __fastcall FUN_1053f5d0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(thunk_FUN_1059d5a0(5000));
  *(undefined4*)(param_1 + 0x2c) = (undefined4)(uVar1);
  return;
}


// Reference entry 1053f5f0; body size 28 bytes.
#line 1 "ENTRY_1053f5f0"

void __fastcall FUN_1053f5f0(int param_1)

{
  if (*(int *)(param_1 + 0x2c) != 0) {
    thunk_FUN_1059d940(*(int *)(param_1 + 0x2c));
    *(undefined4*)(param_1 + 0x2c) = (undefined4)(0);
  }
  return;
}


// Reference entry 1053f620; body size 28 bytes.
#line 1 "ENTRY_1053f620"

void __fastcall FUN_1053f620(int param_1)

{
  if (*(int *)(param_1 + 0x2c) != 0) {
    thunk_FUN_1059d940(*(int *)(param_1 + 0x2c));
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

uint __fastcall FUN_10541090(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (uint)((**(code **)(*param_1 + 0x54))());
  if (uVar1 == 1) {
    iVar2 = (int)((**(code **)(*param_1 + 0x5c))());
    uVar1 = (uint)((*(uint *)(iVar2 + 4) & 0x7f) - 1 & 0xfffffffe);
    if (uVar1 == 10) {
      return (uint)(1);
    }
  }
  return (uint)(uVar1 & 0xffffff00);
}


// Reference entry 10541290; body size 33 bytes.
#line 1 "ENTRY_10541290"

undefined4 __fastcall FUN_10541290(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (undefined4)(0);
  if (*(int **)(param_1 + 0xd8) != (int *)((0x0))) {
    iVar2 = (int)((**(code **)(**(int **)(param_1 + 0xd8) + 0x38))());
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
    cVar1 = (char)(thunk_FUN_10541eb0());
    if (cVar1 != '\0') {
      return (undefined1)(0);
    }
  }
  return (undefined1)(1);
}


// Reference entry 10541b60; body size 48 bytes.
#line 1 "ENTRY_10541b60"

undefined4 __thiscall Recovered_Bulk::FUN_10541b60(SCStr *param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  uint uVar2;
  
  if ((*(char **)param_2 != (char *)((0x0))) && (**(char **)param_2 != '\0')) {
    uVar1 = (uint)((**(code **)(*param_1 + 0x20))());
    uVar2 = (uint)(((SCStr *)(param_2))->length());
    if (uVar2 <= uVar1) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10541c30; body size 19 bytes.
#line 1 "ENTRY_10541c30"

uint __fastcall FUN_10541c30(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 8) != (int *)((0x0))) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 8) + 0xc))());
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
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
  
  uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 8) + 0x50))());
  thunk_FUN_1053e5d0(uVar1);
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

void __stdcall FUN_1054ac50(int param_1, unsigned int recovered_unused_stack_0)

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
  iVar2 = (int)(thunk_FUN_1053e5d0(uVar1));
  if (iVar2 == 2) {
    FUN_1006aac8();
  }
  return;
}


// Reference entry 1054af60; body size 33 bytes.
#line 1 "ENTRY_1054af60"

void __thiscall Recovered_Bulk::FUN_1054af60(int param_2,int param_3)
{
  int param_1 = (int )this;
  if (param_2 == 0) {
    (**(code **)(**(int **)(param_1 + 8) + 0x1ec))(param_3 != 0);
  }
  return;
}


// Reference entry 1054b5b0; body size 32 bytes.
#line 1 "ENTRY_1054b5b0"

void __thiscall Recovered_Bulk::FUN_1054b5b0(undefined4 param_2,undefined8 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0xc4) + 0x34))(param_2,param_3);
  return;
}


// Reference entry 1054b710; body size 39 bytes.
#line 1 "ENTRY_1054b710"

void __thiscall Recovered_Bulk::FUN_1054b710(SCStr *param_2)
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

void __thiscall Recovered_Bulk::FUN_1054b740(SCStr *param_2)
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

void __thiscall Recovered_Bulk::FUN_1054bd00(char param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  int iVar2;
  
  cVar1 = (char)(*(char *)((int)param_1 + 0xd2));
  *(char*)((int)param_1 + 0xd2) = (char)(param_2);
  if (cVar1 != param_2) {
    iVar2 = (int)((**(code **)(*param_1 + 0x14))());
    if (iVar2 == 5) {
      (**(code **)(*param_1 + 0x138))();
    }
  }
  return;
}


// Reference entry 1054c0c0; body size 22 bytes.
#line 1 "ENTRY_1054c0c0"

void __stdcall FUN_1054c0c0(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_103d61d0(param_1,0);
  }
  return;
}


// Reference entry 1054c100; body size 43 bytes.
#line 1 "ENTRY_1054c100"

int __fastcall FUN_1054c100(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)((*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0xc)) - 1);
  return (int)(*(int *)(*(int *)(param_1 + 4) + (uVar1 >> 2 & *(int *)(param_1 + 8) - 1U) * 4) +
         (uVar1 & 3) * 4);
}


// Reference entry 1054c140; body size 43 bytes.
#line 1 "ENTRY_1054c140"

int __fastcall FUN_1054c140(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)((*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0xc)) - 1);
  return (int)(*(int *)(*(int *)(param_1 + 4) + (uVar1 >> 2 & *(int *)(param_1 + 8) - 1U) * 4) +
         (uVar1 & 3) * 4);
}


// Reference entry 1054c2a0; body size 26 bytes.
#line 1 "ENTRY_1054c2a0"

uint __fastcall FUN_1054c2a0(int *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)((**(code **)(*param_1 + 0x60))());
  if ((char)uVar1 != '\0') {
    uVar1 = (uint)(thunk_FUN_10dd4b80());
    return (uint)(uVar1);
  }
  return (uint)(uVar1 & 0xffffff00);
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

undefined4 * __thiscall Recovered_Bulk::FUN_1054c390(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
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

undefined4 * __thiscall Recovered_Bulk::FUN_1054cab0(byte param_2)
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

undefined4 * __thiscall Recovered_Bulk::FUN_1054cae0(byte param_2)
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

undefined4 * __thiscall Recovered_Bulk::FUN_1054cb20(byte param_2)
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

SCStr * __thiscall Recovered_Bulk::FUN_1054cfc0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x38));
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

void __thiscall Recovered_Bulk::FUN_1054e0e0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_1054e110(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 1054e1f0; body size 60 bytes.
#line 1 "ENTRY_1054e1f0"

int __thiscall Recovered_Bulk::FUN_1054e1f0(SCStr *param_2)
{
  int *param_1 = (int *)this;
  bool bVar1;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_1054e240(local_c,param_2);
  if ((*(char *)(local_4 + 0xd) == '\0') &&
     (bVar1 = ((SCStr *)(param_2))->op_lt((SCStr *)(local_4 + 0x10)), !bVar1)) {
    return (int)(local_4);
  }
  return (int)(*param_1);
}


// Reference entry 1054ea60; body size 59 bytes.
#line 1 "ENTRY_1054ea60"

void __thiscall Recovered_Bulk::FUN_1054ea60(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
    return;
  }
  thunk_FUN_1054dd50(puVar1,param_2);
  return;
}


// Reference entry 1054edd0; body size 41 bytes.
#line 1 "ENTRY_1054edd0"

undefined4 * __thiscall Recovered_Bulk::FUN_1054edd0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1054ee30; body size 41 bytes.
#line 1 "ENTRY_1054ee30"

undefined4 * __thiscall Recovered_Bulk::FUN_1054ee30(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1054ee70; body size 24 bytes.
#line 1 "ENTRY_1054ee70"

undefined4 * __thiscall Recovered_Bulk::FUN_1054ee70(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1054ee90; body size 24 bytes.
#line 1 "ENTRY_1054ee90"

undefined4 * __thiscall Recovered_Bulk::FUN_1054ee90(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
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
  pvVar1 = (void *)(operator_new(0x1c));
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
  thunk_FUN_1054e110(param_1,*(undefined4 *)(*param_1 + 4));
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
  thunk_FUN_1054e110(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 10550820; body size 38 bytes.
#line 1 "ENTRY_10550820"

undefined4 * __thiscall Recovered_Bulk::FUN_10550820(byte param_2)
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

undefined4 __thiscall Recovered_Bulk::FUN_10550850(byte param_2)
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

undefined4 * __thiscall Recovered_Bulk::FUN_10550af0(byte param_2)
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

undefined4 __thiscall Recovered_Bulk::FUN_10550b20(byte param_2)
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

undefined4 __thiscall Recovered_Bulk::FUN_10550b50(byte param_2)
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

undefined4 __thiscall Recovered_Bulk::FUN_10550c50(byte param_2)
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
  pvVar1 = (void *)(operator_new(0x1c));
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 10550ea0; body size 20 bytes.
#line 1 "ENTRY_10550ea0"

void __thiscall Recovered_Bulk::FUN_10550ea0(undefined4 param_2,undefined4 param_3)
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
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)((int *)*piVar3);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
    param_1 = (int *)(piVar3);
  }
  return (int *)(param_1);
}


// Reference entry 10552010; body size 61 bytes.
#line 1 "ENTRY_10552010"

void __thiscall Recovered_Bulk::FUN_10552010(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    uVar2 = (undefined4)((**(code **)(*param_2 + 0xc))());
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
  thunk_FUN_1054e110(param_1,*(undefined4 *)(iVar1 + 4));
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

void __thiscall Recovered_Bulk::FUN_105564a0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x48));
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

void __thiscall Recovered_Bulk::FUN_10556c40(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
    return;
  }
  thunk_FUN_1054dd50(puVar1,param_2);
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

undefined4 * __thiscall Recovered_Bulk::FUN_105587d0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10558810; body size 41 bytes.
#line 1 "ENTRY_10558810"

undefined4 * __thiscall Recovered_Bulk::FUN_10558810(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10558850; body size 41 bytes.
#line 1 "ENTRY_10558850"

undefined4 * __thiscall Recovered_Bulk::FUN_10558850(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105588b0; body size 41 bytes.
#line 1 "ENTRY_105588b0"

undefined4 * __thiscall Recovered_Bulk::FUN_105588b0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105588f0; body size 41 bytes.
#line 1 "ENTRY_105588f0"

undefined4 * __thiscall Recovered_Bulk::FUN_105588f0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105597d0; body size 60 bytes.
#line 1 "ENTRY_105597d0"

void __fastcall FUN_105597d0(int *param_1)

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

undefined4 * __thiscall Recovered_Bulk::FUN_1055a570(byte param_2)
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

undefined4 * __thiscall Recovered_Bulk::FUN_1055a5a0(byte param_2)
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

undefined4 * __thiscall Recovered_Bulk::FUN_1055a910(byte param_2)
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

undefined4 __thiscall Recovered_Bulk::FUN_1055abe0(byte param_2)
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

undefined4 * __thiscall Recovered_Bulk::FUN_1055afd0(byte param_2)
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

void __thiscall Recovered_Bulk::FUN_1055b730(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    uVar2 = (undefined4)((**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 1055d3c0; body size 20 bytes.
#line 1 "ENTRY_1055d3c0"

SCStr * __thiscall Recovered_Bulk::FUN_1055d3c0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x10));
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

SCStr * __thiscall Recovered_Bulk::FUN_1055d400(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x10));
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

SCStr * __thiscall Recovered_Bulk::FUN_1055d580(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x14));
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

SCStr * __thiscall Recovered_Bulk::FUN_1055d5c0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x14));
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
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2562,&DAT_11882ff0));
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 1055db90; body size 20 bytes.
#line 1 "ENTRY_1055db90"

SCStr * __thiscall Recovered_Bulk::FUN_1055db90(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0xc));
  return (SCStr *)(param_2);
}


// Reference entry 1055dbb0; body size 35 bytes.
#line 1 "ENTRY_1055dbb0"

SCStr * __stdcall FUN_1055dbb0(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x20e4,&DAT_11882ff0));
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 1055dbe0; body size 20 bytes.
#line 1 "ENTRY_1055dbe0"

SCStr * __thiscall Recovered_Bulk::FUN_1055dbe0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0xc));
  return (SCStr *)(param_2);
}


// Reference entry 1055dc00; body size 35 bytes.
#line 1 "ENTRY_1055dc00"

SCStr * __stdcall FUN_1055dc00(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x207f,&DAT_11882ff0));
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 1055dc30; body size 35 bytes.
#line 1 "ENTRY_1055dc30"

SCStr * __stdcall FUN_1055dc30(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x207f,&DAT_11882ff0));
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 1055dc70; body size 20 bytes.
#line 1 "ENTRY_1055dc70"

int __fastcall FUN_1055dc70(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_1020fe60());
  if (*(int *)(param_1 + 0x280) != 0) {
    iVar1 = (int)(iVar1 + 1);
  }
  return (int)(iVar1);
}


// Reference entry 1055dc90; body size 28 bytes.
#line 1 "ENTRY_1055dc90"

int * __thiscall Recovered_Bulk::FUN_1055dc90(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x120));
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 1055dce0; body size 35 bytes.
#line 1 "ENTRY_1055dce0"

SCStr * __stdcall FUN_1055dce0(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2081,&DAT_11882ff0));
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
  thunk_FUN_1021bf80(param_1,param_2);
  thunk_FUN_1055b780();
  return;
}


// Reference entry 1055f4b0; body size 23 bytes.
#line 1 "ENTRY_1055f4b0"

void __stdcall FUN_1055f4b0(undefined4 param_1)

{
  thunk_FUN_1055b780();
  thunk_FUN_1021cc40(param_1);
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

undefined4 * __thiscall Recovered_Bulk::FUN_105600b0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105600f0; body size 41 bytes.
#line 1 "ENTRY_105600f0"

undefined4 * __thiscall Recovered_Bulk::FUN_105600f0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10562940; body size 30 bytes.
#line 1 "ENTRY_10562940"

void __thiscall Recovered_Bulk::FUN_10562940(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (int)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 10562970; body size 30 bytes.
#line 1 "ENTRY_10562970"

void __thiscall Recovered_Bulk::FUN_10562970(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (int)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 105629a0; body size 30 bytes.
#line 1 "ENTRY_105629a0"

void __thiscall Recovered_Bulk::FUN_105629a0(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (int)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 105629d0; body size 30 bytes.
#line 1 "ENTRY_105629d0"

void __thiscall Recovered_Bulk::FUN_105629d0(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (int)(0);
    (**(code **)(*piVar1 + 8))();
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
  thunk_FUN_103beae0(&param_1,param_2);
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
  thunk_FUN_103beae0(&param_1,param_2);
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
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10562e90; body size 41 bytes.
#line 1 "ENTRY_10562e90"

undefined4 * __thiscall Recovered_Bulk::FUN_10562e90(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10562ed0; body size 41 bytes.
#line 1 "ENTRY_10562ed0"

undefined4 * __thiscall Recovered_Bulk::FUN_10562ed0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10562f10; body size 41 bytes.
#line 1 "ENTRY_10562f10"

undefined4 * __thiscall Recovered_Bulk::FUN_10562f10(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10562f50; body size 41 bytes.
#line 1 "ENTRY_10562f50"

undefined4 * __thiscall Recovered_Bulk::FUN_10562f50(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10562f90; body size 41 bytes.
#line 1 "ENTRY_10562f90"

undefined4 * __thiscall Recovered_Bulk::FUN_10562f90(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10562ff0; body size 41 bytes.
#line 1 "ENTRY_10562ff0"

undefined4 * __thiscall Recovered_Bulk::FUN_10562ff0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10563030; body size 41 bytes.
#line 1 "ENTRY_10563030"

undefined4 * __thiscall Recovered_Bulk::FUN_10563030(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10563070; body size 41 bytes.
#line 1 "ENTRY_10563070"

undefined4 * __thiscall Recovered_Bulk::FUN_10563070(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105630b0; body size 41 bytes.
#line 1 "ENTRY_105630b0"

undefined4 * __thiscall Recovered_Bulk::FUN_105630b0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10563120; body size 24 bytes.
#line 1 "ENTRY_10563120"

undefined4 * __thiscall Recovered_Bulk::FUN_10563120(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
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

undefined4 __thiscall Recovered_Bulk::FUN_10566db0(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  uint uVar2;
  
  if (*(byte *)(param_2 + 1) < *(byte *)(param_1 + 1)) {
    return (undefined4)(0);
  }
  if (*(byte *)((param_1 + 1)) == *(byte *)((param_2 + 1))) {
    if (*(byte *)(param_2 + 2) < *(byte *)(param_1 + 2)) {
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

undefined4 * __thiscall Recovered_Bulk::FUN_10566ea0(byte param_2)
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

undefined4 * __thiscall Recovered_Bulk::FUN_10566ed0(byte param_2)
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

undefined4 __thiscall Recovered_Bulk::FUN_10566f10(byte param_2)
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

undefined4 * __thiscall Recovered_Bulk::FUN_10566f40(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTGetMediaInfoAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTGetMediaInfoAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTGetMediaInfoAIOOp);
  thunk_FUN_111c0af0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10fd8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10566f90; body size 58 bytes.
#line 1 "ENTRY_10566f90"

undefined4 * __thiscall Recovered_Bulk::FUN_10566f90(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTPlayAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTPlayAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTPlayAIOOp);
  thunk_FUN_111c0af0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10566fe0; body size 58 bytes.
#line 1 "ENTRY_10566fe0"

undefined4 * __thiscall Recovered_Bulk::FUN_10566fe0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTSetAVTransportURIAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTSetAVTransportURIAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTSetAVTransportURIAIOOp);
  thunk_FUN_111c0af0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10567030; body size 45 bytes.
#line 1 "ENTRY_10567030"

undefined4 * __thiscall Recovered_Bulk::FUN_10567030(byte param_2)
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

undefined4 * __thiscall Recovered_Bulk::FUN_10567320(byte param_2)
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

undefined4 * __thiscall Recovered_Bulk::FUN_10567460(byte param_2)
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

undefined4 * __thiscall Recovered_Bulk::FUN_10567ae0(byte param_2)
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

undefined4 __thiscall Recovered_Bulk::FUN_10567b20(byte param_2)
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

void __thiscall Recovered_Bulk::FUN_1056d380(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    uVar2 = (undefined4)((**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 1056d3d0; body size 61 bytes.
#line 1 "ENTRY_1056d3d0"

void __thiscall Recovered_Bulk::FUN_1056d3d0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    uVar2 = (undefined4)((**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 1056d420; body size 30 bytes.
#line 1 "ENTRY_1056d420"

void __thiscall Recovered_Bulk::FUN_1056d420(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (int)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 1056d450; body size 30 bytes.
#line 1 "ENTRY_1056d450"

void __thiscall Recovered_Bulk::FUN_1056d450(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (int)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 1056d480; body size 30 bytes.
#line 1 "ENTRY_1056d480"

void __thiscall Recovered_Bulk::FUN_1056d480(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (int)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 1056d4b0; body size 30 bytes.
#line 1 "ENTRY_1056d4b0"

void __thiscall Recovered_Bulk::FUN_1056d4b0(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (int)(0);
    (**(code **)(*piVar1 + 8))();
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
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
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
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
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
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
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
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
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

SCStr * __thiscall Recovered_Bulk::FUN_10574790(SCStr *param_2)
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

SCStr * __thiscall Recovered_Bulk::FUN_105747e0(SCStr *param_2)
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

SCStr * __thiscall Recovered_Bulk::FUN_105749b0(SCStr *param_2)
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
  ((SCStr *)(param_1))->op_ctor((SCStr *)&DAT_121a07b0);
  *(undefined4*)(param_1 + 4) = (undefined4)(DAT_121a07b4);
  return (SCStr *)(param_1);
}


// Reference entry 10574ba0; body size 32 bytes.
#line 1 "ENTRY_10574ba0"

SCStr * __stdcall FUN_10574ba0(SCStr *param_1)

{
  ((SCStr *)(param_1))->op_ctor((SCStr *)&DAT_121a07b0);
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
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x21e2,&DAT_11882ff0));
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10574d60; body size 35 bytes.
#line 1 "ENTRY_10574d60"

SCStr * __stdcall FUN_10574d60(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2209,&DAT_11882ff0));
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10574d90; body size 35 bytes.
#line 1 "ENTRY_10574d90"

SCStr * __stdcall FUN_10574d90(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2201,&DAT_11882ff0));
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10574e30; body size 35 bytes.
#line 1 "ENTRY_10574e30"

SCStr * __stdcall FUN_10574e30(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2209,&DAT_11882ff0));
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10574e60; body size 51 bytes.
#line 1 "ENTRY_10574e60"

SCStr * __thiscall Recovered_Bulk::FUN_10574e60(SCStr *param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  char *pcVar2;
  
  uVar1 = (undefined4)(0x1f57);
  if (*(char *)(param_1 + 0x18b0) == '\0') {
    uVar1 = (undefined4)(0x2204);
  }
  pcVar2 = (char *)((char *)thunk_FUN_1109aba0(uVar1,&DAT_11882ff0));
  ((SCStr *)(param_2))->int_allocRep(pcVar2);
  return (SCStr *)(param_2);
}


// Reference entry 10574ea0; body size 35 bytes.
#line 1 "ENTRY_10574ea0"

SCStr * __stdcall FUN_10574ea0(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2208,&DAT_11882ff0));
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10574ed0; body size 35 bytes.
#line 1 "ENTRY_10574ed0"

SCStr * __stdcall FUN_10574ed0(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2203,&DAT_11882ff0));
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10574f00; body size 35 bytes.
#line 1 "ENTRY_10574f00"

SCStr * __stdcall FUN_10574f00(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x220a,&DAT_11882ff0));
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10574f30; body size 35 bytes.
#line 1 "ENTRY_10574f30"

SCStr * __stdcall FUN_10574f30(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2203,&DAT_11882ff0));
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

uint __fastcall FUN_10576040(int param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 0x18) != (int *)((0x0))) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 0x18) + 0x2c))());
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10576160; body size 45 bytes.
#line 1 "ENTRY_10576160"

void __thiscall Recovered_Bulk::FUN_10576160(int *param_2)
{
  int param_1 = (int )this;
  char cVar1;
  
  if ((int *)(param_2) == *(int **)(param_1 + 0x14)) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x14) + 0x5c))());
    if ((cVar1 != '\0') && (*(char *)(param_1 + 0x1c) == '\0')) {
      thunk_FUN_10579450();
      *(undefined1*)(param_1 + 0x1c) = (undefined1)(1);
    }
  }
  return;
}


// Reference entry 10579850; body size 41 bytes.
#line 1 "ENTRY_10579850"

undefined4 * __thiscall Recovered_Bulk::FUN_10579850(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10579890; body size 41 bytes.
#line 1 "ENTRY_10579890"

undefined4 * __thiscall Recovered_Bulk::FUN_10579890(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105798f0; body size 41 bytes.
#line 1 "ENTRY_105798f0"

undefined4 * __thiscall Recovered_Bulk::FUN_105798f0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10579960; body size 41 bytes.
#line 1 "ENTRY_10579960"

undefined4 * __thiscall Recovered_Bulk::FUN_10579960(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105799a0; body size 24 bytes.
#line 1 "ENTRY_105799a0"

undefined4 * __thiscall Recovered_Bulk::FUN_105799a0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1057c200; body size 58 bytes.
#line 1 "ENTRY_1057c200"

undefined4 * __thiscall Recovered_Bulk::FUN_1057c200(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTCreateSavedQueueAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTCreateSavedQueueAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTCreateSavedQueueAIOOp);
  thunk_FUN_111c0af0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xdbe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1057c250; body size 58 bytes.
#line 1 "ENTRY_1057c250"

undefined4 * __thiscall Recovered_Bulk::FUN_1057c250(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpCDDestroyObjectAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpCDDestroyObjectAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpCDDestroyObjectAIOOp);
  thunk_FUN_111c0af0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1057c2a0; body size 58 bytes.
#line 1 "ENTRY_1057c2a0"

undefined4 * __thiscall Recovered_Bulk::FUN_1057c2a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpCDUpdateObjectAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpCDUpdateObjectAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpCDUpdateObjectAIOOp);
  thunk_FUN_111c0af0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1057c2f0; body size 38 bytes.
#line 1 "ENTRY_1057c2f0"

undefined4 * __thiscall Recovered_Bulk::FUN_1057c2f0(byte param_2)
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

undefined4 __thiscall Recovered_Bulk::FUN_1057ca70(byte param_2)
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

undefined4 * __thiscall Recovered_Bulk::FUN_1057cdf0(byte param_2)
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

void __thiscall Recovered_Bulk::FUN_1057d590(void)
{
  int param_1 = (int )this;
  undefined4 in_stack_00000014;
  
  *(undefined4*)(param_1 + 0x3c) = (undefined4)(in_stack_00000014);
  thunk_FUN_102082f0();
  return;
}


// Reference entry 1057d5b0; body size 57 bytes.
#line 1 "ENTRY_1057d5b0"

undefined1 __fastcall FUN_1057d5b0(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  
  if (*(int *)(param_1 + 300) == 0) {
    cVar1 = (char)(thunk_FUN_105855b0());
    if (cVar1 == '\0') {
      return (undefined1)(1);
    }
    uVar2 = (undefined1)(thunk_FUN_10217af0());
    return (undefined1)(uVar2);
  }
  cVar1 = (char)(thunk_FUN_105855b0());
  if ((cVar1 == '\0') && (cVar1 = thunk_FUN_10585690(), cVar1 == '\0')) {
    return (undefined1)(1);
  }
  return (undefined1)(0);
}


// Reference entry 1057d600; body size 40 bytes.
#line 1 "ENTRY_1057d600"

undefined1 __fastcall FUN_1057d600(int param_1)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_105855b0());
  if (cVar1 != '\0') {
    return (undefined1)(1);
  }
  if ((*(int *)(param_1 + 300) == 0) && (cVar1 = thunk_FUN_10208940(), cVar1 != '\0')) {
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
  uVar1 = (undefined1)(thunk_FUN_10208c50());
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
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
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
    iVar1 = (int)(thunk_FUN_1020b530());
    if (iVar1 != 7) {
      uVar2 = (undefined4)(thunk_FUN_1020b530());
      return (undefined4)(uVar2);
    }
  }
  return (undefined4)(4);
}


// Reference entry 10581a60; body size 20 bytes.
#line 1 "ENTRY_10581a60"

SCStr * __thiscall Recovered_Bulk::FUN_10581a60(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x48));
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
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x21de,&DAT_11882ff0));
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
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x21dd,&DAT_11882ff0));
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 105839a0; body size 28 bytes.
#line 1 "ENTRY_105839a0"

undefined4 __stdcall FUN_105839a0(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 2) {
    uVar1 = (undefined4)(thunk_FUN_102105a0());
    return (undefined4)(uVar1);
  }
  return (undefined4)(4);
}


// Reference entry 105839d0; body size 55 bytes.
#line 1 "ENTRY_105839d0"

SCStr * FUN_105839d0(SCStr *param_1,int param_2,undefined4 param_3)

{
  if (param_2 != 2) {
    thunk_FUN_10210700(param_1,param_2,param_3);
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
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10585890; body size 59 bytes.
#line 1 "ENTRY_10585890"

bool __thiscall Recovered_Bulk::FUN_10585890(undefined4 param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(param_2);
  thunk_FUN_110b0460(1);
  iVar1 = (int)(thunk_FUN_110b2900(param_1 + 8,"RINCON_AssociatedZPUDN",&DAT_118823e4,0));
  *(int*)(param_1 + 0x14) = (int)(iVar1);
  return (bool)(0 < iVar1);
}


// Reference entry 10585f20; body size 38 bytes.
#line 1 "ENTRY_10585f20"

undefined4 __thiscall Recovered_Bulk::FUN_10585f20(undefined4 param_2)
{
  undefined4 param_1 = (undefined4 )this;
  int *piVar1;
  
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("ObjectID",0));
  (**(code **)(*piVar1 + 0xc))(param_2);
  return (undefined4)(param_1);
}


// Reference entry 10586670; body size 41 bytes.
#line 1 "ENTRY_10586670"

undefined4 * __thiscall Recovered_Bulk::FUN_10586670(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105866b0; body size 41 bytes.
#line 1 "ENTRY_105866b0"

undefined4 * __thiscall Recovered_Bulk::FUN_105866b0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10586710; body size 41 bytes.
#line 1 "ENTRY_10586710"

undefined4 * __thiscall Recovered_Bulk::FUN_10586710(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
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

undefined4 * __thiscall Recovered_Bulk::FUN_10588fe0(byte param_2)
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

undefined4 * __thiscall Recovered_Bulk::FUN_10589010(byte param_2)
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

undefined4 * __thiscall Recovered_Bulk::FUN_10589040(byte param_2)
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

undefined4 __thiscall Recovered_Bulk::FUN_10589080(byte param_2)
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

undefined4 __thiscall Recovered_Bulk::FUN_10589670(byte param_2)
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

undefined4 * __thiscall Recovered_Bulk::FUN_105897c0(byte param_2)
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

undefined4 * __thiscall Recovered_Bulk::FUN_105897f0(byte param_2)
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

undefined4 * __thiscall Recovered_Bulk::FUN_10589820(byte param_2)
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
    cVar1 = (char)(thunk_FUN_10219a00(param_1 + 0x128));
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
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
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
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
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

SCStr * __thiscall Recovered_Bulk::FUN_1058de30(SCStr *param_2)
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

SCStr * __thiscall Recovered_Bulk::FUN_1058de60(SCStr *param_2)
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
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x228b,&DAT_11882ff0));
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 1058ec70; body size 32 bytes.
#line 1 "ENTRY_1058ec70"

int __thiscall Recovered_Bulk::FUN_1058ec70(int param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  if ((param_2 != 1) && (param_2 != 2)) {
    iVar1 = (int)(thunk_FUN_10210390());
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

SCStr * __thiscall Recovered_Bulk::FUN_10590620(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x124));
  return (SCStr *)(param_2);
}


// Reference entry 10590f60; body size 23 bytes.
#line 1 "ENTRY_10590f60"

undefined4 __thiscall Recovered_Bulk::FUN_10590f60(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_101ff410(param_1 + 0x128);
  return (undefined4)(param_2);
}


// Reference entry 10590f80; body size 23 bytes.
#line 1 "ENTRY_10590f80"

undefined4 __thiscall Recovered_Bulk::FUN_10590f80(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_101ff410(param_1 + 0x128);
  return (undefined4)(param_2);
}


// Reference entry 105917c0; body size 57 bytes.
#line 1 "ENTRY_105917c0"

void __thiscall Recovered_Bulk::FUN_105917c0(undefined4 param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  if (*(int *)(param_1 + 0x1e0) == 0) {
    iVar1 = (int)(thunk_FUN_1058bf80(param_2,param_1 + 100));
    if (iVar1 != 0) {
      thunk_FUN_102207b0(iVar1,param_1 + 0x120,0);
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
  
  pcVar1 = (char *)(*(char **)(param_1 + 0x124));
  uVar2 = (uint3)((uint3)((uint)pcVar1 >> 8));
  if (((char *)(pcVar1) != (char *)0x0) && (*pcVar1 != '\0')) {
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
  thunk_FUN_110adac0(-(uint)(param_1 != 0x1ec) & param_1 - 0xd4U);
  thunk_FUN_10592970();
  return;
}


// Reference entry 10592e90; body size 57 bytes.
#line 1 "ENTRY_10592e90"

void __thiscall Recovered_Bulk::FUN_10592e90(undefined4 param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  if (*(int *)(param_1 + 0x1e0) == 0) {
    iVar1 = (int)(thunk_FUN_1058bf80(param_2,param_1 + 100));
    if (iVar1 != 0) {
      thunk_FUN_102207b0(iVar1,param_1 + 0x120,0);
    }
  }
  return;
}


// Reference entry 10593ce0; body size 33 bytes.
#line 1 "ENTRY_10593ce0"

void __thiscall Recovered_Bulk::FUN_10593ce0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_10593d10(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x30);
  return;
}


// Reference entry 10593dd0; body size 60 bytes.
#line 1 "ENTRY_10593dd0"

int __thiscall Recovered_Bulk::FUN_10593dd0(SCStr *param_2)
{
  int *param_1 = (int *)this;
  bool bVar1;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10593e20(local_c,param_2);
  if ((*(char *)(local_4 + 0xd) == '\0') &&
     (bVar1 = ((SCStr *)(param_2))->op_lt((SCStr *)(local_4 + 0x10)), !bVar1)) {
    return (int)(local_4);
  }
  return (int)(*param_1);
}


// Reference entry 10594990; body size 41 bytes.
#line 1 "ENTRY_10594990"

undefined4 * __thiscall Recovered_Bulk::FUN_10594990(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105949f0; body size 41 bytes.
#line 1 "ENTRY_105949f0"

undefined4 * __thiscall Recovered_Bulk::FUN_105949f0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
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
  pvVar1 = (void *)(operator_new(0x30));
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
  thunk_FUN_10593d10(param_1,*(undefined4 *)(*param_1 + 4));
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
  thunk_FUN_10593d10(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x30);
  return;
}


// Reference entry 10595a80; body size 32 bytes.
#line 1 "ENTRY_10595a80"

undefined4 __thiscall Recovered_Bulk::FUN_10595a80(byte param_2)
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

undefined4 __thiscall Recovered_Bulk::FUN_10595ab0(byte param_2)
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
  pvVar1 = (void *)(operator_new(0x30));
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 10595f70; body size 20 bytes.
#line 1 "ENTRY_10595f70"

void __thiscall Recovered_Bulk::FUN_10595f70(undefined4 param_2,undefined4 param_3)
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
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)((int *)*piVar3);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
    param_1 = (int *)(piVar3);
  }
  return (int *)(param_1);
}


// Reference entry 10596a90; body size 61 bytes.
#line 1 "ENTRY_10596a90"

void __thiscall Recovered_Bulk::FUN_10596a90(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    uVar2 = (undefined4)((**(code **)(*param_2 + 0xc))());
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
    thunk_FUN_1059b6d0(param_1,param_2[2]);
    piVar2 = (int *)((int *)*param_2);
    thunk_FUN_1148a50e(param_2,0x18);
    param_2 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }
  return;
}


// Reference entry 1059b720; body size 49 bytes.
#line 1 "ENTRY_1059b720"

int __thiscall Recovered_Bulk::FUN_1059b720(uint *param_2)
{
  int *param_1 = (int *)this;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_1059b760(local_c,param_2);
  if ((*(char *)(local_4 + 0xd) != '\0') || (*param_2 < *(uint *)(local_4 + 0x10))) {
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
  pvVar1 = (void *)(operator_new(0x18));
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
  
  piVar2 = (int *)(*(int **)(param_1 + 4));
  if ((int *)(piVar2) != (int *)0x0) {
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

undefined4 __thiscall Recovered_Bulk::FUN_1059c3d0(byte param_2)
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
  pvVar1 = (void *)(operator_new(0x18));
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
  while (piVar3 = piVar2, cVar1 == '\0') {
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
  thunk_FUN_1059d5a0(*(undefined4 *)(param_1 + 0xc));
  return (undefined4)(0);
}


// Reference entry 1059da00; body size 24 bytes.
#line 1 "ENTRY_1059da00"

undefined4 * __thiscall Recovered_Bulk::FUN_1059da00(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1059e630; body size 25 bytes.
#line 1 "ENTRY_1059e630"

int * __thiscall Recovered_Bulk::FUN_1059e630(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x18));
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
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
    thunk_FUN_1059f110(param_1,param_2[2]);
    piVar2 = (int *)((int *)*param_2);
    thunk_FUN_1148a50e(param_2,0x30);
    param_2 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }
  return;
}


// Reference entry 1059f160; body size 49 bytes.
#line 1 "ENTRY_1059f160"

int __thiscall Recovered_Bulk::FUN_1059f160(int *param_2)
{
  int *param_1 = (int *)this;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_1059f1a0(local_c,param_2);
  if ((*(char *)(local_4 + 0xd) != '\0') || (*param_2 < *(int *)(local_4 + 0x10))) {
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
  pvVar1 = (void *)(operator_new(0x30));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 1059ff10; body size 37 bytes.
#line 1 "ENTRY_1059ff10"

undefined4 * __thiscall Recovered_Bulk::FUN_1059ff10(undefined4 param_2)
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

undefined4 * __thiscall Recovered_Bulk::FUN_1059ff40(undefined4 param_2)
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
  ((_Tree<> *)(0))->op_dtor();
  FUN_100517a8();
  FUN_100517a8();
  return;
}


// Reference entry 105a0c80; body size 32 bytes.
#line 1 "ENTRY_105a0c80"

undefined4 __thiscall Recovered_Bulk::FUN_105a0c80(byte param_2)
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

undefined4 __thiscall Recovered_Bulk::FUN_105a0cb0(byte param_2)
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

undefined4 * __thiscall Recovered_Bulk::FUN_105a0d80(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizLifecycleRecorder);
  ((_Tree<> *)(0))->op_dtor();
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
  pvVar1 = (void *)(operator_new(0x30));
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
  
  iVar1 = (int)((**(code **)(*param_1 + 0x1c))());
  if (iVar1 != 0) {
    piVar2 = (int *)((int *)(**(code **)(*param_1 + 0x1c))());
                    
                    
    uVar3 = (undefined4)((**(code **)(*piVar2 + 4))());
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
  
  iVar1 = (int)((**(code **)(*param_1 + 0x18))());
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x18))());
                    
                    
    uVar3 = (undefined4)((**(code **)*puVar2)());
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
  
  iVar1 = (int)((**(code **)(*param_1 + 0x14))());
  if (iVar1 != 0) {
    piVar2 = (int *)((int *)(**(code **)(*param_1 + 0x14))());
                    
                    
    uVar3 = (undefined4)((**(code **)(*piVar2 + 0xc))());
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
  
  iVar1 = (int)((**(code **)(*param_1 + 0x10))());
  if (iVar1 != 0) {
    piVar2 = (int *)((int *)(**(code **)(*param_1 + 0x10))());
                    
                    
    uVar3 = (undefined4)((**(code **)(*piVar2 + 8))());
    return (undefined4)(uVar3);
  }
  return (undefined4)(0);
}


// Reference entry 105a2bb0; body size 46 bytes.
#line 1 "ENTRY_105a2bb0"

uint __thiscall Recovered_Bulk::FUN_105a2bb0(int param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  piVar1 = (int *)(*(int **)(param_1 + 0xc));
  uVar3 = (uint)(0);
  uVar2 = (uint)(*(int *)(param_1 + 0x10) - (int)piVar1 >> 2);
  if (uVar2 != 0) {
    do {
      if (*piVar1 == param_2) {
        return (uint)(((uint)((int3)((uint)piVar1 >> 8)) << 8 | (uint)(1)));
      }
      uVar3 = (uint)(uVar3 + 1);
      piVar1 = (int *)(piVar1 + 1);
    } while (uVar3 < uVar2);
  }
  return (uint)((uint)piVar1 & 0xffffff00);
}


// Reference entry 105a2bf0; body size 45 bytes.
#line 1 "ENTRY_105a2bf0"

uint __thiscall Recovered_Bulk::FUN_105a2bf0(int param_2)
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
      if (*piVar1 == param_2) {
        return (uint)(((uint)((int3)((uint)piVar1 >> 8)) << 8 | (uint)(1)));
      }
      uVar3 = (uint)(uVar3 + 1);
      piVar1 = (int *)(piVar1 + 1);
    } while (uVar3 < uVar2);
  }
  return (uint)((uint)piVar1 & 0xffffff00);
}


// Reference entry 105a2c70; body size 31 bytes.
#line 1 "ENTRY_105a2c70"

void __fastcall FUN_105a2c70(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (int)((**(code **)(*param_1 + 0x14))());
  if (iVar1 != 0) {
    piVar2 = (int *)((int *)(**(code **)(*param_1 + 0x14))());
                    
                    
    (**(code **)(*piVar2 + 0x20))();
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
  
  iVar1 = (int)((**(code **)(*param_1 + 0x14))());
  if (iVar1 != 0) {
    piVar2 = (int *)((int *)(**(code **)(*param_1 + 0x14))());
                    
                    
    (**(code **)(*piVar2 + 0x24))();
    return;
  }
  return;
}


// Reference entry 105a3210; body size 24 bytes.
#line 1 "ENTRY_105a3210"

undefined4 FUN_105a3210(void)

{
  SCLibrary *pSVar1;
  
  pSVar1 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  if (((SCLibrary *)(pSVar1) != (SCLibrary *)0x0) && (pSVar1[0x18c] != 0x0)) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


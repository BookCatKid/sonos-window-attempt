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
typedef int BOOL;
typedef void *HANDLE;
typedef void *LPVOID;
typedef unsigned int UINT;
typedef long LONG;
typedef long HRESULT;
typedef wchar_t WCHAR;
typedef int int3;
typedef unsigned int uint3;
typedef struct { char _p[3]; } undefined3;
typedef struct { char _p[5]; } undefined5;
typedef struct { char _p[6]; } undefined6;
typedef struct { char _p[7]; } undefined7;
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
extern int FUN_1003d5d7(...);
extern int FUN_10065348(...);
extern int FUN_1006aac8(...);
extern int FUN_10222570(...);
extern int FUN_102440a0(...);
extern int FUN_1118c830(...);
extern int FUN_1118c950(...);
extern int FUN_112c4de0(...);
extern int FUN_11323860(...);
extern int FUN_113fef30(...);
extern __declspec(dllimport) int _CxxThrowException(...);
extern __declspec(dllimport) int _errno(...);
extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern int beginPostSetupUpdate(...);
extern __declspec(dllimport) int ceil(...);
extern int createPropertyBag(...);
extern int createSCActionFilterer(...);
extern int d(...);
extern int getSingleton(...);
extern int int_allocRep(...);
extern int int_release(...);
extern __declspec(dllimport) int isxdigit(...);
extern __declspec(dllimport) int memchr(...);
extern __declspec(dllimport) int memmove(...);
extern int op_eq(...);
extern int operator_new(...);
extern int rampToVolume(...);
extern int setFromUTF16(...);
extern __declspec(dllimport) int strchr(...);
extern __declspec(dllimport) int strncmp(...);
extern __declspec(dllimport) int strpbrk(...);
extern __declspec(dllimport) int strtoul(...);
extern int thunk_FUN_10118fc0(...);
extern int thunk_FUN_1011f530(...);
extern int thunk_FUN_1011f5e0(...);
extern int thunk_FUN_1012a2a0(...);
extern int thunk_FUN_1012d690(...);
extern int thunk_FUN_101374c0(...);
extern int thunk_FUN_10137570(...);
extern int thunk_FUN_10139480(...);
extern int thunk_FUN_10139b50(...);
extern int thunk_FUN_1013cfb0(...);
extern int thunk_FUN_101464f0(...);
extern int thunk_FUN_101a9bf0(...);
extern int thunk_FUN_101aed30(...);
extern int thunk_FUN_101b5de0(...);
extern int thunk_FUN_101b5fb0(...);
extern int thunk_FUN_101b65e0(...);
extern int thunk_FUN_101b6650(...);
extern int thunk_FUN_101b9a40(...);
extern int thunk_FUN_101b9ff0(...);
extern int thunk_FUN_101ba0d0(...);
extern int thunk_FUN_101ba300(...);
extern int thunk_FUN_101badc0(...);
extern int thunk_FUN_101bda70(...);
extern int thunk_FUN_101bf1c0(...);
extern int thunk_FUN_101c39c0(...);
extern int thunk_FUN_101c6790(...);
extern int thunk_FUN_101da390(...);
extern int thunk_FUN_101db840(...);
extern int thunk_FUN_101dbeb0(...);
extern int thunk_FUN_101dd0a0(...);
extern int thunk_FUN_101dd0e0(...);
extern int thunk_FUN_101df120(...);
extern int thunk_FUN_101dfd70(...);
extern int thunk_FUN_101eb2b0(...);
extern int thunk_FUN_101f08d0(...);
extern int thunk_FUN_101f44c0(...);
extern int thunk_FUN_101f53d0(...);
extern int thunk_FUN_101f6530(...);
extern int thunk_FUN_10202e00(...);
extern int thunk_FUN_102047c0(...);
extern int thunk_FUN_102054e8(...);
extern int thunk_FUN_10205c00(...);
extern int thunk_FUN_10207340(...);
extern int thunk_FUN_102082f0(...);
extern int thunk_FUN_10217af0(...);
extern int thunk_FUN_102207b0(...);
extern int thunk_FUN_10220920(...);
extern int thunk_FUN_10222570(...);
extern int thunk_FUN_102226d0(...);
extern int thunk_FUN_10237460(...);
extern int thunk_FUN_10238990(...);
extern int thunk_FUN_10238c60(...);
extern int thunk_FUN_10239260(...);
extern int thunk_FUN_10239600(...);
extern int thunk_FUN_102432c0(...);
extern int thunk_FUN_10243680(...);
extern int thunk_FUN_10246170(...);
extern int thunk_FUN_10247150(...);
extern int thunk_FUN_10251790(...);
extern int thunk_FUN_102517b0(...);
extern int thunk_FUN_102518f0(...);
extern int thunk_FUN_1025f580(...);
extern int thunk_FUN_102611c0(...);
extern int thunk_FUN_10263a50(...);
extern int thunk_FUN_10266ff0(...);
extern int thunk_FUN_102712f0(...);
extern int thunk_FUN_10272fd0(...);
extern int thunk_FUN_10275860(...);
extern int thunk_FUN_10279ce0(...);
extern int thunk_FUN_102930e0(...);
extern int thunk_FUN_10298a20(...);
extern int thunk_FUN_1029b370(...);
extern int thunk_FUN_1029b620(...);
extern int thunk_FUN_1029c880(...);
extern int thunk_FUN_1029c8a0(...);
extern int thunk_FUN_1029d110(...);
extern int thunk_FUN_102be150(...);
extern int thunk_FUN_102c0920(...);
extern int thunk_FUN_102c57f0(...);
extern int thunk_FUN_102c68f0(...);
extern int thunk_FUN_102c6920(...);
extern int thunk_FUN_102cf580(...);
extern int thunk_FUN_102d3c70(...);
extern int thunk_FUN_102d4620(...);
extern int thunk_FUN_102d4660(...);
extern int thunk_FUN_102d65b0(...);
extern int thunk_FUN_102dd2f0(...);
extern int thunk_FUN_102e88e0(...);
extern int thunk_FUN_103021f0(...);
extern int thunk_FUN_103027b0(...);
extern int thunk_FUN_10302970(...);
extern int thunk_FUN_103238a0(...);
extern int thunk_FUN_1032af20(...);
extern int thunk_FUN_1034cf80(...);
extern int thunk_FUN_1034d200(...);
extern int thunk_FUN_1035ccc0(...);
extern int thunk_FUN_10367bba(...);
extern int thunk_FUN_10367c1e(...);
extern int thunk_FUN_10368690(...);
extern int thunk_FUN_10368770(...);
extern int thunk_FUN_1037e850(...);
extern int thunk_FUN_1037ef80(...);
extern int thunk_FUN_1037f130(...);
extern int thunk_FUN_10381020(...);
extern int thunk_FUN_10384350(...);
extern int thunk_FUN_103869d0(...);
extern int thunk_FUN_10387aa0(...);
extern int thunk_FUN_1038d6e0(...);
extern int thunk_FUN_10390660(...);
extern int thunk_FUN_103a4150(...);
extern int thunk_FUN_103a93f7(...);
extern int thunk_FUN_103a9a30(...);
extern int thunk_FUN_103aa810(...);
extern int thunk_FUN_103aba20(...);
extern int thunk_FUN_103abbc0(...);
extern int thunk_FUN_103b7860(...);
extern int thunk_FUN_103b7930(...);
extern int thunk_FUN_103bd0b0(...);
extern int thunk_FUN_103be530(...);
extern int thunk_FUN_103be5e0(...);
extern int thunk_FUN_103be9e0(...);
extern int thunk_FUN_103beae0(...);
extern int thunk_FUN_103c1dd0(...);
extern int thunk_FUN_103c1f90(...);
extern int thunk_FUN_103c2be0(...);
extern int thunk_FUN_103c4080(...);
extern int thunk_FUN_103d61d0(...);
extern int thunk_FUN_103d6930(...);
extern int thunk_FUN_103df9a0(...);
extern int thunk_FUN_103e0810(...);
extern int thunk_FUN_103e3e40(...);
extern int thunk_FUN_103e4050(...);
extern int thunk_FUN_103e6620(...);
extern int thunk_FUN_103e6a80(...);
extern int thunk_FUN_103ea730(...);
extern int thunk_FUN_103eafc0(...);
extern int thunk_FUN_103eb170(...);
extern int thunk_FUN_103eb600(...);
extern int thunk_FUN_103efec0(...);
extern int thunk_FUN_103f1e40(...);
extern int thunk_FUN_103fee70(...);
extern int thunk_FUN_10400590(...);
extern int thunk_FUN_10413900(...);
extern int thunk_FUN_10424d10(...);
extern int thunk_FUN_10436ab0(...);
extern int thunk_FUN_10436cd0(...);
extern int thunk_FUN_1043c9a0(...);
extern int thunk_FUN_1043ca20(...);
extern int thunk_FUN_10440860(...);
extern int thunk_FUN_10443ff4(...);
extern int thunk_FUN_10444008(...);
extern int thunk_FUN_10444110(...);
extern int thunk_FUN_1046b5c0(...);
extern int thunk_FUN_1046ba90(...);
extern int thunk_FUN_1046c6db(...);
extern int thunk_FUN_1046c6f0(...);
extern int thunk_FUN_10485ea2(...);
extern int thunk_FUN_104864a0(...);
extern int thunk_FUN_1049ceb0(...);
extern int thunk_FUN_1049cf49(...);
extern int thunk_FUN_104a0b70(...);
extern int thunk_FUN_104a1af0(...);
extern int thunk_FUN_104a1af3(...);
extern int thunk_FUN_104a2140(...);
extern int thunk_FUN_104adf40(...);
extern int thunk_FUN_104b0b50(...);
extern int thunk_FUN_104bc86f(...);
extern int thunk_FUN_104bc8a0(...);
extern int thunk_FUN_104bce60(...);
extern int thunk_FUN_104bcee0(...);
extern int thunk_FUN_104d98f0(...);
extern int thunk_FUN_104da1b0(...);
extern int thunk_FUN_104ddfd0(...);
extern int thunk_FUN_104deb40(...);
extern int thunk_FUN_104dec20(...);
extern int thunk_FUN_104ed740(...);
extern int thunk_FUN_104f8cb0(...);
extern int thunk_FUN_104f9920(...);
extern int thunk_FUN_104fb4f0(...);
extern int thunk_FUN_104fee50(...);
extern int thunk_FUN_10507cf0(...);
extern int thunk_FUN_10510c40(...);
extern int thunk_FUN_1051d575(...);
extern int thunk_FUN_1051d6a0(...);
extern int thunk_FUN_1051d7c0(...);
extern int thunk_FUN_1052dd30(...);
extern int thunk_FUN_1052e590(...);
extern int thunk_FUN_1052fd10(...);
extern int thunk_FUN_10535a50(...);
extern int thunk_FUN_10542930(...);
extern int thunk_FUN_1054b4e0(...);
extern int thunk_FUN_10566e82(...);
extern int thunk_FUN_10568060(...);
extern int thunk_FUN_105760c0(...);
extern int thunk_FUN_1057c136(...);
extern int thunk_FUN_1057c1ea(...);
extern int thunk_FUN_1057caa0(...);
extern int thunk_FUN_1057cc60(...);
extern int thunk_FUN_1057d590(...);
extern int thunk_FUN_105a1c80(...);
extern int thunk_FUN_105a1d20(...);
extern int thunk_FUN_105ad8f0(...);
extern int thunk_FUN_105b3690(...);
extern int thunk_FUN_105ba0d0(...);
extern int thunk_FUN_105ba3e0(...);
extern int thunk_FUN_105bac30(...);
extern int thunk_FUN_105bebd0(...);
extern int thunk_FUN_105bfd60(...);
extern int thunk_FUN_105de0c0(...);
extern int thunk_FUN_105e71e0(...);
extern int thunk_FUN_105e7960(...);
extern int thunk_FUN_105edff0(...);
extern int thunk_FUN_105f5920(...);
extern int thunk_FUN_105f5a00(...);
extern int thunk_FUN_105f5d20(...);
extern int thunk_FUN_105f5df0(...);
extern int thunk_FUN_105f60e0(...);
extern int thunk_FUN_105f6290(...);
extern int thunk_FUN_105feb30(...);
extern int thunk_FUN_105ff930(...);
extern int thunk_FUN_106015a6(...);
extern int thunk_FUN_1060191d(...);
extern int thunk_FUN_106022d0(...);
extern int thunk_FUN_10602d20(...);
extern int thunk_FUN_10603120(...);
extern int thunk_FUN_106045d0(...);
extern int thunk_FUN_10604700(...);
extern int thunk_FUN_10604790(...);
extern int thunk_FUN_10604820(...);
extern int thunk_FUN_10605060(...);
extern int thunk_FUN_106050a0(...);
extern int thunk_FUN_106190a0(...);
extern int thunk_FUN_106198d0(...);
extern int thunk_FUN_1061a4d0(...);
extern int thunk_FUN_1061c630(...);
extern int thunk_FUN_1061fdc0(...);
extern int thunk_FUN_1062e17e(...);
extern int thunk_FUN_1062e1ea(...);
extern int thunk_FUN_1062f3b0(...);
extern int thunk_FUN_1062f600(...);
extern int thunk_FUN_1063c200(...);
extern int thunk_FUN_10643880(...);
extern int thunk_FUN_10656c96(...);
extern int thunk_FUN_10656dd0(...);
extern int thunk_FUN_106571a6(...);
extern int thunk_FUN_10657a50(...);
extern int thunk_FUN_10657ea0(...);
extern int thunk_FUN_10658200(...);
extern int thunk_FUN_106588c0(...);
extern int thunk_FUN_10658aa0(...);
extern int thunk_FUN_10659230(...);
extern int thunk_FUN_10659b90(...);
extern int thunk_FUN_1065c9a0(...);
extern int thunk_FUN_1066d5a0(...);
extern int thunk_FUN_10678a80(...);
extern int thunk_FUN_10687270(...);
extern int thunk_FUN_10687b10(...);
extern int thunk_FUN_10697db0(...);
extern int thunk_FUN_10699790(...);
extern int thunk_FUN_1069e3f0(...);
extern int thunk_FUN_106a03d0(...);
extern int thunk_FUN_106a2be0(...);
extern int thunk_FUN_106da030(...);
extern int thunk_FUN_106da680(...);
extern int thunk_FUN_106de7d0(...);
extern int thunk_FUN_106e5da0(...);
extern int thunk_FUN_106e60e0(...);
extern int thunk_FUN_106e6870(...);
extern int thunk_FUN_106f8e40(...);
extern int thunk_FUN_106f8ee0(...);
extern int thunk_FUN_106fcf70(...);
extern int thunk_FUN_10703370(...);
extern int thunk_FUN_107104d0(...);
extern int thunk_FUN_10719dd0(...);
extern int thunk_FUN_10721ff0(...);
extern int thunk_FUN_1072c058(...);
extern int thunk_FUN_1072c5b0(...);
extern int thunk_FUN_1072c940(...);
extern int thunk_FUN_1072cfd0(...);
extern int thunk_FUN_1072d5d0(...);
extern int thunk_FUN_1072d6b0(...);
extern int thunk_FUN_1074d0e4(...);
extern int thunk_FUN_1074d1b0(...);
extern int thunk_FUN_10750d4d(...);
extern int thunk_FUN_107510e0(...);
extern int thunk_FUN_10751180(...);
extern int thunk_FUN_107577f0(...);
extern int thunk_FUN_10758340(...);
extern int thunk_FUN_107593f0(...);
extern int thunk_FUN_10767080(...);
extern int thunk_FUN_1076d930(...);
extern int thunk_FUN_1076da80(...);
extern int thunk_FUN_1077c3a9(...);
extern int thunk_FUN_1077c420(...);
extern int thunk_FUN_1077e3d0(...);
extern int thunk_FUN_10783270(...);
extern int thunk_FUN_10783963(...);
extern int thunk_FUN_107839d0(...);
extern int thunk_FUN_10785880(...);
extern int thunk_FUN_10790343(...);
extern int thunk_FUN_10790583(...);
extern int thunk_FUN_10790839(...);
extern int thunk_FUN_10790880(...);
extern int thunk_FUN_10791cf0(...);
extern int thunk_FUN_10791f30(...);
extern int thunk_FUN_10792d60(...);
extern int thunk_FUN_107d0470(...);
extern int thunk_FUN_107e6d15(...);
extern int thunk_FUN_107e6dd0(...);
extern int thunk_FUN_107ec337(...);
extern int thunk_FUN_107eca70(...);
extern int thunk_FUN_10803243(...);
extern int thunk_FUN_10803750(...);
extern int thunk_FUN_1081adfb(...);
extern int thunk_FUN_1081ae98(...);
extern int thunk_FUN_1081af40(...);
extern int thunk_FUN_1081b390(...);
extern int thunk_FUN_1081b610(...);
extern int thunk_FUN_1082fb70(...);
extern int thunk_FUN_10838995(...);
extern int thunk_FUN_10838d30(...);
extern int thunk_FUN_10838d70(...);
extern int thunk_FUN_108493b0(...);
extern int thunk_FUN_10859f20(...);
extern int thunk_FUN_10862e70(...);
extern int thunk_FUN_10873290(...);
extern int thunk_FUN_1087e430(...);
extern int thunk_FUN_1087e440(...);
extern int thunk_FUN_10884560(...);
extern int thunk_FUN_10893a68(...);
extern int thunk_FUN_10894010(...);
extern int thunk_FUN_108a25b6(...);
extern int thunk_FUN_108a2760(...);
extern int thunk_FUN_108a2b30(...);
extern int thunk_FUN_108a3300(...);
extern int thunk_FUN_108b17b0(...);
extern int thunk_FUN_108b17c0(...);
extern int thunk_FUN_108dda50(...);
extern int thunk_FUN_108e3f3d(...);
extern int thunk_FUN_108e4080(...);
extern int thunk_FUN_108e4870(...);
extern int thunk_FUN_108e4a30(...);
extern int thunk_FUN_108ee7b0(...);
extern int thunk_FUN_109040a0(...);
extern int thunk_FUN_109086e5(...);
extern int thunk_FUN_10908737(...);
extern int thunk_FUN_10909090(...);
extern int thunk_FUN_109091d0(...);
extern int thunk_FUN_1091b82f(...);
extern int thunk_FUN_1091c4a0(...);
extern int thunk_FUN_1091c890(...);
extern int thunk_FUN_1091d010(...);
extern int thunk_FUN_1092f5d4(...);
extern int thunk_FUN_1092fdf0(...);
extern int thunk_FUN_109329d0(...);
extern int thunk_FUN_10945c50(...);
extern int thunk_FUN_10958bd0(...);
extern int thunk_FUN_109629e7(...);
extern int thunk_FUN_10962b70(...);
extern int thunk_FUN_10973080(...);
extern int thunk_FUN_10974e10(...);
extern int thunk_FUN_10975f71(...);
extern int thunk_FUN_109761b0(...);
extern int thunk_FUN_109764e0(...);
extern int thunk_FUN_1097f9d0(...);
extern int thunk_FUN_10982d7b(...);
extern int thunk_FUN_10982f30(...);
extern int thunk_FUN_109c09e0(...);
extern int thunk_FUN_109da27b(...);
extern int thunk_FUN_109da510(...);
extern int thunk_FUN_109e3daf(...);
extern int thunk_FUN_109e41f0(...);
extern int thunk_FUN_109ef5d0(...);
extern int thunk_FUN_109ef900(...);
extern int thunk_FUN_109efc90(...);
extern int thunk_FUN_109f3bb0(...);
extern int thunk_FUN_109f8eb2(...);
extern int thunk_FUN_109f9f60(...);
extern int thunk_FUN_109fb450(...);
extern int thunk_FUN_10a00920(...);
extern int thunk_FUN_10a05cf0(...);
extern int thunk_FUN_10a09f31(...);
extern int thunk_FUN_10a0a1f0(...);
extern int thunk_FUN_10a0dd1d(...);
extern int thunk_FUN_10a0e080(...);
extern int thunk_FUN_10a1bf70(...);
extern int thunk_FUN_10a3d740(...);
extern int thunk_FUN_10a41ec0(...);
extern int thunk_FUN_10a43ef0(...);
extern int thunk_FUN_10a45320(...);
extern int thunk_FUN_10a49990(...);
extern int thunk_FUN_10a618b0(...);
extern int thunk_FUN_10a67681(...);
extern int thunk_FUN_10a67bf0(...);
extern int thunk_FUN_10a687f0(...);
extern int thunk_FUN_10a80e5d(...);
extern int thunk_FUN_10a80ef0(...);
extern int thunk_FUN_10a84a10(...);
extern int thunk_FUN_10a880a0(...);
extern int thunk_FUN_10a99a20(...);
extern int thunk_FUN_10a9ca80(...);
extern int thunk_FUN_10aa7550(...);
extern int thunk_FUN_10ab61a7(...);
extern int thunk_FUN_10ab61d0(...);
extern int thunk_FUN_10abee7d(...);
extern int thunk_FUN_10abf7a0(...);
extern int thunk_FUN_10ac02f0(...);
extern int thunk_FUN_10ae58d0(...);
extern int thunk_FUN_10ae6e20(...);
extern int thunk_FUN_10af42f0(...);
extern int thunk_FUN_10af6950(...);
extern int thunk_FUN_10b001e0(...);
extern int thunk_FUN_10b013b0(...);
extern int thunk_FUN_10b0e890(...);
extern int thunk_FUN_10b0e9d0(...);
extern int thunk_FUN_10b1a350(...);
extern int thunk_FUN_10b1c340(...);
extern int thunk_FUN_10b2dda0(...);
extern int thunk_FUN_10b2f4a0(...);
extern int thunk_FUN_10b35533(...);
extern int thunk_FUN_10b35625(...);
extern int thunk_FUN_10b35ad0(...);
extern int thunk_FUN_10b36140(...);
extern int thunk_FUN_10b370c0(...);
extern int thunk_FUN_10b37990(...);
extern int thunk_FUN_10b559e8(...);
extern int thunk_FUN_10b55cd0(...);
extern int thunk_FUN_10b5e5b8(...);
extern int thunk_FUN_10b5ef00(...);
extern int thunk_FUN_10b6dd80(...);
extern int thunk_FUN_10b6ded0(...);
extern int thunk_FUN_10b899a0(...);
extern int thunk_FUN_10b98a00(...);
extern int thunk_FUN_10b9a030(...);
extern int thunk_FUN_10ba9fa0(...);
extern int thunk_FUN_10bc4a60(...);
extern int thunk_FUN_10bcad90(...);
extern int thunk_FUN_10bcb570(...);
extern int thunk_FUN_10bf11f0(...);
extern int thunk_FUN_10bf1b90(...);
extern int thunk_FUN_10bf75f0(...);
extern int thunk_FUN_10bfb4b0(...);
extern int thunk_FUN_10bfb550(...);
extern int thunk_FUN_10bfbbd3(...);
extern int thunk_FUN_10bfbc80(...);
extern int thunk_FUN_10c1eda0(...);
extern int thunk_FUN_10c20d40(...);
extern int thunk_FUN_10c20dd9(...);
extern int thunk_FUN_10c2c12c(...);
extern int thunk_FUN_10c2c140(...);
extern int thunk_FUN_10c36180(...);
extern int thunk_FUN_10c36930(...);
extern int thunk_FUN_10c412b0(...);
extern int thunk_FUN_10c414e0(...);
extern int thunk_FUN_10c416b0(...);
extern int thunk_FUN_10c47110(...);
extern int thunk_FUN_10c500a0(...);
extern int thunk_FUN_10c50220(...);
extern int thunk_FUN_10c505e0(...);
extern int thunk_FUN_10c524e0(...);
extern int thunk_FUN_10c55f20(...);
extern int thunk_FUN_10c56240(...);
extern int thunk_FUN_10c5c8b0(...);
extern int thunk_FUN_10c5f1d0(...);
extern int thunk_FUN_10c5f430(...);
extern int thunk_FUN_10c5f450(...);
extern int thunk_FUN_10c5f8a0(...);
extern int thunk_FUN_10c5fc80(...);
extern int thunk_FUN_10c61010(...);
extern int thunk_FUN_10c62d50(...);
extern int thunk_FUN_10c68f83(...);
extern int thunk_FUN_10c68fae(...);
extern int thunk_FUN_10c69080(...);
extern int thunk_FUN_10c6eb07(...);
extern int thunk_FUN_10c6eb50(...);
extern int thunk_FUN_10c745a0(...);
extern int thunk_FUN_10c74d30(...);
extern int thunk_FUN_10c75d80(...);
extern int thunk_FUN_10c7dc90(...);
extern int thunk_FUN_10c95180(...);
extern int thunk_FUN_10c97560(...);
extern int thunk_FUN_10c98460(...);
extern int thunk_FUN_10ca3f40(...);
extern int thunk_FUN_10ca3f90(...);
extern int thunk_FUN_10cb1ab0(...);
extern int thunk_FUN_10cb1b60(...);
extern int thunk_FUN_10cb76b0(...);
extern int thunk_FUN_10cbcd70(...);
extern int thunk_FUN_10cbd303(...);
extern int thunk_FUN_10cbd320(...);
extern int thunk_FUN_10cc2800(...);
extern int thunk_FUN_10ccc9ad(...);
extern int thunk_FUN_10ccd770(...);
extern int thunk_FUN_10cd3b10(...);
extern int thunk_FUN_10cd3b40(...);
extern int thunk_FUN_10cd72a0(...);
extern int thunk_FUN_10cdf110(...);
extern int thunk_FUN_10cdf570(...);
extern int thunk_FUN_10cdffe0(...);
extern int thunk_FUN_10ce04e0(...);
extern int thunk_FUN_10ce16f0(...);
extern int thunk_FUN_10cf0be0(...);
extern int thunk_FUN_10cf0e90(...);
extern int thunk_FUN_10cf2f30(...);
extern int thunk_FUN_10cf34e0(...);
extern int thunk_FUN_10cf3630(...);
extern int thunk_FUN_10cf5250(...);
extern int thunk_FUN_10cf5c33(...);
extern int thunk_FUN_10cf5cc0(...);
extern int thunk_FUN_10cf5f30(...);
extern int thunk_FUN_10d024d9(...);
extern int thunk_FUN_10d02790(...);
extern int thunk_FUN_10d02ae0(...);
extern int thunk_FUN_10d137e0(...);
extern int thunk_FUN_10d140b0(...);
extern int thunk_FUN_10d1614c(...);
extern int thunk_FUN_10d161f0(...);
extern int thunk_FUN_10d19400(...);
extern int thunk_FUN_10d19550(...);
extern int thunk_FUN_10d19610(...);
extern int thunk_FUN_10d23390(...);
extern int thunk_FUN_10d23870(...);
extern int thunk_FUN_10d27ffa(...);
extern int thunk_FUN_10d28120(...);
extern int thunk_FUN_10d37900(...);
extern int thunk_FUN_10d45d50(...);
extern int thunk_FUN_10d46820(...);
extern int thunk_FUN_10d496f0(...);
extern int thunk_FUN_10d497b4(...);
extern int thunk_FUN_10d58c00(...);
extern int thunk_FUN_10d5a390(...);
extern int thunk_FUN_10d5a3a0(...);
extern int thunk_FUN_10d5a800(...);
extern int thunk_FUN_10d5b140(...);
extern int thunk_FUN_10d5e270(...);
extern int thunk_FUN_10d5e990(...);
extern int thunk_FUN_10d5fc00(...);
extern int thunk_FUN_10d61239(...);
extern int thunk_FUN_10d61460(...);
extern int thunk_FUN_10d67ed0(...);
extern int thunk_FUN_10d6a130(...);
extern int thunk_FUN_10d6bf60(...);
extern int thunk_FUN_10d82350(...);
extern int thunk_FUN_10d93450(...);
extern int thunk_FUN_10da1370(...);
extern int thunk_FUN_10da15c0(...);
extern int thunk_FUN_10da1740(...);
extern int thunk_FUN_10da1830(...);
extern int thunk_FUN_10da1e80(...);
extern int thunk_FUN_10da6830(...);
extern int thunk_FUN_10da79f0(...);
extern int thunk_FUN_10dcaaad(...);
extern int thunk_FUN_10dcae90(...);
extern int thunk_FUN_10dcdec0(...);
extern int thunk_FUN_10dd1440(...);
extern int thunk_FUN_10dd9a60(...);
extern int thunk_FUN_10def0d0(...);
extern int thunk_FUN_10def290(...);
extern int thunk_FUN_10def450(...);
extern int thunk_FUN_10def490(...);
extern int thunk_FUN_10df6f00(...);
extern int thunk_FUN_10dfbb10(...);
extern int thunk_FUN_10dfcab0(...);
extern int thunk_FUN_10e0b4d0(...);
extern int thunk_FUN_10e0c630(...);
extern int thunk_FUN_10e0f250(...);
extern int thunk_FUN_10e10270(...);
extern int thunk_FUN_10e137a0(...);
extern int thunk_FUN_10e13a00(...);
extern int thunk_FUN_10e19c60(...);
extern int thunk_FUN_10e1ef90(...);
extern int thunk_FUN_10e23520(...);
extern int thunk_FUN_10e24e00(...);
extern int thunk_FUN_10e27070(...);
extern int thunk_FUN_10e29210(...);
extern int thunk_FUN_10e2c4f0(...);
extern int thunk_FUN_10e2cfd0(...);
extern int thunk_FUN_10e3c400(...);
extern int thunk_FUN_10e3e600(...);
extern int thunk_FUN_10e3e860(...);
extern int thunk_FUN_10e50d20(...);
extern int thunk_FUN_10e538a0(...);
extern int thunk_FUN_10e54930(...);
extern int thunk_FUN_10e5a5e0(...);
extern int thunk_FUN_10e5e6b0(...);
extern int thunk_FUN_10e60050(...);
extern int thunk_FUN_10e65f20(...);
extern int thunk_FUN_10e69da0(...);
extern int thunk_FUN_10e7b5d0(...);
extern int thunk_FUN_10e87780(...);
extern int thunk_FUN_10e9cb90(...);
extern int thunk_FUN_10e9cba0(...);
extern int thunk_FUN_10e9d030(...);
extern int thunk_FUN_10e9e150(...);
extern int thunk_FUN_10e9e153(...);
extern int thunk_FUN_10ea1ad0(...);
extern int thunk_FUN_10ea2980(...);
extern int thunk_FUN_10eac8c0(...);
extern int thunk_FUN_10eacce0(...);
extern int thunk_FUN_10eacd60(...);
extern int thunk_FUN_10ead100(...);
extern int thunk_FUN_10ead150(...);
extern int thunk_FUN_10eae0a0(...);
extern int thunk_FUN_10eae0f0(...);
extern int thunk_FUN_10eae120(...);
extern int thunk_FUN_10eae150(...);
extern int thunk_FUN_10eb1b50(...);
extern int thunk_FUN_10eb1dc0(...);
extern int thunk_FUN_10eb41b0(...);
extern int thunk_FUN_10eb41c0(...);
extern int thunk_FUN_10eb41e0(...);
extern int thunk_FUN_10eb64f0(...);
extern int thunk_FUN_10eb6cc0(...);
extern int thunk_FUN_10ebb8e0(...);
extern int thunk_FUN_10ebbab0(...);
extern int thunk_FUN_10ebc060(...);
extern int thunk_FUN_10ebc110(...);
extern int thunk_FUN_10ebc1d0(...);
extern int thunk_FUN_10ebc1e0(...);
extern int thunk_FUN_10ec0a20(...);
extern int thunk_FUN_10ec1250(...);
extern int thunk_FUN_10ec1a10(...);
extern int thunk_FUN_10ec1b40(...);
extern int thunk_FUN_10ec1d40(...);
extern int thunk_FUN_10ec2270(...);
extern int thunk_FUN_10ec2970(...);
extern int thunk_FUN_10ec3610(...);
extern int thunk_FUN_10ec6870(...);
extern int thunk_FUN_10ec9ce0(...);
extern int thunk_FUN_10eca030(...);
extern int thunk_FUN_10eca170(...);
extern int thunk_FUN_10eca460(...);
extern int thunk_FUN_10ecb760(...);
extern int thunk_FUN_10ecbaa0(...);
extern int thunk_FUN_10ecbc60(...);
extern int thunk_FUN_10ecd540(...);
extern int thunk_FUN_10ece3b0(...);
extern int thunk_FUN_10ecea60(...);
extern int thunk_FUN_10eced20(...);
extern int thunk_FUN_10eceeb0(...);
extern int thunk_FUN_10ecef50(...);
extern int thunk_FUN_10ee87e0(...);
extern int thunk_FUN_10eefb90(...);
extern int thunk_FUN_10ef0ba0(...);
extern int thunk_FUN_10f05890(...);
extern int thunk_FUN_10f0b5e0(...);
extern int thunk_FUN_10f0b8c0(...);
extern int thunk_FUN_10f108f0(...);
extern int thunk_FUN_10f332e0(...);
extern int thunk_FUN_10f33e70(...);
extern int thunk_FUN_10f44ec1(...);
extern int thunk_FUN_10f450b0(...);
extern int thunk_FUN_10f4c160(...);
extern int thunk_FUN_10f4cd10(...);
extern int thunk_FUN_10f58400(...);
extern int thunk_FUN_10f59280(...);
extern int thunk_FUN_10f59740(...);
extern int thunk_FUN_10f59800(...);
extern int thunk_FUN_10f73870(...);
extern int thunk_FUN_10f74150(...);
extern int thunk_FUN_10f74bd0(...);
extern int thunk_FUN_10f77300(...);
extern int thunk_FUN_10f7b5a0(...);
extern int thunk_FUN_10f7fa10(...);
extern int thunk_FUN_10f87140(...);
extern int thunk_FUN_10f887f0(...);
extern int thunk_FUN_10f8bdc9(...);
extern int thunk_FUN_10f8be50(...);
extern int thunk_FUN_10f8c170(...);
extern int thunk_FUN_10f91d3e(...);
extern int thunk_FUN_10f92080(...);
extern int thunk_FUN_10f977a0(...);
extern int thunk_FUN_10f98f10(...);
extern int thunk_FUN_10f99a90(...);
extern int thunk_FUN_10f9bf90(...);
extern int thunk_FUN_10f9d5d0(...);
extern int thunk_FUN_10fa30b0(...);
extern int thunk_FUN_10fa3310(...);
extern int thunk_FUN_10fad520(...);
extern int thunk_FUN_10fb1530(...);
extern int thunk_FUN_10fb19e0(...);
extern int thunk_FUN_10fc5d20(...);
extern int thunk_FUN_10fc9170(...);
extern int thunk_FUN_10fcb990(...);
extern int thunk_FUN_10fcf3b0(...);
extern int thunk_FUN_10fcf610(...);
extern int thunk_FUN_10fd21e0(...);
extern int thunk_FUN_10fd96e7(...);
extern int thunk_FUN_10fd9863(...);
extern int thunk_FUN_10fd989e(...);
extern int thunk_FUN_10fd9a30(...);
extern int thunk_FUN_10fda4e0(...);
extern int thunk_FUN_10fda6c0(...);
extern int thunk_FUN_10fdae50(...);
extern int thunk_FUN_10fdae6a(...);
extern int thunk_FUN_10fdbcd0(...);
extern int thunk_FUN_10fde3b0(...);
extern int thunk_FUN_10fde45d(...);
extern int thunk_FUN_10fe34f0(...);
extern int thunk_FUN_10ff1960(...);
extern int thunk_FUN_10ff2d30(...);
extern int thunk_FUN_10ff84d0(...);
extern int thunk_FUN_110182c0(...);
extern int thunk_FUN_1101d6a0(...);
extern int thunk_FUN_1101dcf0(...);
extern int thunk_FUN_110203c0(...);
extern int thunk_FUN_11028b40(...);
extern int thunk_FUN_110292a0(...);
extern int thunk_FUN_11030200(...);
extern int thunk_FUN_11032360(...);
extern int thunk_FUN_11039290(...);
extern int thunk_FUN_11039f60(...);
extern int thunk_FUN_1103b480(...);
extern int thunk_FUN_11056710(...);
extern int thunk_FUN_11056ec0(...);
extern int thunk_FUN_1105ea10(...);
extern int thunk_FUN_110602b0(...);
extern int thunk_FUN_11061d40(...);
extern int thunk_FUN_11063760(...);
extern int thunk_FUN_11067870(...);
extern int thunk_FUN_11067b50(...);
extern int thunk_FUN_1106a8d0(...);
extern int thunk_FUN_1106b190(...);
extern int thunk_FUN_1106b1c0(...);
extern int thunk_FUN_1106e690(...);
extern int thunk_FUN_1106f470(...);
extern int thunk_FUN_11079440(...);
extern int thunk_FUN_110828b0(...);
extern int thunk_FUN_11093530(...);
extern int thunk_FUN_110935f0(...);
extern int thunk_FUN_110944c0(...);
extern int thunk_FUN_11095e10(...);
extern int thunk_FUN_11096670(...);
extern int thunk_FUN_110988b0(...);
extern int thunk_FUN_1109aba0(...);
extern int thunk_FUN_1109f140(...);
extern int thunk_FUN_110b5890(...);
extern int thunk_FUN_110b6d60(...);
extern int thunk_FUN_110b9fc0(...);
extern int thunk_FUN_110ba6a0(...);
extern int thunk_FUN_110c1a60(...);
extern int thunk_FUN_110c20d0(...);
extern int thunk_FUN_110c2130(...);
extern int thunk_FUN_110c2c60(...);
extern int thunk_FUN_110c4a10(...);
extern int thunk_FUN_110c67f0(...);
extern int thunk_FUN_110ca7d0(...);
extern int thunk_FUN_110cb6d0(...);
extern int thunk_FUN_110d2700(...);
extern int thunk_FUN_110dbdf0(...);
extern int thunk_FUN_110dcaf9(...);
extern int thunk_FUN_110dcca0(...);
extern int thunk_FUN_110dce20(...);
extern int thunk_FUN_110de420(...);
extern int thunk_FUN_110e2c60(...);
extern int thunk_FUN_110ea940(...);
extern int thunk_FUN_110ecfe0(...);
extern int thunk_FUN_110ed5d0(...);
extern int thunk_FUN_110f68d0(...);
extern int thunk_FUN_110f9a2e(...);
extern int thunk_FUN_110f9de0(...);
extern int thunk_FUN_110fa2c0(...);
extern int thunk_FUN_110fdde0(...);
extern int thunk_FUN_11112300(...);
extern int thunk_FUN_11127900(...);
extern int thunk_FUN_11127d60(...);
extern int thunk_FUN_111280b0(...);
extern int thunk_FUN_11128910(...);
extern int thunk_FUN_1112a590(...);
extern int thunk_FUN_1112b9e0(...);
extern int thunk_FUN_1112be50(...);
extern int thunk_FUN_111320a0(...);
extern int thunk_FUN_11132550(...);
extern int thunk_FUN_11138e70(...);
extern int thunk_FUN_1113c2f0(...);
extern int thunk_FUN_1113dfa0(...);
extern int thunk_FUN_1113eb00(...);
extern int thunk_FUN_1113fb00(...);
extern int thunk_FUN_11142240(...);
extern int thunk_FUN_1114baf0(...);
extern int thunk_FUN_1114c360(...);
extern int thunk_FUN_11152e50(...);
extern int thunk_FUN_1115e3ee(...);
extern int thunk_FUN_1115e4d0(...);
extern int thunk_FUN_11160810(...);
extern int thunk_FUN_11161ed0(...);
extern int thunk_FUN_11165d50(...);
extern int thunk_FUN_11167430(...);
extern int thunk_FUN_111733d0(...);
extern int thunk_FUN_11173870(...);
extern int thunk_FUN_111822e0(...);
extern int thunk_FUN_111865f0(...);
extern int thunk_FUN_1118c830(...);
extern int thunk_FUN_1118c950(...);
extern int thunk_FUN_11195fd0(...);
extern int thunk_FUN_1119d310(...);
extern int thunk_FUN_111a0720(...);
extern int thunk_FUN_111a0940(...);
extern int thunk_FUN_111a0cc0(...);
extern int thunk_FUN_111a32a0(...);
extern int thunk_FUN_111a36f0(...);
extern int thunk_FUN_111a44c0(...);
extern int thunk_FUN_111a4540(...);
extern int thunk_FUN_111a5a30(...);
extern int thunk_FUN_111a7300(...);
extern int thunk_FUN_111a7500(...);
extern int thunk_FUN_111aaf90(...);
extern int thunk_FUN_111af700(...);
extern int thunk_FUN_111bce60(...);
extern int thunk_FUN_111bf5b0(...);
extern int thunk_FUN_111c05a0(...);
extern int thunk_FUN_111c0760(...);
extern int thunk_FUN_111c0a50(...);
extern int thunk_FUN_111c0a80(...);
extern int thunk_FUN_111c0af0(...);
extern int thunk_FUN_111c1e90(...);
extern int thunk_FUN_111c32e0(...);
extern int thunk_FUN_111c5dc0(...);
extern int thunk_FUN_111c5fc0(...);
extern int thunk_FUN_111c66d0(...);
extern int thunk_FUN_111ce5a0(...);
extern int thunk_FUN_111d0010(...);
extern int thunk_FUN_111d1d90(...);
extern int thunk_FUN_111d2980(...);
extern int thunk_FUN_111e05f0(...);
extern int thunk_FUN_111e7a30(...);
extern int thunk_FUN_111f1790(...);
extern int thunk_FUN_111f3240(...);
extern int thunk_FUN_111f3f50(...);
extern int thunk_FUN_111fe350(...);
extern int thunk_FUN_111feb50(...);
extern int thunk_FUN_111fef80(...);
extern int thunk_FUN_11200910(...);
extern int thunk_FUN_11202570(...);
extern int thunk_FUN_11202580(...);
extern int thunk_FUN_11202590(...);
extern int thunk_FUN_11204080(...);
extern int thunk_FUN_11204570(...);
extern int thunk_FUN_112045a0(...);
extern int thunk_FUN_11204620(...);
extern int thunk_FUN_11204720(...);
extern int thunk_FUN_11206ef0(...);
extern int thunk_FUN_1120f9b0(...);
extern int thunk_FUN_11210040(...);
extern int thunk_FUN_11213400(...);
extern int thunk_FUN_112171c9(...);
extern int thunk_FUN_11221f00(...);
extern int thunk_FUN_1122a8ba(...);
extern int thunk_FUN_1122a8d0(...);
extern int thunk_FUN_11231700(...);
extern int thunk_FUN_11232ce0(...);
extern int thunk_FUN_11234140(...);
extern int thunk_FUN_11234190(...);
extern int thunk_FUN_11238730(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1123fce0(...);
extern int thunk_FUN_1123fe90(...);
extern int thunk_FUN_11240650(...);
extern int thunk_FUN_112407b0(...);
extern int thunk_FUN_11240850(...);
extern int thunk_FUN_11244ca0(...);
extern int thunk_FUN_11245810(...);
extern int thunk_FUN_11245a50(...);
extern int thunk_FUN_11245d70(...);
extern int thunk_FUN_112462e0(...);
extern int thunk_FUN_1124a3f0(...);
extern int thunk_FUN_1124d790(...);
extern int thunk_FUN_1124ef40(...);
extern int thunk_FUN_1124f0e0(...);
extern int thunk_FUN_1124f350(...);
extern int thunk_FUN_1124ff50(...);
extern int thunk_FUN_1124ffa0(...);
extern int thunk_FUN_11250000(...);
extern int thunk_FUN_112503c0(...);
extern int thunk_FUN_11250470(...);
extern int thunk_FUN_112504b0(...);
extern int thunk_FUN_112504f0(...);
extern int thunk_FUN_11254500(...);
extern int thunk_FUN_11255dc0(...);
extern int thunk_FUN_11258890(...);
extern int thunk_FUN_1125acd0(...);
extern int thunk_FUN_1125b810(...);
extern int thunk_FUN_11260a60(...);
extern int thunk_FUN_11261e50(...);
extern int thunk_FUN_112665b0(...);
extern int thunk_FUN_1126d6d0(...);
extern int thunk_FUN_11281950(...);
extern int thunk_FUN_11283190(...);
extern int thunk_FUN_11284360(...);
extern int thunk_FUN_112859a0(...);
extern int thunk_FUN_11286940(...);
extern int thunk_FUN_1128f470(...);
extern int thunk_FUN_1128f650(...);
extern int thunk_FUN_112a0b40(...);
extern int thunk_FUN_112a7f50(...);
extern int thunk_FUN_112a8010(...);
extern int thunk_FUN_112a84c0(...);
extern int thunk_FUN_112a8860(...);
extern int thunk_FUN_112a8d70(...);
extern int thunk_FUN_112a90b0(...);
extern int thunk_FUN_112a9cf0(...);
extern int thunk_FUN_112ab370(...);
extern int thunk_FUN_112af4e0(...);
extern int thunk_FUN_112b0270(...);
extern int thunk_FUN_112c7370(...);
extern int thunk_FUN_112c7e70(...);
extern int thunk_FUN_112c8a40(...);
extern int thunk_FUN_112f4790(...);
extern int thunk_FUN_112f4fa0(...);
extern int thunk_FUN_11395d50(...);
extern int thunk_FUN_113b9ec0(...);
extern int thunk_FUN_113cfb70(...);
extern int thunk_FUN_113d3590(...);
extern int thunk_FUN_113d35c0(...);
extern int thunk_FUN_113d91d0(...);
extern int thunk_FUN_113e50f0(...);
extern int thunk_FUN_113ffef0(...);
extern int thunk_FUN_11410310(...);
extern int thunk_FUN_11417c30(...);
extern int thunk_FUN_1142c850(...);
extern int thunk_FUN_114343d0(...);
extern int thunk_FUN_1143f120(...);
extern int thunk_FUN_1143fce0(...);
extern int thunk_FUN_11448780(...);
extern int thunk_FUN_1144dbb0(...);
extern int thunk_FUN_1144e3a0(...);
extern int thunk_FUN_11452100(...);
extern int thunk_FUN_114561e0(...);
extern int thunk_FUN_114568e0(...);
extern int thunk_FUN_11456d50(...);
extern int thunk_FUN_11456fc0(...);
extern int thunk_FUN_11458220(...);
extern int thunk_FUN_11458fa0(...);
extern int thunk_FUN_114595b0(...);
extern int thunk_FUN_1145ad70(...);
extern int thunk_FUN_1145ae30(...);
extern int thunk_FUN_1145c250(...);
extern int thunk_FUN_1145c720(...);
extern int thunk_FUN_1145c930(...);
extern int thunk_FUN_1145ddd0(...);
extern int thunk_FUN_1145de30(...);
extern int thunk_FUN_11462fa0(...);
extern int thunk_FUN_11463790(...);
extern int thunk_FUN_11465e10(...);
extern int thunk_FUN_1146c180(...);
extern int thunk_FUN_11480a00(...);
extern int thunk_FUN_11481470(...);
extern int thunk_FUN_11483cd0(...);
extern int thunk_FUN_11488d70(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148ac28(...);
extern int thunk_FUN_1148ac80(...);
extern int thunk_FUN_1148b586(...);
extern int DAT_00000004;
extern int DAT_00000007;
extern int DAT_1186d2ee;
extern int DAT_11878190;
extern int DAT_1187b440;
extern int DAT_1187b694;
extern int DAT_11880fb0;
extern int DAT_11882ff0;
extern int DAT_1188465c;
extern int DAT_118872c0;
extern int DAT_118c9974;
extern int DAT_119352e0;
extern int DAT_1195e878;
extern int DAT_119e0b2c;
extern int DAT_11c08350;
extern int DAT_11d33164;
extern int DAT_1211ed48;
extern int DAT_12126b84;
extern int DAT_121a218c;
extern int DAT_121a223c;
extern int DAT_121a22d8;
extern int DAT_121a22e8;
extern int DAT_121a2390;
extern int DAT_121a23b0;
extern int DAT_121a282c;
extern int DAT_121a2830;
extern int DAT_121a29f0;
extern int DAT_121a2c90;
extern int DAT_121a2da0;
extern int DAT_121a2e94;
extern int DAT_121a321c;
extern int DAT_121a3428;
extern int DAT_121a35e0;
extern int DAT_121a379c;
extern int DAT_121a37a0;
extern int DAT_121a37a4;
extern int DAT_121a37a8;
extern int DAT_121a37c4;
extern int DAT_121a3948;
extern int DAT_121a446c;
extern int DAT_121a483c;
extern int DAT_121a4af0;
extern int DAT_121a4b80;
extern int DAT_121a4b94;
extern int DAT_121a4c84;
extern int DAT_121a6c88;
extern int DAT_121a6c8c;
extern int DAT_121a6c9c;
extern int DAT_121a6ca4;
extern int DAT_121a6ca8;
extern int DAT_121a6cb4;
extern int DAT_121a6ce4;
extern int DAT_121a6ce8;
extern int DAT_121a6cf0;
extern int DAT_121a6cf4;
extern int DAT_121a6d00;
extern int DAT_121a6d18;
extern int DAT_121a6d1c;
extern int DAT_121a6d20;
extern int DAT_121a6d24;
extern int DAT_121a6d28;
extern int DAT_121a6d30;
extern int DAT_121a6d34;
extern int DAT_121a7704;
extern int DAT_121a7734;
extern int DAT_121a7754;
extern int DAT_121a77ec;
extern int DAT_121a7824;
extern int g_lSCObjCount;
extern int ghidra_vftable_RAsyncBrowseCacheCB;
extern int ghidra_vftable_RAsyncNullIOSession;
extern int ghidra_vftable_RBrowseContentProvider;
extern int ghidra_vftable_RCDBrowseProcessor;
extern int ghidra_vftable_RContentProvider;
extern int ghidra_vftable_RControlAIOOpCB;
extern int ghidra_vftable_RControlAIOOpImpl;
extern int ghidra_vftable_RControlAIOOpRef;
extern int ghidra_vftable_RControlAIOOpRefBase;
extern int ghidra_vftable_RCustomZPEnumerator;
extern int ghidra_vftable_RHttpGetNoRedirectAIOOp;
extern int ghidra_vftable_RHttpPostNoRedirectAIOOp;
extern int ghidra_vftable_RITQHandler;
extern int ghidra_vftable_RLastFMContentProvider;
extern int ghidra_vftable_RLookupMetadataAIOOp;
extern int ghidra_vftable_RMusicServiceListCB;
extern int ghidra_vftable_RPresentationMap;
extern int ghidra_vftable_RPresentationMapCB;
extern int ghidra_vftable_RQualityBadge;
extern int ghidra_vftable_RSCPBrowseAIOOpBase;
extern int ghidra_vftable_RSCPBrowseSOAPAIOOp;
extern int ghidra_vftable_RSCPPropNameTranslator;
extern int ghidra_vftable_RSonosGetExtendedMetadataTextOp;
extern int ghidra_vftable_RSonosGetExtendedMetadataTextParam;
extern int ghidra_vftable_RStereoZPCandidateEnumerator;
extern int ghidra_vftable_RStringTableImpl;
extern int ghidra_vftable_RUnsubscribeRequest;
extern int ghidra_vftable_RUpnpAIGetLineInLevelAIOOp;
extern int ghidra_vftable_RUpnpAISetAudioInputAttributesAIOOp;
extern int ghidra_vftable_RUpnpAVTAddURIToQueueAIOOp;
extern int ghidra_vftable_RUpnpAVTBecomeCoordinatorOfStandaloneGroupAIOOp;
extern int ghidra_vftable_RUpnpAVTConfigureSleepTimerAIOOp;
extern int ghidra_vftable_RUpnpAVTRemoveAllTracksFromQueueAIOOp;
extern int ghidra_vftable_RUpnpCDBrowseAIOOp;
extern int ghidra_vftable_RXMLParserBase;
extern int ghidra_vftable_SCAccessibilityTestFlareWithVOTextOverridePage;
extern int ghidra_vftable_SCAccountEmailVerificationWizard;
extern int ghidra_vftable_SCActionContext;
extern int ghidra_vftable_SCAddProductIncompleteWirelessConnectSubwiz;
extern int ghidra_vftable_SCArtworkCache;
extern int ghidra_vftable_SCBridgeRemovalWizard;
extern int ghidra_vftable_SCConditionalElementTree;
extern int ghidra_vftable_SCConditionalElementTreeNoAppendInterface;
extern int ghidra_vftable_SCConditionalVectorBuilderTree;
extern int ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface;
extern int ghidra_vftable_SCDisplayWizardEventSink;
extern int ghidra_vftable_SCDtlsTestEchoConnectingPage;
extern int ghidra_vftable_SCElapsedTimeMeasurement;
extern int ghidra_vftable_SCEthernetRemovalAskDevicePage;
extern int ghidra_vftable_SCFixUnconfiguredExistingEmailMatchPage;
extern int ghidra_vftable_SCIObj;
extern int ghidra_vftable_SCIObjImpl;
extern int ghidra_vftable_SCIOpCBDelegate;
extern int ghidra_vftable_SCInfoViewHelper;
extern int ghidra_vftable_SCJPGBitmapLoader;
extern int ghidra_vftable_SCJoinExistingSearchPage;
extern int ghidra_vftable_SCMobilePhoneInput;
extern int ghidra_vftable_SCMusicServiceCompleteState;
extern int ghidra_vftable_SCNetworkTroubleshootAppVersionCheckSubwiz;
extern int ghidra_vftable_SCNewWizPageFor;
extern int ghidra_vftable_SCNewWizStateTypeFor;
extern int ghidra_vftable_SCNowPlayingTransportSonosProgRadio;
extern int ghidra_vftable_SCOpAVTransportGetRemainingSleepTimerDuration;
extern int ghidra_vftable_SCOpFetchClientToken;
extern int ghidra_vftable_SCOpGetTrackPositionInfo;
extern int ghidra_vftable_SCOpImpl;
extern int ghidra_vftable_SCOpRef;
extern int ghidra_vftable_SCQuickTuneWizard;
extern int ghidra_vftable_SCRemoveMeSettingsMenu;
extern int ghidra_vftable_SCSecureTransferPressButtonState;
extern int ghidra_vftable_SCSecureTransferSpeakerChoiceState;
extern int ghidra_vftable_SCSecureTransferWizCompleteState;
extern int ghidra_vftable_SCSonanceDetectionQuickTuneSubwiz;
extern int ghidra_vftable_SCSonanceDetectionWizardDetectionFailurePage;
extern int ghidra_vftable_SCSubwizStateFor;
extern int ghidra_vftable_SCSwfObjBCListener;
extern int ghidra_vftable_SCSwfObjHHListener;
extern int ghidra_vftable_SCTVRemoteControlWizard;
extern int ghidra_vftable_SCUpdateMusicIndexActionDescriptor;
extern int ghidra_vftable_SCVoiceServiceLocaleSelectionPage;
extern int ghidra_vftable_SetupFileTransferUploadOp;
extern int ghidra_vftable_std_Func_impl_no_alloc;
extern int in_EAX;
extern int in_stack_00000014;
extern int in_stack_00000020;
extern int in_stack_00000024;
extern undefined1 LAB_1001b7c5[];
extern undefined1 LAB_103aa995[];
extern undefined1 LAB_103aa9a2[];
extern undefined1 LAB_105bfd82[];
extern undefined1 LAB_1063c33c[];
extern undefined1 LAB_108ee95c[];
extern undefined1 LAB_10932ec5[];
extern undefined1 LAB_109efe95[];
extern undefined1 LAB_10a1c14c[];
extern undefined1 LAB_10b015a5[];
extern undefined1 LAB_1106f600[];
extern undefined1 LAB_1106f640[];
extern undefined1 LAB_1114c508[];
extern undefined1 LAB_11161f53[];
extern undefined1 LAB_11161f5d[];
extern undefined1 LAB_1142c8b8[];
extern undefined1 LAB_114dbf60[];
extern undefined1 LAB_114e5e90[];
extern undefined1 LAB_114e7450[];
extern undefined1 LAB_114e87a0[];
extern undefined1 LAB_114ea8a0[];
extern undefined1 LAB_114ecf40[];
extern undefined1 LAB_114f5c80[];
extern undefined1 LAB_114f8000[];
extern undefined1 LAB_114fc48d[];
extern undefined1 LAB_1150b4b4[];
extern undefined1 LAB_1150bb64[];
extern undefined1 LAB_1150bc84[];
extern undefined1 LAB_1150bec4[];
extern undefined1 LAB_11510f60[];
extern undefined1 LAB_1152b93d[];
extern undefined1 LAB_1152fda4[];
extern undefined1 LAB_115439a5[];
extern undefined1 LAB_11544b25[];
extern undefined1 LAB_11546fb0[];
extern undefined1 LAB_11555edd[];
extern undefined1 LAB_1155eee5[];
extern undefined1 LAB_1159fa3d[];
extern undefined1 LAB_115b3b77[];
extern undefined1 LAB_115b5295[];
extern undefined1 LAB_115b9c50[];
extern undefined1 LAB_115c503d[];
extern undefined1 LAB_115cbf72[];
extern undefined1 LAB_115d2f44[];
extern undefined1 LAB_115d76cd[];
extern undefined1 LAB_115e768b[];
extern undefined1 LAB_1160047d[];
extern undefined1 LAB_1161f3cd[];
extern undefined1 LAB_11624547[];
extern undefined1 LAB_1162e847[];
extern undefined1 LAB_11641ddd[];
extern undefined1 LAB_1164ae62[];
extern undefined1 LAB_1164f1f2[];
extern undefined1 LAB_11651e45[];
extern undefined1 LAB_116558a0[];
extern undefined1 LAB_1165b4dd[];
extern undefined1 LAB_1167386d[];
extern undefined1 LAB_11675d28[];
extern undefined1 LAB_1167b839[];
extern undefined1 LAB_11681c57[];
extern undefined1 LAB_11682670[];
extern undefined1 LAB_11688fd7[];
extern undefined1 LAB_1168f13e[];
extern undefined1 LAB_11693417[];
extern undefined1 LAB_116a53fd[];
extern undefined1 LAB_116aa0fd[];
extern undefined1 LAB_116afb52[];
extern undefined1 LAB_116afe27[];
extern undefined1 LAB_116e54ad[];
extern undefined1 LAB_116e56f0[];
extern undefined1 LAB_116e9de5[];
extern undefined1 LAB_116ea975[];
extern undefined1 LAB_11703160[];
extern undefined1 LAB_117069f4[];
extern undefined1 LAB_1170df9d[];
extern undefined1 LAB_11711e45[];
extern undefined1 LAB_1173f1a5[];
extern undefined1 LAB_117437c4[];
extern undefined1 LAB_11759edd[];
extern undefined1 LAB_1175b60d[];
extern undefined1 LAB_11760efd[];
extern undefined1 LAB_1177a637[];
extern undefined1 LAB_1178259d[];
extern undefined1 LAB_1178265d[];
extern undefined1 LAB_1178866d[];
extern undefined1 LAB_1178a56c[];
extern undefined1 LAB_1178c2f4[];
extern undefined1 LAB_11796f1d[];
extern undefined1 LAB_117a210a[];
extern undefined1 LAB_117a3a4d[];
extern undefined1 LAB_117aa4c7[];
extern undefined1 LAB_117ac404[];
extern undefined1 LAB_117ae83d[];
extern undefined1 LAB_117b6010[];
extern undefined1 LAB_117b6a9d[];
extern undefined1 LAB_117bb10d[];
extern undefined1 LAB_117be230[];
extern undefined1 LAB_117c17c0[];
extern undefined1 LAB_117c1820[];
extern undefined1 LAB_117c3553[];
extern undefined1 LAB_117c78f8[];
extern undefined1 LAB_117c79b8[];
extern undefined1 LAB_117c8138[];
extern int *stack0x00000004;
extern int *stack0xfffffffc;
extern void *ExceptionList;
struct SCIBrowseItemSwigBase { char _pad; SCIBrowseItemSwigBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); static int isParentOfSearch; };
struct SCILifecycleAppProviderSwigBase { char _pad; SCILifecycleAppProviderSwigBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); static int isAppWithSWGenInstalled; };
struct SCIWifiDelegateSwigBase { char _pad; SCIWifiDelegateSwigBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); static int canJoinSSIDs; };
struct SCLibSonarCallback { char _pad; SCLibSonarCallback(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); static int stopMotionData; };
struct SCLibrary { char _pad; SCLibrary(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class... A> int getSingleton(A...); };
struct SCStr { char _pad; SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class... A> int int_allocRep(A...); template<class... A> int int_release(A...); template<class... A> int op_eq(A...); template<class... A> int setFromUTF16(A...); };
typedef void *ASCII;
typedef void *H;
typedef void *HTTP;
typedef void *LOCALMUSICBROWSE_CPUDN;
typedef void *PNG;
typedef void *R;
typedef void *WARNING;
struct AVTransport { char _pad; AVTransport(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct AbsCount { char _pad; AbsCount(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct AbsTime { char _pad; AbsTime(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct AudioIn { char _pad; AudioIn(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Code { char _pad; Code(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Completed { char _pad; Completed(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct CurrentEvent { char _pad; CurrentEvent(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct DesiredIcon { char _pad; DesiredIcon(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct DesiredName { char _pad; DesiredName(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct DirectControlIsSuspended { char _pad; DirectControlIsSuspended(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Error { char _pad; Error(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct FID_conflict__Tidy { char _pad; FID_conflict__Tidy(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Failure { char _pad; Failure(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Function { char _pad; Function(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct GetDeviceCapabilities { char _pad; GetDeviceCapabilities(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct GetPositionInfo { char _pad; GetPositionInfo(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Go { char _pad; Go(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct HouseholdIDs { char _pad; HouseholdIDs(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct InstanceID { char _pad; InstanceID(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Local_legacy { char _pad; Local_legacy(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct NextURI { char _pad; NextURI(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct NextURIMetaData { char _pad; NextURIMetaData(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct No { char _pad; No(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Not { char _pad; Not(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Operation { char _pad; Operation(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Ordinal_8 { char _pad; Ordinal_8(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct PhoneNumber { char _pad; PhoneNumber(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct PhoneNumberValid { char _pad; PhoneNumberValid(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct PlayMedia { char _pad; PlayMedia(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct RecMedia { char _pad; RecMedia(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct RecQualityModes { char _pad; RecQualityModes(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct RelCount { char _pad; RelCount(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct RelTime { char _pad; RelTime(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct RemoveAllTracksFromQueue { char _pad; RemoveAllTracksFromQueue(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct RenderingControl { char _pad; RenderingControl(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCDeviceVolume { char _pad; SCDeviceVolume(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIEventSink { char _pad; SCIEventSink(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIHousehold { char _pad; SCIHousehold(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIIntegerSettingsProperty { char _pad; SCIIntegerSettingsProperty(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIObj { char _pad; SCIObj(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCISettingsProperty { char _pad; SCISettingsProperty(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIVoiceService { char _pad; SCIVoiceService(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIWebsocketDelegate { char _pad; SCIWebsocketDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCReceiptSessionVerify { char _pad; SCReceiptSessionVerify(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCServiceDescriptorManager { char _pad; SCServiceDescriptorManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCThreadSafeInc { char _pad; SCThreadSafeInc(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SerialNum { char _pad; SerialNum(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Services { char _pad; Services(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SetAudioInputAttributes { char _pad; SetAudioInputAttributes(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SetNextAVTransportURI { char _pad; SetNextAVTransportURI(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Settings { char _pad; Settings(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SocketAvailableReadBytes { char _pad; SocketAvailableReadBytes(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Start { char _pad; Start(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct ThrowInfo { char _pad; ThrowInfo(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Track { char _pad; Track(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct TrackDuration { char _pad; TrackDuration(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct TrackMetaData { char _pad; TrackMetaData(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct TrackURI { char _pad; TrackURI(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Recovered_Bulk { char _pad; undefined4 * __thiscall FUN_1000100a(byte param_2); undefined4 * __thiscall FUN_10001028(undefined4 param_2); undefined4 * __thiscall FUN_1000103c(byte param_2); undefined4 __thiscall FUN_10001078(undefined4 *param_2); undefined4 * __thiscall FUN_100010a5(byte param_2); undefined4 * __thiscall FUN_100010b4(byte param_2); undefined4 * __thiscall FUN_100010dc(byte param_2); int * __thiscall FUN_1000110e(int *param_2,uint *param_3); void __thiscall FUN_1000112c(undefined4 param_2,undefined8 param_3); undefined4 __thiscall FUN_10001186(byte param_2); undefined4 * __thiscall FUN_100011ea(byte param_2); int __thiscall FUN_10001221(int param_2,int *param_3); /* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */ void __thiscall FUN_10001244(undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                  undefined4 param_13,undefined4 param_14,undefined4 param_15); undefined4 * __thiscall FUN_1000125d(undefined4 *param_2); void __thiscall FUN_10001325(int param_2); undefined4 * __thiscall FUN_10001339(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10001366(byte param_2); undefined4 __thiscall FUN_100013b1(byte param_2); undefined4 __thiscall FUN_100013de(undefined4 param_2); void __thiscall FUN_10001438(undefined4 param_2); undefined4 * __thiscall FUN_10001488(byte param_2); undefined4 __thiscall FUN_100014ce(undefined4 param_2); undefined4 * __thiscall FUN_10001505(byte param_2); undefined4 * __thiscall FUN_10001591(byte param_2); undefined4 * __thiscall FUN_100015b9(byte param_2); undefined1 __thiscall FUN_100015be(undefined4 param_2,undefined4 param_3,undefined4 param_4); undefined4 * __thiscall FUN_10001609(undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5); undefined4 * __thiscall FUN_1000160e(byte param_2); void __thiscall FUN_1000161d(int *param_2,undefined4 param_3); undefined4 * __thiscall FUN_10001645(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10001654(undefined4 param_2); undefined4 __thiscall FUN_100016cc(undefined4 param_2,undefined4 param_3); void __thiscall FUN_100016f4(undefined4 param_2); undefined4 * __thiscall FUN_1000171c(undefined4 *param_2); undefined4 * __thiscall FUN_1000174e(byte param_2); undefined4 * __thiscall FUN_10001758(byte param_2); int __thiscall FUN_100017f3(byte param_2); undefined4 * __thiscall FUN_100017fd(byte param_2); undefined4 * __thiscall FUN_10001866(byte param_2); undefined4 * __thiscall FUN_10001870(undefined4 param_2,undefined4 param_3,undefined4 param_4); undefined4 __thiscall FUN_1000187a(undefined4 param_2); void __thiscall FUN_100018de(undefined4 param_2); undefined4 * __thiscall FUN_1000190b(undefined4 param_2,undefined4 param_3); void __thiscall FUN_1000196f(undefined4 param_2,short param_3); undefined4 * __thiscall FUN_10001983(undefined4 *param_2); undefined4 __thiscall FUN_10001992(int param_2); undefined4 * __thiscall FUN_100019ba(byte param_2); int * __thiscall FUN_10001a1e(int *param_2); undefined4 __thiscall FUN_10001a23(byte param_2); undefined4 * __thiscall FUN_10001a5a(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10001b3b(byte param_2); undefined4 * __thiscall FUN_10001b40(byte param_2); void __thiscall FUN_10001b95(undefined4 param_2); void __thiscall FUN_10001bef(undefined4 param_2); /* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */ void __thiscall FUN_10002202(undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8); undefined4 * __thiscall FUN_10002207(undefined4 param_2); undefined4 * __thiscall FUN_10002315(byte param_2); undefined4 __thiscall FUN_1000236f(undefined4 param_2,undefined4 param_3); void __thiscall FUN_10002374(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1000238d(byte param_2); undefined4 * __thiscall FUN_10002392(byte param_2); int __thiscall FUN_1000239c(int param_2); void __thiscall FUN_100023f1(int *param_2,undefined4 param_3); undefined4 * __thiscall FUN_10002437(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10002450(undefined4 param_2,undefined4 param_3,undefined4 param_4); undefined4 * __thiscall FUN_10002496(byte param_2); undefined4 * __thiscall FUN_100024a5(byte param_2); undefined4 * __thiscall FUN_100024c8(byte param_2); void __thiscall FUN_100024d7(undefined4 *param_2); void __thiscall FUN_100024eb(char *param_2); undefined4 * __thiscall FUN_100024f0(byte param_2); void __thiscall FUN_10002504(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1000260d(byte param_2); void __thiscall FUN_10002649(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1000267b(byte param_2); undefined4 * __thiscall FUN_10002694(byte param_2); /* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */ void __thiscall FUN_100026da(undefined4 param_2,undefined4 param_3,undefined4 param_4); undefined4 * __thiscall FUN_100026df(byte param_2); void __thiscall FUN_100026ee(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_100026fd(byte param_2); void __thiscall FUN_10002702(int *param_2,undefined4 param_3); void __thiscall FUN_10002766(uint *param_2,undefined4 *param_3); int * __thiscall FUN_10002793(int *param_2,undefined4 param_3); undefined4 * __thiscall FUN_100027c5(byte param_2); undefined4 * __thiscall FUN_100027e8(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_100027ed(byte param_2); undefined4 * __thiscall FUN_100027f2(byte param_2); int * __thiscall FUN_1000286a(int *param_2); int __thiscall FUN_1000293c(byte param_2); undefined4 * __thiscall FUN_100029f5(byte param_2); undefined4 * __thiscall FUN_10002a04(byte param_2); undefined4 __thiscall FUN_10002a22(undefined4 *param_2); undefined4 * __thiscall FUN_10002ac7(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10002adb(byte param_2); undefined4 * __thiscall FUN_10002ae0(byte param_2); undefined4 __thiscall FUN_10002afe(byte param_2); void __thiscall FUN_10002b94(undefined4 param_2,undefined4 param_3); void __thiscall FUN_10002b99(uint param_2); undefined4 __thiscall FUN_10002c16(byte param_2); undefined4 * __thiscall FUN_10002c34(byte param_2); void __thiscall FUN_10002c6b(void); undefined4 * __thiscall FUN_10002ce3(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10002d15(byte param_2); undefined4 * __thiscall FUN_10002d1a(byte param_2); undefined4 * __thiscall FUN_10002d92(byte param_2); undefined4 * __thiscall FUN_10002e37(byte param_2); undefined4 * __thiscall FUN_10002e46(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10002e4b(byte param_2); undefined4 * __thiscall FUN_10002e96(byte param_2); undefined4 * __thiscall FUN_10002ec3(byte param_2); bool __thiscall FUN_10002eeb(int param_2); undefined4 * __thiscall FUN_10002f4a(byte param_2); undefined1 __thiscall FUN_10002f72(char *param_2,uint *param_3); undefined4 * __thiscall FUN_10003049(byte param_2); undefined4 * __thiscall FUN_100030c1(undefined4 *param_2); undefined4 * __thiscall FUN_100030df(byte param_2); undefined4 * __thiscall FUN_100030e4(byte param_2); undefined4 __thiscall FUN_10003116(byte param_2); undefined4 * __thiscall FUN_10003148(byte param_2); undefined4 * __thiscall FUN_10003175(undefined4 param_2,undefined4 param_3); void __thiscall FUN_100031ca(int param_2); undefined4 * __thiscall FUN_10003251(byte param_2); undefined4 * __thiscall FUN_1000330f(byte param_2); undefined4 * __thiscall FUN_10003323(byte param_2); undefined4 * __thiscall FUN_1000332d(byte param_2); undefined4 * __thiscall FUN_10003369(undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6); undefined4 * __thiscall FUN_100033a5(byte param_2); undefined4 * __thiscall FUN_100033be(byte param_2); undefined4 * __thiscall FUN_100033d2(byte param_2); undefined4 * __thiscall FUN_100033e6(undefined4 *param_2); void __thiscall FUN_100033f5(int param_2); void __thiscall FUN_10003404(undefined4 param_2); undefined4 * __thiscall FUN_10003418(byte param_2); undefined4 * __thiscall FUN_10003427(byte param_2); undefined4 * __thiscall FUN_10003431(byte param_2); undefined4 * __thiscall FUN_10003472(byte param_2); void __thiscall FUN_10003481(undefined4 param_2,undefined4 param_3); void __thiscall FUN_1000355d(int *param_2); undefined4 * __thiscall FUN_100035cb(byte param_2); undefined4 * __thiscall FUN_100035d0(undefined4 *param_2,SCStr *param_3); void __thiscall FUN_100035df(int *param_2); undefined4 * __thiscall FUN_10003634(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_10003639(byte param_2); undefined4 * __thiscall FUN_10003648(undefined4 *param_2,SCStr *param_3); void __thiscall FUN_10003666(int param_2,ushort param_3); undefined4 * __thiscall FUN_100036a2(byte param_2); undefined4 * __thiscall FUN_1000371a(byte param_2); bool __thiscall FUN_10003742(int param_2,short *param_3); int __thiscall FUN_100037ba(undefined4 param_2); undefined4 * __thiscall FUN_10003846(byte param_2); undefined4 * __thiscall FUN_10003850(byte param_2); undefined4 * __thiscall FUN_100038c8(byte param_2); undefined4 * __thiscall FUN_100038f0(byte param_2); undefined4 * __thiscall FUN_1000390e(undefined4 *param_2,int *param_3); undefined4 * __thiscall FUN_10003990(byte param_2); undefined4 * __thiscall FUN_1000399f(byte param_2); undefined4 * __thiscall FUN_100039a9(byte param_2); undefined4 __thiscall FUN_100039fe(undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8); undefined4 __thiscall FUN_10003a3a(undefined4 param_2); undefined4 * __thiscall FUN_10003a3f(byte param_2); undefined4 * __thiscall FUN_10003a6c(undefined4 *param_2,SCStr *param_3); void __thiscall FUN_10003a80(int *param_2); };
using namespace std;
undefined1 FUN_10001023(void);
extern undefined1 FUN_10001023(...);
extern undefined1 FUN_10001023(...);
void FUN_10001032(void);
extern void FUN_10001032(...);
extern void FUN_10001032(...);
undefined2 __fastcall FUN_10001050(int param_1);
extern undefined2 __fastcall FUN_10001050(...);
extern undefined2 __fastcall FUN_10001050(...);
uint __fastcall FUN_10001055(int *param_1);
extern uint __fastcall FUN_10001055(...);
extern uint __fastcall FUN_10001055(...);
void __fastcall FUN_10001087(undefined4 *param_1);
extern void __fastcall FUN_10001087(...);
extern void __fastcall FUN_10001087(...);
undefined1 FUN_10001091(void);
extern undefined1 FUN_10001091(...);
extern undefined1 FUN_10001091(...);
void __fastcall FUN_100010e1(int *param_1);
extern void __fastcall FUN_100010e1(...);
extern void __fastcall FUN_100010e1(...);
void FUN_100010eb(undefined4 *param_1,char *param_2,char param_3);
extern void FUN_100010eb(...);
extern void FUN_100010eb(...);
void FUN_100010f5(void);
extern void FUN_100010f5(...);
extern void FUN_100010f5(...);
void _CSharp_SCIController_subscribe__SWIG_1_12(int *param_1,undefined4 param_2,int param_3);
void __fastcall FUN_10001131(int param_1);
extern void __fastcall FUN_10001131(...);
extern void __fastcall FUN_10001131(...);
void FUN_10001195(undefined4 param_1);
extern void FUN_10001195(...);
extern void FUN_10001195(...);
void FUN_100011a9(void);
extern void FUN_100011a9(...);
extern void FUN_100011a9(...);
undefined4 __fastcall FUN_100011b3(int *param_1);
extern undefined4 __fastcall FUN_100011b3(...);
extern undefined4 __fastcall FUN_100011b3(...);
void FUN_100011bd(void);
extern void FUN_100011bd(...);
extern void FUN_100011bd(...);
void FUN_100011cc(void);
extern void FUN_100011cc(...);
extern void FUN_100011cc(...);
void FUN_100011e5(void);
extern void FUN_100011e5(...);
extern void FUN_100011e5(...);
void FUN_100011f9(void);
extern void FUN_100011f9(...);
extern void FUN_100011f9(...);
void FUN_10001203(void);
extern void FUN_10001203(...);
extern void FUN_10001203(...);
void __fastcall FUN_10001212(int *param_1);
extern void __fastcall FUN_10001212(...);
extern void __fastcall FUN_10001212(...);
undefined4 _CSharp_SCIDateTimeSettingsProperty_SWIGUpcast_4(undefined4 param_1);
void __fastcall FUN_1000123f(int param_1);
extern void __fastcall FUN_1000123f(...);
extern void __fastcall FUN_1000123f(...);
undefined1 FUN_10001271(void);
extern undefined1 FUN_10001271(...);
extern undefined1 FUN_10001271(...);
undefined1 FUN_1000128a(void);
extern undefined1 FUN_1000128a(...);
extern undefined1 FUN_1000128a(...);
undefined4 __fastcall FUN_1000128f(undefined4 param_1);
extern undefined4 __fastcall FUN_1000128f(...);
extern undefined4 __fastcall FUN_1000128f(...);
void __fastcall FUN_10001294(int param_1);
extern void __fastcall FUN_10001294(...);
extern void __fastcall FUN_10001294(...);
undefined1 FUN_100012a3(void);
extern undefined1 FUN_100012a3(...);
extern undefined1 FUN_100012a3(...);
void FUN_100012b7(void);
extern void FUN_100012b7(...);
extern void FUN_100012b7(...);
void _CSharp_SCITime_getHour_4(int *param_1);
void FUN_100012fd(void);
extern void FUN_100012fd(...);
extern void FUN_100012fd(...);
undefined4 FUN_1000130c(void);
extern undefined4 FUN_1000130c(...);
extern undefined4 FUN_1000130c(...);
void FUN_1000131b(void);
extern void FUN_1000131b(...);
extern void FUN_1000131b(...);
undefined4 __fastcall FUN_1000132a(int param_1);
extern undefined4 __fastcall FUN_1000132a(...);
extern undefined4 __fastcall FUN_1000132a(...);
undefined4 FUN_1000133e(void);
extern undefined4 FUN_1000133e(...);
extern undefined4 FUN_1000133e(...);
undefined2 __fastcall FUN_10001348(int param_1);
extern undefined2 __fastcall FUN_10001348(...);
extern undefined2 __fastcall FUN_10001348(...);
undefined4 __fastcall FUN_1000134d(int param_1);
extern undefined4 __fastcall FUN_1000134d(...);
extern undefined4 __fastcall FUN_1000134d(...);
undefined4 __fastcall FUN_10001361(int param_1);
extern undefined4 __fastcall FUN_10001361(...);
extern undefined4 __fastcall FUN_10001361(...);
void __fastcall FUN_1000136b(undefined4 *param_1);
extern void __fastcall FUN_1000136b(...);
extern void __fastcall FUN_1000136b(...);
void __fastcall FUN_10001370(int param_1);
extern void __fastcall FUN_10001370(...);
extern void __fastcall FUN_10001370(...);
void FUN_1000138e(void);
extern void FUN_1000138e(...);
extern void FUN_1000138e(...);
void FUN_10001393(void);
extern void FUN_10001393(...);
extern void FUN_10001393(...);
undefined1 FUN_1000139d(void);
extern undefined1 FUN_1000139d(...);
extern undefined1 FUN_1000139d(...);
undefined4 __fastcall FUN_100013ed(undefined4 param_1);
extern undefined4 __fastcall FUN_100013ed(...);
extern undefined4 __fastcall FUN_100013ed(...);
void __fastcall FUN_100013fc(undefined4 *param_1);
extern void __fastcall FUN_100013fc(...);
extern void __fastcall FUN_100013fc(...);
void __fastcall FUN_1000140b(int param_1);
extern void __fastcall FUN_1000140b(...);
extern void __fastcall FUN_1000140b(...);
undefined1 FUN_10001415(void);
extern undefined1 FUN_10001415(...);
extern undefined1 FUN_10001415(...);
undefined1 FUN_1000141f(void);
extern undefined1 FUN_1000141f(...);
extern undefined1 FUN_1000141f(...);
void FUN_1000142e(void);
extern void FUN_1000142e(...);
extern void FUN_1000142e(...);
void FUN_10001456(void);
extern void FUN_10001456(...);
extern void FUN_10001456(...);
void _CSharp_delete_SCIInAppPurchaseManager_4(int *param_1);
undefined4 FUN_100014c9(void);
extern undefined4 FUN_100014c9(...);
extern undefined4 FUN_100014c9(...);
void FUN_100014e7(void);
extern void FUN_100014e7(...);
extern void FUN_100014e7(...);
void FUN_10001500(void);
extern void FUN_10001500(...);
extern void FUN_10001500(...);
void FUN_1000150a(void);
extern void FUN_1000150a(...);
extern void FUN_1000150a(...);
void __fastcall FUN_10001537(undefined4 *param_1);
extern void __fastcall FUN_10001537(...);
extern void __fastcall FUN_10001537(...);
undefined4 __fastcall FUN_1000155f(undefined4 param_1);
extern undefined4 __fastcall FUN_1000155f(...);
extern undefined4 __fastcall FUN_1000155f(...);
void FUN_1000156e(undefined4 *param_1);
extern void FUN_1000156e(...);
extern void FUN_1000156e(...);
void FUN_10001573(void);
extern void FUN_10001573(...);
extern void FUN_10001573(...);
void FUN_1000158c(void);
extern void FUN_1000158c(...);
extern void FUN_1000158c(...);
undefined4 FUN_100015a0(void);
extern undefined4 FUN_100015a0(...);
extern undefined4 FUN_100015a0(...);
void FUN_100015c8(void);
extern void FUN_100015c8(...);
extern void FUN_100015c8(...);
undefined4 * FUN_100015dc(undefined4 *param_1);
extern undefined4 * FUN_100015dc(...);
extern undefined4 * FUN_100015dc(...);
void FUN_100015f5(int *param_1,int param_2,int param_3,uint param_4);
extern void FUN_100015f5(...);
extern void FUN_100015f5(...);
undefined1 FUN_10001613(void);
extern undefined1 FUN_10001613(...);
extern undefined1 FUN_10001613(...);
void FUN_10001631(void);
extern void FUN_10001631(...);
extern void FUN_10001631(...);
undefined2 __fastcall FUN_1000163b(int param_1);
extern undefined2 __fastcall FUN_1000163b(...);
extern undefined2 __fastcall FUN_1000163b(...);
void FUN_10001640(void);
extern void FUN_10001640(...);
extern void FUN_10001640(...);
void __fastcall FUN_10001668(int param_1);
extern void __fastcall FUN_10001668(...);
extern void __fastcall FUN_10001668(...);
undefined1 __fastcall FUN_1000166d(int param_1);
extern undefined1 __fastcall FUN_1000166d(...);
extern undefined1 __fastcall FUN_1000166d(...);
undefined4 __fastcall FUN_10001677(int *param_1);
extern undefined4 __fastcall FUN_10001677(...);
extern undefined4 __fastcall FUN_10001677(...);
void __fastcall FUN_1000167c(int *param_1);
extern void __fastcall FUN_1000167c(...);
extern void __fastcall FUN_1000167c(...);
void FUN_1000169a(int param_1,int param_2);
extern void FUN_1000169a(...);
extern void FUN_1000169a(...);
void FUN_1000169f(undefined4 param_1,undefined4 param_2);
extern void FUN_1000169f(...);
extern void FUN_1000169f(...);
void __fastcall FUN_100016a9(int param_1);
extern void __fastcall FUN_100016a9(...);
extern void __fastcall FUN_100016a9(...);
void FUN_100016d6(void);
extern void FUN_100016d6(...);
extern void FUN_100016d6(...);
void FUN_100016e0(void);
extern void FUN_100016e0(...);
extern void FUN_100016e0(...);
undefined1 FUN_100016e5(void);
extern undefined1 FUN_100016e5(...);
extern undefined1 FUN_100016e5(...);
void FUN_100016ea(void);
extern void FUN_100016ea(...);
extern void FUN_100016ea(...);
void __fastcall FUN_100016f9(undefined4 *param_1);
extern void __fastcall FUN_100016f9(...);
extern void __fastcall FUN_100016f9(...);
undefined2 __fastcall FUN_100016fe(int param_1);
extern undefined2 __fastcall FUN_100016fe(...);
extern undefined2 __fastcall FUN_100016fe(...);
void __fastcall FUN_1000173a(int param_1);
extern void __fastcall FUN_1000173a(...);
extern void __fastcall FUN_1000173a(...);
void FUN_1000175d(void);
extern void FUN_1000175d(...);
extern void FUN_1000175d(...);
void FUN_10001776(void);
extern void FUN_10001776(...);
extern void FUN_10001776(...);
void FUN_100017bc(void);
extern void FUN_100017bc(...);
extern void FUN_100017bc(...);
void __fastcall FUN_100017cb(int *param_1);
extern void __fastcall FUN_100017cb(...);
extern void __fastcall FUN_100017cb(...);
void FUN_100017ee(void);
extern void FUN_100017ee(...);
extern void FUN_100017ee(...);
void FUN_10001802(void);
extern void FUN_10001802(...);
extern void FUN_10001802(...);
undefined4 __fastcall FUN_10001816(undefined4 param_1);
extern undefined4 __fastcall FUN_10001816(...);
extern undefined4 __fastcall FUN_10001816(...);
undefined4 _CSharp_SCILibrary_getMusicServer_4(int *param_1);
undefined4 FUN_10001825(undefined4 *param_1);
extern undefined4 FUN_10001825(...);
extern undefined4 FUN_10001825(...);
void __fastcall FUN_10001839(int param_1);
extern void __fastcall FUN_10001839(...);
extern void __fastcall FUN_10001839(...);
void __fastcall FUN_10001848(int param_1);
extern void __fastcall FUN_10001848(...);
extern void __fastcall FUN_10001848(...);
void FUN_100018ac(void);
extern void FUN_100018ac(...);
extern void FUN_100018ac(...);
void FUN_100018b1(void);
extern void FUN_100018b1(...);
extern void FUN_100018b1(...);
undefined1 _CSharp_SCIWifiDelegate_canStartScan_4(int *param_1);
undefined1 _CSharp_SCIDeviceMusicEqualization_shouldShowCrossoverAdjust_4(int *param_1);
void __fastcall FUN_100018c5(undefined4 *param_1);
extern void __fastcall FUN_100018c5(...);
extern void __fastcall FUN_100018c5(...);
undefined4 __fastcall FUN_100018d4(int *param_1);
extern undefined4 __fastcall FUN_100018d4(...);
extern undefined4 __fastcall FUN_100018d4(...);
undefined1 FUN_100018fc(void);
extern undefined1 FUN_100018fc(...);
extern undefined1 FUN_100018fc(...);
void FUN_1000192e(void);
extern void FUN_1000192e(...);
extern void FUN_1000192e(...);
void __fastcall FUN_10001942(int *param_1);
extern void __fastcall FUN_10001942(...);
extern void __fastcall FUN_10001942(...);
void __fastcall FUN_10001951(int *param_1);
extern void __fastcall FUN_10001951(...);
extern void __fastcall FUN_10001951(...);
undefined2 __fastcall FUN_10001988(int param_1);
extern undefined2 __fastcall FUN_10001988(...);
extern undefined2 __fastcall FUN_10001988(...);
uint __fastcall FUN_1000198d(int param_1);
extern uint __fastcall FUN_1000198d(...);
extern uint __fastcall FUN_1000198d(...);
void __fastcall FUN_100019b0(int param_1);
extern void __fastcall FUN_100019b0(...);
extern void __fastcall FUN_100019b0(...);
int __fastcall FUN_100019c9(int param_1);
extern int __fastcall FUN_100019c9(...);
extern int __fastcall FUN_100019c9(...);
void _CSharp_SCISettingsSection_getStyle_4(int *param_1);
void _CSharp_delete_SCIActionDelegate_4(int *param_1);
undefined4 FUN_10001a19(char *param_1);
extern undefined4 FUN_10001a19(...);
extern undefined4 FUN_10001a19(...);
void FUN_10001a3c(void);
extern void FUN_10001a3c(...);
extern void FUN_10001a3c(...);
void FUN_10001a4b(void);
extern void FUN_10001a4b(...);
extern void FUN_10001a4b(...);
void FUN_10001a78(undefined4 *param_1);
extern void FUN_10001a78(...);
extern void FUN_10001a78(...);
void _CSharp_SCIBrowseItem_getResumeOffsetMillis_4(int *param_1);
undefined4 __fastcall FUN_10001aa0(int param_1);
extern undefined4 __fastcall FUN_10001aa0(...);
extern undefined4 __fastcall FUN_10001aa0(...);
undefined4 FUN_10001ac8(void);
extern undefined4 FUN_10001ac8(...);
extern undefined4 FUN_10001ac8(...);
void __fastcall FUN_10001adc(int *param_1);
extern void __fastcall FUN_10001adc(...);
extern void __fastcall FUN_10001adc(...);
void FUN_10001b2c(int param_1,int param_2);
extern void FUN_10001b2c(...);
extern void FUN_10001b2c(...);
void __fastcall FUN_10001b36(int param_1);
extern void __fastcall FUN_10001b36(...);
extern void __fastcall FUN_10001b36(...);
undefined1 __fastcall FUN_10001b45(int param_1);
extern undefined1 __fastcall FUN_10001b45(...);
extern undefined1 __fastcall FUN_10001b45(...);
void __fastcall FUN_10001b59(int param_1);
extern void __fastcall FUN_10001b59(...);
extern void __fastcall FUN_10001b59(...);
void FUN_10001b8b(void);
extern void FUN_10001b8b(...);
extern void FUN_10001b8b(...);
void FUN_10001b90(void);
extern void FUN_10001b90(...);
extern void FUN_10001b90(...);
void FUN_10001ba4(void);
extern void FUN_10001ba4(...);
extern void FUN_10001ba4(...);
undefined4 _CSharp_SCIDateTimeManager_createSwitchToManualTimeOp_4(int *param_1);
void FUN_10001c03(void);
extern void FUN_10001c03(...);
extern void FUN_10001c03(...);
void FUN_10001c1c(int param_1,int param_2,int param_3,int *param_4,code *param_5);
extern void FUN_10001c1c(...);
extern void FUN_10001c1c(...);
void _CSharp_SCLibLogCallback_director_connect_8(int param_1,undefined4 param_2);
void FUN_100021fd(void);
extern void FUN_100021fd(...);
extern void FUN_100021fd(...);
void __fastcall FUN_1000221b(int param_1);
extern void __fastcall FUN_1000221b(...);
extern void __fastcall FUN_1000221b(...);
void FUN_1000222f(void);
extern void FUN_1000222f(...);
extern void FUN_1000222f(...);
void FUN_10002243(void);
extern void FUN_10002243(...);
extern void FUN_10002243(...);
void FUN_1000224d(void);
extern void FUN_1000224d(...);
extern void FUN_1000224d(...);
undefined1 FUN_1000226b(void);
extern undefined1 FUN_1000226b(...);
extern undefined1 FUN_1000226b(...);
undefined4 _CSharp_SCISearchHistoryViewBrowseItem_SWIGUpcast_4(undefined4 param_1);
void __fastcall FUN_100022d9(int param_1);
extern void __fastcall FUN_100022d9(...);
extern void __fastcall FUN_100022d9(...);
void FUN_100022e3(void);
extern void FUN_100022e3(...);
extern void FUN_100022e3(...);
void FUN_100022f2(void);
extern void FUN_100022f2(...);
extern void FUN_100022f2(...);
void FUN_10002310(void);
extern void FUN_10002310(...);
extern void FUN_10002310(...);
void __fastcall FID_conflict__Tidy_1000231a(int *param_1);
undefined1 FUN_1000231f(void);
extern undefined1 FUN_1000231f(...);
extern undefined1 FUN_1000231f(...);
undefined4 FUN_1000235b(int param_1);
extern undefined4 FUN_1000235b(...);
extern undefined4 FUN_1000235b(...);
int FUN_10002360(int *param_1,uint param_2);
extern int FUN_10002360(...);
extern int FUN_10002360(...);
void __fastcall FUN_1000237e(int param_1);
extern void __fastcall FUN_1000237e(...);
extern void __fastcall FUN_1000237e(...);
undefined4 __fastcall FUN_100023c9(int param_1);
extern undefined4 __fastcall FUN_100023c9(...);
extern undefined4 __fastcall FUN_100023c9(...);
undefined4 _CSharp_SCIBrowseDataSource_getActionsOnSelectedItems_4(int *param_1);
undefined1 FUN_100023fb(void);
extern undefined1 FUN_100023fb(...);
extern undefined1 FUN_100023fb(...);
void __fastcall FUN_10002414(int param_1);
extern void __fastcall FUN_10002414(...);
extern void __fastcall FUN_10002414(...);
void __fastcall FUN_10002419(int param_1);
extern void __fastcall FUN_10002419(...);
extern void __fastcall FUN_10002419(...);
void __fastcall FUN_10002423(int param_1);
extern void __fastcall FUN_10002423(...);
extern void __fastcall FUN_10002423(...);
void FUN_1000243c(void);
extern void FUN_1000243c(...);
extern void FUN_1000243c(...);
void FUN_10002446(void);
extern void FUN_10002446(...);
extern void FUN_10002446(...);
void FUN_10002487(void);
extern void FUN_10002487(...);
extern void FUN_10002487(...);
void FUN_10002491(char *param_1,char *param_2,char *param_3,char *param_4,uint param_5);
extern void FUN_10002491(...);
extern void FUN_10002491(...);
undefined1 FUN_100024af(void);
extern undefined1 FUN_100024af(...);
extern undefined1 FUN_100024af(...);
void FUN_100024b9(void);
extern void FUN_100024b9(...);
extern void FUN_100024b9(...);
undefined4 * __fastcall FUN_100024c3(undefined4 *param_1);
extern undefined4 * __fastcall FUN_100024c3(...);
extern undefined4 * __fastcall FUN_100024c3(...);
void __fastcall FUN_100024d2(int param_1);
extern void __fastcall FUN_100024d2(...);
extern void __fastcall FUN_100024d2(...);
void FUN_10002518(void);
extern void FUN_10002518(...);
extern void FUN_10002518(...);
void FUN_10002527(void);
extern void FUN_10002527(...);
extern void FUN_10002527(...);
int * FUN_10002540(int *param_1);
extern int * FUN_10002540(...);
extern int * FUN_10002540(...);
undefined4 FUN_1000254f(void);
extern undefined4 FUN_1000254f(...);
extern undefined4 FUN_1000254f(...);
void FUN_10002590(void);
extern void FUN_10002590(...);
extern void FUN_10002590(...);
bool __fastcall FUN_10002595(int param_1);
extern bool __fastcall FUN_10002595(...);
extern bool __fastcall FUN_10002595(...);
undefined4 * __fastcall FUN_1000259a(undefined4 *param_1);
extern undefined4 * __fastcall FUN_1000259a(...);
extern undefined4 * __fastcall FUN_1000259a(...);
void _CSharp_delete_SCIOpLoadLogo_4(int *param_1);
char * FUN_100025c2(void);
extern char * FUN_100025c2(...);
extern char * FUN_100025c2(...);
void __fastcall FUN_100025c7(float *param_1);
extern void __fastcall FUN_100025c7(...);
extern void __fastcall FUN_100025c7(...);
void __fastcall FUN_100025d1(undefined4 *param_1);
extern void __fastcall FUN_100025d1(...);
extern void __fastcall FUN_100025d1(...);
void FUN_100025e0(void);
extern void FUN_100025e0(...);
extern void FUN_100025e0(...);
void __fastcall FUN_10002621(undefined4 *param_1);
extern void __fastcall FUN_10002621(...);
extern void __fastcall FUN_10002621(...);
void FUN_1000265d(void);
extern void FUN_1000265d(...);
extern void FUN_1000265d(...);
undefined4 FUN_10002662(void);
extern undefined4 FUN_10002662(...);
extern undefined4 FUN_10002662(...);
void FUN_10002685(void);
extern void FUN_10002685(...);
extern void FUN_10002685(...);
void __fastcall FUN_10002699(int param_1);
extern void __fastcall FUN_10002699(...);
extern void __fastcall FUN_10002699(...);
undefined4 * FUN_100026ad(undefined4 *param_1);
extern undefined4 * FUN_100026ad(...);
extern undefined4 * FUN_100026ad(...);
undefined1 _CSharp_SCITime_isPm_4(int *param_1);
void FUN_100026c6(void);
extern void FUN_100026c6(...);
extern void FUN_100026c6(...);
void __fastcall FUN_1000270c(int param_1);
extern void __fastcall FUN_1000270c(...);
extern void __fastcall FUN_1000270c(...);
undefined1 FUN_10002711(void);
extern undefined1 FUN_10002711(...);
extern undefined1 FUN_10002711(...);
void FUN_10002716(void);
extern void FUN_10002716(...);
extern void FUN_10002716(...);
void __fastcall FUN_10002720(int param_1);
extern void __fastcall FUN_10002720(...);
extern void __fastcall FUN_10002720(...);
void FUN_10002743(void);
extern void FUN_10002743(...);
extern void FUN_10002743(...);
void __fastcall FUN_10002748(int param_1);
extern void __fastcall FUN_10002748(...);
extern void __fastcall FUN_10002748(...);
void FUN_10002775(int param_1,int param_2,undefined4 param_3,undefined4 param_4,
                       undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                       undefined4 param_9,undefined4 param_10);
extern void FUN_10002775(...);
extern void FUN_10002775(...);
undefined4 __fastcall FUN_1000279d(int param_1);
extern undefined4 __fastcall FUN_1000279d(...);
extern undefined4 __fastcall FUN_1000279d(...);
void FUN_100027a7(void);
extern void FUN_100027a7(...);
extern void FUN_100027a7(...);
void FUN_10002801(void);
extern void FUN_10002801(...);
extern void FUN_10002801(...);
void __fastcall FUN_10002829(undefined4 *param_1);
extern void __fastcall FUN_10002829(...);
extern void __fastcall FUN_10002829(...);
undefined4 __fastcall FUN_10002833(undefined4 param_1);
extern undefined4 __fastcall FUN_10002833(...);
extern undefined4 __fastcall FUN_10002833(...);
undefined4 FUN_10002838(int param_1,undefined2 *param_2,int param_3);
extern undefined4 FUN_10002838(...);
extern undefined4 FUN_10002838(...);
void FUN_1000283d(int *param_1,uint param_2,uint param_3,uint *param_4,uint *param_5);
extern void FUN_1000283d(...);
extern void FUN_1000283d(...);
void __fastcall FUN_10002847(int *param_1);
extern void __fastcall FUN_10002847(...);
extern void __fastcall FUN_10002847(...);
void __fastcall FUN_10002851(int param_1);
extern void __fastcall FUN_10002851(...);
extern void __fastcall FUN_10002851(...);
void __fastcall FUN_1000285b(int *param_1);
extern void __fastcall FUN_1000285b(...);
extern void __fastcall FUN_1000285b(...);
void FUN_10002865(void);
extern void FUN_10002865(...);
extern void FUN_10002865(...);
void FUN_10002874(void);
extern void FUN_10002874(...);
extern void FUN_10002874(...);
void __fastcall FUN_10002888(int param_1);
extern void __fastcall FUN_10002888(...);
extern void __fastcall FUN_10002888(...);
undefined1 FUN_10002892(void);
extern undefined1 FUN_10002892(...);
extern undefined1 FUN_10002892(...);
void FUN_10002897(void);
extern void FUN_10002897(...);
extern void FUN_10002897(...);
void FUN_1000289c(void);
extern void FUN_1000289c(...);
extern void FUN_1000289c(...);
void FUN_100028a6(void);
extern void FUN_100028a6(...);
extern void FUN_100028a6(...);
undefined4 FUN_100028bf(undefined4 param_1);
extern undefined4 FUN_100028bf(...);
extern undefined4 FUN_100028bf(...);
void FUN_100028c9(void);
extern void FUN_100028c9(...);
extern void FUN_100028c9(...);
void FUN_100028f1(void);
extern void FUN_100028f1(...);
extern void FUN_100028f1(...);
void _CSharp_delete_SCIOpCBSwigBase_4(int *param_1);
undefined4 FUN_10002900(void);
extern undefined4 FUN_10002900(...);
extern undefined4 FUN_10002900(...);
void FUN_1000291e(int param_1);
extern void FUN_1000291e(...);
extern void FUN_1000291e(...);
void __fastcall FUN_10002923(int param_1);
extern void __fastcall FUN_10002923(...);
extern void __fastcall FUN_10002923(...);
void FUN_10002932(void);
extern void FUN_10002932(...);
extern void FUN_10002932(...);
void FUN_10002941(void);
extern void FUN_10002941(...);
extern void FUN_10002941(...);
void FUN_10002946(void);
extern void FUN_10002946(...);
extern void FUN_10002946(...);
undefined1 * __fastcall FUN_10002964(int param_1);
extern undefined1 * __fastcall FUN_10002964(...);
extern undefined1 * __fastcall FUN_10002964(...);
uint __fastcall FUN_10002978(int param_1);
extern uint __fastcall FUN_10002978(...);
extern uint __fastcall FUN_10002978(...);
undefined4 * FUN_10002982(undefined4 *param_1);
extern undefined4 * FUN_10002982(...);
extern undefined4 * FUN_10002982(...);
undefined1 _CSharp_SCIInAppMessaging_hasDeviceToken_4(int *param_1);
undefined4 * FUN_1000299b(undefined4 *param_1);
extern undefined4 * FUN_1000299b(...);
extern undefined4 * FUN_1000299b(...);
void FUN_100029af(void);
extern void FUN_100029af(...);
extern void FUN_100029af(...);
void FUN_100029b9(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
extern void FUN_100029b9(...);
extern void FUN_100029b9(...);
void FUN_10002a18(void);
extern void FUN_10002a18(...);
extern void FUN_10002a18(...);
void __fastcall FUN_10002a1d(int param_1);
extern void __fastcall FUN_10002a1d(...);
extern void __fastcall FUN_10002a1d(...);
undefined4 __fastcall FUN_10002a2c(undefined4 param_1);
extern undefined4 __fastcall FUN_10002a2c(...);
extern undefined4 __fastcall FUN_10002a2c(...);
undefined4 FUN_10002a36(void);
extern undefined4 FUN_10002a36(...);
extern undefined4 FUN_10002a36(...);
void _CSharp_SCIChirpDelegate_startChirpReceiving_8(int *param_1,undefined4 param_2);
void __fastcall FUN_10002a45(int param_1);
extern void __fastcall FUN_10002a45(...);
extern void __fastcall FUN_10002a45(...);
void __fastcall FUN_10002a63(int param_1);
extern void __fastcall FUN_10002a63(...);
extern void __fastcall FUN_10002a63(...);
undefined4 FUN_10002a68(int param_1,undefined1 *param_2);
extern undefined4 FUN_10002a68(...);
extern undefined4 FUN_10002a68(...);
int * FUN_10002a77(int *param_1);
extern int * FUN_10002a77(...);
extern int * FUN_10002a77(...);
undefined4 __fastcall FUN_10002a7c(int param_1);
extern undefined4 __fastcall FUN_10002a7c(...);
extern undefined4 __fastcall FUN_10002a7c(...);
undefined4 FUN_10002a9a(int param_1);
extern undefined4 FUN_10002a9a(...);
extern undefined4 FUN_10002a9a(...);
void FUN_10002ad6(void);
extern void FUN_10002ad6(...);
extern void FUN_10002ad6(...);
undefined4 FUN_10002aea(undefined4 param_1);
extern undefined4 FUN_10002aea(...);
extern undefined4 FUN_10002aea(...);
void FUN_10002b12(undefined4 param_1);
extern void FUN_10002b12(...);
extern void FUN_10002b12(...);
undefined1 _CSharp_SCIBrowseDataSource_isGone_4(int *param_1);
void FUN_10002b49(int param_1,int param_2);
extern void FUN_10002b49(...);
extern void FUN_10002b49(...);
void FUN_10002b76(void);
extern void FUN_10002b76(...);
extern void FUN_10002b76(...);
int __fastcall FUN_10002b8a(int param_1);
extern int __fastcall FUN_10002b8a(...);
extern int __fastcall FUN_10002b8a(...);
undefined4 __fastcall FUN_10002ba3(undefined4 param_1);
extern undefined4 __fastcall FUN_10002ba3(...);
extern undefined4 __fastcall FUN_10002ba3(...);
undefined4 * FUN_10002bc1(undefined4 *param_1);
extern undefined4 * FUN_10002bc1(...);
extern undefined4 * FUN_10002bc1(...);
void __fastcall FUN_10002bc6(undefined4 *param_1);
extern void __fastcall FUN_10002bc6(...);
extern void __fastcall FUN_10002bc6(...);
undefined4 _CSharp_SCILinkSettingsProperty_SWIGUpcast_4(undefined4 param_1);
void FUN_10002c02(void);
extern void FUN_10002c02(...);
extern void FUN_10002c02(...);
undefined4 __fastcall FUN_10002c11(int param_1);
extern undefined4 __fastcall FUN_10002c11(...);
extern undefined4 __fastcall FUN_10002c11(...);
undefined1 FUN_10002c1b(void);
extern undefined1 FUN_10002c1b(...);
extern undefined1 FUN_10002c1b(...);
void FUN_10002c2f(void);
extern void FUN_10002c2f(...);
extern void FUN_10002c2f(...);
void FUN_10002c39(void);
extern void FUN_10002c39(...);
extern void FUN_10002c39(...);
void FUN_10002c48(void);
extern void FUN_10002c48(...);
extern void FUN_10002c48(...);
void FUN_10002c4d(void);
extern void FUN_10002c4d(...);
extern void FUN_10002c4d(...);
void __fastcall FUN_10002c7a(undefined4 *param_1);
extern void __fastcall FUN_10002c7a(...);
extern void __fastcall FUN_10002c7a(...);
void __fastcall FUN_10002cb1(undefined4 *param_1);
extern void __fastcall FUN_10002cb1(...);
extern void __fastcall FUN_10002cb1(...);
undefined1 FUN_10002cbb(void);
extern undefined1 FUN_10002cbb(...);
extern undefined1 FUN_10002cbb(...);
undefined4 FUN_10002cc0(undefined1 *param_1);
extern undefined4 FUN_10002cc0(...);
extern undefined4 FUN_10002cc0(...);
undefined1 __fastcall FUN_10002cc5(int param_1);
extern undefined1 __fastcall FUN_10002cc5(...);
extern undefined1 __fastcall FUN_10002cc5(...);
void FUN_10002d0b(undefined4 param_1,undefined2 param_2);
extern void FUN_10002d0b(...);
extern void FUN_10002d0b(...);
void FUN_10002d1f(void);
extern void FUN_10002d1f(...);
extern void FUN_10002d1f(...);
undefined4 FUN_10002d29(undefined4 param_1);
extern undefined4 FUN_10002d29(...);
extern undefined4 FUN_10002d29(...);
void __fastcall FUN_10002d79(int param_1);
extern void __fastcall FUN_10002d79(...);
extern void __fastcall FUN_10002d79(...);
undefined1 FUN_10002d88(void);
extern undefined1 FUN_10002d88(...);
extern undefined1 FUN_10002d88(...);
undefined4 * __fastcall FUN_10002dab(int param_1);
extern undefined4 * __fastcall FUN_10002dab(...);
extern undefined4 * __fastcall FUN_10002dab(...);
undefined4 FUN_10002ddd(void);
extern undefined4 FUN_10002ddd(...);
extern undefined4 FUN_10002ddd(...);
void FUN_10002de2(void);
extern void FUN_10002de2(...);
extern void FUN_10002de2(...);
undefined2 __fastcall FUN_10002e2d(int param_1);
extern undefined2 __fastcall FUN_10002e2d(...);
extern undefined2 __fastcall FUN_10002e2d(...);
void FUN_10002e41(void);
extern void FUN_10002e41(...);
extern void FUN_10002e41(...);
void FUN_10002e50(void);
extern void FUN_10002e50(...);
extern void FUN_10002e50(...);
undefined4 __fastcall FUN_10002e55(int param_1);
extern undefined4 __fastcall FUN_10002e55(...);
extern undefined4 __fastcall FUN_10002e55(...);
undefined4 FUN_10002e5f(undefined4 *param_1,int *param_2);
extern undefined4 FUN_10002e5f(...);
extern undefined4 FUN_10002e5f(...);
undefined1 _CSharp_SCIServiceDescriptor_canAddAccount_4(int *param_1);
undefined4 __fastcall FUN_10002e82(undefined4 param_1);
extern undefined4 __fastcall FUN_10002e82(...);
extern undefined4 __fastcall FUN_10002e82(...);
undefined4 FUN_10002eaa(void);
extern undefined4 FUN_10002eaa(...);
extern undefined4 FUN_10002eaa(...);
undefined2 __fastcall FUN_10002ebe(int param_1);
extern undefined2 __fastcall FUN_10002ebe(...);
extern undefined2 __fastcall FUN_10002ebe(...);
void __fastcall FUN_10002ed2(int param_1);
extern void __fastcall FUN_10002ed2(...);
extern void __fastcall FUN_10002ed2(...);
void __fastcall FUN_10002ed7(int param_1);
extern void __fastcall FUN_10002ed7(...);
extern void __fastcall FUN_10002ed7(...);
void FUN_10002ee1(void);
extern void FUN_10002ee1(...);
extern void FUN_10002ee1(...);
void __fastcall FUN_10002ee6(int param_1);
extern void __fastcall FUN_10002ee6(...);
extern void __fastcall FUN_10002ee6(...);
uint FUN_10002ef5(undefined4 param_1);
extern uint FUN_10002ef5(...);
extern uint FUN_10002ef5(...);
void FUN_10002efa(void);
extern void FUN_10002efa(...);
extern void FUN_10002efa(...);
void FUN_10002f27(void);
extern void FUN_10002f27(...);
extern void FUN_10002f27(...);
void FUN_10002f2c(void);
extern void FUN_10002f2c(...);
extern void FUN_10002f2c(...);
undefined1 FUN_10002f45(void);
extern undefined1 FUN_10002f45(...);
extern undefined1 FUN_10002f45(...);
undefined1 _CSharp_SCIServiceAccount_isTrialAccount_4(int *param_1);
void FUN_10002f86(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                       undefined4 param_5);
extern void FUN_10002f86(...);
extern void FUN_10002f86(...);
undefined4 FUN_10002f90(int param_1);
extern undefined4 FUN_10002f90(...);
extern undefined4 FUN_10002f90(...);
undefined4 * __fastcall FUN_10002f9f(int param_1);
extern undefined4 * __fastcall FUN_10002f9f(...);
extern undefined4 * __fastcall FUN_10002f9f(...);
void FUN_10002fb3(void);
extern void FUN_10002fb3(...);
extern void FUN_10002fb3(...);
undefined4 __fastcall FUN_10002fcc(int param_1);
extern undefined4 __fastcall FUN_10002fcc(...);
extern undefined4 __fastcall FUN_10002fcc(...);
void FUN_10002fe5(void);
extern void FUN_10002fe5(...);
extern void FUN_10002fe5(...);
void FUN_10002ff4(char *param_1,undefined4 *param_2);
extern void FUN_10002ff4(...);
extern void FUN_10002ff4(...);
void FUN_10002ff9(void);
extern void FUN_10002ff9(...);
extern void FUN_10002ff9(...);
void __fastcall FUN_10003008(int param_1);
extern void __fastcall FUN_10003008(...);
extern void __fastcall FUN_10003008(...);
void _CSharp_SCUserInterfaceParameters_m_screenWidth_set_8(int param_1,undefined4 param_2);
void FUN_10003021(void);
extern void FUN_10003021(...);
extern void FUN_10003021(...);
void __fastcall FUN_10003026(int param_1);
extern void __fastcall FUN_10003026(...);
extern void __fastcall FUN_10003026(...);
void FUN_10003035(void);
extern void FUN_10003035(...);
extern void FUN_10003035(...);
undefined1 FUN_10003053(void);
extern undefined1 FUN_10003053(...);
extern undefined1 FUN_10003053(...);
void FUN_1000306c(void);
extern void FUN_1000306c(...);
extern void FUN_1000306c(...);
undefined4 __fastcall FUN_10003076(int param_1);
extern undefined4 __fastcall FUN_10003076(...);
extern undefined4 __fastcall FUN_10003076(...);
undefined4 __fastcall FUN_10003085(int param_1);
extern undefined4 __fastcall FUN_10003085(...);
extern undefined4 __fastcall FUN_10003085(...);
void FUN_100030cb(void);
extern void FUN_100030cb(...);
extern void FUN_100030cb(...);
void FUN_100030d5(void);
extern void FUN_100030d5(...);
extern void FUN_100030d5(...);
void FUN_100030da(void);
extern void FUN_100030da(...);
extern void FUN_100030da(...);
void FUN_100030e9(void);
extern void FUN_100030e9(...);
extern void FUN_100030e9(...);
void FUN_100030f3(void);
extern void FUN_100030f3(...);
extern void FUN_100030f3(...);
uint FUN_10003111(undefined4 param_1);
extern uint FUN_10003111(...);
extern uint FUN_10003111(...);
void FUN_1000311b(void);
extern void FUN_1000311b(...);
extern void FUN_1000311b(...);
undefined1 FUN_1000312a(void);
extern undefined1 FUN_1000312a(...);
extern undefined1 FUN_1000312a(...);
undefined4 FUN_1000312f(void);
extern undefined4 FUN_1000312f(...);
extern undefined4 FUN_1000312f(...);
void FUN_1000316b(void);
extern void FUN_1000316b(...);
extern void FUN_1000316b(...);
void FUN_10003193(void);
extern void FUN_10003193(...);
extern void FUN_10003193(...);
int __fastcall FUN_1000319d(int param_1);
extern int __fastcall FUN_1000319d(...);
extern int __fastcall FUN_1000319d(...);
undefined4 __fastcall FUN_100031ac(undefined4 param_1);
extern undefined4 __fastcall FUN_100031ac(...);
extern undefined4 __fastcall FUN_100031ac(...);
void __fastcall FUN_10003201(undefined4 *param_1);
extern void __fastcall FUN_10003201(...);
extern void __fastcall FUN_10003201(...);
undefined4 __fastcall FUN_10003206(undefined4 param_1);
extern undefined4 __fastcall FUN_10003206(...);
extern undefined4 __fastcall FUN_10003206(...);
undefined1 FUN_10003210(void);
extern undefined1 FUN_10003210(...);
extern undefined1 FUN_10003210(...);
void FUN_10003215(void);
extern void FUN_10003215(...);
extern void FUN_10003215(...);
void __fastcall FUN_1000321a(int param_1);
extern void __fastcall FUN_1000321a(...);
extern void __fastcall FUN_1000321a(...);
undefined4 _CSharp_SCIExperimentManager_getSingleton_0(void);
undefined1 _CSharp_SCIDirectControlApplication_controlsLockscreen_4(int *param_1);
undefined4 FUN_10003247(void);
extern undefined4 FUN_10003247(...);
extern undefined4 FUN_10003247(...);
undefined1 FUN_10003256(void);
extern undefined1 FUN_10003256(...);
extern undefined1 FUN_10003256(...);
void FUN_10003297(void);
extern void FUN_10003297(...);
extern void FUN_10003297(...);
undefined1 FUN_100032a6(void);
extern undefined1 FUN_100032a6(...);
extern undefined1 FUN_100032a6(...);
void FUN_100032ab(void);
extern void FUN_100032ab(...);
extern void FUN_100032ab(...);
void FUN_100032c9(void);
extern void FUN_100032c9(...);
extern void FUN_100032c9(...);
void FUN_100032e2(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                       undefined4 param_5,undefined4 param_6);
extern void FUN_100032e2(...);
extern void FUN_100032e2(...);
void FUN_100032fb(void);
extern void FUN_100032fb(...);
extern void FUN_100032fb(...);
void FUN_1000330a(void);
extern void FUN_1000330a(...);
extern void FUN_1000330a(...);
void FUN_10003328(void);
extern void FUN_10003328(...);
extern void FUN_10003328(...);
void __fastcall FUN_10003355(int *param_1);
extern void __fastcall FUN_10003355(...);
extern void __fastcall FUN_10003355(...);
void _CSharp_SCISelectionManager_getNumOfSelectedItems_4(int *param_1);
void __fastcall FUN_10003387(int *param_1);
extern void __fastcall FUN_10003387(...);
extern void __fastcall FUN_10003387(...);
undefined4 FUN_10003391(undefined1 *param_1);
extern undefined4 FUN_10003391(...);
extern undefined4 FUN_10003391(...);
void FUN_10003396(void);
extern void FUN_10003396(...);
extern void FUN_10003396(...);
void FUN_100033c3(void);
extern void FUN_100033c3(...);
extern void FUN_100033c3(...);
void _CSharp_SCILibrary_SCLibUIThreadCallback_4(int *param_1);
void FUN_1000340e(void);
extern void FUN_1000340e(...);
extern void FUN_1000340e(...);
void __fastcall FUN_10003436(int *param_1);
extern void __fastcall FUN_10003436(...);
extern void __fastcall FUN_10003436(...);
void FUN_1000343b(void);
extern void FUN_1000343b(...);
extern void FUN_1000343b(...);
undefined4 FUN_10003440(undefined4 param_1);
extern undefined4 FUN_10003440(...);
extern undefined4 FUN_10003440(...);
undefined4 __fastcall FUN_1000344f(int param_1);
extern undefined4 __fastcall FUN_1000344f(...);
extern undefined4 __fastcall FUN_1000344f(...);
undefined4 _CSharp_SCILibrary_SC_URL_SONOS_DEMO_get_0(void);
undefined4 FUN_1000346d(undefined4 param_1,undefined4 param_2,int *param_3,uint param_4);
extern undefined4 FUN_1000346d(...);
extern undefined4 FUN_1000346d(...);
void __fastcall FUN_1000348b(int param_1);
extern void __fastcall FUN_1000348b(...);
extern void __fastcall FUN_1000348b(...);
void __fastcall FUN_10003490(int param_1);
extern void __fastcall FUN_10003490(...);
extern void __fastcall FUN_10003490(...);
void FUN_10003495(void);
extern void FUN_10003495(...);
extern void FUN_10003495(...);
void __fastcall FUN_1000349a(int param_1);
extern void __fastcall FUN_1000349a(...);
extern void __fastcall FUN_1000349a(...);
undefined4 __fastcall FUN_1000349f(int param_1);
extern undefined4 __fastcall FUN_1000349f(...);
extern undefined4 __fastcall FUN_1000349f(...);
undefined4 __fastcall FUN_100034a4(int param_1);
extern undefined4 __fastcall FUN_100034a4(...);
extern undefined4 __fastcall FUN_100034a4(...);
undefined4 * FUN_100034b3(undefined4 *param_1);
extern undefined4 * FUN_100034b3(...);
extern undefined4 * FUN_100034b3(...);
undefined1 FUN_100034d1(void);
extern undefined1 FUN_100034d1(...);
extern undefined1 FUN_100034d1(...);
void FUN_100034e5(void);
extern void FUN_100034e5(...);
extern void FUN_100034e5(...);
undefined4 FUN_1000350d(char *param_1);
extern undefined4 FUN_1000350d(...);
extern undefined4 FUN_1000350d(...);
void __fastcall FUN_10003512(undefined4 *param_1);
extern void __fastcall FUN_10003512(...);
extern void __fastcall FUN_10003512(...);
undefined1 __fastcall FUN_10003521(int param_1);
extern undefined1 __fastcall FUN_10003521(...);
extern undefined1 __fastcall FUN_10003521(...);
undefined1 FUN_1000352b(void);
extern undefined1 FUN_1000352b(...);
extern undefined1 FUN_1000352b(...);
undefined4 FUN_1000353f(undefined4 param_1);
extern undefined4 FUN_1000353f(...);
extern undefined4 FUN_1000353f(...);
undefined1 FUN_10003549(void);
extern undefined1 FUN_10003549(...);
extern undefined1 FUN_10003549(...);
undefined1 FUN_10003558(void);
extern undefined1 FUN_10003558(...);
extern undefined1 FUN_10003558(...);
void __fastcall FUN_1000358a(int param_1);
extern void __fastcall FUN_1000358a(...);
extern void __fastcall FUN_1000358a(...);
void _CSharp_delete_SCINfcDelegateSwigBase_4(int *param_1);
void __fastcall FUN_100035a3(int *param_1);
extern void __fastcall FUN_100035a3(...);
extern void __fastcall FUN_100035a3(...);
void FUN_100035b2(undefined4 param_1,undefined4 param_2);
extern void FUN_100035b2(...);
extern void FUN_100035b2(...);
void FUN_100035bc(void);
extern void FUN_100035bc(...);
extern void FUN_100035bc(...);
undefined1 FUN_100035c1(void);
extern undefined1 FUN_100035c1(...);
extern undefined1 FUN_100035c1(...);
undefined4 * __fastcall FUN_100035d5(int param_1);
extern undefined4 * __fastcall FUN_100035d5(...);
extern undefined4 * __fastcall FUN_100035d5(...);
undefined4 FUN_100035da(void);
extern undefined4 FUN_100035da(...);
extern undefined4 FUN_100035da(...);
undefined1 FUN_100035f8(void);
extern undefined1 FUN_100035f8(...);
extern undefined1 FUN_100035f8(...);
undefined4 FUN_100035fd(undefined4 param_1);
extern undefined4 FUN_100035fd(...);
extern undefined4 FUN_100035fd(...);
int * FUN_1000361b(int *param_1,undefined4 param_2,char *param_3);
extern int * FUN_1000361b(...);
extern int * FUN_1000361b(...);
undefined4 _CSharp_SCIPropertyBag_getIntProp__SWIG_0_8(int *param_1,ushort *param_2);
uint __fastcall FUN_1000366b(int param_1);
extern uint __fastcall FUN_1000366b(...);
extern uint __fastcall FUN_1000366b(...);
undefined2 __fastcall FUN_10003675(int param_1);
extern undefined2 __fastcall FUN_10003675(...);
extern undefined2 __fastcall FUN_10003675(...);
void FUN_1000368e(void);
extern void FUN_1000368e(...);
extern void FUN_1000368e(...);
undefined1 FUN_10003693(void);
extern undefined1 FUN_10003693(...);
extern undefined1 FUN_10003693(...);
void FUN_1000369d(void);
extern void FUN_1000369d(...);
extern void FUN_1000369d(...);
void FUN_100036a7(void);
extern void FUN_100036a7(...);
extern void FUN_100036a7(...);
void FUN_100036b6(void);
extern void FUN_100036b6(...);
extern void FUN_100036b6(...);
undefined4 FUN_100036bb(undefined1 *param_1);
extern undefined4 FUN_100036bb(...);
extern undefined4 FUN_100036bb(...);
bool FUN_100036f7(void);
extern bool FUN_100036f7(...);
extern bool FUN_100036f7(...);
undefined1 FUN_100036fc(void);
extern undefined1 FUN_100036fc(...);
extern undefined1 FUN_100036fc(...);
undefined2 __fastcall FUN_1000370b(int param_1);
extern undefined2 __fastcall FUN_1000370b(...);
extern undefined2 __fastcall FUN_1000370b(...);
void FUN_1000372e(void);
extern void FUN_1000372e(...);
extern void FUN_1000372e(...);
void __fastcall FUN_10003779(undefined4 *param_1);
extern void __fastcall FUN_10003779(...);
extern void __fastcall FUN_10003779(...);
undefined1 __fastcall FUN_1000378d(int param_1);
extern undefined1 __fastcall FUN_1000378d(...);
extern undefined1 __fastcall FUN_1000378d(...);
void FUN_1000379c(void);
extern void FUN_1000379c(...);
extern void FUN_1000379c(...);
undefined1 FUN_100037bf(void);
extern undefined1 FUN_100037bf(...);
extern undefined1 FUN_100037bf(...);
undefined1 FUN_100037c4(void);
extern undefined1 FUN_100037c4(...);
extern undefined1 FUN_100037c4(...);
void FUN_100037c9(void);
extern void FUN_100037c9(...);
extern void FUN_100037c9(...);
void __fastcall FUN_100037ce(int param_1);
extern void __fastcall FUN_100037ce(...);
extern void __fastcall FUN_100037ce(...);
void FUN_100037d3(undefined4 *param_1);
extern void FUN_100037d3(...);
extern void FUN_100037d3(...);
void _CSharp_delete_SCIServiceAccountFilter_4(int *param_1);
void FUN_10003800(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
extern void FUN_10003800(...);
extern void FUN_10003800(...);
int __fastcall FUN_1000381e(int param_1);
extern int __fastcall FUN_1000381e(...);
extern int __fastcall FUN_1000381e(...);
void __fastcall FUN_10003823(int param_1);
extern void __fastcall FUN_10003823(...);
extern void __fastcall FUN_10003823(...);
void FUN_10003828(void);
extern void FUN_10003828(...);
extern void FUN_10003828(...);
void __fastcall FUN_10003837(int param_1);
extern void __fastcall FUN_10003837(...);
extern void __fastcall FUN_10003837(...);
void FUN_1000385f(void);
extern void FUN_1000385f(...);
extern void FUN_1000385f(...);
undefined4 * __fastcall FUN_10003869(undefined4 *param_1);
extern undefined4 * __fastcall FUN_10003869(...);
extern undefined4 * __fastcall FUN_10003869(...);
void FUN_1000387d(void);
extern void FUN_1000387d(...);
extern void FUN_1000387d(...);
int __fastcall FUN_100038a5(int param_1);
extern int __fastcall FUN_100038a5(...);
extern int __fastcall FUN_100038a5(...);
void FUN_100038c3(void);
extern void FUN_100038c3(...);
extern void FUN_100038c3(...);
void __fastcall FUN_100038d7(int param_1);
extern void __fastcall FUN_100038d7(...);
extern void __fastcall FUN_100038d7(...);
undefined4 FUN_100038e6(undefined4 param_1);
extern undefined4 FUN_100038e6(...);
extern undefined4 FUN_100038e6(...);
void FUN_10003909(void);
extern void FUN_10003909(...);
extern void FUN_10003909(...);
undefined4 FUN_10003931(void);
extern undefined4 FUN_10003931(...);
extern undefined4 FUN_10003931(...);
void _CSharp_SCIWebsocketCallbackSwigBase_director_connect_24 (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6);
void FUN_1000395e(void);
extern void FUN_1000395e(...);
extern void FUN_1000395e(...);
void FUN_10003963(void);
extern void FUN_10003963(...);
extern void FUN_10003963(...);
void FUN_10003986(void);
extern void FUN_10003986(...);
extern void FUN_10003986(...);
void __fastcall FUN_100039b8(int param_1);
extern void __fastcall FUN_100039b8(...);
extern void __fastcall FUN_100039b8(...);
void __fastcall FUN_100039e0(int param_1);
extern void __fastcall FUN_100039e0(...);
extern void __fastcall FUN_100039e0(...);
void __fastcall FUN_100039f9(int param_1);
extern void __fastcall FUN_100039f9(...);
extern void __fastcall FUN_100039f9(...);
void __fastcall FUN_10003a17(int param_1);
extern void __fastcall FUN_10003a17(...);
extern void __fastcall FUN_10003a17(...);
void __fastcall FUN_10003a26(int param_1);
extern void __fastcall FUN_10003a26(...);
extern void __fastcall FUN_10003a26(...);
undefined4 FUN_10003a35(undefined4 param_1);
extern undefined4 FUN_10003a35(...);
extern undefined4 FUN_10003a35(...);
undefined1 FUN_10003a44(void);
extern undefined1 FUN_10003a44(...);
extern undefined1 FUN_10003a44(...);
void FUN_10003a58(undefined4 param_1,undefined4 param_2);
extern void FUN_10003a58(...);
extern void FUN_10003a58(...);
void FUN_10003a76(undefined4 *param_1);
extern void FUN_10003a76(...);
extern void FUN_10003a76(...);
void FUN_10003a7b(void);
extern void FUN_10003a7b(...);
extern void FUN_10003a7b(...);
void _CSharp_SCIDisplayType_getTheme_4(int *param_1);
// Reference entry 1000100a; body size 5 bytes.
#line 1 "ENTRY_1000100a"

undefined4 * __thiscall Recovered_Bulk::FUN_1000100a(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNowPlayingTransportSonosProgRadio);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCNowPlayingTransportSonosProgRadio);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNowPlayingTransportSonosProgRadio);
  thunk_FUN_11056710();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xf8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10001023; body size 5 bytes.
#line 1 "ENTRY_10001023"

undefined1 FUN_10001023(void)

{
  return (undefined1)(1);
}


// Reference entry 10001028; body size 5 bytes.
#line 1 "ENTRY_10001028"

undefined4 * __thiscall Recovered_Bulk::FUN_10001028(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  undefined4 *puVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  thunk_FUN_106da030(param_2);

  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    puVar1 = (undefined4 *)(param_1 + 0x23);
  }
  thunk_FUN_10cf2f30(puVar1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCQuickTuneWizard);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCQuickTuneWizard);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCQuickTuneWizard);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCQuickTuneWizard);
  *(undefined1 *)(param_1 + 0x3d) = 0;

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10001032; body size 5 bytes.
#line 1 "ENTRY_10001032"

void FUN_10001032(void)

{
  thunk_FUN_108a3300();
  return;
}


// Reference entry 1000103c; body size 5 bytes.
#line 1 "ENTRY_1000103c"

undefined4 * __thiscall Recovered_Bulk::FUN_1000103c(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2e94 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10001050; body size 5 bytes.
#line 1 "ENTRY_10001050"

undefined2 __fastcall FUN_10001050(int param_1)

{
  return (undefined2)(*(undefined2 *)(param_1 + 0x24));
}


// Reference entry 10001055; body size 5 bytes.
#line 1 "ENTRY_10001055"

uint __fastcall FUN_10001055(int *param_1)

{
  uint in_EAX;
  
  if (((*param_1 == 0) && (in_EAX = param_1[1], in_EAX != 0)) && (*(char *)(in_EAX + 300) == '\x02')
     ) {
    return (uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10001078; body size 5 bytes.
#line 1 "ENTRY_10001078"

undefined4 __thiscall Recovered_Bulk::FUN_10001078(undefined4 *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  if (param_2 != (undefined4 *)0x0) {
    switch(*param_2) {
    case 0:
      iVar1 = (int)(0);
      if (0 < (int)(*(int *)(param_1 + 0x70) - *(int *)(param_1 + 0x6c) & 0xfffffffcU)) {
        do {
          (**(code **)**(undefined4 **)(*(int *)(param_1 + 0x6c) + iVar1 * 4))(param_2[1]);
          iVar1 = (int)(iVar1 + 1);
        } while (iVar1 < *(int *)(param_1 + 0x70) - *(int *)(param_1 + 0x6c) >> 2);
        thunk_FUN_1148a50e(param_2,0xc);
        return (undefined4)(0);
      }
      break;
    case 1:
      iVar1 = (int)(0);
      if (0 < (int)(*(int *)(param_1 + 0x70) - *(int *)(param_1 + 0x6c) & 0xfffffffcU)) {
        do {
          (**(code **)(**(int **)(*(int *)(param_1 + 0x6c) + iVar1 * 4) + 4))(param_2[1]);
          iVar1 = (int)(iVar1 + 1);
        } while (iVar1 < *(int *)(param_1 + 0x70) - *(int *)(param_1 + 0x6c) >> 2);
        thunk_FUN_1148a50e(param_2,0xc);
        return (undefined4)(0);
      }
      break;
    case 2:
      iVar1 = (int)(0);
      if (0 < (int)(*(int *)(param_1 + 0x70) - *(int *)(param_1 + 0x6c) & 0xfffffffcU)) {
        do {
          (**(code **)(**(int **)(*(int *)(param_1 + 0x6c) + iVar1 * 4) + 8))(param_2[2]);
          iVar1 = (int)(iVar1 + 1);
        } while (iVar1 < *(int *)(param_1 + 0x70) - *(int *)(param_1 + 0x6c) >> 2);
        thunk_FUN_1148a50e(param_2,0xc);
        return (undefined4)(0);
      }
      break;
    case 3:
      iVar1 = (int)(0);
      if (0 < (int)(*(int *)(param_1 + 0x70) - *(int *)(param_1 + 0x6c) & 0xfffffffcU)) {
        do {
          (**(code **)(**(int **)(*(int *)(param_1 + 0x6c) + iVar1 * 4) + 0xc))(param_2[2]);
          iVar1 = (int)(iVar1 + 1);
        } while (iVar1 < *(int *)(param_1 + 0x70) - *(int *)(param_1 + 0x6c) >> 2);
        thunk_FUN_1148a50e(param_2,0xc);
        return (undefined4)(0);
      }
      break;
    case 4:
      iVar1 = (int)(0);
      if (0 < (int)(*(int *)(param_1 + 0x70) - *(int *)(param_1 + 0x6c) & 0xfffffffcU)) {
        do {
          (**(code **)(**(int **)(*(int *)(param_1 + 0x6c) + iVar1 * 4) + 0x10))(param_2[2]);
          iVar1 = (int)(iVar1 + 1);
        } while (iVar1 < *(int *)(param_1 + 0x70) - *(int *)(param_1 + 0x6c) >> 2);
      }
    }
    thunk_FUN_1148a50e(param_2,0xc);
  }
  return (undefined4)(0);
}


// Reference entry 10001087; body size 5 bytes.
#line 1 "ENTRY_10001087"

void __fastcall FUN_10001087(undefined4 *param_1)

{
 try {
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar4 = (uint)(DAT_12126b84);

  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  *param_1 = (undefined4)(0);
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)*puVar1);
    puVar3 = (undefined4 *)((undefined4 *)puVar1[1]);

    if ((puVar3 != (undefined4 *)0x0) && (iVar5 = thunk_FUN_1123fcd0(puVar3 + 1,uVar4), iVar5 == 0))
    {
      (**(code **)*puVar3)(1);
    }

    thunk_FUN_1148a50e(puVar1,8);
    puVar1 = (undefined4 *)(puVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10001091; body size 5 bytes.
#line 1 "ENTRY_10001091"

undefined1 FUN_10001091(void)

{
  return (undefined1)(0);
}


// Reference entry 100010a5; body size 5 bytes.
#line 1 "ENTRY_100010a5"

undefined4 * __thiscall Recovered_Bulk::FUN_100010a5(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a4b80 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 100010b4; body size 5 bytes.
#line 1 "ENTRY_100010b4"

undefined4 * __thiscall Recovered_Bulk::FUN_100010b4(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 100010dc; body size 5 bytes.
#line 1 "ENTRY_100010dc"

undefined4 * __thiscall Recovered_Bulk::FUN_100010dc(byte param_2)
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


// Reference entry 100010e1; body size 5 bytes.
#line 1 "ENTRY_100010e1"

void __fastcall FUN_100010e1(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = (int)(*param_1);
  uVar3 = (uint)(param_1[1] - iVar1 & 0xfffffffc);
  iVar2 = (int)(iVar1);
  if (0xfff < uVar3) {
    iVar2 = (int)(*(int *)(iVar1 + -4));
    uVar3 = (uint)(uVar3 + 0x23);
    if (0x1f < (iVar1 - iVar2) - 4U) {
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1148a50e(iVar2,uVar3);
  *param_1 = (int)(0);
  param_1[1] = (int)(0);
  param_1[2] = (int)(0);
  return;
}


// Reference entry 100010eb; body size 5 bytes.
#line 1 "ENTRY_100010eb"

void FUN_100010eb(undefined4 *param_1,char *param_2,char param_3)

{
 try {
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  char acStack_20 [12];
  uint uStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;

  uStack_14 = (uint)(DAT_12126b84);

  pcVar5 = (char *)(param_2);
  if (param_2 == (char *)0x0) {
    pcVar5 = (char *)("");
  }
  puVar8 = (undefined4 *)(param_1);
  if (*pcVar5 == '\0') {
    *param_1 = (undefined4)(param_2);
    if ((param_2 != (char *)0x0) && (*(int *)(param_2 + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0(param_2 + -0x10,uStack_14);
      puVar8 = (undefined4 *)(param_1);
    }

  }
  else {
    pcVar6 = (char *)(pcVar5 + 1);
    if (param_3 == '\0') {
      pcVar6 = (char *)(pcVar5);
    }
    pcVar5 = (char *)(pcVar6);
    do {
      cVar1 = (char)(*pcVar5);
      pcVar5 = (char *)(pcVar5 + 1);
    } while (cVar1 != '\0');
    if ((uint)((int)pcVar5 - (int)(pcVar6 + 1)) < 9) {
      *param_1 = (undefined4)(param_2);
      if ((param_2 != (char *)0x0) && (*(int *)(param_2 + -0x10) < 0xffff)) {
        thunk_FUN_1123fce0(param_2 + -0x10,uStack_14);
        puVar8 = (undefined4 *)(param_1);
      }
      thunk_FUN_101ba300();
      goto LAB_1106f640;
    }
    iVar7 = (int)(0);
    do {
      iVar3 = (int)(isxdigit((int)pcVar6[iVar7]));
      if (iVar3 == 0) {
        *param_1 = (undefined4)(param_2);
        if ((param_2 != (char *)0x0) && (*(int *)(param_2 + -0x10) < 0xffff)) {
          thunk_FUN_1123fce0(param_2 + -0x10);
        }

        goto LAB_1106f600;
      }
      iVar7 = (int)(iVar7 + 1);
    } while (iVar7 < 8);
    thunk_FUN_1145c250(acStack_20,pcVar6,9);
    uVar4 = (ulong)(strtoul(acStack_20,(char **)0x0,0x10));
    if ((uVar4 & 0xe0000000) == 0) {
      if (param_3 == '\0') {
        thunk_FUN_101b9a40(pcVar6 + 8);
        thunk_FUN_101ba300();
      }
      else {
        thunk_FUN_101b9a40(pcVar6 + 9);
        thunk_FUN_101ba300();
      }
      goto LAB_1106f640;
    }
    *param_1 = (undefined4)(param_2);
    if ((param_2 != (char *)0x0) && (*(int *)(param_2 + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0(param_2 + -0x10);
    }

  }
LAB_1106f600:
  if ((param_2 != (char *)0x0) && (*(int *)(param_2 + -0x10) < 0xffff)) {
    iVar7 = (int)(thunk_FUN_1123fcd0(param_2 + -0x10));
    if (iVar7 == 0) {
      uVar2 = (undefined4)(*(undefined4 *)(param_2 + -4));
      param_2[-0xffffffff00000008] = (char)('\0');
      param_2[-0xffffffff00000007] = (char)('\0');
      param_2[-0xffffffff00000006] = (char)('\0');
      param_2[-0xffffffff00000005] = (char)('\0');
      param_2[-0xffffffff0000000c] = (char)('\0');
      param_2[-0xffffffff0000000b] = (char)('\0');
      param_2[-0xffffffff0000000a] = (char)('\0');
      param_2[-0xffffffff00000009] = (char)('\0');
      thunk_FUN_113cfb70(param_2,uVar2);
      free(param_2 + -0x10);
    }
  }
LAB_1106f640:

  thunk_FUN_1148ac28(puVar8);
  return;

 } catch (...) { }
}


// Reference entry 100010f5; body size 5 bytes.
#line 1 "ENTRY_100010f5"

void FUN_100010f5(void)

{
  return;
}


// Reference entry 10001104; body size 5 bytes.
#line 1 "ENTRY_10001104"

void _CSharp_SCIController_subscribe__SWIG_1_12(int *param_1,undefined4 param_2,int param_3)

{
                    
  (**(code **)(*param_1 + 0x20))(param_2,param_3 != 0);
  return;
}


// Reference entry 1000110e; body size 5 bytes.
#line 1 "ENTRY_1000110e"

int * __thiscall Recovered_Bulk::FUN_1000110e(int *param_2,uint *param_3)
{
  int *param_1 = (int *)this;
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = (int)(*param_1);
  puVar2 = (undefined4 *)(*(undefined4 **)(iVar3 + 4));
  *param_2 = (int)((int)puVar2);
  param_2[1] = (int)(0);
  param_2[2] = (int)(iVar3);
  if (*(char *)((int)puVar2 + 0xd) == '\0') {
    uVar1 = (uint)(*param_3);
    do {
      *param_2 = (int)((int)puVar2);
      if (((uint)puVar2[4] < uVar1) || ((puVar2[4] == uVar1 && ((uint)puVar2[5] < param_3[1])))) {
        puVar2 = (undefined4 *)((undefined4 *)puVar2[2]);
        iVar3 = (int)(0);
      }
      else {
        param_2[2] = (int)((int)puVar2);
        iVar3 = (int)(1);
        puVar2 = (undefined4 *)((undefined4 *)*puVar2);
      }
      param_2[1] = (int)(iVar3);
    } while (*(char *)((int)puVar2 + 0xd) == '\0');
  }
  return (int *)(param_2);
}


// Reference entry 1000112c; body size 5 bytes.
#line 1 "ENTRY_1000112c"

void __thiscall Recovered_Bulk::FUN_1000112c(undefined4 param_2,undefined8 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0x10) + 0x34))(param_2,param_3);
  return;
}


// Reference entry 10001131; body size 5 bytes.
#line 1 "ENTRY_10001131"

void __fastcall FUN_10001131(int param_1)

{
                    
                    
  (**(code **)(*(int *)(param_1 + 0xc) + 8))();
  return;
}


// Reference entry 10001186; body size 5 bytes.
#line 1 "ENTRY_10001186"

undefined4 __thiscall Recovered_Bulk::FUN_10001186(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103e0810();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 10001195; body size 5 bytes.
#line 1 "ENTRY_10001195"

void FUN_10001195(undefined4 param_1)

{
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_c = (undefined4)(param_1);
  uStack_8 = (undefined4)(0);
  thunk_FUN_112f4790(&uStack_c,1,0);
  return;
}


// Reference entry 100011a9; body size 5 bytes.
#line 1 "ENTRY_100011a9"

void FUN_100011a9(void)

{
  thunk_FUN_1115e4d0();
  return;
}


// Reference entry 100011b3; body size 5 bytes.
#line 1 "ENTRY_100011b3"

undefined4 __fastcall FUN_100011b3(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)((**(code **)(*param_1 + 0x20))());
  return (undefined4)(*(undefined4 *)(iVar1 + 0x13c));
}


// Reference entry 100011bd; body size 5 bytes.
#line 1 "ENTRY_100011bd"

void FUN_100011bd(void)

{
  thunk_FUN_10fda4e0();
  return;
}


// Reference entry 100011cc; body size 5 bytes.
#line 1 "ENTRY_100011cc"

void FUN_100011cc(void)

{
  thunk_FUN_10d02790();
  return;
}


// Reference entry 100011e5; body size 5 bytes.
#line 1 "ENTRY_100011e5"

void FUN_100011e5(void)

{
  return;
}


// Reference entry 100011ea; body size 5 bytes.
#line 1 "ENTRY_100011ea"

undefined4 * __thiscall Recovered_Bulk::FUN_100011ea(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 100011f9; body size 5 bytes.
#line 1 "ENTRY_100011f9"

void FUN_100011f9(void)

{
  thunk_FUN_10657ea0();
  return;
}


// Reference entry 10001203; body size 5 bytes.
#line 1 "ENTRY_10001203"

void FUN_10001203(void)

{
  thunk_FUN_1057caa0();
  return;
}


// Reference entry 10001212; body size 5 bytes.
#line 1 "ENTRY_10001212"

void __fastcall FUN_10001212(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piStack_4;
  
  iVar2 = (int)(*param_1);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 8) != 0)) {
    piVar1 = (int *)((int *)(iVar2 + 4));
    piStack_4 = (int *)(param_1);
    thunk_FUN_104f8cb0(piVar1,*(undefined4 *)(iVar2 + 4));
    *(int *)*piVar1 = (int)(*piVar1);
    *(int *)(*piVar1 + 4) = *piVar1;
    *(undefined4 *)(iVar2 + 8) = 0;
    piStack_4 = (int *)((int *)*piVar1);
    thunk_FUN_104f9920(*(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(iVar2 + 0x10),&piStack_4);
  }
  return;
}


// Reference entry 10001221; body size 5 bytes.
#line 1 "ENTRY_10001221"

int __thiscall Recovered_Bulk::FUN_10001221(int param_2,int *param_3)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  undefined4 uVar2;
  int aiStack_50 [9];
  int *piStack_2c;
  int iStack_28;
  int *piStack_24;
  int *piStack_20;
  int *piStack_1c;
  int *piStack_18;
  int iStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;

  piStack_18 = (int *)(aiStack_50);

  iStack_14 = (int)(param_2);
  iStack_28 = (int)(param_2);
  piStack_24 = (int *)(param_3);
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 4))(DAT_12126b84 );
  }
  piStack_2c = (int *)((int *)0x0);
  *(unsigned char *)((char *)&uStack_8 + 0) = 2;
  piVar1 = (int *)(operator_new(0xc));
  *piVar1 = (int)((int)(uint)&ghidra_vftable_std_Func_impl_no_alloc);
  piStack_20 = (int *)(piVar1 + 1);
  *(unsigned char *)((char *)&uStack_8 + 0) = 3;
  *piStack_20 = (int)(iStack_14);
  piVar1[2] = (int)((int)param_3);
  piStack_1c = (int *)(piVar1);
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 4))();
  }
  *(unsigned char *)((char *)&uStack_8 + 0) = 4;
  piStack_2c = (int *)(piVar1);
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))();
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(6)));
  piStack_20 = (int *)((int *)param_1);
  if (piStack_2c != (int *)0x0) {
    uVar2 = (undefined4)((**(code **)*piStack_2c)(param_1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
    if (piStack_2c != (int *)0x0) {
      (**(code **)(*piStack_2c + 0x10))(piStack_2c != (int *)(aiStack_50));
    }
  }

  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))();
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 10001235; body size 5 bytes.
#line 1 "ENTRY_10001235"

undefined4 _CSharp_SCIDateTimeSettingsProperty_SWIGUpcast_4(undefined4 param_1)

{
                    
  return (undefined4)(param_1);
}


// Reference entry 1000123f; body size 5 bytes.
#line 1 "ENTRY_1000123f"

void __fastcall FUN_1000123f(int param_1)

{
  undefined1 auStack_20 [28];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)auStack_20);
  if (*(code **)(param_1 + 0x94) != (code *)0x0) {
    (**(code **)(param_1 + 0x94))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIBrowseItemSwigBase::isParentOfSearch");
                    
  _CxxThrowException(auStack_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10001244; body size 5 bytes.
#line 1 "ENTRY_10001244"

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */ void __thiscall Recovered_Bulk::FUN_10001244(undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                  undefined4 param_13,undefined4 param_14,undefined4 param_15)
{
  int param_1 = (int )this;
 try {
  bool bVar1;
  int iVar2;
  undefined4 ****ppppuVar3;
  uint uVar4;
  undefined1 auStack_c358 [42248];
  undefined1 auStack_1e50 [7708];
  undefined4 uStack_34;
  undefined4 ***apppuStack_2c [4];
  undefined4 uStack_1c;
  uint uStack_18;
  uint uStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uStack_14 = (uint)(DAT_12126b84);

  if ((*(char *)(param_1 + 0x338) == '\0') || (*(char *)(param_1 + 0xcc) == '\0')) {
    bVar1 = (bool)(false);
  }
  else {
    bVar1 = (bool)(true);
  }
  iVar2 = (int)(0xcc);
  if (!bVar1) {
    iVar2 = (int)(0xc);
  }
  thunk_FUN_111c32e0(iVar2 + param_1,"urn:schemas-upnp-org:service:AVTransport:1","GetPositionInfo",
                     param_1 + 0x18c,*(undefined4 *)(param_1 + 0x64c),
                     *(undefined4 *)(param_1 + 0x650),0,0);

  thunk_FUN_11204720(apppuStack_2c);
  uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(1)));
  ppppuVar3 = (undefined4 ****)(apppuStack_2c);
  if (0xf < uStack_18) {
    ppppuVar3 = (undefined4 ****)((undefined4 ****)apppuStack_2c[0]);
  }
  thunk_FUN_111c66d0(ppppuVar3);
  thunk_FUN_11204570(auStack_1e50);
  thunk_FUN_112045a0(auStack_c358);
  thunk_FUN_11250000("InstanceID",0);
  thunk_FUN_1124f350(param_2);
  thunk_FUN_1124ff50("Track");
  thunk_FUN_112504b0(param_3);
  thunk_FUN_1124ff50("TrackDuration");
  thunk_FUN_112503c0(param_4,param_5);
  thunk_FUN_1124ff50("TrackMetaData");
  thunk_FUN_112503c0(param_6,param_7);
  thunk_FUN_1124ff50("TrackURI");
  thunk_FUN_112503c0(param_8,param_9);
  thunk_FUN_1124ff50("RelTime");
  thunk_FUN_112503c0(param_10,param_11);
  thunk_FUN_1124ff50("AbsTime");
  thunk_FUN_112503c0(param_12,param_13);
  thunk_FUN_1124ff50("RelCount");
  thunk_FUN_11250470(param_14);
  thunk_FUN_1124ff50("AbsCount");
  thunk_FUN_11250470(param_15);
  thunk_FUN_111c5fc0();
  *(undefined4 *)(param_1 + 0x66c) = uStack_34;
  if (0xf < uStack_18) {
    uVar4 = (uint)(uStack_18 + 1);
    ppppuVar3 = (undefined4 ****)((undefined4 ****)apppuStack_2c[0]);
    if (0xfff < uVar4) {
      ppppuVar3 = (undefined4 ****)((undefined4 ****)apppuStack_2c[0][-1]);
      uVar4 = (uint)(uStack_18 + 0x24);
      if (0x1f < (uint)((int)apppuStack_2c[0] + (-4 - (int)ppppuVar3))) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(ppppuVar3,uVar4);
  }


  apppuStack_2c[0] = (undefined4 ***)((undefined4 ***)((uint)apppuStack_2c[0] & 0xffffff00));
  thunk_FUN_1124ef40();
  thunk_FUN_1124f0e0();
  thunk_FUN_1124d790();
  thunk_FUN_1125acd0();
  thunk_FUN_1124a3f0();

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 1000125d; body size 5 bytes.
#line 1 "ENTRY_1000125d"

undefined4 * __thiscall Recovered_Bulk::FUN_1000125d(undefined4 *param_2)
{
  int *param_1 = (int *)this;
 try {
  int *piVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  iVar3 = (int)((**(code **)(*param_1 + 0x40))(DAT_12126b84 ));
  if (iVar3 != 0) {
    piVar4 = (int *)((int *)(**(code **)(*param_1 + 0x40))());
    if (piVar4[0x15] != 0) {
      cVar2 = (char)((**(code **)(*piVar4 + 0x18))());
      if ((cVar2 != '\0') && (*(int *)(piVar4[0x15] + 0x34) != 0)) {
        piVar4 = (int *)(operator_new(0x48));

        if (piVar4 == (int *)0x0) {
          piVar4 = (int *)((int *)0x0);
        }
        else {
          iVar3 = (int)(thunk_FUN_110b9fc0());
          *piVar4 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
          piVar4[1] = (int)(0);
          g_lSCObjCount = (int)(g_lSCObjCount + 1);
          piVar1 = (int *)(piVar4 + 2);
          *(unsigned char *)((char *)&uStack_8 + 0) = 1;
          thunk_FUN_11240650();
          *piVar1 = (int)((int)(uint)&ghidra_vftable_RControlAIOOpCB);
          *piVar4 = (int)((int)(uint)&ghidra_vftable_SCOpImpl);
          *piVar1 = (int)((int)(uint)&ghidra_vftable_SCOpImpl);
          piVar4[3] = (int)(0);
          piVar4[4] = (int)(0);
          piVar4[5] = (int)((int)(uint)&ghidra_vftable_RControlAIOOpRefBase);
          uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(4)));
          piVar4[6] = (int)(iVar3);
          if (iVar3 != 0) {
            thunk_FUN_1123fce0(iVar3 + 4);
          }
          piVar4[7] = (int)(0);
          piVar4[5] = (int)((int)(uint)&ghidra_vftable_RControlAIOOpRef);
          piVar4[8] = (int)(0);
          *(undefined2 *)(piVar4 + 9) = 1000;
          piVar4[10] = (int)(0);
          piVar4[0xb] = (int)(0);
          piVar4[0xc] = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
          piVar4[0xd] = (int)(0);
          g_lSCObjCount = (int)(g_lSCObjCount + 1);
          piVar4[0xc] = (int)((int)(uint)&ghidra_vftable_SCElapsedTimeMeasurement);
          piVar4[0xe] = (int)(0);
          piVar4[0xf] = (int)(0);
          piVar4[0xf] = (int)(0);
          piVar4[0x10] = (int)(0);
          piVar4[0x11] = (int)(0);
          *piVar4 = (int)((int)(uint)&ghidra_vftable_SCOpAVTransportGetRemainingSleepTimerDuration);
          *piVar1 = (int)((int)(uint)&ghidra_vftable_SCOpAVTransportGetRemainingSleepTimerDuration);
        }

        *param_2 = (undefined4)(piVar4);
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 4))();
        }

        return (undefined4 *)(param_2);
      }
    }
  }
  *param_2 = (undefined4)(0);

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 10001271; body size 5 bytes.
#line 1 "ENTRY_10001271"

undefined1 FUN_10001271(void)

{
  return (undefined1)(1);
}


// Reference entry 1000128a; body size 5 bytes.
#line 1 "ENTRY_1000128a"

undefined1 FUN_1000128a(void)

{
  return (undefined1)(0);
}


// Reference entry 1000128f; body size 5 bytes.
#line 1 "ENTRY_1000128f"

undefined4 __fastcall FUN_1000128f(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10001294; body size 5 bytes.
#line 1 "ENTRY_10001294"

void __fastcall FUN_10001294(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(*(int **)(param_1 + 0x18));
  if (piVar2 != (int *)0x0) {
    if (*(int *)(param_1 + 0x1c) != 0) {
      (**(code **)(*piVar2 + 0x10))();
      piVar2 = (int *)(*(int **)(param_1 + 0x18));
    }
    if (piVar2 != (int *)0x0) {
      iVar1 = (int)(thunk_FUN_1123fcd0(piVar2 + 1));
      if ((iVar1 == 0) && (piVar2 != (int *)0x0)) {
        (**(code **)*piVar2)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}


// Reference entry 100012a3; body size 5 bytes.
#line 1 "ENTRY_100012a3"

undefined1 FUN_100012a3(void)

{
  return (undefined1)(1);
}


// Reference entry 100012b7; body size 5 bytes.
#line 1 "ENTRY_100012b7"

void FUN_100012b7(void)

{
  thunk_FUN_1081b610();
  return;
}


// Reference entry 100012ee; body size 5 bytes.
#line 1 "ENTRY_100012ee"

void _CSharp_SCITime_getHour_4(int *param_1)

{
                    
  (**(code **)(*param_1 + 0x1c))();
  return;
}


// Reference entry 100012fd; body size 5 bytes.
#line 1 "ENTRY_100012fd"

void FUN_100012fd(void)

{
  thunk_FUN_10f8c170();
  return;
}


// Reference entry 1000130c; body size 5 bytes.
#line 1 "ENTRY_1000130c"

undefined4 FUN_1000130c(void)

{
  return (undefined4)(3);
}


// Reference entry 1000131b; body size 5 bytes.
#line 1 "ENTRY_1000131b"

void FUN_1000131b(void)

{
  thunk_FUN_10d61460();
  return;
}


// Reference entry 10001325; body size 5 bytes.
#line 1 "ENTRY_10001325"

void __thiscall Recovered_Bulk::FUN_10001325(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  
  if (param_2 == 1) {
    uVar1 = (uint)(1);
  }
  else {
    if (param_2 != 2) {
      if (param_2 == 3) {
        return;
      }
      thunk_FUN_112af4e0("connected_partners_cache",1,"No bit flag mapping for SCIVoiceService %i",
                         param_2);
      return;
    }
    uVar1 = (uint)(2);
  }
  if ((uVar1 & *(uint *)(param_1 + 0x30)) == 0) {
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | uVar1;
    thunk_FUN_10cf0be0();
  }
  return;
}


// Reference entry 1000132a; body size 5 bytes.
#line 1 "ENTRY_1000132a"

undefined4 __fastcall FUN_1000132a(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 8));
}


// Reference entry 10001339; body size 5 bytes.
#line 1 "ENTRY_10001339"

undefined4 * __thiscall Recovered_Bulk::FUN_10001339(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  undefined4 *puVar1;
  undefined4 uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  puVar1 = (undefined4 *)(operator_new(0xe0));

  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCSonanceDetectionWizardDetectionFailurePage);
    puVar1[4] = (undefined4)((uint)&ghidra_vftable_SCSonanceDetectionWizardDetectionFailurePage);
    puVar1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSonanceDetectionWizardDetectionFailurePage);
    puVar1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSonanceDetectionWizardDetectionFailurePage);

    return (undefined4 *)(puVar1);
  }

  return (undefined4 *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 1000133e; body size 5 bytes.
#line 1 "ENTRY_1000133e"

undefined4 FUN_1000133e(void)

{
  return (undefined4)(2);
}


// Reference entry 10001348; body size 5 bytes.
#line 1 "ENTRY_10001348"

undefined2 __fastcall FUN_10001348(int param_1)

{
  return (undefined2)(*(undefined2 *)(param_1 + 0x24));
}


// Reference entry 1000134d; body size 5 bytes.
#line 1 "ENTRY_1000134d"

undefined4 __fastcall FUN_1000134d(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(8));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (undefined4)((uint)&ghidra_vftable_RAsyncNullIOSession);
    puVar1[1] = (undefined4)(-(uint)(param_1 != 0) & param_1 + 0x60U);
    *(undefined4 **)(param_1 + 8) = puVar1;
    return (undefined4)(0);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  return (undefined4)(0);
}


// Reference entry 10001361; body size 5 bytes.
#line 1 "ENTRY_10001361"

undefined4 __fastcall FUN_10001361(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x78) != '\0') {
    return (undefined4)(*(undefined4 *)(param_1 + 0x7c));
  }
  if ((*(char *)(param_1 + 0x80) != '\0') && (*(char *)(param_1 + 0x88) != '\0')) {
    uVar1 = (undefined4)(thunk_FUN_114568e0(*(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x8c)));
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 10001366; body size 5 bytes.
#line 1 "ENTRY_10001366"

undefined4 * __thiscall Recovered_Bulk::FUN_10001366(byte param_2)
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


// Reference entry 1000136b; body size 5 bytes.
#line 1 "ENTRY_1000136b"

void __fastcall FUN_1000136b(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RITQHandler);
  return;
}


// Reference entry 10001370; body size 5 bytes.
#line 1 "ENTRY_10001370"

void __fastcall FUN_10001370(int param_1)

{
  SCThreadSafeInc((long *)(param_1 + 4));
  return;
}


// Reference entry 1000138e; body size 5 bytes.
#line 1 "ENTRY_1000138e"

void FUN_1000138e(void)

{
  thunk_FUN_110dcca0();
  return;
}


// Reference entry 10001393; body size 5 bytes.
#line 1 "ENTRY_10001393"

void FUN_10001393(void)

{
  thunk_FUN_10f450b0();
  return;
}


// Reference entry 1000139d; body size 5 bytes.
#line 1 "ENTRY_1000139d"

undefined1 FUN_1000139d(void)

{
  return (undefined1)(1);
}


// Reference entry 100013b1; body size 5 bytes.
#line 1 "ENTRY_100013b1"

undefined4 __thiscall Recovered_Bulk::FUN_100013b1(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10c36180();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xa0);
  }
  return (undefined4)(param_1);
}


// Reference entry 100013de; body size 5 bytes.
#line 1 "ENTRY_100013de"

undefined4 __thiscall Recovered_Bulk::FUN_100013de(undefined4 param_2)
{
  undefined4 param_1 = (undefined4 )this;
  int *piVar1;
  
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("DesiredName",0));
  (**(code **)(*piVar1 + 0xc))(param_2);
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("DesiredIcon",0));
  (**(code **)(*piVar1 + 0xc))(param_2);
  return (undefined4)(param_1);
}


// Reference entry 100013ed; body size 5 bytes.
#line 1 "ENTRY_100013ed"

undefined4 __fastcall FUN_100013ed(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 100013fc; body size 5 bytes.
#line 1 "ENTRY_100013fc"

void __fastcall FUN_100013fc(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1000140b; body size 5 bytes.
#line 1 "ENTRY_1000140b"

void __fastcall FUN_1000140b(int param_1)

{
  undefined1 auStack_20 [28];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)auStack_20);
  if (*(code **)(param_1 + 0x24) != (code *)0x0) {
    (**(code **)(param_1 + 0x24))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCLibSonarCallback::stopMotionData");
                    
  _CxxThrowException(auStack_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10001415; body size 5 bytes.
#line 1 "ENTRY_10001415"

undefined1 FUN_10001415(void)

{
  return (undefined1)(0);
}


// Reference entry 1000141f; body size 5 bytes.
#line 1 "ENTRY_1000141f"

undefined1 FUN_1000141f(void)

{
  return (undefined1)(1);
}


// Reference entry 1000142e; body size 5 bytes.
#line 1 "ENTRY_1000142e"

void FUN_1000142e(void)

{
  thunk_FUN_10dcae90();
  return;
}


// Reference entry 10001438; body size 5 bytes.
#line 1 "ENTRY_10001438"

void __thiscall Recovered_Bulk::FUN_10001438(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_104da1b0(param_2);
  if (*(int *)(param_1 + 0x10) == 0) {
    if (*(int **)(param_1 + 0xb0) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xb0) + 0x18))(*(undefined4 *)(param_1 + 0x94));
      *(undefined4 *)(param_1 + 0xb0) = 0;
    }
    if (*(int **)(param_1 + 0xb4) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xb4) + 0x18))(*(undefined4 *)(param_1 + 0xa0));
      *(undefined4 *)(param_1 + 0xb4) = 0;
    }
  }
  return;
}


// Reference entry 10001456; body size 5 bytes.
#line 1 "ENTRY_10001456"

void FUN_10001456(void)

{
  thunk_FUN_107510e0();
  return;
}


// Reference entry 10001488; body size 5 bytes.
#line 1 "ENTRY_10001488"

undefined4 * __thiscall Recovered_Bulk::FUN_10001488(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1000149c; body size 5 bytes.
#line 1 "ENTRY_1000149c"

void _CSharp_delete_SCIInAppPurchaseManager_4(int *param_1)

{
                    
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 100014c9; body size 5 bytes.
#line 1 "ENTRY_100014c9"

undefined4 FUN_100014c9(void)

{
  return (undefined4)(9);
}


// Reference entry 100014ce; body size 5 bytes.
#line 1 "ENTRY_100014ce"

undefined4 __thiscall Recovered_Bulk::FUN_100014ce(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 8) != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 8));
  }
  thunk_FUN_112af4e0("SCDeviceVolume",5,"rampToVolume() deviceID=\'%s\' volume=%d",puVar1,param_2);
  if (*(int *)(param_1 + 0xc) != 0) {
    if (*(int *)(*(int *)(param_1 + 0xc) + 0x3c) != 0) {
      thunk_FUN_11096670(0);
    }
    puVar1 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 8) != (undefined1 *)0x0) {
      puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 8));
    }
    thunk_FUN_11160810(puVar1,param_2);
    return (undefined4)(0);
  }
  return (undefined4)(1);
}


// Reference entry 100014e7; body size 5 bytes.
#line 1 "ENTRY_100014e7"

void FUN_100014e7(void)

{
  thunk_FUN_10d496f0();
  return;
}


// Reference entry 10001500; body size 5 bytes.
#line 1 "ENTRY_10001500"

void FUN_10001500(void)

{
  thunk_FUN_10ab61d0();
  return;
}


// Reference entry 10001505; body size 5 bytes.
#line 1 "ENTRY_10001505"

undefined4 * __thiscall Recovered_Bulk::FUN_10001505(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a483c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1000150a; body size 5 bytes.
#line 1 "ENTRY_1000150a"

void FUN_1000150a(void)

{
  thunk_FUN_109091d0();
  return;
}


// Reference entry 10001537; body size 5 bytes.
#line 1 "ENTRY_10001537"

void __fastcall FUN_10001537(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  return;
}


// Reference entry 1000155f; body size 5 bytes.
#line 1 "ENTRY_1000155f"

undefined4 __fastcall FUN_1000155f(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1000156e; body size 5 bytes.
#line 1 "ENTRY_1000156e"

void FUN_1000156e(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return;
}


// Reference entry 10001573; body size 5 bytes.
#line 1 "ENTRY_10001573"

void FUN_10001573(void)

{
  return;
}


// Reference entry 1000158c; body size 5 bytes.
#line 1 "ENTRY_1000158c"

void FUN_1000158c(void)

{
  thunk_FUN_10982f30();
  return;
}


// Reference entry 10001591; body size 5 bytes.
#line 1 "ENTRY_10001591"

undefined4 * __thiscall Recovered_Bulk::FUN_10001591(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTBecomeCoordinatorOfStandaloneGroupAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTBecomeCoordinatorOfStandaloneGroupAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTBecomeCoordinatorOfStandaloneGroupAIOOp);
  thunk_FUN_111c0af0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xdfd0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 100015a0; body size 5 bytes.
#line 1 "ENTRY_100015a0"

undefined4 FUN_100015a0(void)

{
  return (undefined4)(1);
}


// Reference entry 100015b9; body size 5 bytes.
#line 1 "ENTRY_100015b9"

undefined4 * __thiscall Recovered_Bulk::FUN_100015b9(byte param_2)
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


// Reference entry 100015be; body size 5 bytes.
#line 1 "ENTRY_100015be"

undefined1 __thiscall Recovered_Bulk::FUN_100015be(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  *(undefined4 *)(param_1 + 0x10) = param_4;
  *(undefined1 *)(param_1 + 0x14) = 0;
  (**(code **)(**(int **)(param_1 + 4) + 0xc))(param_1);
  return (undefined1)(*(undefined1 *)(param_1 + 0x14));
}


// Reference entry 100015c8; body size 5 bytes.
#line 1 "ENTRY_100015c8"

void FUN_100015c8(void)

{
  thunk_FUN_1046c6f0();
  return;
}


// Reference entry 100015dc; body size 5 bytes.
#line 1 "ENTRY_100015dc"

undefined4 * FUN_100015dc(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  int *piVar4;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar1 = (uint)(DAT_12126b84);

  pvVar2 = (void *)(operator_new(0x14));

  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)thunk_FUN_103be5e0(uVar1));
  }

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }

  if (piVar3 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
  }
  uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(3)));
  *param_1 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }

  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 100015f5; body size 5 bytes.
#line 1 "ENTRY_100015f5"

void FUN_100015f5(int *param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  void *_Src;
  byte *pbVar8;
  void *_Dst;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  bool bVar12;
  undefined1 auStack_3c [3];
  byte bStack_39;
  byte *pbStack_38;
  byte *pbStack_34;
  byte *pbStack_30;
  byte *pbStack_2c;
  byte *pbStack_28;
  byte *pbStack_24;
  byte *pbStack_20;
  byte *pbStack_1c;
  int *piStack_18;
  int iStack_14;
  int iStack_10;
  byte *apbStack_c [2];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)auStack_3c);
  iStack_14 = (int)(param_3);
  piStack_18 = (int *)(param_1);
  if ((param_2 != 0) && (param_1 != (int *)0x0)) {
    iVar7 = (int)(*param_1);
    iStack_10 = (int)(iVar7 * *(int *)(&DAT_11c08350 + param_3 * 4));
    bVar2 = (byte)(*(byte *)((int)param_1 + 0xb));
    uVar1 = (uint)(iStack_10 - 1);
    if (bVar2 == 1) {
      pbStack_30 = (byte *)((byte *)(param_4 & 0x10000));
      pbVar8 = (byte *)((byte *)((iVar7 - 1U >> 3) + param_2));
      pbVar10 = (byte *)((byte *)((uVar1 >> 3) + param_2));
      pbStack_24 = (byte *)((byte *)0x0);
      pbVar9 = (byte *)((byte *)(iVar7 - 1U & 7));
      pbStack_20 = (byte *)((byte *)((uint)(pbStack_30 == (byte *)0x0) * 2 + -1));
      apbStack_c[0] = (byte *)((byte *)0x0);
      if (pbStack_30 == (byte *)0x0) {
        apbStack_c[0] = (byte *)(&DAT_00000007);
      }
      pbStack_1c = (byte *)((byte *)(-(uint)(pbStack_30 != (byte *)0x0) & 7));
      pbVar4 = (byte *)(pbStack_38);
      if (iVar7 != 0) {
        if (pbStack_30 == (byte *)0x0) {
          pbVar9 = (byte *)((byte *)(7 - (int)pbVar9));
        }
        pbVar5 = (byte *)((byte *)(uVar1 & 7));
        if (pbStack_30 == (byte *)0x0) {
          pbVar5 = (byte *)((byte *)(7 - (int)(uVar1 & 7)));
        }
        do {
          pbStack_34 = (byte *)(pbVar8);
          pbStack_38 = (byte *)(pbVar9);
          bVar2 = (byte)(*pbStack_34);
          iVar7 = (int)(*(int *)(&DAT_11c08350 + param_3 * 4));
          pbVar9 = (byte *)(pbVar10);
          if (0 < iVar7) {
            do {
              pbStack_30 = (byte *)(pbVar5);
              *pbVar10 = (byte)((byte)(0x7f7f >> (7 - (byte)pbStack_30 & 0x1f)) & *pbVar10 |
                         (bVar2 >> ((byte)pbStack_38 & 0x1f) & 1) << ((byte)pbStack_30 & 0x1f));
              pbVar9 = (byte *)(pbVar10 + -1);
              pbVar5 = (byte *)(pbStack_1c);
              if (pbStack_30 != (byte *)(apbStack_c)[0]) {
                pbVar9 = (byte *)(pbVar10);
                pbVar5 = (byte *)(pbStack_30 + (int)pbStack_20);
              }
              iVar7 = (int)(iVar7 + -1);
              pbVar10 = (byte *)(pbVar9);
            } while (iVar7 != 0);
          }
          pbVar8 = (byte *)(pbStack_34 + -1);
          pbVar4 = (byte *)(pbStack_1c);
          if (pbStack_38 != (byte *)(apbStack_c)[0]) {
            pbVar8 = (byte *)(pbStack_34);
            pbVar4 = (byte *)(pbStack_38 + (int)pbStack_20);
          }
          pbStack_24 = (byte *)(pbStack_24 + 1);
          pbVar10 = (byte *)(pbVar9);
          pbVar9 = (byte *)(pbVar4);
          pbStack_2c = (byte *)(pbStack_34);
          pbStack_28 = (byte *)(pbStack_38);
        } while (pbStack_24 < (byte *)*param_1);
      }
    }
    else if (bVar2 == 2) {
      pbStack_20 = (byte *)((byte *)((iVar7 - 1U >> 2) + param_2));
      uVar11 = (uint)(iVar7 - 1U & 3);
      uVar3 = (uint)(uVar1 & 3);
      if ((param_4 & 0x10000) == 0) {
        pbStack_28 = (byte *)((byte *)0x0);
        pbStack_34 = (byte *)((byte *)0x2);
        uVar11 = (uint)(3 - uVar11);
        uVar3 = (uint)(3 - uVar3);
        pbVar4 = (byte *)((byte *)0x6);
      }
      else {
        pbStack_28 = (byte *)((byte *)0x6);
        pbStack_34 = (byte *)((byte *)0xfffffffe);
        pbVar4 = (byte *)((byte *)0x0);
      }
      pbVar9 = (byte *)((byte *)(uVar3 * 2));
      pbStack_2c = (byte *)((byte *)(uVar11 * 2));
      pbStack_1c = (byte *)((byte *)0x0);
      pbVar10 = (byte *)((byte *)((uVar1 >> 2) + param_2));
      pbVar8 = (byte *)(pbStack_34);
      if (*param_1 != 0) {
        do {
          apbStack_c[0] = (byte *)(pbStack_20);
          pbStack_24 = (byte *)(pbStack_2c);
          bStack_39 = (byte)(*apbStack_c[0] >> ((byte)pbStack_24 & 0x1f) & 3);
          pbVar5 = (byte *)(pbVar10);
          pbVar6 = (byte *)((byte *)*(int *)(&DAT_11c08350 + param_3 * 4));
          if (0 < *(int *)(&DAT_11c08350 + param_3 * 4)) {
            do {
              pbStack_30 = (byte *)(pbVar6);
              pbVar6 = (byte *)(pbStack_34 + (int)pbVar9);
              *pbVar10 = (byte)((byte)(0x3f3f >> (6 - (byte)pbVar9 & 0x1f)) & *pbVar10 |
                         bStack_39 << ((byte)pbVar9 & 0x1f));
              bVar12 = (bool)((byte *)(pbVar9) != pbVar4);
              pbVar5 = (byte *)(pbVar10 + -1);
              pbVar9 = (byte *)(pbStack_28);
              if (bVar12) {
                pbVar5 = (byte *)(pbVar10);
                pbVar9 = (byte *)(pbVar6);
              }
              pbVar10 = (byte *)(pbVar5);
              pbVar6 = (byte *)((byte *)((int)pbStack_30 + -1));
            } while ((int)pbStack_30 + -1 != 0);
            pbStack_30 = (byte *)((byte *)0x0);
          }
          pbStack_1c = (byte *)(pbStack_1c + 1);
          pbStack_20 = (byte *)(apbStack_c[0] + -1);
          if ((byte *)(pbStack_24) != pbVar4) {
            pbStack_20 = (byte *)(apbStack_c[0]);
          }
          pbStack_2c = (byte *)(pbStack_28);
          if ((byte *)(pbStack_24) != pbVar4) {
            pbStack_2c = (byte *)(pbStack_34 + (int)pbStack_24);
          }
          pbVar10 = (byte *)(pbVar5);
        } while (pbStack_1c < (byte *)*param_1);
      }
    }
    else if (bVar2 == 4) {
      pbStack_1c = (byte *)((byte *)((iVar7 - 1U >> 1) + param_2));
      uVar11 = (uint)(iVar7 - 1U & 1);
      uVar3 = (uint)(uVar1 & 1);
      if ((param_4 & 0x10000) == 0) {
        pbStack_34 = (byte *)((byte *)0x0);
        uVar3 = (uint)(1 - uVar3);
        uVar11 = (uint)(1 - uVar11);
        pbStack_2c = (byte *)(&DAT_00000004);
        pbStack_28 = (byte *)(&DAT_00000004);
      }
      else {
        pbStack_34 = (byte *)(&DAT_00000004);
        pbStack_28 = (byte *)((byte *)0xfffffffc);
        pbStack_2c = (byte *)((byte *)0x0);
      }
      pbVar9 = (byte *)((byte *)(uVar3 * 4));
      pbStack_20 = (byte *)((byte *)0x0);
      pbVar4 = (byte *)((byte *)(uVar11 * 4));
      pbVar10 = (byte *)((byte *)((uVar1 >> 1) + param_2));
      pbVar8 = (byte *)(pbStack_34);
      if (*param_1 != 0) {
        do {
          apbStack_c[0] = (byte *)(pbStack_1c);
          pbStack_30 = (byte *)(pbVar4);
          bStack_39 = (byte)(*apbStack_c[0] >> ((byte)pbStack_30 & 0x1f) & 0xf);
          pbVar5 = (byte *)(pbVar10);
          pbVar4 = (byte *)((byte *)*(int *)(&DAT_11c08350 + param_3 * 4));
          if (0 < *(int *)(&DAT_11c08350 + param_3 * 4)) {
            do {
              pbStack_24 = (byte *)(pbVar4);
              pbVar4 = (byte *)(pbStack_28 + (int)pbVar9);
              *pbVar10 = (byte)((byte)(0xf0f >> (4 - (byte)pbVar9 & 0x1f)) & *pbVar10 |
                         bStack_39 << ((byte)pbVar9 & 0x1f));
              bVar12 = (bool)(pbVar9 != (byte *)(pbStack_2c));
              pbVar5 = (byte *)(pbVar10 + -1);
              pbVar9 = (byte *)(pbStack_34);
              if (bVar12) {
                pbVar5 = (byte *)(pbVar10);
                pbVar9 = (byte *)(pbVar4);
              }
              pbVar10 = (byte *)(pbVar5);
              pbVar4 = (byte *)((byte *)((int)pbStack_24 + -1));
            } while ((int)pbStack_24 + -1 != 0);
            pbStack_24 = (byte *)((byte *)0x0);
          }
          pbStack_20 = (byte *)(pbStack_20 + 1);
          pbStack_1c = (byte *)(apbStack_c[0] + -1);
          if (pbStack_30 != (byte *)(pbStack_2c)) {
            pbStack_1c = (byte *)(apbStack_c[0]);
          }
          pbVar4 = (byte *)(pbStack_34);
          if (pbStack_30 != (byte *)(pbStack_2c)) {
            pbVar4 = (byte *)(pbStack_28 + (int)pbStack_30);
          }
          pbVar10 = (byte *)(pbVar5);
        } while (pbStack_20 < (byte *)*param_1);
      }
    }
    else {
      uVar11 = (uint)((uint)(bVar2 >> 3));
      pbStack_38 = (byte *)((byte *)0x0);
      _Src = (void *)((void *)((iVar7 + -1) * uVar11 + param_2));
      _Dst = (void *)((void *)(uVar11 * uVar1 + param_2));
      pbVar4 = (byte *)(pbStack_38);
      pbVar8 = (byte *)(pbStack_34);
      if (iVar7 != 0) {
        do {
          pbVar9 = (byte *)(pbStack_38);
          memcpy(apbStack_c,_Src,uVar11);
          iVar7 = (int)(*(int *)(&DAT_11c08350 + iStack_14 * 4));
          if (0 < iVar7) {
            do {
              memcpy(_Dst,apbStack_c,uVar11);
              _Dst = (void *)((void *)((int)_Dst - uVar11));
              iVar7 = (int)(iVar7 + -1);
              pbVar9 = (byte *)(pbStack_38);
            } while (iVar7 != 0);
          }
          pbStack_38 = (byte *)(pbVar9 + 1);
          _Src = (void *)((void *)((int)_Src - uVar11));
          pbVar4 = (byte *)(pbStack_38);
          pbVar8 = (byte *)(pbStack_34);
        } while (pbStack_38 < (byte *)*piStack_18);
      }
    }
    pbStack_34 = (byte *)(pbVar8);
    pbStack_38 = (byte *)(pbVar4);
    *piStack_18 = (int)(iStack_10);
    if (7 < *(byte *)((int)piStack_18 + 0xb)) {
      piStack_18[1] = (int)((uint)(*(byte *)((int)piStack_18 + 0xb) >> 3) * iStack_10);
      thunk_FUN_1148ac28();
      return;
    }
    piStack_18[1] = (int)((uint)*(byte *)((int)piStack_18 + 0xb) * iStack_10 + 7 >> 3);
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 10001609; body size 5 bytes.
#line 1 "ENTRY_10001609"

undefined4 * __thiscall Recovered_Bulk::FUN_10001609(undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)
{
  undefined4 *param_1 = (undefined4 *)this;
  int iVar1;
  
  thunk_FUN_112859a0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RXMLParserBase);
  iVar1 = (int)(thunk_FUN_112c8a40(param_2,0,param_3,param_4,param_5,0,0,0));
  if (iVar1 == 0) {
    thunk_FUN_112b0270("xmlprs",3,"parser ctx allocation failed; parameters are not correct");
  }
  param_1[1] = (undefined4)(iVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 1000160e; body size 5 bytes.
#line 1 "ENTRY_1000160e"

undefined4 * __thiscall Recovered_Bulk::FUN_1000160e(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpGetTrackPositionInfo);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpGetTrackPositionInfo);
  thunk_FUN_11067870();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10001613; body size 5 bytes.
#line 1 "ENTRY_10001613"

undefined1 FUN_10001613(void)

{
  return (undefined1)(0);
}


// Reference entry 1000161d; body size 5 bytes.
#line 1 "ENTRY_1000161d"

void __thiscall Recovered_Bulk::FUN_1000161d(int *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_2 != *(int **)(param_1 + 0xc)) {
    piVar2 = (int *)(*(int **)(param_1 + 0x10));
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar2 + 8))();
    }
    *(int **)(param_1 + 0xc) = param_2;
    if (param_2 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      piVar2 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
      *(int **)(param_1 + 0x10) = piVar2;
      (**(code **)(*piVar2 + 4))();
    }
  }
  (**(code **)(*(int *)(param_1 + 0x30) + 0x14))();
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    uVar3 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 4))(param_1 + 8,param_3));
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x18) + 0xc))());
      if (cVar1 != '\0') {
        uVar3 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 8))());
        *(undefined4 *)(param_1 + 0x20) = uVar3;
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  return;
}


// Reference entry 10001631; body size 5 bytes.
#line 1 "ENTRY_10001631"

void FUN_10001631(void)

{
  thunk_FUN_10ac02f0();
  return;
}


// Reference entry 1000163b; body size 5 bytes.
#line 1 "ENTRY_1000163b"

undefined2 __fastcall FUN_1000163b(int param_1)

{
  return (undefined2)(*(undefined2 *)(param_1 + 0x24));
}


// Reference entry 10001640; body size 5 bytes.
#line 1 "ENTRY_10001640"

void FUN_10001640(void)

{
  thunk_FUN_109761b0();
  return;
}


// Reference entry 10001645; body size 5 bytes.
#line 1 "ENTRY_10001645"

undefined4 * __thiscall Recovered_Bulk::FUN_10001645(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  undefined4 *puVar1;
  undefined4 uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  puVar1 = (undefined4 *)(operator_new(0xf0));

  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCEthernetRemovalAskDevicePage);
    puVar1[4] = (undefined4)((uint)&ghidra_vftable_SCEthernetRemovalAskDevicePage);
    puVar1[0x23] = (undefined4)((uint)&ghidra_vftable_SCEthernetRemovalAskDevicePage);
    puVar1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCEthernetRemovalAskDevicePage);
    puVar1[0x38] = (undefined4)(0);
    uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(2)));
    thunk_FUN_10c5f430(0,0);
    *(undefined1 *)(puVar1 + 0x3b) = 0;

    return (undefined4 *)(puVar1);
  }

  return (undefined4 *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 10001654; body size 5 bytes.
#line 1 "ENTRY_10001654"

undefined4 * __thiscall Recovered_Bulk::FUN_10001654(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  thunk_FUN_106da030(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAccountEmailVerificationWizard);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAccountEmailVerificationWizard);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAccountEmailVerificationWizard);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAccountEmailVerificationWizard);
  param_1[0x3a] = (undefined4)(0);
  param_1[0x3b] = (undefined4)(0);
  param_1[0x3c] = (undefined4)(0);
  param_1[0x3d] = (undefined4)(0);
  param_1[0x3e] = (undefined4)(0);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10001668; body size 5 bytes.
#line 1 "ENTRY_10001668"

void __fastcall FUN_10001668(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x28) != 0) && (*(int **)(param_1 + 0x24) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x24) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x24));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x1c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x1c))(1);
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}


// Reference entry 1000166d; body size 5 bytes.
#line 1 "ENTRY_1000166d"

undefined1 __fastcall FUN_1000166d(int param_1)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = (undefined1)(thunk_FUN_11456fc0());
    return (undefined1)(uVar1);
  }
  return (undefined1)(0);
}


// Reference entry 10001677; body size 5 bytes.
#line 1 "ENTRY_10001677"

undefined4 __fastcall FUN_10001677(int *param_1)

{
  (**(code **)(*param_1 + 0xc))();
  return (undefined4)(0);
}


// Reference entry 1000167c; body size 5 bytes.
#line 1 "ENTRY_1000167c"

void __fastcall FUN_1000167c(int *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 1000169a; body size 5 bytes.
#line 1 "ENTRY_1000169a"

void FUN_1000169a(int param_1,int param_2)

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


// Reference entry 1000169f; body size 5 bytes.
#line 1 "ENTRY_1000169f"

void FUN_1000169f(undefined4 param_1,undefined4 param_2)

{
  FUN_11323860(param_1,param_2,6,0);
  return;
}


// Reference entry 100016a9; body size 5 bytes.
#line 1 "ENTRY_100016a9"

void __fastcall FUN_100016a9(int param_1)

{
  SCThreadSafeInc((long *)(param_1 + 4));
  return;
}


// Reference entry 100016cc; body size 5 bytes.
#line 1 "ENTRY_100016cc"

undefined4 __thiscall Recovered_Bulk::FUN_100016cc(undefined4 param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
 try {
  int *piVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piStack_18;
  int *piStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar3 = (int *)((int *)createSCActionFilterer());
  piVar1 = (int *)((int *)*piVar3);

  *piVar3 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(uVar2));
  }
  *(unsigned char *)((char *)&uStack_8 + 0) = 3;
  if (piStack_14 != (int *)0x0) {
    (**(code **)(*piStack_14 + 8))();
  }
  *(unsigned char *)((char *)&uStack_8 + 0) = 2;
  puVar4 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0xa0))(&piStack_18));
  *(unsigned char *)((char *)&uStack_8 + 0) = 4;
  (**(code **)(*piVar1 + 0x14))(param_2,*puVar4,param_3);
  uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(5)));
  if (piStack_18 != (int *)0x0) {
    (**(code **)(*piStack_18 + 8))();
  }

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return (undefined4)(param_2);

 } catch (...) { }
}


// Reference entry 100016d6; body size 5 bytes.
#line 1 "ENTRY_100016d6"

void FUN_100016d6(void)

{
  thunk_FUN_10b55cd0();
  return;
}


// Reference entry 100016e0; body size 5 bytes.
#line 1 "ENTRY_100016e0"

void FUN_100016e0(void)

{
  thunk_FUN_10a67bf0();
  return;
}


// Reference entry 100016e5; body size 5 bytes.
#line 1 "ENTRY_100016e5"

undefined1 FUN_100016e5(void)

{
  return (undefined1)(1);
}


// Reference entry 100016ea; body size 5 bytes.
#line 1 "ENTRY_100016ea"

void FUN_100016ea(void)

{
  thunk_FUN_10790880();
  return;
}


// Reference entry 100016f4; body size 5 bytes.
#line 1 "ENTRY_100016f4"

void __thiscall Recovered_Bulk::FUN_100016f4(undefined4 param_2)
{
  int param_1 = (int )this;
 try {
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  iVar1 = (int)(thunk_FUN_110828b0(DAT_12126b84 ));
  puVar7 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x28) != (undefined1 *)0x0) {
    puVar7 = (undefined1 *)(*(undefined1 **)(param_1 + 0x28));
  }
  iVar1 = (int)((**(code **)(*(int *)(iVar1 + 0x1c) + 4))(puVar7,1));
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)(operator_new(0xd7d0));

    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)((undefined4 *)0x0);
    }
    else {
      iVar1 = (int)(thunk_FUN_110cb6d0());
      iVar1 = (int)(*(int *)(iVar1 + 0x2c));
      uVar3 = (undefined4)((**(code **)(*(int *)(*(int *)(*(int *)(iVar1 + 4) + 4) + 4 + iVar1) + 0x48))());
      uVar11 = (undefined4)(0);
      uVar10 = (undefined4)(0);
      uVar9 = (undefined4)(2000);
      uVar8 = (undefined4)(2000);
      uVar4 = (undefined4)((**(code **)(*(int *)(*(int *)(*(int *)(iVar1 + 4) + 4) + iVar1 + 4) + 0x50))
                        (2000,2000,0,0));
      thunk_FUN_111c0760(uVar3,"urn:schemas-upnp-org:service:AudioIn:1","SetAudioInputAttributes",
                         uVar4,uVar8,uVar9,uVar10,uVar11);
      *puVar2 = (undefined4)((uint)&ghidra_vftable_RUpnpAISetAudioInputAttributesAIOOp);
      puVar2[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAISetAudioInputAttributesAIOOp);
      puVar2[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAISetAudioInputAttributesAIOOp);
    }

    puVar7 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 0x20) != (undefined1 *)0x0) {
      puVar7 = (undefined1 *)(*(undefined1 **)(param_1 + 0x20));
    }
    puVar6 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 0x1c) != (undefined1 *)0x0) {
      puVar6 = (undefined1 *)(*(undefined1 **)(param_1 + 0x1c));
    }
    piVar5 = (int *)((int *)thunk_FUN_1124ffa0("DesiredName",0));
    (**(code **)(*piVar5 + 0xc))(puVar6);
    piVar5 = (int *)((int *)thunk_FUN_1124ffa0("DesiredIcon",0));
    (**(code **)(*piVar5 + 0xc))(puVar7);
    thunk_FUN_102207b0(puVar2,param_1 + 8,param_2);
    *(undefined4 *)(param_1 + 0x6c) = param_2;
  }

  return;

 } catch (...) { }
}


// Reference entry 100016f9; body size 5 bytes.
#line 1 "ENTRY_100016f9"

void __fastcall FUN_100016f9(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RPresentationMap);
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_RPresentationMapCB);
  return;
}


// Reference entry 100016fe; body size 5 bytes.
#line 1 "ENTRY_100016fe"

undefined2 __fastcall FUN_100016fe(int param_1)

{
  return (undefined2)(*(undefined2 *)(param_1 + 0x1a));
}


// Reference entry 1000171c; body size 5 bytes.
#line 1 "ENTRY_1000171c"

undefined4 * __thiscall Recovered_Bulk::FUN_1000171c(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(*param_2);
  piVar1 = (int *)((int *)param_2[1]);
  param_1[1] = (undefined4)(piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1000173a; body size 5 bytes.
#line 1 "ENTRY_1000173a"

void __fastcall FUN_1000173a(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x2c) == 0) {
    if (*(int *)(param_1 + 0x38) != 0) {
      thunk_FUN_101badc0();
    }
  }
  else {
    if (*(int **)(param_1 + 0x28) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x28) + 0x10))();
      puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x28));
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
        if (iVar2 == 0) {
          (**(code **)*puVar1)(1);
        }
      }
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
    (**(code **)(**(int **)(param_1 + 0x40) + 0x100))(0);
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x44) + 0x30) = 0;
  }
  return;
}


// Reference entry 1000174e; body size 5 bytes.
#line 1 "ENTRY_1000174e"

undefined4 * __thiscall Recovered_Bulk::FUN_1000174e(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBridgeRemovalWizard);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCBridgeRemovalWizard);
  param_1[10] = (undefined4)((uint)&ghidra_vftable_SCBridgeRemovalWizard);
  param_1[0x12] = (undefined4)((uint)&ghidra_vftable_SCBridgeRemovalWizard);
  param_1[0x13] = (undefined4)((uint)&ghidra_vftable_SCBridgeRemovalWizard);
  param_1[0x34] = (undefined4)((uint)&ghidra_vftable_SCBridgeRemovalWizard);
  thunk_FUN_101f53d0();
  thunk_FUN_101f53d0();
  thunk_FUN_10f99a90(param_1 + 0x36,*(undefined4 *)(param_1[0x36] + 4));
  thunk_FUN_1148a50e(param_1[0x36],0x1c);
  param_1[0x34] = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  param_1[0x34] = (undefined4)((uint)&ghidra_vftable_SCIObj);
  thunk_FUN_10dd1440();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xf8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10001758; body size 5 bytes.
#line 1 "ENTRY_10001758"

undefined4 * __thiscall Recovered_Bulk::FUN_10001758(byte param_2)
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


// Reference entry 1000175d; body size 5 bytes.
#line 1 "ENTRY_1000175d"

void FUN_1000175d(void)

{
  return;
}


// Reference entry 10001776; body size 5 bytes.
#line 1 "ENTRY_10001776"

void FUN_10001776(void)

{
  thunk_FUN_104bc8a0();
  return;
}


// Reference entry 100017bc; body size 5 bytes.
#line 1 "ENTRY_100017bc"

void FUN_100017bc(void)

{
  thunk_FUN_11284360();
  thunk_FUN_111f3f50();
  return;
}


// Reference entry 100017cb; body size 5 bytes.
#line 1 "ENTRY_100017cb"

void __fastcall FUN_100017cb(int *param_1)

{
  thunk_FUN_10e0b4d0(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 100017ee; body size 5 bytes.
#line 1 "ENTRY_100017ee"

void FUN_100017ee(void)

{
  thunk_FUN_109ef900();
  return;
}


// Reference entry 100017f3; body size 5 bytes.
#line 1 "ENTRY_100017f3"

int __thiscall Recovered_Bulk::FUN_100017f3(byte param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)(*(int **)(param_1 + 0xec));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xf4);
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 100017fd; body size 5 bytes.
#line 1 "ENTRY_100017fd"

undefined4 * __thiscall Recovered_Bulk::FUN_100017fd(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a23b0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10001802; body size 5 bytes.
#line 1 "ENTRY_10001802"

void FUN_10001802(void)

{
  thunk_FUN_1062f3b0();
  return;
}


// Reference entry 10001816; body size 5 bytes.
#line 1 "ENTRY_10001816"

undefined4 __fastcall FUN_10001816(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10001820; body size 5 bytes.
#line 1 "ENTRY_10001820"

undefined4 _CSharp_SCILibrary_getMusicServer_4(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x34))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10001825; body size 5 bytes.
#line 1 "ENTRY_10001825"

undefined4 FUN_10001825(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0x67452301);
  param_1[3] = (undefined4)(0xefcdab89);
  param_1[4] = (undefined4)(0x98badcfe);
  param_1[5] = (undefined4)(0x10325476);
  param_1[6] = (undefined4)(0xc3d2e1f0);
  return (undefined4)(0);
}


// Reference entry 10001839; body size 5 bytes.
#line 1 "ENTRY_10001839"

void __fastcall FUN_10001839(int param_1)

{
  undefined4 uStack00000004;
  
  if (*(char *)(param_1 + 0x88) == '\0') {
    *(undefined4 *)(param_1 + 0x84) = 0;
    uStack00000004 = (undefined4)(1);
                    
                    
    (**(code **)(*(int *)(param_1 + -0x24) + 0x2c))();
    return;
  }
  return;
}


// Reference entry 10001848; body size 5 bytes.
#line 1 "ENTRY_10001848"

void __fastcall FUN_10001848(int param_1)

{
  int iStack00000004;
  
                    
                    
  iStack00000004 = (int)(param_1);
  (**(code **)(**(int **)(param_1 + 0xc) + 0x18))();
  return;
}


// Reference entry 10001866; body size 5 bytes.
#line 1 "ENTRY_10001866"

undefined4 * __thiscall Recovered_Bulk::FUN_10001866(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10001870; body size 5 bytes.
#line 1 "ENTRY_10001870"

undefined4 * __thiscall Recovered_Bulk::FUN_10001870(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  undefined4 *puVar1;
  undefined4 uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  puVar1 = (undefined4 *)(operator_new(0x100));

  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae0f0(param_1,param_2,param_3,param_4));
    uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(1)));
    thunk_FUN_106da030(uVar2);

    thunk_FUN_10cf2f30(puVar1 + 0x23);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCTVRemoteControlWizard);
    puVar1[4] = (undefined4)((uint)&ghidra_vftable_SCTVRemoteControlWizard);
    puVar1[0x23] = (undefined4)((uint)&ghidra_vftable_SCTVRemoteControlWizard);
    puVar1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCTVRemoteControlWizard);
    puVar1[0x3d] = (undefined4)(1);

    return (undefined4 *)(puVar1);
  }

  return (undefined4 *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 1000187a; body size 5 bytes.
#line 1 "ENTRY_1000187a"

undefined4 __thiscall Recovered_Bulk::FUN_1000187a(undefined4 param_2)
{
  int *param_1 = (int *)this;
 try {
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined1 auStack_b4 [32];
  undefined1 auStack_94 [32];
  void *pvStack_74;
  undefined1 *puStack_70;
  undefined4 uStack_6c;
  undefined1 auStack_68 [32];
  undefined1 auStack_48 [32];
  undefined **ppuStack_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 *puStack_14;
  undefined4 *puStack_10;
  int iStack_c;
  undefined4 uStack_8;


  (**(code **)(*param_1 + 8))(DAT_12126b84 ^ (uint)auStack_68);
  iVar2 = (int)(thunk_FUN_105ad8f0());
  uStack_8 = (undefined4)(DAT_121a37a8);
  thunk_FUN_105f5920(&uStack_8);
  uStack_8 = (undefined4)(DAT_121a37a4);

  thunk_FUN_105f5920(&uStack_8);
  uStack_8 = (undefined4)(DAT_121a37a0);
  *(unsigned char *)((char *)&uStack_6c + 0) = 1;
  thunk_FUN_105f5920(&uStack_8);
  uStack_8 = (undefined4)(DAT_121a379c);
  *(unsigned char *)((char *)&uStack_6c + 0) = 2;
  thunk_FUN_105f5920(&uStack_8);
  ppuStack_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTree);

  iStack_20 = (int)(0);

  iStack_18 = (int)(0);
  puStack_14 = (undefined4 *)((undefined4 *)0x0);
  puStack_10 = (undefined4 *)((undefined4 *)0x0);
  iStack_c = (int)(0);
  uStack_6c = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_6c + 1)) << 8 | (uint)(4)));
  piVar3 = (int *)((int *)thunk_FUN_106190a0(iVar2 == 6,auStack_48));
  piVar3 = (int *)((int *)(**(code **)(*piVar3 + 0xc))(iVar2 == 10,auStack_68));
  piVar3 = (int *)((int *)(**(code **)(*piVar3 + 0xc))(iVar2 == 0xb,auStack_94));
  piVar3 = (int *)((int *)(**(code **)(*piVar3 + 0x10))(auStack_b4));
  uVar4 = (undefined4)((**(code **)(*piVar3 + 4))());
  thunk_FUN_105f5a00(uVar4);
  puVar1 = (undefined4 *)(puStack_10);
  puVar6 = (undefined4 *)(puStack_14);
  if (puStack_14 != (undefined4 *)0x0) {
    for (; (undefined4 *)(puVar6) != puVar1; puVar6 = puVar6 + 8) {
      (**(code **)*puVar6)(0);
    }
    uVar5 = (uint)(iStack_c - (int)puStack_14 & 0xffffffe0);
    puVar6 = (undefined4 *)(puStack_14);
    if (0xfff < uVar5) {
      puVar6 = (undefined4 *)((undefined4 *)puStack_14[-1]);
      uVar5 = (uint)(uVar5 + 0x23);
      if (0x1f < (uint)((int)puStack_14 + (-4 - (int)puVar6))) goto LAB_108ee95c;
    }
    thunk_FUN_1148a50e(puVar6,uVar5);
    puStack_14 = (undefined4 *)((undefined4 *)0x0);
    puStack_10 = (undefined4 *)((undefined4 *)0x0);
    iStack_c = (int)(0);
  }
  if (iStack_20 != 0) {
    uVar5 = (uint)(iStack_18 - iStack_20 & 0xfffffffc);
    iVar2 = (int)(iStack_20);
    if (0xfff < uVar5) {
      iVar2 = (int)(*(int *)(iStack_20 + -4));
      uVar5 = (uint)(uVar5 + 0x23);
      if (0x1f < (iStack_20 - iVar2) - 4U) {
LAB_108ee95c:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar2,uVar5);
    iStack_20 = (int)(0);

    iStack_18 = (int)(0);
  }
  ppuStack_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();

  return (undefined4)(param_2);

 } catch (...) { }
}


// Reference entry 100018ac; body size 5 bytes.
#line 1 "ENTRY_100018ac"

void FUN_100018ac(void)

{
  thunk_FUN_10217af0();
  return;
}


// Reference entry 100018b1; body size 5 bytes.
#line 1 "ENTRY_100018b1"

void FUN_100018b1(void)

{
  return;
}


// Reference entry 100018b6; body size 5 bytes.
#line 1 "ENTRY_100018b6"

undefined1 _CSharp_SCIWifiDelegate_canStartScan_4(int *param_1)

{
  undefined1 uVar1;
  
                    
  uVar1 = (undefined1)((**(code **)(*param_1 + 0x28))());
  return (undefined1)(uVar1);
}


// Reference entry 100018bb; body size 5 bytes.
#line 1 "ENTRY_100018bb"

undefined1 _CSharp_SCIDeviceMusicEqualization_shouldShowCrossoverAdjust_4(int *param_1)

{
  undefined1 uVar1;
  
                    
  uVar1 = (undefined1)((**(code **)(*param_1 + 0x7c))());
  return (undefined1)(uVar1);
}


// Reference entry 100018c5; body size 5 bytes.
#line 1 "ENTRY_100018c5"

void __fastcall FUN_100018c5(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  return;
}


// Reference entry 100018d4; body size 5 bytes.
#line 1 "ENTRY_100018d4"

undefined4 __fastcall FUN_100018d4(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)((**(code **)(*param_1 + 0xe0))());
  if (iVar1 == 0) {
    return (undefined4)(0);
  }
  (**(code **)(*param_1 + 0xe4))();
  iVar1 = (int)(thunk_FUN_1113eb00("r:DirectControlIsSuspended"));
  if (((iVar1 == 0) && (uVar2 = thunk_FUN_11056ec0(), (uVar2 >> 3 & 1) == 0)) &&
     (uVar2 = thunk_FUN_11056ec0(), (uVar2 >> 2 & 1) == 0)) {
    return (undefined4)(0);
  }
  return (undefined4)(1);
}


// Reference entry 100018de; body size 5 bytes.
#line 1 "ENTRY_100018de"

void __thiscall Recovered_Bulk::FUN_100018de(undefined4 param_2)
{
  int param_1 = (int )this;
 try {
  undefined4 *puVar1;
  undefined1 *puVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  puVar1 = (undefined4 *)(operator_new(0x4494));

  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    puVar2 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 0x6150) != (undefined1 *)0x0) {
      puVar2 = (undefined1 *)(*(undefined1 **)(param_1 + 0x6150));
    }
    thunk_FUN_111c05a0(param_1 + 0x1c,-(uint)(param_1 + 0x1c != 0) & param_1 + 0x34U,puVar2,10000,
                       10000,0,0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_RHttpGetNoRedirectAIOOp);
    puVar1[0x18] = (undefined4)((uint)&ghidra_vftable_RHttpGetNoRedirectAIOOp);
    *(undefined1 *)(puVar1 + 0x1124) = 0;
  }

  thunk_FUN_102207b0(puVar1,-(uint)(param_1 != 0) & param_1 + 8U,param_2);

  return;

 } catch (...) { }
}


// Reference entry 100018fc; body size 5 bytes.
#line 1 "ENTRY_100018fc"

undefined1 FUN_100018fc(void)

{
  return (undefined1)(1);
}


// Reference entry 1000190b; body size 5 bytes.
#line 1 "ENTRY_1000190b"

undefined4 * __thiscall Recovered_Bulk::FUN_1000190b(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  undefined4 *puVar1;
  undefined4 uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  puVar1 = (undefined4 *)(operator_new(0xe0));

  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCDtlsTestEchoConnectingPage);
    puVar1[4] = (undefined4)((uint)&ghidra_vftable_SCDtlsTestEchoConnectingPage);
    puVar1[0x23] = (undefined4)((uint)&ghidra_vftable_SCDtlsTestEchoConnectingPage);
    puVar1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCDtlsTestEchoConnectingPage);

    return (undefined4 *)(puVar1);
  }

  return (undefined4 *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 1000192e; body size 5 bytes.
#line 1 "ENTRY_1000192e"

void FUN_1000192e(void)

{
  thunk_FUN_10444110();
  return;
}


// Reference entry 10001942; body size 5 bytes.
#line 1 "ENTRY_10001942"

void __fastcall FUN_10001942(int *param_1)

{
  thunk_FUN_10246170(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x28);
  return;
}


// Reference entry 10001951; body size 5 bytes.
#line 1 "ENTRY_10001951"

void __fastcall FUN_10001951(int *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 1000196f; body size 5 bytes.
#line 1 "ENTRY_1000196f"

void __thiscall Recovered_Bulk::FUN_1000196f(undefined4 param_2,short param_3)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  undefined1 *puStack_4d0;
  undefined1 auStack_4cc [52];
  undefined1 auStack_498 [16];
  undefined1 auStack_488 [128];
  undefined1 auStack_408 [1028];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)&puStack_4d0);
  pcVar6 = (char *)("object.container.sonos-needLocation");
  if (param_3 == 0) {
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x1704));
    puStack_4d0 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)puVar1[0x11] != (undefined1 *)0x0) {
      puStack_4d0 = (undefined1 *)((undefined1 *)puVar1[0x11]);
    }
    iVar4 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
    if ((iVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(param_1 + 0x1704) = 0;
    thunk_FUN_112462e0(&puStack_4d0,1,auStack_408,0x401);
    thunk_FUN_112462e0(&puStack_4d0,0,auStack_4cc,0x41);
    uVar3 = (undefined4)(thunk_FUN_1109aba0(0xcd,&DAT_1188465c,auStack_4cc));
    thunk_FUN_1128f650(auStack_488,0x80,uVar3);
    pcVar6 = (char *)("object.container.sonos-localRadio");
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_1109aba0(0xce,&DAT_11882ff0));
    uVar3 = (undefined4)(thunk_FUN_1109aba0(0xcd,&DAT_1188465c,uVar3));
    thunk_FUN_1128f650(auStack_488,0x80,uVar3);
  }
  uVar5 = (uint)(*(uint *)(param_1 + 0x170c));
  piVar2 = (int *)(*(int **)(param_1 + 0x1708));
  if ((*(uint *)(param_1 + 0x1714) <= uVar5) &&
     (*(uint *)(param_1 + 0x1710) < *(uint *)(param_1 + 0x1718))) {
    (**(code **)(*piVar2 + 0xc))(&DAT_119352e0,&DAT_118872c0,0,0xffffffff);
    (**(code **)(*piVar2 + 0x20))("http://purl.org/dc/elements/1.1/|title",auStack_498);
    (**(code **)(*piVar2 + 0x20))("urn:schemas-upnp-org:metadata-1-0/upnp/|class",pcVar6);
    (**(code **)(*piVar2 + 0x20))
              ("urn:schemas-upnp-org:metadata-1-0/upnp/|albumArtURI",
               "http://tunein.ws.sonos.com/Local_legacy.png");
    (**(code **)(*piVar2 + 0x2c))();
    *(int *)(param_1 + 0x1710) = *(int *)(param_1 + 0x1710) + 1;
    uVar5 = (uint)(*(uint *)(param_1 + 0x170c));
  }
  *(uint *)(param_1 + 0x170c) = uVar5 + 1;
  (**(code **)(**(int **)(param_1 + 0x10) + 0x10))(-(uint)(param_1 != 0) & param_1 + 0xcU);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 10001983; body size 5 bytes.
#line 1 "ENTRY_10001983"

undefined4 * __thiscall Recovered_Bulk::FUN_10001983(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar1 = (uint)(DAT_12126b84);

  pvVar2 = (void *)(operator_new(0x14));

  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)thunk_FUN_103be5e0(uVar1));
  }

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }

  if (piVar3 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
  }
  uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(3)));
  iVar5 = (int)(param_1 + 0x78);
  if (param_1 == 0x18) {
    iVar5 = (int)(0);
  }
  thunk_FUN_103be9e0(iVar5,0xffffffff);
  *param_2 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }

  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 10001988; body size 5 bytes.
#line 1 "ENTRY_10001988"

undefined2 __fastcall FUN_10001988(int param_1)

{
  return (undefined2)(*(undefined2 *)(param_1 + 0x24));
}


// Reference entry 1000198d; body size 5 bytes.
#line 1 "ENTRY_1000198d"

uint __fastcall FUN_1000198d(int param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 0x88) != (int *)0x0) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 0x88) + 0x70))());
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10001992; body size 5 bytes.
#line 1 "ENTRY_10001992"

undefined4 __thiscall Recovered_Bulk::FUN_10001992(int param_2)
{
  int param_1 = (int )this;
  int *_Dst;
  
  _Dst = (int *)(*(int **)(param_1 + 0x1c));
  if (_Dst != *(int **)(param_1 + 0x20)) {
    while (*(int *)(*_Dst + 0x14) != param_2) {
      _Dst = (int *)(_Dst + 1);
      if (_Dst == *(int **)(param_1 + 0x20)) {
        return (undefined4)(((uint)((int3)((uint)*(int *)(param_1 + 0x1c) >> 8)) << 8 | (uint)(*(int *)(param_1 + 0x1c) == *(int *)(param_1 + 0x20))));
      }
    }
    if (*(char *)(*_Dst + 0x40) == '\0') {
      *(undefined1 *)(param_1 + 0x28) = 0;
    }
    memmove(_Dst,_Dst + 1,*(int *)(param_1 + 0x20) - (int)(_Dst + 1));
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -4;
  }
  return (undefined4)(((uint)((int3)((uint)*(int *)(param_1 + 0x1c) >> 8)) << 8 | (uint)(*(int *)(param_1 + 0x1c) == *(int *)(param_1 + 0x20))));
}


// Reference entry 100019b0; body size 5 bytes.
#line 1 "ENTRY_100019b0"

void __fastcall FUN_100019b0(int param_1)

{
                    
                    
  (**(code **)(**(int **)(param_1 + 0xc4) + 0x40))();
  return;
}


// Reference entry 100019ba; body size 5 bytes.
#line 1 "ENTRY_100019ba"

undefined4 * __thiscall Recovered_Bulk::FUN_100019ba(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpFetchClientToken);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpFetchClientToken);
  thunk_FUN_103c2be0();
  thunk_FUN_103c1f90();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x6684);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 100019c9; body size 5 bytes.
#line 1 "ENTRY_100019c9"

int __fastcall FUN_100019c9(int param_1)

{
 try {
  int *piVar1;
  ushort uVar2;
  short sVar3;
  undefined4 uVar4;
  uint3 uVar5;
  int *piVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puStack_38;
  undefined4 *puStack_34;
  undefined4 uStack_2c;
  int *piStack_28;
  int *piStack_24;
  int iStack_20;
  int *piStack_1c;
  uint uStack_18;
  char cStack_11;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  iStack_20 = (int)(param_1);
  thunk_FUN_10436cd0(&piStack_24,DAT_12126b84 );

  uStack_18 = (uint)(thunk_FUN_10436ab0());
  uStack_18 = (uint)(uStack_18 & 0xffff);
  piVar6 = (int *)((int *)0x0);
  piStack_1c = (int *)((int *)0x0);
  thunk_FUN_1037f130(&puStack_38,9);
  uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(1)));
  puVar8 = (undefined4 *)(puStack_38);
  if (puStack_38 != (undefined4 *)(puStack_34)) {
    do {
      piVar1 = (int *)((int *)puVar8[1]);
      uStack_2c = (undefined4)(*puVar8);
      piStack_28 = (int *)(piVar1);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
      uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(2)));
      uVar2 = (ushort)(thunk_FUN_103238a0());
      if (uVar2 < (ushort)uStack_18) {
        uVar7 = (uint)(4);
      }
      else {
        sVar3 = (short)(thunk_FUN_103238a0());
        uVar7 = (uint)((sVar3 == (ushort)uStack_18) + 1);
      }
      piVar6 = (int *)((int *)(uVar7 | (uint)piStack_1c));
      *(unsigned char *)((char *)&uStack_8 + 0) = 3;
      if (piVar1 != (int *)0x0) {

        piStack_28 = (int *)((int *)0x0);
        (**(code **)(*piVar1 + 8))();
      }
      puVar8 = (undefined4 *)(puVar8 + 2);
      uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(1)));
      param_1 = (int)(iStack_20);
      piStack_1c = (int *)(piVar6);
    } while (puVar8 != (undefined4 *)(puStack_34));
  }
  thunk_FUN_101f53d0();

  if (piStack_24 != (int *)0x0) {
    (**(code **)(*piStack_24 + 8))();
  }

  thunk_FUN_10436cd0(&piStack_1c);

  uVar4 = (undefined4)(thunk_FUN_10436ab0());
  cStack_11 = (char)(*(short *)(param_1 + 0x834) == (short)uVar4);
  uVar5 = (uint3)((uint3)((uint)uVar4 >> 8));

  if (piStack_1c != (int *)0x0) {
    uVar4 = (undefined4)((**(code **)(*piStack_1c + 8))());
    uVar5 = (uint3)((uint3)((uint)uVar4 >> 8));
  }
  if ((piVar6 == (int *)&DAT_00000004) && (cStack_11 != '\0')) {

    return (int)(((uint)(uVar5) << 8 | (uint)(1)));
  }

  return (int)((uint)uVar5 << 8);

 } catch (...) { }
}


// Reference entry 100019dd; body size 5 bytes.
#line 1 "ENTRY_100019dd"

void _CSharp_SCISettingsSection_getStyle_4(int *param_1)

{
                    
  (**(code **)(*param_1 + 0x1c))();
  return;
}


// Reference entry 100019e7; body size 5 bytes.
#line 1 "ENTRY_100019e7"

void _CSharp_delete_SCIActionDelegate_4(int *param_1)

{
                    
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 10001a19; body size 5 bytes.
#line 1 "ENTRY_10001a19"

undefined4 FUN_10001a19(char *param_1)

{
  int iVar1;
  
  iVar1 = (int)(strncmp(param_1,"R:0/",4));
  if (iVar1 == 0) {
    return (undefined4)(1);
  }
  if ((*param_1 == 'H') && (iVar1 = strncmp(param_1 + 1,"R:0/",4), iVar1 == 0)) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 10001a1e; body size 5 bytes.
#line 1 "ENTRY_10001a1e"

int * __thiscall Recovered_Bulk::FUN_10001a1e(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x134));
  *param_2 = (int)((int)piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10001a23; body size 5 bytes.
#line 1 "ENTRY_10001a23"

undefined4 __thiscall Recovered_Bulk::FUN_10001a23(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10cbcd70();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68);
  }
  return (undefined4)(param_1);
}


// Reference entry 10001a3c; body size 5 bytes.
#line 1 "ENTRY_10001a3c"

void FUN_10001a3c(void)

{
  thunk_FUN_109f9f60();
  return;
}


// Reference entry 10001a4b; body size 5 bytes.
#line 1 "ENTRY_10001a4b"

void FUN_10001a4b(void)

{
  thunk_FUN_10838d70();
  return;
}


// Reference entry 10001a5a; body size 5 bytes.
#line 1 "ENTRY_10001a5a"

undefined4 * __thiscall Recovered_Bulk::FUN_10001a5a(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined4 uVar7;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0xc0));

  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    iVar4 = (int)(thunk_FUN_10eae150(uVar1));
    if (iVar4 == 0) {
      pvVar6 = (void *)(operator_new(0x10c));
      *(unsigned char *)((char *)&uStack_8 + 0) = 1;
      if (pvVar6 == (void *)0x0) {
        uVar5 = (undefined4)(0);
      }
      else {
        uVar5 = (undefined4)(uVar3);
        uVar7 = (undefined4)(thunk_FUN_1087e430(uVar3));
        uVar5 = (undefined4)(thunk_FUN_10eae0a0(uVar7,uVar5));
        uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(2)));
        uVar5 = (undefined4)(thunk_FUN_1087e440(uVar5));
      }

    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCAddProductIncompleteWirelessConnectSubwiz);
    puVar2[4] = (undefined4)((uint)&ghidra_vftable_SCAddProductIncompleteWirelessConnectSubwiz);
    puVar2[0x23] = (undefined4)((uint)&ghidra_vftable_SCAddProductIncompleteWirelessConnectSubwiz);
    puVar2[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAddProductIncompleteWirelessConnectSubwiz);

    return (undefined4 *)(puVar2);
  }

  return (undefined4 *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 10001a78; body size 5 bytes.
#line 1 "ENTRY_10001a78"

void FUN_10001a78(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(thunk_FUN_1145ddd0(param_1[1],*(undefined4 *)(param_1[1] + 0xc)));
  thunk_FUN_112a0b40(*param_1,uVar1);
  thunk_FUN_1145de30(param_1[1]);
  return;
}


// Reference entry 10001a87; body size 5 bytes.
#line 1 "ENTRY_10001a87"

void _CSharp_SCIBrowseItem_getResumeOffsetMillis_4(int *param_1)

{
                    
  (**(code **)(*param_1 + 0x84))();
  return;
}


// Reference entry 10001aa0; body size 5 bytes.
#line 1 "ENTRY_10001aa0"

undefined4 __fastcall FUN_10001aa0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x20));
}


// Reference entry 10001ac8; body size 5 bytes.
#line 1 "ENTRY_10001ac8"

undefined4 FUN_10001ac8(void)

{
  return (undefined4)(0);
}


// Reference entry 10001adc; body size 5 bytes.
#line 1 "ENTRY_10001adc"

void __fastcall FUN_10001adc(int *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)*param_1);
  if (piVar1 != (int *)0x0) {
    *param_1 = (int)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10001b2c; body size 5 bytes.
#line 1 "ENTRY_10001b2c"

void FUN_10001b2c(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  if (*(byte *)(param_1 + 0x155) < 8) {
    uVar1 = (uint)((uint)*(byte *)(param_1 + 0x155));
    iVar2 = (int)(-uVar1 + 8);
    *(undefined4 *)(param_1 + 0x2ac) = 0x11;
    thunk_FUN_11480a00(param_1,param_2 + 0x20 + uVar1,iVar2);
    *(undefined1 *)(param_1 + 0x155) = 8;
    iVar2 = (int)(thunk_FUN_11465e10(param_2 + 0x20,uVar1,iVar2));
    if (iVar2 != 0) {
      if ((uVar1 < 4) && (iVar2 = thunk_FUN_11465e10(param_2 + 0x20,uVar1,-uVar1 + 4), iVar2 != 0))
      {
                    
        thunk_FUN_1146c180(param_1,"Not a PNG file");
      }
                    
      thunk_FUN_1146c180(param_1,"PNG file corrupted by ASCII conversion");
    }
    if (uVar1 < 3) {
      *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 0x1000;
    }
  }
  return;
}


// Reference entry 10001b36; body size 5 bytes.
#line 1 "ENTRY_10001b36"

void __fastcall FUN_10001b36(int param_1)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined1 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iStack_4;
  
  iVar11 = (int)(0);
  uVar9 = (uint)(0);
  bVar3 = (byte)(1);
  bVar1 = (bool)(true);
  *(undefined1 *)(param_1 + 0x16) = 1;
  uVar10 = (uint)(*(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x48) >> 2);
  iStack_4 = (int)(0);
  bVar5 = (bool)(true);
  iVar7 = (int)(0);
  bVar2 = (bool)(true);
  bVar4 = (byte)(1);
  if (uVar10 != 0) {
    do {
      iVar7 = (int)(*(int *)(*(int *)(param_1 + 0x48) + uVar9 * 4));
      if ((*(int *)(iVar7 + 0x38) == -1) || (iVar6 = *(int *)(iVar7 + 0x40), 0 < iVar6)) {
        iVar6 = (int)(*(int *)(iVar7 + 0x40));
      }
      else if (*(int *)(iVar7 + 0x44) != 1) {
        iStack_4 = (int)(iStack_4 + *(int *)(iVar7 + 0x38));
        iVar11 = (int)(iVar11 + 1);
      }
      if ((iVar6 == -1) || (iVar6 != 1)) {
        iVar7 = (int)(*(int *)(iVar7 + 0x44));
        bVar1 = (bool)(false);
        if ((iVar7 == -1) || (iVar7 != 1)) {
          bVar5 = (bool)(false);
          goto LAB_11161f53;
        }
LAB_11161f5d:
        *(undefined1 *)(param_1 + 0x16) = 0;
        bVar3 = (byte)(bVar4);
      }
      else {
        *(undefined1 *)(param_1 + 0x16) = 0;
        iVar7 = (int)(*(int *)(iVar7 + 0x44));
        bVar1 = (bool)(bVar2);
LAB_11161f53:
        if ((iVar7 != -1) && (iVar7 == 1)) goto LAB_11161f5d;
        bVar3 = (byte)(0);
      }
      uVar9 = (uint)(uVar9 + 1);
      iVar7 = (int)(iStack_4);
      bVar2 = (bool)(bVar1);
      bVar4 = (byte)(bVar3);
    } while (uVar9 < uVar10);
  }
  *(uint *)(param_1 + 0x94) = (uint)bVar1;
  *(uint *)(param_1 + 0x98) = (uint)bVar3;
  if ((bVar5) && ((uVar10 != 1 || (bVar1)))) {
    uVar8 = (undefined1)(0);
  }
  else {
    uVar8 = (undefined1)(1);
  }
  *(undefined1 *)(param_1 + 0x15) = uVar8;
  if (uVar10 != 1) {
    if (iVar11 == 0) {
      *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
      return;
    }
    *(int *)(param_1 + 0x8c) = iVar7 / iVar11;
    return;
  }
  iVar7 = (int)(*(int *)(**(int **)(param_1 + 0x48) + 0x38));
  if ((iVar7 == -1) || (0 < *(int *)(**(int **)(param_1 + 0x48) + 0x40))) {
    iVar7 = (int)(-1);
  }
  *(undefined1 *)(param_1 + 0x16) = uVar8;
  *(int *)(param_1 + 0x8c) = iVar7;
  return;
}


// Reference entry 10001b3b; body size 5 bytes.
#line 1 "ENTRY_10001b3b"

undefined4 * __thiscall Recovered_Bulk::FUN_10001b3b(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTAddURIToQueueAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTAddURIToQueueAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTAddURIToQueueAIOOp);
  thunk_FUN_111c0af0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7e0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10001b40; body size 5 bytes.
#line 1 "ENTRY_10001b40"

undefined4 * __thiscall Recovered_Bulk::FUN_10001b40(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTConfigureSleepTimerAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTConfigureSleepTimerAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTConfigureSleepTimerAIOOp);
  thunk_FUN_111c0af0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10001b45; body size 5 bytes.
#line 1 "ENTRY_10001b45"

undefined1 __fastcall FUN_10001b45(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0xe));
}


// Reference entry 10001b59; body size 5 bytes.
#line 1 "ENTRY_10001b59"

void __fastcall FUN_10001b59(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = (int)(*(int *)(param_1 + 0xc));
  uVar3 = (uint)(*(int *)(param_1 + 0x10) - iVar1 & 0xfffffffc);
  iVar2 = (int)(iVar1);
  if (0xfff < uVar3) {
    iVar2 = (int)(*(int *)(iVar1 + -4));
    uVar3 = (uint)(uVar3 + 0x23);
    if (0x1f < (iVar1 - iVar2) - 4U) {
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1148a50e(iVar2,uVar3);
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  thunk_FUN_10c416b0();
  return;
}


// Reference entry 10001b8b; body size 5 bytes.
#line 1 "ENTRY_10001b8b"

void FUN_10001b8b(void)

{
  thunk_FUN_10659230();
  return;
}


// Reference entry 10001b90; body size 5 bytes.
#line 1 "ENTRY_10001b90"

void FUN_10001b90(void)

{
  return;
}


// Reference entry 10001b95; body size 5 bytes.
#line 1 "ENTRY_10001b95"

void __thiscall Recovered_Bulk::FUN_10001b95(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0x38) = param_2;
  return;
}


// Reference entry 10001ba4; body size 5 bytes.
#line 1 "ENTRY_10001ba4"

void FUN_10001ba4(void)

{
  return;
}


// Reference entry 10001bb8; body size 5 bytes.
#line 1 "ENTRY_10001bb8"

undefined4 _CSharp_SCIDateTimeManager_createSwitchToManualTimeOp_4(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x6c))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10001bef; body size 5 bytes.
#line 1 "ENTRY_10001bef"

void __thiscall Recovered_Bulk::FUN_10001bef(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  thunk_FUN_103021f0(param_1 + 4,5,"Start connection timer for %d msecs...",param_2);
  *(undefined8 *)(param_1 + 0x9c) = 0;
  thunk_FUN_1145c930(&uStack_8,0);
  thunk_FUN_1145ad70(&uStack_8,param_2);
  *(undefined4 *)(param_1 + 0x9c) = uStack_8;
  *(undefined4 *)(param_1 + 0xa0) = uStack_4;
  return;
}


// Reference entry 10001c03; body size 5 bytes.
#line 1 "ENTRY_10001c03"

void FUN_10001c03(void)

{
  thunk_FUN_107e6dd0();
  return;
}


// Reference entry 10001c1c; body size 5 bytes.
#line 1 "ENTRY_10001c1c"

void FUN_10001c1c(int param_1,int param_2,int param_3,int *param_4,code *param_5)

{
 try {
  int *piVar1;
  int iVar2;
  void **ppvVar3;
  char cVar4;
  int iVar5;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  ppvVar3 = (void **)(&pvStack_10);

  while (iVar2 = param_2, ExceptionList = ppvVar3, param_3 < iVar2) {
    param_2 = (int)(iVar2 + -1 >> 1);
    if ((int *)param_4[1] != (int *)0x0) {
      (**(code **)(*(int *)param_4[1] + 4))();
    }

    piVar1 = (int *)(*(int **)(param_1 + 4 + param_2 * 8));
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(*(undefined4 *)(param_1 + param_2 * 8),piVar1);
    }

    cVar4 = (char)((*param_5)());
    if (cVar4 == '\0') break;
    iVar5 = (int)(*(int *)(param_1 + param_2 * 8));

    if (iVar5 != *(int *)(param_1 + iVar2 * 8)) {
      piVar1 = (int *)(*(int **)(param_1 + 4 + iVar2 * 8));
      if (piVar1 != (int *)0x0) {
        *(undefined4 *)(param_1 + iVar2 * 8) = 0;
        *(undefined4 *)(param_1 + 4 + iVar2 * 8) = 0;
        (**(code **)(*piVar1 + 8))();
        iVar5 = (int)(*(int *)(param_1 + param_2 * 8));
      }
      *(int *)(param_1 + iVar2 * 8) = iVar5;
      piVar1 = (int *)(*(int **)(param_1 + 4 + param_2 * 8));
      *(int **)(param_1 + 4 + iVar2 * 8) = piVar1;

      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();

      }
    }
  }
  iVar5 = (int)(*param_4);
  if (iVar5 != *(int *)(param_1 + iVar2 * 8)) {
    piVar1 = (int *)(*(int **)(param_1 + 4 + iVar2 * 8));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + iVar2 * 8) = 0;
      *(undefined4 *)(param_1 + 4 + iVar2 * 8) = 0;
      (**(code **)(*piVar1 + 8))();
      iVar5 = (int)(*param_4);
    }
    *(int *)(param_1 + iVar2 * 8) = iVar5;
    piVar1 = (int *)((int *)param_4[1]);
    *(int **)(param_1 + 4 + iVar2 * 8) = piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 100021f3; body size 5 bytes.
#line 1 "ENTRY_100021f3"

void _CSharp_SCLibLogCallback_director_connect_8(int param_1,undefined4 param_2)

{
                    
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 8) = param_2;
  }
  return;
}


// Reference entry 100021fd; body size 5 bytes.
#line 1 "ENTRY_100021fd"

void FUN_100021fd(void)

{
  thunk_FUN_1122a8d0();
  return;
}


// Reference entry 10002202; body size 5 bytes.
#line 1 "ENTRY_10002202"

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */ void __thiscall Recovered_Bulk::FUN_10002202(undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)
{
  int param_1 = (int )this;
 try {
  bool bVar1;
  int iVar2;
  undefined4 ****ppppuVar3;
  uint uVar4;
  undefined1 auStack_c358 [42248];
  undefined1 auStack_1e50 [7708];
  undefined4 uStack_34;
  undefined4 ***apppuStack_2c [4];
  undefined4 uStack_1c;
  uint uStack_18;
  uint uStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uStack_14 = (uint)(DAT_12126b84);

  if ((*(char *)(param_1 + 0x338) == '\0') || (*(char *)(param_1 + 0xcc) == '\0')) {
    bVar1 = (bool)(false);
  }
  else {
    bVar1 = (bool)(true);
  }
  iVar2 = (int)(0xcc);
  if (!bVar1) {
    iVar2 = (int)(0xc);
  }
  thunk_FUN_111c32e0(iVar2 + param_1,"urn:schemas-upnp-org:service:AVTransport:1",
                     "GetDeviceCapabilities",param_1 + 0x18c,*(undefined4 *)(param_1 + 0x64c),
                     *(undefined4 *)(param_1 + 0x650),0,0);

  thunk_FUN_11204720(apppuStack_2c);
  uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(1)));
  ppppuVar3 = (undefined4 ****)(apppuStack_2c);
  if (0xf < uStack_18) {
    ppppuVar3 = (undefined4 ****)((undefined4 ****)apppuStack_2c[0]);
  }
  thunk_FUN_111c66d0(ppppuVar3);
  thunk_FUN_11204570(auStack_1e50);
  thunk_FUN_112045a0(auStack_c358);
  thunk_FUN_11250000("InstanceID",0);
  thunk_FUN_1124f350(param_2);
  thunk_FUN_1124ff50("PlayMedia");
  thunk_FUN_112503c0(param_3,param_4);
  thunk_FUN_1124ff50("RecMedia");
  thunk_FUN_112503c0(param_5,param_6);
  thunk_FUN_1124ff50("RecQualityModes");
  thunk_FUN_112503c0(param_7,param_8);
  thunk_FUN_111c5fc0();
  *(undefined4 *)(param_1 + 0x66c) = uStack_34;
  if (0xf < uStack_18) {
    uVar4 = (uint)(uStack_18 + 1);
    ppppuVar3 = (undefined4 ****)((undefined4 ****)apppuStack_2c[0]);
    if (0xfff < uVar4) {
      ppppuVar3 = (undefined4 ****)((undefined4 ****)apppuStack_2c[0][-1]);
      uVar4 = (uint)(uStack_18 + 0x24);
      if (0x1f < (uint)((int)apppuStack_2c[0] + (-4 - (int)ppppuVar3))) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(ppppuVar3,uVar4);
  }


  apppuStack_2c[0] = (undefined4 ***)((undefined4 ***)((uint)apppuStack_2c[0] & 0xffffff00));
  thunk_FUN_1124ef40();
  thunk_FUN_1124f0e0();
  thunk_FUN_1124d790();
  thunk_FUN_1125acd0();
  thunk_FUN_1124a3f0();

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 10002207; body size 5 bytes.
#line 1 "ENTRY_10002207"

undefined4 * __thiscall Recovered_Bulk::FUN_10002207(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RContentProvider);
  param_1[1] = (undefined4)(0);
  thunk_FUN_1145c930(param_1 + 2,0);
  param_1[5] = (undefined4)(param_2);
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RBrowseContentProvider);
  return (undefined4 *)(param_1);
}


// Reference entry 1000221b; body size 5 bytes.
#line 1 "ENTRY_1000221b"

void __fastcall FUN_1000221b(int param_1)

{
                    
                    
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x44))();
  return;
}


// Reference entry 1000222f; body size 5 bytes.
#line 1 "ENTRY_1000222f"

void FUN_1000222f(void)

{
  thunk_FUN_10c6eb50();
  return;
}


// Reference entry 10002243; body size 5 bytes.
#line 1 "ENTRY_10002243"

void FUN_10002243(void)

{
  thunk_FUN_109da510();
  return;
}


// Reference entry 1000224d; body size 5 bytes.
#line 1 "ENTRY_1000224d"

void FUN_1000224d(void)

{
  thunk_FUN_1092fdf0();
  return;
}


// Reference entry 1000226b; body size 5 bytes.
#line 1 "ENTRY_1000226b"

undefined1 FUN_1000226b(void)

{
  return (undefined1)(0);
}


// Reference entry 100022a2; body size 5 bytes.
#line 1 "ENTRY_100022a2"

undefined4 _CSharp_SCISearchHistoryViewBrowseItem_SWIGUpcast_4(undefined4 param_1)

{
                    
  return (undefined4)(param_1);
}


// Reference entry 100022d9; body size 5 bytes.
#line 1 "ENTRY_100022d9"

void __fastcall FUN_100022d9(int param_1)

{
  thunk_FUN_111bf5b0(*(undefined4 *)(param_1 + 0x218));
  return;
}


// Reference entry 100022e3; body size 5 bytes.
#line 1 "ENTRY_100022e3"

void FUN_100022e3(void)

{
  thunk_FUN_10def0d0();
  return;
}


// Reference entry 100022f2; body size 5 bytes.
#line 1 "ENTRY_100022f2"

void FUN_100022f2(void)

{
  thunk_FUN_10cf5cc0();
  return;
}


// Reference entry 10002310; body size 5 bytes.
#line 1 "ENTRY_10002310"

void FUN_10002310(void)

{
 try {
  char cVar1;
  undefined4 uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (undefined4)(thunk_FUN_10dfbb10(DAT_12126b84 ));

  cVar1 = (char)(thunk_FUN_10def450(uVar2));

  thunk_FUN_10def0d0();
  if (cVar1 != '\0') {
    thunk_FUN_10ebb8e0("afterGestureWait",15000);
  }

  return;

 } catch (...) { }
}


// Reference entry 10002315; body size 5 bytes.
#line 1 "ENTRY_10002315"

undefined4 * __thiscall Recovered_Bulk::FUN_10002315(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1000231a; body size 5 bytes.
#line 1 "ENTRY_1000231a"

void __fastcall FID_conflict__Tidy_1000231a(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = (int)(*param_1);
  if (iVar1 != 0) {
    uVar3 = (uint)(param_1[2] - iVar1 & 0xfffffffc);
    iVar2 = (int)(iVar1);
    if (0xfff < uVar3) {
      iVar2 = (int)(*(int *)(iVar1 + -4));
      uVar3 = (uint)(uVar3 + 0x23);
      if (0x1f < (iVar1 - iVar2) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar2,uVar3);
    *param_1 = (int)(0);
    param_1[1] = (int)(0);
    param_1[2] = (int)(0);
  }
  return;
}


// Reference entry 1000231f; body size 5 bytes.
#line 1 "ENTRY_1000231f"

undefined1 FUN_1000231f(void)

{
  return (undefined1)(1);
}


// Reference entry 1000235b; body size 5 bytes.
#line 1 "ENTRY_1000235b"

undefined4 FUN_1000235b(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x18) == 2) {
      iVar2 = (int)(*(int *)(param_1 + 0x1c));
    }
    else {
      if (*(int *)(param_1 + 0x18) != 3) {
        return (undefined4)(0xffffff69);
      }
      iVar2 = (int)(*(int *)(param_1 + 0x1c));
      if (iVar2 == 1) {
        uVar1 = (undefined4)(thunk_FUN_114343d0());
        return (undefined4)(uVar1);
      }
    }
    if (iVar2 == 0) {
      return (undefined4)(0xffffff69);
    }
    *(int *)(param_1 + 0x1c) = iVar2 + -1;
  }
  return (undefined4)(0);
}


// Reference entry 10002360; body size 5 bytes.
#line 1 "ENTRY_10002360"

int FUN_10002360(int *param_1,uint param_2)

{
  int iVar1;
  
  if (*param_1 == 0) {
    if ((param_2 & 0x7f000000) == 0x2000000) {
      memset(param_1 + 2,0,0xe0);
      iVar1 = (int)(thunk_FUN_1144e3a0(param_1 + 2,param_2));
      if (iVar1 == 0) {
        *param_1 = (int)(1);
      }
      else if (iVar1 == -0x86) {
        iVar1 = (int)(-0x86);
        goto LAB_1142c8b8;
      }
      if (iVar1 == 0) {
        return (int)(0);
      }
    }
    else {
      iVar1 = (int)(-0x87);
    }
  }
  else {
    iVar1 = (int)(-0x89);
  }
LAB_1142c8b8:
  if (*param_1 != 0) {
    if (*param_1 == 1) {
      thunk_FUN_1144dbb0(param_1 + 2);
    }
    *param_1 = (int)(0);
  }
  return (int)(iVar1);
}


// Reference entry 1000236f; body size 5 bytes.
#line 1 "ENTRY_1000236f"

undefined4 __thiscall Recovered_Bulk::FUN_1000236f(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x2c) == 0) {
    return (undefined4)(0);
  }
  uVar1 = (undefined4)(thunk_FUN_111a32a0());
  iVar2 = (int)(thunk_FUN_113b9ec0(uVar1,&DAT_11878190));
  if (iVar2 == 0) {
    thunk_FUN_111a4540(param_1 + 0x20);
    return (undefined4)(1);
  }
  uVar1 = (undefined4)(thunk_FUN_1113fb00(param_2,param_3));
  return (undefined4)(uVar1);
}


// Reference entry 10002374; body size 5 bytes.
#line 1 "ENTRY_10002374"

void __thiscall Recovered_Bulk::FUN_10002374(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  char cVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  void *pvStack_220;
  undefined1 *puStack_21c;
  undefined4 uStack_218;
  uint uStack_214;
  int iStack_210;
  undefined1 *puStack_20c;
  undefined1 auStack_208 [512];
  uint uStack_8;

  uStack_8 = (uint)(DAT_12126b84 ^ (uint)&uStack_214);

  puStack_20c = (undefined1 *)(auStack_208);

  iStack_210 = (int)(0);
  auStack_208[0] = (undefined1)(0);
  pcVar3 = (char *)(*(char **)(param_1 + 0x34));

  if (pcVar3 == (char *)0x0) {
    iVar7 = (int)(0);
  }
  else {
    iVar7 = (int)(*(int *)(pcVar3 + -0xc));
    if (iVar7 == 0) {
      pcVar6 = (char *)(pcVar3);
      do {
        cVar2 = (char)(*pcVar6);
        pcVar6 = (char *)(pcVar6 + 1);
      } while (cVar2 != '\0');
      iVar7 = (int)((int)pcVar6 - (int)(pcVar3 + 1));
      *(int *)(pcVar3 + -0xc) = iVar7;
    }
  }
  uVar1 = (uint)(iVar7 + 1);
  if (0x200 < uVar1) {
    uVar8 = (uint)(0x400);
    if (0x3ff < uVar1) {
      uVar8 = (uint)(uVar1);
    }
    puVar4 = (undefined1 *)((undefined1 *)thunk_FUN_1148b586(uVar8,uStack_8));
    puVar5 = (undefined1 *)(puStack_20c);
    uStack_214 = (uint)(uVar8);
    thunk_FUN_1145c250(puVar4,puStack_20c,uVar8);
    puStack_20c = (undefined1 *)(puVar4);
    if (puVar5 == (undefined1 *)(auStack_208)) {
      auStack_208[0] = (undefined1)(0);
    }
    else {
      free(puVar5);
    }
  }
  puVar5 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x34) != (undefined1 *)0x0) {
    puVar5 = (undefined1 *)(*(undefined1 **)(param_1 + 0x34));
  }
  iStack_210 = (int)(thunk_FUN_1123fe90(puStack_20c,iVar7,puVar5,0,1,0,1));
  puStack_20c[iStack_210] = (undefined1)(0);
  thunk_FUN_111a0cc0(puStack_20c);
  if (puStack_20c != (undefined1 *)(auStack_208)) {
    free(puStack_20c);
  }

  thunk_FUN_1148ac28(param_3);
  return;

 } catch (...) { }
}


// Reference entry 1000237e; body size 5 bytes.
#line 1 "ENTRY_1000237e"

void __fastcall FUN_1000237e(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x30) != 0) && (*(int **)(param_1 + 0x2c) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x2c));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if ((*(int *)(param_1 + 0x3c) != 0) && (*(int **)(param_1 + 0x38) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x38) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x38));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  if ((*(int *)(param_1 + 0x48) != 0) && (*(int **)(param_1 + 0x44) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x44) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x44));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  return;
}


// Reference entry 1000238d; body size 5 bytes.
#line 1 "ENTRY_1000238d"

undefined4 * __thiscall Recovered_Bulk::FUN_1000238d(byte param_2)
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


// Reference entry 10002392; body size 5 bytes.
#line 1 "ENTRY_10002392"

undefined4 * __thiscall Recovered_Bulk::FUN_10002392(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1000239c; body size 5 bytes.
#line 1 "ENTRY_1000239c"

int __thiscall Recovered_Bulk::FUN_1000239c(int param_2)
{
  int param_1 = (int )this;
 try {
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  thunk_FUN_10c745a0(param_2);

  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  puVar6 = (undefined4 *)(*(undefined4 **)(param_2 + 0x14));
  puVar1 = (undefined4 *)(*(undefined4 **)(param_2 + 0x18));
  if ((undefined4 *)(puVar6) != puVar1) {
    iVar7 = (int)((int)puVar1 - (int)puVar6 >> 3);
    iVar4 = (int)(thunk_FUN_10c7dc90(iVar7));
    *(int *)(param_1 + 0x14) = iVar4;
    *(int *)(param_1 + 0x18) = iVar4;
    *(int *)(param_1 + 0x1c) = iVar4 + iVar7 * 8;
    puVar5 = (undefined4 *)(*(undefined4 **)(param_1 + 0x14));
    do {
      uVar2 = (undefined4)(*puVar6);
      uVar3 = (undefined4)(puVar6[1]);
      puVar6 = (undefined4 *)(puVar6 + 2);
      *puVar5 = (undefined4)(uVar2);
      puVar5[1] = (undefined4)(uVar3);
      puVar5 = (undefined4 *)(puVar5 + 2);
    } while ((undefined4 *)(puVar6) != puVar1);
    *(undefined4 **)(param_1 + 0x18) = puVar5;

    return (int)(param_1);
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 100023c9; body size 5 bytes.
#line 1 "ENTRY_100023c9"

undefined4 __fastcall FUN_100023c9(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 100023ec; body size 5 bytes.
#line 1 "ENTRY_100023ec"

undefined4 _CSharp_SCIBrowseDataSource_getActionsOnSelectedItems_4(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0xa8))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 100023f1; body size 5 bytes.
#line 1 "ENTRY_100023f1"

void __thiscall Recovered_Bulk::FUN_100023f1(int *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_2 != *(int **)(param_1 + 0xc)) {
    piVar2 = (int *)(*(int **)(param_1 + 0x10));
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar2 + 8))();
    }
    *(int **)(param_1 + 0xc) = param_2;
    if (param_2 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      piVar2 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
      *(int **)(param_1 + 0x10) = piVar2;
      (**(code **)(*piVar2 + 4))();
    }
  }
  (**(code **)(*(int *)(param_1 + 0x30) + 0x14))();
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    uVar3 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 4))(param_1 + 8,param_3));
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x18) + 0xc))());
      if (cVar1 != '\0') {
        uVar3 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 8))());
        *(undefined4 *)(param_1 + 0x20) = uVar3;
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  return;
}


// Reference entry 100023fb; body size 5 bytes.
#line 1 "ENTRY_100023fb"

undefined1 FUN_100023fb(void)

{
  return (undefined1)(1);
}


// Reference entry 10002414; body size 5 bytes.
#line 1 "ENTRY_10002414"

void __fastcall FUN_10002414(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(*(int **)(param_1 + 0x18));
  if (piVar2 != (int *)0x0) {
    if (*(int *)(param_1 + 0x1c) != 0) {
      (**(code **)(*piVar2 + 0x10))();
      piVar2 = (int *)(*(int **)(param_1 + 0x18));
    }
    if (piVar2 != (int *)0x0) {
      iVar1 = (int)(thunk_FUN_1123fcd0(piVar2 + 1));
      if ((iVar1 == 0) && (piVar2 != (int *)0x0)) {
        (**(code **)*piVar2)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}


// Reference entry 10002419; body size 5 bytes.
#line 1 "ENTRY_10002419"

void __fastcall FUN_10002419(int param_1)

{
  SCThreadSafeInc((long *)(param_1 + 4));
  return;
}


// Reference entry 10002423; body size 5 bytes.
#line 1 "ENTRY_10002423"

void __fastcall FUN_10002423(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x100) != 0) {
    piVar1 = (int *)(*(int **)(param_1 + 0x104));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x100) = 0;
      *(undefined4 *)(param_1 + 0x104) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
  }
  return;
}


// Reference entry 10002437; body size 5 bytes.
#line 1 "ENTRY_10002437"

undefined4 * __thiscall Recovered_Bulk::FUN_10002437(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  undefined4 *puVar1;
  undefined4 uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  puVar1 = (undefined4 *)(operator_new(0xfc));

  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCFixUnconfiguredExistingEmailMatchPage);
    puVar1[4] = (undefined4)((uint)&ghidra_vftable_SCFixUnconfiguredExistingEmailMatchPage);
    puVar1[0x23] = (undefined4)((uint)&ghidra_vftable_SCFixUnconfiguredExistingEmailMatchPage);
    puVar1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCFixUnconfiguredExistingEmailMatchPage);
    *(undefined1 *)(puVar1 + 0x38) = 0;
    puVar1[0x39] = (undefined4)(0);
    puVar1[0x3a] = (undefined4)(0);
    puVar1[0x3b] = (undefined4)(0);
    puVar1[0x3c] = (undefined4)(0);
    puVar1[0x3d] = (undefined4)(0);
    puVar1[0x3e] = (undefined4)(0);

    return (undefined4 *)(puVar1);
  }

  return (undefined4 *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 1000243c; body size 5 bytes.
#line 1 "ENTRY_1000243c"

void FUN_1000243c(void)

{
  thunk_FUN_10803750();
  return;
}


// Reference entry 10002446; body size 5 bytes.
#line 1 "ENTRY_10002446"

void FUN_10002446(void)

{
  thunk_FUN_106022d0();
  return;
}


// Reference entry 10002450; body size 5 bytes.
#line 1 "ENTRY_10002450"

undefined4 * __thiscall Recovered_Bulk::FUN_10002450(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_11261e50();
  param_1[7] = (undefined4)((uint)&ghidra_vftable_RAsyncBrowseCacheCB);
  param_1[8] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RLookupMetadataAIOOp);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RLookupMetadataAIOOp);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_RLookupMetadataAIOOp);
  param_1[0x971] = (undefined4)(0);
  param_1[0x972] = (undefined4)(0);
  param_1[0x970] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  *(undefined1 *)((int)param_1 + 0xb5) = 0;
  *(undefined1 *)((int)param_1 + 0x21bf) = 0;
  thunk_FUN_1106a8d0((int)param_1 + 0x20b6,param_4,0x109);
  thunk_FUN_1106a8d0(param_1 + 9,param_3,0x91);
  return (undefined4 *)(param_1);
}


// Reference entry 10002487; body size 5 bytes.
#line 1 "ENTRY_10002487"

void FUN_10002487(void)

{
  return;
}


// Reference entry 10002491; body size 5 bytes.
#line 1 "ENTRY_10002491"

void FUN_10002491(char *param_1,char *param_2,char *param_3,char *param_4,uint param_5)

{
  char cVar1;
  char *_SubStr;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  char *pcStack_58;
  char *pcStack_54;
  int iStack_50;
  char *pcStack_4c;
  int iStack_48;
  int aiStack_44 [16];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)&pcStack_58);
  uVar6 = (uint)(0);
  pcStack_4c = (char *)(param_3);
  pcStack_54 = (char *)(param_2);
  pcStack_58 = (char *)(param_4);
  pcVar7 = (char *)(param_1);
  do {
    cVar1 = (char)(*pcVar7);
    pcVar7 = (char *)(pcVar7 + 1);
  } while (cVar1 != '\0');
  pcVar3 = (char *)(param_2);
  do {
    cVar1 = (char)(*pcVar3);
    pcVar3 = (char *)(pcVar3 + 1);
  } while (cVar1 != '\0');
  iStack_48 = (int)((int)pcVar3 - (int)(param_2 + 1));
  pcVar3 = (char *)(param_3 + 1);
  do {
    cVar1 = (char)(*param_3);
    param_3 = (char *)(param_3 + 1);
  } while (cVar1 != '\0');
  iVar5 = (int)((int)param_3 - (int)pcVar3);
  iStack_50 = (int)((int)pcVar7 - (int)(param_1 + 1));
  pcVar3 = (char *)(strstr(param_1,param_2));
  _SubStr = (char *)(pcStack_54);
  iVar2 = (int)((int)pcVar7 - (int)(param_1 + 1));
  for (; (pcVar3 != (char *)0x0 && (iVar2 = (int)(iStack_50, uVar6 < 0x10))); uVar6 = uVar6 + 1) {
    aiStack_44[uVar6] = (int)((int)pcVar3);
    pcVar3 = (char *)(strstr(pcVar3 + 1,_SubStr));
    iVar2 = (int)(iStack_50);
  }
  if (param_5 < (iVar5 - iStack_48) * uVar6 + 1 + iVar2) {
    thunk_FUN_1148ac28();
    return;
  }
  uVar8 = (uint)(0);
  pcStack_54 = (char *)(param_1 + iStack_50);
  if (param_1 <= pcStack_54) {
    do {
      if ((uVar8 < uVar6) && (param_1 == (char *)aiStack_44[uVar8])) {
        thunk_FUN_1106a8d0(pcStack_58,pcStack_4c,iVar5 + 1);
        uVar8 = (uint)(uVar8 + 1);
        iVar2 = (int)(iStack_48);
        iVar4 = (int)(iVar5);
      }
      else {
        *pcStack_58 = (char)(*param_1);
        iVar2 = (int)(1);
        iVar4 = (int)(1);
      }
      pcStack_58 = (char *)(pcStack_58 + iVar4);
      param_1 = (char *)(param_1 + iVar2);
    } while (param_1 <= pcStack_54);
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 10002496; body size 5 bytes.
#line 1 "ENTRY_10002496"

undefined4 * __thiscall Recovered_Bulk::FUN_10002496(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCJPGBitmapLoader);
  free((void *)param_1[6]);
  free((void *)param_1[3]);
  param_1[2] = (undefined4)(6);
  thunk_FUN_111af700(param_1 + 10);
  thunk_FUN_10f74bd0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x2b8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 100024a5; body size 5 bytes.
#line 1 "ENTRY_100024a5"

undefined4 * __thiscall Recovered_Bulk::FUN_100024a5(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a446c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 100024af; body size 5 bytes.
#line 1 "ENTRY_100024af"

undefined1 FUN_100024af(void)

{
  return (undefined1)(0);
}


// Reference entry 100024b9; body size 5 bytes.
#line 1 "ENTRY_100024b9"

void FUN_100024b9(void)

{
  char cVar1;
  int iVar2;
  
  iVar2 = (int)(thunk_FUN_10eb41b0());
  if (iVar2 == 0) {
    iVar2 = (int)(0);
  }
  else {
    iVar2 = (int)(iVar2 + 0xe8);
  }
  thunk_FUN_10ebc1d0(iVar2);
  thunk_FUN_10cf3630(iVar2);
  iVar2 = (int)(thunk_FUN_10eb41b0());
  if (iVar2 == 0) {
    iVar2 = (int)(0);
  }
  else {
    iVar2 = (int)(iVar2 + 0xf4);
  }
  thunk_FUN_10ebc1d0(iVar2);
  thunk_FUN_10cf5250(iVar2);
  iVar2 = (int)(thunk_FUN_10eb41b0());
  if (iVar2 == 0) {
    iVar2 = (int)(0);
  }
  else {
    iVar2 = (int)(iVar2 + 0x100);
  }
  thunk_FUN_10ebc1d0(iVar2);
  thunk_FUN_10ead100(iVar2);
  iVar2 = (int)(thunk_FUN_10eb41b0());
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
  cVar1 = (char)(thunk_FUN_10eacce0(1));
  thunk_FUN_109f3bb0(cVar1 == '\0');
  return;
}


// Reference entry 100024c3; body size 5 bytes.
#line 1 "ENTRY_100024c3"

undefined4 * __fastcall FUN_100024c3(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  thunk_FUN_11234140(DAT_12126b84 );

  thunk_FUN_11240650();
  param_1[1] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RStringTableImpl);
  param_1[1] = (undefined4)((uint)&ghidra_vftable_RStringTableImpl);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  param_1[6] = (undefined4)(0);
  param_1[9] = (undefined4)(0xff);
  param_1[10] = (undefined4)(0);
  param_1[0xb] = (undefined4)(0);
  param_1[0xe] = (undefined4)(0);
  param_1[0x10] = (undefined4)(0);
  param_1[0x11] = (undefined4)(0);
  param_1[0xf] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x14] = (undefined4)(0);
  param_1[0x15] = (undefined4)(0);
  param_1[0x13] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  param_1[0x16] = (undefined4)(0);
  thunk_FUN_112a9cf0(param_1 + 7);
  *(undefined1 *)(param_1 + 0xc) = 0;

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 100024c8; body size 5 bytes.
#line 1 "ENTRY_100024c8"

undefined4 * __thiscall Recovered_Bulk::FUN_100024c8(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 100024d2; body size 5 bytes.
#line 1 "ENTRY_100024d2"

void __fastcall FUN_100024d2(int param_1)

{
  thunk_FUN_101bda70(*(int *)(param_1 + 8),*(int *)(param_1 + 0xc),
                     *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2,LAB_1001b7c5);
  return;
}


// Reference entry 100024d7; body size 5 bytes.
#line 1 "ENTRY_100024d7"

void __thiscall Recovered_Bulk::FUN_100024d7(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  undefined4 uVar1;
  uint uVar2;
  void *pvVar3;
  int *piVar4;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 0x14));
  pvVar3 = (void *)(operator_new(0x14));

  if (pvVar3 == (void *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)thunk_FUN_103be530(uVar1));
  }

  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))(uVar2);
  }
  *param_2 = (undefined4)(piVar4);

  return;

 } catch (...) { }
}


// Reference entry 100024eb; body size 5 bytes.
#line 1 "ENTRY_100024eb"

void __thiscall Recovered_Bulk::FUN_100024eb(char *param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(param_2);
  do {
    cVar1 = (char)(*pcVar2);
    pcVar2 = (char *)(pcVar2 + 1);
  } while (cVar1 != '\0');
  (**(code **)(*param_1 + 4))(param_2,(int)pcVar2 - (int)(param_2 + 1));
  return;
}


// Reference entry 100024f0; body size 5 bytes.
#line 1 "ENTRY_100024f0"

undefined4 * __thiscall Recovered_Bulk::FUN_100024f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int iVar1;
  uint uVar2;
  int iVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RQualityBadge);
  iVar1 = (int)(param_1[2]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar3 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10),uVar2));
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_1[1]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar3 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10),uVar2));
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10002504; body size 5 bytes.
#line 1 "ENTRY_10002504"

void __thiscall Recovered_Bulk::FUN_10002504(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  int *piVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  piVar1 = (int *)((int *)(param_1 + -8));
  piVar2 = (int *)((int *)0x0);
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(DAT_12126b84 ));
    (**(code **)(*piVar2 + 4))();
  }
  *(short *)(param_1 + 0x1c) = (short)param_3;

  *(undefined4 *)(param_1 + 0x14) = 0;
  (**(code **)(*(int *)(param_1 + 0x28) + 0x18))();
  if ((((*(char **)(param_1 + 0x20) != (char *)0x0) && (**(char **)(param_1 + 0x20) != '\0')) &&
      (*(char **)(param_1 + 0x24) != (char *)0x0)) && (**(char **)(param_1 + 0x24) != '\0')) {
    (**(code **)(*piVar1 + 0x48))();
  }
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 4) + 0x14))(param_2,param_3);
    piVar1 = (int *)(*(int **)(param_1 + 8));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }

  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 10002518; body size 5 bytes.
#line 1 "ENTRY_10002518"

void FUN_10002518(void)

{
  thunk_FUN_10e9e150();
  return;
}


// Reference entry 10002527; body size 5 bytes.
#line 1 "ENTRY_10002527"

void FUN_10002527(void)

{
  thunk_FUN_10ccd770();
  return;
}


// Reference entry 10002540; body size 5 bytes.
#line 1 "ENTRY_10002540"

int * FUN_10002540(int *param_1)

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


// Reference entry 1000254f; body size 5 bytes.
#line 1 "ENTRY_1000254f"

undefined4 FUN_1000254f(void)

{
  return (undefined4)(2);
}


// Reference entry 10002590; body size 5 bytes.
#line 1 "ENTRY_10002590"

void FUN_10002590(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10bcad90());
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x3c) != 0)) {
    thunk_FUN_104dec20();
    if (*(undefined4 **)(iVar1 + 0x3c) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(iVar1 + 0x3c))(1);
    }
    *(undefined4 *)(iVar1 + 0x3c) = 0;
  }
  return;
}


// Reference entry 10002595; body size 5 bytes.
#line 1 "ENTRY_10002595"

bool __fastcall FUN_10002595(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x838) == 0);
}


// Reference entry 1000259a; body size 5 bytes.
#line 1 "ENTRY_1000259a"

undefined4 * __fastcall FUN_1000259a(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCActionContext);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  param_1[6] = (undefined4)(0);
  param_1[7] = (undefined4)(0);
  param_1[8] = (undefined4)(0);
  param_1[9] = (undefined4)(0);
  *(undefined1 *)(param_1 + 10) = 0;
  return (undefined4 *)(param_1);
}


// Reference entry 100025ae; body size 5 bytes.
#line 1 "ENTRY_100025ae"

void _CSharp_delete_SCIOpLoadLogo_4(int *param_1)

{
                    
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 100025c2; body size 5 bytes.
#line 1 "ENTRY_100025c2"

char * FUN_100025c2(void)

{
  return (char *)("urn:schemas-upnp-org:service:RenderingControl:1");
}


// Reference entry 100025c7; body size 5 bytes.
#line 1 "ENTRY_100025c7"

void __fastcall FUN_100025c7(float *param_1)

{
  ceil((double)((float)((double)((int)param_1[2] + 1) +
                       (double)(&DAT_11880fb0)[-((int)param_1[2] + 1 >> 0x1f)]) / *param_1));
  thunk_FUN_1148ac80();
  thunk_FUN_111733d0();
  return;
}


// Reference entry 100025d1; body size 5 bytes.
#line 1 "ENTRY_100025d1"

void __fastcall FUN_100025d1(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RMusicServiceListCB);
  return;
}


// Reference entry 100025e0; body size 5 bytes.
#line 1 "ENTRY_100025e0"

void FUN_100025e0(void)

{
  thunk_FUN_10fd9a30();
  return;
}


// Reference entry 1000260d; body size 5 bytes.
#line 1 "ENTRY_1000260d"

undefined4 * __thiscall Recovered_Bulk::FUN_1000260d(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a218c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10002621; body size 5 bytes.
#line 1 "ENTRY_10002621"

void __fastcall FUN_10002621(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10002649; body size 5 bytes.
#line 1 "ENTRY_10002649"

void __thiscall Recovered_Bulk::FUN_10002649(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  if (*(char *)(param_1 + 8) == '\0') {
    thunk_FUN_1145c720(param_2,param_3,"ratingIcon_%u");
    return;
  }
  thunk_FUN_1145c720(param_2,param_3,"ratingIcon_%s_%u",param_1 + 8,*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 1000265d; body size 5 bytes.
#line 1 "ENTRY_1000265d"

void FUN_1000265d(void)

{
  thunk_FUN_10e13a00();
  return;
}


// Reference entry 10002662; body size 5 bytes.
#line 1 "ENTRY_10002662"

undefined4 FUN_10002662(void)

{
  return (undefined4)(0x15);
}


// Reference entry 1000267b; body size 5 bytes.
#line 1 "ENTRY_1000267b"

undefined4 * __thiscall Recovered_Bulk::FUN_1000267b(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10002685; body size 5 bytes.
#line 1 "ENTRY_10002685"

void FUN_10002685(void)

{
  thunk_FUN_108e4a30();
  return;
}


// Reference entry 10002694; body size 5 bytes.
#line 1 "ENTRY_10002694"

undefined4 * __thiscall Recovered_Bulk::FUN_10002694(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10002699; body size 5 bytes.
#line 1 "ENTRY_10002699"

void __fastcall FUN_10002699(int param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)(*(int **)(param_1 + 0x30));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)(*(int **)(param_1 + 0x28));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();

  return;

 } catch (...) { }
}


// Reference entry 100026ad; body size 5 bytes.
#line 1 "ENTRY_100026ad"

undefined4 * FUN_100026ad(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  int *piVar4;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar1 = (uint)(DAT_12126b84);

  pvVar2 = (void *)(operator_new(0x14));

  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)thunk_FUN_103be5e0(uVar1));
  }

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }

  if (piVar3 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
  }
  uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(3)));
  *param_1 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }

  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 100026bc; body size 5 bytes.
#line 1 "ENTRY_100026bc"

undefined1 _CSharp_SCITime_isPm_4(int *param_1)

{
  undefined1 uVar1;
  
                    
  uVar1 = (undefined1)((**(code **)(*param_1 + 0x28))());
  return (undefined1)(uVar1);
}


// Reference entry 100026c6; body size 5 bytes.
#line 1 "ENTRY_100026c6"

void FUN_100026c6(void)

{
  thunk_FUN_1011f5e0();
  return;
}


// Reference entry 100026da; body size 5 bytes.
#line 1 "ENTRY_100026da"

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */ void __thiscall Recovered_Bulk::FUN_100026da(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  int param_1 = (int )this;
 try {
  bool bVar1;
  int iVar2;
  undefined4 ****ppppuVar3;
  int *piVar4;
  uint uVar5;
  undefined1 auStack_c358 [42248];
  undefined1 auStack_1e50 [7708];
  undefined4 uStack_34;
  undefined4 ***apppuStack_2c [4];
  undefined4 uStack_1c;
  uint uStack_18;
  uint uStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uStack_14 = (uint)(DAT_12126b84);

  if ((*(char *)(param_1 + 0x338) == '\0') || (*(char *)(param_1 + 0xcc) == '\0')) {
    bVar1 = (bool)(false);
  }
  else {
    bVar1 = (bool)(true);
  }
  iVar2 = (int)(0xcc);
  if (!bVar1) {
    iVar2 = (int)(0xc);
  }
  thunk_FUN_111c32e0(iVar2 + param_1,"urn:schemas-upnp-org:service:AVTransport:1",
                     "SetNextAVTransportURI",param_1 + 0x18c,*(undefined4 *)(param_1 + 0x64c),
                     *(undefined4 *)(param_1 + 0x650),0,0);

  thunk_FUN_11204720(apppuStack_2c);
  uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(1)));
  ppppuVar3 = (undefined4 ****)(apppuStack_2c);
  if (0xf < uStack_18) {
    ppppuVar3 = (undefined4 ****)((undefined4 ****)apppuStack_2c[0]);
  }
  thunk_FUN_111c66d0(ppppuVar3);
  thunk_FUN_11204570(auStack_1e50);
  thunk_FUN_112045a0(auStack_c358);
  thunk_FUN_11250000("InstanceID",0);
  thunk_FUN_1124f350(param_2);
  piVar4 = (int *)((int *)thunk_FUN_11250000("NextURI",0));
  (**(code **)(*piVar4 + 0xc))(param_3);
  piVar4 = (int *)((int *)thunk_FUN_11250000("NextURIMetaData",0));
  (**(code **)(*piVar4 + 0xc))(param_4);
  thunk_FUN_111c5fc0();
  *(undefined4 *)(param_1 + 0x66c) = uStack_34;
  if (0xf < uStack_18) {
    uVar5 = (uint)(uStack_18 + 1);
    ppppuVar3 = (undefined4 ****)((undefined4 ****)apppuStack_2c[0]);
    if (0xfff < uVar5) {
      ppppuVar3 = (undefined4 ****)((undefined4 ****)apppuStack_2c[0][-1]);
      uVar5 = (uint)(uStack_18 + 0x24);
      if (0x1f < (uint)((int)apppuStack_2c[0] + (-4 - (int)ppppuVar3))) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(ppppuVar3,uVar5);
  }


  apppuStack_2c[0] = (undefined4 ***)((undefined4 ***)((uint)apppuStack_2c[0] & 0xffffff00));
  thunk_FUN_1124ef40();
  thunk_FUN_1124f0e0();
  thunk_FUN_1124d790();
  thunk_FUN_1125acd0();
  thunk_FUN_1124a3f0();

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 100026df; body size 5 bytes.
#line 1 "ENTRY_100026df"

undefined4 * __thiscall Recovered_Bulk::FUN_100026df(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSCPBrowseSOAPAIOOp);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RSCPBrowseSOAPAIOOp);
  param_1[0x1a] = (undefined4)((uint)&ghidra_vftable_RSCPBrowseSOAPAIOOp);
  param_1[0x11d] = (undefined4)((uint)&ghidra_vftable_RSCPBrowseSOAPAIOOp);
  thunk_FUN_11202580();
  param_1[0x3b01] = (undefined4)((uint)&ghidra_vftable_RSCPPropNameTranslator);
  thunk_FUN_11202590();
  thunk_FUN_11202570();
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RUpnpCDBrowseAIOOp);
  param_1[0x1a] = (undefined4)((uint)&ghidra_vftable_RUpnpCDBrowseAIOOp);
  param_1[0x11d] = (undefined4)((uint)&ghidra_vftable_RUpnpCDBrowseAIOOp);
  thunk_FUN_111c0af0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSCPBrowseAIOOpBase);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xf590);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 100026ee; body size 5 bytes.
#line 1 "ENTRY_100026ee"

void __thiscall Recovered_Bulk::FUN_100026ee(undefined4 param_2,undefined4 param_3)
{
  char *param_1 = (char *)this;
  byte bVar1;
  
  bVar1 = (byte)(*param_1 != '\0' | 2);
  if (param_1[1] == '\0') {
    bVar1 = (byte)(*param_1 != '\0');
  }
  thunk_FUN_1145c720(param_2,param_3,&DAT_119e0b2c,bVar1);
  return;
}


// Reference entry 100026fd; body size 5 bytes.
#line 1 "ENTRY_100026fd"

undefined4 * __thiscall Recovered_Bulk::FUN_100026fd(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10002702; body size 5 bytes.
#line 1 "ENTRY_10002702"

void __thiscall Recovered_Bulk::FUN_10002702(int *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_2 != *(int **)(param_1 + 0xc)) {
    piVar2 = (int *)(*(int **)(param_1 + 0x10));
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar2 + 8))();
    }
    *(int **)(param_1 + 0xc) = param_2;
    if (param_2 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      piVar2 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
      *(int **)(param_1 + 0x10) = piVar2;
      (**(code **)(*piVar2 + 4))();
    }
  }
  (**(code **)(*(int *)(param_1 + 0x30) + 0x14))();
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    uVar3 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 4))(param_1 + 8,param_3));
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x18) + 0xc))());
      if (cVar1 != '\0') {
        uVar3 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 8))());
        *(undefined4 *)(param_1 + 0x20) = uVar3;
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  return;
}


// Reference entry 1000270c; body size 5 bytes.
#line 1 "ENTRY_1000270c"

void __fastcall FUN_1000270c(int param_1)

{
 try {
  undefined4 uVar1;
  void *pvVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  thunk_FUN_104d98f0(DAT_12126b84 );
  uVar1 = (undefined4)(thunk_FUN_110828b0());
  pvVar2 = (void *)(operator_new(0x20));

  if (pvVar2 == (void *)0x0) {
    uVar1 = (undefined4)(0);
  }
  else {
    uVar1 = (undefined4)(thunk_FUN_104ddfd0(-(uint)(param_1 != 0) & param_1 + 0xa8U,uVar1));
  }

  *(undefined4 *)(param_1 + 0xbc) = uVar1;
  thunk_FUN_104deb40();

  return;

 } catch (...) { }
}


// Reference entry 10002711; body size 5 bytes.
#line 1 "ENTRY_10002711"

undefined1 FUN_10002711(void)

{
  return (undefined1)(0);
}


// Reference entry 10002716; body size 5 bytes.
#line 1 "ENTRY_10002716"

void FUN_10002716(void)

{
  thunk_FUN_10c69080();
  return;
}


// Reference entry 10002720; body size 5 bytes.
#line 1 "ENTRY_10002720"

void __fastcall FUN_10002720(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (*(int *)(param_1 + 0x18) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x1c) = 0;
  }
  return;
}


// Reference entry 10002743; body size 5 bytes.
#line 1 "ENTRY_10002743"

void FUN_10002743(void)

{
  thunk_FUN_104864a0();
  return;
}


// Reference entry 10002748; body size 5 bytes.
#line 1 "ENTRY_10002748"

void __fastcall FUN_10002748(int param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  SCLibrary *pSVar3;
  int *piVar4;
  int *piStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  pSVar3 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar4 = (int *)((int *)(**(code **)(*(int *)pSVar3 + 0x18))(&piStack_14,uVar2));
  piVar1 = (int *)((int *)*piVar4);

  *piVar4 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&uStack_8 + 0) = 3;
  if (piStack_14 != (int *)0x0) {
    (**(code **)(*piStack_14 + 8))();
  }
  uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(2)));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc4))(*(undefined4 *)(param_1 + 0x94));
  }

  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 10002766; body size 5 bytes.
#line 1 "ENTRY_10002766"

void __thiscall Recovered_Bulk::FUN_10002766(uint *param_2,undefined4 *param_3)
{
  int param_1 = (int )this;
  char cVar1;
  undefined1 *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_410 [3];
  undefined1 uStack_40d;
  int aiStack_40c [258];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)auStack_410);
  *param_2 = (uint)(0);
  *param_3 = (undefined4)(0);
  uVar6 = (undefined4)(1);
  uStack_40d = (undefined1)(1);
  uVar5 = (undefined4)(0);
  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x1c) != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)(*(undefined1 **)(param_1 + 0x1c));
  }
  piVar4 = (int *)(aiStack_40c);
  thunk_FUN_111d2980(puVar2);
  cVar1 = (char)(thunk_FUN_111e05f0(piVar4,uVar5,uVar6));
  if (cVar1 != '\0') {
    uVar3 = (uint)(aiStack_40c[0] << 8 | 7);
    *param_2 = (uint)(uVar3);
    puVar2 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 0x1c) != (undefined1 *)0x0) {
      puVar2 = (undefined1 *)(*(undefined1 **)(param_1 + 0x1c));
    }
    thunk_FUN_11200910(uVar3,puVar2,param_3,0);
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 10002775; body size 5 bytes.
#line 1 "ENTRY_10002775"

void FUN_10002775(int param_1,int param_2,undefined4 param_3,undefined4 param_4,
                       undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                       undefined4 param_9,undefined4 param_10)

{
  int iVar1;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)&uStack_24);
  if ((param_1 != 0) && (param_2 != 0)) {
    uStack_24 = (undefined4)(param_5);
    uStack_20 = (undefined4)(param_6);
    uStack_1c = (undefined4)(param_7);
    uStack_18 = (undefined4)(param_8);
    uStack_14 = (undefined4)(param_9);
    uStack_10 = (undefined4)(param_10);
    uStack_c = (undefined4)(param_3);
    uStack_8 = (undefined4)(param_4);
    iVar1 = (int)(thunk_FUN_11462fa0(param_1,param_2 + 0x28,&uStack_24,2));
    if (iVar1 != 0) {
      *(ushort *)(param_2 + 0x72) = *(ushort *)(param_2 + 0x72) | 0x10;
    }
    thunk_FUN_11463790(param_1,param_2);
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 10002793; body size 5 bytes.
#line 1 "ENTRY_10002793"

int * __thiscall Recovered_Bulk::FUN_10002793(int *param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  
  iVar1 = (int)(*param_1);
  puVar3 = (undefined4 *)(*(undefined4 **)(iVar1 + 4));
  *param_2 = (int)((int)puVar3);
  cVar2 = (char)(*(char *)((int)puVar3 + 0xd));
  param_2[1] = (int)(0);
  param_2[2] = (int)(iVar1);
  while (cVar2 == '\0') {
    *param_2 = (int)((int)puVar3);
    cVar2 = (char)(thunk_FUN_111a0940(param_3));
    if (cVar2 == '\0') {
      param_2[2] = (int)((int)puVar3);
      puVar3 = (undefined4 *)((undefined4 *)*puVar3);
    }
    else {
      puVar3 = (undefined4 *)((undefined4 *)puVar3[2]);
    }
    param_2[1] = (int)((uint)(cVar2 == '\0'));
    cVar2 = (char)(*(char *)((int)puVar3 + 0xd));
  }
  return (int *)(param_2);
}


// Reference entry 1000279d; body size 5 bytes.
#line 1 "ENTRY_1000279d"

undefined4 __fastcall FUN_1000279d(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x24) + 0x168))(param_1));
    return (undefined4)(uVar1);
  }
  return (undefined4)(0xffffffff);
}


// Reference entry 100027a7; body size 5 bytes.
#line 1 "ENTRY_100027a7"

void FUN_100027a7(void)

{
 try {
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  int *piStack_3c;
  undefined4 uStack_38;
  undefined *puStack_34;
  undefined4 uStack_30;
  undefined *puStack_2c;
  undefined4 uStack_28;
  undefined *puStack_24;
  undefined4 uStack_20;
  undefined *puStack_1c;
  undefined4 uStack_18;
  undefined *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_10413900(&piStack_3c,DAT_12126b84 ));

  cVar1 = (char)((**(code **)(*(int *)*puVar2 + 0x3c))());

  if (piStack_3c != (int *)0x0) {
    (**(code **)(*piStack_3c + 8))();
  }

  if (cVar1 == '\0') {
    thunk_FUN_10ef0ba0(0,&DAT_121a6ce4);
    thunk_FUN_10ef0ba0(1,&DAT_121a6d24);
    thunk_FUN_10ef0ba0(2,&DAT_121a6c88);
    thunk_FUN_10ef0ba0(3,&DAT_121a6cf4);
    uVar6 = (undefined4)(10);

    puVar5 = (undefined *)(&DAT_121a6d00);
    puStack_34 = (undefined *)(&DAT_121a6cb4);

    puVar4 = (undefined *)(&DAT_121a6c9c);
    puStack_2c = (undefined *)(&DAT_121a6d34);

    uVar3 = (undefined4)(4);
    puStack_24 = (undefined *)(&DAT_121a6c8c);

    puStack_1c = (undefined *)(&DAT_121a6ca4);

    puStack_14 = (undefined *)(&DAT_121a6ce8);
  }
  else {
    uVar6 = (undefined4)(0x11);

    puVar5 = (undefined *)(&DAT_121a6d1c);
    puStack_34 = (undefined *)(&DAT_121a6d18);

    uVar3 = (undefined4)(0xb);
    puStack_2c = (undefined *)(&DAT_121a6d30);
    puVar4 = (undefined *)(&DAT_121a6ca8);

    puStack_24 = (undefined *)(&DAT_121a6cf0);

    puStack_1c = (undefined *)(&DAT_121a6d20);

    puStack_14 = (undefined *)(&DAT_121a6d28);
  }
  thunk_FUN_10ef0ba0(uVar3,puVar4);
  thunk_FUN_10ef0ba0(uStack_18,puStack_14);
  thunk_FUN_10ef0ba0(uStack_20,puStack_1c);
  thunk_FUN_10ef0ba0(uStack_28,puStack_24);
  thunk_FUN_10ef0ba0(uStack_30,puStack_2c);
  thunk_FUN_10ef0ba0(uStack_38,puStack_34);
  thunk_FUN_10ef0ba0(uVar6,puVar5);

  return;

 } catch (...) { }
}


// Reference entry 100027c5; body size 5 bytes.
#line 1 "ENTRY_100027c5"

undefined4 * __thiscall Recovered_Bulk::FUN_100027c5(byte param_2)
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


// Reference entry 100027e8; body size 5 bytes.
#line 1 "ENTRY_100027e8"

undefined4 * __thiscall Recovered_Bulk::FUN_100027e8(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  undefined4 *puVar1;
  undefined4 uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  puVar1 = (undefined4 *)(operator_new(0xec));

  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCVoiceServiceLocaleSelectionPage);
    puVar1[4] = (undefined4)((uint)&ghidra_vftable_SCVoiceServiceLocaleSelectionPage);
    puVar1[0x23] = (undefined4)((uint)&ghidra_vftable_SCVoiceServiceLocaleSelectionPage);
    puVar1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCVoiceServiceLocaleSelectionPage);
    puVar1[0x38] = (undefined4)(0);
    puVar1[0x39] = (undefined4)(0);
    puVar1[0x3a] = (undefined4)(0);

    return (undefined4 *)(puVar1);
  }

  return (undefined4 *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 100027ed; body size 5 bytes.
#line 1 "ENTRY_100027ed"

undefined4 * __thiscall Recovered_Bulk::FUN_100027ed(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2830 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 100027f2; body size 5 bytes.
#line 1 "ENTRY_100027f2"

undefined4 * __thiscall Recovered_Bulk::FUN_100027f2(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2390 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10002801; body size 5 bytes.
#line 1 "ENTRY_10002801"

void FUN_10002801(void)

{
  thunk_FUN_1049ceb0();
  return;
}


// Reference entry 10002829; body size 5 bytes.
#line 1 "ENTRY_10002829"

void __fastcall FUN_10002829(undefined4 *param_1)

{
  thunk_FUN_10272fd0(*param_1,param_1[1],param_1[2]);
  return;
}


// Reference entry 10002833; body size 5 bytes.
#line 1 "ENTRY_10002833"

undefined4 __fastcall FUN_10002833(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10002838; body size 5 bytes.
#line 1 "ENTRY_10002838"

undefined4 FUN_10002838(int param_1,undefined2 *param_2,int param_3)

{
  int iVar1;
  ushort uVar2;
  uint _Size;
  undefined2 *puVar3;
  undefined8 uVar4;
  
  iVar1 = (int)(*(int *)(param_1 + 0x3c));
  uVar4 = (undefined8)(FUN_113fef30(param_2,param_3 + (int)param_2,2));
  puVar3 = (undefined2 *)((undefined2 *)((ulonglong)uVar4 >> 0x20));
  if ((int)uVar4 == 0) {
    uVar2 = (ushort)(((uint)((char)*param_2) << 8 | (uint)((char)((ushort)*param_2 >> 8))));
    _Size = (uint)((uint)uVar2);
    param_2 = (undefined2 *)(param_2 + 1);
    if ((param_2 <= puVar3) && (_Size <= (uint)((int)puVar3 - (int)param_2))) {
      if (0x210 < uVar2) {
        return (undefined4)(0xffff9200);
      }
      memcpy((void *)(iVar1 + 0x10d),param_2,_Size);
      *(uint *)(iVar1 + 800) = _Size;
      return (undefined4)(0);
    }
  }
  thunk_FUN_113e50f0(param_1,0x32,0xffff8d00);
  return (undefined4)(0xffff8d00);
}


// Reference entry 1000283d; body size 5 bytes.
#line 1 "ENTRY_1000283d"

void FUN_1000283d(int *param_1,uint param_2,uint param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  
  uVar1 = (uint)(*param_5);
  if (uVar1 < param_2) {
    *param_5 = (uint)(uVar1 + 1);
    return;
  }
  if (*param_4 < param_3) {
    (**(code **)(*param_1 + 0xc))("search",&DAT_118872c0,0,0xffffffff);
    (**(code **)(*param_1 + 0x20))("http://purl.org/dc/elements/1.1/|title","search");
    (**(code **)(*param_1 + 0x20))
              ("urn:schemas-upnp-org:metadata-1-0/upnp/|class","object.container.sonos-searchTypes")
    ;
    (**(code **)(*param_1 + 0x2c))();
    *param_4 = (uint)(*param_4 + 1);
    *param_5 = (uint)(*param_5 + 1);
    return;
  }
  *param_5 = (uint)(uVar1 + 1);
  return;
}


// Reference entry 10002847; body size 5 bytes.
#line 1 "ENTRY_10002847"

void __fastcall FUN_10002847(int *param_1)

{
  void *pvVar1;
  char cVar2;
  int iVar3;
  uint _MaxCount;
  int *piVar4;
  void *pvVar5;
  uint uVar6;
  int *piVar7;
  uint _Size;
  undefined1 auStack_19c [3];
  char cStack_199;
  undefined1 *puStack_198;
  int *piStack_194;
  void *pvStack_190;
  int *piStack_18c;
  int *piStack_188;
  undefined1 auStack_184 [128];
  undefined1 auStack_104 [256];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)auStack_19c);
  piStack_188 = (int *)(param_1);
  iVar3 = (int)(thunk_FUN_112a8860(param_1 + 0x102));
  if (iVar3 < 0x101) {
    if (iVar3 < 1) {
      if (((iVar3 == 0) && (param_1[0x20d] != 3)) && (param_1[0x20d] != 4)) {
        piVar4 = (int *)(_errno());
        thunk_FUN_1145c720(auStack_184,0x80,"lost connection: errno=%d",*piVar4);
        (**(code **)(*param_1 + 0xc))(param_1[0x20d],0x3e9,auStack_184);
        thunk_FUN_1148ac28();
        return;
      }
      goto LAB_1114c508;
    }
  }
  else {
    iVar3 = (int)(0x100);
  }
  _MaxCount = (uint)(thunk_FUN_112a90b0(param_1 + 0x102,auStack_104,iVar3));
  if ((int)_MaxCount < 0) {
    piVar4 = (int *)(_errno());
    thunk_FUN_112af4e0("updatemgr",1,"SocketAvailableReadBytes() returned %d (errno=%d)",_MaxCount,
                       *piVar4);
    (**(code **)(*param_1 + 0xc))(param_1[0x20d],0x3f2,&DAT_1186d2ee);
    thunk_FUN_1148ac28();
    return;
  }
  if (0 < (int)_MaxCount) {
    thunk_FUN_1145c930(param_1 + 0x211,0);
    param_1[0x210] = (int)(0);
  }
  puStack_198 = (undefined1 *)(auStack_104);
  piVar4 = (int *)(param_1 + 0x109);
  piStack_194 = (int *)(piVar4);
  if (_MaxCount != 0) {
    piStack_18c = (int *)(param_1 + 0x10c);
    do {
      piVar7 = (int *)(piStack_18c);
      do {
        iVar3 = (int)(*piVar7);
        piVar7 = (int *)((int *)((int)piVar7 + 1));
      } while ((char)iVar3 != '\0');
      iVar3 = (int)((int)piVar7 - (int)((int)piStack_18c + 1));
      pvStack_190 = (void *)((void *)((int)piVar4 + iVar3 + 0xc));
      pvVar5 = (void *)(memchr(puStack_198,10,_MaxCount));
      pvVar1 = (void *)(pvStack_190);
      cStack_199 = (char)('\0');
      if (pvVar5 == (void *)0x0) {
        uVar6 = (uint)(_MaxCount);
        _Size = (uint)(0x400U - iVar3);
        if (_MaxCount < 0x400U - iVar3) {
          _Size = (uint)(_MaxCount);
        }
      }
      else {
        _Size = (uint)((int)pvVar5 - (int)puStack_198);
        cStack_199 = (char)('\x01');
        uVar6 = (uint)(_Size + 1);
        if (0x400U - iVar3 <= _Size) {
          _Size = (uint)(0x400U - iVar3);
        }
      }
      memcpy(pvStack_190,puStack_198,_Size);
      piVar4 = (int *)(piStack_194);
      _MaxCount = (uint)(_MaxCount - uVar6);
      puStack_198 = (undefined1 *)(puStack_198 + uVar6);
      *(undefined1 *)(_Size + (int)pvVar1) = 0;
      if (cStack_199 != '\0') {
        cVar2 = (char)(thunk_FUN_1114baf0());
        *(undefined1 *)(piVar4 + 3) = 0;
        if (cVar2 == '\0') {
          (**(code **)(*piStack_188 + 0xc))(piStack_188[0x20d],0x3f2,&DAT_1186d2ee);
          break;
        }
      }
    } while (_MaxCount != 0);
  }
LAB_1114c508:
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 10002851; body size 5 bytes.
#line 1 "ENTRY_10002851"

void __fastcall FUN_10002851(int param_1)

{
  if (*(void **)(param_1 + 8) != (void *)(param_1 + 0xc)) {
    free(*(void **)(param_1 + 8));
  }
  return;
}


// Reference entry 1000285b; body size 5 bytes.
#line 1 "ENTRY_1000285b"

void __fastcall FUN_1000285b(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)(0xfe);
  thunk_FUN_110c2c60(0xfe);
  iVar1 = (int)(thunk_FUN_110c20d0(uVar2));
  if (iVar1 == 0) {
    return;
  }
  (**(code **)(*param_1 + 0xe4))();
                    
                    
  (**(code **)(*(int *)param_1[0x31] + 0x40))();
  return;
}


// Reference entry 10002865; body size 5 bytes.
#line 1 "ENTRY_10002865"

void FUN_10002865(void)

{
  thunk_FUN_10f92080();
  return;
}


// Reference entry 1000286a; body size 5 bytes.
#line 1 "ENTRY_1000286a"

int * __thiscall Recovered_Bulk::FUN_1000286a(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x28));
  *param_2 = (int)((int)piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10002874; body size 5 bytes.
#line 1 "ENTRY_10002874"

void FUN_10002874(void)

{
  return;
}


// Reference entry 10002888; body size 5 bytes.
#line 1 "ENTRY_10002888"

void __fastcall FUN_10002888(int param_1)

{
  SCThreadSafeInc((long *)(param_1 + 4));
  return;
}


// Reference entry 10002892; body size 5 bytes.
#line 1 "ENTRY_10002892"

undefined1 FUN_10002892(void)

{
  return (undefined1)(1);
}


// Reference entry 10002897; body size 5 bytes.
#line 1 "ENTRY_10002897"

void FUN_10002897(void)

{
  thunk_FUN_10962b70();
  return;
}


// Reference entry 1000289c; body size 5 bytes.
#line 1 "ENTRY_1000289c"

void FUN_1000289c(void)

{
 try {
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (undefined4)(thunk_FUN_10dfbb10(DAT_12126b84 ));

  cVar1 = (char)(thunk_FUN_10def450(uVar2));

  thunk_FUN_10def0d0();
  if (cVar1 != '\0') {
    thunk_FUN_10ebbab0(0x4048);

    return;
  }
  uVar2 = (undefined4)(thunk_FUN_10dfcab0());

  cVar1 = (char)(thunk_FUN_10def490(uVar2));

  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  if (cVar1 != '\0') {
    iVar3 = (int)(thunk_FUN_10eb41b0());
    *(undefined1 *)(iVar3 + 0x110) = 1;
  }

  return;

 } catch (...) { }
}


// Reference entry 100028a6; body size 5 bytes.
#line 1 "ENTRY_100028a6"

void FUN_100028a6(void)

{
  thunk_FUN_107839d0();
  return;
}


// Reference entry 100028bf; body size 5 bytes.
#line 1 "ENTRY_100028bf"

undefined4 FUN_100028bf(undefined4 param_1)

{
  createPropertyBag();
  return (undefined4)(param_1);
}


// Reference entry 100028c9; body size 5 bytes.
#line 1 "ENTRY_100028c9"

void FUN_100028c9(void)

{
  thunk_FUN_103a9a30();
  return;
}


// Reference entry 100028f1; body size 5 bytes.
#line 1 "ENTRY_100028f1"

void FUN_100028f1(void)

{
  return;
}


// Reference entry 100028f6; body size 5 bytes.
#line 1 "ENTRY_100028f6"

void _CSharp_delete_SCIOpCBSwigBase_4(int *param_1)

{
                    
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 10002900; body size 5 bytes.
#line 1 "ENTRY_10002900"

undefined4 FUN_10002900(void)

{
  return (undefined4)(0);
}


// Reference entry 1000291e; body size 5 bytes.
#line 1 "ENTRY_1000291e"

void FUN_1000291e(int param_1)

{
 try {
  int iVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;

  if ((param_1 != 0) && (*(int *)(param_1 + -0x10) < 0xffff)) {
    iVar1 = (int)(thunk_FUN_1123fcd0((void *)(param_1 + -0x10),DAT_12126b84 ));
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + -8) = 0;
      *(undefined4 *)(param_1 + -0xc) = 0;
      thunk_FUN_113cfb70(param_1,*(undefined4 *)(param_1 + -4));
      free((void *)(param_1 + -0x10));
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 10002923; body size 5 bytes.
#line 1 "ENTRY_10002923"

void __fastcall FUN_10002923(int param_1)

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


// Reference entry 10002932; body size 5 bytes.
#line 1 "ENTRY_10002932"

void FUN_10002932(void)

{
  thunk_FUN_10b36140();
  return;
}


// Reference entry 1000293c; body size 5 bytes.
#line 1 "ENTRY_1000293c"

int __thiscall Recovered_Bulk::FUN_1000293c(byte param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)(*(int **)(param_1 + 0x104));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)(*(int **)(param_1 + 0xf8));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)(*(int **)(param_1 + 0xec));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10c);
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 10002941; body size 5 bytes.
#line 1 "ENTRY_10002941"

void FUN_10002941(void)

{
  thunk_FUN_1091c4a0();
  return;
}


// Reference entry 10002946; body size 5 bytes.
#line 1 "ENTRY_10002946"

void FUN_10002946(void)

{
  thunk_FUN_10894010();
  return;
}


// Reference entry 10002964; body size 5 bytes.
#line 1 "ENTRY_10002964"

undefined1 * __fastcall FUN_10002964(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x6628) != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x6628));
  }
  return (undefined1 *)(puVar1);
}


// Reference entry 10002978; body size 5 bytes.
#line 1 "ENTRY_10002978"

uint __fastcall FUN_10002978(int param_1)

{
  return (uint)(*(uint *)(param_1 + 0x14) >> 3 & 0xffffff01);
}


// Reference entry 10002982; body size 5 bytes.
#line 1 "ENTRY_10002982"

undefined4 * FUN_10002982(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  int *piVar4;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar1 = (uint)(DAT_12126b84);

  pvVar2 = (void *)(operator_new(0x14));

  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)thunk_FUN_103be5e0(uVar1));
  }

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }

  if (piVar3 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
  }
  uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(3)));
  *param_1 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }

  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10002991; body size 5 bytes.
#line 1 "ENTRY_10002991"

undefined1 _CSharp_SCIInAppMessaging_hasDeviceToken_4(int *param_1)

{
  undefined1 uVar1;
  
                    
  uVar1 = (undefined1)((**(code **)(*param_1 + 0x1c))());
  return (undefined1)(uVar1);
}


// Reference entry 1000299b; body size 5 bytes.
#line 1 "ENTRY_1000299b"

undefined4 * FUN_1000299b(undefined4 *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  int *piStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_102517b0(&piStack_14,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);

  if (piStack_14 != (int *)0x0) {
    (**(code **)(*piStack_14 + 8))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 100029af; body size 5 bytes.
#line 1 "ENTRY_100029af"

void FUN_100029af(void)

{
  FUN_1118c830();
  return;
}


// Reference entry 100029b9; body size 5 bytes.
#line 1 "ENTRY_100029b9"

void FUN_100029b9(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = (uint)((uint)((int)param_2 + (3 - (int)param_1)) >> 2);
  if (param_2 < param_1) {
    uVar3 = (uint)(0);
  }
  puVar2 = (undefined4 *)(param_1);
  if ((uVar3 != 0) && (3 < uVar3)) {
    uVar1 = (undefined4)(*param_3);
    if ((param_3 < param_1) || (param_1 + (uVar3 - 1) < param_3)) {
      puVar2 = (undefined4 *)(param_1 + (uVar3 & 0xfffffffc));
      for (uVar3 = (uint)(uVar3 & 0x3ffffffc); uVar3 != 0; uVar3 = uVar3 - 1) {
        *param_1 = (undefined4)(uVar1);
        param_1 = (undefined4 *)(param_1 + 1);
      }
    }
  }
  for (; puVar2 != (undefined4 *)(param_2); puVar2 = puVar2 + 1) {
    *puVar2 = (undefined4)(*param_3);
  }
  return;
}


// Reference entry 100029f5; body size 5 bytes.
#line 1 "ENTRY_100029f5"

undefined4 * __thiscall Recovered_Bulk::FUN_100029f5(byte param_2)
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


// Reference entry 10002a04; body size 5 bytes.
#line 1 "ENTRY_10002a04"

undefined4 * __thiscall Recovered_Bulk::FUN_10002a04(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10002a18; body size 5 bytes.
#line 1 "ENTRY_10002a18"

void FUN_10002a18(void)

{
  thunk_FUN_1057cc60();
  return;
}


// Reference entry 10002a1d; body size 5 bytes.
#line 1 "ENTRY_10002a1d"

void __fastcall FUN_10002a1d(int param_1)

{
 try {
  int *piVar1;
  int *piStack_18;
  int *piStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  thunk_FUN_101f6530(&piStack_18,DAT_12126b84 );

  (**(code **)(*piStack_18 + 0x28))(param_1 + 0x30,param_1 + 0x28,param_1 + 0x2c);
  piVar1 = (int *)(piStack_14);

  if (piStack_14 != (int *)0x0) {
    piStack_18 = (int *)((int *)0x0);
    piStack_14 = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 10002a22; body size 5 bytes.
#line 1 "ENTRY_10002a22"

undefined4 __thiscall Recovered_Bulk::FUN_10002a22(undefined4 *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  undefined1 *puVar2;
  
  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)((undefined1 *)*param_2);
  }
  iVar1 = (int)((**(code **)(*(int *)(param_1 + 0xc) + 4))(puVar2,1));
  if (iVar1 != 0) {
    return (undefined4)(*(undefined4 *)(iVar1 + 0x534));
  }
  return (undefined4)(0);
}


// Reference entry 10002a2c; body size 5 bytes.
#line 1 "ENTRY_10002a2c"

undefined4 __fastcall FUN_10002a2c(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10002a36; body size 5 bytes.
#line 1 "ENTRY_10002a36"

undefined4 FUN_10002a36(void)

{
  return (undefined4)(DAT_121a2da0);
}


// Reference entry 10002a40; body size 5 bytes.
#line 1 "ENTRY_10002a40"

void _CSharp_SCIChirpDelegate_startChirpReceiving_8(int *param_1,undefined4 param_2)

{
                    
  (**(code **)(*param_1 + 0x14))(param_2);
  return;
}


// Reference entry 10002a45; body size 5 bytes.
#line 1 "ENTRY_10002a45"

void __fastcall FUN_10002a45(int param_1)

{
  undefined1 auStack_20 [28];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)auStack_20);
  if (*(code **)(param_1 + 0xc) != (code *)0x0) {
    (**(code **)(param_1 + 0xc))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIWifiDelegateSwigBase::canJoinSSIDs");
                    
  _CxxThrowException(auStack_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10002a63; body size 5 bytes.
#line 1 "ENTRY_10002a63"

void __fastcall FUN_10002a63(int param_1)

{
  if (*(char *)(param_1 + 0x1964) == '\0') {
    *(undefined1 *)(param_1 + 0x1964) = 1;
    thunk_FUN_110828b0();
    thunk_FUN_110944c0();
    return;
  }
  return;
}


// Reference entry 10002a68; body size 5 bytes.
#line 1 "ENTRY_10002a68"

undefined4 FUN_10002a68(int param_1,undefined1 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = (int)(thunk_FUN_111a5a30(param_1,&DAT_1211ed48,7));
  uVar1 = (uint)(*(uint *)(param_1 + 0xc));
  if (((iVar2 != 0) && (*param_2 = 1, *(uint *)(iVar2 + 0xc) <= uVar1)) &&
     (uVar1 <= *(uint *)(iVar2 + 0x10))) {
    uVar3 = (undefined4)((**(code **)(iVar2 + 0x14))
                      (*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
                       *(undefined4 *)(param_1 + 8)));
    return (undefined4)(uVar3);
  }
  return (undefined4)(0);
}


// Reference entry 10002a77; body size 5 bytes.
#line 1 "ENTRY_10002a77"

int * FUN_10002a77(int *param_1)

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


// Reference entry 10002a7c; body size 5 bytes.
#line 1 "ENTRY_10002a7c"

undefined4 __fastcall FUN_10002a7c(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x1c));
}


// Reference entry 10002a9a; body size 5 bytes.
#line 1 "ENTRY_10002a9a"

undefined4 FUN_10002a9a(int param_1)

{
  if (((param_1 != 0) && (param_1 != 1)) && (param_1 != 4)) {
    return (undefined4)(0);
  }
  return (undefined4)(1);
}


// Reference entry 10002ac7; body size 5 bytes.
#line 1 "ENTRY_10002ac7"

undefined4 * __thiscall Recovered_Bulk::FUN_10002ac7(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined4 uVar7;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0xc0));

  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    iVar4 = (int)(thunk_FUN_10eae150(uVar1));
    if (iVar4 == 0) {
      pvVar6 = (void *)(operator_new(0x108));
      *(unsigned char *)((char *)&uStack_8 + 0) = 1;
      if (pvVar6 == (void *)0x0) {
        uVar5 = (undefined4)(0);
      }
      else {
        uVar5 = (undefined4)(uVar3);
        uVar7 = (undefined4)(thunk_FUN_10758340(uVar3));
        uVar5 = (undefined4)(thunk_FUN_10eae0a0(uVar7,uVar5));
        uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(2)));
        uVar5 = (undefined4)(thunk_FUN_107593f0(uVar5));
      }

    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCNetworkTroubleshootAppVersionCheckSubwiz);
    puVar2[4] = (undefined4)((uint)&ghidra_vftable_SCNetworkTroubleshootAppVersionCheckSubwiz);
    puVar2[0x23] = (undefined4)((uint)&ghidra_vftable_SCNetworkTroubleshootAppVersionCheckSubwiz);
    puVar2[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNetworkTroubleshootAppVersionCheckSubwiz);

    return (undefined4 *)(puVar2);
  }

  return (undefined4 *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 10002ad6; body size 5 bytes.
#line 1 "ENTRY_10002ad6"

void FUN_10002ad6(void)

{
  thunk_FUN_10791cf0();
  return;
}


// Reference entry 10002adb; body size 5 bytes.
#line 1 "ENTRY_10002adb"

undefined4 * __thiscall Recovered_Bulk::FUN_10002adb(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2c90 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10002ae0; body size 5 bytes.
#line 1 "ENTRY_10002ae0"

undefined4 * __thiscall Recovered_Bulk::FUN_10002ae0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10002aea; body size 5 bytes.
#line 1 "ENTRY_10002aea"

undefined4 FUN_10002aea(undefined4 param_1)

{
 try {
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 auStack_74 [32];
  undefined1 auStack_54 [32];
  undefined **ppuStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 *puStack_20;
  undefined4 *puStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  uStack_14 = (undefined4)(DAT_121a22d8);
  thunk_FUN_105f5920(&uStack_14);
  uStack_14 = (undefined4)(DAT_121a22e8);

  thunk_FUN_105f5920(&uStack_14);
  ppuStack_34 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTree);

  iStack_2c = (int)(0);

  iStack_24 = (int)(0);
  puStack_20 = (undefined4 *)((undefined4 *)0x0);
  puStack_1c = (undefined4 *)((undefined4 *)0x0);
  iStack_18 = (int)(0);
  uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(2)));
  thunk_FUN_10ebc1e0(uVar2);
  piVar3 = (int *)((int *)(*(code *)ppuStack_34[2])(1,auStack_54));
  piVar3 = (int *)((int *)(**(code **)(*piVar3 + 0x10))(auStack_74));
  uVar4 = (undefined4)((**(code **)(*piVar3 + 4))());
  thunk_FUN_105f5a00(uVar4);
  puVar1 = (undefined4 *)(puStack_1c);
  puVar6 = (undefined4 *)(puStack_20);
  if (puStack_20 != (undefined4 *)0x0) {
    for (; (undefined4 *)(puVar6) != puVar1; puVar6 = puVar6 + 8) {
      (**(code **)*puVar6)(0);
    }
    uVar2 = (uint)(iStack_18 - (int)puStack_20 & 0xffffffe0);
    puVar6 = (undefined4 *)(puStack_20);
    if (0xfff < uVar2) {
      puVar6 = (undefined4 *)((undefined4 *)puStack_20[-1]);
      uVar2 = (uint)(uVar2 + 0x23);
      if (0x1f < (uint)((int)puStack_20 + (-4 - (int)puVar6))) goto LAB_1063c33c;
    }
    thunk_FUN_1148a50e(puVar6,uVar2);
    puStack_20 = (undefined4 *)((undefined4 *)0x0);
    puStack_1c = (undefined4 *)((undefined4 *)0x0);
    iStack_18 = (int)(0);
  }
  if (iStack_2c != 0) {
    uVar2 = (uint)(iStack_24 - iStack_2c & 0xfffffffc);
    iVar5 = (int)(iStack_2c);
    if (0xfff < uVar2) {
      iVar5 = (int)(*(int *)(iStack_2c + -4));
      uVar2 = (uint)(uVar2 + 0x23);
      if (0x1f < (iStack_2c - iVar5) - 4U) {
LAB_1063c33c:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar5,uVar2);
    iStack_2c = (int)(0);

    iStack_24 = (int)(0);
  }
  ppuStack_34 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 10002afe; body size 5 bytes.
#line 1 "ENTRY_10002afe"

undefined4 __thiscall Recovered_Bulk::FUN_10002afe(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103df9a0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 10002b12; body size 5 bytes.
#line 1 "ENTRY_10002b12"

void FUN_10002b12(undefined4 param_1)

{
  thunk_FUN_103d61d0(param_1,0);
  return;
}


// Reference entry 10002b26; body size 5 bytes.
#line 1 "ENTRY_10002b26"

undefined1 _CSharp_SCIBrowseDataSource_isGone_4(int *param_1)

{
  undefined1 uVar1;
  
                    
  uVar1 = (undefined1)((**(code **)(*param_1 + 0x90))());
  return (undefined1)(uVar1);
}


// Reference entry 10002b49; body size 5 bytes.
#line 1 "ENTRY_10002b49"

void FUN_10002b49(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x20) {
    thunk_FUN_10d5e270();
  }
  return;
}


// Reference entry 10002b76; body size 5 bytes.
#line 1 "ENTRY_10002b76"

void FUN_10002b76(void)

{
  thunk_FUN_1077c420();
  return;
}


// Reference entry 10002b8a; body size 5 bytes.
#line 1 "ENTRY_10002b8a"

int __fastcall FUN_10002b8a(int param_1)

{
  return (int)(param_1 + 8);
}


// Reference entry 10002b94; body size 5 bytes.
#line 1 "ENTRY_10002b94"

void __thiscall Recovered_Bulk::FUN_10002b94(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  int *piVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  piVar1 = (int *)((int *)(param_1 + -8));
  piVar2 = (int *)((int *)0x0);
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(DAT_12126b84 ));
    (**(code **)(*piVar2 + 4))();
  }
  *(short *)(param_1 + 0x1c) = (short)param_3;

  *(undefined4 *)(param_1 + 0x14) = 0;
  (**(code **)(*(int *)(param_1 + 0x28) + 0x18))();
  if ((((*(char **)(param_1 + 0x20) != (char *)0x0) && (**(char **)(param_1 + 0x20) != '\0')) &&
      (*(char **)(param_1 + 0x24) != (char *)0x0)) && (**(char **)(param_1 + 0x24) != '\0')) {
    (**(code **)(*piVar1 + 0x38))();
  }
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 4) + 0x14))(param_2,param_3);
    piVar1 = (int *)(*(int **)(param_1 + 8));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }

  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 10002b99; body size 5 bytes.
#line 1 "ENTRY_10002b99"

void __thiscall Recovered_Bulk::FUN_10002b99(uint param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  void *pvVar2;
  int iVar3;
  void *_Dst;
  uint uVar4;
  uint uVar5;
  int iVar6;
  size_t sVar7;
  size_t _Size;
  
  uVar5 = (uint)(*(uint *)(param_1 + 8));
  uVar1 = (uint)(1);
  if (uVar5 != 0) {
    uVar1 = (uint)(uVar5);
  }
  for (; (uVar4 = (uint)(uVar1 - uVar5, uVar4 < param_2 || (uVar1 < 8))); uVar1 = uVar1 * 2) {
    if (0xfffffff - uVar1 < uVar1) {
      thunk_FUN_103aba20();
LAB_103aa9a2:
                    
      thunk_FUN_1012a2a0();
    }
  }
  uVar5 = (uint)(*(uint *)(param_1 + 0xc) >> 1);
  if (0x3fffffff < uVar1) goto LAB_103aa9a2;
  uVar1 = (uint)(uVar1 * 4);
  if (uVar1 < 0x1000) {
    if (uVar1 == 0) {
      _Dst = (void *)((void *)0x0);
    }
    else {
      _Dst = (void *)(operator_new(uVar1));
    }
  }
  else {
    if (uVar1 + 0x23 <= uVar1) goto LAB_103aa9a2;
    pvVar2 = (void *)(operator_new(uVar1 + 0x23));
    if (pvVar2 == (void *)0x0) goto LAB_103aa995;
    _Dst = (void *)((void *)((int)pvVar2 + 0x23U & 0xffffffe0));
    *(void **)((int)_Dst - 4) = pvVar2;
  }
  iVar6 = (int)(uVar5 * 4);
  pvVar2 = (void *)((void *)(*(int *)(param_1 + 4) + iVar6));
  sVar7 = (size_t)((*(int *)(param_1 + 8) * 4 - (int)pvVar2) + *(int *)(param_1 + 4));
  memmove((void *)(iVar6 + (int)_Dst),pvVar2,sVar7);
  pvVar2 = (void *)((void *)(sVar7 + iVar6 + (int)_Dst));
  if (uVar4 < uVar5) {
    sVar7 = (size_t)(uVar4 * 4);
    memmove(pvVar2,*(void **)(param_1 + 4),sVar7);
    pvVar2 = (void *)((void *)(sVar7 + *(int *)(param_1 + 4)));
    _Size = (size_t)((*(int *)(param_1 + 4) - (int)pvVar2) + iVar6);
    memmove(_Dst,pvVar2,_Size);
    memset((void *)((int)_Dst + _Size),0,sVar7);
  }
  else {
    sVar7 = (size_t)(uVar5 * 4);
    memmove(pvVar2,*(void **)(param_1 + 4),sVar7);
    memset((void *)((int)pvVar2 + sVar7),0,(uVar4 - uVar5) * 4);
    memset(_Dst,0,sVar7);
  }
  iVar6 = (int)(*(int *)(param_1 + 4));
  if (iVar6 != 0) {
    uVar5 = (uint)(*(int *)(param_1 + 8) * 4);
    iVar3 = (int)(iVar6);
    if (0xfff < uVar5) {
      iVar3 = (int)(*(int *)(iVar6 + -4));
      uVar5 = (uint)(uVar5 + 0x23);
      if (0x1f < (iVar6 - iVar3) - 4U) {
LAB_103aa995:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar3,uVar5);
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + uVar4;
  *(void **)(param_1 + 4) = _Dst;
  return;
}


// Reference entry 10002ba3; body size 5 bytes.
#line 1 "ENTRY_10002ba3"

undefined4 __fastcall FUN_10002ba3(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10002bc1; body size 5 bytes.
#line 1 "ENTRY_10002bc1"

undefined4 * FUN_10002bc1(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  int *piVar4;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar1 = (uint)(DAT_12126b84);

  pvVar2 = (void *)(operator_new(0x14));

  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)thunk_FUN_103be5e0(uVar1));
  }

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }

  if (piVar3 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
  }
  uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(3)));
  FUN_102440a0(piVar3,1,1,1,1,1);
  *param_1 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }

  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10002bc6; body size 5 bytes.
#line 1 "ENTRY_10002bc6"

void __fastcall FUN_10002bc6(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwfObjBCListener);
  return;
}


// Reference entry 10002bda; body size 5 bytes.
#line 1 "ENTRY_10002bda"

undefined4 _CSharp_SCILinkSettingsProperty_SWIGUpcast_4(undefined4 param_1)

{
                    
  return (undefined4)(param_1);
}


// Reference entry 10002c02; body size 5 bytes.
#line 1 "ENTRY_10002c02"

void FUN_10002c02(void)

{
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [24];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)auStack_2c);
  thunk_FUN_112a8d70(auStack_2c,auStack_1c,0,0);
  Ordinal_8(0xffff0000);
  Ordinal_8(0xa9fe0000);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 10002c11; body size 5 bytes.
#line 1 "ENTRY_10002c11"

undefined4 __fastcall FUN_10002c11(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x10));
}


// Reference entry 10002c16; body size 5 bytes.
#line 1 "ENTRY_10002c16"

undefined4 __thiscall Recovered_Bulk::FUN_10002c16(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10e27070();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68);
  }
  return (undefined4)(param_1);
}


// Reference entry 10002c1b; body size 5 bytes.
#line 1 "ENTRY_10002c1b"

undefined1 FUN_10002c1b(void)

{
  return (undefined1)(0);
}


// Reference entry 10002c2f; body size 5 bytes.
#line 1 "ENTRY_10002c2f"

void FUN_10002c2f(void)

{
  thunk_FUN_10bfbc80();
  return;
}


// Reference entry 10002c34; body size 5 bytes.
#line 1 "ENTRY_10002c34"

undefined4 * __thiscall Recovered_Bulk::FUN_10002c34(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10002c39; body size 5 bytes.
#line 1 "ENTRY_10002c39"

void FUN_10002c39(void)

{
 try {
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (undefined4)(thunk_FUN_10dfbb10(DAT_12126b84 ));

  cVar1 = (char)(thunk_FUN_10def450(uVar2));

  thunk_FUN_10def0d0();
  if (cVar1 != '\0') {
    iVar3 = (int)(thunk_FUN_10eb41b0());
    thunk_FUN_10ebb8e0("openApBootWait",*(undefined4 *)(iVar3 + 0x148));
  }

  return;

 } catch (...) { }
}


// Reference entry 10002c48; body size 5 bytes.
#line 1 "ENTRY_10002c48"

void FUN_10002c48(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xe8);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf3630(iVar1);
  iVar1 = (int)(thunk_FUN_10eb41b0());
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


// Reference entry 10002c4d; body size 5 bytes.
#line 1 "ENTRY_10002c4d"

void FUN_10002c4d(void)

{
  thunk_FUN_1081b390();
  return;
}


// Reference entry 10002c6b; body size 5 bytes.
#line 1 "ENTRY_10002c6b"

void __thiscall Recovered_Bulk::FUN_10002c6b(void)
{
  int param_1 = (int )this;
  undefined4 in_stack_00000014;
  
  *(undefined4 *)(param_1 + 0x3c) = in_stack_00000014;
  thunk_FUN_102082f0();
  return;
}


// Reference entry 10002c7a; body size 5 bytes.
#line 1 "ENTRY_10002c7a"

void __fastcall FUN_10002c7a(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCDBrowseProcessor);
  FUN_1003d5d7();
  return;
}


// Reference entry 10002cb1; body size 5 bytes.
#line 1 "ENTRY_10002cb1"

void __fastcall FUN_10002cb1(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = (int)(0);
  if (param_1[1] != 0) {
    thunk_FUN_10f87140(*param_1,param_1[1] + 8);
    iVar1 = (int)(param_1[1]);
  }
  if (iVar1 != 0) {
    thunk_FUN_1148a50e(iVar1,0x24);
  }
  return;
}


// Reference entry 10002cbb; body size 5 bytes.
#line 1 "ENTRY_10002cbb"

undefined1 FUN_10002cbb(void)

{
  return (undefined1)(1);
}


// Reference entry 10002cc0; body size 5 bytes.
#line 1 "ENTRY_10002cc0"

undefined4 FUN_10002cc0(undefined1 *param_1)

{
  *param_1 = (undefined1)(1);
  return (undefined4)(1);
}


// Reference entry 10002cc5; body size 5 bytes.
#line 1 "ENTRY_10002cc5"

undefined1 __fastcall FUN_10002cc5(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x42));
}


// Reference entry 10002ce3; body size 5 bytes.
#line 1 "ENTRY_10002ce3"

undefined4 * __thiscall Recovered_Bulk::FUN_10002ce3(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined4 uVar7;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0xc0));

  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    iVar4 = (int)(thunk_FUN_10eae150(uVar1));
    if (iVar4 == 0) {
      pvVar6 = (void *)(operator_new(0xf8));
      *(unsigned char *)((char *)&uStack_8 + 0) = 1;
      if (pvVar6 == (void *)0x0) {
        uVar5 = (undefined4)(0);
      }
      else {
        uVar5 = (undefined4)(uVar3);
        uVar7 = (undefined4)(thunk_FUN_10973080(uVar3));
        uVar5 = (undefined4)(thunk_FUN_10eae0a0(uVar7,uVar5));
        uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(2)));
        uVar5 = (undefined4)(thunk_FUN_10974e10(uVar5));
      }

    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCSonanceDetectionQuickTuneSubwiz);
    puVar2[4] = (undefined4)((uint)&ghidra_vftable_SCSonanceDetectionQuickTuneSubwiz);
    puVar2[0x23] = (undefined4)((uint)&ghidra_vftable_SCSonanceDetectionQuickTuneSubwiz);
    puVar2[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSonanceDetectionQuickTuneSubwiz);

    return (undefined4 *)(puVar2);
  }

  return (undefined4 *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 10002d0b; body size 5 bytes.
#line 1 "ENTRY_10002d0b"

void FUN_10002d0b(undefined4 param_1,undefined2 param_2)

{
  thunk_FUN_112af4e0("SCReceiptSessionVerify",3,"Operation Completed for SerialNum %d with Code: %d"
                     ,param_1,param_2);
  return;
}


// Reference entry 10002d15; body size 5 bytes.
#line 1 "ENTRY_10002d15"

undefined4 * __thiscall Recovered_Bulk::FUN_10002d15(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SetupFileTransferUploadOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_SetupFileTransferUploadOp);
  thunk_FUN_105ba0d0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHttpPostNoRedirectAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RHttpPostNoRedirectAIOOp);
  thunk_FUN_111c0a80();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xa708);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10002d1a; body size 5 bytes.
#line 1 "ENTRY_10002d1a"

undefined4 * __thiscall Recovered_Bulk::FUN_10002d1a(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10002d1f; body size 5 bytes.
#line 1 "ENTRY_10002d1f"

void FUN_10002d1f(void)

{
  return;
}


// Reference entry 10002d29; body size 5 bytes.
#line 1 "ENTRY_10002d29"

undefined4 FUN_10002d29(undefined4 param_1)

{
  thunk_FUN_106a2be0(param_1);
  return (undefined4)(param_1);
}


// Reference entry 10002d79; body size 5 bytes.
#line 1 "ENTRY_10002d79"

void __fastcall FUN_10002d79(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x100) != 0) {
    piVar1 = (int *)(*(int **)(param_1 + 0x104));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x100) = 0;
      *(undefined4 *)(param_1 + 0x104) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
  }
  return;
}


// Reference entry 10002d88; body size 5 bytes.
#line 1 "ENTRY_10002d88"

undefined1 FUN_10002d88(void)

{
  return (undefined1)(1);
}


// Reference entry 10002d92; body size 5 bytes.
#line 1 "ENTRY_10002d92"

undefined4 * __thiscall Recovered_Bulk::FUN_10002d92(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a321c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10002dab; body size 5 bytes.
#line 1 "ENTRY_10002dab"

undefined4 * __fastcall FUN_10002dab(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(operator_new(0xc));
  if (puVar2 != (undefined4 *)0x0) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
    puVar2[1] = (undefined4)(uVar1);
    puVar2[2] = (undefined4)(uVar1);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceCompleteState);
    return (undefined4 *)(puVar2);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10002ddd; body size 5 bytes.
#line 1 "ENTRY_10002ddd"

undefined4 FUN_10002ddd(void)

{
  return (undefined4)(1);
}


// Reference entry 10002de2; body size 5 bytes.
#line 1 "ENTRY_10002de2"

void FUN_10002de2(void)

{
  thunk_FUN_10205c00();
  return;
}


// Reference entry 10002e2d; body size 5 bytes.
#line 1 "ENTRY_10002e2d"

undefined2 __fastcall FUN_10002e2d(int param_1)

{
  return (undefined2)(*(undefined2 *)(param_1 + 0x24));
}


// Reference entry 10002e37; body size 5 bytes.
#line 1 "ENTRY_10002e37"

undefined4 * __thiscall Recovered_Bulk::FUN_10002e37(byte param_2)
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


// Reference entry 10002e41; body size 5 bytes.
#line 1 "ENTRY_10002e41"

void FUN_10002e41(void)

{
  thunk_FUN_10b35ad0();
  return;
}


// Reference entry 10002e46; body size 5 bytes.
#line 1 "ENTRY_10002e46"

undefined4 * __thiscall Recovered_Bulk::FUN_10002e46(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  undefined4 *puVar1;
  undefined4 uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  puVar1 = (undefined4 *)(operator_new(0xe0));

  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCAccessibilityTestFlareWithVOTextOverridePage);
    puVar1[4] = (undefined4)((uint)&ghidra_vftable_SCAccessibilityTestFlareWithVOTextOverridePage);
    puVar1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAccessibilityTestFlareWithVOTextOverridePage);
    puVar1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAccessibilityTestFlareWithVOTextOverridePage);

    return (undefined4 *)(puVar1);
  }

  return (undefined4 *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 10002e4b; body size 5 bytes.
#line 1 "ENTRY_10002e4b"

undefined4 * __thiscall Recovered_Bulk::FUN_10002e4b(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a37c4 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10002e50; body size 5 bytes.
#line 1 "ENTRY_10002e50"

void FUN_10002e50(void)

{
  thunk_FUN_10658200();
  return;
}


// Reference entry 10002e55; body size 5 bytes.
#line 1 "ENTRY_10002e55"

undefined4 __fastcall FUN_10002e55(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10002e5f; body size 5 bytes.
#line 1 "ENTRY_10002e5f"

undefined4 FUN_10002e5f(undefined4 *param_1,int *param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  char *pcVar8;
  
  thunk_FUN_110828b0();
  uVar7 = (undefined4)(5);
  puVar6 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
    puVar6 = (undefined1 *)((undefined1 *)*param_1);
  }
  iVar3 = (int)(thunk_FUN_11093530(puVar6,0));
  pcVar1 = (char *)((char *)*param_1);
  if (iVar3 == 0) {
    if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
      cVar2 = (char)(thunk_FUN_111a0720("LOCALMUSICBROWSE_CPUDN"));
      if (cVar2 != '\0') {
        uVar7 = (undefined4)(1);
      }
    }
  }
  else {
    pcVar8 = (char *)("");
    if (pcVar1 != (char *)0x0) {
      pcVar8 = (char *)(pcVar1);
    }
    piVar4 = (int *)((int *)thunk_FUN_110935f0(pcVar8,0));
    if (piVar4 == (int *)0x0) {
      return (undefined4)(0);
    }
    iVar3 = (int)((**(code **)(*piVar4 + 0x54))());
    if (iVar3 == 1) {
      iVar3 = (int)((**(code **)(*piVar4 + 0x5c))());
      if (((*(ushort *)(iVar3 + 4) & 0x7f) - 1 & 0xfffffffe) == 6) {
        uVar5 = (uint)((**(code **)(*piVar4 + 0x58))());
        if (uVar5 >> 8 == 0xfe) {
          return (undefined4)(4);
        }
        thunk_FUN_110c2c60();
        iVar3 = (int)(thunk_FUN_110c20d0(uVar5 >> 8));
        if (param_2 != (int *)0x0) {
          *param_2 = (int)(iVar3);
        }
        if ((iVar3 != 0) && ((*(uint *)(iVar3 + 0x130) >> 9 & 1) != 0)) {
          return (undefined4)(2);
        }
        return (undefined4)(3);
      }
    }
  }
  return (undefined4)(uVar7);
}


// Reference entry 10002e6e; body size 5 bytes.
#line 1 "ENTRY_10002e6e"

undefined1 _CSharp_SCIServiceDescriptor_canAddAccount_4(int *param_1)

{
  undefined1 uVar1;
  
                    
  uVar1 = (undefined1)((**(code **)(*param_1 + 0x2c))());
  return (undefined1)(uVar1);
}


// Reference entry 10002e82; body size 5 bytes.
#line 1 "ENTRY_10002e82"

undefined4 __fastcall FUN_10002e82(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10002e96; body size 5 bytes.
#line 1 "ENTRY_10002e96"

undefined4 * __thiscall Recovered_Bulk::FUN_10002e96(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a4af0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10002eaa; body size 5 bytes.
#line 1 "ENTRY_10002eaa"

undefined4 FUN_10002eaa(void)

{
  return (undefined4)(2);
}


// Reference entry 10002ebe; body size 5 bytes.
#line 1 "ENTRY_10002ebe"

undefined2 __fastcall FUN_10002ebe(int param_1)

{
  return (undefined2)(*(undefined2 *)(param_1 + 0x30));
}


// Reference entry 10002ec3; body size 5 bytes.
#line 1 "ENTRY_10002ec3"

undefined4 * __thiscall Recovered_Bulk::FUN_10002ec3(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a223c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10002ed2; body size 5 bytes.
#line 1 "ENTRY_10002ed2"

void __fastcall FUN_10002ed2(int param_1)

{
  SCThreadSafeInc((long *)(param_1 + 4));
  return;
}


// Reference entry 10002ed7; body size 5 bytes.
#line 1 "ENTRY_10002ed7"

void __fastcall FUN_10002ed7(int param_1)

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


// Reference entry 10002ee1; body size 5 bytes.
#line 1 "ENTRY_10002ee1"

void FUN_10002ee1(void)

{
  FUN_10222570();
  return;
}


// Reference entry 10002ee6; body size 5 bytes.
#line 1 "ENTRY_10002ee6"

void __fastcall FUN_10002ee6(int param_1)

{
  SCThreadSafeInc((long *)(param_1 + 4));
  return;
}


// Reference entry 10002eeb; body size 5 bytes.
#line 1 "ENTRY_10002eeb"

bool __thiscall Recovered_Bulk::FUN_10002eeb(int param_2)
{
  int param_1 = (int )this;
  return (bool)(*(int *)(param_1 + 0x10 + param_2 * 4) == 3);
}


// Reference entry 10002ef5; body size 5 bytes.
#line 1 "ENTRY_10002ef5"

uint FUN_10002ef5(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_113d91d0(param_1));
  if ((iVar1 != 0) && (*(int *)(iVar1 + 8) != 0)) {
    return (uint)(*(uint *)(*(int *)(iVar1 + 8) + 4) >> 3 & 0x1c);
  }
  return (uint)(0);
}


// Reference entry 10002efa; body size 5 bytes.
#line 1 "ENTRY_10002efa"

void FUN_10002efa(void)

{
  thunk_FUN_111865f0();
  return;
}


// Reference entry 10002f27; body size 5 bytes.
#line 1 "ENTRY_10002f27"

void FUN_10002f27(void)

{
  thunk_FUN_10d5a390();
  return;
}


// Reference entry 10002f2c; body size 5 bytes.
#line 1 "ENTRY_10002f2c"

void FUN_10002f2c(void)

{
  thunk_FUN_10d161f0();
  return;
}


// Reference entry 10002f45; body size 5 bytes.
#line 1 "ENTRY_10002f45"

undefined1 FUN_10002f45(void)

{
  return (undefined1)(1);
}


// Reference entry 10002f4a; body size 5 bytes.
#line 1 "ENTRY_10002f4a"

undefined4 * __thiscall Recovered_Bulk::FUN_10002f4a(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10002f72; body size 5 bytes.
#line 1 "ENTRY_10002f72"

undefined1 __thiscall Recovered_Bulk::FUN_10002f72(char *param_2,uint *param_3)
{
  int param_1 = (int )this;
  uint uVar1;
  char cVar2;
  
  *param_3 = (uint)(0);
  thunk_FUN_11458fa0(*(undefined4 *)(param_1 + 0x20));
  cVar2 = (char)(thunk_FUN_114595b0("HouseholdIDs",param_2,0xce4));
  if (cVar2 == '\0') {
    *param_2 = (char)('\0');
    return (undefined1)(0);
  }
  if (*param_2 != '\0') {
    uVar1 = (uint)(*param_3);
    while (uVar1 < 100) {
      *param_3 = (uint)(uVar1 + 1);
      if ((param_2 + (uVar1 + 1) * 0x20)[uVar1] == '\0') {
        return (undefined1)(1);
      }
      (param_2 + (uVar1 + 1) * 0x20)[uVar1] = '\0';
      uVar1 = (uint)(*param_3);
    }
  }
  return (undefined1)(1);
}


// Reference entry 10002f77; body size 5 bytes.
#line 1 "ENTRY_10002f77"

undefined1 _CSharp_SCIServiceAccount_isTrialAccount_4(int *param_1)

{
  undefined1 uVar1;
  
                    
  uVar1 = (undefined1)((**(code **)(*param_1 + 0x28))());
  return (undefined1)(uVar1);
}


// Reference entry 10002f86; body size 5 bytes.
#line 1 "ENTRY_10002f86"

void FUN_10002f86(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                       undefined4 param_5)

{
  FUN_112c4de0(10,param_1,param_2,param_3,param_4,param_5);
  return;
}


// Reference entry 10002f90; body size 5 bytes.
#line 1 "ENTRY_10002f90"

undefined4 FUN_10002f90(int param_1)

{
  if (((((param_1 != 0x1d) && (param_1 != 0x23)) && (param_1 != 0x37)) &&
      ((((param_1 != 0x29 && (param_1 != 0x2a)) &&
        ((param_1 != 0x30 && ((param_1 != 0x2b && (param_1 != 0x2e)))))) && (param_1 != 0x31)))) &&
     ((((param_1 != 0x39 && (param_1 != 0x3a)) && (param_1 != 0x3b)) &&
      ((param_1 != 0x3d && (param_1 != 0x3e)))))) {
    return (undefined4)(0);
  }
  return (undefined4)(1);
}


// Reference entry 10002f9f; body size 5 bytes.
#line 1 "ENTRY_10002f9f"

undefined4 * __fastcall FUN_10002f9f(int param_1)

{
 try {
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);
  if (*(int *)(param_1 + 0x2c) == 0) {
    return (undefined4 *)((undefined4 *)0x0);
  }

  puVar3 = (undefined4 *)(operator_new(0xd7d0));

  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    iVar1 = (int)(*(int *)(param_1 + 0x2c));
    uVar4 = (undefined4)((**(code **)(*(int *)(iVar1 + 4 + *(int *)(*(int *)(iVar1 + 4) + 4)) + 0x48))(uVar2));
    uVar9 = (undefined4)(0);
    uVar8 = (undefined4)(0);
    uVar7 = (undefined4)(2000);
    uVar6 = (undefined4)(5000);
    uVar5 = (undefined4)((**(code **)(*(int *)(*(int *)(*(int *)(iVar1 + 4) + 4) + 4 + iVar1) + 0x50))
                      (5000,2000,0,0));
    thunk_FUN_111c0760(uVar4,"urn:schemas-upnp-org:service:AVTransport:1","RemoveAllTracksFromQueue"
                       ,uVar5,uVar6,uVar7,uVar8,uVar9);
    *puVar3 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTRemoveAllTracksFromQueueAIOOp);
    puVar3[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTRemoveAllTracksFromQueueAIOOp);
    puVar3[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTRemoveAllTracksFromQueueAIOOp);
  }

  thunk_FUN_1124ffa0("InstanceID",0);
  thunk_FUN_1124f350(0);

  return (undefined4 *)(puVar3);

 } catch (...) { }
}


// Reference entry 10002fb3; body size 5 bytes.
#line 1 "ENTRY_10002fb3"

void FUN_10002fb3(void)

{
  thunk_FUN_10d28120();
  return;
}


// Reference entry 10002fcc; body size 5 bytes.
#line 1 "ENTRY_10002fcc"

undefined4 __fastcall FUN_10002fcc(int param_1)

{
 try {
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  piVar1 = (int *)(*(int **)(param_1 + 0x70));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(DAT_12126b84 );
  }

  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(2)));
  if (piVar1 == (int *)0x0) {
    uVar3 = (undefined4)(0xffffffff);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_1034cf80());
  }

  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }

  return (undefined4)(uVar3);

 } catch (...) { }
}


// Reference entry 10002fe5; body size 5 bytes.
#line 1 "ENTRY_10002fe5"

void FUN_10002fe5(void)

{
  thunk_FUN_1051d7c0();
  return;
}


// Reference entry 10002ff4; body size 5 bytes.
#line 1 "ENTRY_10002ff4"

void FUN_10002ff4(char *param_1,undefined4 *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *_Str;
  char *pcVar4;
  int iVar5;
  
  *param_2 = (undefined4)(0);
  param_2[1] = (undefined4)(0);
  param_2[2] = (undefined4)(0);
  param_2[3] = (undefined4)(0);
  param_2[4] = (undefined4)(0);
  param_2[5] = (undefined4)(0);
  param_2[6] = (undefined4)(0);
  param_2[7] = (undefined4)(0);
  param_2[8] = (undefined4)(0);
  param_2[9] = (undefined4)(0);
  pcVar2 = (char *)(param_1);
  do {
    pcVar4 = (char *)(pcVar2);
    pcVar2 = (char *)(pcVar4 + 1);
  } while (*pcVar4 != '\0');
  pcVar2 = (char *)(strpbrk(param_1,":/?#"));
  if ((pcVar2 != (char *)0x0) && (*pcVar2 == ':')) {
    *param_2 = (undefined4)(param_1);
    iVar5 = (int)((int)pcVar2 - (int)param_1);
    param_1 = (char *)(pcVar2 + 1);
    param_2[1] = (undefined4)(iVar5);
  }
  pcVar2 = (char *)(param_1);
  if ((*param_1 == '/') && (param_1[1] == '/')) {
    pcVar2 = (char *)(strpbrk(param_1 + 2,"/?#"));
    param_2[2] = (undefined4)(param_1 + 2);
    if (pcVar2 == (char *)0x0) {
      pcVar2 = (char *)(pcVar4);
    }
    param_2[3] = (undefined4)(pcVar2 + (-2 - (int)param_1));
  }
  pcVar3 = (char *)(strpbrk(pcVar2,"?#"));
  _Str = (char *)(pcVar2);
  if ((char *)(pcVar3) != pcVar2) {
    param_2[4] = (undefined4)(pcVar2);
    _Str = (char *)(pcVar3);
    if (pcVar3 == (char *)0x0) {
      _Str = (char *)(pcVar4);
    }
    param_2[5] = (undefined4)((int)_Str - (int)pcVar2);
  }
  cVar1 = (char)(*_Str);
  pcVar2 = (char *)(_Str);
  if (cVar1 == '?') {
    pcVar2 = (char *)(strchr(_Str,0x23));
    if (pcVar2 == (char *)0x0) {
      pcVar2 = (char *)(pcVar4);
    }
    param_2[6] = (undefined4)(_Str + 1);
    param_2[7] = (undefined4)((int)pcVar2 - (int)(_Str + 1));
    cVar1 = (char)(*pcVar2);
  }
  if (cVar1 == '#') {
    param_2[8] = (undefined4)(pcVar2 + 1);
    param_2[9] = (undefined4)((int)pcVar4 - (int)(pcVar2 + 1));
  }
  return;
}


// Reference entry 10002ff9; body size 5 bytes.
#line 1 "ENTRY_10002ff9"

void FUN_10002ff9(void)

{
  return;
}


// Reference entry 10003008; body size 5 bytes.
#line 1 "ENTRY_10003008"

void __fastcall FUN_10003008(int param_1)

{
  if ((*(char *)(param_1 + 0x48) != '\0') && (*(int *)(param_1 + 0x34) == 0)) {
    thunk_FUN_101db840();
  }
  thunk_FUN_101df120();
  return;
}


// Reference entry 10003012; body size 5 bytes.
#line 1 "ENTRY_10003012"

void _CSharp_SCUserInterfaceParameters_m_screenWidth_set_8(int param_1,undefined4 param_2)

{
                    
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x10) = param_2;
  }
  return;
}


// Reference entry 10003021; body size 5 bytes.
#line 1 "ENTRY_10003021"

void FUN_10003021(void)

{
  thunk_FUN_10fda6c0();
  return;
}


// Reference entry 10003026; body size 5 bytes.
#line 1 "ENTRY_10003026"

void __fastcall FUN_10003026(int param_1)

{
                    
                    
  (**(code **)(*(int *)(param_1 + -0xc) + 4))();
  return;
}


// Reference entry 10003035; body size 5 bytes.
#line 1 "ENTRY_10003035"

void FUN_10003035(void)

{
  return;
}


// Reference entry 10003049; body size 5 bytes.
#line 1 "ENTRY_10003049"

undefined4 * __thiscall Recovered_Bulk::FUN_10003049(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a3948 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10003053; body size 5 bytes.
#line 1 "ENTRY_10003053"

undefined1 FUN_10003053(void)

{
  return (undefined1)(0);
}


// Reference entry 1000306c; body size 5 bytes.
#line 1 "ENTRY_1000306c"

void FUN_1000306c(void)

{
  thunk_FUN_1043c9a0();
  return;
}


// Reference entry 10003076; body size 5 bytes.
#line 1 "ENTRY_10003076"

undefined4 __fastcall FUN_10003076(int param_1)

{
  return (undefined4)(((uint)((int3)((uint)*(int *)(param_1 + 0x18) >> 8)) << 8 | (uint)(*(undefined1 *)(*(int *)(param_1 + 0x18) + 0x6181))));
}


// Reference entry 10003085; body size 5 bytes.
#line 1 "ENTRY_10003085"

undefined4 __fastcall FUN_10003085(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x34));
}


// Reference entry 100030c1; body size 5 bytes.
#line 1 "ENTRY_100030c1"

undefined4 * __thiscall Recovered_Bulk::FUN_100030c1(undefined4 *param_2)
{
  int *param_1 = (int *)this;
 try {
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piStack_1c;
  int *piStack_18;
  int *piStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  cVar1 = (char)((**(code **)(*param_1 + 0x24))(DAT_12126b84 ));
  if (cVar1 == '\0') {
    *param_2 = (undefined4)(0);

    return (undefined4 *)(param_2);
  }
  piStack_14 = (int *)(operator_new(0x14));

  if (piStack_14 == (int *)0x0) {
    piStack_14 = (int *)((int *)0x0);
  }
  else {
    piStack_14 = (int *)((int *)thunk_FUN_103be5e0());
  }

  if (piStack_14 != (int *)0x0) {
    (**(code **)(*piStack_14 + 4))();
  }

  thunk_FUN_101c39c0(&piStack_14);
  *(unsigned char *)((char *)&uStack_8 + 0) = 4;
  if (piStack_14 != (int *)0x0) {
    (**(code **)(*piStack_14 + 8))();
  }
  uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(3)));
  piVar2 = (int *)(operator_new(8));
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar2[1] = (int)(0);
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCUpdateMusicIndexActionDescriptor);
    piStack_14 = (int *)(piVar2);
    if (*(code **)(*piVar2 + 0xc) == thunk_FUN_101da390) {
      (**(code **)(*piVar2 + 4))();
    }
    else {
      piVar3 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
      (**(code **)(*piVar3 + 4))();
    }
  }
  uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(5)));
  piStack_14 = (int *)(piVar2);
  thunk_FUN_103beae0(&piStack_14,0xffffffff);
  *param_2 = (undefined4)(piStack_1c);
  if (piStack_1c != (int *)0x0) {
    (**(code **)(*piStack_1c + 4))();
  }

  if (piStack_18 != (int *)0x0) {
    (**(code **)(*piStack_18 + 8))();
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 100030cb; body size 5 bytes.
#line 1 "ENTRY_100030cb"

void FUN_100030cb(void)

{
  thunk_FUN_10c20d40();
  return;
}


// Reference entry 100030d5; body size 5 bytes.
#line 1 "ENTRY_100030d5"

void FUN_100030d5(void)

{
  thunk_FUN_10a80ef0();
  return;
}


// Reference entry 100030da; body size 5 bytes.
#line 1 "ENTRY_100030da"

void FUN_100030da(void)

{
  thunk_FUN_10a0a1f0();
  return;
}


// Reference entry 100030df; body size 5 bytes.
#line 1 "ENTRY_100030df"

undefined4 * __thiscall Recovered_Bulk::FUN_100030df(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 100030e4; body size 5 bytes.
#line 1 "ENTRY_100030e4"

undefined4 * __thiscall Recovered_Bulk::FUN_100030e4(byte param_2)
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


// Reference entry 100030e9; body size 5 bytes.
#line 1 "ENTRY_100030e9"

void FUN_100030e9(void)

{
  thunk_FUN_1072c940();
  return;
}


// Reference entry 100030f3; body size 5 bytes.
#line 1 "ENTRY_100030f3"

void FUN_100030f3(void)

{
  thunk_FUN_104a1af0();
  return;
}


// Reference entry 10003111; body size 5 bytes.
#line 1 "ENTRY_10003111"

uint FUN_10003111(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_113d91d0(param_1));
  if (iVar1 == 0) {
    return (uint)(0);
  }
  if (*(int *)(iVar1 + 8) == 0) {
    return (uint)(0);
  }
  return (uint)((*(uint *)(*(int *)(iVar1 + 8) + 4) >> 2 & 0x3c0) >> 3);
}


// Reference entry 10003116; body size 5 bytes.
#line 1 "ENTRY_10003116"

undefined4 __thiscall Recovered_Bulk::FUN_10003116(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 1000311b; body size 5 bytes.
#line 1 "ENTRY_1000311b"

void FUN_1000311b(void)

{
  thunk_FUN_11204620();
  return;
}


// Reference entry 1000312a; body size 5 bytes.
#line 1 "ENTRY_1000312a"

undefined1 FUN_1000312a(void)

{
  return (undefined1)(0);
}


// Reference entry 1000312f; body size 5 bytes.
#line 1 "ENTRY_1000312f"

undefined4 FUN_1000312f(void)

{
  return (undefined4)(0);
}


// Reference entry 10003148; body size 5 bytes.
#line 1 "ENTRY_10003148"

undefined4 * __thiscall Recovered_Bulk::FUN_10003148(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1000316b; body size 5 bytes.
#line 1 "ENTRY_1000316b"

void FUN_1000316b(void)

{
  thunk_FUN_109e41f0();
  return;
}


// Reference entry 10003175; body size 5 bytes.
#line 1 "ENTRY_10003175"

undefined4 * __thiscall Recovered_Bulk::FUN_10003175(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  undefined4 *puVar1;
  undefined4 uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  puVar1 = (undefined4 *)(operator_new(0xe4));

  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCJoinExistingSearchPage);
    puVar1[4] = (undefined4)((uint)&ghidra_vftable_SCJoinExistingSearchPage);
    puVar1[0x23] = (undefined4)((uint)&ghidra_vftable_SCJoinExistingSearchPage);
    puVar1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCJoinExistingSearchPage);
    puVar1[0x38] = (undefined4)(0);

    return (undefined4 *)(puVar1);
  }

  return (undefined4 *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 10003193; body size 5 bytes.
#line 1 "ENTRY_10003193"

void FUN_10003193(void)

{
  FUN_10065348();
  return;
}


// Reference entry 1000319d; body size 5 bytes.
#line 1 "ENTRY_1000319d"

int __fastcall FUN_1000319d(int param_1)

{
  return (int)(param_1 + 0x2c);
}


// Reference entry 100031ac; body size 5 bytes.
#line 1 "ENTRY_100031ac"

undefined4 __fastcall FUN_100031ac(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 100031ca; body size 5 bytes.
#line 1 "ENTRY_100031ca"

void __thiscall Recovered_Bulk::FUN_100031ca(int param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  if (param_2 != 0) {
    thunk_FUN_103d6930(param_2);
    if (*(int *)(param_1 + 0x10) == 0) {
      iVar1 = (int)(*(int *)(param_1 + 0x48));
      if (iVar1 != 0) {
        thunk_FUN_11128910();
        FUN_10065348(iVar1);
        if (*(undefined4 **)(param_1 + 0x48) != (undefined4 *)0x0) {
          (**(code **)**(undefined4 **)(param_1 + 0x48))(1);
        }
        *(undefined4 *)(param_1 + 0x48) = 0;
      }
      if (*(int *)(param_1 + 0x4c) != 0) {
        thunk_FUN_10f77300();
        if (*(undefined4 **)(param_1 + 0x4c) != (undefined4 *)0x0) {
          (**(code **)**(undefined4 **)(param_1 + 0x4c))(1);
        }
        *(undefined4 *)(param_1 + 0x4c) = 0;
      }
    }
  }
  return;
}


// Reference entry 10003201; body size 5 bytes.
#line 1 "ENTRY_10003201"

void __fastcall FUN_10003201(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHttpGetNoRedirectAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RHttpGetNoRedirectAIOOp);
  thunk_FUN_111c0a80();
  return;
}


// Reference entry 10003206; body size 5 bytes.
#line 1 "ENTRY_10003206"

undefined4 __fastcall FUN_10003206(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10003210; body size 5 bytes.
#line 1 "ENTRY_10003210"

undefined1 FUN_10003210(void)

{
  return (undefined1)(1);
}


// Reference entry 10003215; body size 5 bytes.
#line 1 "ENTRY_10003215"

void FUN_10003215(void)

{
  thunk_FUN_104bce60();
  return;
}


// Reference entry 1000321a; body size 5 bytes.
#line 1 "ENTRY_1000321a"

void __fastcall FUN_1000321a(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x6160) != 0) && (*(int **)(param_1 + 0x615c) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x615c) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x615c));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x615c) = 0;
    *(undefined4 *)(param_1 + 0x6160) = 0;
  }
  return;
}


// Reference entry 10003238; body size 5 bytes.
#line 1 "ENTRY_10003238"

undefined4 _CSharp_SCIExperimentManager_getSingleton_0(void)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  int *piStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    


  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_102518f0(&piStack_14,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (piStack_14 != (int *)0x0) {
    (**(code **)(*piStack_14 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1000323d; body size 5 bytes.
#line 1 "ENTRY_1000323d"

undefined1 _CSharp_SCIDirectControlApplication_controlsLockscreen_4(int *param_1)

{
  undefined1 uVar1;
  
                    
  uVar1 = (undefined1)((**(code **)(*param_1 + 0x2c))());
  return (undefined1)(uVar1);
}


// Reference entry 10003247; body size 5 bytes.
#line 1 "ENTRY_10003247"

undefined4 FUN_10003247(void)

{
  return (undefined4)(0xffffffff);
}


// Reference entry 10003251; body size 5 bytes.
#line 1 "ENTRY_10003251"

undefined4 * __thiscall Recovered_Bulk::FUN_10003251(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUnsubscribeRequest);
  thunk_FUN_112665b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x8570);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10003256; body size 5 bytes.
#line 1 "ENTRY_10003256"

undefined1 FUN_10003256(void)

{
  return (undefined1)(0);
}


// Reference entry 1000326a; body size 5 bytes.
#line 1 "ENTRY_1000326a"

SCStr * FUN_1000326a(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("lifecycle_player_removal.reset_failed");
  return (SCStr *)(param_1);
}


// Reference entry 10003297; body size 5 bytes.
#line 1 "ENTRY_10003297"

void FUN_10003297(void)

{
  thunk_FUN_10cbd320();
  return;
}


// Reference entry 100032a6; body size 5 bytes.
#line 1 "ENTRY_100032a6"

undefined1 FUN_100032a6(void)

{
  return (undefined1)(1);
}


// Reference entry 100032ab; body size 5 bytes.
#line 1 "ENTRY_100032ab"

void FUN_100032ab(void)

{
  thunk_FUN_107eca70();
  return;
}


// Reference entry 100032c9; body size 5 bytes.
#line 1 "ENTRY_100032c9"

void FUN_100032c9(void)

{
  thunk_FUN_10400590(0,1);
  thunk_FUN_10400590(1,1);
  return;
}


// Reference entry 100032e2; body size 5 bytes.
#line 1 "ENTRY_100032e2"

void FUN_100032e2(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                       undefined4 param_5,undefined4 param_6)

{
  thunk_FUN_11245d70(param_1,param_2,param_3,param_4,param_5,param_6,0x3d);
  return;
}


// Reference entry 100032fb; body size 5 bytes.
#line 1 "ENTRY_100032fb"

void FUN_100032fb(void)

{
  return;
}


// Reference entry 1000330a; body size 5 bytes.
#line 1 "ENTRY_1000330a"

void FUN_1000330a(void)

{
  thunk_FUN_10b5ef00();
  return;
}


// Reference entry 1000330f; body size 5 bytes.
#line 1 "ENTRY_1000330f"

undefined4 * __thiscall Recovered_Bulk::FUN_1000330f(byte param_2)
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


// Reference entry 10003323; body size 5 bytes.
#line 1 "ENTRY_10003323"

undefined4 * __thiscall Recovered_Bulk::FUN_10003323(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10003328; body size 5 bytes.
#line 1 "ENTRY_10003328"

void FUN_10003328(void)

{
  thunk_FUN_1074d1b0();
  return;
}


// Reference entry 1000332d; body size 5 bytes.
#line 1 "ENTRY_1000332d"

undefined4 * __thiscall Recovered_Bulk::FUN_1000332d(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10003332; body size 5 bytes.
#line 1 "ENTRY_10003332"

SCStr * FUN_10003332(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2a3,&DAT_11882ff0));
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10003355; body size 5 bytes.
#line 1 "ENTRY_10003355"

void __fastcall FUN_10003355(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_10263a50(*param_1,param_1[1],param_1);
    iVar1 = (int)(*param_1);
    uVar3 = (uint)(param_1[2] - iVar1 & 0xfffffff8);
    iVar2 = (int)(iVar1);
    if (0xfff < uVar3) {
      iVar2 = (int)(*(int *)(iVar1 + -4));
      uVar3 = (uint)(uVar3 + 0x23);
      if (0x1f < (iVar1 - iVar2) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar2,uVar3);
    *param_1 = (int)(0);
    param_1[1] = (int)(0);
    param_1[2] = (int)(0);
  }
  return;
}


// Reference entry 10003364; body size 5 bytes.
#line 1 "ENTRY_10003364"

void _CSharp_SCISelectionManager_getNumOfSelectedItems_4(int *param_1)

{
                    
  (**(code **)(*param_1 + 0x24))();
  return;
}


// Reference entry 10003369; body size 5 bytes.
#line 1 "ENTRY_10003369"

undefined4 * __thiscall Recovered_Bulk::FUN_10003369(undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar1 = (uint)(DAT_12126b84);

  thunk_FUN_111d1d90(param_2,"getExtendedMetadataText",param_3,20000,10000,1,param_1 + 0x421d);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSonosGetExtendedMetadataTextOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RSonosGetExtendedMetadataTextOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RSonosGetExtendedMetadataTextOp);

  param_1[0x4642] = (undefined4)(0);
  *(undefined1 *)(param_1 + 0x4644) = 0;
  param_1[0x46e7] = (undefined4)(0);
  thunk_FUN_111e7a30(param_4);
  puVar4 = (undefined4 *)(param_1 + 0x46f1);
  thunk_FUN_111d0010(param_2);
  *(unsigned char *)((char *)&uStack_8 + 0) = 1;
  *puVar4 = (undefined4)((uint)&ghidra_vftable_RSonosGetExtendedMetadataTextParam);
  param_1[0x4c15] = (undefined4)(param_6);
  thunk_FUN_11234190(uVar1);
  uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(2)));
  thunk_FUN_1106a8d0(param_1 + 0x46e8,param_5,0x21);
  *(undefined4 *)(param_1[0x2a7] + 4) = 1;
  piVar2 = (int *)((int *)thunk_FUN_1124ffa0(&DAT_1187b440,0));
  if ((param_1[0x4643] == 0) || (iVar3 = 0x191, param_1[0x4643] == 1)) {
    iVar3 = (int)(9);
  }
  (**(code **)(*piVar2 + 0xc))((int)param_1 + iVar3 + 0x11908);
  piVar2 = (int *)((int *)thunk_FUN_1124ffa0(&DAT_1187b694,0));
  (**(code **)(*piVar2 + 0xc))(param_1 + 0x46e8);
  thunk_FUN_1124ff50("http://www.sonos.com/Services/1.1|getExtendedMetadataTextResult");
  thunk_FUN_112504f0(puVar4);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10003387; body size 5 bytes.
#line 1 "ENTRY_10003387"

void __fastcall FUN_10003387(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_10e5a5e0(*param_1,param_1[1],param_1);
    iVar1 = (int)(*param_1);
    uVar2 = (uint)(((param_1[2] - iVar1) / 0xc) * 0xc);
    iVar3 = (int)(iVar1);
    if (0xfff < uVar2) {
      iVar3 = (int)(*(int *)(iVar1 + -4));
      uVar2 = (uint)(uVar2 + 0x23);
      if (0x1f < (iVar1 - iVar3) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar3,uVar2);
    *param_1 = (int)(0);
    param_1[1] = (int)(0);
    param_1[2] = (int)(0);
  }
  return;
}


// Reference entry 10003391; body size 5 bytes.
#line 1 "ENTRY_10003391"

undefined4 FUN_10003391(undefined1 *param_1)

{
  *param_1 = (undefined1)(1);
  return (undefined4)(1);
}


// Reference entry 10003396; body size 5 bytes.
#line 1 "ENTRY_10003396"

void FUN_10003396(void)

{
  thunk_FUN_10d19550();
  return;
}


// Reference entry 100033a5; body size 5 bytes.
#line 1 "ENTRY_100033a5"

undefined4 * __thiscall Recovered_Bulk::FUN_100033a5(byte param_2)
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


// Reference entry 100033be; body size 5 bytes.
#line 1 "ENTRY_100033be"

undefined4 * __thiscall Recovered_Bulk::FUN_100033be(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[0x24] = (undefined4)((uint)&ghidra_vftable_SCIObj);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCRemoveMeSettingsMenu);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCRemoveMeSettingsMenu);
  param_1[10] = (undefined4)((uint)&ghidra_vftable_SCRemoveMeSettingsMenu);
  thunk_FUN_101eb2b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x98);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 100033c3; body size 5 bytes.
#line 1 "ENTRY_100033c3"

void FUN_100033c3(void)

{
  thunk_FUN_10368690();
  return;
}


// Reference entry 100033d2; body size 5 bytes.
#line 1 "ENTRY_100033d2"

undefined4 * __thiscall Recovered_Bulk::FUN_100033d2(byte param_2)
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


// Reference entry 100033e6; body size 5 bytes.
#line 1 "ENTRY_100033e6"

undefined4 * __thiscall Recovered_Bulk::FUN_100033e6(undefined4 *param_2)
{
  int param_1 = (int )this;
  if (*(char *)(param_1 + 0x31) == '\0') {
    *param_2 = (undefined4)(0);
    return (undefined4 *)(param_2);
  }
  thunk_FUN_10697db0(param_2,*(undefined4 *)(param_1 + 0x34),0);
  return (undefined4 *)(param_2);
}


// Reference entry 100033f5; body size 5 bytes.
#line 1 "ENTRY_100033f5"

void __thiscall Recovered_Bulk::FUN_100033f5(int param_2)
{
  int param_1 = (int )this;
 try {
  char cVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if (*(char *)(param_1 + 0xc2) != '\0') {
    cVar1 = (char)(thunk_FUN_112a7f50(param_1 + 0xb0,DAT_12126b84 ));

    thunk_FUN_101dbeb0();

    if (cVar1 != '\0') {
      thunk_FUN_112a8010(param_1 + 0xb0);
    }
  }
  if (param_2 != 0) {
    thunk_FUN_103d6930(param_2);
  }

  return;

 } catch (...) { }
}


// Reference entry 100033fa; body size 5 bytes.
#line 1 "ENTRY_100033fa"

void _CSharp_SCILibrary_SCLibUIThreadCallback_4(int *param_1)

{
                    
  (**(code **)(*param_1 + 0x14))();
  return;
}


// Reference entry 10003404; body size 5 bytes.
#line 1 "ENTRY_10003404"

void __thiscall Recovered_Bulk::FUN_10003404(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined1 auStack_20 [28];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)auStack_20);
  if (*(code **)(param_1 + 0xc) != (code *)0x0) {
    (**(code **)(param_1 + 0xc))(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCILifecycleAppProviderSwigBase::isAppWithSWGenInstalled");
                    
  _CxxThrowException(auStack_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1000340e; body size 5 bytes.
#line 1 "ENTRY_1000340e"

void FUN_1000340e(void)

{
  thunk_FUN_10fdae50();
  return;
}


// Reference entry 10003418; body size 5 bytes.
#line 1 "ENTRY_10003418"

undefined4 * __thiscall Recovered_Bulk::FUN_10003418(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCDisplayWizardEventSink);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCDisplayWizardEventSink);
  param_1[5] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  thunk_FUN_11240850();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x24);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10003427; body size 5 bytes.
#line 1 "ENTRY_10003427"

undefined4 * __thiscall Recovered_Bulk::FUN_10003427(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10003431; body size 5 bytes.
#line 1 "ENTRY_10003431"

undefined4 * __thiscall Recovered_Bulk::FUN_10003431(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a4b94 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10003436; body size 5 bytes.
#line 1 "ENTRY_10003436"

void __fastcall FUN_10003436(int *param_1)

{
  thunk_FUN_10af42f0(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 1000343b; body size 5 bytes.
#line 1 "ENTRY_1000343b"

void FUN_1000343b(void)

{
  thunk_FUN_10a0e080();
  return;
}


// Reference entry 10003440; body size 5 bytes.
#line 1 "ENTRY_10003440"

undefined4 FUN_10003440(undefined4 param_1)

{
 try {
  int *piVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined1 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined **appuStack_1d0 [8];
  undefined **appuStack_1b0 [8];
  undefined **appuStack_190 [8];
  undefined **appuStack_170 [8];
  undefined **appuStack_150 [8];
  undefined **appuStack_130 [8];
  undefined **appuStack_110 [8];
  undefined1 auStack_f0 [12];
  undefined4 uStack_e4;
  int *piStack_e0;
  undefined4 auStack_dc [2];
  undefined4 uStack_d4;
  int *piStack_d0;
  undefined4 auStack_cc [2];
  undefined4 uStack_c4;
  int *piStack_c0;
  undefined4 auStack_bc [2];
  undefined4 uStack_b4;
  int *piStack_b0;
  undefined4 auStack_ac [2];
  undefined4 uStack_a4;
  int *piStack_a0;
  undefined4 auStack_9c [2];
  undefined4 uStack_94;
  int *piStack_90;
  undefined4 auStack_8c [2];
  undefined4 uStack_84;
  int *piStack_80;
  undefined4 uStack_7c;
  void *pvStack_78;
  undefined1 *puStack_74;
  undefined4 uStack_70;
  int *piStack_6c;
  int *piStack_68;
  undefined4 uStack_64;
  int *piStack_60;
  undefined1 auStack_58 [4];
  int *piStack_54;
  undefined4 auStack_50 [2];
  undefined4 auStack_48 [2];
  undefined4 auStack_40 [2];
  undefined4 auStack_38 [2];
  undefined **ppuStack_30;
  undefined4 uStack_2c;
  int *piStack_28;
  int *piStack_24;
  int iStack_20;
  undefined4 *puStack_1c;
  undefined4 *puStack_18;
  int iStack_14;
  undefined1 *apuStack_10 [3];


  thunk_FUN_10eb41c0(DAT_12126b84 ^ (uint)&piStack_6c);
  piVar4 = (int *)((int *)thunk_FUN_10cf34e0(&piStack_54));
  piVar8 = (int *)((int *)*piVar4);

  *piVar4 = (int)(0);
  piStack_6c = (int *)(piVar8);
  if (piVar8 == (int *)0x0) {
    piStack_68 = (int *)((int *)0x0);
  }
  else {
    piStack_68 = (int *)((int *)(**(code **)(*piVar8 + 0xc))());
  }
  *(unsigned char *)((char *)&uStack_70 + 0) = 3;
  if (piStack_54 != (int *)0x0) {
    (**(code **)(*piStack_54 + 8))();
  }
  *(unsigned char *)((char *)&uStack_70 + 0) = 2;
  thunk_FUN_10c5f1d0(piVar8);
  thunk_FUN_10c61010(apuStack_10,auStack_f0,6,0,0);
  *(unsigned char *)((char *)&uStack_70 + 0) = 4;
  thunk_FUN_10c5f1d0(piVar8);
  puVar9 = (undefined1 *)(auStack_58);
  thunk_FUN_105bebd0(puVar9);
  thunk_FUN_10e0f250(puVar9);
  thunk_FUN_10eb41c0();
  iVar5 = (int)(thunk_FUN_10eac8c0());
  iVar6 = (int)(thunk_FUN_10ec1a10("continue"));
  *(unsigned char *)((char *)&uStack_70 + 0) = 5;
  thunk_FUN_105f6290(iVar6 + 4);
  *(unsigned char *)((char *)&uStack_70 + 0) = 6;
  uVar7 = (undefined4)(thunk_FUN_10e10270(&uStack_64,5));
  *(unsigned char *)((char *)&uStack_70 + 0) = 7;
  thunk_FUN_10ec2970("video");
  uVar12 = (undefined4)(1);
  *(unsigned char *)((char *)&uStack_70 + 0) = 8;
  thunk_FUN_10ece3b0(uVar7);
  iVar6 = (int)(thunk_FUN_10eca030(uVar12));
  thunk_FUN_105f6290(iVar6 + 4);
  *(unsigned char *)((char *)&uStack_70 + 0) = 9;
  thunk_FUN_10c5f8a0(&DAT_1186d2ee);
  *(unsigned char *)((char *)&uStack_70 + 0) = 10;
  puVar9 = (undefined1 *)(&DAT_1186d2ee);
  if (apuStack_10[0] != (undefined1 *)0x0) {
    puVar9 = (undefined1 *)(apuStack_10[0]);
  }
  thunk_FUN_10c62d50(auStack_50,apuStack_10,0x27a7,&DAT_1188465c,puVar9);
  *(unsigned char *)((char *)&uStack_70 + 0) = 0xb;
  thunk_FUN_10ec1b40("title");
  uVar7 = (undefined4)(1);
  *(unsigned char *)((char *)&uStack_70 + 0) = 0xc;
  thunk_FUN_10eced20(auStack_50);
  iVar6 = (int)(thunk_FUN_10ecd540(uVar7));
  thunk_FUN_105f6290(iVar6 + 4);
  *(unsigned char *)((char *)&uStack_70 + 0) = 0xd;
  thunk_FUN_10c5f8a0(&DAT_1186d2ee);
  *(unsigned char *)((char *)&uStack_70 + 0) = 0xe;
  puVar9 = (undefined1 *)(&DAT_1186d2ee);
  if (apuStack_10[0] != (undefined1 *)0x0) {
    puVar9 = (undefined1 *)(apuStack_10[0]);
  }
  thunk_FUN_10c62d50(auStack_48,apuStack_10,0x27a6,&DAT_1188465c,puVar9);
  *(unsigned char *)((char *)&uStack_70 + 0) = 0xf;
  thunk_FUN_10ec1b40("title");
  uVar7 = (undefined4)(1);
  *(unsigned char *)((char *)&uStack_70 + 0) = 0x10;
  thunk_FUN_10eced20(auStack_48);
  iVar6 = (int)(thunk_FUN_10ecd540(uVar7));
  thunk_FUN_105f6290(iVar6 + 4);
  *(unsigned char *)((char *)&uStack_70 + 0) = 0x11;
  thunk_FUN_10c5f8a0(&DAT_1186d2ee);
  *(unsigned char *)((char *)&uStack_70 + 0) = 0x12;
  puVar9 = (undefined1 *)(&DAT_1186d2ee);
  if (apuStack_10[0] != (undefined1 *)0x0) {
    puVar9 = (undefined1 *)(apuStack_10[0]);
  }
  thunk_FUN_10c62d50(auStack_40,apuStack_10,0x27a5,&DAT_1188465c,puVar9);
  *(unsigned char *)((char *)&uStack_70 + 0) = 0x13;
  thunk_FUN_10ec1b40("title");
  uVar7 = (undefined4)(1);
  *(unsigned char *)((char *)&uStack_70 + 0) = 0x14;
  thunk_FUN_10eced20(auStack_40);
  iVar6 = (int)(thunk_FUN_10ecd540(uVar7));
  thunk_FUN_105f6290(iVar6 + 4);
  *(unsigned char *)((char *)&uStack_70 + 0) = 0x15;
  thunk_FUN_10c5f8a0(&DAT_1186d2ee);
  *(unsigned char *)((char *)&uStack_70 + 0) = 0x16;
  puVar9 = (undefined1 *)(&DAT_1186d2ee);
  if (apuStack_10[0] != (undefined1 *)0x0) {
    puVar9 = (undefined1 *)(apuStack_10[0]);
  }
  thunk_FUN_10c62d50(auStack_38,apuStack_10,0x27a4,&DAT_1188465c,puVar9);
  *(unsigned char *)((char *)&uStack_70 + 0) = 0x17;
  thunk_FUN_10ec1b40("title");
  uVar7 = (undefined4)(1);
  *(unsigned char *)((char *)&uStack_70 + 0) = 0x18;
  thunk_FUN_10eced20(auStack_38);
  iVar6 = (int)(thunk_FUN_10ecd540(uVar7));
  thunk_FUN_105f6290(iVar6 + 4);
  *(unsigned char *)((char *)&uStack_70 + 0) = 0x19;
  thunk_FUN_10ec1d40();
  uVar7 = (undefined4)(1);
  *(unsigned char *)((char *)&uStack_70 + 0) = 0x1a;
  thunk_FUN_1061c630(1);
  iVar6 = (int)(thunk_FUN_10ec6870(uVar7));
  thunk_FUN_105f6290(iVar6 + 4);
  ppuStack_30 = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTree);

  piStack_28 = (int *)((int *)0x0);
  piStack_24 = (int *)((int *)0x0);
  iStack_20 = (int)(0);
  puStack_1c = (undefined4 *)((undefined4 *)0x0);
  puStack_18 = (undefined4 *)((undefined4 *)0x0);
  iStack_14 = (int)(0);
  *(unsigned char *)((char *)&uStack_70 + 0) = 0x1c;
  piVar8 = (int *)((int *)thunk_FUN_106050a0(appuStack_110));
  thunk_FUN_10eb41c0();
  iVar6 = (int)(*piVar8);
  uVar3 = (undefined1)(thunk_FUN_10eacd60(appuStack_130));
  piVar8 = (int *)((int *)(**(code **)(iVar6 + 0xc))(uVar3));
  piVar8 = (int *)((int *)(**(code **)(*piVar8 + 0x10))(iVar5 == 2,appuStack_150));
  piVar8 = (int *)((int *)(**(code **)(*piVar8 + 0x10))(iVar5 == 1,appuStack_170));
  piVar8 = (int *)((int *)(**(code **)(*piVar8 + 0x14))(appuStack_190));
  piVar8 = (int *)((int *)(**(code **)(*piVar8 + 8))(appuStack_1b0));
  uVar7 = (undefined4)((**(code **)(*piVar8 + 8))(appuStack_1d0));
  thunk_FUN_105f60e0(uVar7);
  puVar2 = (undefined4 *)(puStack_18);
  *(unsigned char *)((char *)&uStack_70 + 0) = 0x1b;
  puVar11 = (undefined4 *)(puStack_1c);
  if (puStack_1c != (undefined4 *)0x0) {
    for (; (undefined4 *)(puVar11) != puVar2; puVar11 = puVar11 + 8) {
      (**(code **)*puVar11)(0);
    }
    uVar10 = (uint)(iStack_14 - (int)puStack_1c & 0xffffffe0);
    puVar11 = (undefined4 *)(puStack_1c);
    if (0xfff < uVar10) {
      puVar11 = (undefined4 *)((undefined4 *)puStack_1c[-1]);
      uVar10 = (uint)(uVar10 + 0x23);
      if (0x1f < (uint)((int)puStack_1c + (-4 - (int)puVar11))) goto LAB_10932ec5;
    }
    thunk_FUN_1148a50e(puVar11,uVar10);
    puStack_1c = (undefined4 *)((undefined4 *)0x0);
    puStack_18 = (undefined4 *)((undefined4 *)0x0);
    iStack_14 = (int)(0);
  }
  piVar8 = (int *)(piStack_24);
  if (piStack_28 != (int *)0x0) {
    if (piStack_28 != (int *)(piStack_24)) {
      piVar4 = (int *)(piStack_28 + 1);
      do {
        *(unsigned char *)((char *)&uStack_70 + 0) = 0x1d;
        ((SCStr *)((SCStr *)(piVar4 + 1)))->int_release();
        piVar4[1] = (int)(0);
        piVar1 = (int *)((int *)*piVar4);
        *(unsigned char *)((char *)&uStack_70 + 0) = 0x1e;
        if (piVar1 != (int *)0x0) {
          piVar4[-1] = (int)(0);
          *piVar4 = (int)(0);
          (**(code **)(*piVar1 + 8))();
        }
        *(unsigned char *)((char *)&uStack_70 + 0) = 0x1b;
        piVar1 = (int *)(piVar4 + 2);
        piVar4 = (int *)(piVar4 + 3);
      } while (piVar1 != (int *)(piVar8));
    }
    uVar10 = (uint)(((iStack_20 - (int)piStack_28) / 0xc) * 0xc);
    piVar8 = (int *)(piStack_28);
    if (0xfff < uVar10) {
      piVar8 = (int *)((int *)piStack_28[-1]);
      uVar10 = (uint)(uVar10 + 0x23);
      if (0x1f < (uint)((int)piStack_28 + (-4 - (int)piVar8))) {
LAB_10932ec5:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(piVar8,uVar10);
    piStack_28 = (int *)((int *)0x0);
    piStack_24 = (int *)((int *)0x0);
    iStack_20 = (int)(0);
  }
  ppuStack_30 = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  appuStack_110[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&uStack_70 + 0) = 0x1f;
  ((SCStr *)((SCStr *)&uStack_7c))->int_release();
  piVar8 = (int *)(piStack_80);

  *(unsigned char *)((char *)&uStack_70 + 0) = 0x20;
  if (piStack_80 != (int *)0x0) {

    piStack_80 = (int *)((int *)0x0);
    (**(code **)(*piVar8 + 8))();
  }
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  appuStack_130[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&uStack_70 + 0) = 0x21;
  ((SCStr *)((SCStr *)auStack_8c))->int_release();
  piVar8 = (int *)(piStack_90);
  auStack_8c[0] = (undefined4)(0);
  *(unsigned char *)((char *)&uStack_70 + 0) = 0x22;
  if (piStack_90 != (int *)0x0) {

    piStack_90 = (int *)((int *)0x0);
    (**(code **)(*piVar8 + 8))();
  }
  *(unsigned char *)((char *)&uStack_70 + 0) = 0x23;
  ((SCStr *)((SCStr *)auStack_38))->int_release();
  auStack_38[0] = (undefined4)(0);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  appuStack_150[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&uStack_70 + 0) = 0x24;
  ((SCStr *)((SCStr *)auStack_9c))->int_release();
  piVar8 = (int *)(piStack_a0);
  auStack_9c[0] = (undefined4)(0);
  *(unsigned char *)((char *)&uStack_70 + 0) = 0x25;
  if (piStack_a0 != (int *)0x0) {

    piStack_a0 = (int *)((int *)0x0);
    (**(code **)(*piVar8 + 8))();
  }
  *(unsigned char *)((char *)&uStack_70 + 0) = 0x26;
  ((SCStr *)((SCStr *)auStack_40))->int_release();
  auStack_40[0] = (undefined4)(0);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  appuStack_170[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&uStack_70 + 0) = 0x27;
  ((SCStr *)((SCStr *)auStack_ac))->int_release();
  piVar8 = (int *)(piStack_b0);
  auStack_ac[0] = (undefined4)(0);
  *(unsigned char *)((char *)&uStack_70 + 0) = 0x28;
  if (piStack_b0 != (int *)0x0) {

    piStack_b0 = (int *)((int *)0x0);
    (**(code **)(*piVar8 + 8))();
  }
  *(unsigned char *)((char *)&uStack_70 + 0) = 0x29;
  ((SCStr *)((SCStr *)auStack_48))->int_release();
  auStack_48[0] = (undefined4)(0);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  appuStack_190[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&uStack_70 + 0) = 0x2a;
  ((SCStr *)((SCStr *)auStack_bc))->int_release();
  piVar8 = (int *)(piStack_c0);
  auStack_bc[0] = (undefined4)(0);
  *(unsigned char *)((char *)&uStack_70 + 0) = 0x2b;
  if (piStack_c0 != (int *)0x0) {

    piStack_c0 = (int *)((int *)0x0);
    (**(code **)(*piVar8 + 8))();
  }
  *(unsigned char *)((char *)&uStack_70 + 0) = 0x2c;
  ((SCStr *)((SCStr *)auStack_50))->int_release();
  auStack_50[0] = (undefined4)(0);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  appuStack_1b0[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&uStack_70 + 0) = 0x2d;
  ((SCStr *)((SCStr *)auStack_cc))->int_release();
  piVar8 = (int *)(piStack_d0);
  auStack_cc[0] = (undefined4)(0);
  *(unsigned char *)((char *)&uStack_70 + 0) = 0x2e;
  if (piStack_d0 != (int *)0x0) {

    piStack_d0 = (int *)((int *)0x0);
    (**(code **)(*piVar8 + 8))();
  }
  piVar8 = (int *)(piStack_60);
  *(unsigned char *)((char *)&uStack_70 + 0) = 0x2f;
  if (piStack_60 != (int *)0x0) {

    piStack_60 = (int *)((int *)0x0);
    (**(code **)(*piVar8 + 8))();
  }
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  appuStack_1d0[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&uStack_70 + 0) = 0x30;
  ((SCStr *)((SCStr *)auStack_dc))->int_release();
  piVar8 = (int *)(piStack_e0);
  auStack_dc[0] = (undefined4)(0);
  *(unsigned char *)((char *)&uStack_70 + 0) = 0x31;
  if (piStack_e0 != (int *)0x0) {

    piStack_e0 = (int *)((int *)0x0);
    (**(code **)(*piVar8 + 8))();
  }
  uStack_70 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_70 + 1)) << 8 | (uint)(0x32)));
  ((SCStr *)((SCStr *)apuStack_10))->int_release();
  apuStack_10[0] = (undefined1 *)((undefined1 *)0x0);

  if (piStack_68 != (int *)0x0) {
    (**(code **)(*piStack_68 + 8))();
  }

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 1000344f; body size 5 bytes.
#line 1 "ENTRY_1000344f"

undefined4 __fastcall FUN_1000344f(int param_1)

{
  return (undefined4)(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x12d1c));
}


// Reference entry 10003463; body size 5 bytes.
#line 1 "ENTRY_10003463"

undefined4 _CSharp_SCILibrary_SC_URL_SONOS_DEMO_get_0(void)

{
                    
  return (undefined4)(0x13);
}


// Reference entry 1000346d; body size 5 bytes.
#line 1 "ENTRY_1000346d"

undefined4 FUN_1000346d(undefined4 param_1,undefined4 param_2,int *param_3,uint param_4)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if (1 < param_4) {
    bVar2 = (byte)(*(byte *)*param_3);
    pbVar1 = (byte *)((byte *)*param_3 + 1);
    *param_3 = (int)((int)pbVar1);
    if ((bVar2 != 0) && (uVar4 = (uint)bVar2, uVar4 <= param_4 - 1)) {
      *param_3 = (int)((int)(pbVar1 + uVar4));
      uVar3 = (undefined4)(thunk_FUN_1143f120(param_1,param_2,pbVar1,uVar4));
      return (undefined4)(uVar3);
    }
  }
  return (undefined4)(0xffffb080);
}


// Reference entry 10003472; body size 5 bytes.
#line 1 "ENTRY_10003472"

undefined4 * __thiscall Recovered_Bulk::FUN_10003472(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int iVar1;
  uint uVar2;
  int iVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RStereoZPCandidateEnumerator);
  iVar1 = (int)(param_1[0xc]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar3 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10),uVar2));
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  thunk_FUN_111320a0();

  *param_1 = (undefined4)((uint)&ghidra_vftable_RCustomZPEnumerator);
  thunk_FUN_1106b1c0(param_1);
  thunk_FUN_11079440();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RITQHandler);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x34);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10003481; body size 5 bytes.
#line 1 "ENTRY_10003481"

void __thiscall Recovered_Bulk::FUN_10003481(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  int *piVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined1 auStack_1c [8];
  undefined1 auStack_14 [16];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)auStack_1c);
  uVar4 = (undefined4)(0);
  uVar1 = (undefined4)(thunk_FUN_11286940(0));
  thunk_FUN_11244ca0(uVar1,uVar4);
  thunk_FUN_1145c930(auStack_1c,0);
  piVar2 = (int *)(_errno());
  uVar1 = (undefined4)(thunk_FUN_1145ae30(auStack_1c,param_1 + 0x27a4,param_2,param_3,*piVar2));
  pcVar3 = (char *)("secure ");
  if (*(char *)(param_1 + 0x235d) == '\0') {
    pcVar3 = (char *)("");
  }
  thunk_FUN_112b0270(&DAT_118c9974,5,
                     "Failure in %sasync socket operation to host %s, udn %s after %ld ms; failed in state %d with error %d (errno: %d)"
                     ,pcVar3,auStack_14,param_1 + 0x2344,uVar1);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 1000348b; body size 5 bytes.
#line 1 "ENTRY_1000348b"

void __fastcall FUN_1000348b(int param_1)

{
  SCThreadSafeInc((long *)(param_1 + 4));
  return;
}


// Reference entry 10003490; body size 5 bytes.
#line 1 "ENTRY_10003490"

void __fastcall FUN_10003490(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    thunk_FUN_11063760(*(int *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 2;
  return;
}


// Reference entry 10003495; body size 5 bytes.
#line 1 "ENTRY_10003495"

void FUN_10003495(void)

{
  thunk_FUN_10fb19e0();
  return;
}


// Reference entry 1000349a; body size 5 bytes.
#line 1 "ENTRY_1000349a"

void __fastcall FUN_1000349a(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x6284) != 0) && (*(int **)(param_1 + 0x6280) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x6280) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x6280));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x6280) = 0;
    *(undefined4 *)(param_1 + 0x6284) = 0;
  }
  return;
}


// Reference entry 1000349f; body size 5 bytes.
#line 1 "ENTRY_1000349f"

undefined4 __fastcall FUN_1000349f(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x24) + 0x14))());
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 100034a4; body size 5 bytes.
#line 1 "ENTRY_100034a4"

undefined4 __fastcall FUN_100034a4(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x40))());
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 100034b3; body size 5 bytes.
#line 1 "ENTRY_100034b3"

undefined4 * FUN_100034b3(undefined4 *param_1)

{
 try {
  int *piVar1;
  bool bVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined1 *apuStack_40 [3];
  undefined1 auStack_34 [8];
  undefined4 uStack_2c;
  int *piStack_28;
  undefined4 auStack_24 [2];
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  uint uStack_8;

  uVar3 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);

  uVar7 = (uint)(0);

  do {
    pcVar4 = (char *)((char *)thunk_FUN_114561e0(uVar7,uVar3));
    ((SCStr *)((SCStr *)&uStack_18))->int_allocRep(pcVar4);

    bVar2 = (bool)(((SCStr *)((SCStr *)&uStack_18))->op_eq(""));
    if (!bVar2) {
      thunk_FUN_10c5f430(uVar7,0);
      thunk_FUN_10c61010(apuStack_40,auStack_34,6,0,0);
      *(unsigned char *)((char *)&uStack_8 + 0) = 2;
      ((SCStr *)((SCStr *)&uStack_14))->int_allocRep("");
      *(unsigned char *)((char *)&uStack_8 + 0) = 3;
      thunk_FUN_10c5f8a0(&DAT_1186d2ee);
      *(unsigned char *)((char *)&uStack_8 + 0) = 4;
      puVar6 = (undefined1 *)(&DAT_1186d2ee);
      if (apuStack_40[0] != (undefined1 *)0x0) {
        puVar6 = (undefined1 *)(apuStack_40[0]);
      }
      thunk_FUN_10c62d50(auStack_24,apuStack_40,0x2803,&DAT_1188465c,puVar6);
      *(unsigned char *)((char *)&uStack_8 + 0) = 5;
      thunk_FUN_10ec2270(&uStack_14);
      *(unsigned char *)((char *)&uStack_8 + 0) = 6;
      uVar5 = (undefined4)(thunk_FUN_10ecef50(auStack_24));
      thunk_FUN_10ec3610(uVar5);
      piVar1 = (int *)(piStack_28);
      *(unsigned char *)((char *)&uStack_8 + 0) = 7;
      if (piStack_28 != (int *)0x0) {

        piStack_28 = (int *)((int *)0x0);
        (**(code **)(*piVar1 + 8))();
      }
      *(unsigned char *)((char *)&uStack_8 + 0) = 8;
      ((SCStr *)((SCStr *)auStack_24))->int_release();
      auStack_24[0] = (undefined4)(0);
      *(unsigned char *)((char *)&uStack_8 + 0) = 9;
      ((SCStr *)((SCStr *)&uStack_14))->int_release();

      uStack_8 = (uint)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(10)));
      ((SCStr *)((SCStr *)apuStack_40))->int_release();
      apuStack_40[0] = (undefined1 *)((undefined1 *)0x0);
    }

    ((SCStr *)((SCStr *)&uStack_18))->int_release();
    uVar7 = (uint)(uVar7 + 1);

    uStack_8 = (uint)(uStack_8 & 0xffffff00);
  } while (uVar7 < 0x3f);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 100034d1; body size 5 bytes.
#line 1 "ENTRY_100034d1"

undefined1 FUN_100034d1(void)

{
  return (undefined1)(0);
}


// Reference entry 100034e0; body size 5 bytes.
#line 1 "ENTRY_100034e0"

SCStr * FUN_100034e0(SCStr *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  
  iVar2 = (int)(thunk_FUN_101f08d0());
  if (iVar2 != 0x40) {
    iVar2 = (int)(thunk_FUN_101f08d0());
    if (iVar2 != 0x200) {
      piVar3 = (int *)((int *)thunk_FUN_110828b0());
      if (piVar3 != (int *)0x0) {
        cVar1 = (char)((**(code **)(*piVar3 + 0x3c))());
        if (cVar1 != '\0') {
          pcVar4 = (char *)((char *)thunk_FUN_1109aba0(0x25cb,&DAT_11882ff0));
          ((SCStr *)(param_1))->int_allocRep(pcVar4);
          return (SCStr *)(param_1);
        }
      }
      pcVar4 = (char *)((char *)thunk_FUN_1109aba0(0x25cc,&DAT_11882ff0));
      ((SCStr *)(param_1))->int_allocRep(pcVar4);
      return (SCStr *)(param_1);
    }
  }
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 100034e5; body size 5 bytes.
#line 1 "ENTRY_100034e5"

void FUN_100034e5(void)

{
  return;
}


// Reference entry 1000350d; body size 5 bytes.
#line 1 "ENTRY_1000350d"

undefined4 FUN_1000350d(char *param_1)

{
  int iVar1;
  
  iVar1 = (int)(strncmp(param_1,"HTTP/1.1 ",9));
  if (iVar1 != 0) {
    iVar1 = (int)(strncmp(param_1,"HTTP/1.0 ",9));
    if (iVar1 != 0) {
      return (undefined4)(0);
    }
  }
  return (undefined4)(1);
}


// Reference entry 10003512; body size 5 bytes.
#line 1 "ENTRY_10003512"

void __fastcall FUN_10003512(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpImpl);
  thunk_FUN_112407b0();
  return;
}


// Reference entry 10003521; body size 5 bytes.
#line 1 "ENTRY_10003521"

undefined1 __fastcall FUN_10003521(int param_1)

{
 try {
  bool bVar1;
  uint uVar2;
  undefined1 uVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;

  uVar2 = (uint)(DAT_12126b84);

  *(undefined1 *)(param_1 + 0xc) = 0;
  bVar1 = (bool)(((SCStr *)((SCStr *)&stack0x00000004))->op_eq((SCStr *)&DAT_121a7754));
  if (bVar1) {
    *(undefined1 *)(param_1 + 0xc) = 1;
    FUN_1006aac8(uVar2);
    uVar3 = (undefined1)(1);
  }
  else {
    bVar1 = (bool)(((SCStr *)((SCStr *)&stack0x00000004))->op_eq((SCStr *)&DAT_121a7704));
    if (bVar1) {
      FUN_1006aac8(uVar2);
      uVar3 = (undefined1)(1);
    }
    else {
      uVar3 = (undefined1)(0);
    }
  }

  ((SCStr *)((SCStr *)&stack0x00000004))->int_release();

  return (undefined1)(uVar3);

 } catch (...) { }
}


// Reference entry 1000352b; body size 5 bytes.
#line 1 "ENTRY_1000352b"

undefined1 FUN_1000352b(void)

{
  return (undefined1)(0);
}


// Reference entry 1000353f; body size 5 bytes.
#line 1 "ENTRY_1000353f"

undefined4 FUN_1000353f(undefined4 param_1)

{
 try {
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined **appuStack_118 [8];
  undefined **appuStack_f8 [8];
  undefined1 auStack_d8 [36];
  undefined4 uStack_b4;
  int *piStack_b0;
  undefined4 uStack_ac;
  int *piStack_a8;
  undefined1 auStack_a4 [36];
  undefined4 uStack_80;
  int *piStack_7c;
  undefined4 uStack_78;
  int *piStack_74;
  void *pvStack_70;
  undefined1 *puStack_6c;
  undefined4 uStack_68;
  undefined1 auStack_64 [12];
  undefined4 uStack_58;
  int *piStack_54;
  undefined4 uStack_50;
  int *piStack_4c;
  undefined4 uStack_3c;
  int *piStack_38;
  undefined4 uStack_34;
  int *piStack_30;
  undefined **ppuStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  undefined4 *puStack_18;
  undefined4 *puStack_14;
  int iStack_10;
  SCStr aSStack_c [4];
  undefined4 uStack_8;


  uVar3 = (uint)(DAT_12126b84 ^ (uint)auStack_64);

  ((SCStr *)(aSStack_c))->int_allocRep("backward");

  iVar4 = (int)(thunk_FUN_10eb1b50(uVar3));
  *(unsigned char *)((char *)&uStack_68 + 0) = 1;
  thunk_FUN_10df6f00(aSStack_c);
  *(unsigned char *)((char *)&uStack_68 + 0) = 2;
  uVar5 = (undefined4)(thunk_FUN_10def290(auStack_d8,iVar4 + 4));
  *(unsigned char *)((char *)&uStack_68 + 0) = 3;
  thunk_FUN_105f5d20(uVar5);
  *(unsigned char *)((char *)&uStack_68 + 0) = 4;
  ((SCStr *)((SCStr *)&uStack_8))->int_allocRep("forward");
  *(unsigned char *)((char *)&uStack_68 + 0) = 5;
  iVar4 = (int)(thunk_FUN_10eb1dc0());
  *(unsigned char *)((char *)&uStack_68 + 0) = 6;
  thunk_FUN_10df6f00(&uStack_8);
  *(unsigned char *)((char *)&uStack_68 + 0) = 7;
  uVar5 = (undefined4)(thunk_FUN_10def290(auStack_a4,iVar4 + 4));
  *(unsigned char *)((char *)&uStack_68 + 0) = 8;
  thunk_FUN_105f5d20(uVar5);
  ppuStack_2c = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTree);

  iStack_24 = (int)(0);
  iStack_20 = (int)(0);
  iStack_1c = (int)(0);
  puStack_18 = (undefined4 *)((undefined4 *)0x0);
  puStack_14 = (undefined4 *)((undefined4 *)0x0);
  iStack_10 = (int)(0);
  *(unsigned char *)((char *)&uStack_68 + 0) = 10;
  piVar6 = (int *)((int *)thunk_FUN_10605060(appuStack_f8));
  uVar5 = (undefined4)((**(code **)(*piVar6 + 8))(appuStack_118));
  thunk_FUN_105f5df0(uVar5);
  puVar2 = (undefined4 *)(puStack_14);
  uStack_68 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_68 + 1)) << 8 | (uint)(9)));
  puVar7 = (undefined4 *)(puStack_18);
  if (puStack_18 != (undefined4 *)0x0) {
    for (; (undefined4 *)(puVar7) != puVar2; puVar7 = puVar7 + 8) {
      (**(code **)*puVar7)(0);
    }
    uVar3 = (uint)(iStack_10 - (int)puStack_18 & 0xffffffe0);
    puVar7 = (undefined4 *)(puStack_18);
    if (0xfff < uVar3) {
      puVar7 = (undefined4 *)((undefined4 *)puStack_18[-1]);
      uVar3 = (uint)(uVar3 + 0x23);
      if (0x1f < (uint)((int)puStack_18 + (-4 - (int)puVar7))) goto LAB_10a1c14c;
    }
    thunk_FUN_1148a50e(puVar7,uVar3);
    puStack_18 = (undefined4 *)((undefined4 *)0x0);
    puStack_14 = (undefined4 *)((undefined4 *)0x0);
    iStack_10 = (int)(0);
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
LAB_10a1c14c:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar4,uVar3);
    iStack_24 = (int)(0);
    iStack_20 = (int)(0);
    iStack_1c = (int)(0);
  }
  ppuStack_2c = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  thunk_FUN_10604700();
  thunk_FUN_106045d0();
  piVar6 = (int *)(piStack_74);
  appuStack_f8[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&uStack_68 + 0) = 0xb;
  if (piStack_74 != (int *)0x0) {

    piStack_74 = (int *)((int *)0x0);
    (**(code **)(*piVar6 + 8))();
  }
  piVar6 = (int *)(piStack_7c);
  *(unsigned char *)((char *)&uStack_68 + 0) = 0xc;
  if (piStack_7c != (int *)0x0) {

    piStack_7c = (int *)((int *)0x0);
    (**(code **)(*piVar6 + 8))();
  }
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  thunk_FUN_10def0d0();
  piVar6 = (int *)(piStack_30);
  *(unsigned char *)((char *)&uStack_68 + 0) = 0xd;
  if (piStack_30 != (int *)0x0) {

    piStack_30 = (int *)((int *)0x0);
    (**(code **)(*piVar6 + 8))();
  }
  piVar6 = (int *)(piStack_38);
  *(unsigned char *)((char *)&uStack_68 + 0) = 0xe;
  if (piStack_38 != (int *)0x0) {

    piStack_38 = (int *)((int *)0x0);
    (**(code **)(*piVar6 + 8))();
  }
  *(unsigned char *)((char *)&uStack_68 + 0) = 0xf;
  ((SCStr *)((SCStr *)&uStack_8))->int_release();

  thunk_FUN_10604700();
  thunk_FUN_106045d0();
  piVar6 = (int *)(piStack_a8);
  appuStack_118[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&uStack_68 + 0) = 0x10;
  if (piStack_a8 != (int *)0x0) {

    piStack_a8 = (int *)((int *)0x0);
    (**(code **)(*piVar6 + 8))();
  }
  piVar6 = (int *)(piStack_b0);
  *(unsigned char *)((char *)&uStack_68 + 0) = 0x11;
  if (piStack_b0 != (int *)0x0) {

    piStack_b0 = (int *)((int *)0x0);
    (**(code **)(*piVar6 + 8))();
  }
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  thunk_FUN_10def0d0();
  piVar6 = (int *)(piStack_4c);
  *(unsigned char *)((char *)&uStack_68 + 0) = 0x12;
  if (piStack_4c != (int *)0x0) {

    piStack_4c = (int *)((int *)0x0);
    (**(code **)(*piVar6 + 8))();
  }
  piVar6 = (int *)(piStack_54);
  uStack_68 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_68 + 1)) << 8 | (uint)(0x13)));
  if (piStack_54 != (int *)0x0) {

    piStack_54 = (int *)((int *)0x0);
    (**(code **)(*piVar6 + 8))();
  }

  ((SCStr *)(aSStack_c))->int_release();

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 10003549; body size 5 bytes.
#line 1 "ENTRY_10003549"

undefined1 FUN_10003549(void)

{
  return (undefined1)(0);
}


// Reference entry 10003558; body size 5 bytes.
#line 1 "ENTRY_10003558"

undefined1 FUN_10003558(void)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_10da1740());
  if (cVar1 == '\0') {
    cVar1 = (char)(thunk_FUN_10da1e80());
    if (cVar1 == '\0') {
      return (undefined1)(0);
    }
    cVar1 = (char)(thunk_FUN_10da1370());
    if (((cVar1 != '\0') && (cVar1 = thunk_FUN_10da1830(), cVar1 != '\0')) &&
       (cVar1 = thunk_FUN_10da15c0(), cVar1 == '\0')) {
      return (undefined1)(1);
    }
    cVar1 = (char)(thunk_FUN_10f0b5e0());
    if (cVar1 != '\0') {
      return (undefined1)(1);
    }
  }
  return (undefined1)(0);
}


// Reference entry 1000355d; body size 5 bytes.
#line 1 "ENTRY_1000355d"

void __thiscall Recovered_Bulk::FUN_1000355d(int *param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(4));

  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    uVar3 = (undefined4)((**(code **)(*param_2 + 0x1c))(uVar1));
    *puVar2 = (undefined4)(uVar3);
  }

  thunk_FUN_1106b190(-(uint)(param_1 != 0) & param_1 + 8U,puVar2,0);

  return;

 } catch (...) { }
}


// Reference entry 1000358a; body size 5 bytes.
#line 1 "ENTRY_1000358a"

void __fastcall FUN_1000358a(int param_1)

{
  int *piVar1;
  
  *(undefined1 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    piVar1 = (int *)(*(int **)(param_1 + 0x10));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}


// Reference entry 1000359e; body size 5 bytes.
#line 1 "ENTRY_1000359e"

void _CSharp_delete_SCINfcDelegateSwigBase_4(int *param_1)

{
                    
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 100035a3; body size 5 bytes.
#line 1 "ENTRY_100035a3"

void __fastcall FUN_100035a3(int *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 100035b2; body size 5 bytes.
#line 1 "ENTRY_100035b2"

void FUN_100035b2(undefined4 param_1,undefined4 param_2)

{
 try {
  uint uVar1;
  undefined4 auStack_20 [4];
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar1 = (uint)(DAT_12126b84);

  auStack_20[0] = (undefined4)(0);
  thunk_FUN_111a44c0(param_2);
  thunk_FUN_111aaf90(1,auStack_20);

  thunk_FUN_111a36f0(uVar1);

  return;

 } catch (...) { }
}


// Reference entry 100035bc; body size 5 bytes.
#line 1 "ENTRY_100035bc"

void FUN_100035bc(void)

{
  thunk_FUN_10fde3b0();
  return;
}


// Reference entry 100035c1; body size 5 bytes.
#line 1 "ENTRY_100035c1"

undefined1 FUN_100035c1(void)

{
  return (undefined1)(0);
}


// Reference entry 100035cb; body size 5 bytes.
#line 1 "ENTRY_100035cb"

undefined4 * __thiscall Recovered_Bulk::FUN_100035cb(byte param_2)
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


// Reference entry 100035d0; body size 5 bytes.
#line 1 "ENTRY_100035d0"

undefined4 * __thiscall Recovered_Bulk::FUN_100035d0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCISettingsProperty"));
  if ((bVar1) || (bVar1 = ((SCStr *)(param_3))->op_eq("SCIIntegerSettingsProperty"), bVar1)) {
    *param_2 = (undefined4)(param_1);
    if (param_1 == (int *)0x0) {
      return (undefined4 *)(param_2);
    }
    (**(code **)(*param_1 + 4))();
    return (undefined4 *)(param_2);
  }
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
  if (!bVar1) {
    *param_2 = (undefined4)(0);
    return (undefined4 *)(param_2);
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 == (int *)0x0) {
    return (undefined4 *)(param_2);
  }
  (**(code **)(*param_1 + 4))();
  return (undefined4 *)(param_2);
}


// Reference entry 100035d5; body size 5 bytes.
#line 1 "ENTRY_100035d5"

undefined4 * __fastcall FUN_100035d5(int param_1)

{
 try {
  undefined4 uVar1;
  bool bVar2;
  uint uVar3;
  SCStr *pSVar4;
  undefined4 *puVar5;
  void *pvStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar3 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&uStack_1c))->int_allocRep("CurrentEvent");

  pSVar4 = (SCStr *)((SCStr *)(**(code **)(**(int **)(param_1 + 8) + 0xd0))(&uStack_18,&uStack_1c,uVar3));
  *(unsigned char *)((char *)&uStack_8 + 0) = 1;
  bVar2 = (bool)(((SCStr *)(pSVar4))->op_eq("multiple_speakers"));
  uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(2)));
  ((SCStr *)((SCStr *)&uStack_18))->int_release();


  ((SCStr *)((SCStr *)&uStack_1c))->int_release();

  if (bVar2) {
    puVar5 = (undefined4 *)(operator_new(0xc));
    if (puVar5 != (undefined4 *)0x0) {
      uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
      puVar5[1] = (undefined4)(uVar1);
      puVar5[2] = (undefined4)(uVar1);
      *puVar5 = (undefined4)((uint)&ghidra_vftable_SCSecureTransferSpeakerChoiceState);

      return (undefined4 *)(puVar5);
    }
  }
  else {
    ((SCStr *)((SCStr *)&uStack_18))->int_allocRep("CurrentEvent");

    pSVar4 = (SCStr *)((SCStr *)(**(code **)(**(int **)(param_1 + 8) + 0xd0))(&uStack_1c,&uStack_18));
    *(unsigned char *)((char *)&uStack_8 + 0) = 5;
    bVar2 = (bool)(((SCStr *)(pSVar4))->op_eq("single_speaker"));
    uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(6)));
    ((SCStr *)((SCStr *)&uStack_1c))->int_release();


    ((SCStr *)((SCStr *)&uStack_18))->int_release();

    if (!bVar2) {
      ((SCStr *)((SCStr *)&uStack_18))->int_allocRep("CurrentEvent");

      pSVar4 = (SCStr *)((SCStr *)(**(code **)(**(int **)(param_1 + 8) + 0xd0))(&uStack_1c,&uStack_18));
      *(unsigned char *)((char *)&uStack_8 + 0) = 9;
      bVar2 = (bool)(((SCStr *)(pSVar4))->op_eq("ready_for_transfer"));
      uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(10)));
      ((SCStr *)((SCStr *)&uStack_1c))->int_release();


      ((SCStr *)((SCStr *)&uStack_18))->int_release();

      if (bVar2) {
        pvStack_20 = (void *)(operator_new(0x1c));

        if (pvStack_20 != (void *)0x0) {
          puVar5 = (undefined4 *)((undefined4 *)thunk_FUN_10e50d20(*(undefined4 *)(param_1 + 8)));

          return (undefined4 *)(puVar5);
        }
      }
      else {
        ((SCStr *)((SCStr *)&uStack_14))->int_allocRep("CurrentEvent");

        pSVar4 = (SCStr *)((SCStr *)(**(code **)(**(int **)(param_1 + 8) + 0xd0))(&pvStack_20,&uStack_14));
        *(unsigned char *)((char *)&uStack_8 + 0) = 0xe;
        bVar2 = (bool)(((SCStr *)(pSVar4))->op_eq("abort"));
        uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(0xf)));
        ((SCStr *)((SCStr *)&pvStack_20))->int_release();
        pvStack_20 = (void *)((void *)0x0);

        ((SCStr *)((SCStr *)&uStack_14))->int_release();


        if (bVar2) {
          puVar5 = (undefined4 *)(operator_new(0xc));
          if (puVar5 == (undefined4 *)0x0) {

            return (undefined4 *)((undefined4 *)0x0);
          }
          uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
          puVar5[1] = (undefined4)(uVar1);
          puVar5[2] = (undefined4)(uVar1);
          *puVar5 = (undefined4)((uint)&ghidra_vftable_SCSecureTransferWizCompleteState);

          return (undefined4 *)(puVar5);
        }
        thunk_FUN_112af4e0("secure_transfer",1,"buttons state failed");
      }

      return (undefined4 *)((undefined4 *)0x0);
    }
    puVar5 = (undefined4 *)(operator_new(0xa0));
    if (puVar5 != (undefined4 *)0x0) {
      uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
      puVar5[1] = (undefined4)(uVar1);
      puVar5[2] = (undefined4)(uVar1);
      puVar5[3] = (undefined4)((uint)&ghidra_vftable_SCSwfObjHHListener);
      puVar5[4] = (undefined4)((uint)&ghidra_vftable_SCIOpCBDelegate);
      puVar5[5] = (undefined4)(0);
      puVar5[6] = (undefined4)(0);
      *puVar5 = (undefined4)((uint)&ghidra_vftable_SCSecureTransferPressButtonState);
      puVar5[3] = (undefined4)((uint)&ghidra_vftable_SCSecureTransferPressButtonState);
      puVar5[4] = (undefined4)((uint)&ghidra_vftable_SCSecureTransferPressButtonState);
      puVar5[7] = (undefined4)(0);
      puVar5[8] = (undefined4)(0);
      puVar5[9] = (undefined4)(0);
      puVar5[10] = (undefined4)(0);
      puVar5[0xd] = (undefined4)(0);
      puVar5[0xe] = (undefined4)(0);
      puVar5[0x10] = (undefined4)(0);
      puVar5[0x11] = (undefined4)(0);
      puVar5[0xc] = (undefined4)((uint)&ghidra_vftable_SCOpRef);
      puVar5[0xf] = (undefined4)((uint)&ghidra_vftable_SCOpRef);
      puVar5[0x1b] = (undefined4)(0);
      puVar5[0x25] = (undefined4)(0);
      puVar5[0x26] = (undefined4)(0);

      return (undefined4 *)(puVar5);
    }
  }

  return (undefined4 *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 100035da; body size 5 bytes.
#line 1 "ENTRY_100035da"

undefined4 FUN_100035da(void)

{
  return (undefined4)(1);
}


// Reference entry 100035df; body size 5 bytes.
#line 1 "ENTRY_100035df"

void __thiscall Recovered_Bulk::FUN_100035df(int *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  undefined4 uVar2;
  int *piStack_18;
  int *piStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  (**(code **)(**(int **)(param_1 + 0x9c) + 0x18))(param_2,DAT_12126b84 );
  if (*(int *)(*(int *)(param_1 + 0x9c) + 0x10) == 0) {
    if (*(int **)(param_1 + 0x88) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x88) + 0x18))(param_1 + 0x84);
    }
    uVar2 = (undefined4)(thunk_FUN_102518f0(&param_2));

    thunk_FUN_102226d0(uVar2);
    *(unsigned char *)((char *)&uStack_8 + 0) = 3;
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 8))();
    }
    uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(2)));
    (**(code **)(*piStack_18 + 0x58))(param_1 + 0x84);
    if (*(int *)(param_1 + 0xac) != 0) {
      piVar1 = (int *)(*(int **)(param_1 + 0xb0));
      if (piVar1 != (int *)0x0) {
        *(undefined4 *)(param_1 + 0xac) = 0;
        *(undefined4 *)(param_1 + 0xb0) = 0;
        (**(code **)(*piVar1 + 8))();
      }
      *(undefined4 *)(param_1 + 0xac) = 0;
      *(undefined4 *)(param_1 + 0xb0) = 0;
    }
    if (*(int *)(param_1 + 0xa4) != 0) {
      piVar1 = (int *)(*(int **)(param_1 + 0xa8));
      if (piVar1 != (int *)0x0) {
        *(undefined4 *)(param_1 + 0xa4) = 0;
        *(undefined4 *)(param_1 + 0xa8) = 0;
        (**(code **)(*piVar1 + 8))();
      }
      *(undefined4 *)(param_1 + 0xa4) = 0;
      *(undefined4 *)(param_1 + 0xa8) = 0;
    }

    if (piStack_14 != (int *)0x0) {
      (**(code **)(*piStack_14 + 8))();
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 100035f8; body size 5 bytes.
#line 1 "ENTRY_100035f8"

undefined1 FUN_100035f8(void)

{
  return (undefined1)(1);
}


// Reference entry 100035fd; body size 5 bytes.
#line 1 "ENTRY_100035fd"

undefined4 FUN_100035fd(undefined4 param_1)

{
 try {
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined **appuStack_a0 [8];
  void *pvStack_80;
  undefined1 *puStack_7c;
  undefined4 uStack_78;
  undefined **appuStack_74 [9];
  undefined4 uStack_50;
  int *piStack_4c;
  undefined4 auStack_48 [2];
  undefined4 uStack_40;
  int *piStack_3c;
  undefined4 uStack_38;
  SCStr aSStack_34 [8];
  undefined4 auStack_2c [2];
  undefined **ppuStack_24;
  undefined4 uStack_20;
  int *piStack_1c;
  int *piStack_18;
  int iStack_14;
  undefined4 *puStack_10;
  undefined4 *puStack_c;
  int iStack_8;


  uVar3 = (uint)(DAT_12126b84 ^ (uint)appuStack_74);

  thunk_FUN_10c5f8a0("Go to Settings");

  thunk_FUN_10ec0a20("settings");
  *(unsigned char *)((char *)&uStack_78 + 0) = 1;
  iVar4 = (int)(thunk_FUN_10ecea60(aSStack_34));
  thunk_FUN_105f6290(iVar4 + 4);
  *(unsigned char *)((char *)&uStack_78 + 0) = 2;
  uVar5 = (undefined4)(thunk_FUN_10c5f450(auStack_2c,0x29f7,&DAT_1188465c,"device",uVar3));
  *(unsigned char *)((char *)&uStack_78 + 0) = 3;
  thunk_FUN_10ec1b40("header");
  *(unsigned char *)((char *)&uStack_78 + 0) = 4;
  iVar4 = (int)(thunk_FUN_10eced20(uVar5));
  thunk_FUN_105f6290(iVar4 + 4);
  ppuStack_24 = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTree);

  piStack_1c = (int *)((int *)0x0);
  piStack_18 = (int *)((int *)0x0);
  iStack_14 = (int)(0);
  puStack_10 = (undefined4 *)((undefined4 *)0x0);
  puStack_c = (undefined4 *)((undefined4 *)0x0);
  iStack_8 = (int)(0);
  *(unsigned char *)((char *)&uStack_78 + 0) = 6;
  piVar6 = (int *)((int *)thunk_FUN_106050a0(appuStack_74));
  uVar5 = (undefined4)((**(code **)(*piVar6 + 8))(appuStack_a0));
  thunk_FUN_105f60e0(uVar5);
  puVar2 = (undefined4 *)(puStack_c);
  *(unsigned char *)((char *)&uStack_78 + 0) = 5;
  puVar7 = (undefined4 *)(puStack_10);
  if (puStack_10 != (undefined4 *)0x0) {
    for (; (undefined4 *)(puVar7) != puVar2; puVar7 = puVar7 + 8) {
      (**(code **)*puVar7)(0);
    }
    uVar3 = (uint)(iStack_8 - (int)puStack_10 & 0xffffffe0);
    puVar7 = (undefined4 *)(puStack_10);
    if (0xfff < uVar3) {
      puVar7 = (undefined4 *)((undefined4 *)puStack_10[-1]);
      uVar3 = (uint)(uVar3 + 0x23);
      if (0x1f < (uint)((int)puStack_10 + (-4 - (int)puVar7))) goto LAB_10b015a5;
    }
    thunk_FUN_1148a50e(puVar7,uVar3);
    puStack_10 = (undefined4 *)((undefined4 *)0x0);
    puStack_c = (undefined4 *)((undefined4 *)0x0);
    iStack_8 = (int)(0);
  }
  piVar6 = (int *)(piStack_18);
  if (piStack_1c != (int *)0x0) {
    if (piStack_1c != (int *)(piStack_18)) {
      piVar8 = (int *)(piStack_1c + 1);
      do {
        *(unsigned char *)((char *)&uStack_78 + 0) = 7;
        ((SCStr *)((SCStr *)(piVar8 + 1)))->int_release();
        piVar8[1] = (int)(0);
        piVar1 = (int *)((int *)*piVar8);
        *(unsigned char *)((char *)&uStack_78 + 0) = 8;
        if (piVar1 != (int *)0x0) {
          piVar8[-1] = (int)(0);
          *piVar8 = (int)(0);
          (**(code **)(*piVar1 + 8))();
        }
        *(unsigned char *)((char *)&uStack_78 + 0) = 5;
        piVar1 = (int *)(piVar8 + 2);
        piVar8 = (int *)(piVar8 + 3);
      } while (piVar1 != (int *)(piVar6));
    }
    uVar3 = (uint)(((iStack_14 - (int)piStack_1c) / 0xc) * 0xc);
    piVar6 = (int *)(piStack_1c);
    if (0xfff < uVar3) {
      piVar6 = (int *)((int *)piStack_1c[-1]);
      uVar3 = (uint)(uVar3 + 0x23);
      if (0x1f < (uint)((int)piStack_1c + (-4 - (int)piVar6))) {
LAB_10b015a5:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(piVar6,uVar3);
    piStack_1c = (int *)((int *)0x0);
    piStack_18 = (int *)((int *)0x0);
    iStack_14 = (int)(0);
  }
  ppuStack_24 = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  appuStack_74[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&uStack_78 + 0) = 9;
  ((SCStr *)((SCStr *)&uStack_38))->int_release();
  piVar6 = (int *)(piStack_3c);

  *(unsigned char *)((char *)&uStack_78 + 0) = 10;
  if (piStack_3c != (int *)0x0) {

    piStack_3c = (int *)((int *)0x0);
    (**(code **)(*piVar6 + 8))();
  }
  *(unsigned char *)((char *)&uStack_78 + 0) = 0xb;
  ((SCStr *)((SCStr *)auStack_2c))->int_release();
  auStack_2c[0] = (undefined4)(0);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  appuStack_a0[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&uStack_78 + 0) = 0xc;
  ((SCStr *)((SCStr *)auStack_48))->int_release();
  piVar6 = (int *)(piStack_4c);
  auStack_48[0] = (undefined4)(0);
  uStack_78 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_78 + 1)) << 8 | (uint)(0xd)));
  if (piStack_4c != (int *)0x0) {

    piStack_4c = (int *)((int *)0x0);
    (**(code **)(*piVar6 + 8))();
  }

  ((SCStr *)(aSStack_34))->int_release();

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 1000361b; body size 5 bytes.
#line 1 "ENTRY_1000361b"

int * FUN_1000361b(int *param_1,undefined4 param_2,char *param_3)

{
 try {
  uint uVar1;
  char *pcVar2;
  undefined4 *puVar3;
  uint in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined1 auStack_28 [16];
  int *piStack_18;
  undefined4 uStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;

  uVar1 = (uint)(DAT_12126b84);

  piStack_18 = (int *)(param_1);

  pcVar2 = (char *)((char *)&param_3);
  if (0xf < in_stack_00000020) {
    pcVar2 = (char *)(param_3);
  }
  ((SCStr *)((SCStr *)&uStack_14))->int_allocRep(pcVar2);
  *(unsigned char *)((char *)&uStack_8 + 0) = 1;
  puVar3 = (undefined4 *)((undefined4 *)thunk_FUN_10c97560(&piStack_18));
  puVar5 = (undefined4 *)(&uStack_14);
  *(unsigned char *)((char *)&uStack_8 + 0) = 2;
  uVar4 = (undefined4)(*puVar3);
  thunk_FUN_103869d0(auStack_28,4,uVar4,puVar5,in_stack_00000024);
  *(unsigned char *)((char *)&uStack_8 + 0) = 5;
  if (piStack_18 != (int *)0x0) {
    (**(code **)(*piStack_18 + 8))(uVar1);
  }
  *(unsigned char *)((char *)&uStack_8 + 0) = 7;
  uVar6 = (undefined4)(0x1037e8e4);
  ((SCStr *)((SCStr *)&uStack_14))->int_release();

  uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(6)));
  thunk_FUN_1035ccc0(auStack_28);
  thunk_FUN_10387aa0(param_1,uVar4,puVar5,uVar6);
  thunk_FUN_101f53d0();
  if (0xf < in_stack_00000020) {
    uVar1 = (uint)(in_stack_00000020 + 1);
    pcVar2 = (char *)(param_3);
    if (0xfff < uVar1) {
      pcVar2 = (char *)(*(char **)(param_3 + -4));
      uVar1 = (uint)(in_stack_00000020 + 0x24);
      if ((char *)0x1f < param_3 + (-4 - (int)pcVar2)) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(pcVar2,uVar1);
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 1000362f; body size 5 bytes.
#line 1 "ENTRY_1000362f"

undefined4 _CSharp_SCIPropertyBag_getIntProp__SWIG_0_8(int *param_1,ushort *param_2)

{
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined4 uStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&uStack_14))->setFromUTF16(param_2);
  uVar2 = (undefined4)((**(code **)(*param_1 + 0x24))(&uStack_14,uVar1));

  ((SCStr *)((SCStr *)&uStack_14))->int_release();

  return (undefined4)(uVar2);

 } catch (...) { }
}


// Reference entry 10003634; body size 5 bytes.
#line 1 "ENTRY_10003634"

undefined4 * __thiscall Recovered_Bulk::FUN_10003634(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIWebsocketDelegate"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
    }
  }
  return (undefined4 *)(param_2);
}


// Reference entry 10003639; body size 5 bytes.
#line 1 "ENTRY_10003639"

undefined4 * __thiscall Recovered_Bulk::FUN_10003639(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RLastFMContentProvider);
  thunk_FUN_111feb50();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x118);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10003648; body size 5 bytes.
#line 1 "ENTRY_10003648"

undefined4 * __thiscall Recovered_Bulk::FUN_10003648(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIEventSink"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
    }
  }
  return (undefined4 *)(param_2);
}


// Reference entry 10003666; body size 5 bytes.
#line 1 "ENTRY_10003666"

void __thiscall Recovered_Bulk::FUN_10003666(int param_2,ushort param_3)
{
  int param_1 = (int )this;
  int iVar1;
  uint uStack_8;
  
  if (*(int **)(param_1 + 0x18) == (int *)0x0) {
    iVar1 = (int)(0);
  }
  else {
    uStack_8 = (uint)(0x10e2c4ff);
    iVar1 = (int)((**(code **)(**(int **)(param_1 + 0x18) + 0x20))());
  }
  if (param_2 == iVar1) {
    uStack_8 = (uint)(0x10e2c511);
    iVar1 = (int)(thunk_FUN_103eb600());
    if (iVar1 == -2) {
      uStack_8 = (uint)((uint)param_3);
      thunk_FUN_112af4e0("sec_reg",1,"Error in resetting password %d");
      ((SCStr *)((SCStr *)&uStack_8))->int_allocRep("network_error");
      (**(code **)(**(int **)(param_1 + -4) + 0x8c))();
    }
  }
  return;
}


// Reference entry 1000366b; body size 5 bytes.
#line 1 "ENTRY_1000366b"

uint __fastcall FUN_1000366b(int param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 0x20) != (int *)0x0) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 0x20) + 0x28))());
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10003675; body size 5 bytes.
#line 1 "ENTRY_10003675"

undefined2 __fastcall FUN_10003675(int param_1)

{
  return (undefined2)(*(undefined2 *)(param_1 + 0x24));
}


// Reference entry 1000368e; body size 5 bytes.
#line 1 "ENTRY_1000368e"

void FUN_1000368e(void)

{
  thunk_FUN_10909090();
  return;
}


// Reference entry 10003693; body size 5 bytes.
#line 1 "ENTRY_10003693"

undefined1 FUN_10003693(void)

{
  return (undefined1)(1);
}


// Reference entry 1000369d; body size 5 bytes.
#line 1 "ENTRY_1000369d"

void FUN_1000369d(void)

{
  thunk_FUN_10def0d0();
  return;
}


// Reference entry 100036a2; body size 5 bytes.
#line 1 "ENTRY_100036a2"

undefined4 * __thiscall Recovered_Bulk::FUN_100036a2(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a29f0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 100036a7; body size 5 bytes.
#line 1 "ENTRY_100036a7"

void FUN_100036a7(void)

{
  thunk_FUN_10568060();
  return;
}


// Reference entry 100036b6; body size 5 bytes.
#line 1 "ENTRY_100036b6"

void FUN_100036b6(void)

{
  thunk_FUN_10444110();
  return;
}


// Reference entry 100036bb; body size 5 bytes.
#line 1 "ENTRY_100036bb"

undefined4 FUN_100036bb(undefined1 *param_1)

{
  *param_1 = (undefined1)(1);
  return (undefined4)(1);
}


// Reference entry 100036f7; body size 5 bytes.
#line 1 "ENTRY_100036f7"

bool FUN_100036f7(void)

{
 try {
  bool bVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;

  uVar2 = (uint)(DAT_12126b84);

  bVar1 = (bool)(((SCStr *)((SCStr *)&stack0x00000004))->op_eq((SCStr *)&DAT_121a7734));
  if (bVar1) {
    FUN_1006aac8(uVar2);
  }

  ((SCStr *)((SCStr *)&stack0x00000004))->int_release();

  return (bool)(bVar1);

 } catch (...) { }
}


// Reference entry 100036fc; body size 5 bytes.
#line 1 "ENTRY_100036fc"

undefined1 FUN_100036fc(void)

{
  return (undefined1)(1);
}


// Reference entry 1000370b; body size 5 bytes.
#line 1 "ENTRY_1000370b"

undefined2 __fastcall FUN_1000370b(int param_1)

{
  return (undefined2)(*(undefined2 *)(param_1 + 0x24));
}


// Reference entry 1000371a; body size 5 bytes.
#line 1 "ENTRY_1000371a"

undefined4 * __thiscall Recovered_Bulk::FUN_1000371a(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1000372e; body size 5 bytes.
#line 1 "ENTRY_1000372e"

void FUN_1000372e(void)

{
  thunk_FUN_10792d60();
  return;
}


// Reference entry 10003738; body size 5 bytes.
#line 1 "ENTRY_10003738"

SCStr * FUN_10003738(SCStr *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int *piStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar3 = (int *)((int *)thunk_FUN_10c97560(&piStack_14));
  piVar1 = (int *)((int *)*piVar3);

  *piVar3 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(uVar2));
  }
  *(unsigned char *)((char *)&uStack_8 + 0) = 3;
  if (piStack_14 != (int *)0x0) {
    (**(code **)(*piStack_14 + 8))();
  }
  uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(2)));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xe4))(param_1);

    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))();
    }

    return (SCStr *)(param_1);
  }
  ((SCStr *)(param_1))->int_allocRep("");

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return (SCStr *)(param_1);

 } catch (...) { }
}


// Reference entry 10003742; body size 5 bytes.
#line 1 "ENTRY_10003742"

bool __thiscall Recovered_Bulk::FUN_10003742(int param_2,short *param_3)
{
  int param_1 = (int )this;
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int **)(param_1 + 0x20) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x20) + 0xc))());
    if (cVar1 != '\0') {
      iVar2 = (int)((**(code **)(**(int **)(param_1 + 0x20) + 8))());
      goto LAB_105bfd82;
    }
  }
  iVar2 = (int)(*(int *)(param_1 + 0x24));
LAB_105bfd82:
  if (iVar2 == param_2) {
    *(int *)(param_1 + 0x3c) = (*(int **)(param_1 + 0x20))[0x1123];
    if (*param_3 == 0) {
      uVar3 = (undefined4)((**(code **)(**(int **)(param_1 + 0x20) + 0x40))());
      *(undefined4 *)(param_1 + 0x38) = uVar3;
    }
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return (bool)(*(int *)(param_1 + 0x3c) == 200);
}


// Reference entry 10003765; body size 5 bytes.
#line 1 "ENTRY_10003765"

SCStr * FUN_10003765(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCServiceDescriptorManager");
  return (SCStr *)(param_1);
}


// Reference entry 10003779; body size 5 bytes.
#line 1 "ENTRY_10003779"

void __fastcall FUN_10003779(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  return;
}


// Reference entry 1000378d; body size 5 bytes.
#line 1 "ENTRY_1000378d"

undefined1 __fastcall FUN_1000378d(int param_1)

{
 try {
  bool bVar1;
  uint uVar2;
  undefined1 uVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;

  uVar2 = (uint)(DAT_12126b84);

  *(undefined1 *)(param_1 + 0xc) = 0;
  bVar1 = (bool)(((SCStr *)((SCStr *)&stack0x00000004))->op_eq((SCStr *)&DAT_121a77ec));
  if (bVar1) {
    *(undefined1 *)(param_1 + 0xc) = 1;
    FUN_1006aac8(uVar2);
    uVar3 = (undefined1)(1);
  }
  else {
    bVar1 = (bool)(((SCStr *)((SCStr *)&stack0x00000004))->op_eq((SCStr *)&DAT_121a7824));
    if (bVar1) {
      FUN_1006aac8(uVar2);
      uVar3 = (undefined1)(1);
    }
    else {
      uVar3 = (undefined1)(0);
    }
  }

  ((SCStr *)((SCStr *)&stack0x00000004))->int_release();

  return (undefined1)(uVar3);

 } catch (...) { }
}


// Reference entry 1000379c; body size 5 bytes.
#line 1 "ENTRY_1000379c"

void FUN_1000379c(void)

{
  thunk_FUN_10e9cb90();
  return;
}


// Reference entry 100037ba; body size 5 bytes.
#line 1 "ENTRY_100037ba"

int __thiscall Recovered_Bulk::FUN_100037ba(undefined4 param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  int iStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar1 = (uint)(DAT_12126b84);

  iStack_14 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_14))->int_allocRep("forcePageIndicatorOverlay");

  (**(code **)(**(int **)(param_1 + 4) + 0x40))(&iStack_14,param_2,uVar1);

  ((SCStr *)((SCStr *)&iStack_14))->int_release();

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 100037bf; body size 5 bytes.
#line 1 "ENTRY_100037bf"

undefined1 FUN_100037bf(void)

{
  return (undefined1)(0);
}


// Reference entry 100037c4; body size 5 bytes.
#line 1 "ENTRY_100037c4"

undefined1 FUN_100037c4(void)

{
  return (undefined1)(1);
}


// Reference entry 100037c9; body size 5 bytes.
#line 1 "ENTRY_100037c9"

void FUN_100037c9(void)

{
  thunk_FUN_10603120();
  return;
}


// Reference entry 100037ce; body size 5 bytes.
#line 1 "ENTRY_100037ce"

void __fastcall FUN_100037ce(int param_1)

{
  SCThreadSafeInc((long *)(param_1 + 4));
  return;
}


// Reference entry 100037d3; body size 5 bytes.
#line 1 "ENTRY_100037d3"

void FUN_100037d3(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return;
}


// Reference entry 100037f6; body size 5 bytes.
#line 1 "ENTRY_100037f6"

void _CSharp_delete_SCIServiceAccountFilter_4(int *param_1)

{
                    
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 10003800; body size 5 bytes.
#line 1 "ENTRY_10003800"

void FUN_10003800(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_11448780(*param_1,*(undefined2 *)((int)param_1 + 6),param_2,param_3);
  return;
}


// Reference entry 1000381e; body size 5 bytes.
#line 1 "ENTRY_1000381e"

int __fastcall FUN_1000381e(int param_1)

{
  int iVar1;
  byte *pbVar2;
  
  iVar1 = (int)(0);
  for (pbVar2 = (byte *)((byte *)(param_1 + 0x128)); pbVar2 != (byte *)(param_1 + 0x138); pbVar2 = pbVar2 + 1)
  {
    iVar1 = (int)(iVar1 + (char)(&DAT_1195e878)[*pbVar2]);
  }
  return (int)(iVar1);
}


// Reference entry 10003823; body size 5 bytes.
#line 1 "ENTRY_10003823"

void __fastcall FUN_10003823(int param_1)

{
 try {
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int *piStack_18;
  SCStr aSStack_14 [4];
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar4 = (uint)(DAT_12126b84);

  piVar5 = (int *)(operator_new(0x18));

  piStack_18 = (int *)(piVar5);
  if (piVar5 == (int *)0x0) {
    piVar6 = (int *)((int *)0x0);
  }
  else {
    ((SCStr *)(aSStack_14))->int_allocRep("PhoneNumber");
    uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(1)));
    thunk_FUN_1025f580(aSStack_14,*(undefined4 *)(param_1 + 8),
                       -(uint)(param_1 != 0) & param_1 + 0xcU);
    *piVar5 = (int)((int)(uint)&ghidra_vftable_SCMobilePhoneInput);
    piVar6 = (int *)(piVar5);
  }

  if (piVar6 != *(int **)(param_1 + 0x10)) {
    piVar1 = (int *)(*(int **)(param_1 + 0x14));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
      (**(code **)(*piVar1 + 8))(uVar4);
    }
    *(int **)(param_1 + 0x10) = piVar6;
    if (piVar6 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    else {
      if (*(code **)(*piVar6 + 0xc) != thunk_FUN_102611c0) {
        piVar6 = (int *)((int *)(**(code **)(*piVar6 + 0xc))());
      }
      *(int **)(param_1 + 0x14) = piVar6;
      (**(code **)(*piVar6 + 4))();
    }
  }
  if (piVar5 != (int *)0x0) {

    ((SCStr *)(aSStack_14))->int_release();
  }

  ((SCStr *)((SCStr *)&piStack_18))->int_allocRep("PhoneNumberValid");

  iVar2 = (int)(**(int **)(param_1 + 8));
  uVar3 = (undefined1)((**(code **)(**(int **)(param_1 + 0x10) + 0x30))());
  (**(code **)(iVar2 + 0xe4))(&piStack_18,uVar3);

  ((SCStr *)((SCStr *)&piStack_18))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 10003828; body size 5 bytes.
#line 1 "ENTRY_10003828"

void FUN_10003828(void)

{
  thunk_FUN_10def0d0();
  return;
}


// Reference entry 10003837; body size 5 bytes.
#line 1 "ENTRY_10003837"

void __fastcall FUN_10003837(int param_1)

{
  SCThreadSafeInc((long *)(param_1 + 4));
  return;
}


// Reference entry 10003846; body size 5 bytes.
#line 1 "ENTRY_10003846"

undefined4 * __thiscall Recovered_Bulk::FUN_10003846(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCArtworkCache);
  thunk_FUN_10b98a00();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x3c);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10003850; body size 5 bytes.
#line 1 "ENTRY_10003850"

undefined4 * __thiscall Recovered_Bulk::FUN_10003850(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1000385f; body size 5 bytes.
#line 1 "ENTRY_1000385f"

void FUN_1000385f(void)

{
  thunk_FUN_106e6870();
  return;
}


// Reference entry 10003869; body size 5 bytes.
#line 1 "ENTRY_10003869"

undefined4 * __fastcall FUN_10003869(undefined4 *param_1)

{
 try {
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  puStack_14 = (undefined4 *)(param_1);
  ((SCStr *)((SCStr *)&puStack_14))->int_allocRep("title");

  iVar1 = (int)(*(int *)*param_1);
  uVar3 = (undefined4)(thunk_FUN_10c5fc80(uVar2));
  (**(code **)(iVar1 + 0x1c))(&puStack_14,uVar3);

  ((SCStr *)((SCStr *)&puStack_14))->int_release();

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1000387d; body size 5 bytes.
#line 1 "ENTRY_1000387d"

void FUN_1000387d(void)

{
  thunk_FUN_10368770();
  return;
}


// Reference entry 100038a5; body size 5 bytes.
#line 1 "ENTRY_100038a5"

int __fastcall FUN_100038a5(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)(*(int **)(param_1 + 4));
  piVar2 = (int *)(piVar1);
  if (*piVar1 != 0) {
    piVar2 = (int *)((int *)0x0);
  }
  if ((piVar2 == (int *)0x0) || (iVar3 = piVar2[0x1b], iVar3 == 0)) {
    iVar3 = (int)(piVar1[0xd]);
  }
  return (int)(iVar3);
}


// Reference entry 100038c3; body size 5 bytes.
#line 1 "ENTRY_100038c3"

void FUN_100038c3(void)

{
  thunk_FUN_10c69080();
  return;
}


// Reference entry 100038c8; body size 5 bytes.
#line 1 "ENTRY_100038c8"

undefined4 * __thiscall Recovered_Bulk::FUN_100038c8(byte param_2)
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


// Reference entry 100038d7; body size 5 bytes.
#line 1 "ENTRY_100038d7"

void __fastcall FUN_100038d7(int param_1)

{
  SCThreadSafeInc((long *)(param_1 + 4));
  return;
}


// Reference entry 100038e6; body size 5 bytes.
#line 1 "ENTRY_100038e6"

undefined4 FUN_100038e6(undefined4 param_1)

{
 try {
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  int *piVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined **appuStack_80 [8];
  undefined **ppuStack_60;
  undefined4 uStack_5c;
  int *piStack_58;
  int *piStack_54;
  int iStack_50;
  undefined4 *puStack_4c;
  undefined4 *puStack_48;
  int iStack_44;
  undefined4 uStack_40;
  int *piStack_3c;
  undefined4 uStack_38;
  SCStr aSStack_34 [8];
  undefined4 auStack_2c [2];
  undefined4 auStack_24 [2];
  undefined4 auStack_1c [2];
  undefined4 uStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uStack_14 = (undefined4)(thunk_FUN_10c5f450(aSStack_34,0x2099,&DAT_11882ff0,
                                 DAT_12126b84 ));

  uVar3 = (undefined4)(thunk_FUN_10c5f450(auStack_2c,0x2bed,&DAT_11882ff0));
  *(unsigned char *)((char *)&uStack_8 + 0) = 1;
  uVar4 = (undefined4)(thunk_FUN_10c5f450(auStack_24,0x2bea,&DAT_11882ff0));
  *(unsigned char *)((char *)&uStack_8 + 0) = 2;
  uVar5 = (undefined4)(thunk_FUN_10c5f450(auStack_1c,0x2be9,&DAT_11882ff0));
  *(unsigned char *)((char *)&uStack_8 + 0) = 3;
  thunk_FUN_10ec1250();
  uVar11 = (undefined4)(0);
  *(unsigned char *)((char *)&uStack_8 + 0) = 4;
  uVar6 = (undefined4)(uStack_14);
  thunk_FUN_10eceeb0(uVar5);
  thunk_FUN_10ecbaa0(uVar4);
  thunk_FUN_10ecbc60(uVar3);
  thunk_FUN_10ecb760(uVar6);
  uVar6 = (undefined4)(thunk_FUN_10eca460(uVar11));
  thunk_FUN_105f6290(uVar6);
  ppuStack_60 = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTree);

  piStack_58 = (int *)((int *)0x0);
  piStack_54 = (int *)((int *)0x0);
  iStack_50 = (int)(0);
  puStack_4c = (undefined4 *)((undefined4 *)0x0);
  puStack_48 = (undefined4 *)((undefined4 *)0x0);
  iStack_44 = (int)(0);
  *(unsigned char *)((char *)&uStack_8 + 0) = 6;
  uVar6 = (undefined4)(thunk_FUN_106050a0(appuStack_80));
  thunk_FUN_105f60e0(uVar6);
  puVar2 = (undefined4 *)(puStack_48);
  *(unsigned char *)((char *)&uStack_8 + 0) = 5;
  puVar8 = (undefined4 *)(puStack_4c);
  if (puStack_4c != (undefined4 *)0x0) {
    for (; (undefined4 *)(puVar8) != puVar2; puVar8 = puVar8 + 8) {
      (**(code **)*puVar8)(0);
    }
    uVar7 = (uint)(iStack_44 - (int)puStack_4c & 0xffffffe0);
    puVar8 = (undefined4 *)(puStack_4c);
    if (0xfff < uVar7) {
      puVar8 = (undefined4 *)((undefined4 *)puStack_4c[-1]);
      uVar7 = (uint)(uVar7 + 0x23);
      if (0x1f < (uint)((int)puStack_4c + (-4 - (int)puVar8))) goto LAB_109efe95;
    }
    thunk_FUN_1148a50e(puVar8,uVar7);
    puStack_4c = (undefined4 *)((undefined4 *)0x0);
    puStack_48 = (undefined4 *)((undefined4 *)0x0);
    iStack_44 = (int)(0);
  }
  piVar10 = (int *)(piStack_54);
  if (piStack_58 != (int *)0x0) {
    if (piStack_58 != (int *)(piStack_54)) {
      piVar9 = (int *)(piStack_58 + 1);
      do {
        *(unsigned char *)((char *)&uStack_8 + 0) = 7;
        ((SCStr *)((SCStr *)(piVar9 + 1)))->int_release();
        piVar9[1] = (int)(0);
        piVar1 = (int *)((int *)*piVar9);
        *(unsigned char *)((char *)&uStack_8 + 0) = 8;
        if (piVar1 != (int *)0x0) {
          piVar9[-1] = (int)(0);
          *piVar9 = (int)(0);
          (**(code **)(*piVar1 + 8))();
        }
        *(unsigned char *)((char *)&uStack_8 + 0) = 5;
        piVar1 = (int *)(piVar9 + 2);
        piVar9 = (int *)(piVar9 + 3);
      } while (piVar1 != (int *)(piVar10));
    }
    uVar7 = (uint)(((iStack_50 - (int)piStack_58) / 0xc) * 0xc);
    piVar10 = (int *)(piStack_58);
    if (0xfff < uVar7) {
      piVar10 = (int *)((int *)piStack_58[-1]);
      uVar7 = (uint)(uVar7 + 0x23);
      if (0x1f < (uint)((int)piStack_58 + (-4 - (int)piVar10))) {
LAB_109efe95:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(piVar10,uVar7);
    piStack_58 = (int *)((int *)0x0);
    piStack_54 = (int *)((int *)0x0);
    iStack_50 = (int)(0);
  }
  ppuStack_60 = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  appuStack_80[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&uStack_8 + 0) = 9;
  ((SCStr *)((SCStr *)&uStack_38))->int_release();
  piVar10 = (int *)(piStack_3c);

  *(unsigned char *)((char *)&uStack_8 + 0) = 10;
  if (piStack_3c != (int *)0x0) {

    piStack_3c = (int *)((int *)0x0);
    (**(code **)(*piVar10 + 8))();
  }
  *(unsigned char *)((char *)&uStack_8 + 0) = 0xb;
  ((SCStr *)((SCStr *)auStack_1c))->int_release();
  auStack_1c[0] = (undefined4)(0);
  *(unsigned char *)((char *)&uStack_8 + 0) = 0xc;
  ((SCStr *)((SCStr *)auStack_24))->int_release();
  auStack_24[0] = (undefined4)(0);
  uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(0xd)));
  ((SCStr *)((SCStr *)auStack_2c))->int_release();
  auStack_2c[0] = (undefined4)(0);

  ((SCStr *)(aSStack_34))->int_release();

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 100038f0; body size 5 bytes.
#line 1 "ENTRY_100038f0"

undefined4 * __thiscall Recovered_Bulk::FUN_100038f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a282c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10003909; body size 5 bytes.
#line 1 "ENTRY_10003909"

void FUN_10003909(void)

{
  thunk_FUN_1062f600();
  return;
}


// Reference entry 1000390e; body size 5 bytes.
#line 1 "ENTRY_1000390e"

undefined4 * __thiscall Recovered_Bulk::FUN_1000390e(undefined4 *param_2,int *param_3)
{
  int param_1 = (int )this;
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(**(int **)(param_1 + 200) + 0x14))
                     (&param_3,param_3,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  *param_2 = (undefined4)(uVar1);

  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))();
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 10003931; body size 5 bytes.
#line 1 "ENTRY_10003931"

undefined4 FUN_10003931(void)

{
  return (undefined4)(DAT_121a3428);
}


// Reference entry 10003945; body size 5 bytes.
#line 1 "ENTRY_10003945"

void _CSharp_SCIWebsocketCallbackSwigBase_director_connect_24
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6)

{
                    
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0xc) = param_2;
    *(undefined4 *)(param_1 + 0x10) = param_3;
    *(undefined4 *)(param_1 + 0x14) = param_4;
    *(undefined4 *)(param_1 + 0x18) = param_5;
    *(undefined4 *)(param_1 + 0x1c) = param_6;
  }
  return;
}


// Reference entry 1000395e; body size 5 bytes.
#line 1 "ENTRY_1000395e"

void FUN_1000395e(void)

{
  FUN_1118c950();
  return;
}


// Reference entry 10003963; body size 5 bytes.
#line 1 "ENTRY_10003963"

void FUN_10003963(void)

{
  thunk_FUN_110f9de0();
  return;
}


// Reference entry 10003981; body size 5 bytes.
#line 1 "ENTRY_10003981"

void FUN_10003981(undefined4 param_1,SCStr *param_2)

{
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_2))->op_eq("SCIHousehold:onZoneGroupsChanged"));
  if (bVar1) {
    thunk_FUN_10ce04e0();
  }
  return;
}


// Reference entry 10003986; body size 5 bytes.
#line 1 "ENTRY_10003986"

void FUN_10003986(void)

{
  thunk_FUN_10c2c140();
  return;
}


// Reference entry 10003990; body size 5 bytes.
#line 1 "ENTRY_10003990"

undefined4 * __thiscall Recovered_Bulk::FUN_10003990(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a4c84 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1000399f; body size 5 bytes.
#line 1 "ENTRY_1000399f"

undefined4 * __thiscall Recovered_Bulk::FUN_1000399f(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a35e0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 100039a9; body size 5 bytes.
#line 1 "ENTRY_100039a9"

undefined4 * __thiscall Recovered_Bulk::FUN_100039a9(byte param_2)
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


// Reference entry 100039b8; body size 5 bytes.
#line 1 "ENTRY_100039b8"

void __fastcall FUN_100039b8(int param_1)

{
 try {
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined **ppuStack_58;
  int iStack_54;
  undefined4 uStack_40;
  int **ppiStack_3c;
  int iStack_38;
  undefined1 *puStack_34;
  uint uStack_30;
  int *piStack_18;
  int *piStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uStack_30 = (uint)(DAT_12126b84);

  if (*(int *)(param_1 + 0x28) != 0) {
    puStack_34 = (undefined1 *)((undefined1 *)0x106a040a);
    (**(code **)(*(int *)(*(int *)(param_1 + 0x28) + 8) + 0x14))();
    if (*(int *)(param_1 + 0x28) != 0) {
      piVar1 = (int *)(*(int **)(param_1 + 0x2c));
      if (piVar1 != (int *)0x0) {
        *(undefined4 *)(param_1 + 0x28) = 0;
        *(undefined4 *)(param_1 + 0x2c) = 0;
        puStack_34 = (undefined1 *)((undefined1 *)0x106a042a);
        (**(code **)(*piVar1 + 8))();
      }
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
  }
  puStack_34 = (undefined1 *)((undefined1 *)(param_1 + 0x1c));
  iStack_38 = (int)(param_1 + 8);
  ppiStack_3c = (int **)(&piStack_14);

  piVar2 = (int *)((int *)thunk_FUN_1069e3f0());
  piVar1 = (int *)((int *)*piVar2);

  *piVar2 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    puStack_34 = (undefined1 *)((undefined1 *)0x106a0469);
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&uStack_8 + 0) = 3;
  if (piStack_14 != (int *)0x0) {
    puStack_34 = (undefined1 *)((undefined1 *)0x106a0482);
    (**(code **)(*piStack_14 + 8))();
  }
  puStack_34 = (undefined1 *)((undefined1 *)&ppuStack_58);
  *(unsigned char *)((char *)&uStack_8 + 0) = 2;
  ppuStack_58 = (undefined **)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  iStack_54 = (int)(param_1);
  piVar3 = (int *)((int *)thunk_FUN_10bf1b90(&piStack_18,piVar1));
  piVar1 = (int *)((int *)*piVar3);
  *piVar3 = (int)(0);
  piVar3 = (int *)(*(int **)(param_1 + 0x2c));
  uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(4)));
  if (piVar3 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    puStack_34 = (undefined1 *)((undefined1 *)0x106a04ca);
    (**(code **)(*piVar3 + 8))();
  }
  *(int **)(param_1 + 0x28) = piVar1;
  if (piVar1 == (int *)0x0) {
    uVar4 = (undefined4)(0);
  }
  else {
    puStack_34 = (undefined1 *)((undefined1 *)0x106a04d8);
    uVar4 = (undefined4)((**(code **)(*piVar1 + 0xc))());
  }
  *(undefined4 *)(param_1 + 0x2c) = uVar4;
  uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(5)));
  if (piStack_18 != (int *)0x0) {
    puStack_34 = (undefined1 *)((undefined1 *)0x106a04ef);
    (**(code **)(*piStack_18 + 8))();
  }

  if (piVar2 != (int *)0x0) {
    puStack_34 = (undefined1 *)((undefined1 *)0x106a0501);
    (**(code **)(*piVar2 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 100039e0; body size 5 bytes.
#line 1 "ENTRY_100039e0"

void __fastcall FUN_100039e0(int param_1)

{
  SCThreadSafeInc((long *)(param_1 + 4));
  return;
}


// Reference entry 100039f9; body size 5 bytes.
#line 1 "ENTRY_100039f9"

void __fastcall FUN_100039f9(int param_1)

{
 try {
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puStack_18;
  int *piStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar3 = (uint)(DAT_12126b84);

  iVar4 = (int)(*(int *)(param_1 + 0x24));
  *(int *)(param_1 + 0x24) = iVar4 + 1;
  if (iVar4 == 0) {
    piVar1 = (int *)((int *)(param_1 + 0x20));
    if (*(int *)(param_1 + 0x20) == 0) {
      iVar4 = (int)(thunk_FUN_11128910(uVar3));
      uVar5 = (undefined4)(thunk_FUN_11128910(*(undefined4 *)(iVar4 + 0x7b0)));
      piStack_14 = (int *)((int *)thunk_FUN_11127d60(&puStack_18,uVar5));

      if (piVar1 != (int *)(piStack_14)) {
        puVar2 = (undefined4 *)((undefined4 *)*piVar1);
        if (puVar2 != (undefined4 *)0x0) {
          iVar4 = (int)(thunk_FUN_1123fcd0(puVar2 + 1));
          if (iVar4 == 0) {
            (**(code **)*puVar2)(1);
          }
        }
        iVar4 = (int)(*piStack_14);
        *piVar1 = (int)(iVar4);
        if (iVar4 != 0) {
          thunk_FUN_1123fce0(iVar4 + 4);
        }
      }

      if (puStack_18 != (undefined4 *)0x0) {
        iVar4 = (int)(thunk_FUN_1123fcd0(puStack_18 + 1));
        if ((iVar4 == 0) && (puStack_18 != (undefined4 *)0x0)) {
          (**(code **)*puStack_18)(1);
        }
      }
      iVar4 = (int)(*piVar1);

      thunk_FUN_11128910(iVar4);
      thunk_FUN_11127900(iVar4);
    }
    thunk_FUN_1112a590(param_1);
  }

  return;

 } catch (...) { }
}


// Reference entry 100039fe; body size 5 bytes.
#line 1 "ENTRY_100039fe"

undefined4 __thiscall Recovered_Bulk::FUN_100039fe(undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  void *pvVar1;
  undefined4 uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  pvVar1 = (void *)(operator_new(0x78));

  if (pvVar1 != (void *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_110c67f0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8));

    return (undefined4)(uVar2);
  }

  return (undefined4)(0);

 } catch (...) { }
}


// Reference entry 10003a17; body size 5 bytes.
#line 1 "ENTRY_10003a17"

void __fastcall FUN_10003a17(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x10);
  }
  return;
}


// Reference entry 10003a26; body size 5 bytes.
#line 1 "ENTRY_10003a26"

void __fastcall FUN_10003a26(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x14) == '\0') {
    iVar1 = (int)(thunk_FUN_1112be50());
    if (iVar1 != 0) {
      thunk_FUN_1112b9e0(param_1);
    }
    *(undefined1 *)(param_1 + 0x14) = 1;
  }
  return;
}


// Reference entry 10003a35; body size 5 bytes.
#line 1 "ENTRY_10003a35"

undefined4 FUN_10003a35(undefined4 param_1)

{
  switch(param_1) {
  case 0x15:
  case 0x1a:
  case 0x22:
  case 0x27:
  case 0x38:
    return (undefined4)(0);
  default:
    return (undefined4)(0xffffffff);
  case 0x1c:
    return (undefined4)(1);
  case 0x1f:
    return (undefined4)(3);
  case 0x20:
  case 0x21:
    return (undefined4)(2);
  }
}


// Reference entry 10003a3a; body size 5 bytes.
#line 1 "ENTRY_10003a3a"

undefined4 __thiscall Recovered_Bulk::FUN_10003a3a(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x2c) == 0) {
    thunk_FUN_112af4e0("updatemgr",1,"beginPostSetupUpdate() - no listeners");
    return (undefined4)(0x3f0);
  }
  if (*(int *)(param_1 + 0x1a0c) == 0) {
    thunk_FUN_112af4e0("updatemgr",1,"beginPostSetupUpdate() - device update list is empty!");
    return (undefined4)(0x3f0);
  }
  uVar1 = (undefined4)(thunk_FUN_110fdde0(0,&param_2,param_2));
  return (undefined4)(uVar1);
}


// Reference entry 10003a3f; body size 5 bytes.
#line 1 "ENTRY_10003a3f"

undefined4 * __thiscall Recovered_Bulk::FUN_10003a3f(byte param_2)
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


// Reference entry 10003a44; body size 5 bytes.
#line 1 "ENTRY_10003a44"

undefined1 FUN_10003a44(void)

{
  return (undefined1)(1);
}


// Reference entry 10003a58; body size 5 bytes.
#line 1 "ENTRY_10003a58"

void FUN_10003a58(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_102d65b0(param_2));
  if (cVar1 != '\0') {
    thunk_FUN_1046ba90();
  }
  return;
}


// Reference entry 10003a6c; body size 5 bytes.
#line 1 "ENTRY_10003a6c"

undefined4 * __thiscall Recovered_Bulk::FUN_10003a6c(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIEventSink"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
    }
  }
  return (undefined4 *)(param_2);
}


// Reference entry 10003a76; body size 5 bytes.
#line 1 "ENTRY_10003a76"

void FUN_10003a76(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return;
}


// Reference entry 10003a7b; body size 5 bytes.
#line 1 "ENTRY_10003a7b"

void FUN_10003a7b(void)

{
  return;
}


// Reference entry 10003a80; body size 5 bytes.
#line 1 "ENTRY_10003a80"

void __thiscall Recovered_Bulk::FUN_10003a80(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  if (param_2 != *(int **)(param_1 + 8)) {
    piVar1 = (int *)(*(int **)(param_1 + 0xc));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(int **)(param_1 + 8) = param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
      *(int **)(param_1 + 0xc) = piVar1;
      (**(code **)(*piVar1 + 4))();
      return;
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}


// Reference entry 10003a85; body size 5 bytes.
#line 1 "ENTRY_10003a85"

void _CSharp_SCIDisplayType_getTheme_4(int *param_1)

{
                    
  (**(code **)(*param_1 + 0x18))();
  return;
}


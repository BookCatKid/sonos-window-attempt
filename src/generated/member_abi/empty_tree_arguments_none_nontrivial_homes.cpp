// Mechanically recovered Ghidra C-like functions, compiled as x86 C++.
// Types below are width-preserving placeholders, pending semantic recovery.
using undefined1 = unsigned char;
using undefined2 = unsigned short;
using undefined4 = unsigned int;
using undefined8 = unsigned long long;
using undefined = unsigned int;
using uint = unsigned int;
using ulong = unsigned long;
using byte = unsigned char;
using ushort = unsigned short;
using longlong = long long;
using float10 = long double;
using code = int(...);

using byte = unsigned char;
using uchar = unsigned char;
using ushort = unsigned short;
using longlong = long long;
using ulonglong = unsigned long long;
using float10 = long double;
using DWORD = unsigned long;
using BOOL = int;
using LPCSTR = const char *;
using __time64_t = long long;
struct FILE;
struct tm;
struct ThrowInfo;

struct RefCounted {
    virtual void Reserved();
    virtual void AddRef();
    virtual void Release();
};

// Placement construction calls the actual constructor at the recovered receiver.
inline void *operator new(unsigned int, void *receiver) noexcept { return receiver; }
class SwfStr;
class SCStr {
public:
    void *rep;
    SCStr();
    SCStr(const char *text);
    SCStr(const char *text, unsigned int length);
    SCStr(const SCStr &other);
    SCStr(const SwfStr &other);
    ~SCStr();
    bool operator<(const SCStr &other) const;
    bool operator<(const SwfStr &other) const;
    bool endsWith(const char *suffix) const;
    bool endsWith(const SCStr &suffix) const;
    bool endsWith(const SwfStr &suffix) const;
    SCStr &append(const char *text);
    SCStr &append(const char *text, unsigned int length);
    SCStr &append(char value);
    SCStr &append(const SCStr &other);
    SCStr &prepend(const char *text);
    SCStr &prepend(const char *text, unsigned int length);
    SCStr &prepend(const SCStr &other);
    SCStr &setFromUTF16(const unsigned short *text);
    SCStr &setFromUTF16(const unsigned short *text, unsigned int length);
    SCStr &replace(const char *from, const char *to, bool ignoreCase);
    char *getBuffer(unsigned int length);
    void empty();
    unsigned int utf8_length() const;
    bool int_endsWith(const char *text, unsigned int length, unsigned int suffixLength) const;
    unsigned int __cdecl trimRear(char *text, char *characters);
    int __cdecl format(const char *format, ...);
    bool operator==(const char *other) const;
    bool operator==(SCStr *other) const;
    bool operator!=(const char *other) const;
    bool operator!=(SCStr *other) const;
    bool beginsWith(const char *prefix) const;
    bool beginsWith(SCStr *prefix) const;
    bool contains(const char *needle, bool ignoreCase) const;
    bool contains(SCStr *needle, bool ignoreCase) const;
    unsigned int length() const;
    unsigned int hash() const;
    void int_addref();
    void int_release();
    void int_allocRep(char *text);
    void int_allocRep(char *text, unsigned int length);
};
struct RecoveredString_FUN_1008c50b_10df5400 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10df5400(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10df5400() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
extern void * __cdecl operator_new(unsigned int bytes);
struct RecoveredTreeNode { RecoveredTreeNode *next, *previous, *parent; unsigned char color, is_nil; unsigned char payload[14]; };
struct RecoveredEmptyTree { RecoveredTreeNode * head; unsigned int size; RecoveredEmptyTree(const RecoveredEmptyTree &); RecoveredEmptyTree(RecoveredEmptyTree &&); __forceinline RecoveredEmptyTree() : head(0), size(0) { RecoveredEmptyTree * volatile construction_home = this; RecoveredTreeNode *node = (RecoveredTreeNode *)operator_new(sizeof(RecoveredTreeNode)); node->next = node; node->previous = node; node->parent = node; node->color = 1; node->is_nil = 1; head = node; } ~RecoveredEmptyTree(); };
static_assert(sizeof(RecoveredEmptyTree) == 8, "Two-word argument");
static_assert(sizeof(RecoveredTreeNode) == 28, "Sentinel node");
struct RecoveredTreeConsumer { void thunk_FUN_10dee620(SCStr *, int, int, RecoveredEmptyTree); };
struct RecoveredString_FUN_1008c50b_10df54d0 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10df54d0(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10df54d0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10df5720 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10df5720(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10df5720() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10df57f0 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10df57f0(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10df57f0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10df59d0 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10df59d0(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10df59d0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10df5aa0 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10df5aa0(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10df5aa0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10df5b70 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10df5b70(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10df5b70() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10df5c40 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10df5c40(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10df5c40() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10df6290 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10df6290(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10df6290() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10df6360 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10df6360(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10df6360() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10df6430 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10df6430(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10df6430() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10df65d0 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10df65d0(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10df65d0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10df66a0 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10df66a0(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10df66a0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10df6770 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10df6770(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10df6770() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10df6840 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10df6840(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10df6840() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10df6910 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10df6910(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10df6910() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10df69e0 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10df69e0(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10df69e0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10df6da0 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10df6da0(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10df6da0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10df7c20 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10df7c20(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10df7c20() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10df7ed0 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10df7ed0(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10df7ed0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10df8600 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10df8600(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10df8600() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10df86d0 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10df86d0(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10df86d0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10df87a0 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10df87a0(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10df87a0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10df8a60 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10df8a60(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10df8a60() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10df8b30 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10df8b30(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10df8b30() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10df8c00 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10df8c00(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10df8c00() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10df8cd0 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10df8cd0(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10df8cd0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10df8f50 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10df8f50(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10df8f50() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10df9020 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10df9020(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10df9020() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10df90f0 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10df90f0(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10df90f0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10df91c0 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10df91c0(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10df91c0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10df92c0 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10df92c0(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10df92c0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10df9440 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10df9440(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10df9440() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10df9510 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10df9510(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10df9510() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10df9690 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10df9690(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10df9690() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10df9760 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10df9760(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10df9760() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10df9830 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10df9830(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10df9830() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10df9900 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10df9900(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10df9900() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10df9a80 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10df9a80(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10df9a80() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10df9b50 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10df9b50(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10df9b50() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10df9d60 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10df9d60(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10df9d60() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10df9e30 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10df9e30(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10df9e30() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10df9fb0 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10df9fb0(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10df9fb0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10dfa080 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10dfa080(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10dfa080() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10dfa150 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10dfa150(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10dfa150() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10dfa2d0 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10dfa2d0(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10dfa2d0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10dfa3a0 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10dfa3a0(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10dfa3a0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10dfa520 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10dfa520(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10dfa520() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10dfa5f0 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10dfa5f0(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10dfa5f0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10dfa6c0 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10dfa6c0(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10dfa6c0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10dfa790 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10dfa790(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10dfa790() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10dfa860 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10dfa860(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10dfa860() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10dfa930 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10dfa930(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10dfa930() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10dfaa00 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10dfaa00(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10dfaa00() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10dfab80 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10dfab80(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10dfab80() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10dfac50 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10dfac50(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10dfac50() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10dfadd0 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10dfadd0(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10dfadd0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10dfaea0 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10dfaea0(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10dfaea0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10dfb020 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10dfb020(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10dfb020() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10dfb0f0 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10dfb0f0(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10dfb0f0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10dfb250 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10dfb250(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10dfb250() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10dfb320 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10dfb320(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10dfb320() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10dfb530 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10dfb530(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10dfb530() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10dfb600 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10dfb600(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10dfb600() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10dfbb10 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10dfbb10(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10dfbb10() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10dfbbe0 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10dfbbe0(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10dfbbe0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10dfbcb0 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10dfbcb0(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10dfbcb0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10dfbd80 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10dfbd80(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10dfbd80() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10dfbe50 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10dfbe50(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10dfbe50() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10dfc370 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10dfc370(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10dfc370() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10dfc440 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10dfc440(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10dfc440() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10dfc510 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10dfc510(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10dfc510() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10dfcdc0 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10dfcdc0(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10dfcdc0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10dfce90 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10dfce90(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10dfce90() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10dfcf60 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10dfcf60(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10dfcf60() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10dfd030 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10dfd030(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10dfd030() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10dfd100 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10dfd100(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10dfd100() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10dfd2d0 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10dfd2d0(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10dfd2d0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10dfd3a0 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10dfd3a0(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10dfd3a0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10dfd470 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10dfd470(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10dfd470() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10dfd540 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10dfd540(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10dfd540() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10dfd610 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10dfd610(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10dfd610() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10dfd6e0 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10dfd6e0(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10dfd6e0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10dfd8c0 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10dfd8c0(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10dfd8c0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10dfd990 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10dfd990(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10dfd990() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10dfda60 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10dfda60(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10dfda60() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10dfdff0 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10dfdff0(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10dfdff0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10dfe0c0 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10dfe0c0(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10dfe0c0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10dfe190 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10dfe190(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10dfe190() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10dfe3d0 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10dfe3d0(char * p0, undefined4 receiver) { *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10dfe3d0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
extern int thunk_FUN_10dee620(...);
struct Recovered_10dfd990 { undefined4 FUN_10dfd990(undefined4 param_2); };
// Reference entry 10df5400; body size 160 bytes.
#line 1 "ENTRY_10df5400"

undefined4 __fastcall FUN_10df5400(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10df5400 recovered_string((char *)("accountChanged"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0x4b), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10df54d0; body size 160 bytes.
#line 1 "ENTRY_10df54d0"

undefined4 __fastcall FUN_10df54d0(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10df54d0 recovered_string((char *)("accountInfoRefreshed"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0x4c), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10df5720; body size 160 bytes.
#line 1 "ENTRY_10df5720"

undefined4 __fastcall FUN_10df5720(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10df5720 recovered_string((char *)("accountTokenFetchFailed"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0x4e), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10df57f0; body size 160 bytes.
#line 1 "ENTRY_10df57f0"

undefined4 __fastcall FUN_10df57f0(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10df57f0 recovered_string((char *)("accountTokenReady"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0x4d), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10df59d0; body size 160 bytes.
#line 1 "ENTRY_10df59d0"

undefined4 __fastcall FUN_10df59d0(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10df59d0 recovered_string((char *)("alertCancelPressed"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(6), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10df5aa0; body size 160 bytes.
#line 1 "ENTRY_10df5aa0"

undefined4 __fastcall FUN_10df5aa0(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10df5aa0 recovered_string((char *)("alertDismissPressed"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(9), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10df5b70; body size 160 bytes.
#line 1 "ENTRY_10df5b70"

undefined4 __fastcall FUN_10df5b70(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10df5b70 recovered_string((char *)("alertDismissWithActionPressed"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(10), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10df5c40; body size 160 bytes.
#line 1 "ENTRY_10df5c40"

undefined4 __fastcall FUN_10df5c40(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10df5c40 recovered_string((char *)("alertShown"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(4), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10df6290; body size 160 bytes.
#line 1 "ENTRY_10df6290"

undefined4 __fastcall FUN_10df6290(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10df6290 recovered_string((char *)("appBackgrounded"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0xd), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10df6360; body size 160 bytes.
#line 1 "ENTRY_10df6360"

undefined4 __fastcall FUN_10df6360(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10df6360 recovered_string((char *)("appForegrounded"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0xc), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10df6430; body size 160 bytes.
#line 1 "ENTRY_10df6430"

undefined4 __fastcall FUN_10df6430(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10df6430 recovered_string((char *)("assetDownloadFailed"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0x3e), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10df65d0; body size 160 bytes.
#line 1 "ENTRY_10df65d0"

undefined4 __fastcall FUN_10df65d0(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10df65d0 recovered_string((char *)("assetDownloadSucceeded"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0x3d), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10df66a0; body size 160 bytes.
#line 1 "ENTRY_10df66a0"

undefined4 __fastcall FUN_10df66a0(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10df66a0 recovered_string((char *)("autoDismissal"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0xb), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10df6770; body size 160 bytes.
#line 1 "ENTRY_10df6770"

undefined4 __fastcall FUN_10df6770(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10df6770 recovered_string((char *)("btProductConnectionStateChanged"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0x27), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10df6840; body size 160 bytes.
#line 1 "ENTRY_10df6840"

undefined4 __fastcall FUN_10df6840(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10df6840 recovered_string((char *)("btProductDiscovered"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0x28), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10df6910; body size 160 bytes.
#line 1 "ENTRY_10df6910"

undefined4 __fastcall FUN_10df6910(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10df6910 recovered_string((char *)("btProductPairingAttemptCompleted"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0x2a), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10df69e0; body size 160 bytes.
#line 1 "ENTRY_10df69e0"

undefined4 __fastcall FUN_10df69e0(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10df69e0 recovered_string((char *)("btScanDataReady"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0x29), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10df6da0; body size 160 bytes.
#line 1 "ENTRY_10df6da0"

undefined4 __fastcall FUN_10df6da0(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10df6da0 recovered_string((char *)("chirpDataReceived"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0x43), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10df7c20; body size 160 bytes.
#line 1 "ENTRY_10df7c20"

undefined4 __fastcall FUN_10df7c20(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10df7c20 recovered_string((char *)("discoveryHistoryUpdated"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0x56), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10df7ed0; body size 160 bytes.
#line 1 "ENTRY_10df7ed0"

undefined4 __fastcall FUN_10df7ed0(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10df7ed0 recovered_string((char *)("echoMsgReceived"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0x2c), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10df8600; body size 160 bytes.
#line 1 "ENTRY_10df8600"

undefined4 __fastcall FUN_10df8600(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10df8600 recovered_string((char *)("peripheralGATTServiceCreated"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0x51), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10df86d0; body size 160 bytes.
#line 1 "ENTRY_10df86d0"

undefined4 __fastcall FUN_10df86d0(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10df86d0 recovered_string((char *)("peripheralGATTServiceFailed"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0x52), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10df87a0; body size 160 bytes.
#line 1 "ENTRY_10df87a0"

undefined4 __fastcall FUN_10df87a0(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10df87a0 recovered_string((char *)("googleAssistantSetupCompleted"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0x77), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10df8a60; body size 160 bytes.
#line 1 "ENTRY_10df8a60"

undefined4 __fastcall FUN_10df8a60(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10df8a60 recovered_string((char *)("joinAPCanceled"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0x36), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10df8b30; body size 160 bytes.
#line 1 "ENTRY_10df8b30"

undefined4 __fastcall FUN_10df8b30(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10df8b30 recovered_string((char *)("joinAPFailed"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0x35), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10df8c00; body size 160 bytes.
#line 1 "ENTRY_10df8c00"

undefined4 __fastcall FUN_10df8c00(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10df8c00 recovered_string((char *)("joinAPSucceeded"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0x34), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10df8cd0; body size 160 bytes.
#line 1 "ENTRY_10df8cd0"

undefined4 __fastcall FUN_10df8cd0(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10df8cd0 recovered_string((char *)("killed"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(1), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10df8f50; body size 160 bytes.
#line 1 "ENTRY_10df8f50"

undefined4 __fastcall FUN_10df8f50(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10df8f50 recovered_string((char *)("lifecycleManagerLegacyManifestReady"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0x48), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10df9020; body size 160 bytes.
#line 1 "ENTRY_10df9020"

undefined4 __fastcall FUN_10df9020(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10df9020 recovered_string((char *)("lifecycleManagerReadyForSetup"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0x47), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10df90f0; body size 160 bytes.
#line 1 "ENTRY_10df90f0"

undefined4 __fastcall FUN_10df90f0(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10df90f0 recovered_string((char *)("museBleClientConnected"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0x54), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10df91c0; body size 160 bytes.
#line 1 "ENTRY_10df91c0"

undefined4 __fastcall FUN_10df91c0(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10df91c0 recovered_string((char *)("museBleClientDisconnected"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0x55), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10df92c0; body size 160 bytes.
#line 1 "ENTRY_10df92c0"

undefined4 __fastcall FUN_10df92c0(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10df92c0 recovered_string((char *)("museBleClientMessage"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0x53), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10df9440; body size 160 bytes.
#line 1 "ENTRY_10df9440"

undefined4 __fastcall FUN_10df9440(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10df9440 recovered_string((char *)("netstart2BeginSetupFailed"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0x61), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10df9510; body size 160 bytes.
#line 1 "ENTRY_10df9510"

undefined4 __fastcall FUN_10df9510(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10df9510 recovered_string((char *)("netstart2BeginSetupSucceeded"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0x60), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10df9690; body size 160 bytes.
#line 1 "ENTRY_10df9690"

undefined4 __fastcall FUN_10df9690(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10df9690 recovered_string((char *)("netstart2CancelSetupFailed"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0x69), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10df9760; body size 160 bytes.
#line 1 "ENTRY_10df9760"

undefined4 __fastcall FUN_10df9760(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10df9760 recovered_string((char *)("netstart2CancelSetupSucceeded"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0x68), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10df9830; body size 160 bytes.
#line 1 "ENTRY_10df9830"

undefined4 __fastcall FUN_10df9830(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10df9830 recovered_string((char *)("netstart2DiscoveryTimeoutReceived"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0x74), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10df9900; body size 160 bytes.
#line 1 "ENTRY_10df9900"

undefined4 __fastcall FUN_10df9900(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10df9900 recovered_string((char *)("netstart2EchoResponseReceived"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0x70), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10df9a80; body size 160 bytes.
#line 1 "ENTRY_10df9a80"

undefined4 __fastcall FUN_10df9a80(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10df9a80 recovered_string((char *)("netstart2EndSessionFailed"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0x67), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10df9b50; body size 160 bytes.
#line 1 "ENTRY_10df9b50"

undefined4 __fastcall FUN_10df9b50(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10df9b50 recovered_string((char *)("netstart2EndSessionSucceeded"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0x66), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10df9d60; body size 160 bytes.
#line 1 "ENTRY_10df9d60"

undefined4 __fastcall FUN_10df9d60(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10df9d60 recovered_string((char *)("netstart2GetPskFailed"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0x5f), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10df9e30; body size 160 bytes.
#line 1 "ENTRY_10df9e30"

undefined4 __fastcall FUN_10df9e30(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10df9e30 recovered_string((char *)("netstart2GetPskSucceeded"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0x5e), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10df9fb0; body size 160 bytes.
#line 1 "ENTRY_10df9fb0"

undefined4 __fastcall FUN_10df9fb0(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10df9fb0 recovered_string((char *)("netstart2GetScanListFailed"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0x73), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10dfa080; body size 160 bytes.
#line 1 "ENTRY_10dfa080"

undefined4 __fastcall FUN_10dfa080(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10dfa080 recovered_string((char *)("netstart2GetScanListSucceeded"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0x72), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10dfa150; body size 160 bytes.
#line 1 "ENTRY_10dfa150"

undefined4 __fastcall FUN_10dfa150(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10dfa150 recovered_string((char *)("netstart2SendEchoRequestFailed"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0x69), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10dfa2d0; body size 160 bytes.
#line 1 "ENTRY_10dfa2d0"

undefined4 __fastcall FUN_10dfa2d0(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10dfa2d0 recovered_string((char *)("netstart2SendSetNetSettingsFailed"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0x65), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10dfa3a0; body size 160 bytes.
#line 1 "ENTRY_10dfa3a0"

undefined4 __fastcall FUN_10dfa3a0(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10dfa3a0 recovered_string((char *)("netstart2SendSetNetSettingsSucceeded"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(100), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10dfa520; body size 160 bytes.
#line 1 "ENTRY_10dfa520"

undefined4 __fastcall FUN_10dfa520(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10dfa520 recovered_string((char *)("netstart2SendSetupContinueFailed"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(99), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10dfa5f0; body size 160 bytes.
#line 1 "ENTRY_10dfa5f0"

undefined4 __fastcall FUN_10dfa5f0(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10dfa5f0 recovered_string((char *)("netstart2SendSetupContinueSucceeded"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0x62), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10dfa6c0; body size 160 bytes.
#line 1 "ENTRY_10dfa6c0"

undefined4 __fastcall FUN_10dfa6c0(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10dfa6c0 recovered_string((char *)("netstart2SendStartIslandFailed"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0x6f), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10dfa790; body size 160 bytes.
#line 1 "ENTRY_10dfa790"

undefined4 __fastcall FUN_10dfa790(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10dfa790 recovered_string((char *)("netstart2SendStartIslandSucceeded"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0x6e), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10dfa860; body size 160 bytes.
#line 1 "ENTRY_10dfa860"

undefined4 __fastcall FUN_10dfa860(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10dfa860 recovered_string((char *)("netstart2SendStartOpenApFailed"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0x6d), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10dfa930; body size 160 bytes.
#line 1 "ENTRY_10dfa930"

undefined4 __fastcall FUN_10dfa930(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10dfa930 recovered_string((char *)("netstart2SendStartOpenApSucceeded"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0x6c), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10dfaa00; body size 160 bytes.
#line 1 "ENTRY_10dfaa00"

undefined4 __fastcall FUN_10dfaa00(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10dfaa00 recovered_string((char *)("netstart2SetupContinueReceived"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0x71), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10dfab80; body size 160 bytes.
#line 1 "ENTRY_10dfab80"

undefined4 __fastcall FUN_10dfab80(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10dfab80 recovered_string((char *)("netstart2StartInitialSessionFailed"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0x5b), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10dfac50; body size 160 bytes.
#line 1 "ENTRY_10dfac50"

undefined4 __fastcall FUN_10dfac50(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10dfac50 recovered_string((char *)("netstart2StartInitialSessionSucceeded"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0x5a), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10dfadd0; body size 160 bytes.
#line 1 "ENTRY_10dfadd0"

undefined4 __fastcall FUN_10dfadd0(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10dfadd0 recovered_string((char *)("netstart2StartSecureSessionFailed"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0x5d), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10dfaea0; body size 160 bytes.
#line 1 "ENTRY_10dfaea0"

undefined4 __fastcall FUN_10dfaea0(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10dfaea0 recovered_string((char *)("netstart2StartSecureSessionSucceeded"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0x5c), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10dfb020; body size 160 bytes.
#line 1 "ENTRY_10dfb020"

undefined4 __fastcall FUN_10dfb020(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10dfb020 recovered_string((char *)("netstart2CancelSetupFailed"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0x6b), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10dfb0f0; body size 160 bytes.
#line 1 "ENTRY_10dfb0f0"

undefined4 __fastcall FUN_10dfb0f0(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10dfb0f0 recovered_string((char *)("netstart2UpgradeSucceeded"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0x6a), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10dfb250; body size 160 bytes.
#line 1 "ENTRY_10dfb250"

undefined4 __fastcall FUN_10dfb250(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10dfb250 recovered_string((char *)("netstartStoreRefreshComplete"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0x75), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10dfb320; body size 160 bytes.
#line 1 "ENTRY_10dfb320"

undefined4 __fastcall FUN_10dfb320(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10dfb320 recovered_string((char *)("netstartStoreRefreshFailed"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0x76), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10dfb530; body size 160 bytes.
#line 1 "ENTRY_10dfb530"

undefined4 __fastcall FUN_10dfb530(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10dfb530 recovered_string((char *)("nfcScanFailed"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0x41), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10dfb600; body size 160 bytes.
#line 1 "ENTRY_10dfb600"

undefined4 __fastcall FUN_10dfb600(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10dfb600 recovered_string((char *)("nfcScanSucceeded"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0x40), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10dfbb10; body size 160 bytes.
#line 1 "ENTRY_10dfbb10"

undefined4 __fastcall FUN_10dfbb10(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10dfbb10 recovered_string((char *)("pageEntered"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0xe), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10dfbbe0; body size 160 bytes.
#line 1 "ENTRY_10dfbbe0"

undefined4 __fastcall FUN_10dfbbe0(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10dfbbe0 recovered_string((char *)("pageExited"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0xf), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10dfbcb0; body size 160 bytes.
#line 1 "ENTRY_10dfbcb0"

undefined4 __fastcall FUN_10dfbcb0(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10dfbcb0 recovered_string((char *)("peripheralConnected"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0x4f), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10dfbd80; body size 160 bytes.
#line 1 "ENTRY_10dfbd80"

undefined4 __fastcall FUN_10dfbd80(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10dfbd80 recovered_string((char *)("peripheralDisconnected"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0x50), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10dfbe50; body size 160 bytes.
#line 1 "ENTRY_10dfbe50"

undefined4 __fastcall FUN_10dfbe50(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10dfbe50 recovered_string((char *)("polled"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0x20), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10dfc370; body size 160 bytes.
#line 1 "ENTRY_10dfc370"

undefined4 __fastcall FUN_10dfc370(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10dfc370 recovered_string((char *)("productBatteryChargeLevelChanged"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0x49), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10dfc440; body size 160 bytes.
#line 1 "ENTRY_10dfc440"

undefined4 __fastcall FUN_10dfc440(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10dfc440 recovered_string((char *)("productBatteryChargeStateChanged"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0x4a), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10dfc510; body size 160 bytes.
#line 1 "ENTRY_10dfc510"

undefined4 __fastcall FUN_10dfc510(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10dfc510 recovered_string((char *)("productReceivedBleConfig"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0x57), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10dfcdc0; body size 160 bytes.
#line 1 "ENTRY_10dfcdc0"

undefined4 __fastcall FUN_10dfcdc0(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10dfcdc0 recovered_string((char *)("productUpdateEnded"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0x3a), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10dfce90; body size 160 bytes.
#line 1 "ENTRY_10dfce90"

undefined4 __fastcall FUN_10dfce90(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10dfce90 recovered_string((char *)("productUpdateProgressed"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0x3c), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10dfcf60; body size 160 bytes.
#line 1 "ENTRY_10dfcf60"

undefined4 __fastcall FUN_10dfcf60(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10dfcf60 recovered_string((char *)("productUpdateStarted"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0x3b), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10dfd030; body size 160 bytes.
#line 1 "ENTRY_10dfd030"

undefined4 __fastcall FUN_10dfd030(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10dfd030 recovered_string((char *)("roomOrientationFinished"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0x58), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10dfd100; body size 160 bytes.
#line 1 "ENTRY_10dfd100"

undefined4 __fastcall FUN_10dfd100(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10dfd100 recovered_string((char *)("roomOrientationTargetDetected"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0x59), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10dfd2d0; body size 160 bytes.
#line 1 "ENTRY_10dfd2d0"

undefined4 __fastcall FUN_10dfd2d0(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10dfd2d0 recovered_string((char *)("secureSettingsChanged"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0x2e), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10dfd3a0; body size 160 bytes.
#line 1 "ENTRY_10dfd3a0"

undefined4 __fastcall FUN_10dfd3a0(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10dfd3a0 recovered_string((char *)("summoned"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(2), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10dfd470; body size 160 bytes.
#line 1 "ENTRY_10dfd470"

undefined4 __fastcall FUN_10dfd470(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10dfd470 recovered_string((char *)("swipeStarted"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(3), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10dfd540; body size 160 bytes.
#line 1 "ENTRY_10dfd540"

undefined4 __fastcall FUN_10dfd540(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10dfd540 recovered_string((char *)("swipeStopped"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(5), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10dfd610; body size 160 bytes.
#line 1 "ENTRY_10dfd610"

undefined4 __fastcall FUN_10dfd610(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10dfd610 recovered_string((char *)("swipedAway"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(7), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10dfd6e0; body size 160 bytes.
#line 1 "ENTRY_10dfd6e0"

undefined4 __fastcall FUN_10dfd6e0(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10dfd6e0 recovered_string((char *)("tappedOutside"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(8), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10dfd8c0; body size 160 bytes.
#line 1 "ENTRY_10dfd8c0"

undefined4 __fastcall FUN_10dfd8c0(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10dfd8c0 recovered_string((char *)("transferTestUpdate"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0x2b), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10dfd990; body size 163 bytes.
#line 1 "ENTRY_10dfd990"

undefined4 Recovered_10dfd990::FUN_10dfd990(undefined4 param_2)

{
  undefined4 param_1 = (undefined4)this;


{
RecoveredString_FUN_1008c50b_10dfd990 recovered_string((char *)("transitionCompleted"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0x10), (int)(param_2), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10dfda60; body size 160 bytes.
#line 1 "ENTRY_10dfda60"

undefined4 __fastcall FUN_10dfda60(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10dfda60 recovered_string((char *)("transitionCompleted"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0x10), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10dfdff0; body size 160 bytes.
#line 1 "ENTRY_10dfdff0"

undefined4 __fastcall FUN_10dfdff0(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10dfdff0 recovered_string((char *)("wacCanceled"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0x39), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10dfe0c0; body size 160 bytes.
#line 1 "ENTRY_10dfe0c0"

undefined4 __fastcall FUN_10dfe0c0(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10dfe0c0 recovered_string((char *)("wacFailed"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0x38), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10dfe190; body size 160 bytes.
#line 1 "ENTRY_10dfe190"

undefined4 __fastcall FUN_10dfe190(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10dfe190 recovered_string((char *)("wacSucceeded"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0x37), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


// Reference entry 10dfe3d0; body size 160 bytes.
#line 1 "ENTRY_10dfe3d0"

undefined4 __fastcall FUN_10dfe3d0(undefined4 param_1)

{


{
RecoveredString_FUN_1008c50b_10dfe3d0 recovered_string((char *)("zoneGroupsChanged"), param_1);

  ((RecoveredTreeConsumer *)(param_1))->thunk_FUN_10dee620((SCStr *)(((SCStr *)&recovered_string)), (int)(0x2d), (int)(0), RecoveredEmptyTree());
  }

  return param_1;
}


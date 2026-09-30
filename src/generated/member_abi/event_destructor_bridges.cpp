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
struct Event_thunk_FUN_10074c85 { ~Event_thunk_FUN_10074c85() noexcept; };
struct NativeEventFinalizer { void FUN_10dff3e0(); void FUN_10dff3d0(); void FUN_10dfe940(); void FUN_10dfe960(); };


// Reference entry 10dff3e0; body size 5 bytes.
#line 1 "ENTRY_10dff3e0"
void NativeEventFinalizer::FUN_10dff3e0() { ((Event_thunk_FUN_10074c85 *)this)->~Event_thunk_FUN_10074c85(); }
// Reference entry 10dff3d0; body size 5 bytes.
#line 1 "ENTRY_10dff3d0"
void NativeEventFinalizer::FUN_10dff3d0() { ((Event_thunk_FUN_10074c85 *)this)->~Event_thunk_FUN_10074c85(); }
// Reference entry 10dfe940; body size 5 bytes.
#line 1 "ENTRY_10dfe940"
void NativeEventFinalizer::FUN_10dfe940() { ((Event_thunk_FUN_10074c85 *)this)->~Event_thunk_FUN_10074c85(); }
// Reference entry 10dfe960; body size 5 bytes.
#line 1 "ENTRY_10dfe960"
void NativeEventFinalizer::FUN_10dfe960() { ((Event_thunk_FUN_10074c85 *)this)->~Event_thunk_FUN_10074c85(); }
// Mechanically recovered Ghidra C-like functions, compiled as x86 C++.
// Types below are width-preserving placeholders, pending semantic recovery.
using undefined1 = unsigned char;
using undefined2 = unsigned short;
using undefined4 = unsigned int;
using undefined8 = unsigned long long;
using undefined = unsigned int;
using uint = unsigned int;
using ulong = unsigned long;
using code = int(...);

struct RefCounted {
    virtual void Reserved();
    virtual void AddRef();
};

struct SCStr {
    void *rep;
    bool operator==(const char *other);
    bool operator==(SCStr *other);
    bool operator!=(const char *other);
    bool operator!=(SCStr *other);
    bool beginsWith(const char *prefix);
    bool beginsWith(SCStr *prefix);
    bool contains(const char *needle, bool ignoreCase);
    bool contains(SCStr *needle, bool ignoreCase);
    unsigned int length();
    unsigned int hash();
    void int_addref();
    void int_release();
    void int_allocRep(char *text);
    void int_allocRep(char *text, unsigned int length);
};

struct Recovered_1013b6b0 { undefined4 * FUN_1013b6b0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013b730 { undefined4 * FUN_1013b730(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013b7b0 { undefined4 * FUN_1013b7b0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013b830 { undefined4 * FUN_1013b830(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013b8b0 { undefined4 * FUN_1013b8b0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013b930 { undefined4 * FUN_1013b930(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013b9b0 { undefined4 * FUN_1013b9b0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013ba30 { undefined4 * FUN_1013ba30(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013bab0 { undefined4 * FUN_1013bab0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013bb30 { undefined4 * FUN_1013bb30(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013bbb0 { undefined4 * FUN_1013bbb0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013bc30 { undefined4 * FUN_1013bc30(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013bcb0 { undefined4 * FUN_1013bcb0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013bd30 { undefined4 * FUN_1013bd30(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013bdb0 { undefined4 * FUN_1013bdb0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013be30 { undefined4 * FUN_1013be30(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013beb0 { undefined4 * FUN_1013beb0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013bf30 { undefined4 * FUN_1013bf30(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013bfb0 { undefined4 * FUN_1013bfb0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013c030 { undefined4 * FUN_1013c030(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013c0b0 { undefined4 * FUN_1013c0b0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013c130 { undefined4 * FUN_1013c130(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013c1b0 { undefined4 * FUN_1013c1b0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013c230 { undefined4 * FUN_1013c230(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013c2b0 { undefined4 * FUN_1013c2b0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013c330 { undefined4 * FUN_1013c330(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013c3b0 { undefined4 * FUN_1013c3b0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013c430 { undefined4 * FUN_1013c430(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013c4b0 { undefined4 * FUN_1013c4b0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013c530 { undefined4 * FUN_1013c530(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013c5b0 { undefined4 * FUN_1013c5b0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013c630 { undefined4 * FUN_1013c630(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013c6b0 { undefined4 * FUN_1013c6b0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013c730 { undefined4 * FUN_1013c730(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013c7b0 { undefined4 * FUN_1013c7b0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013c830 { undefined4 * FUN_1013c830(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013c8b0 { undefined4 * FUN_1013c8b0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013c930 { undefined4 * FUN_1013c930(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013c9b0 { undefined4 * FUN_1013c9b0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013ca30 { undefined4 * FUN_1013ca30(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013cab0 { undefined4 * FUN_1013cab0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013cb30 { undefined4 * FUN_1013cb30(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013cbb0 { undefined4 * FUN_1013cbb0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013cc30 { undefined4 * FUN_1013cc30(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013ccb0 { undefined4 * FUN_1013ccb0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013cd30 { undefined4 * FUN_1013cd30(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013cdb0 { undefined4 * FUN_1013cdb0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013ce30 { undefined4 * FUN_1013ce30(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013ceb0 { undefined4 * FUN_1013ceb0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013cf30 { undefined4 * FUN_1013cf30(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013cfb0 { undefined4 * FUN_1013cfb0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013d030 { undefined4 * FUN_1013d030(undefined4 *param_2,SCStr *param_3); };
struct Recovered_101aa190 { undefined4 * FUN_101aa190(undefined4 *param_2,SCStr *param_3); };
struct Recovered_101aa210 { undefined4 * FUN_101aa210(undefined4 *param_2,SCStr *param_3); };
struct Recovered_101b68f0 { undefined4 * FUN_101b68f0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_101b6970 { undefined4 * FUN_101b6970(undefined4 *param_2,SCStr *param_3); };
struct Recovered_101b69f0 { undefined4 * FUN_101b69f0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_101b8e70 { undefined4 * FUN_101b8e70(undefined4 *param_2,SCStr *param_3); };
struct Recovered_101bbef0 { undefined4 * FUN_101bbef0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_101bbf70 { undefined4 * FUN_101bbf70(undefined4 *param_2,SCStr *param_3); };
struct Recovered_101bbff0 { undefined4 * FUN_101bbff0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_101bef80 { undefined4 * FUN_101bef80(undefined4 *param_2,SCStr *param_3); };
struct Recovered_101cb1b0 { undefined4 * FUN_101cb1b0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_101cb230 { undefined4 * FUN_101cb230(undefined4 *param_2,SCStr *param_3); };
struct Recovered_101cb2b0 { undefined4 * FUN_101cb2b0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_101cb330 { undefined4 * FUN_101cb330(undefined4 *param_2,SCStr *param_3); };
struct Recovered_101dd540 { undefined4 * FUN_101dd540(undefined4 *param_2,SCStr *param_3); };
struct Recovered_101dd6e0 { undefined4 * FUN_101dd6e0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_101dd760 { undefined4 * FUN_101dd760(undefined4 *param_2,SCStr *param_3); };
struct Recovered_101dd7e0 { undefined4 * FUN_101dd7e0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_101dd900 { undefined4 * FUN_101dd900(undefined4 *param_2,SCStr *param_3); };
struct Recovered_101dd980 { undefined4 * FUN_101dd980(undefined4 *param_2,SCStr *param_3); };
struct Recovered_101dda00 { undefined4 * FUN_101dda00(undefined4 *param_2,SCStr *param_3); };
struct Recovered_101ddbf0 { undefined4 * FUN_101ddbf0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_101f2130 { undefined4 * FUN_101f2130(undefined4 *param_2,SCStr *param_3); };
struct Recovered_101f21b0 { undefined4 * FUN_101f21b0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_101f2230 { undefined4 * FUN_101f2230(undefined4 *param_2,SCStr *param_3); };
struct Recovered_101f22b0 { undefined4 * FUN_101f22b0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_101f84c0 { undefined4 * FUN_101f84c0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_101fb690 { undefined4 * FUN_101fb690(undefined4 *param_2,SCStr *param_3); };
struct Recovered_101fb710 { undefined4 * FUN_101fb710(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1021f3a0 { undefined4 * FUN_1021f3a0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1021f4f0 { undefined4 * FUN_1021f4f0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1021f610 { undefined4 * FUN_1021f610(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10222470 { undefined4 * FUN_10222470(undefined4 *param_2,SCStr *param_3); };
struct Recovered_102224f0 { undefined4 * FUN_102224f0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_102437a0 { undefined4 * FUN_102437a0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10243820 { undefined4 * FUN_10243820(undefined4 *param_2,SCStr *param_3); };
struct Recovered_102438a0 { undefined4 * FUN_102438a0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10243920 { undefined4 * FUN_10243920(undefined4 *param_2,SCStr *param_3); };
struct Recovered_102439a0 { undefined4 * FUN_102439a0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10243a20 { undefined4 * FUN_10243a20(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10243aa0 { undefined4 * FUN_10243aa0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10243b20 { undefined4 * FUN_10243b20(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10249970 { undefined4 * FUN_10249970(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1024afd0 { undefined4 * FUN_1024afd0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1024e050 { undefined4 * FUN_1024e050(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10252c00 { undefined4 * FUN_10252c00(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10252c80 { undefined4 * FUN_10252c80(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10252d00 { undefined4 * FUN_10252d00(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1025cc20 { undefined4 * FUN_1025cc20(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1025cca0 { undefined4 * FUN_1025cca0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1025cd20 { undefined4 * FUN_1025cd20(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1025cda0 { undefined4 * FUN_1025cda0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1025ce20 { undefined4 * FUN_1025ce20(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1025df70 { undefined4 * FUN_1025df70(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1025e6a0 { undefined4 * FUN_1025e6a0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10262310 { undefined4 * FUN_10262310(undefined4 *param_2,SCStr *param_3); };
struct Recovered_102624f0 { undefined4 * FUN_102624f0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1026cd00 { undefined4 * FUN_1026cd00(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1026cd80 { undefined4 * FUN_1026cd80(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1026ce00 { undefined4 * FUN_1026ce00(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1026ce80 { undefined4 * FUN_1026ce80(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1026e060 { undefined4 * FUN_1026e060(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10271800 { undefined4 * FUN_10271800(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10271880 { undefined4 * FUN_10271880(undefined4 *param_2,SCStr *param_3); };
struct Recovered_102796e0 { undefined4 * FUN_102796e0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10279760 { undefined4 * FUN_10279760(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10282d90 { undefined4 * FUN_10282d90(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10282e10 { undefined4 * FUN_10282e10(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10282e90 { undefined4 * FUN_10282e90(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1028a680 { undefined4 * FUN_1028a680(undefined4 *param_2,SCStr *param_3); };
struct Recovered_102935e0 { undefined4 * FUN_102935e0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10293660 { undefined4 * FUN_10293660(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1029c270 { undefined4 * FUN_1029c270(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1029c2f0 { undefined4 * FUN_1029c2f0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1029c370 { undefined4 * FUN_1029c370(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1029c3f0 { undefined4 * FUN_1029c3f0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1029c470 { undefined4 * FUN_1029c470(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1029c4f0 { undefined4 * FUN_1029c4f0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1029c570 { undefined4 * FUN_1029c570(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1029db20 { undefined4 * FUN_1029db20(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1029e800 { undefined4 * FUN_1029e800(undefined4 *param_2,SCStr *param_3); };
struct Recovered_102a1640 { undefined4 * FUN_102a1640(undefined4 *param_2,SCStr *param_3); };
struct Recovered_102b8960 { undefined4 * FUN_102b8960(undefined4 *param_2,SCStr *param_3); };
struct Recovered_102b89e0 { undefined4 * FUN_102b89e0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_102b8b30 { undefined4 * FUN_102b8b30(undefined4 *param_2,SCStr *param_3); };
struct Recovered_102b8bb0 { undefined4 * FUN_102b8bb0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_102b8c30 { undefined4 * FUN_102b8c30(undefined4 *param_2,SCStr *param_3); };
struct Recovered_102b8cb0 { undefined4 * FUN_102b8cb0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_102c0020 { undefined4 * FUN_102c0020(undefined4 *param_2,SCStr *param_3); };
struct Recovered_102c09e0 { undefined4 * FUN_102c09e0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_102c2140 { undefined4 * FUN_102c2140(undefined4 *param_2,SCStr *param_3); };
struct Recovered_102c21c0 { undefined4 * FUN_102c21c0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_102c9950 { undefined4 * FUN_102c9950(undefined4 *param_2,SCStr *param_3); };
struct Recovered_102c99d0 { undefined4 * FUN_102c99d0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_102c9bf0 { undefined4 * FUN_102c9bf0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_102d1830 { undefined4 * FUN_102d1830(undefined4 *param_2,SCStr *param_3); };
struct Recovered_102d7230 { undefined4 * FUN_102d7230(undefined4 *param_2,SCStr *param_3); };
struct Recovered_102d72b0 { undefined4 * FUN_102d72b0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_102db880 { undefined4 * FUN_102db880(undefined4 *param_2,SCStr *param_3); };
struct Recovered_102de7c0 { undefined4 * FUN_102de7c0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_102e4cd0 { undefined4 * FUN_102e4cd0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_102fe600 { undefined4 * FUN_102fe600(undefined4 *param_2,SCStr *param_3); };
struct Recovered_102fe750 { undefined4 * FUN_102fe750(undefined4 *param_2,SCStr *param_3); };
struct Recovered_102fe7d0 { undefined4 * FUN_102fe7d0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_102fe850 { undefined4 * FUN_102fe850(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10302f10 { undefined4 * FUN_10302f10(undefined4 *param_2,SCStr *param_3); };
struct Recovered_103296b0 { undefined4 * FUN_103296b0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10329730 { undefined4 * FUN_10329730(undefined4 *param_2,SCStr *param_3); };
struct Recovered_103297b0 { undefined4 * FUN_103297b0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10329830 { undefined4 * FUN_10329830(undefined4 *param_2,SCStr *param_3); };
struct Recovered_103298b0 { undefined4 * FUN_103298b0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10329df0 { undefined4 * FUN_10329df0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10329e70 { undefined4 * FUN_10329e70(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10329ef0 { undefined4 * FUN_10329ef0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10329f70 { undefined4 * FUN_10329f70(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10329ff0 { undefined4 * FUN_10329ff0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1032a070 { undefined4 * FUN_1032a070(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1034ebe0 { undefined4 * FUN_1034ebe0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10393c20 { undefined4 * FUN_10393c20(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10393ca0 { undefined4 * FUN_10393ca0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10393d20 { undefined4 * FUN_10393d20(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10393da0 { undefined4 * FUN_10393da0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10393e20 { undefined4 * FUN_10393e20(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10393ea0 { undefined4 * FUN_10393ea0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10393f20 { undefined4 * FUN_10393f20(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10394170 { undefined4 * FUN_10394170(undefined4 *param_2,SCStr *param_3); };
struct Recovered_103941f0 { undefined4 * FUN_103941f0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10394270 { undefined4 * FUN_10394270(undefined4 *param_2,SCStr *param_3); };
struct Recovered_103942f0 { undefined4 * FUN_103942f0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10394370 { undefined4 * FUN_10394370(undefined4 *param_2,SCStr *param_3); };
struct Recovered_103a3530 { undefined4 * FUN_103a3530(undefined4 *param_2,SCStr *param_3); };
struct Recovered_103a35b0 { undefined4 * FUN_103a35b0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_103a3630 { undefined4 * FUN_103a3630(undefined4 *param_2,SCStr *param_3); };
struct Recovered_103a36b0 { undefined4 * FUN_103a36b0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_103a39e0 { undefined4 * FUN_103a39e0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_103bcf70 { undefined4 * FUN_103bcf70(undefined4 *param_2,SCStr *param_3); };
struct Recovered_103bd030 { undefined4 * FUN_103bd030(undefined4 *param_2,SCStr *param_3); };
struct Recovered_103bd0b0 { undefined4 * FUN_103bd0b0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_103bd130 { undefined4 * FUN_103bd130(undefined4 *param_2,SCStr *param_3); };
struct Recovered_103bd1f0 { undefined4 * FUN_103bd1f0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_103bd270 { undefined4 * FUN_103bd270(undefined4 *param_2,SCStr *param_3); };
struct Recovered_103bf250 { undefined4 * FUN_103bf250(undefined4 *param_2,SCStr *param_3); };
struct Recovered_103ca9d0 { undefined4 * FUN_103ca9d0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_103caa50 { undefined4 * FUN_103caa50(undefined4 *param_2,SCStr *param_3); };
struct Recovered_103caad0 { undefined4 * FUN_103caad0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_103cab50 { undefined4 * FUN_103cab50(undefined4 *param_2,SCStr *param_3); };
struct Recovered_103d5e70 { undefined4 * FUN_103d5e70(undefined4 *param_2,SCStr *param_3); };
struct Recovered_103f1f80 { undefined4 * FUN_103f1f80(undefined4 *param_2,SCStr *param_3); };
struct Recovered_103f2000 { undefined4 * FUN_103f2000(undefined4 *param_2,SCStr *param_3); };
struct Recovered_103f2080 { undefined4 * FUN_103f2080(undefined4 *param_2,SCStr *param_3); };
struct Recovered_103f2100 { undefined4 * FUN_103f2100(undefined4 *param_2,SCStr *param_3); };
struct Recovered_103f2180 { undefined4 * FUN_103f2180(undefined4 *param_2,SCStr *param_3); };
struct Recovered_103f2200 { undefined4 * FUN_103f2200(undefined4 *param_2,SCStr *param_3); };
struct Recovered_103f2280 { undefined4 * FUN_103f2280(undefined4 *param_2,SCStr *param_3); };
struct Recovered_103f2300 { undefined4 * FUN_103f2300(undefined4 *param_2,SCStr *param_3); };
struct Recovered_103f2380 { undefined4 * FUN_103f2380(undefined4 *param_2,SCStr *param_3); };
struct Recovered_103f2400 { undefined4 * FUN_103f2400(undefined4 *param_2,SCStr *param_3); };
struct Recovered_103f2480 { undefined4 * FUN_103f2480(undefined4 *param_2,SCStr *param_3); };
struct Recovered_103f2500 { undefined4 * FUN_103f2500(undefined4 *param_2,SCStr *param_3); };
struct Recovered_103f2580 { undefined4 * FUN_103f2580(undefined4 *param_2,SCStr *param_3); };
struct Recovered_103f2600 { undefined4 * FUN_103f2600(undefined4 *param_2,SCStr *param_3); };
struct Recovered_103f2680 { undefined4 * FUN_103f2680(undefined4 *param_2,SCStr *param_3); };
struct Recovered_103f2700 { undefined4 * FUN_103f2700(undefined4 *param_2,SCStr *param_3); };
struct Recovered_103f2780 { undefined4 * FUN_103f2780(undefined4 *param_2,SCStr *param_3); };
struct Recovered_103f2800 { undefined4 * FUN_103f2800(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10401ad0 { undefined4 * FUN_10401ad0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10401b50 { undefined4 * FUN_10401b50(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10401bd0 { undefined4 * FUN_10401bd0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_104043f0 { undefined4 * FUN_104043f0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1040cc60 { undefined4 * FUN_1040cc60(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10414e10 { undefined4 * FUN_10414e10(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10414e90 { undefined4 * FUN_10414e90(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1041ccb0 { undefined4 * FUN_1041ccb0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1041cd30 { undefined4 * FUN_1041cd30(undefined4 *param_2,SCStr *param_3); };
struct Recovered_104238d0 { undefined4 * FUN_104238d0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10423950 { undefined4 * FUN_10423950(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10424ef0 { undefined4 * FUN_10424ef0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10430440 { undefined4 * FUN_10430440(undefined4 *param_2,SCStr *param_3); };
struct Recovered_104304d0 { undefined4 * FUN_104304d0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10430560 { undefined4 * FUN_10430560(undefined4 *param_2,SCStr *param_3); };
struct Recovered_104305f0 { undefined4 * FUN_104305f0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10430680 { undefined4 * FUN_10430680(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10430710 { undefined4 * FUN_10430710(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10438580 { undefined4 * FUN_10438580(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10438600 { undefined4 * FUN_10438600(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1043c920 { undefined4 * FUN_1043c920(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1043c9a0 { undefined4 * FUN_1043c9a0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1043e380 { undefined4 * FUN_1043e380(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1043f690 { undefined4 * FUN_1043f690(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10440b30 { undefined4 * FUN_10440b30(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10442180 { undefined4 * FUN_10442180(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1044a010 { undefined4 * FUN_1044a010(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1044e920 { undefined4 * FUN_1044e920(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1044e9a0 { undefined4 * FUN_1044e9a0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10451510 { undefined4 * FUN_10451510(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10451590 { undefined4 * FUN_10451590(undefined4 *param_2,SCStr *param_3); };
struct Recovered_104536f0 { undefined4 * FUN_104536f0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10453e60 { undefined4 * FUN_10453e60(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10455200 { undefined4 * FUN_10455200(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1045b570 { undefined4 * FUN_1045b570(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1045b5f0 { undefined4 * FUN_1045b5f0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1045d480 { undefined4 * FUN_1045d480(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1045ed20 { undefined4 * FUN_1045ed20(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10460e70 { undefined4 * FUN_10460e70(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10464f20 { undefined4 * FUN_10464f20(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10464fb0 { undefined4 * FUN_10464fb0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10465da0 { undefined4 * FUN_10465da0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10469100 { undefined4 * FUN_10469100(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10469190 { undefined4 * FUN_10469190(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1046b800 { undefined4 * FUN_1046b800(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1046b890 { undefined4 * FUN_1046b890(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1046d9d0 { undefined4 * FUN_1046d9d0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1046fa80 { undefined4 * FUN_1046fa80(undefined4 *param_2,SCStr *param_3); };
struct Recovered_104715e0 { undefined4 * FUN_104715e0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_104743a0 { undefined4 * FUN_104743a0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_104789a0 { undefined4 * FUN_104789a0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1047d530 { undefined4 * FUN_1047d530(undefined4 *param_2,SCStr *param_3); };
struct Recovered_104966e0 { undefined4 * FUN_104966e0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1049cc70 { undefined4 * FUN_1049cc70(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1049ccf0 { undefined4 * FUN_1049ccf0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1049cd80 { undefined4 * FUN_1049cd80(undefined4 *param_2,SCStr *param_3); };
struct Recovered_104a7160 { undefined4 * FUN_104a7160(undefined4 *param_2,SCStr *param_3); };
struct Recovered_104a71f0 { undefined4 * FUN_104a71f0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_104a7280 { undefined4 * FUN_104a7280(undefined4 *param_2,SCStr *param_3); };
struct Recovered_104a7310 { undefined4 * FUN_104a7310(undefined4 *param_2,SCStr *param_3); };
struct Recovered_104a73a0 { undefined4 * FUN_104a73a0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_104a7430 { undefined4 * FUN_104a7430(undefined4 *param_2,SCStr *param_3); };
struct Recovered_104a9100 { undefined4 * FUN_104a9100(undefined4 *param_2,SCStr *param_3); };
struct Recovered_104aa000 { undefined4 * FUN_104aa000(undefined4 *param_2,SCStr *param_3); };
struct Recovered_104aaf00 { undefined4 * FUN_104aaf00(undefined4 *param_2,SCStr *param_3); };
struct Recovered_104b01d0 { undefined4 * FUN_104b01d0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_104b28b0 { undefined4 * FUN_104b28b0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_104b3a20 { undefined4 * FUN_104b3a20(undefined4 *param_2,SCStr *param_3); };
struct Recovered_104b4920 { undefined4 * FUN_104b4920(undefined4 *param_2,SCStr *param_3); };
struct Recovered_104ba490 { undefined4 * FUN_104ba490(undefined4 *param_2,SCStr *param_3); };
struct Recovered_104bcdd0 { undefined4 * FUN_104bcdd0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_104bce60 { undefined4 * FUN_104bce60(undefined4 *param_2,SCStr *param_3); };
struct Recovered_104c0b70 { undefined4 * FUN_104c0b70(undefined4 *param_2,SCStr *param_3); };
struct Recovered_104c8b70 { undefined4 * FUN_104c8b70(undefined4 *param_2,SCStr *param_3); };
struct Recovered_104c8c00 { undefined4 * FUN_104c8c00(undefined4 *param_2,SCStr *param_3); };
struct Recovered_104cb060 { undefined4 * FUN_104cb060(undefined4 *param_2,SCStr *param_3); };
struct Recovered_104d4470 { undefined4 * FUN_104d4470(undefined4 *param_2,SCStr *param_3); };
struct Recovered_104d44f0 { undefined4 * FUN_104d44f0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_104d4570 { undefined4 * FUN_104d4570(undefined4 *param_2,SCStr *param_3); };
struct Recovered_104d6440 { undefined4 * FUN_104d6440(undefined4 *param_2,SCStr *param_3); };
struct Recovered_104d9d90 { undefined4 * FUN_104d9d90(undefined4 *param_2,SCStr *param_3); };
struct Recovered_104dd660 { undefined4 * FUN_104dd660(undefined4 *param_2,SCStr *param_3); };
struct Recovered_104dd6e0 { undefined4 * FUN_104dd6e0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_104dd760 { undefined4 * FUN_104dd760(undefined4 *param_2,SCStr *param_3); };
struct Recovered_104ecb10 { undefined4 * FUN_104ecb10(undefined4 *param_2,SCStr *param_3); };
struct Recovered_104ecb90 { undefined4 * FUN_104ecb90(undefined4 *param_2,SCStr *param_3); };
struct Recovered_104ff7c0 { undefined4 * FUN_104ff7c0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1050aea0 { undefined4 * FUN_1050aea0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1050b3a0 { undefined4 * FUN_1050b3a0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10519b40 { undefined4 * FUN_10519b40(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10519bc0 { undefined4 * FUN_10519bc0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1051a0f0 { undefined4 * FUN_1051a0f0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10545310 { undefined4 * FUN_10545310(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10545640 { undefined4 * FUN_10545640(undefined4 *param_2,SCStr *param_3); };
struct Recovered_105456c0 { undefined4 * FUN_105456c0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10556c90 { undefined4 * FUN_10556c90(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10556d10 { undefined4 * FUN_10556d10(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10556d90 { undefined4 * FUN_10556d90(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1055fc90 { undefined4 * FUN_1055fc90(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10578350 { undefined4 * FUN_10578350(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10585900 { undefined4 * FUN_10585900(undefined4 *param_2,SCStr *param_3); };
struct Recovered_105922f0 { undefined4 * FUN_105922f0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10592370 { undefined4 * FUN_10592370(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10592410 { undefined4 * FUN_10592410(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10598f50 { undefined4 * FUN_10598f50(undefined4 *param_2,SCStr *param_3); };
struct Recovered_105b5090 { undefined4 * FUN_105b5090(undefined4 *param_2,SCStr *param_3); };
struct Recovered_105b5110 { undefined4 * FUN_105b5110(undefined4 *param_2,SCStr *param_3); };
struct Recovered_105c0540 { undefined4 * FUN_105c0540(undefined4 *param_2,SCStr *param_3); };
struct Recovered_105c05c0 { undefined4 * FUN_105c05c0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_105e6890 { undefined4 * FUN_105e6890(undefined4 *param_2,SCStr *param_3); };
struct Recovered_105e6910 { undefined4 * FUN_105e6910(undefined4 *param_2,SCStr *param_3); };
struct Recovered_105e6990 { undefined4 * FUN_105e6990(undefined4 *param_2,SCStr *param_3); };
struct Recovered_105e6a10 { undefined4 * FUN_105e6a10(undefined4 *param_2,SCStr *param_3); };
struct Recovered_105e6a90 { undefined4 * FUN_105e6a90(undefined4 *param_2,SCStr *param_3); };
struct Recovered_105e6b10 { undefined4 * FUN_105e6b10(undefined4 *param_2,SCStr *param_3); };
struct Recovered_105e6b90 { undefined4 * FUN_105e6b90(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1061dcf0 { undefined4 * FUN_1061dcf0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1067efd0 { undefined4 * FUN_1067efd0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10680550 { undefined4 * FUN_10680550(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10687870 { undefined4 * FUN_10687870(undefined4 *param_2,SCStr *param_3); };
struct Recovered_106878f0 { undefined4 * FUN_106878f0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1068b530 { undefined4 * FUN_1068b530(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1068b720 { undefined4 * FUN_1068b720(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1068b7a0 { undefined4 * FUN_1068b7a0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10696b60 { undefined4 * FUN_10696b60(undefined4 *param_2,SCStr *param_3); };
struct Recovered_106a00d0 { undefined4 * FUN_106a00d0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_106a0150 { undefined4 * FUN_106a0150(undefined4 *param_2,SCStr *param_3); };
struct Recovered_106a01d0 { undefined4 * FUN_106a01d0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_106a0250 { undefined4 * FUN_106a0250(undefined4 *param_2,SCStr *param_3); };
struct Recovered_106a02d0 { undefined4 * FUN_106a02d0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_106a0350 { undefined4 * FUN_106a0350(undefined4 *param_2,SCStr *param_3); };
struct Recovered_106a1df0 { undefined4 * FUN_106a1df0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_106cc8e0 { undefined4 * FUN_106cc8e0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_106d0d60 { undefined4 * FUN_106d0d60(undefined4 *param_2,SCStr *param_3); };
struct Recovered_106d6d60 { undefined4 * FUN_106d6d60(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10708510 { undefined4 * FUN_10708510(undefined4 *param_2,SCStr *param_3); };
struct Recovered_107cb7f0 { undefined4 * FUN_107cb7f0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10a08110 { undefined4 * FUN_10a08110(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10a08190 { undefined4 * FUN_10a08190(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10a08210 { undefined4 * FUN_10a08210(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10a08290 { undefined4 * FUN_10a08290(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10a08310 { undefined4 * FUN_10a08310(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10a08390 { undefined4 * FUN_10a08390(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10a08410 { undefined4 * FUN_10a08410(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10a08490 { undefined4 * FUN_10a08490(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10a7cb70 { undefined4 * FUN_10a7cb70(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10b721d0 { undefined4 * FUN_10b721d0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10b72250 { undefined4 * FUN_10b72250(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10b7aaa0 { undefined4 * FUN_10b7aaa0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10b7ab20 { undefined4 * FUN_10b7ab20(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10b82e70 { undefined4 * FUN_10b82e70(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10b82ef0 { undefined4 * FUN_10b82ef0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10b82f70 { undefined4 * FUN_10b82f70(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10b83350 { undefined4 * FUN_10b83350(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10b83500 { undefined4 * FUN_10b83500(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10b8d5b0 { undefined4 * FUN_10b8d5b0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10b8d630 { undefined4 * FUN_10b8d630(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10b8d6b0 { undefined4 * FUN_10b8d6b0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10b8d730 { undefined4 * FUN_10b8d730(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10b8d7b0 { undefined4 * FUN_10b8d7b0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10b94ef0 { undefined4 * FUN_10b94ef0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10b94f70 { undefined4 * FUN_10b94f70(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10b9f670 { undefined4 * FUN_10b9f670(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10b9f6f0 { undefined4 * FUN_10b9f6f0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10b9f770 { undefined4 * FUN_10b9f770(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10b9f7f0 { undefined4 * FUN_10b9f7f0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10b9f870 { undefined4 * FUN_10b9f870(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10b9f8f0 { undefined4 * FUN_10b9f8f0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10bb31d0 { undefined4 * FUN_10bb31d0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10bb3250 { undefined4 * FUN_10bb3250(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10bbc630 { undefined4 * FUN_10bbc630(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10bbed40 { undefined4 * FUN_10bbed40(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10bbf370 { undefined4 * FUN_10bbf370(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10bc4d60 { undefined4 * FUN_10bc4d60(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10bc90f0 { undefined4 * FUN_10bc90f0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10bc9170 { undefined4 * FUN_10bc9170(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10bc91f0 { undefined4 * FUN_10bc91f0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10bcb450 { undefined4 * FUN_10bcb450(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10bf1320 { undefined4 * FUN_10bf1320(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10bf2780 { undefined4 * FUN_10bf2780(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10bf3040 { undefined4 * FUN_10bf3040(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10bf3530 { undefined4 * FUN_10bf3530(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10bf92f0 { undefined4 * FUN_10bf92f0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10bfdb00 { undefined4 * FUN_10bfdb00(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10c00d10 { undefined4 * FUN_10c00d10(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10c00d90 { undefined4 * FUN_10c00d90(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10c00e10 { undefined4 * FUN_10c00e10(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10c03950 { undefined4 * FUN_10c03950(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10c039d0 { undefined4 * FUN_10c039d0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10c15630 { undefined4 * FUN_10c15630(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10c27280 { undefined4 * FUN_10c27280(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10c2a670 { undefined4 * FUN_10c2a670(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10c32770 { undefined4 * FUN_10c32770(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10c38230 { undefined4 * FUN_10c38230(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10c3b270 { undefined4 * FUN_10c3b270(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10c478e0 { undefined4 * FUN_10c478e0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10c4cf90 { undefined4 * FUN_10c4cf90(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10c4d010 { undefined4 * FUN_10c4d010(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10c53000 { undefined4 * FUN_10c53000(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10c531a0 { undefined4 * FUN_10c531a0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10c53220 { undefined4 * FUN_10c53220(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10c532a0 { undefined4 * FUN_10c532a0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10c53320 { undefined4 * FUN_10c53320(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10c533a0 { undefined4 * FUN_10c533a0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10c53550 { undefined4 * FUN_10c53550(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10c535d0 { undefined4 * FUN_10c535d0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10c53650 { undefined4 * FUN_10c53650(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10c536d0 { undefined4 * FUN_10c536d0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10c53750 { undefined4 * FUN_10c53750(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10c58260 { undefined4 * FUN_10c58260(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10c58400 { undefined4 * FUN_10c58400(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10c58480 { undefined4 * FUN_10c58480(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10c58500 { undefined4 * FUN_10c58500(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10c58580 { undefined4 * FUN_10c58580(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10c58730 { undefined4 * FUN_10c58730(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10c587b0 { undefined4 * FUN_10c587b0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10c58830 { undefined4 * FUN_10c58830(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10c588b0 { undefined4 * FUN_10c588b0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10c5a900 { undefined4 * FUN_10c5a900(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10c5aaa0 { undefined4 * FUN_10c5aaa0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10c5ac50 { undefined4 * FUN_10c5ac50(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10c5cd30 { undefined4 * FUN_10c5cd30(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10c5d000 { undefined4 * FUN_10c5d000(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10c6c1c0 { undefined4 * FUN_10c6c1c0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10c83420 { undefined4 * FUN_10c83420(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10c834a0 { undefined4 * FUN_10c834a0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10c845b0 { undefined4 * FUN_10c845b0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10c9bd90 { undefined4 * FUN_10c9bd90(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10cb38c0 { undefined4 * FUN_10cb38c0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10cbc5b0 { undefined4 * FUN_10cbc5b0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10cc0050 { undefined4 * FUN_10cc0050(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10cc34d0 { undefined4 * FUN_10cc34d0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10cd87f0 { undefined4 * FUN_10cd87f0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10cd8870 { undefined4 * FUN_10cd8870(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10cd88f0 { undefined4 * FUN_10cd88f0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10cd8970 { undefined4 * FUN_10cd8970(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10cd89f0 { undefined4 * FUN_10cd89f0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10cd8a70 { undefined4 * FUN_10cd8a70(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10cd8af0 { undefined4 * FUN_10cd8af0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10cd8b70 { undefined4 * FUN_10cd8b70(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10cd8bf0 { undefined4 * FUN_10cd8bf0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10cdea40 { undefined4 * FUN_10cdea40(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10cdeac0 { undefined4 * FUN_10cdeac0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10cdeb40 { undefined4 * FUN_10cdeb40(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10cdebc0 { undefined4 * FUN_10cdebc0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10cdec40 { undefined4 * FUN_10cdec40(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10ce0a20 { undefined4 * FUN_10ce0a20(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10ce1e20 { undefined4 * FUN_10ce1e20(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10ce4cb0 { undefined4 * FUN_10ce4cb0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10cf0980 { undefined4 * FUN_10cf0980(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10cf3680 { undefined4 * FUN_10cf3680(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10cf3700 { undefined4 * FUN_10cf3700(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10cf52a0 { undefined4 * FUN_10cf52a0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10cf63d0 { undefined4 * FUN_10cf63d0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10cf8c60 { undefined4 * FUN_10cf8c60(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10cf8ce0 { undefined4 * FUN_10cf8ce0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10d06d40 { undefined4 * FUN_10d06d40(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10d06fa0 { undefined4 * FUN_10d06fa0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10d07020 { undefined4 * FUN_10d07020(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10d07520 { undefined4 * FUN_10d07520(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10d102d0 { undefined4 * FUN_10d102d0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10d19410 { undefined4 * FUN_10d19410(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10d1d4f0 { undefined4 * FUN_10d1d4f0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10d1d570 { undefined4 * FUN_10d1d570(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10d22340 { undefined4 * FUN_10d22340(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10d223d0 { undefined4 * FUN_10d223d0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10d2b0f0 { undefined4 * FUN_10d2b0f0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10d2b240 { undefined4 * FUN_10d2b240(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10d2b2c0 { undefined4 * FUN_10d2b2c0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10d2b340 { undefined4 * FUN_10d2b340(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10d2b3c0 { undefined4 * FUN_10d2b3c0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10d2b440 { undefined4 * FUN_10d2b440(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10d39e40 { undefined4 * FUN_10d39e40(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10d3c9f0 { undefined4 * FUN_10d3c9f0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10d3ca70 { undefined4 * FUN_10d3ca70(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10d3caf0 { undefined4 * FUN_10d3caf0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10d41d20 { undefined4 * FUN_10d41d20(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10d41f10 { undefined4 * FUN_10d41f10(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10d60300 { undefined4 * FUN_10d60300(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10d71570 { undefined4 * FUN_10d71570(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10d86dd0 { undefined4 * FUN_10d86dd0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10d86e50 { undefined4 * FUN_10d86e50(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10d86ed0 { undefined4 * FUN_10d86ed0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10d86f50 { undefined4 * FUN_10d86f50(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10d86fd0 { undefined4 * FUN_10d86fd0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10d89300 { undefined4 * FUN_10d89300(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10d91bd0 { undefined4 * FUN_10d91bd0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10d93ac0 { undefined4 * FUN_10d93ac0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10d97210 { undefined4 * FUN_10d97210(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10d9a400 { undefined4 * FUN_10d9a400(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10d9a480 { undefined4 * FUN_10d9a480(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10d9ded0 { undefined4 * FUN_10d9ded0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10d9df50 { undefined4 * FUN_10d9df50(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10d9e640 { undefined4 * FUN_10d9e640(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10da33b0 { undefined4 * FUN_10da33b0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10da3430 { undefined4 * FUN_10da3430(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10da7540 { undefined4 * FUN_10da7540(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10da75c0 { undefined4 * FUN_10da75c0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10da7640 { undefined4 * FUN_10da7640(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10dcef60 { undefined4 * FUN_10dcef60(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10dd5ba0 { undefined4 * FUN_10dd5ba0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10de28f0 { undefined4 * FUN_10de28f0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10de4590 { undefined4 * FUN_10de4590(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10de8950 { undefined4 * FUN_10de8950(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10de89d0 { undefined4 * FUN_10de89d0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10de8a50 { undefined4 * FUN_10de8a50(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10e06af0 { undefined4 * FUN_10e06af0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10e0ae60 { undefined4 * FUN_10e0ae60(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10e1fba0 { undefined4 * FUN_10e1fba0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10e24ac0 { undefined4 * FUN_10e24ac0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10e3f100 { undefined4 * FUN_10e3f100(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10e3f180 { undefined4 * FUN_10e3f180(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10e4e5e0 { undefined4 * FUN_10e4e5e0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10e591f0 { undefined4 * FUN_10e591f0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10e72c70 { undefined4 * FUN_10e72c70(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10e72cf0 { undefined4 * FUN_10e72cf0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10e7de90 { undefined4 * FUN_10e7de90(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10e86840 { undefined4 * FUN_10e86840(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10ea2900 { undefined4 * FUN_10ea2900(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10ea2a20 { undefined4 * FUN_10ea2a20(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10ead200 { undefined4 * FUN_10ead200(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10ead280 { undefined4 * FUN_10ead280(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10ee0c10 { undefined4 * FUN_10ee0c10(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10ee1790 { undefined4 * FUN_10ee1790(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10ee8760 { undefined4 * FUN_10ee8760(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10eed620 { undefined4 * FUN_10eed620(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10ef2b60 { undefined4 * FUN_10ef2b60(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10f04d30 { undefined4 * FUN_10f04d30(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10f13cb0 { undefined4 * FUN_10f13cb0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10f13d30 { undefined4 * FUN_10f13d30(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10f13db0 { undefined4 * FUN_10f13db0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10f228d0 { undefined4 * FUN_10f228d0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10f2bf40 { undefined4 * FUN_10f2bf40(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10f36120 { undefined4 * FUN_10f36120(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10f361a0 { undefined4 * FUN_10f361a0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10f36220 { undefined4 * FUN_10f36220(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10f362a0 { undefined4 * FUN_10f362a0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10f3ee80 { undefined4 * FUN_10f3ee80(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10f3ef00 { undefined4 * FUN_10f3ef00(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10f42e50 { undefined4 * FUN_10f42e50(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10f478b0 { undefined4 * FUN_10f478b0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10f47a50 { undefined4 * FUN_10f47a50(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10f48ce0 { undefined4 * FUN_10f48ce0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10f4c9c0 { undefined4 * FUN_10f4c9c0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10f4cb60 { undefined4 * FUN_10f4cb60(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10f515b0 { undefined4 * FUN_10f515b0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10f620f0 { undefined4 * FUN_10f620f0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10f62170 { undefined4 * FUN_10f62170(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10f621f0 { undefined4 * FUN_10f621f0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10f62270 { undefined4 * FUN_10f62270(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10f622f0 { undefined4 * FUN_10f622f0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10f62370 { undefined4 * FUN_10f62370(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10f623f0 { undefined4 * FUN_10f623f0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10f62470 { undefined4 * FUN_10f62470(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10f678f0 { undefined4 * FUN_10f678f0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10f67970 { undefined4 * FUN_10f67970(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10f679f0 { undefined4 * FUN_10f679f0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10f73640 { undefined4 * FUN_10f73640(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10f7a100 { undefined4 * FUN_10f7a100(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10f7a180 { undefined4 * FUN_10f7a180(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10f80cd0 { undefined4 * FUN_10f80cd0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10f80d50 { undefined4 * FUN_10f80d50(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10f8e410 { undefined4 * FUN_10f8e410(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10f8e490 { undefined4 * FUN_10f8e490(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10f8e510 { undefined4 * FUN_10f8e510(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10fa36e0 { undefined4 * FUN_10fa36e0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10fa9e20 { undefined4 * FUN_10fa9e20(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10fbcea0 { undefined4 * FUN_10fbcea0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10fc95e0 { undefined4 * FUN_10fc95e0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10fcf470 { undefined4 * FUN_10fcf470(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10fcf4f0 { undefined4 * FUN_10fcf4f0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10fe3570 { undefined4 * FUN_10fe3570(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10fe35f0 { undefined4 * FUN_10fe35f0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10fe3670 { undefined4 * FUN_10fe3670(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10fe5880 { undefined4 * FUN_10fe5880(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10fe6da0 { undefined4 * FUN_10fe6da0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10fe8550 { undefined4 * FUN_10fe8550(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10fe85d0 { undefined4 * FUN_10fe85d0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10fe8650 { undefined4 * FUN_10fe8650(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10ff84d0 { undefined4 * FUN_10ff84d0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10ff8550 { undefined4 * FUN_10ff8550(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10ff86c0 { undefined4 * FUN_10ff86c0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10ffbb30 { undefined4 * FUN_10ffbb30(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10ffd0d0 { undefined4 * FUN_10ffd0d0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_11002fc0 { undefined4 * FUN_11002fc0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_11003050 { undefined4 * FUN_11003050(undefined4 *param_2,SCStr *param_3); };
struct Recovered_110183f0 { undefined4 * FUN_110183f0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_11019480 { undefined4 * FUN_11019480(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1101bd70 { undefined4 * FUN_1101bd70(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1101bf10 { undefined4 * FUN_1101bf10(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1101e290 { undefined4 * FUN_1101e290(undefined4 *param_2,SCStr *param_3); };
struct Recovered_11020f20 { undefined4 * FUN_11020f20(undefined4 *param_2,SCStr *param_3); };
struct Recovered_11022410 { undefined4 * FUN_11022410(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1102db80 { undefined4 * FUN_1102db80(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1102dc00 { undefined4 * FUN_1102dc00(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1102dda0 { undefined4 * FUN_1102dda0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1102de20 { undefined4 * FUN_1102de20(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1102dea0 { undefined4 * FUN_1102dea0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1102df20 { undefined4 * FUN_1102df20(undefined4 *param_2,SCStr *param_3); };
struct Recovered_11032f80 { undefined4 * FUN_11032f80(undefined4 *param_2,SCStr *param_3); };
struct Recovered_110334f0 { undefined4 * FUN_110334f0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_11034ef0 { undefined4 * FUN_11034ef0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_11037810 { undefined4 * FUN_11037810(undefined4 *param_2,SCStr *param_3); };
struct Recovered_11037890 { undefined4 * FUN_11037890(undefined4 *param_2,SCStr *param_3); };
struct Recovered_11037910 { undefined4 * FUN_11037910(undefined4 *param_2,SCStr *param_3); };
struct Recovered_11037a30 { undefined4 * FUN_11037a30(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1105d8e0 { undefined4 * FUN_1105d8e0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_11060b80 { undefined4 * FUN_11060b80(undefined4 *param_2,SCStr *param_3); };
struct Recovered_11060d30 { undefined4 * FUN_11060d30(undefined4 *param_2,SCStr *param_3); };
struct Recovered_11061fc0 { undefined4 * FUN_11061fc0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_11062f50 { undefined4 * FUN_11062f50(undefined4 *param_2,SCStr *param_3); };
struct Recovered_11065cb0 { undefined4 * FUN_11065cb0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_11067290 { undefined4 * FUN_11067290(undefined4 *param_2,SCStr *param_3); };
struct Recovered_11068020 { undefined4 * FUN_11068020(undefined4 *param_2,SCStr *param_3); };
struct Recovered_110680a0 { undefined4 * FUN_110680a0(undefined4 *param_2,SCStr *param_3); };
// Reference entry 1013b6b0; body size 103 bytes.
#line 1 "ENTRY_1013b6b0"
undefined4 * Recovered_1013b6b0::FUN_1013b6b0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIAbilityDelegate")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1013b730; body size 103 bytes.
#line 1 "ENTRY_1013b730"
undefined4 * Recovered_1013b730::FUN_1013b730(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIActionDelegate")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1013b7b0; body size 103 bytes.
#line 1 "ENTRY_1013b7b0"
undefined4 * Recovered_1013b7b0::FUN_1013b7b0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIActionFactory")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1013b830; body size 103 bytes.
#line 1 "ENTRY_1013b830"
undefined4 * Recovered_1013b830::FUN_1013b830(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIActionFilter")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1013b8b0; body size 103 bytes.
#line 1 "ENTRY_1013b8b0"
undefined4 * Recovered_1013b8b0::FUN_1013b8b0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIAction")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1013b930; body size 103 bytes.
#line 1 "ENTRY_1013b930"
undefined4 * Recovered_1013b930::FUN_1013b930(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIAutomationDelegate")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1013b9b0; body size 103 bytes.
#line 1 "ENTRY_1013b9b0"
undefined4 * Recovered_1013b9b0::FUN_1013b9b0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIBTAccessoryDelegate")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1013ba30; body size 103 bytes.
#line 1 "ENTRY_1013ba30"
undefined4 * Recovered_1013ba30::FUN_1013ba30(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIBTClassicConnectionCallback")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1013bab0; body size 103 bytes.
#line 1 "ENTRY_1013bab0"
undefined4 * Recovered_1013bab0::FUN_1013bab0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIBTClassicConnectionProvider")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1013bb30; body size 103 bytes.
#line 1 "ENTRY_1013bb30"
undefined4 * Recovered_1013bb30::FUN_1013bb30(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIBleDelegate")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1013bbb0; body size 103 bytes.
#line 1 "ENTRY_1013bbb0"
undefined4 * Recovered_1013bbb0::FUN_1013bbb0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIBlePeripheralDelegate")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1013bc30; body size 103 bytes.
#line 1 "ENTRY_1013bc30"
undefined4 * Recovered_1013bc30::FUN_1013bc30(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIBrowseItem")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1013bcb0; body size 103 bytes.
#line 1 "ENTRY_1013bcb0"
undefined4 * Recovered_1013bcb0::FUN_1013bcb0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIChirpDelegate")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1013bd30; body size 103 bytes.
#line 1 "ENTRY_1013bd30"
undefined4 * Recovered_1013bd30::FUN_1013bd30(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIClipboardDelegate")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1013bdb0; body size 103 bytes.
#line 1 "ENTRY_1013bdb0"
undefined4 * Recovered_1013bdb0::FUN_1013bdb0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCICrashReportProvider")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1013be30; body size 103 bytes.
#line 1 "ENTRY_1013be30"
undefined4 * Recovered_1013be30::FUN_1013be30(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCICustomSubWizard")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1013beb0; body size 103 bytes.
#line 1 "ENTRY_1013beb0"
undefined4 * Recovered_1013beb0::FUN_1013beb0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEventSink")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1013bf30; body size 103 bytes.
#line 1 "ENTRY_1013bf30"
undefined4 * Recovered_1013bf30::FUN_1013bf30(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIExperimentManagerProvider")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1013bfb0; body size 103 bytes.
#line 1 "ENTRY_1013bfb0"
undefined4 * Recovered_1013bfb0::FUN_1013bfb0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIGetAboutSonosStringCB")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1013c030; body size 103 bytes.
#line 1 "ENTRY_1013c030"
undefined4 * Recovered_1013c030::FUN_1013c030(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIGetSonosPlaylistsCB")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1013c0b0; body size 103 bytes.
#line 1 "ENTRY_1013c0b0"
undefined4 * Recovered_1013c0b0::FUN_1013c0b0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIHapticDelegate")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1013c130; body size 103 bytes.
#line 1 "ENTRY_1013c130"
undefined4 * Recovered_1013c130::FUN_1013c130(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIInAppMessagingProvider")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1013c1b0; body size 103 bytes.
#line 1 "ENTRY_1013c1b0"
undefined4 * Recovered_1013c1b0::FUN_1013c1b0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIInAppPurchaseManagerProvider")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1013c230; body size 103 bytes.
#line 1 "ENTRY_1013c230"
undefined4 * Recovered_1013c230::FUN_1013c230(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCILifecycleAppProvider")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1013c2b0; body size 103 bytes.
#line 1 "ENTRY_1013c2b0"
undefined4 * Recovered_1013c2b0::FUN_1013c2b0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCILocalMediaCollection")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1013c330; body size 103 bytes.
#line 1 "ENTRY_1013c330"
undefined4 * Recovered_1013c330::FUN_1013c330(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCILocalMusicBrowseItemInfo")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1013c3b0; body size 103 bytes.
#line 1 "ENTRY_1013c3b0"
undefined4 * Recovered_1013c3b0::FUN_1013c3b0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCILocalMusicSearchableDelegate")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1013c430; body size 103 bytes.
#line 1 "ENTRY_1013c430"
undefined4 * Recovered_1013c430::FUN_1013c430(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCILoggingProvider")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1013c4b0; body size 103 bytes.
#line 1 "ENTRY_1013c4b0"
undefined4 * Recovered_1013c4b0::FUN_1013c4b0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIMdnsDelegate")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1013c530; body size 103 bytes.
#line 1 "ENTRY_1013c530"
undefined4 * Recovered_1013c530::FUN_1013c530(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIMusicServerBrowseDelegate")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1013c5b0; body size 103 bytes.
#line 1 "ENTRY_1013c5b0"
undefined4 * Recovered_1013c5b0::FUN_1013c5b0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIMusicServerDelegate")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1013c630; body size 103 bytes.
#line 1 "ENTRY_1013c630"
undefined4 * Recovered_1013c630::FUN_1013c630(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCINetstartListener")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1013c6b0; body size 103 bytes.
#line 1 "ENTRY_1013c6b0"
undefined4 * Recovered_1013c6b0::FUN_1013c6b0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCINetworkManagementDelegate")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1013c730; body size 103 bytes.
#line 1 "ENTRY_1013c730"
undefined4 * Recovered_1013c730::FUN_1013c730(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCINewWizDelegate")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1013c7b0; body size 103 bytes.
#line 1 "ENTRY_1013c7b0"
undefined4 * Recovered_1013c7b0::FUN_1013c7b0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCINfcDelegate")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1013c830; body size 103 bytes.
#line 1 "ENTRY_1013c830"
undefined4 * Recovered_1013c830::FUN_1013c830(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpCB")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1013c8b0; body size 103 bytes.
#line 1 "ENTRY_1013c8b0"
undefined4 * Recovered_1013c8b0::FUN_1013c8b0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISavedDataProvider")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1013c930; body size 103 bytes.
#line 1 "ENTRY_1013c930"
undefined4 * Recovered_1013c930::FUN_1013c930(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISecureStore")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1013c9b0; body size 103 bytes.
#line 1 "ENTRY_1013c9b0"
undefined4 * Recovered_1013c9b0::FUN_1013c9b0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISecurityContext")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1013ca30; body size 103 bytes.
#line 1 "ENTRY_1013ca30"
undefined4 * Recovered_1013ca30::FUN_1013ca30(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIServiceAppInterop")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1013cab0; body size 103 bytes.
#line 1 "ENTRY_1013cab0"
undefined4 * Recovered_1013cab0::FUN_1013cab0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIStackTraceCaptureDelegate")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1013cb30; body size 103 bytes.
#line 1 "ENTRY_1013cb30"
undefined4 * Recovered_1013cb30::FUN_1013cb30(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIStringInput")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1013cbb0; body size 103 bytes.
#line 1 "ENTRY_1013cbb0"
undefined4 * Recovered_1013cbb0::FUN_1013cbb0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCITrackInfo")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1013cc30; body size 103 bytes.
#line 1 "ENTRY_1013cc30"
undefined4 * Recovered_1013cc30::FUN_1013cc30(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIUrbanAirshipDelegate")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1013ccb0; body size 103 bytes.
#line 1 "ENTRY_1013ccb0"
undefined4 * Recovered_1013ccb0::FUN_1013ccb0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIUrlConnection")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1013cd30; body size 103 bytes.
#line 1 "ENTRY_1013cd30"
undefined4 * Recovered_1013cd30::FUN_1013cd30(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIUrlSessionCallback")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1013cdb0; body size 103 bytes.
#line 1 "ENTRY_1013cdb0"
undefined4 * Recovered_1013cdb0::FUN_1013cdb0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIUrlSessionProvider")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1013ce30; body size 103 bytes.
#line 1 "ENTRY_1013ce30"
undefined4 * Recovered_1013ce30::FUN_1013ce30(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIVoiceServiceDelegate")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1013ceb0; body size 103 bytes.
#line 1 "ENTRY_1013ceb0"
undefined4 * Recovered_1013ceb0::FUN_1013ceb0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIVpnDelegate")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1013cf30; body size 103 bytes.
#line 1 "ENTRY_1013cf30"
undefined4 * Recovered_1013cf30::FUN_1013cf30(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIWebsocketCallback")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1013cfb0; body size 103 bytes.
#line 1 "ENTRY_1013cfb0"
undefined4 * Recovered_1013cfb0::FUN_1013cfb0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIWebsocketDelegate")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1013d030; body size 103 bytes.
#line 1 "ENTRY_1013d030"
undefined4 * Recovered_1013d030::FUN_1013d030(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIWifiDelegate")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 101aa190; body size 103 bytes.
#line 1 "ENTRY_101aa190"
undefined4 * Recovered_101aa190::FUN_101aa190(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 101aa210; body size 103 bytes.
#line 1 "ENTRY_101aa210"
undefined4 * Recovered_101aa210::FUN_101aa210(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIIntArray")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 101b68f0; body size 103 bytes.
#line 1 "ENTRY_101b68f0"
undefined4 * Recovered_101b68f0::FUN_101b68f0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIAbilityListener")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 101b6970; body size 103 bytes.
#line 1 "ENTRY_101b6970"
undefined4 * Recovered_101b6970::FUN_101b6970(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEnumerable")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 101b69f0; body size 103 bytes.
#line 1 "ENTRY_101b69f0"
undefined4 * Recovered_101b69f0::FUN_101b69f0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEventSink")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 101b8e70; body size 103 bytes.
#line 1 "ENTRY_101b8e70"
undefined4 * Recovered_101b8e70::FUN_101b8e70(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIVersion")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 101bbef0; body size 103 bytes.
#line 1 "ENTRY_101bbef0"
undefined4 * Recovered_101bbef0::FUN_101bbef0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOp")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 101bbf70; body size 103 bytes.
#line 1 "ENTRY_101bbf70"
undefined4 * Recovered_101bbf70::FUN_101bbf70(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIElapsedTimeMeasurement")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 101bbff0; body size 103 bytes.
#line 1 "ENTRY_101bbff0"
undefined4 * Recovered_101bbff0::FUN_101bbff0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEventSink")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 101bef80; body size 103 bytes.
#line 1 "ENTRY_101bef80"
undefined4 * Recovered_101bef80::FUN_101bef80(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIStringArray")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 101cb1b0; body size 103 bytes.
#line 1 "ENTRY_101cb1b0"
undefined4 * Recovered_101cb1b0::FUN_101cb1b0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIActionFilterer")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 101cb230; body size 103 bytes.
#line 1 "ENTRY_101cb230"
undefined4 * Recovered_101cb230::FUN_101cb230(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIActionFilter")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 101cb2b0; body size 103 bytes.
#line 1 "ENTRY_101cb2b0"
undefined4 * Recovered_101cb2b0::FUN_101cb2b0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIActionFilter")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 101cb330; body size 103 bytes.
#line 1 "ENTRY_101cb330"
undefined4 * Recovered_101cb330::FUN_101cb330(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIAction")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 101dd540; body size 103 bytes.
#line 1 "ENTRY_101dd540"
undefined4 * Recovered_101dd540::FUN_101dd540(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIPropertyBag")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 101dd6e0; body size 103 bytes.
#line 1 "ENTRY_101dd6e0"
undefined4 * Recovered_101dd6e0::FUN_101dd6e0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEventSink")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 101dd760; body size 103 bytes.
#line 1 "ENTRY_101dd760"
undefined4 * Recovered_101dd760::FUN_101dd760(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIAccountManager")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 101dd7e0; body size 103 bytes.
#line 1 "ENTRY_101dd7e0"
undefined4 * Recovered_101dd7e0::FUN_101dd7e0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIActionDelegate")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 101dd900; body size 103 bytes.
#line 1 "ENTRY_101dd900"
undefined4 * Recovered_101dd900::FUN_101dd900(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 101dd980; body size 103 bytes.
#line 1 "ENTRY_101dd980"
undefined4 * Recovered_101dd980::FUN_101dd980(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpCB")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 101dda00; body size 103 bytes.
#line 1 "ENTRY_101dda00"
undefined4 * Recovered_101dda00::FUN_101dda00(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIProperty")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 101ddbf0; body size 103 bytes.
#line 1 "ENTRY_101ddbf0"
undefined4 * Recovered_101ddbf0::FUN_101ddbf0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEventSink")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 101f2130; body size 103 bytes.
#line 1 "ENTRY_101f2130"
undefined4 * Recovered_101f2130::FUN_101f2130(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEventSink")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 101f21b0; body size 103 bytes.
#line 1 "ENTRY_101f21b0"
undefined4 * Recovered_101f21b0::FUN_101f21b0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISettingsMenu")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 101f2230; body size 103 bytes.
#line 1 "ENTRY_101f2230"
undefined4 * Recovered_101f2230::FUN_101f2230(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISettingsMenu")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 101f22b0; body size 103 bytes.
#line 1 "ENTRY_101f22b0"
undefined4 * Recovered_101f22b0::FUN_101f22b0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISettingsSection")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 101f84c0; body size 103 bytes.
#line 1 "ENTRY_101f84c0"
undefined4 * Recovered_101f84c0::FUN_101f84c0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIAppReporting")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 101fb690; body size 103 bytes.
#line 1 "ENTRY_101fb690"
undefined4 * Recovered_101fb690::FUN_101fb690(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEventSink")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 101fb710; body size 103 bytes.
#line 1 "ENTRY_101fb710"
undefined4 * Recovered_101fb710::FUN_101fb710(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIAppSessionManager")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1021f3a0; body size 103 bytes.
#line 1 "ENTRY_1021f3a0"
undefined4 * Recovered_1021f3a0::FUN_1021f3a0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEventSink")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1021f4f0; body size 103 bytes.
#line 1 "ENTRY_1021f4f0"
undefined4 * Recovered_1021f4f0::FUN_1021f4f0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIInnerActionFactory")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1021f610; body size 103 bytes.
#line 1 "ENTRY_1021f610"
undefined4 * Recovered_1021f610::FUN_1021f610(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEventSink")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10222470; body size 103 bytes.
#line 1 "ENTRY_10222470"
undefined4 * Recovered_10222470::FUN_10222470(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIData")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 102224f0; body size 103 bytes.
#line 1 "ENTRY_102224f0"
undefined4 * Recovered_102224f0::FUN_102224f0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIData")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 102437a0; body size 103 bytes.
#line 1 "ENTRY_102437a0"
undefined4 * Recovered_102437a0::FUN_102437a0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEventSink")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10243820; body size 103 bytes.
#line 1 "ENTRY_10243820"
undefined4 * Recovered_10243820::FUN_10243820(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEventSink")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 102438a0; body size 103 bytes.
#line 1 "ENTRY_102438a0"
undefined4 * Recovered_102438a0::FUN_102438a0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIActionContext")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10243920; body size 103 bytes.
#line 1 "ENTRY_10243920"
undefined4 * Recovered_10243920::FUN_10243920(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEventSink")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 102439a0; body size 103 bytes.
#line 1 "ENTRY_102439a0"
undefined4 * Recovered_102439a0::FUN_102439a0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIController")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10243a20; body size 103 bytes.
#line 1 "ENTRY_10243a20"
undefined4 * Recovered_10243a20::FUN_10243a20(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEventSink")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10243aa0; body size 103 bytes.
#line 1 "ENTRY_10243aa0"
undefined4 * Recovered_10243aa0::FUN_10243aa0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCINewWizController")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10243b20; body size 103 bytes.
#line 1 "ENTRY_10243b20"
undefined4 * Recovered_10243b20::FUN_10243b20(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEventSink")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10249970; body size 103 bytes.
#line 1 "ENTRY_10249970"
undefined4 * Recovered_10249970::FUN_10249970(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIControllerTest")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1024afd0; body size 103 bytes.
#line 1 "ENTRY_1024afd0"
undefined4 * Recovered_1024afd0::FUN_1024afd0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCICrashReportManager")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1024e050; body size 103 bytes.
#line 1 "ENTRY_1024e050"
undefined4 * Recovered_1024e050::FUN_1024e050(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEulaManager")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10252c00; body size 103 bytes.
#line 1 "ENTRY_10252c00"
undefined4 * Recovered_10252c00::FUN_10252c00(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEventSink")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10252c80; body size 103 bytes.
#line 1 "ENTRY_10252c80"
undefined4 * Recovered_10252c80::FUN_10252c80(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEventSink")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10252d00; body size 103 bytes.
#line 1 "ENTRY_10252d00"
undefined4 * Recovered_10252d00::FUN_10252d00(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIExperimentManager")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1025cc20; body size 103 bytes.
#line 1 "ENTRY_1025cc20"
undefined4 * Recovered_1025cc20::FUN_1025cc20(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1025cca0; body size 103 bytes.
#line 1 "ENTRY_1025cca0"
undefined4 * Recovered_1025cca0::FUN_1025cca0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIInAppProduct")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1025cd20; body size 103 bytes.
#line 1 "ENTRY_1025cd20"
undefined4 * Recovered_1025cd20::FUN_1025cd20(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIInAppProductCallback")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1025cda0; body size 103 bytes.
#line 1 "ENTRY_1025cda0"
undefined4 * Recovered_1025cda0::FUN_1025cda0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIInAppPurchaseCallback")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1025ce20; body size 103 bytes.
#line 1 "ENTRY_1025ce20"
undefined4 * Recovered_1025ce20::FUN_1025ce20(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIInAppPurchaseManager")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1025df70; body size 103 bytes.
#line 1 "ENTRY_1025df70"
undefined4 * Recovered_1025df70::FUN_1025df70(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIInAppMessaging")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1025e6a0; body size 103 bytes.
#line 1 "ENTRY_1025e6a0"
undefined4 * Recovered_1025e6a0::FUN_1025e6a0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCITime")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10262310; body size 103 bytes.
#line 1 "ENTRY_10262310"
undefined4 * Recovered_10262310::FUN_10262310(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCStrProp")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 102624f0; body size 103 bytes.
#line 1 "ENTRY_102624f0"
undefined4 * Recovered_102624f0::FUN_102624f0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCStrProp")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1026cd00; body size 103 bytes.
#line 1 "ENTRY_1026cd00"
undefined4 * Recovered_1026cd00::FUN_1026cd00(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCILandingPage")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1026cd80; body size 103 bytes.
#line 1 "ENTRY_1026cd80"
undefined4 * Recovered_1026cd80::FUN_1026cd80(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCILandingPage")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1026ce00; body size 103 bytes.
#line 1 "ENTRY_1026ce00"
undefined4 * Recovered_1026ce00::FUN_1026ce00(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCILandingPageSection")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1026ce80; body size 103 bytes.
#line 1 "ENTRY_1026ce80"
undefined4 * Recovered_1026ce80::FUN_1026ce80(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCILandingPageTile")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1026e060; body size 103 bytes.
#line 1 "ENTRY_1026e060"
undefined4 * Recovered_1026e060::FUN_1026e060(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCILogging")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10271800; body size 103 bytes.
#line 1 "ENTRY_10271800"
undefined4 * Recovered_10271800::FUN_10271800(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEventSink")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10271880; body size 103 bytes.
#line 1 "ENTRY_10271880"
undefined4 * Recovered_10271880::FUN_10271880(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 102796e0; body size 103 bytes.
#line 1 "ENTRY_102796e0"
undefined4 * Recovered_102796e0::FUN_102796e0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEventSink")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10279760; body size 103 bytes.
#line 1 "ENTRY_10279760"
undefined4 * Recovered_10279760::FUN_10279760(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIMusicServiceMenu")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10282d90; body size 103 bytes.
#line 1 "ENTRY_10282d90"
undefined4 * Recovered_10282d90::FUN_10282d90(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIStream")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10282e10; body size 103 bytes.
#line 1 "ENTRY_10282e10"
undefined4 * Recovered_10282e10::FUN_10282e10(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISonarCalibrationManager")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10282e90; body size 103 bytes.
#line 1 "ENTRY_10282e90"
undefined4 * Recovered_10282e90::FUN_10282e90(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISeekableStream")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1028a680; body size 103 bytes.
#line 1 "ENTRY_1028a680"
undefined4 * Recovered_1028a680::FUN_1028a680(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCINewWizManager")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 102935e0; body size 103 bytes.
#line 1 "ENTRY_102935e0"
undefined4 * Recovered_102935e0::FUN_102935e0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISystemStatus")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10293660; body size 103 bytes.
#line 1 "ENTRY_10293660"
undefined4 * Recovered_10293660::FUN_10293660(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISystemStatusManager")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1029c270; body size 103 bytes.
#line 1 "ENTRY_1029c270"
undefined4 * Recovered_1029c270::FUN_1029c270(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOp")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1029c2f0; body size 103 bytes.
#line 1 "ENTRY_1029c2f0"
undefined4 * Recovered_1029c2f0::FUN_1029c2f0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCINetstartScanListEntry")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1029c370; body size 103 bytes.
#line 1 "ENTRY_1029c370"
undefined4 * Recovered_1029c370::FUN_1029c370(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOp")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1029c3f0; body size 103 bytes.
#line 1 "ENTRY_1029c3f0"
undefined4 * Recovered_1029c3f0::FUN_1029c3f0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOp")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1029c470; body size 103 bytes.
#line 1 "ENTRY_1029c470"
undefined4 * Recovered_1029c470::FUN_1029c470(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpNetstartGetScanList")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1029c4f0; body size 103 bytes.
#line 1 "ENTRY_1029c4f0"
undefined4 * Recovered_1029c4f0::FUN_1029c4f0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOp")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1029c570; body size 103 bytes.
#line 1 "ENTRY_1029c570"
undefined4 * Recovered_1029c570::FUN_1029c570(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpNetstartSendRevert")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1029db20; body size 103 bytes.
#line 1 "ENTRY_1029db20"
undefined4 * Recovered_1029db20::FUN_1029db20(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISystemTime")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1029e800; body size 103 bytes.
#line 1 "ENTRY_1029e800"
undefined4 * Recovered_1029e800::FUN_1029e800(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIRecurrence")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 102a1640; body size 103 bytes.
#line 1 "ENTRY_102a1640"
undefined4 * Recovered_102a1640::FUN_102a1640(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIResourceHelper")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 102b8960; body size 103 bytes.
#line 1 "ENTRY_102b8960"
undefined4 * Recovered_102b8960::FUN_102b8960(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 102b89e0; body size 103 bytes.
#line 1 "ENTRY_102b89e0"
undefined4 * Recovered_102b89e0::FUN_102b89e0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEventSink")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 102b8b30; body size 103 bytes.
#line 1 "ENTRY_102b8b30"
undefined4 * Recovered_102b8b30::FUN_102b8b30(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIDirectControlApplication")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 102b8bb0; body size 103 bytes.
#line 1 "ENTRY_102b8bb0"
undefined4 * Recovered_102b8bb0::FUN_102b8bb0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISearchable")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 102b8c30; body size 103 bytes.
#line 1 "ENTRY_102b8c30"
undefined4 * Recovered_102b8c30::FUN_102b8c30(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISearchableCategory")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 102b8cb0; body size 103 bytes.
#line 1 "ENTRY_102b8cb0"
undefined4 * Recovered_102b8cb0::FUN_102b8cb0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 102c0020; body size 103 bytes.
#line 1 "ENTRY_102c0020"
undefined4 * Recovered_102c0020::FUN_102c0020(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISearchParameters")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 102c09e0; body size 103 bytes.
#line 1 "ENTRY_102c09e0"
undefined4 * Recovered_102c09e0::FUN_102c09e0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISearchQuery")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 102c2140; body size 103 bytes.
#line 1 "ENTRY_102c2140"
undefined4 * Recovered_102c2140::FUN_102c2140(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCICertificateChain")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 102c21c0; body size 103 bytes.
#line 1 "ENTRY_102c21c0"
undefined4 * Recovered_102c21c0::FUN_102c21c0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISecurityContext")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 102c9950; body size 103 bytes.
#line 1 "ENTRY_102c9950"
undefined4 * Recovered_102c9950::FUN_102c9950(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEventSource")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 102c99d0; body size 103 bytes.
#line 1 "ENTRY_102c99d0"
undefined4 * Recovered_102c99d0::FUN_102c99d0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIServiceAccountFilter")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 102c9bf0; body size 103 bytes.
#line 1 "ENTRY_102c9bf0"
undefined4 * Recovered_102c9bf0::FUN_102c9bf0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIServiceAccountFilter")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 102d1830; body size 103 bytes.
#line 1 "ENTRY_102d1830"
undefined4 * Recovered_102d1830::FUN_102d1830(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIServiceDescriptorFilter")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 102d7230; body size 103 bytes.
#line 1 "ENTRY_102d7230"
undefined4 * Recovered_102d7230::FUN_102d7230(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEventSink")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 102d72b0; body size 103 bytes.
#line 1 "ENTRY_102d72b0"
undefined4 * Recovered_102d72b0::FUN_102d72b0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISetting")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 102db880; body size 103 bytes.
#line 1 "ENTRY_102db880"
undefined4 * Recovered_102db880::FUN_102db880(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIStringTemplate")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 102de7c0; body size 103 bytes.
#line 1 "ENTRY_102de7c0"
undefined4 * Recovered_102de7c0::FUN_102de7c0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISystem")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 102e4cd0; body size 103 bytes.
#line 1 "ENTRY_102e4cd0"
undefined4 * Recovered_102e4cd0::FUN_102e4cd0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIWizardComponentBuilder")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 102fe600; body size 103 bytes.
#line 1 "ENTRY_102fe600"
undefined4 * Recovered_102fe600::FUN_102fe600(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIBrowseManager")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 102fe750; body size 103 bytes.
#line 1 "ENTRY_102fe750"
undefined4 * Recovered_102fe750::FUN_102fe750(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIDirectControlAppManager")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 102fe7d0; body size 103 bytes.
#line 1 "ENTRY_102fe7d0"
undefined4 * Recovered_102fe7d0::FUN_102fe7d0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIServiceAppInteropResponseDelegate")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 102fe850; body size 103 bytes.
#line 1 "ENTRY_102fe850"
undefined4 * Recovered_102fe850::FUN_102fe850(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIBrowseListPresentationMap")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10302f10; body size 103 bytes.
#line 1 "ENTRY_10302f10"
undefined4 * Recovered_10302f10::FUN_10302f10(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCICountry")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 103296b0; body size 103 bytes.
#line 1 "ENTRY_103296b0"
undefined4 * Recovered_103296b0::FUN_103296b0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpConnectionManagerGetProtocolInfo")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10329730; body size 103 bytes.
#line 1 "ENTRY_10329730"
undefined4 * Recovered_10329730::FUN_10329730(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpDevicePropertiesGetButtonLockState")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 103297b0; body size 103 bytes.
#line 1 "ENTRY_103297b0"
undefined4 * Recovered_103297b0::FUN_103297b0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpDevicePropertiesGetLEDState")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10329830; body size 103 bytes.
#line 1 "ENTRY_10329830"
undefined4 * Recovered_10329830::FUN_10329830(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpDevicePropertiesSetButtonLockState")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 103298b0; body size 103 bytes.
#line 1 "ENTRY_103298b0"
undefined4 * Recovered_103298b0::FUN_103298b0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpDevicePropertiesSetLEDState")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10329df0; body size 103 bytes.
#line 1 "ENTRY_10329df0"
undefined4 * Recovered_10329df0::FUN_10329df0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpConnectionManagerGetProtocolInfo")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10329e70; body size 103 bytes.
#line 1 "ENTRY_10329e70"
undefined4 * Recovered_10329e70::FUN_10329e70(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpDevicePropertiesGetButtonLockState")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10329ef0; body size 103 bytes.
#line 1 "ENTRY_10329ef0"
undefined4 * Recovered_10329ef0::FUN_10329ef0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpDevicePropertiesGetLEDState")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10329f70; body size 103 bytes.
#line 1 "ENTRY_10329f70"
undefined4 * Recovered_10329f70::FUN_10329f70(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpDevicePropertiesSetButtonLockState")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10329ff0; body size 103 bytes.
#line 1 "ENTRY_10329ff0"
undefined4 * Recovered_10329ff0::FUN_10329ff0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpDevicePropertiesSetLEDState")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1032a070; body size 103 bytes.
#line 1 "ENTRY_1032a070"
undefined4 * Recovered_1032a070::FUN_1032a070(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIVersionRange")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1034ebe0; body size 103 bytes.
#line 1 "ENTRY_1034ebe0"
undefined4 * Recovered_1034ebe0::FUN_1034ebe0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10393c20; body size 103 bytes.
#line 1 "ENTRY_10393c20"
undefined4 * Recovered_10393c20::FUN_10393c20(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpZoneGroupTopologyGetZoneGroupState")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10393ca0; body size 103 bytes.
#line 1 "ENTRY_10393ca0"
undefined4 * Recovered_10393ca0::FUN_10393ca0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEventSink")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10393d20; body size 103 bytes.
#line 1 "ENTRY_10393d20"
undefined4 * Recovered_10393d20::FUN_10393d20(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEventSink")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10393da0; body size 103 bytes.
#line 1 "ENTRY_10393da0"
undefined4 * Recovered_10393da0::FUN_10393da0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIBrowseListPresentationMap")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10393e20; body size 103 bytes.
#line 1 "ENTRY_10393e20"
undefined4 * Recovered_10393e20::FUN_10393e20(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEventSink")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10393ea0; body size 103 bytes.
#line 1 "ENTRY_10393ea0"
undefined4 * Recovered_10393ea0::FUN_10393ea0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIBrowseListPresentationMap")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10393f20; body size 103 bytes.
#line 1 "ENTRY_10393f20"
undefined4 * Recovered_10393f20::FUN_10393f20(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEventSink")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10394170; body size 103 bytes.
#line 1 "ENTRY_10394170"
undefined4 * Recovered_10394170::FUN_10394170(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEventSink")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 103941f0; body size 103 bytes.
#line 1 "ENTRY_103941f0"
undefined4 * Recovered_103941f0::FUN_103941f0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEventSink")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10394270; body size 103 bytes.
#line 1 "ENTRY_10394270"
undefined4 * Recovered_10394270::FUN_10394270(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEventSink")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 103942f0; body size 103 bytes.
#line 1 "ENTRY_103942f0"
undefined4 * Recovered_103942f0::FUN_103942f0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpZoneGroupTopologyGetZoneGroupState")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10394370; body size 103 bytes.
#line 1 "ENTRY_10394370"
undefined4 * Recovered_10394370::FUN_10394370(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEventSink")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 103a3530; body size 103 bytes.
#line 1 "ENTRY_103a3530"
undefined4 * Recovered_103a3530::FUN_103a3530(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpAddServiceAccount")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 103a35b0; body size 103 bytes.
#line 1 "ENTRY_103a35b0"
undefined4 * Recovered_103a35b0::FUN_103a35b0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpAddServiceAccount")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 103a3630; body size 103 bytes.
#line 1 "ENTRY_103a3630"
undefined4 * Recovered_103a3630::FUN_103a3630(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpAddServiceAccount")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 103a36b0; body size 103 bytes.
#line 1 "ENTRY_103a36b0"
undefined4 * Recovered_103a36b0::FUN_103a36b0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpAddServiceAccount")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 103a39e0; body size 103 bytes.
#line 1 "ENTRY_103a39e0"
undefined4 * Recovered_103a39e0::FUN_103a39e0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIServiceDescriptorInternals")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 103bcf70; body size 103 bytes.
#line 1 "ENTRY_103bcf70"
undefined4 * Recovered_103bcf70::FUN_103bcf70(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIBrowseDataSource")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 103bd030; body size 103 bytes.
#line 1 "ENTRY_103bd030"
undefined4 * Recovered_103bd030::FUN_103bd030(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIBrowseStackManager")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 103bd0b0; body size 103 bytes.
#line 1 "ENTRY_103bd0b0"
undefined4 * Recovered_103bd0b0::FUN_103bd0b0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEventSink")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 103bd130; body size 103 bytes.
#line 1 "ENTRY_103bd130"
undefined4 * Recovered_103bd130::FUN_103bd130(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIBrowseDataSource")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 103bd1f0; body size 103 bytes.
#line 1 "ENTRY_103bd1f0"
undefined4 * Recovered_103bd1f0::FUN_103bd1f0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 103bd270; body size 103 bytes.
#line 1 "ENTRY_103bd270"
undefined4 * Recovered_103bd270::FUN_103bd270(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIBrowseDataSource")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 103bf250; body size 103 bytes.
#line 1 "ENTRY_103bf250"
undefined4 * Recovered_103bf250::FUN_103bf250(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEnumerator")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 103ca9d0; body size 103 bytes.
#line 1 "ENTRY_103ca9d0"
undefined4 * Recovered_103ca9d0::FUN_103ca9d0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOp")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 103caa50; body size 103 bytes.
#line 1 "ENTRY_103caa50"
undefined4 * Recovered_103caa50::FUN_103caa50(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOp")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 103caad0; body size 103 bytes.
#line 1 "ENTRY_103caad0"
undefined4 * Recovered_103caad0::FUN_103caad0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEventSink")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 103cab50; body size 103 bytes.
#line 1 "ENTRY_103cab50"
undefined4 * Recovered_103cab50::FUN_103cab50(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCITokenManager")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 103d5e70; body size 103 bytes.
#line 1 "ENTRY_103d5e70"
undefined4 * Recovered_103d5e70::FUN_103d5e70(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIArray")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 103f1f80; body size 103 bytes.
#line 1 "ENTRY_103f1f80"
undefined4 * Recovered_103f1f80::FUN_103f1f80(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOp")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 103f2000; body size 103 bytes.
#line 1 "ENTRY_103f2000"
undefined4 * Recovered_103f2000::FUN_103f2000(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOp")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 103f2080; body size 103 bytes.
#line 1 "ENTRY_103f2080"
undefined4 * Recovered_103f2080::FUN_103f2080(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOp")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 103f2100; body size 103 bytes.
#line 1 "ENTRY_103f2100"
undefined4 * Recovered_103f2100::FUN_103f2100(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOp")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 103f2180; body size 103 bytes.
#line 1 "ENTRY_103f2180"
undefined4 * Recovered_103f2180::FUN_103f2180(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOp")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 103f2200; body size 103 bytes.
#line 1 "ENTRY_103f2200"
undefined4 * Recovered_103f2200::FUN_103f2200(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOp")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 103f2280; body size 103 bytes.
#line 1 "ENTRY_103f2280"
undefined4 * Recovered_103f2280::FUN_103f2280(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOp")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 103f2300; body size 103 bytes.
#line 1 "ENTRY_103f2300"
undefined4 * Recovered_103f2300::FUN_103f2300(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOp")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 103f2380; body size 103 bytes.
#line 1 "ENTRY_103f2380"
undefined4 * Recovered_103f2380::FUN_103f2380(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOp")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 103f2400; body size 103 bytes.
#line 1 "ENTRY_103f2400"
undefined4 * Recovered_103f2400::FUN_103f2400(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOp")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 103f2480; body size 103 bytes.
#line 1 "ENTRY_103f2480"
undefined4 * Recovered_103f2480::FUN_103f2480(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOp")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 103f2500; body size 103 bytes.
#line 1 "ENTRY_103f2500"
undefined4 * Recovered_103f2500::FUN_103f2500(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOp")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 103f2580; body size 103 bytes.
#line 1 "ENTRY_103f2580"
undefined4 * Recovered_103f2580::FUN_103f2580(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOp")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 103f2600; body size 103 bytes.
#line 1 "ENTRY_103f2600"
undefined4 * Recovered_103f2600::FUN_103f2600(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOp")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 103f2680; body size 103 bytes.
#line 1 "ENTRY_103f2680"
undefined4 * Recovered_103f2680::FUN_103f2680(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOp")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 103f2700; body size 103 bytes.
#line 1 "ENTRY_103f2700"
undefined4 * Recovered_103f2700::FUN_103f2700(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOp")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 103f2780; body size 103 bytes.
#line 1 "ENTRY_103f2780"
undefined4 * Recovered_103f2780::FUN_103f2780(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpSecRegRegisterPlayer")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 103f2800; body size 103 bytes.
#line 1 "ENTRY_103f2800"
undefined4 * Recovered_103f2800::FUN_103f2800(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpSecRegRegisterPlayer")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10401ad0; body size 103 bytes.
#line 1 "ENTRY_10401ad0"
undefined4 * Recovered_10401ad0::FUN_10401ad0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEventSink")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10401b50; body size 103 bytes.
#line 1 "ENTRY_10401b50"
undefined4 * Recovered_10401b50::FUN_10401b50(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEventSink")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10401bd0; body size 103 bytes.
#line 1 "ENTRY_10401bd0"
undefined4 * Recovered_10401bd0::FUN_10401bd0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIUserAccount")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 104043f0; body size 103 bytes.
#line 1 "ENTRY_104043f0"
undefined4 * Recovered_104043f0::FUN_104043f0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISecureStore")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1040cc60; body size 103 bytes.
#line 1 "ENTRY_1040cc60"
undefined4 * Recovered_1040cc60::FUN_1040cc60(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10414e10; body size 103 bytes.
#line 1 "ENTRY_10414e10"
undefined4 * Recovered_10414e10::FUN_10414e10(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEventSink")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10414e90; body size 103 bytes.
#line 1 "ENTRY_10414e90"
undefined4 * Recovered_10414e90::FUN_10414e90(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIFeatureManager")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1041ccb0; body size 103 bytes.
#line 1 "ENTRY_1041ccb0"
undefined4 * Recovered_1041ccb0::FUN_1041ccb0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1041cd30; body size 103 bytes.
#line 1 "ENTRY_1041cd30"
undefined4 * Recovered_1041cd30::FUN_1041cd30(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISettingsMenuItem")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 104238d0; body size 103 bytes.
#line 1 "ENTRY_104238d0"
undefined4 * Recovered_104238d0::FUN_104238d0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISettingsMenu")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10423950; body size 103 bytes.
#line 1 "ENTRY_10423950"
undefined4 * Recovered_10423950::FUN_10423950(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISettingsMenu")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10424ef0; body size 103 bytes.
#line 1 "ENTRY_10424ef0"
undefined4 * Recovered_10424ef0::FUN_10424ef0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISettingsMenu")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10430440; body size 103 bytes.
#line 1 "ENTRY_10430440"
undefined4 * Recovered_10430440::FUN_10430440(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISettingsMenu")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 104304d0; body size 103 bytes.
#line 1 "ENTRY_104304d0"
undefined4 * Recovered_104304d0::FUN_104304d0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISettingsMenu")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10430560; body size 103 bytes.
#line 1 "ENTRY_10430560"
undefined4 * Recovered_10430560::FUN_10430560(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISettingsMenu")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 104305f0; body size 103 bytes.
#line 1 "ENTRY_104305f0"
undefined4 * Recovered_104305f0::FUN_104305f0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISettingsMenu")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10430680; body size 103 bytes.
#line 1 "ENTRY_10430680"
undefined4 * Recovered_10430680::FUN_10430680(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISettingsMenu")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10430710; body size 103 bytes.
#line 1 "ENTRY_10430710"
undefined4 * Recovered_10430710::FUN_10430710(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISettingsMenu")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10438580; body size 103 bytes.
#line 1 "ENTRY_10438580"
undefined4 * Recovered_10438580::FUN_10438580(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEventSink")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10438600; body size 103 bytes.
#line 1 "ENTRY_10438600"
undefined4 * Recovered_10438600::FUN_10438600(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1043c920; body size 103 bytes.
#line 1 "ENTRY_1043c920"
undefined4 * Recovered_1043c920::FUN_1043c920(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpCB")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1043c9a0; body size 103 bytes.
#line 1 "ENTRY_1043c9a0"
undefined4 * Recovered_1043c9a0::FUN_1043c9a0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISettingsMenu")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1043e380; body size 103 bytes.
#line 1 "ENTRY_1043e380"
undefined4 * Recovered_1043e380::FUN_1043e380(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISettingsMenu")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1043f690; body size 103 bytes.
#line 1 "ENTRY_1043f690"
undefined4 * Recovered_1043f690::FUN_1043f690(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISettingsMenu")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10440b30; body size 103 bytes.
#line 1 "ENTRY_10440b30"
undefined4 * Recovered_10440b30::FUN_10440b30(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISettingsMenu")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10442180; body size 103 bytes.
#line 1 "ENTRY_10442180"
undefined4 * Recovered_10442180::FUN_10442180(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISettingsMenu")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1044a010; body size 103 bytes.
#line 1 "ENTRY_1044a010"
undefined4 * Recovered_1044a010::FUN_1044a010(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISettingsMenu")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1044e920; body size 103 bytes.
#line 1 "ENTRY_1044e920"
undefined4 * Recovered_1044e920::FUN_1044e920(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEventSink")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1044e9a0; body size 103 bytes.
#line 1 "ENTRY_1044e9a0"
undefined4 * Recovered_1044e9a0::FUN_1044e9a0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISettingsMenu")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10451510; body size 103 bytes.
#line 1 "ENTRY_10451510"
undefined4 * Recovered_10451510::FUN_10451510(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISettingsMenu")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10451590; body size 103 bytes.
#line 1 "ENTRY_10451590"
undefined4 * Recovered_10451590::FUN_10451590(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISettingsMenu")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 104536f0; body size 103 bytes.
#line 1 "ENTRY_104536f0"
undefined4 * Recovered_104536f0::FUN_104536f0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISettingsMenu")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10453e60; body size 103 bytes.
#line 1 "ENTRY_10453e60"
undefined4 * Recovered_10453e60::FUN_10453e60(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISettingsMenu")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10455200; body size 103 bytes.
#line 1 "ENTRY_10455200"
undefined4 * Recovered_10455200::FUN_10455200(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISettingsMenu")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1045b570; body size 103 bytes.
#line 1 "ENTRY_1045b570"
undefined4 * Recovered_1045b570::FUN_1045b570(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIAction")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1045b5f0; body size 103 bytes.
#line 1 "ENTRY_1045b5f0"
undefined4 * Recovered_1045b5f0::FUN_1045b5f0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISettingsMenu")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1045d480; body size 103 bytes.
#line 1 "ENTRY_1045d480"
undefined4 * Recovered_1045d480::FUN_1045d480(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISettingsMenu")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1045ed20; body size 103 bytes.
#line 1 "ENTRY_1045ed20"
undefined4 * Recovered_1045ed20::FUN_1045ed20(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISettingsMenu")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10460e70; body size 103 bytes.
#line 1 "ENTRY_10460e70"
undefined4 * Recovered_10460e70::FUN_10460e70(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISettingsMenu")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10464f20; body size 103 bytes.
#line 1 "ENTRY_10464f20"
undefined4 * Recovered_10464f20::FUN_10464f20(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIAction")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10464fb0; body size 103 bytes.
#line 1 "ENTRY_10464fb0"
undefined4 * Recovered_10464fb0::FUN_10464fb0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISettingsMenu")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10465da0; body size 103 bytes.
#line 1 "ENTRY_10465da0"
undefined4 * Recovered_10465da0::FUN_10465da0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISettingsMenu")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10469100; body size 103 bytes.
#line 1 "ENTRY_10469100"
undefined4 * Recovered_10469100::FUN_10469100(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISettingsMenu")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10469190; body size 103 bytes.
#line 1 "ENTRY_10469190"
undefined4 * Recovered_10469190::FUN_10469190(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISettingsMenu")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1046b800; body size 103 bytes.
#line 1 "ENTRY_1046b800"
undefined4 * Recovered_1046b800::FUN_1046b800(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISettingsMenu")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1046b890; body size 103 bytes.
#line 1 "ENTRY_1046b890"
undefined4 * Recovered_1046b890::FUN_1046b890(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISettingsMenu")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1046d9d0; body size 103 bytes.
#line 1 "ENTRY_1046d9d0"
undefined4 * Recovered_1046d9d0::FUN_1046d9d0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISettingsMenu")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1046fa80; body size 103 bytes.
#line 1 "ENTRY_1046fa80"
undefined4 * Recovered_1046fa80::FUN_1046fa80(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISettingsMenu")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 104715e0; body size 103 bytes.
#line 1 "ENTRY_104715e0"
undefined4 * Recovered_104715e0::FUN_104715e0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISettingsMenu")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 104743a0; body size 103 bytes.
#line 1 "ENTRY_104743a0"
undefined4 * Recovered_104743a0::FUN_104743a0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISettingsMenu")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 104789a0; body size 103 bytes.
#line 1 "ENTRY_104789a0"
undefined4 * Recovered_104789a0::FUN_104789a0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISettingsMenu")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1047d530; body size 103 bytes.
#line 1 "ENTRY_1047d530"
undefined4 * Recovered_1047d530::FUN_1047d530(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISettingsMenu")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 104966e0; body size 103 bytes.
#line 1 "ENTRY_104966e0"
undefined4 * Recovered_104966e0::FUN_104966e0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISettingsMenu")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1049cc70; body size 103 bytes.
#line 1 "ENTRY_1049cc70"
undefined4 * Recovered_1049cc70::FUN_1049cc70(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISettingsMenu")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1049ccf0; body size 103 bytes.
#line 1 "ENTRY_1049ccf0"
undefined4 * Recovered_1049ccf0::FUN_1049ccf0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISettingsMenu")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1049cd80; body size 103 bytes.
#line 1 "ENTRY_1049cd80"
undefined4 * Recovered_1049cd80::FUN_1049cd80(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISettingsMenu")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 104a7160; body size 103 bytes.
#line 1 "ENTRY_104a7160"
undefined4 * Recovered_104a7160::FUN_104a7160(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISettingsMenu")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 104a71f0; body size 103 bytes.
#line 1 "ENTRY_104a71f0"
undefined4 * Recovered_104a71f0::FUN_104a71f0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISettingsMenu")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 104a7280; body size 103 bytes.
#line 1 "ENTRY_104a7280"
undefined4 * Recovered_104a7280::FUN_104a7280(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISettingsMenu")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 104a7310; body size 103 bytes.
#line 1 "ENTRY_104a7310"
undefined4 * Recovered_104a7310::FUN_104a7310(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISettingsMenu")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 104a73a0; body size 103 bytes.
#line 1 "ENTRY_104a73a0"
undefined4 * Recovered_104a73a0::FUN_104a73a0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISettingsMenu")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 104a7430; body size 103 bytes.
#line 1 "ENTRY_104a7430"
undefined4 * Recovered_104a7430::FUN_104a7430(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISettingsMenu")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 104a9100; body size 103 bytes.
#line 1 "ENTRY_104a9100"
undefined4 * Recovered_104a9100::FUN_104a9100(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISettingsMenu")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 104aa000; body size 103 bytes.
#line 1 "ENTRY_104aa000"
undefined4 * Recovered_104aa000::FUN_104aa000(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISettingsMenu")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 104aaf00; body size 103 bytes.
#line 1 "ENTRY_104aaf00"
undefined4 * Recovered_104aaf00::FUN_104aaf00(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISettingsMenu")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 104b01d0; body size 103 bytes.
#line 1 "ENTRY_104b01d0"
undefined4 * Recovered_104b01d0::FUN_104b01d0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISettingsMenu")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 104b28b0; body size 103 bytes.
#line 1 "ENTRY_104b28b0"
undefined4 * Recovered_104b28b0::FUN_104b28b0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISettingsMenu")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 104b3a20; body size 103 bytes.
#line 1 "ENTRY_104b3a20"
undefined4 * Recovered_104b3a20::FUN_104b3a20(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISettingsMenu")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 104b4920; body size 103 bytes.
#line 1 "ENTRY_104b4920"
undefined4 * Recovered_104b4920::FUN_104b4920(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISettingsMenu")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 104ba490; body size 103 bytes.
#line 1 "ENTRY_104ba490"
undefined4 * Recovered_104ba490::FUN_104ba490(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISettingsMenu")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 104bcdd0; body size 103 bytes.
#line 1 "ENTRY_104bcdd0"
undefined4 * Recovered_104bcdd0::FUN_104bcdd0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISettingsMenu")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 104bce60; body size 103 bytes.
#line 1 "ENTRY_104bce60"
undefined4 * Recovered_104bce60::FUN_104bce60(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISettingsMenu")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 104c0b70; body size 103 bytes.
#line 1 "ENTRY_104c0b70"
undefined4 * Recovered_104c0b70::FUN_104c0b70(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISettingsMenu")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 104c8b70; body size 103 bytes.
#line 1 "ENTRY_104c8b70"
undefined4 * Recovered_104c8b70::FUN_104c8b70(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISettingsMenu")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 104c8c00; body size 103 bytes.
#line 1 "ENTRY_104c8c00"
undefined4 * Recovered_104c8c00::FUN_104c8c00(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISettingsMenu")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 104cb060; body size 103 bytes.
#line 1 "ENTRY_104cb060"
undefined4 * Recovered_104cb060::FUN_104cb060(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISettingsMenu")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 104d4470; body size 103 bytes.
#line 1 "ENTRY_104d4470"
undefined4 * Recovered_104d4470::FUN_104d4470(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 104d44f0; body size 103 bytes.
#line 1 "ENTRY_104d44f0"
undefined4 * Recovered_104d44f0::FUN_104d44f0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIAction")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 104d4570; body size 103 bytes.
#line 1 "ENTRY_104d4570"
undefined4 * Recovered_104d4570::FUN_104d4570(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIAction")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 104d6440; body size 103 bytes.
#line 1 "ENTRY_104d6440"
undefined4 * Recovered_104d6440::FUN_104d6440(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIBrowseGroupsInfo")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 104d9d90; body size 103 bytes.
#line 1 "ENTRY_104d9d90"
undefined4 * Recovered_104d9d90::FUN_104d9d90(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEventSink")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 104dd660; body size 103 bytes.
#line 1 "ENTRY_104dd660"
undefined4 * Recovered_104dd660::FUN_104dd660(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 104dd6e0; body size 103 bytes.
#line 1 "ENTRY_104dd6e0"
undefined4 * Recovered_104dd6e0::FUN_104dd6e0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEventSink")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 104dd760; body size 103 bytes.
#line 1 "ENTRY_104dd760"
undefined4 * Recovered_104dd760::FUN_104dd760(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISelectionManager")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 104ecb10; body size 103 bytes.
#line 1 "ENTRY_104ecb10"
undefined4 * Recovered_104ecb10::FUN_104ecb10(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 104ecb90; body size 103 bytes.
#line 1 "ENTRY_104ecb90"
undefined4 * Recovered_104ecb90::FUN_104ecb90(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 104ff7c0; body size 103 bytes.
#line 1 "ENTRY_104ff7c0"
undefined4 * Recovered_104ff7c0::FUN_104ff7c0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIUrlSessionCallback")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1050aea0; body size 103 bytes.
#line 1 "ENTRY_1050aea0"
undefined4 * Recovered_1050aea0::FUN_1050aea0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIInfoViewHeaderDataSource")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1050b3a0; body size 103 bytes.
#line 1 "ENTRY_1050b3a0"
undefined4 * Recovered_1050b3a0::FUN_1050b3a0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIInfoViewHeaderItem")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10519b40; body size 103 bytes.
#line 1 "ENTRY_10519b40"
undefined4 * Recovered_10519b40::FUN_10519b40(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10519bc0; body size 103 bytes.
#line 1 "ENTRY_10519bc0"
undefined4 * Recovered_10519bc0::FUN_10519bc0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIInfoViewHeaderDataSource")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1051a0f0; body size 103 bytes.
#line 1 "ENTRY_1051a0f0"
undefined4 * Recovered_1051a0f0::FUN_1051a0f0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIBrowseItem")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10545310; body size 103 bytes.
#line 1 "ENTRY_10545310"
undefined4 * Recovered_10545310::FUN_10545310(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10545640; body size 103 bytes.
#line 1 "ENTRY_10545640"
undefined4 * Recovered_10545640::FUN_10545640(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEventSink")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 105456c0; body size 103 bytes.
#line 1 "ENTRY_105456c0"
undefined4 * Recovered_105456c0::FUN_105456c0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIWizard")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10556c90; body size 103 bytes.
#line 1 "ENTRY_10556c90"
undefined4 * Recovered_10556c90::FUN_10556c90(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOp")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10556d10; body size 103 bytes.
#line 1 "ENTRY_10556d10"
undefined4 * Recovered_10556d10::FUN_10556d10(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10556d90; body size 103 bytes.
#line 1 "ENTRY_10556d90"
undefined4 * Recovered_10556d90::FUN_10556d90(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1055fc90; body size 103 bytes.
#line 1 "ENTRY_1055fc90"
undefined4 * Recovered_1055fc90::FUN_1055fc90(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIBrowseItem")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10578350; body size 103 bytes.
#line 1 "ENTRY_10578350"
undefined4 * Recovered_10578350::FUN_10578350(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOp")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10585900; body size 103 bytes.
#line 1 "ENTRY_10585900"
undefined4 * Recovered_10585900::FUN_10585900(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIAction")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 105922f0; body size 103 bytes.
#line 1 "ENTRY_105922f0"
undefined4 * Recovered_105922f0::FUN_105922f0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpAddFavorites")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10592370; body size 103 bytes.
#line 1 "ENTRY_10592370"
undefined4 * Recovered_10592370::FUN_10592370(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIBrowseDataSource")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10592410; body size 103 bytes.
#line 1 "ENTRY_10592410"
undefined4 * Recovered_10592410::FUN_10592410(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpAddFavorites")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10598f50; body size 103 bytes.
#line 1 "ENTRY_10598f50"
undefined4 * Recovered_10598f50::FUN_10598f50(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIUrlSessionCallback")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 105b5090; body size 103 bytes.
#line 1 "ENTRY_105b5090"
undefined4 * Recovered_105b5090::FUN_105b5090(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEventSink")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 105b5110; body size 103 bytes.
#line 1 "ENTRY_105b5110"
undefined4 * Recovered_105b5110::FUN_105b5110(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIHouseholdManager")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 105c0540; body size 103 bytes.
#line 1 "ENTRY_105c0540"
undefined4 * Recovered_105c0540::FUN_105c0540(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 105c05c0; body size 103 bytes.
#line 1 "ENTRY_105c05c0"
undefined4 * Recovered_105c05c0::FUN_105c05c0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOp")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 105e6890; body size 103 bytes.
#line 1 "ENTRY_105e6890"
undefined4 * Recovered_105e6890::FUN_105e6890(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 105e6910; body size 103 bytes.
#line 1 "ENTRY_105e6910"
undefined4 * Recovered_105e6910::FUN_105e6910(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpRenderingControlSetRoomCalibrationStatus")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 105e6990; body size 103 bytes.
#line 1 "ENTRY_105e6990"
undefined4 * Recovered_105e6990::FUN_105e6990(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIAction")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 105e6a10; body size 103 bytes.
#line 1 "ENTRY_105e6a10"
undefined4 * Recovered_105e6a10::FUN_105e6a10(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 105e6a90; body size 103 bytes.
#line 1 "ENTRY_105e6a90"
undefined4 * Recovered_105e6a90::FUN_105e6a90(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpRenderingControlSetRoomCalibrationStatus")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 105e6b10; body size 103 bytes.
#line 1 "ENTRY_105e6b10"
undefined4 * Recovered_105e6b10::FUN_105e6b10(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIAction")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 105e6b90; body size 103 bytes.
#line 1 "ENTRY_105e6b90"
undefined4 * Recovered_105e6b90::FUN_105e6b90(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIResource")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1061dcf0; body size 103 bytes.
#line 1 "ENTRY_1061dcf0"
undefined4 * Recovered_1061dcf0::FUN_1061dcf0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIUrlSessionCallback")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1067efd0; body size 103 bytes.
#line 1 "ENTRY_1067efd0"
undefined4 * Recovered_1067efd0::FUN_1067efd0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOp")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10680550; body size 103 bytes.
#line 1 "ENTRY_10680550"
undefined4 * Recovered_10680550::FUN_10680550(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIUrlSessionCallback")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10687870; body size 103 bytes.
#line 1 "ENTRY_10687870"
undefined4 * Recovered_10687870::FUN_10687870(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIUrlSessionCallback")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 106878f0; body size 103 bytes.
#line 1 "ENTRY_106878f0"
undefined4 * Recovered_106878f0::FUN_106878f0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIUrlRequest")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1068b530; body size 103 bytes.
#line 1 "ENTRY_1068b530"
undefined4 * Recovered_1068b530::FUN_1068b530(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOp")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1068b720; body size 103 bytes.
#line 1 "ENTRY_1068b720"
undefined4 * Recovered_1068b720::FUN_1068b720(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIShare")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1068b7a0; body size 103 bytes.
#line 1 "ENTRY_1068b7a0"
undefined4 * Recovered_1068b7a0::FUN_1068b7a0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIShareManager")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10696b60; body size 103 bytes.
#line 1 "ENTRY_10696b60"
undefined4 * Recovered_10696b60::FUN_10696b60(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 106a00d0; body size 103 bytes.
#line 1 "ENTRY_106a00d0"
undefined4 * Recovered_106a00d0::FUN_106a00d0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEventSink")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 106a0150; body size 103 bytes.
#line 1 "ENTRY_106a0150"
undefined4 * Recovered_106a0150::FUN_106a0150(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEventSink")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 106a01d0; body size 103 bytes.
#line 1 "ENTRY_106a01d0"
undefined4 * Recovered_106a01d0::FUN_106a01d0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEventSink")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 106a0250; body size 103 bytes.
#line 1 "ENTRY_106a0250"
undefined4 * Recovered_106a0250::FUN_106a0250(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEventSink")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 106a02d0; body size 103 bytes.
#line 1 "ENTRY_106a02d0"
undefined4 * Recovered_106a02d0::FUN_106a02d0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 106a0350; body size 103 bytes.
#line 1 "ENTRY_106a0350"
undefined4 * Recovered_106a0350::FUN_106a0350(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 106a1df0; body size 103 bytes.
#line 1 "ENTRY_106a1df0"
undefined4 * Recovered_106a1df0::FUN_106a1df0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIMusicServiceMenuItem")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 106cc8e0; body size 103 bytes.
#line 1 "ENTRY_106cc8e0"
undefined4 * Recovered_106cc8e0::FUN_106cc8e0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 106d0d60; body size 103 bytes.
#line 1 "ENTRY_106d0d60"
undefined4 * Recovered_106d0d60::FUN_106d0d60(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 106d6d60; body size 103 bytes.
#line 1 "ENTRY_106d6d60"
undefined4 * Recovered_106d6d60::FUN_106d6d60(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10708510; body size 103 bytes.
#line 1 "ENTRY_10708510"
undefined4 * Recovered_10708510::FUN_10708510(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOp")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 107cb7f0; body size 103 bytes.
#line 1 "ENTRY_107cb7f0"
undefined4 * Recovered_107cb7f0::FUN_107cb7f0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10a08110; body size 103 bytes.
#line 1 "ENTRY_10a08110"
undefined4 * Recovered_10a08110::FUN_10a08110(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpHTControlCommitLearnedIRCodes")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10a08190; body size 103 bytes.
#line 1 "ENTRY_10a08190"
undefined4 * Recovered_10a08190::FUN_10a08190(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpHTControlIdentifyIRRemote")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10a08210; body size 103 bytes.
#line 1 "ENTRY_10a08210"
undefined4 * Recovered_10a08210::FUN_10a08210(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpHTControlIsRemoteConfigured")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10a08290; body size 103 bytes.
#line 1 "ENTRY_10a08290"
undefined4 * Recovered_10a08290::FUN_10a08290(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpHTControlLearnIRCode")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10a08310; body size 103 bytes.
#line 1 "ENTRY_10a08310"
undefined4 * Recovered_10a08310::FUN_10a08310(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpHTControlCommitLearnedIRCodes")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10a08390; body size 103 bytes.
#line 1 "ENTRY_10a08390"
undefined4 * Recovered_10a08390::FUN_10a08390(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpHTControlIdentifyIRRemote")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10a08410; body size 103 bytes.
#line 1 "ENTRY_10a08410"
undefined4 * Recovered_10a08410::FUN_10a08410(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpHTControlIsRemoteConfigured")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10a08490; body size 103 bytes.
#line 1 "ENTRY_10a08490"
undefined4 * Recovered_10a08490::FUN_10a08490(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpHTControlLearnIRCode")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10a7cb70; body size 103 bytes.
#line 1 "ENTRY_10a7cb70"
undefined4 * Recovered_10a7cb70::FUN_10a7cb70(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10b721d0; body size 103 bytes.
#line 1 "ENTRY_10b721d0"
undefined4 * Recovered_10b721d0::FUN_10b721d0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpAVTransportEndDirectControlSession")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10b72250; body size 103 bytes.
#line 1 "ENTRY_10b72250"
undefined4 * Recovered_10b72250::FUN_10b72250(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpAVTransportEndDirectControlSession")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10b7aaa0; body size 103 bytes.
#line 1 "ENTRY_10b7aaa0"
undefined4 * Recovered_10b7aaa0::FUN_10b7aaa0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIUrlSessionCallback")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10b7ab20; body size 103 bytes.
#line 1 "ENTRY_10b7ab20"
undefined4 * Recovered_10b7ab20::FUN_10b7ab20(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIAction")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10b82e70; body size 103 bytes.
#line 1 "ENTRY_10b82e70"
undefined4 * Recovered_10b82e70::FUN_10b82e70(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIBrowseService")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10b82ef0; body size 103 bytes.
#line 1 "ENTRY_10b82ef0"
undefined4 * Recovered_10b82ef0::FUN_10b82ef0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIScrobblingService")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10b82f70; body size 103 bytes.
#line 1 "ENTRY_10b82f70"
undefined4 * Recovered_10b82f70::FUN_10b82f70(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISimpleMessagingService")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10b83350; body size 103 bytes.
#line 1 "ENTRY_10b83350"
undefined4 * Recovered_10b83350::FUN_10b83350(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpReplaceAccount")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10b83500; body size 103 bytes.
#line 1 "ENTRY_10b83500"
undefined4 * Recovered_10b83500::FUN_10b83500(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpReplaceAccount")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10b8d5b0; body size 103 bytes.
#line 1 "ENTRY_10b8d5b0"
undefined4 * Recovered_10b8d5b0::FUN_10b8d5b0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpDeviceDelete")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10b8d630; body size 103 bytes.
#line 1 "ENTRY_10b8d630"
undefined4 * Recovered_10b8d630::FUN_10b8d630(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpDeviceGet")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10b8d6b0; body size 103 bytes.
#line 1 "ENTRY_10b8d6b0"
undefined4 * Recovered_10b8d6b0::FUN_10b8d6b0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpDevicePost")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10b8d730; body size 103 bytes.
#line 1 "ENTRY_10b8d730"
undefined4 * Recovered_10b8d730::FUN_10b8d730(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpDevicePut")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10b8d7b0; body size 103 bytes.
#line 1 "ENTRY_10b8d7b0"
undefined4 * Recovered_10b8d7b0::FUN_10b8d7b0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpDeviceGet")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10b94ef0; body size 103 bytes.
#line 1 "ENTRY_10b94ef0"
undefined4 * Recovered_10b94ef0::FUN_10b94ef0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEventSink")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10b94f70; body size 103 bytes.
#line 1 "ENTRY_10b94f70"
undefined4 * Recovered_10b94f70::FUN_10b94f70(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10b9f670; body size 103 bytes.
#line 1 "ENTRY_10b9f670"
undefined4 * Recovered_10b9f670::FUN_10b9f670(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIArtworkCache")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10b9f6f0; body size 103 bytes.
#line 1 "ENTRY_10b9f6f0"
undefined4 * Recovered_10b9f6f0::FUN_10b9f6f0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIArtworkCacheManager")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10b9f770; body size 103 bytes.
#line 1 "ENTRY_10b9f770"
undefined4 * Recovered_10b9f770::FUN_10b9f770(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIArtworkData")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10b9f7f0; body size 103 bytes.
#line 1 "ENTRY_10b9f7f0"
undefined4 * Recovered_10b9f7f0::FUN_10b9f7f0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIUrlSessionCallback")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10b9f870; body size 103 bytes.
#line 1 "ENTRY_10b9f870"
undefined4 * Recovered_10b9f870::FUN_10b9f870(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCILogoArtworkCache")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10b9f8f0; body size 103 bytes.
#line 1 "ENTRY_10b9f8f0"
undefined4 * Recovered_10b9f8f0::FUN_10b9f8f0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIArtworkData")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10bb31d0; body size 103 bytes.
#line 1 "ENTRY_10bb31d0"
undefined4 * Recovered_10bb31d0::FUN_10bb31d0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEventSink")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10bb3250; body size 103 bytes.
#line 1 "ENTRY_10bb3250"
undefined4 * Recovered_10bb3250::FUN_10bb3250(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIAlarmManager")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10bbc630; body size 103 bytes.
#line 1 "ENTRY_10bbc630"
undefined4 * Recovered_10bbc630::FUN_10bbc630(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCINetworkManagement")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10bbed40; body size 103 bytes.
#line 1 "ENTRY_10bbed40"
undefined4 * Recovered_10bbed40::FUN_10bbed40(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIChirpListener")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10bbf370; body size 103 bytes.
#line 1 "ENTRY_10bbf370"
undefined4 * Recovered_10bbf370::FUN_10bbf370(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10bc4d60; body size 103 bytes.
#line 1 "ENTRY_10bc4d60"
undefined4 * Recovered_10bc4d60::FUN_10bc4d60(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCINfcListener")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10bc90f0; body size 103 bytes.
#line 1 "ENTRY_10bc90f0"
undefined4 * Recovered_10bc90f0::FUN_10bc90f0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEventSink")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10bc9170; body size 103 bytes.
#line 1 "ENTRY_10bc9170"
undefined4 * Recovered_10bc9170::FUN_10bc9170(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIBTClassicConnectionCallback")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10bc91f0; body size 103 bytes.
#line 1 "ENTRY_10bc91f0"
undefined4 * Recovered_10bc91f0::FUN_10bc91f0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIBTClassicConnectionManager")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10bcb450; body size 103 bytes.
#line 1 "ENTRY_10bcb450"
undefined4 * Recovered_10bcb450::FUN_10bcb450(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10bf1320; body size 103 bytes.
#line 1 "ENTRY_10bf1320"
undefined4 * Recovered_10bf1320::FUN_10bf1320(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIUrlSessionCallback")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10bf2780; body size 103 bytes.
#line 1 "ENTRY_10bf2780"
undefined4 * Recovered_10bf2780::FUN_10bf2780(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpFactory")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10bf3040; body size 103 bytes.
#line 1 "ENTRY_10bf3040"
undefined4 * Recovered_10bf3040::FUN_10bf3040(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIRoomResource")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10bf3530; body size 103 bytes.
#line 1 "ENTRY_10bf3530"
undefined4 * Recovered_10bf3530::FUN_10bf3530(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIAudioInputResource")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10bf92f0; body size 103 bytes.
#line 1 "ENTRY_10bf92f0"
undefined4 * Recovered_10bf92f0::FUN_10bf92f0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIAppRatingManager")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10bfdb00; body size 103 bytes.
#line 1 "ENTRY_10bfdb00"
undefined4 * Recovered_10bfdb00::FUN_10bfdb00(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10c00d10; body size 103 bytes.
#line 1 "ENTRY_10c00d10"
undefined4 * Recovered_10c00d10::FUN_10c00d10(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEnumerator")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10c00d90; body size 103 bytes.
#line 1 "ENTRY_10c00d90"
undefined4 * Recovered_10c00d90::FUN_10c00d90(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIMusicServer")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10c00e10; body size 103 bytes.
#line 1 "ENTRY_10c00e10"
undefined4 * Recovered_10c00e10::FUN_10c00e10(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIData")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10c03950; body size 103 bytes.
#line 1 "ENTRY_10c03950"
undefined4 * Recovered_10c03950::FUN_10c03950(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIAction")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10c039d0; body size 103 bytes.
#line 1 "ENTRY_10c039d0"
undefined4 * Recovered_10c039d0::FUN_10c039d0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIServiceAppInteropManager")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10c15630; body size 103 bytes.
#line 1 "ENTRY_10c15630"
undefined4 * Recovered_10c15630::FUN_10c15630(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIZoneGroupMgr")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10c27280; body size 103 bytes.
#line 1 "ENTRY_10c27280"
undefined4 * Recovered_10c27280::FUN_10c27280(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCICachedHousehold")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10c2a670; body size 103 bytes.
#line 1 "ENTRY_10c2a670"
undefined4 * Recovered_10c2a670::FUN_10c2a670(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIConnectedPartnersManager")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10c32770; body size 103 bytes.
#line 1 "ENTRY_10c32770"
undefined4 * Recovered_10c32770::FUN_10c32770(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10c38230; body size 103 bytes.
#line 1 "ENTRY_10c38230"
undefined4 * Recovered_10c38230::FUN_10c38230(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEventSink")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10c3b270; body size 103 bytes.
#line 1 "ENTRY_10c3b270"
undefined4 * Recovered_10c3b270::FUN_10c3b270(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEventSink")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10c478e0; body size 103 bytes.
#line 1 "ENTRY_10c478e0"
undefined4 * Recovered_10c478e0::FUN_10c478e0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10c4cf90; body size 103 bytes.
#line 1 "ENTRY_10c4cf90"
undefined4 * Recovered_10c4cf90::FUN_10c4cf90(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOp")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10c4d010; body size 103 bytes.
#line 1 "ENTRY_10c4d010"
undefined4 * Recovered_10c4d010::FUN_10c4d010(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10c53000; body size 103 bytes.
#line 1 "ENTRY_10c53000"
undefined4 * Recovered_10c53000::FUN_10c53000(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIDeviceAutoplay")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10c531a0; body size 103 bytes.
#line 1 "ENTRY_10c531a0"
undefined4 * Recovered_10c531a0::FUN_10c531a0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpDevicePropertiesGetAutoplayLinkedZones")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10c53220; body size 103 bytes.
#line 1 "ENTRY_10c53220"
undefined4 * Recovered_10c53220::FUN_10c53220(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpDevicePropertiesGetAutoplayRoomUUID")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10c532a0; body size 103 bytes.
#line 1 "ENTRY_10c532a0"
undefined4 * Recovered_10c532a0::FUN_10c532a0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpDevicePropertiesGetAutoplayVolume")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10c53320; body size 103 bytes.
#line 1 "ENTRY_10c53320"
undefined4 * Recovered_10c53320::FUN_10c53320(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpDevicePropertiesGetUseAutoplayVolume")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10c533a0; body size 103 bytes.
#line 1 "ENTRY_10c533a0"
undefined4 * Recovered_10c533a0::FUN_10c533a0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpDevicePropertiesSetUseAutoplayVolume")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10c53550; body size 103 bytes.
#line 1 "ENTRY_10c53550"
undefined4 * Recovered_10c53550::FUN_10c53550(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpDevicePropertiesGetAutoplayLinkedZones")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10c535d0; body size 103 bytes.
#line 1 "ENTRY_10c535d0"
undefined4 * Recovered_10c535d0::FUN_10c535d0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpDevicePropertiesGetAutoplayRoomUUID")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10c53650; body size 103 bytes.
#line 1 "ENTRY_10c53650"
undefined4 * Recovered_10c53650::FUN_10c53650(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpDevicePropertiesGetAutoplayVolume")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10c536d0; body size 103 bytes.
#line 1 "ENTRY_10c536d0"
undefined4 * Recovered_10c536d0::FUN_10c536d0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpDevicePropertiesGetUseAutoplayVolume")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10c53750; body size 103 bytes.
#line 1 "ENTRY_10c53750"
undefined4 * Recovered_10c53750::FUN_10c53750(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpDevicePropertiesSetUseAutoplayVolume")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10c58260; body size 103 bytes.
#line 1 "ENTRY_10c58260"
undefined4 * Recovered_10c58260::FUN_10c58260(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIDeviceLineIn")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10c58400; body size 103 bytes.
#line 1 "ENTRY_10c58400"
undefined4 * Recovered_10c58400::FUN_10c58400(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpAudioInGetAudioInputAttributes")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10c58480; body size 103 bytes.
#line 1 "ENTRY_10c58480"
undefined4 * Recovered_10c58480::FUN_10c58480(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpAudioInGetLineInLevel")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10c58500; body size 103 bytes.
#line 1 "ENTRY_10c58500"
undefined4 * Recovered_10c58500::FUN_10c58500(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpAudioInSetAudioInputAttributes")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10c58580; body size 103 bytes.
#line 1 "ENTRY_10c58580"
undefined4 * Recovered_10c58580::FUN_10c58580(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpAudioInSetLineInLevel")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10c58730; body size 103 bytes.
#line 1 "ENTRY_10c58730"
undefined4 * Recovered_10c58730::FUN_10c58730(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpAudioInGetAudioInputAttributes")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10c587b0; body size 103 bytes.
#line 1 "ENTRY_10c587b0"
undefined4 * Recovered_10c587b0::FUN_10c587b0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpAudioInGetLineInLevel")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10c58830; body size 103 bytes.
#line 1 "ENTRY_10c58830"
undefined4 * Recovered_10c58830::FUN_10c58830(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpAudioInSetAudioInputAttributes")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10c588b0; body size 103 bytes.
#line 1 "ENTRY_10c588b0"
undefined4 * Recovered_10c588b0::FUN_10c588b0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpAudioInSetLineInLevel")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10c5a900; body size 103 bytes.
#line 1 "ENTRY_10c5a900"
undefined4 * Recovered_10c5a900::FUN_10c5a900(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIDeviceLineOut")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10c5aaa0; body size 103 bytes.
#line 1 "ENTRY_10c5aaa0"
undefined4 * Recovered_10c5aaa0::FUN_10c5aaa0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpRenderingControlGetSupportsOutputFixed")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10c5ac50; body size 103 bytes.
#line 1 "ENTRY_10c5ac50"
undefined4 * Recovered_10c5ac50::FUN_10c5ac50(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpRenderingControlGetSupportsOutputFixed")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10c5cd30; body size 103 bytes.
#line 1 "ENTRY_10c5cd30"
undefined4 * Recovered_10c5cd30::FUN_10c5cd30(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIDeviceMusicEqualization")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10c5d000; body size 103 bytes.
#line 1 "ENTRY_10c5d000"
undefined4 * Recovered_10c5d000::FUN_10c5d000(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEventSink")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10c6c1c0; body size 103 bytes.
#line 1 "ENTRY_10c6c1c0"
undefined4 * Recovered_10c6c1c0::FUN_10c6c1c0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10c83420; body size 103 bytes.
#line 1 "ENTRY_10c83420"
undefined4 * Recovered_10c83420::FUN_10c83420(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOp")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10c834a0; body size 103 bytes.
#line 1 "ENTRY_10c834a0"
undefined4 * Recovered_10c834a0::FUN_10c834a0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOp")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10c845b0; body size 103 bytes.
#line 1 "ENTRY_10c845b0"
undefined4 * Recovered_10c845b0::FUN_10c845b0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIZoneGroup")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10c9bd90; body size 103 bytes.
#line 1 "ENTRY_10c9bd90"
undefined4 * Recovered_10c9bd90::FUN_10c9bd90(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10cb38c0; body size 103 bytes.
#line 1 "ENTRY_10cb38c0"
undefined4 * Recovered_10cb38c0::FUN_10cb38c0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEventSink")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10cbc5b0; body size 103 bytes.
#line 1 "ENTRY_10cbc5b0"
undefined4 * Recovered_10cbc5b0::FUN_10cbc5b0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIDisplayType")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10cc0050; body size 103 bytes.
#line 1 "ENTRY_10cc0050"
undefined4 * Recovered_10cc0050::FUN_10cc0050(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIUrlSessionCallback")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10cc34d0; body size 103 bytes.
#line 1 "ENTRY_10cc34d0"
undefined4 * Recovered_10cc34d0::FUN_10cc34d0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpGetAboutSonosString")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10cd87f0; body size 103 bytes.
#line 1 "ENTRY_10cd87f0"
undefined4 * Recovered_10cd87f0::FUN_10cd87f0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOp")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10cd8870; body size 103 bytes.
#line 1 "ENTRY_10cd8870"
undefined4 * Recovered_10cd8870::FUN_10cd8870(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOp")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10cd88f0; body size 103 bytes.
#line 1 "ENTRY_10cd88f0"
undefined4 * Recovered_10cd88f0::FUN_10cd88f0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOp")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10cd8970; body size 103 bytes.
#line 1 "ENTRY_10cd8970"
undefined4 * Recovered_10cd8970::FUN_10cd8970(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOp")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10cd89f0; body size 103 bytes.
#line 1 "ENTRY_10cd89f0"
undefined4 * Recovered_10cd89f0::FUN_10cd89f0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOp")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10cd8a70; body size 103 bytes.
#line 1 "ENTRY_10cd8a70"
undefined4 * Recovered_10cd8a70::FUN_10cd8a70(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOp")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10cd8af0; body size 103 bytes.
#line 1 "ENTRY_10cd8af0"
undefined4 * Recovered_10cd8af0::FUN_10cd8af0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOp")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10cd8b70; body size 103 bytes.
#line 1 "ENTRY_10cd8b70"
undefined4 * Recovered_10cd8b70::FUN_10cd8b70(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOp")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10cd8bf0; body size 103 bytes.
#line 1 "ENTRY_10cd8bf0"
undefined4 * Recovered_10cd8bf0::FUN_10cd8bf0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOp")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10cdea40; body size 103 bytes.
#line 1 "ENTRY_10cdea40"
undefined4 * Recovered_10cdea40::FUN_10cdea40(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpAlarmClockGetDailyIndexRefreshTime")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10cdeac0; body size 103 bytes.
#line 1 "ENTRY_10cdeac0"
undefined4 * Recovered_10cdeac0::FUN_10cdeac0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpAlarmClockSetDailyIndexRefreshTime")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10cdeb40; body size 103 bytes.
#line 1 "ENTRY_10cdeb40"
undefined4 * Recovered_10cdeb40::FUN_10cdeb40(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIIndexManager")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10cdebc0; body size 103 bytes.
#line 1 "ENTRY_10cdebc0"
undefined4 * Recovered_10cdebc0::FUN_10cdebc0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpAlarmClockGetDailyIndexRefreshTime")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10cdec40; body size 103 bytes.
#line 1 "ENTRY_10cdec40"
undefined4 * Recovered_10cdec40::FUN_10cdec40(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpAlarmClockSetDailyIndexRefreshTime")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10ce0a20; body size 103 bytes.
#line 1 "ENTRY_10ce0a20"
undefined4 * Recovered_10ce0a20::FUN_10ce0a20(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEventSink")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10ce1e20; body size 103 bytes.
#line 1 "ENTRY_10ce1e20"
undefined4 * Recovered_10ce1e20::FUN_10ce1e20(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpGetUsageDataShareOption")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10ce4cb0; body size 103 bytes.
#line 1 "ENTRY_10ce4cb0"
undefined4 * Recovered_10ce4cb0::FUN_10ce4cb0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIBrowseDataSource")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10cf0980; body size 103 bytes.
#line 1 "ENTRY_10cf0980"
undefined4 * Recovered_10cf0980::FUN_10cf0980(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10cf3680; body size 103 bytes.
#line 1 "ENTRY_10cf3680"
undefined4 * Recovered_10cf3680::FUN_10cf3680(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10cf3700; body size 103 bytes.
#line 1 "ENTRY_10cf3700"
undefined4 * Recovered_10cf3700::FUN_10cf3700(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10cf52a0; body size 103 bytes.
#line 1 "ENTRY_10cf52a0"
undefined4 * Recovered_10cf52a0::FUN_10cf52a0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10cf63d0; body size 103 bytes.
#line 1 "ENTRY_10cf63d0"
undefined4 * Recovered_10cf63d0::FUN_10cf63d0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpValidateServiceCredentials")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10cf8c60; body size 103 bytes.
#line 1 "ENTRY_10cf8c60"
undefined4 * Recovered_10cf8c60::FUN_10cf8c60(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEventSink")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10cf8ce0; body size 103 bytes.
#line 1 "ENTRY_10cf8ce0"
undefined4 * Recovered_10cf8ce0::FUN_10cf8ce0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIBrowseDataSource")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10d06d40; body size 103 bytes.
#line 1 "ENTRY_10d06d40"
undefined4 * Recovered_10d06d40::FUN_10d06d40(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10d06fa0; body size 103 bytes.
#line 1 "ENTRY_10d06fa0"
undefined4 * Recovered_10d06fa0::FUN_10d06fa0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIAction")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10d07020; body size 103 bytes.
#line 1 "ENTRY_10d07020"
undefined4 * Recovered_10d07020::FUN_10d07020(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIAlarmMusic")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10d07520; body size 103 bytes.
#line 1 "ENTRY_10d07520"
undefined4 * Recovered_10d07520::FUN_10d07520(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIBrowseDataSource")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10d102d0; body size 103 bytes.
#line 1 "ENTRY_10d102d0"
undefined4 * Recovered_10d102d0::FUN_10d102d0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIBrowseItem")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10d19410; body size 103 bytes.
#line 1 "ENTRY_10d19410"
undefined4 * Recovered_10d19410::FUN_10d19410(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIBrowseDataSource")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10d1d4f0; body size 103 bytes.
#line 1 "ENTRY_10d1d4f0"
undefined4 * Recovered_10d1d4f0::FUN_10d1d4f0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIBrowseItem")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10d1d570; body size 103 bytes.
#line 1 "ENTRY_10d1d570"
undefined4 * Recovered_10d1d570::FUN_10d1d570(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIBrowseDataSource")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10d22340; body size 103 bytes.
#line 1 "ENTRY_10d22340"
undefined4 * Recovered_10d22340::FUN_10d22340(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIBrowseItem")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10d223d0; body size 103 bytes.
#line 1 "ENTRY_10d223d0"
undefined4 * Recovered_10d223d0::FUN_10d223d0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIBrowseDataSource")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10d2b0f0; body size 103 bytes.
#line 1 "ENTRY_10d2b0f0"
undefined4 * Recovered_10d2b0f0::FUN_10d2b0f0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIBrowseItem")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10d2b240; body size 103 bytes.
#line 1 "ENTRY_10d2b240"
undefined4 * Recovered_10d2b240::FUN_10d2b240(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIBrowseItem")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10d2b2c0; body size 103 bytes.
#line 1 "ENTRY_10d2b2c0"
undefined4 * Recovered_10d2b2c0::FUN_10d2b2c0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIBrowseDataSource")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10d2b340; body size 103 bytes.
#line 1 "ENTRY_10d2b340"
undefined4 * Recovered_10d2b340::FUN_10d2b340(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIBrowseDataSource")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10d2b3c0; body size 103 bytes.
#line 1 "ENTRY_10d2b3c0"
undefined4 * Recovered_10d2b3c0::FUN_10d2b3c0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIBrowseItem")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10d2b440; body size 103 bytes.
#line 1 "ENTRY_10d2b440"
undefined4 * Recovered_10d2b440::FUN_10d2b440(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIBrowseDataSource")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10d39e40; body size 103 bytes.
#line 1 "ENTRY_10d39e40"
undefined4 * Recovered_10d39e40::FUN_10d39e40(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIBrowseItem")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10d3c9f0; body size 103 bytes.
#line 1 "ENTRY_10d3c9f0"
undefined4 * Recovered_10d3c9f0::FUN_10d3c9f0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIBrowseDataSource")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10d3ca70; body size 103 bytes.
#line 1 "ENTRY_10d3ca70"
undefined4 * Recovered_10d3ca70::FUN_10d3ca70(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIBrowseItem")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10d3caf0; body size 103 bytes.
#line 1 "ENTRY_10d3caf0"
undefined4 * Recovered_10d3caf0::FUN_10d3caf0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIBrowseItem")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10d41d20; body size 103 bytes.
#line 1 "ENTRY_10d41d20"
undefined4 * Recovered_10d41d20::FUN_10d41d20(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEventSink")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10d41f10; body size 103 bytes.
#line 1 "ENTRY_10d41f10"
undefined4 * Recovered_10d41f10::FUN_10d41f10(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIBrowseItem")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10d60300; body size 103 bytes.
#line 1 "ENTRY_10d60300"
undefined4 * Recovered_10d60300::FUN_10d60300(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIBrowseDataSource")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10d71570; body size 103 bytes.
#line 1 "ENTRY_10d71570"
undefined4 * Recovered_10d71570::FUN_10d71570(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIBrowseItem")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10d86dd0; body size 103 bytes.
#line 1 "ENTRY_10d86dd0"
undefined4 * Recovered_10d86dd0::FUN_10d86dd0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOp")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10d86e50; body size 103 bytes.
#line 1 "ENTRY_10d86e50"
undefined4 * Recovered_10d86e50::FUN_10d86e50(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOp")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10d86ed0; body size 103 bytes.
#line 1 "ENTRY_10d86ed0"
undefined4 * Recovered_10d86ed0::FUN_10d86ed0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOp")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10d86f50; body size 103 bytes.
#line 1 "ENTRY_10d86f50"
undefined4 * Recovered_10d86f50::FUN_10d86f50(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOp")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10d86fd0; body size 103 bytes.
#line 1 "ENTRY_10d86fd0"
undefined4 * Recovered_10d86fd0::FUN_10d86fd0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIUrlSessionCallback")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10d89300; body size 103 bytes.
#line 1 "ENTRY_10d89300"
undefined4 * Recovered_10d89300::FUN_10d89300(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEventSink")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10d91bd0; body size 103 bytes.
#line 1 "ENTRY_10d91bd0"
undefined4 * Recovered_10d91bd0::FUN_10d91bd0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10d93ac0; body size 103 bytes.
#line 1 "ENTRY_10d93ac0"
undefined4 * Recovered_10d93ac0::FUN_10d93ac0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIUrlSessionCallback")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10d97210; body size 103 bytes.
#line 1 "ENTRY_10d97210"
undefined4 * Recovered_10d97210::FUN_10d97210(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIAction")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10d9a400; body size 103 bytes.
#line 1 "ENTRY_10d9a400"
undefined4 * Recovered_10d9a400::FUN_10d9a400(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10d9a480; body size 103 bytes.
#line 1 "ENTRY_10d9a480"
undefined4 * Recovered_10d9a480::FUN_10d9a480(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10d9ded0; body size 103 bytes.
#line 1 "ENTRY_10d9ded0"
undefined4 * Recovered_10d9ded0::FUN_10d9ded0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpContentDirectoryRefreshShareIndex")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10d9df50; body size 103 bytes.
#line 1 "ENTRY_10d9df50"
undefined4 * Recovered_10d9df50::FUN_10d9df50(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpContentDirectoryRefreshShareIndex")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10d9e640; body size 103 bytes.
#line 1 "ENTRY_10d9e640"
undefined4 * Recovered_10d9e640::FUN_10d9e640(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10da33b0; body size 103 bytes.
#line 1 "ENTRY_10da33b0"
undefined4 * Recovered_10da33b0::FUN_10da33b0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEventSink")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10da3430; body size 103 bytes.
#line 1 "ENTRY_10da3430"
undefined4 * Recovered_10da3430::FUN_10da3430(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10da7540; body size 103 bytes.
#line 1 "ENTRY_10da7540"
undefined4 * Recovered_10da7540::FUN_10da7540(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEventSink")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10da75c0; body size 103 bytes.
#line 1 "ENTRY_10da75c0"
undefined4 * Recovered_10da75c0::FUN_10da75c0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIDateTimeManager")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10da7640; body size 103 bytes.
#line 1 "ENTRY_10da7640"
undefined4 * Recovered_10da7640::FUN_10da7640(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCITimeZone")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10dcef60; body size 103 bytes.
#line 1 "ENTRY_10dcef60"
undefined4 * Recovered_10dcef60::FUN_10dcef60(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIServicePopup")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10dd5ba0; body size 103 bytes.
#line 1 "ENTRY_10dd5ba0"
undefined4 * Recovered_10dd5ba0::FUN_10dd5ba0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10de28f0; body size 103 bytes.
#line 1 "ENTRY_10de28f0"
undefined4 * Recovered_10de28f0::FUN_10de28f0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIBrowsePageExtension")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10de4590; body size 103 bytes.
#line 1 "ENTRY_10de4590"
undefined4 * Recovered_10de4590::FUN_10de4590(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIAction")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10de8950; body size 103 bytes.
#line 1 "ENTRY_10de8950"
undefined4 * Recovered_10de8950::FUN_10de8950(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpAVTransportAddURIToSavedQueue")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10de89d0; body size 103 bytes.
#line 1 "ENTRY_10de89d0"
undefined4 * Recovered_10de89d0::FUN_10de89d0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIAction")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10de8a50; body size 103 bytes.
#line 1 "ENTRY_10de8a50"
undefined4 * Recovered_10de8a50::FUN_10de8a50(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpAVTransportAddURIToSavedQueue")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10e06af0; body size 103 bytes.
#line 1 "ENTRY_10e06af0"
undefined4 * Recovered_10e06af0::FUN_10e06af0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIWifiListener")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10e0ae60; body size 103 bytes.
#line 1 "ENTRY_10e0ae60"
undefined4 * Recovered_10e0ae60::FUN_10e0ae60(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOp")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10e1fba0; body size 103 bytes.
#line 1 "ENTRY_10e1fba0"
undefined4 * Recovered_10e1fba0::FUN_10e1fba0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEventSink")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10e24ac0; body size 103 bytes.
#line 1 "ENTRY_10e24ac0"
undefined4 * Recovered_10e24ac0::FUN_10e24ac0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEventSink")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10e3f100; body size 103 bytes.
#line 1 "ENTRY_10e3f100"
undefined4 * Recovered_10e3f100::FUN_10e3f100(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIServiceAppInteropResponseDelegate")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10e3f180; body size 103 bytes.
#line 1 "ENTRY_10e3f180"
undefined4 * Recovered_10e3f180::FUN_10e3f180(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIServiceAppInteropResponseDelegate")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10e4e5e0; body size 103 bytes.
#line 1 "ENTRY_10e4e5e0"
undefined4 * Recovered_10e4e5e0::FUN_10e4e5e0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEventSink")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10e591f0; body size 103 bytes.
#line 1 "ENTRY_10e591f0"
undefined4 * Recovered_10e591f0::FUN_10e591f0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEventSink")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10e72c70; body size 103 bytes.
#line 1 "ENTRY_10e72c70"
undefined4 * Recovered_10e72c70::FUN_10e72c70(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEventSink")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10e72cf0; body size 103 bytes.
#line 1 "ENTRY_10e72cf0"
undefined4 * Recovered_10e72cf0::FUN_10e72cf0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIVSResponseListener")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10e7de90; body size 103 bytes.
#line 1 "ENTRY_10e7de90"
undefined4 * Recovered_10e7de90::FUN_10e7de90(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEventSink")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10e86840; body size 103 bytes.
#line 1 "ENTRY_10e86840"
undefined4 * Recovered_10e86840::FUN_10e86840(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEventSink")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10ea2900; body size 103 bytes.
#line 1 "ENTRY_10ea2900"
undefined4 * Recovered_10ea2900::FUN_10ea2900(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpHTControlGetLEDFeedbackState")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10ea2a20; body size 103 bytes.
#line 1 "ENTRY_10ea2a20"
undefined4 * Recovered_10ea2a20::FUN_10ea2a20(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpHTControlGetLEDFeedbackState")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10ead200; body size 103 bytes.
#line 1 "ENTRY_10ead200"
undefined4 * Recovered_10ead200::FUN_10ead200(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10ead280; body size 103 bytes.
#line 1 "ENTRY_10ead280"
undefined4 * Recovered_10ead280::FUN_10ead280(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10ee0c10; body size 103 bytes.
#line 1 "ENTRY_10ee0c10"
undefined4 * Recovered_10ee0c10::FUN_10ee0c10(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOp")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10ee1790; body size 103 bytes.
#line 1 "ENTRY_10ee1790"
undefined4 * Recovered_10ee1790::FUN_10ee1790(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOp")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10ee8760; body size 103 bytes.
#line 1 "ENTRY_10ee8760"
undefined4 * Recovered_10ee8760::FUN_10ee8760(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10eed620; body size 103 bytes.
#line 1 "ENTRY_10eed620"
undefined4 * Recovered_10eed620::FUN_10eed620(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOp")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10ef2b60; body size 103 bytes.
#line 1 "ENTRY_10ef2b60"
undefined4 * Recovered_10ef2b60::FUN_10ef2b60(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOp")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10f04d30; body size 103 bytes.
#line 1 "ENTRY_10f04d30"
undefined4 * Recovered_10f04d30::FUN_10f04d30(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10f13cb0; body size 103 bytes.
#line 1 "ENTRY_10f13cb0"
undefined4 * Recovered_10f13cb0::FUN_10f13cb0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpSubmitDiagnostics")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10f13d30; body size 103 bytes.
#line 1 "ENTRY_10f13d30"
undefined4 * Recovered_10f13d30::FUN_10f13d30(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpSubmitDiagnostics")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10f13db0; body size 103 bytes.
#line 1 "ENTRY_10f13db0"
undefined4 * Recovered_10f13db0::FUN_10f13db0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpSubmitDiagnostics")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10f228d0; body size 103 bytes.
#line 1 "ENTRY_10f228d0"
undefined4 * Recovered_10f228d0::FUN_10f228d0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOp")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10f2bf40; body size 103 bytes.
#line 1 "ENTRY_10f2bf40"
undefined4 * Recovered_10f2bf40::FUN_10f2bf40(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOp")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10f36120; body size 103 bytes.
#line 1 "ENTRY_10f36120"
undefined4 * Recovered_10f36120::FUN_10f36120(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOp")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10f361a0; body size 103 bytes.
#line 1 "ENTRY_10f361a0"
undefined4 * Recovered_10f361a0::FUN_10f361a0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOp")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10f36220; body size 103 bytes.
#line 1 "ENTRY_10f36220"
undefined4 * Recovered_10f36220::FUN_10f36220(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOp")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10f362a0; body size 103 bytes.
#line 1 "ENTRY_10f362a0"
undefined4 * Recovered_10f362a0::FUN_10f362a0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOp")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10f3ee80; body size 103 bytes.
#line 1 "ENTRY_10f3ee80"
undefined4 * Recovered_10f3ee80::FUN_10f3ee80(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOp")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10f3ef00; body size 103 bytes.
#line 1 "ENTRY_10f3ef00"
undefined4 * Recovered_10f3ef00::FUN_10f3ef00(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOp")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10f42e50; body size 103 bytes.
#line 1 "ENTRY_10f42e50"
undefined4 * Recovered_10f42e50::FUN_10f42e50(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCINowPlaying")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10f478b0; body size 103 bytes.
#line 1 "ENTRY_10f478b0"
undefined4 * Recovered_10f478b0::FUN_10f478b0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIPlayQueue")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10f47a50; body size 103 bytes.
#line 1 "ENTRY_10f47a50"
undefined4 * Recovered_10f47a50::FUN_10f47a50(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIPlayQueue")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10f48ce0; body size 103 bytes.
#line 1 "ENTRY_10f48ce0"
undefined4 * Recovered_10f48ce0::FUN_10f48ce0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIArea")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10f4c9c0; body size 103 bytes.
#line 1 "ENTRY_10f4c9c0"
undefined4 * Recovered_10f4c9c0::FUN_10f4c9c0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIGroupVolume")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10f4cb60; body size 103 bytes.
#line 1 "ENTRY_10f4cb60"
undefined4 * Recovered_10f4cb60::FUN_10f4cb60(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIDeviceVolume")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10f515b0; body size 103 bytes.
#line 1 "ENTRY_10f515b0"
undefined4 * Recovered_10f515b0::FUN_10f515b0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEventSink")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10f620f0; body size 103 bytes.
#line 1 "ENTRY_10f620f0"
undefined4 * Recovered_10f620f0::FUN_10f620f0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpHTControlGetIRRepeaterState")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10f62170; body size 103 bytes.
#line 1 "ENTRY_10f62170"
undefined4 * Recovered_10f62170::FUN_10f62170(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpHTControlSetIRRepeaterState")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10f621f0; body size 103 bytes.
#line 1 "ENTRY_10f621f0"
undefined4 * Recovered_10f621f0::FUN_10f621f0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpHTControlSetLEDFeedbackState")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10f62270; body size 103 bytes.
#line 1 "ENTRY_10f62270"
undefined4 * Recovered_10f62270::FUN_10f62270(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpRenderingControlGetRoomCalibrationStatus")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10f622f0; body size 103 bytes.
#line 1 "ENTRY_10f622f0"
undefined4 * Recovered_10f622f0::FUN_10f622f0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpHTControlGetIRRepeaterState")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10f62370; body size 103 bytes.
#line 1 "ENTRY_10f62370"
undefined4 * Recovered_10f62370::FUN_10f62370(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpHTControlSetIRRepeaterState")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10f623f0; body size 103 bytes.
#line 1 "ENTRY_10f623f0"
undefined4 * Recovered_10f623f0::FUN_10f623f0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpHTControlSetLEDFeedbackState")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10f62470; body size 103 bytes.
#line 1 "ENTRY_10f62470"
undefined4 * Recovered_10f62470::FUN_10f62470(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpRenderingControlGetRoomCalibrationStatus")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10f678f0; body size 103 bytes.
#line 1 "ENTRY_10f678f0"
undefined4 * Recovered_10f678f0::FUN_10f678f0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpContentDirectoryGetAlbumArtistDisplayOption")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10f67970; body size 103 bytes.
#line 1 "ENTRY_10f67970"
undefined4 * Recovered_10f67970::FUN_10f67970(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEventSink")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10f679f0; body size 103 bytes.
#line 1 "ENTRY_10f679f0"
undefined4 * Recovered_10f679f0::FUN_10f679f0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpContentDirectoryGetAlbumArtistDisplayOption")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10f73640; body size 103 bytes.
#line 1 "ENTRY_10f73640"
undefined4 * Recovered_10f73640::FUN_10f73640(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOp")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10f7a100; body size 103 bytes.
#line 1 "ENTRY_10f7a100"
undefined4 * Recovered_10f7a100::FUN_10f7a100(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpAlarmSave")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10f7a180; body size 103 bytes.
#line 1 "ENTRY_10f7a180"
undefined4 * Recovered_10f7a180::FUN_10f7a180(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIAlarm")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10f80cd0; body size 103 bytes.
#line 1 "ENTRY_10f80cd0"
undefined4 * Recovered_10f80cd0::FUN_10f80cd0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOp")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10f80d50; body size 103 bytes.
#line 1 "ENTRY_10f80d50"
undefined4 * Recovered_10f80d50::FUN_10f80d50(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOp")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10f8e410; body size 103 bytes.
#line 1 "ENTRY_10f8e410"
undefined4 * Recovered_10f8e410::FUN_10f8e410(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOp")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10f8e490; body size 103 bytes.
#line 1 "ENTRY_10f8e490"
undefined4 * Recovered_10f8e490::FUN_10f8e490(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOp")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10f8e510; body size 103 bytes.
#line 1 "ENTRY_10f8e510"
undefined4 * Recovered_10f8e510::FUN_10f8e510(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOp")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10fa36e0; body size 103 bytes.
#line 1 "ENTRY_10fa36e0"
undefined4 * Recovered_10fa36e0::FUN_10fa36e0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEventSink")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10fa9e20; body size 103 bytes.
#line 1 "ENTRY_10fa9e20"
undefined4 * Recovered_10fa9e20::FUN_10fa9e20(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEventSink")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10fbcea0; body size 103 bytes.
#line 1 "ENTRY_10fbcea0"
undefined4 * Recovered_10fbcea0::FUN_10fbcea0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIWizard")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10fc95e0; body size 103 bytes.
#line 1 "ENTRY_10fc95e0"
undefined4 * Recovered_10fc95e0::FUN_10fc95e0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEventSink")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10fcf470; body size 103 bytes.
#line 1 "ENTRY_10fcf470"
undefined4 * Recovered_10fcf470::FUN_10fcf470(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIBrowseDataSource")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10fcf4f0; body size 103 bytes.
#line 1 "ENTRY_10fcf4f0"
undefined4 * Recovered_10fcf4f0::FUN_10fcf4f0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIBrowseItem")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10fe3570; body size 103 bytes.
#line 1 "ENTRY_10fe3570"
undefined4 * Recovered_10fe3570::FUN_10fe3570(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10fe35f0; body size 103 bytes.
#line 1 "ENTRY_10fe35f0"
undefined4 * Recovered_10fe35f0::FUN_10fe35f0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10fe3670; body size 103 bytes.
#line 1 "ENTRY_10fe3670"
undefined4 * Recovered_10fe3670::FUN_10fe3670(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIActionDelegate")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10fe5880; body size 103 bytes.
#line 1 "ENTRY_10fe5880"
undefined4 * Recovered_10fe5880::FUN_10fe5880(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10fe6da0; body size 103 bytes.
#line 1 "ENTRY_10fe6da0"
undefined4 * Recovered_10fe6da0::FUN_10fe6da0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIAction")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10fe8550; body size 103 bytes.
#line 1 "ENTRY_10fe8550"
undefined4 * Recovered_10fe8550::FUN_10fe8550(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIAction")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10fe85d0; body size 103 bytes.
#line 1 "ENTRY_10fe85d0"
undefined4 * Recovered_10fe85d0::FUN_10fe85d0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIAction")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10fe8650; body size 103 bytes.
#line 1 "ENTRY_10fe8650"
undefined4 * Recovered_10fe8650::FUN_10fe8650(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIAction")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10ff84d0; body size 103 bytes.
#line 1 "ENTRY_10ff84d0"
undefined4 * Recovered_10ff84d0::FUN_10ff84d0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEventSink")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10ff8550; body size 103 bytes.
#line 1 "ENTRY_10ff8550"
undefined4 * Recovered_10ff8550::FUN_10ff8550(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIBrowseItem")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10ff86c0; body size 103 bytes.
#line 1 "ENTRY_10ff86c0"
undefined4 * Recovered_10ff86c0::FUN_10ff86c0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIBrowseItem")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10ffbb30; body size 103 bytes.
#line 1 "ENTRY_10ffbb30"
undefined4 * Recovered_10ffbb30::FUN_10ffbb30(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIEventSink")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 10ffd0d0; body size 103 bytes.
#line 1 "ENTRY_10ffd0d0"
undefined4 * Recovered_10ffd0d0::FUN_10ffd0d0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISettingsMenuItem")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 11002fc0; body size 103 bytes.
#line 1 "ENTRY_11002fc0"
undefined4 * Recovered_11002fc0::FUN_11002fc0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIAction")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 11003050; body size 103 bytes.
#line 1 "ENTRY_11003050"
undefined4 * Recovered_11003050::FUN_11003050(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIInfoViewTextPaneMetadata")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 110183f0; body size 103 bytes.
#line 1 "ENTRY_110183f0"
undefined4 * Recovered_110183f0::FUN_110183f0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpCheckForControllerUpdates")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 11019480; body size 103 bytes.
#line 1 "ENTRY_11019480"
undefined4 * Recovered_11019480::FUN_11019480(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCLibSonarAudioSampleCallback")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1101bd70; body size 103 bytes.
#line 1 "ENTRY_1101bd70"
undefined4 * Recovered_1101bd70::FUN_1101bd70(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCINowPlayingRatings")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1101bf10; body size 103 bytes.
#line 1 "ENTRY_1101bf10"
undefined4 * Recovered_1101bf10::FUN_1101bf10(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCINowPlayingRatings")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1101e290; body size 103 bytes.
#line 1 "ENTRY_1101e290"
undefined4 * Recovered_1101e290::FUN_1101e290(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCINowPlayingSource")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 11020f20; body size 103 bytes.
#line 1 "ENTRY_11020f20"
undefined4 * Recovered_11020f20::FUN_11020f20(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCINowPlayingTransport")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 11022410; body size 103 bytes.
#line 1 "ENTRY_11022410"
undefined4 * Recovered_11022410::FUN_11022410(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCINowPlayingSleepTimer")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1102db80; body size 103 bytes.
#line 1 "ENTRY_1102db80"
undefined4 * Recovered_1102db80::FUN_1102db80(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1102dc00; body size 103 bytes.
#line 1 "ENTRY_1102dc00"
undefined4 * Recovered_1102dc00::FUN_1102dc00(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIPlayQueueMgr")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1102dda0; body size 103 bytes.
#line 1 "ENTRY_1102dda0"
undefined4 * Recovered_1102dda0::FUN_1102dda0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpQueueReplaceAllTracks")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1102de20; body size 103 bytes.
#line 1 "ENTRY_1102de20"
undefined4 * Recovered_1102de20::FUN_1102de20(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpQueueReplaceAllTracks")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1102dea0; body size 103 bytes.
#line 1 "ENTRY_1102dea0"
undefined4 * Recovered_1102dea0::FUN_1102dea0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIPlayQueueMgr")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1102df20; body size 103 bytes.
#line 1 "ENTRY_1102df20"
undefined4 * Recovered_1102df20::FUN_1102df20(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCISonosPlaylist")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 11032f80; body size 103 bytes.
#line 1 "ENTRY_11032f80"
undefined4 * Recovered_11032f80::FUN_11032f80(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIPlayQueueItemState")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 110334f0; body size 103 bytes.
#line 1 "ENTRY_110334f0"
undefined4 * Recovered_110334f0::FUN_110334f0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIPlayQueueItemState")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 11034ef0; body size 103 bytes.
#line 1 "ENTRY_11034ef0"
undefined4 * Recovered_11034ef0::FUN_11034ef0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 11037810; body size 103 bytes.
#line 1 "ENTRY_11037810"
undefined4 * Recovered_11037810::FUN_11037810(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIAction")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 11037890; body size 103 bytes.
#line 1 "ENTRY_11037890"
undefined4 * Recovered_11037890::FUN_11037890(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIAction")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 11037910; body size 103 bytes.
#line 1 "ENTRY_11037910"
undefined4 * Recovered_11037910::FUN_11037910(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIAction")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 11037a30; body size 103 bytes.
#line 1 "ENTRY_11037a30"
undefined4 * Recovered_11037a30::FUN_11037a30(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIAction")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 1105d8e0; body size 103 bytes.
#line 1 "ENTRY_1105d8e0"
undefined4 * Recovered_1105d8e0::FUN_1105d8e0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 11060b80; body size 103 bytes.
#line 1 "ENTRY_11060b80"
undefined4 * Recovered_11060b80::FUN_11060b80(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpAVTransportGetRemainingSleepTimerDuration")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 11060d30; body size 103 bytes.
#line 1 "ENTRY_11060d30"
undefined4 * Recovered_11060d30::FUN_11060d30(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpAVTransportGetRemainingSleepTimerDuration")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 11061fc0; body size 103 bytes.
#line 1 "ENTRY_11061fc0"
undefined4 * Recovered_11061fc0::FUN_11061fc0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpAddTracksToQueue")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 11062f50; body size 103 bytes.
#line 1 "ENTRY_11062f50"
undefined4 * Recovered_11062f50::FUN_11062f50(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpGenericUpdateQueue")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 11065cb0; body size 103 bytes.
#line 1 "ENTRY_11065cb0"
undefined4 * Recovered_11065cb0::FUN_11065cb0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOp")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 11067290; body size 103 bytes.
#line 1 "ENTRY_11067290"
undefined4 * Recovered_11067290::FUN_11067290(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIBadgeResource")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 11068020; body size 103 bytes.
#line 1 "ENTRY_11068020"
undefined4 * Recovered_11068020::FUN_11068020(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpGetTrackPositionInfo")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// Reference entry 110680a0; body size 103 bytes.
#line 1 "ENTRY_110680a0"
undefined4 * Recovered_110680a0::FUN_110680a0(undefined4 *param_2,SCStr *param_3)
{
  int * param_1 = (int *)this;
  if (param_3->operator==("SCIOpGetTrackPositionInfo")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  if (param_3->operator==("SCIObj")) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// EH frame-shape probe: one function per try/catch style so each flag sweep
// object shows which prologue MSVC 14.28 emits for the reference's frame.

extern "C" void probe_call();
extern "C" int probe_arg();

int probe_simple_try(int a) {
    int x = a;
    try {
        probe_call();
        x += probe_arg();
    } catch (...) {
        x = -1;
    }
    return x;
}

struct ProbeObj {
    int v;
    ~ProbeObj() { probe_call(); }
};

int probe_dtor_try(int a) {
    ProbeObj o;
    o.v = a;
    try {
        probe_call();
        o.v += probe_arg();
    } catch (...) {
        o.v = -1;
    }
    return o.v;
}

// Isolation probe: bind pe via an out-of-line self() that returns this —
// does MSVC emit `call ctor; ... call self; mov esi,eax`?
struct EvProps { virtual void slot(void *, unsigned); };
struct EvCopy { void *text, *id, *properties, *iface, *head, *size; };
struct Ev { EvCopy rep; Ev(); ~Ev(); Ev *self(); };
struct EvDisp { void dispatch(Ev *); };

struct CB {
    int m0, m1, m2, m3;
    void FUN_probe(unsigned arg);
};

void CB::FUN_probe(unsigned arg) {
    Ev event;
    Ev *pe = event.self();
    ((EvProps *)pe->rep.properties)->slot(0, arg);
    ((EvDisp *)((char *)this - 0x10))->dispatch(pe);
}

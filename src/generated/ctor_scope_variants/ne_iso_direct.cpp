// Isolation probe: no explicit pe; access event member directly and pass
// &event to dispatch — does MSVC cache &event in a callee-saved register?
struct EvProps { virtual void slot(void *, unsigned); };
struct EvCopy { void *text, *id, *properties, *iface, *head, *size; };
struct Ev { EvCopy rep; Ev(); ~Ev(); };
struct EvDisp { void dispatch(Ev *); };

struct CB {
    int m0, m1, m2, m3;
    void FUN_probe(unsigned arg);
};

void CB::FUN_probe(unsigned arg) {
    Ev event;
    ((EvProps *)event.rep.properties)->slot(0, arg);
    ((EvDisp *)((char *)this - 0x10))->dispatch(&event);
}

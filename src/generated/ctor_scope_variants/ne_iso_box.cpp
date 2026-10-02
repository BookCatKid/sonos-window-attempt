// Isolation probe: tracked container whose dtor destructs a placement-new
// member. Tests whether pe=eax survives while the event stays EH-covered.
inline void *operator new(unsigned int, void *p) noexcept { return p; }

struct EvProps { virtual void slot(void *, unsigned); };
struct EvCopy { void *text, *id, *properties, *iface, *head, *size; };
struct Ev { EvCopy rep; Ev(); ~Ev(); };
struct EvDisp { void dispatch(Ev *); };

struct EvBox {
    union { void *p[6]; Ev e; };
    EvBox() {}
    ~EvBox() { e.~Ev(); }
};

struct CB {
    int m0, m1, m2, m3;
    void FUN_probe(unsigned arg) {
        EvBox box;
        Ev *pe = (Ev *)new (&box.e) Ev();
        ((EvProps *)pe->rep.properties)->slot(0, arg);
        ((EvDisp *)((char *)this - 0x10))->dispatch(pe);
    }
};

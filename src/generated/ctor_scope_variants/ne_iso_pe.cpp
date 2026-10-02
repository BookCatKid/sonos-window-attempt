// Minimal isolation probe: does MSVC bind `pe=&event` to the ctor's eax
// return, or fold it to a stack `lea`? Mirrors FUN_10e026f0's shape.
inline void *operator new(unsigned int, void *p) noexcept { return p; }

struct EvProps { virtual void slot(void *, unsigned); };
struct EvCopy { void *text, *id, *properties, *iface, *head, *size; };
struct Ev { EvCopy rep; Ev(); ~Ev(); };
struct EvStr { void *rep; EvStr(const char *); ~EvStr(); };
struct EvDisp { void dispatch(Ev *); };

struct CB {
    int m0, m1, m2, m3;   // dispatcher lands at this-0x10
    void FUN_probe(unsigned arg) {
        Ev event;
        Ev *pe = &event;
        ((EvProps *)pe->rep.properties)->slot(0, arg);
        ((EvDisp *)((char *)this - 0x10))->dispatch(pe);
    }
};

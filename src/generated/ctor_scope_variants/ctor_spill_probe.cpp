extern int vftable;

// A: result = p upfront, all writes through p, return result
int __thiscall FUN_a(int *p, int a1) {
    int *result = p;
    p[1] = a1;
    *p = (int)&vftable;
    p[9] = (int)p;
    return (int)result;
}

// B: assignment subexpression p[9] = (int)(result = p)
int __thiscall FUN_b(int *p, int a1) {
    int *result;
    p[1] = a1;
    *p = (int)&vftable;
    p[9] = (int)(result = p);
    return (int)result;
}

// C: writes through result
int __thiscall FUN_c(int *p, int a1) {
    int *result = p;
    result[1] = a1;
    *result = (int)&vftable;
    result[9] = (int)result;
    return (int)result;
}

// D: result declared then assigned mid-body
int __thiscall FUN_d(int *p, int a1) {
    int *result;
    p[1] = a1;
    *p = (int)&vftable;
    result = p;
    p[9] = (int)p;
    return (int)result;
}

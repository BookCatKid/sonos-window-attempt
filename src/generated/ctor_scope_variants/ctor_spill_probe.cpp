extern int vftable;

// F: result materialized, all writes through result
int __fastcall FUN_f(int *p, int edx_, int a1) {
    int result = (int)p;
    *(int*)(result + 4) = a1;
    *(int*)result = (int)&vftable;
    *(int*)(result + 0x24) = (int)p;
    return result;
}

// G: reassign result before f36 store
int __fastcall FUN_g(int *p, int edx_, int a1) {
    int result = (int)p;
    *(int*)(result + 4) = a1;
    *(int*)result = (int)&vftable;
    result = (int)p;
    *(int*)(result + 0x24) = (int)p;
    return result;
}

// H: assign-subexpression feeding the f36 store
int __fastcall FUN_h(int *p, int edx_, int a1) {
    int *result;
    p[1] = a1;
    *p = (int)&vftable;
    p[9] = (int)(result = p);
    return (int)result;
}

// I: p spilled via named local that gets reassigned (post-inc style)
int __fastcall FUN_i(int *p, int edx_, int a1) {
    int result;
    p[1] = a1;
    *p = (int)&vftable;
    result = (int)p;
    *(int*)(result + 0x24) = (int)p;
    return result;
}

// J: two locals
int __fastcall FUN_j(int *p, int edx_, int a1) {
    int result = (int)p;
    int other = a1;
    *(int*)(result + 4) = other;
    *(int*)result = (int)&vftable;
    *(int*)(result + 0x24) = result;
    return result;
}

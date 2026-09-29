// Recovered C++ for repeated cleanup functions, one body per entry.
struct CleanupRef {
    virtual void Reserved0();
    virtual void Reserved1();
    virtual void Release();
};
struct CleanupResource {
    virtual void Reserved0();
    virtual void Reserved1();
    virtual void Reserved2();
    virtual void Reserved3();
    virtual void Dispose(bool owned);
};

// Reference entry 0x101bb140
extern "C" __declspec(noinline) void __fastcall ClearTwoFields_101bb140(void* raw) {
    struct Fields { void* target; CleanupRef* counter; };
    Fields* value = static_cast<Fields*>(raw);
    CleanupRef* old = value->counter;
    value->target = nullptr;
    value->counter = nullptr;
    if (old != nullptr) {
        old->Release();
        value->target = nullptr;
        value->counter = nullptr;
    }
}

// Reference entry 0x101d8e80
extern "C" __declspec(noinline) void __fastcall ClearTwoFields_101d8e80(void* raw) {
    struct Fields { void* target; CleanupRef* counter; };
    Fields* value = static_cast<Fields*>(raw);
    CleanupRef* old = value->counter;
    value->target = nullptr;
    value->counter = nullptr;
    if (old != nullptr) {
        old->Release();
        value->target = nullptr;
        value->counter = nullptr;
    }
}

// Reference entry 0x101d8ec0
extern "C" __declspec(noinline) void __fastcall ClearTwoFields_101d8ec0(void* raw) {
    struct Fields { void* target; CleanupRef* counter; };
    Fields* value = static_cast<Fields*>(raw);
    CleanupRef* old = value->counter;
    value->target = nullptr;
    value->counter = nullptr;
    if (old != nullptr) {
        old->Release();
        value->target = nullptr;
        value->counter = nullptr;
    }
}

// Reference entry 0x1020a380
extern "C" __declspec(noinline) void __fastcall ClearTwoFields_1020a380(void* raw) {
    struct Fields { void* target; CleanupRef* counter; };
    Fields* value = static_cast<Fields*>(raw);
    CleanupRef* old = value->counter;
    value->target = nullptr;
    value->counter = nullptr;
    if (old != nullptr) {
        old->Release();
        value->target = nullptr;
        value->counter = nullptr;
    }
}

// Reference entry 0x1020a3c0
extern "C" __declspec(noinline) void __fastcall ClearTwoFields_1020a3c0(void* raw) {
    struct Fields { void* target; CleanupRef* counter; };
    Fields* value = static_cast<Fields*>(raw);
    CleanupRef* old = value->counter;
    value->target = nullptr;
    value->counter = nullptr;
    if (old != nullptr) {
        old->Release();
        value->target = nullptr;
        value->counter = nullptr;
    }
}

// Reference entry 0x1026aee0
extern "C" __declspec(noinline) void __fastcall ClearTwoFields_1026aee0(void* raw) {
    struct Fields { void* target; CleanupRef* counter; };
    Fields* value = static_cast<Fields*>(raw);
    CleanupRef* old = value->counter;
    value->target = nullptr;
    value->counter = nullptr;
    if (old != nullptr) {
        old->Release();
        value->target = nullptr;
        value->counter = nullptr;
    }
}

// Reference entry 0x1026af20
extern "C" __declspec(noinline) void __fastcall ClearTwoFields_1026af20(void* raw) {
    struct Fields { void* target; CleanupRef* counter; };
    Fields* value = static_cast<Fields*>(raw);
    CleanupRef* old = value->counter;
    value->target = nullptr;
    value->counter = nullptr;
    if (old != nullptr) {
        old->Release();
        value->target = nullptr;
        value->counter = nullptr;
    }
}

// Reference entry 0x102c6f50
extern "C" __declspec(noinline) void __fastcall ClearTwoFields_102c6f50(void* raw) {
    struct Fields { void* target; CleanupRef* counter; };
    Fields* value = static_cast<Fields*>(raw);
    CleanupRef* old = value->counter;
    value->target = nullptr;
    value->counter = nullptr;
    if (old != nullptr) {
        old->Release();
        value->target = nullptr;
        value->counter = nullptr;
    }
}

// Reference entry 0x102cf5a0
extern "C" __declspec(noinline) void __fastcall ClearTwoFields_102cf5a0(void* raw) {
    struct Fields { void* target; CleanupRef* counter; };
    Fields* value = static_cast<Fields*>(raw);
    CleanupRef* old = value->counter;
    value->target = nullptr;
    value->counter = nullptr;
    if (old != nullptr) {
        old->Release();
        value->target = nullptr;
        value->counter = nullptr;
    }
}

// Reference entry 0x102f45b0
extern "C" __declspec(noinline) void __fastcall ClearTwoFields_102f45b0(void* raw) {
    struct Fields { void* target; CleanupRef* counter; };
    Fields* value = static_cast<Fields*>(raw);
    CleanupRef* old = value->counter;
    value->target = nullptr;
    value->counter = nullptr;
    if (old != nullptr) {
        old->Release();
        value->target = nullptr;
        value->counter = nullptr;
    }
}

// Reference entry 0x102f45f0
extern "C" __declspec(noinline) void __fastcall ClearTwoFields_102f45f0(void* raw) {
    struct Fields { void* target; CleanupRef* counter; };
    Fields* value = static_cast<Fields*>(raw);
    CleanupRef* old = value->counter;
    value->target = nullptr;
    value->counter = nullptr;
    if (old != nullptr) {
        old->Release();
        value->target = nullptr;
        value->counter = nullptr;
    }
}

// Reference entry 0x102f4630
extern "C" __declspec(noinline) void __fastcall ClearTwoFields_102f4630(void* raw) {
    struct Fields { void* target; CleanupRef* counter; };
    Fields* value = static_cast<Fields*>(raw);
    CleanupRef* old = value->counter;
    value->target = nullptr;
    value->counter = nullptr;
    if (old != nullptr) {
        old->Release();
        value->target = nullptr;
        value->counter = nullptr;
    }
}

// Reference entry 0x102f4670
extern "C" __declspec(noinline) void __fastcall ClearTwoFields_102f4670(void* raw) {
    struct Fields { void* target; CleanupRef* counter; };
    Fields* value = static_cast<Fields*>(raw);
    CleanupRef* old = value->counter;
    value->target = nullptr;
    value->counter = nullptr;
    if (old != nullptr) {
        old->Release();
        value->target = nullptr;
        value->counter = nullptr;
    }
}

// Reference entry 0x1031dc80
extern "C" __declspec(noinline) void __fastcall ClearTwoFields_1031dc80(void* raw) {
    struct Fields { void* target; CleanupRef* counter; };
    Fields* value = static_cast<Fields*>(raw);
    CleanupRef* old = value->counter;
    value->target = nullptr;
    value->counter = nullptr;
    if (old != nullptr) {
        old->Release();
        value->target = nullptr;
        value->counter = nullptr;
    }
}

// Reference entry 0x1031dcc0
extern "C" __declspec(noinline) void __fastcall ClearTwoFields_1031dcc0(void* raw) {
    struct Fields { void* target; CleanupRef* counter; };
    Fields* value = static_cast<Fields*>(raw);
    CleanupRef* old = value->counter;
    value->target = nullptr;
    value->counter = nullptr;
    if (old != nullptr) {
        old->Release();
        value->target = nullptr;
        value->counter = nullptr;
    }
}

// Reference entry 0x1031dd00
extern "C" __declspec(noinline) void __fastcall ClearTwoFields_1031dd00(void* raw) {
    struct Fields { void* target; CleanupRef* counter; };
    Fields* value = static_cast<Fields*>(raw);
    CleanupRef* old = value->counter;
    value->target = nullptr;
    value->counter = nullptr;
    if (old != nullptr) {
        old->Release();
        value->target = nullptr;
        value->counter = nullptr;
    }
}

// Reference entry 0x1031dd40
extern "C" __declspec(noinline) void __fastcall ClearTwoFields_1031dd40(void* raw) {
    struct Fields { void* target; CleanupRef* counter; };
    Fields* value = static_cast<Fields*>(raw);
    CleanupRef* old = value->counter;
    value->target = nullptr;
    value->counter = nullptr;
    if (old != nullptr) {
        old->Release();
        value->target = nullptr;
        value->counter = nullptr;
    }
}

// Reference entry 0x1033c780
extern "C" __declspec(noinline) void __fastcall ClearTwoFields_1033c780(void* raw) {
    struct Fields { void* target; CleanupRef* counter; };
    Fields* value = static_cast<Fields*>(raw);
    CleanupRef* old = value->counter;
    value->target = nullptr;
    value->counter = nullptr;
    if (old != nullptr) {
        old->Release();
        value->target = nullptr;
        value->counter = nullptr;
    }
}

// Reference entry 0x1033c7c0
extern "C" __declspec(noinline) void __fastcall ClearTwoFields_1033c7c0(void* raw) {
    struct Fields { void* target; CleanupRef* counter; };
    Fields* value = static_cast<Fields*>(raw);
    CleanupRef* old = value->counter;
    value->target = nullptr;
    value->counter = nullptr;
    if (old != nullptr) {
        old->Release();
        value->target = nullptr;
        value->counter = nullptr;
    }
}

// Reference entry 0x10377700
extern "C" __declspec(noinline) void __fastcall ClearTwoFields_10377700(void* raw) {
    struct Fields { void* target; CleanupRef* counter; };
    Fields* value = static_cast<Fields*>(raw);
    CleanupRef* old = value->counter;
    value->target = nullptr;
    value->counter = nullptr;
    if (old != nullptr) {
        old->Release();
        value->target = nullptr;
        value->counter = nullptr;
    }
}

// Reference entry 0x10377740
extern "C" __declspec(noinline) void __fastcall ClearTwoFields_10377740(void* raw) {
    struct Fields { void* target; CleanupRef* counter; };
    Fields* value = static_cast<Fields*>(raw);
    CleanupRef* old = value->counter;
    value->target = nullptr;
    value->counter = nullptr;
    if (old != nullptr) {
        old->Release();
        value->target = nullptr;
        value->counter = nullptr;
    }
}

// Reference entry 0x10377780
extern "C" __declspec(noinline) void __fastcall ClearTwoFields_10377780(void* raw) {
    struct Fields { void* target; CleanupRef* counter; };
    Fields* value = static_cast<Fields*>(raw);
    CleanupRef* old = value->counter;
    value->target = nullptr;
    value->counter = nullptr;
    if (old != nullptr) {
        old->Release();
        value->target = nullptr;
        value->counter = nullptr;
    }
}

// Reference entry 0x103777c0
extern "C" __declspec(noinline) void __fastcall ClearTwoFields_103777c0(void* raw) {
    struct Fields { void* target; CleanupRef* counter; };
    Fields* value = static_cast<Fields*>(raw);
    CleanupRef* old = value->counter;
    value->target = nullptr;
    value->counter = nullptr;
    if (old != nullptr) {
        old->Release();
        value->target = nullptr;
        value->counter = nullptr;
    }
}

// Reference entry 0x10377800
extern "C" __declspec(noinline) void __fastcall ClearTwoFields_10377800(void* raw) {
    struct Fields { void* target; CleanupRef* counter; };
    Fields* value = static_cast<Fields*>(raw);
    CleanupRef* old = value->counter;
    value->target = nullptr;
    value->counter = nullptr;
    if (old != nullptr) {
        old->Release();
        value->target = nullptr;
        value->counter = nullptr;
    }
}

// Reference entry 0x10377840
extern "C" __declspec(noinline) void __fastcall ClearTwoFields_10377840(void* raw) {
    struct Fields { void* target; CleanupRef* counter; };
    Fields* value = static_cast<Fields*>(raw);
    CleanupRef* old = value->counter;
    value->target = nullptr;
    value->counter = nullptr;
    if (old != nullptr) {
        old->Release();
        value->target = nullptr;
        value->counter = nullptr;
    }
}

// Reference entry 0x10377880
extern "C" __declspec(noinline) void __fastcall ClearTwoFields_10377880(void* raw) {
    struct Fields { void* target; CleanupRef* counter; };
    Fields* value = static_cast<Fields*>(raw);
    CleanupRef* old = value->counter;
    value->target = nullptr;
    value->counter = nullptr;
    if (old != nullptr) {
        old->Release();
        value->target = nullptr;
        value->counter = nullptr;
    }
}

// Reference entry 0x103778c0
extern "C" __declspec(noinline) void __fastcall ClearTwoFields_103778c0(void* raw) {
    struct Fields { void* target; CleanupRef* counter; };
    Fields* value = static_cast<Fields*>(raw);
    CleanupRef* old = value->counter;
    value->target = nullptr;
    value->counter = nullptr;
    if (old != nullptr) {
        old->Release();
        value->target = nullptr;
        value->counter = nullptr;
    }
}

// Reference entry 0x10377900
extern "C" __declspec(noinline) void __fastcall ClearTwoFields_10377900(void* raw) {
    struct Fields { void* target; CleanupRef* counter; };
    Fields* value = static_cast<Fields*>(raw);
    CleanupRef* old = value->counter;
    value->target = nullptr;
    value->counter = nullptr;
    if (old != nullptr) {
        old->Release();
        value->target = nullptr;
        value->counter = nullptr;
    }
}

// Reference entry 0x10377940
extern "C" __declspec(noinline) void __fastcall ClearTwoFields_10377940(void* raw) {
    struct Fields { void* target; CleanupRef* counter; };
    Fields* value = static_cast<Fields*>(raw);
    CleanupRef* old = value->counter;
    value->target = nullptr;
    value->counter = nullptr;
    if (old != nullptr) {
        old->Release();
        value->target = nullptr;
        value->counter = nullptr;
    }
}

// Reference entry 0x10377980
extern "C" __declspec(noinline) void __fastcall ClearTwoFields_10377980(void* raw) {
    struct Fields { void* target; CleanupRef* counter; };
    Fields* value = static_cast<Fields*>(raw);
    CleanupRef* old = value->counter;
    value->target = nullptr;
    value->counter = nullptr;
    if (old != nullptr) {
        old->Release();
        value->target = nullptr;
        value->counter = nullptr;
    }
}

// Reference entry 0x103779c0
extern "C" __declspec(noinline) void __fastcall ClearTwoFields_103779c0(void* raw) {
    struct Fields { void* target; CleanupRef* counter; };
    Fields* value = static_cast<Fields*>(raw);
    CleanupRef* old = value->counter;
    value->target = nullptr;
    value->counter = nullptr;
    if (old != nullptr) {
        old->Release();
        value->target = nullptr;
        value->counter = nullptr;
    }
}

// Reference entry 0x10377a00
extern "C" __declspec(noinline) void __fastcall ClearTwoFields_10377a00(void* raw) {
    struct Fields { void* target; CleanupRef* counter; };
    Fields* value = static_cast<Fields*>(raw);
    CleanupRef* old = value->counter;
    value->target = nullptr;
    value->counter = nullptr;
    if (old != nullptr) {
        old->Release();
        value->target = nullptr;
        value->counter = nullptr;
    }
}

// Reference entry 0x10377a40
extern "C" __declspec(noinline) void __fastcall ClearTwoFields_10377a40(void* raw) {
    struct Fields { void* target; CleanupRef* counter; };
    Fields* value = static_cast<Fields*>(raw);
    CleanupRef* old = value->counter;
    value->target = nullptr;
    value->counter = nullptr;
    if (old != nullptr) {
        old->Release();
        value->target = nullptr;
        value->counter = nullptr;
    }
}

// Reference entry 0x103a14f0
extern "C" __declspec(noinline) void __fastcall ClearTwoFields_103a14f0(void* raw) {
    struct Fields { void* target; CleanupRef* counter; };
    Fields* value = static_cast<Fields*>(raw);
    CleanupRef* old = value->counter;
    value->target = nullptr;
    value->counter = nullptr;
    if (old != nullptr) {
        old->Release();
        value->target = nullptr;
        value->counter = nullptr;
    }
}

// Reference entry 0x103c7610
extern "C" __declspec(noinline) void __fastcall ClearTwoFields_103c7610(void* raw) {
    struct Fields { void* target; CleanupRef* counter; };
    Fields* value = static_cast<Fields*>(raw);
    CleanupRef* old = value->counter;
    value->target = nullptr;
    value->counter = nullptr;
    if (old != nullptr) {
        old->Release();
        value->target = nullptr;
        value->counter = nullptr;
    }
}

// Reference entry 0x103c7650
extern "C" __declspec(noinline) void __fastcall ClearTwoFields_103c7650(void* raw) {
    struct Fields { void* target; CleanupRef* counter; };
    Fields* value = static_cast<Fields*>(raw);
    CleanupRef* old = value->counter;
    value->target = nullptr;
    value->counter = nullptr;
    if (old != nullptr) {
        old->Release();
        value->target = nullptr;
        value->counter = nullptr;
    }
}

// Reference entry 0x104d1450
extern "C" __declspec(noinline) void __fastcall ClearTwoFields_104d1450(void* raw) {
    struct Fields { void* target; CleanupRef* counter; };
    Fields* value = static_cast<Fields*>(raw);
    CleanupRef* old = value->counter;
    value->target = nullptr;
    value->counter = nullptr;
    if (old != nullptr) {
        old->Release();
        value->target = nullptr;
        value->counter = nullptr;
    }
}

// Reference entry 0x104ea0c0
extern "C" __declspec(noinline) void __fastcall ClearTwoFields_104ea0c0(void* raw) {
    struct Fields { void* target; CleanupRef* counter; };
    Fields* value = static_cast<Fields*>(raw);
    CleanupRef* old = value->counter;
    value->target = nullptr;
    value->counter = nullptr;
    if (old != nullptr) {
        old->Release();
        value->target = nullptr;
        value->counter = nullptr;
    }
}

// Reference entry 0x104ede70
extern "C" __declspec(noinline) void __fastcall ClearTwoFields_104ede70(void* raw) {
    struct Fields { void* target; CleanupRef* counter; };
    Fields* value = static_cast<Fields*>(raw);
    CleanupRef* old = value->counter;
    value->target = nullptr;
    value->counter = nullptr;
    if (old != nullptr) {
        old->Release();
        value->target = nullptr;
        value->counter = nullptr;
    }
}

// Reference entry 0x104edeb0
extern "C" __declspec(noinline) void __fastcall ClearTwoFields_104edeb0(void* raw) {
    struct Fields { void* target; CleanupRef* counter; };
    Fields* value = static_cast<Fields*>(raw);
    CleanupRef* old = value->counter;
    value->target = nullptr;
    value->counter = nullptr;
    if (old != nullptr) {
        old->Release();
        value->target = nullptr;
        value->counter = nullptr;
    }
}

// Reference entry 0x10513690
extern "C" __declspec(noinline) void __fastcall ClearTwoFields_10513690(void* raw) {
    struct Fields { void* target; CleanupRef* counter; };
    Fields* value = static_cast<Fields*>(raw);
    CleanupRef* old = value->counter;
    value->target = nullptr;
    value->counter = nullptr;
    if (old != nullptr) {
        old->Release();
        value->target = nullptr;
        value->counter = nullptr;
    }
}

// Reference entry 0x1051fa00
extern "C" __declspec(noinline) void __fastcall ClearTwoFields_1051fa00(void* raw) {
    struct Fields { void* target; CleanupRef* counter; };
    Fields* value = static_cast<Fields*>(raw);
    CleanupRef* old = value->counter;
    value->target = nullptr;
    value->counter = nullptr;
    if (old != nullptr) {
        old->Release();
        value->target = nullptr;
        value->counter = nullptr;
    }
}

// Reference entry 0x1051fa40
extern "C" __declspec(noinline) void __fastcall ClearTwoFields_1051fa40(void* raw) {
    struct Fields { void* target; CleanupRef* counter; };
    Fields* value = static_cast<Fields*>(raw);
    CleanupRef* old = value->counter;
    value->target = nullptr;
    value->counter = nullptr;
    if (old != nullptr) {
        old->Release();
        value->target = nullptr;
        value->counter = nullptr;
    }
}

// Reference entry 0x10532df0
extern "C" __declspec(noinline) void __fastcall ClearTwoFields_10532df0(void* raw) {
    struct Fields { void* target; CleanupRef* counter; };
    Fields* value = static_cast<Fields*>(raw);
    CleanupRef* old = value->counter;
    value->target = nullptr;
    value->counter = nullptr;
    if (old != nullptr) {
        old->Release();
        value->target = nullptr;
        value->counter = nullptr;
    }
}

// Reference entry 0x10532e30
extern "C" __declspec(noinline) void __fastcall ClearTwoFields_10532e30(void* raw) {
    struct Fields { void* target; CleanupRef* counter; };
    Fields* value = static_cast<Fields*>(raw);
    CleanupRef* old = value->counter;
    value->target = nullptr;
    value->counter = nullptr;
    if (old != nullptr) {
        old->Release();
        value->target = nullptr;
        value->counter = nullptr;
    }
}

// Reference entry 0x105809d0
extern "C" __declspec(noinline) void __fastcall ClearTwoFields_105809d0(void* raw) {
    struct Fields { void* target; CleanupRef* counter; };
    Fields* value = static_cast<Fields*>(raw);
    CleanupRef* old = value->counter;
    value->target = nullptr;
    value->counter = nullptr;
    if (old != nullptr) {
        old->Release();
        value->target = nullptr;
        value->counter = nullptr;
    }
}

// Reference entry 0x1058c3d0
extern "C" __declspec(noinline) void __fastcall ClearTwoFields_1058c3d0(void* raw) {
    struct Fields { void* target; CleanupRef* counter; };
    Fields* value = static_cast<Fields*>(raw);
    CleanupRef* old = value->counter;
    value->target = nullptr;
    value->counter = nullptr;
    if (old != nullptr) {
        old->Release();
        value->target = nullptr;
        value->counter = nullptr;
    }
}

// Reference entry 0x1058c410
extern "C" __declspec(noinline) void __fastcall ClearTwoFields_1058c410(void* raw) {
    struct Fields { void* target; CleanupRef* counter; };
    Fields* value = static_cast<Fields*>(raw);
    CleanupRef* old = value->counter;
    value->target = nullptr;
    value->counter = nullptr;
    if (old != nullptr) {
        old->Release();
        value->target = nullptr;
        value->counter = nullptr;
    }
}

// Reference entry 0x10b6eb50
extern "C" __declspec(noinline) void __fastcall ClearTwoFields_10b6eb50(void* raw) {
    struct Fields { void* target; CleanupRef* counter; };
    Fields* value = static_cast<Fields*>(raw);
    CleanupRef* old = value->counter;
    value->target = nullptr;
    value->counter = nullptr;
    if (old != nullptr) {
        old->Release();
        value->target = nullptr;
        value->counter = nullptr;
    }
}

// Reference entry 0x10b6eb90
extern "C" __declspec(noinline) void __fastcall ClearTwoFields_10b6eb90(void* raw) {
    struct Fields { void* target; CleanupRef* counter; };
    Fields* value = static_cast<Fields*>(raw);
    CleanupRef* old = value->counter;
    value->target = nullptr;
    value->counter = nullptr;
    if (old != nullptr) {
        old->Release();
        value->target = nullptr;
        value->counter = nullptr;
    }
}

// Reference entry 0x10b6ebd0
extern "C" __declspec(noinline) void __fastcall ClearTwoFields_10b6ebd0(void* raw) {
    struct Fields { void* target; CleanupRef* counter; };
    Fields* value = static_cast<Fields*>(raw);
    CleanupRef* old = value->counter;
    value->target = nullptr;
    value->counter = nullptr;
    if (old != nullptr) {
        old->Release();
        value->target = nullptr;
        value->counter = nullptr;
    }
}

// Reference entry 0x10b77ea0
extern "C" __declspec(noinline) void __fastcall ClearTwoFields_10b77ea0(void* raw) {
    struct Fields { void* target; CleanupRef* counter; };
    Fields* value = static_cast<Fields*>(raw);
    CleanupRef* old = value->counter;
    value->target = nullptr;
    value->counter = nullptr;
    if (old != nullptr) {
        old->Release();
        value->target = nullptr;
        value->counter = nullptr;
    }
}

// Reference entry 0x10bab370
extern "C" __declspec(noinline) void __fastcall ClearTwoFields_10bab370(void* raw) {
    struct Fields { void* target; CleanupRef* counter; };
    Fields* value = static_cast<Fields*>(raw);
    CleanupRef* old = value->counter;
    value->target = nullptr;
    value->counter = nullptr;
    if (old != nullptr) {
        old->Release();
        value->target = nullptr;
        value->counter = nullptr;
    }
}

// Reference entry 0x10c8d180
extern "C" __declspec(noinline) void __fastcall ClearTwoFields_10c8d180(void* raw) {
    struct Fields { void* target; CleanupRef* counter; };
    Fields* value = static_cast<Fields*>(raw);
    CleanupRef* old = value->counter;
    value->target = nullptr;
    value->counter = nullptr;
    if (old != nullptr) {
        old->Release();
        value->target = nullptr;
        value->counter = nullptr;
    }
}

// Reference entry 0x10ce0010
extern "C" __declspec(noinline) void __fastcall ClearTwoFields_10ce0010(void* raw) {
    struct Fields { void* target; CleanupRef* counter; };
    Fields* value = static_cast<Fields*>(raw);
    CleanupRef* old = value->counter;
    value->target = nullptr;
    value->counter = nullptr;
    if (old != nullptr) {
        old->Release();
        value->target = nullptr;
        value->counter = nullptr;
    }
}

// Reference entry 0x10d59da0
extern "C" __declspec(noinline) void __fastcall ClearTwoFields_10d59da0(void* raw) {
    struct Fields { void* target; CleanupRef* counter; };
    Fields* value = static_cast<Fields*>(raw);
    CleanupRef* old = value->counter;
    value->target = nullptr;
    value->counter = nullptr;
    if (old != nullptr) {
        old->Release();
        value->target = nullptr;
        value->counter = nullptr;
    }
}

// Reference entry 0x10d59de0
extern "C" __declspec(noinline) void __fastcall ClearTwoFields_10d59de0(void* raw) {
    struct Fields { void* target; CleanupRef* counter; };
    Fields* value = static_cast<Fields*>(raw);
    CleanupRef* old = value->counter;
    value->target = nullptr;
    value->counter = nullptr;
    if (old != nullptr) {
        old->Release();
        value->target = nullptr;
        value->counter = nullptr;
    }
}

// Reference entry 0x10dd2650
extern "C" __declspec(noinline) void __fastcall ClearTwoFields_10dd2650(void* raw) {
    struct Fields { void* target; CleanupRef* counter; };
    Fields* value = static_cast<Fields*>(raw);
    CleanupRef* old = value->counter;
    value->target = nullptr;
    value->counter = nullptr;
    if (old != nullptr) {
        old->Release();
        value->target = nullptr;
        value->counter = nullptr;
    }
}

// Reference entry 0x10f420e0
extern "C" __declspec(noinline) void __fastcall ClearTwoFields_10f420e0(void* raw) {
    struct Fields { void* target; CleanupRef* counter; };
    Fields* value = static_cast<Fields*>(raw);
    CleanupRef* old = value->counter;
    value->target = nullptr;
    value->counter = nullptr;
    if (old != nullptr) {
        old->Release();
        value->target = nullptr;
        value->counter = nullptr;
    }
}

// Reference entry 0x10f42120
extern "C" __declspec(noinline) void __fastcall ClearTwoFields_10f42120(void* raw) {
    struct Fields { void* target; CleanupRef* counter; };
    Fields* value = static_cast<Fields*>(raw);
    CleanupRef* old = value->counter;
    value->target = nullptr;
    value->counter = nullptr;
    if (old != nullptr) {
        old->Release();
        value->target = nullptr;
        value->counter = nullptr;
    }
}

// Reference entry 0x10f42160
extern "C" __declspec(noinline) void __fastcall ClearTwoFields_10f42160(void* raw) {
    struct Fields { void* target; CleanupRef* counter; };
    Fields* value = static_cast<Fields*>(raw);
    CleanupRef* old = value->counter;
    value->target = nullptr;
    value->counter = nullptr;
    if (old != nullptr) {
        old->Release();
        value->target = nullptr;
        value->counter = nullptr;
    }
}

// Reference entry 0x10f421a0
extern "C" __declspec(noinline) void __fastcall ClearTwoFields_10f421a0(void* raw) {
    struct Fields { void* target; CleanupRef* counter; };
    Fields* value = static_cast<Fields*>(raw);
    CleanupRef* old = value->counter;
    value->target = nullptr;
    value->counter = nullptr;
    if (old != nullptr) {
        old->Release();
        value->target = nullptr;
        value->counter = nullptr;
    }
}

// Reference entry 0x10f459d0
extern "C" __declspec(noinline) void __fastcall ClearTwoFields_10f459d0(void* raw) {
    struct Fields { void* target; CleanupRef* counter; };
    Fields* value = static_cast<Fields*>(raw);
    CleanupRef* old = value->counter;
    value->target = nullptr;
    value->counter = nullptr;
    if (old != nullptr) {
        old->Release();
        value->target = nullptr;
        value->counter = nullptr;
    }
}

// Reference entry 0x1102ae40
extern "C" __declspec(noinline) void __fastcall ClearTwoFields_1102ae40(void* raw) {
    struct Fields { void* target; CleanupRef* counter; };
    Fields* value = static_cast<Fields*>(raw);
    CleanupRef* old = value->counter;
    value->target = nullptr;
    value->counter = nullptr;
    if (old != nullptr) {
        old->Release();
        value->target = nullptr;
        value->counter = nullptr;
    }
}

// Reference entry 0x1102ae80
extern "C" __declspec(noinline) void __fastcall ClearTwoFields_1102ae80(void* raw) {
    struct Fields { void* target; CleanupRef* counter; };
    Fields* value = static_cast<Fields*>(raw);
    CleanupRef* old = value->counter;
    value->target = nullptr;
    value->counter = nullptr;
    if (old != nullptr) {
        old->Release();
        value->target = nullptr;
        value->counter = nullptr;
    }
}

// Reference entry 0x11030440
extern "C" __declspec(noinline) void __fastcall ClearTwoFields_11030440(void* raw) {
    struct Fields { void* target; CleanupRef* counter; };
    Fields* value = static_cast<Fields*>(raw);
    CleanupRef* old = value->counter;
    value->target = nullptr;
    value->counter = nullptr;
    if (old != nullptr) {
        old->Release();
        value->target = nullptr;
        value->counter = nullptr;
    }
}

// Reference entry 0x101d4050
struct ResourceOwnerReturned_101d4050 {
    char precedingFields[36];
    CleanupResource* resource;
    __declspec(noinline) ResourceOwnerReturned_101d4050* Cleanup(void* unused);
};
ResourceOwnerReturned_101d4050* ResourceOwnerReturned_101d4050::Cleanup(void* unused) {
    CleanupResource* current = resource;
    if (current != nullptr) {
        current->Dispose(current != reinterpret_cast<CleanupResource*>(this));
        resource = nullptr;
    }
    return this;
}

// Reference entry 0x101d4080
struct ResourceOwnerReturned_101d4080 {
    char precedingFields[36];
    CleanupResource* resource;
    __declspec(noinline) ResourceOwnerReturned_101d4080* Cleanup(void* unused);
};
ResourceOwnerReturned_101d4080* ResourceOwnerReturned_101d4080::Cleanup(void* unused) {
    CleanupResource* current = resource;
    if (current != nullptr) {
        current->Dispose(current != reinterpret_cast<CleanupResource*>(this));
        resource = nullptr;
    }
    return this;
}

// Reference entry 0x102c52f0
struct ResourceOwnerReturned_102c52f0 {
    char precedingFields[36];
    CleanupResource* resource;
    __declspec(noinline) ResourceOwnerReturned_102c52f0* Cleanup(void* unused);
};
ResourceOwnerReturned_102c52f0* ResourceOwnerReturned_102c52f0::Cleanup(void* unused) {
    CleanupResource* current = resource;
    if (current != nullptr) {
        current->Dispose(current != reinterpret_cast<CleanupResource*>(this));
        resource = nullptr;
    }
    return this;
}

// Reference entry 0x102c5320
struct ResourceOwnerReturned_102c5320 {
    char precedingFields[36];
    CleanupResource* resource;
    __declspec(noinline) ResourceOwnerReturned_102c5320* Cleanup(void* unused);
};
ResourceOwnerReturned_102c5320* ResourceOwnerReturned_102c5320::Cleanup(void* unused) {
    CleanupResource* current = resource;
    if (current != nullptr) {
        current->Dispose(current != reinterpret_cast<CleanupResource*>(this));
        resource = nullptr;
    }
    return this;
}

// Reference entry 0x102cd310
struct ResourceOwnerReturned_102cd310 {
    char precedingFields[36];
    CleanupResource* resource;
    __declspec(noinline) ResourceOwnerReturned_102cd310* Cleanup(void* unused);
};
ResourceOwnerReturned_102cd310* ResourceOwnerReturned_102cd310::Cleanup(void* unused) {
    CleanupResource* current = resource;
    if (current != nullptr) {
        current->Dispose(current != reinterpret_cast<CleanupResource*>(this));
        resource = nullptr;
    }
    return this;
}

// Reference entry 0x102cd340
struct ResourceOwnerReturned_102cd340 {
    char precedingFields[36];
    CleanupResource* resource;
    __declspec(noinline) ResourceOwnerReturned_102cd340* Cleanup(void* unused);
};
ResourceOwnerReturned_102cd340* ResourceOwnerReturned_102cd340::Cleanup(void* unused) {
    CleanupResource* current = resource;
    if (current != nullptr) {
        current->Dispose(current != reinterpret_cast<CleanupResource*>(this));
        resource = nullptr;
    }
    return this;
}

// Reference entry 0x10366590
struct ResourceOwnerReturned_10366590 {
    char precedingFields[36];
    CleanupResource* resource;
    __declspec(noinline) ResourceOwnerReturned_10366590* Cleanup(void* unused);
};
ResourceOwnerReturned_10366590* ResourceOwnerReturned_10366590::Cleanup(void* unused) {
    CleanupResource* current = resource;
    if (current != nullptr) {
        current->Dispose(current != reinterpret_cast<CleanupResource*>(this));
        resource = nullptr;
    }
    return this;
}

// Reference entry 0x103c3460
struct ResourceOwnerReturned_103c3460 {
    char precedingFields[36];
    CleanupResource* resource;
    __declspec(noinline) ResourceOwnerReturned_103c3460* Cleanup(void* unused);
};
ResourceOwnerReturned_103c3460* ResourceOwnerReturned_103c3460::Cleanup(void* unused) {
    CleanupResource* current = resource;
    if (current != nullptr) {
        current->Dispose(current != reinterpret_cast<CleanupResource*>(this));
        resource = nullptr;
    }
    return this;
}

// Reference entry 0x103c3490
struct ResourceOwnerReturned_103c3490 {
    char precedingFields[36];
    CleanupResource* resource;
    __declspec(noinline) ResourceOwnerReturned_103c3490* Cleanup(void* unused);
};
ResourceOwnerReturned_103c3490* ResourceOwnerReturned_103c3490::Cleanup(void* unused) {
    CleanupResource* current = resource;
    if (current != nullptr) {
        current->Dispose(current != reinterpret_cast<CleanupResource*>(this));
        resource = nullptr;
    }
    return this;
}

// Reference entry 0x103fb580
struct ResourceOwnerReturned_103fb580 {
    char precedingFields[36];
    CleanupResource* resource;
    __declspec(noinline) ResourceOwnerReturned_103fb580* Cleanup(void* unused);
};
ResourceOwnerReturned_103fb580* ResourceOwnerReturned_103fb580::Cleanup(void* unused) {
    CleanupResource* current = resource;
    if (current != nullptr) {
        current->Dispose(current != reinterpret_cast<CleanupResource*>(this));
        resource = nullptr;
    }
    return this;
}

// Reference entry 0x103fb5b0
struct ResourceOwnerReturned_103fb5b0 {
    char precedingFields[36];
    CleanupResource* resource;
    __declspec(noinline) ResourceOwnerReturned_103fb5b0* Cleanup(void* unused);
};
ResourceOwnerReturned_103fb5b0* ResourceOwnerReturned_103fb5b0::Cleanup(void* unused) {
    CleanupResource* current = resource;
    if (current != nullptr) {
        current->Dispose(current != reinterpret_cast<CleanupResource*>(this));
        resource = nullptr;
    }
    return this;
}

// Reference entry 0x103fb5e0
struct ResourceOwnerReturned_103fb5e0 {
    char precedingFields[36];
    CleanupResource* resource;
    __declspec(noinline) ResourceOwnerReturned_103fb5e0* Cleanup(void* unused);
};
ResourceOwnerReturned_103fb5e0* ResourceOwnerReturned_103fb5e0::Cleanup(void* unused) {
    CleanupResource* current = resource;
    if (current != nullptr) {
        current->Dispose(current != reinterpret_cast<CleanupResource*>(this));
        resource = nullptr;
    }
    return this;
}

// Reference entry 0x103fb610
struct ResourceOwnerReturned_103fb610 {
    char precedingFields[36];
    CleanupResource* resource;
    __declspec(noinline) ResourceOwnerReturned_103fb610* Cleanup(void* unused);
};
ResourceOwnerReturned_103fb610* ResourceOwnerReturned_103fb610::Cleanup(void* unused) {
    CleanupResource* current = resource;
    if (current != nullptr) {
        current->Dispose(current != reinterpret_cast<CleanupResource*>(this));
        resource = nullptr;
    }
    return this;
}

// Reference entry 0x1043aa40
struct ResourceOwnerReturned_1043aa40 {
    char precedingFields[36];
    CleanupResource* resource;
    __declspec(noinline) ResourceOwnerReturned_1043aa40* Cleanup(void* unused);
};
ResourceOwnerReturned_1043aa40* ResourceOwnerReturned_1043aa40::Cleanup(void* unused) {
    CleanupResource* current = resource;
    if (current != nullptr) {
        current->Dispose(current != reinterpret_cast<CleanupResource*>(this));
        resource = nullptr;
    }
    return this;
}

// Reference entry 0x104625c0
struct ResourceOwnerReturned_104625c0 {
    char precedingFields[36];
    CleanupResource* resource;
    __declspec(noinline) ResourceOwnerReturned_104625c0* Cleanup(void* unused);
};
ResourceOwnerReturned_104625c0* ResourceOwnerReturned_104625c0::Cleanup(void* unused) {
    CleanupResource* current = resource;
    if (current != nullptr) {
        current->Dispose(current != reinterpret_cast<CleanupResource*>(this));
        resource = nullptr;
    }
    return this;
}

// Reference entry 0x104ad670
struct ResourceOwnerReturned_104ad670 {
    char precedingFields[36];
    CleanupResource* resource;
    __declspec(noinline) ResourceOwnerReturned_104ad670* Cleanup(void* unused);
};
ResourceOwnerReturned_104ad670* ResourceOwnerReturned_104ad670::Cleanup(void* unused) {
    CleanupResource* current = resource;
    if (current != nullptr) {
        current->Dispose(current != reinterpret_cast<CleanupResource*>(this));
        resource = nullptr;
    }
    return this;
}

// Reference entry 0x106d01d0
struct ResourceOwnerReturned_106d01d0 {
    char precedingFields[36];
    CleanupResource* resource;
    __declspec(noinline) ResourceOwnerReturned_106d01d0* Cleanup(void* unused);
};
ResourceOwnerReturned_106d01d0* ResourceOwnerReturned_106d01d0::Cleanup(void* unused) {
    CleanupResource* current = resource;
    if (current != nullptr) {
        current->Dispose(current != reinterpret_cast<CleanupResource*>(this));
        resource = nullptr;
    }
    return this;
}

// Reference entry 0x10b99720
struct ResourceOwnerReturned_10b99720 {
    char precedingFields[36];
    CleanupResource* resource;
    __declspec(noinline) ResourceOwnerReturned_10b99720* Cleanup(void* unused);
};
ResourceOwnerReturned_10b99720* ResourceOwnerReturned_10b99720::Cleanup(void* unused) {
    CleanupResource* current = resource;
    if (current != nullptr) {
        current->Dispose(current != reinterpret_cast<CleanupResource*>(this));
        resource = nullptr;
    }
    return this;
}

// Reference entry 0x10bf0550
struct ResourceOwnerReturned_10bf0550 {
    char precedingFields[36];
    CleanupResource* resource;
    __declspec(noinline) ResourceOwnerReturned_10bf0550* Cleanup(void* unused);
};
ResourceOwnerReturned_10bf0550* ResourceOwnerReturned_10bf0550::Cleanup(void* unused) {
    CleanupResource* current = resource;
    if (current != nullptr) {
        current->Dispose(current != reinterpret_cast<CleanupResource*>(this));
        resource = nullptr;
    }
    return this;
}

// Reference entry 0x10c36500
struct ResourceOwnerReturned_10c36500 {
    char precedingFields[36];
    CleanupResource* resource;
    __declspec(noinline) ResourceOwnerReturned_10c36500* Cleanup(void* unused);
};
ResourceOwnerReturned_10c36500* ResourceOwnerReturned_10c36500::Cleanup(void* unused) {
    CleanupResource* current = resource;
    if (current != nullptr) {
        current->Dispose(current != reinterpret_cast<CleanupResource*>(this));
        resource = nullptr;
    }
    return this;
}

// Reference entry 0x10c4b8b0
struct ResourceOwnerReturned_10c4b8b0 {
    char precedingFields[36];
    CleanupResource* resource;
    __declspec(noinline) ResourceOwnerReturned_10c4b8b0* Cleanup(void* unused);
};
ResourceOwnerReturned_10c4b8b0* ResourceOwnerReturned_10c4b8b0::Cleanup(void* unused) {
    CleanupResource* current = resource;
    if (current != nullptr) {
        current->Dispose(current != reinterpret_cast<CleanupResource*>(this));
        resource = nullptr;
    }
    return this;
}

// Reference entry 0x10cdc3e0
struct ResourceOwnerReturned_10cdc3e0 {
    char precedingFields[36];
    CleanupResource* resource;
    __declspec(noinline) ResourceOwnerReturned_10cdc3e0* Cleanup(void* unused);
};
ResourceOwnerReturned_10cdc3e0* ResourceOwnerReturned_10cdc3e0::Cleanup(void* unused) {
    CleanupResource* current = resource;
    if (current != nullptr) {
        current->Dispose(current != reinterpret_cast<CleanupResource*>(this));
        resource = nullptr;
    }
    return this;
}

// Reference entry 0x10ce7740
struct ResourceOwnerReturned_10ce7740 {
    char precedingFields[36];
    CleanupResource* resource;
    __declspec(noinline) ResourceOwnerReturned_10ce7740* Cleanup(void* unused);
};
ResourceOwnerReturned_10ce7740* ResourceOwnerReturned_10ce7740::Cleanup(void* unused) {
    CleanupResource* current = resource;
    if (current != nullptr) {
        current->Dispose(current != reinterpret_cast<CleanupResource*>(this));
        resource = nullptr;
    }
    return this;
}

// Reference entry 0x10ce7770
struct ResourceOwnerReturned_10ce7770 {
    char precedingFields[36];
    CleanupResource* resource;
    __declspec(noinline) ResourceOwnerReturned_10ce7770* Cleanup(void* unused);
};
ResourceOwnerReturned_10ce7770* ResourceOwnerReturned_10ce7770::Cleanup(void* unused) {
    CleanupResource* current = resource;
    if (current != nullptr) {
        current->Dispose(current != reinterpret_cast<CleanupResource*>(this));
        resource = nullptr;
    }
    return this;
}

// Reference entry 0x10ceeb90
struct ResourceOwnerReturned_10ceeb90 {
    char precedingFields[36];
    CleanupResource* resource;
    __declspec(noinline) ResourceOwnerReturned_10ceeb90* Cleanup(void* unused);
};
ResourceOwnerReturned_10ceeb90* ResourceOwnerReturned_10ceeb90::Cleanup(void* unused) {
    CleanupResource* current = resource;
    if (current != nullptr) {
        current->Dispose(current != reinterpret_cast<CleanupResource*>(this));
        resource = nullptr;
    }
    return this;
}

// Reference entry 0x10d75dc0
struct ResourceOwnerReturned_10d75dc0 {
    char precedingFields[36];
    CleanupResource* resource;
    __declspec(noinline) ResourceOwnerReturned_10d75dc0* Cleanup(void* unused);
};
ResourceOwnerReturned_10d75dc0* ResourceOwnerReturned_10d75dc0::Cleanup(void* unused) {
    CleanupResource* current = resource;
    if (current != nullptr) {
        current->Dispose(current != reinterpret_cast<CleanupResource*>(this));
        resource = nullptr;
    }
    return this;
}

// Reference entry 0x10d75df0
struct ResourceOwnerReturned_10d75df0 {
    char precedingFields[36];
    CleanupResource* resource;
    __declspec(noinline) ResourceOwnerReturned_10d75df0* Cleanup(void* unused);
};
ResourceOwnerReturned_10d75df0* ResourceOwnerReturned_10d75df0::Cleanup(void* unused) {
    CleanupResource* current = resource;
    if (current != nullptr) {
        current->Dispose(current != reinterpret_cast<CleanupResource*>(this));
        resource = nullptr;
    }
    return this;
}

// Reference entry 0x10d75e20
struct ResourceOwnerReturned_10d75e20 {
    char precedingFields[36];
    CleanupResource* resource;
    __declspec(noinline) ResourceOwnerReturned_10d75e20* Cleanup(void* unused);
};
ResourceOwnerReturned_10d75e20* ResourceOwnerReturned_10d75e20::Cleanup(void* unused) {
    CleanupResource* current = resource;
    if (current != nullptr) {
        current->Dispose(current != reinterpret_cast<CleanupResource*>(this));
        resource = nullptr;
    }
    return this;
}

// Reference entry 0x10e28c10
struct ResourceOwnerReturned_10e28c10 {
    char precedingFields[36];
    CleanupResource* resource;
    __declspec(noinline) ResourceOwnerReturned_10e28c10* Cleanup(void* unused);
};
ResourceOwnerReturned_10e28c10* ResourceOwnerReturned_10e28c10::Cleanup(void* unused) {
    CleanupResource* current = resource;
    if (current != nullptr) {
        current->Dispose(current != reinterpret_cast<CleanupResource*>(this));
        resource = nullptr;
    }
    return this;
}

// Reference entry 0x10e28c40
struct ResourceOwnerReturned_10e28c40 {
    char precedingFields[36];
    CleanupResource* resource;
    __declspec(noinline) ResourceOwnerReturned_10e28c40* Cleanup(void* unused);
};
ResourceOwnerReturned_10e28c40* ResourceOwnerReturned_10e28c40::Cleanup(void* unused) {
    CleanupResource* current = resource;
    if (current != nullptr) {
        current->Dispose(current != reinterpret_cast<CleanupResource*>(this));
        resource = nullptr;
    }
    return this;
}

// Reference entry 0x10e28c70
struct ResourceOwnerReturned_10e28c70 {
    char precedingFields[36];
    CleanupResource* resource;
    __declspec(noinline) ResourceOwnerReturned_10e28c70* Cleanup(void* unused);
};
ResourceOwnerReturned_10e28c70* ResourceOwnerReturned_10e28c70::Cleanup(void* unused) {
    CleanupResource* current = resource;
    if (current != nullptr) {
        current->Dispose(current != reinterpret_cast<CleanupResource*>(this));
        resource = nullptr;
    }
    return this;
}

// Reference entry 0x10e28ca0
struct ResourceOwnerReturned_10e28ca0 {
    char precedingFields[36];
    CleanupResource* resource;
    __declspec(noinline) ResourceOwnerReturned_10e28ca0* Cleanup(void* unused);
};
ResourceOwnerReturned_10e28ca0* ResourceOwnerReturned_10e28ca0::Cleanup(void* unused) {
    CleanupResource* current = resource;
    if (current != nullptr) {
        current->Dispose(current != reinterpret_cast<CleanupResource*>(this));
        resource = nullptr;
    }
    return this;
}

// Reference entry 0x10e5f6b0
struct ResourceOwnerReturned_10e5f6b0 {
    char precedingFields[36];
    CleanupResource* resource;
    __declspec(noinline) ResourceOwnerReturned_10e5f6b0* Cleanup(void* unused);
};
ResourceOwnerReturned_10e5f6b0* ResourceOwnerReturned_10e5f6b0::Cleanup(void* unused) {
    CleanupResource* current = resource;
    if (current != nullptr) {
        current->Dispose(current != reinterpret_cast<CleanupResource*>(this));
        resource = nullptr;
    }
    return this;
}

// Reference entry 0x10e5f6e0
struct ResourceOwnerReturned_10e5f6e0 {
    char precedingFields[36];
    CleanupResource* resource;
    __declspec(noinline) ResourceOwnerReturned_10e5f6e0* Cleanup(void* unused);
};
ResourceOwnerReturned_10e5f6e0* ResourceOwnerReturned_10e5f6e0::Cleanup(void* unused) {
    CleanupResource* current = resource;
    if (current != nullptr) {
        current->Dispose(current != reinterpret_cast<CleanupResource*>(this));
        resource = nullptr;
    }
    return this;
}

// Reference entry 0x10e5f710
struct ResourceOwnerReturned_10e5f710 {
    char precedingFields[36];
    CleanupResource* resource;
    __declspec(noinline) ResourceOwnerReturned_10e5f710* Cleanup(void* unused);
};
ResourceOwnerReturned_10e5f710* ResourceOwnerReturned_10e5f710::Cleanup(void* unused) {
    CleanupResource* current = resource;
    if (current != nullptr) {
        current->Dispose(current != reinterpret_cast<CleanupResource*>(this));
        resource = nullptr;
    }
    return this;
}

// Reference entry 0x10e5f740
struct ResourceOwnerReturned_10e5f740 {
    char precedingFields[36];
    CleanupResource* resource;
    __declspec(noinline) ResourceOwnerReturned_10e5f740* Cleanup(void* unused);
};
ResourceOwnerReturned_10e5f740* ResourceOwnerReturned_10e5f740::Cleanup(void* unused) {
    CleanupResource* current = resource;
    if (current != nullptr) {
        current->Dispose(current != reinterpret_cast<CleanupResource*>(this));
        resource = nullptr;
    }
    return this;
}

// Reference entry 0x10e5f770
struct ResourceOwnerReturned_10e5f770 {
    char precedingFields[36];
    CleanupResource* resource;
    __declspec(noinline) ResourceOwnerReturned_10e5f770* Cleanup(void* unused);
};
ResourceOwnerReturned_10e5f770* ResourceOwnerReturned_10e5f770::Cleanup(void* unused) {
    CleanupResource* current = resource;
    if (current != nullptr) {
        current->Dispose(current != reinterpret_cast<CleanupResource*>(this));
        resource = nullptr;
    }
    return this;
}

// Reference entry 0x10e96720
struct ResourceOwnerReturned_10e96720 {
    char precedingFields[36];
    CleanupResource* resource;
    __declspec(noinline) ResourceOwnerReturned_10e96720* Cleanup(void* unused);
};
ResourceOwnerReturned_10e96720* ResourceOwnerReturned_10e96720::Cleanup(void* unused) {
    CleanupResource* current = resource;
    if (current != nullptr) {
        current->Dispose(current != reinterpret_cast<CleanupResource*>(this));
        resource = nullptr;
    }
    return this;
}

// Reference entry 0x10e96750
struct ResourceOwnerReturned_10e96750 {
    char precedingFields[36];
    CleanupResource* resource;
    __declspec(noinline) ResourceOwnerReturned_10e96750* Cleanup(void* unused);
};
ResourceOwnerReturned_10e96750* ResourceOwnerReturned_10e96750::Cleanup(void* unused) {
    CleanupResource* current = resource;
    if (current != nullptr) {
        current->Dispose(current != reinterpret_cast<CleanupResource*>(this));
        resource = nullptr;
    }
    return this;
}

// Reference entry 0x10e96780
struct ResourceOwnerReturned_10e96780 {
    char precedingFields[36];
    CleanupResource* resource;
    __declspec(noinline) ResourceOwnerReturned_10e96780* Cleanup(void* unused);
};
ResourceOwnerReturned_10e96780* ResourceOwnerReturned_10e96780::Cleanup(void* unused) {
    CleanupResource* current = resource;
    if (current != nullptr) {
        current->Dispose(current != reinterpret_cast<CleanupResource*>(this));
        resource = nullptr;
    }
    return this;
}

// Reference entry 0x10e967b0
struct ResourceOwnerReturned_10e967b0 {
    char precedingFields[36];
    CleanupResource* resource;
    __declspec(noinline) ResourceOwnerReturned_10e967b0* Cleanup(void* unused);
};
ResourceOwnerReturned_10e967b0* ResourceOwnerReturned_10e967b0::Cleanup(void* unused) {
    CleanupResource* current = resource;
    if (current != nullptr) {
        current->Dispose(current != reinterpret_cast<CleanupResource*>(this));
        resource = nullptr;
    }
    return this;
}

// Reference entry 0x10e967e0
struct ResourceOwnerReturned_10e967e0 {
    char precedingFields[36];
    CleanupResource* resource;
    __declspec(noinline) ResourceOwnerReturned_10e967e0* Cleanup(void* unused);
};
ResourceOwnerReturned_10e967e0* ResourceOwnerReturned_10e967e0::Cleanup(void* unused) {
    CleanupResource* current = resource;
    if (current != nullptr) {
        current->Dispose(current != reinterpret_cast<CleanupResource*>(this));
        resource = nullptr;
    }
    return this;
}

// Reference entry 0x10e96810
struct ResourceOwnerReturned_10e96810 {
    char precedingFields[36];
    CleanupResource* resource;
    __declspec(noinline) ResourceOwnerReturned_10e96810* Cleanup(void* unused);
};
ResourceOwnerReturned_10e96810* ResourceOwnerReturned_10e96810::Cleanup(void* unused) {
    CleanupResource* current = resource;
    if (current != nullptr) {
        current->Dispose(current != reinterpret_cast<CleanupResource*>(this));
        resource = nullptr;
    }
    return this;
}

// Reference entry 0x10edfac0
struct ResourceOwnerReturned_10edfac0 {
    char precedingFields[36];
    CleanupResource* resource;
    __declspec(noinline) ResourceOwnerReturned_10edfac0* Cleanup(void* unused);
};
ResourceOwnerReturned_10edfac0* ResourceOwnerReturned_10edfac0::Cleanup(void* unused) {
    CleanupResource* current = resource;
    if (current != nullptr) {
        current->Dispose(current != reinterpret_cast<CleanupResource*>(this));
        resource = nullptr;
    }
    return this;
}

// Reference entry 0x10eebed0
struct ResourceOwnerReturned_10eebed0 {
    char precedingFields[36];
    CleanupResource* resource;
    __declspec(noinline) ResourceOwnerReturned_10eebed0* Cleanup(void* unused);
};
ResourceOwnerReturned_10eebed0* ResourceOwnerReturned_10eebed0::Cleanup(void* unused) {
    CleanupResource* current = resource;
    if (current != nullptr) {
        current->Dispose(current != reinterpret_cast<CleanupResource*>(this));
        resource = nullptr;
    }
    return this;
}

// Reference entry 0x10eebf00
struct ResourceOwnerReturned_10eebf00 {
    char precedingFields[36];
    CleanupResource* resource;
    __declspec(noinline) ResourceOwnerReturned_10eebf00* Cleanup(void* unused);
};
ResourceOwnerReturned_10eebf00* ResourceOwnerReturned_10eebf00::Cleanup(void* unused) {
    CleanupResource* current = resource;
    if (current != nullptr) {
        current->Dispose(current != reinterpret_cast<CleanupResource*>(this));
        resource = nullptr;
    }
    return this;
}

// Reference entry 0x10f52570
struct ResourceOwnerReturned_10f52570 {
    char precedingFields[36];
    CleanupResource* resource;
    __declspec(noinline) ResourceOwnerReturned_10f52570* Cleanup(void* unused);
};
ResourceOwnerReturned_10f52570* ResourceOwnerReturned_10f52570::Cleanup(void* unused) {
    CleanupResource* current = resource;
    if (current != nullptr) {
        current->Dispose(current != reinterpret_cast<CleanupResource*>(this));
        resource = nullptr;
    }
    return this;
}

// Reference entry 0x10f661c0
struct ResourceOwnerReturned_10f661c0 {
    char precedingFields[36];
    CleanupResource* resource;
    __declspec(noinline) ResourceOwnerReturned_10f661c0* Cleanup(void* unused);
};
ResourceOwnerReturned_10f661c0* ResourceOwnerReturned_10f661c0::Cleanup(void* unused) {
    CleanupResource* current = resource;
    if (current != nullptr) {
        current->Dispose(current != reinterpret_cast<CleanupResource*>(this));
        resource = nullptr;
    }
    return this;
}

// Reference entry 0x10f71110
struct ResourceOwnerReturned_10f71110 {
    char precedingFields[36];
    CleanupResource* resource;
    __declspec(noinline) ResourceOwnerReturned_10f71110* Cleanup(void* unused);
};
ResourceOwnerReturned_10f71110* ResourceOwnerReturned_10f71110::Cleanup(void* unused) {
    CleanupResource* current = resource;
    if (current != nullptr) {
        current->Dispose(current != reinterpret_cast<CleanupResource*>(this));
        resource = nullptr;
    }
    return this;
}

// Reference entry 0x10f83140
struct ResourceOwnerReturned_10f83140 {
    char precedingFields[36];
    CleanupResource* resource;
    __declspec(noinline) ResourceOwnerReturned_10f83140* Cleanup(void* unused);
};
ResourceOwnerReturned_10f83140* ResourceOwnerReturned_10f83140::Cleanup(void* unused) {
    CleanupResource* current = resource;
    if (current != nullptr) {
        current->Dispose(current != reinterpret_cast<CleanupResource*>(this));
        resource = nullptr;
    }
    return this;
}

// Reference entry 0x11008010
struct ResourceOwnerReturned_11008010 {
    char precedingFields[36];
    CleanupResource* resource;
    __declspec(noinline) ResourceOwnerReturned_11008010* Cleanup(void* unused);
};
ResourceOwnerReturned_11008010* ResourceOwnerReturned_11008010::Cleanup(void* unused) {
    CleanupResource* current = resource;
    if (current != nullptr) {
        current->Dispose(current != reinterpret_cast<CleanupResource*>(this));
        resource = nullptr;
    }
    return this;
}

// Reference entry 0x1103db30
struct ResourceOwnerReturned_1103db30 {
    char precedingFields[36];
    CleanupResource* resource;
    __declspec(noinline) ResourceOwnerReturned_1103db30* Cleanup(void* unused);
};
ResourceOwnerReturned_1103db30* ResourceOwnerReturned_1103db30::Cleanup(void* unused) {
    CleanupResource* current = resource;
    if (current != nullptr) {
        current->Dispose(current != reinterpret_cast<CleanupResource*>(this));
        resource = nullptr;
    }
    return this;
}

// Reference entry 0x112ed830
struct ResourceOwnerReturned_112ed830 {
    char precedingFields[36];
    CleanupResource* resource;
    __declspec(noinline) ResourceOwnerReturned_112ed830* Cleanup(void* unused);
};
ResourceOwnerReturned_112ed830* ResourceOwnerReturned_112ed830::Cleanup(void* unused) {
    CleanupResource* current = resource;
    if (current != nullptr) {
        current->Dispose(current != reinterpret_cast<CleanupResource*>(this));
        resource = nullptr;
    }
    return this;
}

// Reference entry 0x112ed920
struct ResourceOwnerReturned_112ed920 {
    char precedingFields[36];
    CleanupResource* resource;
    __declspec(noinline) ResourceOwnerReturned_112ed920* Cleanup(void* unused);
};
ResourceOwnerReturned_112ed920* ResourceOwnerReturned_112ed920::Cleanup(void* unused) {
    CleanupResource* current = resource;
    if (current != nullptr) {
        current->Dispose(current != reinterpret_cast<CleanupResource*>(this));
        resource = nullptr;
    }
    return this;
}

// Reference entry 0x101b4d40
extern "C" __declspec(noinline) void __fastcall ClearSingleRef_101b4d40(CleanupRef** value) {
    CleanupRef* old = *value;
    *value = nullptr;
    if (old != nullptr) {
        old->Release();
        *value = nullptr;
    }
}

// Reference entry 0x101ca970
extern "C" __declspec(noinline) void __fastcall ClearSingleRef_101ca970(CleanupRef** value) {
    CleanupRef* old = *value;
    *value = nullptr;
    if (old != nullptr) {
        old->Release();
        *value = nullptr;
    }
}

// Reference entry 0x101d8f00
extern "C" __declspec(noinline) void __fastcall ClearSingleRef_101d8f00(CleanupRef** value) {
    CleanupRef* old = *value;
    *value = nullptr;
    if (old != nullptr) {
        old->Release();
        *value = nullptr;
    }
}

// Reference entry 0x101d8f30
extern "C" __declspec(noinline) void __fastcall ClearSingleRef_101d8f30(CleanupRef** value) {
    CleanupRef* old = *value;
    *value = nullptr;
    if (old != nullptr) {
        old->Release();
        *value = nullptr;
    }
}

// Reference entry 0x101e2d10
extern "C" __declspec(noinline) void __fastcall ClearSingleRef_101e2d10(CleanupRef** value) {
    CleanupRef* old = *value;
    *value = nullptr;
    if (old != nullptr) {
        old->Release();
        *value = nullptr;
    }
}

// Reference entry 0x101e2d40
extern "C" __declspec(noinline) void __fastcall ClearSingleRef_101e2d40(CleanupRef** value) {
    CleanupRef* old = *value;
    *value = nullptr;
    if (old != nullptr) {
        old->Release();
        *value = nullptr;
    }
}

// Reference entry 0x101ee060
extern "C" __declspec(noinline) void __fastcall ClearSingleRef_101ee060(CleanupRef** value) {
    CleanupRef* old = *value;
    *value = nullptr;
    if (old != nullptr) {
        old->Release();
        *value = nullptr;
    }
}

// Reference entry 0x1020a400
extern "C" __declspec(noinline) void __fastcall ClearSingleRef_1020a400(CleanupRef** value) {
    CleanupRef* old = *value;
    *value = nullptr;
    if (old != nullptr) {
        old->Release();
        *value = nullptr;
    }
}

// Reference entry 0x10236500
extern "C" __declspec(noinline) void __fastcall ClearSingleRef_10236500(CleanupRef** value) {
    CleanupRef* old = *value;
    *value = nullptr;
    if (old != nullptr) {
        old->Release();
        *value = nullptr;
    }
}

// Reference entry 0x10236530
extern "C" __declspec(noinline) void __fastcall ClearSingleRef_10236530(CleanupRef** value) {
    CleanupRef* old = *value;
    *value = nullptr;
    if (old != nullptr) {
        old->Release();
        *value = nullptr;
    }
}

// Reference entry 0x10248650
extern "C" __declspec(noinline) void __fastcall ClearSingleRef_10248650(CleanupRef** value) {
    CleanupRef* old = *value;
    *value = nullptr;
    if (old != nullptr) {
        old->Release();
        *value = nullptr;
    }
}

// Reference entry 0x10281400
extern "C" __declspec(noinline) void __fastcall ClearSingleRef_10281400(CleanupRef** value) {
    CleanupRef* old = *value;
    *value = nullptr;
    if (old != nullptr) {
        old->Release();
        *value = nullptr;
    }
}

// Reference entry 0x10281430
extern "C" __declspec(noinline) void __fastcall ClearSingleRef_10281430(CleanupRef** value) {
    CleanupRef* old = *value;
    *value = nullptr;
    if (old != nullptr) {
        old->Release();
        *value = nullptr;
    }
}

// Reference entry 0x10281460
extern "C" __declspec(noinline) void __fastcall ClearSingleRef_10281460(CleanupRef** value) {
    CleanupRef* old = *value;
    *value = nullptr;
    if (old != nullptr) {
        old->Release();
        *value = nullptr;
    }
}

// Reference entry 0x102aebd0
extern "C" __declspec(noinline) void __fastcall ClearSingleRef_102aebd0(CleanupRef** value) {
    CleanupRef* old = *value;
    *value = nullptr;
    if (old != nullptr) {
        old->Release();
        *value = nullptr;
    }
}

// Reference entry 0x102aec00
extern "C" __declspec(noinline) void __fastcall ClearSingleRef_102aec00(CleanupRef** value) {
    CleanupRef* old = *value;
    *value = nullptr;
    if (old != nullptr) {
        old->Release();
        *value = nullptr;
    }
}

// Reference entry 0x102c1fc0
extern "C" __declspec(noinline) void __fastcall ClearSingleRef_102c1fc0(CleanupRef** value) {
    CleanupRef* old = *value;
    *value = nullptr;
    if (old != nullptr) {
        old->Release();
        *value = nullptr;
    }
}

// Reference entry 0x102c6f90
extern "C" __declspec(noinline) void __fastcall ClearSingleRef_102c6f90(CleanupRef** value) {
    CleanupRef* old = *value;
    *value = nullptr;
    if (old != nullptr) {
        old->Release();
        *value = nullptr;
    }
}

// Reference entry 0x102c6fc0
extern "C" __declspec(noinline) void __fastcall ClearSingleRef_102c6fc0(CleanupRef** value) {
    CleanupRef* old = *value;
    *value = nullptr;
    if (old != nullptr) {
        old->Release();
        *value = nullptr;
    }
}

// Reference entry 0x102dda60
extern "C" __declspec(noinline) void __fastcall ClearSingleRef_102dda60(CleanupRef** value) {
    CleanupRef* old = *value;
    *value = nullptr;
    if (old != nullptr) {
        old->Release();
        *value = nullptr;
    }
}

// Reference entry 0x102f46b0
extern "C" __declspec(noinline) void __fastcall ClearSingleRef_102f46b0(CleanupRef** value) {
    CleanupRef* old = *value;
    *value = nullptr;
    if (old != nullptr) {
        old->Release();
        *value = nullptr;
    }
}

// Reference entry 0x102f46e0
extern "C" __declspec(noinline) void __fastcall ClearSingleRef_102f46e0(CleanupRef** value) {
    CleanupRef* old = *value;
    *value = nullptr;
    if (old != nullptr) {
        old->Release();
        *value = nullptr;
    }
}

// Reference entry 0x102f4710
extern "C" __declspec(noinline) void __fastcall ClearSingleRef_102f4710(CleanupRef** value) {
    CleanupRef* old = *value;
    *value = nullptr;
    if (old != nullptr) {
        old->Release();
        *value = nullptr;
    }
}

// Reference entry 0x1031dd80
extern "C" __declspec(noinline) void __fastcall ClearSingleRef_1031dd80(CleanupRef** value) {
    CleanupRef* old = *value;
    *value = nullptr;
    if (old != nullptr) {
        old->Release();
        *value = nullptr;
    }
}

// Reference entry 0x1031ddb0
extern "C" __declspec(noinline) void __fastcall ClearSingleRef_1031ddb0(CleanupRef** value) {
    CleanupRef* old = *value;
    *value = nullptr;
    if (old != nullptr) {
        old->Release();
        *value = nullptr;
    }
}

// Reference entry 0x10377a80
extern "C" __declspec(noinline) void __fastcall ClearSingleRef_10377a80(CleanupRef** value) {
    CleanupRef* old = *value;
    *value = nullptr;
    if (old != nullptr) {
        old->Release();
        *value = nullptr;
    }
}

// Reference entry 0x10377ab0
extern "C" __declspec(noinline) void __fastcall ClearSingleRef_10377ab0(CleanupRef** value) {
    CleanupRef* old = *value;
    *value = nullptr;
    if (old != nullptr) {
        old->Release();
        *value = nullptr;
    }
}

// Reference entry 0x10377ae0
extern "C" __declspec(noinline) void __fastcall ClearSingleRef_10377ae0(CleanupRef** value) {
    CleanupRef* old = *value;
    *value = nullptr;
    if (old != nullptr) {
        old->Release();
        *value = nullptr;
    }
}

// Reference entry 0x10377b10
extern "C" __declspec(noinline) void __fastcall ClearSingleRef_10377b10(CleanupRef** value) {
    CleanupRef* old = *value;
    *value = nullptr;
    if (old != nullptr) {
        old->Release();
        *value = nullptr;
    }
}

// Reference entry 0x10377b40
extern "C" __declspec(noinline) void __fastcall ClearSingleRef_10377b40(CleanupRef** value) {
    CleanupRef* old = *value;
    *value = nullptr;
    if (old != nullptr) {
        old->Release();
        *value = nullptr;
    }
}

// Reference entry 0x1040a180
extern "C" __declspec(noinline) void __fastcall ClearSingleRef_1040a180(CleanupRef** value) {
    CleanupRef* old = *value;
    *value = nullptr;
    if (old != nullptr) {
        old->Release();
        *value = nullptr;
    }
}

// Reference entry 0x1042cec0
extern "C" __declspec(noinline) void __fastcall ClearSingleRef_1042cec0(CleanupRef** value) {
    CleanupRef* old = *value;
    *value = nullptr;
    if (old != nullptr) {
        old->Release();
        *value = nullptr;
    }
}

// Reference entry 0x104360d0
extern "C" __declspec(noinline) void __fastcall ClearSingleRef_104360d0(CleanupRef** value) {
    CleanupRef* old = *value;
    *value = nullptr;
    if (old != nullptr) {
        old->Release();
        *value = nullptr;
    }
}

// Reference entry 0x10452600
extern "C" __declspec(noinline) void __fastcall ClearSingleRef_10452600(CleanupRef** value) {
    CleanupRef* old = *value;
    *value = nullptr;
    if (old != nullptr) {
        old->Release();
        *value = nullptr;
    }
}

// Reference entry 0x10454eb0
extern "C" __declspec(noinline) void __fastcall ClearSingleRef_10454eb0(CleanupRef** value) {
    CleanupRef* old = *value;
    *value = nullptr;
    if (old != nullptr) {
        old->Release();
        *value = nullptr;
    }
}

// Reference entry 0x10468b70
extern "C" __declspec(noinline) void __fastcall ClearSingleRef_10468b70(CleanupRef** value) {
    CleanupRef* old = *value;
    *value = nullptr;
    if (old != nullptr) {
        old->Release();
        *value = nullptr;
    }
}

// Reference entry 0x104940e0
extern "C" __declspec(noinline) void __fastcall ClearSingleRef_104940e0(CleanupRef** value) {
    CleanupRef* old = *value;
    *value = nullptr;
    if (old != nullptr) {
        old->Release();
        *value = nullptr;
    }
}

// Reference entry 0x104d1490
extern "C" __declspec(noinline) void __fastcall ClearSingleRef_104d1490(CleanupRef** value) {
    CleanupRef* old = *value;
    *value = nullptr;
    if (old != nullptr) {
        old->Release();
        *value = nullptr;
    }
}

// Reference entry 0x105136d0
extern "C" __declspec(noinline) void __fastcall ClearSingleRef_105136d0(CleanupRef** value) {
    CleanupRef* old = *value;
    *value = nullptr;
    if (old != nullptr) {
        old->Release();
        *value = nullptr;
    }
}

// Reference entry 0x10532e70
extern "C" __declspec(noinline) void __fastcall ClearSingleRef_10532e70(CleanupRef** value) {
    CleanupRef* old = *value;
    *value = nullptr;
    if (old != nullptr) {
        old->Release();
        *value = nullptr;
    }
}

// Reference entry 0x10532ea0
extern "C" __declspec(noinline) void __fastcall ClearSingleRef_10532ea0(CleanupRef** value) {
    CleanupRef* old = *value;
    *value = nullptr;
    if (old != nullptr) {
        old->Release();
        *value = nullptr;
    }
}

// Reference entry 0x105725b0
extern "C" __declspec(noinline) void __fastcall ClearSingleRef_105725b0(CleanupRef** value) {
    CleanupRef* old = *value;
    *value = nullptr;
    if (old != nullptr) {
        old->Release();
        *value = nullptr;
    }
}

// Reference entry 0x105725e0
extern "C" __declspec(noinline) void __fastcall ClearSingleRef_105725e0(CleanupRef** value) {
    CleanupRef* old = *value;
    *value = nullptr;
    if (old != nullptr) {
        old->Release();
        *value = nullptr;
    }
}

// Reference entry 0x10572610
extern "C" __declspec(noinline) void __fastcall ClearSingleRef_10572610(CleanupRef** value) {
    CleanupRef* old = *value;
    *value = nullptr;
    if (old != nullptr) {
        old->Release();
        *value = nullptr;
    }
}

// Reference entry 0x10572640
extern "C" __declspec(noinline) void __fastcall ClearSingleRef_10572640(CleanupRef** value) {
    CleanupRef* old = *value;
    *value = nullptr;
    if (old != nullptr) {
        old->Release();
        *value = nullptr;
    }
}

// Reference entry 0x105ad2b0
extern "C" __declspec(noinline) void __fastcall ClearSingleRef_105ad2b0(CleanupRef** value) {
    CleanupRef* old = *value;
    *value = nullptr;
    if (old != nullptr) {
        old->Release();
        *value = nullptr;
    }
}

// Reference entry 0x105dc140
extern "C" __declspec(noinline) void __fastcall ClearSingleRef_105dc140(CleanupRef** value) {
    CleanupRef* old = *value;
    *value = nullptr;
    if (old != nullptr) {
        old->Release();
        *value = nullptr;
    }
}

// Reference entry 0x105dc170
extern "C" __declspec(noinline) void __fastcall ClearSingleRef_105dc170(CleanupRef** value) {
    CleanupRef* old = *value;
    *value = nullptr;
    if (old != nullptr) {
        old->Release();
        *value = nullptr;
    }
}

// Reference entry 0x105dc1a0
extern "C" __declspec(noinline) void __fastcall ClearSingleRef_105dc1a0(CleanupRef** value) {
    CleanupRef* old = *value;
    *value = nullptr;
    if (old != nullptr) {
        old->Release();
        *value = nullptr;
    }
}

// Reference entry 0x10608380
extern "C" __declspec(noinline) void __fastcall ClearSingleRef_10608380(CleanupRef** value) {
    CleanupRef* old = *value;
    *value = nullptr;
    if (old != nullptr) {
        old->Release();
        *value = nullptr;
    }
}

// Reference entry 0x10620360
extern "C" __declspec(noinline) void __fastcall ClearSingleRef_10620360(CleanupRef** value) {
    CleanupRef* old = *value;
    *value = nullptr;
    if (old != nullptr) {
        old->Release();
        *value = nullptr;
    }
}

// Reference entry 0x108fded0
extern "C" __declspec(noinline) void __fastcall ClearSingleRef_108fded0(CleanupRef** value) {
    CleanupRef* old = *value;
    *value = nullptr;
    if (old != nullptr) {
        old->Release();
        *value = nullptr;
    }
}

// Reference entry 0x1098a140
extern "C" __declspec(noinline) void __fastcall ClearSingleRef_1098a140(CleanupRef** value) {
    CleanupRef* old = *value;
    *value = nullptr;
    if (old != nullptr) {
        old->Release();
        *value = nullptr;
    }
}

// Reference entry 0x109a0990
extern "C" __declspec(noinline) void __fastcall ClearSingleRef_109a0990(CleanupRef** value) {
    CleanupRef* old = *value;
    *value = nullptr;
    if (old != nullptr) {
        old->Release();
        *value = nullptr;
    }
}

// Reference entry 0x109dbdf0
extern "C" __declspec(noinline) void __fastcall ClearSingleRef_109dbdf0(CleanupRef** value) {
    CleanupRef* old = *value;
    *value = nullptr;
    if (old != nullptr) {
        old->Release();
        *value = nullptr;
    }
}

// Reference entry 0x10b6ec10
extern "C" __declspec(noinline) void __fastcall ClearSingleRef_10b6ec10(CleanupRef** value) {
    CleanupRef* old = *value;
    *value = nullptr;
    if (old != nullptr) {
        old->Release();
        *value = nullptr;
    }
}

// Reference entry 0x10bbe8a0
extern "C" __declspec(noinline) void __fastcall ClearSingleRef_10bbe8a0(CleanupRef** value) {
    CleanupRef* old = *value;
    *value = nullptr;
    if (old != nullptr) {
        old->Release();
        *value = nullptr;
    }
}

// Reference entry 0x10bc47c0
extern "C" __declspec(noinline) void __fastcall ClearSingleRef_10bc47c0(CleanupRef** value) {
    CleanupRef* old = *value;
    *value = nullptr;
    if (old != nullptr) {
        old->Release();
        *value = nullptr;
    }
}

// Reference entry 0x10bc7a20
extern "C" __declspec(noinline) void __fastcall ClearSingleRef_10bc7a20(CleanupRef** value) {
    CleanupRef* old = *value;
    *value = nullptr;
    if (old != nullptr) {
        old->Release();
        *value = nullptr;
    }
}

// Reference entry 0x10be2040
extern "C" __declspec(noinline) void __fastcall ClearSingleRef_10be2040(CleanupRef** value) {
    CleanupRef* old = *value;
    *value = nullptr;
    if (old != nullptr) {
        old->Release();
        *value = nullptr;
    }
}

// Reference entry 0x10c7e2e0
extern "C" __declspec(noinline) void __fastcall ClearSingleRef_10c7e2e0(CleanupRef** value) {
    CleanupRef* old = *value;
    *value = nullptr;
    if (old != nullptr) {
        old->Release();
        *value = nullptr;
    }
}

// Reference entry 0x10d03b80
extern "C" __declspec(noinline) void __fastcall ClearSingleRef_10d03b80(CleanupRef** value) {
    CleanupRef* old = *value;
    *value = nullptr;
    if (old != nullptr) {
        old->Release();
        *value = nullptr;
    }
}

// Reference entry 0x10d1e0d0
extern "C" __declspec(noinline) void __fastcall ClearSingleRef_10d1e0d0(CleanupRef** value) {
    CleanupRef* old = *value;
    *value = nullptr;
    if (old != nullptr) {
        old->Release();
        *value = nullptr;
    }
}

// Reference entry 0x10d655b0
extern "C" __declspec(noinline) void __fastcall ClearSingleRef_10d655b0(CleanupRef** value) {
    CleanupRef* old = *value;
    *value = nullptr;
    if (old != nullptr) {
        old->Release();
        *value = nullptr;
    }
}

// Reference entry 0x10d8f2b0
extern "C" __declspec(noinline) void __fastcall ClearSingleRef_10d8f2b0(CleanupRef** value) {
    CleanupRef* old = *value;
    *value = nullptr;
    if (old != nullptr) {
        old->Release();
        *value = nullptr;
    }
}

// Reference entry 0x10d8f2e0
extern "C" __declspec(noinline) void __fastcall ClearSingleRef_10d8f2e0(CleanupRef** value) {
    CleanupRef* old = *value;
    *value = nullptr;
    if (old != nullptr) {
        old->Release();
        *value = nullptr;
    }
}

// Reference entry 0x10d9c750
extern "C" __declspec(noinline) void __fastcall ClearSingleRef_10d9c750(CleanupRef** value) {
    CleanupRef* old = *value;
    *value = nullptr;
    if (old != nullptr) {
        old->Release();
        *value = nullptr;
    }
}

// Reference entry 0x10dab3a0
extern "C" __declspec(noinline) void __fastcall ClearSingleRef_10dab3a0(CleanupRef** value) {
    CleanupRef* old = *value;
    *value = nullptr;
    if (old != nullptr) {
        old->Release();
        *value = nullptr;
    }
}

// Reference entry 0x10ff1120
extern "C" __declspec(noinline) void __fastcall ClearSingleRef_10ff1120(CleanupRef** value) {
    CleanupRef* old = *value;
    *value = nullptr;
    if (old != nullptr) {
        old->Release();
        *value = nullptr;
    }
}

// Reference entry 0x10ff1150
extern "C" __declspec(noinline) void __fastcall ClearSingleRef_10ff1150(CleanupRef** value) {
    CleanupRef* old = *value;
    *value = nullptr;
    if (old != nullptr) {
        old->Release();
        *value = nullptr;
    }
}

// Reference entry 0x10ffddc0
extern "C" __declspec(noinline) void __fastcall ClearSingleRef_10ffddc0(CleanupRef** value) {
    CleanupRef* old = *value;
    *value = nullptr;
    if (old != nullptr) {
        old->Release();
        *value = nullptr;
    }
}

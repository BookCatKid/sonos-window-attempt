// Readable model of FUN_11252c80, which calculates the serialized SOAP body
// length without producing the body. The field offsets and fixed contributions
// come from the Ghidra export and the 32-bit reference instructions.

#include <stdint.h>
#include <stddef.h>

struct SoapLengthNode {
    void *collection_vtable;           // +0x00
    uint32_t length_mode;              // +0x04
    uint32_t element_count;             // +0x08
    uint8_t reserved_0c[0x14];         // +0x0c .. +0x1f
    const char *value_text;             // +0x20
    const char *element_name;           // +0x24
    uint8_t include_optional_tag;       // +0x28
    uint8_t reserved_29[3];            // +0x29 .. +0x2b
    SoapLengthNode *children[3];        // +0x2c .. +0x37
    uint32_t child_count;               // +0x38
};

static_assert(sizeof(void *) == 4, "the reference is a 32-bit x86 binary");
static_assert(offsetof(SoapLengthNode, element_count) == 0x08,
              "reference element-count offset changed");
static_assert(offsetof(SoapLengthNode, value_text) == 0x20,
              "reference value-text offset changed");
static_assert(offsetof(SoapLengthNode, element_name) == 0x24,
              "reference element-name offset changed");
static_assert(offsetof(SoapLengthNode, child_count) == 0x38,
              "reference child-count offset changed");
static_assert(offsetof(SoapLengthNode, children) == 0x2c,
              "reference child-array offset changed");

// The same native helper handles an action's parameter collection and a nested
// value's own serialized parameters. The reference passes the collection in ECX.
extern "C" int __fastcall thunk_FUN_11253130(const SoapLengthNode *collection);

static inline const char *after_terminator(const char *text) {
    char character;
    do {
        character = *text;
        ++text;
    } while (character != '\0');
    return text;
}

static inline int content_length(const char *text) {
    return static_cast<int>(after_terminator(text) - (text + 1));
}

static inline bool has_extra_length_marker(const SoapLengthNode *node) {
    // Ghidra places this byte at +0xc2d. The larger concrete object layout is
    // not needed to calculate its length.
    return *(reinterpret_cast<const uint8_t *>(node) + 0xc2d) != 0;
}

extern "C" int __fastcall soap_length_candidate(const SoapLengthNode *body) {
    int length = (body->length_mode == 0) ? 0xae : 0x6c;
    length += thunk_FUN_11253130(body);
    length += content_length(body->value_text);
    length += content_length(body->element_name) * 2;
    if (body->include_optional_tag != 0) {
        length += 0x10;
    }

    const SoapLengthNode *const *child = body->children;
    for (uint32_t index = 0; index < body->child_count; ++index, ++child) {
        const SoapLengthNode *nested = *child;
        if (nested == nullptr) {
            continue;
        }

        int nested_length = 0;
        if (nested->element_count != 0) {
            nested_length = thunk_FUN_11253130(nested);
            nested_length += content_length(nested->value_text);
            nested_length += content_length(nested->element_name) * 2;
            nested_length += has_extra_length_marker(nested) ? 0x15 : 0;
            nested_length += (nested->length_mode == 0) ? 0x20 : 0x1a;
            nested_length -= 0x0c;
        }
        length += nested_length;
    }
    return length;
}

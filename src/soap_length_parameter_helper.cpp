// Readable model of FUN_11253130, which totals the serialized size of a
// collection's named parameters. Its callers pass the collection in ECX.

#include <stdint.h>

struct SoapParameter;

struct SoapParameterCollection {
    virtual void slot_0() = 0;
    virtual void slot_1() = 0;
    virtual void slot_2() = 0;
    virtual SoapParameter *at(uint32_t index) = 0;

    uint32_t reserved_04;
    uint32_t count;
};

struct SoapStringSizeInterface {
    virtual void slot_0() = 0;
    virtual int serialized_content_size() = 0;
};

struct SoapParameter {
    virtual void slot_0() = 0;
    virtual void slot_1() = 0;
    virtual const char *element_name() const = 0;

    uint32_t reserved_04;
    uint32_t value_type;               // +0x08
    uint32_t reserved_0c;
    union {
        const char *string_value;
        SoapStringSizeInterface *size_provider;
    } value;                            // +0x10
    uint8_t reserved_14[0x24];         // +0x14 .. +0x37
    char inline_value[0x18];           // +0x38 .. +0x4f
    uint32_t special_string_length_mode; // +0x50
};

static_assert(sizeof(void *) == 4, "the reference uses 32-bit x86 objects");
static_assert(sizeof(SoapParameterCollection) == 0x0c,
              "collection interface layout changed");
static_assert(sizeof(SoapParameter) == 0x54,
              "parameter layout changed");

extern "C" int thunk_FUN_11285d80(const char *text);
extern "C" int thunk_FUN_11291ee0(int character_count);

static inline int terminated_length(const char *text) {
    const char *const first_after_start = text + 1;
    char character;
    do {
        character = *text;
        ++text;
    } while (character != '\0');
    return static_cast<int>(text - first_after_start);
}

extern "C" int __fastcall soap_length_parameter_helper(
    SoapParameterCollection *collection) {
    int total = 0;
    uint32_t index = 0;

    if (collection->count != 0) {
        do {
            SoapParameter *parameter = collection->at(index);
            const char *name = parameter->element_name();
            const int encoded_name_length = terminated_length(name) * 2;
            int content_length = 0;

            if (parameter->value_type == 6) {
                if (parameter->special_string_length_mode == 0) {
                    content_length = thunk_FUN_11285d80(parameter->value.string_value);
                } else {
                    content_length = thunk_FUN_11291ee0(
                        terminated_length(parameter->value.string_value));
                }
            } else if (parameter->value_type == 7) {
                content_length = parameter->value.size_provider->serialized_content_size();
            } else if (parameter->value_type == 8) {
                SoapStringSizeInterface *nested_provider =
                    reinterpret_cast<SoapStringSizeInterface *>(
                        reinterpret_cast<uint8_t *>(parameter->value.size_provider) +
                        0x20);
                content_length = nested_provider->serialized_content_size();
            } else {
                content_length = terminated_length(parameter->inline_value);
            }

            ++index;
            total += encoded_name_length + 5 + content_length;
        } while (index < collection->count);
    }

    return total;
}

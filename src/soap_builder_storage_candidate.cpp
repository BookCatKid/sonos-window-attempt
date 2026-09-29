// Semantic C++ reconstruction of the service/action storage constructor at
// 0x111c3530. External routines name verified reference thunks in the compare
// tool; this file contains no assembly.

using Word = unsigned int;
using Byte = unsigned char;

extern "C" void __fastcall soap_builder_base_initialize(void *object);
struct SoapHeaderStorageInit {
    void Initialize(char *storage, Word capacity);
};
extern "C" char *__cdecl soap_builder_bounded_copy(
    char *destination, const char *source, Word capacity);

namespace SoapStorageTarget {
constexpr Word primary_vtable = 0x119d3274;
constexpr Word accumulator_base_vtable = 0x119d322c;
constexpr Word accumulator_vtable = 0x119d32b0;
constexpr Word embedded_buffer_capacity = 0x1eae;
constexpr Word request_path_capacity = 0x401;
constexpr Word service_capacity = 0x100;
constexpr Word action_capacity = 0x100;
constexpr Word target_udn_capacity = 0x19;
}

struct SoapRequestStorage {
    __declspec(noinline) SoapRequestStorage *Initialize(
        const char *request_path, const char *service, const char *action,
        const char *target_udn, Byte flag);
};

SoapRequestStorage *SoapRequestStorage::Initialize(
    const char *request_path, const char *service, const char *action,
    const char *target_udn, Byte flag) {
    Byte *self = reinterpret_cast<Byte *>(this);

    soap_builder_base_initialize(this);
    const volatile Byte *flag_address = &flag;
    const Byte saved_flag = *flag_address;

    volatile Word *header_vtable = reinterpret_cast<volatile Word *>(self + 0x40c);
    *header_vtable = SoapStorageTarget::accumulator_base_vtable;
    struct FourWords { Word value[4]; } zero_block = {};
    *reinterpret_cast<FourWords *>(self + 0xa2a) = zero_block;
    *reinterpret_cast<Word *>(self) = SoapStorageTarget::primary_vtable;
    *header_vtable = SoapStorageTarget::accumulator_vtable;
    *reinterpret_cast<unsigned short *>(self + 0xa3a) = 0;
    self[0xa44] = saved_flag;

    *reinterpret_cast<Word *>(self + 0xa3c) = 0;
    *reinterpret_cast<Word *>(self + 0xa40) = 0;
    *reinterpret_cast<unsigned short *>(self + 0xa45) = 0x100;
    self[0xa47] = 0;
    *reinterpret_cast<Word *>(self + 0xa48) = 0xffffffff;
    *reinterpret_cast<Word *>(self + 0x8a4c) = 0;

    reinterpret_cast<SoapHeaderStorageInit *>(self + 0x8a50)->Initialize(
        reinterpret_cast<char *>(self + 0x8a64),
        SoapStorageTarget::embedded_buffer_capacity);

    soap_builder_bounded_copy(
        reinterpret_cast<char *>(self + 0x410), request_path,
        SoapStorageTarget::request_path_capacity);
    soap_builder_bounded_copy(
        reinterpret_cast<char *>(self + 0x811), service,
        SoapStorageTarget::service_capacity);
    soap_builder_bounded_copy(
        reinterpret_cast<char *>(self + 0x911), action,
        SoapStorageTarget::action_capacity);
    soap_builder_bounded_copy(
        reinterpret_cast<char *>(self + 0xa11), target_udn,
        SoapStorageTarget::target_udn_capacity);
    return this;
}

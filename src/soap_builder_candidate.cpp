// Semantic C++ reconstruction of the SOAP HTTP header builder at 0x111c52e0.
// It intentionally uses normal C++ and external helper declarations; there is
// no inline assembly. The comparison tool resolves these helper symbols to the
// verified thunk addresses in the reference DLL.

using Word = unsigned int;
using Byte = unsigned char;

extern "C" int __cdecl soap_builder_format(
    char *destination, Word capacity, const char *format, ...);
extern "C" int __cdecl soap_builder_append_format(
    char *destination, Word offset, Word capacity, const char *format, ...);
extern "C" const char *__thiscall soap_builder_header_name(
    void *headers, Word index);
extern "C" const char *__thiscall soap_builder_header_value(
    void *headers, const char *name);
extern "C" Word __thiscall soap_builder_soap_length(void *soap_operation);
extern "C" const char *__cdecl soap_builder_user_agent();
extern "C" void __cdecl soap_builder_log(
    const char *domain, Word severity, const char *message);
extern "C" void __fastcall soap_builder_cookie_check(Word cookie);

namespace SoapBuilderTarget {
constexpr Word target_udn_format = 0x119d339c;
constexpr Word header_pair_format = 0x1195f06c;
constexpr Word request_header_format = 0x119d33c0;
constexpr Word empty_string = 0x1186d2ee;
constexpr Word optional_header_string = 0x1187d7f0;
constexpr Word separator_hash = 0x1188482c;
constexpr Word log_domain = 0x119d3020;
constexpr Word log_message = 0x119d3498;
constexpr Word security_cookie = 0x12126b84;
constexpr Word udn_capacity = 0x80;
constexpr Word extra_headers_capacity = 0x1eee;
constexpr Word request_header_capacity = 0x8000;
}

struct SoapRequestBuilder {
    __declspec(noinline) void Build(const char *request_path, const char *host);
};

void SoapRequestBuilder::Build(const char *request_path, const char *host) {
    Byte *self = reinterpret_cast<Byte *>(this);
    char target_udn[128];
    target_udn[0] = 0;
    if (self[0xa11] != 0) {
        soap_builder_format(
            target_udn, SoapBuilderTarget::udn_capacity,
            reinterpret_cast<const char *>(SoapBuilderTarget::target_udn_format),
            self + 0xa11);
    }

    char extra_headers[7920];
    extra_headers[0] = 0;
    Word extra_headers_length = 0;
    Word header_index = 0;
    volatile Word *header_count = reinterpret_cast<volatile Word *>(self + 0x8a60);
    if (*header_count != 0) {
        do {
            void *headers = self + 0x8a50;
            const char *name = soap_builder_header_name(headers, header_index);
            const char *value = soap_builder_header_value(headers, name);
            if (name != 0 && *name != 0 && value != 0) {
                extra_headers_length = static_cast<Word>(soap_builder_append_format(
                    extra_headers, extra_headers_length,
                    SoapBuilderTarget::extra_headers_capacity,
                    reinterpret_cast<const char *>(SoapBuilderTarget::header_pair_format),
                    name, value));
            }
            ++header_index;
        } while (header_index < *header_count);
    }

    const char *separator = *reinterpret_cast<Byte *>(self + 0xa46) != 0
        ? reinterpret_cast<const char *>(SoapBuilderTarget::separator_hash)
        : reinterpret_cast<const char *>(SoapBuilderTarget::empty_string);
    Word body_length = soap_builder_soap_length(self + 0xa3c);
    const char *user_agent = soap_builder_user_agent();
    char *output = reinterpret_cast<char *>(self + 0xa4c);

    int formatted_length = soap_builder_format(
        output, SoapBuilderTarget::request_header_capacity,
        reinterpret_cast<const char *>(SoapBuilderTarget::request_header_format),
        request_path, host, user_agent, extra_headers, body_length,
        reinterpret_cast<const char *>(SoapBuilderTarget::optional_header_string),
        target_udn, self + 0x811, separator, self + 0x911);
    if (formatted_length < 0 || formatted_length > 0x7fff) {
        soap_builder_log(
            reinterpret_cast<const char *>(SoapBuilderTarget::log_domain), 3,
            reinterpret_cast<const char *>(SoapBuilderTarget::log_message));
    }

    const volatile char *end = output;
    do {
        ++end;
    } while (end[-1] != 0);
    *reinterpret_cast<Word *>(self + 0x8a4c) =
        static_cast<Word>(end - output - 1);

    Word cookie = *reinterpret_cast<volatile Word *>(SoapBuilderTarget::security_cookie);
    soap_builder_cookie_check(cookie);
}

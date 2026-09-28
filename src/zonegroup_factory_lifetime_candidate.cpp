// Lifetime experiment for the native GetZoneGroupState factory at 0x10373c40.
// A C++ destructor owns the adjusted wrapper reference so MSVC can generate
// exception cleanup. This candidate has not yet matched the reference body.

using Word = unsigned int;
using Byte = unsigned char;

namespace Target {
constexpr Word empty_name = 0x1186d2ee;
constexpr Word zone_group_service = 0x11896904;
constexpr Word get_zone_group_state_action = 0x118969d4;
constexpr Word zone_group_state_field_name = 0x118969ec;
constexpr Word household_log_domain = 0x118979c8;
constexpr Word invalid_client_message = 0x11898480;
constexpr Word aio_vtable = 0x11896944;
constexpr Word aio_secondary_vtable = 0x1189698c;
constexpr Word aio_tertiary_vtable = 0x118969c8;
constexpr Word wrapper_base_vtable = 0x11897b28;
constexpr Word callback_base_vtable = 0x1188206c;
constexpr Word wrapper_impl_vtable = 0x11897b78;
constexpr Word callback_impl_vtable = 0x11897bc4;
constexpr Word aio_ref_base_vtable = 0x1188207c;
constexpr Word aio_ref_vtable = 0x11897b6c;
constexpr Word elapsed_base_vtable = 0x118820e4;
constexpr Word elapsed_vtable = 0x11882120;
constexpr Word final_wrapper_vtable = 0x11897bd4;
constexpr Word final_callback_vtable = 0x11897c20;
constexpr Word live_object_count = 0x121a0e68;
constexpr Word allocate = 0x10024f14;
constexpr Word initialize_aio = 0x10013336;
constexpr Word create_output_registration = 0x1002faea;
constexpr Word commit_output_registration = 0x1007eb95;
constexpr Word initialize_callback = 0x10045110;
constexpr Word add_aio_reference = 0x10066e8c;
constexpr Word cast_identity = 0x10073a7e;
constexpr Word log_error = 0x100238df;
}

namespace Size {
constexpr Word aio = 0x14148;
constexpr Word wrapper = 0x48;
constexpr Word zone_group_state_output = 27000;
}

namespace Offset {
constexpr Word aio_output = 0xd7d0;
constexpr Word aio_output_registration = 0xc108;
}

static __forceinline Word read32(Word address) {
    return *reinterpret_cast<Word *>(address);
}

static __forceinline void write32(Word address, Word value) {
    *reinterpret_cast<Word *>(address) = value;
}

static __forceinline void write8(Word address, Byte value) {
    *reinterpret_cast<Byte *>(address) = value;
}

static __forceinline Word virtual_function(Word object, Word offset) {
    return read32(read32(object) + offset);
}

using Method0 = Word (__thiscall *)(Word);
using Method2 = Word (__thiscall *)(Word, Word, Word);
using Method4 = Word (__thiscall *)(Word, Word, Word, Word, Word);
using NewFunction = Word (__cdecl *)(Word);
using OutputBuilder = Word (__thiscall *)(Word, Word, Word, Word);
using LogFunction = void (__cdecl *)(Word, Word, Word);

struct AdjustedReference {
    Word value = 0;

    ~AdjustedReference() {
        if (value)
            reinterpret_cast<Method0>(virtual_function(value, 8))(value);
    }
};

struct Household {
    __declspec(noinline) Word *GetZoneGroupStateFactoryLifetimeCandidate(
        Word *result, Word *zone_name);
};

Word *Household::GetZoneGroupStateFactoryLifetimeCandidate(
    Word *result, Word *zone_name) {
    Word household = reinterpret_cast<Word>(this);
    // Validate the household and resolve its ZoneGroupTopology client.
    Word controller = read32(household + 0xc8);
    if (!reinterpret_cast<Method0>(virtual_function(controller, 0x64))(controller)) {
        *result = 0;
        return result;
    }

    Word name = *zone_name ? *zone_name : Target::empty_name;
    Word client_owner = household + 0xc;
    Word client = reinterpret_cast<Method2>(virtual_function(client_owner, 4))(
        client_owner, name, 1);
    Word client_base = client ? read32(client + 0x1c) : 0;
    Word zgt_client = client_base ? client_base + 0x1430 : 0;
    if (!zgt_client) {
        reinterpret_cast<LogFunction>(Target::log_error)(
            Target::household_log_domain, 1, Target::invalid_client_message);
        *result = 0;
        return result;
    }

    // Construct the asynchronous operation for the UPnP action.
    Word aio = reinterpret_cast<NewFunction>(Target::allocate)(Size::aio);
    if (aio) {
        Word service_owner = read32(read32(zgt_client + 4) + 4) + zgt_client + 4;
        Word service = reinterpret_cast<Method0>(virtual_function(service_owner, 0x48))(
            service_owner);
        Word operation = reinterpret_cast<Method4>(virtual_function(service_owner, 0x50))(
            service_owner, 2000, 2000, 0, 0);
        using AioConstructor = void (__thiscall *)(Word, Word, Word, Word, Word);
        reinterpret_cast<AioConstructor>(Target::initialize_aio)(
            aio, service, Target::zone_group_service,
            Target::get_zone_group_state_action, operation);
        write32(aio, Target::aio_vtable);
        write32(aio + 0x60, Target::aio_secondary_vtable);
        write32(aio + 0x46c, Target::aio_tertiary_vtable);
        write8(aio + Offset::aio_output, 0);
    }

    // Register the ZoneGroupState output buffer with its 27000-byte bound.
    Word output_builder = reinterpret_cast<OutputBuilder>(Target::create_output_registration)(
        aio + Offset::aio_output_registration, Target::zone_group_state_field_name,
        aio + Offset::aio_output, Size::zone_group_state_output);
    reinterpret_cast<Method0>(Target::commit_output_registration)(output_builder);

    // Construct the public operation wrapper and retain its AIO object.
    Word wrapper = reinterpret_cast<NewFunction>(Target::allocate)(Size::wrapper);
    if (wrapper) {
        write32(wrapper, Target::wrapper_base_vtable);
        write32(wrapper + 4, 0);
        ++*reinterpret_cast<Word *>(Target::live_object_count);

        using ConstructCallback = void (__thiscall *)(Word);
        reinterpret_cast<ConstructCallback>(Target::initialize_callback)(wrapper + 8);
        write32(wrapper + 8, Target::callback_base_vtable);
        write32(wrapper, Target::wrapper_impl_vtable);
        write32(wrapper + 8, Target::callback_impl_vtable);
        write32(wrapper + 0xc, 0);
        write32(wrapper + 0x10, 0);
        write32(wrapper + 0x14, Target::aio_ref_base_vtable);
        write32(wrapper + 0x18, aio);
        if (aio) {
            using AddRef = void (__cdecl *)(Word);
            reinterpret_cast<AddRef>(Target::add_aio_reference)(aio + 4);
        }
        write32(wrapper + 0x1c, 0);
        write32(wrapper + 0x14, Target::aio_ref_vtable);
        write32(wrapper + 0x20, 0);
        *reinterpret_cast<unsigned short *>(wrapper + 0x24) = 1000;
        write32(wrapper + 0x28, 0);
        write32(wrapper + 0x2c, 0);
        write32(wrapper + 0x30, Target::elapsed_base_vtable);
        write32(wrapper + 0x34, 0);
        ++*reinterpret_cast<Word *>(Target::live_object_count);
        write32(wrapper + 0x30, Target::elapsed_vtable);
        write32(wrapper + 0x38, 0);
        write32(wrapper + 0x3c, 0);
        write32(wrapper + 0x40, 0);
        write32(wrapper + 0x44, 0);
        write32(wrapper, Target::final_wrapper_vtable);
        write32(wrapper + 8, Target::final_callback_vtable);
    }

    // Return the operation through the caller's shared-reference slot.
    AdjustedReference adjusted;
    if (wrapper) {
        Word cast_method = virtual_function(wrapper, 0xc);
        adjusted.value = cast_method == Target::cast_identity
            ? wrapper
            : reinterpret_cast<Method0>(cast_method)(wrapper);
        reinterpret_cast<Method0>(virtual_function(adjusted.value, 4))(adjusted.value);
    }
    *result = wrapper;
    if (wrapper)
        reinterpret_cast<Method0>(virtual_function(wrapper, 4))(wrapper);
    return result;
}

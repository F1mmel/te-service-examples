#pragma once

#include <mods/service.hpp>

#define TWILIT_ESSENTIALS_QUICK_ACCESS_SERVICE_ID "com.dusklight.twilit_essentials.quick_access"
#define TWILIT_ESSENTIALS_QUICK_ACCESS_SERVICE_MAJOR 1u
#define TWILIT_ESSENTIALS_QUICK_ACCESS_SERVICE_MINOR 0u

// Maximum length of an item id
#define TWILIT_ESSENTIALS_QUICK_ACCESS_ID_MAX 63u

typedef uint64_t TwilitEssentialsQuickAccessItemHandle;

struct TwilitEssentialsQuickAccessItemDesc {
    // Size of the struct, used for version compatibility
    uint32_t struct_size;

    // Unique id, saved with the slot so keep it the same between versions
    const char* id;

    // Display name shown under the selected slot
    const char* name;

    // Icon path in the mod's res folder, or a game item whose icon is used instead
    const char* icon;
    uint32_t icon_item;

    // Whether the item can be used mid-air
    uint32_t usable_in_air;

    // Checks whether the item is listed in Customize and can be selected
    uint32_t (*is_available)(void* user_data);

    // Called when the item is used, return 0 if nothing happened
    uint32_t (*use)(void* user_data);

    // Optional number drawn on the icon, like the arrow count
    uint32_t (*get_count)(void* user_data, int32_t* out_count, int32_t* out_max);

    // Custom data passed to the callbacks
    void* user_data;
};

#define TWILIT_ESSENTIALS_QUICK_ACCESS_ITEM_DESC_INIT                                          \
    {sizeof(TwilitEssentialsQuickAccessItemDesc), nullptr, nullptr, nullptr, 0xFFu, 0, nullptr, \
        nullptr, nullptr, nullptr}

struct TwilitEssentialsQuickAccessService {
    ServiceHeader header;

    // Registers a Quick Access item and returns its handle
    ModResult (*add_item)(ModContext* caller, const TwilitEssentialsQuickAccessItemDesc* desc,
        TwilitEssentialsQuickAccessItemHandle* out_handle);

    // Removes a registered item by its handle
    ModResult (*remove_item)(ModContext* caller, TwilitEssentialsQuickAccessItemHandle handle);
};

MOD_DECLARE_SERVICE(TwilitEssentialsQuickAccessService, svc_te_quick_access,
    TWILIT_ESSENTIALS_QUICK_ACCESS_SERVICE_ID, TWILIT_ESSENTIALS_QUICK_ACCESS_SERVICE_MAJOR,
    TWILIT_ESSENTIALS_QUICK_ACCESS_SERVICE_MINOR);

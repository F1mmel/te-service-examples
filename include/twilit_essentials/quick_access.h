#pragma once

#include <mods/service.hpp>

#define TWILIT_ESSENTIALS_QUICK_ACCESS_SERVICE_ID "com.dusklight.twilit_essentials.quick_access"
#define TWILIT_ESSENTIALS_QUICK_ACCESS_SERVICE_MAJOR 1u
#define TWILIT_ESSENTIALS_QUICK_ACCESS_SERVICE_MINOR 2u

// Maximum length of an item or page id
#define TWILIT_ESSENTIALS_QUICK_ACCESS_ID_MAX 63u

// Most items and pages all mods together can have
#define TWILIT_ESSENTIALS_QUICK_ACCESS_MAX_ITEMS 16u
#define TWILIT_ESSENTIALS_QUICK_ACCESS_MAX_PAGES 8u

typedef uint64_t TwilitEssentialsQuickAccessItemHandle;
typedef uint64_t TwilitEssentialsQuickAccessPageHandle;

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

    // Combined item, only available while both parts are. Each part is a game item number
    // or the id of a Quick Access item from any mod (0xFF / nullptr = unused)
    uint32_t combine_a_item;
    const char* combine_a_id;
    uint32_t combine_b_item;
    const char* combine_b_id;

    // Game item Link takes out before use runs, like the bow (aiming works as usual), 0xFF = none
    uint32_t use_item;

    // Page the item shows up on, from add_page (own pages only). 0 = the shared Mods page (v1.2)
    TwilitEssentialsQuickAccessPageHandle page;

    // Optional, return 1 to give its slot the gold frame, like the tunic Link is wearing (v1.2)
    uint32_t (*is_active)(void* user_data);
};

#define TWILIT_ESSENTIALS_QUICK_ACCESS_ITEM_DESC_INIT                                          \
    {sizeof(TwilitEssentialsQuickAccessItemDesc), nullptr, nullptr, nullptr, 0xFFu, 0, nullptr, \
        nullptr, nullptr, nullptr, 0xFFu, nullptr, 0xFFu, nullptr, 0xFFu, 0, nullptr}

// An own page next to Items and Tunics, L/R turns to it. Only shown while it has items (v1.2)
struct TwilitEssentialsQuickAccessPageDesc {
    // Size of the struct, used for version compatibility
    uint32_t struct_size;

    // Unique id, register the same id again after a reload to keep the page order
    const char* id;

    // Name shown on the L/R page buttons
    const char* name;

    // How many items the page shows (1-16), later ones are left out
    uint32_t max_slots;

    // 1 = picking an item uses it right away (like the Tunics page),
    // 0 = it goes on the Quick Access button (like the Mods page)
    uint32_t use_on_pick;
};

#define TWILIT_ESSENTIALS_QUICK_ACCESS_PAGE_DESC_INIT \
    {sizeof(TwilitEssentialsQuickAccessPageDesc), nullptr, nullptr, 8u, 0u}

struct TwilitEssentialsQuickAccessService {
    ServiceHeader header;

    // Registers a Quick Access item and returns its handle
    ModResult (*add_item)(ModContext* caller, const TwilitEssentialsQuickAccessItemDesc* desc,
        TwilitEssentialsQuickAccessItemHandle* out_handle);

    // Removes a registered item by its handle
    ModResult (*remove_item)(ModContext* caller, TwilitEssentialsQuickAccessItemHandle handle);

    // Registers an own page and returns its handle (v1.2)
    ModResult (*add_page)(ModContext* caller, const TwilitEssentialsQuickAccessPageDesc* desc,
        TwilitEssentialsQuickAccessPageHandle* out_handle);

    // Removes a page by its handle, remove its items first (v1.2)
    ModResult (*remove_page)(ModContext* caller, TwilitEssentialsQuickAccessPageHandle handle);
};

MOD_DECLARE_SERVICE(TwilitEssentialsQuickAccessService, svc_te_quick_access,
    TWILIT_ESSENTIALS_QUICK_ACCESS_SERVICE_ID, TWILIT_ESSENTIALS_QUICK_ACCESS_SERVICE_MAJOR,
    TWILIT_ESSENTIALS_QUICK_ACCESS_SERVICE_MINOR);

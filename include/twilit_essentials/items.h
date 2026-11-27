#pragma once

#include <mods/service.hpp>

#define TWILIT_ESSENTIALS_ITEMS_SERVICE_ID "com.dusklight.twilit_essentials.items"
#define TWILIT_ESSENTIALS_ITEMS_SERVICE_MAJOR 1u
#define TWILIT_ESSENTIALS_ITEMS_SERVICE_MINOR 1u

// Maximum length of an item id
#define TWILIT_ESSENTIALS_ITEM_ID_MAX 63u

// Items per Modded page in the item wheel and Advanced UI (extra pages appear automatically)
#define TWILIT_ESSENTIALS_ITEMS_PER_PAGE 20u

// Legacy alias kept for source compatibility; there is no longer a 20-item limit
#define TWILIT_ESSENTIALS_MAX_ITEMS TWILIT_ESSENTIALS_ITEMS_PER_PAGE

// Returned by get_item_button when the item is on no button
#define TWILIT_ESSENTIALS_ITEM_BUTTON_NONE 0xFFu

typedef uint64_t TwilitEssentialsItemHandle;

// An item on the Modded page(s) of the item wheel (and on Items > Modded in the Advanced UI).
// The player puts it on X, Y or the Twilit Essentials Z button like a normal item
struct TwilitEssentialsItemDesc {
    // Size of the struct, used for version compatibility
    uint32_t struct_size;

    // Unique id, the buttons remember the item by it, so keep it the same between versions
    const char* id;

    // Display name shown in the wheel
    const char* name;

    // Text of the Info window, it opens with A on the item in the wheel
    const char* description;

    // Icon path in the mod's res folder, or a game item whose icon is used instead
    const char* icon;
    uint32_t icon_item;

    // Checks whether the player owns the item, nullptr = always owned
    uint32_t (*is_unlocked)(void* user_data);

    // Called when the button is pressed in game, return 0 to play the error sound
    uint32_t (*use)(void* user_data);

    // Optional number shown under the icon, return 0 for none
    uint32_t (*get_count)(void* user_data, int32_t* out_count, int32_t* out_max);

    // Custom data passed to the callbacks
    void* user_data;

    // Size in the item wheel, 1 = as big as the game's own items there
    float icon_scale;

    // .bmd for the 3D preview in the Advanced UI, nullptr = icon_item's model
    const char* model;

    // Optional .btk and .brk animations for the model, both loop
    const char* model_btk;
    const char* model_brk;

    // Size of the model in the preview, 1 = fills the box like the game's items
    float model_scale;
};

#define TWILIT_ESSENTIALS_ITEM_DESC_INIT                                                                  \
    {sizeof(TwilitEssentialsItemDesc), nullptr, nullptr, nullptr, nullptr, 0xFFu, nullptr, nullptr, nullptr, \
        nullptr, 1.0f, nullptr, nullptr, nullptr, 1.0f}

struct TwilitEssentialsItemsService {
    ServiceHeader header;

    // Adds an item, the Modded page shows up as soon as there is one
    ModResult (*add_item)(ModContext* caller, const TwilitEssentialsItemDesc* desc, TwilitEssentialsItemHandle* out_handle);

    // Removes an item. The button keeps its id, so it comes back when the same id is added again
    ModResult (*remove_item)(ModContext* caller, TwilitEssentialsItemHandle handle);

    // Which button holds the item: 0 = X, 1 = Y, 2 = Z, TWILIT_ESSENTIALS_ITEM_BUTTON_NONE = none
    ModResult (*get_item_button)(ModContext* caller, TwilitEssentialsItemHandle handle, uint32_t* out_button);
};

MOD_DECLARE_SERVICE(TwilitEssentialsItemsService, svc_te_items, TWILIT_ESSENTIALS_ITEMS_SERVICE_ID,
    TWILIT_ESSENTIALS_ITEMS_SERVICE_MAJOR, TWILIT_ESSENTIALS_ITEMS_SERVICE_MINOR);

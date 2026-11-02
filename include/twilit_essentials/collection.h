#pragma once

#include <mods/service.hpp>

#define TWILIT_ESSENTIALS_COLLECTION_SERVICE_ID "com.dusklight.twilit_essentials.collection"
#define TWILIT_ESSENTIALS_COLLECTION_SERVICE_MAJOR 1u
#define TWILIT_ESSENTIALS_COLLECTION_SERVICE_MINOR 0u

// Supported collection slot types
enum TwilitEssentialsCollectionKind : uint32_t {
    TWILIT_ESSENTIALS_COLLECTION_SWORD = 0,
    TWILIT_ESSENTIALS_COLLECTION_SHIELD = 1,
    TWILIT_ESSENTIALS_COLLECTION_TUNIC = 2,
};

typedef uint64_t TwilitEssentialsCollectionSlotHandle;

// Will be eventually rewritten at some point since its kinda weird
struct TwilitEssentialsCollectionSlotDesc {
    // Size of the struct, used for version compatibility
    uint32_t struct_size;

    // Slot type and column in the collection menu
    uint32_t kind;
    uint32_t column;

    // Item ID used as the base for this slot
    uint32_t base_item;

    // Display name and description
    const char* name;
    const char* description;

    // Icon archive path and file ID
    const char* icon;
    uint32_t icon_arc_file_id;

    // Model archive and file IDs
    const char* model_arc;
    uint32_t model_file_id;
    uint32_t sheath_file_id;

    // Model position and rotation offsets
    float offset[3];
    float rotation[3];

    // Model scale
    float scale;

    // Equipment appearance settings
    uint32_t pad_color;
    uint32_t iron_boots_hide_feet;

    // Checks whether this slot is unlocked
    uint32_t (*is_unlocked)(void* user_data);

    // Custom data passed to the unlock callback
    void* user_data;
};

#define TWILIT_ESSENTIALS_COLLECTION_SLOT_DESC_INIT                                      \
    {sizeof(TwilitEssentialsCollectionSlotDesc), 0, 0, 0xFFu, nullptr, nullptr, nullptr, \
        0xFFFFu, nullptr, 0, 0xFFFFu, {0.0f, 0.0f, 0.0f}, {0.0f, 0.0f, 0.0f}, 1.0f,      \
        0xFFFFFFFFu, 1, nullptr, nullptr}

struct TwilitEssentialsCollectionService {
    ServiceHeader header;

    // Registers a collection slot and returns its handle
    ModResult (*add_slot)(ModContext* caller, const TwilitEssentialsCollectionSlotDesc* desc,
        TwilitEssentialsCollectionSlotHandle* out_handle);

    // Removes a registered slot by its handle
    ModResult (*remove_slot)(ModContext* caller, TwilitEssentialsCollectionSlotHandle handle);

    // Checks whether the specified slot is currently equipped
    ModResult (*is_equipped)(ModContext* caller, TwilitEssentialsCollectionSlotHandle handle,
        uint32_t* out_equipped);

    // Refreshes the collection menu or its registered slots
    ModResult (*refresh)(ModContext* caller);
};

MOD_DECLARE_SERVICE(TwilitEssentialsCollectionService, svc_te_collection,
    TWILIT_ESSENTIALS_COLLECTION_SERVICE_ID, TWILIT_ESSENTIALS_COLLECTION_SERVICE_MAJOR,
    TWILIT_ESSENTIALS_COLLECTION_SERVICE_MINOR);
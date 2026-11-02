#include "d/d_com_inf_game.h"

#include "mods/service.hpp"

#include "twilit_essentials/collection.h"

DEFINE_MOD();
IMPORT_OPTIONAL_SERVICE(TwilitEssentialsCollectionService, svc_te_collection);

static TwilitEssentialsCollectionSlotHandle s_slot = 0;

static uint32_t has_wooden_sword(void*) {
    return dComIfGs_isItemFirstBit(dItemNo_WOOD_STICK_e);
}

extern "C" {

MOD_EXPORT ModResult mod_initialize(ModError*) {
    // msvc strips these otherwise
    (void)&mod_meta_header_record;
    (void)&mod_meta_import_svc_te_collection;
    if (!svc_te_collection) return MOD_OK;

    TwilitEssentialsCollectionSlotDesc desc = TWILIT_ESSENTIALS_COLLECTION_SLOT_DESC_INIT;
    desc.kind = TWILIT_ESSENTIALS_COLLECTION_SWORD;
    desc.base_item = dItemNo_WOOD_STICK_e;
    desc.name = "Training Stick";
    desc.description = "Just a stick.";
    desc.is_unlocked = has_wooden_sword;
    // desc.user_data = nullptr;
    // desc.column = 0;
    // desc.icon = "textures/training_stick.bti";
    // desc.icon_arc_file_id = 0xFFFF;
    // desc.model_arc = "TrainingStick.arc";
    // desc.model_file_id = 0;
    // desc.sheath_file_id = 0xFFFF;
    // desc.offset[0] = 0.0f;
    // desc.rotation[0] = 0.0f;
    // desc.scale = 1.0f;
    // desc.pad_color = 0xFFFFFFFF;
    // desc.iron_boots_hide_feet = 1;
    svc_te_collection->add_slot(mod_ctx, &desc, &s_slot);
    return MOD_OK;
}

MOD_EXPORT ModResult mod_update(ModError*) {
    return MOD_OK;
}

MOD_EXPORT ModResult mod_shutdown(ModError*) {
    if (svc_te_collection && s_slot != 0) svc_te_collection->remove_slot(mod_ctx, s_slot);
    s_slot = 0;
    return MOD_OK;
}

}

#include "d/d_com_inf_game.h"

#include "mods/service.hpp"

#include "twilit_essentials/collection.h"

DEFINE_MOD();
IMPORT_OPTIONAL_SERVICE(TwilitEssentialsCollectionService, svc_te_collection);

static TwilitEssentialsCollectionSlotHandle s_sword = 0;
static TwilitEssentialsCollectionSlotHandle s_shield = 0;
static TwilitEssentialsCollectionSlotHandle s_tunic = 0;

static uint32_t has_wooden_sword(void*) {
    return dComIfGs_isItemFirstBit(dItemNo_WOOD_STICK_e);
}

static uint32_t has_ordon_shield(void*) {
    return dComIfGs_isItemFirstBit(dItemNo_WOOD_SHIELD_e);
}

extern "C" {

MOD_EXPORT ModResult mod_initialize(ModError*) {
    // msvc strips these otherwise
    (void)&mod_meta_header_record;
    (void)&mod_meta_import_svc_te_collection;
    if (!svc_te_collection) return MOD_OK;

    TwilitEssentialsCollectionSlotDesc sword = TWILIT_ESSENTIALS_COLLECTION_SLOT_DESC_INIT;
    sword.kind = TWILIT_ESSENTIALS_COLLECTION_SWORD;
    // base_item = the normal sword Link really holds underneath, damage and moves still come from it.
    // Without an own icon its game icon is shown, and the player has to own it
    sword.base_item = dItemNo_WOOD_STICK_e; // Wooden sword
    // sword.base_item = dItemNo_SWORD_e; // Ordon Sword
    // sword.base_item = dItemNo_MASTER_SWORD_e; // becomes the Light Sword once the player has that
    sword.name = "Training Stick";
    sword.description = "Just a stick.";
    sword.is_unlocked = has_wooden_sword;
    // sword.user_data = nullptr;
    // sword.column = 0;
    // sword.icon = "textures/training_stick.bti";
    // sword.icon_arc_file_id = 0xFFFF;
    // sword.model_arc = "TrainingStick.arc";
    // sword.model_file_id = 0;
    // sword.sheath_file_id = 0xFFFF;
    // sword.offset[0] = 0.0f;
    // sword.rotation[0] = 0.0f;
    // sword.scale = 1.0f;
    svc_te_collection->add_slot(mod_ctx, &sword, &s_sword);

    // no icon given, so it uses the game icon of the Ordon Shield
    TwilitEssentialsCollectionSlotDesc shield = TWILIT_ESSENTIALS_COLLECTION_SLOT_DESC_INIT;
    shield.kind = TWILIT_ESSENTIALS_COLLECTION_SHIELD;
    // base_item = same as above
    shield.base_item = dItemNo_WOOD_SHIELD_e; // Ordon Shield
    // shield.base_item = dItemNo_SHIELD_e; // Wooden Shield
    // shield.base_item = dItemNo_HYLIA_SHIELD_e; // Hylian Shield
    shield.name = "Patched Shield";
    shield.description = "Held together with rope.";
    shield.is_unlocked = has_ordon_shield;
    // shield.user_data = nullptr;
    // shield.column = 0;
    // shield.icon = "textures/patched_shield.bti";
    // shield.icon_arc_file_id = 0xFFFF;
    // shield.model_arc = "PatchedShield.arc";
    // shield.model_file_id = 0;
    // shield.offset[0] = 0.0f;
    // shield.rotation[0] = 0.0f;
    // shield.scale = 1.0f;
    svc_te_collection->add_slot(mod_ctx, &shield, &s_shield);

    // clothes have no game icon, so this one needs its own .bti from res/
    TwilitEssentialsCollectionSlotDesc tunic = TWILIT_ESSENTIALS_COLLECTION_SLOT_DESC_INIT;
    tunic.kind = TWILIT_ESSENTIALS_COLLECTION_TUNIC;
    // base_item = same as above
    tunic.base_item = dItemNo_WEAR_CASUAL_e; // Ordon Clothes
    // tunic.base_item = dItemNo_WEAR_KOKIRI_e; // Hero's Clothes
    // tunic.base_item = dItemNo_WEAR_ZORA_e; // Zora Armor
    // tunic.base_item = dItemNo_ARMOR_e; // Magic Armor
    tunic.name = "Farmhand Clothes";
    tunic.description = "Smells like goats.";
    tunic.icon = "textures/clothes.bti";
    // tunic.user_data = nullptr;
    // tunic.column = 0;
    // tunic.icon_arc_file_id = 0xFFFF;
    // tunic.model_arc = "FarmhandClothes.arc";
    // tunic.model_file_id = 0;
    // tunic.pad_color = 0xFFFFFFFF;
    // tunic.iron_boots_hide_feet = 1;
    svc_te_collection->add_slot(mod_ctx, &tunic, &s_tunic);
    return MOD_OK;
}

MOD_EXPORT ModResult mod_update(ModError*) {
    return MOD_OK;
}

MOD_EXPORT ModResult mod_shutdown(ModError*) {
    if (svc_te_collection) {
        if (s_sword != 0) svc_te_collection->remove_slot(mod_ctx, s_sword);
        if (s_shield != 0) svc_te_collection->remove_slot(mod_ctx, s_shield);
        if (s_tunic != 0) svc_te_collection->remove_slot(mod_ctx, s_tunic);
    }

    s_sword = 0;
    s_shield = 0;
    s_tunic = 0;
    return MOD_OK;
}

}

#include "d/d_com_inf_game.h"

#include "mods/service.hpp"

#include "twilit_essentials/items.h"

DEFINE_MOD();
IMPORT_OPTIONAL_SERVICE(TwilitEssentialsItemsService, svc_te_items);

static TwilitEssentialsItemHandle s_pouch = 0;
static int s_charges = 3;

static uint32_t use_pouch(void*) {
    if (s_charges <= 0) return 0;

    s_charges--;
    dComIfGp_setItemRupeeCount(5);
    return 1;
}

static uint32_t pouch_count(void*, int32_t* count, int32_t* max) {
    *count = s_charges;
    *max = 3;
    return 1;
}

extern "C" {

MOD_EXPORT ModResult mod_initialize(ModError*) {
    // msvc strips these otherwise
    (void)&mod_meta_header_record;
    (void)&mod_meta_import_svc_te_items;
    if (!svc_te_items) return MOD_OK;

    TwilitEssentialsItemDesc pouch = TWILIT_ESSENTIALS_ITEM_DESC_INIT;
    pouch.id = "example.rupee_pouch";
    pouch.name = "Rupee Pouch";
    // shown in the Info window (A on the item in the wheel)
    pouch.description = "A small pouch with a few rupees left in it. Gives 5 rupees, works three times.";
    pouch.icon_item = dItemNo_WALLET_LV1_e; // no own icon, so the game icon of this item
    // pouch.icon = "textures/rupee_pouch.bti";
    // pouch.is_unlocked = nullptr; // nullptr = always owned
    // pouch.icon_scale = 1.0f; // size in the item wheel, 1 = like the game items
    pouch.use = use_pouch;
    pouch.get_count = pouch_count;
    svc_te_items->add_item(mod_ctx, &pouch, &s_pouch);
    return MOD_OK;
}

MOD_EXPORT ModResult mod_update(ModError*) {
    return MOD_OK;
}

MOD_EXPORT ModResult mod_shutdown(ModError*) {
    if (svc_te_items && s_pouch != 0) svc_te_items->remove_item(mod_ctx, s_pouch);

    s_pouch = 0;
    return MOD_OK;
}

}

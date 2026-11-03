#include "d/d_com_inf_game.h"

#include "mods/service.hpp"

#include "twilit_essentials/quick_access.h"

DEFINE_MOD();
IMPORT_OPTIONAL_SERVICE(TwilitEssentialsQuickAccessService, svc_te_quick_access);

static TwilitEssentialsQuickAccessItemHandle s_item = 0;
static int s_charges = 3;

static uint32_t has_charges(void*) {
    return s_charges > 0;
}

static uint32_t drink(void*) {
    if (dComIfGs_getLife() >= dComIfGs_getMaxLifeGauge()) return 0;
    dComIfGp_setItemLifeCount(12.0f, 0);
    s_charges--;
    return 1;
}

static uint32_t charges(void*, int32_t* count, int32_t* max) {
    *count = s_charges;
    *max = 3;
    return 1;
}

extern "C" {

MOD_EXPORT ModResult mod_initialize(ModError*) {
    // msvc strips these otherwise
    (void)&mod_meta_header_record;
    (void)&mod_meta_import_svc_te_quick_access;
    if (!svc_te_quick_access) return MOD_OK;

    TwilitEssentialsQuickAccessItemDesc desc = TWILIT_ESSENTIALS_QUICK_ACCESS_ITEM_DESC_INIT;
    desc.id = "te_example.heart_potion";
    desc.name = "Heart Potion";
    desc.icon_item = dItemNo_RED_BOTTLE_e;
    desc.use = drink;
    desc.is_available = has_charges;
    desc.get_count = charges;
    // desc.icon = "textures/heart_potion.bti";
    // desc.usable_in_air = 1;
    // desc.user_data = nullptr;
    svc_te_quick_access->add_item(mod_ctx, &desc, &s_item);
    return MOD_OK;
}

MOD_EXPORT ModResult mod_update(ModError*) {
    return MOD_OK;
}

MOD_EXPORT ModResult mod_shutdown(ModError*) {
    if (svc_te_quick_access && s_item != 0) svc_te_quick_access->remove_item(mod_ctx, s_item);
    s_item = 0;
    return MOD_OK;
}

}

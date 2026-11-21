#include "d/d_com_inf_game.h"

#include "mods/service.hpp"

#include "twilit_essentials/quick_access.h"

DEFINE_MOD();
IMPORT_OPTIONAL_SERVICE(TwilitEssentialsQuickAccessService, svc_te_quick_access);

static TwilitEssentialsQuickAccessItemHandle s_item = 0;
static TwilitEssentialsQuickAccessItemHandle s_fireArrow = 0;
static TwilitEssentialsQuickAccessItemHandle s_oilRefill = 0;
static TwilitEssentialsQuickAccessPageHandle s_page = 0;
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

// fire arrow = bow + lantern, every use burns a bit of oil
static uint32_t has_oil(void*) {
    return dComIfGs_getOil() >= 1000;
}

static uint32_t burn_oil(void*) {
    dComIfGs_setOil(dComIfGs_getOil() - 1000);
    return 1;
}

static uint32_t refill_oil(void*) {
    if (dComIfGs_getOil() >= dComIfGs_getMaxOil()) return 0;
    dComIfGs_setOil(dComIfGs_getMaxOil());
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

    TwilitEssentialsQuickAccessItemDesc fire = TWILIT_ESSENTIALS_QUICK_ACCESS_ITEM_DESC_INIT;
    fire.id = "te_example.fire_arrow";
    fire.name = "Fire Arrow";
    fire.combine_a_item = dItemNo_BOW_e;
    fire.combine_b_item = dItemNo_KANTERA_e;
    // fire.combine_b_id = "other_mod.item"; // parts can be items from other mods too
    fire.use_item = dItemNo_BOW_e; // takes out the bow, aiming works as usual
    fire.is_available = has_oil;
    fire.use = burn_oil;
    svc_te_quick_access->add_item(mod_ctx, &fire, &s_fireArrow);

    // own page next to Items and Tunics, the two items above stay on the shared Mods page
    TwilitEssentialsQuickAccessPageDesc page = TWILIT_ESSENTIALS_QUICK_ACCESS_PAGE_DESC_INIT;
    page.id = "te_example.supplies";
    page.name = "Supplies";
    page.max_slots = 4;
    page.use_on_pick = 1; // picking an item uses it right away, 0 = puts it on the Quick Access button
    svc_te_quick_access->add_page(mod_ctx, &page, &s_page);

    TwilitEssentialsQuickAccessItemDesc oil = TWILIT_ESSENTIALS_QUICK_ACCESS_ITEM_DESC_INIT;
    oil.id = "te_example.oil_refill";
    oil.name = "Oil Refill";
    oil.icon_item = dItemNo_OIL_BOTTLE_e;
    oil.use = refill_oil;
    oil.page = s_page; // 0 would put it on the shared Mods page
    svc_te_quick_access->add_item(mod_ctx, &oil, &s_oilRefill);
    return MOD_OK;
}

MOD_EXPORT ModResult mod_update(ModError*) {
    return MOD_OK;
}

MOD_EXPORT ModResult mod_shutdown(ModError*) {
    if (svc_te_quick_access && s_item != 0) svc_te_quick_access->remove_item(mod_ctx, s_item);
    if (svc_te_quick_access && s_fireArrow != 0) svc_te_quick_access->remove_item(mod_ctx, s_fireArrow);
    // items first, then the page
    if (svc_te_quick_access && s_oilRefill != 0) svc_te_quick_access->remove_item(mod_ctx, s_oilRefill);
    if (svc_te_quick_access && s_page != 0) svc_te_quick_access->remove_page(mod_ctx, s_page);
    s_item = 0;
    s_fireArrow = 0;
    s_oilRefill = 0;
    s_page = 0;
    return MOD_OK;
}

}

#include "d/actor/d_a_alink.h"
#include "d/d_com_inf_game.h"

#include "mods/service.hpp"

#include "twilit_essentials/stamina.h"

DEFINE_MOD();
IMPORT_OPTIONAL_SERVICE(TwilitEssentialsStaminaService, svc_te_stamina);

static bool is_drawing_bow() {
    daAlink_c* link = daAlink_getAlinkActorClass();
    return link != nullptr && link->mEquipItem == dItemNo_BOW_e &&
           (link->checkBowReloadAnime() || link->checkBowChargeWaitAnime());
}

extern "C" {

MOD_EXPORT ModResult mod_initialize(ModError*) {
    // msvc strips these otherwise
    (void)&mod_meta_header_record;
    (void)&mod_meta_import_svc_te_stamina;
    return MOD_OK;
}

MOD_EXPORT ModResult mod_update(ModError*) {
    if (svc_te_stamina && is_drawing_bow()) {
        svc_te_stamina->drain(mod_ctx, 0.4f);
    }
    return MOD_OK;
}

MOD_EXPORT ModResult mod_shutdown(ModError*) {
    return MOD_OK;
}

}

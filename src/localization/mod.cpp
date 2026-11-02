#include "mods/service.hpp"

#include "twilit_essentials/localization.h"

DEFINE_MOD();
IMPORT_OPTIONAL_SERVICE(TwilitEssentialsLocalizationService, svc_te_localization);

static TwilitEssentialsLanguageHandle s_language = 0;

extern "C" {

MOD_EXPORT ModResult mod_initialize(ModError*) {
    // msvc strips these otherwise
    (void)&mod_meta_header_record;
    (void)&mod_meta_import_svc_te_localization;
    if (!svc_te_localization) return MOD_OK;

    TwilitEssentialsLanguageDesc desc = TWILIT_ESSENTIALS_LANGUAGE_DESC_INIT;
    desc.code = "demo";
    desc.name = "Demo Language";
    desc.fallback = "en";
    svc_te_localization->add_language(mod_ctx, &desc, &s_language);
    return MOD_OK;
}

MOD_EXPORT ModResult mod_update(ModError*) {
    return MOD_OK;
}

MOD_EXPORT ModResult mod_shutdown(ModError*) {
    if (svc_te_localization && s_language != 0) svc_te_localization->remove_language(mod_ctx, s_language);
    s_language = 0;
    return MOD_OK;
}

}

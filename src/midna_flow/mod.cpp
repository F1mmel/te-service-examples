#include "d/d_com_inf_game.h"

#include "mods/service.hpp"
#include "mods/svc/ui.h"

#include "twilit_essentials/midna_flow.h"

DEFINE_MOD();
IMPORT_OPTIONAL_SERVICE(UiService, svc_ui);
IMPORT_OPTIONAL_SERVICE(TwilitEssentialsMidnaFlowService, svc_te_midna_flow);

static TwilitEssentialsMidnaButtonHandle s_button = 0;
static bool s_enabled = true;

// checked every frame, midna's menu updates right away
static uint32_t is_visible(void*) {
    return s_enabled;
}

static void heal(void*) {
    dComIfGp_setItemLifeCount(12.0f, 0);
}

static void get_enabled(ModContext*, void*, UiControlValue* out) {
    out->bool_value = s_enabled;
}

static void set_enabled(ModContext*, void*, const UiControlValue* value) {
    s_enabled = value->bool_value;
}

static ModResult build_panel(ModContext*, UiElementHandle pane, void*, ModError*) {
    UiControlDesc toggle = UI_CONTROL_DESC_INIT;
    toggle.kind = UI_CONTROL_TOGGLE;
    toggle.label = "Heal option in Midna's menu";
    toggle.get = get_enabled;
    toggle.set = set_enabled;
    svc_ui->pane_add_control(mod_ctx, pane, &toggle, nullptr);
    return MOD_OK;
}

extern "C" {

MOD_EXPORT ModResult mod_initialize(ModError*) {
    // msvc strips these otherwise
    (void)&mod_meta_header_record;
    (void)&mod_meta_import_svc_ui;
    (void)&mod_meta_import_svc_te_midna_flow;
    if (!svc_te_midna_flow) return MOD_OK;

    TwilitEssentialsMidnaButtonDesc desc = TWILIT_ESSENTIALS_MIDNA_BUTTON_DESC_INIT;
    desc.label = "Heal me";
    desc.is_visible = is_visible;
    desc.on_select = heal;
    svc_te_midna_flow->add_button(mod_ctx, &desc, &s_button);

    if (svc_ui) {
        UiModsPanelDesc panel = UI_MODS_PANEL_DESC_INIT;
        panel.build = build_panel;
        svc_ui->register_mods_panel(mod_ctx, &panel);
    }

    return MOD_OK;
}

MOD_EXPORT ModResult mod_update(ModError*) {
    return MOD_OK;
}

MOD_EXPORT ModResult mod_shutdown(ModError*) {
    if (svc_te_midna_flow && s_button != 0) svc_te_midna_flow->remove_button(mod_ctx, s_button);
    s_button = 0;
    return MOD_OK;
}

}

#pragma once

#include <mods/service.hpp>

#define TWILIT_ESSENTIALS_MIDNA_FLOW_SERVICE_ID "com.dusklight.twilit_essentials.midna_flow"
#define TWILIT_ESSENTIALS_MIDNA_FLOW_SERVICE_MAJOR 1u
#define TWILIT_ESSENTIALS_MIDNA_FLOW_SERVICE_MINOR 0u

// Maximum length of a button label
#define TWILIT_ESSENTIALS_MIDNA_BUTTON_LABEL_MAX 63u

typedef uint64_t TwilitEssentialsMidnaButtonHandle;

struct TwilitEssentialsMidnaButtonDesc {
    // Size of the struct, used for version compatibility
    uint32_t struct_size;

    // Text of the option in Midna's menu
    const char* label;

    // Checked every frame, the menu is rebuilt right away when the answer changes (null = always shown)
    uint32_t (*is_visible)(void* user_data);

    // Called once the menu has closed after the option was picked
    void (*on_select)(void* user_data);

    // Custom data passed to the callbacks
    void* user_data;
};

#define TWILIT_ESSENTIALS_MIDNA_BUTTON_DESC_INIT \
    {sizeof(TwilitEssentialsMidnaButtonDesc), nullptr, nullptr, nullptr, nullptr}

struct TwilitEssentialsMidnaFlowService {
    ServiceHeader header;

    // Adds an option to Midna's call menu and returns its handle
    ModResult (*add_button)(ModContext* caller, const TwilitEssentialsMidnaButtonDesc* desc,
        TwilitEssentialsMidnaButtonHandle* out_handle);

    // Removes a button by its handle
    ModResult (*remove_button)(ModContext* caller, TwilitEssentialsMidnaButtonHandle handle);

    // Changes the text of a button, the menu updates on its own
    ModResult (*set_label)(ModContext* caller, TwilitEssentialsMidnaButtonHandle handle, const char* label);
};

MOD_DECLARE_SERVICE(TwilitEssentialsMidnaFlowService, svc_te_midna_flow,
    TWILIT_ESSENTIALS_MIDNA_FLOW_SERVICE_ID, TWILIT_ESSENTIALS_MIDNA_FLOW_SERVICE_MAJOR,
    TWILIT_ESSENTIALS_MIDNA_FLOW_SERVICE_MINOR);

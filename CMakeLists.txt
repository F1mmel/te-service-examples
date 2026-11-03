cmake_minimum_required(VERSION 3.26)
project(te_service_examples CXX)

if (NOT DUSKLIGHT_VERSION)
    set(DUSKLIGHT_VERSION "8b70a4477b8a5331d8bda1bfd6b095c65880c856")
endif ()

include("${CMAKE_CURRENT_SOURCE_DIR}/cmake/FetchDusklight.cmake")
add_subdirectory("${DUSKLIGHT_DIR}/sdk" dusklight-sdk EXCLUDE_FROM_ALL)

add_mod(te_stamina_example
        FEATURES game
        SOURCES src/stamina/mod.cpp
        MOD_JSON src/stamina/mod.json
)

add_mod(te_collection_example
        FEATURES game
        SOURCES src/collection/mod.cpp
        MOD_JSON src/collection/mod.json
)

add_mod(te_localization_example
        FEATURES game
        SOURCES src/localization/mod.cpp
        MOD_JSON src/localization/mod.json
        RES_DIR src/localization/res
)

add_mod(te_quick_access_example
        FEATURES game
        SOURCES src/quick_access/mod.cpp
        MOD_JSON src/quick_access/mod.json
)

foreach (target te_stamina_example te_collection_example te_localization_example te_quick_access_example)
    target_include_directories(${target} PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/include")
    if (MSVC)
        target_link_options(${target} PRIVATE "/OPT:NOREF")
    endif ()
endforeach ()

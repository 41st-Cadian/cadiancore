#include "script_component.hpp"
#include "config_lists.hpp"

class CfgPatches {
    class SUBADDON {
        addonRootClass = QADDON;
        name = COMPONENT_NAME;
        units[] = {
            UNIT_LIST
        };
        weapons[] = {
            ITEM_LIST
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
        };
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};

#include "CfgMovesBasic.hpp"
#include "CfgWeapons.hpp"
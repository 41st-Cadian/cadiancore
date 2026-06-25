#include "script_component.hpp"
#include "config_lists.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            UNIT_LIST
        };
        weapons[] = {
            ITEM_LIST
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"A3_Data_F_Decade_Loadorder", "ace_main"};
        author = AUTHOR;
        authors[] = {""};
        url = CSTRING(URL);
        VERSION_CONFIG;
    };
};



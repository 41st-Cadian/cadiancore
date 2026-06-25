class GHELMET(base): H_HelmetB {
    scope = 2;
    scopeArsenal = 2;
    author = AUTHOR;
    displayName = "[BAW] Battledroid Interface";
	subItems[] = {};
    hiddenSelectionTextures[] = {};
    model = "\A3\Weapons_F\empty.p3d";
    baw_logistics_arsenals_whitelists[] = {"Battledroid","Command"};

    class ItemInfo: ItemInfo {
        mass = 1;
        uniformModel = "\A3\Weapons_F\empty.p3d";
        HELMET_PROTECTION;
    };

    mti_catTabe_core_hasHelmetCam = 1;
    HELMET_ACE_HEARING;
};

class GHELMET(base): FIG_CadianHelm {
    scope = 2;
    scopeArsenal = 2;
    author = AUTHOR;
    displayName = "[41st] Guardsman Helmet";
    hiddenSelectionsTextures[] = {QPATHTOF(data\helmet\Helmet_co.paa)};
    class ItemInfo: ItemInfo {
        HELMET_PROTECTION;
    };
    HELMET_ACE_HEARING;
};
class GHELMET(ws): GHELMET(base){
    scope = 2;
    scopeArsenal = 2;
    author = AUTHOR;
    displayName = "[41st] Whiteshield Helmet";
    hiddenSelectionsTextures[] = {QPATHTOF(data\helmet\Helmet_WS_co.paa)};
};

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
class GHELMET(gogglesdown): GHELMET(base){
    displayname = "[41st] Guardsman Helmet [Goggles Down]";
    model = "\FIG_Imperial_Guard\FIG_Cadians\FIG_CadianHelmGD.p3d";
    hiddenSelectionsTextures[] = {QPATHTOF(data\helmet\Helmet_co.paa),"\FIG_Imperial_Guard\FIG_Cadians\data\CadianHelm\FIG_CadianGoggles_co.paa"};
    hiddenSelections[] = {"camo","camo1"};
    class ItemInfo: ItemInfo{
        hiddenSelections[] = {"camo","camo1"};
        uniformModel = "\FIG_Imperial_Guard\FIG_Cadians\FIG_CadianHelmGD.p3d";
        hiddenSelectionsTextures[] = {QPATHTOF(data\helmet\Helmet_co.paa),"\FIG_Imperial_Guard\FIG_Cadians\data\CadianHelm\FIG_CadianGoggles_co.paa"};
    };
};
class GHELMET(gogglesup): GHELMET(gogglesdown){
    displayname = "[41st] Guardsman Helmet [Goggles Up]";
    model = "\FIG_Imperial_Guard\FIG_Cadians\FIG_CadianHelmGU.p3d";
    class ItemInfo: ItemInfo{
        uniformModel = "\FIG_Imperial_Guard\FIG_Cadians\FIG_CadianHelmGU.p3d";
    };
};
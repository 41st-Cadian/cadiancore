class GVEST(recruit): FIG_CadianArmour{
    scope = 2;
    author = AUTHOR;
    displayName = "[41st] Recruit Armour";
    hiddenSelectionsTextures[] = {"\FIG_Imperial_Guard\FIG_Cadians\data\CadianArmour\FIG_CadianArmour_co.paa"};
    class ItemInfo: ItemInfo {
        containerClass = VEST_SUPPLYCLASS;
        vestType = "Rebreather";
        VEST_PROTECTION;
    };
};
class GVEST(base): FIG_CadianArmourPV1 {
    scope = 2;
    author = AUTHOR;
    displayName = "[41st] Guardsman Armour";
    hiddenSelectionsTextures[] = {"\FIG_Imperial_Guard\FIG_Cadians\data\CadianArmour\FIG_CadianArmour_co.paa","\FIG_Imperial_Guard\FIG_Cadians\data\CadianArmour\FIG_CadianPouches_co.paa"};
    class ItemInfo: ItemInfo {
        containerClass = VEST_SUPPLYCLASS;
        vestType = "Rebreather";
        VEST_PROTECTION;
    };
};
class GVEST(medic): FIG_CadianArmourPV2 {
    scope = 2;
    author = AUTHOR;
    displayName = "[41st] Guardsman Medic Armour";
    hiddenSelectionsTextures[] = {"\FIG_Imperial_Guard\FIG_Cadians\data\CadianArmour\FIG_CadianArmour_co.paa","\FIG_Imperial_Guard\FIG_Cadians\data\CadianArmour\FIG_CadianPouches_co.paa"};
    class ItemInfo: ItemInfo {
        containerClass = VEST_SUPPLYCLASS;
        vestType = "Rebreather";
        VEST_PROTECTION;
    };
};
class GVEST(assault): FIG_CadianArmourPV3{
    scope = 2;
    author = AUTHOR;
    displayName = "[41st] Guardsman Assault Armour";
    hiddenSelectionsTextures[] = {"\FIG_Imperial_Guard\FIG_Cadians\data\CadianArmour\FIG_CadianArmour_co.paa","\FIG_Imperial_Guard\FIG_Cadians\data\CadianArmour\FIG_CadianPouches_co.paa","\FIG_Imperial_Guard\FIG_Cadians\data\CadianArmour\FIG_CadianPouchesV2_co.paa"};
    class ItemInfo: ItemInfo {
        containerClass = VEST_SUPPLYCLASS;
        vestType = "Rebreather";
        VEST_PROTECTION;
    };
};
class GVEST(marksman): FIG_CadianArmourPV4{
    scope = 2;
    author = AUTHOR;
    displayName = "[41st] Guardsman Marksman Armour";
    hiddenSelectionsTextures[] = {"\FIG_Imperial_Guard\FIG_Cadians\data\CadianArmour\FIG_CadianArmour_co.paa","\FIG_Imperial_Guard\FIG_Cadians\data\CadianArmour\FIG_CadianPouches_co.paa","\FIG_Imperial_Guard\FIG_Cadians\data\CadianArmour\FIG_CadianPouchesV2_co.paa"};
    class ItemInfo: ItemInfo {
        containerClass = VEST_SUPPLYCLASS;
        vestType = "Rebreather";
        VEST_PROTECTION;
    };
};
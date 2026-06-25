// Base
class GUNIT(base): ls_droid_bx {
    scope = 2;
	scopeArsenal = 2;
    author = AUTHOR;
    displayName = "[BAW] BX Commando";

    backpack = QEGBACKPACK(equipment_custom,arc);

    faction = QEGVAR(faction,cis);
    editorSubcategory = QEGVAR(edsubcat,spawnunits);

	ls_activeCamo_camoItem  = QGUNIT(stealth_base);

    weapons[] = {};
    respawnWeapons[] = {};
    magazines[] = {};
    respawnMagazines[] = {};

    armor = UNIT_ARMOR;
	armorStructural = UNIT_ARMOR_STRUCTURAL;
	explosionShielding = UNIT_EXPLOSION_SHIELDING;
	minTotalDamageThreshold = UNIT_MIN_TOTAL_DAMAGE_THRESHOLD;
	impactDamageMultiplier = UNIT_IMPACT_DAMAGE_MULTIPLIER;

	UNIT_HITPOINTS;
};

class GUNIT(stealth_base): GUNIT(base) {
	scope = 1;
	scopeArsenal = 1;
    author = AUTHOR;
    displayName = "[BAW] BX Commando Chassis (Stealth)";
	ls_activeCamo_enabled = 1;

	hiddenSelectionsTextures[] = {
		"\ls\core\addons\data\textures\blank_ca.paa",
		"\ls\core\addons\data\textures\blank_ca.paa"
	};
	hiddenSelectionsMaterials[] = {
		"\ls\core\addons\data\materials\activeCamo.rvmat",
		"\ls\core\addons\data\materials\activeCamo.rvmat"
	};
};

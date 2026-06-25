class ls_droid_droideka;
class GUNIT(droideka_base): ls_droid_droideka {
    author = AUTHOR;
    scope = 2;
    displayName = "Droideka Base";
    faction = QEGVAR(faction,cis);
    editorSubcategory = QEGVAR(edsubcat,spawnunits);
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

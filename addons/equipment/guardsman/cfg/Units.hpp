// Base
class GUNIT(base): JLTS_Droid_B1_E5 {
    scope = 2;
    author = AUTHOR;
    displayName = "Battledroid";

    backpack = QGBACKPACK(base);

    faction = QEGVAR(faction,cis);
    editorSubcategory = QEGVAR(edsubcat,spawnunits);
    nakedUniform = QGUNIFORM(base);
    uniformClass = QGUNIFORM(base);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniforms\b1_new_co.paa)};

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

class GUNIT(woodland): GUNIT(base) {
    scope = 1;
    displayName = "Battledroid (Woodland)";
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniforms\Woodland_camo_co.paa)};
    uniformClass = QGUNIFORM(woodland);
};

class GUNIT(crew): GUNIT(base) {
    scope = 2;
    displayName = "Crew Battledroid";
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniforms\b1_crew_co.paa)};
    uniformClass = QGUNIFORM(crew);

    weapons[] = {QGWEAPON(E5)};
    respawnWeapons[] = {QGWEAPON(E5)};
    magazines[] = {QGMAG(E5), QGMAG(E5), QGMAG(E5), QGMAG(E5), QGMAG(E5)};
    respawnMagazines[] = {QGMAG(E5), QGMAG(E5), QGMAG(E5), QGMAG(E5), QGMAG(E5)};

    linkedItems[] = {QGVEST(Plating_Basic), QGHELMET(base)};
    respawnLinkedItems[] = {QGVEST(Plating_Basic), QGHELMET(base)};
};

class GUNIT(pilot): GUNIT(crew) {
    scope = 2;
    displayName = "Pilot Battledroid";
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniforms\b1_pilot_co.paa)};
    uniformClass = QGUNIFORM(pilot);
};
class GUNIT(sec): GUNIT(crew) {
    scope = 2;
    displayName = "Security Battledroid";
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniforms\b1_sec_co.paa)};
    uniformClass = QGUNIFORM(sec);
};
class GUNIT(sec_cpl): GUNIT(sec) {
    scope = 2;
    displayName = "Security Battledroid (Corporal)";
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniforms\b1_sec_cpl_co.paa)};
    uniformClass = QGUNIFORM(sec_cpl);
};
class GUNIT(marine): GUNIT(crew) {
    scope = 2;
    displayName = "Marine Battledroid";
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniforms\b1_marine_co.paa)};
    uniformClass = QGUNIFORM(marine);
};
class GUNIT(eng): GUNIT(crew) {
    scope = 2;
    displayName = "Engineer Battledroid";
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniforms\b1_eng_co.paa)};
    uniformClass = QGUNIFORM(eng);
};
class GUNIT(firefighter): GUNIT(crew) {
    scope = 2;
    displayName = "Firefighter Battledroid";
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniforms\b1_firefighter_co.paa)};
    uniformClass = QGUNIFORM(firefighter);
};
class GUNIT(abd): GUNIT(crew) {
    scope = 2;
    displayName = "A-B1 Battledroid";
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniforms\b1_abd_co.paa)};
    uniformClass = QGUNIFORM(abd);
};
class GUNIT(mksm_base): GUNIT(crew) {
    scope = 1;
    displayName = "MKS-M Battledroid";
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniforms\b1_mksm_basic_co.paa)};
    uniformClass = QGUNIFORM(mksm_base);
};
class GUNIT(mksm_abd): GUNIT(mksm_base) {
    scope = 1;
    displayName = "MKS-M A-B1 Battledroid";
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniforms\b1_mksm_abd_co.paa)};
    uniformClass = QGUNIFORM(mksm_abd);
};

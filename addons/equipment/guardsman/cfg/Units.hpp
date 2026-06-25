// Base
class FIG_CadianUniformV4_inf_B;
class GUNIT(base): FIG_CadianUniformV4_inf_B {
    scope = 2;
    author = AUTHOR;
    displayName = "Battledroid";

    uniformClass = QGUNIFORM(base);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform\legs_co.paa),QPATHTOF(data\uniform\top_co.paa)};

    armor = UNIT_ARMOR;
	armorStructural = UNIT_ARMOR_STRUCTURAL;
	explosionShielding = UNIT_EXPLOSION_SHIELDING;
	minTotalDamageThreshold = UNIT_MIN_TOTAL_DAMAGE_THRESHOLD;
	impactDamageMultiplier = UNIT_IMPACT_DAMAGE_MULTIPLIER;

	UNIT_HITPOINTS;
};
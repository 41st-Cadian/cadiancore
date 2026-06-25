// Base
class GUNIFORM(base): ls_droidUniform_bx {
	scope = 2;
	scopeArsenal = 2;
	author = AUTHOR;
	displayName = "[BAW] BX-Commando Chassis";

	ls_activeCamo_camoItem = QGUNIFORM(stealth);
	GVAR_CORE(equipment,hasKnife) = 1;
    baw_logistics_arsenals_whitelists[] = {"CommandoDroid","Command"};

    class ItemInfo: ItemInfo {
		uniformType = "Neopren";
		uniformClass = QGUNIT(base);
		containerClass = UNIFORM_SUPPLYCLASS;
		mass = 40;
	};
};
class GUNIFORM(stealth): GUNIFORM(base) {
	scope = 1;
	scopeArsenal = 1;
	author = AUTHOR;
	displayName = "[BAW] BX-Commando Chassis (Stealth)";

    class ItemInfo: ItemInfo {
		uniformType = "Neopren";
		uniformClass = QGUNIT(stealth_base);
		containerClass = UNIFORM_SUPPLYCLASS;
		mass = 40;
	};
};

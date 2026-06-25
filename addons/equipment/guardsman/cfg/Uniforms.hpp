// Base
class GUNIFORM(base): U_I_CombatUniform {
	scope = 2;
	scopeArsenal = 2;
	author = AUTHOR;
	displayName = "[41st] Combat Uniform";
    class ItemInfo: ItemInfo {
		uniformType = "Neopren";
		uniformClass = QGUNIT(base);
		containerClass = UNIFORM_SUPPLYCLASS;
		mass = 40;
	};
};


// Base
class GUNIFORM(base): JLTS_DroidB1 {
	scope = 2;
	scopeArsenal = 2;
	author = AUTHOR;
	displayName = "[BAW] Battledroid";
	GVAR_CORE(equipment,hasKnife) = 2;
	JLTS_isDroid = 2;
	JLTS_hasEMPProtection = 0;
	JLTS_deathSounds = "DeathDroid";
    baw_logistics_arsenals_whitelists[] = {"Battledroid","Command"};

    class ItemInfo: ItemInfo {
		uniformType = "Neopren";
		uniformClass = QGUNIT(base);
		containerClass = UNIFORM_SUPPLYCLASS;
		mass = 40;
	};
};

class GUNIFORM(woodland): GUNIFORM(base) {
    scope = 2;
    scopeArsenal = 2;
    author = AUTHOR;
    displayName = "[BAW] Battledroid (Woodland)";

    class ItemInfo: ItemInfo {
        uniformClass = QGUNIT(woodland);
    };
};

class GUNIFORM(crew): GUNIFORM(base) {
    scope = 2;
    scopeArsenal = 2;
    author = AUTHOR;
    displayName = "[BAW] Crew Battledroid";

    class ItemInfo: ItemInfo {
        uniformClass = QGUNIT(crew);
    };
};

class GUNIFORM(pilot): GUNIFORM(crew) {
    scope = 2;
    scopeArsenal = 2;
    author = AUTHOR;
    displayName = "[BAW] Pilot Battledroid";

    class ItemInfo: ItemInfo {
        uniformClass = QGUNIT(pilot);
    };
};

class GUNIFORM(sec): GUNIFORM(crew) {
    scope = 2;
    scopeArsenal = 2;
    author = AUTHOR;
    displayName = "[BAW] Security Battledroid";

    class ItemInfo: ItemInfo {
        uniformClass = QGUNIT(sec);
    };
};

class GUNIFORM(sec_cpl): GUNIFORM(sec) {
    scope = 2;
    scopeArsenal = 2;
    author = AUTHOR;
    displayName = "[BAW] Security Battledroid (Corporal)";

    class ItemInfo: ItemInfo {
        uniformClass = QGUNIT(sec_cpl);
    };
};

class GUNIFORM(marine): GUNIFORM(crew) {
    scope = 2;
    scopeArsenal = 2;
    author = AUTHOR;
    displayName = "[BAW] Marine Battledroid";

    class ItemInfo: ItemInfo {
        uniformClass = QGUNIT(marine);
    };
};
class GUNIFORM(eng): GUNIFORM(crew) {
    scope = 2;
    scopeArsenal = 2;
    author = AUTHOR;
    displayName = "[BAW] Engineer Battledroid";

    class ItemInfo: ItemInfo {
        uniformClass = QGUNIT(eng);
    };
};
class GUNIFORM(firefighter): GUNIFORM(crew) {
    scope = 2;
    scopeArsenal = 2;
    author = AUTHOR;
    displayName = "[BAW] Firefighter Battledroid";

    class ItemInfo: ItemInfo {
        uniformClass = QGUNIT(firefighter);
    };
};
class GUNIFORM(abd): GUNIFORM(crew) {
    scope = 2;
    scopeArsenal = 2;
    author = AUTHOR;
    displayName = "[BAW] A-B1 Battledroid";

    class ItemInfo: ItemInfo {
        uniformClass = QGUNIT(abd);
    };
};
class GUNIFORM(mksm_base): GUNIFORM(crew) {
    scope = 2;
    scopeArsenal = 2;
    author = AUTHOR;
    displayName = "[BAW] MKS-M Battledroid";

    class ItemInfo: ItemInfo {
        uniformClass = QGUNIT(mksm_base);
    };
};
class GUNIFORM(mksm_abd): GUNIFORM(mksm_base) {
    scope = 2;
    scopeArsenal = 2;
    author = AUTHOR;
    displayName = "[BAW] MKS-M A-B1 Battledroid";

    class ItemInfo: ItemInfo {
        uniformClass = QGUNIT(mksm_abd);
    };
};

// Base
class GVEST(base): ls_droidVest_bx {
	scope = 1;
    author = AUTHOR;
	displayName = "[BAW] BX-Commando Plating";

	class ItemInfo: ItemInfo {
		containerClass = VEST_SUPPLYCLASS;
		mass = 80;
		vestType = "Rebreather";

        VEST_PROTECTION;
	};
};

class CfgWeapons {
	class H_HelmetB_plain_mcamo;
	class H_HelmetSpecB: H_HelmetB_plain_mcamo {
		class ItemInfo;
	};
	class FIG_CadianHelm: H_HelmetSpecB {
		class ItemInfo: ItemInfo {
			class HitpointsProtectionInfo;
		};
	};

    #include "cfg\Helmets.hpp"
    #include "cfg\NVGs.hpp"
	class Uniform_Base;
	class U_I_CombatUniform: Uniform_Base {
		class ItemInfo;
	};
    #include "cfg\Uniforms.hpp"

	class Vest_NoCamo_Base;
	class V_PlateCarrier3_rgr: Vest_NoCamo_Base {
		class ItemInfo;
	};
	class FIG_CadianArmour: V_PlateCarrier3_rgr {
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo;
		};
	};
	class FIG_CadianArmourPV1: V_PlateCarrier3_rgr {
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo;
		};
	};
	class FIG_CadianArmourPV2: V_PlateCarrier3_rgr {
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo;
		};
	};
	class FIG_CadianArmourPV3: V_PlateCarrier3_rgr {
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo;
		};
	};
	class FIG_CadianArmourPV4: V_PlateCarrier3_rgr {
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo;
		};
	};
    #include "cfg\Vests.hpp"
};

class CowsSlot;
class UnderBarrelSlot;
class MuzzleSlot;
class PointerSlot;
class Mode_SemiAuto;
class Mode_FullAuto;
class Mode_Burst;
class UGL_F;

class CfgWeapons {
	class arifle_AKS_F;
	class GWEAPON(m41c): arifle_AKS_F
	{
		discreteDistance[] = {100,200};
		discreteDistanceInitIndex = 0;
		author = AUTHOR;
		model=QPATHTOF(m41c.p3d);
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {QPATHTOF(tex\MP41_tex_CO.paa)};
		hiddenSelectionsMaterials[] = {};
		selectionfireanim="muzzleFlash";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\z\cadcore\addons\weapons\m41c\anims\MP41R_Idle.rtm"
		};
		displayName = "Kantrael M41-C";
		baseWeapon = QGWEAPON(m41c);
	    reloadAction = "FIG_WBK_Lucius_Reload";
		changeFiremodeSound[] = {"FIG_Imperial_Guard\FIG_Weapons\sounds\lasgun_mode_switch.ogg",0.9,1,10};
		drySound[] = {"FIG_Imperial_Guard\FIG_Weapons\sounds\lasgun_mag_empty.ogg",1.5,1,10};
		reloadMagazineSound[] = {"FIG_Imperial_Guard\FIG_Weapons\sounds\hellgun_reload.ogg",2.5,1,30};
		reloadSound[] = {"FIG_Imperial_Guard\FIG_Weapons\sounds\hellgun_reload.ogg",2.5,1,30};
		muzzles[]=
		{
			"this"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"WBK_M36_LasRifle_SoundSet","CAR_95_Tail_SoundSet","CAR_95_interiorTail_SoundSet"};
				begin1[] = {"",1,1,1800};
				soundBegin[] = {"begin1",1};
			};
			reloadTime = 0.025;
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_3outof10";
			dispersion = 0;
			minRange=50;
			minRangeProbab=0.30000001;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=350;
			maxRangeProbab=0.050000001;
			aiDispersionCoefX=0;
			aiDispersionCoefY=0;
			aiRateOfFire=2;
			aiRateOfFireDistance=500;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"WBK_M36_LasRifle_SoundSet","CAR_95_Tail_SoundSet","CAR_95_interiorTail_SoundSet"};
				begin1[] = {"",1,1,1800};
				soundBegin[] = {"begin1",1};
			};
			reloadTime = 0.0631;
			recoil = "recoil_auto_primary_3outof10";
			recoilProne = "recoil_auto_primary_prone_3outof10";
			dispersion = 0;
			minRange=0;
			minRangeProbab=0.1;
			midRange=25;
			midRangeProbab=0.69999999;
			maxRange=70;
			maxRangeProbab=0.050000001;
			aiRateOfFire=0.0049999999;
			aiRateOfFireDistance=70;
			aiDispersionCoefY=3;
			aiDispersionCoefX=2;
		};
		class single_medium_optics1: FullAuto
		{
			showToPlayer = 0;
			dispersion = 0.00087;
			aiRateOfFire = 8;
			aiRateOfFireDistance = 700;
		};
		class single_medium_optics2: FullAuto
		{
			showToPlayer = 0;
			dispersion = 0.00087;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 500;
		};
		class single_far_optics1: FullAuto
		{
			showToPlayer = 0;
			dispersion = 0.00087;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 500;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			dispersion = 0.00087;
			aiRateOfFire = 0.0049999999;
			aiRateOfFireDistance = 500;
			aiBurstTerminable = 1;
		};
	};
};

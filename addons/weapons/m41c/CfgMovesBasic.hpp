// class CfgMovesBasic
// {
// 	class Default;
// 	class StandBase;
// 	class ManActions
// 	{
// 		GVAR(reload) = QGVAR(reload);
// 		GVAR(reload_context) = QGVAR(reload_context);
// 		GVAR(reload_prone) = QGVAR(reload_prone);
// 	};
// 	class Actions {
//         class RifleBaseStandActions;
//         class RifleAdjustProneBaseActions;
//         class NoActions : ManActions {
// 			GVAR(reload)[] = { QGVAR(reload), "Gesture" };
// 		};
// 		class RifleProneActions : RifleBaseStandActions {
// 			GVAR(reload)[] = { QGVAR(reload_prone), "Gesture" };
// 		};
// 		class RifleAdjustRProneActions : RifleAdjustProneBaseActions {
// 			GVAR(reload)[] = { QGVAR(reload_context), "Gesture" };
// 		};
// 		class RifleAdjustLProneActions : RifleAdjustProneBaseActions {
// 			GVAR(reload)[] = { QGVAR(reload_context), "Gesture" };
// 		};
// 		class RifleAdjustFProneActions : RifleAdjustProneBaseActions {
// 			GVAR(reload)[] = { QGVAR(reload), "Gesture" };
// 		};
// 	};
// };


// class CfgGesturesMale
// {
//     class Actions;
//     class Default;
// 	class States
// 	{
//         class GVAR(reload): Default
//         {
//             canPullTrigger = 0;
//             speed=-3.4;
//             file=QPATHTOF(anims\MP41R_Reload.rtm);
//             disableWeapons=1;
//             disableWeaponsLong=1;
//             interpolationRestart=2;
//             enableOptics=0;
//             weaponIK=1;
//             looped=0;
//             leftHandIKBeg=1;
//             leftHandIKCurve[]={0,1,0.1,0,0.7,0,0.72,1};
//             leftHandIKEnd=1;
//             rightHandIKBeg=1;
//             rightHandIKCurve[]={0.68,1,0.71,0,0.95,0,0.97,1};
//             rightHandIKEnd=1;
//             canReload=0;
//             mask = "handsWeapon";
//             headBobStrength=-0.2;
//             headBobMode=1;
//         };
//         class GVAR(reload_prone): Default
//         {
//             speed=-3.3;
//             file = "a3\anims_f_exp\data\anim\sdr\gst\gesturereloadakmprone.rtm";
//             mask = "handsWeapon_context";
//             headBobStrength=0;
//             headBobMode=1;
//             disableWeapons=1;
//             disableWeaponsLong=1;
//             interpolationRestart=2;
//             enableOptics=0;
//             weaponIK=1;
//             looped=0;
//             leftHandIKBeg=1;
//             leftHandIKCurve[]={0,1,0.1,0,0.9,0,0.92,1};
//             leftHandIKEnd=1;
//             rightHandIKBeg=1;
//             rightHandIKCurve[]={1};
//             rightHandIKEnd=1;
//             canReload=0;
//         };
//         class GVAR(reload_context): GVAR(reload_prone)
//         {
//             file = QPATHTOF(anims\Volk_Reload.rtm);
//             mask = "handsWeapon_context";
//         };
//     };
// };
class RscBackPicture;
class RscEditLCD;
class HiddenButton;
class HiddenRotator;
class cadcore_lr_programmer_radio_dialog
{
	idd = 1666;
	movingEnable = 1;
	controlsBackground[] = {};
	objects[] = {};
	onUnload = "['OnRadioOpen', [player, TF_lr_dialog_radio, true, 'JLTS_clone_lr_programmer_radio_dialog', false]] call TFAR_fnc_fireEventHandlers;";
	onLoad = "if(sunOrMoon < 0.2)then{((_this select 0) displayCtrl 67676) ctrlSetText 'z\cadcore\addons\common\data\radios\cadcore_programmer_ui_ca.paa';};";
	controls[] = {"background","enter","edit","channel_edit","clear","channel01","channel02","channel03","channel04","channel05","channel06","channel07","channel08","channel09","increase_volume","decrease_volume","stereo","additional","speakers"};
	class background: RscBackPicture
	{
		idc = 67676;
		text = "z\cadcore\addons\common\data\radios\cadcore_programmer_ui_ca.paa";
		x = "0.0935937 * safezoneW + safezoneX";
		y = "0.0252042 * safezoneH + safezoneY";
		w = "0.510056 * safezoneW";
		h = "0.942975 * safezoneH";
		moving = 1;
	};
	class edit: RscEditLCD
	{
		moving = 1;
		idc = 1410;
		x = "safeZoneX + safeZoneW * 0.26";
		y = "safeZoneY + safeZoneH * 0.40333334";
		w = "safeZoneW * 0.17625";
		h = "safeZoneH * 0.06333334";
		font = "TIOW_Imperial_Digital";
		colorText[] = {1,1,1,1};
		shadow = 2;
		tooltip = "$STR_tfar_core_current_freq";
		onKeyUp = "if (_this select 1 in [28,156]) then { [((ctrlParent (_this select 0))) displayCtrl 1410] call TFAR_backpacks_fnc_onButtonClick_Enter; };";
		canModify = 1;
	};
	class channel_edit: RscEditLCD
	{
		moving = 1;
		idc = 1411;
		x = "safeZoneX + safeZoneW * 0.26";
		y = "safeZoneY + safeZoneH * 0.32555556";
		w = "safeZoneW * 0.17625";
		h = "safeZoneH * 0.05888889";
		font = "TIOW_Imperial_Digital";
		colorText[] = {1,1,1,1};
		shadow = 2;
		tooltip = "$STR_tfar_core_current_channel";
		canModify = 0;
	};
	class clear: HiddenButton
	{
		idc = 1611;
		x = "safeZoneX + safeZoneW * 0.318125";
		y = "safeZoneY + safeZoneH * 0.69666667";
		w = "safeZoneW * 0.05875";
		h = "safeZoneH * 0.03444445";
		tooltip = "$STR_tfar_core_clear_frequency";
		action = "ctrlSetText [1410,'']; ctrlSetFocus ((findDisplay 1666) displayCtrl 1410);";
	};
	class enter: HiddenButton
	{
		idc = 1610;
		x = "safeZoneX + safeZoneW * 0.249375";
		y = "safeZoneY + safeZoneH * 0.69666667";
		w = "safeZoneW * 0.056875";
		h = "safeZoneH * 0.03444445";
		tooltip = "$STR_tfar_core_set_frequency";
		onButtonClick = "[((ctrlParent (_this select 0))) displayCtrl 1410] call TFAR_backpacks_fnc_onButtonClick_Enter;";
		action = "";
	};
	class channel01: HiddenButton
	{
		idc = 1701;
		x = "safeZoneX + safeZoneW * 0.249375";
		y = "safeZoneY + safeZoneH * 0.52777778";
		w = "safeZoneW * 0.056875";
		h = "safeZoneH * 0.03111112";
		action = "[TF_lr_dialog_radio, 0] call TFAR_fnc_setLrChannel;call TFAR_fnc_updateLRDialogToChannel;[TF_lr_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
		tooltip = "$STR_tfar_core_radio_channel_1";
	};
	class channel02: HiddenButton
	{
		idc = 1702;
		x = "safeZoneX + safeZoneW * 0.319375";
		y = "safeZoneY + safeZoneH * 0.52777778";
		w = "safeZoneW * 0.056875";
		h = "safeZoneH * 0.03111112";
		action = "[TF_lr_dialog_radio, 1] call TFAR_fnc_setLrChannel;call TFAR_fnc_updateLRDialogToChannel;[TF_lr_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
		tooltip = "$STR_tfar_core_radio_channel_2";
	};
	class channel03: HiddenButton
	{
		idc = 1703;
		x = "safeZoneX + safeZoneW * 0.389375";
		y = "safeZoneY + safeZoneH * 0.52777778";
		w = "safeZoneW * 0.056875";
		h = "safeZoneH * 0.03111112";
		action = "[TF_lr_dialog_radio, 2] call TFAR_fnc_setLrChannel;call TFAR_fnc_updateLRDialogToChannel;[TF_lr_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
		tooltip = "$STR_tfar_core_radio_channel_3";
	};
	class channel04: HiddenButton
	{
		idc = 1704;
		x = "safeZoneX + safeZoneW * 0.249375";
		y = "safeZoneY + safeZoneH * 0.58222223";
		w = "safeZoneW * 0.056875";
		h = "safeZoneH * 0.03111112";
		action = "[TF_lr_dialog_radio, 3] call TFAR_fnc_setLrChannel;call TFAR_fnc_updateLRDialogToChannel;[TF_lr_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
		tooltip = "$STR_tfar_core_radio_channel_4";
	};
	class channel05: HiddenButton
	{
		idc = 1705;
		x = "safeZoneX + safeZoneW * 0.319375";
		y = "safeZoneY + safeZoneH * 0.58333334";
		w = "safeZoneW * 0.056875";
		h = "safeZoneH * 0.03111112";
		action = "[TF_lr_dialog_radio, 4] call TFAR_fnc_setLrChannel;call TFAR_fnc_updateLRDialogToChannel;[TF_lr_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
		tooltip = "$STR_tfar_core_radio_channel_5";
	};
	class channel06: HiddenButton
	{
		idc = 1706;
		x = "safeZoneX + safeZoneW * 0.389375";
		y = "safeZoneY + safeZoneH * 0.58222223";
		w = "safeZoneW * 0.056875";
		h = "safeZoneH * 0.03111112";
		action = "[TF_lr_dialog_radio, 5] call TFAR_fnc_setLrChannel;call TFAR_fnc_updateLRDialogToChannel;[TF_lr_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
		tooltip = "$STR_tfar_core_radio_channel_6";
	};
	class channel07: HiddenButton
	{
		idc = 1707;
		x = "safeZoneX + safeZoneW * 0.24875";
		y = "safeZoneY + safeZoneH * 0.64111112";
		w = "safeZoneW * 0.056875";
		h = "safeZoneH * 0.03111112";
		action = "[TF_lr_dialog_radio, 5] call TFAR_fnc_setLrChannel;call TFAR_fnc_updateLRDialogToChannel;[TF_lr_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
		tooltip = "$STR_tfar_core_radio_channel_6";
	};
	class channel08: HiddenButton
	{
		idc = 1708;
		x = "safeZoneX + safeZoneW * 0.319375";
		y = "safeZoneY + safeZoneH * 0.64111112";
		w = "safeZoneW * 0.056875";
		h = "safeZoneH * 0.03111112";
		action = "[TF_lr_dialog_radio, 7] call TFAR_fnc_setLrChannel;call TFAR_fnc_updateLRDialogToChannel;[TF_lr_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
		tooltip = "$STR_tfar_core_radio_channel_8";
	};
	class channel09: HiddenButton
	{
		idc = 1709;
		x = "safeZoneX + safeZoneW * 0.389375";
		y = "safeZoneY + safeZoneH * 0.64333334";
		w = "safeZoneW * 0.056875";
		h = "safeZoneH * 0.03111112";
		action = "[TF_lr_dialog_radio, 8] call TFAR_fnc_setLrChannel;call TFAR_fnc_updateLRDialogToChannel;[TF_lr_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
		tooltip = "$STR_tfar_core_radio_channel_9";
	};
	class increase_volume: HiddenButton
	{
		idc = 1612;
		x = "safeZoneX + safeZoneW * 0.410625";
		y = "safeZoneY + safeZoneH * 0.75555556";
		w = "safeZoneW * 0.035625";
		h = "safeZoneH * 0.05";
		action = "[1, true] call TFAR_fnc_setVolumeViaDialog;";
		tooltip = "$STR_tfar_core_increase_volume";
	};
	class decrease_volume: HiddenButton
	{
		idc = 1613;
		x = "safeZoneX + safeZoneW * 0.24875";
		y = "safeZoneY + safeZoneH * 0.75444445";
		w = "safeZoneW * 0.035625";
		h = "safeZoneH * 0.05";
		action = "[TF_lr_dialog_radio,((TF_lr_dialog_radio call TFAR_fnc_getCurrentLrStereo) + 1) mod 3] call TFAR_fnc_setLrStereo; [TF_lr_dialog_radio] call TFAR_fnc_showRadioVolume;";
		tooltip = "$STR_tfar_core_stereo_settings";
	};
	class stereo: HiddenButton
	{
		idc = 1710;
		x = "safeZoneX + safeZoneW * 0.3";
		y = "safeZoneY + safeZoneH * 0.75444445";
		w = "safeZoneW * 0.04";
		h = "safeZoneH * 0.05";
		action = "[TF_lr_dialog_radio,((TF_lr_dialog_radio call TFAR_fnc_getCurrentLrStereo) + 1) mod 3] call TFAR_fnc_setLrStereo; [TF_lr_dialog_radio] call TFAR_fnc_showRadioVolume;";
		tooltip = "$STR_tfar_core_stereo_settings";
	};
	class additional: HiddenButton
	{
		idc = 12345;
		x = "safeZoneX + safeZoneW * 0.39";
		y = "safeZoneY + safeZoneH * 0.69555556";
		w = "safeZoneW * 0.056875";
		h = "safeZoneH * 0.03444445";
		tooltip = "$STR_tfar_core_set_additional";
		action = "[TF_lr_dialog_radio,TF_lr_dialog_radio call TFAR_fnc_getLrChannel] call TFAR_fnc_setAdditionalLrChannel; call TFAR_fnc_updateLRDialogToChannel; [TF_lr_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
	};
	class speakers: HiddenButton
	{
		idc = 123456;
		x = "safeZoneX + safeZoneW * 0.3575";
		y = "safeZoneY + safeZoneH * 0.75444445";
		w = "safeZoneW * 0.04";
		h = "safeZoneH * 0.05";
		tooltip = "$STR_tfar_core_speakers_settings_true";
		action = "TF_lr_dialog_radio call TFAR_fnc_setLrSpeakers;[TF_lr_dialog_radio] call TFAR_fnc_showRadioSpeakers;";
	};
};
class cadcoreSR_dialog
{
	idd = 1333;
	movingEnable = 1;
	controlsBackground[] = {};
	objects[] = {};
	onUnload = "['OnRadioOpen', [player, TF_sw_dialog_radio, false, 'cadcoreSR_dialog', false]] call TFAR_fnc_fireEventHandlers;";
	onLoad = "if(sunOrMoon < 0.2)then{((_this select 0) displayCtrl 67676) ctrlSetText 'z\cadcore\addons\common\data\radios\cadcoreSR_ca.paa';};";
	controls[] = {"background","enter","edit","channel_edit","clear","prev_channel","next_channel","volume_Switch","stereo","additional","speakers"};
	class background: RscBackPicture
	{
		idc = 67676;
		text = "z\cadcore\addons\common\data\radios\cadcoreSR_ca.paa";
		x = "0.0935937 * safezoneW + safezoneX";
		y = "0.0252042 * safezoneH + safezoneY";
		w = "0.510056 * safezoneW";
		h = "0.942975 * safezoneH";
		moving = 1;
	};
	class edit: RscEditLCD
	{
		moving = 1;
		idc = 1400;
		x = "safeZoneX + safeZoneW * 0.320625";
		y = "safeZoneY + safeZoneH * 0.33";
		w = "safeZoneW * 0.12875";
		h = "safeZoneH * 0.06";
		font = "TIOW_Imperial_Digital";
		colorText[] = {1,1,1,1};
		shadow = 2;
		tooltip = "$STR_tfar_core_current_freq";
		onKeyUp = "if (_this select 1 in [28,156]) then { [((ctrlParent (_this select 0))) displayCtrl 1400] call TFAR_handhelds_fnc_onButtonClick_Enter; };";
		canModify = 1;
	};
	class channel_edit: RscEditLCD
	{
		moving = 1;
		idc = 1604;
		x = "safeZoneX + safeZoneW * 0.194375";
		y = "safeZoneY + safeZoneH * 0.33";
		w = "safeZoneW * 0.12625";
		h = "safeZoneH * 0.06";
		font = "TIOW_Imperial_Digital";
		colorText[] = {1,1,1,1};
		shadow = 2;
		tooltip = "$STR_tfar_core_current_channel";
		canModify = 0;
	};
	class enter: HiddenButton
	{
		idc = 1600;
		x = "safeZoneX + safeZoneW * 0.489375";
		y = "safeZoneY + safeZoneH * 0.46";
		w = "safeZoneW * 0.068125";
		h = "safeZoneH * 0.07";
		tooltip = "$STR_tfar_core_set_frequency";
		onButtonClick = "[((ctrlParent (_this select 0))) displayCtrl 1400] call TFAR_handhelds_fnc_onButtonClick_Enter;";
		action = "";
	};
	class clear: HiddenButton
	{
		idc = 1601;
		x = "safeZoneX + safeZoneW * 0.248125";
		y = "safeZoneY + safeZoneH * 0.51222223";
		w = "safeZoneW * 0.03625";
		h = "safeZoneH * 0.06333334";
		tooltip = "$STR_tfar_core_clear_frequency";
		action = "ctrlSetText [1400,'']; ctrlSetFocus ((findDisplay 1333) displayCtrl 1400);";
	};
	class additional: HiddenButton
	{
		idc = 1602;
		x = "safeZoneX + safeZoneW * 0.248125";
		y = "safeZoneY + safeZoneH * 0.41555556";
		w = "safeZoneW * 0.03625";
		h = "safeZoneH * 0.06555556";
		tooltip = "$STR_tfar_core_set_additional";
		action = "[TF_sw_dialog_radio, TF_sw_dialog_radio call TFAR_fnc_getSwChannel] call TFAR_fnc_setAdditionalSwChannel; call TFAR_fnc_updateSWDialogToChannel; [TF_sw_dialog_radio, false] call TFAR_fnc_showRadioInfo;";
	};
	class speakers: HiddenButton
	{
		idc = 1603;
		x = "safeZoneX + safeZoneW * 0.19625";
		y = "safeZoneY + safeZoneH * 0.41555556";
		w = "safeZoneW * 0.035";
		h = "safeZoneH * 0.06555556";
		tooltip = "$STR_tfar_core_speakers_settings_true";
		action = "[TF_sw_dialog_radio] call TFAR_fnc_setSwSpeakers;[TF_sw_dialog_radio] call TFAR_fnc_showRadioSpeakers;";
	};
	class next_channel: HiddenButton
	{
		idc = 1602;
		x = "safeZoneX + safeZoneW * 0.3";
		y = "safeZoneY + safeZoneH * 0.41444445";
		w = "safeZoneW * 0.0375";
		h = "safeZoneH * 0.06888889";
		tooltip = "$STR_tfar_core_next_channel";
		action = "[1, false] call TFAR_fnc_setChannelViaDialog;";
	};
	class prev_channel: HiddenButton
	{
		idc = 1603;
		x = "safeZoneX + safeZoneW * 0.3";
		y = "safeZoneY + safeZoneH * 0.51111112";
		w = "safeZoneW * 0.0375";
		h = "safeZoneH * 0.06666667";
		tooltip = "$STR_tfar_core_previous_channel";
		action = "[0, false] call TFAR_fnc_setChannelViaDialog;";
	};
	class stereo: HiddenButton
	{
		idc = 1607;
		x = "safeZoneX + safeZoneW * 0.19625";
		y = "safeZoneY + safeZoneH * 0.51333334";
		w = "safeZoneW * 0.035";
		h = "safeZoneH * 0.06555556";
		action = "[TF_sw_dialog_radio,((TF_sw_dialog_radio call TFAR_fnc_getCurrentSwStereo) + 1) mod 3] call TFAR_fnc_setSwStereo; [TF_sw_dialog_radio] call TFAR_fnc_showRadioVolume;";
		tooltip = "$STR_tfar_core_stereo_settings";
	};
	class volume_Switch: HiddenRotator
	{
		x = "safeZoneX + safeZoneW * 0.14375";
		y = "safeZoneY + safeZoneH * 0.41444445";
		w = "safeZoneW * 0.03375";
		h = "safeZoneH * 0.16444445";
		idc = -1;
		tooltip = "$STR_tfar_core_rotator_volume";
		onMouseButtonDown = "[_this select 1, false] call TFAR_fnc_setVolumeViaDialog;";
	};
};
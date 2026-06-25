class GBACKPACK(base): JLTS_B1_backpack {
	author = AUTHOR;
	displayName = "[BAW] Battledroid Backpack";
    maximumLoad = BACKPACK_MAXLOAD;
	tf_range = LR_RANGE;
	mti_katarnOS_hasBeacon = 1;
    baw_logistics_arsenals_whitelists[] = {"Battledroid","Command"};
    hiddenSelectionsTextures[] = {QPATHTOF(data\b1_backpack_co.paa)};
};

class GBACKPACK(rto): GBACKPACK(base) {
    displayName = "[BAW] Battledroid Backpack (RTO)";
    hiddenSelectionsTextures[] = {QPATHTOF(data\b1_backpack_rto_co.paa)};
};

class GBACKPACK(antenna): JLTS_B1_antenna{
	author = AUTHOR;
	displayName = "[BAW] Battledroid Backpack (Antenna)";
	maximumLoad = BACKPACK_MAXLOAD;
	tf_range = LR_RANGE;
	mti_katarnOS_hasBeacon = 1;
    baw_logistics_arsenals_whitelists[] = {"Battledroid","Command"};
};

class GBACKPACK(RTO_Clear): GBACKPACK(antenna) {
	displayName = "[BAW] Battledroid Backpack (RTO, Invisible)";
	model = "\A3\Weapons_F\empty.p3d";
    baw_logistics_arsenals_whitelists[] = {"Battledroid","Command"};
};

class GBACKPACK(droppack): JLTS_B1_jetpack {
	scope = 2;
	author = AUTHOR;
	displayName = "[BAW] Battledroid Droppack";
    maximumLoad = BACKPACK_MAXLOAD;
    hiddenSelectionsTextures[] = {QPATHTOF(data\jetpack_co.paa)};

	tf_dialog = "JLTS_clone_lr_programmer_radio_dialog";
	tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
	tf_encryptionCode = "tf_east_radio_code";
	tf_hasLRradio = 1;
	tf_range = 25000;
	tf_subtype = "digital_lr";

	mti_katarnOS_hasBeacon = 1;
	baw_logistics_arsenals_whitelists[] = {"Battledroid","Command"};

	NSM_jumppack_is_jumppack = 1;
	NSM_jumppack_spam_delay = 1;
	NSM_jumppack_energy_capacity = 120;
	NSM_jumppack_recharge = 6;
	NSM_jumppack_jump_effect_script = "NSM_jumppack_effect_fnc_jt_21";
	NSM_jumppack_effect_points[] = {{"effect1",{0,0.6,1}},{"effect2",{0,0.6,1}}};
	NSM_jumppack_sound_ignite[] = {"NSM_Main\sounds\cdv21Start.ogg"};
	NSM_jumppack_sound_land[] = {"NSM_Main\sounds\cdv21End.ogg"};
	NSM_jumppack_sound_idle[] = {"NSM_Main\sounds\cdv21Idle.ogg"};
    NSM_jumppack_jump_types[]=
    {
        {
            "Short Jump",
            {15,5,30,0,1,0}
        },
        {
            "Forward Jump",
            {12,20,50,0,0,0}
        }
    };
};

class GBACKPACK(fortify): GBACKPACK(base) {
	scope = 2;
	author = AUTHOR;
	displayName = "[BAW] Droid Support Backpack";
	maximumLoad = BACKPACK_MAXLOAD;

	tf_dialog = "JLTS_clone_lr_programmer_radio_dialog";
	tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
	tf_encryptionCode = "tf_east_radio_code";
	tf_hasLRradio = 1;
	tf_range = LR_RANGE;
	tf_subtype = "digital_lr";

	mti_fortify_canFortify = 1;
	mti_fortify_availablePresets[] = {"Backpack_Default",250};
	mti_katarnOS_hasBeacon = 1;
    baw_logistics_arsenals_whitelists[] = {"Battledroid","Command"};

};

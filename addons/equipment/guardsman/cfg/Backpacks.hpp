class GBACKPACK(base): FIG_CadianBackpack1 {
	author = AUTHOR;
	displayName = "[41st] Combat Pack";
    maximumLoad = BACKPACK_MAXLOAD;
};
class GBACKPACK(webbing): FIG_CadianWebbingBP{
	author = AUTHOR;
	displayName = "[41st] Combat Webbing";
    maximumLoad = BACKPACK_MAXLOAD;
};
class GBACKPACK(webbing_2): FIG_CadianWebbing2BP{
    author = AUTHOR;
    displayName = "[41st] Combat Webbing V2";
    maximumLoad = BACKPACK_MAXLOAD;
};
class GBACKPACK(webbing_3): FIG_CadianWebbing3BP{
    author = AUTHOR;
    displayName = "[41st] Combat Webbing V3";
    maximumLoad = BACKPACK_MAXLOAD;
};
class GBACKPACK(bandolier): FIG_BandolierLPBP{
    author = AUTHOR;
    displayName = "[41st] Combat Bandolier";
    maximumLoad = BACKPACK_MAXLOAD;
};
class GBACKPACK(rto): FIG_CadianVoxBackpack{
    author = AUTHOR;
    displayName = "[41st] Vox Caster RTO Pack";
    maximumLoad = BACKPACK_MAXLOAD;
	tf_dialog = "cadcore_lr_programmer_radio_dialog";
	tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
	tf_encryptionCode = "tf_west_radio_code";
	tf_hasLRradio = 1;
	tf_range = 25000;
	tf_subtype = "digital_lr";
};


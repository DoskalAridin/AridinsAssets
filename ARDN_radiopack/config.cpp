class CfgPatches 
{ 
    class ARDN_rpack
    { 
        units[] = {
			
			}; 
        weapons[] = {"ARDN_rpack_black","ARDN_rpack_digi","ARDN_rpack_eaf","ARDN_rpack_ghex","ARDN_rpack_hex","ARDN_rpack_mtp","ARDN_rpack_oucamo","ARDN_rpack_tropic","ARDN_rpack_wdl","ARDN_rpack_wdl_FAK","ARDN_rpack_cadpat","ARDN_rpack_m81","ARDN_rpack_brown","ARDN_rpack_grey","ARDN_rpack_shuttlegrey"}; 
        requiredVersion = 0.1; 
        requiredAddons[] = {"ARDN_main","A3_Supplies_F_Enoch","A3_Supplies_F_Enoch_Bags"};
    }; 
}; 

class cfgVehicles 
{ 
	class B_RadioBag_01_base_F;
	class B_RadioBag_01_black_F:B_RadioBag_01_base_F{
		_generalMacro = "B_RadioBag_01_black_F";
		displayName = "Radio Pack (Black)";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"a3\Supplies_F_Enoch\Bags\Data\B_RadioBag_01_black_CO.paa"};
		maximumLoad = 280;
		model = "a3\Supplies_F_Enoch\Bags\B_RadioBag_01_F.p3d";
		picture = "\a3\Supplies_F_Enoch\Bags\Data\UI\icon_B_RadioBag_01_black_F_ca.paa";
		scope = 2;
	};
	class B_RadioBag_01_digi_F:B_RadioBag_01_base_F{
		_generalMacro = "B_RadioBag_01_digi_F";
		displayName = "Radio Pack (Digital) [AAF]";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"a3\supplies_f_enoch\bags\data\B_RadioBag_01_AAF_CO.paa"};
		maximumLoad = 280;
		model = "a3\Supplies_F_Enoch\Bags\B_RadioBag_01_F.p3d";
		picture = "\a3\Supplies_F_Enoch\Bags\Data\UI\icon_B_RadioBag_01_digi_F_ca.paa";
		scope = 2;
	};
	class B_RadioBag_01_eaf_F:B_RadioBag_01_base_F{
		_generalMacro = "B_RadioBag_01_eaf_F";
		displayName = "Radio Pack (Geometric) [LDF]";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"a3\supplies_f_enoch\bags\data\B_RadioBag_01_EAF_CO.paa"};
		maximumLoad = 280;
		model = "a3\Supplies_F_Enoch\Bags\B_RadioBag_01_F.p3d";
		picture = "\a3\Supplies_F_Enoch\Bags\Data\UI\icon_B_RadioBag_01_eaf_F_ca.paa";
		scope = 2;
	};
	class B_RadioBag_01_ghex_F:B_RadioBag_01_base_F{
		_generalMacro = "B_RadioBag_01_hex_F";
		displayName = "Radio Pack (Green Hex) [CSAT]";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"a3\supplies_f_enoch\bags\data\B_RadioBag_01_gHex_CO.paa"};
		maximumLoad = 280;
		model = "a3\Supplies_F_Enoch\Bags\B_RadioBag_01_F.p3d";
		picture = "\a3\Supplies_F_Enoch\Bags\Data\UI\icon_B_RadioBag_01_hex_F_ca.paa";
		scope = 2;
	};
	class B_RadioBag_01_hex_F:B_RadioBag_01_base_F{
		_generalMacro = "B_RadioBag_01_hex_F";
		displayName = "Radio Pack (Hex) [CSAT]";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"a3\supplies_f_enoch\bags\data\B_RadioBag_01_Hex_CO.paa"};
		maximumLoad = 280;
		model = "a3\Supplies_F_Enoch\Bags\B_RadioBag_01_F.p3d";
		picture = "\a3\Supplies_F_Enoch\Bags\Data\UI\icon_B_RadioBag_01_hex_F_ca.paa";
		scope = 2;
	};
	class B_RadioBag_01_mtp_F:B_RadioBag_01_base_F{
		_generalMacro = "B_RadioBag_01_mtp_F";
		displayName = "Radio Pack (MTP) [NATO]";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"a3\supplies_f_enoch\bags\data\b_radiobag_01_mtp_co.paa"};
		maximumLoad = 280;
		model = "a3\Supplies_F_Enoch\Bags\B_RadioBag_01_F.p3d";
		picture = "\a3\Supplies_F_Enoch\Bags\Data\UI\icon_B_RadioBag_01_mtp_F_ca.paa";
		scope = 2;
	};
	class B_RadioBag_01_oucamo_F:B_RadioBag_01_base_F{
		_generalMacro = "B_RadioBag_01_oucamo_F";
		displayName = "Radio Pack (Urban) [CSAT]";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"a3\supplies_f_enoch\bags\data\B_RadioBag_01_urban_CO.paa"};
		maximumLoad = 280;
		model = "a3\Supplies_F_Enoch\Bags\B_RadioBag_01_F.p3d";
		picture = "\a3\Supplies_F_Enoch\Bags\Data\UI\icon_B_RadioBag_01_oucamo_F_ca.paa";
		scope = 2;
	};
	class B_RadioBag_01_tropic_F:B_RadioBag_01_base_F{
		_generalMacro = "B_RadioBag_01_tropic_F";
		displayName = "Radio Pack (Tropic) [NATO]";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"a3\supplies_f_enoch\bags\data\B_RadioBag_01_tropic_CO.paa"};
		maximumLoad = 280;
		model = "a3\Supplies_F_Enoch\Bags\B_RadioBag_01_F.p3d";
		picture = "\a3\Supplies_F_Enoch\Bags\Data\UI\icon_B_RadioBag_01_tropic_F_ca.paa";
		scope = 2;
	};
	class B_RadioBag_01_wdl_F:B_RadioBag_01_base_F{
		_generalMacro = "B_RadioBag_01_wdl_F";
		displayName = "Radio Pack (Woodland) [NATO]";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"a3\supplies_f_enoch\bags\data\B_RadioBag_01_WDL_CO.paa"};
		maximumLoad = 280;
		model = "a3\Supplies_F_Enoch\Bags\B_RadioBag_01_F.p3d";
		picture = "\a3\Supplies_F_Enoch\Bags\Data\UI\icon_B_RadioBag_01_wdl_F_ca.paa";
		scope = 2;
	};
	
/*
	class B_RadioBag_01_black_F;
	class B_RadioBag_01_digi_F;
	class B_RadioBag_01_eaf_FAK_F;
	class B_RadioBag_01_ghex_F;
	class B_RadioBag_01_hex_F;
	class B_RadioBag_01_mtp_F;
	class B_RadioBag_01_oucamo_F;
	class B_RadioBag_01_tropic_F;
	class B_RadioBag_01_wdl_F;
	class B_RadioBag_01_wdl_FAK_F;
	
	class ARDN_rpack_black: B_RadioBag_01_black_F{
		maximumLoad = 280;
	};
	class ARDN_rpack_digi: B_RadioBag_01_digi_F{
		maximumLoad = 280;
	};
	class ARDN_rpack_eaf: B_RadioBag_01_eaf_FAK_F{
		maximumLoad = 280;
	};
	class ARDN_rpack_ghex: B_RadioBag_01_ghex_F{
		maximumLoad = 280;
	};
	class ARDN_rpack_hex: B_RadioBag_01_hex_F{
		maximumLoad = 280;
	};
	class ARDN_rpack_mtp: B_RadioBag_01_mtp_F{
		maximumLoad = 280;
	};
	class ARDN_rpack_oucamo: B_RadioBag_01_oucamo_F{
		maximumLoad = 280;
	};
	class ARDN_rpack_tropic: B_RadioBag_01_tropic_F{
		maximumLoad = 280;
	};
	class ARDN_rpack_wdl: B_RadioBag_01_wdl_F{
		maximumLoad = 280;
	};
	class ARDN_rpack_wdl_FAK: B_RadioBag_01_wdl_FAK_F{
		maximumLoad = 280;
	};
*/
	class ARDN_rpack_m81: B_RadioBag_01_black_F{
		displayname = "Radio Pack (M81)"
		maximumLoad = 280;
		hiddenSelectionsTextures[] = {"\ARDN_radiopack\data\B_RadioBag_01_m81.paa"};
	};
	class ARDN_rpack_brown: B_RadioBag_01_black_F{
		displayname = "Radio Pack (Brown)"
		maximumLoad = 280;
		hiddenSelectionsTextures[] = {"\ARDN_radiopack\data\B_RadioBag_01_brown.paa"};
	};
	class ARDN_rpack_olive: B_RadioBag_01_black_F{
		displayname = "Radio Pack (Olive)"
		maximumLoad = 280;
		hiddenSelectionsTextures[] = {"\ARDN_radiopack\data\B_RadioBag_01_olive.paa"};
	};
	class ARDN_rpack_tan: B_RadioBag_01_black_F{
		displayname = "Radio Pack (Tan)"
		maximumLoad = 280;
		hiddenSelectionsTextures[] = {"\ARDN_radiopack\data\B_RadioBag_01_tan.paa"};
	};
	class ARDN_rpack_white: B_RadioBag_01_black_F{
		displayname = "Radio Pack (White)"
		maximumLoad = 280;
		hiddenSelectionsTextures[] = {"\ARDN_radiopack\data\B_RadioBag_01_white.paa"};
	};
	class ARDN_rpack_atacs: B_RadioBag_01_black_F{
		displayname = "Radio Pack (A-Tacs)"
		maximumLoad = 280;
		hiddenSelectionsTextures[] = {"\ARDN_radiopack\data\B_RadioBag_01_atacs.paa"};
	};
	class ARDN_rpack_digif: B_RadioBag_01_black_F{
		displayname = "Radio Pack (Digi Flora)"
		maximumLoad = 280;
		hiddenSelectionsTextures[] = {"\ARDN_radiopack\data\B_RadioBag_01_digif.paa"};
	};
	class ARDN_rpack_od: B_RadioBag_01_black_F{
		displayname = "Radio Pack (OD)"
		maximumLoad = 280;
		hiddenSelectionsTextures[] = {"\ARDN_radiopack\data\B_RadioBag_01_od.paa"};
	};
	class ARDN_rpack_taiga: B_RadioBag_01_black_F{
		displayname = "Radio Pack (Taiga)"
		maximumLoad = 280;
		hiddenSelectionsTextures[] = {"\ARDN_radiopack\data\B_RadioBag_01_taiga.paa"};
	};
	class ARDN_rpack_GGnight: B_RadioBag_01_black_F{
		displayname = "Radio Pack (GG - Forest Night)"
		maximumLoad = 280;
		hiddenSelectionsTextures[] = {"\ARDN_radiopack\data\B_RadioBag_01_GGnight.paa"};
	};
	class ARDN_rpack_GG: B_RadioBag_01_black_F{
		displayname = "Radio Pack (GG - Forest)"
		maximumLoad = 280;
		hiddenSelectionsTextures[] = {"\ARDN_radiopack\data\B_RadioBag_01_GG.paa"};
	};
	class ARDN_rpack_grey: B_RadioBag_01_black_F{
		displayname = "Radio Pack (Grey)"
		maximumLoad = 280;
		hiddenSelectionsTextures[] = {"\ARDN_radiopack\data\B_RadioBag_01_grey.paa"};
	};
	class ARDN_rpack_shuttlegrey: B_RadioBag_01_black_F{
		displayname = "Radio Pack (Shuttle Grey)"
		maximumLoad = 280;
		hiddenSelectionsTextures[] = {"\ARDN_radiopack\data\B_RadioBag_01_shuttlegrey.paa"};
	};
};

	

class CfgPatches 
{ 
    class ARDN_csat
    { 
        units[] = {
		}; 
        weapons[] = {}; 
        requiredVersion = 0.1; 
        requiredAddons[] = {"ARDN_main","A3_Characters_F","A3_Characters_F_Exp"};
    }; 
}; 

class CfgWeapons
{
	//FATIGUES
	class U_O_CombatUniform_ocamo;
	class ARDN_csat_u_gry: U_O_CombatUniform_ocamo
	{
		displayName = "Fatigues (Grey) [CSAT]";
		class ItemInfo
		{
			containerClass = "Supply40";
			mass = 80;
			scope = 0;
			type = 801;
			uniformClass = "ARDN_csat_b_soldier_gry";
			uniformModel = "-";
		};
	};
	class ARDN_csat_u_blk: U_O_CombatUniform_ocamo
	{
		displayName = "Fatigues (Black) [CSAT]";
		class ItemInfo
		{
			containerClass = "Supply40";
			mass = 80;
			scope = 0;
			type = 801;
			uniformClass = "ARDN_csat_b_soldier_blk";
			uniformModel = "-";
		};
	};
	class ARDN_csat_u_grn: U_O_CombatUniform_ocamo
	{
		displayName = "Fatigues (Olive) [CSAT]";
		class ItemInfo
		{
			containerClass = "Supply40";
			mass = 80;
			scope = 0;
			type = 801;
			uniformClass = "ARDN_csat_b_soldier_grn";
			uniformModel = "-";
		};
	};
	class ARDN_csat_u_brn: U_O_CombatUniform_ocamo
	{
		displayName = "Fatigues (Coyote) [CSAT]";
		class ItemInfo
		{
			containerClass = "Supply40";
			mass = 80;
			scope = 0;
			type = 801;
			uniformClass = "ARDN_csat_b_soldier_brn";
			uniformModel = "-";
		};
	};
	class ARDN_csat_u_wht: U_O_CombatUniform_ocamo
	{
		displayName = "Fatigues (White) [CSAT]";
		class ItemInfo
		{
			containerClass = "Supply40";
			mass = 80;
			scope = 0;
			type = 801;
			uniformClass = "ARDN_csat_b_soldier_wht";
			uniformModel = "-";
		};
	};
	class ARDN_csat_u_tan: U_O_CombatUniform_ocamo
	{
		displayName = "Fatigues (Tan) [CSAT]";
		class ItemInfo
		{
			containerClass = "Supply40";
			mass = 80;
			scope = 0;
			type = 801;
			uniformClass = "ARDN_csat_b_soldier_tan";
			uniformModel = "-";
		};
	};
	
	//VIPER
	class U_O_V_Soldier_Viper_hex_F;
	class ARDN_csat_u_viper_blk: U_O_V_Soldier_Viper_hex_F
	{
		displayName = "Special Purpose Suit (Black)";
		class ItemInfo
		{
			containerClass = "Supply20";
			mass = 120;
			scope = 0;
			type = 801;
			uniformClass = "ARDN_csat_b_viper_blk";
			uniformModel = "-";
		};
	};
	class ARDN_csat_u_viper_wht: U_O_V_Soldier_Viper_hex_F
	{
		displayName = "Special Purpose Suit (White)";
		class ItemInfo
		{
			containerClass = "Supply20";
			mass = 120;
			scope = 0;
			type = 801;
			uniformClass = "ARDN_csat_b_viper_wht";
			uniformModel = "-";
		};
	};
	class ARDN_csat_u_viper_grn: U_O_V_Soldier_Viper_hex_F
	{
		displayName = "Special Purpose Suit (Olive)";
		class ItemInfo
		{
			containerClass = "Supply20";
			mass = 120;
			scope = 0;
			type = 801;
			uniformClass = "ARDN_csat_b_viper_grn";
			uniformModel = "-";
		};
	};
	class ARDN_csat_u_viper_brn: U_O_V_Soldier_Viper_hex_F
	{
		displayName = "Special Purpose Suit (Coyote)";
		class ItemInfo
		{
			containerClass = "Supply20";
			mass = 120;
			scope = 0;
			type = 801;
			uniformClass = "ARDN_csat_b_viper_brn";
			uniformModel = "-";
		};
	};
	class ARDN_csat_u_viper_tan: U_O_V_Soldier_Viper_hex_F
	{
		displayName = "Special Purpose Suit (Tan)";
		class ItemInfo
		{
			containerClass = "Supply20";
			mass = 120;
			scope = 0;
			type = 801;
			uniformClass = "ARDN_csat_b_viper_tan";
			uniformModel = "-";
		};
	};
	class ARDN_csat_u_viper_gry: U_O_V_Soldier_Viper_hex_F
	{
		displayName = "Special Purpose Suit (Grey)";
		class ItemInfo
		{
			containerClass = "Supply20";
			mass = 120;
			scope = 0;
			type = 801;
			uniformClass = "ARDN_csat_b_viper_gry";
			uniformModel = "-";
		};
	};
	
	//HELMET
	class H_HelmetLeaderO_ocamo;
	class ARDN_csat_H_leader_blk: H_HelmetLeaderO_ocamo
	{
		displayname = "Defender Helmet (Black)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ARDN_csat\data\CSAT_tech_blk.paa"};
	};
	class ARDN_csat_H_leader_gry: H_HelmetLeaderO_ocamo
	{
		displayname = "Defender Helmet (Grey)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ARDN_csat\data\CSAT_tech_gry.paa"};
	};
	class ARDN_csat_H_leader_wht: H_HelmetLeaderO_ocamo
	{
		displayname = "Defender Helmet (White)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ARDN_csat\data\CSAT_tech_wht.paa"};
	};
	class ARDN_csat_H_leader_grn: H_HelmetLeaderO_ocamo
	{
		displayname = "Defender Helmet (Green)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ARDN_csat\data\CSAT_tech_grn.paa"};
	};
	class ARDN_csat_H_leader_brn: H_HelmetLeaderO_ocamo
	{
		displayname = "Defender Helmet (Coyote)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ARDN_csat\data\CSAT_tech_brn.paa"};
	};
	class ARDN_csat_H_leader_tan: H_HelmetLeaderO_ocamo
	{
		displayname = "Defender Helmet (Tan)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ARDN_csat\data\CSAT_tech_tan.paa"};
	};
	class H_HelmetO_ocamo;
	class ARDN_csat_H_blk: H_HelmetO_ocamo
	{
		displayname = "Protector Helmet (Black)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ARDN_csat\data\CSAT_tech_blk.paa"};
	};
	class ARDN_csat_H_gry: H_HelmetO_ocamo
	{
		displayname = "Protector Helmet (Grey)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ARDN_csat\data\CSAT_tech_gry.paa"};
	};
	class ARDN_csat_H_wht: H_HelmetO_ocamo
	{
		displayname = "Protector Helmet (White)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ARDN_csat\data\CSAT_tech_wht.paa"};
	};
	class ARDN_csat_H_grn: H_HelmetO_ocamo
	{
		displayname = "Protector Helmet (Green)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ARDN_csat\data\CSAT_tech_grn.paa"};
	};
	class ARDN_csat_H_brn: H_HelmetO_ocamo
	{
		displayname = "Protector Helmet (Coyote)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ARDN_csat\data\CSAT_tech_brn.paa"};
	};
	class ARDN_csat_H_tan: H_HelmetO_ocamo
	{
		displayname = "Protector Helmet (Tan)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ARDN_csat\data\CSAT_tech_tan.paa"};
	};
	class H_HelmetSpecO_ocamo;
	class ARDN_csat_H_spec_blk: H_HelmetSpecO_ocamo
	{
		displayname = "Assassin Helmet (Black)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ARDN_csat\data\CSAT_tech_blk.paa"};
	};
	class ARDN_csat_H_spec_gry: H_HelmetSpecO_ocamo
	{
		displayname = "Assassin Helmet (Grey)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ARDN_csat\data\CSAT_tech_gry.paa"};
	};
	class ARDN_csat_H_spec_wht: H_HelmetSpecO_ocamo
	{
		displayname = "Assassin Helmet (White)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ARDN_csat\data\CSAT_tech_wht.paa"};
	};
	class ARDN_csat_H_spec_grn: H_HelmetSpecO_ocamo
	{
		displayname = "Assassin Helmet (Green)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ARDN_csat\data\CSAT_tech_grn.paa"};
	};
	class ARDN_csat_H_spec_brn: H_HelmetSpecO_ocamo
	{
		displayname = "Assassin Helmet (Coyote)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ARDN_csat\data\CSAT_tech_brn.paa"};
	};
	class ARDN_csat_H_spec_tan: H_HelmetSpecO_ocamo
	{
		displayname = "Assassin Helmet (Tan)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ARDN_csat\data\CSAT_tech_tan.paa"};
	};
};

class CfgVehicles
{
	class O_Soldier_F;
	class ARDN_csat_b_soldier_gry: O_Soldier_F
	{
		scope = 1;
		scopeCurator = 0;
		uniformClass = "ARDN_csat_u_gry";
		hiddenSelections[] = {"Camo1","Camo2","insignia"};
        hiddenSelectionsTextures[] = {"\ARDN_csat\data\CSAT_clothing_gry.paa","ARDN_csat\data\CSAT_tech_gry.paa"};
		hiddenSelectionsMaterials[] = {"ARDN_csat\data\clothing.rvmat", "\A3\Characters_F\OPFOR\Data\tech.rvmat"};
	};
	class ARDN_csat_b_soldier_blk: O_Soldier_F
	{
		scope = 1;
		scopeCurator = 0;
		uniformClass = "ARDN_csat_u_blk";
		hiddenSelections[] = {"Camo1","Camo2","insignia"};
        hiddenSelectionsTextures[] = {"\ARDN_csat\data\CSAT_clothing_blk.paa","ARDN_csat\data\CSAT_tech_blk.paa"};
		hiddenSelectionsMaterials[] = {"ARDN_csat\data\clothing.rvmat", "\A3\Characters_F\OPFOR\Data\tech.rvmat"};
	};
	class ARDN_csat_b_soldier_grn: O_Soldier_F
	{
		scope = 1;
		scopeCurator = 0;
		uniformClass = "ARDN_csat_u_grn";
		hiddenSelections[] = {"Camo1","Camo2","insignia"};
        hiddenSelectionsTextures[] = {"\ARDN_csat\data\CSAT_clothing_grn.paa","ARDN_csat\data\CSAT_tech_grn.paa"};
		hiddenSelectionsMaterials[] = {"ARDN_csat\data\clothing.rvmat", "\A3\Characters_F\OPFOR\Data\tech.rvmat"};
	};
	class ARDN_csat_b_soldier_brn: O_Soldier_F
	{
		scope = 1;
		scopeCurator = 0;
		uniformClass = "ARDN_csat_u_brn";
		hiddenSelections[] = {"Camo1","Camo2","insignia"};
        hiddenSelectionsTextures[] = {"\ARDN_csat\data\CSAT_clothing_brn.paa","ARDN_csat\data\CSAT_tech_brn.paa"};
		hiddenSelectionsMaterials[] = {"ARDN_csat\data\clothing.rvmat", "\A3\Characters_F\OPFOR\Data\tech.rvmat"};
	};
	class ARDN_csat_b_soldier_wht: O_Soldier_F
	{
		scope = 1;
		scopeCurator = 0;
		uniformClass = "ARDN_csat_u_wht";
		hiddenSelections[] = {"Camo1","Camo2","insignia"};
        hiddenSelectionsTextures[] = {"\ARDN_csat\data\CSAT_clothing_wht.paa","ARDN_csat\data\CSAT_tech_wht.paa"};
		hiddenSelectionsMaterials[] = {"ARDN_csat\data\clothing.rvmat", "\A3\Characters_F\OPFOR\Data\tech.rvmat"};
	};
	class ARDN_csat_b_soldier_tan: O_Soldier_F
	{
		scope = 1;
		scopeCurator = 0;
		uniformClass = "ARDN_csat_u_tan";
		hiddenSelections[] = {"Camo1","Camo2","insignia"};
        hiddenSelectionsTextures[] = {"\ARDN_csat\data\CSAT_clothing_tan.paa","ARDN_csat\data\CSAT_tech_tan.paa"};
		hiddenSelectionsMaterials[] = {"ARDN_csat\data\clothing.rvmat", "\A3\Characters_F\OPFOR\Data\tech.rvmat"};
	};
	
	//VIPER
	class O_V_Soldier_base_F;
	class ARDN_csat_b_viper_blk: O_V_Soldier_base_F
	{
		scope = 1;
		scopeCurator = 0;
		uniformClass = "ARDN_csat_u_viper_blk";
		hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\ARDN_csat\data\ViperOp_Suit_blk.paa"};
		hiddenSelectionsMaterials[] = {"ARDN_csat\data\ViperOp_Suit.rvmat"};
	};
	class ARDN_csat_b_viper_wht: O_V_Soldier_base_F
	{
		scope = 1;
		scopeCurator = 0;
		uniformClass = "ARDN_csat_u_viper_wht";
		hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\ARDN_csat\data\ViperOp_Suit_wht.paa"};
		hiddenSelectionsMaterials[] = {"ARDN_csat\data\ViperOp_Suit.rvmat"};
	};
	class ARDN_csat_b_viper_grn: O_V_Soldier_base_F
	{
		scope = 1;
		scopeCurator = 0;
		uniformClass = "ARDN_csat_u_viper_grn";
		hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\ARDN_csat\data\ViperOp_Suit_grn.paa"};
		hiddenSelectionsMaterials[] = {"ARDN_csat\data\ViperOp_Suit.rvmat"};
	};
	class ARDN_csat_b_viper_brn: O_V_Soldier_base_F
	{
		scope = 1;
		scopeCurator = 0;
		uniformClass = "ARDN_csat_u_viper_brn";
		hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\ARDN_csat\data\ViperOp_Suit_brn.paa"};
		hiddenSelectionsMaterials[] = {"ARDN_csat\data\ViperOp_Suit.rvmat"};
	};
	class ARDN_csat_b_viper_tan: O_V_Soldier_base_F
	{
		scope = 1;
		scopeCurator = 0;
		uniformClass = "ARDN_csat_u_viper_tan";
		hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\ARDN_csat\data\ViperOp_Suit_tan.paa"};
		hiddenSelectionsMaterials[] = {"ARDN_csat\data\ViperOp_Suit.rvmat"};
	};
	class ARDN_csat_b_viper_gry: O_V_Soldier_base_F
	{
		scope = 1;
		scopeCurator = 0;
		uniformClass = "ARDN_csat_u_viper_gry";
		hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\ARDN_csat\data\ViperOp_Suit_gry.paa"};
		hiddenSelectionsMaterials[] = {"ARDN_csat\data\ViperOp_Suit.rvmat"};
	};
};

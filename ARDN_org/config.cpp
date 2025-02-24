class CfgPatches 
{ 
    class ARDN_org
    { 
        units[] = {
			ARDN_org_at,ARDN_org_autorifle,ARDN_org_medic,ARDN_org_pilot,ARDN_org_rifleman,ARDN_org_teamlead,ARDN_csat_plane_Stealth,
			ARDN_org_lsv,ARDN_org_lsv_armed,ARDN_org_lsv_at,ARDN_org_apc,ARDN_org_plane_Stealth
		}; 
        weapons[] = {}; 
        requiredVersion = 0.1; 
        requiredAddons[] = {"ARDN_main","ARDN_fbc","ARDN_csat","A3_Characters_F","A3_Characters_F_Exp","A3_Air_F_Jets_Plane_Fighter_02","A3_Characters_F_Enoch_Headgear","A3_Characters_F_Tank","A3_Soft_F_Exp_LSV_02","A3_Armor_F_Beta_APC_Tracked_02"};
    }; 
}; 

class cfgFactionClasses 
{ 
    class ARDN_org
    { 
        displayName = "The Organization"; 
        priority = 3; 
        side = 0;
        icon = "";
    };  
};

class CfgWeapons
{

};

class CfgVehicles
{
	class O_Pilot_F;
	class ARDN_org_pilot: O_Pilot_F{
		faction = "ARDN_org";
		hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\ARDN_csat\data\ViperOp_Suit_wht.paa"};
		hiddenSelectionsMaterials[] = {"ARDN_csat\data\ViperOp_Suit.rvmat"};
		uniformClass = "ARDN_csat_u_viper_wht";
	};
	class O_Soldier_F;
	class ARDN_org_rifleman: O_Soldier_F{
		faction = "ARDN_org";
		identityTypes[] = {"LanguagePER_F","Head_TK"};
		backpack = "ARDN_org_pack_rifle";
		linkedItems[] = {"H_HelmetHBK_F","ARDN_main_G_Combat_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"H_HelmetHBK_F","ARDN_main_G_Combat_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\ARDN_csat\data\ViperOp_Suit_wht.paa"};
		hiddenSelectionsMaterials[] = {"ARDN_csat\data\ViperOp_Suit.rvmat"};
		uniformClass = "ARDN_csat_u_viper_wht";
	};
	class O_Soldier_TL_F;
	class ARDN_org_teamlead: O_Soldier_TL_F{
		faction = "ARDN_org";
		identityTypes[] = {"LanguagePER_F","Head_TK"};
		backpack = "ARDN_org_pack_TL";
		linkedItems[] = {"H_HelmetHBK_F","ARDN_main_G_Combat_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"H_HelmetHBK_F","ARDN_main_G_Combat_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\ARDN_csat\data\ViperOp_Suit_wht.paa"};
		hiddenSelectionsMaterials[] = {"ARDN_csat\data\ViperOp_Suit.rvmat"};
		uniformClass = "ARDN_csat_u_viper_wht";
	};
	class O_Soldier_AR_F;
	class ARDN_org_autorifle: O_Soldier_AR_F{
		faction = "ARDN_org";
		identityTypes[] = {"LanguagePER_F","Head_TK"};
		backpack = "ARDN_org_pack_autorifle";
		linkedItems[] = {"H_HelmetHBK_F","ARDN_main_G_Combat_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"H_HelmetHBK_F","ARDN_main_G_Combat_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\ARDN_csat\data\ViperOp_Suit_wht.paa"};
		hiddenSelectionsMaterials[] = {"ARDN_csat\data\ViperOp_Suit.rvmat"};
		uniformClass = "ARDN_csat_u_viper_wht";
	};
	class O_medic_F;
	class ARDN_org_medic: O_medic_F{
		faction = "ARDN_org";
		identityTypes[] = {"LanguagePER_F","Head_TK"};
		backpack = "ARDN_org_pack_medic";
		linkedItems[] = {"H_HelmetHBK_F","ARDN_main_G_Combat_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"H_HelmetHBK_F","ARDN_main_G_Combat_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\ARDN_csat\data\ViperOp_Suit_wht.paa"};
		hiddenSelectionsMaterials[] = {"ARDN_csat\data\ViperOp_Suit.rvmat"};
		uniformClass = "ARDN_csat_u_viper_wht";
	};
	class O_Soldier_HAT_F;
	class ARDN_org_at: O_Soldier_HAT_F{
		faction = "ARDN_org";
		identityTypes[] = {"LanguagePER_F","Head_TK"};
		backpack = "ARDN_org_pack_at";
		linkedItems[] = {"H_HelmetHBK_F","ARDN_main_G_Combat_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"H_HelmetHBK_F","ARDN_main_G_Combat_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\ARDN_csat\data\ViperOp_Suit_wht.paa"};
		hiddenSelectionsMaterials[] = {"ARDN_csat\data\ViperOp_Suit.rvmat"};
		uniformClass = "ARDN_csat_u_viper_wht";
	};
	//BACKPACKS
	class ARDN_fbc_viperHarness_wht;
	class ARDN_org_pack_rifle: ARDN_fbc_viperHarness_wht{
		scope = 1;
		scopeCurator = 0;
		class TransportItems{
			class _xx_FirstAidKit{
				count = 2;
				name = "FirstAidKit";
			};
			class _xx_HandGrenade{
				count = 2;
				name = "HandGrenade";
			};
			class _xx_SmokeShell{
				count = 4;
				name = "SmokeShell";
			};
		};
		class TransportMagazines{
			class _xx_30Rnd_65x39_caseless_green{
				count = 10;
				magazine = "30Rnd_65x39_caseless_green";
			};
		};
	};
	class ARDN_org_pack_TL: ARDN_fbc_viperHarness_wht{
		scope = 1;
		scopeCurator = 0;
		class TransportItems{
			class _xx_FirstAidKit{
				count = 2;
				name = "FirstAidKit";
			};
			class _xx_HandGrenade{
				count = 2;
				name = "HandGrenade";
			};
			class _xx_SmokeShell{
				count = 4;
				name = "SmokeShell";
			};
		};
		class TransportMagazines{
			class _xx_30Rnd_65x39_caseless_green{
				count = 10;
				magazine = "30Rnd_65x39_caseless_green";
			};
			class _xx_1Rnd_HE_Grenade_shell{
				count = 10;
				magazine = "1Rnd_HE_Grenade_shell";
			};
		};
	};
	class ARDN_org_pack_autorifle: ARDN_fbc_viperHarness_wht{
		scope = 1;
		scopeCurator = 0;
		class TransportItems{
			class _xx_FirstAidKit{
				count = 2;
				name = "FirstAidKit";
			};
			class _xx_HandGrenade{
				count = 2;
				name = "HandGrenade";
			};
			class _xx_SmokeShell{
				count = 4;
				name = "SmokeShell";
			};
		};
		class TransportMagazines{
			class _xx_150Rnd_762x54_Box{
				count = 5;
				magazine = "150Rnd_762x54_Box";
			};
		};
	};
	class ARDN_org_pack_medic: ARDN_fbc_viperHarness_wht{
		scope = 1;
		scopeCurator = 0;
		class TransportItems{
			class _xx_FirstAidKit{
				count = 10;
				name = "FirstAidKit";
			};
			class _xx_Medikit{
				count = 2;
				name = "Medikit";
			};
			class _xx_HandGrenade{
				count = 2;
				name = "HandGrenade";
			};
			class _xx_SmokeShell{
				count = 4;
				name = "SmokeShell";
			};
		};
		class TransportMagazines{
			class _xx_30Rnd_65x39_caseless_green{
				count = 10;
				magazine = "30Rnd_65x39_caseless_green";
			};
		};
	};
	class ARDN_org_pack_at: ARDN_fbc_viperHarness_wht{
		scope = 1;
		scopeCurator = 0;
		class TransportItems{
			class _xx_FirstAidKit{
				count = 2;
				name = "FirstAidKit";
			};
			class _xx_HandGrenade{
				count = 2;
				name = "HandGrenade";
			};
			class _xx_SmokeShell{
				count = 4;
				name = "SmokeShell";
			};
		};
		class TransportMagazines{
			class _xx_30Rnd_65x39_caseless_green{
				count = 10;
				magazine = "30Rnd_65x39_caseless_green";
			};
			class _xx_Vorona_HEAT{
				count = 2;
				magazine = "Vorona_HEAT";
			};
		};
	};
	//VICS
	class O_Plane_Fighter_02_Stealth_F;
	class ARDN_org_plane_Stealth: O_Plane_Fighter_02_Stealth_F{
		crew = "ARDN_org_pilot";
		displayName = "To-201 Shikra (Stealth)";
		faction = "ARDN_org";
		hiddenSelections[] = {"Camo_01","Camo_02","","number_01","number_02","number_03"};
		hiddenSelectionsTextures[] = {
			"ARDN_org\data\Fighter_02_fuselage_01_org.paa",
			"ARDN_org\data\Fighter_02_fuselage_02_org.paa",
			"ARDN_org\data\Fighter_02_fuselage_01_org.paa",
			"",
			"",
			""};
		textureList[] = {};
		typicalCargo[] = {"ARDN_org_pilot"};
	};
	
	class O_LSV_02_unarmed_F;
	class ARDN_org_lsv: O_LSV_02_unarmed_F{
		crew = "ARDN_org_rifleman";
		faction = "ARDN_org";
		hiddenSelectionsTextures[] = {
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_black_CO.paa",
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa"};
		textureList[] = {"Black",1,"GreenHex",0,"Arid",0};
	};
	class O_LSV_02_armed_F;
	class ARDN_org_lsv_armed: O_LSV_02_armed_F{
		crew = "ARDN_org_rifleman";
		faction = "ARDN_org";
		hiddenSelectionsTextures[] = {
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_black_CO.paa",
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa"};
		textureList[] = {"Black",1,"GreenHex",0,"Arid",0};
	};
	class O_LSV_02_AT_F;
	class ARDN_org_lsv_at: O_LSV_02_AT_F{
		crew = "ARDN_org_rifleman";
		faction = "ARDN_org";
		hiddenSelectionsTextures[] = {
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_black_CO.paa",
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa"};
		textureList[] = {"Black",1,"GreenHex",0,"Arid",0};
	};
	class O_APC_Tracked_02_cannon_F;
	class ARDN_org_apc: O_APC_Tracked_02_cannon_F{
		crew = "ARDN_org_rifleman";
		faction = "ARDN_org";
		hiddenSelectionsTextures[] = {
			"ARDN_org\data\apc_tracked_02_ext_01_org.paa",
			"ARDN_org\data\apc_tracked_02_ext_02_org.paa",
			"ARDN_org\data\rcws30_org.paa",
			"ARDN_org\data\camonet_org.paa",
			"ARDN_org\data\cage_org.paa"
			};
		textureList[] = {"White",1};
		class TextureSources{
			class White{
				displayName = "White";
				textures[] = {
					"ARDN_org\data\apc_tracked_02_ext_01_org.paa",
					"ARDN_org\data\apc_tracked_02_ext_02_org.paa",
					"ARDN_org\data\rcws30_org.paa",
					"ARDN_org\data\camonet_org.paa",
					"ARDN_org\data\cage_org.paa"
				};
			};
		};
	};
};

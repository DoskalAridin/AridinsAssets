class CfgPatches 
{ 
    class ARDN_fbc
    { 
        units[] = {
			ARDN_fbc_ranger,ARDN_fbc_ranger_l,ARDN_fbc_ranger_specOps,ARDN_fbc_ranger_specOps_l,
			ARDN_fbc_threshold_cube_w,ARDN_fbc_threshold_cube_w_1,ARDN_fbc_threshold_cube_w_2,ARDN_fbc_threshold_cube_w_3,ARDN_fbc_threshold_cube_wv,ARDN_fbc_threshold_cube_wv_1,ARDN_fbc_threshold_cube_wv_2,ARDN_fbc_threshold_cube_wv_3,ARDN_fbc_threshold_cube_b,ARDN_fbc_threshold_cube_b_1,ARDN_fbc_threshold_cube_b_2,ARDN_fbc_threshold_cube_b_3,
			ARDN_fbc_threshold_voidSpace_4,ARDN_fbc_threshold_voidSpace_10,ARDN_fbc_threshold_voidSpace_50,ARDN_fbc_threshold_voidSpace_100,ARDN_fbc_threshold_voidSpace_200x250,ARDN_fbc_threshold_cube_rv,ARDN_fbc_threshold_cube_rv_1,ARDN_fbc_threshold_cube_rv_2,ARDN_fbc_threshold_cube_rv_3,
			ARDN_fbc_VR_void_b,ARDN_fbc_VR_void,ARDN_fbc_VR_invis,ARDN_fbc_ugv_invis,ARDN_fbc_uav_invis,
			ARDN_fbc_VR_void_b_demon,ARDN_fbc_VR_void_b_demon_shotgun,ARDN_fbc_VR_void_b_demon_rifle
		}; 
        weapons[] = {}; 
        requiredVersion = 0.1; 
        requiredAddons[] = {"ARDN_main","ARDN_gg","A3_Characters_F","A3_Structures_F_Bootcamp_VR_Blocks","A3_Structures_F_Mark_VR_Shapes","A3_Drones_F_Soft_F_Gamma_UGV_01","A3_Air_F_Orange_UAV_06","A3_Weapons_F_Ammoboxes","A3_Characters_F_AoW"};
    }; 
}; 

class cfgFactionClasses 
{ 
    class ARDN_fbc_FBC
    { 
        displayName = "Federal Bureau of Control"; 
        priority = 3; 
        side = 0;
        icon = "\ARDN_main\ins\FBC.paa";
    }; 
	class ARDN_fbc_threshold_entity
    { 
        displayName = "Threshold Entities"; 
        priority = 3; 
        side = 3;
        icon = "\ARDN_main\ins\FBC.paa";
    };
	class ARDN_fbc_threshold_entity_opfor
    { 
        displayName = "Threshold Entities"; 
        priority = 3; 
        side = 0;
        icon = "\ARDN_main\ins\FBC.paa";
    }; 
};
class CfgEditorCategories
{
	class ARDN_fbc_threshold
	{
		displayName = "Threshold Objects"; 
	};
};
class CfgEditorSubcategories
{
	class ARDN_fbc_voidSpace
	{
		displayName = "Void Space";
	};
};

class CfgHeads
{
	class ARDN_void{
		model = "\A3\characters_f\Heads\m_white_01";
		selectionHeadWound = "injury_head";
		selectionPersonality = "personality";
		selectionPersonalityHL = "hl";
		class Wounds{
			mat[] = {};
			tex[] = {};
		};
	};
};

class CfgFaces
{
	class Man_A3
	{
		class ARDN_head_void_b
		{
			author = "Aridin";
			disabled = 0;
			displayname = "Void (Black)";
			head = "ARDN_void";
			identityTypes[] ={"ARDN_head_void_b"};
			material = "\ARDN_fbc\data\VR_Shape_01_basic_b.rvmat";
			materialHL = "\ARDN_fbc\data\VR_Shape_01_basic_b.rvmat";
			materialHL2 = "\ARDN_fbc\data\VR_Shape_01_basic_b.rvmat";
			materialWounded1 = "\ARDN_fbc\data\VR_Shape_01_basic_b.rvmat";
			materialWounded2 = "\ARDN_fbc\data\VR_Shape_01_basic_b.rvmat";
			texture = "#(argb,8,8,3)color(0,0,0,1,ca)";
			textureHL = "#(argb,8,8,3)color(0,0,0,1,ca)";
			textureHL2 = "#(argb,8,8,3)color(0,0,0,1,ca)";
		};
		class ARDN_head_void_w
		{
			author = "Aridin";
			disabled = 0;
			displayname = "Void (White)";
			head = "ARDN_void";
			identityTypes[] ={"ARDN_head_void_w"};
			material = "\ARDN_fbc\data\VR_Shape_01_emissive_wv.rvmat";
			materialHL = "\ARDN_fbc\data\VR_Shape_01_emissive_wv.rvmat";
			materialHL2 = "\ARDN_fbc\data\VR_Shape_01_emissive_wv.rvmat";
			materialWounded1 = "\ARDN_fbc\data\VR_Shape_01_emissive_wv.rvmat";
			materialWounded2 = "\ARDN_fbc\data\VR_Shape_01_emissive_wv.rvmat";
			texture = "#(argb,8,8,3)color(1,1,1,1,ca)";
			textureHL = "#(argb,8,8,3)color(1,1,1,1,ca)";
			textureHL2 = "#(argb,8,8,3)color(1,1,1,1,ca)";
		};
	};
};

class CfgWeapons
{
	class U_B_CTRG_Soldier_F;
	class ARDN_fbc_u_b_ctrg_fbc: U_B_CTRG_Soldier_F{
		displayName = "FBC Ranger Uniform";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsMaterials[] = {"\ARDN_fbc\Data\ARDN_fbc_u_b_ctrg_fbc.rvmat"};
		hiddenSelectionsTextures[] = {"\ARDN_fbc\Data\ARDN_fbc_u_b_ctrg_fbc.paa"};
		class ItemInfo{
			containerClass = "Supply40";
			mass = 40;
			scope = 0;
			type = 801;
			uniformClass = "ARDN_fbc_b_ctrg_fbc";
			uniformModel = "-";
		};
	};
	
	class H_HelmetCrew_I;
	class ARDN_fbc_helmet: H_HelmetCrew_I{
		displayName = "FBC Ranger Helmet";
		hiddenSelectionsTextures[] = {"\ARDN_fbc\Data\headgear_ia_helmet_wht.paa"};
	};
	
	class ARDN_fbc_u_void_b: U_B_CTRG_Soldier_F{
		scope = 1;
		scopeCurator = 1;
		displayName = "Void (Black)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"\ARDN_fbc\data\VR_Shape_01_basic_b.rvmat"};
		hiddenSelectionsTextures[] = {"#(argb,1,1,1)color(0,0,0,1,ca)"};
		class itemInfo{
			containerClass = "Supply20";
			mass = 30;
			scope = 0;
			type = 801;
			uniformClass = "ARDN_fbc_VR_void_b";
			uniformModel = "-";
		};
	};
	class ARDN_fbc_u_void_b_demon: ARDN_fbc_u_void_b{
		class itemInfo{
			containerClass = "Supply20";
			mass = 30;
			scope = 0;
			type = 801;
			uniformClass = "ARDN_fbc_VR_void_b_demon";
			uniformModel = "-";
		};	
	};
	class ARDN_fbc_u_void_w: U_B_CTRG_Soldier_F{
		scope = 1;
		scopeCurator = 1;
		displayName = "Void (White)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"\ARDN_fbc\data\VR_Shape_01_emissive_wv.rvmat"};
		hiddenSelectionsTextures[] = {"#(argb,1,1,1)color(1,1,1,1,ca)"};
		class itemInfo{
			containerClass = "Supply20";
			mass = 30;
			scope = 0;
			type = 801;
			uniformClass = "ARDN_fbc_VR_void_w";
			uniformModel = "-";
		};
	};
	class ARDN_fbc_u_void_i: U_B_CTRG_Soldier_F{
		scope = 1;
		scopeCurator = 1;
		displayName = "Void (Invisible)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {""};
		hiddenSelectionsTextures[] = {""};
		class itemInfo{
			containerClass = "Supply20";
			mass = 30;
			scope = 0;
			type = 801;
			uniformClass = "ARDN_fbc_VR_void_i";
			uniformModel = "-";
		};
	};
};

class CfgVehicles
{
	class B_CTRG_Soldier_F;
	class ARDN_fbc_b_ctrg_fbc: B_CTRG_Soldier_F{
		scope = 1;
		scopeCurator = 0;
		model = "\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_01_F.p3d";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsMaterials[] = {"\ARDN_fbc\Data\ARDN_fbc_u_b_ctrg_fbc.rvmat"};
		hiddenSelectionsTextures[] = {"\ARDN_fbc\Data\ARDN_fbc_u_b_ctrg_fbc.paa"};
		uniformClass = "ARDN_fbc_u_b_ctrg_fbc";
	};
	
	class B_Soldier_F;
	class ARDN_fbc_ranger: B_Soldier_F{
		displayName = "Ranger";
		backpack = "ARDN_fbc_viperHarness_wht";
		model = "\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_01_F.p3d";
		hiddenSelectionsMaterials[] = {"\ARDN_fbc\Data\ARDN_fbc_u_b_ctrg_fbc.rvmat"};
		hiddenSelectionsTextures[] = {"\ARDN_fbc\Data\ARDN_fbc_u_b_ctrg_fbc.paa"};
		uniformClass = "ARDN_fbc_u_b_ctrg_fbc";
		editorPreview = "";
		faction = "ARDN_fbc_FBC";
		identityTypes[] = {"LanguageENG_F","Head_NATO"};
		linkedItems[] = {"ARDN_fbc_helmet","ARDN_gg_G_Balaclava_TI_G","Binocular","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ARDN_fbc_helmet","ARDN_gg_G_Balaclava_TI_G","Binocular","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","SmokeShellBlue","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","SmokeShellBlue","SmokeShell","SmokeShell"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit","FirstAidKit"};
		weapons[] = {"srifle_DMR_05_blk_F","Throw","Put"};
		respawnWeapons[] = {"srifle_DMR_05_blk_F","Throw","Put"};
		class EventHandlers{
			class ARDN {
				init = "if (local (_this select 0)) then {[(_this select 0), 'ARDN_ins_fbc_ranger'] call bis_fnc_setUnitInsignia;};";
			};
		};
	};
	class ARDN_fbc_ranger_l: B_Soldier_F{
		displayName = "Ranger (Light)";
		backpack = "ARDN_fbc_viperLightHarnes_wht";
		model = "\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_01_F.p3d";
		hiddenSelectionsMaterials[] = {"\ARDN_fbc\Data\ARDN_fbc_u_b_ctrg_fbc.rvmat"};
		hiddenSelectionsTextures[] = {"\ARDN_fbc\Data\ARDN_fbc_u_b_ctrg_fbc.paa"};
		uniformClass = "ARDN_fbc_u_b_ctrg_fbc";
		editorPreview = "";
		faction = "ARDN_fbc_FBC";
		identityTypes[] = {"LanguageENG_F","Head_NATO"};
		linkedItems[] = {"ARDN_fbc_helmet","ARDN_gg_G_Balaclava_TI_G","Binocular","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ARDN_fbc_helmet","ARDN_gg_G_Balaclava_TI_G","Binocular","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","SmokeShellBlue","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","SmokeShellBlue","SmokeShell","SmokeShell"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit","FirstAidKit"};
		weapons[] = {"hgun_PDW2000_F","Throw","Put"};
		respawnWeapons[] = {"hgun_PDW2000_F","Throw","Put"};
		class EventHandlers{
			class ARDN {
				init = "if (local (_this select 0)) then {[(_this select 0), 'ARDN_ins_fbc_ranger'] call bis_fnc_setUnitInsignia;};";
			};
		};
	};
	class ARDN_fbc_ranger_specOps: ARDN_fbc_ranger{
		displayName = "Ranger Special Ops";
		backpack = "ARDN_fbc_viperHarness_yellow";
		linkedItems[] = {"H_Tank_black_F","Binocular","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"H_Tank_black_F","Binocular","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelectionsTextures[] = {"\ARDN_fbc\Data\ARDN_fbc_u_b_ctrg_fbc.paa"};
		class EventHandlers{
			class ARDN {
				init = "if (local (_this select 0)) then {[(_this select 0), 'ARDN_ins_fbc_ranger'] call bis_fnc_setUnitInsignia;};";
			};
		};
	};
	class ARDN_fbc_ranger_specOps_l: ARDN_fbc_ranger_l{
		displayName = "Ranger Special Ops (Light)";
		backpack = "ARDN_fbc_viperLightHarnes_yellow";
		linkedItems[] = {"H_Tank_black_F","Binocular","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"H_Tank_black_F","Binocular","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelectionsTextures[] = {"\ARDN_fbc\Data\ARDN_fbc_u_b_ctrg_fbc.paa"};
		class EventHandlers{
			class ARDN {
				init = "if (local (_this select 0)) then {[(_this select 0), 'ARDN_ins_fbc_ranger'] call bis_fnc_setUnitInsignia;};";
			};
		};
	};
	
	class B_ViperHarness_blk_F;
	class B_ViperLightHarness_blk_F;
	class ARDN_fbc_viperHarness_wht: B_ViperHarness_blk_F{
		displayName = "Viper Harness (White)";
		hiddenSelectionsTextures[] = {"\ARDN_fbc\Data\Backpack_ViperOp_wht.paa"};
	};
	class ARDN_fbc_viperLightHarnes_wht: B_ViperLightHarness_blk_F{
		displayName = "Viper Light Harness (White)";
		hiddenSelectionsTextures[] = {"\ARDN_fbc\Data\Backpack_ViperOp_wht.paa"};
	};
	class ARDN_fbc_viperHarness_yellow: B_ViperHarness_blk_F{
		displayName = "Viper Harness (Yellow)";
		hiddenSelectionsTextures[] = {"\ARDN_fbc\Data\Backpack_ViperOp_yellow.paa"};
	};
	class ARDN_fbc_viperLightHarnes_yellow: B_ViperLightHarness_blk_F{
		displayName = "Viper Light Harness (Yellow)";
		hiddenSelectionsTextures[] = {"\ARDN_fbc\Data\Backpack_ViperOp_yellow.paa"};
	};
	
	class B_Kitbag_Base;
	class ARDN_fbc_backpack_invs: B_Kitbag_Base{
		scope = 1;
		displayName = "Invisible Bag Entity";
		maximumLoad = 50;
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsMaterials[] = {};
		hiddenSelectionsTextures[] = {""};
	};

	class Land_VR_Shape_01_cube_1m_F;
	class Land_VR_Block_05_F;
	class Land_VR_Block_04_F;
	class Land_VR_Block_01_F;
	class ARDN_fbc_threshold_cube_w: Land_VR_Shape_01_cube_1m_F{
		displayName = "White Block (Cube, 1m)";
		editorCategory = "ARDN_fbc_threshold";
		hiddenSelectionsMaterials[] = {"\A3\Structures_F_Mark\VR\Shapes\Data\VR_Shape_01_basic.rvmat","\A3\Structures_F_Mark\VR\Shapes\Data\VR_Shape_01_basic.rvmat","\A3\Structures_F_Mark\VR\Shapes\Data\VR_Shape_01_basic.rvmat","\A3\Structures_F_Mark\VR\Shapes\Data\VR_Shape_01_basic.rvmat","\A3\Structures_F_Mark\VR\Shapes\Data\VR_Shape_01_basic.rvmat","\A3\Structures_F_Mark\VR\Shapes\Data\VR_Shape_01_basic.rvmat","\A3\Structures_F_Mark\VR\Shapes\Data\VR_Shape_01_basic.rvmat"};
	};
	class ARDN_fbc_threshold_cube_w_1: Land_VR_Block_05_F{
		displayName = "White Block (10x5x4)";
		editorCategory = "ARDN_fbc_threshold";
		hiddenSelectionsMaterials[] = {"\A3\Structures_F_Bootcamp\VR\CoverObjects\Data\VR_CoverObject_basic.rvmat","\A3\Structures_F_Bootcamp\VR\CoverObjects\Data\VR_CoverObject_basic.rvmat"};
	};
	class ARDN_fbc_threshold_cube_w_2: Land_VR_Block_04_F{
		displayName = "White Block (10.5x10.5x9)";
		editorCategory = "ARDN_fbc_threshold";
		hiddenSelectionsMaterials[] = {"\A3\Structures_F_Bootcamp\VR\CoverObjects\Data\VR_CoverObject_basic.rvmat","\A3\Structures_F_Bootcamp\VR\CoverObjects\Data\VR_CoverObject_basic.rvmat"};
	};
	class ARDN_fbc_threshold_cube_w_3: Land_VR_Block_01_F{
		displayName = "White Block (20x10x8)";
		editorCategory = "ARDN_fbc_threshold";
		hiddenSelectionsMaterials[] = {"\A3\Structures_F_Bootcamp\VR\CoverObjects\Data\VR_CoverObject_basic.rvmat","\A3\Structures_F_Bootcamp\VR\CoverObjects\Data\VR_CoverObject_basic.rvmat"};
	};
	
	class ARDN_fbc_threshold_cube_wv: Land_VR_Shape_01_cube_1m_F{
		displayName = "White Void (Cube, 1m)";
		editorCategory = "ARDN_fbc_threshold";
		hiddenSelectionsMaterials[] = {"\ARDN_fbc\data\VR_Shape_01_emissive_wv.rvmat","\ARDN_fbc\data\VR_Shape_01_emissive_wv.rvmat","\ARDN_fbc\data\VR_Shape_01_emissive_wv.rvmat","\ARDN_fbc\data\VR_Shape_01_emissive_wv.rvmat","\ARDN_fbc\data\VR_Shape_01_emissive_wv.rvmat","\ARDN_fbc\data\VR_Shape_01_emissive_wv.rvmat","\ARDN_fbc\data\VR_Shape_01_emissive_wv.rvmat"};
	};
	class ARDN_fbc_threshold_cube_wv_1: Land_VR_Block_05_F{
		displayName = "White Void (10x5x4)";
		editorCategory = "ARDN_fbc_threshold";
		hiddenSelectionsMaterials[] = {"\ARDN_fbc\data\VR_CoverObject_emmisive_wv.rvmat","\ARDN_fbc\data\VR_CoverObject_emmisive_wv.rvmat"};
	};
	class ARDN_fbc_threshold_cube_wv_2: Land_VR_Block_04_F{
		displayName = "White Void (10.5x10.5x9)";
		editorCategory = "ARDN_fbc_threshold";
		hiddenSelectionsMaterials[] = {"\ARDN_fbc\data\VR_CoverObject_emmisive_wv.rvmat","\ARDN_fbc\data\VR_CoverObject_emmisive_wv.rvmat"};
	};
	class ARDN_fbc_threshold_cube_wv_3: Land_VR_Block_01_F{
		displayName = "White Void (20x10x8)";
		editorCategory = "ARDN_fbc_threshold";
		hiddenSelectionsMaterials[] = {"\ARDN_fbc\data\VR_CoverObject_emmisive_wv.rvmat","\ARDN_fbc\data\VR_CoverObject_emmisive_wv.rvmat"};
	};
	
	class ARDN_fbc_threshold_cube_rv: Land_VR_Shape_01_cube_1m_F{
		displayName = "Red Void (Cube, 1m)";
		editorCategory = "ARDN_fbc_threshold";
		hiddenSelectionsMaterials[] = {"\ARDN_fbc\data\VR_Shape_01_emissive_red.rvmat","\ARDN_fbc\data\VR_Shape_01_emissive_red.rvmat","\ARDN_fbc\data\VR_Shape_01_emissive_red.rvmat","\ARDN_fbc\data\VR_Shape_01_emissive_red.rvmat","\ARDN_fbc\data\VR_Shape_01_emissive_red.rvmat","\ARDN_fbc\data\VR_Shape_01_emissive_red.rvmat","\ARDN_fbc\data\VR_Shape_01_emissive_red.rvmat"};
	};
	class ARDN_fbc_threshold_cube_rv_1: Land_VR_Block_05_F{
		displayName = "RedVoid (10x5x4)";
		editorCategory = "ARDN_fbc_threshold";
		hiddenSelectionsMaterials[] = {"\ARDN_fbc\data\VR_CoverObject_emmisive_red.rvmat","\ARDN_fbc\data\VR_CoverObject_emmisive_red.rvmat"};
	};
	class ARDN_fbc_threshold_cube_rv_2: Land_VR_Block_04_F{
		displayName = "Red Void (10.5x10.5x9)";
		editorCategory = "ARDN_fbc_threshold";
		hiddenSelectionsMaterials[] = {"\ARDN_fbc\data\VR_CoverObject_emmisive_red.rvmat","\ARDN_fbc\data\VR_CoverObject_emmisive_red.rvmat"};
	};
	class ARDN_fbc_threshold_cube_rv_3: Land_VR_Block_01_F{
		displayName = "Red Void (20x10x8)";
		editorCategory = "ARDN_fbc_threshold";
		hiddenSelectionsMaterials[] = {"\ARDN_fbc\data\VR_CoverObject_emmisive_red.rvmat","\ARDN_fbc\data\VR_CoverObject_emmisive_red.rvmat"};
	};
	
	class ARDN_fbc_threshold_cube_b: Land_VR_Shape_01_cube_1m_F{
		displayName = "Black Void (Cube, 1m)";
		editorCategory = "ARDN_fbc_threshold";
		hiddenSelectionsMaterials[] = {"\ARDN_fbc\data\VR_Shape_01_basic_b.rvmat","\ARDN_fbc\data\VR_Shape_01_basic_b.rvmat","\ARDN_fbc\data\VR_Shape_01_basic_b.rvmat","\ARDN_fbc\data\VR_Shape_01_basic_b.rvmat","\ARDN_fbc\data\VR_Shape_01_basic_b.rvmat","\ARDN_fbc\data\VR_Shape_01_basic_b.rvmat","\ARDN_fbc\data\VR_Shape_01_basic_b.rvmat"};
	};
	class ARDN_fbc_threshold_cube_b_1: Land_VR_Block_05_F{
		displayName = "Black Void (10x5x4)";
		editorCategory = "ARDN_fbc_threshold";
		hiddenSelectionsMaterials[] = {"\ARDN_fbc\data\VR_CoverObject_basic_b.rvmat","\ARDN_fbc\data\VR_CoverObject_basic_b.rvmat"};
	};
	class ARDN_fbc_threshold_cube_b_2: Land_VR_Block_04_F{
		displayName = "Black Void (10.5x10.5x9)";
		editorCategory = "ARDN_fbc_threshold";
		hiddenSelectionsMaterials[] = {"\ARDN_fbc\data\VR_CoverObject_basic_b.rvmat","\ARDN_fbc\data\VR_CoverObject_basic_b.rvmat"};
	};
	class ARDN_fbc_threshold_cube_b_3: Land_VR_Block_01_F{
		displayName = "Black Void (20x10x8)";
		editorCategory = "ARDN_fbc_threshold";
		hiddenSelectionsMaterials[] = {"\ARDN_fbc\data\VR_CoverObject_basic_b.rvmat","\ARDN_fbc\data\VR_CoverObject_basic_b.rvmat"};
	};
	class ARDN_fbc_threshold_voidSpace_4: Land_VR_Block_01_F{
		displayName = "Black Void Space (4m)";
		editorCategory = "ARDN_fbc_threshold";
		editorSubcategory = "ARDN_fbc_voidSpace";
		model = "\ARDN_fbc\data\voidSpace\voidSpace_4.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsMaterials[] = {};
		hiddenSelectionsTextures[] = {};
	};
	class ARDN_fbc_threshold_voidSpace_10: ARDN_fbc_threshold_voidSpace_4{
		displayName = "Black Void Space (10m)";
		model = "\ARDN_fbc\data\voidSpace\voidSpace_10.p3d";
	};
	class ARDN_fbc_threshold_voidSpace_50: ARDN_fbc_threshold_voidSpace_4{
		displayName = "Black Void Space (50m)";
		model = "\ARDN_fbc\data\voidSpace\voidSpace_50.p3d";
	};
	class ARDN_fbc_threshold_voidSpace_100: ARDN_fbc_threshold_voidSpace_4{
		displayName = "Black Void Space (100m)";
		model = "\ARDN_fbc\data\voidSpace\voidSpace_100.p3d";
	};
	class ARDN_fbc_threshold_voidSpace_200x250: ARDN_fbc_threshold_voidSpace_4{
		displayName = "Black Void Space (200x250m)";
		model = "\ARDN_fbc\data\voidSpace\voidSpace_250x200.p3d";
	};

	class C_Man_casual_4_v2_F;
	class ARDN_fbc_VR_void_b: C_Man_casual_4_v2_F{
		displayName = "Black Void Entity";
		faction = "ARDN_fbc_threshold_entity";
		model = "\A3\Characters_F\Civil\c_poloshirtpants.p3d";
		backpack = "";
		headgearList[] = {};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"\ARDN_fbc\data\VR_Shape_01_basic_b.rvmat"};
		hiddenSelectionsTextures[] = {"#(argb,1,1,1)color(0,0,0,1,ca)"};
		identityTypes[] = {"ARDN_head_void_b"};
		uniformClass = "ARDN_fbc_u_void_b";
		class Wounds
		{
			tex[]={};
			mat[]={};
		};
		class EventHandlers {
			class ARDN {
				killed = "private _unit = _this select 0; [_unit] spawn {params ['_unit']; [[['\A3\data_f\ParticleEffects\Universal\Refract',1,0,1], '', 'Billboard', 1, 2, [0,0,1], [0,0,0], 1, 1.275, 1, 0, [5,0,0,0,0,0,0,0], [[1, 1, 1, 1]], [1000], 1, 0, '', '', _unit]] remoteExec ['drop']; [[['\A3\Data_F\ParticleEffects\Universal\Universal', 16, 12, 16, 0], '', 'Billboard', 1, 2, [0,0,1], [0,0,0], 1, 1.275, 1, 0, [2,2.5,0,0,0,0,0,0,0,0], [[0, 0, 0, 1]], [1000], 1, 0, '', '', _unit]] remoteExec ['drop']; sleep 0.1; deleteVehicle _unit;}";
			};
		};
	};
	class ARDN_fbc_VR_void: C_Man_casual_4_v2_F{
		displayName = "White Void Entity";
		faction = "ARDN_fbc_threshold_entity";
		model = "\A3\Characters_F\Civil\c_poloshirtpants.p3d";
		backpack = "";
		headgearList[] = {};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"\ARDN_fbc\data\VR_Shape_01_emissive_wv.rvmat"};
		hiddenSelectionsTextures[] = {"#(argb,1,1,1)color(1,1,1,1,ca)"};
		identityTypes[] = {"ARDN_head_void_w"};
		uniformClass = "ARDN_fbc_u_void_w";
		class Wounds
		{
			tex[]={};
			mat[]={};
		};
		class EventHandlers {
			class ARDN {
				killed = "private _unit = _this select 0; [_unit] spawn {params ['_unit']; [[['\A3\data_f\ParticleEffects\Universal\Refract',1,0,1], '', 'Billboard', 1, 2, [0,0,1], [0,0,0], 1, 1.275, 1, 0, [5,0,0,0,0,0,0,0], [[1, 1, 1, 1]], [1000], 1, 0, '', '', _unit]] remoteExec ['drop']; [[['\A3\Data_F\ParticleEffects\Universal\Universal', 16, 12, 16, 0], '', 'Billboard', 1, 2, [0,0,1], [0,0,0], 1, 1.275, 1, 0, [2,2.5,0,0,0,0,0,0,0,0], [[0, 0, 0, 1]], [1000], 1, 0, '', '', _unit]] remoteExec ['drop']; sleep 0.1; deleteVehicle _unit;}";
			};
		};
	};
	
	class ARDN_fbc_VR_void_b_demon: ARDN_fbc_VR_void_b {
		displayName = "Demon Void Entity";
		faction = "ARDN_fbc_threshold_entity_opfor";
		side = 0;
		linkedItems[] = {"ARDN_main_eyesDemonFull"};
		respawnLinkedItems[] = {"ARDN_main_eyesDemonFull"};
		uniformClass = "ARDN_fbc_u_void_b_demon";
	};
	class ARDN_fbc_VR_void_b_demon_shotgun: ARDN_fbc_VR_void_b_demon {
		displayName = "Demon Void Entity (Shotgun)";
		faction = "ARDN_fbc_threshold_entity_opfor";
		side = 0;
		linkedItems[] = {"ARDN_main_eyesDemonFull"};
		respawnLinkedItems[] = {"ARDN_main_eyesDemonFull"};
		magazines[] = {"2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets"};
		respawnMagazines[] = {"2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets"};
		respawnWeapons[] = {"sgun_HunterShotgun_01_F","Throw","Put"};
		weapons[] = {"sgun_HunterShotgun_01_F","Throw","Put"};
	};
	class ARDN_fbc_VR_void_b_demon_rifle: ARDN_fbc_VR_void_b_demon {
		displayName = "Demon Void Entity (Rifle)";
		faction = "ARDN_fbc_threshold_entity_opfor";
		side = 0;
		linkedItems[] = {"ARDN_main_eyesDemonFull"};
		respawnLinkedItems[] = {"ARDN_main_eyesDemonFull"};
		magazines[] = {"10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag"};
		respawnMagazines[] = {"10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag"};
		respawnWeapons[] = {"srifle_DMR_06_hunter_F","Throw","Put"};
		weapons[] = {"srifle_DMR_06_hunter_F","Throw","Put"};
	};
	
	/**
	class B_UGV_01_F;
	class ARDN_fbc_ugv_invis: B_UGV_01_F{
		side = 3;
		displayName = "Invisible Ground Entity";
		faction = "ARDN_fbc_threshold_entity";
		crew = "C_UAV_AI_F";
		hiddenSelectionsMaterials[] = {"","",""};
		hiddenSelectionsTextures[] = {"","",""};
	};
	
	class C_UAV_06_F;
	class ARDN_fbc_uav_invis: C_UAV_06_F{
		displayName = "Invisible Flying Entity";
		faction = "ARDN_fbc_threshold_entity";
		hiddenSelectionsMaterials[] = {"",""};
		hiddenSelectionsTextures[] = {"",""};
	};
	**/
};

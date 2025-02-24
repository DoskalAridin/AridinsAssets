class CfgPatches 
{ 
    class ARDN_gg{
        units[] = {
			"ARDN_gg_meme_van",
			"ARDN_gg_rifleman","ARDN_gg_rifleman_lat","ARDN_gg_rifleman_at","ARDN_gg_grenadier","ARDN_gg_marksman","ARDN_gg_medic","ARDN_gg_rto","ARDN_gg_engi","ARDN_gg_gunner","ARDN_gg_pilot","ARDN_gg_heli","ARDN_gg_sniper","ARDN_gg_crew",
			"ARDN_gg_rifleman_snds","ARDN_gg_rifleman_lat_snds","ARDN_gg_grenadier_snds","ARDN_gg_marksman_snds","ARDN_gg_medic_snds","ARDN_gg_rto_snds","ARDN_gg_engi_snds","ARDN_gg_gunner_snds","ARDN_gg_sniper_snds",
			"ARDN_gg_rifleman_warden","ARDN_gg_rifleman_lat_warden","ARDN_gg_grenadier_warden","ARDN_gg_marksman_warden","ARDN_gg_medic_warden","ARDN_gg_rto_warden","ARDN_gg_engi_warden","ARDN_gg_gunner_warden","ARDN_gg_sniper_warden","ARDN_gg_sl_warden","ARDN_gg_jtac_warden",
			"ARDN_gg_rifleman_snow","ARDN_gg_rifleman_lat_snow","ARDN_gg_grenadier_snow","ARDN_gg_marksman_snow","ARDN_gg_medic_snow","ARDN_gg_rto_snow","ARDN_gg_engi_snow","ARDN_gg_gunner_snow","ARDN_gg_sniper_snow",
			"ARDN_gg_VTOL_infantry","ARDN_gg_VTOL_vehicle","ARDN_gg_LSV_unarmed","ARDN_gg_LSV_AT","ARDN_gg_LSV_armed","ARDN_gg_heliLight","ARDN_gg_heliLight_gun","ARDN_gg_nyx_scout","ARDN_gg_nyx_cannon","ARDN_gg_nyx_AA","ARDN_gg_nyx_AT","ARDN_gg_avenger",
			"ARDN_gg_ward","ARDN_gg_opM_warden",
			
			"ARDN_main_jumpDevice_item","ARDN_main_supportTerminal_item","ARDN_main_dAnchor"
		}; 
        weapons[] = {"ARDN_main_jumpDevice","ARDN_main_supportTerminal","ARDN_main_dAnchor_item"}; 
        requiredVersion = 0.1; 
        requiredAddons[] = {"ARDN_main","ARDN_csat","A3_Air_F_Jets_Plane_Fighter_04","a3_Static_F_Sams","a3_Static_F_Jets","a3_Soft_F_EPC","a3_Soft_F","A3_Soft_F_Enoch","A3_Static_F_Gamma","a3_armor_f_gamma","a3_Armor_F_Tank","a3_Soft_F_Exp","A3_Characters_F_Exp","A3_Weapons_F_Pistols_Pistol_Heavy_01","A3_Weapons_F_Ammoboxes","A3_Soft_F_Exp_LSV_01","A3_Air_F_Exp_VTOL_01","A3_Characters_F_Enoch_Vests"};
    }; 
}; 
class CBA_Extended_EventHandlers_base;

class CfgFunctions {
	class ARDN {
		class GG {
			class openJumpMenu {
				file = "ARDN_gg\functions\fn_openJumpMenu.sqf";
				preInit = 0;
				postInit = 0;
				preStart = 0;
			};
			class jump {
				file = "ARDN_gg\functions\fn_jump.sqf";
				preInit = 0;
				postInit = 0;
				preStart = 0;
			};
            class jumpGroup {
				file = "ARDN_gg\functions\fn_jumpGroup.sqf";
				preInit = 0;
				postInit = 0;
				preStart = 0;
			};
			class openFireSupport {
				file = "ARDN_gg\functions\fn_openFireSupport.sqf";
				preInit = 0;
				postInit = 0;
				preStart = 0;
			};
			class FireSupportFire {
				file = "ARDN_gg\functions\fn_FireSupportFire.sqf";
				preInit = 0;
				postInit = 0;
				preStart = 0;
			};
			class deployDAnchor {
				file = "ARDN_gg\functions\fn_deployDAnchor.sqf";
				preInit = 0;
				postInit = 0;
				preStart = 0;
			};
		};
	};
};

class cfgFactionClasses 
{ 
    class ARDN_gg_gekkoGhost
    { 
        displayName = "Gekko's Ghosts"; 
        priority = 3; 
        side = 2;
        icon = "\ARDN_main\ins\gekko.paa";
    };  
};

class CfgHQIdentities {
	class ARDN_gg_L12 {
		name = "Lima-12";
		pitch = 1;
		speaker = "Male03EN";
	};
	class ARDN_gg_S21 {
		name = "Sierra-21";
		pitch = 1;
		speaker = "Male03EN";
	};
};

class CfgEditorSubcategories
{
	class ARDN_gg_subcat_unique
	{
		displayName = "Unique";
	};
	class ARDN_gg_subcat_ghost
	{
		displayName = "Men (Ghosts)";
	};
	class ARDN_gg_subcat_warden
	{
		displayName = "Men (Wardens)";
	};
	class ARDN_gg_subcat_winter
	{
		displayName = "Men (Winter)";
	};
	class ARDN_gg_subcat_rnd
	{
		displayName = "R&D";
	};
};

class CfgVehicles
{
	class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class ARDN_equipment
            {
				displayName = "S-21 Equipment"
				icon = "\ARDN_main\icon\ace_GG_64.paa";
				class ARDN_main_openJumpDevice {
					displayName = "Jump Device";
					condition = "[_player, 'ARDN_main_jumpDevice'] call BIS_fnc_hasItem";
					exceptions[] = {};
					statement = "call ARDN_fnc_openJumpMenu";
				};
				class ARDN_main_openFireSupport {
					displayName = "Fire Support Terminal";
					condition = "[_player, 'ARDN_main_supportTerminal'] call BIS_fnc_hasItem";
					exceptions[] = {};
					statement = "call ARDN_fnc_openFireSupport";
				};
                class ARDN_main_deployDAnchor {
					displayName = "Create Dimensional Anchor";
					condition = "[_player, 'ARDN_main_dAnchor_item'] call BIS_fnc_hasItem";
					exceptions[] = {};
					statement = "[side player] remoteExec ['ARDN_fnc_deployDAnchor', clientOwner]";
				};
            };
		};
	};
	class C_Van_02_transport_F;
	class ARDN_gg_meme_van: C_Van_02_transport_F
    {
        crew = "ARDN_gg_rifleman";
        side = 2;
        scope = 2;
		scopeCurator = 2;
        faction = "ARDN_gg_gekkoGhost";
		editorSubcategory = "ARDN_gg_subcat_rnd";
        displayName = "M-Team Van";
		hiddenSelections[] = {"camo1","camo2","camo3","emergency_lights"};
		hiddenSelectionsTextures[] = {
		"\ARDN_gg\data\vehicle\mvan\van_mteam.paa",
		"\a3\soft_f_orange\van_02\data\van_wheel_co.paa",
		"\ARDN_gg\data\vehicle\mvan\van_glass_mteam.paa",
		"\ARDN_gg\data\vehicle\mvan\van_mteam.paa"};
		class PlateInfos
		{
		    // name of section where plate number should generated
		     name = "spz";
		     // color used for plate number in (r,g,b,a) format
		     color[] = {0.00,0.00,0.00,1};
		     plateFont        = "RobotoCondensedLight";
		     // "#" represent number & "$" represents letter
		     plateFormat        = "M-Team";
		     // Required even if you don't use any letters in plateFormat
		     plateLetters    = "ABCDEFHIKLMOPRSTVXYZ";
		};
		class TextureSources
		{
			class ARDN_meme
			{
				author = "Doskal Aridin";
				displayName = "M-Team";
				factions[] = {"ARDN_gg_gekkoGhost"};
				textures[] = {
					"\ARDN_gg\data\vehicle\mvan\van_mteam.paa",
					"\a3\soft_f_orange\van_02\data\van_wheel_co.paa",
					"\ARDN_gg\data\vehicle\mvan\van_glass_mteam.paa",
					"\ARDN_gg\data\vehicle\mvan\van_mteam.paa"};
			};
		};
		class TransportMagazines {};
		class TransportWeapons {};
		canFloat = 1;
		waterAngularDampingCoef = 2;
		waterLeakiness = 0;
		waterLinearDampingCoefX = 0;
		waterLinearDampingCoefY = 0;
		waterResistance = 1;
		waterResistanceCoef = 0.1;
		waterSpeedFactor = 1;
    };
	
	class O_T_VTOL_02_infantry_dynamicLoadout_F;
	class O_T_VTOL_02_vehicle_dynamicLoadout_F;
	class ARDN_gg_VTOL_infantry: O_T_VTOL_02_infantry_dynamicLoadout_F{
		scope = 2;
		scopeCurator = 2;
		side = 2;
		crew = "ARDN_gg_pilot";
		displayName = "Y-32g Gekk (Infantry Transport)";
		faction = "ARDN_gg_gekkoGhost";
		hiddenSelections[] = {"Camo_1","Camo_2","Camo_3","Camo_4"};
		hiddenSelectionsTextures[] = {
			"\ARDN_gg\data\vehicle\VTOL\VTOL_02_EXT01_gekk.paa",
			"\ARDN_gg\data\vehicle\VTOL\VTOL_02_EXT02_gekk.paa",
			"\ARDN_gg\data\vehicle\VTOL\VTOL_02_EXT03_gekk.paa",
			"\ARDN_gg\data\vehicle\VTOL\VTOL_02_EXT03_gekk.paa"};
		textureList[] = {"Gekko",0.1,"Cad",1,"Night",0.5};
		class TextureSources{
			class Gekko{
				displayName = "Gekko";
				factions[] = {"ARDN_gg_gekkoGhost"};
				textures[] = {
					"\ARDN_gg\data\vehicle\VTOL\VTOL_02_EXT01_gekk.paa",
					"\ARDN_gg\data\vehicle\VTOL\VTOL_02_EXT02_gekk.paa",
					"\ARDN_gg\data\vehicle\VTOL\VTOL_02_EXT03_gekk.paa",
					"\ARDN_gg\data\vehicle\VTOL\VTOL_02_EXT03_gekk.paa"};
			};
			class Cad{
				displayName = "Gekko (Forest)";
				factions[] = {"ARDN_gg_gekkoGhost"};
				textures[] = {
					"\ARDN_gg\data\vehicle\VTOL\VTOL_02_EXT01_cad.paa",
					"\ARDN_gg\data\vehicle\VTOL\VTOL_02_EXT02_cad.paa",
					"\ARDN_gg\data\vehicle\VTOL\VTOL_02_EXT03_cad.paa",
					"\ARDN_gg\data\vehicle\VTOL\VTOL_02_EXT03_cad.paa"};
			};
			class Night{
			displayName = "Gekko (Night)";
			factions[] = {"ARDN_gg_gekkoGhost"};
			textures[] = {
				"\ARDN_gg\data\vehicle\VTOL\VTOL_02_EXT01_night.paa",
				"\ARDN_gg\data\vehicle\VTOL\VTOL_02_EXT02_night.paa",
				"\ARDN_gg\data\vehicle\VTOL\VTOL_02_EXT03_night.paa",
				"\ARDN_gg\data\vehicle\VTOL\VTOL_02_EXT03_night.paa"};
			};
		};
	};
	class ARDN_gg_VTOL_vehicle: O_T_VTOL_02_vehicle_dynamicLoadout_F{
		scope = 2;
		scopeCurator = 2;
		side = 2;
		crew = "ARDN_gg_pilot";
		displayName = "Y-32g Gekk (Vehicle Transport)";
		faction = "ARDN_gg_gekkoGhost";
		hiddenSelections[] = {"Camo_1","Camo_2","Camo_3","Camo_4"};
		hiddenSelectionsTextures[] = {
			"\ARDN_gg\data\vehicle\VTOL\VTOL_02_EXT01_gekk.paa",
			"\ARDN_gg\data\vehicle\VTOL\VTOL_02_EXT02_gekk.paa",
			"\ARDN_gg\data\vehicle\VTOL\VTOL_02_EXT03_gekk.paa",
			"\ARDN_gg\data\vehicle\VTOL\VTOL_02_EXT03_gekk.paa"};
		textureList[] = {"Gekko",0.1,"Cad",1,"Night",0.5};
		class TextureSources{
			class Gekko{
				displayName = "Gekko";
				factions[] = {"ARDN_gg_gekkoGhost"};
				textures[] = {
					"\ARDN_gg\data\vehicle\VTOL\VTOL_02_EXT01_gekk.paa",
					"\ARDN_gg\data\vehicle\VTOL\VTOL_02_EXT02_gekk.paa",
					"\ARDN_gg\data\vehicle\VTOL\VTOL_02_EXT03_gekk.paa",
					"\ARDN_gg\data\vehicle\VTOL\VTOL_02_EXT03_gekk.paa"};
			};
			class Cad{
				displayName = "Gekko (Forest)";
				factions[] = {"ARDN_gg_gekkoGhost"};
				textures[] = {
				"\ARDN_gg\data\vehicle\VTOL\VTOL_02_EXT01_cad.paa",
				"\ARDN_gg\data\vehicle\VTOL\VTOL_02_EXT02_cad.paa",
				"\ARDN_gg\data\vehicle\VTOL\VTOL_02_EXT03_cad.paa",
				"\ARDN_gg\data\vehicle\VTOL\VTOL_02_EXT03_cad.paa"};
			};
		class Night{
			displayName = "Gekko (Night)";
			factions[] = {"ARDN_gg_gekkoGhost"};
			textures[] = {
				"\ARDN_gg\data\vehicle\VTOL\VTOL_02_EXT01_night.paa",
				"\ARDN_gg\data\vehicle\VTOL\VTOL_02_EXT02_night.paa",
				"\ARDN_gg\data\vehicle\VTOL\VTOL_02_EXT03_night.paa",
				"\ARDN_gg\data\vehicle\VTOL\VTOL_02_EXT03_night.paa"};
			};
		};
	};
	
	class B_LSV_01_unarmed_F;
	class B_LSV_01_AT_F;
	class B_LSV_01_armed_F;
	class ARDN_gg_LSV_unarmed: B_LSV_01_unarmed_F{
		side = 2;
		crew = "ARDN_gg_rifleman";
		faction = "ARDN_gg_gekkoGhost";
		textureList[] = {"Black",1,"Olive",0,"Sand",0};
	};
	class ARDN_gg_LSV_AT: B_LSV_01_AT_F{
		side = 2;
		crew = "ARDN_gg_rifleman";
		faction = "ARDN_gg_gekkoGhost";
		textureList[] = {"Black",1,"Olive",0,"Sand",0};
	};
	class ARDN_gg_LSV_armed: B_LSV_01_armed_F{
		side = 2;
		crew = "ARDN_gg_rifleman";
		faction = "ARDN_gg_gekkoGhost";
		textureList[] = {"Black",1,"Olive",0,"Sand",0};
	};
	
	class I_UGV_01_rcws_F;
	class ARDN_gg_ugv: I_UGV_01_rcws_F{
		side = 2;
		faction = "ARDN_gg_gekkoGhost";
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"\ARDN_gg\data\vehicle\ugv\UGV_01_ext.paa","\ARDN_gg\data\vehicle\ugv\UGV_01_int.paa","\ARDN_gg\data\vehicle\ugv\Turret.paa"};
		
	};
	
	class B_Heli_Light_01_F;
	class ARDN_gg_heliLight: B_Heli_Light_01_F{
		side = 2;
		crew = "ARDN_gg_heli";
		faction = "ARDN_gg_gekkoGhost";
		hiddenSelectionsTextures[] = {"\ARDN_gg\data\vehicle\heliLight\Heli_Light_01_ext.paa"};
		textureList[] = {"Black",0.5,"Night",1};
		class TextureSources{
			class Black{
				author = "Doskal Aridin";
				displayName = "Black";
				factions[] = {"ARDN_gg_gekkoGhost"};
				textures[] = {"\ARDN_gg\data\vehicle\heliLight\Heli_Light_01_ext.paa"};
			};
			class Night{
				author = "Doskal Aridin";
				displayName = "Night";
				factions[] = {"ARDN_gg_gekkoGhost"};
				textures[] = {"\ARDN_gg\data\vehicle\heliLight\Heli_Light_01_ext_n.paa"};
			};
		};
		class EventHandlers{
			init = "if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
	};
	class B_Heli_Light_01_dynamicLoadout_F;
	class ARDN_gg_heliLight_gun: B_Heli_Light_01_dynamicLoadout_F{
		side = 2;
		crew = "ARDN_gg_heli";
		faction = "ARDN_gg_gekkoGhost";
		hiddenSelectionsTextures[] = {"\ARDN_gg\data\vehicle\heliLight\Heli_Light_01_ext.paa","\ARDN_gg\data\vehicle\heliLight\heli_light_01_dot.paa"};
		textureList[] = {"Black",0.5,"Night",1};
		class TextureSources{
			class Black{
				author = "Doskal Aridin";
				displayName = "Black";
				factions[] = {"ARDN_gg_gekkoGhost"};
				textures[] = {"\ARDN_gg\data\vehicle\heliLight\Heli_Light_01_ext.paa","\ARDN_gg\data\vehicle\heliLight\heli_light_01_dot.paa"};
			};
			class Night{
				author = "Doskal Aridin";
				displayName = "Night";
				factions[] = {"ARDN_gg_gekkoGhost"};
				textures[] = {"\ARDN_gg\data\vehicle\heliLight\Heli_Light_01_ext_n.paa","\ARDN_gg\data\vehicle\heliLight\heli_light_01_dot.paa"};
			};
		};
		class EventHandlers{
			init = "if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
	};
	
	class I_LT_01_scout_F;
	class ARDN_gg_nyx_scout: I_LT_01_scout_F{
        scope = 2;
		scopeCurator = 2;
		side = 2;
		crew = "ARDN_gg_crew";
		faction = "ARDN_gg_gekkoGhost";
        hiddenSelections[] = {"camo1","camo2","CamoNet","CamoSlat"};
		hiddenSelectionsTextures[] = {
			"\ARDN_gg\data\vehicle\nyx\LT_01_Main.paa",
			"\ARDN_gg\data\vehicle\nyx\LT_01_Radar.paa",
			"\ARDN_gg\data\vehicle\camonet.paa",
			"\ARDN_gg\data\vehicle\cage.paa"
		};
		textureList[] = {"Black",0.5,"Ward",0,"Forest",0.5,"Night",1};
		class TextureSources{
			class Black{
				author = "Doskal Aridin";
				displayName = "Black";
				factions[] = {"ARDN_gg_gekkoGhost"};
				textures[] = {
					"\ARDN_gg\data\vehicle\nyx\LT_01_Main.paa",
					"\ARDN_gg\data\vehicle\nyx\LT_01_Radar.paa",
					"\ARDN_gg\data\vehicle\camonet.paa",
					"\ARDN_gg\data\vehicle\cage.paa"
				};
			};
			class Ward{
				author = "Doskal Aridin";
				displayName = "Ward";
				factions[] = {"ARDN_gg_gekkoGhost"};
				textures[] = {
					"\ARDN_gg\data\vehicle\nyx\LT_01_Main_ward.paa",
					"\ARDN_gg\data\vehicle\nyx\LT_01_Radar.paa",
					"\ARDN_gg\data\vehicle\camonet.paa",
					"\ARDN_gg\data\vehicle\cage.paa"
				};
			};
			class Forest{
				author = "Doskal Aridin";
				displayName = "Forest";
				factions[] = {"ARDN_gg_gekkoGhost"};
				textures[] = {
					"\ARDN_gg\data\vehicle\nyx\LT_01_Main_forest.paa",
					"\ARDN_gg\data\vehicle\nyx\LT_01_Radar_forest.paa",
					"\ARDN_gg\data\vehicle\camonet.paa",
					"\ARDN_gg\data\vehicle\cage.paa"
				};
			};
			class Night{
				author = "Doskal Aridin";
				displayName = "Night";
				factions[] = {"ARDN_gg_gekkoGhost"};
				textures[] = {
					"\ARDN_gg\data\vehicle\nyx\LT_01_Main_night.paa",
					"\ARDN_gg\data\vehicle\nyx\LT_01_Radar_night.paa",
					"\ARDN_gg\data\vehicle\camonet.paa",
					"\ARDN_gg\data\vehicle\cage.paa"
				};
			};
		};
		canFloat = 1;
		waterAngularDampingCoef = 2;
		waterLeakiness = 0;
		waterLinearDampingCoefX = 0;
		waterLinearDampingCoefY = 0;
		waterResistance = 1;
		waterResistanceCoef = 0.1;
		waterSpeedFactor = 1;
		class EventHandlers{
			init = "if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
    };
	
	class I_LT_01_cannon_F;
	class ARDN_gg_nyx_cannon: I_LT_01_cannon_F{
        scope = 2;
		scopeCurator = 2;
		side = 2;
		crew = "ARDN_gg_crew";
		faction = "ARDN_gg_gekkoGhost";
        hiddenSelections[] = {"camo1","camo2","CamoNet","CamoSlat"};
		hiddenSelectionsTextures[] = {
			"\ARDN_gg\data\vehicle\nyx\LT_01_Main.paa",
			"\ARDN_gg\data\vehicle\nyx\LT_01_Cannon.paa",
			"\ARDN_gg\data\vehicle\camonet.paa",
			"\ARDN_gg\data\vehicle\cage.paa"
		};
		textureList[] = {"Black",0.5,"Forest",0.5,"Night",1};
		class TextureSources{
			class Black{
				author = "Doskal Aridin";
				displayName = "Black";
				factions[] = {"ARDN_gg_gekkoGhost"};
				textures[] = {
					"\ARDN_gg\data\vehicle\nyx\LT_01_Main.paa",
					"\ARDN_gg\data\vehicle\nyx\LT_01_Cannon.paa",
					"\ARDN_gg\data\vehicle\camonet.paa",
					"\ARDN_gg\data\vehicle\cage.paa"
				};
			};
			class Forest{
				author = "Doskal Aridin";
				displayName = "Forest";
				factions[] = {"ARDN_gg_gekkoGhost"};
				textures[] = {
					"\ARDN_gg\data\vehicle\nyx\LT_01_Main_forest.paa",
					"\ARDN_gg\data\vehicle\nyx\LT_01_Cannon_forest.paa",
					"\ARDN_gg\data\vehicle\camonet.paa",
					"\ARDN_gg\data\vehicle\cage.paa"
				};
			};
			class Night{
				author = "Doskal Aridin";
				displayName = "Night";
				factions[] = {"ARDN_gg_gekkoGhost"};
				textures[] = {
					"\ARDN_gg\data\vehicle\nyx\LT_01_Main_night.paa",
					"\ARDN_gg\data\vehicle\nyx\LT_01_Cannon_night.paa",
					"\ARDN_gg\data\vehicle\camonet.paa",
					"\ARDN_gg\data\vehicle\cage.paa"
				};
			};
		};  
		canFloat = 1;
		waterAngularDampingCoef = 2;
		waterLeakiness = 0;
		waterLinearDampingCoefX = 0;
		waterLinearDampingCoefY = 0;
		waterResistance = 1;
		waterResistanceCoef = 0.1;
		waterSpeedFactor = 1;
		class EventHandlers{
			init = "if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
    };

	class I_LT_01_AA_F;
	class ARDN_gg_nyx_AA: I_LT_01_AA_F{
		scope = 2;
		scopeCurator = 2;
		side = 2;
		crew = "ARDN_gg_crew";
		faction = "ARDN_gg_gekkoGhost";
        hiddenSelections[] = {"camo1","camo2","CamoNet","CamoSlat"};
		hiddenSelectionsTextures[] = {
			"\ARDN_gg\data\vehicle\nyx\LT_01_Main.paa",
			"\ARDN_gg\data\vehicle\nyx\LT_01_AT.paa",
			"\ARDN_gg\data\vehicle\camonet.paa",
			"\ARDN_gg\data\vehicle\cage.paa"
		};
		textureList[] = {"Black",0.5,"Forest",0.5,"Night",1};
		class TextureSources{
			class Black{
				author = "Doskal Aridin";
				displayName = "Black";
				factions[] = {"ARDN_gg_gekkoGhost"};
				textures[] = {
					"\ARDN_gg\data\vehicle\nyx\LT_01_Main.paa",
					"\ARDN_gg\data\vehicle\nyx\LT_01_AT.paa",
					"\ARDN_gg\data\vehicle\camonet.paa",
					"\ARDN_gg\data\vehicle\cage.paa"
				};
			};
			class Forest{
				author = "Doskal Aridin";
				displayName = "Forest";
				factions[] = {"ARDN_gg_gekkoGhost"};
				textures[] = {
					"\ARDN_gg\data\vehicle\nyx\LT_01_Main_forest.paa",
					"\ARDN_gg\data\vehicle\nyx\LT_01_AT_forest.paa",
					"\ARDN_gg\data\vehicle\camonet.paa",
					"\ARDN_gg\data\vehicle\cage.paa"
				};
			};
			class Night{
				author = "Doskal Aridin";
				displayName = "Night";
				factions[] = {"ARDN_gg_gekkoGhost"};
				textures[] = {
					"\ARDN_gg\data\vehicle\nyx\LT_01_Main_night.paa",
					"\ARDN_gg\data\vehicle\nyx\LT_01_AT_night.paa",
					"\ARDN_gg\data\vehicle\camonet.paa",
					"\ARDN_gg\data\vehicle\cage.paa"
				};
			};
		};
		canFloat = 1;
		waterAngularDampingCoef = 2;
		waterLeakiness = 0;
		waterLinearDampingCoefX = 0;
		waterLinearDampingCoefY = 0;
		waterResistance = 1;
		waterResistanceCoef = 0.1;
		waterSpeedFactor = 1;
		class EventHandlers{
			init = "if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
	};
	class I_LT_01_AT_F;
	class ARDN_gg_nyx_AT: I_LT_01_AT_F{
		scope = 2;
		scopeCurator = 2;
		side = 2;
		crew = "ARDN_gg_crew";
		faction = "ARDN_gg_gekkoGhost";
        hiddenSelections[] = {"camo1","camo2","CamoNet","CamoSlat"};
		hiddenSelectionsTextures[] = {
			"\ARDN_gg\data\vehicle\nyx\LT_01_Main.paa",
			"\ARDN_gg\data\vehicle\nyx\LT_01_AT.paa",
			"\ARDN_gg\data\vehicle\camonet.paa",
			"\ARDN_gg\data\vehicle\cage.paa"
		};
		textureList[] = {"Black",0.5,"Forest",0.5,"Night",1};
		class TextureSources{
			class Black{
				author = "Doskal Aridin";
				displayName = "Black";
				factions[] = {"ARDN_gg_gekkoGhost"};
				textures[] = {
					"\ARDN_gg\data\vehicle\nyx\LT_01_Main.paa",
					"\ARDN_gg\data\vehicle\nyx\LT_01_AT.paa",
					"\ARDN_gg\data\vehicle\camonet.paa",
					"\ARDN_gg\data\vehicle\cage.paa"
				};
			};
			class Forest{
				author = "Doskal Aridin";
				displayName = "Forest";
				factions[] = {"ARDN_gg_gekkoGhost"};
				textures[] = {
					"\ARDN_gg\data\vehicle\nyx\LT_01_Main_forest.paa",
					"\ARDN_gg\data\vehicle\nyx\LT_01_AT_forest.paa",
					"\ARDN_gg\data\vehicle\camonet.paa",
					"\ARDN_gg\data\vehicle\cage.paa"
				};
			};
			class Night{
				author = "Doskal Aridin";
				displayName = "Night";
				factions[] = {"ARDN_gg_gekkoGhost"};
				textures[] = {
					"\ARDN_gg\data\vehicle\nyx\LT_01_Main_night.paa",
					"\ARDN_gg\data\vehicle\nyx\LT_01_AT_night.paa",
					"\ARDN_gg\data\vehicle\camonet.paa",
					"\ARDN_gg\data\vehicle\cage.paa"
				};
			};
		};
		canFloat = 1;
		waterAngularDampingCoef = 2;
		waterLeakiness = 0;
		waterLinearDampingCoefX = 0;
		waterLinearDampingCoefY = 0;
		waterResistance = 1;
		waterResistanceCoef = 0.1;
		waterSpeedFactor = 1;
		class EventHandlers{
			init = "if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
	};

	class B_T_VTOL_01_armed_F;
	class ARDN_gg_avenger: B_T_VTOL_01_armed_F{
		side = 2;
        scope = 2;
		scopeCurator = 2;
		crew = "ARDN_gg_heli_snow";
		displayName = "V-44 X Avenger (Armed)";
		faction = "ARDN_gg_gekkoGhost";
		hiddenSelectionsTextures[] = {"\ARDN_gg\data\vehicle\VTOL_01\vtol_01_ext01_gg_co.paa","\ARDN_gg\data\vehicle\VTOL_01\VTOL_01_EXT02_gg_co.paa","\ARDN_gg\data\vehicle\VTOL_01\VTOL_01_EXT03_gg_co.paa","\ARDN_gg\data\vehicle\VTOL_01\VTOL_01_EXT04_gg_co.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_signs_CA.paa"};
	};
	
	class I_Plane_Fighter_04_F;
	class ARDN_gg_fighter: I_Plane_Fighter_04_F{
		side = 2;
        scope = 2;
		scopeCurator = 2;
		crew = "ARDN_gg_heli_snow";
		faction = "ARDN_gg_gekkoGhost";
		hiddenSelectionsTextures[] = {"a3\air_f_jets\plane_fighter_04\data\Fighter_04_fuselage_01_green_co.paa","a3\air_f_jets\plane_fighter_04\data\Fighter_04_fuselage_02_green_co.paa","a3\air_f_jets\plane_fighter_04\data\Fighter_04_misc_01_co.paa","a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_04_ca.paa","a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_04_ca.paa","a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_08_ca.paa"
		};
		textureList[] = {"Night",0.5};
		class TextureSources{
			class Night{
				author = "Doskal Aridin";
				displayName = "Night";
				factions[] = {"ARDN_gg_gekkoGhost"};
				textures[] = {
					"a3\air_f_jets\plane_fighter_04\data\Fighter_04_fuselage_01_green_co.paa","a3\air_f_jets\plane_fighter_04\data\Fighter_04_fuselage_02_green_co.paa","a3\air_f_jets\plane_fighter_04\data\Fighter_04_misc_01_co.paa","a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_04_ca.paa","a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_04_ca.paa","a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_08_ca.paa"
				};
			};
		};
	};
	
	class O_Soldier_F;
	class ARDN_gg_b_soldier_blk: O_Soldier_F
	{
		scope = 1;
		scopeCurator = 0;
		side = 2;
		faction = "ARDN_gg_gekkoGhost";
		uniformClass = "ARDN_gg_u_black";
		hiddenSelections[] = {"Camo1","Camo2","insignia"};
        hiddenSelectionsTextures[] = {"\ARDN_gg\data\CSAT_clothing_gg.paa","\ARDN_csat\data\CSAT_tech_blk.paa"};
		hiddenSelectionsMaterials[] = {"\ARDN_gg\data\CSAT_clothing_gg.rvmat", "\A3\Characters_F\OPFOR\Data\tech.rvmat"};
		camouflage = 1;
		class EventHandlers{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
		};
	};
	
	class ARDN_gg_b_soldier_wolf: O_Soldier_F
	{
		scope = 1;
		scopeCurator = 0;
		side = 2;
		faction = "ARDN_gg_gekkoGhost";
		uniformClass = "ARDN_gg_u_wolf";
		hiddenSelections[] = {"Camo1","Camo2","insignia"};
        hiddenSelectionsTextures[] = {"\ARDN_gg\data\unique\CSAT_clothing_wolf.paa","\ARDN_csat\data\CSAT_tech_blk.paa"};
		hiddenSelectionsMaterials[] = {"\ARDN_gg\data\CSAT_clothing_gg.rvmat", "\A3\Characters_F\OPFOR\Data\tech.rvmat"};
		camouflage = 1;
	}
	
	class ARDN_gg_b_soldier_forest_n: O_Soldier_F
	{
		scope = 1;
		scopeCurator = 0;
		side = 2;
		faction = "ARDN_gg_gekkoGhost";
		uniformClass = "ARDN_gg_u_forest_n";
		hiddenSelections[] = {"Camo1","Camo2","insignia"};
        hiddenSelectionsTextures[] = {"\ARDN_gg\data\CSAT_clothing_forest_n.paa","\ARDN_csat\data\CSAT_tech_blk.paa"};
		hiddenSelectionsMaterials[] = {"\ARDN_gg\data\CSAT_clothing_gg.rvmat", "\A3\Characters_F\OPFOR\Data\tech.rvmat"};
		camouflage = 1;
	};
	class ARDN_gg_b_soldier_winter: O_Soldier_F
	{
		scope = 1;
		scopeCurator = 0;
		side = 2;
		faction = "ARDN_gg_gekkoGhost";
		uniformClass = "ARDN_gg_u_winter";
		hiddenSelections[] = {"Camo1","Camo2","insignia"};
        hiddenSelectionsTextures[] = {"\ARDN_gg\data\CSAT_clothing_winter.paa","\ARDN_csat\data\CSAT_tech_blk.paa"};
		hiddenSelectionsMaterials[] = {"\ARDN_gg\data\CSAT_clothing_gg.rvmat", "\A3\Characters_F\OPFOR\Data\tech.rvmat"};
		camouflage = 1;
	};
	
	class B_Soldier_F;
	class B_Soldier_GL_F;
	class B_soldier_M_F;
	class B_Pilot_F;
	class B_Helipilot_F;
	class B_medic_F;
	class B_engineer_F;
	class B_HeavyGunner_F;
	class B_soldier_LAT_F;
	class ARDN_gg_grenadier: B_Soldier_GL_F{
		scope = 2;
		scopeCurator = 2;
		side = 2;
		displayName = "Grenadier";
		editorPreview = "";
		faction = "ARDN_gg_gekkoGhost";
		identityTypes[] = {"LanguageENG_F","Head_NATO"};
		linkedItems[] = {"V_PlateCarrier2_blk","ARDN_gg_helmetb_ti","ARDN_gg_G_Balaclava_TI_G","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};
		respawnLinkedItems[] = {"V_PlateCarrier2_blk","ARDN_gg_helmetb_ti","ARDN_gg_G_Balaclava_TI_G","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};
		magazines[] = {"Laserbatteries","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","SmokeShell","SmokeShell"};
		respawnmagazines[] = {"Laserbatteries","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","SmokeShell","SmokeShell"};
		Items[] = {"FirstAidKit","FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit","FirstAidKit"};
		weapons[] = {"arifle_MSBS65_GL_black_ico_pointer_f","ARDN_gg_hgun_pHeavy_snds","Throw","Put","Laserdesignator_03"};
		respawnWeapons[] = {"arifle_MSBS65_GL_black_ico_pointer_f","ARDN_gg_hgun_pHeavy_snds","Throw","Put","Laserdesignator_03"};
		uniformClass = "ARDN_gg_u_black";
		hiddenSelections[] = {"Camo1","Camo2","insignia"};
		hiddenSelectionsTextures[] = {"\ARDN_gg\data\CSAT_clothing_gg.paa","\ARDN_csat\data\CSAT_tech_blk.paa"};
		hiddenSelectionsMaterials[] = {"\ARDN_gg\data\CSAT_clothing_gg.rvmat", "\A3\Characters_F\OPFOR\Data\tech.rvmat"};
		icon = "iconManLeader";
		camouflage = 1;
		class EventHandlers{
			class ARDN {
				init = "if (local (_this select 0)) then {[(_this select 0), 'ARDN_ins_gekko'] call bis_fnc_setUnitInsignia;};";				
			};
		};
	};
	class ARDN_gg_rifleman: B_Soldier_F{
		scope = 2;
		scopeCurator = 2;
		side = 2;
		displayName = "Rifleman";
		editorPreview = "";
		faction = "ARDN_gg_gekkoGhost";
		identityTypes[] = {"LanguageENG_F","Head_NATO"};
		linkedItems[] = {"V_PlateCarrier2_blk","ARDN_gg_helmetb_ti","ARDN_gg_G_Balaclava_TI_G","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};
		respawnLinkedItems[] = {"V_PlateCarrier2_blk","ARDN_gg_helmetb_ti","ARDN_gg_G_Balaclava_TI_G","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};
		magazines[] = {"Laserbatteries","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShellBlue","SmokeShellGreen","SmokeShellRed","HandGrenade","SmokeShell","SmokeShell"};
		respawnmagazines[] = {"Laserbatteries","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShellBlue","SmokeShellGreen","SmokeShellRed","HandGrenade","SmokeShell","SmokeShell"};
		Items[] = {"FirstAidKit","FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit","FirstAidKit"};
		weapons[] = {"arifle_MSBS65_black_ico_pointer_f","ARDN_gg_hgun_pHeavy_snds","Throw","Put","Laserdesignator_03"};
		respawnWeapons[] = {"arifle_MSBS65_black_ico_pointer_f","ARDN_gg_hgun_pHeavy_snds","Throw","Put","Laserdesignator_03"};
		uniformClass = "ARDN_gg_u_black";
		hiddenSelections[] = {"Camo1","Camo2","insignia"};
		hiddenSelectionsTextures[] = {"\ARDN_gg\data\CSAT_clothing_gg.paa","\ARDN_csat\data\CSAT_tech_blk.paa"};
		hiddenSelectionsMaterials[] = {"\ARDN_gg\data\CSAT_clothing_gg.rvmat", "\A3\Characters_F\OPFOR\Data\tech.rvmat"};
		camouflage = 1;
		class EventHandlers{
			class ARDN {
				init = "if (local (_this select 0)) then {[(_this select 0), 'ARDN_ins_gekko'] call bis_fnc_setUnitInsignia;};";				
			};
		};
	};
	class ARDN_gg_marksman: B_soldier_M_F{
		scope = 2;
		scopeCurator = 2;
		side = 2;
		displayName = "Marksman";
		editorPreview = "";
		faction = "ARDN_gg_gekkoGhost";
		identityTypes[] = {"LanguageENG_F","Head_NATO"};
		linkedItems[] = {"V_PlateCarrier2_blk","ARDN_gg_helmetB","ARDN_gg_G_Balaclava_TI_G","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};
		respawnLinkedItems[] = {"V_PlateCarrier2_blk","ARDN_gg_helmetB","ARDN_gg_G_Balaclava_TI_G","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};
		magazines[] = {"Laserbatteries","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell"};
		respawnmagazines[] = {"Laserbatteries","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell"};
		Items[] = {"FirstAidKit","FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit","FirstAidKit"};
		weapons[] = {"arifle_MSBS65_Mark_black_SOS_LP_BI_F","ARDN_gg_hgun_pHeavy_snds","Throw","Put","Laserdesignator_03"};
		respawnWeapons[] = {"arifle_MSBS65_Mark_black_SOS_LP_BI_F","ARDN_gg_hgun_pHeavy_snds","Throw","Put","Laserdesignator_03"};
		uniformClass = "ARDN_gg_u_black";
		hiddenSelections[] = {"Camo1","Camo2","insignia"};
		hiddenSelectionsTextures[] = {"\ARDN_gg\data\CSAT_clothing_gg.paa","\ARDN_csat\data\CSAT_tech_blk.paa"};
		hiddenSelectionsMaterials[] = {"\ARDN_gg\data\CSAT_clothing_gg.rvmat", "\A3\Characters_F\OPFOR\Data\tech.rvmat"};
		camouflage = 1;
		class EventHandlers{
			class ARDN {
				init = "if (local (_this select 0)) then {[(_this select 0), 'ARDN_ins_gekko'] call bis_fnc_setUnitInsignia;};";				
			};
		};
	};
	class ARDN_gg_sniper: B_soldier_M_F{
		scope = 2;
		scopeCurator = 2;
		side = 2;
		displayName = "Sniper";
		editorPreview = "";
		faction = "ARDN_gg_gekkoGhost";
		identityTypes[] = {"LanguageENG_F","Head_NATO"};
		linkedItems[] = {"V_PlateCarrier2_blk","ARDN_gg_helmetB","ARDN_gg_G_Balaclava_TI_G","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};
		respawnLinkedItems[] = {"V_PlateCarrier2_blk","ARDN_gg_helmetB","ARDN_gg_G_Balaclava_TI_G","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};
		magazines[] = {"Laserbatteries","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell"};
		respawnmagazines[] = {"Laserbatteries","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell"};
		Items[] = {"FirstAidKit","FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit","FirstAidKit"};
		weapons[] = {"srifle_DMR_07_blk_dms_F","ARDN_gg_hgun_pHeavy_snds","Throw","Put","Laserdesignator_03"};
		respawnWeapons[] = {"srifle_DMR_07_blk_dms_F","ARDN_gg_hgun_pHeavy_snds","Throw","Put","Laserdesignator_03"};
		uniformClass = "ARDN_gg_u_black";
		hiddenSelections[] = {"Camo1","Camo2","insignia"};
		hiddenSelectionsTextures[] = {"\ARDN_gg\data\CSAT_clothing_gg.paa","\ARDN_csat\data\CSAT_tech_blk.paa"};
		hiddenSelectionsMaterials[] = {"\ARDN_gg\data\CSAT_clothing_gg.rvmat", "\A3\Characters_F\OPFOR\Data\tech.rvmat"};
		camouflage = 1;
		class EventHandlers{
			class ARDN {
				init = "if (local (_this select 0)) then {[(_this select 0), 'ARDN_ins_gekko'] call bis_fnc_setUnitInsignia;};";				
			};
		};
	};
	class ARDN_gg_rto: B_Soldier_F{
		scope = 2;
		scopeCurator = 2;
		side = 2;
		displayName = "RTO";
		editorPreview = "";
		faction = "ARDN_gg_gekkoGhost";
		identityTypes[] = {"LanguageENG_F","Head_NATO"};
		backpack = "ARDN_gg_B_rpack_blk";
		linkedItems[] = {"V_PlateCarrier1_blk","ARDN_gg_helmetb_ti","ARDN_gg_G_Balaclava_TI_G","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};
		respawnLinkedItems[] = {"V_PlateCarrier1_blk","ARDN_gg_helmetb_ti","ARDN_gg_G_Balaclava_TI_G","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};
		magazines[] = {"Laserbatteries","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShellBlue","SmokeShellGreen","SmokeShellRed","HandGrenade","SmokeShell","SmokeShell"};
		respawnmagazines[] = {"Laserbatteries","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShellBlue","SmokeShellGreen","SmokeShellRed","HandGrenade","SmokeShell","SmokeShell"};
		Items[] = {"FirstAidKit","FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit","FirstAidKit"};
		weapons[] = {"arifle_MSBS65_black_ico_pointer_f","ARDN_gg_hgun_pHeavy_snds","Throw","Put","Laserdesignator_03"};
		respawnWeapons[] = {"arifle_MSBS65_black_ico_pointer_f","ARDN_gg_hgun_pHeavy_snds","Throw","Put","Laserdesignator_03"};
		uniformClass = "ARDN_gg_u_black";
		hiddenSelections[] = {"Camo1","Camo2","insignia"};
		hiddenSelectionsTextures[] = {"\ARDN_gg\data\CSAT_clothing_gg.paa","\ARDN_csat\data\CSAT_tech_blk.paa"};
		hiddenSelectionsMaterials[] = {"\ARDN_gg\data\CSAT_clothing_gg.rvmat", "\A3\Characters_F\OPFOR\Data\tech.rvmat"};
		icon = "iconManLeader";
		role = "RadioOperator";
		camouflage = 1;
		class EventHandlers{
			class ARDN {
				init = "if (local (_this select 0)) then {[(_this select 0), 'ARDN_ins_gekko'] call bis_fnc_setUnitInsignia;};";				
			};
		};
	};
	class ARDN_gg_pilot: B_Pilot_F{
		scope = 2;
		scopeCurator = 2;
		side = 2;
		displayName = "Pilot";
		faction = "ARDN_gg_gekkoGhost";
		backpack = "B_Parachute";
		linkedItems[] = {"V_PlateCarrier1_blk","ARDN_gg_piloHelmetFighter","ARDN_gg_G_Balaclava_TI_G","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};
		respawnLinkedItems[] = {"V_PlateCarrier1_blk","ARDN_gg_piloHelmetFighter","ARDN_gg_G_Balaclava_TI_G","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};
		magazines[] = {"Laserbatteries","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShellBlue"};
		respawnmagazines[] = {"Laserbatteries","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShellBlue"};
		Items[] = {"FirstAidKit","FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit","FirstAidKit"};
		weapons[] = {"SMG_03C_black","ARDN_gg_hgun_pHeavy_snds","Throw","Put","Laserdesignator_03"};
		respawnWeapons[] = {"SMG_03C_black","ARDN_gg_hgun_pHeavy_snds","Throw","Put","Laserdesignator_03"};
		uniformClass = "ARDN_gg_u_black";
		hiddenSelections[] = {"Camo1","Camo2","insignia"};
		hiddenSelectionsTextures[] = {"\ARDN_gg\data\CSAT_clothing_gg.paa","\ARDN_csat\data\CSAT_tech_blk.paa"};
		hiddenSelectionsMaterials[] = {"\ARDN_gg\data\CSAT_clothing_gg.rvmat", "\A3\Characters_F\OPFOR\Data\tech.rvmat"};
		camouflage = 1;
		class EventHandlers{
			class ARDN {
				init = "if (local (_this select 0)) then {[(_this select 0), 'ARDN_ins_gekko'] call bis_fnc_setUnitInsignia;};";				
			};
		};
	};
	class ARDN_gg_heli: B_Helipilot_F{
		scope = 2;
		scopeCurator = 2;
		side = 2;
		displayName = "Helicopter Pilot";
		faction = "ARDN_gg_gekkoGhost";
		linkedItems[] = {"V_PlateCarrier1_blk","H_PilotHelmetHeli_B","ARDN_gg_G_Balaclava_TI_G","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};
		respawnLinkedItems[] = {"V_PlateCarrier1_blk","H_PilotHelmetHeli_B","ARDN_gg_G_Balaclava_TI_G","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};
		magazines[] = {"Laserbatteries","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShellBlue"};
		respawnmagazines[] = {"Laserbatteries","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShellBlue"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit","FirstAidKit"};
		weapons[] = {"SMG_03C_black","ARDN_gg_hgun_pHeavy_snds","Throw","Put","Laserdesignator_03"};
		respawnWeapons[] = {"SMG_03C_black","ARDN_gg_hgun_pHeavy_snds","Throw","Put","Laserdesignator_03"};
		uniformClass = "ARDN_gg_u_black";
		hiddenSelections[] = {"Camo1","Camo2","insignia"};
		hiddenSelectionsTextures[] = {"\ARDN_gg\data\CSAT_clothing_gg.paa","\ARDN_csat\data\CSAT_tech_blk.paa"};
		hiddenSelectionsMaterials[] = {"\ARDN_gg\data\CSAT_clothing_gg.rvmat", "\A3\Characters_F\OPFOR\Data\tech.rvmat"};
		camouflage = 1;
		class EventHandlers{
			class ARDN {
				init = "if (local (_this select 0)) then {[(_this select 0), 'ARDN_ins_gekko'] call bis_fnc_setUnitInsignia;};";				
			};
		};
	};
	class ARDN_gg_medic: B_medic_F{
		scope = 2;
		scopeCurator = 2;
		side = 2;
		displayName = "Medic";
		editorPreview = "";
		faction = "ARDN_gg_gekkoGhost";
		identityTypes[] = {"LanguageENG_F","Head_NATO"};
		backpack = "ARDN_gg_B_Kitbag_blk_medic";
		linkedItems[] = {"V_PlateCarrier1_blk","ARDN_gg_helmetb_ti","ARDN_gg_G_Balaclava_TI_G","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};
		respawnLinkedItems[] = {"V_PlateCarrier1_blk","ARDN_gg_helmetb_ti","ARDN_gg_G_Balaclava_TI_G","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};
		magazines[] = {"Laserbatteries","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShellBlue","SmokeShellGreen","SmokeShellRed","HandGrenade","SmokeShell","SmokeShell"};
		respawnmagazines[] = {"Laserbatteries","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShellBlue","SmokeShellGreen","SmokeShellPurple","HandGrenade","SmokeShell","SmokeShell"};
		Items[] = {"FirstAidKit","FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit","FirstAidKit"};
		weapons[] = {"arifle_MSBS65_black_ico_pointer_f","ARDN_gg_hgun_pHeavy_snds","Throw","Put","Laserdesignator_03"};
		respawnWeapons[] = {"arifle_MSBS65_black_ico_pointer_f","ARDN_gg_hgun_pHeavy_snds","Throw","Put","Laserdesignator_03"};
		uniformClass = "ARDN_gg_u_black";
		hiddenSelections[] = {"Camo1","Camo2","insignia"};
		hiddenSelectionsTextures[] = {"\ARDN_gg\data\CSAT_clothing_gg.paa","\ARDN_csat\data\CSAT_tech_blk.paa"};
		hiddenSelectionsMaterials[] = {"\ARDN_gg\data\CSAT_clothing_gg.rvmat", "\A3\Characters_F\OPFOR\Data\tech.rvmat"};
		camouflage = 1;
		class EventHandlers{
			class ARDN {
				init = "if (local (_this select 0)) then {[(_this select 0), 'ARDN_ins_gekko'] call bis_fnc_setUnitInsignia;};";				
			};
		};
	};
	class ARDN_gg_engi: B_engineer_F{
		scope = 2;
		scopeCurator = 2;
		side = 2;
		displayName = "Engineer";
		editorPreview = "";
		faction = "ARDN_gg_gekkoGhost";
		identityTypes[] = {"LanguageENG_F","Head_NATO"};
		backpack = "ARDN_gg_B_Kitbag_blk_engi";
		linkedItems[] = {"V_PlateCarrier1_blk","ARDN_gg_helmetb_ti","ARDN_gg_G_Balaclava_TI_G","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};
		respawnLinkedItems[] = {"V_PlateCarrier1_blk","ARDN_gg_helmetb_ti","ARDN_gg_G_Balaclava_TI_G","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};
		magazines[] = {"Laserbatteries","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShell"};
		respawnmagazines[] = {"Laserbatteries","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShell"};
		Items[] = {"FirstAidKit","FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit","FirstAidKit"};
		weapons[] = {"arifle_MSBS65_black_ico_pointer_f","ARDN_gg_hgun_pHeavy_snds","Throw","Put","Laserdesignator_03"};
		respawnWeapons[] = {"arifle_MSBS65_black_ico_pointer_f","ARDN_gg_hgun_pHeavy_snds","Throw","Put","Laserdesignator_03"};
		uniformClass = "ARDN_gg_u_black";
		hiddenSelections[] = {"Camo1","Camo2","insignia"};
		hiddenSelectionsTextures[] = {"\ARDN_gg\data\CSAT_clothing_gg.paa","\ARDN_csat\data\CSAT_tech_blk.paa"};
		hiddenSelectionsMaterials[] = {"\ARDN_gg\data\CSAT_clothing_gg.rvmat", "\A3\Characters_F\OPFOR\Data\tech.rvmat"};
		camouflage = 1;
		class EventHandlers{
			class ARDN {
				init = "if (local (_this select 0)) then {[(_this select 0), 'ARDN_ins_gekko'] call bis_fnc_setUnitInsignia;};";				
			};
		};
	};
	class ARDN_gg_gunner: B_HeavyGunner_F{
		scope = 2;
		scopeCurator = 2;
		side = 2;
		displayName = "Heavy Gunner";
		editorPreview = "";
		faction = "ARDN_gg_gekkoGhost";
		identityTypes[] = {"LanguageENG_F","Head_NATO"};
		linkedItems[] = {"V_PlateCarrier2_blk","ARDN_gg_helmetb_ti","ARDN_gg_G_Balaclava_TI_G","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};
		respawnLinkedItems[] = {"V_PlateCarrier2_blk","ARDN_gg_helmetb_ti","ARDN_gg_G_Balaclava_TI_G","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};
		magazines[] = {"Laserbatteries","200Rnd_65x39_cased_Box_Tracer","200Rnd_65x39_cased_Box_Tracer","200Rnd_65x39_cased_Box_Tracer","200Rnd_65x39_cased_Box_Tracer","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShell"};
		respawnmagazines[] = {"Laserbatteries","200Rnd_65x39_cased_Box_Tracer","200Rnd_65x39_cased_Box_Tracer","200Rnd_65x39_cased_Box_Tracer","200Rnd_65x39_cased_Box_Tracer","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShell"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit","FirstAidKit"};
		weapons[] = {"LMG_Mk200_black_F","ARDN_gg_hgun_pHeavy_snds","Throw","Put","Laserdesignator_03"};
		respawnWeapons[] = {"LMG_Mk200_black_F","ARDN_gg_hgun_pHeavy_snds","Throw","Put","Laserdesignator_03"};
		uniformClass = "ARDN_gg_u_black";
		hiddenSelections[] = {"Camo1","Camo2","insignia"};
		hiddenSelectionsTextures[] = {"\ARDN_gg\data\CSAT_clothing_gg.paa","\ARDN_csat\data\CSAT_tech_blk.paa"};
		hiddenSelectionsMaterials[] = {"\ARDN_gg\data\CSAT_clothing_gg.rvmat", "\A3\Characters_F\OPFOR\Data\tech.rvmat"};
		camouflage = 1;
		class EventHandlers{
			class ARDN {
				init = "if (local (_this select 0)) then {[(_this select 0), 'ARDN_ins_gekko'] call bis_fnc_setUnitInsignia;};";				
			};
		};
	};
	class ARDN_gg_rifleman_lat: B_soldier_LAT_F{
		scope = 2;
		scopeCurator = 2;
		side = 2;
		displayName = "Rifleman (Light AT)";
		editorPreview = "";
		faction = "ARDN_gg_gekkoGhost";
		identityTypes[] = {"LanguageENG_F","Head_NATO"};
		backpack = "ARDN_gg_B_Kitbag_blk_lat";
		linkedItems[] = {"V_PlateCarrier2_blk","ARDN_gg_helmetb_ti","ARDN_gg_G_Balaclava_TI_G","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};
		respawnLinkedItems[] = {"V_PlateCarrier2_blk","ARDN_gg_helmetb_ti","ARDN_gg_G_Balaclava_TI_G","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};
		magazines[] = {"Laserbatteries","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShellBlue","HandGrenade","SmokeShell","SmokeShell"};
		respawnmagazines[] = {"Laserbatteries","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShellBlue","HandGrenade","SmokeShell","SmokeShell"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit","FirstAidKit"};
		weapons[] = {"arifle_MSBS65_black_ico_pointer_f","launch_MRAWS_green_F","ARDN_gg_hgun_pHeavy_snds","Throw","Put","Laserdesignator_03"};
		respawnWeapons[] = {"arifle_MSBS65_black_ico_pointer_f","launch_MRAWS_green_F","ARDN_gg_hgun_pHeavy_snds","Throw","Put","Laserdesignator_03"};
		uniformClass = "ARDN_gg_u_black";
		hiddenSelections[] = {"Camo1","Camo2","insignia"};
		hiddenSelectionsTextures[] = {"\ARDN_gg\data\CSAT_clothing_gg.paa","\ARDN_csat\data\CSAT_tech_blk.paa"};
		hiddenSelectionsMaterials[] = {"\ARDN_gg\data\CSAT_clothing_gg.rvmat", "\A3\Characters_F\OPFOR\Data\tech.rvmat"};
		camouflage = 1;
		class EventHandlers{
			class ARDN {
				init = "if (local (_this select 0)) then {[(_this select 0), 'ARDN_ins_gekko'] call bis_fnc_setUnitInsignia;};";				
			};
		};
	};
	class ARDN_gg_rifleman_at: B_soldier_LAT_F{
		scope = 2;
		scopeCurator = 2;
		side = 2;
		displayName = "Rifleman (AT)";
		editorPreview = "";
		faction = "ARDN_gg_gekkoGhost";
		identityTypes[] = {"LanguageENG_F","Head_NATO"};
		backpack = "ARDN_gg_B_Kitbag_blk_at";
		linkedItems[] = {"V_PlateCarrier2_blk","ARDN_gg_helmetb_ti","ARDN_gg_G_Balaclava_TI_G","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};
		respawnLinkedItems[] = {"V_PlateCarrier2_blk","ARDN_gg_helmetb_ti","ARDN_gg_G_Balaclava_TI_G","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};
		magazines[] = {"Laserbatteries","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShellBlue","HandGrenade","SmokeShell","SmokeShell"};
		respawnmagazines[] = {"Laserbatteries","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShellBlue","HandGrenade","SmokeShell","SmokeShell"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit","FirstAidKit"};
		weapons[] = {"arifle_MSBS65_black_ico_pointer_f","launch_I_Titan_short_F","ARDN_gg_hgun_pHeavy_snds","Throw","Put","Laserdesignator_03"};
		respawnWeapons[] = {"arifle_MSBS65_black_ico_pointer_f","launch_I_Titan_short_F","ARDN_gg_hgun_pHeavy_snds","Throw","Put","Laserdesignator_03"};
		uniformClass = "ARDN_gg_u_black";
		hiddenSelections[] = {"Camo1","Camo2","insignia"};
		hiddenSelectionsTextures[] = {"\ARDN_gg\data\CSAT_clothing_gg.paa","\ARDN_csat\data\CSAT_tech_blk.paa"};
		hiddenSelectionsMaterials[] = {"\ARDN_gg\data\CSAT_clothing_gg.rvmat", "\A3\Characters_F\OPFOR\Data\tech.rvmat"};
		camouflage = 1;
		class EventHandlers{
			class ARDN {
				init = "if (local (_this select 0)) then {[(_this select 0), 'ARDN_ins_gekko'] call bis_fnc_setUnitInsignia;};";				
			};
		};
	};
	
	class ARDN_gg_crew: B_Soldier_F{
		scope = 2;
		scopeCurator = 2;
		side = 2;
		displayName = "Crew";
		faction = "ARDN_gg_gekkoGhost";
		linkedItems[] = {"V_PlateCarrier1_blk","ARDN_gg_helmetB","ARDN_gg_G_Balaclava_TI_G","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};
		respawnLinkedItems[] = {"V_PlateCarrier1_blk","ARDN_gg_helmetB","ARDN_gg_G_Balaclava_TI_G","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};
		magazines[] = {"Laserbatteries","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShellBlue"};
		respawnmagazines[] = {"Laserbatteries","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShellBlue"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit","FirstAidKit"};
		weapons[] = {"SMG_03C_black","ARDN_gg_hgun_pHeavy_snds","Throw","Put","Laserdesignator_03"};
		respawnWeapons[] = {"SMG_03C_black","ARDN_gg_hgun_pHeavy_snds","Throw","Put","Laserdesignator_03"};
		uniformClass = "ARDN_gg_u_black";
		hiddenSelections[] = {"Camo1","Camo2","insignia"};
		hiddenSelectionsTextures[] = {"\ARDN_gg\data\CSAT_clothing_gg.paa","\ARDN_csat\data\CSAT_tech_blk.paa"};
		hiddenSelectionsMaterials[] = {"\ARDN_gg\data\CSAT_clothing_gg.rvmat", "\A3\Characters_F\OPFOR\Data\tech.rvmat"};
		camouflage = 1;
		class EventHandlers{
			class ARDN {
				init = "if (local (_this select 0)) then {[(_this select 0), 'ARDN_ins_gekko'] call bis_fnc_setUnitInsignia;};";				
			};
		};
	};
	
	class ARDN_gg_grenadier_snds: ARDN_gg_grenadier{
		editorSubcategory = "ARDN_gg_subcat_ghost";
		uniformClass = "ARDN_gg_u_forest_n";
		weapons[] = {"arifle_MSBS65_GL_black_ico_pointer_snds_f","ARDN_gg_hgun_pHeavy_snds","Throw","Put","Laserdesignator_03"};
		respawnWeapons[] = {"arifle_MSBS65_GL_black_ico_pointer_snds_f","ARDN_gg_hgun_pHeavy_snds","Throw","Put","Laserdesignator_03"};
	};
	class ARDN_gg_rifleman_snds: ARDN_gg_rifleman{
		editorSubcategory = "ARDN_gg_subcat_ghost";
		uniformClass = "ARDN_gg_u_forest_n";
		weapons[] = {"arifle_MSBS65_black_ico_pointer_snds_f","ARDN_gg_hgun_pHeavy_snds","Throw","Put","Laserdesignator_03"};
		respawnWeapons[] = {"arifle_MSBS65_black_ico_pointer_snds_f","ARDN_gg_hgun_pHeavy_snds","Throw","Put","Laserdesignator_03"};
	};
	class ARDN_gg_marksman_snds: ARDN_gg_marksman{
		editorSubcategory = "ARDN_gg_subcat_ghost";
		uniformClass = "ARDN_gg_u_forest_n";
		weapons[] = {"arifle_MSBS65_Mark_black_SOS_LP_BI_snds_F","ARDN_gg_hgun_pHeavy_snds","Throw","Put","Laserdesignator_03"};
		respawnWeapons[] = {"arifle_MSBS65_Mark_black_SOS_LP_BI_snds_F","ARDN_gg_hgun_pHeavy_snds","Throw","Put","Laserdesignator_03"};
	};
	class ARDN_gg_rto_snds: ARDN_gg_rto{
		editorSubcategory = "ARDN_gg_subcat_ghost";
		uniformClass = "ARDN_gg_u_forest_n";
		weapons[] = {"arifle_MSBS65_black_ico_pointer_snds_f","ARDN_gg_hgun_pHeavy_snds","Throw","Put","Laserdesignator_03"};
		respawnWeapons[] = {"arifle_MSBS65_black_ico_pointer_snds_f","ARDN_gg_hgun_pHeavy_snds","Throw","Put","Laserdesignator_03"};
	};
	class ARDN_gg_medic_snds: ARDN_gg_medic{
		editorSubcategory = "ARDN_gg_subcat_ghost";
		uniformClass = "ARDN_gg_u_forest_n";
		weapons[] = {"arifle_MSBS65_black_ico_pointer_snds_f","ARDN_gg_hgun_pHeavy_snds","Throw","Put","Laserdesignator_03"};
		respawnWeapons[] = {"arifle_MSBS65_black_ico_pointer_snds_f","ARDN_gg_hgun_pHeavy_snds","Throw","Put","Laserdesignator_03"};
	};
	class ARDN_gg_engi_snds: ARDN_gg_engi{
		editorSubcategory = "ARDN_gg_subcat_ghost";
		uniformClass = "ARDN_gg_u_forest_n";
		weapons[] = {"arifle_MSBS65_black_ico_pointer_snds_f","ARDN_gg_hgun_pHeavy_snds","Throw","Put","Laserdesignator_03"};
		respawnWeapons[] = {"arifle_MSBS65_black_ico_pointer_snds_f","ARDN_gg_hgun_pHeavy_snds","Throw","Put","Laserdesignator_03"};
	};
	class ARDN_gg_gunner_snds: ARDN_gg_gunner{
		editorSubcategory = "ARDN_gg_subcat_ghost";
		uniformClass = "ARDN_gg_u_forest_n";
		weapons[] = {"LMG_Mk200_black_RCO_BI_snds_F","ARDN_gg_hgun_pHeavy_snds","Throw","Put","Laserdesignator_03"};
		respawnWeapons[] = {"LMG_Mk200_black_RCO_BI_snds_F","ARDN_gg_hgun_pHeavy_snds","Throw","Put","Laserdesignator_03"};
	};
	class ARDN_gg_rifleman_lat_snds: ARDN_gg_rifleman_lat{
		editorSubcategory = "ARDN_gg_subcat_ghost";
		uniformClass = "ARDN_gg_u_forest_n";
		weapons[] = {"arifle_MSBS65_black_ico_pointer_snds_f","launch_MRAWS_green_F","ARDN_gg_hgun_pHeavy_snds","Throw","Put","Laserdesignator_03"};
		respawnWeapons[] = {"arifle_MSBS65_black_ico_pointer_snds_f","launch_MRAWS_green_F","ARDN_gg_hgun_pHeavy_snds","Throw","Put","Laserdesignator_03"};
	};
	class ARDN_gg_sniper_snds: ARDN_gg_sniper{
		editorSubcategory = "ARDN_gg_subcat_ghost";
		uniformClass = "ARDN_gg_u_forest_n";
		linkedItems[] = {"V_PlateCarrier2_blk","ARDN_gg_helmetB","ARDN_gg_G_Balaclava_TI_G","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};
		respawnLinkedItems[] = {"V_PlateCarrier2_blk","ARDN_gg_helmetB","ARDN_gg_G_Balaclava_TI_G","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};
	};
	
	class ARDN_gg_ward: ARDN_gg_medic_snds{
		displayName = "Ghost (Ward)";
		editorSubcategory = "ARDN_gg_subcat_unique";
		uniformClass = "ARDN_gg_u_wolf";
		linkedItems[] = {"V_PlateCarrier1_blk","ARDN_gg_helmetb_ti","ARDN_gg_G_Balaclava_TI_G","ItemCompass","ItemWatch","ItemRadio","ARDN_main_N_kama_2"};
		respawnLinkedItems[] = {"V_PlateCarrier1_blk","ARDN_gg_helmetb_ti","ARDN_gg_G_Balaclava_TI_G","ItemCompass","ItemWatch","ItemRadio","ARDN_main_N_kama_2"};
		hiddenSelections[] = {"Camo1","Camo2","insignia"};
        hiddenSelectionsTextures[] = {"\ARDN_gg\data\unique\CSAT_clothing_wolf.paa","\ARDN_csat\data\CSAT_tech_blk.paa"};
		hiddenSelectionsMaterials[] = {"\ARDN_gg\data\CSAT_clothing_gg.rvmat", "\A3\Characters_F\OPFOR\Data\tech.rvmat"};
		icon = "iconManOfficer";
		class EventHandlers{
			init = "if (local (_this select 0)) then {[(_this select 0), 'ARDN_ins_wolf'] call bis_fnc_setUnitInsignia;};";
		};
	};
	class ARDN_gg_grenadier_warden: ARDN_gg_grenadier_snds{
		editorSubcategory = "ARDN_gg_subcat_warden";
		linkedItems[] = {"V_PlateCarrier2_blk","ARDN_gg_helmetb_ti","ARDN_gg_G_Balaclava_TI_G","ItemCompass","ItemWatch","ItemRadio","ARDN_main_N_kama_1"};
		respawnLinkedItems[] = {"V_PlateCarrier2_blk","ARDN_gg_helmetb_ti","ARDN_gg_G_Balaclava_TI_G","ItemCompass","ItemWatch","ItemRadio","ARDN_main_N_kama_1"};
		uniformClass = "ARDN_gg_u_black";
	};
	class ARDN_gg_rifleman_warden: ARDN_gg_rifleman_snds{
		editorSubcategory = "ARDN_gg_subcat_warden";
		linkedItems[] = {"V_PlateCarrier2_blk","ARDN_gg_helmetb_ti","ARDN_gg_G_Balaclava_TI_G","ItemCompass","ItemWatch","ItemRadio","ARDN_main_N_kama"};
		respawnLinkedItems[] = {"V_PlateCarrier2_blk","ARDN_gg_helmetb_ti","ARDN_gg_G_Balaclava_TI_G","ItemCompass","ItemWatch","ItemRadio","ARDN_main_N_kama"};
		uniformClass = "ARDN_gg_u_black";
	};
	class ARDN_gg_marksman_warden: ARDN_gg_marksman_snds{
		editorSubcategory = "ARDN_gg_subcat_warden";
		linkedItems[] = {"V_PlateCarrier2_blk","ARDN_gg_helmetB","ARDN_gg_G_Balaclava_TI_G","ItemCompass","ItemWatch","ItemRadio","ARDN_main_N_kama"};
		repsawnLinkedItems[] = {"V_PlateCarrier2_blk","ARDN_gg_helmetB","ARDN_gg_G_Balaclava_TI_G","ItemCompass","ItemWatch","ItemRadio","ARDN_main_N_kama"};
		uniformClass = "ARDN_gg_u_black";
	};
	class ARDN_gg_rto_warden: ARDN_gg_rto_snds{
		editorSubcategory = "ARDN_gg_subcat_warden";
		linkedItems[] = {"V_PlateCarrier1_blk","ARDN_gg_helmetb_ti","ARDN_gg_G_Balaclava_TI_G","ItemCompass","ItemWatch","ItemRadio","ARDN_main_N_kama"};
		respawnLinkedItems[] = {"V_PlateCarrier1_blk","ARDN_gg_helmetb_ti","ARDN_gg_G_Balaclava_TI_G","ItemCompass","ItemWatch","ItemRadio","ARDN_main_N_kama"};
		uniformClass = "ARDN_gg_u_black";
	};
	class ARDN_gg_medic_warden: ARDN_gg_medic_snds{
		editorSubcategory = "ARDN_gg_subcat_warden";
		linkedItems[] = {"V_PlateCarrier1_blk","ARDN_gg_helmetb_ti","ARDN_gg_G_Balaclava_TI_G","ItemCompass","ItemWatch","ItemRadio","ARDN_main_N_kama"};
		respawnLinkedItems[] = {"V_PlateCarrier1_blk","ARDN_gg_helmetb_ti","ARDN_gg_G_Balaclava_TI_G","ItemCompass","ItemWatch","ItemRadio","ARDN_main_N_kama"};
		uniformClass = "ARDN_gg_u_black";
	};
	class ARDN_gg_engi_warden: ARDN_gg_engi_snds{
		editorSubcategory = "ARDN_gg_subcat_warden";
		linkedItems[] = {"V_PlateCarrier1_blk","ARDN_gg_helmetb_ti","ARDN_gg_G_Balaclava_TI_G","ItemCompass","ItemWatch","ItemRadio","ARDN_main_N_kama"};
		RespawnLinkedItems[] = {"V_PlateCarrier1_blk","ARDN_gg_helmetb_ti","ARDN_gg_G_Balaclava_TI_G","ItemCompass","ItemWatch","ItemRadio","ARDN_main_N_kama"};
		uniformClass = "ARDN_gg_u_black";
	};
	class ARDN_gg_gunner_warden: ARDN_gg_gunner_snds{
		editorSubcategory = "ARDN_gg_subcat_warden";
		linkedItems[] = {"V_PlateCarrier2_blk","ARDN_gg_helmetb_ti","ARDN_gg_G_Balaclava_TI_G","ItemCompass","ItemWatch","ItemRadio","ARDN_main_N_kama"};
		respawnLinkedItems[] = {"V_PlateCarrier2_blk","ARDN_gg_helmetb_ti","ARDN_gg_G_Balaclava_TI_G","ItemCompass","ItemWatch","ItemRadio","ARDN_main_N_kama"};
		uniformClass = "ARDN_gg_u_black";
	};
	class ARDN_gg_rifleman_lat_warden: ARDN_gg_rifleman_lat_snds{
		editorSubcategory = "ARDN_gg_subcat_warden";
		linkedItems[] = {"V_PlateCarrier2_blk","ARDN_gg_helmetb_ti","ARDN_gg_G_Balaclava_TI_G","ItemCompass","ItemWatch","ItemRadio","ARDN_main_N_kama"};
		respawnLinkedItems[] = {"V_PlateCarrier2_blk","ARDN_gg_helmetb_ti","ARDN_gg_G_Balaclava_TI_G","ItemCompass","ItemWatch","ItemRadio","ARDN_main_N_kama"};
		uniformClass = "ARDN_gg_u_black";
	};
	class ARDN_gg_sniper_warden: ARDN_gg_sniper_snds{
		editorSubcategory = "ARDN_gg_subcat_warden";
		linkedItems[] = {"V_PlateCarrier2_blk","ARDN_gg_helmetB","ARDN_gg_G_Balaclava_TI_G","ItemCompass","ItemWatch","ItemRadio","ARDN_main_N_kama"};
		repsawnLinkedItems[] = {"V_PlateCarrier2_blk","ARDN_gg_helmetB","ARDN_gg_G_Balaclava_TI_G","ItemCompass","ItemWatch","ItemRadio","ARDN_main_N_kama"};
		uniformClass = "ARDN_gg_u_black";
	};
    class ARDN_gg_sl_warden: ARDN_gg_rto_warden {
        displayName = "Squad Lead";
        backpack = "ARDN_gg_B_jpack_blk";
        linkedItems[] = {"V_PlateCarrier2_blk","ARDN_gg_helmetb_ti","ARDN_gg_G_Balaclava_TI_G","ItemCompass","ItemWatch","ItemRadio","ARDN_main_N_kama_2"};
		respawnLinkedItems[] = {"V_PlateCarrier2_blk","ARDN_gg_helmetb_ti","ARDN_gg_G_Balaclava_TI_G","ItemCompass","ItemWatch","ItemRadio","ARDN_main_N_kama_2"};
		magazines[] = {"Laserbatteries","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","SmokeShell","SmokeShell"};
		respawnmagazines[] = {"Laserbatteries","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","SmokeShell","SmokeShell"};
		Items[] = {"FirstAidKit","FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit","FirstAidKit"};
		weapons[] = {"arifle_MSBS65_GL_black_ico_pointer_f","ARDN_gg_hgun_pHeavy_snds","Throw","Put","Laserdesignator_03"};
		respawnWeapons[] = {"arifle_MSBS65_GL_black_ico_pointer_f","ARDN_gg_hgun_pHeavy_snds","Throw","Put","Laserdesignator_03"};
    };
    class ARDN_gg_jtac_warden: ARDN_gg_rto_warden {
        displayName = "JTAC";
        backpack = "ARDN_gg_B_fpack_blk";
    };
	class ARDN_gg_opM_warden: ARDN_gg_rto_warden {
        displayName = "Operations Master";
		editorSubcategory = "ARDN_gg_subcat_unique";
        backpack = "ARDN_gg_B_opMpack_blk";
		linkedItems[] = {"V_PlateCarrier1_blk","ARDN_gg_helmetb_ti","ARDN_gg_G_Balaclava_TI_G","ItemCompass","ItemWatch","ItemRadio","ARDN_main_N_kama_3"};
		respawnLinkedItems[] = {"V_PlateCarrier1_blk","ARDN_gg_helmetb_ti","ARDN_gg_G_Balaclava_TI_G","ItemCompass","ItemWatch","ItemRadio","ARDN_main_N_kama_3"};
		icon = "iconManOfficer";
    };
	
	class ARDN_gg_grenadier_snow: ARDN_gg_grenadier_snds{
		editorSubcategory = "ARDN_gg_subcat_winter";
		uniformClass = "ARDN_gg_u_winter";
		hiddenSelectionsTextures[] = {"\ARDN_gg\data\CSAT_clothing_winter.paa","\ARDN_csat\data\CSAT_tech_blk.paa"};
		hiddenSelectionsMaterials[] = {"\ARDN_gg\data\CSAT_clothing_gg.rvmat", "\A3\Characters_F\OPFOR\Data\tech.rvmat"};
	};
	class ARDN_gg_rifleman_snow: ARDN_gg_rifleman_snds{
		editorSubcategory = "ARDN_gg_subcat_winter";
		uniformClass = "ARDN_gg_u_winter";
		hiddenSelectionsTextures[] = {"\ARDN_gg\data\CSAT_clothing_winter.paa","\ARDN_csat\data\CSAT_tech_blk.paa"};
		hiddenSelectionsMaterials[] = {"\ARDN_gg\data\CSAT_clothing_gg.rvmat", "\A3\Characters_F\OPFOR\Data\tech.rvmat"};
	};
	class ARDN_gg_marksman_snow: ARDN_gg_marksman_snds{
		editorSubcategory = "ARDN_gg_subcat_winter";
		uniformClass = "ARDN_gg_u_winter";
		hiddenSelectionsTextures[] = {"\ARDN_gg\data\CSAT_clothing_winter.paa","\ARDN_csat\data\CSAT_tech_blk.paa"};
		hiddenSelectionsMaterials[] = {"\ARDN_gg\data\CSAT_clothing_gg.rvmat", "\A3\Characters_F\OPFOR\Data\tech.rvmat"};
	};
	class ARDN_gg_rto_snow: ARDN_gg_rto_snds{
		backpack = "ARDN_gg_B_rpack_white";
		editorSubcategory = "ARDN_gg_subcat_winter";
		uniformClass = "ARDN_gg_u_winter";
		hiddenSelectionsTextures[] = {"\ARDN_gg\data\CSAT_clothing_winter.paa","\ARDN_csat\data\CSAT_tech_blk.paa"};
		hiddenSelectionsMaterials[] = {"\ARDN_gg\data\CSAT_clothing_gg.rvmat", "\A3\Characters_F\OPFOR\Data\tech.rvmat"};
	};
	class ARDN_gg_medic_snow: ARDN_gg_medic_snds{
		backpack = "ARDN_gg_B_Kitbag_wht_medic";
		editorSubcategory = "ARDN_gg_subcat_winter";
		uniformClass = "ARDN_gg_u_winter";
		hiddenSelectionsTextures[] = {"\ARDN_gg\data\CSAT_clothing_winter.paa","\ARDN_csat\data\CSAT_tech_blk.paa"};
		hiddenSelectionsMaterials[] = {"\ARDN_gg\data\CSAT_clothing_gg.rvmat", "\A3\Characters_F\OPFOR\Data\tech.rvmat"};
	};
	class ARDN_gg_engi_snow: ARDN_gg_engi_snds{
		backpack = "ARDN_gg_B_Kitbag_wht_engi";
		editorSubcategory = "ARDN_gg_subcat_winter";
		uniformClass = "ARDN_gg_u_winter";
		hiddenSelectionsTextures[] = {"\ARDN_gg\data\CSAT_clothing_winter.paa","\ARDN_csat\data\CSAT_tech_blk.paa"};
		hiddenSelectionsMaterials[] = {"\ARDN_gg\data\CSAT_clothing_gg.rvmat", "\A3\Characters_F\OPFOR\Data\tech.rvmat"};
	};
	class ARDN_gg_gunner_snow: ARDN_gg_gunner_snds{
		editorSubcategory = "ARDN_gg_subcat_winter";
		uniformClass = "ARDN_gg_u_winter";
		hiddenSelectionsTextures[] = {"\ARDN_gg\data\CSAT_clothing_winter.paa","\ARDN_csat\data\CSAT_tech_blk.paa"};
		hiddenSelectionsMaterials[] = {"\ARDN_gg\data\CSAT_clothing_gg.rvmat", "\A3\Characters_F\OPFOR\Data\tech.rvmat"};
	};
	class ARDN_gg_rifleman_lat_snow: ARDN_gg_rifleman_lat_snds{
		backpack = "ARDN_gg_B_Kitbag_wht_lat";
		editorSubcategory = "ARDN_gg_subcat_winter";
		uniformClass = "ARDN_gg_u_winter";
		hiddenSelectionsTextures[] = {"\ARDN_gg\data\CSAT_clothing_winter.paa","\ARDN_csat\data\CSAT_tech_blk.paa"};
		hiddenSelectionsMaterials[] = {"\ARDN_gg\data\CSAT_clothing_gg.rvmat", "\A3\Characters_F\OPFOR\Data\tech.rvmat"};
	};
	class ARDN_gg_sniper_snow: ARDN_gg_sniper_snds{
		editorSubcategory = "ARDN_gg_subcat_winter";
		uniformClass = "ARDN_gg_u_winter";
		hiddenSelectionsTextures[] = {"\ARDN_gg\data\CSAT_clothing_winter.paa","\ARDN_csat\data\CSAT_tech_blk.paa"};
		hiddenSelectionsMaterials[] = {"\ARDN_gg\data\CSAT_clothing_gg.rvmat", "\A3\Characters_F\OPFOR\Data\tech.rvmat"};
	};
	class ARDN_gg_heli_snow: ARDN_gg_heli{
		editorSubcategory = "ARDN_gg_subcat_winter";
		uniformClass = "ARDN_gg_u_winter";
		hiddenSelectionsTextures[] = {"\ARDN_gg\data\CSAT_clothing_winter.paa","\ARDN_csat\data\CSAT_tech_blk.paa"};
		hiddenSelectionsMaterials[] = {"\ARDN_gg\data\CSAT_clothing_gg.rvmat", "\A3\Characters_F\OPFOR\Data\tech.rvmat"};
		
	};
	
	class B_Kitbag_rgr;
	class ARDN_gg_B_Kitbag_blk: B_Kitbag_rgr{
		displayName = "Kitbag (Black)";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\ARDN_gg\data\backpack_fast_blk.paa"};
	};
	class ARDN_gg_B_Kitbag_wht: B_Kitbag_rgr{
		displayName = "Kitbag (White)";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\ARDN_gg\data\backpack_fast_wht.paa"};
	};
	class ARDN_gg_B_Kitbag_blk_medic: ARDN_gg_B_Kitbag_blk{
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		class TransportItems{
			class _xx_FirstAidKit{
				count = 10;
				name = "FirstAidKit";
			};
			class _xx_Medikit{
				count = 1;
				name = "Medikit";
			};
		};
	};
	class ARDN_gg_B_Kitbag_blk_engi: ARDN_gg_B_Kitbag_blk{
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		class TransportItems{
			class _xx_ToolKit{
				count = 1;
				name = "ToolKit";
			};
			class _xx_MineDetector{
				count = 1;
				name = "MineDetector";
			};
		};
		class TransportMagazines{
			class _xx_DemoCharge_Remote_Mag{
				count = 4;
				magazine = "DemoCharge_Remote_Mag";
			};
		};
	};
	class ARDN_gg_B_Kitbag_blk_at: ARDN_gg_B_Kitbag_blk{
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		class TransportMagazines{
			class _xx_Titan_AT{
				count = 2;
				magazine = "Titan_AT";
			};
		};
	};
	class ARDN_gg_B_Kitbag_blk_lat: ARDN_gg_B_Kitbag_blk{
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		class TransportMagazines{
			class _xx_MRAWS_HE_F{
				count = 1;
				magazine = "MRAWS_HE_F";
			};
			class _xx_MRAWS_HEAT_F{
				count = 3;
				magazine = "MRAWS_HEAT_F";
			};
		};
	};
	
	class ARDN_gg_B_Kitbag_wht_medic: ARDN_gg_B_Kitbag_wht{
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		class TransportItems{
			class _xx_FirstAidKit{
				count = 10;
				name = "FirstAidKit";
			};
			class _xx_Medikit{
				count = 1;
				name = "Medikit";
			};
		};
	};
	class ARDN_gg_B_Kitbag_wht_engi: ARDN_gg_B_Kitbag_wht{
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		class TransportItems{
			class _xx_ToolKit{
				count = 1;
				name = "ToolKit";
			};
			class _xx_MineDetector{
				count = 1;
				name = "MineDetector";
			};
		};
		class TransportMagazines{
			class _xx_DemoCharge_Remote_Mag{
				count = 4;
				magazine = "DemoCharge_Remote_Mag";
			};
		};
	};
	class ARDN_gg_B_Kitbag_wht_lat: ARDN_gg_B_Kitbag_wht{
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		class TransportMagazines{
			class _xx_MRAWS_HE_F{
				count = 1;
				magazine = "MRAWS_HE_F";
			};
			class _xx_MRAWS_HEAT_F{
				count = 3;
				magazine = "MRAWS_HEAT_F";
			};
		};
	};
	class ARDN_gg_B_Kitbag_wht_at: ARDN_gg_B_Kitbag_wht{
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		class TransportMagazines{
			class _xx_NLAW_F{
				count = 4;
				magazine = "NLAW_F";
			};
		};
	};
	class B_RadioBag_01_black_F;
	class ARDN_rpack_white;
	class ARDN_gg_B_rpack_blk: B_RadioBag_01_black_F{
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		class TransportItems{
			class _xx_ACRE_PRC117F{
				count = 1;
				name  = "ACRE_PRC117F";
			};
		};
	};
    class ARDN_gg_B_jpack_blk: B_RadioBag_01_black_F{
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		class TransportItems{
			class _xx_ACRE_PRC117F{
				count = 1;
				name  = "ACRE_PRC117F";
			};
            class _xx_ARDN_main_jumpDevice{
				count = 1;
				name  = "ARDN_main_jumpDevice";
			};
		};
	};
    class ARDN_gg_B_fpack_blk: B_RadioBag_01_black_F{
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		class TransportItems{
			class _xx_ACRE_PRC117F{
				count = 1;
				name  = "ACRE_PRC117F";
			};
            class _xx_ARDN_main_supportTerminal{
				count = 1;
				name  = "ARDN_main_supportTerminal";
			};
		};
	};
	class ARDN_gg_B_opMpack_blk: B_RadioBag_01_black_F{
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		class TransportItems{
            class _xx_ARDN_main_supportTerminal{
				count = 1;
				name  = "ARDN_main_supportTerminal";
			};
			class _xx_ARDN_main_jumpDevice{
				count = 1;
				name  = "ARDN_main_jumpDevice";
			};
			class _xx_ARDN_main_dAnchor_item{
				count = 1;
				name  = "ARDN_main_dAnchor_item";
			};
		};
	};
	class ARDN_gg_B_rpack_white: ARDN_rpack_white{
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		class TransportItems{
			class _xx_ACRE_PRC117F{
				count = 1;
				name  = "ACRE_PRC117F";
			};
		};
	};
	class Item_Base_F;
	class ARDN_main_jumpDevice_item: Item_Base_F{
		author = "Doskal Aridin";
		displayName = "Jump Device";
        editorCategory = "EdCat_Equipment";
		editorSubcategory = "ARDN_subcat_gg";
		vehicleClass = "Items";
		scope = 2;
		scopeCurator = 2;
		class TransportItems{
			class _xx_ARDN_main_jumpDevice{
				count = 1;
				name = "ARDN_main_jumpDevice";
			};
		};
	};
	class ARDN_main_supportTerminal_item: Item_Base_F{
		author = "Doskal Aridin";
		displayName = "Fire Support Terminal";
        editorCategory = "EdCat_Equipment";
		editorSubcategory = "ARDN_subcat_gg";
		vehicleClass = "Items";
		scope = 2;
		scopeCurator = 2;
		class TransportItems{
			class _xx_ARDN_main_supportTerminal{
				count = 1;
				name = "ARDN_main_supportTerminal";
			};
		};
	};
    class ARDN_main_dAnchor: Item_Base_F{
        scope = 2;
		scopeCurator = 2;
        editorCategory = "EdCat_Equipment";
		editorSubcategory = "ARDN_subcat_gg";
		vehicleClass = "Items";
        descriptionShort = "Marks it's position for use with Gekko's Ghosts devices.";
		descriptionUse = "Marks it's position for use with Gekko's Ghosts devices.";
		displayName = "Dimensional Anchor";
		class TransportItems{
			class _xx_ARDN_main_dAnchor_item{
				count = 1;
				name = "ARDN_main_dAnchor_item";
			};
		};
    };
};

class CfgWeapons
{
	class CBA_MiscItem;
	class H_Cap_blk;
	class ARDN_gg_cap_shdwMoses: H_Cap_blk{
		displayName = "Cap (Shadow Moses)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ARDN_gg\data\cap_shdwMoses.paa"};
	};
	
	class U_O_CombatUniform_ocamo;
	class ARDN_gg_u_black: U_O_CombatUniform_ocamo
	{
		side = 2;
		displayName = "Fatigues (Black) [Gekko's Ghosts]";
		class ItemInfo
		{
			containerClass = "Supply40";
			mass = 80;
			scope = 0;
			type = 801;
			uniformClass = "ARDN_gg_b_soldier_blk";
			uniformModel = "-";
		};
	};
	
	class ARDN_gg_u_wolf: U_O_CombatUniform_ocamo
	{
		side = 2;
		displayName = "Fatigues (Ward) [Gekko's Ghosts]";
		class ItemInfo
		{
			containerClass = "Supply40";
			mass = 80;
			scope = 0;
			type = 801;
			uniformClass = "ARDN_gg_b_soldier_wolf";
			uniformModel = "-";
		};
	};

	class ARDN_gg_u_forest_n: U_O_CombatUniform_ocamo
	{
		side = 2;
		displayName = "Fatigues (Camo) [Gekko's Ghosts]";
		class ItemInfo
		{
			containerClass = "Supply40";
			mass = 80;
			scope = 0;
			type = 801;
			uniformClass = "ARDN_gg_b_soldier_forest_n";
			uniformModel = "-";
		};
	};
	
	class ARDN_gg_u_winter: U_O_CombatUniform_ocamo
	{
		side = 2;
		displayName = "Fatigues (Winter) [Gekko's Ghosts]";
		class ItemInfo
		{
			containerClass = "Supply40";
			mass = 80;
			scope = 0;
			type = 801;
			uniformClass = "ARDN_gg_b_soldier_winter";
			uniformModel = "-";
		};
	};
	
	class H_HelmetB_TI_tna_F;
	class ARDN_gg_helmetb_ti: H_HelmetB_TI_tna_F{
		displayName = "Stealth Combat Helmet (Black)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ARDN_gg\data\H_HelmetB_TI_black.paa"};
	};
	
	class H_HelmetB;
	class ARDN_gg_helmetB: H_HelmetB{
		displayName = "Stealth Combat Helmet - Light (Black)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"\ARDN_gg\data\equip1.rvmat"};
		hiddenSelectionsTextures[] = {"\ARDN_gg\data\equip1_black.paa"};
	};
	
	class H_PilotHelmetFighter_B;
	class ARDN_gg_piloHelmetFighter: H_PilotHelmetFighter_B{
		displayName = "Pilot Helmet (Black)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"\ARDN_gg\data\pilot_helmet.rvmat"};
		hiddenSelectionsTextures[] = {"\ARDN_gg\data\pilot_helmet_black.paa"};
	};
	
	class V_CarrierRigKBT_01_heavy_Olive_F;
	class V_CarrierRigKBT_01_light_Olive_F;
	class V_CarrierRigKBT_01_Olive_F;
	class ARDN_gg_carrierRigKBT_heavy_blk: V_CarrierRigKBT_01_heavy_Olive_F{
		displayName = "Modular Carrier GL Rig (Black)";
		hiddenSelectionsTextures[] = {"\ARDN_gg\data\carrierrigkbt_01_blk_co.paa"};
	};
	class ARDN_gg_carrierRigKBT_light_blk: V_CarrierRigKBT_01_light_Olive_F{
		displayName = "Modular Carrier Lite (Black)";
		hiddenSelectionsTextures[] = {"\ARDN_gg\data\carrierrigkbt_01_blk_co.paa"};
	};
	class ARDN_gg_carrierRigKBT_blk: V_CarrierRigKBT_01_Olive_F{
		displayName = "Modular Carrier Vest (Black)";
		hiddenSelectionsTextures[] = {"\ARDN_gg\data\carrierrigkbt_01_blk_co.paa"};
	};
	
	class Weapon_hgun_Pistol_01_F;
	class ARDN_gg_weapon_hgun_pHeavy: Weapon_hgun_Pistol_01_F{
		displayName = "FNX-45 Tactical (Black)";
		class TransportWeapons{
			class ARDN_gg_hgun_pHeavy{
				count = 1;
				weapon = "ARDN_gg_hgun_pHeavy";
			};
		};
	};
	class hgun_Pistol_heavy_01_F;
	class ARDN_gg_hgun_pHeavy: hgun_Pistol_heavy_01_F{
		baseWeapon = "ARDN_gg_hgun_pHeavy";
		displayName = "FNX-45 Tactical (Black)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ARDN_gg\data\weapons\Pistol_Heavy_01_blk.paa"};
	};
	class ARDN_gg_hgun_pHeavy_snds: ARDN_gg_hgun_pHeavy{
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		class LinkedItems{
			class LinkedItemsMuzzle{
				item = "muzzle_snds_acp";
				slot = "MuzzleSlot";
			};
		};
	};
	class arifle_MSBS65_GL_black_ico_pointer_f;
	class arifle_MSBS65_GL_black_ico_pointer_snds_f: arifle_MSBS65_GL_black_ico_pointer_f{
		class LinkedItems{
			class LinkedItemsAcc{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsOptic{
				item = "optic_ico_01_black_f";
				slot = "CowsSlot";
			};
			class LinkedItemsMuzzle{
				item = "muzzle_snds_65_ti_blk_f";
				slot = "MuzzleSlot";
			};
		};
	};
	class arifle_MSBS65_black_ico_pointer_f;
	class arifle_MSBS65_black_ico_pointer_snds_f: arifle_MSBS65_black_ico_pointer_f{
		class LinkedItems{
			class LinkedItemsAcc{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsOptic{
				item = "optic_ico_01_black_f";
				slot = "CowsSlot";
			};
			class LinkedItemsMuzzle{
				item = "muzzle_snds_65_ti_blk_f";
				slot = "MuzzleSlot";
			};
		};
	};
	class arifle_MSBS65_Mark_black_F;
	class arifle_MSBS65_Mark_black_SOS_LP_BI_F: arifle_MSBS65_Mark_black_F{
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		class LinkedItems{
			class LinkedItemsAcc{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsOptic{
				item = "optic_SOS";
				slot = "CowsSlot";
			};
			class LinkedItemsUnder{
				item = "bipod_01_F_blk";
				slot = "UnderBarrelSlot";
			};
		};
	};
	class arifle_MSBS65_Mark_black_SOS_LP_BI_snds_F: arifle_MSBS65_Mark_black_SOS_LP_BI_F{
		class LinkedItems{
			class LinkedItemsAcc{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsOptic{
				item = "optic_SOS";
				slot = "CowsSlot";
			};
			class LinkedItemsUnder{
				item = "bipod_01_F_blk";
				slot = "UnderBarrelSlot";
			};
			class LinkedItemsMuzzle{
				item = "muzzle_snds_65_ti_blk_f";
				slot = "MuzzleSlot";
			};
		};
	};
	class LMG_Mk200_black_F;
	class LMG_Mk200_black_RCO_BI_snds_F: LMG_Mk200_black_F{
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		class LinkedItems{
			class LinkedItemsOptic{
				item = "optic_Hamr";
				slot = "CowsSlot";
			};
			class LinkedItemsUnder{
				item = "bipod_01_F_blk";
				slot = "UnderBarrelSlot";
			};
			class LinkedItemsMuzzle{
				item = "muzzle_snds_h_mg_blk_f";
				slot = "MuzzleSlot";
			};
		};
	};
	class srifle_DMR_07_blk_F;
	class srifle_DMR_07_blk_dms_F: srifle_DMR_07_blk_F{
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		class LinkedItems{
			class LinkedItemsOptic{
				item = "optic_dms_weathered_f";
				slot = "CowsSlot";
			};
		};
	};
	class srifle_DMR_07_blk_dms_snds_F: srifle_DMR_07_blk_F{
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		class LinkedItems{
			class LinkedItemsOptic{
				item = "optic_dms_weathered_f";
				slot = "CowsSlot";
			};
			class LinkedItemsMuzzle{
				item = "muzzle_snds_65_ti_blk_f";
				slot = "MuzzleSlot";
			};
		};
	};
	class ARDN_main_jumpDevice: CBA_MiscItem
	{
		scope = 2;
		author = "Doskal Aridin";
		descriptionShort = "A portable device, enabling the user to jump across space.";
		descriptionUse = "A portable device, enabling the user to jump across space.";
		displayName = "Jump Device";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "ARDN_subcat_gg";
		editorPreview = "\ARDN_main\data\ARDN_device1.paa";
		hiddenSelections[] = {"Camo_1","Screen_1","Screen_2","Screen_3"};
		hiddenSelectionsTextures[] = {"a3\Props_F_Enoch\Military\Equipment\data\MultiScreenComputer_01_black_co.paa","#(argb,8,8,3)color(0,0,0,0.0,co)","#(argb,8,8,3)color(0,0,0,0.0,co)","#(argb,8,8,3)color(0,0,0,0.0,co)"};
		model = "\a3\Props_F_Enoch\Military\Equipment\MultiScreenComputer_01_F.p3d";
		picture = "\ARDN_main\data\ARDN_device1.paa";
		class ItemInfo{
			allowedSlots[] = {801,701,901};
			mass = 100;
			scope = 0;
			type = 302;
		};
	};
	class ARDN_main_supportTerminal: ARDN_main_jumpDevice
	{
		scope = 2;
		descriptionShort = "A portable device, enabling a user to call in fire support.";
		descriptionUse = "A portable device, enabling a user to call in fire support.";
		displayName = "Fire Support Terminal";
	};
    class ARDN_main_dAnchor_item: ARDN_main_jumpDevice
    {
        scope = 2;
        descriptionShort = "Marks it's position for use with Gekko's Ghosts devices.";
		descriptionUse = "Marks it's position for use with Gekko's Ghosts devices.";
		displayName = "Dimensional Anchor";
        editorPreview = "\ARDN_main\data\ARDN_device.paa";
		hiddenSelections[] = {"Camo_1"};
		hiddenSelectionsTextures[] = {"a3\Props_F_Enoch\Military\Equipment\data\OmniDirectionalAntenna_01_Black_CO.paa"};
		model = "\a3\Props_F_Enoch\Military\Equipment\Router_01_F.p3d";
		picture = "\ARDN_main\data\ARDN_device.paa";
        class ItemInfo{
			allowedSlots[] = {801,701,901};
			mass = 25;
			scope = 0;
			type = 302;
		};
    };
};

class CfgGlasses
{
	class ARDN_gg_G_Balaclava_TI_G{
		_generalMacro = "ARDN_gg_G_Balaclava_TI_G";
		author = "Bohemia Interactive";
		displayName = "Stealth Balaclava (Black, Goggles Black)";
		DLC = "Expansion";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\G_Balaclava_TI_blk_F_co.paa","\ARDN_gg\data\glasses\g_combat_blk.paa"};
		identityTypes[] = {};
		mass = 10;
		model = "\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F.p3d";
		name = "None";
		picture = "\A3\Characters_F_Exp\BLUFOR\Data\UI\icon_G_Balaclava_TI_G_blk_F_ca.paa";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
	};
};

class CfgGroups
{
	class Indep
	{
		name = "Independent";
		side = 2;
		class ARDN_gg_gekkoGhost
		{
			name = "Gekko's Ghosts";
			class Infantry
			{
				name = "Infantry";
				class ARDN_gg_group_team
				{
					name = "Fireteam";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction = "ARDN_gg_gekkoGhost";
					side = 2;
					class Unit0{
						side = 2;
						vehicle = "ARDN_gg_grenadier";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1{
						side = 2;
						vehicle = "ARDN_gg_medic";
						rank = "CORPORAL";
						position[] = {2,0,0};
					};
					class Unit2{
						side = 2;
						vehicle = "ARDN_gg_marksman";
						rank = "PRIVATE";
						position[] = {4,0,0};
					};
					class Unit3{
						side = 2;
						vehicle = "ARDN_gg_rto";
						rank = "PRIVATE";
						position[] = {6,0,0};
					};
					class Unit4{
						side = 2;
						vehicle = "ARDN_gg_rifleman_lat";
						rank = "PRIVATE";
						position[] = {8,0,0};
					};
				};
				class ARDN_gg_group_squad
				{
					name = "Squad";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction = "ARDN_gg_gekkoGhost";
					side = 2;
					class Unit0{
						side = 2;
						vehicle = "ARDN_gg_grenadier";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1{
						side = 2;
						vehicle = "ARDN_gg_medic";
						rank = "CORPORAL";
						position[] = {2,0,0};
					};
					class Unit2{
						side = 2;
						vehicle = "ARDN_gg_marksman";
						rank = "PRIVATE";
						position[] = {4,0,0};
					};
					class Unit3{
						side = 2;
						vehicle = "ARDN_gg_rto";
						rank = "PRIVATE";
						position[] = {6,0,0};
					};
					class Unit4{
						side = 2;
						vehicle = "ARDN_gg_engi";
						rank = "PRIVATE";
						position[] = {8,0,0};
					};
					class Unit5{
						side = 2;
						vehicle = "ARDN_gg_gunner";
						rank = "PRIVATE";
						position[] = {10,0,0};
					};
					class Unit6{
						side = 2;
						vehicle = "ARDN_gg_rifleman_at";
						rank = "PRIVATE";
						position[] = {2,-2,0};
					};
					class Unit7{
						side = 2;
						vehicle = "ARDN_gg_rifleman_lat";
						rank = "PRIVATE";
						position[] = {4,-2,0};
					};
					class Unit8{
						side = 2;
						vehicle = "ARDN_gg_rifleman";
						rank = "PRIVATE";
						position[] = {6,-2,0};
					};
				};
			};
			class Infantry_snds
			{
				name = "Infantry (Ghosts)";
				class ARDN_gg_group_team_snds
				{
					name = "Team";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction = "ARDN_gg_gekkoGhost";
					side = 2;
					class Unit0{
						side = 2;
						vehicle = "ARDN_gg_grenadier_snds";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1{
						side = 2;
						vehicle = "ARDN_gg_medic_snds";
						rank = "CORPORAL";
						position[] = {2,0,0};
					};
					class Unit2{
						side = 2;
						vehicle = "ARDN_gg_marksman_snds";
						rank = "PRIVATE";
						position[] = {4,0,0};
					};
					class Unit3{
						side = 2;
						vehicle = "ARDN_gg_rto_snds";
						rank = "PRIVATE";
						position[] = {6,0,0};
					};
				};
				class ARDN_gg_group_squad_snds
				{
					name = "Squad";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction = "ARDN_gg_gekkoGhost";
					side = 2;
					class Unit0{
						side = 2;
						vehicle = "ARDN_gg_grenadier_snds";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1{
						side = 2;
						vehicle = "ARDN_gg_medic_snds";
						rank = "CORPORAL";
						position[] = {2,0,0};
					};
					class Unit2{
						side = 2;
						vehicle = "ARDN_gg_marksman_snds";
						rank = "PRIVATE";
						position[] = {4,0,0};
					};
					class Unit3{
						side = 2;
						vehicle = "ARDN_gg_rto_snds";
						rank = "PRIVATE";
						position[] = {6,0,0};
					};
					class Unit4{
						side = 2;
						vehicle = "ARDN_gg_engi_snds";
						rank = "PRIVATE";
						position[] = {8,0,0};
					};
					class Unit5{
						side = 2;
						vehicle = "ARDN_gg_gunner_snds";
						rank = "PRIVATE";
						position[] = {10,0,0};
					};
					class Unit6{
						side = 2;
						vehicle = "ARDN_gg_rifleman_snds";
						rank = "PRIVATE";
						position[] = {2,-2,0};
					};
					class Unit7{
						side = 2;
						vehicle = "ARDN_gg_rifleman_lat_snds";
						rank = "PRIVATE";
						position[] = {4,-2,0};
					};
					class Unit8{
						side = 2;
						vehicle = "ARDN_gg_rifleman_snds";
						rank = "PRIVATE";
						position[] = {6,-2,0};
					};
				};
				class ARDN_gg_group_patrol_snds
				{
					name = "Patrol";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction = "ARDN_gg_gekkoGhost";
					side = 2;
					class Unit0{
						side = 2;
						vehicle = "ARDN_gg_marksman_snds";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1{
						side = 2;
						vehicle = "ARDN_gg_rto_snds";
						rank = "PRIVATE";
						position[] = {2,0,0};
					};
					class Unit2{
						side = 2;
						vehicle = "ARDN_gg_rifleman_snds";
						rank = "PRIVATE";
						position[] = {4,0,0};
					};
				};
				class ARDN_gg_group_sniper_snds
				{
					name = "Sniper Team";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction = "Gekko's Ghosts";
					side = 2;
					class Unit0{
						side = 2;
						vehicle = "ARDN_gg_sniper_snds";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1{
						side = 2;
						vehicle = "ARDN_gg_marksman_snds";
						rank = "PRIVATE";
						position[] = {2,0,0};
					};
				};
			};
			class Infantry_warden
			{
				name = "Infantry (Wardens)"
				class ARDN_gg_group_squad_warden
				{
					name = "Squad";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction = "ARDN_gg_gekkoGhost";
					side = 2;
					class Unit0{
						side = 2;
						vehicle = "ARDN_gg_grenadier_warden";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1{
						side = 2;
						vehicle = "ARDN_gg_medic_warden";
						rank = "CORPORAL";
						position[] = {2,0,0};
					};
					class Unit2{
						side = 2;
						vehicle = "ARDN_gg_marksman_warden";
						rank = "PRIVATE";
						position[] = {4,0,0};
					};
					class Unit3{
						side = 2;
						vehicle = "ARDN_gg_rto_warden";
						rank = "PRIVATE";
						position[] = {6,0,0};
					};
					class Unit4{
						side = 2;
						vehicle = "ARDN_gg_engi_warden";
						rank = "PRIVATE";
						position[] = {8,0,0};
					};
					class Unit5{
						side = 2;
						vehicle = "ARDN_gg_gunner_warden";
						rank = "PRIVATE";
						position[] = {10,0,0};
					};
					class Unit6{
						side = 2;
						vehicle = "ARDN_gg_rifleman_warden";
						rank = "PRIVATE";
						position[] = {2,-2,0};
					};
					class Unit7{
						side = 2;
						vehicle = "ARDN_gg_rifleman_lat_warden";
						rank = "PRIVATE";
						position[] = {4,-2,0};
					};
					class Unit8{
						side = 2;
						vehicle = "ARDN_gg_rifleman_warden";
						rank = "PRIVATE";
						position[] = {6,-2,0};
					};
				};
				class ARDN_gg_group_team_warden
				{
					name = "Team";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction = "ARDN_gg_gekkoGhost";
					side = 2;
					class Unit0{
						side = 2;
						vehicle = "ARDN_gg_grenadier_warden";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1{
						side = 2;
						vehicle = "ARDN_gg_medic_warden";
						rank = "CORPORAL";
						position[] = {2,0,0};
					};
					class Unit2{
						side = 2;
						vehicle = "ARDN_gg_marksman_warden";
						rank = "PRIVATE";
						position[] = {4,0,0};
					};
					class Unit3{
						side = 2;
						vehicle = "ARDN_gg_rto_warden";
						rank = "PRIVATE";
						position[] = {6,0,0};
					};
				};
			};
			class Infantry_snow
			{
				name = "Infantry (Winter)";
				class ARDN_gg_group_team_snow
				{
					name = "Team";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction = "ARDN_gg_gekkoGhost";
					side = 2;
					class Unit0{
						side = 2;
						vehicle = "ARDN_gg_grenadier_snow";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1{
						side = 2;
						vehicle = "ARDN_gg_medic_snow";
						rank = "CORPORAL";
						position[] = {2,0,0};
					};
					class Unit2{
						side = 2;
						vehicle = "ARDN_gg_marksman_snow";
						rank = "PRIVATE";
						position[] = {4,0,0};
					};
					class Unit3{
						side = 2;
						vehicle = "ARDN_gg_rto_snow";
						rank = "PRIVATE";
						position[] = {6,0,0};
					};
				};
				class ARDN_gg_group_squad_snow
				{
					name = "Squad";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction = "ARDN_gg_gekkoGhost";
					side = 2;
					class Unit0{
						side = 2;
						vehicle = "ARDN_gg_grenadier_snow";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1{
						side = 2;
						vehicle = "ARDN_gg_medic_snow";
						rank = "CORPORAL";
						position[] = {2,0,0};
					};
					class Unit2{
						side = 2;
						vehicle = "ARDN_gg_marksman_snow";
						rank = "PRIVATE";
						position[] = {4,0,0};
					};
					class Unit3{
						side = 2;
						vehicle = "ARDN_gg_rto_snow";
						rank = "PRIVATE";
						position[] = {6,0,0};
					};
					class Unit4{
						side = 2;
						vehicle = "ARDN_gg_engi_snow";
						rank = "PRIVATE";
						position[] = {8,0,0};
					};
					class Unit5{
						side = 2;
						vehicle = "ARDN_gg_gunner_snow";
						rank = "PRIVATE";
						position[] = {10,0,0};
					};
					class Unit6{
						side = 2;
						vehicle = "ARDN_gg_rifleman_snow";
						rank = "PRIVATE";
						position[] = {2,-2,0};
					};
					class Unit7{
						side = 2;
						vehicle = "ARDN_gg_rifleman_lat_snow";
						rank = "PRIVATE";
						position[] = {4,-2,0};
					};
					class Unit8{
						side = 2;
						vehicle = "ARDN_gg_rifleman_snow";
						rank = "PRIVATE";
						position[] = {6,-2,0};
					};
				};
				class ARDN_gg_group_patrol_snow
				{
					name = "Patrol";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction = "ARDN_gg_gekkoGhost";
					side = 2;
					class Unit0{
						side = 2;
						vehicle = "ARDN_gg_marksman_snow";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1{
						side = 2;
						vehicle = "ARDN_gg_rto_snow";
						rank = "PRIVATE";
						position[] = {2,0,0};
					};
					class Unit2{
						side = 2;
						vehicle = "ARDN_gg_rifleman_snow";
						rank = "PRIVATE";
						position[] = {4,0,0};
					};
				};
				class ARDN_gg_group_sniper_snow
				{
					name = "Sniper Team";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction = "Gekko's Ghosts";
					side = 2;
					class Unit0{
						side = 2;
						vehicle = "ARDN_gg_sniper_snow";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1{
						side = 2;
						vehicle = "ARDN_gg_marksman_snow";
						rank = "PRIVATE";
						position[] = {2,0,0};
					};
				};
			};
		};
	};
};

#include "\ARDN_gg\UI\BaseControls.hpp"
#include "\ARDN_gg\UI\ARDN_UI_voidMap.hpp"
#include "\ARDN_gg\UI\ARDN_UI_JumpMenu.hpp"
#include "\ARDN_gg\UI\ARDN_UI_FireSupport.hpp"
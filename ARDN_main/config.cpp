class CfgPatches 
{ 
    class ARDN_main
    { 
        units[] = {
			"ARDN_main_Flag_raider","ARDN_main_Flag_marine","ARDN_main_Flag_ogrd","ARDN_main_Flag_vdv","ARDN_main_Flag_experts","ARDN_main_Flag_gekko","ARDN_main_Flag_tekkedan",
			"ARDN_main_aceMedicalSupplyCrate"
		}; 
        weapons[] = {}; 
        requiredVersion = 0.1; 
        requiredAddons[] = {"cba_common","A3_Modules_F","A3_Modules_F_Intel","A3_Characters_F_Heads","A3_Characters_F_Mark","A3_Characters_F","A3_Characters_F_Exp","A3_Characters_F_Orange","A3_Characters_F_Tacops","A3_Characters_F_Tank","A3_Characters_F_Enoch","A3_Characters_F_Oldman_Heads","A3_Structures_F_Civ_Camping","A3_Weapons_F","A3_Weapons_F_Items","A3_Structures_F_EPA_Items_Medical","A3_Ui_F","A3_Props_F_Enoch_Military_Equipment"};
    }; 
}; 
#include "script_macros.hpp"

class CfgFunctions {
	class ARDN {
		class loadout {
			class saveLoadoutAction {
				file = "ARDN_main\functions\fn_saveLoadoutAction.sqf";
				preInit = 0;
				postInit = 0;
				preStart = 0;
			};
			class loadLoadoutAction {
				file = "ARDN_main\functions\fn_loadLoadoutAction.sqf";
				preInit = 0;
				postInit = 0;
				preStart = 0;
			};
			class forceSideRelations {
				file = "ARDN_main\functions\fn_forceSideRelations.sqf";
				preInit = 0;
				postInit = 0;
				preStart = 0;
			};
		};
	};
};

class CfgFactionClasses
{
	class NO_CATEGORY;
	class ARDN_modules: NO_CATEGORY
	{
		displayName = "Aridin's Modules";
	};
};

class Extended_PreInit_EventHandlers {
	class ARDN_main_settings {
	   init = "call compileScript ['\ARDN_main\XEH_preInit.sqf']";
	};
};

class ace_medical_treatment{
	class Medication{
		class ARDN_painKillers{
			painReduce = 0.04;
			hrIncreaseLow[] = {0, 0};
			hrIncreaseNormal[] = {0, 0};
			hrIncreaseHigh[] = {0, 0};
			timeInSystem = 1800;
			timeTillMaxEffect = 60;
			maxDose = 50;
			viscosityChange = 0;
		};
	};
};

class ace_medical_treatment_actions
{
	class ARDN_PersonalAidKit{
		allowedSelections[] = {"All"};
		allowSelfTreatment = "false";
		animationMedic = "AinvPknlMstpSlayW[wpn]Dnon_medicOther";
		animationMedicProne = "AinvPpneMstpSlayW[wpn]Dnon_medicOther";
		animationMedicSelf = "";
		animationMedicSelfProne = "";
		callbackFailure = "";
		callbackProgress = "";
		callbackStart = "";
		callbackSuccess = "ace_medical_treatment_fnc_fullHeal";
		category = "advanced";
		condition = "";
		consumeItem = 1;
		displayName = "Use Trama Kit";
		displayNameProgress = "Treating...";
		icon = "";
		items[] = {"ARDN_ace_pak"};
		litter[] = {{"ACE_MedicalLitter_gloves"},{"ACE_MedicalLitter_clean"},{{"ACE_MedicalLitterBase","ACE_MedicalLitter_bandage1","ACE_MedicalLitter_bandage2","ACE_MedicalLitter_bandage3"},{"ACE_MedicalLitterBase","ACE_MedicalLitter_bandage1","ACE_MedicalLitter_bandage2","ACE_MedicalLitter_bandage3"}}};
		medicRequired = 2;
		treatmentLocations = 0;
		treatmentTime = ARDN_tkTime;
		treatmentTimeSelfCoef = 1;
	};
	class ARDN_painKillers{
		allowedSelections[] = {"Head"};
		allowSelfTreatment = 1;
		animationMedic = "AinvPknlMstpSnonWnonDnon_medic1";
		animationMedicProne = "AinvPpneMstpSlayW[wpn]Dnon_medicOther";
		animationMedicSelf = "AinvPknlMstpSlayW[wpn]Dnon_medic";
		animationMedicSelfProne = "AinvPpneMstpSlayW[wpn]Dnon_medic";
		callbackFailure = "";
		callbackProgress = "";
		callbackStart = "";
		callbackSuccess = "ace_medical_treatment_fnc_medication";
		category = "medication";
		condition = "";
		consumeItem = 1;
		displayName = "Administer Pain Killers";
		displayNameProgress = "Administering Pain Killers...";
		icon = "\z\ace\addons\medical_gui\ui\auto_injector.paa";
		items[] = {"ARDN_ace_painKiller"};
		litter[] = {{}};
		medicRequired = 0;
		sounds[] = {{"z\ace\addons\medical_treatment\sounds\Inject.ogg",1,1,50}};
		treatmentLocations = 0;
		treatmentTime = "2";
		treatmentTimeSelfCoef = 1;
	};
};

class CfgEditorSubcategories
{
	class ARDN_main_subcat_poster{
		displayName = "Posters";
	};
	class ARDN_subcat_gg{
		displayName = "Gekko's Ghosts";
	};
};

class CfgUnitInsignia
{
    class ARDN_ins_doskal
    {
        displayName = "Doskal"; // Name displayed in Arsenal
        author = "Aridin"; // Author displayed in Arsenal
        texture = "\ARDN_main\ins\Doskal.paa"; // Image path
        textureVehicle = ""; // Does nothing currently, reserved for future use
    };
	class ARDN_ins_raider
	{
		displayName = "1st Raider";
        author = "Aridin";
        texture = "\ARDN_main\ins\RaiderWarlock.paa";
        textureVehicle = "";
	};
	class ARDN_ins_OGRD
	{
		displayName = "OGRD";
        author = "Aridin";
        texture = "\ARDN_main\ins\OGRD.paa";
        textureVehicle = "";
	};
	class ARDN_ins_OGRD_p_sub
	{
		displayName = "OGRD patch (Sub)";
        author = "Aridin";
        texture = "\ARDN_main\ins\OGRD_sub_patch.paa";
        textureVehicle = "";
	};
	class ARDN_ins_foxhound
	{
		displayName = "Foxhound";
        author = "Aridin";
        texture = "\ARDN_main\ins\foxhound.paa";
        textureVehicle = "";
	};
	class ARDN_ins_fox
	{
		displayName = "FOX";
        author = "Aridin";
        texture = "\ARDN_main\ins\fox.paa";
        textureVehicle = "";
	};
	class ARDN_ins_amestris
	{
		displayName = "Amestris";
        author = "Aridin";
        texture = "\ARDN_main\ins\amestris.paa";
        textureVehicle = "";
	};
	class ARDN_ins_bridges
	{
		displayName = "Bridges";
        author = "Aridin";
        texture = "\ARDN_main\ins\bridges.paa";
        textureVehicle = "";
	};
	class ARDN_ins_fragile
	{
		displayName = "Fragile";
        author = "Aridin";
        texture = "\ARDN_main\ins\fragile.paa";
        textureVehicle = "";
	};
	class ARDN_ins_gekko
	{
		displayName = "Gekko's Ghosts";
        author = "Aridin";
        texture = "\ARDN_main\ins\gg.paa";
        textureVehicle = "";
	};
	/**
	class ARDN_ins_gekkostate
	{
		displayName = "Gekkostate";
        author = "Aridin";
        texture = "\ARDN_main\ins\gekko.paa";
        textureVehicle = "";
	};
	**/
	class ARDN_ins_tekkedan
	{
		displayName = "Tekkedan";
        author = "Aridin";
        texture = "\ARDN_main\ins\tekkedan.paa";
        textureVehicle = "";
	};
	class ARDN_ins_yorha
	{
		displayName = "YoRHa";
        author = "Aridin";
        texture = "\ARDN_main\ins\yorha.paa";
        textureVehicle = "";
	};
	class ARDN_ins_wolf
    {
        displayName = "Wolf Squad"; 
        author = "Aridin";
        texture = "\ARDN_main\ins\wolf.paa";
        textureVehicle = "";
    };
	class ARDN_ins_sec9
    {
        displayName = "Section 9"; 
        author = "Aridin";
        texture = "\ARDN_main\ins\sec9.paa";
        textureVehicle = "";
    };
	class ARDN_ins_possum
    {
        displayName = "Possum Lodge"; 
        author = "Aridin";
        texture = "\ARDN_main\ins\possum.paa";
        textureVehicle = "";
    };
	class ARDN_ins_fbc
    {
        displayName = "Federal Bureau of Control"; 
        author = "Aridin";
        texture = "\ARDN_main\ins\FBC.paa";
        textureVehicle = "";
    };
	class ARDN_ins_fbc_ranger
    {
        displayName = "FBC - Ranger"; 
        author = "Aridin";
        texture = "\ARDN_main\ins\FBC_ranger.paa";
        textureVehicle = "";
    };
	class ARDN_ins_fbc_ranger_specOps
    {
        displayName = "FBC - Ranger Special Ops"; 
        author = "Aridin";
        texture = "\ARDN_main\ins\FBC_ranger_specOps.paa";
        textureVehicle = "";
    };
	class ARDN_ins_vaporGoose
    {
        displayName = "Vaporwave Goose"; 
        author = "Aridin";
        texture = "\ARDN_main\ins\vaporgoose.paa";
        textureVehicle = "";
    };
	class ARDN_ins_bikeforce
    {
        displayName = "Bike Force"; 
        author = "Aridin";
        texture = "\ARDN_main\ins\bikeforce.paa";
        textureVehicle = "";
    };
	class ARDN_ins_TVA_1_retro
    {
        displayName = "Time Variance Authority (sepia)"; 
        author = "Aridin";
        texture = "\ARDN_main\ins\TVA_1_retro.paa";
        textureVehicle = "";
    };
	class ARDN_ins_TVA_1_red
    {
        displayName = "Time Variance Authority (red)"; 
        author = "Aridin";
        texture = "\ARDN_main\ins\TVA_1_red.paa";
        textureVehicle = "";
    };
	class ARDN_ins_TVA_2_retro
    {
        displayName = "TVA (sepia)"; 
        author = "Aridin";
        texture = "\ARDN_main\ins\TVA_2_retro.paa";
        textureVehicle = "";
    };
	class ARDN_ins_TVA_2_red
    {
        displayName = "TVA (red)"; 
        author = "Aridin";
        texture = "\ARDN_main\ins\TVA_2_red.paa";
        textureVehicle = "";
    };
	class ARDN_ins_eff
    {
        displayName = "EFF"; 
        author = "Aridin";
        texture = "\ARDN_main\ins\eff.paa";
        textureVehicle = "";
    };
	class ARDN_ins_eff_sub
    {
        displayName = "EFF (Sub)"; 
        author = "Aridin";
        texture = "\ARDN_main\ins\eff_sub.paa";
        textureVehicle = "";
    };
	class ARDN_ins_zeon
    {
        displayName = "Zeon"; 
        author = "Aridin";
        texture = "\ARDN_main\ins\zeon.paa";
        textureVehicle = "";
    };
	class ARDN_ins_zeon_sub
    {
        displayName = "Zeon (Sub)"; 
        author = "Aridin";
        texture = "\ARDN_main\ins\zeon_sub.paa";
        textureVehicle = "";
    };
	class ARDN_ins_113sog
    {
        displayName = "113th SOG"; 
        author = "Aridin";
        texture = "\ARDN_main\ins\113sog.paa";
        textureVehicle = "";
    };
	class ARDN_ins_113sog_sub
    {
        displayName = "113th SOG (Sub)"; 
        author = "Aridin";
        texture = "\ARDN_main\ins\113sog_sub.paa";
        textureVehicle = "";
    };
	class ARDN_ins_cc
    {
        displayName = "Crayola Clan"; 
        author = "AshDaddyActual";
        texture = "\ARDN_main\ins\cc.paa";
        textureVehicle = "";
    };
};

class CfgVehicles
{	
/**
	class Land_Ground_sheet_folded_khaki_F;
	class Land_Ground_sheet_khaki_F;
	class ARDN_main_Item_grndSheetFolded: Land_Ground_sheet_folded_khaki_F
	{
		displayName = "Sleeping Mat (Respawn, Folded)";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Camping";
		vehicleClass = "Items";
		icon = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Ground_sheet_folded_khaki_F.jpg";
		class assembleInfo
		{
			assembleTo = "ARDN_main_grndSheet";
			base = "";
			displayName = "Sleeping Mat (Respawn)";
			dissasembleTo[] = {};
			primary = 1;
		};
		class TransportItems
		{
			class ARDN_main_grndSheetFolded
			{
				count = 1;
				name = "ARDN_main_grndSheetFolded";
			};
		};
	};
	class ARDN_main_grndSheet: Land_Ground_sheet_khaki_F
	{
		scope = 1;
		displayName = "Sleeping Mat (Respawn)";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Camping";
		class assembleInfo
		{
			assembleTo = "";
			base = "";
			displayName = "Sleeping Mat (Respawn, Folded)";
			dissasembleTo[] = {"ARDN_main_Item_grndSheetFolded"};
			primary = 1;
		};
		class EventHandlers
		{
			deleted = "['deleted', _this] call BIS_fnc_respawnBackpack";
			disassembled = "['disassembled', _this] call BIS_fnc_respawnBackpack";
			init = "['init', _this] spawn BIS_fnc_respawnBackpack";
		};
	};
**/
	class Flag_White_F;
	class ARDN_main_Flag_raider: Flag_White_F
	{
		displayName = "Flag (1st Raider Company)";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\ARDN_main\flag\flag_raider.paa'";
		};
	};
	class ARDN_main_Flag_marine: Flag_White_F
	{
		displayName = "Flag (Marine Corps)";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\ARDN_main\flag\flag_marine.paa'";
		};
	};
	class ARDN_main_Flag_ogrd: Flag_White_F
	{
		displayName = "Flag (OGRD)";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\ARDN_main\flag\flag_ogrd.paa'";
		};
	};
	class ARDN_main_Flag_vdv: Flag_White_F
	{
		displayName = "Flag (VDV)";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\ARDN_main\flag\flag_vdv.paa'";
		};
	};
	class ARDN_main_Flag_experts: Flag_White_F
	{
		displayName = "Flag (Experts Only)";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\ARDN_main\flag\flag_experts.paa'";
		};
	};
	/**
	class ARDN_main_Flag_gekkostate: Flag_White_F
	{
		displayName = "Flag (Gekkostate)";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\ARDN_main\flag\flag_gekko.paa'";
		};
	};
	**/
	class ARDN_main_Flag_gekko: Flag_White_F
	{
		displayName = "Flag (Gekko's Ghosts)";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\ARDN_main\flag\flag_gg.paa'";
		};
	};
	class ARDN_main_Flag_tekkedan: Flag_White_F
	{
		displayName = "Flag (Tekkedan)";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\ARDN_main\flag\flag_tekkedan.paa'";
		};
	};
	
	class B_Messenger_Black_F;
	class ARDN_main_messenger: B_Messenger_Black_F{
		displayName= "Messenger Bag (Aridin)";
		hiddenSelectionsTextures[]= {"\ARDN_main\data\B_Messenger_Black_ardn.paa"};
	};
	
	class ARDN_main_B_kama: ARDN_main_messenger{
		author = "Doskal Aridin";
		descriptionShort = "Buttcape for clone troopers";
		displayName = "Kama";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"ARDN_main\data\kama\kama.rvmat"};
		hiddenSelectionsTextures[] = {"ARDN_main\data\kama\kama_co.paa"};
		maximumLoad = 0;
		model = "ARDN_main\data\kama\kama.p3d";
		picture = "\ARDN_main\data\ui\icon_kama_ca.paa";
		scope = 2;
	};
	class ARDN_main_B_kama_1stripe: ARDN_main_B_kama{
		displayName = "Kama (1 stripe)";
		hiddenSelectionsTextures[] = {"ARDN_main\data\kama\kama_1_co.paa"};
		model = "ARDN_main\data\kama\kama_1.p3d";
	};
	class ARDN_main_B_kama_2stripe: ARDN_main_B_kama{
		displayName = "Kama (2 stripes)";
		hiddenSelectionsTextures[] = {"ARDN_main\data\kama\kama_2_co.paa"};
		model = "ARDN_main\data\kama\kama_2.p3d";
	};
	class ARDN_main_B_kama_3stripe: ARDN_main_B_kama{
		displayName = "Kama (3 stripes)";
		hiddenSelectionsTextures[] = {"ARDN_main\data\kama\kama_3_co.paa"};
		model = "ARDN_main\data\kama\kama_3.p3d";
	};
	
	class UserTexture1m_F;
	class ARDN_main_poster_office: UserTexture1m_F{
		displayName = "Poster (Office)";
		editorCategory = "EdCat_Signs";
		editorSubcategory = "ARDN_main_subcat_poster";
		editorPreview = "";
		hiddenSelectionsTextures[] = {"\ARDN_main\data\posters\office.paa"};
	};
	class ARDN_main_poster_eatmold: UserTexture1m_F{
		displayName = "Poster (Don't Eat Mold)";
		editorCategory = "EdCat_Signs";
		editorSubcategory = "ARDN_main_subcat_poster";
		editorPreview = "";
		hiddenSelectionsTextures[] = {"\ARDN_main\data\posters\donteatmold.paa"};
	};
	class ARDN_main_poster_letmold: UserTexture1m_F{
		displayName = "Poster (Don't Let Mold)";
		editorCategory = "EdCat_Signs";
		editorSubcategory = "ARDN_main_subcat_poster";
		editorPreview = "";
		hiddenSelectionsTextures[] = {"\ARDN_main\data\posters\dontletmold.paa"};
	};
	class ARDN_main_poster_dontread: UserTexture1m_F{
		displayName = "Poster (Don't Read Confidential)";
		editorCategory = "EdCat_Signs";
		editorSubcategory = "ARDN_main_subcat_poster";
		editorPreview = "";
		hiddenSelectionsTextures[] = {"\ARDN_main\data\posters\dontread.paa"};
	};
	class ARDN_main_poster_dontuwu: UserTexture1m_F{
		displayName = "Poster (Don't UwU)";
		editorCategory = "EdCat_Signs";
		editorSubcategory = "ARDN_main_subcat_poster";
		editorPreview = "";
		hiddenSelectionsTextures[] = {"\ARDN_main\data\posters\dontuwu.paa"};
	};
	class ARDN_main_poster_moderntech: UserTexture1m_F{
		displayName = "Poster (Avoid Modern Tech)";
		editorCategory = "EdCat_Signs";
		editorSubcategory = "ARDN_main_subcat_poster";
		editorPreview = "";
		hiddenSelectionsTextures[] = {"\ARDN_main\data\posters\moderntech.paa"};
	};
	class ARDN_main_poster_reportuwu: UserTexture1m_F{
		displayName = "Poster (Report UwUs)";
		editorCategory = "EdCat_Signs";
		editorSubcategory = "ARDN_main_subcat_poster";
		editorPreview = "";
		hiddenSelectionsTextures[] = {"\ARDN_main\data\posters\reportuwu.paa"};
	};
	class ARDN_main_poster_stapler: UserTexture1m_F{
		displayName = "Poster (Stapler or Altered Item?)";
		editorCategory = "EdCat_Signs";
		editorSubcategory = "ARDN_main_subcat_poster";
		editorPreview = "";
		hiddenSelectionsTextures[] = {"\ARDN_main\data\posters\stapler.paa"};
	};
	class ARDN_main_poster_workhard: UserTexture1m_F{
		displayName = "Poster (Let's work hard!)";
		editorCategory = "EdCat_Signs";
		editorSubcategory = "ARDN_main_subcat_poster";
		editorPreview = "";
		hiddenSelectionsTextures[] = {"\ARDN_main\data\posters\workhard.paa"};
	};
	
	class B_Kitbag_rgr;
	class ARDN_main_plash: B_Kitbag_rgr{
		scope = 0;
		author = "Doskal Aridin";
		displayName = "Plash Palatka";
		model = "ARDN_main\data\plash\plash.p3d";
		maximumLoad = 0;
		picture = "";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsMaterials[] = {"\ARDN_main\data\plash\plash.rvmat"};
		hiddenSelectionsTextures[] = {"\ARDN_main\data\plash\plash_co.paa"};
	};
	
	class ACE_medicalSupplyCrate_advanced;
	class ARDN_main_aceMedicalSupplyCrate: ACE_medicalSupplyCrate_advanced{
		scope = 2;
		displayName = "Medical Supplies"
		class TransportItems{
			class _xx_ACE_bloodIV{
				count = 13;
				name = "ACE_bloodIV";
			};
			class _xx_ACE_bloodIV_250{
				count = 6;
				name = "ACE_bloodIV_250";
			};
			class _xx_ACE_bloodIV_500{
				count = 6;
				name = "ACE_bloodIV_500";
			};
			class _xx_ACE_bodyBag{
				count = 10;
				name = "ACE_bodyBag";
			};
			class _xx_ACE_elasticBandage{
				count = 60;
				name = "ACE_elasticBandage";
			};
			class _xx_ACE_epinephrine{
				count = 60;
				name = "ACE_epinephrine";
			};
			class _xx_ACE_adenosine{
				count = 60;
				name = "ACE_adenosine";
			};
			class _xx_ACE_fieldDressing{
				count = 60;
				name = "ACE_fieldDressing";
			};
			class _xx_ACE_morphine{
				count = 60;
				name = "ACE_morphine";
			};
			class _xx_ACE_packingBandage{
				count = 60;
				name = "ACE_packingBandage";
			};
			class _xx_ARDN_ace_pak{
				count = 8;
				name = "ARDN_ace_pak";
			};
			class _xx_ACE_quikClot{
				count = 60;
				name = "ACE_quikClot";
			};
			class _xx_ACE_splint{
				count = 26;
				name = "ACE_splint";
			};
			class _xx_ACE_surgicalKit{
				count = 2;
				name = "ACE_surgicalKit";
			};
			class _xx_ACE_tourniquet{
				count = 12;
				name = "ACE_tourniquet";
			};
		};
	};
	/**
	class Land_PainKillers_F;
	class ARDN_ace_painKiller_item: Land_PainKillers_F{
		scope = 2;
		scopeCurator =2;
		displayName = "Pain Killers";
		maximumLoad = 5;
		vehicleClass = "Container";
		class TransportItems{
			MACRO_ADDITEM(ARDN_ace_painKiller,50);
		};
	};
	**/
	/**
    class Logic;
	class Module_F: Logic
	{
		class AttributesBase
		{
			class Default;
			class Edit;					// Default edit box (i.e. text input field)
			class Combo;				// Default combo box (i.e. drop-down menu)
			class Checkbox;				// Default checkbox (returned value is Boolean)
			class CheckboxNumber;		// Default checkbox (returned value is Number)
			class ModuleDescription;	// Module description
			class Units;				// Selection of units on which the module is applied
		};

		// Description base classes (for more information see below):
		class ModuleDescription
		{
			class AnyBrain;
		};
	};

	class ARDN_Module_respawnLoadout: Module_F
	{
		// Standard object definitions:
		scope = 2;										// Editor visibility; 2 will show it in the menu, 1 will hide it.
		displayName = "Respawn loaout";				// Name displayed in the menu
		category = "Respawn";

		function = "ARDN_fnc_respawnModule";	// Name of function triggered once conditions are met
		functionPriority = 1;				// Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
		isGlobal = 1;						// 0 for server only execution, 1 for global execution, 2 for persistent global execution
		isTriggerActivated = 0;				// 1 for module waiting until all synced triggers are activated
		isDisposable = 1;					// 1 if modules is to be disabled once it is activated (i.e. repeated trigger activation won't work)
		is3DEN = 0;							// 1 to run init function in Eden Editor as well
		curatorInfoType = ""; // Menu displayed when the module is placed or double-clicked on by Zeus

		// Module attributes (uses https://community.bistudio.com/wiki/Eden_Editor:_Configuring_Attributes#Entity_Specific):
		class Attributes: AttributesBase
		{
			// Module-specific arguments:
			class saveSpace: Combo
			{
				property = "ARDN_Module_respawnLoadout_saveSpace";				// Unique property (use "<tag>_<moduleClass>_<attributeClass>" format to ensure that the name is unique)
				displayName = "Loadout Save Space";			// Argument label
				tooltip = "Where the loadout is saved to. Player is local to the player unit, lost when mission restarts or player disconnects. Mission, saved to just the mission. Profile, saved to player's profile, not tied to the mission.";	// Tooltip description
				typeName = "STRING";							// Value type, can be "NUMBER", "STRING" or "BOOL"
				defaultValue = "player";							// Default attribute value. Warning: This is an expression, and its returned value will be used

				// Listbox items:
				class Values
				{
					class player	{ name = "Player";	value = "player"; };
					class mission	{ name = "Mission"; value = "mission"; };
                    class profile	{ name = "Profile"; value = "profile"; };
				};
			};

			class saveVar: Edit
			{
				displayName = "Loadout Variable";
				tooltip = "Variable name the script uses to save the loadout. Important when using 'Profile'.";
				// Default text for the input box:
				defaultValue = "ARDN_respawn"; // Because this is an expression, one must have a string within a string to return a string
			};

			class ModuleDescription: ModuleDescription{}; // Module description should be shown last
		};

		// Module description (must inherit from base class, otherwise pre-defined entities won't be available):
		class ModuleDescription: ModuleDescription
		{
			description = "Saves player's respawn loadout.";	// Short description, will be formatted as structured text
			sync[] = {"LocationArea_F"};				// Array of synced entities (can contain base classes)

			class LocationArea_F
			{
				description[] = { // Multi-line descriptions are supported
					"Saves player's loadout when the exit a virtual arsenal or ACE arsenal.",
                    "Players will respawn with this saved loadout.",
                    "When set to 'mission' or 'profile', players will load their loadout at mission start."
				};
				position = 0;	// Position is taken into effect
				direction = 0;	// Direction is taken into effect
				optional = 1;	// Synced entity is optional
				duplicate = 0;	// Multiple entities of this type can be synced
				synced[] = { }; // Pre-defined entities like "AnyBrain" can be used (see the table below)
			};
		};
	};
    **/
};

class CfgWeapons
{
	class ItemCore;
	/**
	class ARDN_main_grndSheetFolded: ItemCore
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "Sleeping Mat (Respawn, Folded)";
		model = "\A3\Structures_F\Civ\Camping\Ground_sheet_folded_khaki_F.p3d";
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Ground_sheet_folded_khaki_F.jpg";
		class ItemInfo
		{
			allowedSlots[] = {801,701,901};
			mass = 60;
			scope = 0;
			type = 302;
			uniformModel = "\A3\Structures_F\Civ\Camping\Ground_sheet_folded_khaki_F.p3d";
		};
	};
	**/
	class ACE_personalAidKit;
	class ARDN_ace_pak: ACE_personalAidKit
	{
		displayName = "Trauma Kit";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		class Iteminfo{
			mass = 15;
			scope = 0;
			type = 302;
		};
	};
	class ACE_morphine;
	class ARDN_ace_painKiller: ACE_morphine
	{
		scope = 2;
		scopeArsenal =2;
		descriptionShort = "Used to combat minor to moderate pain experiences";
		descriptionUse = "Used to combat minor to moderate pain experiences.";
		displayName = "Pain Killers";
		model = "\A3\Structures_F_EPA\Items\Medical\PainKillers_F.p3d";
		picture = "\ARDN_main\icon\painKiller_icon.paa";
		class Iteminfo{
			mass = 0.1;
			scope = 0;
			type = 302;
		};
	};
	
	class NVGoggles;
	class ARDN_main_horn: NVGoggles{
		author = "Doskal Aridin";
		descriptionShort = "Rhino Horn";
		descriptionUse = "";
		displayName = "Rhino Horn";
		model = "ARDN_main\data\horn\ARDN_horn.p3d";
		picture = "\ARDN_main\data\ui\icon_horn_ca";
		simulation = "NVGoggles";
		visionMode[] = {"Normal"};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"ARDN_main\data\horn\ARDN_horn.rvmat"};
		hiddenSelectionsTextures[] = {"ARDN_main\data\horn\Horn_co.paa"};
		class ItemInfo{
			mass = 20;
			modelOff = "ARDN_main\data\horn\ARDN_horn.p3d";
			type = 616;
			uniformModel = "ARDN_main\data\horn\ARDN_horn.p3d";
		};
		class Library{
			libTextDesc = "";
		};
	};
	class ARDN_main_trihorn: ARDN_main_horn{
		displayName = "Rhino Tri-Horn";
		model = "ARDN_main\data\horn\ARDN_trihorn.p3d";
		class ItemInfo{
			mass = 20;
			modelOff = "ARDN_main\data\horn\ARDN_trihorn.p3d";
			type = 616;
			uniformModel = "ARDN_main\data\horn\ARDN_trihorn.p3d";
		};
	};
	
	class Vest_Camo_Base;
	class ARDN_main_kama: Vest_Camo_Base{
		author = "Doskal Aridin";
		descriptionShort = "Buttcape for clone troopers";
		displayName = "Kama";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"ARDN_main\data\kama\kama.rvmat"};
		hiddenSelectionsTextures[] = {"ARDN_main\data\kama\kama_co.paa"};
		model = "ARDN_main\data\kama\kama.p3d";
		picture = "\ARDN_main\data\ui\icon_kama_ca";
		scope = 2;
		class ItemInfo{
			_generalMacro = "VestItem";
			armor = "5*0";
			author = "Doskal Aridin";
			containerClass = "Supply0";
			hiddenSelections[] = {"camo"};
			hitpointName = "HitBody";
			mass = 0;
			overlaySelectionsInfo[] = {};
			passThrough = 1;
			scope = 2;
			showHolsteredPistol = 0;
			type = 701;
			uniformModel = "ARDN_main\data\kama\kama.p3d";
			uniformType = "Default";
		};
	};
	class ARDN_main_kama_1stripe: ARDN_main_kama{
		displayName = "Kama (1 stripe)";
		hiddenSelectionsTextures[] = {"ARDN_main\data\kama\kama_1_co.paa"};
		model = "ARDN_main\data\kama\kama_1.p3d";
		class ItemInfo{
			_generalMacro = "VestItem";
			armor = "5*0";
			author = "Doskal Aridin";
			containerClass = "Supply0";
			hiddenSelections[] = {"camo"};
			hitpointName = "HitBody";
			mass = 0;
			overlaySelectionsInfo[] = {};
			passThrough = 1;
			scope = 2;
			showHolsteredPistol = 0;
			type = 701;
			uniformModel = "ARDN_main\data\kama\kama_1.p3d";
			uniformType = "Default";
		};
	};
	class ARDN_main_kama_2stripe: ARDN_main_kama{
		displayName = "Kama (2 stripes)";
		hiddenSelectionsTextures[] = {"ARDN_main\data\kama\kama_2_co.paa"};
		model = "ARDN_main\data\kama\kama_2.p3d";
		class ItemInfo{
			_generalMacro = "VestItem";
			armor = "5*0";
			author = "Doskal Aridin";
			containerClass = "Supply0";
			hiddenSelections[] = {"camo"};
			hitpointName = "HitBody";
			mass = 0;
			overlaySelectionsInfo[] = {};
			passThrough = 1;
			scope = 2;
			showHolsteredPistol = 0;
			type = 701;
			uniformModel = "ARDN_main\data\kama\kama_2.p3d";
			uniformType = "Default";
		};
	};
	class ARDN_main_kama_3stripe: ARDN_main_kama{
		displayName = "Kama (3 stripes)";
		hiddenSelectionsTextures[] = {"ARDN_main\data\kama\kama_3_co.paa"};
		model = "ARDN_main\data\kama\kama_3.p3d";
		class ItemInfo{
			_generalMacro = "VestItem";
			armor = "5*0";
			author = "Doskal Aridin";
			containerClass = "Supply0";
			hiddenSelections[] = {"camo"};
			hitpointName = "HitBody";
			mass = 0;
			overlaySelectionsInfo[] = {};
			passThrough = 1;
			scope = 2;
			showHolsteredPistol = 0;
			type = 701;
			uniformModel = "ARDN_main\data\kama\kama_3.p3d";
			uniformType = "Default";
		};
	};
	
	class ARDN_main_kama_UU: ARDN_main_kama{
		displayName = "Kama (Universal Union)";
		hiddenSelectionsTextures[] = {"ARDN_main\data\kama\kama_UU_co.paa"};
		model = "ARDN_main\data\kama\kama_UU.p3d";
		class ItemInfo{
			_generalMacro = "VestItem";
			armor = "5*0";
			author = "Doskal Aridin";
			containerClass = "Supply0";
			hiddenSelections[] = {"camo"};
			hitpointName = "HitBody";
			mass = 0;
			overlaySelectionsInfo[] = {};
			passThrough = 1;
			scope = 2;
			showHolsteredPistol = 0;
			type = 701;
			uniformModel = "ARDN_main\data\kama\kama_UU.p3d";
			uniformType = "Default";
		};
	};
	class ARDN_main_kama_UU_1: ARDN_main_kama_UU{
		displayName = "Kama (Universal Union - 1 stripe)";
		hiddenSelectionsTextures[] = {"ARDN_main\data\kama\kama_UU_1_co.paa"};
		model = "ARDN_main\data\kama\kama_UU_1.p3d";
		class ItemInfo{
			_generalMacro = "VestItem";
			armor = "5*0";
			author = "Doskal Aridin";
			containerClass = "Supply0";
			hiddenSelections[] = {"camo"};
			hitpointName = "HitBody";
			mass = 0;
			overlaySelectionsInfo[] = {};
			passThrough = 1;
			scope = 2;
			showHolsteredPistol = 0;
			type = 701;
			uniformModel = "ARDN_main\data\kama\kama_UU_1.p3d";
			uniformType = "Default";
		};
	};
	class ARDN_main_kama_UU_2: ARDN_main_kama_UU{
		displayName = "Kama (Universal Union - 2 stripe)";
		hiddenSelectionsTextures[] = {"ARDN_main\data\kama\kama_UU_2_co.paa"};
		model = "ARDN_main\data\kama\kama_UU_2.p3d";
		class ItemInfo{
			_generalMacro = "VestItem";
			armor = "5*0";
			author = "Doskal Aridin";
			containerClass = "Supply0";
			hiddenSelections[] = {"camo"};
			hitpointName = "HitBody";
			mass = 0;
			overlaySelectionsInfo[] = {};
			passThrough = 1;
			scope = 2;
			showHolsteredPistol = 0;
			type = 701;
			uniformModel = "ARDN_main\data\kama\kama_UU_2.p3d";
			uniformType = "Default";
		};
	};
	class ARDN_main_kama_UU_3: ARDN_main_kama_UU{
		displayName = "Kama (Universal Union - 3 stripe)";
		hiddenSelectionsTextures[] = {"ARDN_main\data\kama\kama_UU_3_co.paa"};
		model = "ARDN_main\data\kama\kama_UU_3.p3d";
		class ItemInfo{
			_generalMacro = "VestItem";
			armor = "5*0";
			author = "Doskal Aridin";
			containerClass = "Supply0";
			hiddenSelections[] = {"camo"};
			hitpointName = "HitBody";
			mass = 0;
			overlaySelectionsInfo[] = {};
			passThrough = 1;
			scope = 2;
			showHolsteredPistol = 0;
			type = 701;
			uniformModel = "ARDN_main\data\kama\kama_UU_3.p3d";
			uniformType = "Default";
		};
	};
	
	class ARDN_main_N_kama: NVGoggles{
		scope = 2;
		ace_nightvision_border = "";
		author = "Doskal Aridin";
		displayName = "Kama (ENVG)";
		descriptionShort = "Buttcape for clone troopers";
		descriptionUse = "";
		model = "ARDN_main\data\kama\kama.p3d";
		picture = "\ARDN_main\data\ui\icon_kama_ca";
		simulation = "NVGoggles";
		visionMode[] = {"Normal","NVG","TI"};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"ARDN_main\data\kama\kama.rvmat"};
		hiddenSelectionsTextures[] = {"ARDN_main\data\kama\kama_co.paa"};
		class ItemInfo{
			mass = 20;
			modelOff = "ARDN_main\data\kama\kama.p3d";
			type = 616;
			uniformModel = "ARDN_main\data\kama\kama.p3d";
		};
		class Library{
			libTextDesc = "";
		};
	};
	class ARDN_main_N_kama_1: ARDN_main_N_kama{
		model = "ARDN_main\data\kama\kama_1.p3d";
		displayName = "Kama (1 stripe) (ENVG)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"ARDN_main\data\kama\kama.rvmat"};
		hiddenSelectionsTextures[] = {"ARDN_main\data\kama\kama_1_co.paa"};
		model = "ARDN_main\data\kama\kama_1.p3d";
		class ItemInfo{
			mass = 20;
			modelOff = "ARDN_main\data\kama\kama_1.p3d";
			type = 616;
			uniformModel = "ARDN_main\data\kama\kama_1.p3d";
		};
		class Library{
			libTextDesc = "";
		};
	};
	class ARDN_main_N_kama_2: ARDN_main_N_kama{
		model = "ARDN_main\data\kama\kama_2.p3d";
		displayName = "Kama (2 stripes) (ENVG)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"ARDN_main\data\kama\kama.rvmat"};
		hiddenSelectionsTextures[] = {"ARDN_main\data\kama\kama_2_co.paa"};
		model = "ARDN_main\data\kama\kama_2.p3d";
		class ItemInfo{
			mass = 20;
			modelOff = "ARDN_main\data\kama\kama_2.p3d";
			type = 616;
			uniformModel = "ARDN_main\data\kama\kama_2.p3d";
		};
	};
	class ARDN_main_N_kama_3: ARDN_main_N_kama{
		model = "ARDN_main\data\kama\kama_3.p3d";
		displayName = "Kama (3 stripes) (ENVG)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"ARDN_main\data\kama\kama.rvmat"};
		hiddenSelectionsTextures[] = {"ARDN_main\data\kama\kama_3_co.paa"};
		model = "ARDN_main\data\kama\kama_3.p3d";
		class ItemInfo{
			mass = 20;
			modelOff = "ARDN_main\data\kama\kama_3.p3d";
			type = 616;
			uniformModel = "ARDN_main\data\kama\kama_3.p3d";
		};
		class Library{
			libTextDesc = "";
		};
	};
	class ARDN_main_NN_kama: ARDN_main_N_kama{
		displayName = "Kama";
		visionMode[] = {"Normal"};
	};
	class ARDN_main_NN_kama_1: ARDN_main_N_kama_1{
		displayName = "Kama (1 stripe)";
		visionMode[] = {"Normal"};
	};
	class ARDN_main_NN_kama_2: ARDN_main_N_kama_2{
		displayName = "Kama (2 stripes)";
		visionMode[] = {"Normal"};
	};
	class ARDN_main_NN_kama_3: ARDN_main_N_kama_3{
		displayName = "Kama (3 stripes)";
		visionMode[] = {"Normal"};
	};
	class ARDN_main_N_kama_UU: ARDN_main_N_kama
	{
		displayName = "Kama UU (ENVG)";
		descriptionShort = "Buttcape for combine soldiers";
		model = "ARDN_main\data\kama\kama_UU.p3d";
		hiddenSelectionsTextures[] = {"ARDN_main\data\kama\kama_UU_co.paa"};
		class ItemInfo{
			mass = 20;
			modelOff = "ARDN_main\data\kama\kama_UU.p3d";
			type = 616;
			uniformModel = "ARDN_main\data\kama\kama_UU.p3d";
		};
	};
	class ARDN_main_N_kama_UU_1: ARDN_main_N_kama
	{
		displayName = "Kama UU (1 stripe) (ENVG)";
		descriptionShort = "Buttcape for combine soldiers";
		model = "ARDN_main\data\kama\kama_UU_1.p3d";
		hiddenSelectionsTextures[] = {"ARDN_main\data\kama\kama_UU_1_co.paa"};
		class ItemInfo{
			mass = 20;
			modelOff = "ARDN_main\data\kama\kama_UU_1.p3d";
			type = 616;
			uniformModel = "ARDN_main\data\kama\kama_UU_1.p3d";
		};
	};
	class ARDN_main_N_kama_UU_2: ARDN_main_N_kama
	{
		displayName = "Kama UU (2 stripes) (ENVG)";
		descriptionShort = "Buttcape for combine soldiers";
		model = "ARDN_main\data\kama\kama_UU_2.p3d";
		hiddenSelectionsTextures[] = {"ARDN_main\data\kama\kama_UU_2_co.paa"};
		class ItemInfo{
			mass = 20;
			modelOff = "ARDN_main\data\kama\kama_UU_2.p3d";
			type = 616;
			uniformModel = "ARDN_main\data\kama\kama_UU_2.p3d";
		};
	};
	class ARDN_main_N_kama_UU_3: ARDN_main_N_kama
	{
		displayName = "Kama UU (3 stripes) (ENVG)";
		descriptionShort = "Buttcape for combine soldiers";
		model = "ARDN_main\data\kama\kama_UU_3.p3d";
		hiddenSelectionsTextures[] = {"ARDN_main\data\kama\kama_UU_3_co.paa"};
		class ItemInfo{
			mass = 20;
			modelOff = "ARDN_main\data\kama\kama_UU_3.p3d";
			type = 616;
			uniformModel = "ARDN_main\data\kama\kama_UU_3.p3d";
		};
	};
	class ARDN_main_eyesDemon: NVGoggles{
		scope = 2;
		ace_nightvision_border = "";
		author = "Doskal Aridin";
		displayName = "Demi-human eyes";
		descriptionShort = "";
		descriptionUse = "";
		model = "ARDN_main\data\demonEyes\eyesDemon.p3d";
		picture = "";
		simulation = "NVGoggles";
		visionMode[] = {"Normal","NVG","TI"};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"ARDN_main\data\demonEyes\eyesDemon.rvmat"};
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(1.000,0.000,0.000,1.0,CO)"};
		class ItemInfo{
			mass = 20;
			modelOff = "";
			type = 616;
			uniformModel = "ARDN_main\data\demonEyes\eyesDemon.p3d";
		};
		class Library{
			libTextDesc = "";
		};
	};
	class ARDN_main_eyesDemonFull: NVGoggles{
		scope = 2;
		ace_nightvision_border = "";
		author = "Doskal Aridin";
		displayName = "Demon eyes";
		descriptionShort = "";
		descriptionUse = "";
		model = "ARDN_main\data\demonEyes\eyesDemon.p3d";
		picture = "";
		simulation = "NVGoggles";
		visionMode[] = {"Normal","NVG","TI"};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"ARDN_main\data\demonEyes\eyesDemon.rvmat"};
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(1.000,0.000,0.000,1.0,CO)"};
		class ItemInfo{
			mass = 20;
			modelOff = "ARDN_main\data\demonEyes\eyesDemon.p3d";
			type = 616;
			uniformModel = "ARDN_main\data\demonEyes\eyesDemon.p3d";
		};
		class Library{
			libTextDesc = "";
		};
	};
};

class CfgGlasses
{
	class ARDN_main_G_Combat_blk{
		_generalMacro = "ARDN_main_G_Combat_blk";
		author = "Doskal Aridin";
		displayname = "Combat Goggles (Black)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ARDN_main\data\glasses\g_combat_blk.paa"};
		identityTypes[] = {"NoGlasses",0,"G_NATO_default",300,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",50,"G_NATO_SF",300,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",0,"G_HAF_default",50,"G_CIVIL_female",0,"G_CIVIL_male",0};
		mass = 4;
		model = "\A3\characters_f_beta\heads\glasses\g_combat";
		name = "None";
		picture = "\A3\Characters_F\data\ui\icon_g_combat_CA.paa";
		scope = 2;
		scopeArsenal = 2;
	};
	class ARDN_main_G_Balaclava_combat_blk{
		_generalMacro = "G_Balaclava_combat";
		author = "Doskal Aridin";
		displayName = "Balaclava (Combat Goggles - Black)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\a3\characters_f_bootcamp\guerrilla\data\headgear_balaclava_blk_co.paa","\ARDN_main\data\glasses\g_combat_blk.paa"};
		identityTypes[] = {};
		mass = 10;
		model = "\A3\Characters_F_Bootcamp\Guerrilla\g_balaclava_combat.p3d";
		name = "None";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_G_Balaclava_combat_ca.paa";
		scope = 2;
		scopeArsenal = 2;
	};
	class ARDN_main_viper{
		_generalMacro = "ARDN_main_viper";
		author = "Doskal Aridin";
		displayname = "Exciters - The Oorah";
		hiddenSelections[] = {"Camo","Camo1"};
		hiddenSelectionsMaterials[] = {"\ARDN_main\data\viper\viper_frame.rvmat","\ARDN_main\data\viper\viper_glass.rvmat"};
		hiddenSelectionsTextures[] = {"\ARDN_main\data\viper\viper_frame_co.paa","\ARDN_main\data\viper\viper_glass_ca.paa"};
		identityTypes[] = {"ARDN_main_viper",100};
		mass = 4;
		model = "\ARDN_main\data\viper\viper_oorah.p3d";
		name = "None";
		picture = "\ARDN_main\data\ui\icon_viper_co.paa";
		scope = 2;
		scopeArsenal = 2;
	};
	class ARDN_main_viper_rubber{
		_generalMacro = "ARDN_main_viper";
		author = "Doskal Aridin";
		displayname = "Exciters - The Rubbers";
		hiddenSelections[] = {"Camo","Camo1"};
		hiddenSelectionsMaterials[] = {"\ARDN_main\data\viper\viper_frame.rvmat","\ARDN_main\data\viper\viper_glass.rvmat"};
		hiddenSelectionsTextures[] = {"\ARDN_main\data\viper\viper_frame_rubber_co.paa","\ARDN_main\data\viper\viper_glass_rubber_ca.paa"};
		identityTypes[] = {"ARDN_main_viper",100};
		mass = 4;
		model = "\ARDN_main\data\viper\viper_rubber.p3d";
		name = "None";
		picture = "\ARDN_main\data\ui\icon_viper_co.paa";
		scope = 2;
		scopeArsenal = 2;
	};
	class ARDN_main_viper_corduroy{
		_generalMacro = "ARDN_main_viper";
		author = "Doskal Aridin";
		displayname = "Exciters - The Corduroy";
		hiddenSelections[] = {"Camo","Camo1"};
		hiddenSelectionsMaterials[] = {"\ARDN_main\data\viper\viper_frame.rvmat","\ARDN_main\data\viper\viper_glass.rvmat"};
		hiddenSelectionsTextures[] = {"\ARDN_main\data\viper\viper_frame_corduroy_ca.paa","\ARDN_main\data\viper\viper_glass_corduroy_ca.paa"};
		identityTypes[] = {"ARDN_main_viper",100};
		mass = 4;
		model = "\ARDN_main\data\viper\viper_corduroy.p3d";
		name = "None";
		picture = "\ARDN_main\data\ui\icon_viper_co.paa";
		scope = 2;
		scopeArsenal = 2;
	};
	class ARDN_main_viper_smoke{
		_generalMacro = "ARDN_main_viper";
		author = "Doskal Aridin";
		displayname = "Exciters - The Smoke Show";
		hiddenSelections[] = {"Camo","Camo1"};
		hiddenSelectionsMaterials[] = {"\ARDN_main\data\viper\viper_frame.rvmat","\ARDN_main\data\viper\viper_glass.rvmat"};
		hiddenSelectionsTextures[] = {"\ARDN_main\data\viper\viper_frame_smoke_ca.paa","\ARDN_main\data\viper\viper_glass_smoke_ca.paa"};
		identityTypes[] = {"ARDN_main_viper",100};
		mass = 4;
		model = "\ARDN_main\data\viper\viper_smoke.p3d";
		name = "None";
		picture = "\ARDN_main\data\ui\icon_viper_co.paa";
		scope = 2;
		scopeArsenal = 2;
	};
};

class CfgFaces
{
	class Man_A3{
		class ARDN_face_aridin{
			author = "Doskal Aridin";
			disabled = 0;
			displayName = "Aridin";
			head = "NATOHead_A3";
			identityTypes[] = {"ARDN_face_aridin"};
			material = "\ARDN_main\heads\aridin.rvmat";
			materialHL = "\ARDN_main\heads\hl_White_bald_muscular.rvmat";
			materialHL2 = "\ARDN_main\heads\hl_White_bald_muscular.rvmat";
			materialWounded1 = "\ARDN_main\heads\m_white_20_injury.rvmat";
			materialWounded2 = "\ARDN_main\heads\m_white_20_injury.rvmat";
			texture = "\ARDN_main\heads\aridin.paa";
			textureHL = "\ARDN_main\heads\hl_white_bald_co.paa";
			textureHL2 = "\ARDN_main\heads\hl_white_bald_co.paa";
		};
		class ARDN_face_aridin_camo{
			author = "Doskal Aridin";
			disabled = 0;
			displayName = "Aridin (Camo)";
			head = "NATOHead_A3";
			identityTypes[] = {"ARDN_face_aridin_camo"};
			material = "\ARDN_main\heads\aridin_camo.rvmat";
			materialHL = "\ARDN_main\heads\hl_White_bald_muscular.rvmat";
			materialHL2 = "\ARDN_main\heads\hl_White_bald_muscular.rvmat";
			materialWounded1 = "\ARDN_main\heads\m_white_20_injury.rvmat";
			materialWounded2 = "\ARDN_main\heads\m_white_20_injury.rvmat";
			texture = "\ARDN_main\heads\aridin_camo.paa";
			textureHL = "\ARDN_main\heads\hl_white_bald_co.paa";
			textureHL2 = "\ARDN_main\heads\hl_white_bald_co.paa";
		};
		class ARDN_face_intrepid{
			author = "Doskal Aridin";
			disabled = 0;
			displayName = "Intrepid";
			head = "NATOHead_A3";
			identityTypes[] = {"ARDN_face_intrepid"};
			material = "\ARDN_main\heads\intrepid.rvmat";
			materialHL = "\ARDN_main\heads\hl_White_bald_muscular.rvmat";
			materialHL2 = "\ARDN_main\heads\hl_White_bald_muscular.rvmat";
			materialWounded1 = "\ARDN_main\heads\m_white_13_injury.rvmat";
			materialWounded2 = "\ARDN_main\heads\m_white_13_injury.rvmat";
			texture = "\ARDN_main\heads\intrepid.paa";
			textureHL = "\ARDN_main\heads\hl_white_bald_co.paa";
			textureHL2 = "\ARDN_main\heads\hl_white_bald_co.paa";
		};
		class ARDN_face_intrepid_camo{
			author = "Doskal Aridin";
			disabled = 0;
			displayName = "Intrepid (Camo)";
			head = "NATOHead_A3";
			identityTypes[] = {"ARDN_face_intrepid_camo"};
			material = "\ARDN_main\heads\intrepid_camo.rvmat";
			materialHL = "\ARDN_main\heads\hl_White_bald_muscular.rvmat";
			materialHL2 = "\ARDN_main\heads\hl_White_bald_muscular.rvmat";
			materialWounded1 = "\ARDN_main\heads\m_white_13_injury.rvmat";
			materialWounded2 = "\ARDN_main\heads\m_white_13_injury.rvmat";
			texture = "\ARDN_main\heads\intrepid_camo.paa";
			textureHL = "\ARDN_main\heads\hl_white_bald_co.paa";
			textureHL2 = "\ARDN_main\heads\hl_white_bald_co.paa";
		};
	};
};

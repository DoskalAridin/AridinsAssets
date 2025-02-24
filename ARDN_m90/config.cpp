class CfgPatches 
{ 
    class ARDN_m90
    { 
        units[] = {}; 
        weapons[] = {}; 
        requiredVersion = 0.1; 
        requiredAddons[] = {"A3_Characters_F_Beta","ARDN_main"};
    }; 
}; 

class cfgFactionClasses 
{ 
    class ARDN_fac_m90 
    { 
        displayName = "Swedish M90"; 
        priority = 3; 
        side = 2;
        icon = "";
    };  
};

class CfgVehicles
{
	class I_E_Uniform_01_F;
	class ARDN_m90_Uniform: I_E_Uniform_01_F
	{
		author = "Doskal Aridin";
		faction = "ARDN_fac_m90";
		model = "\a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_F.p3d";
		uniformClass = "ARDN_U_m90_Uniform";
		hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
		hiddenSelectionsTextures[] = {
			"\ARDN_m90\data\officer_m90.paa",
			"\ARDN_m90\data\clothing_m90.paa",
			"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_camo_co.paa"
			};
	};
	
	class B_RadioBag_01_black_F;
	class ARDN_rpack_m90: B_RadioBag_01_black_F{
        scope = 0;
		displayname = "Radio Pack (M90)"
		maximumLoad = 280;
		hiddenSelectionsTextures[] = {"\ARDN_m90\data\B_RadioBag_01_M90.paa"};
	};
};

class CfgWeapons
{
	class U_I_E_Uniform_01_f;
	class ARDN_U_m90_Uniform: U_I_E_Uniform_01_f
	{
		scope = 0;
		author = "Doskal Aridin";
		displayName = "Combat Fatigues (M90)";
		hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
		hiddenSelectionsTextures[] = {
			"\ARDN_m90\data\officer_m90.paa",
			"\ARDN_m90\data\clothing_m90.paa",
			"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_camo_co.paa"
			};
		class ItemInfo
		{
			containerClass = "Supply40";
			mass = 40;
			scope = 0;
			type = 801;
			uniformClass = "ARDN_m90_Uniform";
			uniformModel = "-";
		};
	};
};
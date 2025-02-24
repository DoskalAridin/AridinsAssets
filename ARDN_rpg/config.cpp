class CfgPatches 
{ 
    class ARDN_rpg{
        units[] = {}; 
        weapons[] = {}; 
        requiredVersion = 0.1; 
        requiredAddons[] = {"ARDN_main","ARDN_gg"};
    }; 
}; 
class CfgFunctions {
	class ARDN {
		class RPG {
            class skillMenuOpen {
                file = "ARDN_rpg\functions\fn_skillMenuOpen.sqf";
            };
            class registerCharacterOpen {
                file = "ARDN_rpg\functions\fn_registerCharacterOpen.sqf";
            };
            class saveSkills {
                file = "ARDN_rpg\functions\fn_saveSkills.sqf";
            };
            class initSkills {
                file = "ARDN_rpg\functions\fn_initSkills.sqf";
            };
            class registerCharacter {
                file = "ARDN_rpg\functions\fn_registerCharacter.sqf";
            };
            class loadSkills {
                file = "ARDN_rpg\functions\fn_loadSkills.sqf";
            };
            class skillRoll {
                file = "ARDN_rpg\functions\fn_skillRoll.sqf";
            };
            class skillImproveOpen {
                file = "ARDN_rpg\functions\fn_skillImproveOpen.sqf";
            };
            class improveSkills {
                file = "ARDN_rpg\functions\fn_improveSkills.sqf";
            };
		};
	};
};

#include "\ARDN_rpg\UI\defines.hpp"
#include "\ARDN_rpg\UI\controls.hpp"
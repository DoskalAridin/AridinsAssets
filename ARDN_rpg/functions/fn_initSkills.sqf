/*
	Author: Doskal Aridin

	Description:
		Initilizes the skills system.

	Examples:
		 call ARDN_fnc_initSkills;

*/

if (isServer) then {
    ARDN_skills = missionProfileNamespace getVariable ["ARDN_skills", []];
    if (typeName ARDN_skills == "ARRAY") then {
        ARDN_skills = createHashMap;
    };
    publicVariable "ARDN_skills";
    ARDN_skillsToImprove = createHashMap;
};


if (hasInterface) then {
    call ARDN_fnc_loadSkills;
    
    player addEventHandler ["Respawn", {
        params ["_unit", "_corpse"];
        call ARDN_fnc_loadSkills;
    }];
        
    _action = ["Skills menu","Skills Menu","",{call ARDN_fnc_skillMenuOpen;},{true}] call ace_interact_menu_fnc_createAction;
    [(typeOf player), 1, ["ACE_SelfActions"], _action] call ace_interact_menu_fnc_addActionToClass;
};
ARDN_skillDefault_Default = [[0,false],[1,false],[2,false],[3,false],[4,30],[5,20],[6,10],[7,10],[8,0],[9,0],[10,0],[11,10],[12,0],[13,0],[14,10],[15,0],[16,10],[17,10],[18,0],[19,0],[20,10],[21,20],[22,10],[23,0],[24,20],[25,0],[26,0],[27,"NONE"]];
ARDN_skillDefault_Anthropologist = [[8,50],[11,40],[16,60],[20,40],[21,40],[17,50],[24,60]];
ARDN_skillDefault_Historian = [[9,50],[11,40],[16,60],[20,40],[21,40],[17,50],[24,60]];
ARDN_skillDefault_ComputerScientist = [[12,60],[13,30],[25,40],[7,50],[11,50],[23,40],[18,40]];
ARDN_skillDefault_Engineer = [[2,true],[12,50],[13,40],[25,40],[7,50],[11,50],[23,40],[18,40]];
ARDN_skillDefault_FederalAgent = [[11,40],[14,50],[5,50],[15,30],[17,60],[18,30],[21,50],[24,50],[7,60]];
ARDN_skillDefault_Physician = [[11,50],[0,true],[21,40],[23,60],[24,40],[15,50],[22,60]];
ARDN_skillDefault_Scientist = [[11,40],[12,40],[23,60],[7,50],[13,40],[15,40],[18,40]];
ARDN_skillDefault_SpecialOperator = [[4,60],[3,true],[5,60],[19,60],[6,50]];
ARDN_skillDefault_Criminal = [[14,60],[5,40],[18,40],[21,50],[6,50],[17,50],[20,50],[15,40]];
ARDN_skillDefault_Firefighter = [[4,60],[13,40],[3,true],[0,true],[15,40],[24,40]];
ARDN_skillDefault_IntelligenceAnalyst = [[8,40],[11,50],[12,40],[14,40],[16,40],[17,50],[25,40]];
ARDN_skillDefault_Paramedic = [[11,40],[0,true],[1,true],[17,40],[21,40],[23,40],[15,40],[22,50]];
ARDN_skillDefault_PoliceOfficer = [[11,40],[14,40],[5,50],[0,true],[17,50],[18,30],[21,40],[24,40],[15,50]];
ARDN_skillDefault_Soldier = [[4,50],[11,30],[5,40],[0,true],[19,40],[21,30],[25,40],[24,60],[13,40]];

ARDN_skillDefault_Phantom = [[17,10],[16,10],[6,10],[27,"Phantom"]];
ARDN_skillDefault_Wraith = [[5,10],[19,10],[27,"Wraith"]];
ARDN_skillDefault_Myling = [[6,10],[24,10],[27,"Myling"]];
ARDN_skillDefault_Revenant = [[2,true],[19,10],[13,10],[27,"Revenant"]];
ARDN_skillDefault_Poltergeist = [[4,10],[24,10],[27,"Poltergeist"]];
ARDN_skillDefault_Yokai = [[26,10],[20,10],[15,10],[16,10],[27,"Yokai"]];
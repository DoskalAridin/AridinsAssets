/*
	Author: Doskal Aridin

	Description:
		Processess data from character register menu.

	Examples:
		["Soldier","Phantom"] call ARDN_fnc_registerCharacter;

*/
params ["_prof","_opspec"];

private _profSkills = [];
private _opspecSkills = [];

switch (_prof) do {
    default {_profSkills = ARDN_skillDefault_Anthropologist};
    case "Historian": {_profSkills = ARDN_skillDefault_Historian};
    case "ComputerScientist": {_profSkills = ARDN_skillDefault_ComputerScientist};
    case "Engineer": {_profSkills = ARDN_skillDefault_Engineer};
    case "FederalAgent": {_profSkills = ARDN_skillDefault_FederalAgent};
    case "Physician": {_profSkills = ARDN_skillDefault_Physician};
    case "Scientist": {_profSkills = ARDN_skillDefault_Scientist};
    case "SpecialOperator": {_profSkills = ARDN_skillDefault_SpecialOperator};
    case "Criminal": {_profSkills = ARDN_skillDefault_Criminal};
    case "Firefighter": {_profSkills = ARDN_skillDefault_Firefighter};
    case "IntelligenceAnalyst": {_profSkills = ARDN_skillDefault_IntelligenceAnalyst};
    case "Paramedic": {_profSkills = ARDN_skillDefault_Paramedic};
    case "PoliceOfficer": {_profSkills = ARDN_skillDefault_PoliceOfficer};
    case "Soldier": {_profSkills = ARDN_skillDefault_Soldier};
};

switch (_opspec) do {
    default {_opspecSkills = ARDN_skillDefault_Phantom};
    case "Wraith": {_opspecSkills = ARDN_skillDefault_Wraith};
    case "Myling": {_opspecSkills = ARDN_skillDefault_Myling};
    case "Revenant": {_opspecSkills = ARDN_skillDefault_Revenant};
    case "Poltergeist": {_opspecSkills = ARDN_skillDefault_Poltergeist};
    case "Yokai": {_opspecSkills = ARDN_skillDefault_Yokai};
};

[getplayerUID player, _profSkills, _opspecSkills] remoteExec ["ARDN_fnc_saveSkills", 2];
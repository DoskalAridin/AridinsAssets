/*
	Author: Doskal Aridin

	Description:
		Loads and set's player's skills

	Examples:
		call ARDN_fnc_loadSkills;

*/

private _UID = getPlayerUID player;
private _skills = ARDN_skills getOrDefault [_UID, [false,false,false,false,30,20,10,10,0,0,0,10,0,0,10,0,10,10,0,0,10,20,10,0,20,0,0,"NONE"],true];
private _firearms = _skills select 5;
private _athletics = _skills select 4;
private _stealth = _skills select 6;
player setUnitTrait ["medic", _skills select 0]; //Medic
if (_skills select 1 == true) then {player setVariable ["ace_medical_medicclass", 2, true];}; //Doctor
player setUnitTrait ["engineer ", _skills select 2]; //Engineer
player setUnitTrait ["explosiveSpecialist", _skills select 3]; //EOD
player setCustomAimCoef (10 - (_firearms / 10));
player setUnitRecoilCoefficient (2 - (_firearms / 100 * 2));
player setUnitTrait ["audibleCoef", 2 - (_stealth / 100 * 2)];
player setUnitTrait ["camouflageCoef", 2 - (_stealth / 100 * 2)];
player setUnitTrait ["loadCoef", 2 - (_athletics / 100 * 2)];
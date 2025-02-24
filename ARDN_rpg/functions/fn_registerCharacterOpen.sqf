/*
	Author: Doskal Aridin

	Description:
		Opens character register menu
        
    Parameters:

	Returns:
		true

	Examples:
		 call ARDN_fnc_registerCharacterOpen;

*/
private _UID = getPlayerUID player;
private _skills = ARDN_skills getOrDefault [_UID, [false,false,false,false,30,20,10,10,0,0,0,10,0,0,10,0,10,10,0,0,10,20,10,0,20,0,0,"NONE"],true];
if (_skills select 27 == "NONE") then {
	createDialog "ARDN_charRegister";
} else {hint "Character already registered"};
/*
	Author: Doskal Aridin

	Description:
		Preforms skill check
        
    Parameters:
        0 - player UID
        1 - Skill
	Returns:
        true - if success
        false - if fail
	Examples:
		[getPlayerUID player, 15] call ARDN_fnc_skillRoll;

*/
params ["_UID", "_skill"];

private _skills = ARDN_skills getOrDefault [_UID, [false,false,false,false,30,20,10,10,0,0,0,10,0,0,10,0,10,10,0,0,10,20,10,0,20,0,0,"NONE"],true];
private _skillValue = _skills select _skill;

private _skillType = TypeName _skillValue;
private _result = false;
switch (_skillType) do {
    default {diag_log "ARDN RPG: Skill check failed, neither boolen or scalar value provided"};
    case "SCALAR": {
        private _roll = round random 100;
        if (_roll < _skillValue) then {_result = true} else {_result = false}
    };
    case "BOOL": {
        if (_skillValue == true) then {_result = true} else {_result = false}
    };
};

if (_result == false) then {
    _skillList = ARDN_skillsToImprove getOrDefault [_UID, []];
    _skillList pushBackUnique _skill;
    ARDN_skillsToImprove set [_UID, _skillList];
    publicVariable "ARDN_skillsToImprove";
};
_result
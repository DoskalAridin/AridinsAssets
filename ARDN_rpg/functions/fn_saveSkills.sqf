/*
	Author: Doskal Aridin

	Description:
		Updates and saves player's skills.
        Arrays provided should be an array of the skill index and the value of the skill
        [["skill one index", "skill value"],["skill two index", "skill value"]]
        [[0, 45],[2,62]]
        
    Parameters:
        0 - player UID
        2 - Array of absolute values for skills
        3 - Array of additive values for skill

	Returns:
		true

	Examples:
		 [UID, [], []] remoteExec [ARDN_fnc_saveSkills, 2];

*/
params [["_UID", "NONE", ["STRING"]],["_absolute", []],["_additive",[]]];

if (_UID == "NONE") exitWith {diag_log "ARDN RPG: SaveSkills failed! No player UID provided!"};

private _skills = ARDN_skills get _UID;

diag_log format ["ARDN DEBUG: _skills %1", _skills];

{
    _skills set [_x select 0, _x select 1];
} forEach _absolute;

{
    private _skillOldValue = _skills select (_x select 0);
    if (typeName (_x select 1) == "SCALAR") then {
        _skills set [_x select 0, _skillOldValue + (_x select 1)];
    } else {
        _skills set [_x select 0, _x select 1];
    };
} forEach _additive;

ARDN_skills set [_UID, _skills];

publicVariable "ARDN_skills";
MissionProfileNamespace setVariable ["ARDN_skills", ARDN_skills];
saveMissionProfileNamespace;

private _player = _UID call BIS_fnc_getUnitByUID;
remoteExec ["ARDN_fnc_loadSkills", _player];
/*
	Author: Doskal Aridin

	Description:
		Creates a load loadout hold action interaction

	Parameter(s):
		0: object to add the interaction on to
		1: name to be displayed
		2: where to save the loadout (missionProfileNamespace, profileNamespace, player)
		3: loadout variable name (abreviate name, no spaces)
		4: hold action duration (number)
	Returns:
		Boolean

	Examples:
		[this, "loadout", "player", 5] call ARDN_fnc_loadLoadoutAction;
*/
params [["_obj", ObjNull], ["_name", "loadout"], ["_saveSpace", "player"], ["_duration",5]];

_varName = _name regexReplace ["[^a-zA-Z0-9]",""];
_ARDN_varName = format ["ARDN_%1",_varName];

[
    _obj,
    "Load " + _name,
    "\a3\data_f_destroyer\data\ui\igui\cfg\holdactions\holdAction_unloadvehicle_ca.paa",
    "\a3\data_f_destroyer\data\ui\igui\cfg\holdactions\holdAction_unloadvehicle_ca.paa",
    "_this distance _target < 3",
    "_caller distance _target < 3",
    {if (!alive _target) then {[_target,_actionId] call BIS_fnc_holdActionRemove}},
    {},
    {
		_args = _this select 3;
		_saveSpace = _args select 0;
		_ARDN_varName = _args select 1;
		private _uid = getPlayerUID player;
		_varMissionNamespace = format ["%1_%2", _uid, _ARDN_varName];
		switch (_saveSpace) do {
			case "missionProfileNamespace": {
				_caller setUnitLoadout (missionProfileNamespace getVariable  [_varMissionNamespace,[]]);
			};
			case "profileNamespace": {
				_caller setUnitLoadout (profileNamespace getVariable  [_varMissionNamespace,[]]);
			};
			default {
				_caller setUnitLoadout (player getVariable  [_varMissionNamespace,[]]);
			};
		};
	},
    {},
    [_saveSpace, _ARDN_varName],
    _duration,
    0,
    false,
    false
] call BIS_fnc_holdActionAdd;
true
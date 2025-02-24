/*
	Author: Doskal Aridin

	Description:
		Creates a save loadout interaction

	Parameter(s):
		0: object to add the interaction on to
		1: name to be displayed
		2: where to save the loadout (missionProfileNamespace, profileNamespace, player)
		3: loadout variable name (abreviate name, no spaces)
	Returns:
		Boolean

	Examples:
		[this, "loadout", "player"] call ARDN_fnc_saveLoadoutAction;
*/
params [["_obj", ObjNull], ["_name", "loadout"], ["_saveSpace", "player"]];

_varName = _name regexReplace ["[^a-zA-Z0-9]",""];
_ARDN_varName = format ["ARDN_%1",_varName];

_obj addAction [
"Save " + _name,
	{
		_args = _this select 3;
		_saveSpace = _args select 0;
		_ARDN_varName = _args select 1;
		private _uid = getPlayerUID player;
		_varMissionNamespace = format ["%1_%2", _uid, _ARDN_varName];
		switch (_saveSpace) do {
			case "missionProfileNamespace": {
				missionProfileNamespace setVariable  [_varMissionNamespace, getUnitLoadout player];
			};
			case "profileNamespace": {
				profileNamespace setVariable  [_varMissionNamespace, getUnitLoadout player];
			};
			default {
				player setVariable  [_varMissionNamespace, getUnitLoadout player]; 
			};
		};
		hint "Saved";
	 },
	[_saveSpace, _ARDN_varName],
    1.5,
    true,
    true,
    "",
    "True",
    2,
    false,
    "",
    ""
];
true
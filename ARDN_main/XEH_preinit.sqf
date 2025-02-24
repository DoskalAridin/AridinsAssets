[
    "ARDN_Module_respawnLoadout_saveSpace",
    "LIST",
    ["Save loadout",
	"Saves loadout when exiting the arsenal and respawns players with it."],
    ["Aridin's Addons Settings", "Respawn loadout"],
    [["disabled", "player", "mission", "profile"], ["Disabled", "Player", "Mission", "Profile"], 0],
    true,
	{remoteExec ["ARDN_fnc_respawnModule",0,true];},
    true
] call CBA_fnc_addSetting;

[
    "ARDN_Module_respawnLoadout_saveName",
    "EDITBOX",
    ["Loadout variable name",
	"Variable to use with Profile and Mission namespaces."],
    ["Aridin's Addons Settings", "Respawn loadout"],
    "loadout",
    true,
	{},
    true
] call CBA_fnc_addSetting;

[
    "ARDN_tkTime",
    "SLIDER",
    "Trauma Kit application time",
    ["Aridin's Addons Settings","ACE Medical"],
    [1, 300, 60, 0],
    true
] call CBA_fnc_addSetting;

[
    "ARDN_sideRelationsBLUFOR",
    "LIST",
    ["Force BLUFOR relations with INDP",
	"Default will leave the mission's settings intact on mission start.
	Script runs at mission start and when settings are changed."],
    ["Aridin's Addons Settings", "Force relations"],
    [["default", "friendly", "hostile"], ["Default", "Friendly", "Hostile"], 0],
    true,
	{remoteExec ["ARDN_fnc_forceSideRelations"];}
] call CBA_fnc_addSetting;

[
    "ARDN_sideRelationsOPFOR",
    "LIST",
    ["Force OPFOR relations with INDP",
	"Default will leave the mission's settings intact on mission start.
	Script runs at mission start and when settings are changed."],
    ["Aridin's Addons Settings", "Force relations"],
    [["default", "friendly", "hostile"], ["Default", "Friendly", "Hostile"], 0],
    true,
	{remoteExec ["ARDN_fnc_forceSideRelations"];}
] call CBA_fnc_addSetting;
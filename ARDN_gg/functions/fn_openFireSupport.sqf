createDialog "ARDN_UI_FireSupport";

disableSerialization;
_map = displayCtrl 1001;
_map ctrlMapSetPosition [0,0,1,1];

private _worldSize = worldSize;
private _axis = _worldSize / 2;
private _center = [_axis, _axis , 0];

private _blackBox = createMarkerLocal ["ARDN_GG_blackBox", _center];
"ARDN_GG_blackBox" setMarkerShapeLocal "RECTANGLE";
"ARDN_GG_blackBox" setMarkerSizeLocal [_worldSize, _worldSize];
"ARDN_GG_blackBox" setMarkerBrushLocal "SolidFull";
"ARDN_GG_blackBox" setMarkerColorLocal "ColorBlack";
"ARDN_GG_blackBox" setMarkerDrawPriority -10;

_map ctrlAddEventHandler ["MouseButtonDblClick", {
	_ctrl = _this select 0;
	_x = _this select 2;
	_y = _this select 3;

	_pos = _ctrl posScreenToWorld  [_x, _y];
	ctrlSetText [1002, str _pos];
    deleteMarkerLocal "Fire Support Target";
    createMarkerLocal ["Fire Support Target", _pos];
    "Fire Support Target" setMarkerTypeLocal "mil_destroy_noShadow";
    "Fire Support Target" setMarkerColorLocal "ColorWhite";
}];
_map ctrlAddEventHandler ["Destroy", {
    deleteMarkerLocal "Fire Support Target";
    deleteMarkerLocal "ARDN_GG_blackBox";
}];

{ lbAdd [1500, _x]; } forEach ["40mm (x10)","Mk49 Missle","Mk41 Missle","Flares"];

if (isClass(configFile>>"CfgPatches">>"loadorder_f_vietnam")) then {
    { lbAdd [1500, _x]; } forEach ["Bright Flares"];
};
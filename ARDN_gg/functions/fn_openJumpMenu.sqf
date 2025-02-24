createDialog "ARDN_UI_JumpMenu";

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

	_pos = _ctrl ctrlMapScreenToWorld [_x, _y];
	ctrlSetText [1002, str _pos];
    deleteMarkerLocal "Jump Point";
    createMarkerLocal ["Jump Point", _pos];
    "Jump Point" setMarkerTypeLocal "mil_end_noShadow";
    "Jump Point" setMarkerColorLocal "ColorWhite";
}];
_map ctrlAddEventHandler ["Destroy", {
    deleteMarkerLocal "Jump Point";
    deleteMarkerLocal "ARDN_GG_blackBox";
}];
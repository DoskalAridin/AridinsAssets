params [["_side", 2]];

switch (_side) do {
          default {_side = Independent};
          case 0: {_side = OPFOR};
          case 1: {_side = BLUFOR};
          case 3: {_side = Civilian};
};

private _date = date;
private _ID = format ["%1%2",
                      (if (_date select 3 < 10) then { "0" } else { "" }) + str (_date select 3), 
                      (if (_date select 4 < 10) then { "0" } else { "" }) + str (_date select 4)
                     ];

private _channel = 1;
if (!isMultiplayer) then
{
	_channel = -1;
};

[_side, "ARDN_gg_S21"] commandChat "Coordinates received.";
sleep 1;
[_side, "ARDN_gg_S21"] commandChat "Creating anchor.";
sleep 4;

_markerName = format ["_USER_DEFINED #%1/%2/%3" , clientOwner,_ID, 1];

_marker = createMarker [_markerName, getPos player, _channel, player];

_markerName setMarkerTypeLocal "mil_destroy";
_markerName setMarkerColorLocal "ColorWhite";
_markerName setMarkerAlphaLocal 1;
_markerName setMarkerText format ["Anchor %1", _ID];

[_side, "ARDN_gg_S21"] commandChat "Anchor point established.";
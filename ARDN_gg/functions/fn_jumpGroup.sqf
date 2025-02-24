params ["_caller","_jumpPoint"];



private _nearestMen = nearestObjects [_caller, ["Man"], 5];
_nearestMen deleteAt 0;

private _markMain = createVehicle ["Land_ClutterCutter_small_F", getPos _caller, [], 0, "CAN_COLLIDE"];
private _teleSound = createVehicle ["Crater", _jumpPoint, [], 0, "CAN_COLLIDE"];
private _markArray = [];
{
    private _mark = createVehicle ["Land_ClutterCutter_small_F", getPos _x, [], 0, "CAN_COLLIDE"];
    _mark attachTo [_markMain];
    _markArray pushBack _mark;
} forEach _nearestMen;

_markMain setPos _jumpPoint;

[[["\A3\data_f\ParticleEffects\Universal\Refract",1,0,1], "", "Billboard", 1, 2, [0,0,1], [0,0,0], 1, 1.275, 1, 0, [0,3,6,9,12,15,15,15,15,15,15,15,0], [[1, 1, 1, 1]], [1000], 1, 0, "", "", _caller]] remoteExec ["drop"];
[[["\A3\Data_F\ParticleEffects\Universal\Universal", 16, 12, 16, 0], "", "Billboard", 1, 2, [0,0,1], [0,0,0], 1, 1.275, 1, 0, [0,2,4,6,8,10,10,10,10,10,10,10,10,0], [[0, 0, 0, 1]], [1000], 1, 0, "", "", _caller]] remoteExec ["drop"];

[[["\A3\data_f\ParticleEffects\Universal\Refract",1,0,1], "", "Billboard", 1, 2, [0,0,1], [0,0,0], 1, 1.275, 1, 0, [0,3,6,9,12,15,15,15,15,15,15,15,0], [[1, 1, 1, 1]], [1000], 1, 0, "", "", _teleSound]] remoteExec ["drop"];
[[["\A3\Data_F\ParticleEffects\Universal\Universal", 16, 12, 16, 0], "", "Billboard", 1, 2, [0,0,1], [0,0,0], 1, 1.275, 1, 0, [0,2,4,6,8,10,10,10,10,10,10,10,10,0], [[0, 0, 0, 1]], [1000], 1, 0, "", "", _teleSound]] remoteExec ["drop"];
sleep 0.75;

private _callerID = owner _caller;
[0, "BLACK", 1, 1] remoteExec ["BIS_fnc_fadeEffect", _callerID];
{
    if (isPlayer _x) then {
        private _networkID = owner _x;
        [0, "BLACK", 1, 1] remoteExec ["BIS_fnc_fadeEffect", _networkID];
    };
} forEach _nearestMen;
sleep 1;
_caller setPos (getpos _markMain);
[1, "BLACK", 1, 1] remoteExec ["BIS_fnc_fadeEffect", _callerID];
{
    if (isPlayer _x) then {
        private _networkID = owner _x;
        [1, "BLACK", 1, 1] remoteExec ["BIS_fnc_fadeEffect", _networkID];
    };
    _x setPos getPos (_markArray select _forEachIndex);
} forEach _nearestMen;

[_telesound, selectRandom ["thunder_1","thunder_2"]] remoteExec ["say3D"];
{deleteVehicle _x} forEach _markArray;
deleteVehicle _markMain;

private _nearMen = nearestObjects [_caller, ["Man"], 100];
{
    _x reveal [_caller, 0.1];
} forEach _nearMen

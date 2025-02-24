params ["_caller","_pos","_group", ["_side", 2]];

switch (_side) do {
          default {_side = Independent};
          case 0: {_side = OPFOR};
          case 1: {_side = BLUFOR};
          case 3: {_side = Civilian};
};

_jumpPoint = parseSimpleArray _pos;

if (_group == false) then {
	[_side, "ARDN_gg_S21"] commandChat "Coordinates received.";
	sleep 1;
	[_side, "ARDN_gg_S21"] commandChat "Calculating jump points";
	sleep random [3, 4, 5];
	[_side, "ARDN_gg_S21"] commandChat "Jump calculated.";
	sleep 1;
	[_side, "ARDN_gg_S21"] commandChat "Initiating jump in";
	sleep 1;
	[_side, "ARDN_gg_S21"] commandChat "3";
	sleep 1;
	[_side, "ARDN_gg_S21"] commandChat "2";
	sleep 1;
	[_side, "ARDN_gg_S21"] commandChat "1";
	
    private _teleSound = createVehicle ["Land_Decal_ScorchMark_01_small_F", _jumpPoint, [], 0, "CAN_COLLIDE"];
    
	[0, "BLACK", 1, 1] spawn BIS_fnc_fadeEffect;
    sleep 1.25;
    
    [[["\A3\data_f\ParticleEffects\Universal\Refract",1,0,1], "", "Billboard", 1, 2, [0,0,1], [0,0,0], 1, 1.275, 1, 0, [0,1,2,4,6,8,0,0,0,0,0,0,0], [[1, 1, 1, 1]], [1000], 1, 0, "", "", player]] remoteExec ["drop"];
    [[["\A3\Data_F\ParticleEffects\Universal\Universal", 16, 12, 16, 0], "", "Billboard", 1, 2, [0,0,1], [0,0,0], 1, 1.275, 1, 0, [0,0.5,1,1.5,2,2.5,0,0,0,0,0,0,0,0], [[0, 0, 0, 1]], [1000], 1, 0, "", "", player]] remoteExec ["drop"];
    
    [[["\A3\data_f\ParticleEffects\Universal\Refract",1,0,1], "", "Billboard", 1, 2, [0,0,1], [0,0,0], 1, 1.275, 1, 0, [0,1,2,4,6,8,0,0,0,0,0,0,0], [[1, 1, 1, 1]], [1000], 1, 0, "", "", _teleSound]] remoteExec ["drop"];
    [[["\A3\Data_F\ParticleEffects\Universal\Universal", 16, 12, 16, 0], "", "Billboard", 1, 2, [0,0,1], [0,0,0], 1, 1.275, 1, 0, [0,0.5,1,1.5,2,2.5,0,0,0,0,0,0,0,0], [[0, 0, 0, 1]], [1000], 1, 0, "", "", _teleSound]] remoteExec ["drop"];
    
	sleep 0.75;
    
	_caller setPos _jumpPoint;
	[1, "BLACK", 1, 1] spawn BIS_fnc_fadeEffect; 

	
	[_telesound, selectRandom ["thunder_1","thunder_2"]] remoteExec ["say3D"];
	private _nearMen = nearestObjects [_caller, ["Man"], 100];
	{
		_x reveal [_caller, 0.1];
	} forEach _nearMen

} else {
	[_side, "ARDN_gg_S21"] commandChat "Coordinates received.";
	sleep 1;
	[_side, "ARDN_gg_S21"] commandChat "Calculating jump point.";
	sleep random [4, 6, 10];
	[_side, "ARDN_gg_S21"] commandChat "Jump calculated.";
	sleep 1;
	[_side, "ARDN_gg_S21"] commandChat "Initiating jump in";
	sleep 1;
	[_side, "ARDN_gg_S21"] commandChat "3";
	sleep 1;
	[_side, "ARDN_gg_S21"] commandChat "2";
	sleep 1;
	[_side, "ARDN_gg_S21"] commandChat "1";
	[_caller, _jumpPoint] remoteExec ["ARDN_fnc_jumpGroup",2];
};
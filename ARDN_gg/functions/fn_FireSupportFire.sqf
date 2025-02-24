params [["_target", [0,0,0]], ["_ammo", "Mk49 Missle"], ["_radius", 25], ["_rounds", 5], ["_side", 2]];

switch (_side) do {
          default {_side = Independent};
          case 0: {_side = OPFOR};
          case 1: {_side = BLUFOR};
          case 3: {_side = Civilian};
};

private _target = _this select 0;
private _ammo = _this select 1;
private _radius = _this select 2;
private _rounds = _this select 3;
private _caller = _this select 4;

private _aimTime = (15 - ((_radius - 10) / 90) * 14);

switch (_ammo) do {
	default {
        private _timeOnTarget = _aimTime + 10;
        if (_timeOnTarget < 14) then {_timeOnTarget = 14};
        [_side, "ARDN_gg_L12"] commandChat "Fire mission received.";
        sleep 2;
        [_side, "ARDN_gg_L12"] commandChat format ["ETA, %1 seconds.", (round _timeOnTarget) - 2];
        
        private _portalPos = _target;
        _portalPos set [2, 1000];
        private _portalRadius = [0,_radius + 10,_radius + 10,_radius + 10,_radius + 10,_radius + 10,_radius + 10,_radius + 10,0];
        private _portalRadiusHalf = [0,_radius / 2 + 10,_radius / 2 + 10,_radius / 2 + 10,_radius / 2 + 10,_radius / 2 + 10,_radius / 2 + 10,_radius / 2 + 10,0];
        private _portalLife = ((3 * _rounds) + 10);
        private _portal = createVehicle ["ARDN_fbc_threshold_voidSpace_4", _portalPos];
        _portal hideObjectGlobal true;
        
        sleep 1;
        [_side, "ARDN_gg_L12"] commandChat "Shot!";
		sleep (_timeOnTarget - 13);
        
        [[["\A3\Data_F\ParticleEffects\Universal\Universal", 16, 12, 16, 0], "", "Billboard", 1, _timeOnTarget, [0,0,0], [0,0,0], 1, 1.275, 1, 0, _portalRadiusHalf, [[0, 0, 0, 1]], [1000], 1, 0, "", "", _portal]] remoteExec ["drop"];
        [[["\A3\Data_F\ParticleEffects\Universal\Universal", 16, 12, 16, 0], "", "Billboard", 1, _timeOnTarget, [0,0,0], [0,0,0], 1, 1.275, 1, 0, _portalRadius, [[0, 0, 0, 1]], [1000], 1, 0, "", "", _portal]] remoteExec ["drop"];
        
        [_side, "ARDN_gg_L12"] commandChat "Splash!";
        sleep 10;
        
        for "_i" from 1 to _rounds do 
        {
            private  _pos = [[[_target, _radius]],[]] call BIS_fnc_randomPos;
            _pos set [2, 1000];
            private _projectile = createvehicle ["Sh_155mm_AMOS",_pos,[],0,"none"];
            _projectile setvelocity [0,0,-200];
            _projectile setVectorUp [0,-1,-0.001];
            sleep 3;
        };
        [_side, "ARDN_gg_L12"] commandChat "Fire mission complete.";
	};
	case "82mm": {
        private _timeOnTarget = _aimTime + 10;
        if (_timeOnTarget < 14) then {_timeOnTarget = 14};
        [_side, "ARDN_gg_L12"] commandChat "Fire mission received.";
        sleep 2;
        [_side, "ARDN_gg_L12"] commandChat format ["ETA, %1 seconds.", (round _timeOnTarget) - 2];
        
        private _portalPos = _target;
        _portalPos set [2, 1000];
        private _portalRadius = [0,_radius + 10,_radius + 10,_radius + 10,_radius + 10,_radius + 10,_radius + 10,_radius + 10,0];
        private _portalRadiusHalf = [0,_radius / 2 + 10,_radius / 2 + 10,_radius / 2 + 10,_radius / 2 + 10,_radius / 2 + 10,_radius / 2 + 10,_radius / 2 + 10,0];
        private _portalLife = ((2 * _rounds) + 10);
        private _portal = createVehicle ["ARDN_fbc_threshold_voidSpace_4", _portalPos];
        _portal hideObjectGlobal true;
        
        sleep 1;
        [_side, "ARDN_gg_L12"] commandChat "Shot!";
		sleep (_timeOnTarget - 13);
        
        [[["\A3\Data_F\ParticleEffects\Universal\Universal", 16, 12, 16, 0], "", "Billboard", 1, _timeOnTarget, [0,0,0], [0,0,0], 1, 1.275, 1, 0, _portalRadiusHalf, [[0, 0, 0, 1]], [1000], 1, 0, "", "", _portal]] remoteExec ["drop"];
        [[["\A3\Data_F\ParticleEffects\Universal\Universal", 16, 12, 16, 0], "", "Billboard", 1, _timeOnTarget, [0,0,0], [0,0,0], 1, 1.275, 1, 0, _portalRadius, [[0, 0, 0, 1]], [1000], 1, 0, "", "", _portal]] remoteExec ["drop"];
        
        [_side, "ARDN_gg_L12"] commandChat "Splash!";
        sleep 10;
        
        for "_i" from 1 to _rounds do 
        {
            private  _pos = [[[_target, _radius]],[]] call BIS_fnc_randomPos;
            _pos set [2, 1000];
            private _projectile = createvehicle ["Sh_82mm_AMOS",_pos,[],0,"none"];
            _projectile setvelocity [0,0,-200];
            _projectile setVectorUp [0,-1,-0.001];
            sleep 2;
        };
        [_side, "ARDN_gg_L12"] commandChat "Fire mission complete.";
	};
	case "Flares": {
		private _timeOnTarget = _aimTime + 10;
        if (_timeOnTarget < 14) then {_timeOnTarget = 14};
        [_side, "ARDN_gg_L12"] commandChat "Fire mission received.";
        sleep 2;
        [_side, "ARDN_gg_L12"] commandChat format ["ETA, %1 seconds.", (round _timeOnTarget) - 2];
        
        private _portalPos = _target;
        _portalPos set [2, 400];
        private _portalRadius = [0,_radius + 10,_radius + 10,_radius + 10,_radius + 10,_radius + 10,_radius + 10,_radius + 10,0];
        private _portalRadiusHalf = [0,_radius / 2 + 10,_radius / 2 + 10,_radius / 2 + 10,_radius / 2 + 10,_radius / 2 + 10,_radius / 2 + 10,_radius / 2 + 10,0];
        private _portalLife = ((30 * _rounds) + 10);
        private _portal = createVehicle ["ARDN_fbc_threshold_voidSpace_4", _portalPos];
        _portal hideObjectGlobal true;
        
        sleep 1;
        [_side, "ARDN_gg_L12"] commandChat "Shot!";
		sleep (_timeOnTarget - 13);
        
        [[["\A3\Data_F\ParticleEffects\Universal\Universal", 16, 12, 16, 0], "", "Billboard", 1, _timeOnTarget, [0,0,0], [0,0,0], 1, 1.275, 1, 0, _portalRadiusHalf, [[0, 0, 0, 1]], [1000], 1, 0, "", "", _portal]] remoteExec ["drop"];
        [[["\A3\Data_F\ParticleEffects\Universal\Universal", 16, 12, 16, 0], "", "Billboard", 1, _timeOnTarget, [0,0,0], [0,0,0], 1, 1.275, 1, 0, _portalRadius, [[0, 0, 0, 1]], [1000], 1, 0, "", "", _portal]] remoteExec ["drop"];
        
        [_side, "ARDN_gg_L12"] commandChat "Splash!";
        sleep 10;
        
        for "_i" from 1 to _rounds do 
        {
            private  _pos = [[[_target, _radius]],[]] call BIS_fnc_randomPos;
            _pos set [2, 300];
            private _projectile = createvehicle ["F_20mm_White",_pos,[],0,"none"];
            _projectile setvelocity [0,0,-2];
            _projectile setVectorUp [0,-1,-0.001];
            sleep 30;
        };
        [_side, "ARDN_gg_L12"] commandChat "Fire mission complete.";
	};
	case "40mm (x10)": {
		private _timeOnTarget = _aimTime + 10;
        if (_timeOnTarget < 14) then {_timeOnTarget = 14};
        [_side, "ARDN_gg_L12"] commandChat "Fire mission received.";
        sleep 2;
        [_side, "ARDN_gg_L12"] commandChat format ["ETA, %1 seconds.", (round _timeOnTarget) - 2];
        
        private _portalPos = _target;
        _portalPos set [2, 1000];
        private _portalRadius = [0,_radius + 10,_radius + 10,_radius + 10,_radius + 10,_radius + 10,_radius + 10,_radius + 10,0];
        private _portalRadiusHalf = [0,_radius / 2 + 10,_radius / 2 + 10,_radius / 2 + 10,_radius / 2 + 10,_radius / 2 + 10,_radius / 2 + 10,_radius / 2 + 10,0];
        private _portalLife = ((1.5 * _rounds) + 10);
        private _portal = createVehicle ["ARDN_fbc_threshold_voidSpace_4", _portalPos];
        _portal hideObjectGlobal true;
        
        sleep 1;
        [_side, "ARDN_gg_L12"] commandChat "Shot!";
		sleep (_timeOnTarget - 13);
        
        [[["\A3\Data_F\ParticleEffects\Universal\Universal", 16, 12, 16, 0], "", "Billboard", 1, _timeOnTarget, [0,0,0], [0,0,0], 1, 1.275, 1, 0, _portalRadiusHalf, [[0, 0, 0, 1]], [1000], 1, 0, "", "", _portal]] remoteExec ["drop"];
        [[["\A3\Data_F\ParticleEffects\Universal\Universal", 16, 12, 16, 0], "", "Billboard", 1, _timeOnTarget, [0,0,0], [0,0,0], 1, 1.275, 1, 0, _portalRadius, [[0, 0, 0, 1]], [1000], 1, 0, "", "", _portal]] remoteExec ["drop"];
        
        [_side, "ARDN_gg_L12"] commandChat "Splash!";
        sleep 10;
        
		_rounds = _rounds * 10;
        for "_i" from 1 to _rounds do 
        {
            private  _pos = [[[_target, _radius]],[]] call BIS_fnc_randomPos;
            _pos set [2, 1000];
            private _projectile = createvehicle ["G_40mm_HE",_pos,[],0,"none"];
            _projectile setvelocity [0,0,-200];
            _projectile setVectorUp [0,-1,-0.001];
            sleep 0.15;
        };
        [_side, "ARDN_gg_L12"] commandChat "Fire mission complete.";
	};
	case "155mm LG": {
		private _timeOnTarget = _aimTime + 10;
        if (_timeOnTarget < 14) then {_timeOnTarget = 14};
        [_side, "ARDN_gg_L12"] commandChat "Fire mission received.";
        sleep 2;
        [_side, "ARDN_gg_L12"] commandChat format ["ETA, %1 seconds.", (round _timeOnTarget) - 2];
        
        private _portalPos = _target;
        _portalPos set [2, 1000];
        private _portalRadius = [0,_radius + 10,_radius + 10,_radius + 10,_radius + 10,_radius + 10,_radius + 10,_radius + 10,0];
        private _portalRadiusHalf = [0,_radius / 2 + 10,_radius / 2 + 10,_radius / 2 + 10,_radius / 2 + 10,_radius / 2 + 10,_radius / 2 + 10,_radius / 2 + 10,0];
        private _portalLife = ((3 * _rounds) + 10);
        private _portal = createVehicle ["ARDN_fbc_threshold_voidSpace_4", _portalPos];
        _portal hideObjectGlobal true;
        
        sleep 1;
        [_side, "ARDN_gg_L12"] commandChat "Shot!";
		sleep (_timeOnTarget - 13);
        
        [[["\A3\Data_F\ParticleEffects\Universal\Universal", 16, 12, 16, 0], "", "Billboard", 1, _timeOnTarget, [0,0,0], [0,0,0], 1, 1.275, 1, 0, _portalRadiusHalf, [[0, 0, 0, 1]], [1000], 1, 0, "", "", _portal]] remoteExec ["drop"];
        [[["\A3\Data_F\ParticleEffects\Universal\Universal", 16, 12, 16, 0], "", "Billboard", 1, _timeOnTarget, [0,0,0], [0,0,0], 1, 1.275, 1, 0, _portalRadius, [[0, 0, 0, 1]], [1000], 1, 0, "", "", _portal]] remoteExec ["drop"];
        
        [_side, "ARDN_gg_L12"] commandChat "Splash!";
        sleep 10;
        
        for "_i" from 1 to _rounds do 
        {
            private  _pos = [[[_target, _radius]],[]] call BIS_fnc_randomPos;
            _pos set [2, 1000];
            private _projectile = createvehicle ["Sh_155mm_AMOS",_pos,[],0,"none"];
            _projectile setvelocity [0,0,-50];
            _projectile setVectorUp [0,-1,-0.001];
            sleep 3;
        };
        [_side, "ARDN_gg_L12"] commandChat "Fire mission complete.";
	};
    case "Bright Flares": {
		private _timeOnTarget = _aimTime + 10;
        if (_timeOnTarget < 14) then {_timeOnTarget = 14};
        [_side, "ARDN_gg_L12"] commandChat "Fire mission received.";
        sleep 2;
        [_side, "ARDN_gg_L12"] commandChat format ["ETA, %1 seconds.", (round _timeOnTarget) - 2];
        
        private _portalPos = _target;
        _portalPos set [2, 400];
        private _portalRadius = [0,_radius + 10,_radius + 10,_radius + 10,_radius + 10,_radius + 10,_radius + 10,_radius + 10,0];
        private _portalRadiusHalf = [0,_radius / 2 + 10,_radius / 2 + 10,_radius / 2 + 10,_radius / 2 + 10,_radius / 2 + 10,_radius / 2 + 10,_radius / 2 + 10,0];
        private _portalLife = ((30 * _rounds) + 10);
        private _portal = createVehicle ["ARDN_fbc_threshold_voidSpace_4", _portalPos];
        _portal hideObjectGlobal true;
        
        sleep 1;
        [_side, "ARDN_gg_L12"] commandChat "Shot!";
		sleep (_timeOnTarget - 13);
        
        [[["\A3\Data_F\ParticleEffects\Universal\Universal", 16, 12, 16, 0], "", "Billboard", 1, _timeOnTarget, [0,0,0], [0,0,0], 1, 1.275, 1, 0, _portalRadiusHalf, [[0, 0, 0, 1]], [1000], 1, 0, "", "", _portal]] remoteExec ["drop"];
        [[["\A3\Data_F\ParticleEffects\Universal\Universal", 16, 12, 16, 0], "", "Billboard", 1, _timeOnTarget, [0,0,0], [0,0,0], 1, 1.275, 1, 0, _portalRadius, [[0, 0, 0, 1]], [1000], 1, 0, "", "", _portal]] remoteExec ["drop"];
        
        [_side, "ARDN_gg_L12"] commandChat "Splash!";
        sleep 10;
        
        for "_i" from 1 to _rounds do 
        {
            private  _pos = [[[_target, _radius]],[]] call BIS_fnc_randomPos;
            _pos set [2, 300];
            private _projectile = createvehicle ["vn_flare_plane_lg_w_ammo",_pos,[],0,"none"];
            _projectile setvelocity [0,0,-2];
            _projectile setVectorUp [0,-1,-0.001];
            sleep 30;
        };
        [_side, "ARDN_gg_L12"] commandChat "Fire mission complete.";
	};
    case "Mk49 Missle": {
		private _timeOnTarget = _aimTime + 10;
        if (_timeOnTarget < 14) then {_timeOnTarget = 14};
        [_side, "ARDN_gg_L12"] commandChat "Fire mission received.";
        sleep 2;
        [_side, "ARDN_gg_L12"] commandChat format ["ETA, %1 seconds.", (round _timeOnTarget) - 2];
        
        private _portalPos = _target;
        _portalPos set [2, 1000];
        private _portalRadius = [0,_radius + 10,_radius + 10,_radius + 10,_radius + 10,_radius + 10,_radius + 10,_radius + 10,0];
        private _portalRadiusHalf = [0,_radius / 2 + 10,_radius / 2 + 10,_radius / 2 + 10,_radius / 2 + 10,_radius / 2 + 10,_radius / 2 + 10,_radius / 2 + 10,0];
        private _portalLife = ((0.15 * _rounds) + 10);
        private _portal = createVehicle ["ARDN_fbc_threshold_voidSpace_4", _portalPos];
        _portal hideObjectGlobal true;
        
        sleep 1;
        [_side, "ARDN_gg_L12"] commandChat "Shot!";
		sleep (_timeOnTarget - 13);
        
        [[["\A3\Data_F\ParticleEffects\Universal\Universal", 16, 12, 16, 0], "", "Billboard", 1, _timeOnTarget, [0,0,0], [0,0,0], 1, 1.275, 1, 0, _portalRadiusHalf, [[0, 0, 0, 1]], [1000], 1, 0, "", "", _portal]] remoteExec ["drop"];
        [[["\A3\Data_F\ParticleEffects\Universal\Universal", 16, 12, 16, 0], "", "Billboard", 1, _timeOnTarget, [0,0,0], [0,0,0], 1, 1.275, 1, 0, _portalRadius, [[0, 0, 0, 1]], [1000], 1, 0, "", "", _portal]] remoteExec ["drop"];
        
        [_side, "ARDN_gg_L12"] commandChat "Splash!";
        sleep 10;
        
        for "_i" from 1 to _rounds do 
        {
            private  _pos = [[[_target, _radius]],[]] call BIS_fnc_randomPos;
            _pos set [2, 1000];
            private _projectile = createvehicle ["ammo_Missile_rim116",_pos,[],0,"none"];
            _projectile setvelocity [0,0,-200];
            _projectile setVectorUp [0,-1,-0.001];
            sleep 0.15;
        };
        [_side, "ARDN_gg_L12"] commandChat "Fire mission complete.";
	};
    case "Mk41 Missle": {
		private _timeOnTarget = _aimTime + 10;
        if (_timeOnTarget < 14) then {_timeOnTarget = 14};
        [_side, "ARDN_gg_L12"] commandChat "Fire mission received.";
        sleep 2;
        [_side, "ARDN_gg_L12"] commandChat format ["ETA, %1 seconds.", (round _timeOnTarget) - 2];
        
        private _portalPos = _target;
        _portalPos set [2, 1000];
        private _portalRadius = [0,_radius + 10,_radius + 10,_radius + 10,_radius + 10,_radius + 10,_radius + 10,_radius + 10,0];
        private _portalRadiusHalf = [0,_radius / 2 + 10,_radius / 2 + 10,_radius / 2 + 10,_radius / 2 + 10,_radius / 2 + 10,_radius / 2 + 10,_radius / 2 + 10,0];
        private _portalLife = ((10 * _rounds) + 10);
        private _portal = createVehicle ["ARDN_fbc_threshold_voidSpace_4", _portalPos];
        _portal hideObjectGlobal true;
        
        sleep 1;
        [_side, "ARDN_gg_L12"] commandChat "Shot!";
		sleep (_timeOnTarget - 13);
        
        [[["\A3\Data_F\ParticleEffects\Universal\Universal", 16, 12, 16, 0], "", "Billboard", 1, _timeOnTarget, [0,0,0], [0,0,0], 1, 1.275, 1, 0, _portalRadiusHalf, [[0, 0, 0, 1]], [1000], 1, 0, "", "", _portal]] remoteExec ["drop"];
        [[["\A3\Data_F\ParticleEffects\Universal\Universal", 16, 12, 16, 0], "", "Billboard", 1, _timeOnTarget, [0,0,0], [0,0,0], 1, 1.275, 1, 0, _portalRadius, [[0, 0, 0, 1]], [1000], 1, 0, "", "", _portal]] remoteExec ["drop"];
        
        [_side, "ARDN_gg_L12"] commandChat "Splash!";
        sleep 10;
        
        for "_i" from 1 to _rounds do 
        {
            private  _pos = [[[_target, _radius]],[]] call BIS_fnc_randomPos;
            _pos set [2, 1000];
            private _projectile = createvehicle ["ammo_Missile_Cruise_01",_pos,[],0,"none"];
            _projectile setvelocity [0,0,-200];
            _projectile setVectorUp [0,-1,-0.001];
            sleep 10;
        };
        [_side, "ARDN_gg_L12"] commandChat "Fire mission complete.";
	};
    case "40mm (x20)": {
		private _timeOnTarget = _aimTime + 10;
        if (_timeOnTarget < 14) then {_timeOnTarget = 14};
        [_side, "ARDN_gg_L12"] commandChat "Fire mission received.";
        sleep 2;
        [_side, "ARDN_gg_L12"] commandChat format ["ETA, %1 seconds.", (round _timeOnTarget) - 2];
        
        private _portalPos = _target;
        _portalPos set [2, 1000];
        private _portalRadius = [0,_radius + 10,_radius + 10,_radius + 10,_radius + 10,_radius + 10,_radius + 10,_radius + 10,0];
        private _portalRadiusHalf = [0,_radius / 2 + 10,_radius / 2 + 10,_radius / 2 + 10,_radius / 2 + 10,_radius / 2 + 10,_radius / 2 + 10,_radius / 2 + 10,0];
        private _portalLife = ((2 * _rounds) + 10);
        private _portal = createVehicle ["ARDN_fbc_threshold_voidSpace_4", _portalPos];
        _portal hideObjectGlobal true;
        
        sleep 1;
        [_side, "ARDN_gg_L12"] commandChat "Shot!";
		sleep (_timeOnTarget - 13);
        
        [[["\A3\Data_F\ParticleEffects\Universal\Universal", 16, 12, 16, 0], "", "Billboard", 1, _timeOnTarget, [0,0,0], [0,0,0], 1, 1.275, 1, 0, _portalRadiusHalf, [[0, 0, 0, 1]], [1000], 1, 0, "", "", _portal]] remoteExec ["drop"];
        [[["\A3\Data_F\ParticleEffects\Universal\Universal", 16, 12, 16, 0], "", "Billboard", 1, _timeOnTarget, [0,0,0], [0,0,0], 1, 1.275, 1, 0, _portalRadius, [[0, 0, 0, 1]], [1000], 1, 0, "", "", _portal]] remoteExec ["drop"];
        
        [_side, "ARDN_gg_L12"] commandChat "Splash!";
        sleep 10;
        
        _rounds = _rounds * 20;
        for "_i" from 1 to _rounds do 
        {
            private  _pos = [[[_target, _radius]],[]] call BIS_fnc_randomPos;
            _pos set [2, 1000];
            private _projectile = createvehicle ["B_40mm_GPR_Tracer_Red",_pos,[],0,"none"];
            _projectile setvelocity [0,0,-400];
            _projectile setVectorUp [0,-1,-0.001];
            sleep 0.1;
        };
        [_side, "ARDN_gg_L12"] commandChat "Fire mission complete.";
    };
};
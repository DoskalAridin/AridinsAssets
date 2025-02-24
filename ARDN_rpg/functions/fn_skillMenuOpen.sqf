/*
	Author: Doskal Aridin

	Description:
		Opens skill menu
        
    Parameters:

	Returns:

	Examples:
		 call ARDN_fnc_skillMenuOpen;

*/


private _UID = getPlayerUID player;
private _playerSkills = ARDN_skills getOrDefault [_UID, [false,false,false,false,30,20,10,10,0,0,0,10,0,0,10,0,10,10,0,0,10,20,10,0,20,0,0,"NONE"],true];
createDialog "ARDN_skillMenu";

ctrlSetText [1009, format ["%1", _playerSkills select 0]]; // medic
ctrlSetText [1013, format ["%1", _playerSkills select 1]]; // doctor
ctrlSetText [1014, format ["%1", _playerSkills select 2]]; // engineer
ctrlSetText [1015, format ["%1", _playerSkills select 3]]; // eod

ctrlSetText [1005, format ["%1%2", _playerSkills select 4,"%"]]; // athletics
ctrlSetText [1006, format ["%1%2", _playerSkills select 5,"%"]]; // firearms
ctrlSetText [1007, format ["%1%2", _playerSkills select 6,"%"]]; // stealth

ctrlSetText [1019, format ["%1%2", _playerSkills select 7,"%"]]; // accounting
ctrlSetText [1039, format ["%1%2", _playerSkills select 8,"%"]]; // anthropology
ctrlSetText [1040, format ["%1%2", _playerSkills select 9,"%"]]; // archaology
ctrlSetText [1041, format ["%1%2", _playerSkills select 10,"%"]]; // arts
ctrlSetText [1042, format ["%1%2", _playerSkills select 11,"%"]]; // bureacracy
ctrlSetText [1043, format ["%1%2", _playerSkills select 12,"%"]]; // com sci
ctrlSetText [1044, format ["%1%2", _playerSkills select 13,"%"]]; // craft
ctrlSetText [1047, format ["%1%2", _playerSkills select 14,"%"]]; // criminology
ctrlSetText [1045, format ["%1%2", _playerSkills select 15,"%"]]; // forensics
ctrlSetText [1048, format ["%1%2", _playerSkills select 16,"%"]]; // history
ctrlSetText [1049, format ["%1%2", _playerSkills select 17,"%"]]; // HUMINT
ctrlSetText [1050, format ["%1%2", _playerSkills select 18,"%"]]; // law
ctrlSetText [1030, format ["%1%2", _playerSkills select 19,"%"]]; // mil sci
ctrlSetText [1052, format ["%1%2", _playerSkills select 20,"%"]]; // occult
ctrlSetText [1053, format ["%1%2", _playerSkills select 21,"%"]]; // persuade
ctrlSetText [1054, format ["%1%2", _playerSkills select 22,"%"]]; // psychotherapy
ctrlSetText [1055, format ["%1%2", _playerSkills select 23,"%"]]; // science
ctrlSetText [1056, format ["%1%2", _playerSkills select 24,"%"]]; // search
ctrlSetText [1057, format ["%1%2", _playerSkills select 25,"%"]]; // SIGINT
ctrlSetText [1058, format ["%1%2", _playerSkills select 26,"%"]]; // unnatural
ctrlSetText [1059, format ["%1", _playerSkills select 27]]; // CONDES

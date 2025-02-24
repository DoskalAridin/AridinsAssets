/*
	Author: Doskal Aridin

	Description:
		Sets side relations with INDP
		
*/


if (ARDN_sideRelationsBLUFOR != "default") then {
	if (ARDN_sideRelationsBLUFOR == "friendly") then {
		blufor setFriend [independent, 1];
		independent setFriend [blufor, 1];
	} else {
		blufor setFriend [independent, 0];
		independent setFriend [blufor, 0];
	};
};

if (ARDN_sideRelationsOPFOR != "default") then {
	if (ARDN_sideRelationsOPFOR == "friendly") then {
		opfor setFriend [independent, 1];
		independent setFriend [opfor, 1];
	} else {
		opfor setFriend [independent, 0];
		independent setFriend [opfor, 0];
	};
};
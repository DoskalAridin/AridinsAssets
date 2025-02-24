/*
	Author: Doskal Aridin

	Description:
		Server execute.
        Goes through variable "ARDN_skillsToImprove" and improves each players skills, applying it to "ARDN_skills" saving and broadcasting the new variable.
        
    Parameters:

	Returns:

	Examples:
		 call ARDN_fnc_improveSkills;

*/
if (isServer == true) then {
    {
        private _UID = _x;
        private _skillList = ARDN_skills get _UID;
        {
            private _skill = _skillList select _x;
            if (typeName _skill == "BOOL") then {
                _skillList set [_x, true];
            } else {
                _skill = _skill + 1;
                _skillList set [_x, _skill];
            };
        } forEach _y;
        ARDN_skills set [_UID, _skillList];
    } forEach ARDN_skillsToImprove;
    publicVariable "ARDN_skills";
    saveMissionProfileNamespace
} else {hint "ERROR: Function needs to be called by server"};
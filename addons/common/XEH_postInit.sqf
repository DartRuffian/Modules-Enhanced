#include "script_component.hpp"

// Warn players of mismatched version on mission start - non editor
[{
    !is3DEN &&
    alive player
}, {
    private _missionVersion = getMissionConfigValue [QGVAR(MissionVersion), ""];

    if (_missionVersion isEqualTo "") exitWith {};
    if (_missionVersion isEqualTo CURRENT_VERSION) exitWith {};

    systemChat FORMAT_2(LELSTRING(Error,MismatchedVersions_Player),_missionVersion,CURRENT_VERSION);
}, [], 20, {}] call CBA_fnc_waitUntilAndExecute;
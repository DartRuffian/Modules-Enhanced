#include "script_component.hpp"

params [
    ["_mode", "", [""]],
    ["_input", [], [[]]]
];
_input params [
    ["_module", objNull, [objNull]],
    ["_isActivated", false, [true]],
    ["_isCuratorPlaced", false, [true]]
];

if (_mode in ["dragged3DEN", "unregisteredFromWorld3DEN"]) exitWith {};

// Variables
private _area = _module getVariable ["ObjectArea", [50, 50, 0, false, -1]];
private _faction = _module getVariable ["Faction", 0];
private _siteType = _module getVariable ["Type", 1];
private _buildingOccupation = _module getVariable ["BuildingOccupation", 0.5];
private _addTeleporter = _module getVariable ["AddTeleporter", 1];

// Verify Variables
if (_buildingOccupation < 0) then {
    _buildingOccupation = 0;
    _module setVariable ["BuildingOccupation", 0, true];
};
if (_buildingOccupation > 1) then {
    _buildingOccupation = 1;
    _module setVariable ["BuildingOccupation", 1, true];
};

switch _mode do {
    case "init": {
        if (is3DEN) exitWith {};

        [_module, _faction, _siteType, _buildingOccupation, _addTeleporter] call EFUNC(sites,siteInit);
    };

    default {};
};
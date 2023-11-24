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

if (!is3DEN && {!_isActivated}) exitWith {};
if (_mode in ["dragged3DEN", "unregisteredFromWorld3DEN"]) exitWith {};

// Variables
private _consumptionCoef = _module getVariable ["ConsumptionCoef", 1];
private _vehicles = synchronizedObjects _module select {_x isKindOf "AllVehicles"};

// Verify Variables
if (_consumptionCoef < 0) then {_consumption = 0};
if (_vehicles isEqualTo []) exitWith {};

switch _mode do {
    case "init": {
        if (is3DEN) exitWith {};

        [_vehicles, _consumptionCoef] call FUNC(fuelConsumption);
    };
};
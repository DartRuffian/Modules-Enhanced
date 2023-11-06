params [
    ["_module"],
    ["_area"],
    ["_faction"],
    ["_siteType"],
    ["_buildingOccupation"],
    ["_addTeleporter"],
    ["_flagClass"]
];

private _center = _area select 0;

// Create flagpole
private _flagPos = [_center, 0, 10, 2, 0, 0.1, 0, [], _center] call BIS_fnc_findSafePos;
private _flagpole = createVehicle [_flagClass, _flagPos, [], 0, "NONE"];

// Create units

// Give waypoints

// Create action for adding units

// Register to teleport system
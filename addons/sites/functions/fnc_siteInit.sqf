params [
    ["_module"],
    ["_area"],
    ["_faction"],
    ["_siteType"],
    ["_buildingOccupation"],
    ["_addTeleporter"]
];

// Address area
_area = [getPosATL _module] + _area;
_this set [1, _area];

// --- Faction Data --- //
private _flagClass = switch _faction do {
    case 0;
    case 1;
    case 2: {
        "Flag_NATO_F"
    };
    case 4;
    case 5;
    case 6: {
        "Flag_CSAT_F"
    };
    case 8: {
        "Flag_AAF_F"
    };
    case 3;
    case 7;
    case 9: {
        "Flag_FIA_F"
    };
    case 10: {
        "Flag_EAF_F"
    };
};
_this pushBack _flagClass;

// Execute
switch _siteType do {
    case 0: {_this call FUNC(siteRoadblock)};
    case 1: {_this call FUNC(siteObservationPost)};
    case 2: {_this call FUNC(siteRadar)};
    case 3: {_this call FUNC(siteAA)};
    case 4: {_this call FUNC(siteSAM)};
    case 5: {_this call FUNC(siteFirebase)};
    case 6: {_this call FUNC(siteBase)};
    default {};
};
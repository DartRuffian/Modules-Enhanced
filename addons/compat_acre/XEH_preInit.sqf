#include "script_component.hpp"

#include "XEH_PREP.hpp"

// Event handler for starting acre jamming function
[QEGVAR(communicationJammer,jammerCreated), {
    INFO_1("%1 | ACRE Jammer Detected: Starting Function", QFUNC(initCommJammer));

    _this call FUNC(initCommJammer);
}] call CBA_fnc_addEventHandler;
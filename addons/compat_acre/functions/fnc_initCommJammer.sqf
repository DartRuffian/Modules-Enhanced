#include "script_component.hpp"

params ["_module", "_object", "_area"];

// Frame handler for radio signal
[{
    params ["_args", "_handle"];

    _args params ["_module", "_object", "_area"];

    // Early exits + destruction of handlers
    if (!alive _module || !alive _object) exitWith {
        _handle call CBA_fnc_removePerFrameHandler;
    };

    // Update area + location of object
    _area set [0, getPosATL _object];

    // See if player is in area
    private _playerInArea = player inArea _area;
    if !(_playerInArea) exitWith {
        [{}] call acre_api_fnc_setCustomSignalFunc;
    };

    [{
        // ACRE signal processing
        private _coreSignal = _this call acre_sys_signal_fnc_getSignalCore;
        _coreSignal params ["_Px", "_maxSignal"];

        // Modify signal
        private _signalJam = (player getVariable [QEGVAR(communicationJammer,signal_jamAmounts), []]) apply {_x select 1};
        if (_signalJam isEqualTo []) exitWith {};
        _signalJam = selectMax _signalJam;

        private _Px = _Px * (1 - _signalJam) max 0;
        private _maxSignal = _maxSignal * (1 - _signalJam) max 0;
        
        // Return final signal
        [_Px, _maxSignal]
    }] call acre_api_fnc_setCustomSignalFunc;

}, 0, [_module, _object, _area]] call CBA_fnc_addPerFrameHandler;
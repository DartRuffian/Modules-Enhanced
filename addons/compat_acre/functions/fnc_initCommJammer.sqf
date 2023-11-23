#include "script_component.hpp"

if !(isNil QGVAR(signal_processing)) exitWith {};
GVAR(signal_processing) = true;

[{
    // ACRE signal processing
    private _coreSignal = _this call acre_sys_signal_fnc_getSignalCore;
    _coreSignal params ["_Px", "_maxSignal"];

    private _data = player getVariable [QEGVAR(communicationjammer,signal_jamAmounts), []];
    if (_data isEqualTo []) exitWith {[_Px, _maxSignal]};

    private _areas = _data apply {_x select 2};
    private _playerInArea = _areas findIf {player inArea _x} != -1;
    if !(_playerInArea) exitWith {[_Px, _maxSignal]};

    // Modify signal
    private _signalJam = _data apply {_x select 1};
    if (_signalJam isEqualTo []) exitWith {[_Px, _maxSignal]};
    _signalJam = selectMax _signalJam;

    private _Px = _Px * (1 - _signalJam) max 0;
    private _maxSignal = _maxSignal * (1 - _signalJam) max 0;

    systemChat str [_Px, _maxSignal];

    [_Px, _maxSignal]
}] call acre_api_fnc_setCustomSignalFunc;
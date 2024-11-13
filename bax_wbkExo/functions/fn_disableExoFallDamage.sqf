
params ["_unit", "_allDamages", "_typeOfDamage"];

hint format ["TYPE: %1", _typeOfDamage];

// if (isNil {_unit getVariable "WBK_JumpPackPower"}) exitWith {};
if !(backpack _unit in WBK_JumpPackArray) exitWith {};

if (_typeOfDamage isEqualTo "falling") exitWith {};

_this call ace_medical_damage_fnc_woundsHandlerBase;


params ["_unit", "_allDamages", "_typeOfDamage"];

_hasExo = backpack _unit in WBK_JumpPackArray;
_isPlayer = isPlayer _unit;
_isFallDamage = _typeOfDamage isEqualTo "falling" or _typeOfDamage isEqualTo "collision";

if (!hasExo or !_isPlayer or !_isFallDamage) then {
	_this call ace_medical_damage_fnc_woundsHandlerBase;
};

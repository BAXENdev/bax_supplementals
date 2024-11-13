
_logic = _this param [0, objnull, [objnull]];
_units = _this param [1, [], [[]]];
_activated = _this param [2, true, [true]];

// diag_log "Test This Intel!";
// diag_log ("Is server: " + (str isServer));
// diag_log _this;

if (_activated) then {
    private ["_registerBlufor", "_registerOpfor", "_registerIndfor", "_registerCivilian"];
    _registerBlufor = _logic getVariable ["RegisterBlufor", true];
    _registerOpfor = _logic getVariable ["RegisterOpfor", true];
    _registerIndfor = _logic getVariable ["RegisterIndfor", true];
    _registerCivilian = _logic getVariable ["RegisterCivilian", true];

	_objects = synchronizedObjects _logic;
	{
		_object = _x;
		if (_registerBlufor) then {
			[west, _object] call bax_arsenals_fnc_registerArsenalObject;
		};
		if (_registerOpfor) then {
			[east, _object] call bax_arsenals_fnc_registerArsenalObject;
		};
		if (_registerIndfor) then {
			[independent, _object] call bax_arsenals_fnc_registerArsenalObject;
		};
		if (_registerCivilian) then {
			[civilian, _object] call bax_arsenals_fnc_registerArsenalObject;
		};
	} forEach _objects;
};

true;

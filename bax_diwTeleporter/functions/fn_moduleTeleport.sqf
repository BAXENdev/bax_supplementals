
if !(isServer) exitWith {};

_logic = _this param [0, objnull, [objnull]];
_units = _this param [1, [], [[]]];
_activated = _this param [2, true, [true]];

if (_activated) then {
	private ["_pos", "_varName", "_recieverID", "_senderID", "_onTeleportCode"];
	_pos = getPosASL _logic;
	_varName = vehicleVarName _logic;
	_recieverID = _logic getVariable ["RecieverID", 0];
	_senderID = _logic getVariable ["SenderID", 0];
	_onTeleportCode = _logic getVariable ["OnTeleportCode", 0];

	try {
		_onTeleportCode = compile _onTeleportCode;
	} catch {
		diag_log "Failed to compile _onTeleportCode";
		["Failed to compile _onTeleportCode"] call BIS_fnc_error;
		_onTeleportCode = {};
	};

	_trigger = [_pos, _recieverID, _senderID, _onTeleportCode] call bax_diwTeleporter_fnc_createTeleport;

	if (_varName isNotEqualTo "") then {
		missionNamespace setVariable [_varName, _trigger, true];
	};
};


if !(isServer) exitWith {
	// _this remoteExec ["bax_diwTeleporter_fnc_createTeleport", 2];
};
params [["_pos", [0, 0, 0]], ["_recieverId", 0], ["_targets", []], ["_onTeleportCode", {}]];

_trigger = createTrigger ["EmptyDetector", _pos];
_trigger setVariable ["diwako_anomalies_main_cooldown", false, true];
_trigger setVariable ["diwako_anomalies_main_targets", _targets, true];
_trigger setVariable ["diwako_anomalies_main_anomalyType", "teleport", true];
_trigger setVariable ["diwako_anomalies_main_onTeleportCode", _onTeleportCode, true];
private _proxy = "building" createVehicle position _trigger;
_proxy enableSimulationGlobal false;
_proxy setPos (_trigger modelToWorld [0,0,0.5]);
_trigger setVariable ["diwako_anomalies_main_sound", _proxy, true];

["diwako_anomalies_main_setTrigger", [
    _trigger,
    [2, 2, 0, false,4],
    ["ANY", "PRESENT", true],
    [
		"this and !(thisTrigger getVariable ['diwako_anomalies_main_cooldown', false])",
		"[thisTrigger, thisList] call bax_diwTeleporter_fnc_activateTeleportOneway",
		""
	] // statements
]] call CBA_fnc_globalEventJip;

if (isNil "diwako_anomalies_main_holder") then {
    diwako_anomalies_main_holder = [];
};

diwako_anomalies_main_holder pushBack _trigger;

if (isNil "diwako_anomalies_main_teleportIds") then {
	diwako_anomalies_main_teleportIds = createHashmap;
};
_teleporters = diwako_anomalies_main_teleportIds getOrDefault [_recieverId, []];
_teleporters pushBack _trigger;
diwako_anomalies_main_teleportIds set [_recieverId, _teleporters];
publicVariable "diwako_anomalies_main_teleportIds";

if (diwako_anomalies_main_debug) then {
    _marker = createMarkerLocal [str(_pos), _pos];
    _marker setMarkerShapeLocal "ICON";
    _marker setMarkerTypeLocal "hd_dot";
    _marker setMarkerTextLocal (_trigger getVariable "diwako_anomalies_main_anomalyType");
    _trigger setVariable ["diwako_anomalies_main_debugMarker", _marker];
};

// disable trigger until player is near
_trigger enableDynamicSimulation false;
_trigger enableSimulationGlobal false;

// return
_trigger;


if !(isServer) exitWith {};

params ["_trigger", "_list"];

if (isNull _trigger) exitWith {};
if (_trigger getVariable ["diwako_anomalies_main_anomalyType",""] != "teleport") exitWith {};

private _men = nearestObjects [getPos _trigger,  ["Man","landvehicle"], 2];
private _id = _trigger getVariable "diwako_anomalies_main_senderID";
private _teleporters = diwako_anomalies_main_teleportIDs getOrDefault [_id, []];

private _exit = selectRandom (_teleporters - [_trigger]);

if (isNull _exit) then {
    _teleporters = _teleporters - [objNull];
    diwako_anomalies_main_teleportIDs set [_id, _teleporters];
    publicVariable "diwako_anomalies_main_teleportIDs";

    _exit = selectRandom (_teleporters - [_trigger]);
};

if (isNil "_exit") exitWith {
    // TODO: Fail
    if (diwako_anomalies_main_debug) then {
        hint ("FAILED TO FIND EXIT WITH TELEPORT ID: " + str _id);
    };
};

_trigger setVariable ["diwako_anomalies_main_cooldown", true, true];
_exit setVariable ["diwako_anomalies_main_cooldown", true, true];
private _proxy = _trigger getVariable "diwako_anomalies_main_sound";
["diwako_anomalies_main_say3D", [_proxy, "teleport_work_" + str((floor random 2) + 1)]] call CBA_fnc_globalEvent;
_proxy = _exit getVariable "diwako_anomalies_main_sound";
["diwako_anomalies_main_say3D", [_proxy, "teleport_work_" + str((floor random 2) + 1)]] call CBA_fnc_globalEvent;

[{
    params["_trigger", "_list", "_exit", "_men"];
    {
        if (!(_x isKindOf "Man" || _x isKindOf "landvehicle" || _x isKindOf "air"))  then {
            deleteVehicle _x;
        };
    } forEach _list;
    private _exitPos = getPos _exit;
    private _obj = objNull;
    {
        _obj = _x;
        if (alive _obj) then {
            private _doTeleport = false;
            if (_x isKindOf "Man") then {
                _doTeleport = true;
                if (isPlayer _obj) then {
                    ["diwako_anomalies_main_teleportFlash", nil, _obj] call CBA_fnc_targetEvent;
                };
            };
            if ((_obj isKindOf "landvehicle"  || _x isKindOf "air") && {getMass _obj < 10000}) then {
                _doTeleport = true;
                {
                    if (isPlayer _x) then {
                        ["diwako_anomalies_main_teleportFlash", nil, _x] call CBA_fnc_targetEvent;
                    };
                } forEach crew _obj;
            };

            if (_doTeleport) then {
                private _onTeleportCode = _trigger getVariable ["diwako_anomalies_main_onTeleportCode", {}];
                _exitPos = [
                    (_exitPos select 0) + ((2 + random 3) * selectRandom [1, -1]),
                    (_exitPos select 1) + ((2 + random 3) * selectRandom [1, -1]),
                    _exitPos select 2
                ];
                _obj setPos _exitPos;
                [_obj, _trigger, _exit] call _onTeleportCode;
            };
        } else {
            if (!(_obj isKindOf "landvehicle" || _x isKindOf "air")) then {
                ["diwako_anomalies_main_minceCorpse", [_obj]] call CBA_fnc_globalEvent;
            };
        };
    } forEach _men;

    [{
        params["_trigger", "_exit"];
        _trigger setVariable ["diwako_anomalies_main_cooldown", false, true];
        _exit setVariable ["diwako_anomalies_main_cooldown", false, true];
    }, [_trigger, _exit], diwako_anomalies_main_anomalySettingTeleportCooldownMin - TELEPORT_MIN_COOL_DOWN + (random diwako_anomalies_main_anomalySettingTeleportCooldownRand)] call CBA_fnc_waitAndExecute;
}, [_trigger, _list, _exit, _men], TELEPORT_MIN_COOL_DOWN] call CBA_fnc_waitAndExecute;

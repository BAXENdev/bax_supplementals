#include "\usaf_main\functions\usaf_gps\functions\constants.h"
/*
    For when there is a change to the targets lb (deleting or adding)
    Updates it with the correct information and creates markers on GPS dialog map
*/
lbClear TGTLBID;
_unit = ([] call USAF_fnc_getCurrentControlledUnit);

_veh = vehicle _unit;
_vehTgts = _veh getVariable ["USAF_GPS_DIALOG_TGTS",[]];
_vehTgtsMkrs = _veh getVariable ["USAF_GPS_DIALOG_TGTS_MKRS",[]];
//_vehTgtsVehs = _veh getVariable ["USAF_GPS_DIALOG_TGTS_VEHS",[]];

if (count _vehTgts > 0) then {
    {
        _j = lbAdd [TGTLBID, (format ["Target %1 - %2", (_forEachIndex + 1), (mapGridPosition _x)])];
        lbSetData [TGTLBID, _j, str _x];
    } forEach _vehTgts;
};

if (count _vehTgtsMkrs > 0) then {
    {
        deleteMarkerLocal _x;
    }forEach _vehTgtsMkrs;
    _veh setVariable ["USAF_GPS_DIALOG_TGTS_MKRS",[], false];
};

deleteMarkerLocal "USAF_GPS_DIALOG_TGT_TEMP";

/*if (count _vehTgtsVehs > 0) then {
    {
        deleteVehicle _x;
    }forEach _vehTgtsVehs;
    _veh setVariable ["USAF_GPS_DIALOG_TGTS_VEHS",[], false];
};*/

{
    /*_l = GPSVEHTGT createVehicleLocal _x;
    _veh setVariable ["USAF_GPS_DIALOG_TGTS_VEHS", (_veh getVariable ["USAF_GPS_DIALOG_TGTS_VEHS",[]]) + [_l], false];*/

    _j = createMarkerLocal [format ["USAF_GPS_DIALOG_MKR_%1", _forEachIndex], _x];
    _j setMarkerTypeLocal "USAF_GPSINSmarker";
    //_j setMarkerTypeLocal "hd_dot";
    _j setMarkerColorLocal "ColorBlack";
    _j setMarkerTextLocal (format ["Target %1 - %2", (_forEachIndex + 1), (mapGridPosition _x)]);
    _veh setVariable ["USAF_GPS_DIALOG_TGTS_MKRS", (_veh getVariable ["USAF_GPS_DIALOG_TGTS_MKRS",[]]) + [_j], false];
} forEach _vehTgts;


_vehTgtsMkrs = _veh getVariable ["USAF_GPS_DIALOG_TGTS_MKRS",[]];

if (isNil {(_veh getVariable ['USAF_GPS_DIALOG_CurTgt',nil])}) then {
    //set to the first element then
    ctrlSetText [SELTGTID, "None"];

} else {
    _vehCurSel = (_vehTgts find (_veh getVariable 'USAF_GPS_DIALOG_CurTgt'));
    ctrlSetText [SELTGTID, (format ["Target %1 - %2", (_vehCurSel + 1), (mapGridPosition (_veh getVariable 'USAF_GPS_DIALOG_CurTgt'))])];

    _vehCurSel call USAF_GPS_DIALOG_fnc_changeMkrColour;
};

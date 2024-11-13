
class CfgPatches {
    class BAX_UsafMain {
        name = "BAXEN's Usaf Fixes";
        author = "BAXENATOR";
        units[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {"USAF_Main"};
        skipWhenMissingDependencies = 1;
    };
};

class CfgFunctions {
    class USAF_GPS_DIALOG {
        class tools {
            class updateTargetLB { file="\bax_usafGpsFix\functions\fn_updateTargetLB.sqf"; };
        };
    };
};

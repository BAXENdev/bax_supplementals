
class CfgPatches {
    class BAX_WbkExo {
        name = "BAXEN's No Fall Damage for WBK Exos";
        author = "BAXENATOR";
        units[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {"WBK_EpsmSystem"};
        skipWhenMissingDependencies = 1;
    };
};

class Cfgfunctions {
    class BAX_WBKEXO {
        class woundHandlers {
            file = "\bax_wbkExo\functions";
            class disableExoFallDamage {};
        };
    };
};

class ACE_Medical_Injuries {
    class damageTypes {
        class falling {
            class woundHandlers {
                ace_medical_damage = "bax_wbkExo_fnc_disableExoFallDamage";
            };
        };
    };
};


class CfgPatches {
    class BAX_Supp_Usaf130 {
        name = "BAXEN's Mission Tools";
        author = "BAXENATOR";
        units[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {"cba_main", "ace_main", "zen_main"};
        skipWhenMissingDependencies = 1;
    };
};

class CfgFactionClasses {
    class BAX_MissionTools {
        displayName = "[BAX] Mission Tools";
        priority = 8;
        side = 7;
    };
};

class CfgFunctions {
    class bax_missionTools {
        class functions {
            file = "\bax_missionTools\functions";
            class moduleRegisterArsenal {};
        };
    };
};

class CfgVehicles {
    class Logic;
    class Module_F: Logic {
        class AttributesBase {
            class Default;
            class Edit;
            class EditMulti5;
            class Combo;
            class Checkbox;
            class ModuleDescription;
        };

        // Description base classes (for more information see below):
        class ModuleDescription {
            class AnyBrain;
        };
    };

    class RegisterArsenal: Module_F {
        scope = 2;
        displayName = "Register Arsenal Box";
        icon = "a3\modules_f_curator\data\icondiary_ca.paa";
        category = "BAX_MissionTools";

        function = "bax_missionTools_fnc_moduleRegisterArsenal";
        functionPriority = 2;
        isGlobal = 2;
        isTriggerActivated = 1;
        isDisposable = 1;
        // curatorInfoType = "";

        class Attributes: AttributesBase {
            class RegisterBlufor: Checkbox {
                displayName = "Register for Blufor";
                tooltip = "Registers synced object as an arsenal for side";
                property = "BAX_Module_RegisterArsenal_Blufor";
                defaultValue = "true";
            };

            class RegisterOpfor: Checkbox {
                displayName = "Register for Opfor";
                tooltip = "Registers synced object as an arsenal for side";
                property = "BAX_Module_RegisterArsenal_Opfor";
                defaultValue = "true";
            };

            class RegisterIndfor: Checkbox {
                displayName = "Register for Indfor";
                tooltip = "Registers synced object as an arsenal for side";
                property = "BAX_Module_RegisterArsenal_Indfor";
                defaultValue = "true";
            };

            class RegisterCiv: Checkbox {
                displayName = "Register for Civilians";
                tooltip = "Registers synced object as an arsenal for side";
                property = "BAX_Module_RegisterArsenal_Civ";
                defaultValue = "true";
            };
        };
    };
};

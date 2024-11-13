
class CfgPatches {
    class BAX_DIWTeleporter {
        name = "BAXEN's Diwako Advanced Teleporter";
        author = "BAXENATOR";
        units[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {"diwako_anomalies_main"};
        skipWhenMissingDependencies = 1;
    };
};

class Cfgfunctions {
    class bax_diwTeleporter {
        class functions {
            file = "\bax_diwTeleporter\functions";
            class moduleTeleport {};
            class createTeleport {};
            class activateTeleport {};
            class moduleTeleportOneway {};
            class createTeleportOneway {};
            class activateTeleportOneway {};
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
    class Diwako_Anomalies_Main_ModuleTeleport: Module_F {
        function = "bax_diwTeleporter_fnc_moduleTeleport";
        delete Arguments;
        class Attributes: AttributesBase {
            class RecieverID: Edit {
                displayName = "Reciever ID";
                tooltip = "Recieving ID for people being teleported";
                property = "BAX_DIWTeleporter_RecieverID";
                defaultValue = """0""";
                typeName = "NUMBER";
            };

            class SenderID: Edit {
                displayName = "Sender ID";
                tooltip = "Teleporter IDs to send the unit to.";
                property = "BAX_DIWTeleporter_SenderID";
                defaultValue = """0""";
                typeName = "NUMBER";
            };

            class OnTeleportCode {
                control = "EditCodeMulti5";
                displayName = "On Teleport Code";
                property = "BAX_DIWTeleporter_OnTeleportCode";
                tooltip = "Code executed after a teleport. Params: [_unit, _enterTrigger, _exitTrigger]";
                expression = "_this setVariable ['%s',_value,true];";
                defaultValue = """""";
                typeName = "STRING";
            };
        };
    };
    class Diwako_Anomalies_Main_ModuleTeleportOneway: Diwako_Anomalies_Main_ModuleTeleport {
        displayName = "Teleporter (One Way)";
        function = "bax_diwTeleporter_fnc_moduleTeleportOneway";
        class Attributes: AttributesBase {
            class RecieverID: Edit {
                displayName = "Reciever ID";
                tooltip = "Recieving ID for people being teleported";
                property = "BAX_DIWTeleporter_RecieverID";
                defaultValue = """0""";
                typeName = "NUMBER";
            };
            class Targets: Edit {
                displayName = "Targets";
                tooltip = "Comma separated, no spaces. Ex: [1000,2000,0],""marker_pos_1"",var_obj_1";
                property = "BAX_DIWTeleporter_Targets";
                defaultValue = """[2000,2000,0]""";
                typeName = "STRING";
            };
            class OnTeleportCode {
                control = "EditCodeMulti5";
                displayName = "On Teleport Code";
                property = "BAX_DIWTeleporter_OnTeleportCode";
                tooltip = "Code executed after a teleport. Params: [_unit, _enterTrigger, _target[MARKER STRING, OBJECT, POSITION]]";
                expression = "_this setVariable ['%s',_value,true];";
                defaultValue = """""";
                typeName = "STRING";
            };
        };
    };
};

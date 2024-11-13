
class CfgPatches {
    class BAX_Usaf130 {
        name = "BAXEN's AC130 Sensor Adjustments";
        author = "BAXENATOR";
        units[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {"USAF_AC130U_C"};
        skipWhenMissingDependencies = 1;
    };
};

class Components;
// class SensorTemplatePassiveRadar;
// class SensorTemplateAntiRadiation;
// class SensorTemplateIR;
class SensorTemplateVisual;

class CfgVehicles {
    class USAF_AC130U_BASE;
    class USAF_AC130U: USAF_AC130U_BASE {
        class Components {
            class SensorsManagerComponent {
                class Components {
                    class IRTurretVisualSensorComponent: SensorTemplateVisual {
                        class AirTarget {
                            maxRange = 1250;
                        };
                        class GroundTarget {
                            maxRange = 1250;
                        };
                    };
                    class TVTurretVisualSensorComponent: SensorTemplateVisual {
                        class AirTarget {
                            maxRange = 1250;
                        };
                        class GroundTarget {
                            maxRange = 1250;
                        };
                    };
                };
            };
        };
    };
};


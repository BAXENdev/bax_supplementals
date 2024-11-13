
class CfgPatches {
    class BAX_Supp_Usaf130 {
        name = "BAXEN's JCA Adjustments";
        author = "BAXENATOR";
        units[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {"Weapons_F_JCA_IA"};
        skipWhenMissingDependencies = 1;
    };
};

class CfgWeapons {

};

class CfgMagazines {
    class CA_Magazine;

    class JCA_17Rnd_9x21_P320_Mag: CA_Magazine {
        mass = 4;
    };
    class JCA_17Rnd_9x21_P320_Red_Mag: JCA_17Rnd_9x21_P320_Mag {
        mass = 4;
    };
    class JCA_17Rnd_9x21_P320_Green_Mag: JCA_17Rnd_9x21_P320_Red_Mag {
        mass = 4;
    };
    class JCA_17Rnd_9x21_P320_Yellow_Mag: JCA_17Rnd_9x21_P320_Red_Mag {
        mass = 4;
    };
    class JCA_17Rnd_9x21_P320_IR_Mag: JCA_17Rnd_9x21_P320_Red_Mag {
        mass = 4;
    };
    class JCA_15Rnd_9x21_P226_Mag: CA_Magazine {
        mass = 4;
    };
    class JCA_15Rnd_9x21_P226_Red_Mag: JCA_15Rnd_9x21_P226_Mag {
        mass = 4;
    };
    class JCA_15Rnd_9x21_P226_Green_Mag: JCA_15Rnd_9x21_P226_Red_Mag {
        mass = 4;
    };
    class JCA_15Rnd_9x21_P226_Yellow_Mag: JCA_15Rnd_9x21_P226_Red_Mag {
        mass = 4;
    };
    class JCA_15Rnd_9x21_P226_IR_Mag: JCA_15Rnd_9x21_P226_Red_Mag {
        mass = 4;
    };

    class JCA_30Rnd_9x21_MP5_Mag: CA_Magazine {
        mass = 6;
    };
    class JCA_30Rnd_9x21_MP5_Red_Mag: JCA_30Rnd_9x21_MP5_Mag {
        mass = 6;
    };
    class JCA_30Rnd_9x21_MP5_Green_Mag: JCA_30Rnd_9x21_MP5_Red_Mag {
        mass = 6;
    };
    class JCA_30Rnd_9x21_MP5_Yellow_Mag: JCA_30Rnd_9x21_MP5_Red_Mag {
        mass = 6;
    };
    class JCA_30Rnd_9x21_MP5_IR_Mag: JCA_30Rnd_9x21_MP5_Red_Mag {
        mass = 6;
    };
    class JCA_30Rnd_9x21_MP5_Tracer_Red_Mag: JCA_30Rnd_9x21_MP5_Red_Mag {
        mass = 6;
    };
    class JCA_30Rnd_9x21_MP5_Tracer_Green_Mag: JCA_30Rnd_9x21_MP5_Tracer_Red_Mag {
        mass = 6;
    };
    class JCA_30Rnd_9x21_MP5_Tracer_Yellow_Mag: JCA_30Rnd_9x21_MP5_Tracer_Red_Mag {
        mass = 6;
    };
    class JCA_30Rnd_9x21_MP5_Tracer_IR_Mag: JCA_30Rnd_9x21_MP5_Tracer_Red_Mag {
        mass = 6;
    };
    class JCA_30Rnd_9x21_MP5_Sand_Mag: JCA_30Rnd_9x21_MP5_Mag {
        mass = 6;
    };
    class JCA_30Rnd_9x21_MP5_Red_Sand_Mag: JCA_30Rnd_9x21_MP5_Sand_Mag {
        mass = 6;
    };
    class JCA_30Rnd_9x21_MP5_Green_Sand_Mag: JCA_30Rnd_9x21_MP5_Red_Sand_Mag {
        mass = 6;
    };
    class JCA_30Rnd_9x21_MP5_Yellow_Sand_Mag: JCA_30Rnd_9x21_MP5_Red_Sand_Mag {
        mass = 6;
    };
    class JCA_30Rnd_9x21_MP5_IR_Sand_Mag: JCA_30Rnd_9x21_MP5_Red_Sand_Mag {
        mass = 6;
    };
    class JCA_30Rnd_9x21_MP5_Tracer_Red_Sand_Mag: JCA_30Rnd_9x21_MP5_Red_Sand_Mag {
        mass = 6;
    };
    class JCA_30Rnd_9x21_MP5_Tracer_Green_Sand_Mag: JCA_30Rnd_9x21_MP5_Tracer_Red_Sand_Mag {
        mass = 6;
    };
    class JCA_30Rnd_9x21_MP5_Tracer_Yellow_Sand_Mag: JCA_30Rnd_9x21_MP5_Tracer_Red_Sand_Mag {
        mass = 6;
    };
    class JCA_30Rnd_9x21_MP5_Tracer_IR_Sand_Mag: JCA_30Rnd_9x21_MP5_Tracer_Red_Sand_Mag {
        mass = 6;
    };

    class JCA_20Rnd_762x51_PMAG: CA_Magazine {
        mass = 6;
    };
    class JCA_20Rnd_762x51_Red_PMAG: JCA_20Rnd_762x51_PMAG {
        mass = 6;
    };
    class JCA_20Rnd_762x51_Green_PMAG: JCA_20Rnd_762x51_Red_PMAG {
        mass = 6;
    };
    class JCA_20Rnd_762x51_Yellow_PMAG: JCA_20Rnd_762x51_Red_PMAG {
        mass = 6;
    };
    class JCA_20Rnd_762x51_IR_PMAG: JCA_20Rnd_762x51_Red_PMAG {
        mass = 6;
    };
    class JCA_20Rnd_762x51_Tracer_Red_PMAG: JCA_20Rnd_762x51_Red_PMAG {
        mass = 6;
    };
    class JCA_20Rnd_762x51_Tracer_Green_PMAG: JCA_20Rnd_762x51_Tracer_Red_PMAG {
        mass = 6;
    };
    class JCA_20Rnd_762x51_Tracer_Yellow_PMAG: JCA_20Rnd_762x51_Tracer_Red_PMAG {
        mass = 6;
    };
    class JCA_20Rnd_762x51_Tracer_IR_PMAG: JCA_20Rnd_762x51_Tracer_Red_PMAG {
        mass = 6;
    };
    class JCA_20Rnd_762x51_Sand_PMAG: JCA_20Rnd_762x51_PMAG {
        mass = 6;
    };
    class JCA_20Rnd_762x51_Red_Sand_PMAG: JCA_20Rnd_762x51_Sand_PMAG {
        mass = 6;
    };
    class JCA_20Rnd_762x51_Green_Sand_PMAG: JCA_20Rnd_762x51_Red_Sand_PMAG {
        mass = 6;
    };
    class JCA_20Rnd_762x51_Yellow_Sand_PMAG: JCA_20Rnd_762x51_Red_Sand_PMAG {
        mass = 6;
    };
    class JCA_20Rnd_762x51_IR_Sand_PMAG: JCA_20Rnd_762x51_Red_Sand_PMAG {
        mass = 6;
    };
    class JCA_20Rnd_762x51_Tracer_Red_Sand_PMAG: JCA_20Rnd_762x51_Red_Sand_PMAG {
        mass = 6;
    };
    class JCA_20Rnd_762x51_Tracer_Green_Sand_PMAG: JCA_20Rnd_762x51_Tracer_Red_Sand_PMAG {
        mass = 6;
    };
    class JCA_20Rnd_762x51_Tracer_Yellow_Sand_PMAG: JCA_20Rnd_762x51_Tracer_Red_Sand_PMAG {
        mass = 6;
    };
    class JCA_20Rnd_762x51_Tracer_IR_Sand_PMAG: JCA_20Rnd_762x51_Tracer_Red_Sand_PMAG {
        mass = 6;
    };

    class JCA_20Rnd_762x51_SMAG: CA_Magazine {
        mass = 6;
    };
    class JCA_20Rnd_762x51_Red_SMAG: JCA_20Rnd_762x51_SMAG {
        mass = 6;
    };
    class JCA_20Rnd_762x51_Green_SMAG: JCA_20Rnd_762x51_Red_SMAG {
        mass = 6;
    };
    class JCA_20Rnd_762x51_Yellow_SMAG: JCA_20Rnd_762x51_Red_SMAG {
        mass = 6;
    };
    class JCA_20Rnd_762x51_IR_SMAG: JCA_20Rnd_762x51_Red_SMAG {
        mass = 6;
    };
    class JCA_20Rnd_762x51_Tracer_Red_SMAG: JCA_20Rnd_762x51_Red_SMAG {
        mass = 6;
    };
    class JCA_20Rnd_762x51_Tracer_Green_SMAG: JCA_20Rnd_762x51_Tracer_Red_SMAG {
        mass = 6;
    };
    class JCA_20Rnd_762x51_Tracer_Yellow_SMAG: JCA_20Rnd_762x51_Tracer_Red_SMAG {
        mass = 6;
    };
    class JCA_20Rnd_762x51_Tracer_IR_SMAG: JCA_20Rnd_762x51_Tracer_Red_SMAG {
        mass = 6;
    };
    class JCA_20Rnd_762x51_Sand_SMAG: JCA_20Rnd_762x51_Red_SMAG {
        mass = 6;
    };
    class JCA_20Rnd_762x51_Red_Sand_SMAG: JCA_20Rnd_762x51_Sand_SMAG {
        mass = 6;
    };
    class JCA_20Rnd_762x51_Green_Sand_SMAG: JCA_20Rnd_762x51_Red_Sand_SMAG {
        mass = 6;
    };
    class JCA_20Rnd_762x51_Yellow_Sand_SMAG: JCA_20Rnd_762x51_Red_Sand_SMAG {
        mass = 6;
    };
    class JCA_20Rnd_762x51_IR_Sand_SMAG: JCA_20Rnd_762x51_Red_Sand_SMAG {
        mass = 6;
    };
    class JCA_20Rnd_762x51_Tracer_Red_Sand_SMAG: JCA_20Rnd_762x51_Red_Sand_SMAG {
        mass = 6;
    };
    class JCA_20Rnd_762x51_Tracer_Green_Sand_SMAG: JCA_20Rnd_762x51_Tracer_Red_Sand_SMAG {
        mass = 6;
    };
    class JCA_20Rnd_762x51_Tracer_Yellow_Sand_SMAG: JCA_20Rnd_762x51_Tracer_Red_Sand_SMAG {
        mass = 6;
    };
    class JCA_20Rnd_762x51_Tracer_IR_Sand_SMAG: JCA_20Rnd_762x51_Tracer_Red_Sand_SMAG {
        mass = 6;
    };

    class JCA_30Rnd_556x45_PMAG: CA_Magazine {
        mass = 6;
    };
    class JCA_30Rnd_556x45_Red_PMAG: JCA_30Rnd_556x45_PMAG {
        mass = 6;
    };
    class JCA_30Rnd_556x45_Green_PMAG: JCA_30Rnd_556x45_Red_PMAG {
        mass = 6;
    };
    class JCA_30Rnd_556x45_Yellow_PMAG: JCA_30Rnd_556x45_Red_PMAG {
        mass = 6;
    };
    class JCA_30Rnd_556x45_IR_PMAG: JCA_30Rnd_556x45_Red_PMAG {
        mass = 6;
    };
    class JCA_30Rnd_556x45_Tracer_Red_PMAG: JCA_30Rnd_556x45_Red_PMAG {
        mass = 6;
    };
    class JCA_30Rnd_556x45_Tracer_Green_PMAG: JCA_30Rnd_556x45_Tracer_Red_PMAG {
        mass = 6;
    };
    class JCA_30Rnd_556x45_Tracer_Yellow_PMAG: JCA_30Rnd_556x45_Tracer_Red_PMAG {
        mass = 6;
    };
    class JCA_30Rnd_556x45_Tracer_IR_PMAG: JCA_30Rnd_556x45_Tracer_Red_PMAG {
        mass = 6;
    };
    class JCA_30Rnd_556x45_sand_PMAG: JCA_30Rnd_556x45_PMAG {
        mass = 6;
    };
    class JCA_30Rnd_556x45_Red_sand_PMAG: JCA_30Rnd_556x45_sand_PMAG {
        mass = 6;
    };
    class JCA_30Rnd_556x45_Green_sand_PMAG: JCA_30Rnd_556x45_Red_sand_PMAG {
        mass = 6;
    };
    class JCA_30Rnd_556x45_Yellow_sand_PMAG: JCA_30Rnd_556x45_Red_sand_PMAG {
        mass = 6;
    };
    class JCA_30Rnd_556x45_IR_sand_PMAG: JCA_30Rnd_556x45_Red_sand_PMAG {
        mass = 6;
    };
    class JCA_30Rnd_556x45_Tracer_Red_sand_PMAG: JCA_30Rnd_556x45_Red_sand_PMAG {
        mass = 6;
    };
    class JCA_30Rnd_556x45_Tracer_Green_sand_PMAG: JCA_30Rnd_556x45_Tracer_Red_sand_PMAG {
        mass = 6;
    };
    class JCA_30Rnd_556x45_Tracer_Yellow_sand_PMAG: JCA_30Rnd_556x45_Tracer_Red_sand_PMAG {
        mass = 6;
    };
    class JCA_30Rnd_556x45_Tracer_IR_sand_PMAG: JCA_30Rnd_556x45_Tracer_Red_sand_PMAG {
        mass = 6;
    };

    class JCA_5Rnd_338LM_AWM_Mag: CA_Magazine {
        mass = 6;
    };
    class JCA_5Rnd_338LM_AWM_Tracer_Red_Mag: JCA_5Rnd_338LM_AWM_Mag {
        mass = 6;
    };
    class JCA_5Rnd_338LM_AWM_Tracer_Green_Mag: JCA_5Rnd_338LM_AWM_Tracer_Red_Mag {
        mass = 6;
    };
    class JCA_5Rnd_338LM_AWM_Tracer_Yellow_Mag: JCA_5Rnd_338LM_AWM_Tracer_Red_Mag {
        mass = 6;
    };
    class JCA_5Rnd_338LM_AWM_Tracer_IR_Mag: JCA_5Rnd_338LM_AWM_Tracer_Red_Mag {
        mass = 6;
    };
};

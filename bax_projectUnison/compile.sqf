_classes = getArray (configFile >> "CfgPatches" >> "E11_Vests" >> "weapons");
_classStrings = _classes apply {
    format [
        "\tclass %1: ItemCore {" + endl +
        "\t\tclass ItemInfo: VestItem {" + endl +
        "\t\t\tmass = 65;" + endl +
        "\t\t\tcontainerClass = ""Supply130"";" + endl +
        "\t\t\tclass HitpointsProtectionInfo {" + endl +
        "\t\t\t\tclass Abdomen {" + endl +
        "\t\t\t\t\tarmor = 16;" + endl +
        "\t\t\t\t\tpassThrough = 0.3;" + endl +
        "\t\t\t\t};" + endl +
        "\t\t\t\tclass Body {" + endl +
        "\t\t\t\t\tpassThrough = 0.3;" + endl +
        "\t\t\t\t};" + endl +
        "\t\t\t\tclass Chest {" + endl +
        "\t\t\t\t\tarmor = 16;" + endl +
        "\t\t\t\t\tpassThrough = 0.3;" + endl +
        "\t\t\t\t};" + endl +
        "\t\t\t\tclass Diaphragm {" + endl +
        "\t\t\t\t\tarmor = 16;" + endl +
        "\t\t\t\t\tpassThrough = 0.3;" + endl +
        "\t\t\t\t};" + endl +
        "\t\t\t};" + endl +
        "\t\t};" + endl +
        "\t};" + endl ,
        _x
    ];
};
copyToClipboard (_classStrings joinString endl)



_classes = getArray (configFile >> "CfgPatches" >> "E11_Helmets" >> "weapons");
_classStrings = _classes apply {
    format [
        "\tclass %1: ItemCore {" + endl +
        "\t\tace_hearing_protection = 0.75;" + endl +
        "\t\tclass ItemInfo: HeadgearItem {" + endl +
        "\t\t\tclass HitpointsProtectionInfo {" + endl +
        "\t\t\t\tclass Head {" + endl +
        "\t\t\t\t\tarmor = 6;" + endl +
        "\t\t\t\t\tpassThrough = 0.5;" + endl +
        "\t\t\t\t};" + endl +
        "\t\t\t};" + endl +
        "\t\t};" + endl +
        "\t};" + endl,
        _x
    ];
};
copyToClipboard (_classStrings joinString endl)

// TODO: Protection for uniforms is in HitPoints? class. GOODLUCK FUTURE ME!
_classes = getArray (configFile >> "CfgPatches" >> "E11_Uniforms" >> "weapons");
_classStrings = _classes apply {
    format [
        "\tclass %1: ItemCore {" + endl +
        "\t\tclass ItemInfo: UniformItem {" + endl +
        "\t\t\tmass = 20;" + endl +
        "\t\t\tcontainerClass = ""Supply60"";" + endl +
        "\t\t};" + endl +
        "\t};" + endl,
        _x
    ];
};
copyToClipboard (_classStrings joinString endl)

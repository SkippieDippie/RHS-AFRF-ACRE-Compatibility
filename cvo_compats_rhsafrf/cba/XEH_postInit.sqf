
{
    _x params ["_mag", "_throwableMag"];

    [
        _mag,
        "CONTAINER",
        localize "STR_CVO_CBA_Explosives_ConvertFuse",
        nil,
        "\a3\ui_f\data\igui\cfg\simpletasks\types\destroy_ca.paa",
        [
            {true},
            {
                params ["", "", "_item", "", "_magArr"];
                _item isEqualTo (_magArr select 0);
            }
        ],
        {
            params ["_unit", "", "", "_slot", "_magArr"];

            private ["_containerType", "_container", "_magToAdd"];
            _containerType = "";
            _magToAdd = _magArr select 1;


            switch _slot do {
                case "UNIFORM_CONTAINER": {
                    _containerType = "uniform";
                    _unit addItemToUniform _magToAdd;
                };
                case "VEST_CONTAINER": {
                    _containerType = "vest";
                    _unit addItemToVest _magToAdd;
                };
                case "BACKPACK_CONTAINER": {
                    _containerType = "backpack";
                    _unit addItemToBackpack _magToAdd;
                };
            };


            if (_containerType != "") then {
                _unit addItemCargoGlobal [_magToAdd, 1];
            };

            false
        },
        true,
        [_mag,_throwableMag]
    ] call CBA_fnc_addItemContextMenuOption;

    [
        _throwableMag,
        "CONTAINER",
        localize "STR_CVO_CBA_Explosives_RemoveFuse",
        nil,
        "\a3\ui_f\data\igui\cfg\simpletasks\types\destroy_ca.paa",
        [
            {true},
            {
                params ["", "", "_item", "", "_magArr"];
                _item isEqualTo (_magArr select 1);
            }
        ],
        {
            params ["_unit", "", "", "_slot", "_magArr"];

            private ["_containerType", "_container", "_magToAdd"];
            _containerType = "";
            _magToAdd = _magArr select 0;


            switch _slot do {
                case "UNIFORM_CONTAINER": {
                    _containerType = "uniform";
                    _unit addItemToUniform _magToAdd;
                };
                case "VEST_CONTAINER": {
                    _containerType = "vest";
                    _unit addItemToVest _magToAdd;
                };
                case "BACKPACK_CONTAINER": {
                    _containerType = "backpack";
                    _unit addItemToBackpack _magToAdd;
                };
            };


            if (_containerType != "") then {
                _unit addItemCargoGlobal [_magToAdd, 1];
            };

            false
        },
        true,
        [_mag,_throwableMag]
    ] call CBA_fnc_addItemContextMenuOption;
} forEach [
    ["rhs_ec75_mag", "CVO_RHSAFRF_EC75_Mag_Throwable"],
    ["rhs_ec75_sand_mag", "CVO_RHSAFRF_EC75_Sand_Mag_Throwable"],
    ["rhs_ec200_mag", "CVO_RHSAFRF_EC200_Mag_Throwable"],
    ["rhs_ec200_sand_mag", "CVO_RHSAFRF_EC200_Sand_Mag_Throwable"],
    ["rhs_ec400_mag", "CVO_RHSAFRF_EC400_Mag_Throwable"],
    ["rhs_ec400_sand_mag", "CVO_RHSAFRF_EC400_Sand_Mag_Throwable"]
];
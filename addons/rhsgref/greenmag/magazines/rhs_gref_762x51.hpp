class rhs_mag_20Rnd_762x51_m80_fnfal: CA_Magazine {
	greenmag_ammo = QAMMO_CLASS(762x51_FMJ_1Rnd);
	greenmag_basicammo = "greenmag_ammo_762x51_basic_1Rnd";

	greenmag_canSpeedload = 1;
	greenmag_needBelt = 0;
};

class rhs_mag_30Rnd_762x51_m80_fnfal: rhs_mag_20Rnd_762x51_m80_fnfal {
	greenmag_ammo = QAMMO_CLASS(762x51_FMJ_1Rnd);
};


class rhs_mag_20Rnd_762x51_m80a1_fnfal: rhs_mag_20Rnd_762x51_m80_fnfal {
	greenmag_ammo = QAMMO_CLASS(762x51_EP_1Rnd);
};

class rhs_mag_30Rnd_762x51_m80a1_fnfal: rhs_mag_30Rnd_762x51_m80_fnfal {
	greenmag_ammo = QAMMO_CLASS(762x51_EP_1Rnd);
};


class rhs_mag_20Rnd_762x51_m62_fnfal: rhs_mag_20Rnd_762x51_m80_fnfal {
	greenmag_ammo = QAMMO_CLASS(762x51_Tracer_1Rnd);
};

class rhs_mag_30Rnd_762x51_m62_fnfal: rhs_mag_30Rnd_762x51_m80_fnfal {
	greenmag_ammo = QAMMO_CLASS(762x51_Tracer_1Rnd);
};


class rhs_mag_20Rnd_762x51_m61_fnfal: rhs_mag_20Rnd_762x51_m80_fnfal {
	greenmag_ammo = QAMMO_CLASS(762x51_AP_1Rnd);
};

class rhs_mag_30Rnd_762x51_m61_fnfal: rhs_mag_30Rnd_762x51_m80_fnfal {
	greenmag_ammo = QAMMO_CLASS(762x51_AP_1Rnd);
};

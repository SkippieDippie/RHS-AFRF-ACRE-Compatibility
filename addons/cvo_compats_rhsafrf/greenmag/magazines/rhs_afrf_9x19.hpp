class rhs_mag_9x19_17 : CA_Magazine {
	greenmag_ammo = QAMMO_CLASS(9x19_FMJ_1Rnd);
	greenmag_basicammo = "greenmag_ammo_9x19_basic_1Rnd";

	greenmag_canSpeedload = 1;
	greenmag_needBelt = 0;
};

class rhs_mag_9x19_7n31_17 : rhs_mag_9x19_17 {
	greenmag_ammo = QAMMO_CLASS(9x19_AP_1Rnd);
};

class rhs_mag_9x19mm_7n21_20 : rhs_mag_9x19_17 {
	greenmag_ammo = QAMMO_CLASS(9x19_FMJ_1Rnd);
};

class rhs_mag_9x19mm_7n31_20 : rhs_mag_9x19mm_7n21_20 {
	greenmag_ammo = QAMMO_CLASS(9x19_AP_1Rnd);
};

class rhs_mag_9x19mm_7n21_44 : rhs_mag_9x19mm_7n21_20 {
	greenmag_ammo = QAMMO_CLASS(9x19_FMJ_1Rnd);
};

class rhs_mag_9x19mm_7n31_44 : rhs_mag_9x19mm_7n21_44 {
	greenmag_ammo = QAMMO_CLASS(9x19_AP_1Rnd);
};

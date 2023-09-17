class rhs_18rnd_9x21mm_7N28 : rhs_mag_9x19_17 {
	greenmag_ammo = QAMMO_CLASS(9x21_FMJ_1Rnd);
	greenmag_basicammo = "greenmag_ammo_9x21_basic_1Rnd";

	greenmag_canSpeedload = 1;
	greenmag_needBelt = 0;
};

class rhs_18rnd_9x21mm_7N29 : rhs_18rnd_9x21mm_7N28 {
	greenmag_ammo = QAMMO_CLASS(9x21_AP_1Rnd);
};

class rhs_18rnd_9x21mm_7BT3 : rhs_18rnd_9x21mm_7N28 {
	greenmag_ammo = QAMMO_CLASS(9x21_Tracer_1Rnd);
};

class rhs_18rnd_9x21mm_7N28 : rhs_mag_9x19_17 {
	greenmag_canSpeedload = 1;
	greenmag_needBelt = 0;
	greenmag_ammo = QAMMO_CLASS(9x21_7N28_1Rnd);
	greenmag_basicammo = "greenmag_ammo_9x21_basic_1Rnd";
};

class rhs_18rnd_9x21mm_7N29 : rhs_18rnd_9x21mm_7N28 {
	greenmag_ammo = QAMMO_CLASS(9x21_7N29_1Rnd);
};

class rhs_18rnd_9x21mm_7BT3 : rhs_18rnd_9x21mm_7N28 {
	greenmag_ammo = QAMMO_CLASS(9x21_7BT3_1Rnd);
};

class rhs_20rnd_9x39mm_SP5 : rhs_30Rnd_762x39mm {
	greenmag_canSpeedload = 1;
	greenmag_needBelt = 0;
	greenmag_ammo = QAMMO_CLASS(9x39_SP5_1Rnd);
	greenmag_basicammo = QAMMO_CLASS(9x39_basic_1Rnd);
};

class rhs_20rnd_9x39mm_SP6 : rhs_20rnd_9x39mm_SP5 {
	greenmag_ammo = QAMMO_CLASS(9x39_SP6_1Rnd);
};

class rhs_10rnd_9x39mm_SP5 : rhs_20rnd_9x39mm_SP5 {
	greenmag_ammo = QAMMO_CLASS(9x39_SP5_1Rnd);
};

class rhs_10rnd_9x39mm_SP6 : rhs_10rnd_9x39mm_SP5 {
	greenmag_ammo = QAMMO_CLASS(9x39_SP6_1Rnd);
};

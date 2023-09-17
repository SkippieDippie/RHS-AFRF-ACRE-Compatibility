class rhs_20rnd_9x39mm_SP5 : rhs_30Rnd_762x39mm {
	greenmag_ammo = QAMMO_CLASS(9x39_AP_1Rnd);
	greenmag_basicammo = QAMMO_CLASS(9x39_Basic_1Rnd);

	greenmag_canSpeedload = 1;
	greenmag_needBelt = 0;
};

class rhs_20rnd_9x39mm_SP6 : rhs_20rnd_9x39mm_SP5 {
	greenmag_ammo = QAMMO_CLASS(9x39_Match_1Rnd);
};

class rhs_10rnd_9x39mm_SP5 : rhs_20rnd_9x39mm_SP5 {
	greenmag_ammo = QAMMO_CLASS(9x39_AP_1Rnd);
};

class rhs_10rnd_9x39mm_SP6 : rhs_10rnd_9x39mm_SP5 {
	greenmag_ammo = QAMMO_CLASS(9x39_Match_1Rnd);
};

class rhsusf_mag_17Rnd_9x19_FMJ : CA_Magazine {
	greenmag_ammo = QAMMO_CLASS(9x19_FMJ_1Rnd);
	greenmag_basicammo = "greenmag_ammo_9x19_basic_1Rnd";

	greenmag_canSpeedload = 1;
	greenmag_needBelt = 0;
};

class rhsusf_mag_17Rnd_9x19_JHP : rhsusf_mag_17Rnd_9x19_FMJ {
	greenmag_ammo = QAMMO_CLASS(9x19_JHP_1Rnd);
};

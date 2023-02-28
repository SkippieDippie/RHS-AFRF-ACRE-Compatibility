class rhssaf_mag_15Rnd_9x19_FMJ : CA_Magazine {
	greenmag_canSpeedload = 1;
	greenmag_needBelt = 0;
	greenmag_ammo = QAMMO_CLASS(9x19_M882_1Rnd);
	greenmag_basicammo = "greenmag_ammo_9x19_basic_1Rnd";
};

class rhssaf_mag_15Rnd_9x19_JHP : rhssaf_mag_15Rnd_9x19_FMJ {
	greenmag_ammo = QAMMO_CLASS(9x19_Mk243_1Rnd);
};

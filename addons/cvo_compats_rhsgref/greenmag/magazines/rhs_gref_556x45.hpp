class rhsgref_30rnd_556x45_m21: CA_Magazine {
	greenmag_ammo = QAMMO_CLASS(556x45_FMJ_1Rnd);
	greenmag_basicammo = "greenmag_ammo_556x45_basic_1Rnd";

	greenmag_canSpeedload = 1;
	greenmag_needBelt = 0;
};

class rhsgref_30rnd_556x45_m21_t: rhsgref_30rnd_556x45_m21 {
	greenmag_ammo = QAMMO_CLASS(556x45_Tracer_1Rnd);
};

class rhsgref_30rnd_556x45_vhs2: CA_Magazine {
	greenmag_ammo = QAMMO_CLASS(556x45_EP_1Rnd);
};

class rhsgref_30rnd_556x45_vhs2_t: rhsgref_30rnd_556x45_vhs2 {
	greenmag_ammo = QAMMO_CLASS(556x45_Tracer_1Rnd);
};

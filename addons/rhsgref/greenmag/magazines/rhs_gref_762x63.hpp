class rhsgref_8Rnd_762x63_M2B_M1rifle: CA_Magazine {
	greenmag_ammo = QAMMO_CLASS(762x63_AP_1Rnd);
	greenmag_basicammo = QAMMO_CLASS(762x63_Basic_1Rnd);

	greenmag_canSpeedload = 0;
	greenmag_needBelt = 0;
};

class rhsgref_8Rnd_762x63_Tracer_M1T_M1rifle: rhsgref_8Rnd_762x63_M2B_M1rifle {
	greenmag_ammo = QAMMO_CLASS(762x63_FMJ_1Rnd);
};

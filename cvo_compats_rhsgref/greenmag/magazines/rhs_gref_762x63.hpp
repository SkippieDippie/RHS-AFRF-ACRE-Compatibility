class rhsgref_8Rnd_762x63_M2B_M1rifle: CA_Magazine {
	greenmag_ammo = QAMMO_CLASS(762x63_M2_1Rnd);
	greenmag_basicammo = QAMMO_CLASS(762x63_Basic_1Rnd);

	greenmag_needBelt = 0;
	greenmag_canSpeedload = 0;
};

class rhsgref_8Rnd_762x63_Tracer_M1T_M1rifle: rhsgref_8Rnd_762x63_M2B_M1rifle {
	greenmag_ammo = QAMMO_CLASS(762x63_M1_1Rnd);
};

class 10Rnd_RHS_50BMG_Box : CA_Magazine {
	greenmag_ammo = "greenmag_ammo_127x99_basic_1Rnd";
	greenmag_basicammo = "greenmag_ammo_127x99_basic_1Rnd";
	greenmag_needBelt = 0;
	greenmag_canSpeedload = 0;
};

class rhsusf_mag_10Rnd_STD_50BMG_M33 : 10Rnd_RHS_50BMG_Box {
	greenmag_ammo = QAMMO_CLASS(127x99_M33_1Rnd);
};

class rhsusf_mag_10Rnd_STD_50BMG_mk211 : rhsusf_mag_10Rnd_STD_50BMG_M33 {
	greenmag_ammo = QAMMO_CLASS(127x99_Mk211_1Rnd);
};

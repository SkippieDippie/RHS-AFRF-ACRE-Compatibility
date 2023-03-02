class rhs_30Rnd_545x39_AK;

class rhs_30Rnd_545x39_7N6_AK : rhs_30Rnd_545x39_AK {
	greenmag_ammo = QAMMO_CLASS(545x39_FMJ_1Rnd);
	greenmag_basicammo = "greenmag_ammo_545x39_basic_1Rnd";
	
	greenmag_needBelt = 0;
	greenmag_canSpeedload = 1;
};

class rhs_30Rnd_545x39_7N10_AK : rhs_30Rnd_545x39_7N6_AK {
	greenmag_ammo = QAMMO_CLASS(545x39_EP_1Rnd);
};

class rhs_30Rnd_545x39_7N22_AK : rhs_30Rnd_545x39_7N10_AK {
	greenmag_ammo = QAMMO_CLASS(545x39_AP_1Rnd);
};

class rhs_30Rnd_545x39_AK_green : rhs_30Rnd_545x39_7N6_AK {
	greenmag_ammo = QAMMO_CLASS(545x39_Tracer_1Rnd);
};

class rhs_30Rnd_545x39_7U1_AK : rhs_30Rnd_545x39_7N10_AK {
	greenmag_ammo = QAMMO_CLASS(545x39_Subsonic_1Rnd);
};

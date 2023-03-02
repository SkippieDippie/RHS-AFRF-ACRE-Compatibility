class rhs_30Rnd_545x39_AK;

class rhssaf_30Rnd_762x39mm_M67 : rhs_30Rnd_545x39_AK {
	greenmag_ammo = QAMMO_CLASS(762x39_FMJ_1Rnd);
	greenmag_basicammo = "greenmag_ammo_762x39_basic_1Rnd";

	greenmag_canSpeedload = 1;
	greenmag_needBelt = 0;
};

class rhssaf_30Rnd_762x39mm_M78_tracer : rhssaf_30Rnd_762x39mm_m67 {
	greenmag_ammo = QAMMO_CLASS(762x39_Tracer_1Rnd);
};

class rhssaf_30Rnd_762x39_M82_api : rhssaf_30Rnd_762x39mm_m67 {
	greenmag_ammo = QAMMO_CLASS(762x39_AP_1Rnd);
};

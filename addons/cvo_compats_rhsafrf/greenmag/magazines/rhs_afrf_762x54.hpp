class rhs_10Rnd_762x54mmR_7N1 : rhs_30Rnd_545x39_7N6_AK {
	greenmag_ammo = QAMMO_CLASS(762x54_Match_1Rnd);
	greenmag_basicammo = "greenmag_ammo_762x54_basic_1Rnd";	

	greenmag_canSpeedload = 0;
	greenmag_needBelt = 0;
};

class rhs_10Rnd_762x54mmR_7N14 : rhs_10Rnd_762x54mmR_7N1 {
	greenmag_ammo = QAMMO_CLASS(762x54_Match_1Rnd);
};

class rhs_100Rnd_762x54mmR : rhs_30Rnd_545x39_7N6_AK {
	greenmag_ammo = QBELT_CLASS(762x54_FMJ);
	greenmag_basicammo = "greenmag_beltlinked_762x54_basic";

	greenmag_canSpeedload = 0;
	greenmag_needBelt = 1;
};

class rhs_100Rnd_762x54mmR_7N13 : rhs_100Rnd_762x54mmR {
	greenmag_ammo = QBELT_CLASS(762x54_EP);
};

class rhs_100Rnd_762x54mmR_7N26 : rhs_100Rnd_762x54mmR {
	greenmag_ammo = QBELT_CLASS(762x54_AP);
};

class rhs_100Rnd_762x54mmR_green : rhs_100Rnd_762x54mmR {
	greenmag_ammo = QBELT_CLASS(762x54_Tracer);
};

class rhs_100Rnd_762x54mmR_7BZ3 : rhs_100Rnd_762x54mmR_7N13 {
	greenmag_ammo = QBELT_CLASS(762x54_AP);
};

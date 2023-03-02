class 30Rnd_556x45_Stanag;


class rhssaf_30rnd_556x45_TDIM_G36 : 30Rnd_556x45_Stanag {
	greenmag_ammo = QAMMO_CLASS(556x45_FMJ_1Rnd);
};

class rhssaf_30rnd_556x45_EPR_G36 : 30Rnd_556x45_Stanag {
	greenmag_ammo = QAMMO_CLASS(556x45_EP_1Rnd);
};

class rhssaf_100rnd_556x45_EPR_G36 : 30Rnd_556x45_Stanag {
	greenmag_ammo = QAMMO_CLASS(556x45_EP_1Rnd);
};

class rhssaf_30rnd_556x45_MDIM_G36 : 30Rnd_556x45_Stanag {
	greenmag_ammo = QAMMO_CLASS(556x45_EP_1Rnd);
};

class rhssaf_30rnd_556x45_Tracers_G36 : 30Rnd_556x45_Stanag {
	greenmag_ammo = QAMMO_CLASS(556x45_Tracer_1Rnd);
};

class rhssaf_30rnd_556x45_SPR_G36 : 30Rnd_556x45_Stanag {
	greenmag_ammo = QAMMO_CLASS(556x45_Match_1Rnd);
};

class rhssaf_30rnd_556x45_SOST_G36 : 30Rnd_556x45_Stanag {
	greenmag_ammo = QAMMO_CLASS(556x45_JHP_1Rnd);
};

class rhsgref_30rnd_556x45_m21: CA_Magazine {
	greenmag_ammo = QAMMO_CLASS(556x45_FMJ_1Rnd);
	greenmag_basicammo = "greenmag_ammo_556x45_basic_1Rnd";

	greenmag_canSpeedload = 1;
	greenmag_needBelt = 0;
};

class rhsgref_30rnd_556x45_m21_t: rhsgref_30rnd_556x45_m21 {
	greenmag_ammo = QAMMO_CLASS(556x45_Tracer_1Rnd);
};

class 30Rnd_556x45_Stanag;


class rhssaf_30rnd_556x45_TDIM_G36 : 30Rnd_556x45_Stanag {
	greenmag_ammo = QAMMO_CLASS(556x45_M855_1);
};

class rhssaf_30rnd_556x45_EPR_G36 : 30Rnd_556x45_Stanag {
	greenmag_ammo = QAMMO_CLASS(556x45_M855A1_1);
};

class rhssaf_100rnd_556x45_EPR_G36 : 30Rnd_556x45_Stanag {
	greenmag_ammo = QAMMO_CLASS(556x45_M855A1_1);
};

class rhssaf_30rnd_556x45_MDIM_G36 : 30Rnd_556x45_Stanag {
	greenmag_ammo = QAMMO_CLASS(556x45_M855A1_1);
};

class rhssaf_30rnd_556x45_Tracers_G36 : 30Rnd_556x45_Stanag {
	greenmag_ammo = QAMMO_CLASS(556x45_M856A1_1);
};

class rhssaf_30rnd_556x45_SPR_G36 : 30Rnd_556x45_Stanag {
	greenmag_ammo = "greenmag_ammo_556x45_mk262_1Rnd";
};

class rhssaf_30rnd_556x45_SOST_G36 : 30Rnd_556x45_Stanag {
	greenmag_ammo = "greenmag_ammo_556x45_mk318_1Rnd";
};

class rhsgref_30rnd_556x45_m21: CA_Magazine {
	greenmag_ammo = QAMMO_CLASS(556x45_M855_1);
	greenmag_basicammo = "greenmag_ammo_556x45_basic_1Rnd";
	greenmag_canSpeedload = 1;
	greenmag_needBelt = 0;
};

class rhsgref_30rnd_556x45_m21_t: rhsgref_30rnd_556x45_m21 {
	greenmag_ammo = QAMMO_CLASS(556x45_M856A1_1Rnd);
};

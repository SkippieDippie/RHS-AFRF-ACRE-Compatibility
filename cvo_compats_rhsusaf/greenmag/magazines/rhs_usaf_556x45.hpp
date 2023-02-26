class 30Rnd_556x45_Stanag;
class rhs_mag_100Rnd_556x45_M855A1_cmag;

class rhs_mag_30Rnd_556x45_M193_Stanag : 30Rnd_556x45_Stanag {
	greenmag_ammo = QAMMO_CLASS(556x45_M193_1Rnd);
};

class rhs_mag_30Rnd_556x45_M196_Stanag : rhs_mag_30Rnd_556x45_M193_Stanag {
	greenmag_ammo = QAMMO_CLASS(556x45_M196_1Rnd);
};

class rhs_mag_30Rnd_556x45_M855A1_Stanag : 30Rnd_556x45_Stanag {
	greenmag_ammo = QAMMO_CLASS(556x45_M855A1_1Rnd);
};

class rhs_mag_30Rnd_556x45_M855_Stanag : rhs_mag_30Rnd_556x45_M855A1_Stanag {
	greenmag_ammo = QAMMO_CLASS(556x45_M855_1Rnd);
};

class rhs_mag_30Rnd_556x45_M200_Stanag : rhs_mag_30Rnd_556x45_M855A1_Stanag {
	greenmag_ammo = QAMMO_CLASS(556x45_M200_1Rnd);
};

class rhs_mag_30Rnd_556x45_Mk262_Stanag : rhs_mag_30Rnd_556x45_M855A1_Stanag {
	greenmag_ammo = "greenmag_ammo_556x45_mk262_1Rnd";
};

class rhs_mag_30Rnd_556x45_Mk318_Stanag : rhs_mag_30Rnd_556x45_M855A1_Stanag {
	greenmag_ammo = "greenmag_ammo_556x45_mk318_1Rnd";
};

class rhs_mag_100Rnd_556x45_M855_cmag : rhs_mag_100Rnd_556x45_M855A1_cmag {
	greenmag_ammo = QAMMO_CLASS(556x45_M855_1Rnd);
};

class rhs_mag_100Rnd_556x45_Mk262_cmag : rhs_mag_100Rnd_556x45_M855A1_cmag {
	greenmag_ammo = "greenmag_ammo_556x45_mk262_1Rnd";	
};

class rhs_mag_100Rnd_556x45_Mk318_cmag : rhs_mag_100Rnd_556x45_M855A1_cmag {
	greenmag_ammo = "greenmag_ammo_556x45_mk318_1Rnd";
};

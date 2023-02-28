//Magazines
// M118
class rhsusf_5Rnd_762x51_m118_special_Mag : CA_Magazine {
	greenmag_ammo = QAMMO_CLASS(762x51_M118_1Rnd);
	greenmag_basicammo = "greenmag_ammo_762x51_basic_1Rnd";
	greenmag_needBelt = 0;
	greenmag_canSpeedload = 0;
};

class rhsusf_10Rnd_762x51_m118_special_Mag : CA_Magazine {
	greenmag_ammo = QAMMO_CLASS(762x51_M118_1Rnd);
	greenmag_basicammo = "greenmag_ammo_762x51_basic_1Rnd";
	greenmag_needBelt = 0;
	greenmag_canSpeedload = 1;
};

class rhsusf_20Rnd_762x51_m118_special_Mag : CA_Magazine {
	greenmag_ammo = QAMMO_CLASS(762x51_M118_1Rnd);
	greenmag_basicammo = "greenmag_ammo_762x51_basic_1Rnd";
	greenmag_needBelt = 0;
	greenmag_canSpeedload = 1;
};


// M80
class rhs_mag_20Rnd_SCAR_762x51_m80_ball : CA_Magazine {
	greenmag_ammo = QAMMO_CLASS(762x51_M80_1Rnd);
	greenmag_basicammo = "greenmag_ammo_762x51_basic_1Rnd";
	greenmag_needBelt = 0;
	greenmag_canSpeedload = 1;
};

class rhsusf_20Rnd_762x51_m80_Mag : rhsusf_20Rnd_762x51_m118_special_Mag {
	greenmag_ammo = QAMMO_CLASS(762x51_M80_1Rnd);
};

class rhs_mag_20Rnd_SCAR_762x51_m118_special : rhs_mag_20Rnd_SCAR_762x51_m80_ball {
	greenmag_ammo = QAMMO_CLASS(762x51_M118_1Rnd);
};


// M80A1
class rhs_mag_20Rnd_SCAR_762x51_m80a1_epr : rhs_mag_20Rnd_SCAR_762x51_m80_ball {
	greenmag_ammo = QAMMO_CLASS(762x51_M80A1_1Rnd);
};


// M61
class rhs_mag_20Rnd_SCAR_762x51_m61_ap : rhs_mag_20Rnd_SCAR_762x51_m80_ball {
	greenmag_ammo = QAMMO_CLASS(762x51_M61_1Rnd);
};

class rhs_mag_20Rnd_762x51_m61_fnfal : rhs_mag_20Rnd_762x51_m80_fnfal {
	greenmag_ammo = QAMMO_CLASS(762x51_M61_1Rnd);
};


// M62
class rhsusf_5Rnd_762x51_m62_Mag : rhsusf_5Rnd_762x51_m118_special_Mag {
	greenmag_ammo = QAMMO_CLASS(762x51_M62_1Rnd);
};

class rhsusf_10Rnd_762x51_m62_Mag : rhsusf_5Rnd_762x51_m118_special_Mag {
	greenmag_ammo = QAMMO_CLASS(762x51_M62_1Rnd);
};

class rhsusf_20Rnd_762x51_m62_Mag : rhsusf_20Rnd_762x51_m118_special_Mag {
	greenmag_ammo = QAMMO_CLASS(762x51_M62_1Rnd);
};



// M993
class rhsusf_5Rnd_762x51_m993_Mag : rhsusf_5Rnd_762x51_m118_special_Mag {
	greenmag_ammo = "greenmag_ammo_762x51_m993ap_1Rnd";
};

class rhsusf_10Rnd_762x51_m993_Mag : rhsusf_5Rnd_762x51_m118_special_Mag {
	greenmag_ammo = "greenmag_ammo_762x51_m993ap_1Rnd";
};

class rhsusf_20Rnd_762x51_m993_Mag : rhsusf_20Rnd_762x51_m118_special_Mag {
	greenmag_ammo = "greenmag_ammo_762x51_m993ap_1Rnd";
};


// Mk316
class rhsusf_20Rnd_762x51_SR25_mk316_special_Mag : rhsusf_20Rnd_762x51_m118_special_Mag {
	greenmag_ammo = "greenmag_ammo_762x51_mk316_1Rnd";
};

class rhs_mag_20Rnd_SCAR_762x51_mk316_special : rhs_mag_20Rnd_SCAR_762x51_m80_ball {
	greenmag_ammo = "greenmag_ammo_762x51_mk316_1Rnd";
};


// Belts
// M80
class rhsusf_50Rnd_762x51 : CA_Magazine {
	greenmag_ammo = QBELT_CLASS(762x51_M80);
	greenmag_basicammo = "greenmag_beltlinked_762x51_basic";
	greenmag_needBelt = 1;
	greenmag_canSpeedload = 0;
};


// M61
class rhsusf_50Rnd_762x51_m61_ap : rhsusf_50Rnd_762x51 {
	greenmag_ammo = QBELT_CLASS(762x51_M61);
};


// M62
class rhsusf_50Rnd_762x51_m62_tracer : rhsusf_50Rnd_762x51 {
	greenmag_ammo = QBELT_CLASS(762x51_M62);
};


// M80A1
class rhsusf_50Rnd_762x51_m80a1epr : rhsusf_50Rnd_762x51 {
	greenmag_ammo = QBELT_CLASS(762x51_M80A1);
};


// M82
class rhsusf_50Rnd_762x51_m82_blank : rhsusf_50Rnd_762x51 {
	greenmag_ammo = QBELT_CLASS(762x51_M82);
};


// M993
class rhsusf_50Rnd_762x51_m993 : rhsusf_50Rnd_762x51 {
	greenmag_ammo = "greenmag_ammo_762x51_m993ap_1Rnd";
};

class 30Rnd_556x45_Stanag;
class rhs_mag_100Rnd_556x45_M855A1_cmag;
class rhs_mag_30Rnd_556x45_M855A1_PMAG;
class rhs_200rnd_556x45_B_SAW;


// M193
class rhs_mag_30Rnd_556x45_M193_Stanag : 30Rnd_556x45_Stanag {
	greenmag_ammo = QAMMO_CLASS(556x45_FMJ_1Rnd);
};


// M196
class rhs_mag_30Rnd_556x45_M196_Stanag_Tracer_Red : rhs_mag_30Rnd_556x45_M193_Stanag {
	greenmag_ammo = QAMMO_CLASS(556x45_Tracer_1Rnd);
};


// M855A1
class rhs_mag_30Rnd_556x45_M855A1_Stanag : 30Rnd_556x45_Stanag {
	greenmag_ammo = QAMMO_CLASS(556x45_EP_1Rnd);
};

class rhsusf_100Rnd_556x45_soft_pouch : rhs_mag_30Rnd_556x45_M855A1_Stanag {
	greenmag_ammo = QBELT_CLASS(556x45_EP);
	greenmag_basicammo = "greenmag_beltlinked_556x45_basic";

	greenmag_canSpeedload = 0;
	greenmag_needBelt = 1;
};

// M856A1
class rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green : rhs_mag_30Rnd_556x45_M855A1_Stanag {
	greenmag_ammo = QAMMO_CLASS(556x45_Tracer_1Rnd);

};

class rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red : rhs_mag_30Rnd_556x45_M855A1_Stanag {
	greenmag_ammo = QAMMO_CLASS(556x45_Tracer_1Rnd);

};

class rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Orange : rhs_mag_30Rnd_556x45_M855A1_Stanag {
	greenmag_ammo = QAMMO_CLASS(556x45_Tracer_1Rnd);

};

class rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Yellow : rhs_mag_30Rnd_556x45_M855A1_Stanag {
	greenmag_ammo = QAMMO_CLASS(556x45_Tracer_1Rnd);

};

class rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red : rhs_mag_30Rnd_556x45_M855A1_PMAG {
	greenmag_ammo = QAMMO_CLASS(556x45_Tracer_1Rnd);
};


// M855
class rhs_mag_30Rnd_556x45_M855_Stanag : rhs_mag_30Rnd_556x45_M855A1_Stanag {
	greenmag_ammo = QAMMO_CLASS(556x45_FMJ_1Rnd);
};

class rhs_mag_30Rnd_556x45_M855_PMAG : rhs_mag_30Rnd_556x45_M855A1_PMAG {
	greenmag_ammo = QAMMO_CLASS(556x45_FMJ_1Rnd);
};

class rhs_mag_100Rnd_556x45_M855_cmag : rhs_mag_100Rnd_556x45_M855A1_cmag {
	greenmag_ammo = QAMMO_CLASS(556x45_FMJ_1Rnd);
};

class rhsusf_100Rnd_556x45_M855_soft_pouch : rhsusf_100Rnd_556x45_soft_pouch {
	greenmag_ammo = QBELT_CLASS(556x45_FMJ);
};

class rhsusf_100Rnd_556x45_M995_soft_pouch : rhsusf_100Rnd_556x45_soft_pouch {
	greenmag_ammo = QBELT_CLASS(556x45_AP);
};

class rhsusf_200rnd_556x45_M855_box: rhs_200rnd_556x45_B_SAW {
	greenmag_ammo = QBELT_CLASS(556x45_FMJ);
};

// M856
class rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Green : rhs_mag_30Rnd_556x45_M855_Stanag {
	greenmag_ammo = QAMMO_CLASS(556x45_Tracer_1Rnd);
};

class rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Orange : rhs_mag_30Rnd_556x45_M855_Stanag {
	greenmag_ammo = QAMMO_CLASS(556x45_Tracer_1Rnd);
};

class rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red : rhs_mag_30Rnd_556x45_M855_Stanag {
	greenmag_ammo = QAMMO_CLASS(556x45_Tracer_1Rnd);
};

class rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Yellow : rhs_mag_30Rnd_556x45_M855_Stanag {
	greenmag_ammo = QAMMO_CLASS(556x45_Tracer_1Rnd);
};

class rhs_mag_30Rnd_556x45_M855_PMAG_Tracer_Red : rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red {
	greenmag_ammo = QAMMO_CLASS(556x45_Tracer_1Rnd);
};


// M200
class rhs_mag_30Rnd_556x45_M200_Stanag : rhs_mag_30Rnd_556x45_M855A1_Stanag {
	greenmag_ammo = QAMMO_CLASS(556x45_Blank_1Rnd);
};

class rhsusf_100Rnd_556x45_M200_soft_pouch : rhsusf_100Rnd_556x45_soft_pouch {
	greenmag_ammo = QBELT_CLASS(556x45_Blank);
};


// Mk262
class rhs_mag_30Rnd_556x45_Mk262_Stanag : rhs_mag_30Rnd_556x45_M855A1_Stanag {
	greenmag_ammo = QAMMO_CLASS(556x45_Match_1Rnd);
};

class rhs_mag_30Rnd_556x45_Mk262_PMAG : rhs_mag_30Rnd_556x45_M855A1_PMAG {
	greenmag_ammo = QAMMO_CLASS(556x45_Match_1Rnd);
};

class rhs_mag_100Rnd_556x45_Mk262_cmag : rhs_mag_100Rnd_556x45_M855A1_cmag {
	greenmag_ammo = QAMMO_CLASS(556x45_Match_1Rnd);
};

// Mk318
class rhs_mag_30Rnd_556x45_Mk318_Stanag : rhs_mag_30Rnd_556x45_M855A1_Stanag {
	greenmag_ammo = QAMMO_CLASS(556x45_JHP_1Rnd);
};

class rhs_mag_30Rnd_556x45_Mk318_PMAG : rhs_mag_30Rnd_556x45_M855A1_PMAG {	
	greenmag_ammo = QAMMO_CLASS(556x45_JHP_1Rnd);
};

class rhs_mag_100Rnd_556x45_Mk318_cmag : rhs_mag_100Rnd_556x45_M855A1_cmag {
	greenmag_ammo = QAMMO_CLASS(556x45_JHP_1Rnd);
};


class rhsgref_5Rnd_792x57_kar98k: CA_Magazine {
	greenmag_ammo = QAMMO_CLASS(792x57_FMJ_1Rnd);
	greenmag_basicammo = QAMMO_CLASS(792x57_Basic_1Rnd);

	greenmag_canSpeedload = 0;
	greenmag_needBelt = 0;
};

class rhsgref_10Rnd_792x57_m76: CA_Magazine {
	greenmag_ammo = QAMMO_CLASS(792x57_FMJ_1Rnd);
	greenmag_basicammo = QAMMO_CLASS(792x57_FMJ_1Rnd);

	greenmag_canSpeedload = 0;
	greenmag_needBelt = 0;
};

class rhsgref_50Rnd_792x57_SmE_drum: CA_Magazine {
	greenmag_ammo = QBELT_CLASS(792x57_FMJ);
	greenmag_basicammo = QBELT_CLASS(792x57_Basic);

	greenmag_canSpeedload = 0;
	greenmag_needBelt = 1;
};

class rhsgref_50Rnd_792x57_SmK_drum: rhsgref_50Rnd_792x57_SmE_drum {
	greenmag_ammo = QBELT_CLASS(792x57_AP);
};

class rhsgref_296Rnd_792x57_SmE_belt: CA_Magazine {
	greenmag_ammo = QBELT_CLASS(792x57_FMJ);
	greenmag_basicammo = QBELT_CLASS(792x57_Basic);

	greenmag_canSpeedload = 0;
	greenmag_needBelt = 1;
};

class rhsgref_296Rnd_792x57_SmK_belt: rhsgref_296Rnd_792x57_SmE_belt {
	greenmag_ammo = QBELT_CLASS(792x57_AP);
};

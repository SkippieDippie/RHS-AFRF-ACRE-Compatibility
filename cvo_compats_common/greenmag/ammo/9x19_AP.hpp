class AMMO_CLASS(9x19_AP_1Rnd) : CVO_GreenMag_Ammo_Core_1Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "9x19", 1, LSTRING(Ammo_AP_Short)]);
	descriptionShort = __EVAL(format [LSTRING(Ammo_Complex_mm_Desc), "9x19", LSTRING(Ammo_AP_Full)]);

	picture = "\z\greenmag\addons\main\data\9mm.paa";

	scope = 2;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 0.17;
	};
};

class AMMO_CLASS(9x19_AP_10Rnd) : CVO_GreenMag_Ammo_Core_10Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "9x19", 10, LSTRING(Ammo_AP_Short)]);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(9x19_AP_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 1.7;
	};
};

class AMMO_CLASS(9x19_AP_20Rnd) : CVO_GreenMag_Ammo_Core_20Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "9x19", 20, LSTRING(Ammo_AP_Short)]);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(9x19_AP_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 3.4;
	};
};

class AMMO_CLASS(9x19_AP_30Rnd) : CVO_GreenMag_Ammo_Core_30Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "9x19", 30, LSTRING(Ammo_AP_Short)]);

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = QAMMO_CLASS(9x19_AP_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 5.1;
	};
};

class AMMO_CLASS(9x19_AP_40Rnd) : CVO_GreenMag_Ammo_Core_40Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "9x19", 40, LSTRING(Ammo_AP_Short)]);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(9x19_AP_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 6.8;
	};
};

class AMMO_CLASS(9x19_AP_50Rnd) : CVO_GreenMag_Ammo_Core_50Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "9x19", 50, LSTRING(Ammo_AP_Short)]);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(9x19_AP_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 8.5;
	};
};

class AMMO_CLASS(9x19_AP_60Rnd) : CVO_GreenMag_Ammo_Core_60Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "9x19", 60, LSTRING(Ammo_AP_Short)]);

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = QAMMO_CLASS(9x19_AP_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 10.2;
	};
};

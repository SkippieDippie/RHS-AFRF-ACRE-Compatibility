class AMMO_CLASS(9x39_AP_1Rnd) : CVO_GreenMag_Ammo_Core_1Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "9x39", 1, LSTRING(Ammo_AP_Short)]);
	descriptionShort = __EVAL(format [LSTRING(Ammo_Complex_mm_Desc), "9x39", LSTRING(Ammo_AP_Full)]);

	picture = "\z\greenmag\addons\main\data\556mm.paa";

	scope = 2;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 0.49;
	};
};

class AMMO_CLASS(9x39_AP_10Rnd) : CVO_GreenMag_Ammo_Core_10Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "9x39", 10, LSTRING(Ammo_AP_Short)]);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(9x39_AP_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 4.9;
	};
};

class AMMO_CLASS(9x39_AP_20Rnd) : CVO_GreenMag_Ammo_Core_20Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "9x39", 20, LSTRING(Ammo_AP_Short)]);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(9x39_AP_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 9.8;
	};
};

class AMMO_CLASS(9x39_AP_30Rnd) : CVO_GreenMag_Ammo_Core_30Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "9x39", 30, LSTRING(Ammo_AP_Short)]);

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = QAMMO_CLASS(9x39_AP_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 14.7;
	};
};

class AMMO_CLASS(9x39_AP_40Rnd) : CVO_GreenMag_Ammo_Core_40Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "9x39", 40, LSTRING(Ammo_AP_Short)]);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(9x39_AP_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 19.6;
	};
};

class AMMO_CLASS(9x39_AP_50Rnd) : CVO_GreenMag_Ammo_Core_50Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "9x39", 50, LSTRING(Ammo_AP_Short)]);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(9x39_AP_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 24.5;
	};
};

class AMMO_CLASS(9x39_AP_60Rnd) : CVO_GreenMag_Ammo_Core_60Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "9x39", 60, LSTRING(Ammo_AP_Short)]);

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = QAMMO_CLASS(9x39_AP_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 29.4;
	};
};

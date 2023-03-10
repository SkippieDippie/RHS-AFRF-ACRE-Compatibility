class AMMO_CLASS(556x45_AP_1Rnd) : CVO_GreenMag_Ammo_Core_1Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "5.56x45", 1, LSTRING(Ammo_AP_Short)]);
	descriptionShort = __EVAL(format [LSTRING(Ammo_Complex_mm_Desc), "5.56x45", LSTRING(Ammo_AP_Full)]);

	picture = "\z\greenmag\addons\main\data\556mm.paa";

	scope = 2;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 0.24;
	};
};

class AMMO_CLASS(556x45_AP_10Rnd) : CVO_GreenMag_Ammo_Core_10Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "5.56x45", 10, LSTRING(Ammo_AP_Short)]);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(556x45_AP_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 2.4;
	};
};

class AMMO_CLASS(556x45_AP_20Rnd) : CVO_GreenMag_Ammo_Core_20Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "5.56x45", 20, LSTRING(Ammo_AP_Short)]);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(556x45_AP_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 4.8;
	};
};

class AMMO_CLASS(556x45_AP_30Rnd) : CVO_GreenMag_Ammo_Core_30Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "5.56x45", 30, LSTRING(Ammo_AP_Short)]);

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = QAMMO_CLASS(556x45_AP_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 7.2;
	};
};

class AMMO_CLASS(556x45_AP_40Rnd) : CVO_GreenMag_Ammo_Core_40Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "5.56x45", 40, LSTRING(Ammo_AP_Short)]);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(556x45_AP_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 9.6;
	};
};

class AMMO_CLASS(556x45_AP_50Rnd) : CVO_GreenMag_Ammo_Core_50Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "5.56x45", 50, LSTRING(Ammo_AP_Short)]);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(556x45_AP_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 12.0;
	};
};

class AMMO_CLASS(556x45_AP_60Rnd) : CVO_GreenMag_Ammo_Core_60Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "5.56x45", 60, LSTRING(Ammo_AP_Short)]);

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = QAMMO_CLASS(556x45_AP_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 14.4;
	};
};

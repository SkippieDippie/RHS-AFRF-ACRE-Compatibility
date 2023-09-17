class AMMO_CLASS(127x99_Match_1Rnd) : CVO_GreenMag_Ammo_Core_1Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "12.7x99", 1, LSTRING(Ammo_Match_Short)]);
	descriptionShort = __EVAL(format [LSTRING(Ammo_Complex_mm_Desc), "12.7x99", LSTRING(Ammo_Match_Full)]);

	picture = "\z\greenmag\addons\main\data\127mm.paa";

	scope = 2;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 2.5;
	};
};

class AMMO_CLASS(127x99_Match_10Rnd) : CVO_GreenMag_Ammo_Core_10Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "12.7x99", 10, LSTRING(Ammo_Match_Short)]);

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = QAMMO_CLASS(127x99_Match_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 25.1;
	};
};

class AMMO_CLASS(127x99_Match_20Rnd) : CVO_GreenMag_Ammo_Core_20Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "12.7x99", 20, LSTRING(Ammo_Match_Short)]);

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = QAMMO_CLASS(127x99_Match_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 50.2;
	};
};

class AMMO_CLASS(127x99_Match_30Rnd) : CVO_GreenMag_Ammo_Core_30Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "12.7x99", 30, LSTRING(Ammo_Match_Short)]);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(127x99_Match_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 75.5;
	};
};

class AMMO_CLASS(127x99_Match_40Rnd) : CVO_GreenMag_Ammo_Core_40Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "12.7x99", 40, LSTRING(Ammo_Match_Short)]);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(127x99_Match_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 100.7;
	};
};

class AMMO_CLASS(127x99_Match_50Rnd) : CVO_GreenMag_Ammo_Core_50Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "12.7x99", 50, LSTRING(Ammo_Match_Short)]);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(127x99_Match_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 125.9;
	};
};

class AMMO_CLASS(127x99_Match_60Rnd) : CVO_GreenMag_Ammo_Core_60Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "12.7x99", 60, LSTRING(Ammo_Match_Short)]);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(127x99_Match_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 151.0;
	};
};

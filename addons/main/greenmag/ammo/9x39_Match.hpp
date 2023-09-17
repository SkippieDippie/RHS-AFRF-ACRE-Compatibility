class AMMO_CLASS(9x39_Match_1Rnd) : CVO_GreenMag_Ammo_Core_1Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "9x39", 1, LSTRING(Ammo_Match_Short)]);
	descriptionShort = __EVAL(format [LSTRING(Ammo_Complex_mm_Desc), "9x39", LSTRING(Ammo_Match_Full)]);

	picture = "\z\greenmag\addons\main\data\556mm.paa";

	scope = 2;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 0.5;
	};
};

class AMMO_CLASS(9x39_Match_10Rnd) : CVO_GreenMag_Ammo_Core_10Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "9x39", 10, LSTRING(Ammo_Match_Short)]);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(9x39_Match_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 5.0;
	};
};

class AMMO_CLASS(9x39_Match_20Rnd) : CVO_GreenMag_Ammo_Core_20Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "9x39", 20, LSTRING(Ammo_Match_Short)]);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(9x39_Match_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 10.0;
	};
};

class AMMO_CLASS(9x39_Match_30Rnd) : CVO_GreenMag_Ammo_Core_30Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "9x39", 30, LSTRING(Ammo_Match_Short)]);

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = QAMMO_CLASS(9x39_Match_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 15.0;
	};
};

class AMMO_CLASS(9x39_Match_40Rnd) : CVO_GreenMag_Ammo_Core_40Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "9x39", 40, LSTRING(Ammo_Match_Short)]);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(9x39_Match_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 20.0;
	};
};

class AMMO_CLASS(9x39_Match_50Rnd) : CVO_GreenMag_Ammo_Core_50Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "9x39", 50, LSTRING(Ammo_Match_Short)]);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(9x39_Match_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 25.0;
	};
};

class AMMO_CLASS(9x39_Match_60Rnd) : CVO_GreenMag_Ammo_Core_60Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "9x39", 60, LSTRING(Ammo_Match_Short)]);

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = QAMMO_CLASS(9x39_Match_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 30.0;
	};
};

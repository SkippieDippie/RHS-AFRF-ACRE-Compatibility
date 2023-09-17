class AMMO_CLASS(762x39_JHP_1Rnd) : CVO_GreenMag_Ammo_Core_1Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "7.62x39", 1, LSTRING(Ammo_JHP_Short)]);
	descriptionShort = __EVAL(format [LSTRING(Ammo_Complex_mm_Desc), "7.62x39", LSTRING(Ammo_JHP_Full)]);

	picture = "\z\greenmag\addons\main\data\556mm.paa";

	scope = 2;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 0.35;
	};
};

class AMMO_CLASS(762x39_JHP_10Rnd) : CVO_GreenMag_Ammo_Core_10Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "7.62x39", 10, LSTRING(Ammo_JHP_Short)]);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(762x39_JHP_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 3.5;
	};
};

class AMMO_CLASS(762x39_JHP_20Rnd) : CVO_GreenMag_Ammo_Core_20Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "7.62x39", 20, LSTRING(Ammo_JHP_Short)]);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(762x39_JHP_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 7.0;
	};
};

class AMMO_CLASS(762x39_JHP_30Rnd) : CVO_GreenMag_Ammo_Core_30Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "7.62x39", 30, LSTRING(Ammo_JHP_Short)]);

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = QAMMO_CLASS(762x39_JHP_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 10.5;
	};
};

class AMMO_CLASS(762x39_JHP_40Rnd) : CVO_GreenMag_Ammo_Core_40Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "7.62x39", 40, LSTRING(Ammo_JHP_Short)]);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(762x39_JHP_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 14.0;
	};
};

class AMMO_CLASS(762x39_JHP_50Rnd) : CVO_GreenMag_Ammo_Core_50Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "7.62x39", 50, LSTRING(Ammo_JHP_Short)]);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(762x39_JHP_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 17.5;
	};
};

class AMMO_CLASS(762x39_JHP_60Rnd) : CVO_GreenMag_Ammo_Core_60Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "7.62x39", 60, LSTRING(Ammo_JHP_Short)]);

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = QAMMO_CLASS(762x39_JHP_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 21;
	};
};

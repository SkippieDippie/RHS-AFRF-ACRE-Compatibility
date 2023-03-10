class AMMO_CLASS(545x39_Subsonic_1Rnd) : CVO_GreenMag_Ammo_Core_1Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "5.45x39", 1, LSTRING(Ammo_Subsonic_Short)]);
	descriptionShort = __EVAL(format [LSTRING(Ammo_Complex_mm_Desc), "5.45x39", LSTRING(Ammo_Subsonic_Full)]);

	picture = "\z\greenmag\addons\main\data\556mm.paa";

	scope = 2;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 0.24;
	};
};

class AMMO_CLASS(545x39_Subsonic_10Rnd) : CVO_GreenMag_Ammo_Core_10Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "5.45x39", 10, LSTRING(Ammo_Subsonic_Short)]);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(545x39_Subsonic_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 7.2;
	};
};

class AMMO_CLASS(545x39_Subsonic_20Rnd) : CVO_GreenMag_Ammo_Core_20Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "5.45x39", 20, LSTRING(Ammo_Subsonic_Short)]);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(545x39_Subsonic_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 7.2;
	};
};

class AMMO_CLASS(545x39_Subsonic_30Rnd) : CVO_GreenMag_Ammo_Core_30Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "5.45x39", 30, LSTRING(Ammo_Subsonic_Short)]);

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = QAMMO_CLASS(545x39_Subsonic_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 7.2;
	};
};

class AMMO_CLASS(545x39_Subsonic_40Rnd) : CVO_GreenMag_Ammo_Core_40Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "5.45x39", 40, LSTRING(Ammo_Subsonic_Short)]);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(545x39_Subsonic_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 7.2;
	};
};

class AMMO_CLASS(545x39_Subsonic_50Rnd) : CVO_GreenMag_Ammo_Core_50Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "5.45x39", 50, LSTRING(Ammo_Subsonic_Short)]);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(545x39_Subsonic_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 7.2;
	};
};

class AMMO_CLASS(545x39_Subsonic_60Rnd) : CVO_GreenMag_Ammo_Core_60Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "5.45x39", 60, LSTRING(Ammo_Subsonic_Short)]);

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = QAMMO_CLASS(545x39_Subsonic_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 14.4;
	};
};

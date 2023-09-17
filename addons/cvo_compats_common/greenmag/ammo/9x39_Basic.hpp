class AMMO_CLASS(9x39_Basic_1Rnd) : CVO_GreenMag_Ammo_Core_1Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Basic_mm_Name), "9x39", 1]);
	descriptionShort = __EVAL(format [LSTRING(Ammo_Basic_mm_Desc), "9x39"]);

	picture = "\z\greenmag\addons\main\data\556mm.paa";

	scope = 2;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 0.49;
	};
};

class AMMO_CLASS(9x39_Basic_10Rnd) : CVO_GreenMag_Ammo_Core_10Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Basic_mm_Name), "9x39", 10]);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(9x39_Basic_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 4.9;
	};
};

class AMMO_CLASS(9x39_Basic_20Rnd) : CVO_GreenMag_Ammo_Core_20Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Basic_mm_Name), "9x39", 20]);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(9x39_Basic_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 9.8;
	};
};

class AMMO_CLASS(9x39_Basic_30Rnd) : CVO_GreenMag_Ammo_Core_30Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Basic_mm_Name), "9x39", 30]);

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = QAMMO_CLASS(9x39_Basic_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 14.7;
	};
};

class AMMO_CLASS(9x39_Basic_40Rnd) : CVO_GreenMag_Ammo_Core_40Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Basic_mm_Name), "9x39", 40]);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(9x39_Basic_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 19.6;
	};
};

class AMMO_CLASS(9x39_Basic_50Rnd) : CVO_GreenMag_Ammo_Core_50Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Basic_mm_Name), "9x39", 50]);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(9x39_Basic_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 24.5;
	};
};

class AMMO_CLASS(9x39_Basic_60Rnd) : CVO_GreenMag_Ammo_Core_60Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Basic_mm_Name), "9x39", 60]);

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = QAMMO_CLASS(9x39_Basic_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 29.4;
	};
};

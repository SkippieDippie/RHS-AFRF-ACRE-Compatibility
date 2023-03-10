class AMMO_CLASS(9x19_JHP_1Rnd) : CVO_GreenMag_Ammo_Core_1Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "9x19", 1, LSTRING(Ammo_JHP_Short)]);
	descriptionShort = __EVAL(format [LSTRING(Ammo_Complex_mm_Desc), "9x19", LSTRING(Ammo_JHP_Full)]);

	picture = "\z\greenmag\addons\main\data\9mm.paa";

	scope = 2;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 0.2;
	};
};

class AMMO_CLASS(9x19_JHP_10Rnd) : CVO_GreenMag_Ammo_Core_10Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "9x19", 10, LSTRING(Ammo_JHP_Short)]);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(9x19_JHP_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 2.0;
	};
};

class AMMO_CLASS(9x19_JHP_20Rnd) : CVO_GreenMag_Ammo_Core_20Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "9x19", 20, LSTRING(Ammo_JHP_Short)]);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(9x19_JHP_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 4.0;
	};
};

class AMMO_CLASS(9x19_JHP_30Rnd) : CVO_GreenMag_Ammo_Core_30Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "9x19", 30, LSTRING(Ammo_JHP_Short)]);

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = QAMMO_CLASS(9x19_JHP_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 6.0;
	};
};

class AMMO_CLASS(9x19_JHP_40Rnd) : CVO_GreenMag_Ammo_Core_40Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "9x19", 40, LSTRING(Ammo_JHP_Short)]);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(9x19_JHP_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 8.0;
	};
};

class AMMO_CLASS(9x19_JHP_50Rnd) : CVO_GreenMag_Ammo_Core_50Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "9x19", 50, LSTRING(Ammo_JHP_Short)]);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(9x19_JHP_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 10.0;
	};
};

class AMMO_CLASS(9x19_JHP_60Rnd) : CVO_GreenMag_Ammo_Core_60Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "9x19", 60, LSTRING(Ammo_JHP_Short)]);

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = QAMMO_CLASS(9x19_JHP_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 12.0;
	};
};

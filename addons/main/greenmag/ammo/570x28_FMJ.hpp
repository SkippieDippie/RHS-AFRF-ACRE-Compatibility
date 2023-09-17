class AMMO_CLASS(570x28_FMJ_1Rnd) : CVO_GreenMag_Ammo_Core_1Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "5.7x28", 1, LSTRING(Ammo_FMJ_Short)]);
	descriptionShort = __EVAL(format [LSTRING(Ammo_Complex_mm_Desc), "5.7x28", LSTRING(Ammo_FMJ_Full)]);

	picture = "\z\greenmag\addons\main\data\556mm.paa";

	scope = 2;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 0.22;
	};
};

class AMMO_CLASS(570x28_FMJ_10Rnd) : CVO_GreenMag_Ammo_Core_10Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "5.7x28", 10, LSTRING(Ammo_FMJ_Short)]);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(570x28_FMJ_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 2.2;
	};
};

class AMMO_CLASS(570x28_FMJ_20Rnd) : CVO_GreenMag_Ammo_Core_20Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "5.7x28", 20, LSTRING(Ammo_FMJ_Short)]);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(570x28_FMJ_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 4.4;
	};
};

class AMMO_CLASS(570x28_FMJ_30Rnd) : CVO_GreenMag_Ammo_Core_30Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "5.7x28", 30, LSTRING(Ammo_FMJ_Short)]);

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = QAMMO_CLASS(570x28_FMJ_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 6.6;
	};
};

class AMMO_CLASS(570x28_FMJ_40Rnd) : CVO_GreenMag_Ammo_Core_40Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "5.7x28", 40, LSTRING(Ammo_FMJ_Short)]);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(570x28_FMJ_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 8.8;
	};
};

class AMMO_CLASS(570x28_FMJ_50Rnd) : CVO_GreenMag_Ammo_Core_50Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "5.7x28", 50, LSTRING(Ammo_FMJ_Short)]);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(570x28_FMJ_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 11.0;
	};
};

class AMMO_CLASS(570x28_FMJ_60Rnd) : CVO_GreenMag_Ammo_Core_60Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "5.7x28", 60, LSTRING(Ammo_FMJ_Short)]);

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = QAMMO_CLASS(570x28_FMJ_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 13.2;
	};
};

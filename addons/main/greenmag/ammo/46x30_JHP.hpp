class AMMO_CLASS(46x30_JHP_1Rnd) : CVO_GreenMag_Ammo_Core_1Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "4.6x30", 1, LSTRING(Ammo_JHP_Short)]);
	descriptionShort = __EVAL(format [LSTRING(Ammo_Complex_mm_Desc), "4.6x30", LSTRING(Ammo_JHP_Full)]);

	picture = "\z\greenmag\addons\main\data\556mm.paa";

	scope = 2;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 0.22;
	};
};

class AMMO_CLASS(46x30_JHP_10Rnd) : CVO_GreenMag_Ammo_Core_10Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "4.6x30", 10, LSTRING(Ammo_JHP_Short)]);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(46x30_JHP_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 2.2;
	};
};

class AMMO_CLASS(46x30_JHP_20Rnd) : CVO_GreenMag_Ammo_Core_20Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "4.6x30", 20, LSTRING(Ammo_JHP_Short)]);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(46x30_JHP_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 4.4;
	};
};

class AMMO_CLASS(46x30_JHP_30Rnd) : CVO_GreenMag_Ammo_Core_30Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "4.6x30", 30, LSTRING(Ammo_JHP_Short)]);

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = QAMMO_CLASS(46x30_JHP_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 6.6;
	};
};

class AMMO_CLASS(46x30_JHP_40Rnd) : CVO_GreenMag_Ammo_Core_40Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "4.6x30", 40, LSTRING(Ammo_JHP_Short)]);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(46x30_JHP_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 8.8;
	};
};

class AMMO_CLASS(46x30_JHP_50Rnd) : CVO_GreenMag_Ammo_Core_50Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "4.6x30", 50, LSTRING(Ammo_JHP_Short)]);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(46x30_JHP_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 11.0;
	};
};

class AMMO_CLASS(46x30_JHP_60Rnd) : CVO_GreenMag_Ammo_Core_60Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "4.6x30", 60, LSTRING(Ammo_JHP_Short)]);

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = QAMMO_CLASS(46x30_JHP_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 13.2;
	};
};

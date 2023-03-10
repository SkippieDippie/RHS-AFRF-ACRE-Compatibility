class AMMO_CLASS(762x54_FMJ_1Rnd) : CVO_GreenMag_Ammo_Core_1Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "7.62x54", 1, LSTRING(Ammo_FMJ_Short)]);
	descriptionShort = __EVAL(format [LSTRING(Ammo_Complex_mm_Desc), "7.62x54", LSTRING(Ammo_FMJ_Full)]);
	
	picture = "\z\greenmag\addons\main\data\762mm.paa";

	scope = 2;
	
	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 0.48;
	};
};

class AMMO_CLASS(762x54_FMJ_10Rnd) : CVO_GreenMag_Ammo_Core_10Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "7.62x54", 10, LSTRING(Ammo_FMJ_Short)]);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(762x54_FMJ_1Rnd);
	
	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 4.8;
	};
};

class AMMO_CLASS(762x54_FMJ_20Rnd) : CVO_GreenMag_Ammo_Core_20Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "7.62x54", 20, LSTRING(Ammo_FMJ_Short)]);

	scope = 2;
	
	greenmag_ammotype = QAMMO_CLASS(762x54_FMJ_1Rnd);
	
	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 9.6;
	};
};

class AMMO_CLASS(762x54_FMJ_30Rnd) : CVO_GreenMag_Ammo_Core_30Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "7.62x54", 30, LSTRING(Ammo_FMJ_Short)]);

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;
	
	greenmag_ammotype = QAMMO_CLASS(762x54_FMJ_1Rnd);
	
	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 14.4;
	};
};

class AMMO_CLASS(762x54_FMJ_40Rnd) : CVO_GreenMag_Ammo_Core_40Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "7.62x54", 40, LSTRING(Ammo_FMJ_Short)]);

	scope = 2;
	
	greenmag_ammotype = QAMMO_CLASS(762x54_FMJ_1Rnd);
	
	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 19.2;
	};
};

class AMMO_CLASS(762x54_FMJ_50Rnd) : CVO_GreenMag_Ammo_Core_50Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "7.62x54", 50, LSTRING(Ammo_FMJ_Short)]);

	scope = 2;
	
	greenmag_ammotype = QAMMO_CLASS(762x54_FMJ_1Rnd);
	
	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 24.0;
	};
};

class AMMO_CLASS(762x54_FMJ_60Rnd) : CVO_GreenMag_Ammo_Core_60Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_mm_Name), "7.62x54", 60, LSTRING(Ammo_FMJ_Short)]);

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;
	
	greenmag_ammotype = QAMMO_CLASS(762x54_FMJ_1Rnd);
	
	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 28.8;
	};
};

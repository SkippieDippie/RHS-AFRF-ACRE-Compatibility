class AMMO_CLASS(762x67_Match_1Rnd) : CVO_GreenMag_Ammo_Core_1Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_in_Name), ".300WM", 1, LSTRING(Ammo_Match_Short)]);
	descriptionShort = __EVAL(format [LSTRING(Ammo_Complex_in_Desc), ".300 Winchester Magnum", LSTRING(Ammo_Match_Full)]);

	picture = "\z\greenmag\addons\main\data\762mm.paa";

	scope = 2;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 0.22;
	};
};

class AMMO_CLASS(762x67_Match_10Rnd) : CVO_GreenMag_Ammo_Core_10Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_in_Name), ".300WM", 10, LSTRING(Ammo_Match_Short)]);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(762x67_Match_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 2.2;
	};
};

class AMMO_CLASS(762x67_Match_20Rnd) : CVO_GreenMag_Ammo_Core_20Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_in_Name), ".300WM", 20, LSTRING(Ammo_Match_Short)]);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(762x67_Match_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 4.4;
	};
};

class AMMO_CLASS(762x67_Match_30Rnd) : CVO_GreenMag_Ammo_Core_30Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_in_Name), ".300WM", 30, LSTRING(Ammo_Match_Short)]);

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = QAMMO_CLASS(762x67_Match_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 6.6;
	};
};

class AMMO_CLASS(762x67_Match_40Rnd) : CVO_GreenMag_Ammo_Core_40Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_in_Name), ".300WM", 40, LSTRING(Ammo_Match_Short)]);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(762x67_Match_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 8.8;
	};
};

class AMMO_CLASS(762x67_Match_50Rnd) : CVO_GreenMag_Ammo_Core_50Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_in_Name), ".300WM", 50, LSTRING(Ammo_Match_Short)]);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(762x67_Match_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 11.0;
	};
};

class AMMO_CLASS(762x67_Match_60Rnd) : CVO_GreenMag_Ammo_Core_60Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_in_Name), ".300WM", 60, LSTRING(Ammo_Match_Short)]);

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = QAMMO_CLASS(762x67_Match_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 13.2;
	};
};

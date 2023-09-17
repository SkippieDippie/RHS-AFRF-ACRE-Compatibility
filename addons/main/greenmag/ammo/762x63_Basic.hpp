class AMMO_CLASS(762x63_Basic_1Rnd) : CVO_GreenMag_Ammo_Core_1Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Basic_in_Name), ".30-06", 1]);
	descriptionShort = __EVAL(format [LSTRING(Ammo_Basic_in_Desc), ".30-06"]);
	
	picture = "\z\greenmag\addons\main\data\762mm.paa";

	scope = 2;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 0.22;
	};
};

class AMMO_CLASS(762x63_Basic_10Rnd) : CVO_GreenMag_Ammo_Core_10Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Basic_in_Name), ".30-06", 10]);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(762x63_Basic_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 2.2;
	};
};

class AMMO_CLASS(762x63_Basic_20Rnd) : CVO_GreenMag_Ammo_Core_20Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Basic_in_Name), ".30-06", 20]);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(762x63_Basic_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 4.4;
	};
};

class AMMO_CLASS(762x63_Basic_30Rnd) : CVO_GreenMag_Ammo_Core_30Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Basic_in_Name), ".30-06", 30]);

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = QAMMO_CLASS(762x63_Basic_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 6.6;
	};
};

class AMMO_CLASS(762x63_Basic_40Rnd) : CVO_GreenMag_Ammo_Core_40Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Basic_in_Name), ".30-06", 40]);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(762x63_Basic_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 8.8;
	};
};

class AMMO_CLASS(762x63_Basic_50Rnd) : CVO_GreenMag_Ammo_Core_50Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Basic_in_Name), ".30-06", 50]);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(762x63_Basic_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 11.0;
	};
};

class AMMO_CLASS(762x63_Basic_60Rnd) : CVO_GreenMag_Ammo_Core_60Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Basic_in_Name), ".30-06", 60]);

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = QAMMO_CLASS(762x63_Basic_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 13.2;
	};
};

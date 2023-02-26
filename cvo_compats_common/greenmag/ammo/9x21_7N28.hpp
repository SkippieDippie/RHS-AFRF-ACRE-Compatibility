class AMMO_CLASS(9x21_7N28_1Rnd) : CVO_GreenMag_Ammo_Core_1Rnd {
	displayName = CESTRING(ammo,9x21_7N28_1Rnd,name);
	picture = "\z\greenmag\addons\main\data\9mm.paa";

	scope = 2;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 0.26;
	};
};

class AMMO_CLASS(9x21_7N28_10Rnd) : CVO_GreenMag_Ammo_Core_10Rnd {
	displayName = CESTRING(ammo,9x21_7N28_10Rnd,name);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(9x21_7N28_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 2.6;
	};
};

class AMMO_CLASS(9x21_7N28_20Rnd) : CVO_GreenMag_Ammo_Core_20Rnd {
	displayName = CESTRING(ammo,9x21_7N28_20Rnd,name);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(9x21_7N28_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 5.2;
	};
};

class AMMO_CLASS(9x21_7N28_30Rnd) : CVO_GreenMag_Ammo_Core_30Rnd {
	displayName = CESTRING(ammo,9x21_7N28_30Rnd,name);

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = QAMMO_CLASS(9x21_7N28_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 7.8;
	};
};

class AMMO_CLASS(9x21_7N28_40Rnd) : CVO_GreenMag_Ammo_Core_40Rnd {
	displayName = CESTRING(ammo,9x21_7N28_40Rnd,name);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(9x21_7N28_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 10.4;
	};
};

class AMMO_CLASS(9x21_7N28_50Rnd) : CVO_GreenMag_Ammo_Core_50Rnd {
	displayName = CESTRING(ammo,9x21_7N28_50Rnd,name);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(9x21_7N28_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 13.0;
	};
};

class AMMO_CLASS(9x21_7N28_60Rnd) : CVO_GreenMag_Ammo_Core_60Rnd {
	displayName = CESTRING(ammo,9x21_7N28_60Rnd,name);

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = QAMMO_CLASS(9x21_7N28_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 15.6;
	};
};

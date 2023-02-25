class AMMO_CLASS(9x19_7N21_1Rnd) : CVO_GreenMag_Ammo_Core_1Rnd {
	displayName = CESTRING(ammo,9x19_7N21_1Rnd,name);
	picture = "\z\greenmag\addons\main\data\9mm.paa";

	scope = 2;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 0.2;
	};
};

class AMMO_CLASS(9x19_7N21_10Rnd) : CVO_GreenMag_Ammo_Core_10Rnd {
	displayName = CESTRING(ammo,9x19_7N21_10Rnd,name);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(9x19_7N21_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 2.0;
	};
};

class AMMO_CLASS(9x19_7N21_20Rnd) : CVO_GreenMag_Ammo_Core_20Rnd {
	displayName = CESTRING(ammo,9x19_7N21_20Rnd,name);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(9x19_7N21_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 4.0;
	};
};

class AMMO_CLASS(9x19_7N21_30Rnd) : CVO_GreenMag_Ammo_Core_30Rnd {
	displayName = CESTRING(ammo,9x19_7N21_30Rnd,name);

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = QAMMO_CLASS(9x19_7N21_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 6.0;
	};
};

class AMMO_CLASS(9x19_7N21_40Rnd) : CVO_GreenMag_Ammo_Core_40Rnd {
	displayName = CESTRING(ammo,9x19_7N21_40Rnd,name);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(9x19_7N21_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 8.0;
	};
};

class AMMO_CLASS(9x19_7N21_50Rnd) : CVO_GreenMag_Ammo_Core_50Rnd {
	displayName = CESTRING(ammo,9x19_7N21_50Rnd,name);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(9x19_7N21_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 10.0;
	};
};

class AMMO_CLASS(9x19_7N21_60Rnd) : CVO_GreenMag_Ammo_Core_60Rnd {
	displayName = CESTRING(ammo,9x19_7N21_60Rnd,name);

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = QAMMO_CLASS(9x19_7N21_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 12.0;
	};
};

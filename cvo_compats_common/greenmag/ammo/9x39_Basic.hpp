class AMMO_CLASS(9x39_Basic_1Rnd) : CVO_GreenMag_Ammo_Core_1Rnd {
	displayName = CESTRING(ammo,9x39_Basic_1Rnd,name);
	picture = "\z\greenmag\addons\main\data\556mm.paa";

	scope = 2;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 0.49;
	};
};

class AMMO_CLASS(9x39_Basic_10Rnd) : CVO_GreenMag_Ammo_Core_10Rnd {
	displayName = CESTRING(ammo,9x39_Basic_10Rnd,name);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(9x39_Basic_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 4.9;
	};
};

class AMMO_CLASS(9x39_Basic_20Rnd) : CVO_GreenMag_Ammo_Core_20Rnd {
	displayName = CESTRING(ammo,9x39_Basic_20Rnd,name);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(9x39_Basic_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 9.8;
	};
};

class AMMO_CLASS(9x39_Basic_30Rnd) : CVO_GreenMag_Ammo_Core_30Rnd {
	displayName = CESTRING(ammo,9x39_Basic_30Rnd,name);

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = QAMMO_CLASS(9x39_Basic_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 14.7;
	};
};

class AMMO_CLASS(9x39_Basic_40Rnd) : CVO_GreenMag_Ammo_Core_40Rnd {
	displayName = CESTRING(ammo,9x39_Basic_40Rnd,name);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(9x39_Basic_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 19.6;
	};
};

class AMMO_CLASS(9x39_Basic_50Rnd) : CVO_GreenMag_Ammo_Core_50Rnd {
	displayName = CESTRING(ammo,9x39_Basic_50Rnd,name);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(9x39_Basic_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 24.5;
	};
};

class AMMO_CLASS(9x39_Basic_60Rnd) : CVO_GreenMag_Ammo_Core_60Rnd {
	displayName = CESTRING(ammo,9x39_Basic_60Rnd,name);

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = QAMMO_CLASS(9x39_Basic_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 29.4;
	};
};

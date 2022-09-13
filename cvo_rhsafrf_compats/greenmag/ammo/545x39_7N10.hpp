class AMMO_CLASS(545x39_7N10_1Rnd) : CVO_GreenMag_Ammo_Core_1Rnd {
	displayName = "5.45 7N10 - 1Rnd";
	picture = "\z\greenmag\addons\main\data\556mm.paa";

	scope = 2;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 0.22;
	};
};

class AMMO_CLASS(545x39_7N10_10Rnd) : CVO_GreenMag_Ammo_Core_10Rnd {
	displayName = "5.45 7N10 - 10Rnd";

	scope = 2;

	greenmag_ammotype = AMMO_CLASS(545x39_7N10_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 2.2;
	};
};

class AMMO_CLASS(545x39_7N10_20Rnd) : CVO_GreenMag_Ammo_Core_20Rnd {
	displayName = "5.45 7N10 - 20Rnd";

	scope = 2;

	greenmag_ammotype = AMMO_CLASS(545x39_7N10_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 4.4;
	};
};

class AMMO_CLASS(545x39_7N10_30Rnd) : CVO_GreenMag_Ammo_Core_30Rnd {
	displayName = "5.45 7N10 - 30Rnd";

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = AMMO_CLASS(545x39_7N10_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 6.6;
	};
};

class AMMO_CLASS(545x39_7N10_40Rnd) : CVO_GreenMag_Ammo_Core_40Rnd {
	displayName = "5.45 7N10 - 40Rnd";

	scope = 2;

	greenmag_ammotype = AMMO_CLASS(545x39_7N10_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 8.8;
	};
};

class AMMO_CLASS(545x39_7N10_50Rnd) : CVO_GreenMag_Ammo_Core_50Rnd {
	displayName = "5.45 7N10 - 50Rnd";

	scope = 2;

	greenmag_ammotype = AMMO_CLASS(545x39_7N10_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 11.0;
	};
};

class AMMO_CLASS(545x39_7N10_60Rnd) : CVO_GreenMag_Ammo_Core_60Rnd {
	displayName = "5.45 7N10 - 60Rnd";

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = AMMO_CLASS(545x39_7N10_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 13.2;
	};
};

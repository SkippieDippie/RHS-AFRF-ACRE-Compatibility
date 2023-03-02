class AMMO_CLASS(545x39_Subsonic_1Rnd) : CVO_GreenMag_Ammo_Core_1Rnd {
	displayName = CESTRING(ammo,545x39_7T3M_1Rnd,name);
	descriptionShort = CESTRING(ammo,545x39_Subsonic,desc);

	picture = "\z\greenmag\addons\main\data\556mm.paa";

	scope = 2;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 0.24;
	};
};

class AMMO_CLASS(545x39_Subsonic_10Rnd) : CVO_GreenMag_Ammo_Core_10Rnd {
	displayName = CESTRING(ammo,545x39_Subsonic_10Rnd,name);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(545x39_Subsonic_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 7.2;
	};
};

class AMMO_CLASS(545x39_Subsonic_20Rnd) : CVO_GreenMag_Ammo_Core_20Rnd {
	displayName = CESTRING(ammo,545x39_Subsonic_20Rnd,name);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(545x39_Subsonic_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 7.2;
	};
};

class AMMO_CLASS(545x39_Subsonic_30Rnd) : CVO_GreenMag_Ammo_Core_30Rnd {
	displayName = CESTRING(ammo,545x39_Subsonic_30Rnd,name);

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = QAMMO_CLASS(545x39_Subsonic_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 7.2;
	};
};

class AMMO_CLASS(545x39_Subsonic_40Rnd) : CVO_GreenMag_Ammo_Core_40Rnd {
	displayName = CESTRING(ammo,545x39_Subsonic_40Rnd,name);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(545x39_Subsonic_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 7.2;
	};
};

class AMMO_CLASS(545x39_Subsonic_50Rnd) : CVO_GreenMag_Ammo_Core_50Rnd {
	displayName = CESTRING(ammo,545x39_Subsonic_50Rnd,name);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(545x39_Subsonic_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 7.2;
	};
};

class AMMO_CLASS(545x39_Subsonic_60Rnd) : CVO_GreenMag_Ammo_Core_60Rnd {
	displayName = CESTRING(ammo,545x39_Subsonic_60Rnd,name);

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = QAMMO_CLASS(545x39_Subsonic_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 14.4;
	};
};

class AMMO_CLASS(127x99_AP_1Rnd) : CVO_GreenMag_Ammo_Core_1Rnd {
	displayName = CESTRING(ammo,127x99_AP_1Rnd,name);
	descriptionShort = CESTRING(ammo,127x99_AP,desc);

	picture = "\z\greenmag\addons\main\data\127mm.paa";

	scope = 2;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 2.5;
	};
};

class AMMO_CLASS(127x99_AP_10Rnd) : CVO_GreenMag_Ammo_Core_10Rnd {
	displayName = CESTRING(ammo,127x99_AP_10Rnd,name);

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = QAMMO_CLASS(127x99_AP_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 25.1;
	};
};

class AMMO_CLASS(127x99_AP_20Rnd) : CVO_GreenMag_Ammo_Core_20Rnd {
	displayName = CESTRING(ammo,127x99_AP_20Rnd,name);

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = QAMMO_CLASS(127x99_AP_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 50.2;
	};
};

class AMMO_CLASS(127x99_AP_30Rnd) : CVO_GreenMag_Ammo_Core_30Rnd {
	displayName = CESTRING(ammo,127x99_AP_30Rnd,name);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(127x99_AP_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 75.5;
	};
};

class AMMO_CLASS(127x99_AP_40Rnd) : CVO_GreenMag_Ammo_Core_40Rnd {
	displayName = CESTRING(ammo,127x99_AP_40Rnd,name);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(127x99_AP_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 100.7;
	};
};

class AMMO_CLASS(127x99_AP_50Rnd) : CVO_GreenMag_Ammo_Core_50Rnd {
	displayName = CESTRING(ammo,127x99_AP_50Rnd,name);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(127x99_AP_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 125.9;
	};
};

class AMMO_CLASS(127x99_AP_60Rnd) : CVO_GreenMag_Ammo_Core_60Rnd {
	displayName = CESTRING(ammo,127x99_AP_60Rnd,name);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(127x99_AP_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 151.0;
	};
};

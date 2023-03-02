class AMMO_CLASS(762x63_FMJ_1Rnd) : CVO_GreenMag_Ammo_Core_1Rnd {
	displayName = CESTRING(ammo,762x63_FMJ_1Rnd,name);
	descriptionShort = CESTRING(ammo,762x63_FMJ,desc);
	
	picture = "\z\greenmag\addons\main\data\762mm.paa";

	scope = 2;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 0.22;
	};
};

class AMMO_CLASS(762x63_FMJ_10Rnd) : CVO_GreenMag_Ammo_Core_10Rnd {
	displayName = CESTRING(ammo,762x63_FMJ_10Rnd,name);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(762x63_FMJ_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 2.2;
	};
};

class AMMO_CLASS(762x63_FMJ_20Rnd) : CVO_GreenMag_Ammo_Core_20Rnd {
	displayName = CESTRING(ammo,762x63_FMJ_20Rnd,name);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(762x63_FMJ_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 4.4;
	};
};

class AMMO_CLASS(762x63_FMJ_30Rnd) : CVO_GreenMag_Ammo_Core_30Rnd {
	displayName = CESTRING(ammo,762x63_FMJ_30Rnd,name);

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = QAMMO_CLASS(762x63_FMJ_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 6.6;
	};
};

class AMMO_CLASS(762x63_FMJ_40Rnd) : CVO_GreenMag_Ammo_Core_40Rnd {
	displayName = CESTRING(ammo,762x63_FMJ_40Rnd,name);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(762x63_FMJ_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 8.8;
	};
};

class AMMO_CLASS(762x63_FMJ_50Rnd) : CVO_GreenMag_Ammo_Core_50Rnd {
	displayName = CESTRING(ammo,762x63_FMJ_50Rnd,name);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(762x63_FMJ_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 11.0;
	};
};

class AMMO_CLASS(762x63_FMJ_60Rnd) : CVO_GreenMag_Ammo_Core_60Rnd {
	displayName = CESTRING(ammo,762x63_FMJ_60Rnd,name);

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = QAMMO_CLASS(762x63_FMJ_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 13.2;
	};
};

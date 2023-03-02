class AMMO_CLASS(762x54_FMJ_1Rnd) : CVO_GreenMag_Ammo_Core_1Rnd {
	displayName = CESTRING(ammo,762x54_FMJ_1Rnd,name);
	descriptionShort = CESTRING(ammo,762x54_FMJ,desc);
	
	picture = "\z\greenmag\addons\main\data\762mm.paa";

	scope = 2;
	
	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 0.48;
	};
};

class AMMO_CLASS(762x54_FMJ_10Rnd) : CVO_GreenMag_Ammo_Core_10Rnd {
	displayName = CESTRING(ammo,762x54_FMJ_10Rnd,name);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(762x54_FMJ_1Rnd);
	
	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 4.8;
	};
};

class AMMO_CLASS(762x54_FMJ_20Rnd) : CVO_GreenMag_Ammo_Core_20Rnd {
	displayName = CESTRING(ammo,762x54_FMJ_20Rnd,name);

	scope = 2;
	
	greenmag_ammotype = QAMMO_CLASS(762x54_FMJ_1Rnd);
	
	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 9.6;
	};
};

class AMMO_CLASS(762x54_FMJ_30Rnd) : CVO_GreenMag_Ammo_Core_30Rnd {
	displayName = CESTRING(ammo,762x54_FMJ_30Rnd,name);

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;
	
	greenmag_ammotype = QAMMO_CLASS(762x54_FMJ_1Rnd);
	
	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 14.4;
	};
};

class AMMO_CLASS(762x54_FMJ_40Rnd) : CVO_GreenMag_Ammo_Core_40Rnd {
	displayName = CESTRING(ammo,762x54_FMJ_40Rnd,name);

	scope = 2;
	
	greenmag_ammotype = QAMMO_CLASS(762x54_FMJ_1Rnd);
	
	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 19.2;
	};
};

class AMMO_CLASS(762x54_FMJ_50Rnd) : CVO_GreenMag_Ammo_Core_50Rnd {
	displayName = CESTRING(ammo,762x54_FMJ_50Rnd,name);

	scope = 2;
	
	greenmag_ammotype = QAMMO_CLASS(762x54_FMJ_1Rnd);
	
	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 24.0;
	};
};

class AMMO_CLASS(762x54_FMJ_60Rnd) : CVO_GreenMag_Ammo_Core_60Rnd {
	displayName = CESTRING(ammo,762x54_FMJ_60Rnd,name);

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;
	
	greenmag_ammotype = QAMMO_CLASS(762x54_FMJ_1Rnd);
	
	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 28.8;
	};
};

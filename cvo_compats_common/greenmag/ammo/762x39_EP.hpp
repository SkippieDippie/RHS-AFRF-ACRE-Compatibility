class AMMO_CLASS(762x39_EP_1Rnd) : CVO_GreenMag_Ammo_Core_1Rnd {
	displayName = CESTRING(ammo,762x39_EP_1Rnd,name);
	descriptionShort = CESTRING(ammo,762x39_EP,desc);

	picture = "\z\greenmag\addons\main\data\556mm.paa";

	scope = 2;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 0.35;
	};
};

class AMMO_CLASS(762x39_EP_10Rnd) : CVO_GreenMag_Ammo_Core_10Rnd {
	displayName = CESTRING(ammo,762x39_EP_10Rnd,name);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(762x39_EP_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 3.5;
	};
};

class AMMO_CLASS(762x39_EP_20Rnd) : CVO_GreenMag_Ammo_Core_20Rnd {
	displayName = CESTRING(ammo,762x39_EP_20Rnd,name);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(762x39_EP_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 7.0;
	};
};

class AMMO_CLASS(762x39_EP_30Rnd) : CVO_GreenMag_Ammo_Core_30Rnd {
	displayName = CESTRING(ammo,762x39_EP_30Rnd,name);

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = QAMMO_CLASS(762x39_EP_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 10.5;
	};
};

class AMMO_CLASS(762x39_EP_40Rnd) : CVO_GreenMag_Ammo_Core_40Rnd {
	displayName = CESTRING(ammo,762x39_EP_40Rnd,name);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(762x39_EP_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 14.0;
	};
};

class AMMO_CLASS(762x39_EP_50Rnd) : CVO_GreenMag_Ammo_Core_50Rnd {
	displayName = CESTRING(ammo,762x39_EP_50Rnd,name);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(762x39_EP_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 17.5;
	};
};

class AMMO_CLASS(762x39_EP_60Rnd) : CVO_GreenMag_Ammo_Core_60Rnd {
	displayName = CESTRING(ammo,762x39_EP_60Rnd,name);

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = QAMMO_CLASS(762x39_EP_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 21;
	};
};

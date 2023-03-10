class AMMO_CLASS(77x56_Tracer_1Rnd) : CVO_GreenMag_Ammo_Core_1Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_in_Name), ".303 British", 1, LSTRING(Ammo_Tracer_Short)]);
	descriptionShort = __EVAL(format [LSTRING(Ammo_Complex_in_Desc), ".303 British", LSTRING(Ammo_Tracer_Full)]);

	picture = "\z\greenmag\addons\main\data\762mm.paa";

	scope = 2;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 0.22;
	};
};

class AMMO_CLASS(77x56_Tracer_10Rnd) : CVO_GreenMag_Ammo_Core_10Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_in_Name), ".303 British", 10, LSTRING(Ammo_Tracer_Short)]);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(77x56_Tracer_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 2.2;
	};
};

class AMMO_CLASS(77x56_Tracer_20Rnd) : CVO_GreenMag_Ammo_Core_20Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_in_Name), ".303 British", 20, LSTRING(Ammo_Tracer_Short)]);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(77x56_Tracer_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 4.4;
	};
};

class AMMO_CLASS(77x56_Tracer_30Rnd) : CVO_GreenMag_Ammo_Core_30Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_in_Name), ".303 British", 30, LSTRING(Ammo_Tracer_Short)]);

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = QAMMO_CLASS(77x56_Tracer_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 6.6;
	};
};

class AMMO_CLASS(77x56_Tracer_40Rnd) : CVO_GreenMag_Ammo_Core_40Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_in_Name), ".303 British", 40, LSTRING(Ammo_Tracer_Short)]);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(77x56_Tracer_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 8.8;
	};
};

class AMMO_CLASS(77x56_Tracer_50Rnd) : CVO_GreenMag_Ammo_Core_50Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_in_Name), ".303 British", 50, LSTRING(Ammo_Tracer_Short)]);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(77x56_Tracer_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 11.0;
	};
};

class AMMO_CLASS(77x56_Tracer_60Rnd) : CVO_GreenMag_Ammo_Core_60Rnd {
	displayName = __EVAL(format [LSTRING(Ammo_Complex_in_Name), ".303 British", 60, LSTRING(Ammo_Tracer_Short)]);

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = QAMMO_CLASS(77x56_Tracer_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 13.2;
	};
};

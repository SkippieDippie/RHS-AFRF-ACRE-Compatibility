class CVO_AFRF_greenmag_CoreBelt_762x51_FMJ : CVO_GreenMag_Belt_Core {
	displayName = "7.62x51 FMJ Belt Core";

	greenmag_ammo = QAMMO_CLASS(762x51_FMJ_1Rnd);
	greenmag_basicammo = "greenmag_ammo_762x51_basic_1Rnd";
	
	greenmag_item = QBELT_CLASS(762x51_FMJ);
	greenmag_typeName = "762x51_FMJ";

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 0.48;
	};
};



class BELT_CLASS(762x51_FMJ_1) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 1, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 1;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 0.48;
	};
};

class BELT_CLASS(762x51_FMJ_2) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 2, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 2;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 0.96;
	};
};

class BELT_CLASS(762x51_FMJ_3) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 3, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 3;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 1.44;
	};
};

class BELT_CLASS(762x51_FMJ_4) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 4, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 4;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 1.92;
	};
};

class BELT_CLASS(762x51_FMJ_5) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 5, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 5;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 2.40;
	};
};

class BELT_CLASS(762x51_FMJ_6) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 6, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 6;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 2.88;
	};
};

class BELT_CLASS(762x51_FMJ_7) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 7, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 7;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 3.36;
	};
};

class BELT_CLASS(762x51_FMJ_8) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 8, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 8;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 3.84;
	};
};

class BELT_CLASS(762x51_FMJ_9) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 9, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 9;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 4.32;
	};
};

class BELT_CLASS(762x51_FMJ_10) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 10, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 10;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 4.80;
	};
};

class BELT_CLASS(762x51_FMJ_11) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 11, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 11;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 5.28;
	};
};

class BELT_CLASS(762x51_FMJ_12) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 12, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 12;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 5.76;
	};
};

class BELT_CLASS(762x51_FMJ_13) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 13, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 13;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 6.24;
	};
};

class BELT_CLASS(762x51_FMJ_14) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 14, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 14;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 6.72;
	};
};

class BELT_CLASS(762x51_FMJ_15) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 15, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 15;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 7.20;
	};
};

class BELT_CLASS(762x51_FMJ_16) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 16, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 16;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 7.68;
	};
};

class BELT_CLASS(762x51_FMJ_17) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 17, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 17;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 8.16;
	};
};

class BELT_CLASS(762x51_FMJ_18) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 18, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 18;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 8.64;
	};
};

class BELT_CLASS(762x51_FMJ_19) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 19, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 19;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 9.12;
	};
};

class BELT_CLASS(762x51_FMJ_20) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 20, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 20;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 9.60;
	};
};

class BELT_CLASS(762x51_FMJ_21) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 21, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 21;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 10.08;
	};
};

class BELT_CLASS(762x51_FMJ_22) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 22, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 22;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 10.56;
	};
};

class BELT_CLASS(762x51_FMJ_23) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 23, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 23;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 10.04;
	};
};

class BELT_CLASS(762x51_FMJ_24) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 24, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 24;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 11.52;
	};
};

class BELT_CLASS(762x51_FMJ_25) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 25, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 25;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 12.00;
	};
};

class BELT_CLASS(762x51_FMJ_26) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 26, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 26;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 12.48;
	};
};

class BELT_CLASS(762x51_FMJ_27) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 27, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 27;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 12.96;
	};
};

class BELT_CLASS(762x51_FMJ_28) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 28, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 28;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 13.44;
	};
};

class BELT_CLASS(762x51_FMJ_29) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 29, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 29;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 13.92;
	};
};

class BELT_CLASS(762x51_FMJ_30) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 30, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 30;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 14.40;
	};
};

class BELT_CLASS(762x51_FMJ_31) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 31, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 31;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 14.88;
	};
};

class BELT_CLASS(762x51_FMJ_32) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 32, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 32;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 15.36;
	};
};

class BELT_CLASS(762x51_FMJ_33) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 33, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 33;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 15.84;
	};
};

class BELT_CLASS(762x51_FMJ_34) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 34, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 34;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 16.32;
	};
};

class BELT_CLASS(762x51_FMJ_35) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 35, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 35;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 16.80;
	};
};

class BELT_CLASS(762x51_FMJ_36) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 36, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 36;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 17.28;
	};
};

class BELT_CLASS(762x51_FMJ_37) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 37, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 37;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 17.76;
	};
};

class BELT_CLASS(762x51_FMJ_38) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 38, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 38;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 18.24;
	};
};

class BELT_CLASS(762x51_FMJ_39) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 39, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 39;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 18.76;
	};
};

class BELT_CLASS(762x51_FMJ_40) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 40, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 40;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 19.20;
	};
};

class BELT_CLASS(762x51_FMJ_41) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 41, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 41;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 19.68;
	};
};

class BELT_CLASS(762x51_FMJ_42) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 42, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 42;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 20.16;
	};
};

class BELT_CLASS(762x51_FMJ_43) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 43, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 43;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 20.64;
	};
};

class BELT_CLASS(762x51_FMJ_44) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 44, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 44;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 21.12;
	};
};

class BELT_CLASS(762x51_FMJ_45) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 45, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 45;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 21.60;
	};
};

class BELT_CLASS(762x51_FMJ_46) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 46, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 46;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 22.08;
	};
};

class BELT_CLASS(762x51_FMJ_47) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 47, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 47;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 22.56;
	};
};

class BELT_CLASS(762x51_FMJ_48) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 48, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 48;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 23.04;
	};
};

class BELT_CLASS(762x51_FMJ_49) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 49, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 49;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 23.52;
	};
};

class BELT_CLASS(762x51_FMJ_50) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 50, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 50;

	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 24.00;
	};
};

class BELT_CLASS(762x51_FMJ_51) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 51, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 51;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 24.48;
	};
};

class BELT_CLASS(762x51_FMJ_52) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 52, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 52;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 24.96;
	};
};

class BELT_CLASS(762x51_FMJ_53) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 53, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 53;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 25.44;
	};
};

class BELT_CLASS(762x51_FMJ_54) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 54, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 54;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 25.92;
	};
};

class BELT_CLASS(762x51_FMJ_55) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 55, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 55;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 26.40;
	};
};

class BELT_CLASS(762x51_FMJ_56) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 56, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 56;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 26.88;
	};
};

class BELT_CLASS(762x51_FMJ_57) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 57, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 57;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 27.36;
	};
};

class BELT_CLASS(762x51_FMJ_58) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 58, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 58;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 27.84;
	};
};

class BELT_CLASS(762x51_FMJ_59) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 59, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 59;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 28.32;
	};
};

class BELT_CLASS(762x51_FMJ_60) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 60, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 60;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 28.80;
	};
};

class BELT_CLASS(762x51_FMJ_61) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 61, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 61;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 29.28;
	};
};

class BELT_CLASS(762x51_FMJ_62) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 62, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 62;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 29.76;
	};
};

class BELT_CLASS(762x51_FMJ_63) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 63, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 63;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 30.24;
	};
};

class BELT_CLASS(762x51_FMJ_64) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 64, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 64;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 20.72;
	};
};

class BELT_CLASS(762x51_FMJ_65) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 65, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 65;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 31.20;
	};
};

class BELT_CLASS(762x51_FMJ_66) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 66, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 66;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 31.68;
	};
};

class BELT_CLASS(762x51_FMJ_67) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 67, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 67;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 32.16;
	};
};

class BELT_CLASS(762x51_FMJ_68) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 68, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 68;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 32.64;
	};
};

class BELT_CLASS(762x51_FMJ_69) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 69, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 69;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 33.12;
	};
};

class BELT_CLASS(762x51_FMJ_70) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 70, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 70;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 33.60;
	};
};

class BELT_CLASS(762x51_FMJ_71) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 71, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 71;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 34.08;
	};
};

class BELT_CLASS(762x51_FMJ_72) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 72, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 72;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 34.56;
	};
};

class BELT_CLASS(762x51_FMJ_73) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 73, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 73;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 35.04;
	};
};

class BELT_CLASS(762x51_FMJ_74) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 74, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 74;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 35.52;
	};
};

class BELT_CLASS(762x51_FMJ_75) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 75, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 75;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 36.00;
	};
};

class BELT_CLASS(762x51_FMJ_76) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 76, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 76;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 36.48;
	};
};

class BELT_CLASS(762x51_FMJ_77) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 77, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 77;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 36.96;
	};
};

class BELT_CLASS(762x51_FMJ_78) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 78, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 78;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 37.44;
	};
};

class BELT_CLASS(762x51_FMJ_79) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 79, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 79;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 37.92;
	};
};

class BELT_CLASS(762x51_FMJ_80) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 80, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 80;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 38.40;
	};
};

class BELT_CLASS(762x51_FMJ_81) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 81, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 81;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 38.88;
	};
};

class BELT_CLASS(762x51_FMJ_82) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 82, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 82;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 39.36;
	};
};

class BELT_CLASS(762x51_FMJ_83) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 83, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 83;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 39.84;
	};
};

class BELT_CLASS(762x51_FMJ_84) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 84, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 84;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 40.32;
	};
};

class BELT_CLASS(762x51_FMJ_85) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 85, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 85;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 40.80;
	};
};

class BELT_CLASS(762x51_FMJ_86) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 86, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 86;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 41.28;
	};
};

class BELT_CLASS(762x51_FMJ_87) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 87, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 87;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 41.76;
	};
};

class BELT_CLASS(762x51_FMJ_88) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 88, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 88;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 42.24;
	};
};

class BELT_CLASS(762x51_FMJ_89) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 89, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 89;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 42.72;
	};
};

class BELT_CLASS(762x51_FMJ_90) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 90, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 90;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 43.20;
	};
};

class BELT_CLASS(762x51_FMJ_91) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 91, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 91;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 43.68;
	};
};

class BELT_CLASS(762x51_FMJ_92) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 92, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 92;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 44.16;
	};
};

class BELT_CLASS(762x51_FMJ_93) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 93, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 93;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 44.64;
	};
};

class BELT_CLASS(762x51_FMJ_94) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 94, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 94;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 45.12;
	};
};

class BELT_CLASS(762x51_FMJ_95) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 95, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 95;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 45.60;
	};
};

class BELT_CLASS(762x51_FMJ_96) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 96, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 96;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 46.08;
	};
};

class BELT_CLASS(762x51_FMJ_97) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 97, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 97;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 46.56;
	};
};

class BELT_CLASS(762x51_FMJ_98) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 98, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 98;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 47.04;
	};
};

class BELT_CLASS(762x51_FMJ_99) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 99, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 99;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 47.52;
	};
};

class BELT_CLASS(762x51_FMJ_100) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 100, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 100;

	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 48.0;
	};
};
class BELT_CLASS(762x51_FMJ_101) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 101, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 101;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 48.48;
	};
};

class BELT_CLASS(762x51_FMJ_102) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 102, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 102;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 48.96;
	};
};

class BELT_CLASS(762x51_FMJ_103) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 103, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 103;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 49.44;
	};
};

class BELT_CLASS(762x51_FMJ_104) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 104, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 104;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 49.92;
	};
};

class BELT_CLASS(762x51_FMJ_105) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 105, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 105;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 50.40;
	};
};

class BELT_CLASS(762x51_FMJ_106) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 106, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 106;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 50.88;
	};
};

class BELT_CLASS(762x51_FMJ_107) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 107, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 107;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 51.36;
	};
};

class BELT_CLASS(762x51_FMJ_108) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 108, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 108;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 51.84;
	};
};

class BELT_CLASS(762x51_FMJ_109) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 109, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 109;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 52.32;
	};
};

class BELT_CLASS(762x51_FMJ_110) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 110, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 110;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 52.80;
	};
};

class BELT_CLASS(762x51_FMJ_111) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 111, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 111;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 53.28;
	};
};

class BELT_CLASS(762x51_FMJ_112) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 112, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 112;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 53.76;
	};
};

class BELT_CLASS(762x51_FMJ_113) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 113, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 113;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 54.24;
	};
};

class BELT_CLASS(762x51_FMJ_114) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 114, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 114;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 54.72;
	};
};

class BELT_CLASS(762x51_FMJ_115) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 115, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 115;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 55.20;
	};
};

class BELT_CLASS(762x51_FMJ_116) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 116, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 116;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 55.68;
	};
};

class BELT_CLASS(762x51_FMJ_117) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 117, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 117;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 56.16;
	};
};

class BELT_CLASS(762x51_FMJ_118) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 118, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 118;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 56.64;
	};
};

class BELT_CLASS(762x51_FMJ_119) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 119, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 119;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 57.12;
	};
};

class BELT_CLASS(762x51_FMJ_120) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 120, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 120;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 57.60;
	};
};

class BELT_CLASS(762x51_FMJ_121) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 121, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 121;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 58.08;
	};
};

class BELT_CLASS(762x51_FMJ_122) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 122, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 122;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 58.56;
	};
};

class BELT_CLASS(762x51_FMJ_123) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 123, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 123;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 59.04;
	};
};

class BELT_CLASS(762x51_FMJ_124) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 124, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 124;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 59.52;
	};
};

class BELT_CLASS(762x51_FMJ_125) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 125, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 125;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 60.00;
	};
};

class BELT_CLASS(762x51_FMJ_126) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 126, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 126;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 60.48;
	};
};

class BELT_CLASS(762x51_FMJ_127) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 127, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 127;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 60.96;
	};
};

class BELT_CLASS(762x51_FMJ_128) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 128, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 128;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 61.44;
	};
};

class BELT_CLASS(762x51_FMJ_129) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 129, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 129;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 61.92;
	};
};

class BELT_CLASS(762x51_FMJ_130) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 130, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 130;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 62.40;
	};
};

class BELT_CLASS(762x51_FMJ_131) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 131, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 131;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 62.88;
	};
};

class BELT_CLASS(762x51_FMJ_132) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 132, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 132;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 63.36;
	};
};

class BELT_CLASS(762x51_FMJ_133) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 133, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 133;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 63.84;
	};
};

class BELT_CLASS(762x51_FMJ_134) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 134, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 134;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 64.32;
	};
};

class BELT_CLASS(762x51_FMJ_135) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 135, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 135;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 64.80;
	};
};

class BELT_CLASS(762x51_FMJ_136) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 136, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 136;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 65.28;
	};
};

class BELT_CLASS(762x51_FMJ_137) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 137, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 137;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 65.76;
	};
};

class BELT_CLASS(762x51_FMJ_138) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 138, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 138;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 66.24;
	};
};

class BELT_CLASS(762x51_FMJ_139) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 139, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 139;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 66.72;
	};
};

class BELT_CLASS(762x51_FMJ_140) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 140, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 140;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 67.20;
	};
};

class BELT_CLASS(762x51_FMJ_141) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 141, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 141;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 67.68;
	};
};

class BELT_CLASS(762x51_FMJ_142) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 142, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 142;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 68.16;
	};
};

class BELT_CLASS(762x51_FMJ_143) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 143, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 143;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 68.64;
	};
};

class BELT_CLASS(762x51_FMJ_144) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 144, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 144;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 69.12;
	};
};

class BELT_CLASS(762x51_FMJ_145) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 145, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 145;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 69.60;
	};
};

class BELT_CLASS(762x51_FMJ_146) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 146, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 146;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 70.08;
	};
};

class BELT_CLASS(762x51_FMJ_147) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 147, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 147;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 70.56;
	};
};

class BELT_CLASS(762x51_FMJ_148) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 148, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 148;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 71.04;
	};
};

class BELT_CLASS(762x51_FMJ_149) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 149, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 149;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 71.52;
	};
};

class BELT_CLASS(762x51_FMJ_150) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 150, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 150;

	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 72.00;
	};
};

class BELT_CLASS(762x51_FMJ_151) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 151, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 151;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 72.48;
	};
};

class BELT_CLASS(762x51_FMJ_152) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 152, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 152;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 72.96;
	};
};

class BELT_CLASS(762x51_FMJ_153) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 153, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 153;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 73.44;
	};
};

class BELT_CLASS(762x51_FMJ_154) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 154, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 154;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 73.92;
	};
};

class BELT_CLASS(762x51_FMJ_155) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 155, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 155;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 74.40;
	};
};

class BELT_CLASS(762x51_FMJ_156) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 156, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 156;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 74.88;
	};
};

class BELT_CLASS(762x51_FMJ_157) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 157, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 157;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 75.36;
	};
};

class BELT_CLASS(762x51_FMJ_158) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 158, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 158;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 75.84;
	};
};

class BELT_CLASS(762x51_FMJ_159) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 159, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 159;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 76.32;
	};
};

class BELT_CLASS(762x51_FMJ_160) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 160, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 160;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 76.80;
	};
};

class BELT_CLASS(762x51_FMJ_161) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 161, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 161;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 77.28;
	};
};

class BELT_CLASS(762x51_FMJ_162) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 162, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 162;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 77.76;
	};
};

class BELT_CLASS(762x51_FMJ_163) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 163, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 163;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 78.24;
	};
};

class BELT_CLASS(762x51_FMJ_164) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 164, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 164;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 78.72;
	};
};

class BELT_CLASS(762x51_FMJ_165) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 165, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 165;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 79.20;
	};
};

class BELT_CLASS(762x51_FMJ_166) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 166, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 166;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 79.68;
	};
};

class BELT_CLASS(762x51_FMJ_167) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 167, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 167;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 80.16;
	};
};

class BELT_CLASS(762x51_FMJ_168) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 168, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 168;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 80.64;
	};
};

class BELT_CLASS(762x51_FMJ_169) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 169, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 169;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 81.12;
	};
};

class BELT_CLASS(762x51_FMJ_170) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 170, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 170;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 81.60;
	};
};

class BELT_CLASS(762x51_FMJ_171) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 171, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 171;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 82.08;
	};
};

class BELT_CLASS(762x51_FMJ_172) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 172, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 172;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 82.56;
	};
};

class BELT_CLASS(762x51_FMJ_173) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 173, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 173;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 83.04;
	};
};

class BELT_CLASS(762x51_FMJ_174) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 174, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 174;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 83.52;
	};
};

class BELT_CLASS(762x51_FMJ_175) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 175, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 175;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 84.0;
	};
};

class BELT_CLASS(762x51_FMJ_176) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 176, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 176;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 84.48;
	};
};

class BELT_CLASS(762x51_FMJ_177) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 177, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 177;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 84.96;
	};
};

class BELT_CLASS(762x51_FMJ_178) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 178, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 178;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 85.44;
	};
};

class BELT_CLASS(762x51_FMJ_179) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 179, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 179;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 85.92;
	};
};

class BELT_CLASS(762x51_FMJ_180) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 180, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 180;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 86.40;
	};
};

class BELT_CLASS(762x51_FMJ_181) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 181, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 181;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 86.88;
	};
};

class BELT_CLASS(762x51_FMJ_182) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 182, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 182;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 87.36;
	};
};

class BELT_CLASS(762x51_FMJ_183) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 183, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 183;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 87.84;
	};
};

class BELT_CLASS(762x51_FMJ_184) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 184, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 184;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 88.32;
	};
};

class BELT_CLASS(762x51_FMJ_185) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 185, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 185;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 88.80;
	};
};

class BELT_CLASS(762x51_FMJ_186) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 186, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 186;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 89.28;
	};
};

class BELT_CLASS(762x51_FMJ_187) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 187, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 187;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 89.76;
	};
};

class BELT_CLASS(762x51_FMJ_188) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 188, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 188;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 90.24;
	};
};

class BELT_CLASS(762x51_FMJ_189) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 189, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 189;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 90.72;
	};
};

class BELT_CLASS(762x51_FMJ_190) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 190, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 190;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 91.20;
	};
};

class BELT_CLASS(762x51_FMJ_191) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 191, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 191;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 91.68;
	};
};

class BELT_CLASS(762x51_FMJ_192) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 192, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 192;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 92.16;
	};
};

class BELT_CLASS(762x51_FMJ_193) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 193, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 193;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 92.64;
	};
};

class BELT_CLASS(762x51_FMJ_194) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 194, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 194;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 93.12;
	};
};

class BELT_CLASS(762x51_FMJ_195) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 195, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 195;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 93.60;
	};
};

class BELT_CLASS(762x51_FMJ_196) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 196, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 196;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 94.08;
	};
};

class BELT_CLASS(762x51_FMJ_197) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 197, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 197;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 94.56;
	};
};

class BELT_CLASS(762x51_FMJ_198) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 198, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 198;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 05.04;
	};
};

class BELT_CLASS(762x51_FMJ_199) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 199, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 199;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 95.52;
	};
};

class BELT_CLASS(762x51_FMJ_200) : CVO_AFRF_greenmag_CoreBelt_762x51_FMJ {
	displayName = __EVAL(format [LSTRING(Ammo_Belt_Basic_mm_Name), "7.62x51", 200, LSTRING(Ammo_FMJ_Short)]);
	
	greenmag_bullets = 200;

	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 96.0;
	};
};

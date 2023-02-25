#include "\cvo\cvo_compats_rhsafrf\greenmag\macros.hpp"

#if GREENMAG_LOADED
class CfgPatches {
	class CVO_Compats_RHSAFRF_GreenMag {
		addonRootClass = "CVO_Compats_RHSAFRF";

		requiredAddons[] = {
			"rhs_c_weapons",
			"greenmag_main"
		};
		requiredVersion = 1.00;

		units[] = {};
		weapons[] = {
			// 5.45x39 Ammo
			QAMMO_CLASS(545x39_7N6_1Rnd),
			QAMMO_CLASS(545x39_7N6_30Rnd),
			QAMMO_CLASS(545x39_7N6_60Rnd),
			QAMMO_CLASS(545x39_7N6M_1Rnd),
			QAMMO_CLASS(545x39_7N6M_30Rnd),
			QAMMO_CLASS(545x39_7N6M_60Rnd),
			QAMMO_CLASS(545x39_7N10_1Rnd),
			QAMMO_CLASS(545x39_7N10_30Rnd),
			QAMMO_CLASS(545x39_7N10_60Rnd),
			QAMMO_CLASS(545x39_7N22_1Rnd),
			QAMMO_CLASS(545x39_7N22_30Rnd),
			QAMMO_CLASS(545x39_7N22_60Rnd),
			QAMMO_CLASS(545x39_7T3M_1Rnd),
			QAMMO_CLASS(545x39_7T3M_30Rnd),
			QAMMO_CLASS(545x39_7T3M_60Rnd),
			QAMMO_CLASS(545x39_7U1_1Rnd),
			QAMMO_CLASS(545x39_7U1_30Rnd),
			QAMMO_CLASS(545x39_7U1_60Rnd),
			// 7.62x39 Ammo
			QAMMO_CLASS(762x39_57N231_1Rnd),
			QAMMO_CLASS(762x39_57N231_30Rnd),
			QAMMO_CLASS(762x39_57N231_60Rnd),
			QAMMO_CLASS(762x39_57N231P_1Rnd),
			QAMMO_CLASS(762x39_57N231P_30Rnd),
			QAMMO_CLASS(762x39_57N231P_60Rnd),
			QAMMO_CLASS(762x39_57N231U_1Rnd),
			QAMMO_CLASS(762x39_57N231U_30Rnd),
			QAMMO_CLASS(762x39_57N231U_60Rnd),
			// 7.62x54 Ammo
			QAMMO_CLASS(762x54_7N1_1Rnd),
			QAMMO_CLASS(762x54_7N1_30Rnd),
			QAMMO_CLASS(762x54_7N1_60Rnd),
			QAMMO_CLASS(762x54_7N13_1Rnd),
			QAMMO_CLASS(762x54_7N13_30Rnd),
			QAMMO_CLASS(762x54_7N13_60Rnd),
			QAMMO_CLASS(762x54_7N14_1Rnd),
			QAMMO_CLASS(762x54_7N14_30Rnd),
			QAMMO_CLASS(762x54_7N14_60Rnd),
			QAMMO_CLASS(762x54_7N26_1Rnd),
			QAMMO_CLASS(762x54_7N26_30Rnd),
			QAMMO_CLASS(762x54_7N26_60Rnd),
			QAMMO_CLASS(762x54_7BZ3_1Rnd),
			QAMMO_CLASS(762x54_7BZ3_30Rnd),
			QAMMO_CLASS(762x54_7BZ3_60Rnd),
			QAMMO_CLASS(762x54_57N323S_1Rnd),
			QAMMO_CLASS(762x54_57N323S_30Rnd),
			QAMMO_CLASS(762x54_57N323S_60Rnd),
			// 7.62x54 Belts
			QBELT_CLASS(762x54_7N13_50),
			QBELT_CLASS(762x54_7N13_100),
			QBELT_CLASS(762x54_7N13_150),
			QBELT_CLASS(762x54_7N13_200),
			QBELT_CLASS(762x54_7N26_50),
			QBELT_CLASS(762x54_7N26_100),
			QBELT_CLASS(762x54_7N26_150),
			QBELT_CLASS(762x54_7N26_200),
			QBELT_CLASS(762x54_7T2_50),
			QBELT_CLASS(762x54_7T2_100),
			QBELT_CLASS(762x54_7T2_150),
			QBELT_CLASS(762x54_7T2_200),
			QBELT_CLASS(762x54_7BZ3_50),
			QBELT_CLASS(762x54_7BZ3_100),
			QBELT_CLASS(762x54_7BZ3_150),
			QBELT_CLASS(762x54_7BZ3_200),
			QBELT_CLASS(762x54_57N323S_50),
			QBELT_CLASS(762x54_57N323S_100),
			QBELT_CLASS(762x54_57N323S_150),
			QBELT_CLASS(762x54_57N323S_200),
			// 9x18 Ammo
			QAMMO_CLASS(9x18_Basic_1Rnd),
			QAMMO_CLASS(9x18_Basic_30Rnd),
			QAMMO_CLASS(9x18_Basic_60Rnd),
			QAMMO_CLASS(9x18_57N181S_1Rnd),
			QAMMO_CLASS(9x18_57N181S_30Rnd),
			QAMMO_CLASS(9x18_57N181S_60Rnd),
			// 9x19 Ammo
			QAMMO_CLASS(9x19_7N21_1Rnd),
			QAMMO_CLASS(9x19_7N21_30Rnd),
			QAMMO_CLASS(9x19_7N21_60Rnd),
			QAMMO_CLASS(9x19_7N31_1Rnd),
			QAMMO_CLASS(9x19_7N31_30Rnd),
			QAMMO_CLASS(9x19_7N31_60Rnd),
			// 9x21 Ammo
			QAMMO_CLASS(9x21_7N28_1Rnd),
			QAMMO_CLASS(9x21_7N28_30Rnd),
			QAMMO_CLASS(9x21_7N28_60Rnd),
			QAMMO_CLASS(9x21_7N29_1Rnd),
			QAMMO_CLASS(9x21_7N29_30Rnd),
			QAMMO_CLASS(9x21_7N29_60Rnd),
			QAMMO_CLASS(9x21_7BT3_1Rnd),
			QAMMO_CLASS(9x21_7BT3_30Rnd),
			QAMMO_CLASS(9x21_7BT3_60Rnd),
			// 9x39 Ammo
			QAMMO_CLASS(9x39_basic_1Rnd),
			QAMMO_CLASS(9x39_basic_30Rnd),
			QAMMO_CLASS(9x39_basic_60Rnd),
			QAMMO_CLASS(9x39_SP5_1Rnd),
			QAMMO_CLASS(9x39_SP5_30Rnd),
			QAMMO_CLASS(9x39_SP5_60Rnd),
			QAMMO_CLASS(9x39_SP6_1Rnd),
			QAMMO_CLASS(9x39_SP6_30Rnd),
			QAMMO_CLASS(9x39_SP6_60Rnd)
		};
	};
};

class CfgMagazines {
	// External Classes
	class CA_Magazine;

	#include "magazines\rhs_afrf_545x39.hpp"
	#include "magazines\rhs_afrf_762x39.hpp"
	#include "magazines\rhs_afrf_762x54.hpp"
	#include "magazines\rhs_afrf_9x19.hpp"
	#include "magazines\rhs_afrf_9x18.hpp"
	#include "magazines\rhs_afrf_9x21.hpp"
	#include "magazines\rhs_afrf_9x39.hpp"
	#include "magazines\rhs_afrf_338.hpp"

};

class CfgWeapons {
	// External Classes
	class CBA_MiscItem;
	class CBA_MiscItem_ItemInfo;
	class greenmag_core_1Rnd;
	class greenmag_core_10Rnd;
	class greenmag_core_20Rnd;
	class greenmag_core_30Rnd;
	class greenmag_core_40Rnd;
	class greenmag_core_50Rnd;
	class greenmag_core_60Rnd;

	// Core Classes
	class CVO_GreenMag_Ammo_Core_1Rnd : greenmag_core_1Rnd {
		author = "Skippie [CVO]";
	};
	class CVO_GreenMag_Ammo_Core_10Rnd : greenmag_core_10Rnd {
		author = "Skippie [CVO]";
	};
	class CVO_GreenMag_Ammo_Core_20Rnd : greenmag_core_20Rnd {
		author = "Skippie [CVO]";
	};
	class CVO_GreenMag_Ammo_Core_30Rnd : greenmag_core_30Rnd {
		author = "Skippie [CVO]";
	};
	class CVO_GreenMag_Ammo_Core_40Rnd : greenmag_core_40Rnd {
		author = "Skippie [CVO]";
	};
	class CVO_GreenMag_Ammo_Core_50Rnd : greenmag_core_50Rnd {
		author = "Skippie [CVO]";
	};
	class CVO_GreenMag_Ammo_Core_60Rnd : greenmag_core_60Rnd {
		author = "Skippie [CVO]";
	};

	class CVO_GreenMag_Belt_Core : CBA_MiscItem {
		author = "Skippie [CVO]";

		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;

		picture = "\z\greenmag\addons\main\data\belt.paa";
	    model = "\A3\weapons_F\ammo\mag_univ.p3d";
	    
	    icon = "iconObject_circle";
	    mapSize = 0.034;
	};


	// Ammo
	#include "ammo\545x39_7N6.hpp"
	#include "ammo\545x39_7N6M.hpp"
	#include "ammo\545x39_7N10.hpp"
	#include "ammo\545x39_7N22.hpp"
	#include "ammo\545x39_7T3M.hpp"
	#include "ammo\545x39_7U1.hpp"

	#include "ammo\762x39_57N231.hpp"
	#include "ammo\762x39_57N231P.hpp"
	#include "ammo\762x39_57N231U.hpp"

	#include "ammo\762x54_57N323S.hpp"
	#include "ammo\762x54_7BZ3.hpp"
	#include "ammo\762x54_7N1.hpp"
	#include "ammo\762x54_7N13.hpp"
	#include "ammo\762x54_7N14.hpp"
	#include "ammo\762x54_7N26.hpp"
	#include "ammo\762x54_7T2.hpp"
	
	#include "ammo\9x18_57N181S.hpp"
	#include "ammo\9x18_Basic.hpp"

	#include "ammo\9x19_7N21.hpp"
	#include "ammo\9x19_7N31.hpp"

	#include "ammo\9x21_7N28.hpp"
	#include "ammo\9x21_7N29.hpp"
	#include "ammo\9x21_7BT3.hpp"

	#include "ammo\9x39_Basic.hpp"
	#include "ammo\9x39_SP5.hpp"
	#include "ammo\9x39_SP6.hpp"

	// Belts
	#include "belts\762x54_57N323S.hpp"
	#include "belts\762x54_7BZ3.hpp"
	#include "belts\762x54_7N13.hpp"
	#include "belts\762x54_7N26.hpp"
	#include "belts\762x54_7T2.hpp"
	
};
#endif

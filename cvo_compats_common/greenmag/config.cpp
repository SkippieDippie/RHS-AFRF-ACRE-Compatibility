#include "macros_greenmag.hpp"

//#if GREENMAG_LOADED
class CfgPatches {
	class CVO_Compats_Common_GreenMag {
		addonRootClass = "CVO_Compats_Common";

		requiredAddons[] = {
			"greenmag_main"
		};
		requiredVersion = 1.00;

		units[] = {};
		weapons[] = {
			// 4.6x30 Ammo
			QAMMO_CLASS(46x30_Basic_1Rnd),
			QAMMO_CLASS(46x30_Basic_30Rnd),
			QAMMO_CLASS(46x30_Basic_60Rnd),
			QAMMO_CLASS(46x30_AP_1Rnd),
			QAMMO_CLASS(46x30_AP_30Rnd),
			QAMMO_CLASS(46x30_AP_60Rnd),
			QAMMO_CLASS(46x30_FMJ_1Rnd),
			QAMMO_CLASS(46x30_FMJ_30Rnd),
			QAMMO_CLASS(46x30_FMJ_60Rnd),
			QAMMO_CLASS(46x30_JHP_1Rnd),
			QAMMO_CLASS(46x30_JHP_30Rnd),
			QAMMO_CLASS(46x30_JHP_60Rnd),
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
			// 5.56x45 Ammo
			QAMMO_CLASS(556x45_M193_1Rnd),
			QAMMO_CLASS(556x45_M193_30Rnd),
			QAMMO_CLASS(556x45_M193_60Rnd),
			QAMMO_CLASS(556x45_M196_1Rnd),
			QAMMO_CLASS(556x45_M196_30Rnd),
			QAMMO_CLASS(556x45_M196_60Rnd),
			QAMMO_CLASS(556x45_M200_1Rnd),
			QAMMO_CLASS(556x45_M200_30Rnd),
			QAMMO_CLASS(556x45_M200_60Rnd),
			QAMMO_CLASS(556x45_M855_1Rnd),
			QAMMO_CLASS(556x45_M855_30Rnd),
			QAMMO_CLASS(556x45_M855_60Rnd),
			QAMMO_CLASS(556x45_M856_1Rnd),
			QAMMO_CLASS(556x45_M856_30Rnd),
			QAMMO_CLASS(556x45_M856_60Rnd),
			QAMMO_CLASS(556x45_M855A1_1Rnd),
			QAMMO_CLASS(556x45_M855A1_30Rnd),
			QAMMO_CLASS(556x45_M855A1_60Rnd),
			QAMMO_CLASS(556x45_M856A1_1Rnd),
			QAMMO_CLASS(556x45_M856A1_30Rnd),
			QAMMO_CLASS(556x45_M856A1_60Rnd),
			// 7.62x25 Ammo
			QAMMO_CLASS(762x25_Basic_1Rnd),
			QAMMO_CLASS(762x25_Basic_30Rnd),
			QAMMO_CLASS(762x25_Basic_60Rnd),
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
			// 7.62x51 Ammo
			QAMMO_CLASS(762x51_M118_1Rnd),
			QAMMO_CLASS(762x51_M118_30Rnd),
			QAMMO_CLASS(762x51_M118_60Rnd),
			QAMMO_CLASS(762x51_M61_1Rnd),
			QAMMO_CLASS(762x51_M61_30Rnd),
			QAMMO_CLASS(762x51_M61_60Rnd),
			QAMMO_CLASS(762x51_M62_1Rnd),
			QAMMO_CLASS(762x51_M62_30Rnd),
			QAMMO_CLASS(762x51_M62_60Rnd),
			QAMMO_CLASS(762x51_M80_1Rnd),
			QAMMO_CLASS(762x51_M80_30Rnd),
			QAMMO_CLASS(762x51_M80_60Rnd),
			QAMMO_CLASS(762x51_M80A1_1Rnd),
			QAMMO_CLASS(762x51_M80A1_30Rnd),
			QAMMO_CLASS(762x51_M80A1_60Rnd),
			QAMMO_CLASS(762x51_M82_1Rnd),
			QAMMO_CLASS(762x51_M82_30Rnd),
			QAMMO_CLASS(762x51_M82_60Rnd),
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
			QAMMO_CLASS(762x54_7T2_1Rnd),
			QAMMO_CLASS(762x54_7T2_30Rnd),
			QAMMO_CLASS(762x54_7T2_60Rnd),
			QAMMO_CLASS(762x54_57N323S_1Rnd),
			QAMMO_CLASS(762x54_57N323S_30Rnd),
			QAMMO_CLASS(762x54_57N323S_60Rnd),
			QAMMO_CLASS(762x54_M30_1Rnd),
			QAMMO_CLASS(762x54_M30_30Rnd),
			QAMMO_CLASS(762x54_M30_60Rnd),
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
			// 7.62x63 (.30-06 Springfield) Ammo
			QAMMO_CLASS(762x63_Basic_1Rnd),
			QAMMO_CLASS(762x63_Basic_30Rnd),
			QAMMO_CLASS(762x63_Basic_60Rnd),
			QAMMO_CLASS(762x63_M1_1Rnd),
			QAMMO_CLASS(762x63_M1_30Rnd),
			QAMMO_CLASS(762x63_M1_60Rnd),
			QAMMO_CLASS(762x63_M2_1Rnd),
			QAMMO_CLASS(762x63_M2_30Rnd),
			QAMMO_CLASS(762x63_M2_60Rnd),
			// 7.62x67 (.300 Winchester) Ammo
			QAMMO_CLASS(762x67_Basic_1Rnd),
			QAMMO_CLASS(762x67_Basic_30Rnd),
			QAMMO_CLASS(762x67_Basic_60Rnd),
			QAMMO_CLASS(762x67_Mk248_1Rnd),
			QAMMO_CLASS(762x67_Mk248_30Rnd),
			QAMMO_CLASS(762x67_Mk248_60Rnd),
			// 7.65x17 (.32 ACP) Ammo
			QAMMO_CLASS(765x17_Basic_1Rnd),
			QAMMO_CLASS(765x17_Basic_30Rnd),
			QAMMO_CLASS(765x17_Basic_60Rnd),
			// 7.92x57 (Mauser) Ammo
			QAMMO_CLASS(792x57_Basic_1Rnd),
			QAMMO_CLASS(792x57_Basic_30Rnd),
			QAMMO_CLASS(792x57_Basic_60Rnd),
			QAMMO_CLASS(792x57_M70_1Rnd),
			QAMMO_CLASS(792x57_M70_30Rnd),
			QAMMO_CLASS(792x57_M70_60Rnd),
			QAMMO_CLASS(792x57_M75_1Rnd),
			QAMMO_CLASS(792x57_M75_30Rnd),
			QAMMO_CLASS(792x57_M75_60Rnd),
			// 8x22 (Nambu) Ammo
			QAMMO_CLASS(8x22_Basic_1Rnd),
			QAMMO_CLASS(8x22_Basic_30Rnd),
			QAMMO_CLASS(8x22_Basic_60Rnd),
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
			QAMMO_CLASS(9x19_M822_1Rnd),
			QAMMO_CLASS(9x19_M822_30Rnd),
			QAMMO_CLASS(9x19_M822_60Rnd),
			QAMMO_CLASS(9x19_Mk243_1Rnd),
			QAMMO_CLASS(9x19_Mk243_30Rnd),
			QAMMO_CLASS(9x19_Mk243_60Rnd),
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
	// 4.6x30
	#include "ammo\46x30_Basic.hpp"
	#include "ammo\46x30_AP.hpp"
	#include "ammo\46x30_FMJ.hpp"
	#include "ammo\46x30_JHP.hpp"

	// 5.45x39
	#include "ammo\545x39_7N6.hpp"
	#include "ammo\545x39_7N6M.hpp"
	#include "ammo\545x39_7N10.hpp"
	#include "ammo\545x39_7N22.hpp"
	#include "ammo\545x39_7T3M.hpp"
	#include "ammo\545x39_7U1.hpp"

	// 5.56x45 NATO
	#include "ammo\556x45_M193.hpp"
	#include "ammo\556x45_M196.hpp"
	#include "ammo\556x45_M200.hpp"
	#include "ammo\556x45_M855.hpp"
	#include "ammo\556x45_M855A1.hpp"
	#include "ammo\556x45_M856.hpp"
	#include "ammo\556x45_M856A1.hpp"

	// 7.62x25
	#include "ammo\762x25_Basic.hpp"

	// 7.62x39
	#include "ammo\762x39_57N231.hpp"
	#include "ammo\762x39_57N231P.hpp"
	#include "ammo\762x39_57N231U.hpp"

	// 7.62x51 NATO
	#include "ammo\762x51_M118.hpp"
	#include "ammo\762x51_M61.hpp"
	#include "ammo\762x51_M62.hpp"
	#include "ammo\762x51_M80.hpp"
	#include "ammo\762x51_M80A1.hpp"
	#include "ammo\762x51_M82.hpp"

	// 7.62x54
	#include "ammo\762x54_57N323S.hpp"
	#include "ammo\762x54_7BZ3.hpp"
	#include "ammo\762x54_7N1.hpp"
	#include "ammo\762x54_7N13.hpp"
	#include "ammo\762x54_7N14.hpp"
	#include "ammo\762x54_7N26.hpp"
	#include "ammo\762x54_7T2.hpp"
	#include "ammo\762x54_M30.hpp"

	// .30-06 Springfield
	#include "ammo\762x63_Basic.hpp"
	#include "ammo\762x63_M1.hpp"
	#include "ammo\762x63_M2.hpp"


	// .300 Winchester
	#include "ammo\762x67_Basic.hpp"
	#include "ammo\762x67_Mk248.hpp"


	// .32 ACP
	#include "ammo\765x17_Basic.hpp"

	// 7.92x57 Mauser
	#include "ammo\792x57_Basic.hpp"
	#include "ammo\792x57_M70.hpp"
	#include "ammo\792x57_M75.hpp"

	// 8x22 Nambu
	#include "ammo\8x22_Basic.hpp"
	
	// 9x18
	#include "ammo\9x18_57N181S.hpp"
	#include "ammo\9x18_Basic.hpp"

	// 9x19
	#include "ammo\9x19_7N21.hpp"
	#include "ammo\9x19_7N31.hpp"
	#include "ammo\9x19_M882.hpp"
	#include "ammo\9x19_Mk243.hpp"

	// 9x21
	#include "ammo\9x21_7N28.hpp"
	#include "ammo\9x21_7N29.hpp"
	#include "ammo\9x21_7BT3.hpp"

	// 9x39
	#include "ammo\9x39_Basic.hpp"
	#include "ammo\9x39_SP5.hpp"
	#include "ammo\9x39_SP6.hpp"

	// .50 BMG
	#include "ammo\127x99_M33.hpp"
	#include "ammo\127x99_Mk211.hpp"

	// Belts
	#include "belts\762x54_57N323S.hpp"
	#include "belts\762x54_7BZ3.hpp"
	#include "belts\762x54_7N13.hpp"
	#include "belts\762x54_7N26.hpp"
	#include "belts\762x54_7T2.hpp"
	
};
//#endif

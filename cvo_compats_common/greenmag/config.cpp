#include "macros_greenmag.hpp"

#if GREENMAG_LOADED
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
			QAMMO_CLASS(545x39_AP_1Rnd),
			QAMMO_CLASS(545x39_AP_30Rnd),
			QAMMO_CLASS(545x39_AP_60Rnd),
			QAMMO_CLASS(545x39_EP_1Rnd),
			QAMMO_CLASS(545x39_EP_30Rnd),
			QAMMO_CLASS(545x39_EP_60Rnd),
			QAMMO_CLASS(545x39_FMJ_1Rnd),
			QAMMO_CLASS(545x39_FMJ_30Rnd),
			QAMMO_CLASS(545x39_FMJ_60Rnd),
			QAMMO_CLASS(545x39_Subsonic_1Rnd),
			QAMMO_CLASS(545x39_Subsonic_30Rnd),
			QAMMO_CLASS(545x39_Subsonic_60Rnd),
			QAMMO_CLASS(545x39_Tracer_1Rnd),
			QAMMO_CLASS(545x39_Tracer_30Rnd),
			QAMMO_CLASS(545x39_Tracer_60Rnd),
			// 5.56x45 Ammo
			QAMMO_CLASS(556x45_AP_1Rnd),
			QAMMO_CLASS(556x45_AP_30Rnd),
			QAMMO_CLASS(556x45_AP_60Rnd),
			QAMMO_CLASS(556x45_EP_1Rnd),
			QAMMO_CLASS(556x45_EP_30Rnd),
			QAMMO_CLASS(556x45_EP_60Rnd),
			QAMMO_CLASS(556x45_FMJ_1Rnd),
			QAMMO_CLASS(556x45_FMJ_30Rnd),
			QAMMO_CLASS(556x45_FMJ_60Rnd),
			QAMMO_CLASS(556x45_JHP_1Rnd),
			QAMMO_CLASS(556x45_JHP_30Rnd),
			QAMMO_CLASS(556x45_JHP_60Rnd),
			QAMMO_CLASS(556x45_Blank_1Rnd),
			QAMMO_CLASS(556x45_Blank_30Rnd),
			QAMMO_CLASS(556x45_Blank_60Rnd),
			QAMMO_CLASS(556x45_Match_1Rnd),
			QAMMO_CLASS(556x45_Match_30Rnd),
			QAMMO_CLASS(556x45_Match_60Rnd),
			QAMMO_CLASS(556x45_Subsonic_1Rnd),
			QAMMO_CLASS(556x45_Subsonic_30Rnd),
			QAMMO_CLASS(556x45_Subsonic_60Rnd),
			QAMMO_CLASS(556x45_Tracer_1Rnd),
			QAMMO_CLASS(556x45_Tracer_30Rnd),
			QAMMO_CLASS(556x45_Tracer_60Rnd),
			// 5.7x28 Ammo
			QAMMO_CLASS(570x28_FMJ_1Rnd),
			QAMMO_CLASS(570x28_FMJ_30Rnd),
			QAMMO_CLASS(570x28_FMJ_60Rnd),
			QAMMO_CLASS(570x28_Tracer_1Rnd),
			QAMMO_CLASS(570x28_Tracer_30Rnd),
			QAMMO_CLASS(570x28_Tracer_60Rnd),
			// 7.62x25 Ammo
			QAMMO_CLASS(762x25_Basic_1Rnd),
			QAMMO_CLASS(762x25_Basic_30Rnd),
			QAMMO_CLASS(762x25_Basic_60Rnd),
			// 7.62x39 Ammo
			QAMMO_CLASS(762x39_AP_1Rnd),
			QAMMO_CLASS(762x39_AP_30Rnd),
			QAMMO_CLASS(762x39_AP_60Rnd),
			QAMMO_CLASS(762x39_EP_1Rnd),
			QAMMO_CLASS(762x39_EP_30Rnd),
			QAMMO_CLASS(762x39_EP_60Rnd),
			QAMMO_CLASS(762x39_FMJ_1Rnd),
			QAMMO_CLASS(762x39_FMJ_30Rnd),
			QAMMO_CLASS(762x39_FMJ_60Rnd),
			QAMMO_CLASS(762x39_JHP_1Rnd),
			QAMMO_CLASS(762x39_JHP_30Rnd),
			QAMMO_CLASS(762x39_JHP_60Rnd),
			QAMMO_CLASS(762x39_Subsonic_1Rnd),
			QAMMO_CLASS(762x39_Subsonic_30Rnd),
			QAMMO_CLASS(762x39_Subsonic_60Rnd),
			QAMMO_CLASS(762x39_Tracer_1Rnd),
			QAMMO_CLASS(762x39_Tracer_30Rnd),
			QAMMO_CLASS(762x39_Tracer_60Rnd),
			// 7.62x51 Ammo
			QAMMO_CLASS(762x51_AP_1Rnd),
			QAMMO_CLASS(762x51_AP_30Rnd),
			QAMMO_CLASS(762x51_AP_60Rnd),
			QAMMO_CLASS(762x51_EP_1Rnd),
			QAMMO_CLASS(762x51_EP_30Rnd),
			QAMMO_CLASS(762x51_EP_60Rnd),
			QAMMO_CLASS(762x51_FMJ_1Rnd),
			QAMMO_CLASS(762x51_FMJ_30Rnd),
			QAMMO_CLASS(762x51_FMJ_60Rnd),
			QAMMO_CLASS(762x51_Blank_1Rnd),
			QAMMO_CLASS(762x51_Blank_30Rnd),
			QAMMO_CLASS(762x51_Blank_60Rnd),
			QAMMO_CLASS(762x51_Match_1Rnd),
			QAMMO_CLASS(762x51_Match_30Rnd),
			QAMMO_CLASS(762x51_Match_60Rnd),
			QAMMO_CLASS(762x51_Tracer_1Rnd),
			QAMMO_CLASS(762x51_Tracer_30Rnd),
			QAMMO_CLASS(762x51_Tracer_60Rnd),
			// 7.62x51 Belts
			QBELT_CLASS(762x51_AP_50),
			QBELT_CLASS(762x51_AP_100),
			QBELT_CLASS(762x51_AP_150),
			QBELT_CLASS(762x51_AP_200),
			QBELT_CLASS(762x51_EP_50),
			QBELT_CLASS(762x51_EP_100),
			QBELT_CLASS(762x51_EP_150),
			QBELT_CLASS(762x51_EP_200),
			QBELT_CLASS(762x51_FMJ_50),
			QBELT_CLASS(762x51_FMJ_100),
			QBELT_CLASS(762x51_FMJ_150),
			QBELT_CLASS(762x51_FMJ_200),
			QBELT_CLASS(762x51_Blank_50),
			QBELT_CLASS(762x51_Blank_100),
			QBELT_CLASS(762x51_Blank_150),
			QBELT_CLASS(762x51_Blank_200),
			QBELT_CLASS(762x51_Match_50),
			QBELT_CLASS(762x51_Match_100),
			QBELT_CLASS(762x51_Match_150),
			QBELT_CLASS(762x51_Match_200),
			QBELT_CLASS(762x51_Tracer_50),
			QBELT_CLASS(762x51_Tracer_100),
			QBELT_CLASS(762x51_Tracer_150),
			QBELT_CLASS(762x51_Tracer_200),
			// 7.62x54 Ammo
			QAMMO_CLASS(762x54_AP_1Rnd),
			QAMMO_CLASS(762x54_AP_30Rnd),
			QAMMO_CLASS(762x54_AP_60Rnd),
			QAMMO_CLASS(762x54_EP_1Rnd),
			QAMMO_CLASS(762x54_EP_30Rnd),
			QAMMO_CLASS(762x54_EP_60Rnd),
			QAMMO_CLASS(762x54_FMJ_1Rnd),
			QAMMO_CLASS(762x54_FMJ_30Rnd),
			QAMMO_CLASS(762x54_FMJ_60Rnd),
			QAMMO_CLASS(762x54_Match_1Rnd),
			QAMMO_CLASS(762x54_Match_30Rnd),
			QAMMO_CLASS(762x54_Match_60Rnd),
			QAMMO_CLASS(762x54_Tracer_1Rnd),
			QAMMO_CLASS(762x54_Tracer_30Rnd),
			QAMMO_CLASS(762x54_Tracer_60Rnd),
			// 7.62x54 Belts
			QBELT_CLASS(762x54_AP_50),
			QBELT_CLASS(762x54_AP_100),
			QBELT_CLASS(762x54_AP_150),
			QBELT_CLASS(762x54_AP_200),
			QBELT_CLASS(762x54_EP_50),
			QBELT_CLASS(762x54_EP_100),
			QBELT_CLASS(762x54_EP_150),
			QBELT_CLASS(762x54_EP_200),
			QBELT_CLASS(762x54_FMJ_50),
			QBELT_CLASS(762x54_FMJ_100),
			QBELT_CLASS(762x54_FMJ_150),
			QBELT_CLASS(762x54_FMJ_200),
			QBELT_CLASS(762x54_Tracer_50),
			QBELT_CLASS(762x54_Tracer_100),
			QBELT_CLASS(762x54_Tracer_150),
			QBELT_CLASS(762x54_Tracer_200),
			// 7.62x63 (.30-06 Springfield) Ammo
			QAMMO_CLASS(762x63_Basic_1Rnd),
			QAMMO_CLASS(762x63_Basic_30Rnd),
			QAMMO_CLASS(762x63_Basic_60Rnd),
			QAMMO_CLASS(762x63_AP_1Rnd),
			QAMMO_CLASS(762x63_AP_30Rnd),
			QAMMO_CLASS(762x63_AP_60Rnd),
			QAMMO_CLASS(762x63_FMJ_1Rnd),
			QAMMO_CLASS(762x63_FMJ_30Rnd),
			QAMMO_CLASS(762x63_FMJ_60Rnd),
			// 7.62x67 (.300 Winchester) Ammo
			QAMMO_CLASS(762x67_Basic_1Rnd),
			QAMMO_CLASS(762x67_Basic_30Rnd),
			QAMMO_CLASS(762x67_Basic_60Rnd),
			QAMMO_CLASS(762x67_Match_1Rnd),
			QAMMO_CLASS(762x67_Match_30Rnd),
			QAMMO_CLASS(762x67_Match_60Rnd),
			// 7.65x17 (.32 ACP) Ammo
			QAMMO_CLASS(765x17_Basic_1Rnd),
			QAMMO_CLASS(765x17_Basic_30Rnd),
			QAMMO_CLASS(765x17_Basic_60Rnd),
			// 7.92x57 (Mauser) Ammo
			QAMMO_CLASS(792x57_Basic_1Rnd),
			QAMMO_CLASS(792x57_Basic_30Rnd),
			QAMMO_CLASS(792x57_Basic_60Rnd),
			QAMMO_CLASS(792x57_AP_1Rnd),
			QAMMO_CLASS(792x57_AP_30Rnd),
			QAMMO_CLASS(792x57_AP_60Rnd),
			QAMMO_CLASS(792x57_FMJ_1Rnd),
			QAMMO_CLASS(792x57_FMJ_30Rnd),
			QAMMO_CLASS(792x57_FMJ_60Rnd),
			QAMMO_CLASS(792x57_Tracer_1Rnd),
			QAMMO_CLASS(792x57_Tracer_30Rnd),
			QAMMO_CLASS(792x57_Tracer_60Rnd),
			// 7.92x57 Belts
			QBELT_CLASS(792x57_Basic_50),
			QBELT_CLASS(792x57_Basic_100),
			QBELT_CLASS(792x57_Basic_150),
			QBELT_CLASS(792x57_Basic_200),
			QBELT_CLASS(792x57_AP_50),
			QBELT_CLASS(792x57_AP_100),
			QBELT_CLASS(792x57_AP_150),
			QBELT_CLASS(792x57_AP_200),
			QBELT_CLASS(792x57_FMJ_50),
			QBELT_CLASS(792x57_FMJ_100),
			QBELT_CLASS(792x57_FMJ_150),
			QBELT_CLASS(792x57_FMJ_200),
			QBELT_CLASS(792x57_Tracer_50),
			QBELT_CLASS(792x57_Tracer_100),
			QBELT_CLASS(792x57_Tracer_150),
			QBELT_CLASS(792x57_Tracer_200),
			// 8x22 (Nambu) Ammo
			QAMMO_CLASS(8x22_Basic_1Rnd),
			QAMMO_CLASS(8x22_Basic_30Rnd),
			QAMMO_CLASS(8x22_Basic_60Rnd),
			// 9x18 Ammo
			QAMMO_CLASS(9x18_Basic_1Rnd),
			QAMMO_CLASS(9x18_Basic_30Rnd),
			QAMMO_CLASS(9x18_Basic_60Rnd),
			// 9x19 Ammo
			QAMMO_CLASS(9x19_AP_1Rnd),
			QAMMO_CLASS(9x19_AP_30Rnd),
			QAMMO_CLASS(9x19_AP_60Rnd),
			QAMMO_CLASS(9x19_FMJ_1Rnd),
			QAMMO_CLASS(9x19_FMJ_30Rnd),
			QAMMO_CLASS(9x19_FMJ_60Rnd),
			QAMMO_CLASS(9x19_JHP_1Rnd),
			QAMMO_CLASS(9x19_JHP_30Rnd),
			QAMMO_CLASS(9x19_JHP_60Rnd),
			// 9x21 Ammo
			QAMMO_CLASS(9x21_AP_1Rnd),
			QAMMO_CLASS(9x21_AP_30Rnd),
			QAMMO_CLASS(9x21_AP_60Rnd),
			QAMMO_CLASS(9x21_FMJ_1Rnd),
			QAMMO_CLASS(9x21_FMJ_30Rnd),
			QAMMO_CLASS(9x21_FMJ_60Rnd),
			QAMMO_CLASS(9x21_Tracer_1Rnd),
			QAMMO_CLASS(9x21_Tracer_30Rnd),
			QAMMO_CLASS(9x21_Tracer_60Rnd),
			// 9x39 Ammo
			QAMMO_CLASS(9x39_Basic_1Rnd),
			QAMMO_CLASS(9x39_Basic_30Rnd),
			QAMMO_CLASS(9x39_Basic_60Rnd),
			QAMMO_CLASS(9x39_AP_1Rnd),
			QAMMO_CLASS(9x39_AP_30Rnd),
			QAMMO_CLASS(9x39_AP_60Rnd),
			QAMMO_CLASS(9x39_Match_1Rnd),
			QAMMO_CLASS(9x39_Match_30Rnd),
			QAMMO_CLASS(9x39_Match_60Rnd)
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
	#include "ammo\545x39_AP.hpp"
	#include "ammo\545x39_EP.hpp"
	#include "ammo\545x39_FMJ.hpp"
	#include "ammo\545x39_Subsonic.hpp"
	#include "ammo\545x39_Tracer.hpp"


	// 5.56x45 NATO
	#include "ammo\556x45_AP.hpp"
	#include "ammo\556x45_EP.hpp"
	#include "ammo\556x45_FMJ.hpp"
	#include "ammo\556x45_JHP.hpp"
	#include "ammo\556x45_Match.hpp"
	#include "ammo\556x45_Blank.hpp"
	#include "ammo\556x45_Subsonic.hpp"
	#include "ammo\556x45_Tracer.hpp"


	// 5.7x28
	#include "ammo\570x28_FMJ.hpp"
	#include "ammo\570x28_Tracer.hpp"


	// 7.5x55
	#include "ammo\75x55_Basic.hpp"
	#include "ammo\75x55_FMJ.hpp"
	#include "ammo\75x55_Tracer.hpp"


	// 7.62x25
	#include "ammo\762x25_Basic.hpp"
	#include "ammo\762x25_FMJ.hpp"
	#include "ammo\762x25_Tracer.hpp"


	// 7.62x39
	#include "ammo\762x39_AP.hpp"
	#include "ammo\762x39_EP.hpp"
	#include "ammo\762x39_FMJ.hpp"
	#include "ammo\762x39_JHP.hpp"
	#include "ammo\762x39_Subsonic.hpp"
	#include "ammo\762x39_Tracer.hpp"


	// 7.62x51 NATO
	#include "ammo\762x51_AP.hpp"
	#include "ammo\762x51_EP.hpp"
	#include "ammo\762x51_FMJ.hpp"
	#include "ammo\762x51_Blank.hpp"
	#include "ammo\762x51_Match.hpp"
	#include "ammo\762x51_Tracer.hpp"

	// 7.62x54
	#include "ammo\762x54_AP.hpp"
	#include "ammo\762x54_EP.hpp"
	#include "ammo\762x54_FMJ.hpp"
	#include "ammo\762x54_Match.hpp"
	#include "ammo\762x54_Tracer.hpp"

	// .30-06 Springfield
	#include "ammo\762x63_Basic.hpp"
	#include "ammo\762x63_AP.hpp"
	#include "ammo\762x63_FMJ.hpp"
	#include "ammo\762x63_Tracer.hpp"


	// .300 Winchester
	#include "ammo\762x67_Basic.hpp"
	#include "ammo\762x67_Match.hpp"


	// .32ACP
	#include "ammo\765x17_Basic.hpp"


	// .303 British (7.7x56)
	#include "ammo\77x56_Basic.hpp"
	#include "ammo\77x56_FMJ.hpp"
	#include "ammo\77x56_Tracer.hpp"


	// 7.92x33 Kurz
	#include "ammo\792x33_Basic.hpp"


	// 7.92x57 Mauser
	#include "ammo\792x57_Basic.hpp"
	#include "ammo\792x57_AP.hpp"
	#include "ammo\792x57_FMJ.hpp"
	#include "ammo\792x57_Tracer.hpp"


	// 8x22 Nambu
	#include "ammo\8x22_Basic.hpp"
	

	// 9x18
	#include "ammo\9x18_Basic.hpp"


	// 9x19
	#include "ammo\9x19_AP.hpp"
	#include "ammo\9x19_FMJ.hpp"
	#include "ammo\9x19_JHP.hpp"


	// 9x21
	#include "ammo\9x21_AP.hpp"
	#include "ammo\9x21_FMJ.hpp"
	#include "ammo\9x21_Tracer.hpp"


	// 9x39
	#include "ammo\9x39_Basic.hpp"
	#include "ammo\9x39_AP.hpp"
	#include "ammo\9x39_Match.hpp"


	// 9.3x62
	#include "ammo\93x62_Basic.hpp"
	#include "ammo\93x62_FMJ.hpp"
	#include "ammo\93x62_Tracer.hpp"


	// 10x25
	#include "ammo\10x25_Basic.hpp"
	#include "ammo\10x25_FMJ.hpp"
	#include "ammo\10x25_Tracer.hpp"


	// .50BMG
	#include "ammo\127x99_AP.hpp"
	#include "ammo\127x99_Match.hpp"


	// Belts
	#include "belts\556x45_AP.hpp"
	#include "belts\556x45_EP.hpp"
	#include "belts\556x45_FMJ.hpp"
	#include "belts\556x45_Blank.hpp"


	#include "belts\762x51_AP.hpp"
	#include "belts\762x51_EP.hpp"
	#include "belts\762x51_FMJ.hpp"
	#include "belts\762x51_Blank.hpp"
	#include "belts\762x51_Match.hpp"
	#include "belts\762x51_Tracer.hpp"


	#include "belts\762x54_AP.hpp"
	#include "belts\762x54_EP.hpp"
	#include "belts\762x54_FMJ.hpp"
	#include "belts\762x54_Tracer.hpp"


	#include "belts\792x57_Basic.hpp"
	#include "belts\792x57_AP.hpp"
	#include "belts\792x57_FMJ.hpp"
	#include "belts\792x57_Tracer.hpp"
	
};
#endif

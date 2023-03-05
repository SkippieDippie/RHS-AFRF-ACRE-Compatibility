#include "\cvo\compats\cvo_compats_common\greenmag\macros_greenmag.hpp"

#if UK3CB_FACTIONS_LOADED
#if GREENMAG_LOADED

class CfgPatches {
	class CVO_Compats_UK3CB_Factions_GreenMag {
		addonRootClass = "CVO_Compats_UK3CB_Factions";

		requiredAddons[] = {
			"UK3CB_Factions_Weapons",
			"greenmag_main"
		};
		requiredVersion = 1.00;

		units[] = {};
		weapons[] = {};
	};
};

class CfgMagazines {
	// External Classes
	class CA_Magazine;
	class 20Rnd_762x51_Mag;
	class 30Rnd_556x45_Stanag;
	class 30Rnd_9x21_Mag;
	class 30Rnd_9x21_Mag_SMG_02;
	class rhs_10Rnd_762x54mmR_7N1;
	class rhs_30Rnd_545x39_AK;
	class rhs_30Rnd_545x39_AK_green;
	class rhs_30Rnd_762x39mm;
	class rhs_30Rnd_762x39mm_tracer;
	class rhsusf_5Rnd_300winmag_xm2010;
	class rhsusf_100Rnd_762x51_m80a1epr;
	class rhsusf_mag_17Rnd_9x19_FMJ;
	class rhs_mag_30Rnd_556x45_Mk318_Stanag;
	class rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red;

	#include "magazines\uk3cb_factions_10x25.hpp"
	#include "magazines\uk3cb_factions_545x39.hpp"
	#include "magazines\uk3cb_factions_556x45.hpp"
	#include "magazines\uk3cb_factions_75x55.hpp"
	#include "magazines\uk3cb_factions_762x25.hpp"
	#include "magazines\uk3cb_factions_762x39.hpp"
	#include "magazines\uk3cb_factions_762x51.hpp"
	#include "magazines\uk3cb_factions_762x54.hpp"
	#include "magazines\uk3cb_factions_762x63.hpp"
	#include "magazines\uk3cb_factions_77x56.hpp"
	#include "magazines\uk3cb_factions_93x62.hpp"
	#include "magazines\uk3cb_factions_9x19.hpp"

};

#endif
#endif

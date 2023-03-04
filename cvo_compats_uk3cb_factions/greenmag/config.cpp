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
	class rhs_30Rnd_762x39mm;
	class rhs_30Rnd_762x39mm_tracer;
	class rhsusf_5Rnd_300winmag_xm2010;
	class rhsusf_mag_17Rnd_9x19_FMJ;



	
};

#endif
#endif

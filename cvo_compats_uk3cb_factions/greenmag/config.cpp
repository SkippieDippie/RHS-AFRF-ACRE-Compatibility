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

	
};

#endif
#endif

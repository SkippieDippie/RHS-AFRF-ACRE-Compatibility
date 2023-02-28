#include "\cvo\compats\cvo_compats_common\greenmag\macros_greenmag.hpp"

#if RHS_GREF_LOADED
# if GREENMAG_LOADED

class CfgPatches {
	class CVO_Compats_RHSGREF_GreenMag {
		addonRootClass = "CVO_Compats_RHSGREF";

		requiredAddons[] = {
			"rhsgref_c_weapons",
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

# endif
#endif

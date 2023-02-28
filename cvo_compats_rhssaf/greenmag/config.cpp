#include "\cvo\compats\cvo_compats_common\greenmag\macros_greenmag.hpp"

#if RHS_SAF_LOADED
#if GREENMAG_LOADED

class CfgPatches {
	class CVO_Compats_RHSSAF_GreenMag {
		addonRootClass = "CVO_Compats_RHSSAF";

		requiredAddons[] = {
			"rhssaf_c_weapons",
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

	#include "magazines\rhs_saf_556x45.hpp"
	#include "magazines\rhs_saf_762x39.hpp"
	#include "magazines\rhs_saf_762x54.hpp"
	#include "magazines\rhs_saf_9x19.hpp"
	
};

#endif
#endif

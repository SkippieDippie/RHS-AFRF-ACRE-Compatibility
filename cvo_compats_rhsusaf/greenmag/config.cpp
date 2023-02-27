#include "\cvo\compats\cvo_compats_common\greenmag\macros_greenmag.hpp"

#if RHS_USAF_LOADED
#if GREENMAG_LOADED

class CfgPatches {
	class CVO_Compats_RHSUSAF_GreenMag {
		addonRootClass = "CVO_Compats_RHSUSAF";

		requiredAddons[] = {
			"rhsusf_c_weapons",
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

	#include "magazines\rhs_usaf_127x99.hpp"
	#include "magazines\rhs_usaf_556x45.hpp"
	#include "magazines\rhs_usaf_762x51.hpp"
	
};

#endif
#endif

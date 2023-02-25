#include "\cvo\cvo_compats_common\greenmag\macros.hpp"

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
		weapons[] = {};
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
#endif

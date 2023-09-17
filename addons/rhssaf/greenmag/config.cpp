#include "\cvo\compats\main\greenmag\macros_greenmag.hpp"

class CfgPatches {
	class CVO_Compats_RHSSAF_GreenMag {
		addonRootClass = "CVO_Compats_RHSSAF";

		requiredAddons[] = {
			"rhssaf_c_weapons",
			"greenmag_main"
		};
		requiredVersion = 1.00;
		skipWhenMissingDependencies = 1;

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
	#include "magazines\rhs_saf_765x17.hpp"
	#include "magazines\rhs_saf_792x57.hpp"
	#include "magazines\rhs_saf_9x19.hpp"
	
};

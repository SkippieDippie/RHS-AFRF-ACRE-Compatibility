#include "\cvo\compats\main\greenmag\macros_greenmag.hpp"

class CfgPatches {
	class CVO_Compats_RHSGREF_GreenMag {
		addonRootClass = "CVO_Compats_RHSGREF";

		requiredAddons[] = {
			"rhsgref_c_weapons",
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

	#include "magazines\rhs_gref_1143x23.hpp"
	#include "magazines\rhs_gref_556x45.hpp"
	#include "magazines\rhs_gref_762x25.hpp"
	#include "magazines\rhs_gref_762x39.hpp"
	#include "magazines\rhs_gref_762x51.hpp"
	#include "magazines\rhs_gref_762x54.hpp"
	#include "magazines\rhs_gref_762x63.hpp"
	#include "magazines\rhs_gref_765x17.hpp"
	#include "magazines\rhs_gref_792x33.hpp"
	#include "magazines\rhs_gref_8x22.hpp"
};

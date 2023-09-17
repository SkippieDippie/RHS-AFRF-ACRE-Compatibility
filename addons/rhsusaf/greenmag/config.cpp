#include "\cvo\compats\main\greenmag\macros_greenmag.hpp"

class CfgPatches {
	class CVO_Compats_RHSUSAF_GreenMag {
		addonRootClass = "CVO_Compats_RHSUSAF";

		requiredAddons[] = {
			"rhsusf_c_weapons",
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

	#include "magazines\rhs_usaf_127x99.hpp"
	#include "magazines\rhs_usaf_46x30.hpp"
	#include "magazines\rhs_usaf_556x45.hpp"
	#include "magazines\rhs_usaf_762x51.hpp"
	#include "magazines\rhs_usaf_762x67.hpp"
	#include "magazines\rhs_usaf_9x19.hpp"
	
};

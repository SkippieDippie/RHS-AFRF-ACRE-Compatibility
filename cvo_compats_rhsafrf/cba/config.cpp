
class CfgPatches {
	class CVO_Compats_RHSAFRF_CBA {
		addonRootClass = "CVO_Compats_RHSAFRF";

		requiredAddons[] = {
			"rhs_c_weapons",
			"cba_main",
			"CVO_Compats_Common"
		};
		requiredVersion = 1.00;
		skipWhenMissingDependencies = 1;

		units[] = {};
		weapons[] = {};
	};
};


#include "CfgAmmo.hpp"
#include "CfgEventHandlers.hpp"
#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"

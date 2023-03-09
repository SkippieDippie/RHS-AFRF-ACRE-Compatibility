#include "\cvo\compats\cvo_compats_common\macros.hpp"

#if RHS_AFRF_LOADED
#if CBA_LOADED

class CfgPatches {
	class CVO_Compats_RHSAFRF_CBA {
		addonRootClass = "CVO_Compats_RHSAFRF";

		requiredAddons[] = {
			"rhs_c_weapons",
			"cba_main",
			"CVO_Compats_Common"
		};
		requiredVersion = 1.00;

		units[] = {};
		weapons[] = {};
	};
};


#include "CfgAmmo.hpp"
#include "CfgEventHandlers.hpp"
#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"


#endif
#endif

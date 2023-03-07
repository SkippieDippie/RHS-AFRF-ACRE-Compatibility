class asdg_SlotInfo;
class PointerSlot;
class asdg_FrontSideRail : asdg_SlotInfo {
	class compatibleItems {
		CVO_rhsafrf_acc_perst3_ir_flash = 1;
		CVO_rhsafrf_acc_perst3_ir_flash_laser = 1;
		CVO_rhsafrf_acc_perst3_vis_laser = 1;
	};
};

class rhs_russian_ris_handguard_slot: asdg_FrontSideRail {
	class compatibleItems: compatibleItems {
		CVO_rhsafrf_acc_perst3_ir_flash = 1;
		CVO_rhsafrf_acc_perst3_ir_flash_laser = 1;
		CVO_rhsafrf_acc_perst3_vis_laser = 1;
	};
};

class PointerSlot_Rail: PointerSlot {
	class compatibleItems {
		rhs_acc_2dpZenit_ris=1;
		rhs_acc_perst1ik_ris=1;
		rhs_acc_perst3=1;
		CVO_rhsafrf_acc_perst3_ir_flash = 1;
		CVO_rhsafrf_acc_perst3_ir_flash_laser = 1;
		CVO_rhsafrf_acc_perst3_vis_laser = 1;
	};
};

class CfgWeapons {
	class InventoryFlashLightItem_Base_F;
	class rhs_acc_perst1ik;


	class rhs_acc_perst3: rhs_acc_perst1ik {
		MRT_SwitchItemNextClass = "CVO_rhsafrf_acc_perst3_ir_flash";
		MRT_SwitchItemPrevClass = "CVO_rhsafrf_acc_perst3_vis_laser";
		MRT_switchItemHintText = "$STR_CVO_CBA_accessories_side_ir_laser";
	};

	class CVO_rhsafrf_acc_perst3_ir_flash : rhs_acc_perst3 {
		scope = 2;
		scopeArsenal = 0;

		MRT_SwitchItemNextClass = "CVO_rhsafrf_acc_perst3_ir_flash_laser";
		MRT_SwitchItemPrevClass = "rhs_acc_perst3";
		MRT_switchItemHintText = "$STR_CVO_CBA_accessories_side_ir_flash";

		//class ItemInfo : InventoryFlashLightItem_Base_F {
		//	mass = 8;
		//	class Pointer {};
		//	class FlashLight {
//
		//	};
		//};
	};

	class CVO_rhsafrf_acc_perst3_ir_flash_laser : rhs_acc_perst3 {
		scope = 2;
		scopeArsenal=0;

		MRT_SwitchItemNextClass = "CVO_rhsafrf_acc_perst3_vis_laser";
		MRT_SwitchItemPrevClass = "CVO_rhsafrf_acc_perst3_ir_flash";
		MRT_switchItemHintText = "$STR_CVO_CBA_accessories_side_ir_flash_laser";
	};

	class CVO_rhsafrf_acc_perst3_vis_laser : rhs_acc_perst3 {
		scope = 2;
		scopeArsenal=0;

		MRT_SwitchItemNextClass = "rhs_acc_perst3";
		MRT_SwitchItemPrevClass = "CVO_rhsafrf_acc_perst3_ir_flash_laser";
		MRT_switchItemHintText = "$STR_CVO_CBA_accessories_side_vis_laser";

		class ItemInfo : InventoryFlashLightItem_Base_F {
			mass = 0;

			class Pointer {
				irLaserPos = "laser pos";
				irLaserEnd = "laser dir";

				irDistance = 1000;

				beamColor[] = {0,0,0};
				dotColor[] = {10000,0,0};
				dotSize = 2;

				beamThickness = 0.25;
				beamMaxLength = 3000;

				isIR = 0;
			};
			class FlashLight { };
		};
	};



	class rhs_acc_1p63;
	class rhs_acc_ekp1: rhs_acc_1p63 {
		MRT_SwitchItemNextClass = "rhs_acc_ekp1b";
		MRT_SwitchItemPrevClass = "rhs_acc_ekp1d";
		MRT_switchItemHintText = "$STR_CVO_CBA_accessories_reticle_vbar_dot";
	};

	class rhs_acc_ekp1b: rhs_acc_ekp1 {
		MRT_SwitchItemNextClass = "rhs_acc_ekp1c";
		MRT_SwitchItemPrevClass = "rhs_acc_ekp1";
		MRT_switchItemHintText = "$STR_CVO_CBA_accessories_reticle_dot";
	};

	class rhs_acc_ekp1c: rhs_acc_ekp1b {
		MRT_SwitchItemNextClass = "rhs_acc_ekp1d";
		MRT_SwitchItemPrevClass = "rhs_acc_ekp1b";
		MRT_switchItemHintText = "$STR_CVO_CBA_accessories_reticle_vbar";
	};

	class rhs_acc_ekp1d: rhs_acc_ekp1b {
		MRT_SwitchItemNextClass = "rhs_acc_ekp1";
		MRT_SwitchItemPrevClass = "rhs_acc_ekp1c";
		MRT_switchItemHintText = "$STR_CVO_CBA_accessories_reticle_tbar";
	};



	class rhs_acc_ekp8_02: rhs_acc_ekp1 {
		MRT_SwitchItemNextClass = "rhs_acc_ekp8_02b";
		MRT_SwitchItemPrevClass = "rhs_acc_ekp8_02d";
		MRT_switchItemHintText = "$STR_CVO_CBA_accessories_reticle_tbar";
	};

	class rhs_acc_ekp8_02b: rhs_acc_ekp8_02 {
		MRT_SwitchItemNextClass = "rhs_acc_ekp8_02c";
		MRT_SwitchItemPrevClass = "rhs_acc_ekp8_02";
		MRT_switchItemHintText = "$STR_CVO_CBA_accessories_reticle_vbar_dot";
	};

	class rhs_acc_ekp8_02c: rhs_acc_ekp8_02b {
		MRT_SwitchItemNextClass = "rhs_acc_ekp8_02d";
		MRT_SwitchItemPrevClass = "rhs_acc_ekp8_02b";
		MRT_switchItemHintText = "$STR_CVO_CBA_accessories_reticle_vbar";
	};

	class rhs_acc_ekp8_02d: rhs_acc_ekp8_02b {
		MRT_SwitchItemNextClass = "rhs_acc_ekp8_02";
		MRT_SwitchItemPrevClass = "rhs_acc_ekp8_02c";
		MRT_switchItemHintText = "$STR_CVO_CBA_accessories_reticle_dot";
	};



	class rhs_acc_ekp8_18: rhs_acc_ekp8_02 {
		MRT_SwitchItemNextClass = "rhs_acc_ekp8_18b";
		MRT_SwitchItemPrevClass = "rhs_acc_ekp8_18d";
		MRT_switchItemHintText = "$STR_CVO_CBA_accessories_reticle_tbar";
	};

	class rhs_acc_ekp8_18b: rhs_acc_ekp8_18 {
		MRT_SwitchItemNextClass = "rhs_acc_ekp8_18c";
		MRT_SwitchItemPrevClass = "rhs_acc_ekp8_18";
		MRT_switchItemHintText = "$STR_CVO_CBA_accessories_reticle_vbar_dot";
	};

	class rhs_acc_ekp8_18c: rhs_acc_ekp8_18 {
		MRT_SwitchItemNextClass = "rhs_acc_ekp8_18d";
		MRT_SwitchItemPrevClass = "rhs_acc_ekp8_18b";
		MRT_switchItemHintText = "$STR_CVO_CBA_accessories_reticle_vbar";
	};

	class rhs_acc_ekp8_18d: rhs_acc_ekp8_18 {
		MRT_SwitchItemNextClass = "rhs_acc_ekp8_18";
		MRT_SwitchItemPrevClass = "rhs_acc_ekp8_18c";
		MRT_switchItemHintText = "$STR_CVO_CBA_accessories_reticle_dot";
	};



	class rhs_acc_npz: rhs_acc_ekp1 {
		MRT_SwitchItemNextClass = "";
		MRT_SwitchItemPrevClass = "";
		MRT_switchItemHintText = "";
	};
};

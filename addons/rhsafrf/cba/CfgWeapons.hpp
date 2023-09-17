class asdg_SlotInfo;
class PointerSlot;
class asdg_FrontSideRail : asdg_SlotInfo {
	class compatibleItems {
		CVO_RHSAFRF_Acc_Perst3_IR_Light = 1;
		CVO_RHSAFRF_Acc_Perst3_IR_LightLaser = 1;
		CVO_RHSAFRF_Acc_Perst3_Vis_Laser = 1;

		CVO_RHSAFRF_Acc_Perst3_Top_IR_Light = 1;
		CVO_RHSAFRF_Acc_Perst3_Top_IR_LightLaser = 1;
		CVO_RHSAFRF_Acc_Perst3_Top_Vis_Laser = 1;

		CVO_RHSAFRF_Acc_Perst3_Top_H_IR_Light = 1;
		CVO_RHSAFRF_Acc_Perst3_Top_H_IR_LightLaser = 1;
		CVO_RHSAFRF_Acc_Perst3_Top_H_Vis_Laser = 1;
	};
};

class rhs_russian_ris_handguard_slot: asdg_FrontSideRail {
	class compatibleItems: compatibleItems {
		CVO_RHSAFRF_Acc_Perst3_IR_Light = 1;
		CVO_RHSAFRF_Acc_Perst3_IR_LightLaser = 1;
		CVO_RHSAFRF_Acc_Perst3_Vis_Laser = 1;

		CVO_RHSAFRF_Acc_Perst3_Top_IR_Light = 1;
		CVO_RHSAFRF_Acc_Perst3_Top_IR_LightLaser = 1;
		CVO_RHSAFRF_Acc_Perst3_Top_Vis_Laser = 1;

		CVO_RHSAFRF_Acc_Perst3_Top_H_IR_Light = 1;
		CVO_RHSAFRF_Acc_Perst3_Top_H_IR_LightLaser = 1;
		CVO_RHSAFRF_Acc_Perst3_Top_H_Vis_Laser = 1;

		CVO_RHSAFRF_Acc_Perst3_2DP_IR_LightLaser = 1;
		CVO_RHSAFRF_Acc_Perst3_2DP_IR_Light = 1;
		CVO_RHSAFRF_Acc_Perst3_2DP_Vis_Laser = 1;
		CVO_RHSAFRF_Acc_Perst3_2DP_Vis_LightLaser = 1;

		CVO_RHSAFRF_Acc_Perst3_2DP_H_IR_LightLaser = 1;
		CVO_RHSAFRF_Acc_Perst3_2DP_H_IR_Light = 1;
		CVO_RHSAFRF_Acc_Perst3_2DP_H_Vis_Laser = 1;
		CVO_RHSAFRF_Acc_Perst3_2DP_H_Vis_LightLaser = 1;
	};
};

class rhs_russian_ris_half_handguard_slot: rhs_russian_ris_handguard_slot {
	class compatibleItems: compatibleItems {
		CVO_RHSAFRF_Acc_Perst3_Top_IR_Light = 0;
		CVO_RHSAFRF_Acc_Perst3_Top_IR_LightLaser = 0;
		CVO_RHSAFRF_Acc_Perst3_Top_Vis_Laser = 0;

		CVO_RHSAFRF_Acc_Perst3_Top_H_IR_Light = 0;
		CVO_RHSAFRF_Acc_Perst3_Top_H_IR_LightLaser = 0;
		CVO_RHSAFRF_Acc_Perst3_Top_H_Vis_Laser = 0;
	};
};

class PointerSlot_Rail: PointerSlot {
	class compatibleItems {
		rhs_acc_2dpZenit_ris = 1;
		rhs_acc_perst1ik_ris = 1;
		rhs_acc_perst3 = 1;

		CVO_RHSAFRF_Acc_Perst3_IR_Light = 1;
		CVO_RHSAFRF_Acc_Perst3_IR_LightLaser = 1;
		CVO_RHSAFRF_Acc_Perst3_Vis_Laser = 1;
	};
};

class CfgWeapons {
	class InventoryFlashLightItem_Base_F;
	class rhs_acc_perst1ik;
	class ItemInfo;



	// Perst-3
	class rhs_acc_perst3: rhs_acc_perst1ik {
		MRT_SwitchItemNextClass = "CVO_RHSAFRF_Acc_Perst3_IR_LightLaser";
		MRT_SwitchItemPrevClass = "CVO_RHSAFRF_Acc_Perst3_Vis_Laser";
		MRT_switchItemHintText = "$STR_CVO_CBA_Accessories_Side_IR_Laser";
	};

	class CVO_RHSAFRF_Acc_Perst3_IR_LightLaser : rhs_acc_perst3 {
		scope = 2;
		scopeArsenal=0;

		MRT_SwitchItemNextClass = "CVO_RHSAFRF_Acc_Perst3_IR_Light";
		MRT_SwitchItemPrevClass = "rhs_acc_perst3";
		MRT_switchItemHintText = "$STR_CVO_CBA_Accessories_Side_IR_LightLaser";

		class ItemInfo : InventoryFlashLightItem_Base_F {
			mass = 8;
			class Pointer {
				irLaserPos = "laser pos";
				irLaserEnd = "laser dir";
				irDistance = 5;
			};
			class FlashLight {
				color[] = {60,40,40};
				ambient[] = {9,8,7};
				intensity = 600;

				size = 1;

				innerAngle = 2.5;
				outerAngle = 80;
				coneFadeCoef = 200;

				position = "laser pos";
				direction = "laser dir";

				useFlare = 1;
				flareSize = 0.7;
				flareMaxDistance = 100;

				dayLight = 1;
				irlight = 1;
				class Attenuation
				{
					start = 0.1;
					constant = 2;
					linear = 2;
					quadratic = 1;

					hardLimitStart = 100;
					hardLimitEnd = 200;
				};
				scale[]={0};
			};
		};
	};

	class CVO_RHSAFRF_Acc_Perst3_IR_Light : rhs_acc_perst3 {
		scope = 2;
		scopeArsenal = 0;

		MRT_SwitchItemNextClass = "CVO_RHSAFRF_Acc_Perst3_Vis_Laser";
		MRT_SwitchItemPrevClass = "CVO_RHSAFRF_Acc_Perst3_IR_LightLaser";
		MRT_switchItemHintText = "$STR_CVO_CBA_Accessories_Side_IR_Light";

		class ItemInfo : InventoryFlashLightItem_Base_F {
			mass = 8;
			class Pointer {};
			class FlashLight {
				color[] = {60,40,40};
				ambient[] = {9,8,7};
				intensity = 600;

				size = 1;

				innerAngle = 2.5;
				outerAngle = 80;
				coneFadeCoef = 200;

				position = "laser pos";
				direction = "laser dir";

				useFlare = 1;
				flareSize = 0.7;
				flareMaxDistance = 100;

				dayLight = 1;
				irlight = 1;
				class Attenuation
				{
					start = 0.1;
					constant = 2;
					linear = 2;
					quadratic = 1;

					hardLimitStart = 100;
					hardLimitEnd = 200;
				};
				scale[]={0};
			};
		};
	};

	class CVO_RHSAFRF_Acc_Perst3_Vis_Laser : rhs_acc_perst3 {
		scope = 2;
		scopeArsenal=0;

		MRT_SwitchItemNextClass = "rhs_acc_perst3";
		MRT_SwitchItemPrevClass = "CVO_RHSAFRF_Acc_Perst3_IR_Light";
		MRT_switchItemHintText = "$STR_CVO_CBA_Accessories_Side_Vis_Laser";

		class ItemInfo : InventoryFlashLightItem_Base_F {
			mass = 8;

			class Pointer {
				irLaserPos = "laser pos";
				irLaserEnd = "laser dir";

				irDistance = 1000;

				beamColor[] = {1,0,0};
				dotColor[] = {10000,0,0};
				dotSize = 2;

				beamThickness = 0.15;
				beamMaxLength = 3000;

				isIR = 0;
			};
			class FlashLight { };
		};
	};



	// Perst-3 Top
	class rhs_acc_perst3_top : rhs_acc_perst3 {
		MRT_SwitchItemNextClass = "CVO_RHSAFRF_Acc_Perst3_Top_IR_LightLaser";
		MRT_SwitchItemPrevClass = "CVO_RHSAFRF_Acc_Perst3_Top_Vis_Laser";
		MRT_switchItemHintText = "$STR_CVO_CBA_Accessories_Side_IR_Laser";
	};

	class CVO_RHSAFRF_Acc_Perst3_Top_IR_LightLaser : rhs_acc_perst3_top {
		scope = 2;
		scopeArsenal=0;

		MRT_SwitchItemNextClass = "CVO_RHSAFRF_Acc_Perst3_Top_IR_Light";
		MRT_SwitchItemPrevClass = "rhs_acc_perst3_top";
		MRT_switchItemHintText = "$STR_CVO_CBA_Accessories_Side_IR_LightLaser";

		class ItemInfo : InventoryFlashLightItem_Base_F {
			mass = 8;
			class Pointer {
				irLaserPos = "laser pos";
				irLaserEnd = "laser dir";
				irDistance = 5;
			};
			class FlashLight {
				color[] = {60,40,40};
				ambient[] = {9,8,7};
				intensity = 600;

				size = 1;

				innerAngle = 2.5;
				outerAngle = 80;
				coneFadeCoef = 200;

				position = "laser pos";
				direction = "laser dir";

				useFlare = 1;
				flareSize = 0.7;
				flareMaxDistance = 100;

				dayLight = 1;
				irlight = 1;
				class Attenuation
				{
					start = 0.1;
					constant = 2;
					linear = 2;
					quadratic = 1;

					hardLimitStart = 100;
					hardLimitEnd = 200;
				};
				scale[]={0};
			};
		};
	};

	class CVO_RHSAFRF_Acc_Perst3_Top_IR_Light : rhs_acc_perst3_top {
		scope = 2;
		scopeArsenal = 0;

		MRT_SwitchItemNextClass = "CVO_RHSAFRF_Acc_Perst3_Top_Vis_Laser";
		MRT_SwitchItemPrevClass = "CVO_RHSAFRF_Acc_Perst3_Top_IR_LightLaser";
		MRT_switchItemHintText = "$STR_CVO_CBA_Accessories_Side_IR_Light";

		class ItemInfo : InventoryFlashLightItem_Base_F {
			mass = 8;
			class Pointer {};
			class FlashLight {
				color[] = {60,40,40};
				ambient[] = {9,8,7};
				intensity = 600;

				size = 1;

				innerAngle = 2.5;
				outerAngle = 80;
				coneFadeCoef = 200;

				position = "laser pos";
				direction = "laser dir";

				useFlare = 1;
				flareSize = 0.7;
				flareMaxDistance = 100;

				dayLight = 1;
				irlight = 1;
				class Attenuation
				{
					start = 0.1;
					constant = 2;
					linear = 2;
					quadratic = 1;

					hardLimitStart = 100;
					hardLimitEnd = 200;
				};
				scale[]={0};
			};
		};
	};

	class CVO_RHSAFRF_Acc_Perst3_Top_Vis_Laser : rhs_acc_perst3_top {
		scope = 2;
		scopeArsenal = 0;

		MRT_SwitchItemNextClass = "rhs_acc_perst3_top";
		MRT_SwitchItemPrevClass = "CVO_RHSAFRF_Acc_Perst3_Top_IR_Light";
		MRT_switchItemHintText = "$STR_CVO_CBA_Accessories_Side_Vis_Laser";

		class ItemInfo : InventoryFlashLightItem_Base_F {
			mass = 8;

			class Pointer {
				irLaserPos = "laser pos";
				irLaserEnd = "laser dir";

				irDistance = 1000;

				beamColor[] = {1,0,0};
				dotColor[] = {10000,0,0};
				dotSize = 2;

				beamThickness = 0.15;
				beamMaxLength = 3000;

				isIR = 0;
			};
			class FlashLight { };
		};
	};


	class rhs_acc_perst3_top_h : rhs_acc_perst3_top {
		MRT_SwitchItemNextClass = "CVO_RHSAFRF_Acc_Perst3_Top_H_IR_LightLaser";
		MRT_SwitchItemPrevClass = "CVO_RHSAFRF_Acc_Perst3_Top_H_Vis_Laser";
		MRT_switchItemHintText = "$STR_CVO_CBA_Accessories_Side_IR_Laser";
	};

	class CVO_RHSAFRF_Acc_Perst3_Top_H_IR_LightLaser : rhs_acc_perst3_top_h {
		scope = 1;
		scopeArsenal = 0;

		MRT_SwitchItemNextClass = "CVO_RHSAFRF_Acc_Perst3_Top_H_IR_Light";
		MRT_SwitchItemPrevClass = "rhs_acc_perst3_top_h";
		MRT_switchItemHintText = "$STR_CVO_CBA_Accessories_Side_IR_LightLaser";

		class ItemInfo : InventoryFlashLightItem_Base_F {
			mass = 8;
			class Pointer {
				irLaserPos = "laser pos";
				irLaserEnd = "laser dir";
				irDistance = 5;
			};
			class FlashLight {
				color[] = {60,40,40};
				ambient[] = {9,8,7};
				intensity = 600;

				size = 1;

				innerAngle = 2.5;
				outerAngle = 80;
				coneFadeCoef = 200;

				position = "laser pos";
				direction = "laser dir";

				useFlare = 1;
				flareSize = 0.7;
				flareMaxDistance = 100;

				dayLight = 1;
				irlight = 1;
				class Attenuation
				{
					start = 0.1;
					constant = 2;
					linear = 2;
					quadratic = 1;

					hardLimitStart = 100;
					hardLimitEnd = 200;
				};
				scale[]={0};
			};
		};
	};

	class CVO_RHSAFRF_Acc_Perst3_Top_H_IR_Light : rhs_acc_perst3_top_h {
		scope = 1;
		scopeArsenal = 0;

		MRT_SwitchItemNextClass = "CVO_RHSAFRF_Acc_Perst3_Top_H_Vis_Laser";
		MRT_SwitchItemPrevClass = "CVO_RHSAFRF_Acc_Perst3_Top_H_IR_LightLaser";
		MRT_switchItemHintText = "$STR_CVO_CBA_Accessories_Side_IR_Light";

		class ItemInfo : InventoryFlashLightItem_Base_F {
			mass = 8;
			class Pointer {};
			class FlashLight {
				color[] = {60,40,40};
				ambient[] = {9,8,7};
				intensity = 600;

				size = 1;

				innerAngle = 2.5;
				outerAngle = 80;
				coneFadeCoef = 200;

				position = "laser pos";
				direction = "laser dir";

				useFlare = 1;
				flareSize = 0.7;
				flareMaxDistance = 100;

				dayLight = 1;
				irlight = 1;
				class Attenuation
				{
					start = 0.1;
					constant = 2;
					linear = 2;
					quadratic = 1;

					hardLimitStart = 100;
					hardLimitEnd = 200;
				};
				scale[]={0};
			};
		};
	};

	class CVO_RHSAFRF_Acc_Perst3_Top_H_Vis_Laser : rhs_acc_perst3_top_h {
		scope = 1;
		scopeArsenal = 0;

		MRT_SwitchItemNextClass = "rhs_acc_perst3_top_h";
		MRT_SwitchItemPrevClass = "CVO_RHSAFRF_Acc_Perst3_Top_H_IR_Light";
		MRT_switchItemHintText = "$STR_CVO_CBA_Accessories_Side_Vis_Laser";

		class ItemInfo : InventoryFlashLightItem_Base_F {
			mass = 8;

			class Pointer {
				irLaserPos = "laser pos";
				irLaserEnd = "laser dir";

				irDistance = 1000;

				beamColor[] = {1,0,0};
				dotColor[] = {10000,0,0};
				dotSize = 2;

				beamThickness = 0.15;
				beamMaxLength = 3000;

				isIR = 0;
			};
			class FlashLight { };
		};
	};



	// Perst-3 with 2DP
	class rhs_acc_perst3_2dp : rhs_acc_perst3 {
		MRT_SwitchItemNextClass = "CVO_RHSAFRF_Acc_Perst3_2DP_IR_LightLaser";
		MRT_SwitchItemPrevClass = "rhs_acc_perst3_2dp_light";
		MRT_switchItemHintText = "$STR_CVO_CBA_Accessories_Side_IR_Laser";
	};

	class CVO_RHSAFRF_Acc_Perst3_2DP_IR_LightLaser : rhs_acc_perst3_2dp {
		MRT_SwitchItemNextClass = "CVO_RHSAFRF_Acc_Perst3_2DP_IR_Light";
		MRT_SwitchItemPrevClass = "rhs_acc_perst3_2dp";
		MRT_switchItemHintText = "$STR_CVO_CBA_Accessories_Side_IR_LightLaser";

		class ItemInfo : InventoryFlashLightItem_Base_F {
			mass = 8;
			class Pointer {
				irLaserPos = "laser pos";
				irLaserEnd = "laser dir";
				irDistance = 5;
			};
			class FlashLight {
				color[] = {60,40,40};
				ambient[] = {9,8,7};
				intensity = 600;

				size = 1;

				innerAngle = 2.5;
				outerAngle = 80;
				coneFadeCoef = 200;

				position = "laser pos";
				direction = "laser dir";

				useFlare = 1;
				flareSize = 0.7;
				flareMaxDistance = 100;

				dayLight = 1;
				irlight = 1;
				class Attenuation
				{
					start = 0.1;
					constant = 2;
					linear = 2;
					quadratic = 1;

					hardLimitStart = 100;
					hardLimitEnd = 200;
				};
				scale[]={0};
			};
		};
	};
	class CVO_RHSAFRF_Acc_Perst3_2DP_IR_Light : rhs_acc_perst3_2dp {
		MRT_SwitchItemNextClass = "CVO_RHSAFRF_Acc_Perst3_2DP_Vis_Laser";
		MRT_SwitchItemPrevClass = "CVO_RHSAFRF_Acc_Perst3_2DP_IR_LightLaser";
		MRT_switchItemHintText = "$STR_CVO_CBA_Accessories_Side_IR_Light";

		class ItemInfo : InventoryFlashLightItem_Base_F {
			mass = 8;
			class Pointer {	};
			class FlashLight {
				color[] = {60,40,40};
				ambient[] = {9,8,7};
				intensity = 600;

				size = 1;

				innerAngle = 2.5;
				outerAngle = 80;
				coneFadeCoef = 200;

				position = "laser pos";
				direction = "laser dir";

				useFlare = 1;
				flareSize = 0.7;
				flareMaxDistance = 100;

				dayLight = 1;
				irlight = 1;
				class Attenuation
				{
					start = 0.1;
					constant = 2;
					linear = 2;
					quadratic = 1;

					hardLimitStart = 100;
					hardLimitEnd = 200;
				};
				scale[]={0};
			};
		};
	};
	class CVO_RHSAFRF_Acc_Perst3_2DP_Vis_Laser : rhs_acc_perst3_2dp {
		MRT_SwitchItemNextClass = "CVO_RHSAFRF_Acc_Perst3_2DP_Vis_LightLaser";
		MRT_SwitchItemPrevClass = "CVO_RHSAFRF_Acc_Perst3_2DP_IR_Light";
		MRT_switchItemHintText = "$STR_CVO_CBA_Accessories_Side_Vis_Laser";

		class ItemInfo : InventoryFlashLightItem_Base_F {
			mass = 8;

			class Pointer {
				irLaserPos = "laser pos";
				irLaserEnd = "laser dir";

				irDistance = 1000;

				beamColor[] = {1,0,0};
				dotColor[] = {10000,0,0};
				dotSize = 2;

				beamThickness = 0.15;
				beamMaxLength = 3000;

				isIR = 0;
			};
			class FlashLight { };
		};
	};
	class CVO_RHSAFRF_Acc_Perst3_2DP_Vis_LightLaser : rhs_acc_perst3_2dp {
		MRT_SwitchItemNextClass = "rhs_acc_perst3_2dp_light";
		MRT_SwitchItemPrevClass = "CVO_RHSAFRF_Acc_Perst3_2DP_Vis_Laser";
		MRT_switchItemHintText = "$STR_CVO_CBA_Accessories_Side_Vis_LightLaser";

		class ItemInfo : InventoryFlashLightItem_Base_F {
			mass = 8;
			class Pointer {
				irLaserPos = "laser pos";
				irLaserEnd = "laser dir";

				irDistance = 1000;

				beamColor[] = {1,0,0};
				dotColor[] = {10000,0,0};
				dotSize = 2;

				beamThickness = 0.15;
				beamMaxLength = 3000;

				isIR = 0;
			};
			class FlashLight {
				color[]={25,22,20};
				ambient[]={0.001,0.001,0.001};
				position="flashdir";
				direction="flash";
				size=1;
				innerAngle=50;
				outerAngle=120;
				coneFadeCoef=10;
				intensity=330;
				useFlare=1;
				dayLight=1;
				FlareSize=0.69999999;
				onlyInNvg=0;
				class Attenuation
				{
					start=0;
					constant=2;
					linear=1;
					quadratic=1;
				};
				scale[]={0};
			};
		};
	};

	class rhs_acc_perst3_2dp_light : rhs_acc_perst3_2dp {
		MRT_SwitchItemNextClass = "rhs_acc_perst3_2dp";
		MRT_SwitchItemPrevClass = "CVO_RHSAFRF_Acc_Perst3_2DP_Vis_LightLaser";
		MRT_switchItemHintText = "$STR_CVO_CBA_Accessories_Side_Vis_Light";
	};



	class rhs_acc_perst3_2dp_h: rhs_acc_perst3_2dp {
		MRT_SwitchItemNextClass = "CVO_RHSAFRF_Acc_Perst3_2DP_H_IR_LightLaser";
		MRT_SwitchItemPrevClass = "rhs_acc_perst3_2dp_h_light";
		MRT_switchItemHintText = "$STR_CVO_CBA_Accessories_Side_IR_Laser";
	};

	class CVO_RHSAFRF_Acc_Perst3_2DP_H_IR_LightLaser : rhs_acc_perst3_2dp_h {
		scope = 2;
		scopeArsenal = 0;

		MRT_SwitchItemNextClass = "CVO_RHSAFRF_Acc_Perst3_2DP_H_IR_Light";
		MRT_SwitchItemPrevClass = "rhs_acc_perst3_2dp_h";
		MRT_switchItemHintText = "$STR_CVO_CBA_Accessories_Side_IR_LightLaser";

		class ItemInfo : InventoryFlashLightItem_Base_F {
			mass = 8;
			class Pointer {
				irLaserPos = "laser pos";
				irLaserEnd = "laser dir";
				irDistance = 5;
			};
			class FlashLight {
				color[] = {60,40,40};
				ambient[] = {9,8,7};
				intensity = 600;

				size = 1;

				innerAngle = 2.5;
				outerAngle = 80;
				coneFadeCoef = 200;

				position = "laser pos";
				direction = "laser dir";

				useFlare = 1;
				flareSize = 0.7;
				flareMaxDistance = 100;

				dayLight = 1;
				irlight = 1;
				class Attenuation
				{
					start = 0.1;
					constant = 2;
					linear = 2;
					quadratic = 1;

					hardLimitStart = 100;
					hardLimitEnd = 200;
				};
				scale[]={0};
			};
		};
	};
	class CVO_RHSAFRF_Acc_Perst3_2DP_H_IR_Light : rhs_acc_perst3_2dp_h {
		scope = 2;
		scopeArsenal = 0;

		MRT_SwitchItemNextClass = "CVO_RHSAFRF_Acc_Perst3_2DP_H_Vis_Laser";
		MRT_SwitchItemPrevClass = "CVO_RHSAFRF_Acc_Perst3_2DP_H_IR_LightLaser";
		MRT_switchItemHintText = "$STR_CVO_CBA_Accessories_Side_IR_Light";

		class ItemInfo : InventoryFlashLightItem_Base_F {
			mass = 8;
			class Pointer {	};
			class FlashLight {
				color[] = {60,40,40};
				ambient[] = {9,8,7};
				intensity = 600;

				size = 1;

				innerAngle = 2.5;
				outerAngle = 80;
				coneFadeCoef = 200;

				position = "laser pos";
				direction = "laser dir";

				useFlare = 1;
				flareSize = 0.7;
				flareMaxDistance = 100;

				dayLight = 1;
				irlight = 1;
				class Attenuation
				{
					start = 0.1;
					constant = 2;
					linear = 2;
					quadratic = 1;

					hardLimitStart = 100;
					hardLimitEnd = 200;
				};
				scale[]={0};
			};
		};
	};
	class CVO_RHSAFRF_Acc_Perst3_2DP_H_Vis_Laser : rhs_acc_perst3_2dp_h {
		scope = 2;
		scopeArsenal = 0;
		
		MRT_SwitchItemNextClass = "CVO_RHSAFRF_Acc_Perst3_2DP_H_Vis_LightLaser";
		MRT_SwitchItemPrevClass = "CVO_RHSAFRF_Acc_Perst3_2DP_H_IR_Light";
		MRT_switchItemHintText = "$STR_CVO_CBA_Accessories_Side_Vis_Laser";

		class ItemInfo : InventoryFlashLightItem_Base_F {
			mass = 8;

			class Pointer {
				irLaserPos = "laser pos";
				irLaserEnd = "laser dir";

				irDistance = 1000;

				beamColor[] = {1,0,0};
				dotColor[] = {10000,0,0};
				dotSize = 2;

				beamThickness = 0.15;
				beamMaxLength = 3000;

				isIR = 0;
			};
			class FlashLight { };
		};
	};
	class CVO_RHSAFRF_Acc_Perst3_2DP_H_Vis_LightLaser : rhs_acc_perst3_2dp_h {
		scope = 2;
		scopeArsenal = 0;
		
		MRT_SwitchItemNextClass = "rhs_acc_perst3_2dp_light_h";
		MRT_SwitchItemPrevClass = "CVO_RHSAFRF_Acc_Perst3_2DP_H_Vis_Laser";
		MRT_switchItemHintText = "$STR_CVO_CBA_Accessories_Side_Vis_LightLaser";

		class ItemInfo : InventoryFlashLightItem_Base_F {
			mass = 8;
			class Pointer {
				irLaserPos = "laser pos";
				irLaserEnd = "laser dir";

				irDistance = 1000;

				beamColor[] = {1,0,0};
				dotColor[] = {10000,0,0};
				dotSize = 2;

				beamThickness = 0.15;
				beamMaxLength = 3000;

				isIR = 0;
			};
			class FlashLight {
				color[]={25,22,20};
				ambient[]={0.001,0.001,0.001};
				position="flashdir";
				direction="flash";
				size=1;
				innerAngle=50;
				outerAngle=120;
				coneFadeCoef=10;
				intensity=330;
				useFlare=1;
				dayLight=1;
				FlareSize=0.69999999;
				onlyInNvg=0;
				class Attenuation
				{
					start=0;
					constant=2;
					linear=1;
					quadratic=1;
				};
				scale[]={0};
			};
		};
	};

	class rhs_acc_perst3_2dp_light_h: rhs_acc_perst3_2dp_light {
		MRT_SwitchItemNextClass = "rhs_acc_perst3_2dp_h";
		MRT_SwitchItemPrevClass = "CVO_RHSAFRF_Acc_Perst3_2DP_H_Vis_LightLaser";
		MRT_switchItemHintText = "$STR_CVO_CBA_Accessories_Side_Vis_Light";
	};



	class rhs_acc_1p63;
	class rhs_acc_ekp1: rhs_acc_1p63 {
		MRT_SwitchItemNextClass = "rhs_acc_ekp1b";
		MRT_SwitchItemPrevClass = "rhs_acc_ekp1d";
		MRT_switchItemHintText = "$STR_CVO_CBA_Accessories_Reticle_VBarDot";
	};

	class rhs_acc_ekp1b: rhs_acc_ekp1 {
		MRT_SwitchItemNextClass = "rhs_acc_ekp1c";
		MRT_SwitchItemPrevClass = "rhs_acc_ekp1";
		MRT_switchItemHintText = "$STR_CVO_CBA_Accessories_Reticle_Dot";
	};

	class rhs_acc_ekp1c: rhs_acc_ekp1b {
		MRT_SwitchItemNextClass = "rhs_acc_ekp1d";
		MRT_SwitchItemPrevClass = "rhs_acc_ekp1b";
		MRT_switchItemHintText = "$STR_CVO_CBA_Accessories_Reticle_VBar";
	};

	class rhs_acc_ekp1d: rhs_acc_ekp1b {
		MRT_SwitchItemNextClass = "rhs_acc_ekp1";
		MRT_SwitchItemPrevClass = "rhs_acc_ekp1c";
		MRT_switchItemHintText = "$STR_CVO_CBA_Accessories_Reticle_TBar";
	};



	class rhs_acc_ekp8_02: rhs_acc_ekp1 {
		MRT_SwitchItemNextClass = "rhs_acc_ekp8_02b";
		MRT_SwitchItemPrevClass = "rhs_acc_ekp8_02d";
		MRT_switchItemHintText = "$STR_CVO_CBA_Accessories_Reticle_TBar";
	};

	class rhs_acc_ekp8_02b: rhs_acc_ekp8_02 {
		MRT_SwitchItemNextClass = "rhs_acc_ekp8_02c";
		MRT_SwitchItemPrevClass = "rhs_acc_ekp8_02";
		MRT_switchItemHintText = "$STR_CVO_CBA_Accessories_Reticle_VBarDot";
	};

	class rhs_acc_ekp8_02c: rhs_acc_ekp8_02b {
		MRT_SwitchItemNextClass = "rhs_acc_ekp8_02d";
		MRT_SwitchItemPrevClass = "rhs_acc_ekp8_02b";
		MRT_switchItemHintText = "$STR_CVO_CBA_Accessories_Reticle_VBar";
	};

	class rhs_acc_ekp8_02d: rhs_acc_ekp8_02b {
		MRT_SwitchItemNextClass = "rhs_acc_ekp8_02";
		MRT_SwitchItemPrevClass = "rhs_acc_ekp8_02c";
		MRT_switchItemHintText = "$STR_CVO_CBA_Accessories_Reticle_Dot";
	};



	class rhs_acc_ekp8_18: rhs_acc_ekp8_02 {
		MRT_SwitchItemNextClass = "rhs_acc_ekp8_18b";
		MRT_SwitchItemPrevClass = "rhs_acc_ekp8_18d";
		MRT_switchItemHintText = "$STR_CVO_CBA_Accessories_Reticle_TBar";
	};

	class rhs_acc_ekp8_18b: rhs_acc_ekp8_18 {
		MRT_SwitchItemNextClass = "rhs_acc_ekp8_18c";
		MRT_SwitchItemPrevClass = "rhs_acc_ekp8_18";
		MRT_switchItemHintText = "$STR_CVO_CBA_Accessories_Reticle_VBarDot";
	};

	class rhs_acc_ekp8_18c: rhs_acc_ekp8_18 {
		MRT_SwitchItemNextClass = "rhs_acc_ekp8_18d";
		MRT_SwitchItemPrevClass = "rhs_acc_ekp8_18b";
		MRT_switchItemHintText = "$STR_CVO_CBA_Accessories_Reticle_VBar";
	};

	class rhs_acc_ekp8_18d: rhs_acc_ekp8_18 {
		MRT_SwitchItemNextClass = "rhs_acc_ekp8_18";
		MRT_SwitchItemPrevClass = "rhs_acc_ekp8_18c";
		MRT_switchItemHintText = "$STR_CVO_CBA_Accessories_Reticle_Dot";
	};



	class rhs_acc_npz: rhs_acc_ekp1 {
		MRT_SwitchItemNextClass = "";
		MRT_SwitchItemPrevClass = "";
		MRT_switchItemHintText = "";
	};



	class GrenadeLauncher;
	class Throw : GrenadeLauncher {
		muzzles[] += {
			"CVO_RHSAFRF_Explosives_EC75_Throwable_Muzzle",
			"CVO_RHSAFRF_Explosives_EC75_Sand_Throwable_Muzzle",
			"CVO_RHSAFRF_Explosives_EC200_Throwable_Muzzle",
			"CVO_RHSAFRF_Explosives_EC200_Sand_Throwable_Muzzle",
			"CVO_RHSAFRF_Explosives_EC400_Throwable_Muzzle",
			"CVO_RHSAFRF_Explosives_EC400_Sand_Throwable_Muzzle"
		};

		class ThrowMuzzle;
		class CVO_RHSAFRF_Explosives_EC75_Throwable_Muzzle : ThrowMuzzle {
		magazines[] = { "CVO_RHSAFRF_EC75_Mag_Throwable" };
		};
		class CVO_RHSAFRF_Explosives_EC75_Sand_Throwable_Muzzle : ThrowMuzzle {
		magazines[] = { "CVO_RHSAFRF_EC75_Sand_Mag_Throwable" };
		};

		class CVO_RHSAFRF_Explosives_EC200_Throwable_Muzzle : ThrowMuzzle {
		magazines[] = { "CVO_RHSAFRF_EC200_Mag_Throwable" };
		};
		class CVO_RHSAFRF_Explosives_EC200_Sand_Throwable_Muzzle : ThrowMuzzle {
		magazines[] = { "CVO_RHSAFRF_EC200_Sand_Mag_Throwable" };
		};

		class CVO_RHSAFRF_Explosives_EC400_Throwable_Muzzle : ThrowMuzzle {
		magazines[] = { "CVO_RHSAFRF_EC400_Mag_Throwable" };
		};
		class CVO_RHSAFRF_Explosives_EC400_Sand_Throwable_Muzzle : ThrowMuzzle {
		magazines[] = { "CVO_RHSAFRF_EC400_Sand_Mag_Throwable" };
		};
	};
};

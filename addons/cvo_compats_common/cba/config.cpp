
class CfgPatches {
	class CVO_Compats_Common_CBA {
		addonRootClass = "CVO_Compats_Common";

		requiredAddons[] = {
			"cba_main"
		};
		requiredVersion = 1.00;
		skipWhenMissingDependencies = 1;

		units[] = {};
		weapons[] = {};
	};
};

class CfgWeapons {
	class CVO_acc_ir_flash {
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

		dayLight = 0;
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

	class CVO_acc_vis_laser_red {
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
};

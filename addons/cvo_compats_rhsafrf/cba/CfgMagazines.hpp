class CfgMagazines {
	class CA_Magazine;

	class CVO_RHSAFRF_EC75_Mag_Throwable : CA_Magazine {
		author = "$STR_RHS_AUTHOR_FULL";

		displayName = "$STR_CVO_RHSAFRF_Explosives_EC75_Throwable_name";
		displayNameShort = "$STR_CVO_RHSAFRF_Explosives_EC75_nameShort";
		descriptionShort = "$STR_A3_cfgMagazines_DemoCharge1";

		picture = "\rhsafrf\addons\rhs_weapons2\icons\rhs_ec75_ca";
		model = "\rhsafrf\addons\rhs_weapons2\explosives\rhs_ec75_d";

		scope = 2;
		scopeArsenal = 0;
		scopeCurator = 0;

		class Library
		{
			libTextDesc = "$STR_A3_cfgMagazines_DemoCharge_Library0";
		};

		useAction = 0;
		type = "2*		256";
		allowedSlots[] = {901,701};
		value = 5;
		ammo = "CVO_RHSAFRF_EC75_Ammo_Thrown";
		mass = 10.45;
		count = 1;
		initSpeed = 16;
		maxLeadSpeed = 0;
		nameSoundWeapon = "satchelcharge";
		nameSound = "satchelcharge";
		sound[] =
		{
			"A3\sounds_f\dummysound",
			0.00031622776,
			1,
			10
		};
	};

	class CVO_RHSAFRF_EC75_Sand_Mag_Throwable : CVO_RHSAFRF_EC75_Mag_Throwable {
		displayName = "$STR_CVO_RHSAFRF_Explosives_EC75_Throwable_name";

		picture = "\rhsafrf\addons\rhs_weapons2\icons\rhs_ec75_sand_ca";
		model = "\rhsafrf\addons\rhs_weapons2\explosives\rhs_ec75_sand_d";

		ammo = "CVO_RHSAFRF_EC75_Sand_Ammo_Thrown";
	};


	class CVO_RHSAFRF_EC200_Mag_Throwable : CVO_RHSAFRF_EC75_Mag_Throwable {
		displayName = "$STR_CVO_RHSAFRF_Explosives_EC200_Throwable_name";
		displayNameShort = "$STR_CVO_RHSAFRF_Explosives_EC200_nameShort";

		picture = "\rhsafrf\addons\rhs_weapons2\icons\rhs_ec200_ca";
		model = "\rhsafrf\addons\rhs_weapons2\explosives\rhs_ec200_d";
		
		ammo = "CVO_RHSAFRF_EC200_Ammo_Thrown";
		mass = 13.2;
		initSpeed = 12;
	};

	class CVO_RHSAFRF_EC200_Sand_Mag_Throwable : CVO_RHSAFRF_EC200_Mag_Throwable {
		displayName = "$STR_CVO_RHSAFRF_Explosives_EC200_Throwable_name";

		picture = "\rhsafrf\addons\rhs_weapons2\icons\rhs_ec200_sand_ca";
		model = "\rhsafrf\addons\rhs_weapons2\explosives\rhs_ec200_sand_d";
		
		ammo = "CVO_RHSAFRF_EC200_Sand_Ammo_Thrown";
	};


	class CVO_RHSAFRF_EC400_Mag_Throwable : CVO_RHSAFRF_EC75_Mag_Throwable {
		displayName = "$STR_CVO_RHSAFRF_Explosives_EC400_Throwable_name";
		displayNameShort = "$STR_CVO_RHSAFRF_Explosives_EC400_nameShort";

		picture = "\rhsafrf\addons\rhs_weapons2\icons\rhs_ec400_ca";
		model = "\rhsafrf\addons\rhs_weapons2\explosives\rhs_ec400_d";
		
		ammo = "CVO_RHSAFRF_EC400_Ammo_Thrown";
		mass = 17.6;
		initSpeed = 8;
		allowedSlots[] = {901};
	};

	class CVO_RHSAFRF_EC400_Sand_Mag_Throwable : CVO_RHSAFRF_EC400_Mag_Throwable {
		displayName = "$STR_CVO_RHSAFRF_Explosives_EC400_Throwable_name";

		picture = "\rhsafrf\addons\rhs_weapons2\icons\rhs_ec400_sand_ca";
		model = "\rhsafrf\addons\rhs_weapons2\explosives\rhs_ec400_sand_d";
		
		ammo = "CVO_RHSAFRF_EC400_Sand_Ammo_Thrown";
	};
};

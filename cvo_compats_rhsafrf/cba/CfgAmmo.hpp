class CfgAmmo {
	class Grenade;

	class CVO_RHSAFRF_EC75_Ammo_Thrown : Grenade {
		ace_frag_skip = 1;
		ace_grenades_pullPinSound[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\ExplosiveSatchel_TouchOff_01.wss", 2, 1, 50};


		hit = 200;
		indirectHit = 200;
		indirectHitRange = 1;
		explosionType = "bomb";
		ACE_damageType = "explosive";

		timeToLive = 8;
		explosionTime = 7;
		fuseDistance = 0;
		deflectionSlowDown = 0.1;

		model = "\rhsafrf\addons\rhs_weapons2\explosives\rhs_ec75_e";
		mineModelDisabled = "\rhsafrf\addons\rhs_weapons2\explosives\rhs_ec75_d";

		soundHit[] =
		{
			"A3\Sounds_F\arsenal\explosives\bombs\Explosive_Charge",
			3.1622777,
			1,
			1500
		};
		multiSoundHit[] = {"soundHit1", 0.5, "soundHit2", 0.5};
		soundDeactivation[] =
		{
			"A3\Sounds_F\weapons\Mines\deactivate_mine_3a",
			1.4125376,
			1,
			20
		};
		SoundSetExplosion[] =
		{
			"ExplosiveCharge_Exp_SoundSet",
			"ExplosiveCharge_Tail_SoundSet",
			"Explosion_Debris_SoundSet"
		};

		defaultMagazine = "CVO_RHSAFRF_EC75_Mag_Throwable";

		ExplosionEffects = "MineNondirectionalExplosionSmall";
		CraterEffects = "MineNondirectionalCraterSmall";
		whistleDist = 32;

		class CamShakeExplode {
			power = 20;
			duration = 2;
			frequency = 20;
			distance = 250;
		};
	};

	class CVO_RHSAFRF_EC75_Sand_Ammo_Thrown : CVO_RHSAFRF_EC75_Ammo_Thrown {
		model = "\rhsafrf\addons\rhs_weapons2\explosives\rhs_ec75_sand_e";
		mineModelDisabled = "\rhsafrf\addons\rhs_weapons2\explosives\rhs_ec75_sand_d";

		defaultMagazine = "CVO_RHSAFRF_EC75_Sand_Mag_Throwable";
	};


	class CVO_RHSAFRF_EC200_Ammo_Thrown : CVO_RHSAFRF_EC75_Ammo_Thrown {
		hit = 400;
		indirectHit = 400;
		indirectHitRange = 3;

		model = "\rhsafrf\addons\rhs_weapons2\explosives\rhs_ec200_e";
		mineModelDisabled = "\rhsafrf\addons\rhs_weapons2\explosives\rhs_ec200_d";

		defaultMagazine = "CVO_RHSAFRF_EC200_Mag_Throwable";
	};

	class CVO_RHSAFRF_EC200_Sand_Ammo_Thrown : CVO_RHSAFRF_EC200_Ammo_Thrown {
		model = "\rhsafrf\addons\rhs_weapons2\explosives\rhs_ec200_sand_e";
		mineModelDisabled = "\rhsafrf\addons\rhs_weapons2\explosives\rhs_ec200_sand_d";

		defaultMagazine = "CVO_RHSAFRF_EC200_Sand_Mag_Throwable";
	};


	class CVO_RHSAFRF_EC400_Ammo_Thrown : CVO_RHSAFRF_EC75_Ammo_Thrown {
		hit = 1000;
		indirectHit = 1000;
		indirectHitRange = 5;

		model = "\rhsafrf\addons\rhs_weapons2\explosives\rhs_ec400_e";
		mineModelDisabled = "\rhsafrf\addons\rhs_weapons2\explosives\rhs_ec400_d";

		defaultMagazine = "CVO_RHSAFRF_EC400_Mag_Throwable";
	};

	class CVO_RHSAFRF_EC400_Sand_Ammo_Thrown : CVO_RHSAFRF_EC400_Ammo_Thrown {
		model = "\rhsafrf\addons\rhs_weapons2\explosives\rhs_ec400_sand_e";
		mineModelDisabled = "\rhsafrf\addons\rhs_weapons2\explosives\rhs_ec400_sand_d";

		defaultMagazine = "CVO_RHSAFRF_EC400_Sand_Mag_Throwable";
	};
};

// MP5/10 Magazines
class UK3CB_MP5_30Rnd_10_Magazine: 30Rnd_9x21_Mag {
	greenmag_ammo = QAMMO_CLASS(10x25_FMJ_1Rnd);
	greenmag_basicammo = QAMMO_CLASS(10x25_Basic_1Rnd);

	greenmag_canSpeedload = 1;
	greenmag_needBelt = 0;
};


class UK3CB_MP5_30Rnd_10_Magazine_R: 30Rnd_9x21_Mag {
	greenmag_ammo = QAMMO_CLASS(10x25_FMJ_1Rnd);
	greenmag_basicammo = QAMMO_CLASS(10x25_Basic_1Rnd);

	greenmag_canSpeedload = 1;
	greenmag_needBelt = 0;
};

class UK3CB_MP5_30Rnd_10_Magazine_RT: UK3CB_MP5_30Rnd_10_Magazine_R {
	greenmag_ammo = QAMMO_CLASS(10x25_Tracer_1Rnd);
};

class UK3CB_MP5_30Rnd_10_Magazine_Y;
class UK3CB_MP5_30Rnd_10_Magazine_YT: UK3CB_MP5_30Rnd_10_Magazine_Y {
	greenmag_ammo = QAMMO_CLASS(10x25_Tracer_1Rnd);
};

class UK3CB_MP5_30Rnd_10_Magazine_G;
class UK3CB_MP5_30Rnd_10_Magazine_GT: UK3CB_MP5_30Rnd_10_Magazine_G {
	greenmag_ammo = QAMMO_CLASS(10x25_Tracer_1Rnd);
};

class UK3CB_MP5_30Rnd_10_Magazine_W;
class UK3CB_MP5_30Rnd_10_Magazine_WT: UK3CB_MP5_30Rnd_10_Magazine_W {
	greenmag_ammo = QAMMO_CLASS(10x25_Tracer_1Rnd);
};
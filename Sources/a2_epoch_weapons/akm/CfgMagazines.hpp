class 30Rnd_762x39_Mag: CA_Magazine
{
	scope = public;
	displayName = "7.62mm 30rnd AKM Mag";
	picture = "\x\addons\a2_epoch_weapons\akm\data\UI\gear_30Rnd_akm_ca.paa";
	count = 30;
	ammo = "B_762x39_Ball";
	mass = 8;
	model = "\x\addons\a2_epoch_weapons\akm\30Rnd_akm.p3d"; /// path to model
	initSpeed = 850;
	lastRoundsTracer = 4; /// tracers to track low ammo
	descriptionShort = "Caliber: 7.62x39 mm, Used in: AKM, RPK";
};
class CfgPatches
{
	class a3_epoch_weapons
	{
		units[] = {};
		weapons[] = {"ruger_pistol_epoch","ruger_pistol_epoch_snds_F","ruger_pistol_epoch_pointer_F","1911_pistol_epoch"};
		requiredVersion = 0.1;
		requiredAddons[] = {};
		magazines[] = {"10rnd_22X44_magazine", "9rnd_45X88_magazine", "spear_magazine", "20rnd_762_magazine","30rnd_556_magazine"};
		ammo[] = {"E_22X44_ball", "E_45_ball", "spear_ball", "K_762_ball", "K_556_ball"};
		epochVersion = "0.3.9.0";
	};
};
class Mode_Burst;
class Mode_FullAuto;
class Mode_SemiAuto;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class CfgWeapons
{
	class Pistol;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class ruger_pistol_epoch: Pistol_Base_F
	{
		scope = 2;
		author = "kiory";
		model = "\x\addons\a3_epoch_weapons\ruger.p3d";
		picture = "\x\addons\a3_epoch_weapons\gear\gear_ruger_x_ca.paa";
		magazines[] = {"10rnd_22X44_magazine"};
		displayname = "Ruger";
		descriptionShort = ".22 caliber pistol";
		class Library
		{
			libTextDesc = ".22 caliber pistol";
		};
		reloadTime = 0.1;
		dispersion = 0.01;
		reloadAction = "GestureReloadPistol";
		recoil = "recoil_pistol_light";
		recoilProne = "recoil_prone_pistol_light";

		sounds[] = { "StandardSound", "SilencedSound" };
		class BaseSoundModeType
		{
			weaponSoundEffect = "DefaultRifle";
			closure1[] = { "A3\Sounds_F\weapons\closure\closure_handgun_3", 0.3, 1, 30 };
			closure2[] = { "A3\Sounds_F\weapons\closure\closure_handgun_3", 0.3, 1.1, 30 };
			soundClosure[] = { "closure1", 0.5, "closure2", 0.5 };
		};

		class StandardSound : BaseSoundModeType
		{
			begin1[] = { "A3\sounds_f\weapons\silenced\silent-23", 0.56234133, 1, 600 };
			begin2[] = { "A3\sounds_f\weapons\silenced\silent-24", 0.56234133, 1, 600 };
			soundBegin[] = { "begin1", 0.5, "begin2", 0.5 };
		};

		class SilencedSound : BaseSoundModeType
		{
			begin1[] = { "A3\sounds_f\weapons\silenced\silent-23", 0.56234133, 1, 600 };
			begin2[] = { "A3\sounds_f\weapons\silenced\silent-24", 0.56234133, 1, 600 };
			soundBegin[] = { "begin1", 0.5, "begin2", 0.5 };
		};
		soundBegin[] = {"begin1",0.5,"begin2",0.5};
		closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3",1.4125376,1,10};
		closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3",1.4125376,1.1,10};
		soundClosure[] = {"closure1",0.5,"closure2",0.5};
		weaponSoundEffect = "DefaultRifle";
		drySound[] = {"A3\Sounds_F\weapons\pistol_heavy_02\dry",0.39810717,1,20};
		reloadMagazineSound[] = {"A3\Sounds_F\weapons\pistol_heavy_02\reload",0.56234133,1,30};
		class GunParticles
		{
			class FirstEffect
			{
				effectName = "PistolCloud";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
			class PistolAmmoCloud
			{
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "epoch_ammocloud";
			};
			class SmokeEffect
			{
				positionName = "usti hlavne";
				directionName = "usti hlavne";
				effectName = "epoch_smoketrail";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 40;
			class CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				displayName = "$STR_A3_CowsSlot0";
				compatibleItems[] = {"optic_Aco","optic_Aco_smg","optic_ACO_grn_smg","optic_Holosight","optic_Holosight_smg"};
				//picture = "x\addons\a3_epoch_weapons\gear\gear_ruger_o_ca.paa";
			};
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				//picture = "x\addons\a3_epoch_weapons\gear\gear_ruger_s_ca.paa";
			};
			class PointerSlot: PointerSlot
			{
				//picture = "\x\addons\a3_epoch_weapons\gear\gear_ruger_a_ca.paa";
			};
		};
	};

	class ruger_pistol_epoch_snds_F: ruger_pistol_epoch
	{
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_acp";
			};
		};
	};
	class ruger_pistol_epoch_pointer_F: ruger_pistol_epoch
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Arco";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_flashligh";
			};
		};
	};

	class 1911_pistol_epoch: Pistol_Base_F {
		scope = 2;
		author = "kiory";
		model = "\x\addons\a3_epoch_weapons\1911.p3d";
		picture = "\x\addons\a3_epoch_weapons\gear\gear_1911_x_ca.paa";
		magazines[] = {"9rnd_45X88_magazine"};
		displayname = "1911";
		descriptionShort = "$STR_A3_CFGWEAPONS_HGUN_ACPC2_F_2";
		class Library
		{
			libTextDesc = "$STR_A3_CfgWeapons_hgun_Pistol_heavy_01_F_Library0";
		};
		reloadTime = 0.1;
		dispersion = 0.01;
		reloadAction = "GestureReloadPistol";
		recoil = "recoil_pistol_light";
		recoilProne = "recoil_prone_pistol_light";
		sounds[] = {"StandardSound","SilencedSound"};
		class BaseSoundModeType
		{
			weaponSoundEffect = "DefaultRifle";
			closure1[] = {"A3\Sounds_F\weapons\closure\closure_handgun_3",0.3,1,30};
			closure2[] = {"A3\Sounds_F\weapons\closure\closure_handgun_3",0.3,1.1,30};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
		};

		class StandardSound: BaseSoundModeType
		{
			begin1[] = {"x\addons\a3_epoch_weapons\sounds\SoundA",1.3,1,1000};
			begin2[] = {"x\addons\a3_epoch_weapons\sounds\SoundB",1.3,1,1000};
			soundBegin[] = {"begin1",0.4,"begin2",0.3};
		};

		class SilencedSound: BaseSoundModeType
		{
			begin1[] = {"A3\sounds_f\weapons\silenced\silent-23",0.56234133,1,600};
			begin2[] = {"A3\sounds_f\weapons\silenced\silent-24",0.56234133,1,600};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
		};
		soundBegin[] = {"begin1",0.5,"begin2",0.5};
		closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3",1.4125376,1,10};
		closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3",1.4125376,1.1,10};
		soundClosure[] = {"closure1",0.5,"closure2",0.5};
		weaponSoundEffect = "DefaultRifle";
		drySound[] = {"A3\Sounds_F\weapons\pistol_heavy_02\dry",0.39810717,1,20};
		reloadMagazineSound[] = {"A3\Sounds_F\weapons\pistol_heavy_02\reload",0.56234133,1,30};
		class GunParticles
		{
			class FirstEffect
			{
				effectName = "PistolCloud";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
			class PistolAmmoCloud
			{
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "epoch_ammocloud";
			};
			class SmokeEffect
			{
				positionName = "usti hlavne";
				directionName = "usti hlavne";
				effectName = "epoch_smoketrail";
			};
		};

		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 20;
			class CowsSlot{};
			class MuzzleSlot{};
		};

	};


};
class CfgAmmo
{
	class Default;
	class BulletCore;
	class BulletBase;
	class E_22X44_ball: BulletBase
	{
		hit = 3.5;
		indirectHit = 0;
		indirectHitRange = 0;
		cost = 1;
		typicalSpeed = 100;
		airFriction = -0.0032;
		waterFriction = -0.3;
		caliber = 0.2;
		deflecting = 3;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		tracerScale = 1;
		tracerStartTime = 0.05;
		tracerEndTime = 1;
		visibleFire = 4;
		audibleFire = 6;
		class CamShakeExplode
		{
			power = "(5^0.5)";
			duration = "((round (5^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((5^0.5)*3)";
		};
		class CamShakeHit
		{
			power = 5;
			duration = "((round (5^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
	};

	class E_45_ball: BulletBase
	{
		hit = 5.5;
		indirectHit = 0;
		indirectHitRange = 0;
		cost = 1;
		cartridge = "FxCartridge_9mm";
		typicalSpeed = 200;
		airFriction = -0.0032;
		waterFriction = -0.3;
		caliber = 2.6;
		deflecting = 3;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		tracerScale = 1;
		tracerStartTime = 0.05;
		tracerEndTime = 1;
		visibleFire = 4;
		audibleFire = 6;
		class CamShakeExplode
		{
			power = "(5^0.5)";
			duration = "((round (5^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((5^0.5)*3)";
		};
		class CamShakeHit
		{
			power = 5;
			duration = "((round (5^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
	};

	class spear_ball: BulletBase
	{
		hit = 20;
		timeToLive = 30;
		cost = 1;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_9mm";
		typicalSpeed = 185;
		airFriction = -0.001;
		waterFriction = -0;
		whistleDist = 16;
		caliber = 7.6;
		deflecting = 3;
		model = "\x\addons\a3_epoch_weapons\spearmag";
		tracerScale = 2;
		tracerStartTime = 0.05;
		tracerEndTime = 1;
		visibleFire = 4;
		audibleFire = 6;
	};

	class K_762_ball: BulletBase
	{
		hit = 12;
		indirectHit = 0;
		indirectHitRange = 0;
		cost = 1.2;
		typicalSpeed = 800;
		cartridge = "FxCartridge_762";
		airFriction = -0.001;
		waterFriction = -0.3;
		caliber = 1.6;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		tracerScale = 0.6;
		tracerStartTime = 0.0075;
		tracerEndTime = 5;
		visibleFire = 6;
		audibleFire = 9;
		class CamShakeExplode
		{
			power = "(8^0.5)";
			duration = "((round (8^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((8^0.5)*3)";
		};
		class CamShakeHit
		{
			power = 5;
			duration = "((round (5^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
	};

	class K_556_ball: BulletBase
	{
		hit = 10;
		indirectHit = 0;
		indirectHitRange = 0;
		cost = 1.2;
		typicalSpeed = 820;
		airFriction = -0.0009;
		waterFriction = -0.3;
		caliber = 1;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		tracerScale = 1;
		tracerStartTime = 0.05;
		tracerEndTime = 1;
		visibleFire = 5;
		audibleFire = 8;
		class CamShakeExplode
		{
			power = "(5^0.5)";
			duration = "((round (5^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((5^0.5)*3)";
		};
		class CamShakeHit
		{
			power = 5;
			duration = "((round (5^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
	};

};
class CfgMagazines
{
	class Default;
	class CA_Magazine;
	class 10rnd_22X44_magazine: CA_Magazine
	{
		scope = 2;
		displayName = "10Rnd .22 magazine";
		picture = "\x\addons\a3_epoch_weapons\gear\gear_ruger_mag_x_ca.paa";
		ammo = "E_22X44_ball";
		model = "\x\addons\a3_epoch_weapons\ruger_magazine.p3d";
		count = 10;
		initSpeed = 700;
		tracersEvery = 0;
		lastRoundsTracer = 0;
		descriptionShort = "A ten round magazine for the Ruger.";
	};

	class 9rnd_45X88_magazine: CA_Magazine
	{
		scope = 2;
		displayName = "9Rnd .45 magazine";
		picture = "\x\addons\a3_epoch_weapons\gear\gear_1911mag_x_ca.paa";
		ammo = "E_45_ball";
		model = "\x\addons\a3_epoch_weapons\1911_magazine.p3d";
		count = 9;
		initSpeed = 700;
		tracersEvery = 0;
		lastRoundsTracer = 0;
		descriptionShort = "A nine round magazine for the 1911.";
	};

	class spear_magazine: CA_Magazine
	{
		scope = 2;
		displayName = "Spear round";
		picture = "\x\addons\a3_epoch_weapons\gear\gear_speargunmag_x_ca.paa";
		mass = 2;
		ammo = "spear_ball";
		model = "\x\addons\a3_epoch_weapons\spearmag.p3d";
		count = 1;
		initSpeed = 100;
		tracersEvery = 1;
		lastRoundsTracer = 1;
		descriptionShort = "A spear for the spear rifle.";
	};

	class 20rnd_762_magazine: CA_Magazine
	{
		scope = 2;
		displayName = "20Rnd 7.62 Magazine";
		picture = "\x\addons\a3_epoch_weapons\gear\gear_sr25_magazine_x_ca.paa";
		ammo = "K_762_ball";
		model = "\x\addons\a3_epoch_weapons\magazine.p3d";
		count = 20;
		initSpeed = 700;
		tracersEvery = 0;
		lastRoundsTracer = 0;
		descriptionShort = "20-round detachable box magazine";
	};

	class 30rnd_556_magazine: CA_Magazine
	{
		scope = 2;
		displayName = "30Rnd 5.56 Magazine";
		picture = "\x\addons\a3_epoch_weapons\gear\gear_l85a2_mag_x_ca.paa";
		ammo = "K_556_ball";
		model = "\x\addons\a3_epoch_weapons\L85A2_mag.p3d";
		count = 30;
		initSpeed = 700;
		tracersEvery = 0;
		lastRoundsTracer = 0;
		descriptionShort = "30 Round Stanag Magazine";
	};

};

class CfgMovesBasic
{
	class Default;
	class ManActions
	{
		GestureReloadSR25[] = {"GestureReloadSR25","Gesture"};
		GestureReloadSR25Prone[] = {"GestureReloadSR25Prone","Gesture"};
		GestureReloadL85A2[] = {"GestureReloadL85A2","Gesture"};
		GestureReloadL85A2UGL[] = {"GestureReloadL85A2UGL","Gesture"};
		GestureReloadL85A2RIS[] = {"GestureReloadL85A2RIS","Gesture"};
		GestureReloadL85A2Prone[] = {"GestureReloadL85A2Prone","Gesture"};
		GestureReloadL85A2UGLProne[] = {"GestureReloadL85A2UGLProne","Gesture"};
		GestureReloadL85A2RISProne[] = {"GestureReloadL85A2RISProne","Gesture"};
	};

	class Actions
		{
			class NoActions: ManActions
				{
					GestureReloadSR25[] = {"GestureReloadSR25","Gesture"};
					GestureReloadL85A2[] = {"GestureReloadL85A2","Gesture"};
					GestureReloadL85A2UGL[] = {"GestureReloadL85A2UGL","Gesture"};
					GestureReloadL85A2RIS[] = {"GestureReloadL85A2RIS","Gesture"};
				};

				class RifleBaseStandActions;

				class RifleProneActions: RifleBaseStandActions
				{
					GestureReloadSR25[] = {"GestureReloadSR25Prone","Gesture"};
					GestureReloadL85A2[] = {"GestureReloadL85A2Prone","Gesture"};
					GestureReloadL85A2UGL[] = {"GestureReloadL85A2UGLProne","Gesture"};
					GestureReloadL85A2RIS[] = {"GestureReloadL85A2RISProne","Gesture"};
				};
		};
};

class CfgGesturesMale
{
		class Default;
		class States
		{
			class GestureReloadSR25: Default
				{
				file = "\x\addons\a3_epoch_weapons\data\handanims\sr25_reload.rtm";
				looped = 0;
				speed = 0.30;
				mask = "handsWeapon";
				canPullTrigger = 0;
				rightHandIKBeg = 0;
				rightHandIKEnd = 0;
				rightHandIKCurve[] = {0,1};
				leftHandIKBeg = 1;
				leftHandIKEnd = 1;
				leftHandIKCurve[] = {0,1 , 0.008333,0, 0.991667,0, 1.000000,1};
};

				class GestureReloadSR25Prone: Default
				{
				file = "\x\addons\a3_epoch_weapons\data\handanims\sr25_reload_prone.rtm";
				looped = 0;
				speed = 0.30;
				mask = "handsWeapon";
				canPullTrigger = 0;
				rightHandIKBeg = 0;
				rightHandIKEnd = 0;
				rightHandIKCurve[] = {0,1};
				leftHandIKBeg = 1;
				leftHandIKEnd = 1;
				leftHandIKCurve[] = {0,1 , 0.008333,0, 0.991667,0, 1.000000,1};
				};

				class GestureReloadL85A2: Default
				{
				file = "\x\addons\a3_epoch_weapons\data\handanims\L85A2_Reload_anim.rtm";
				looped = 0;
				speed = 0.30;
				mask = "handsWeapon";
				canPullTrigger = 0;
				rightHandIKBeg = 0;
				rightHandIKEnd = 0;
				rightHandIKCurve[] = {0,1};
				leftHandIKBeg = 1;
				leftHandIKEnd = 1;
				leftHandIKCurve[] = {0,1, 0.016667,1, 0.024590,0, 0.983333,0, 0.991667,1};
				};

				class GestureReloadL85A2Prone: Default
				{
				file = "\x\addons\a3_epoch_weapons\data\handanims\L85A2_RIS_Reload_anim_prone.rtm";
				looped = 0;
				speed = 0.30;
				mask = "handsWeapon";
				canPullTrigger = 0;
				rightHandIKBeg = 0;
				rightHandIKEnd = 0;
				rightHandIKCurve[] = {0,1};
				leftHandIKBeg = 1;
				leftHandIKEnd = 1;
				leftHandIKCurve[] = {0,1, 0.016667,1, 0.024590,0, 0.983333,0, 0.991667,1};
				};

				class GestureReloadL85A2UGL: Default
				{
				file = "\x\addons\a3_epoch_weapons\data\handanims\L85A2_UGL_Reload_anim.rtm";
				looped = 0;
				speed = 0.30;
				mask = "handsWeapon";
				canPullTrigger = 0;
				rightHandIKBeg = 0;
				rightHandIKEnd = 0;
				rightHandIKCurve[] = {0,1};
				leftHandIKBeg = 1;
				leftHandIKEnd = 1;
				leftHandIKCurve[] = {0,1, 0.016667,1, 0.024590,0, 0.983333,0, 0.991667,1};
				};

				class GestureReloadL85A2UGLProne: Default
				{
				file = "\x\addons\a3_epoch_weapons\data\handanims\L85A2_RIS_Reload_anim_prone.rtm";
				looped = 0;
				speed = 0.30;
				mask = "handsWeapon";
				canPullTrigger = 0;
				rightHandIKBeg = 0;
				rightHandIKEnd = 0;
				rightHandIKCurve[] = {0,1};
				leftHandIKBeg = 1;
				leftHandIKEnd = 1;
				leftHandIKCurve[] = {0,1, 0.016667,1, 0.024590,0, 0.983333,0, 0.991667,1};
				};

				class GestureReloadL85A2RIS: Default
				{
				file = "\x\addons\a3_epoch_weapons\data\handanims\L85A2_RIS_Reload_anim.rtm";
				looped = 0;
				speed = 0.30;
				mask = "handsWeapon";
				canPullTrigger = 0;
				rightHandIKBeg = 0;
				rightHandIKEnd = 0;
				rightHandIKCurve[] = {0,1};
				leftHandIKBeg = 1;
				leftHandIKEnd = 1;
				leftHandIKCurve[] = {0,1, 0.016667,1, 0.024590,0, 0.983333,0, 0.991667,1};
				};

				class GestureReloadL85A2RISProne: Default
				{
				file = "\x\addons\a3_epoch_weapons\data\handanims\L85A2_RIS_Reload_anim_prone.rtm";
				looped = 0;
				speed = 0.30;
				mask = "handsWeapon";
				canPullTrigger = 0;
				rightHandIKBeg = 0;
				rightHandIKEnd = 0;
				rightHandIKCurve[] = {0,1};
				leftHandIKBeg = 1;
				leftHandIKEnd = 1;
				leftHandIKCurve[] = {0,1, 0.016667,1, 0.024590,0, 0.983333,0, 0.991667,1};
				};
		};

};

class CfgCloudlets
{
	class Default;
	class epoch_ammocloud1: Default
	{
		interval = 0.005;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 8;
		particleFSLoop = 1;
		angleVar = 0.5;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.45;
		moveVelocity[] = {"-0.15*directionX","-0.15*directionY","-0.15*directionZ"};
		rotationVelocity = 1;
		weight = 0.053;
		volume = 0.04;
		rubbing = 0.1;
		size[] = {0.25,0.5};
		color[] = {{ 0.1,0.1,0.1,0.3 },{ 0.1,0.1,0.1,0.15 },{ 0.1,0.1,0.1,0.06 },{ 0.1,0.1,0.1,0.01 }};
		animationSpeed[] = {1.2};
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.08;
		onTimerScript = "";
		beforeDestroyScript = "";
		destroyOnWaterSurface = 1;
		blockAIVisibility = 0;
		sizeCoef = 0.2;
		colorCoef[] = {1,1,1,0.6};
		animationSpeedCoef = 1;
		position[] = {"positionX","positionY","positionZ"};
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {0.03,0.03,0.03};
		rotationVelocityVar = 20;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class epoch_smoketrail1: Default
	{
		interval = 0.005;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Refract";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1.1;
		lifeTime = 3;
		moveVelocity[] = {"-0.15*directionX","-0.15*directionY","-0.15*directionZ"};
		rotationVelocity = 1;
		weight = 1.2;
		volume = 1.0;
		rubbing = 0.1;
		size[] = {0.1,0.15};
		color[] = {{ 0.06,0.06,0.06,0.32 },{ 0.3,0.3,0.3,0.28 },{ 0.3,0.3,0.3,0.25 },{ 0.3,0.3,0.3,0.22 },{ 0.3,0.3,0.3,0.1 }};
		colorCoef[] = {1,1,1,1};
		animationSpeed[] = {2,1};
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.05;
		onTimerScript = "";
		beforeDestroyScript = "";
		destroyOnWaterSurface = 1;
		blockAIVisibility = 0;
		sizeCoef = 0.5;
		animationSpeedCoef = 1;
		position[] = {"positionX","positionY","positionZ"};
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {0.0,0.0,0.0};
		rotationVelocityVar = 20;
		sizeVar = 0.05;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
};
class epoch_ammocloud
{
	class epoch_ammocloud
	{
		simulation = "particles";
		type = "epoch_ammocloud1";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
	};
};
class epoch_smoketrail
{
	class epoch_smoketrail
	{
		simulation = "particles";
		type = "epoch_smoketrail1";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
	};
};
//};

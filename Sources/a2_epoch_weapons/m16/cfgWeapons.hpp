class m16_EPOCH_Base: Rifle_Base_F /// Just basic values common for all testing rifle variants
{
	magazines[] = {30Rnd_556x45_Stanag, 30Rnd_556x45_Stanag_Tracer_Red,
					30Rnd_556x45_Stanag_Tracer_Green, 30Rnd_556x45_Stanag_Tracer_Yellow,
					20Rnd_556x45_UW_mag}; /// original custom made magazines
	reloadAction = "GestureReloadMk20"; /// EBR hand animation actually fits this rifle well
	discreteDistanceInitIndex = 0; /// Ironsight zeroing is the lowest value by default

	// Size of recoil sway of the cursor
	maxRecoilSway=0.0225;
    // Speed at which the recoil sway goes back to zero (from maxRecoilSway to 0 in 1/swayDecaySpeed seconds)
    swayDecaySpeed=1.05;
	/// inertia coefficient of the weapon
	inertia = 0.55;

	maxZeroing = 1000;

	class GunParticles : GunParticles
	{
		class SecondEffect
		{
			positionName = "nabojnicestart";
			directionName = "nabojniceend";
			effectName = "RifleAssaultCloud";
		};
	};

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class MuzzleSlot: SlotInfo
		{
			linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE"; /// this can be set, but having some common helps a bit
			compatibleItems[] = {"muzzle_snds_M"}; /// A custom made suppressor for this weapon
		};
		class CowsSlot: CowsSlot {}; /// default accessories for this slot
		class PointerSlot: PointerSlot {}; /// default accessories for this slot
	};

/////////////////////////////////////////////////////  I R O N S I G H T S  /////////////////////////////////////////////////////
	opticsZoomMin=0.375;
	opticsZoomMax=2.3;
	opticsZoomInit=0.55;

	distanceZoomMin = 300;
	distanceZoomMax = 800;
/////////////////////////////////////////////////////  I R O N S I G H T S  /////////////////////////////////////////////////////

	descriptionShort = "M16 Assault Rifle"; /// displayed on mouseOver in Inventory
	handAnim[] = {"OFP2_ManSkeleton", "\x\addons\a2_epoch_weapons\m16\m16_anim.rtm"};
	dexterity = 1.8;

//caseless ammo//
	bullet1[] = {"A3\Sounds_F\weapons\bullets\7_62-dirt1",1.0,1,15};
	bullet2[] = {"A3\Sounds_F\weapons\bullets\7_62-dirt2",1.0,1,15};
	bullet3[] = {"A3\Sounds_F\weapons\bullets\7_62-dirt3",1.0,1,15};
	bullet4[] = {"A3\Sounds_F\weapons\bullets\7_62-dirt4",1.0,1,15};
	bullet5[] = {"A3\Sounds_F\weapons\bullets\7_62-hard1",1.0,1,15};
	bullet6[] = {"A3\Sounds_F\weapons\bullets\7_62-hard2",1.0,1,15};
	bullet7[] = {"A3\Sounds_F\weapons\bullets\7_62-hard3",1.0,1,15};
	bullet8[] = {"A3\Sounds_F\weapons\bullets\7_62-hard4",1.0,1,15};
	soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083};

	selectionFireAnim = "zasleh"; /// are we able to get rid of all the zaslehs?

	modes[] = {Single, single_medium_optics1, single_far_optics2, Burst}; /// Includes fire modes for AI

////////////////////////////////////////////////////// NO OPTICS ///////////////////////////////////////////////////////////

	class Single: Mode_SemiAuto /// Pew
	{
		sounds[] = {		/// the new parameter to distinguish muzzle accessories type
			StandardSound, // default zvuk
			SilencedSound // silenced zvuk
		};

		class BaseSoundModeType
		{

			weaponSoundEffect  = "m16Epoch"; /// custom made sounds

			closure1[]={"A3\sounds_f\weapons\closure\ebr-1", db-4, 1,10}; /// custom made sounds
			closure2[]={"A3\sounds_f\weapons\closure\ebr-2", db-4, 1,10}; /// custom made sounds
			closure3[]={"A3\sounds_f\weapons\closure\ebr-3", db-4, 1,10}; /// custom made sounds
			soundClosure[]={closure1,0.5, closure2,0.5, closure3,0.5}; /// custom made sounds
		};

		class StandardSound: BaseSoundModeType
		{
			begin1[] = {"x\addons\a2_epoch_weapons\m16\sound\m16_single1", db5, 1,1000}; /// custom made sounds
			begin2[] = {"x\addons\a2_epoch_weapons\m16\sound\m16_single2", db5, 1,1000}; /// custom made sounds
			begin3[] = {"x\addons\a2_epoch_weapons\m16\sound\m16_single3", db5, 1,1000}; /// custom made sounds
			soundBegin[] = {begin1,0.5, begin2,0.5, begin3,0.5}; /// custom made sounds
		};

		class SilencedSound: BaseSoundModeType
		{
			begin1[]={"A3\sounds_f\weapons\silenced\silent-05", db-2, 1,200};
			begin2[]={"A3\sounds_f\weapons\silenced\silent-09", db-2, 1,200};
			begin3[]={"A3\sounds_f\weapons\silenced\silent-10", db-2, 1,200};
			soundBegin[]={begin1,0.333, begin2,0.333, begin3,0.333};
		};

		reloadTime = 0.075; /// means some 625 rounds per minute
		dispersion = 0.00087; /// A bit less than 3 MOA

		recoil = "recoil_single_m16_epoch"; /// defined in cfgRecoils
		recoilProne = "recoil_single_prone_m16_epoch"; /// defined in cfgRecoils

		minRange = 2; minRangeProbab = 0.5; 	/// Task Force Balance black magic - this is the probability which AI thinks it would hit target at set range with
		midRange = 200; midRangeProbab = 0.7; 	/// it is no real probability of hit, just used for AI to compute if the shot is worth to take - AI chooses highest
		maxRange = 400; maxRangeProbab = 0.3; 	/// probability of the weapon, does some calculation and compares it with calculated probability of other weapons
	};

	class Burst: Mode_Burst /// Pew-pew-pew-pew-pew
	{
		sounds[] = {		/// the new parameter to distinguish muzzle accessories type
			StandardSound, // default zvuk
			SilencedSound // silenced zvuk
		};

		class BaseSoundModeType
		{

			weaponSoundEffect  = "m16Epoch"; /// custom made sounds

			closure1[]={"A3\sounds_f\weapons\closure\ebr-1", db-4, 1,10}; /// custom made sounds
			closure2[]={"A3\sounds_f\weapons\closure\ebr-2", db-4, 1,10}; /// custom made sounds
			closure3[]={"A3\sounds_f\weapons\closure\ebr-3", db-4, 1,10}; /// custom made sounds
			soundClosure[]={closure1,0.5, closure2,0.5, closure3,0.5}; /// custom made sounds
		};

		class StandardSound: BaseSoundModeType
		{
			begin1[] = {"x\addons\a2_epoch_weapons\m16\sound\m16_loop1", db3, 1,1200}; /// custom made sounds
			begin2[] = {"x\addons\a2_epoch_weapons\m16\sound\m16_loop2", db3, 1,1200}; /// custom made sounds
			begin3[] = {"x\addons\a2_epoch_weapons\m16\sound\m16_loop3", db3, 1,1200}; /// custom made sounds
			soundBegin[] = {begin1,0.5, begin2,0.5, begin3,0.5}; /// custom made sounds
		};

		class SilencedSound: BaseSoundModeType
		{
			begin1[]={"A3\sounds_f\weapons\silenced\silent-05", db-2, 1,200};
			begin2[]={"A3\sounds_f\weapons\silenced\silent-09", db-2, 1,200};
			begin3[]={"A3\sounds_f\weapons\silenced\silent-10", db-2, 1,200};
			soundBegin[]={begin1,0.333, begin2,0.333, begin3,0.333};
		};

		reloadTime = 0.075; /// means some 625 rounds per minute
		dispersion = 0.00087; /// A bit less than 3 MOA

		recoil = "recoil_single_m16_epoch"; /// defined in cfgRecoils
		recoilProne = "recoil_single_prone_m16_epoch"; /// defined in cfgRecoils

		burst=3;
		minRange = 0; minRangeProbab = 0.9;
		midRange = 15; midRangeProbab = 0.7;
		maxRange = 30; maxRangeProbab = 0.1;

		aiRateOfFire = 0.000001;
	};


//////////////////////////////////////////////////// OPTICS //////////////////////////////////////////////////

	class single_medium_optics1: Single /// Pew for AI with collimator sights
	{
		requiredOpticType = 1;
		showToPlayer = 0;

		minRange = 2; minRangeProbab = 0.2;
		midRange = 450; midRangeProbab = 0.7;
		maxRange = 600; maxRangeProbab = 0.2;

		aiRateOfFire = 6;
		aiRateOfFireDistance = 600;
	};

	class single_far_optics2: single_medium_optics1	/// Pew for AI with better sights
	{
		requiredOpticType = 2;
		showToPlayer = 0;

		minRange = 100; minRangeProbab = 0.1;
		midRange = 500; midRangeProbab = 0.6;
		maxRange = 700; maxRangeProbab = 0.05;

		aiRateOfFire = 8;
		aiRateOfFireDistance = 700;
	};

	/* class Test_GL_F: UGL_F /// Some grenade launcher to have some more fun
	{
		displayName = "Test grenade launcher";
		descriptionShort = "TGL";
		useModelOptics = false;
		useExternalOptic = false; /// Doesn't use optics from the attachment, has it's own
		magazines[] = {1Rnd_HE_Grenade_shell};
		cameraDir = "OP_look";
		discreteDistance[] = {100, 200, 300, 400};
		discreteDistanceCameraPoint[] = {"OP_eye", "OP_eye2", "OP_eye3", "OP_eye4"}; /// the angle of gun changes with zeroing
		discreteDistanceInitIndex = 1; /// 200 is the default zero
	};
	*/
	aiDispersionCoefY=6.0; /// AI should have some degree of greater dispersion for initial shoots
	aiDispersionCoefX=4.0; /// AI should have some degree of greater dispersion for initial shoots
	drySound[]={"A3\sounds_f\weapons\Other\dry_1", db-5, 1, 10}; /// custom made sounds
	reloadMagazineSound[]={"a3\sounds_f\weapons\Reloads\new_trg",db-8,1, 30}; /// custom made sounds
};

class m16_EPOCH: m16_Epoch_Base
{
	scope = 2; /// should be visible and useable in game
	displayName = "M16"; /// some name
	model = "\x\addons\a2_epoch_weapons\m16\m16_epoch.p3d"; /// path to model

	picture = "\x\addons\a2_epoch_weapons\m16\data\UI\gear_m16_x_ca.paa"; /// different accessories have M, S, T instead of X
	UiPicture = "\A3\Weapons_F\Data\UI\icon_mg_ca.paa"; /// weapon with grenade launcher should be marked such way

	weaponInfoType = "RscWeaponZeroing"; /// display with zeroing is good for iron sights

	muzzles[] = {this}; /// to be able to switch between bullet muzzle and TGL

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 100; /// some rough estimate
	};
};

class m16Red_EPOCH: m16_Epoch_Base
{
	scope = 2; /// should be visible and useable in game
	displayName = "M16 (Red)"; /// some name
	model = "\x\addons\a2_epoch_weapons\m16\m16Red_epoch.p3d"; /// path to model

	picture = "\x\addons\a2_epoch_weapons\m16\data\UI\gear_m16_x_ca.paa"; /// different accessories have M, S, T instead of X
	UiPicture = "\A3\Weapons_F\Data\UI\icon_mg_ca.paa"; /// weapon with grenade launcher should be marked such way

	weaponInfoType = "RscWeaponZeroing"; /// display with zeroing is good for iron sights

	muzzles[] = {this}; /// to be able to switch between bullet muzzle and TGL

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 100; /// some rough estimate
	};
};

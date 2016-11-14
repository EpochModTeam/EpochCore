/*
	Author: Aaron Clark - EpochMod.com

    Contributors:

	Description:
	Custom ammo and effects

    Licence:
    Arma Public License Share Alike (APL-SA) - https://www.bistudio.com/community/licenses/arma-public-license-share-alike

    Github:
    https://github.com/EpochModTeam/Epoch/tree/release/Sources/epoch_config/Configs/CfgAmmo.hpp
*/
/*[[[cog from arma_config_tools import *; json_to_arma()]]]*/
class CfgAmmo
{
    class Default;
    class BulletCore;
    class BulletBase;
    class B_762x39_Ball : BulletBase
    {
        hit = 12;
        indirectHit = 0;
        indirectHitRange = 0;
        cartridge = "FxCartridge_762";
        visibleFire = 6;
        audibleFire = 9;
        cost = 1.2;
        airLock = true;
        typicalSpeed = 820;
        caliber = 1.6;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        tracerScale = 1.0;
        tracerStartTime = 0.0075;
        tracerEndTime = 5;
        airFriction = -0.001;
        class CamShakeFire
        {
            power = 0.2;
            duration = 0.03;
            frequency = 0.5;
            distance = 0.01;
        };
        class CamShakePlayerFire
        {
            power = 0.2;
            duration = 0.03;
            frequency = 0.5;
            distance = 0.01;
        };
    };
    class B_127x108_Ball : BulletBase
    {
        hit = 30;
        indirectHit = 0;
        indirectHitRange = 0;
        cartridge = "FxCartridge_127";
        visibleFire = 48;
        audibleFire = 48;
        visibleFireTime = 3;
        cost = 5;
        airLock = 1;
        caliber = 2.8;
        typicalSpeed = 820;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
        tracerScale = 1.5;
        tracerStartTime = 0.075;
        tracerEndTime = 1;
        airFriction = -0.00056;
        class CamShakeFire
        {
            power = "(13^0.5)";
            duration = "((round (13^0.5))*0.2 max 0.2)";
            frequency = 20;
            distance = "((13^0.5)*3)";
        };
        class CamShakePlayerFire
        {
            power = 13;
            duration = "((round (13^0.25))*0.2 max 0.2)";
            frequency = 20;
            distance = 1;
        };
    };
    class B_127x108_APDS : B_127x108_Ball
    {
        hit = 60;
        indirectHit = 0;
        indirectHitRange = 0;
        caliber = 3.6;
        deflecting = 10;
        typicalSpeed = 1060;
        airFriction = -0.00036;
        visibleFire = 10;
        audibleFire = 15;
        cost = 15;
        class CamShakeExplode
        {
            power = "(20^0.5)";
            duration = "((round (20^0.5))*0.2 max 0.2)";
            frequency = 20;
            distance = "((20^0.5)*3)";
        };
        class CamShakeHit
        {
            power = 20;
            duration = "((round (20^0.25))*0.2 max 0.2)";
            frequency = 20;
            distance = 1;
        };
    };
    class E_22X44_ball : BulletBase
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
    class E_45_ball : BulletBase
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
    class spear_ball : BulletBase
    {
        hit = 20;
        timeToLive = 30;
        cost = 1;
        indirectHit = 0;
        indirectHitRange = 0;
        cartridge = "FxCartridge_9mm";
        typicalSpeed = 185;
        airFriction = -0.001;
        waterFriction = 0;
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
    class K_762_ball : BulletBase
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
    class K_556_ball : BulletBase
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
    class DirectionalBombBase;
    class Spike_TRAP_AMMO_EPOCH : DirectionalBombBase
    {
        hit = 10;
        indirectHit = 5;
        indirectHitRange = 3;
        model = "\x\addons\a3_epoch_assets_3\CfgVehicles\swing_box.p3d";
        mineModelDisabled = "\x\addons\a3_epoch_assets_3\CfgVehicles\swing_box.p3d";
        defaultMagazine = "APERSTripMine_Wire_Mag";
        icon = "iconExplosiveAP";
        soundHit[] = {"a3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_2",2.5,1,150};
        soundTrigger[] = {"a3\sounds_f\arsenal\sfx\bullet_hits\body_08",0.56234133,1,40};
        soundActivation[] = {"",1,1,40};
        minimumSafeZone = 0;
        explosionAngle = 360;
        explosionEffects = "";
        CraterEffects = "CraterSpike";
        whistleDist = 8;
        cost = 200;
        mineTrigger = "RangeTriggerBounding";
        mineInconspicuousness = 100;
        class CamShakeHit
        {
            power = 1;
            duration = 1;
            frequency = 20;
        };
    };
    class Metal_TRAP_AMMO_EPOCH : DirectionalBombBase
    {
        hit = 15;
        indirectHit = 8;
        indirectHitRange = 4;
        model = "\x\addons\a3_epoch_assets_3\CfgVehicles\swing_box.p3d";
        mineModelDisabled = "\x\addons\a3_epoch_assets_3\CfgVehicles\swing_box.p3d";
        defaultMagazine = "APERSTripMine_Wire_Mag";
        icon = "iconExplosiveAP";
        soundHit[] = {"a3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_2",2.5,1,150};
        soundTrigger[] = {"a3\sounds_f\arsenal\sfx\bullet_hits\body_08",0.56234133,1,40};
        soundActivation[] = {"a3\sounds_f\vehicles\boat\noises\Light_metal_boat_crash_wood_02",1,1,40};
        minimumSafeZone = 0;
        explosionAngle = 360;
        explosionEffects = "";
        CraterEffects = "CraterMetal";
        whistleDist = 8;
        cost = 200;
        mineTrigger = "RangeTriggerBounding";
        mineInconspicuousness = 100;
        class CamShakeHit
        {
            power = 1.2;
            duration = 1;
            frequency = 20;
        };
    };
    class B_EnergyPack : BulletBase
    {
        hit = 0;
        indirectHit = 0;
        indirectHitRange = 0;
        cartridge = "FxCartridge_9mm";
        caliber = 2.6;
        deflecting = 45;
        visibleFire = 5;
        audibleFire = 9;
        cost = 100;
        typicalSpeed = 280;
        airFriction = -0.0018;
    };
    class B_Hatchet : BulletBase
    {
        hit = 3;
        indirectHit = 0;
        indirectHitRange = 0;
        cartridge = "FxCartridge_9mm";
        caliber = 2.6;
        deflecting = 45;
        visibleFire = 5;
        audibleFire = 9;
        cost = 100;
        typicalSpeed = 10;
        airFriction = -0.0018;
        muzzleEffect = "";
        minRange = 1;
        minRangeProbab = 0.8;
        midRange = 2;
        midRangeProbab = 1.5;
        maxRange = 3;
        maxRangeProbab = 2.5;
        explosive = 0;
        simulationStep = 0.001;
        timeToLive = 0.03;
        soundHit[] = {"","db-90",1};
        soundEngine[] = {"","db-80",4};
    };
    class B_Swing : BulletBase
    {
        hit = 8;
        indirectHit = 0;
        indirectHitRange = 0;
        cartridge = "FxCartridge_9mm";
        simulation = "shotRocket";
        effectsMissileInit = "";
        effectsMissile = "EmptyEffect";
        model = "\x\addons\a3_epoch_assets_3\CfgVehicles\swing_box.p3d";
        caliber = 0.26;
        deflecting = 0;
        visibleFire = 0.1;
        audibleFire = 1;
        cost = 100;
        typicalSpeed = 275;
        airFriction = -0.0018;
        minRange = 1;
        minRangeProbab = 0.8;
        midRange = 2;
        midRangeProbab = 1.5;
        maxRange = 3;
        maxRangeProbab = 2.5;
        explosive = 0;
        simulationStep = 0.001;
        timeToLive = 0.005;
        soundHit[] = {"","db-90",1};
        soundEngine[] = {"","db-80",4};
    };
    class B_Stick : BulletBase
    {
        hit = 2;
        indirectHit = 0;
        indirectHitRange = 0;
        cartridge = "FxCartridge_9mm";
        simulation = "shotRocket";
        effectsMissileInit = "";
        effectsMissile = "EmptyEffect";
        model = "\x\addons\a3_epoch_assets_3\CfgVehicles\swing_box.p3d";
        caliber = 0.26;
        deflecting = 0;
        visibleFire = 0.1;
        audibleFire = 1;
        cost = 100;
        typicalSpeed = 275;
        airFriction = -0.0018;
        minRange = 1;
        minRangeProbab = 0.8;
        midRange = 2;
        midRangeProbab = 1.5;
        maxRange = 3;
        maxRangeProbab = 2.5;
        explosive = 0;
        simulationStep = 0.001;
        timeToLive = 0.004;
        soundHit[] = {"","db-90",1};
        soundEngine[] = {"","db-80",4};
    };
    class PipeBombBase;
    class Sapper_Charge_Ammo : PipeBombBase
    {
        hit = 50;
        indirectHit = 10;
        indirectHitRange = 5;
        model = "\x\addons\a3_epoch_assets_3\CfgVehicles\swing_box.p3d";
        mineModelDisabled = "";
        defaultMagazine = "IEDLandSmall_Remote_Mag";
        soundHit[] = {"A3\sounds_f\weapons\Mines\mine_debris_6",2.5118864,1,1500};
        soundTrigger[] = {"A3\Sounds_F\weapons\mines\mech_trigger_1",0.56234133,1,40};
        soundActivation[] = {"A3\Sounds_F\weapons\mines\mech_activate_mine_1",0.56234133,1,40};
        CraterEffects = "IEDMineSmallLandCrater";
        explosionEffects = "IEDMineSmallExplosion";
        whistleDist = 6;
        cost = 200;
        mineInconspicuousness = 50;
        mineTrigger = "RemoteTrigger";
    };
    class SapperB_Charge_Ammo : PipeBombBase
    {
        hit = 1500;
        indirectHit = 1500;
        indirectHitRange = 5;
        model = "\x\addons\a3_epoch_assets_3\CfgVehicles\swing_box.p3d";
        mineModelDisabled = "";
        defaultMagazine = "SatchelCharge_Remote_Mag";
        soundHit[] = {"A3\Sounds_F\weapons\Mines\mine_debris_2",3.1622777,1,1500};
        ExplosionEffects = "MineNondirectionalExplosion";
        CraterEffects = "MineNondirectionalCrater";
        whistleDist = 10;
        cost = 200;
        mineInconspicuousness = 50;
        mineTrigger = "RemoteTrigger";
    };
    class GrenadeHand;
    class SmokeShellCustom : GrenadeHand
    {
        model = "\x\addons\a3_epoch_assets_3\CfgVehicles\swing_box.p3d";
        hit = 0;
        indirectHit = 0;
        indirectHitRange = 0;
        typicalspeed = 22;
        cost = 100;
        simulation = "shotSmokeX";
        explosive = 0;
        deflecting = 60;
        explosionTime = 2;
        timeToLive = 60;
        fuseDistance = 0;
        soundHit[] = {"",0,1};
        SmokeShellSoundLoop1[] = {"A3\Sounds_F\weapons\smokeshell\smoke_loop1",0.12589253,1,70};
        SmokeShellSoundLoop2[] = {"A3\Sounds_F\weapons\smokeshell\smoke_loop2",0.12589253,1,70};
        grenadeFireSound[] = {};
        grenadeBurningSound[] = {"SmokeShellSoundLoop1",0.5,"SmokeShellSoundLoop2",0.5};
        impactGroundSoft[] = {};
        impactGroundHard[] = {};
        impactIron[] = {};
        impactArmor[] = {};
        impactBuilding[] = {};
        impactFoliage[] = {};
        impactWood[] = {};
        impactGlass[] = {};
        impactGlassArmored[] = {};
        impactConcrete[] = {};
        impactRubber[] = {};
        impactPlastic[] = {};
        impactDefault[] = {};
        impactMetal[] = {};
        impactMetalplate[] = {};
        impactWater[] = {};
        effectsSmoke = "SmokeShellWhiteEffect";
        whistleDist = 0;
        smokeColor[] = {0.039,0.278,0,0.5};
    };
    class B_Test_Caseless : BulletBase
    {
        hit = 10;
        indirectHit = 0;
        indirectHitRange = 0;
        cartridge = "FxCartridge_65_caseless";
        visibleFire = 5;
        audibleFire = 8;
        cost = 1.2;
        airLock = 1;
        typicalSpeed = 820;
        caliber = 1.0;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        tracerScale = 1.0;
        tracerStartTime = 0.05;
        tracerEndTime = 1;
        airFriction = -0.00096;
        class CamShakeFire
        {
            power = 0;
            duration = 0;
            frequency = 0;
            distance = 0;
        };
        class CamShakePlayerFire
        {
            power = 0;
            duration = 0;
            frequency = 0;
            distance = 0;
        };
    };
    class ChainSaw_Bullet : BulletBase
    {
        hit = 5;
        indirectHit = 0;
        indirectHitRange = 0;
        cartridge = "FxCartridge_65_caseless";
        visibleFire = 5;
        audibleFire = 8;
        cost = 1.2;
        airLock = 0;
        typicalSpeed = 100;
        caliber = 1.0;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        tracerScale = 1.0;
        tracerStartTime = 0.05;
        tracerEndTime = 1;
        airFriction = -0.00096;
        class CamShakeFire
        {
            power = 0;
            duration = 0;
            frequency = 0;
            distance = 0;
        };
        class CamShakePlayerFire
        {
            power = 0;
            duration = 0;
            frequency = 0;
            distance = 0;
        };
        minRange = 1;
        minRangeProbab = 0.8;
        midRange = 2;
        midRangeProbab = 1.5;
        maxRange = 2.5;
        maxRangeProbab = 2;
        explosive = 0;
        simulationStep = 0.001;
        timeToLive = 0.03;
        soundHit[] = {"","db-90",1};
        soundEngine[] = {"","db-80",4};
    };
};

/*[[[end]]]*/

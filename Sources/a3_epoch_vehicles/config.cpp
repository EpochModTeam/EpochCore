class DefaultEventhandlers;
class CfgPatches
{
	class A3_epoch_vehicles
	{
		units[] = {"jetski_epoch"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
		epochVersion = "0.4.0.0";
	};
};

class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		Driver_Jetski = "Driver_Jetski";
		Driver_Ebike = "Driver_Ebike";
		Cargo_Jetski = "Cargo_Jetski";
	};

};

class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{

		class Crew;
		class AmovPercMstpSnonWnonDnon;
		class PreciseCrew: Crew
		{
			head = "headNo";
		};

		class Driver_Jetski: Crew
		{
			file = "\x\addons\a3_epoch_vehicles\cargoposes\jetski_driver.rtm";
			interpolateTo[] = {"Unconscious",1};
			speed = -30;
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
		};

		class Driver_Ebike: Crew
		{
			file = "\x\addons\a3_epoch_vehicles\cargoposes\ebike_driver.rtm";
			interpolateTo[] = {"Unconscious",1};
			speed = -30;
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
		};

		class Cargo_Jetski: Crew
		{
			file = "\x\addons\a3_epoch_vehicles\cargoposes\jetski_cargo.rtm";
			interpolateTo[] = {"Unconscious",1};
			speed = -30;
			disableWeapons = 1;
			leftHandIKCurve[] = {0};
			rightHandIKCurve[] = {0};
		};
	};
};

class CfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle
	{
		class HitPoints;
	};
	class Car_F: Car
	{
		class HitPoints
		{
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
			class HitGlass1;
		};
		class EventHandlers;
	};
	class Ship_F
	{
		class Eventhandlers: DefaultEventhandlers{};
		transportMaxMagazines = 100;
		transportMaxWeapons = 20;
		transportMaxBackpacks = 4;
	};
	class jetski_epoch: Ship_F
	{
		author = "Kiory";
		_generalMacro = "jetski_epoch";
		displayName = "Blue Jetski";
		accuracy = 0.5;
		attenuationEffectType = "OpenCarAttenuation";
		scope = 2;
		model = "\x\addons\a3_epoch_vehicles\Jetski.p3d";
		picture = "\A3\boat_F\Boat_Transport_01\data\UI\Boat_Transport_01_CA.paa";
		Icon = "\A3\boat_F\Boat_Transport_01\data\UI\map_Boat_Transport_01_CA.paa";
		cost = 50000;
		leftEngineEffect = "LEngEffectsSmall";
		rightEngineEffect = "REngEffectsSmall";
		class TransportItems
		{};
		class HitPoints
		{
			class Hitleftmirror
			{
				armor = 0.7;
				material = 50;
				name = "left_mirror";
				visual = "";
				passThrough = 1;
			};

			class Hitrighttmirror
			{
				armor = 0.7;
				material = 50;
				name = "right_mirror";
				visual = "";
				passThrough = 1;
			};
			class HitEngine
			{
				armor = 0.12;
				material = -1;
				name = "Engine";
				visual = "";
				passThrough = 1;
			};

			class HitHull
			{
				armor = 1;
				material = 50;
				name = "hull";
				visual = "zbytek";
				passThrough = 1;
				explosionShielding = 1;
			};


		};
		insideSoundCoef = 0.5;
		soundEngineOnInt[] = {"A3\Sounds_F\vehicles\boat\Boat_Transport_01\Boat_Transport_01_start",1.0,1.0};
		soundEngineOnExt[] = {"A3\Sounds_F\vehicles\boat\Boat_Transport_01\Boat_Transport_01_start",1.0,1.0,150};
		soundEngineOffInt[] = {"A3\Sounds_F\vehicles\boat\Boat_Transport_01\Boat_Transport_01_stop",1.0,1.0};
		soundEngineOffExt[] = {"A3\Sounds_F\vehicles\boat\Boat_Transport_01\Boat_Transport_01_stop",1.0,1.0,150};
		buildCrash0[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_01",1.7782794,1,200};
		buildCrash1[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_02",1.7782794,1,200};
		buildCrash2[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_03",1.7782794,1,200};
		buildCrash3[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_04",1.7782794,1,200};
		soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
		WoodCrash0[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_01",1.7782794,1,200};
		WoodCrash1[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_02",1.7782794,1,200};
		WoodCrash2[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_03",1.7782794,1,200};
		WoodCrash3[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_04",1.7782794,1,200};
		WoodCrash4[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_05",1.7782794,1,200};
		WoodCrash5[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_06",1.7782794,1,200};
		soundWoodCrash[] = {"woodCrash0",0.166,"woodCrash1",0.166,"woodCrash2",0.166,"woodCrash3",0.166,"woodCrash4",0.166,"woodCrash5",0.166};
		ArmorCrash0[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_01",1.7782794,1,200};
		ArmorCrash1[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_02",1.7782794,1,200};
		ArmorCrash2[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_03",1.7782794,1,200};
		ArmorCrash3[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_04",1.7782794,1,200};
		soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
		class Sounds
		{
			class IdleOut
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\Boat_Transport_01\Boat_Transport_01_idle_1",0.70794576,1.0,150};
				frequency = "0.95	+	((rpm/	1200) factor[(100/	1200),(200/	1200)])*0.15";
				volume = "engineOn*(((rpm/	1200) factor[(0/	1200),(30/	1200)])	*	((rpm/	1200) factor[(500/	1200),(300/	1200)]))";
			};
			class Engine
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\Boat_Transport_01\Boat_Transport_01_low2",1.0,1.2,300};
				frequency = "0.95	+	((rpm/	1200) factor[(300/	1200),(600/	1200)])*0.2";
				volume = "engineOn*(((rpm/	1200) factor[(200/	1200),(300/	1200)])	*	((rpm/	1200) factor[(600/	1200),(400/	1200)]))";
			};
			class EngineMidOut
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\Boat_Transport_01\Boat_Transport_01_mid2",1.4125376,0.6,400};
				frequency = "0.95	+	((rpm/	1200) factor[(600/	1200),(900/	1200)])*0.2";
				volume = "engineOn*(((rpm/	1200) factor[(350/	1200),(500/	1200)])	*	((rpm/	1200) factor[(1200/	1200),(900/	1200)]))";
			};
			class EngineMaxOut
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\Boat_Transport_01\Boat_Transport_01_high2",1.9952624,1.0,500};
				frequency = "0.95	+	((rpm/	1200) factor[(700/	1200),(1000/	1200)])*0.3";
				volume = "engineOn*((rpm/	1200) factor[(600/	1200),(1200/	1200)])";
			};
			class WaternoiseOutW0
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-0-speed1",1.0,1.0,100};
				frequency = "1";
				volume = "(speed factor[4, 1])";
			};
			class WaternoiseOutW1
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-20-speed",1.0,1.0,150};
				frequency = "1";
				volume = "((speed factor[2, 6]) min (speed factor[6, 4]))";
			};
			class WaternoiseOutW2
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-50-speed",1.0,1.0,300};
				frequency = "1";
				volume = "(speed factor[3, 9])";
			};
		};

		class RenderTargets
		{
			class Left_Mirror
			{
				renderTarget = "rendertarget0";

				class CameraView1
				{
					pointPosition = "PIP0_pos";
					pointDirection = "PIP0_dir";
					renderVisionMode = 0;
					renderQuality = 2;
					fov = 0.7;
				};
			};

			class Right_Mirror
			{
				renderTarget = "rendertarget1";

				class CameraView2
				{
					pointPosition = "PIP1_pos";
					pointDirection = "PIP1_dir";
					renderVisionMode = 0;
					renderQuality = 2;
					fov = 0.7;
				};
			};

		};

		driverLeftHandAnimName = "handle";
		driverRightHandAnimName = "handle";
		driverAction = "Driver_Jetski";
		weapons[] = {"MiniCarHorn"};
		cargoAction[] = {"Cargo_Jetski"};
		getInAction = "GetInLow";
		getOutAction = "GetOutLow";
		cargoGetInAction[] = {"GetInLow"};
		cargoGetOutAction[] = {"GetOutLow"};
		castDriverShadow = 1;
		castCargoShadow = 1;
		ejectDeadDriver = 1;
		ejectDeadCargo = 1;
		extCameraPosition[] = {0,1.5,-4.5};
		maxSpeed = 190;
		turnCoef = 0.1;
		simulation = "shipX";
		overSpeedBrakeCoef = 0;
		enginePower = 220;
		engineShiftY = 0;
		waterLeakiness = 0;
		waterResistanceCoef = 0.015;
		thrustDelay = 2;
		waterLinearDampingCoefY = 10;
		waterLinearDampingCoefX = 0.2;
		waterAngularDampingCoef = 1.5;
		rudderForceCoef = 0.06;
		rudderForceCoefAtMaxSpeed = 0.001;
		enableGPS = 1;
		transportSoldier = 1;
		supplyRadius = 10;
		idleRpm = 200;
		redRpm = 1200;
		fuelCapacity = 5;
		hiddenSelections[] = {"num_1","num_2","num_3","num_4","num_5"};
		slingLoadMaxCargoMass = 4000;
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1"};
		slingLoadMemoryPoint = "slingLoad0";

		/*
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) execVM ""\x\addons\a3_epoch_vehicles\scripts\digi.sqf"";";
		};
		*/

		class UserActions
		{
			class PushTheThing
			{
				displayNameDefault = "Push";
				displayName = "Push";
				position = "";
				radius = 5;
				onlyForPlayer = 1;
				condition = "alive this && crew this isEqualTo [] && local this && isTouchingGround player";
				statement = "_vel = velocity this; _dir = getDir player; this setVelocity[(_vel select 0)+(sin _dir * 2),(_vel select 1)+(cos _dir * 2),(_vel select 2)]; ";
			};
		};

		class Exhausts
		{
			class Exhaust1
			{
				position = "exhaust";
				direction = "exhaust_dir";
				effect = "ExhaustsEffect";
			};
		};

		class complexGearbox
		{
			GearboxRatios[] = {"R1",-0.782,"N",0,"D1",2.0,"D2",1.85,"D3",1.75};
			TransmissionRatios[] = {"High",1.0};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
		};

		armor = 15;
		class Turrets{};
		class Library
		{
			libTextDesc = "$STR_A3_CfgVehicles_Rubber_duck_base_Library0";
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"A3\boat_f\Boat_Transport_01\data\Boat_Transport_01.rvmat","A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_damage.rvmat","A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_damage.rvmat"};
		};
	};

	class ebike_epoch: Car_F
	{
		mapSize = 3.56;
		author = "Kiory";
		scope = 2;
		displayName = "Electric Motorcycle";
		model = "\x\addons\a3_epoch_vehicles\ebike.p3d";
		icon = "\A3\Soft_F\Quadbike_01\Data\UI\map_Quad_CA.paa";
		picture = "\A3\Soft_F\Quadbike_01\Data\UI\Quadbike_01_CA.paa";
		armor = 30;
		damageResistance = 0.00913;
		cost = 100000;
		attenuationEffectType = "OpenCarAttenuation";
		soundGetIn[] = {"",0.056234132,1};
		soundGetOut[] = {"",0.056234132,1,40};
		soundDammage[] = {"",0.56234133,1};
		soundEngineOnInt[] = {"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_start",0.56234133,1.0};
		soundEngineOnExt[] = {"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_start",0.56234133,1.0,200};
		soundEngineOffInt[] = {"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_stop",0.56234133,1.0};
		soundEngineOffExt[] = {"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_stop",0.56234133,1.0,200};
		buildCrash0[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_01",1.0,1,100};
		buildCrash1[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_02",1.0,1,100};
		buildCrash2[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_03",1.0,1,100};
		buildCrash3[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_04",1.0,1,100};
		soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
		WoodCrash0[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_01",1.0,1,100};
		WoodCrash1[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_02",1.0,1,100};
		WoodCrash2[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_03",1.0,1,100};
		WoodCrash3[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_04",1.0,1,100};
		WoodCrash4[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_05",1.0,1,100};
		WoodCrash5[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_06",1.0,1,100};
		soundWoodCrash[] = {"woodCrash0",0.166,"woodCrash1",0.166,"woodCrash2",0.166,"woodCrash3",0.166,"woodCrash4",0.166,"woodCrash5",0.166};
		ArmorCrash0[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_01",1.0,1,100};
		ArmorCrash1[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_02",1.0,1,100};
		ArmorCrash2[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_03",1.0,1,100};
		ArmorCrash3[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_04",1.0,1,100};
		soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
		Crash0[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_01",1.7782794,1,100};
		Crash1[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_02",1.7782794,1,100};
		Crash2[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_03",1.7782794,1,100};
		Crash3[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_04",1.7782794,1,100};
		Crash4[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_05",1.7782794,1,100};
		soundCrashes[] = {"Crash0",0.2,"Crash1",0.2,"Crash2",0.2,"Crash3",0.2,"Crash4",0.2};
		class Sounds
		{
			class Idle_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_rpm1",0.31622776,1,100};
				frequency = 1.0;
				volume = "engineOn*camPos*(((rpm/	2000) factor[(200/	2000),(400/	2000)])	*	((rpm/	2000) factor[(750/	2000),( 600/	2000)]))";
			};
			class Engine
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_rpm2",0.35481337,1,200};
				frequency = "0.9	+	((rpm/	2000) factor[(600/	2000),(1000/	2000)])*0.2";
				volume = "engineOn*camPos*(((rpm/	2000) factor[(600/	2000),(730/	2000)])	*	((rpm/	2000) factor[(1020/	2000),( 800/	2000)]))";
			};
			class Engine1_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_rpm3",0.39810717,1,200};
				frequency = "0.9	+	((rpm/	2000) factor[(800/	2000),(1300/	2000)])*0.2";
				volume = "engineOn*camPos*(((rpm/	2000) factor[(780/	2000),(1000/	2000)])	*	((rpm/	2000) factor[(1300/	2000),( 1100/	2000)]))";
			};
			class Engine2_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_rpm4",0.4466836,1,250};
				frequency = "0.9	+	((rpm/	2000) factor[(1080/	2000),(1560/	2000)])*0.2";
				volume = "engineOn*camPos*(((rpm/	2000) factor[(1100/	2000),(1280/	2000)])	*	((rpm/	2000) factor[(1570/	2000),( 1380/	2000)]))";
			};
			class Engine3_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_rpm5",0.5011872,1,250};
				frequency = "0.95	+	((rpm/	2000) factor[(1380/	2000),(1860/	2000)])*0.2";
				volume = "engineOn*camPos*(((rpm/	2000) factor[(1350/	2000),(1550/	2000)])	*	((rpm/	2000) factor[(1870/	2000),( 1630/	2000)]))";
			};
			class Engine4_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_rpm7",0.56234133,1,300};
				frequency = "0.95	+	((rpm/	2000) factor[(1630/	2000),(2000/	2000)]) *0.2";
				volume = "engineOn*camPos*((rpm/	2000) factor[(1650/	2000),(1900/	2000)])";
			};
			class Idle_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_rpm1",0.25118864,1};
				frequency = 1.0;
				volume = "engineOn*(1-camPos)*(((rpm/	2000) factor[(200/	2000),(400/	2000)])	*	((rpm/	2000) factor[(750/	2000),( 600/	2000)]))";
			};
			class Engine_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_rpm2",0.2818383,1};
				frequency = "0.9	+	((rpm/	2000) factor[(600/	2000),(1000/	2000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	2000) factor[(600/	2000),(730/	2000)])	*	((rpm/	2000) factor[(1020/	2000),( 800/	2000)]))";
			};
			class Engine1_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_rpm3",0.31622776,1};
				frequency = "0.9	+	((rpm/	2000) factor[(800/	2000),(1300/	2000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	2000) factor[(780/	2000),(1000/	2000)])	*	((rpm/	2000) factor[(1300/	2000),( 1100/	2000)]))";
			};
			class Engine2_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_rpm4",0.35481337,1};
				frequency = "0.9	+	((rpm/	2000) factor[(1080/	2000),(1560/	2000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	2000) factor[(1100/	2000),(1280/	2000)])	*	((rpm/	2000) factor[(1570/	2000),( 1380/	2000)]))";
			};
			class Engine3_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_rpm5",0.39810717,1};
				frequency = "0.95	+	((rpm/	2000) factor[(1380/	2000),(1860/	2000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	2000) factor[(1350/	2000),(1550/	2000)])	*	((rpm/	2000) factor[(1870/	2000),( 1630/	2000)]))";
			};
			class Engine4_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_rpm7",0.4466836,1};
				frequency = "0.95	+	((rpm/	2000) factor[(1630/	2000),(2000/	2000)]) *0.2";
				volume = "engineOn*(1-camPos)*((rpm/	2000) factor[(1650/	2000),(1900/	2000)])";
			};
			class IdleThrust_Int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-exhaust_rpm1",0.56234133,1};
				frequency = 1.0;
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2000) factor[(200/	2000),(400/	2000)])	*	((rpm/	2000) factor[(750/	2000),( 600/	2000)]))";
			};
			class EngineThrust_Int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-exhaust_rpm2",0.63095737,1};
				frequency = "0.9	+	((rpm/	2000) factor[(600/	2000),(1000/	2000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2000) factor[(600/	2000),(730/	2000)])	*	((rpm/	2000) factor[(1020/	2000),( 800/	2000)]))";
			};
			class Engine1_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-exhaust_rpm3",0.70794576,1};
				frequency = "0.9	+	((rpm/	2000) factor[(800/	2000),(1300/	2000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2000) factor[(780/	2000),(1000/	2000)])	*	((rpm/	2000) factor[(1300/	2000),( 1100/	2000)]))";
			};
			class Engine2_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-exhaust_rpm4",0.7943282,1};
				frequency = "0.9	+	((rpm/	2000) factor[(1080/	2000),(1560/	2000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2000) factor[(1100/	2000),(1280/	2000)])	*	((rpm/	2000) factor[(1570/	2000),( 1380/	2000)]))";
			};
			class Engine3_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-exhaust_rpm5",0.8912509,1};
				frequency = "0.95	+	((rpm/	2000) factor[(1380/	2000),(1860/	2000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2000) factor[(1350/	2000),(1550/	2000)])	*	((rpm/	2000) factor[(1870/	2000),( 1630/	2000)]))";
			};
			class Engine4_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-exhaust_rpm7",1.0,1};
				frequency = "0.95	+	((rpm/	2000) factor[(1630/	2000),(2000/	2000)]) *0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2000) factor[(1650/	2000),(1900/	2000)])";
			};
			class TiresRockOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",1.0,1.0,60};
				frequency = "1";
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",1.0,1.0,60};
				frequency = "1";
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",1.0,1.0,60};
				frequency = "1";
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",1.0,1.0,60};
				frequency = "1";
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",1.0,1.0,60};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",1.0,1.0,60};
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\quadbike_noise_04",0.8912509,1.0,90};
				frequency = "1";
				volume = "camPos*(damper0 max 0.02)*(speed factor[0, 15])";
			};
			class TiresRockIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",0.63095737,1.0};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand2",0.63095737,1.0};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",0.63095737,1.0};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",0.63095737,1.0};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",0.63095737,1.0};
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",0.5011872,1.0};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\quadbike_noise_04",0.56234133,1.0};
				frequency = "1";
				volume = "(damper0 max 0.1)*(speed factor[0, 15])*(1-camPos)";
			};
			class breaking_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",0.70794576,1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.70794576,1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.70794576,1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.70794576,1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking",0.70794576,1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration",0.70794576,1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",0.70794576,1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",0.70794576,1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",0.5011872,1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
			};
			class acceleration_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.5011872,1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.5011872,1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.5011872,1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int",0.5011872,1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
			};
			class acceleration_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration_int",0.5011872,1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",0.5011872,1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",0.5011872,1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
		};
		thrustDelay = 0.1;
		engineBrakeCoef = 0.1;
		overSpeedBrakeCoef = 0.8;
		brakeIdleSpeed = 1.78;
		maxSpeed = 180;
		fuelCapacity = 30;
		wheelCircumference = 1.5;
		antiRollbarForceCoef = 0.3;
		antiRollbarForceLimit = 0.2;
		antiRollbarSpeedMin = 20;
		antiRollbarSpeedMax = 50;
		idleRpm = 600;
		redRpm = 2000;
		class complexGearbox
		{
			GearboxRatios[] = {"R1",-2.351,"N",0,"D1",2.081,"D2",1.257,"D3",0.737};
			TransmissionRatios[] = {"High",4.0};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
		};
		driverLeftHandAnimName = "handle";
		driverRightHandAnimName = "handle_r";
		driverLeftLegAnimName = "left_foot";
		driverRightLegAnimName = "right_foot";
		simulation = "carx";
		dampersBumpCoef = 3.3;
		differentialType = "rear_open";
		frontRearSplit = 0.5;
		frontBias = 1.3;
		rearBias = 1.3;
		centreBias = 1.3;
		clutchStrength = 15.0;
		enginePower = 1020;
		maxOmega = 710;
		peakTorque = 380;
		dampingRateFullThrottle = 0.08;
		dampingRateZeroThrottleClutchEngaged = 0.15;
		dampingRateZeroThrottleClutchDisengaged = 0.15;
		torqueCurve[] = {{ 0.0,0.6 },{ 0.2,0.65 },{ 0.3,0.8 },{ 0.7,0.95 },{ 0.8,1.0 },{ 0.9,0.95 },{ 1.0,0.5 }};
		changeGearMinEffectivity[] = {0.95,0.15,0.98,0.98,0.95};
		switchTime = 0.1;
		latency = 1.0;
		class Wheels
		{
			class LF
			{
				boneName = "wheel_1_1_damper";
				steering = true;
				side = "left";
				center   = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				mass = 20;
				MOI = 3.3;
				dampingRate = 0.5;
				maxBrakeTorque = 2000;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0, -1, 0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.15;
				mMaxDroop = 0.1;
				sprungMass = 100.0;
				springStrength = 35600;
				springDamperRate = 2680;
				longitudinalStiffnessPerUnitGravity = 100000;
				latStiffX = 25;
				latStiffY = 18000;
				frictionVsSlipGraph[] = {{0, 1}, {0.5, 1}, {1,1}};
			};

			class LR : LF
			{
				boneName = "wheel_1_2_damper";
				steering = false;
				side = "right";
				center   = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				mass = 20;
				MOI = 3.3;
				dampingRate = 0.5;
				maxBrakeTorque = 2000;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0, -1, 0};
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				maxCompression = 0.15;
				mMaxDroop = 0.1;
				sprungMass = 100.0;
				springStrength = 35600;
				springDamperRate = 2680;
				longitudinalStiffnessPerUnitGravity = 100000;
				latStiffX = 25;
				latStiffY = 18000;
				frictionVsSlipGraph[] = {{0, 1}, {0.5, 1}, {1,1}};
			};

			class RF : LF
			{
				boneName = "wheel_2_1_damper";
				center   = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				side = "left";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				steering = true;
			};

			class RR : RF
			{
				boneName = "wheel_2_2_damper";
				steering = false;
				center   = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				side = "right";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
			};

		};
		transportSoldier = 0;
		turnCoef = 4.5;
		ejectDeadCargo = 1;
		ejectDeadDriver = 1;
		crewCrashProtection = 0.75;
		damageEffect = "";
		damageTexDelay = 0.5;
		fuelExplosionPower = 0;
		maximumLoad = 600;
		class TransportItems {};
		class DestructionEffects
		{
			class UAVCrashSmoke
			{
				simulation = "particles";
				type = "UAVCrashSmoke";
				position = "[0,0,0]";
				intensity = 0.15;
				interval = 1;
				lifeTime = 0.012;
			};
			class Light1
			{
				simulation = "light";
				type = "ObjectDestructionLightSmall";
				position = "destructionEffect1";
				intensity = 0.001;
				interval = 1;
				lifeTime = 3;
				enabled = "distToWater";
			};
			class Sound
			{
				simulation = "sound";
				position = "destructionEffect1";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
				type = "Fire";
			};
			class Fire1
			{
				simulation = "particles";
				type = "ObjectDestructionFire1Tiny";
				position = "destructionEffect1";
				intensity = 0.15;
				interval = 1;
				lifeTime = 3;
			};
			class Refract1
			{
				simulation = "particles";
				type = "SmallFireFRefract";
				position = "destructionEffect1";
				intensity = 0.15;
				interval = 1;
				lifeTime = 3;
			};
			class Smoke1
			{
				simulation = "particles";
				type = "SmallWreckSmoke";
				position = "destructionEffect1";
				intensity = 0.15;
				interval = 1;
				lifeTime = 3.5;
			};
		};
		class Turrets{};
		showNVGCargo[] = {1};
		soundAttenuationCargo[] = {1,0};
		showNVGDriver = 1;
		hideWeaponsDriver = 1;
		hideWeaponsCargo = 0;
		weapons[] = {"MiniCarHorn"};
		driverAction = "Driver_Ebike";
		getInAction = "GetInQuadbike";
		getOutAction = "GetOutQuadbike";
		preciseGetInOut = 1;
		cargoAction[] = {};
		driverCompartments = "Compartment1";
		cargoCanEject = 1;
		cargoDoors[] = {};
		cargoGetInAction[] = {"GetInLow"};
		cargoGetOutAction[] = {"GetOutLow"};
		cargoCompartments[] = {"Compartment1"};
		cargoProxyIndexes[] = {};
		cargoIsCoDriver[] = {0};
		cargoPreciseGetInOut[] = {0};
		extCameraPosition[] = {0,1.3,-3.2};
		class HitPoints: HitPoints
		{
			class HitLFWheel:HitLFWheel
			{
				armor=0.225;
				passThrough=0;
				radius = 0.001;
				name = "wheel_1_1_hide";
			};

			class HitRFWheel:HitRFWheel
			{
				armor=0.225;
				passThrough=0;
				radius = 0.001;
				name = "wheel_1_2_hide";
			};

			class hit_engine
			{
				armor = 12;
				material = -1;
				name = "motor";
				visual = "";
				passThrough = 0.3;
				minimalHit = 0.2;
				explosionShielding = 0.2;
				radius = 0.003;
			};

			class HitBody
			{
				armor = 4.5;
				material = -1;
				name = "karoserie";
				visual = "";
				passThrough = 1;
				minimalHit = 0.2;
				explosionShielding = 0.2;
				radius = 0.003;
			};

			class HitGlass1: HitGlass1
			{
				armor = 0.3;
				explosionShielding = 3;
				radius = 0.25;
				name = "glass_hide";
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"A3\soft_F\Quadbike_01\Data\Quadbike_01_base.rvmat","A3\soft_F\Quadbike_01\Data\Quadbike_01_base_damage.rvmat","A3\soft_F\Quadbike_01\Data\Quadbike_01_base_destruct.rvmat"};
		};
		class Reflectors
		{
			class Left
			{
				color[] = {1900,1800,1700};
				ambient[] = {5,5,5};
				position = "Light_L";
				direction = "Light_L_end";
				hitpoint = "Light_L";
				selection = "Light_L";
				size = 1;
				innerAngle = 100;
				outerAngle = 179;
				coneFadeCoef = 10;
				intensity = 1;
				useFlare = 0;
				dayLight = 0;
				flareSize = 1.0;
				class Attenuation
				{
					start = 1.0;
					constant = 0;
					linear = 0;
					quadratic = 0.25;
					hardLimitStart = 60;
					hardLimitEnd = 120;
				};
			};
		};
		aggregateReflectors[] = {{ "Left","Right" }};
		hiddenSelections[] = {"speed", "battery"};

		class UserActions
		{
			class PressXToFlipTheThing
			{
				displayNameDefault = "Flip Electric Motorcycle";
				displayName = "Flip Electric Motorcycle";
				position = "";
				radius = 2.7;
				onlyForPlayer = 1;
				condition = "alive this && not canmove this && crew this isEqualTo []";
				statement = "this setvectorup [0,0,1]";
			};
		};
	};

	class jetski_epoch_blu: jetski_epoch
	{
		author = "Kiory";
		_generalMacro = "B_Boat_Transport_01_F";
		scope = 2;
		crew = "B_Soldier_F";
		faction = "BLU_F";
		side = 1;
		typicalCargo[] = {"B_Soldier_F","B_Soldier_F"};
	};

};

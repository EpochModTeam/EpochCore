class CfgPatches
{
	class epoch_objects
	{
		units[] = {"wardrobe_epoch","container_epoch","cooker_epoch","locker_epoch", "smallbackpack_red_epoch", "smallbackpack_green_epoch", "smallbackpack_teal_epoch", "smallbackpack_pink_epoch"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
		magazines[] = {};
		ammo[] = {};
		epochVersion = "0.4.0.0";
	};
};
class CfgVehicleClasses
{
	class epoch_objects
	{
		displayName = "Epoch Objects";
	};
};
class CfgFactionClasses
{
	class Epoch_objects
	{
		displayName = "Epoch objects";
		priority = 100;
		side = 3;
	};
};
class CfgVehicles
{
	class House_Small_F;
	class House_F;
	class NonStrategic;
	class ThingX;
	class WeaponHolder;
	class WeaponHolderSimulated;
	class Bag_Base;

	class WH_Loot : WeaponHolder {};
	class wardrobe_epoch : WH_Loot
	{
		scope = 2;
		mapSize = 1;
		cost = 0;
		isGround = 0;
		author = "Kiory";
		displayName = "Wardrobe";
		destrType = "DestructNo";
		vehicleclass = "Epoch_objects";
		model = "\x\addons\a3_epoch_assets_2\wardrobe.p3d";
		forceSupply = 0;
		simulClass = "Wardrobe_SIM_EPOCH";
		staticClass = "wardrobe_epoch";
		sections[] = {"camo"};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {""};

		class AnimationSources
		{
			class open_door_l
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class open_door_r
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
		};
		class UserActions
		{
			class open_door_l
			{
				displayName = "Search";
				displayNameDefault = "<img image='\A3\ui_f\data\map\VehicleIcons\iconvehicle_ca.paa' size='2.5' />";
				position = "left";
				radius = 3;
				onlyForPlayer = 0;
				condition = "this animationPhase ""open_door_l"" < 0.5";
				statement = "this animate [""open_door_l"", 1]; this animate [""open_door_r"", 1]; this call EPOCH_LootIT;";
			};
			/**
			class close_door_l: open_door_l
			{
				displayName = "Close left door";
				condition = "this animationPhase ""open_door_l"" >= 0.5";
				statement = "this animate [""open_door_l"", 0];";
			};
			class open_door_r
			{
				displayName = "Open Right door";
				position = "right";
				radius = 3;
				onlyForPlayer = 0;
				condition = "this animationPhase ""open_door_r"" < 0.5";
				statement = "this animate [""open_door_r"", 1]; this call EPOCH_LootIT;";
			};
			class close_door_r: open_door_r
			{
				displayName = "Close right door";
				condition = "this animationPhase ""open_door_r"" >= 0.5";
				statement = "this animate [""open_door_r"", 0];";
			};
			*/
		};
	};
	class Constructions_static_F : NonStrategic {};
	class FirePlace_EPOCH : Constructions_static_F
	{
		scope = 2;
		mapSize = 1;
		cost = 0;
		isGround = 0;
		author = "Kiory";
		displayName = "Fireplace";
		destrType = "DestructNo";
		vehicleclass = "Epoch_objects";
		model = "\x\addons\a3_epoch_assets_2\fireplace.p3d";
		forceSupply = 0;
		sections[] = {};
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
	};

	class fireplace_f_epoch : FirePlace_EPOCH
	{
		scope = 2;
		mapSize = 1;
		cost = 0;
		isGround = 0;
		author = "Kiory";
		displayName = "Fireplace Full";
		destrType = "DestructNo";
		vehicleclass = "Epoch_objects";
		model = "\x\addons\a3_epoch_assets_2\fireplace_full.p3d";
		forceSupply = 0;
		sections[] = {};
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};

	};

	class FirePlaceOn_EPOCH : FirePlace_EPOCH
	{
		scope = 2;
		mapSize = 1;
		cost = 0;
		isGround = 0;
		author = "Kiory";
		displayName = "Fireplace On";
		destrType = "DestructNo";
		vehicleclass = "Epoch_objects";
		model = "\x\addons\a3_epoch_assets_2\fireplace_on.p3d";
		forceSupply = 0;
		simulation = "fire";
		sections[] = {};
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};

		class Effects
		{
			class Light1
			{
				simulation = "light";
				type = "SmallFireLight";
			};
			/*
			class sound
			{
				simulation = "sound";
				type = "Fire";
			};
			*/
			class Smoke1
			{
				simulation = "particles";
				type = "SmallFireS";
			};
			class Fire1: Smoke1
			{
				simulation = "particles";
				type = "SmallFireF";
			};
			class Refract1
			{
				simulation = "particles";
				type = "SmallFireFRefract";
			};
		};

		class EventHandlers
		{
			init = "(_this select 0) inflame true";
		};

			class Reflectors
		{
			class Reflector_1
			{
				color[] = {80,70,60};
				ambient[] = {20,17.5,15};
				intensity = 100;
				size = 1;
				innerAngle = 5;
				outerAngle = 45;
				coneFadeCoef = 3;
				position = "light_1_pos";
				direction = "light_1_dir";
				hitpoint = "Light_1_hitpoint";
				selection = "Light_1_hide";
				useFlare = 0;
				flareSize = 25;
				flareMaxDistance = 2500;
				blinking = 0;
				dayLight = 0;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 0.1;
					quadratic = 0;
					hardLimitStart = 800;
					hardLimitEnd = 1000;
				};
			};
		};
	};

	class locker_epoch : WH_Loot
	{
		scope = 2;
		mapSize = 1;
		cost = 0;
		isGround = 0;
		author = "Kiory";
		displayName = "Locker";
		destrType = "DestructNo";
		vehicleclass = "Epoch_objects";
		model = "\x\addons\a3_epoch_assets_2\lockers.p3d";
		forceSupply = 0;
		simulClass = "Wardrobe_SIM_EPOCH";
		staticClass = "wardrobe_epoch";
		sections[] = {};
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {""};

		class AnimationSources
		{
			class open_door_l
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class open_door_m
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class open_door_r
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
		};
		class UserActions
		{
			class open_door_l
			{
				displayName = "Search";
				displayNameDefault = "<img image='\A3\ui_f\data\map\VehicleIcons\iconvehicle_ca.paa' size='2.5' />";
				position = "left";
				radius = 3;
				onlyForPlayer = 0;
				condition = "this animationPhase ""open_door_l"" < 0.5";
				statement = "this animate [""open_door_l"", 1]; this animate [""open_door_m"", 1]; this animate [""open_door_r"", 1]; this call EPOCH_LootIT;";
			};
			/*
			class close_door_l: open_door_l
			{
				displayName = "Close left door";
				condition = "this animationPhase ""open_door_l"" >= 0.5";
				statement = "this animate [""open_door_l"", 0];";
			};
			class open_door_m
			{
				displayName = "Open Middle door";
				position = "left";
				radius = 3;
				onlyForPlayer = 0;
				condition = "this animationPhase ""open_door_m"" < 0.5";
				statement = "this animate [""open_door_m"", 1]; this call EPOCH_LootIT;";
			};
			class close_door_m: open_door_m
			{
				displayName = "Close Middle door";
				condition = "this animationPhase ""open_door_m"" >= 0.5";
				statement = "this animate [""open_door_m"", 0];";
			};
			class open_door_r
			{
				displayName = "Open Right door";
				position = "right";
				radius = 3;
				onlyForPlayer = 0;
				condition = "this animationPhase ""open_door_r"" < 0.5";
				statement = "this animate [""open_door_r"", 1]; this call EPOCH_LootIT;";
			};
			class close_door_r: open_door_r
			{
				displayName = "Close right door";
				condition = "this animationPhase ""open_door_r"" >= 0.5";
				statement = "this animate [""open_door_r"", 0];";
			};
			*/
		};
	};
	class cooker_epoch : WH_Loot
	{
		scope = 2;
		mapSize = 1;
		cost = 0;
		isGround = 0;
		author = "Kiory";
		displayName = "Cooker";
		destrType = "DestructNo";
		vehicleclass = "Epoch_objects";
		model = "\x\addons\a3_epoch_assets_2\cooker.p3d";
		armor = 1e+011;
		forceSupply = 0;
		simulClass = "Cooker_SIM_EPOCH";
		staticClass = "cooker_epoch";
		sections[] = {};
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {""};

		class AnimationSources
		{
			class open_top_door
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class open_bottom_door
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class turn_fl
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class turn_fr
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class turn_bl
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class turn_br
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class turn_oven
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class turn_grill
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class fl_hob_hide
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class fr_hob_hide
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class bl_hob_hide
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class br_hob_hide
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
		};
		class UserActions
		{
			class open_top_door
			{
				displayName = "Search";
				displayNameDefault = "<img image='\A3\ui_f\data\map\VehicleIcons\iconvehicle_ca.paa' size='2.5' />";
				position = "top";
				radius = 3;
				onlyForPlayer = 0;
				condition = "this animationPhase ""open_top_door"" < 0.5";
				statement = "this animate [""open_top_door"", 1]; this animate [""open_bottom_door"", 1]; this call EPOCH_LootIT;";
			};
			/*
			class close_top_door: open_top_door
			{
				displayName = "Close top door";
				condition = "this animationPhase ""open_top_door"" >= 0.5";
				statement = "this animate [""open_top_door"", 0];";
			};
			class open_bottom_door
			{
				displayName = "Open Bottom Door";
				position = "bottom";
				radius = 3;
				onlyForPlayer = 0;
				condition = "this animationPhase ""open_bottom_door"" < 0.5;";
				statement = "this animate [""open_bottom_door"", 1];";
			};
			class close_bottom_door: open_bottom_door
			{
				displayName = "Close Bottom Door";
				condition = "this animationPhase ""open_bottom_door"" >= 0.5;";
				statement = "this animate [""open_bottom_door"", 0];";
			};
			class turn_fl
			{
				displayName = "Turn on front left hob";
				position = "fl";
				radius = 3;
				onlyForPlayer = 0;
				condition = "(this getVariable [""HAS_POWER"",false]) and (this animationPhase ""turn_fl"" < 0.5)";
				statement = "this animate [""turn_fl"", 1]; this animate [""fl_hob_hide"", 1];";
			};
			class unturn_fl: turn_fl
			{
				displayName = "Turn off front left hob";
				condition = "this animationPhase ""turn_fl"" >= 0.5;";
				statement = "this animate [""turn_fl"", 0]; this animate [""fl_hob_hide"", 0];";
			};
			class turn_fr
			{
				displayName = "Turn on front right hob";
				position = "fr";
				radius = 3;
				onlyForPlayer = 0;
				condition = "(this getVariable [""HAS_POWER"",false]) and (this animationPhase ""turn_fr"" < 0.5)";
				statement = "this animate [""turn_fr"", 1]; this animate [""fr_hob_hide"", 1];";
			};
			class unturn_fr: turn_fr
			{
				displayName = "Turn off front right hob";
				condition = "this animationPhase ""turn_fr"" >= 0.5";
				statement = "this animate [""turn_fr"", 0]; this animate [""fr_hob_hide"", 0];";
			};
			class turn_bl
			{
				displayName = "Turn on back left hob";
				position = "bl";
				radius = 3;
				onlyForPlayer = 0;
				condition = "(this getVariable [""HAS_POWER"",false]) and (this animationPhase ""turn_bl"" < 0.5)";
				statement = "this animate [""turn_bl"", 1]; this animate [""bl_hob_hide"", 1];";
			};
			class unturn_bl: turn_bl
			{
				displayName = "Turn off back left hob";
				condition = "this animationPhase ""turn_bl"" >= 0.5";
				statement = "this animate [""turn_bl"", 0]; this animate [""bl_hob_hide"", 0];";
			};
			class turn_br
			{
				displayName = "Turn on back right hob";
				position = "br";
				radius = 3;
				onlyForPlayer = 0;
				condition = "(this getVariable [""HAS_POWER"",false]) and (this animationPhase ""turn_br"" < 0.5)";
				statement = "this animate [""turn_br"", 1]; this animate [""br_hob_hide"", 1];";
			};
			class unturn_br: turn_br
			{
				displayName = "Turn off back right hob";
				condition = "this animationPhase ""turn_br"" >= 0.5";
				statement = "this animate [""turn_br"", 0]; this animate [""br_hob_hide"", 0];";
			};
			class turn_oven
			{
				displayName = "Turn on oven";
				position = "oven";
				radius = 3;
				onlyForPlayer = 0;
				condition = "(this getVariable [""HAS_POWER"",false]) and (this animationPhase ""turn_oven"" < 0.5)";
				statement = "this animate [""turn_oven"", 1];";
			};
			class unturn_oven: turn_oven
			{
				displayName = "Turn off oven";
				condition = "this animationPhase ""turn_oven"" >= 0.5";
				statement = "this animate [""turn_oven"", 0];";
			};
			class turn_grill
			{
				displayName = "Turn on grill";
				position = "grill";
				radius = 3;
				onlyForPlayer = 0;
				condition = "(this getVariable [""HAS_POWER"",false]) and (this animationPhase ""turn_grill"" < 0.5)";
				statement = "this animate [""turn_grill"", 1];";
			};
			class unturn_grill: turn_grill
			{
				displayName = "Turn off grill";
				condition = "this animationPhase ""turn_grill"" >= 0.5";
				statement = "this animate [""turn_grill"", 0];";
			};
			*/
		};
	};
	class smallbackpack_red_epoch: Bag_Base
	{
		author = "Kiory";
		scope = 2;
		displayName = "Small Backpack Red";
		picture = "\x\addons\a3_epoch_assets_2\gear\gear_smallbackpack_x_ca.paa";
		model = "\x\addons\a3_epoch_assets_2\small_backpack.p3d";
		sections[] = {"camo"};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"x\addons\a3_epoch_assets_2\data\small_backpack_red_co.paa"};
		maximumLoad = 460;
		mass = 25;
	};
	class smallbackpack_green_epoch: Bag_Base
	{
		author = "Kiory";
		scope = 2;
		displayName = "Small Backpack Green";
		picture = "\x\addons\a3_epoch_assets_2\gear\gear_smallbackpack_x_ca.paa";
		model = "\x\addons\a3_epoch_assets_2\small_backpack.p3d";
		sections[] = {"camo"};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"x\addons\a3_epoch_assets_2\data\small_backpack_grn_co.paa"};
		maximumLoad = 460;
		mass = 25;
	};
	class smallbackpack_teal_epoch: Bag_Base
	{
		author = "Kiory";
		scope = 2;
		displayName = "Small Backpack Teal";
		picture = "\x\addons\a3_epoch_assets_2\gear\gear_smallbackpack_x_ca.paa";
		model = "\x\addons\a3_epoch_assets_2\small_backpack.p3d";
		sections[] = {"camo"};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"x\addons\a3_epoch_assets_2\data\small_backpack_teal_co.paa"};
		maximumLoad = 460;
		mass = 25;
	};
	class smallbackpack_pink_epoch: Bag_Base
	{
		author = "Kiory";
		scope = 2;
		displayName = "Small Backpack Pink";
		picture = "\x\addons\a3_epoch_assets_2\gear\gear_smallbackpack_x_ca.paa";
		model = "\x\addons\a3_epoch_assets_2\small_backpack.p3d";
		sections[] = {"camo"};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"x\addons\a3_epoch_assets_2\data\small_backpack_pink_co.paa"};
		maximumLoad = 460;
		mass = 25;
	};

	class WeaponHolderSimulatedAlt : ThingX
	{
		animated = 0;
		scope = 1;
		icon = "iconCrate";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		displayName = "$STR_cfgVehicles_WeaponHolder0";
		accuracy = 0.2;
		isGround = 1;
		typicalCargo[] = {};
		vehicleClass = "Ammo";
		waterResistanceCoef = 1.8;
		waterAngularDampingCoef = 10.0;
		class DestructionEffects
		{
			class Light1
			{
				simulation = "light";
				type = "ObjectDestructionLight";
				position = "destructionEffect1";
				intensity = 0.001;
				interval = 1;
				lifeTime = 3;
			};
			class Sound
			{
				simulation = "sound";
				type = "Fire";
				position = "destructionEffect1";
				intensity = 0.15;
				interval = 1;
				lifeTime = 3;
			};
			class Fire1
			{
				simulation = "particles";
				type = "ObjectDestructionFire1";
				position = "destructionEffect1";
				intensity = 0.15;
				interval = 1;
				lifeTime = 3;
			};
			class Fire2
			{
				simulation = "particles";
				type = "ObjectDestructionFire1";
				position = "destructionEffect1";
				intensity = 0.15;
				interval = 1;
				lifeTime = 3;
			};
			class Smoke1
			{
				simulation = "particles";
				type = "ObjectDestructionSmoke";
				position = "destructionEffect1";
				intensity = 0.15;
				interval = 1;
				lifeTime = 3.2;
			};
			class Smoke2
			{
				simulation = "particles";
				type = "ObjectDestructionSmoke";
				position = "destructionEffect1";
				intensity = 0.15;
				interval = 1;
				lifeTime = 3.4;
			};
			class Smoke3
			{
				simulation = "particles";
				type = "ObjectDestructionSmoke";
				position = "destructionEffect1";
				intensity = 0.125;
				interval = 1;
				lifeTime = 3.5;
			};
			class HouseDestr
			{
				simulation = "destroy";
				type = "DelayedDestructionAmmo";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		maximumLoad = 9999;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		supplyRadius = 1.4;
		cost = 0;
		armor = 200;
		mapSize = 2;
		class TransportMagazines{};
		forceSupply = 1;
		showWeaponCargo = 1;
		transportMaxMagazines = 1e+009;
		transportMaxWeapons = 1e+009;
		destrType = "DestructNo";
		transportMaxBackpacks = 0;
	};
	class container_epoch : WeaponHolderSimulatedAlt
	{
		mapSize = 1.0;
		author = "Kiory";
		scope = 2;
		displayName = "Container";
		model = "\x\addons\a3_epoch_assets_2\container.p3d";
		icon = "iconObject_circle";
		vehicleClass = "epoch_objects";
		destrType = "DestructNo";
		cost = 100;
		accuracy = 1000;
		forceSupply = 0;
		isGround = 0;
		waterLeakiness = 0;
		waterResistanceCoef = 0.8;
		waterAngularDampingCoef = 10;
		simulClass = "Container_SIM_EPOCH";
		staticClass = "Container_epoch";
		sections[] = {};
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class AnimationSources
		{
			class open_lid
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class open_lock1
			{
				source = "user";
				animPeriod = 0.44;
				initPhase = 0;
			};
			class open_lock2
			{
				source = "user";
				animPeriod = 0.35;
				initPhase = 0;
			};
			class open_lock3
			{
				source = "user";
				animPeriod = 0.62;
				initPhase = 0;
			};
			class open_lock4
			{
				source = "user";
				animPeriod = 0.55;
				initPhase = 0;
			};
		};
		class UserActions
		{
			class open_lid
			{
				displayName = "Search";
				displayNameDefault = "<img image='\A3\ui_f\data\map\VehicleIcons\iconvehicle_ca.paa' size='2.5' />";
				position = "lid_open";
				radius = 3;
				onlyForPlayer = 0;
				condition = "this animationPhase ""open_lid"" < 0.5";
				statement = "this spawn { _this animate [""open_lock3"", 1]; uiSleep 0.1; _this animate [""open_lock1"", 1];sleep 0.1; _this animate [""open_lock2"", 1]; uiSleep 0.1; _this animate [""open_lock4"", 1]; uiSleep 0.6; _this animate [""open_lid"", 1];}; this call EPOCH_LootIT; ";
			};

			class open_quickTake
			{
				displayName = "Open";
				position = "lid_open";
				radius = 3;
				onlyForPlayer = 0;
				condition = "this animationPhase ""open_lid"" > 0.5";
				statement = "call EPOCH_QuickTakeLoad;";
			};



			/*
			class close_lid: open_lid
			{
				displayName = "Close container";
				condition = "this animationPhase ""open_lid"" >= 0.5";
				statement = "this spawn { _this animate [""open_lid"", 0]; uiSleep 1.0; _this animate [""open_lock1"", 0]; _this animate [""open_lock2"", 0]; _this animate [""open_lock3"", 0]; _this animate [""open_lock4"", 0];};";
			};
			*/
		};
	};
};

class cfgWeapons {
class ItemCore;
class InventoryItem_Base_F;

class HeadgearItem: InventoryItem_Base_F
	{
		allowedSlots[] = {901,605};
		type = 605;
		hiddenSelections[] = {};
		armor = 0;
		passThrough = 1;
		hitpointName = "HitHead";
	};

	class wolf_mask_epoch : ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Scary Wolf Mask";
		picture = "\x\addons\a3_epoch_assets_2\gear\gear_wolfmask_x_ca.paa";
		model = "\x\addons\a3_epoch_assets_2\wolf_mask.p3d";
			class ItemInfo: HeadgearItem
			{
				mass = 40;
				uniformModel = "\x\addons\a3_epoch_assets_2\wolf_mask.p3d";
				modelSides[] = {3,2,1};
				// armor = 400;
				passThrough = 0.5;
				hiddenSelections[] = {"camo"};
			};
	};

	class pkin_mask_epoch : ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Scary Pumpkin Mask";
		picture = "\x\addons\a3_epoch_assets_2\gear\gear_pkinmask_x_ca.paa";
		model = "\x\addons\a3_epoch_assets_2\pkin_mask.p3d";
			class ItemInfo: HeadgearItem
			{
				mass = 40;
				uniformModel = "\x\addons\a3_epoch_assets_2\pkin_mask.p3d";
				modelSides[] = {3,2,1};
				// armor = 400;
				passThrough = 0.5;
				hiddenSelections[] = {"camo"};
			};
	};
};

class CfgPatches {
	class A3_epoch_assets {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		epochVersion = "0.4.0.0";
		requiredAddons[] = {"A3_Weapons_F"};
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
class CfgNonAIVehicles
{
	class ProxyMetalRack
	{
		scope = public;
		model = "\A3\Structures_F\Furniture\Metal_wooden_rack_F";
		autocenter = false;
		animated = false;
		reversed = false;
		simulation = "alwaysshow";
	};
};
/*
class CfgVehicles {

	class WeaponHolder;

	class Land_Metal_Rack_Single: WeaponHolder
	{
		scope = 2;
		displayName = "TEST SELF";
		vehicleclass = "Epoch_objects";
		model = "\x\addons\a3_epoch_assets\models\Metal_Rack_Single.p3d";
	};
};
*/
class CfgSounds
{
	class sapper_groan0
	{
		sound[] = {"\x\addons\a3_epoch_assets\sounds\sapper\sapper_groan2",1.0,1.0};
		titles[] = {};
	};
	class sapper_groan1
	{
		sound[] = { "\x\addons\a3_epoch_assets\sounds\sapper\sapper_groan3", 1.0, 1.0 };
		titles[] = {};
	};
	class sapper_groan2
	{
		sound[] = { "\x\addons\a3_epoch_assets\sounds\sapper\sapper_groan4", 1.0, 1.0 };
		titles[] = {};
	};
	class sapper_explode
	{
		sound[] = { "\x\addons\a3_epoch_assets\sounds\sapper\sapper_preExplode", 1.0, 1.0 };
		titles[] = {};
	};
	class sapper_alert0
	{
		sound[] = { "\x\addons\a3_epoch_assets\sounds\sapper\sapper_alert1", 1.0, 1.0 };
		titles[] = {};
	};
	class drone_alert0
	{
		sound[] = { "\x\addons\a3_epoch_assets\sounds\drone\drone_alert2", 1.0, 1.0 };
		titles[] = {};
	};
	class snake_bite0
	{
		sound[] = { "\x\addons\a3_epoch_assets\sounds\snake\snake_bite", 1.0, 1.0 };
		titles[] = {};
	};
	class jack_pump
	{
		sound[] = { "\x\addons\a3_epoch_assets\sounds\tools\jack", 1.0, 1.0 };
		titles[] = {};
	};
	
};
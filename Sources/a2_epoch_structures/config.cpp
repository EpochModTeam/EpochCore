#define true 1
#define false 0
#define private 0
#define protected 1
#define public 2

class CfgPatches
{
	class a2_epoch_structures
	{
		author = "Epoch Mod Team";
		name="Epoch Mod for Arma 3 - Ported Structures from Arma 2";
		url="http://epochmod.com";
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
		epochVersion = "0.3.9.0";
		// TODO: disabled for due to depenancy on A2
		// requiredAddons[] = {"CAStructuresHouse_a_stationhouse","CAStructures_Mil","CAStructuresShed_Small"};
	};
};
class CfgVehicles
{

	class House;
	class Land_a_stationhouse: House
	{
		scope=protected;
		model = "\x\addons\a2_epoch_structures\a_stationhouse\a_stationhouse";
	};
	class Land_Mil_Barracks_i: House
	{
		scope=protected;
		model = "\x\addons\a2_epoch_structures\mil\Mil_Barracks_i";
	};
	class Land_Mil_Barracks: House
	{
		scope=protected;
		model = "\x\addons\a2_epoch_structures\mil\Mil_Barracks";
	};
	class Land_Shed_W4: House
	{
		scope=protected;
		model = "\x\addons\a2_epoch_structures\shed_w4\Shed_W4";
	};

};

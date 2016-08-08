class CfgPatches
{
	class Underground_Epoch
	{
		requiredAddons[] = {};
		requiredVersion = 0.1;
		units[] ={};
		weapons[] = {};
		epochVersion = "0.4.0.0";
		
	};
};

class CfgVehicles
{

	class House;
	class two_way_tunnel: House
	{
		scope = 2;
		author = "SPG";
		displayName = "Cross Section";
		model = \x\addons\a3_epoch_underground\Tunnel.p3d;

		vehicleClass = Structures;
		mapSize = 20.27;
		cost = 40000;
	};

	class one_way_dungeon: House
	{
		scope = 2;
		author = "Awol";
		displayName = "One Way Dungeon";
		model = \x\addons\a3_epoch_underground\1_way_alt.p3d;

		vehicleClass = Structures;
		mapSize = 20.27;
		cost = 40000;
	};

	class two_way_dungeon: House
	{
		scope = 2;
		author = "Awol";
		displayName = "Two Way Dungeon";
		model = \x\addons\a3_epoch_underground\2_way_alt.p3d;

		vehicleClass = Structures;
		mapSize = 20.27;
		cost = 40000;
	};

	class three_way_dungeon: House
	{
		scope = 2;
		author = "Awol";
		displayName = "Three Way Dungeon";
		model = \x\addons\a3_epoch_underground\3_way_alt.p3d;

		vehicleClass = Structures;
		mapSize = 20.27;
		cost = 40000;
	};

	class four_way_dungeon: House
	{
		scope = 2;
		author = "Awol";
		displayName = "Four Way Dungeon";
		model = \x\addons\a3_epoch_underground\4_way_alt.p3d;

		vehicleClass = Structures;
		mapSize = 20.27;
		cost = 40000;


		class AnimationSources
		{
			class One
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
			class Two
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
			class Three
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
			class Four
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
		};

	};
};

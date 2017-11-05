/*
	Author: Aaron Clark - EpochMod.com

    Contributors:

	Description:
	Epoch Code Config

    Licence:
    Arma Public License Share Alike (APL-SA) - https://www.bistudio.com/community/licenses/arma-public-license-share-alike

    Github:
    https://github.com/EpochModTeam/Epoch/tree/release/Sources/epoch_code/config.cpp
*/
class CfgPatches {
	class A3_epoch_code {
		author = "Epoch Mod Team";
		name="Epoch Mod for Arma 3 - Core";
		url="http://epochmod.com";
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgMods
{
	class Epoch
	{
		dir = "@epoch";
		name = "Epoch Mod";
		picture = "\x\addons\a3_epoch_assets\pictures\loadScreen_ca.paa";
		hidePicture = 0;
		hideName = 0;
		action = "http://www.epochmod.com";
		version = "1.1.0";
		majorVersion = 0.5; //MUST BE A NUMBER!; Change this if we release a new major version, don't change if we push just push a hotfix
		overview = "Open world survival mod set just two years after the mass extinction of billions of people. Those that remain are left with remnants of a once technological society. Try to survive, build, or explore your way through the harsh dynamic environment.";
	};
};
class Epoch
{
	class Version
	{
		//Version System, Check if PBO Version is compatible with Code
		A3_epoch_assets = "1.1.0";
		A3_epoch_assets_1 = "1.1.0";
		epoch_objects = "1.1.0";
		A3_epoch_assets_3 = "1.1.0";
		A3_epoch_config = "1.1.0";
		A3_epoch_language = "1.1.0";
		a3_epoch_Underground = "1.1.0";
		A3_epoch_vehicles = "1.1.0";
		a3_epoch_weapons = "1.1.0";
		a2_epoch_weapons = "1.1.0";
		a3_epoch_structures = "1.1.0";
		A3_epoch_functions = "1.1.0";
		A3_epoch_vehicles_1 = "1.1.0";
		a3_epoch_community = "1.1.0";
	};
};

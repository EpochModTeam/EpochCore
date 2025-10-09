class CfgEpochCoreClientFunctions
{
	version = 2;
	class EpochCore
	{
		tag = "EPOCH";
		file = "x\addons\a3_epoch_code\compile";
		class interactions {
			class mirrorSetup {}; // EPOCH_fnc_mirrorSetup
		};
	};
};
class CfgEpochCoreListenServerFunctions : CfgEpochCoreClientFunctions {};

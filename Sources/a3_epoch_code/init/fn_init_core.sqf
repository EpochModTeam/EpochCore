/*
	Author: Aaron Clark - EpochMod.com

    Contributors:

	Description:
	Initalize both init and run custom client function compiler

    Licence:
    Arma Public License Share Alike (APL-SA) - https://www.bistudio.com/community/licenses/arma-public-license-share-alike

    Github:
    https://github.com/EpochModTeam/EpochCore/tree/release/Sources/a3_epoch_code/init/fn_init_core.sqf
*/

if !(isNil "Epoch_CoreStart") exitWith { false };
Epoch_CoreStart = true;
if (isDedicated) then {
	// dedicated server
	"CfgEpochCoreServerFunctions" call EPOCH_fnc_compiler;
	diag_log "CfgEpochCoreServerFunctions";
} else {
	if (hasInterface) then {
		if (isServer) then {
			// listen server host
			"CfgEpochCoreListenServerFunctions" call EPOCH_fnc_compiler;
			diag_log "CfgEpochCoreListenServerFunctions";
		} else {
			// all players
			"CfgEpochCoreClientFunctions" call EPOCH_fnc_compiler;
			diag_log "CfgEpochCoreClientFunctions";
		};
	} else {
		// Headless Clients
		"CfgEpochCoreClientHCFunctions" call EPOCH_fnc_compiler;
		diag_log "CfgEpochCoreClientHCFunctions";
	};
};
true

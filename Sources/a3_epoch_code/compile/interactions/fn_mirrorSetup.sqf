/*
	Author: Aaron Clark - EpochMod.com

    Contributors:

	Description:
	Initalize Mirror

    Licence:
    Arma Public License Share Alike (APL-SA) - https://www.bistudio.com/community/licenses/arma-public-license-share-alike

    Github:
    https://github.com/EpochModTeam/EpochCore/tree/release/Sources/a3_epoch_code/compile/interactions/fn_mirrorSetup.sqf
*/
params [ ["_mirror",[objNull],[objNull]] ];
if !(isNull _mirror) then {
    if !(_mirror getVariable["MIRROR_SETUP", false]) then {
        _mirror spawn {
            _this setVariable ["MIRROR_SETUP", true];
            private _cam = "camera" camCreate (_this modelToWorld [0,0.25,1.5]);
            _cam camSetTarget (_this modelToWorld [0,-30,1]);
            _cam camSetFov 0.3;
            _cam camCommit 0;
            "rendertargetwardrobe0" setPiPEffect [0];
            _cam cameraEffect ["Internal", "FRONT","rendertargetwardrobe0"];
            _this setObjectTexture [0,"#(argb,512,512,1)r2t(rendertargetwardrobe0,1.0)"];

            waitUntil {
                uiSleep 5;
                (isNull _this) || ((_this distance player) > 20)
            };

            _cam cameraEffect ["terminate","back"];
            camDestroy _cam;
            _this setVariable["MIRROR_SETUP", nil];
            _this setObjectTexture [0,""];
        };
    };
};

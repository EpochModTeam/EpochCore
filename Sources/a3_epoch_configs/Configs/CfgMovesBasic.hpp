/*
	Author: Aaron Clark - EpochMod.com

    Contributors: Paul Tomany (.rtm Animation)

	Description:
	Adds custom animation "epoch_unarmed_jump"

    Licence:
    Arma Public License Share Alike (APL-SA) - https://www.bistudio.com/community/licenses/arma-public-license-share-alike

    Github:
    https://github.com/EpochModTeam/Epoch/tree/release/Sources/epoch_config/Configs/CfgMovesMaleSdr.hpp
*/
/*[[[cog from arma_config_tools import *; json_to_arma()]]]*/
class CfgMovesBasic
{
    class DefaultDie;
    class ManActions
    {
        GestureSwing0 = "";
        GestureSwing1 = "";
        GestureSwing2 = "";
        GestureFinger = "";
        SledgeSwing = "";
        Driver_Jetski = "Driver_Jetski";
        Driver_Ebike = "Driver_Ebike";
        hoverboard_driver = "hoverboard_driver";
        mbk_driver = "mbk_driver";			
        Cargo_Jetski = "Cargo_Jetski";
        GestureReloadSR25[] = {"GestureReloadSR25","Gesture"};
        GestureReloadSR25Prone[] = {"GestureReloadSR25Prone","Gesture"};
        GestureReloadL85A2[] = {"GestureReloadL85A2","Gesture"};
        GestureReloadL85A2UGL[] = {"GestureReloadL85A2UGL","Gesture"};
        GestureReloadL85A2RIS[] = {"GestureReloadL85A2RIS","Gesture"};
        GestureReloadL85A2Prone[] = {"GestureReloadL85A2Prone","Gesture"};
        GestureReloadL85A2UGLProne[] = {"GestureReloadL85A2UGLProne","Gesture"};
        GestureReloadL85A2RISProne[] = {"GestureReloadL85A2RISProne","Gesture"};
    };
    class Actions
    {
        class NoActions : ManActions
        {
            GestureSwing0[] = {"GestureSwing0","Gesture"};
            GestureSwing1[] = {"GestureSwing1","Gesture"};
            GestureSwing2[] = {"GestureSwing2","Gesture"};
            GestureFinger[] = {"GestureFinger","Gesture"};
            SledgeSwing[] = {"SledgeSwing","Gesture"};
            GestureReloadSR25[] = {"GestureReloadSR25","Gesture"};
            GestureReloadL85A2[] = {"GestureReloadL85A2","Gesture"};
            GestureReloadL85A2UGL[] = {"GestureReloadL85A2UGL","Gesture"};
            GestureReloadL85A2RIS[] = {"GestureReloadL85A2RIS","Gesture"};
        };
        class RifleBaseStandActions;
        class RifleProneActions : RifleBaseStandActions
        {
            GestureReloadSR25[] = {"GestureReloadSR25Prone","Gesture"};
            GestureReloadL85A2[] = {"GestureReloadL85A2Prone","Gesture"};
            GestureReloadL85A2UGL[] = {"GestureReloadL85A2UGLProne","Gesture"};
            GestureReloadL85A2RIS[] = {"GestureReloadL85A2RISProne","Gesture"};
        };
    };
};

/*[[[end]]]*/

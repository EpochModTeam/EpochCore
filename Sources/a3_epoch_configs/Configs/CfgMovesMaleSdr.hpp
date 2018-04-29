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
class CfgMovesMaleSdr : CfgMovesBasic
{
    skeletonName = "OFP2_ManSkeleton";
    gestures = "CfgGesturesMale";
    class States
    {
        class Crew;
        class AmovPercMstpSnonWnonDnon;
        class PreciseCrew : Crew
        {
            head = "headNo";
        };
        class Driver_Jetski : Crew
        {
            file = "\x\addons\a3_epoch_vehicles\cargoposes\jetski_driver.rtm";
            interpolateTo[] = {"Unconscious",1};
            speed = -30;
            leftHandIKCurve[] = {1};
            rightHandIKCurve[] = {1};
        };
        class Driver_Ebike : Crew
        {
            file = "\x\addons\a3_epoch_vehicles\cargoposes\ebike_driver.rtm";
            interpolateTo[] = {"Unconscious",1};
            speed = -30;
            leftHandIKCurve[] = {1};
            rightHandIKCurve[] = {1};
        };
        class Cargo_Jetski : Crew
        {
            file = "\x\addons\a3_epoch_vehicles\cargoposes\jetski_cargo.rtm";
            interpolateTo[] = {"Unconscious",1};
            speed = -30;
            disableWeapons = 1;
            leftHandIKCurve[] = {0};
            rightHandIKCurve[] = {0};
        };
        class hoverboard_driver : Crew
        {
            file = "\x\addons\a3_epoch_community\models\Hoverboard\hoverboard_driver.rtm";
            interpolateTo[] = {"Unconscious",1};
            speed = -30;
            disableWeapons = 1;			
            leftHandIKCurve[] = {0};
            rightHandIKCurve[] = {0};
        };		
        class AovrPercMstpSnonWnonDf;
        class epoch_unarmed_jump : AovrPercMstpSnonWnonDf
        {
            file = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\un_jump.rtm";
            speed = 1.23849;
            forceaim = 1;
            looped = 0;
            soundEnabled = 0;
            disableWeapons = 0;
            canblendstep = 1;
            minPlayTime = 1;
            actions = "CivilRunActionsFL";
            InterpolateTo[] = {"AmovPercMsprSnonWnonDf_AmovPpneMstpSnonWnonDnon",0.02,"AmovPercMrunSnonWnonDf",0.02,"AmovPercMstpSnonWnonDnon",0.06,"AmovPercMwlkSnonWnonDfl",0.025,"AmovPercMrunSnonWnonDl",0.025,"AmovPercMrunSnonWnonDfr",0.025,"AmovPknlMrunSnonWnonDfl",0.03,"AmovPercMevaSnonWnonDfl",0.02,"Unconscious",0.1};
        };
    };
};

/*[[[end]]]*/

/*
	Author: Aaron Clark - EpochMod.com

    Contributors: Paul Tomany (rtm animations)

	Description:
	Custom hatchet and sledge swing sesture animations as well as a one finger salute.

    Licence:
    Arma Public License Share Alike (APL-SA) - https://www.bistudio.com/community/licenses/arma-public-license-share-alike

    Github:
    https://github.com/EpochModTeam/Epoch/tree/release/Sources/epoch_config/Configs/CfgGesturesMale.hpp
*/
/*[[[cog from arma_config_tools import *; json_to_arma()]]]*/
class CfgGesturesMale
{
    skeletonName = "OFP2_ManSkeleton";
    class ManActions {};
    class Actions
    {
        class NoActions
        {
            turnSpeed = 0;
            upDegree = 0;
            limitFast = 1;
            useFastMove = 0;
            stance = "ManStanceUndefined";
        };
    };
    class Default
    {
        actions = "NoActions";
        file = "";
        looped = 1;
        speed = 0.5;
        static = 0;
        relSpeedMin = 1;
        relSpeedMax = 1;
        soundEnabled = 0;
        soundOverride = "";
        soundEdge[] = {0.5,1};
        terminal = 0;
        ragdoll = 0;
        equivalentTo = "";
        connectAs = "";
        connectFrom[] = {};
        connectTo[] = {};
        interpolateWith[] = {};
        interpolateTo[] = {};
        interpolateFrom[] = {};
        mask = "empty";
        interpolationSpeed = 6;
        interpolationRestart = 0;
        preload = 0;
        disableWeapons = 1;
        enableOptics = 0;
        showWeaponAim = 1;
        enableMissile = 1;
        enableBinocular = 1;
        showItemInHand = 0;
        showItemInRightHand = 0;
        showHandGun = 0;
        canPullTrigger = 1;
        Walkcycles = 1;
        headBobMode = 0;
        headBobStrength = 0;
        leftHandIKBeg = 0;
        leftHandIKEnd = 0;
        rightHandIKBeg = 0;
        rightHandIKEnd = 0;
        leftHandIKCurve[] = {1};
        rightHandIKCurve[] = {1};
        forceAim = 0;
    };
    class States
    {
        class GestureReloadSR25 : Default
        {
            file = "\x\addons\a3_epoch_weapons\data\handanims\sr25_reload.rtm";
            looped = 0;
            speed = 0.3;
            mask = "handsWeapon";
            canPullTrigger = 0;
            rightHandIKBeg = 0;
            rightHandIKEnd = 0;
            rightHandIKCurve[] = {1};
            leftHandIKBeg = 1;
            leftHandIKEnd = 1;
            leftHandIKCurve[] = {0,1,0.008333,0,0.991667,0,1.0,1};
        };
        class GestureReloadSR25Prone : Default
        {
            file = "\x\addons\a3_epoch_weapons\data\handanims\sr25_reload_prone.rtm";
            looped = 0;
            speed = 0.3;
            mask = "handsWeapon";
            canPullTrigger = 0;
            rightHandIKBeg = 0;
            rightHandIKEnd = 0;
            rightHandIKCurve[] = {1};
            leftHandIKBeg = 1;
            leftHandIKEnd = 1;
            leftHandIKCurve[] = {0,1,0.008333,0,0.991667,0,1.0,1};
        };
        class GestureReloadL85A2 : Default
        {
            file = "\x\addons\a3_epoch_weapons\data\handanims\L85A2_Reload_anim.rtm";
            looped = 0;
            speed = 0.3;
            mask = "handsWeapon";
            canPullTrigger = 0;
            rightHandIKBeg = 0;
            rightHandIKEnd = 0;
            rightHandIKCurve[] = {1};
            leftHandIKBeg = 1;
            leftHandIKEnd = 1;
            leftHandIKCurve[] = {0,1,0.016667,1,0.02459,0,0.983333,0,0.991667,1};
        };
        class GestureReloadL85A2Prone : Default
        {
            file = "\x\addons\a3_epoch_weapons\data\handanims\L85A2_RIS_Reload_anim_prone.rtm";
            looped = 0;
            speed = 0.3;
            mask = "handsWeapon";
            canPullTrigger = 0;
            rightHandIKBeg = 0;
            rightHandIKEnd = 0;
            rightHandIKCurve[] = {1};
            leftHandIKBeg = 1;
            leftHandIKEnd = 1;
            leftHandIKCurve[] = {0,1,0.016667,1,0.02459,0,0.983333,0,0.991667,1};
        };
        class GestureReloadL85A2UGL : Default
        {
            file = "\x\addons\a3_epoch_weapons\data\handanims\L85A2_UGL_Reload_anim.rtm";
            looped = 0;
            speed = 0.3;
            mask = "handsWeapon";
            canPullTrigger = 0;
            rightHandIKBeg = 0;
            rightHandIKEnd = 0;
            rightHandIKCurve[] = {1};
            leftHandIKBeg = 1;
            leftHandIKEnd = 1;
            leftHandIKCurve[] = {0,1,0.016667,1,0.02459,0,0.983333,0,0.991667,1};
        };
        class GestureReloadL85A2UGLProne : Default
        {
            file = "\x\addons\a3_epoch_weapons\data\handanims\L85A2_RIS_Reload_anim_prone.rtm";
            looped = 0;
            speed = 0.3;
            mask = "handsWeapon";
            canPullTrigger = 0;
            rightHandIKBeg = 0;
            rightHandIKEnd = 0;
            rightHandIKCurve[] = {1};
            leftHandIKBeg = 1;
            leftHandIKEnd = 1;
            leftHandIKCurve[] = {0,1,0.016667,1,0.02459,0,0.983333,0,0.991667,1};
        };
        class GestureReloadL85A2RIS : Default
        {
            file = "\x\addons\a3_epoch_weapons\data\handanims\L85A2_RIS_Reload_anim.rtm";
            looped = 0;
            speed = 0.3;
            mask = "handsWeapon";
            canPullTrigger = 0;
            rightHandIKBeg = 0;
            rightHandIKEnd = 0;
            rightHandIKCurve[] = {1};
            leftHandIKBeg = 1;
            leftHandIKEnd = 1;
            leftHandIKCurve[] = {0,1,0.016667,1,0.02459,0,0.983333,0,0.991667,1};
        };
        class GestureReloadL85A2RISProne : Default
        {
            file = "\x\addons\a3_epoch_weapons\data\handanims\L85A2_RIS_Reload_anim_prone.rtm";
            looped = 0;
            speed = 0.3;
            mask = "handsWeapon";
            canPullTrigger = 0;
            rightHandIKBeg = 0;
            rightHandIKEnd = 0;
            rightHandIKCurve[] = {1};
            leftHandIKBeg = 1;
            leftHandIKEnd = 1;
            leftHandIKCurve[] = {0,1,0.016667,1,0.02459,0,0.983333,0,0.991667,1};
        };
        class GestureReloadpvcrifle : Default
        {
            file = "\x\addons\a3_epoch_weapons\pvc\data\pvc_rifle_handanim.rtm";//pvc_rifle_reload
            looped = 0;
            speed = 0.3;
            mask = "handsWeapon";
            canPullTrigger = 0;
            rightHandIKBeg = 0;
            rightHandIKEnd = 0;
            rightHandIKCurve[] = {1};
            leftHandIKBeg = 1;
            leftHandIKEnd = 1;
            leftHandIKCurve[] = {0,1,0.016667,1,0.02459,0,0.983333,0,0.991667,1};
        };
        class GestureReloadpvcrifleProne : Default
        {
            file = "\x\addons\a3_epoch_weapons\pvc\data\pvc_rifle_handanim.rtm";//pvc_rifle_reload
            looped = 0;
            speed = 0.3;
            mask = "handsWeapon";
            canPullTrigger = 0;
            rightHandIKBeg = 0;
            rightHandIKEnd = 0;
            rightHandIKCurve[] = {1};
            leftHandIKBeg = 1;
            leftHandIKEnd = 1;
            leftHandIKCurve[] = {0,1,0.016667,1,0.02459,0,0.983333,0,0.991667,1};
        };
 
 class GestureSwing0 : Default
        {
            file = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\hatch_swing1.rtm";
            looped = 0;
            speed = -0.6;
            mask = "handsWeapon_pst";
            headBobStrength = 0.2;
            headBobMode = 2;
            rightHandIKBeg = 1;
            rightHandIKEnd = 1;
            leftHandIKBeg = 1;
            leftHandIKEnd = 1;
        };
        class GestureSwing1 : Default
        {
            file = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\hatch_swing2.rtm";
            looped = 0;
            speed = -0.6;
            mask = "handsWeapon_pst";
            headBobStrength = 0.2;
            headBobMode = 2;
            rightHandIKBeg = 1;
            rightHandIKEnd = 1;
            leftHandIKBeg = 1;
            leftHandIKEnd = 1;
        };
        class GestureSwing2 : Default
        {
            file = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\hatch_swing3.rtm";
            looped = 0;
            speed = -0.6;
            mask = "handsWeapon_pst";
            headBobStrength = 0.2;
            headBobMode = 2;
            rightHandIKBeg = 1;
            rightHandIKEnd = 1;
            leftHandIKBeg = 1;
            leftHandIKEnd = 1;
        };
        class GestureFinger : Default
        {
            file = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\dat_bird.rtm";
            looped = 0;
            speed = 0.62051;
            mask = "handsWeapon_pst";
            headBobStrength = 0.4;
            headBobMode = 2;
            rightHandIKBeg = 1;
            rightHandIKEnd = 1;
            leftHandIKBeg = 1;
            leftHandIKEnd = 1;
        };
        class SledgeSwing : Default
        {
            file = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Sledge_swing.rtm";
            looped = 0;
            speed = -0.6;
            mask = "handsLauncher";
            headBobStrength = 0.2;
            headBobMode = 2;
            rightHandIKBeg = 0;
            rightHandIKEnd = 0;
            leftHandIKBeg = 0;
            leftHandIKEnd = 0;
        };
        class Gesturesuicide : Default
        {
            file = "\x\addons\a3_epoch_community\anim\suicide_gesture.rtm";
            looped = 0;
            speed = -3;
            mask = "handsWeapon_pst";
            headBobStrength = 0.2;
            headBobMode = 2;
            rightHandIKBeg = 1;
            rightHandIKEnd = 1;
            leftHandIKBeg = 1;
            leftHandIKEnd = 1;
        };
    };
    class BlendAnims
    {
        handsLauncher[] = {"head",1,"neck1",1,"neck",1,"launcher",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"Spine",1,"Spine1",1,"Spine2",1,"Spine3",1,"pelvis","MaskStart"};
    };
};
class CfgGesturesSapper : CfgGesturesMale
{
    skeletonName = "SapperSkeleton";
};

/*[[[end]]]*/

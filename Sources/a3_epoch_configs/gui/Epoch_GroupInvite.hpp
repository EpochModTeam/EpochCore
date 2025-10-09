class Epoch_GroupInvite {
	idd = -1400;
	movingEnable = 0;
	enableSimulation = 1;
	onLoad = "[] spawn { waitUntil {!isNull (findDisplay -1400)};_this call EPOCH_iGroup_onLoad}";
	class controlsBackground {
		class TopBG: IGUIBack
		{
			idc = 10;

			x = 0.334649 * safezoneW + safezoneX;
			y = 0.4076 * safezoneH + safezoneY;
			w = 0.319769 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])","(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
		};
		class MainBG: IGUIBack
		{
			idc = 11;

			x = 0.334959 * safezoneW + safezoneX;
			y = 0.4296 * safezoneH + safezoneY;
			w = 0.319767 * safezoneW;
			h = 0.1056 * safezoneH;
			colorBackground[] = {0,0,0,0.7};
		};
	};
	class controls {
		class MainText: RscText
		{
			idc = 20;

			text = "Epoch Group Menu";
			x = 0.333927 * safezoneW + safezoneX;
			y = 0.4076 * safezoneH + safezoneY;
			w = 0.128939 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class InfoText: RscText
		{
			idc = 21;
			text = "";
			x = 0.340116 * safezoneW + safezoneX;
			y = 0.4384 * safezoneH + safezoneY;
			w = 0.309452 * safezoneW;
			h = 0.0594 * safezoneH;
		};
		class BtnAccept: RscButton
		{
			idc = 30;
			action = "call EPOCH_iGroup_acceptInvite";

			text = "Accept Invite";
			x = 0.432952 * safezoneW + safezoneX;
			y = 0.5066 * safezoneH + safezoneY;
			w = 0.0618905 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class BtnRefuse: RscButton
		{
			idc = 31;
			action = "Epoch_invited_GroupUID = """";Epoch_invited_GroupName = """"; closeDialog 0"; //Should work but not sure about the script scope

			text = "Refuse Invite";
			x = 0.505158 * safezoneW + safezoneX;
			y = 0.5066 * safezoneH + safezoneY;
			w = 0.0619394 * safezoneW;
			h = 0.0221111 * safezoneH;
		};
	};
};

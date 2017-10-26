class EPOCH_createTempGrp
{
	idd = -1200;
	movingEnable = 0;
	enableSimulation = 1;
	onLoad = "[] spawn { waitUntil {!isNull (findDisplay -1200)};_this call EPOCH_cTempGroup_onLoad}";
	class controlsBackground
	{
		class TopBG: IGUIBack
		{
			idc = 10;
			x = "0.334649 * safezoneW + safezoneX";
			y = "0.4076 * safezoneH + safezoneY";
			w = "0.319769 * safezoneW";
			h = "0.022 * safezoneH";
			colorBackground[] = {0.8,0.5,0,0.7};
		};
		class MainBG: IGUIBack
		{
			idc = 11;
			x = "0.334959 * safezoneW + safezoneX";
			y = "0.4296 * safezoneH + safezoneY";
			w = "0.319767 * safezoneW";
			h = "0.0704 * safezoneH";
			colorBackground[] = {0,0,0,0.7};
		};
	};
	class controls
	{
		class MainText: RscText
		{
			idc = 20;
			text = "Epoch Temp Group Menu";
			x = "0.333927 * safezoneW + safezoneX";
			y = "0.4076 * safezoneH + safezoneY";
			w = "0.128939 * safezoneW";
			h = "0.022 * safezoneH";
		};
		class GroupName: RscEdit
		{
			idc = 21;
			onKeyDown = "_this call EPOCH_cGroup_groupText";
			x = "0.392723 * safezoneW + safezoneX";
			y = "0.4384 * safezoneH + safezoneY";
			w = "0.192892 * safezoneW";
			h = "0.022 * safezoneH";
		};
		class InfoText: RscText
		{
			idc = 22;
			text = "";
			x = "0.340116 * safezoneW + safezoneX";
			y = "0.467 * safezoneH + safezoneY";
			w = "0.245499 * safezoneW";
			h = "0.022 * safezoneH";
		};
		class GroupNameText: RscText
		{
			idc = 23;
			text = "Temp name:";
			x = "0.340116 * safezoneW + safezoneX";
			y = "0.4362 * safezoneH + safezoneY";
			w = "0.0515754 * safezoneW";
			h = "0.022 * safezoneH";
		};
		class BtnCreateGroup: RscButton
		{
			idc = 30;
			text = "Create Temp";
			action = "call EPOCH_cTempGroup_BtnCreate";
			x = "0.588297 * safezoneW + safezoneX";
			y = "0.43686 * safezoneH + safezoneY";
			w = "0.0618905 * safezoneW";
			h = "0.022 * safezoneH";
		};
		class BtnClose: RscButton
		{
			idc = 31;
			action = "closeDialog 0";
			text = "Close";
			x = "0.588297 * safezoneW + safezoneX";
			y = "0.4681 * safezoneH + safezoneY";
			w = "0.0619394 * safezoneW";
			h = "0.0221111 * safezoneH";
		};
	};
};

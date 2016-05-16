class MissionSelect
{
	idd = -3000;
	duration = -1;
	onLoad = "[] spawn { waitUntil {!isNull (findDisplay -3000) };_this call EPOCH_mission_refresh;}";
	class controls
	{
		class IGUIBack_3001: IGUIBack
		{
			idc = 3001;

			x = "0.310025 * safezoneW + safezoneX";
			y = "0.22222 * safezoneH + safezoneY";
			w = "0.390469 * safezoneW";
			h = "0.578 * safezoneH";
		};
		class RscListbox_1500: RscListBox
		{
			idc = 1500;
			onLBSelChanged = "_this call EPOCH_mission_description;";

			x = "0.316719 * safezoneW + safezoneX";
			y = "0.279 * safezoneH + safezoneY";
			w = "0.374531 * safezoneW";
			h = "0.323 * safezoneH";
		};
		class RscButtonMenu_2400: RscButtonMenu
		{
			idc = 2400;
			action = "if ((lbCurSel 1500) >= 0) then { call EPOCH_mission_accept; closeDialog 0;};";

			text = "CHOOSE";
			x = "0.316719 * safezoneW + safezoneX";
			y = "0.755 * safezoneH + safezoneY";
			w = "0.0717188 * safezoneW";
			h = "0.034 * safezoneH";
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
		};
		class RscButtonMenu_2401: RscButtonMenu
		{
			idc = 2401;
			action = "closeDialog 0";

			text = "CANCEL";
			x = "0.619531 * safezoneW + safezoneX";
			y = "0.755 * safezoneH + safezoneY";
			w = "0.0717188 * safezoneW";
			h = "0.034 * safezoneH";
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
		};
		class RscText_1000: RscText
		{
			idc = 1000;

			text = "Request from Trader.";
			x = "0.316719 * safezoneW + safezoneX";
			y = "0.228 * safezoneH + safezoneY";
			w = "0.374531 * safezoneW";
			h = "0.034 * safezoneH";
		};
		class RscText_1002: RscText
		{
			idc = 1001;

			text = "Description";
			x = "0.316719 * safezoneW + safezoneX";
			y = "0.636 * safezoneH + safezoneY";
			w = "0.374531 * safezoneW";
			h = "0.102 * safezoneH";
		};
	};
};

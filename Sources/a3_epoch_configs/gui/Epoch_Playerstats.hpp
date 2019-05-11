class PlayerStatsDialog
{
	idd = -1200;
	movingenable = 0;
	onLoad = "[] spawn {waitUntil {!isNull (findDisplay -1200)};_this call EPOCH_PlayerStatsDialog}";
	class Controls
	{
		class Menu: RscStructuredText
		{
			idc = -1;
			text = "<t align='center' color='#FFFF00' size='1.5'>Player Statistic<t/>";
			x = 0.2 * safezoneW + safezoneX;
			y = 0.027 * safezoneH + safezoneY;
			w = 0.6 * safezoneW;
			h = 0.044 * safezoneH;
			colorBackground[] = {-1,-1,-1,0};
		};
		class RscPicture_1200: RscPicture
		{
			idc = -1;
			text = "x\addons\a3_epoch_code\Data\UI\PlayerStatsBg.paa";
			x = 0.29375 * safezoneW + safezoneX;
			y = 0.126 * safezoneH + safezoneY;
			w = 0.4125 * safezoneW;
			h = 0.726 * safezoneH;
		};
		class RscStructuredText_1100: RscStructuredText
		{
			idc = 1100;
			size = 0.04;
			colorBackground[] = {0.02,0,0.03,0.6};
			x = 0.16 * safezoneW + safezoneX;
			y = 0.137 * safezoneH + safezoneY;
			w = 0.125 * safezoneW;
			h = 0.225 * safezoneH;
		};
		class RscStructuredText_1101: RscStructuredText_1100
		{
			idc = 1101;
			x = 0.16 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.125 * safezoneW;
			h = 0.225 * safezoneH;
		};
		class RscStructuredText_1102: RscStructuredText_1100
		{
			idc = 1102;
			x = 0.16 * safezoneW + safezoneX;
			y = 0.643 * safezoneH + safezoneY;
			w = 0.125 * safezoneW;
			h = 0.225 * safezoneH;
		};
		class RscStructuredText_1105: RscStructuredText_1100
		{
			idc = 1103;
			x = 0.717 * safezoneW + safezoneX;
			y = 0.137 * safezoneH + safezoneY;
			w = 0.125 * safezoneW;
			h = 0.225 * safezoneH;
		};	
		class RscStructuredText_1104: RscStructuredText_1100
		{
			idc = 1104;
			x = 0.717 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.125 * safezoneW;
			h = 0.225 * safezoneH;
		};
		class RscStructuredText_1103: RscStructuredText_1100
		{
			idc = 1105;
			x = 0.717 * safezoneW + safezoneX;
			y = 0.643 * safezoneH + safezoneY;
			w = 0.125 * safezoneW;
			h = 0.225 * safezoneH;
		};
	};
};

class ServerStatsDialog
{
	idd = -1200;
	movingenable = 0;
	onLoad = "[] spawn { waitUntil {!isNull (findDisplay -1200)};_this spawn EPOCH_ServerStatsDialog}";
	class Controls
	{
		class Menu: RscStructuredText
		{
			idc = -1;
			text = "<t align='center' color='#FFFF00' size='1.5'>Server Statistic<t/>";
			x = 0.2 * safezoneW + safezoneX;
			y = 0.027 * safezoneH + safezoneY;
			w = 0.6 * safezoneW;
			h = 0.044 * safezoneH;
			colorBackground[] = {-1,-1,-1,0};
		};
	};
};

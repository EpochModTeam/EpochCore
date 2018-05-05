class Epoch_CamDialog
{
	idd = -1200;
	movingenable = 0;
	onLoad = "";
	onUnload = "Epoch_ActiveCam = objnull";
	class Controls
	{
		class Menu: RscStructuredText
		{
			idc = -1;
			text = "<t align='center' color='#FFFF00' size='1.5'>Base Camera<t/>";
			x = 0.2 * safezoneW + safezoneX;
			y = 0.027 * safezoneH + safezoneY;
			w = 0.6 * safezoneW;
			h = 0.044 * safezoneH;
			colorBackground[] = {-1,-1,-1,0};
		};
		class Cam_Record_Pic: RscPicture
		{
			idc = -1;
			text = "\x\addons\a3_epoch_community\icons\cam_record.paa";
			x = 0.94 * safezoneW + safezoneX;
			y = 0.15 * safezoneH + safezoneY;
			w = 0.013 * safezoneW;
			h = 0.0215 * safezoneH;
		};
		class Cam_Title: RscText
		{
			idc = 1000;
			colorBackground[] = {0,0,0,0};
			text = "Cam 1";
			x = 0.954 * safezoneW + safezoneX;
			y = 0.13575 * safezoneH + safezoneY;
			w = 0.04 * safezoneW;
			h = 0.05 * safezoneH;
		};
		class Keys: RscStructuredText
		{
			idc = 1001;
			text = "";
			x = 0.915 * safezoneW + safezoneX;
			y = 0.2 * safezoneH + safezoneY;
			w = 0.09 * safezoneW;
			h = 0.25 * safezoneH;
			colorBackground[] = {0.02,0,0.03,0.6};
		};
	};
};

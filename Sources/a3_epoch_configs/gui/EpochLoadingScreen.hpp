class EpochLoadingScreen
{
	idd = 13377;
	onLoad = "uiNamespace setVariable ['EPOCH_loadingScreen',_this select 0]";
	onUnload = "uiNamespace setVariable ['EPOCH_loadingScreen',displayNull]";
	//onLoad = "[""onLoad"",_this,""RscDisplayLoading"",'Loading'] call compile preprocessfilelinenumbers ""A3\ui_f\scripts\initDisplay.sqf""";
	//onUnload = "[""onUnload"",_this,""RscDisplayLoading"",'Loading'] call compile preprocessfilelinenumbers ""A3\ui_f\scripts\initDisplay.sqf""";

	class controls
	{
		class ProgressMap: RscProgress
		{
			idc = 104; // progress bar, has to have idc 104
			colorBar[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])","(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"};
			texture = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.295761 * safezoneW + safezoneX;
			y = 0.764 * safezoneH + safezoneY;
			w = 0.408477 * safezoneW;
			h = 0.0066 * safezoneH;
		};
		class EpochLogo: RscPicture
		{
			idc = 40;
			text = "\x\addons\a3_epoch_code\Data\EpochLogo.paa";
			x = 0.291635 * safezoneW + safezoneX;
			y = 0.214 * safezoneH + safezoneY;
			w = 0.417761 * safezoneW;
			h = 0.2046 * safezoneH;
		};
		class LoadingText: RscStructuredText
		{
			idc = 50;
			text = "";
			class Attributes
			{
				size = "0.8 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				align = "center";
			};
			x = 0.314328 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.350767 * safezoneW;
			h = 0.0396 * safezoneH;
			sizeEx = "0.8 *((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};



	/*
	class controls
	{
		class MapBackTop: RscText
		{
			x = "safezoneX";
			y = "safezoneY";
			w = "safezoneW";
			idc = 1000;
			h = "2.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0,0,0,1};
		};
		class MapName: RscText
		{
			x = "safezoneX + 0.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY";
			w = "safezoneW - 0.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			idc = 1001;
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			sizeEx = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class MapAuthor: RscText
		{
			x = "safezoneX + 0.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 1.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			font = "PuristaLight";
			idc = 1002;
			w = "16 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {1,1,1,0.5};
			sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class MapBackBottom: RscText
		{
			x = "safezoneX";
			y = "safezoneY + safezoneH - 2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "safezoneW";
			idc = 1003;
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0,0,0,0.6};
		};
		class MapDescription: RscStructuredText //Map Description
		{
			style = 2;
			x = 0;
			y = "safezoneY + safezoneH - 1.75 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = 1;
			class Attributes
			{
				size = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				align = "center";
			};
			idc = 1102;
			h = "1.75 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ProgressMap: RscProgress
		{
			colorBar[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])","(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"};
			texture = "#(argb,8,8,3)color(1,1,1,1)";
			x = "safezoneX";
			y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + safezoneY";
			w = "safezoneW";
			idc = 104;
			h = "0.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ProgressMission: ProgressMap
		{
			idc = 1013;
			x = "1.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "10 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "16 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "0.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Disclaimer: RscControlsGroupNoScrollbars
		{
			x = "safezoneX + safezoneW - 19.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 3.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 2301;
			w = "18.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "3.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			class controls
			{
				class DisclaimerName: RscText
				{
					colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])","(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"};
					idc = 1009;
					text = "BETA";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "18.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class DisclaimerDescription: RscStructuredText
				{
					class Attributes
					{
						font = "PuristaLight";
						size = 0.8;
					};
					shadow = 0;
					colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",0.3};
					colorText[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])","(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"};
					text = "This is <t color='#eeeeee'>not final software</t>; content and technology is <t color='#eeeeee'>subject to change</t> and may still contain errors / lack certain features.";
					idc = 1101;
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "18.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
		class LoadingStart: RscControlsGroup
		{
			idc = 2310;
			x = "0 * safezoneW + safezoneX";
			y = "0 * safezoneH + safezoneY";
			w = "1 * safezoneW";
			h = "1 * safezoneH";
			class controls
			{
				class Black: RscText
				{
					idc = 1000;
					x = "0 * safezoneW";
					y = "0 * safezoneH";
					w = "1 * safezoneW";
					h = "1 * safezoneH";
					colorBackground[] = {0,0,0,1};
				};
				class Noise: RscPicture
				{
					idc = 1201;
					text = "\A3\Ui_f\data\IGUI\RscTitles\SplashArma3\arma3_splashNoise_ca.paa";
					x = "0 * safezoneW";
					y = "0 * safezoneH";
					w = "1 * safezoneW";
					h = "1 * safezoneH";
				};
				class Logo: RscPictureKeepAspect
				{
					idc = 1200;
					text = "\A3\Ui_f\data\Logos\arma3_splash_ca.paa";
					x = "0.25 * safezoneW";
					y = "0.3125 * safezoneH";
					w = "0.5 * safezoneW";
					h = "0.25 * safezoneH";
				};
			};
		};
	};
	*/
	class controlsBackground
	{
		class Black: RscText
		{
			colorBackground[] = {0,0,0,1};
			x = "safezoneXAbs";
			y = "safezoneY";
			w = "safezoneWAbs";
			h = "safezoneH";
		};
		class Map: RscPicture
		{
			idc = 999;
			text = "#(argb,8,8,3)color(0,0,0,1)";
			colorText[] = {1,1,1,0.42};
			x = "safezoneX";
			y = "safezoneY - (safezoneW * 4/3) / 4";
			w = "safezoneW";
			h = "safezoneW * 4/3";
		};
		class CA_Vignette: RscVignette
		{
			colorText[] = {0,0,0,1};
		};
		class Noise: RscPicture
		{
			text = "\A3\Ui_f\data\GUI\Cfg\LoadingScreens\LoadingNoise_ca.paa";
			colorText[] = {1,1,1,1};
			x = "safezoneX";
			y = "safezoneY";
			w = "safezoneW";
			h = "safezoneH";
		};
	};
};

class QuickTake
{
	idd = -5;
	duration = -1;
	onload = "setMousePosition [0.5, 0.5];";
	class controls
	{
		class quick_take_bg : IGUIBack
		{
			idc = 2201;
			x = 0.411875 * safezoneW + safezoneX;
			y = 0.264874 * safezoneH + safezoneY;
			w = 0.17625 * safezoneW;
			h = 0.470252 * safezoneH;
		};

		class GroundContainer : RscListBox
		{
			idc = 1500;
			style = LB_MULTI;
			sizeEx = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			sizeEx2 = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			rowHeight = "2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			canDrag = 1;
			colorText[] = { 1, 1, 1, 1 };
			colorBackground[] = { 0, 0, 0, 0 };
			itemBackground[] = { 1, 1, 1, 0.1 };
			itemSpacing = 0.001;
			x = 0.416771 * safezoneW + safezoneX;
			y = 0.274279 * safezoneH + safezoneY;
			w = 0.166458 * safezoneW;
			h = 0.413822 * safezoneH;
		};
		/*
		class Take_Btn : RscButtonMenu
		{
			idc = 2400;
			text = "Take";
			x = 0.416771 * safezoneW + safezoneX;
			y = 0.697506 * safezoneH + safezoneY;
			w = 0.0489583 * safezoneW;
			h = 0.0282151 * safezoneH;
			action = "call EPOCH_QuickTake";
		};
		*/
		class RscButtonMenu_2401 : RscButtonMenu
		{
			idc = 2401;
			text = "Take All";
			x = 0.534271 * safezoneW + safezoneX;
			y = 0.697506 * safezoneH + safezoneY;
			w = 0.0489583 * safezoneW;
			h = 0.0282151 * safezoneH;
			action = "call EPOCH_QuickTakeAll";
		};
	};
};

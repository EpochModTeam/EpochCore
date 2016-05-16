class TapOut
{
	idd = -6;
	duration = -1;
	onload = "setMousePosition [0.5, 0.5];";
	class controls
	{
		class RscText_1000: RscText
		{
			idc = 1000;
			text = "Vital signs critical";
			x = 0.392292 * safezoneW + safezoneX;
			y = 0.46238 * safezoneH + safezoneY;
			w = 0.381875 * safezoneW;
			h = 0.0564303 * safezoneH;
			colorBackground[] = {0,0,0,0};
			 colorText[] = {1,1,1,0.7};
			shadow = 0;
			sizeEx = 0.08;
		};
		class RscPicture_1200: RscPicture
		{
			idc = 1200;
			style = 48 + 0x800;
			text = "\x\addons\a3_epoch_code\Data\UI\heart_ca.paa";
			x = 0.568542 * safezoneW + safezoneX;
			y = 0.434165 * safezoneH + safezoneY;
			w = 0.078125 * safezoneW;
			h = 0.131671 * safezoneH;
		};

		class tapout : RscButton
		{
			idc = 1600;
			text = "Respawn";
			x = 0.436354 * safezoneW + safezoneX;
			y = 0.631671 * safezoneH + safezoneY;
			w = 0.127292 * safezoneW;
			h = 0.0376202 * safezoneH;
			action = "(findDisplay 46) closeDisplay 0;";
			onKeyDown = "if (_this select 1 == 0x01) then {(findDisplay 46) closeDisplay 0;};";
		};
	};
};
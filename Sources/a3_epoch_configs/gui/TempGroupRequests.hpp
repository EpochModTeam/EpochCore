class TempGroupRequests
{
	idd = -1500;
	duration = -1;
	onLoad = "setMousePosition [0.5, 0.5]; [] spawn { uiSleep 0.5; waitUntil {_this call EPOCH_iTempGroup_refresh; uiSleep 1; isNull (findDisplay -1500)};}";
	class controls
	{
		class IGUIBack_2200: IGUIBack
		{
			idc = 2200;
			x = "0.304167 * safezoneW + safezoneX";
			y = "0.264874 * safezoneH + safezoneY";
			w = "0.391667 * safezoneW";
			h = "0.470252 * safezoneH";
		};
		class RscListbox_1500: RscListBox
		{
			idc = 1500;
			x = "0.309062 * safezoneW + safezoneX";
			y = "0.311899 * safezoneH + safezoneY";
			w = "0.381875 * safezoneW";
			h = "0.376202 * safezoneH";
			onLBSelChanged = "missionNamespace setVariable [""Epoch_invited_tempGroupUID"",(_this select 0) lbData (_this select 1)]; missionNamespace setVariable [""Epoch_invited_tempGroupName"",(_this select 0) lbText (_this select 1)];";
		};
		class RscButtonMenu_2400: RscButtonMenu
		{
			idc = 2400;
			text = "ACCEPT";
			x = "0.304167 * safezoneW + safezoneX";
			y = "0.697506 * safezoneH + safezoneY";
			w = "0.0832292 * safezoneW";
			h = "0.0376202 * safezoneH";
			action = "if ((lbCurSel 1500) >= 0) then { call EPOCH_iTempGroup_acceptInvite; Epoch_invited_tempGroupUIDs deleteAt (lbCurSel 1500); closeDialog 0;};";
		};
		class RscButtonMenu_2401: RscButtonMenu
		{
			idc = 2401;
			text = "CANCEL";
			x = "0.612604 * safezoneW + safezoneX";
			y = "0.697506 * safezoneH + safezoneY";
			w = "0.0832292 * safezoneW";
			h = "0.0376202 * safezoneH";
			action = "closeDialog 0";
		};
		class RscText_1000: RscText
		{
			idc = 1000;
			text = "Temp Group requests";
			x = "0.309062 * safezoneW + safezoneX";
			y = "0.274279 * safezoneH + safezoneY";
			w = "0.0685417 * safezoneW";
			h = "0.0376202 * safezoneH";
		};
		class RscButtonMenu_2402: RscButtonMenu
		{
			idc = 2402;
			text = "REMOVE";
			x = "0.387396 * safezoneW + safezoneX";
			y = "0.697506 * safezoneH + safezoneY";
			w = "0.0832292 * safezoneW";
			h = "0.0376202 * safezoneH";
			action = "if ((lbCurSel 1500) >= 0) then {Epoch_invited_tempGroupUIDs deleteAt (lbCurSel 1500); }; ";
		};
		class RscButtonMenu_2403: RscButtonMenu
		{
			idc = 2403;
			text = "CLEAR ALL";
			x = "0.470625 * safezoneW + safezoneX";
			y = "0.697506 * safezoneH + safezoneY";
			w = "0.0832292 * safezoneW";
			h = "0.0376202 * safezoneH";
			action = "Epoch_invited_tempGroupUIDs = [];";
		};
	};
};

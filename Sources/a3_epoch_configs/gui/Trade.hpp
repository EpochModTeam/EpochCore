class Trade
{
	idd = -1900;
	// onLoad = "player setVariable [""TRADE_ACTIVE"", EPOCH_p2ptradeTarget, true];";
	onload = "setMousePosition [0.5, 0.5];";
	onUnload = "EPOCH_pendingP2ptradeTarget = ObjNull;";
	class controls
	{
		class IGUIBack_2200 : IGUIBack
		{
			idc = 2200;
			x = 0.29375 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.4125 * safezoneW;
			h = 0.55 * safezoneH;
		};
		class Inventorylist: RscListbox
		{
			idc = 1500;
			canDrag = 1;
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.385 * safezoneH;
			onLBDblClick = "_index = lbAdd [1501, ((_this select 0) lbText (_this select 1))]; lbSetData [1501, _index, ((_this select 0) lbData (_this select 1))]; lbSetPicture [1501, _index, ((_this select 0) lbPicture (_this select 1))]; (_this select 0) lbDelete (_this select 1);";
			onLBDrop = "_index = lbAdd [1501, ((_this select 0) lbText (_this select 1))]; lbSetData [1501, _index, ((_this select 0) lbData (_this select 1))]; lbSetPicture [1501, _index, ((_this select 0) lbPicture (_this select 1))]; (_this select 0) lbDelete (_this select 1);";
		};
		class RscCombo_2100: RscCombo
		{
			idc = 2100;
			x = 0.309219 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.022 * safezoneH;
			onLBSelChanged = "_this call EPOCH_tradeFilter";
		};
		class youroffer: RscListbox
		{
			idc = 1501;
			canDrag = 1;
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.128906 * safezoneW;
			h = 0.407 * safezoneH;
			onLBDblClick = "_index = lbAdd [1500, ((_this select 0) lbText (_this select 1))]; lbSetData [1500, _index, ((_this select 0) lbData (_this select 1))]; lbSetPicture [1500, _index, ((_this select 0) lbPicture (_this select 1))]; (_this select 0) lbDelete (_this select 1);";
			onLBDrop = "_index = lbAdd [1500, ((_this select 0) lbText (_this select 1))]; lbSetData [1500, _index, ((_this select 0) lbData (_this select 1))]; lbSetPicture [1500, _index, ((_this select 0) lbPicture (_this select 1))]; (_this select 0) lbDelete (_this select 1);";
		};
		class othersoffer: RscListbox
		{
			idc = 1502;
			x = 0.572187 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.128906 * safezoneW;
			h = 0.407 * safezoneH;
		};
		class RscText_1000: RscText
		{
			idc = 1000;
			text = "Your Offer";
			x = 0.448438 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.033 * safezoneH;
			//sizeEx = 2 * GUI_GRID_H;
		};
		class RscText_1001: RscText
		{
			idc = 1001;
			text = "Trade Offer";
			x = 0.5825 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.033 * safezoneH;
			//sizeEx = 2 * GUI_GRID_H;
		};
		class RscText_1002: RscText
		{
			idc = 1002;
			text = "Inventory";
			x = 0.309219 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.033 * safezoneH;
			//sizeEx = 2 * GUI_GRID_H;
		};
		class RscButtonMenu_2400: RscButtonMenu
		{
			idc = 2400;
			text = "ACCEPT";
			x = 0.587656 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.0464062 * safezoneW;
			h = 0.033 * safezoneH;
			//sizeEx = 1 * GUI_GRID_H;
			action = "call EPOCH_makep2pTrade";
		};
		class RscButtonMenu_2401: RscButtonMenu
		{
			idc = 2401;
			text = "Decline";
			x = 0.644375 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.0464062 * safezoneW;
			h = 0.033 * safezoneH;
			//sizeEx = 1 * GUI_GRID_H;
			action = "closeDialog 0";
		};
		class RscPicture_1200 : RscPicture
		{
			idc = 1200;
			style = 48 + 0x800;
			text = "\x\addons\a3_epoch_code\Data\UI\cc_ca.paa";
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.698 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.066 * safezoneH;
		};

		// Crypto
		class RscEdit_1400 : RscEdit
		{
			idc = 1400;
			colorBackground[] = { 0, 0, 0, 0.1 };
			x = 0.345312 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.033 * safezoneH;
			onKeyUp = "[_this,EPOCH_playerCrypto] call EPOCH_onChar;";
		};

	};
};

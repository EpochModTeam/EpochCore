class TradeNPCMenu
{
	idd = -8;
	duration = -1;
	onload = "setMousePosition [0.5, 0.5];";
	class controls
	{
		class RscPicture_1203 : RscPicture
		{
			idc = 1203;
			text = "\x\addons\a3_epoch_code\Data\UI\UIBG_ca.paa";
			x = 0.460833 * safezoneW + safezoneX;
			y = 0.142608 * safezoneH + safezoneY;
			w = 0.279063 * safezoneW;
			h = 0.526683 * safezoneH;
		};
		class RscPicture_1201 : RscPicture
		{
			idc = 1201;
			text = "\x\addons\a3_epoch_code\Data\UI\UIBG_ca.paa";
			x = 0.460833 * safezoneW + safezoneX;
			y = 0.51881 * safezoneH + safezoneY;
			w = 0.279063 * safezoneW;
			h = 0.291556 * safezoneH;
		};
		class RscPicture_1202 : RscPicture
		{
			idc = 1202;
			text = "\x\addons\a3_epoch_code\Data\UI\UIBG_ca.paa";
			x = 0.260104 * safezoneW + safezoneX;
			y = 0.142608 * safezoneH + safezoneY;
			w = 0.279063 * safezoneW;
			h = 0.526683 * safezoneH;
		};
		class RscPicture_1200 : RscPicture
		{
			idc = 1200;
			text = "\x\addons\a3_epoch_code\Data\UI\UIBG_ca.paa";
			x = 0.260104 * safezoneW + safezoneX;
			y = 0.51881 * safezoneH + safezoneY;
			w = 0.279063 * safezoneW;
			h = 0.291556 * safezoneH;
		};

		class RscCombo_2100: RscCombo
		{
				idc = 42100;
				x = 0.377604 * safezoneW + safezoneX;
				y = 0.227254 * safezoneH + safezoneY;
				w = 0.1175 * safezoneW;
				h = 0.0188101 * safezoneH;
				onLBSelChanged = "_this call EPOCH_NPCTraderMenuFilter";
		};
		class RscCombo_2101: RscCombo
		{
				idc = 42101;
				x = 0.578333 * safezoneW + safezoneX;
				y = 0.227254 * safezoneH + safezoneY;
				w = 0.0979167 * safezoneW;
				h = 0.0188101 * safezoneH;
				onLBSelChanged = "_this call EPOCH_NPCTraderMenuFilter";
		};
		class RscListbox_playerInventory: RscListbox
		{
				idc = 41500;
				x = 0.304167 * safezoneW + safezoneX;
				y = 0.264874 * safezoneH + safezoneY;
				w = 0.190937 * safezoneW;
				h = 0.282151 * safezoneH;
				onLBDblClick = "[41501,_this] call EPOCH_npcTraderAdd";
				onLBDrop = "[41501,_this] call EPOCH_npcTraderAdd";
				onLoad = "ctrlSetFocus (_this select 0)";
		};
		class RscListbox_playerOffer: RscListbox
		{
				idc = 41501;
				x = 0.304167 * safezoneW + safezoneX;
				y = 0.584645 * safezoneH + safezoneY;
				w = 0.190937 * safezoneW;
				h = 0.150481 * safezoneH;
				onLBDblClick = "[41500,_this] call EPOCH_npcTraderAdd";
				onLBDrop = "[41500,_this] call EPOCH_npcTraderAdd";
		};
		class RscListbox_npcOffer: RscListbox
		{
				idc = 41502;
				x = 0.504896 * safezoneW + safezoneX;
				y = 0.584645 * safezoneH + safezoneY;
				w = 0.190937 * safezoneW;
				h = 0.150481 * safezoneH;
				onLBDblClick = "[41503,_this] call EPOCH_npcTraderAdd3";
				onLBDrop = "[41503,_this] call EPOCH_npcTraderAdd3";
		};
		class RscListbox_npcInventory : RscListNBox
		{
			idc = 41503;
			columns[] = { 0.1, 0, 0.2 };

			colorPicture[] = { 1, 1, 1, 1 };
			colorPictureSelected[] = { 1, 1, 1, 1 };
			colorPictureDisabled[] = { 1, 1, 1, 1 };

			x = 0.504896 * safezoneW + safezoneX;
			y = 0.255469 * safezoneH + safezoneY;
			w = 0.190937 * safezoneW;
			h = 0.282151 * safezoneH;

			onLBDblClick = "[41502,_this] call EPOCH_npcTraderAdd2";
			onLBDrop = "[41502,_this] call EPOCH_npcTraderAdd2";
	};

		class RscText_1000: RscText
		{
				idc = -1;
				text = "INVENTORY";
				x = 0.304167 * safezoneW + safezoneX;
				y = 0.227254 * safezoneH + safezoneY;
				w = 0.0783333 * safezoneW;
				h = 0.0188101 * safezoneH;
		};
		class RscText_1001: RscText
		{
				idc = -1;
				text = "SELLING";
				x = 0.304167 * safezoneW + safezoneX;
				y = 0.55643 * safezoneH + safezoneY;
				w = 0.0783333 * safezoneW;
				h = 0.0188101 * safezoneH;
		};
		class RscText_1002: RscText
		{
				idc = -1;
				text = "BUYING";
				x = 0.5 * safezoneW + safezoneX;
				y = 0.55643 * safezoneH + safezoneY;
				w = 0.0783333 * safezoneW;
				h = 0.0188101 * safezoneH;
		};
		class RscText_1003: RscText
		{
				idc = -1;
				text = "VENDOR ITEMS";
				x = 0.504896 * safezoneW + safezoneX;
				y = 0.227254 * safezoneH + safezoneY;
				w = 0.0783333 * safezoneW;
				h = 0.0188101 * safezoneH;
		};
		class RscText_1004: RscText
		{
				idc = 41004;
				text = "0 Krypto";
				x = 0.377604 * safezoneW + safezoneX;
				y = 0.55643 * safezoneH + safezoneY;
				w = 0.112604 * safezoneW;
				h = 0.0188101 * safezoneH;
		};
		class RscText_1005: RscText
		{
				idc = 41005;
				text = "0 Krypto";
				x = 0.583229 * safezoneW + safezoneX;
				y = 0.55643 * safezoneH + safezoneY;
				w = 0.112604 * safezoneW;
				h = 0.0188101 * safezoneH;
		};
		class RscButtonMenu_2400: RscButtonMenu
		{
				idc = 42400;
				text = "TRADE";
				x = 0.480417 * safezoneW + safezoneX;
				y = 0.763341 * safezoneH + safezoneY;
				w = 0.0391667 * safezoneW;
				h = 0.0282151 * safezoneH;
				action = "cursorTarget call EPOCH_startNpcTrade";
		};
		class RscButtonMenuCancel_2700: RscButtonMenuCancel
		{
			idc = -1;
			text = "X";
			x = 0.681146 * safezoneW + safezoneX;
			y = 0.227254 * safezoneH + safezoneY;
			w = 0.0146875 * safezoneW;
			h = 0.0188101 * safezoneH;
			action = "closeDialog 0";
		};
	};
};

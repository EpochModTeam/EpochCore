class InteractBank
{
	idd = -13;
	duration = -1;
	onLoad = "setMousePosition[0.5, 0.5]; call EPOCH_showStats; [] spawn { uiSleep 0.5; waitUntil {ctrlSetText [1005,format['%1',EPOCH_bankBalance]]; uiSleep 1; isNull (findDisplay -13)};}";
	class controls
	{
		class IGUIBack_2200 : IGUIBack
		{
			idc = 2200;
			x = 0;
			y = 0;
			w = 1;
			h = 1;
		};
		class RscListbox_1500 : RscListbox
		{
			idc = 21500;
			x = 0.7375;
			y = 0.04;
			w = 0.2375;
			h = 0.64;
		};
		class transfer_amount : RscEdit
		{
			idc = 1400;
			text = "0";
			x = 0.7375;
			y = 0.78;
			w = 0.2375;
			h = 0.08;
			onKeyUp = "[_this,EPOCH_bankBalance] call EPOCH_onChar;";
		};
		class transfer_btn : RscButton
		{
			idc = 1600;
			text = "Transfer";
			x = 0.375;
			y = 0.9;
			w = 0.2375;
			h = 0.08;
			action = "call EPOCH_startBankTransfer;";
		};
		class RscEdit_deposit : RscEdit
		{
			idc = 1401;
			text = "0";
			x = 0.375;
			y = 0.78;
			w = 0.2375;
			h = 0.08;
			onKeyUp = "[_this,EPOCH_playerCrypto] call EPOCH_onChar;";
		};
		class RscEdit_withdraw : RscEdit
		{
			idc = 1402;
			text = "0";
			x = 0.025;
			y = 0.78;
			w = 0.2375;
			h = 0.08;
			onKeyUp = "[_this,EPOCH_bankBalance] call EPOCH_onChar;";
		};
		class RscText_1001 : RscText
		{
			idc = 1001;
			text = "Withdraw";
			shadow = 0;
			x = 0.025;
			y = 0.7;
			w = 0.2375;
			h = 0.06;
		};
		class RscText_1002 : RscText
		{
			idc = 1002;
			text = "Deposit";
			shadow = 0;
			x = 0.375;
			y = 0.7;
			w = 0.2375;
			h = 0.06;
		};
		class RscText_1003 : RscText
		{
			idc = 1003;
			text = "Transfer";
			shadow = 0;
			x = 0.7375;
			y = 0.7;
			w = 0.2375;
			h = 0.06;
		};
		class RscPicture_1200 : RscPicture
		{
			idc = 1200;
			style = 48 + 0x800;
			text = "";
			x = 0.9;
			y = 0.88;
			w = 0.1;
			h = 0.1;
		};
		class RscText_1004 : RscText
		{
			idc = 1004;
			text = "Epoch Corp. Retrocrypt v0.217";
			shadow = 0;
			x = 0.175;
			y = 0.38;
			w = 0.3625;
			h = 0.04;
		};
		class RscText_1005 : RscText
		{
			idc = 1005;
			text = "0";
			shadow = 0;
			x = 0.1125;
			y = 0.02;
			w = 0.5875;
			h = 0.08;
			sizeEx = "2.0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class RscPicture_1201 : RscPicture
		{
			idc = 1201;
			style = 48 + 0x800;
			text = "\x\addons\a3_epoch_code\Data\UI\cc_ca.paa";
			x = 0;
			y = 0;
			w = 0.1;
			h = 0.1;
		};
	};
};

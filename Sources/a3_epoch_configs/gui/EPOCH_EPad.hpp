class RscButton_EPad : RscButton
{
	colorFocused[] = {0,0,0,0.5};
	colorBackgroundActive[] = {0,0,0,0.5};
	w = 0.04 * safezoneW;                                             
	h = 0.06 * safezoneH;
	action = "";
};
class EPad_Button_Backgr : RscPicture
{
	text = "";
	w = 0.04 * safezoneW;
	h = 0.06 * safezoneH;
};
class EPad_Button_Txt : RscText
{
	style = 0x02;
	w = 0.04 * safezoneW;
	h = 0.016 * safezoneH;
	colorBackground[] = {0,0,0,0.5};
	colorText[] = {1,1,1,1};
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.7)";
	text = "";
};

class RscButtonPDATrans : RscButton
{
	fade = 0;
	colorText[] = {1,1,1,0};
	colorDisabled[] = {1,1,1,0};
	colorBackground[] = {0,0,0,0};
	colorBackgroundDisabled[] = {0,0,0,0};
	colorBackgroundActive[] = {0,0,0,0};
	colorFocused[] = {0,0,0,0};
	colorShadow[] = {0,0,0,0};
	colorBorder[] = {0,0,0,0};
	shadow = 2;
};

class epoch_tablet_gui
{
	idd = 9898;
	movingEnabled = false;
	onLoad = "[] spawn {waituntil {!isnull (finddisplay 9898)}; Epoch_E_Pad_Page = 1; ['',true] call EPOCH_EPad_dialog}";
	class controls
	{
		class background: RscPicture
		{
			idc = 1200;
			text = "x\addons\a3_epoch_code\Data\UI\epad\epoch_tablet_back.paa";
			x = 0.185 * safezoneW + safezoneX;
			y = 0.115 * safezoneH + safezoneY;
			w = 0.636 * safezoneW;
			h = 0.84 * safezoneH;
		};
		class Spacer: RscButtonPDATrans
		{
			idc = 1599;
			x = 0 * safezoneW + safezoneX;
			y = 0 * safezoneH + safezoneY;
			w = 0 * safezoneW;
			h = 0 * safezoneH;
			action = "";
			tooltip = "";
		};
		class close: RscButtonPDATrans
		{
			idc = 1600;
			x = 0.575 * safezoneW + safezoneX;
			y = 0.214 * safezoneH + safezoneY;
			w = 0.029 * safezoneW;
			h = 0.044 * safezoneH;
			action = "closeDialog 0;";
			tooltip = "Close PDA";
		};
		class app1: RscButton_EPad
		{
			idc = 1601;
			x = 0.416 * safezoneW + safezoneX;                                  
			y = 0.295 * safezoneH + safezoneY;                                  
		};
		class app1_background: EPad_Button_Backgr
		{
			idc = 1701;
			x = 0.416 * safezoneW + safezoneX;
			y = 0.295 * safezoneH + safezoneY;
		};
		class app1txt: EPad_Button_Txt
		{
			idc = 1801;
			x = 0.416 * safezoneW + safezoneX;
			y = (0.295+0.06) * safezoneH + safezoneY;
		};
		class app2: RscButton_EPad
		{
			idc = 1602;
			x = 0.473 * safezoneW + safezoneX;
			y = 0.295 * safezoneH + safezoneY;
		};
		class app2_background: EPad_Button_Backgr
		{
			idc = 1702;
			x = 0.473 * safezoneW + safezoneX;
			y = 0.295 * safezoneH + safezoneY;
		};
		class app2txt: EPad_Button_Txt
		{
			idc = 1802;
			x = 0.473 * safezoneW + safezoneX;
			y = (0.295+0.06) * safezoneH + safezoneY;
		};
		class app3: RscButton_EPad
		{
			idc = 1603;
			x = 0.53 * safezoneW + safezoneX;
			y = 0.295 * safezoneH + safezoneY;
		};
		class app3_background: EPad_Button_Backgr
		{
			idc = 1703;
			x = 0.53 * safezoneW + safezoneX;
			y = 0.295 * safezoneH + safezoneY;
		};
		class app3txt: EPad_Button_Txt
		{
			idc = 1803;
			x = 0.53 * safezoneW + safezoneX;
			y = (0.295+0.06) * safezoneH + safezoneY;
		};
		class app4: RscButton_EPad
		{
			idc = 1604;
			x = 0.416 * safezoneW + safezoneX;
			y = 0.377 * safezoneH + safezoneY;
		};
		class app4_background: EPad_Button_Backgr
		{
			idc = 1704;
			x = 0.416 * safezoneW + safezoneX;
			y = 0.377 * safezoneH + safezoneY;
		};
		class app4txt: EPad_Button_Txt
		{
			idc = 1804;
			x = 0.416 * safezoneW + safezoneX;
			y = (0.377+0.06) * safezoneH + safezoneY;
		};
		class app5: RscButton_EPad
		{
			idc = 1605;
			x = 0.473 * safezoneW + safezoneX;
			y = 0.377 * safezoneH + safezoneY;
		};
		class app5_background: EPad_Button_Backgr
		{
			idc = 1705;
			x = 0.473 * safezoneW + safezoneX;
			y = 0.377 * safezoneH + safezoneY;
		};
		class app5txt: EPad_Button_Txt
		{
			idc = 1805;
			x = 0.473 * safezoneW + safezoneX;
			y = (0.377+0.06) * safezoneH + safezoneY;
		};
		class app6: RscButton_EPad
		{
			idc = 1606;
			x = 0.53 * safezoneW + safezoneX;
			y = 0.377 * safezoneH + safezoneY;
		};
		class app6_background: EPad_Button_Backgr
		{
			idc = 1706;
			x = 0.53 * safezoneW + safezoneX;
			y = 0.377 * safezoneH + safezoneY;
		};
		class app6txt: EPad_Button_Txt
		{
			idc = 1806;
			x = 0.53 * safezoneW + safezoneX;
			y = (0.377+0.06) * safezoneH + safezoneY;
		};
		class app7: RscButton_EPad
		{
			idc = 1607;
			x = 0.416 * safezoneW + safezoneX;
			y = 0.495 * safezoneH + safezoneY;
		};
		class app7_background: EPad_Button_Backgr
		{
			idc = 1707;
			x = 0.416 * safezoneW + safezoneX;
			y = 0.495 * safezoneH + safezoneY;
		};
		class app7txt: EPad_Button_Txt
		{
			idc = 1807;
			x = 0.416 * safezoneW + safezoneX;
			y = (0.495+0.06) * safezoneH + safezoneY;
		};
		class app8: RscButton_EPad
		{
			idc = 1608;
			x = 0.473 * safezoneW + safezoneX;
			y = 0.495 * safezoneH + safezoneY;
		};
		class app8_background: EPad_Button_Backgr
		{
			idc = 1708;
			x = 0.473 * safezoneW + safezoneX;
			y = 0.495 * safezoneH + safezoneY;
		};
		class app8txt: EPad_Button_Txt
		{
			idc = 1808;
			x = 0.473 * safezoneW + safezoneX;
			y = (0.495+0.06) * safezoneH + safezoneY;
		};
		class app9: RscButton_EPad
		{
			idc = 1609;
			x = 0.53 * safezoneW + safezoneX;
			y = 0.495 * safezoneH + safezoneY;
		};
		class app9_background: EPad_Button_Backgr
		{
			idc = 1709;
			x = 0.53 * safezoneW + safezoneX;
			y = 0.495 * safezoneH + safezoneY;
		};
		class app9txt: EPad_Button_Txt
		{
			idc = 1809;
			x = 0.53 * safezoneW + safezoneX;
			y = (0.495+0.06) * safezoneH + safezoneY;
		};
		class app10: RscButton_EPad
		{
			idc = 1610;
			x = 0.416 * safezoneW + safezoneX;
			y = 0.541 * safezoneH + safezoneY;
		};
		class app10_background: EPad_Button_Backgr
		{
			idc = 1710;
			x = 0.416 * safezoneW + safezoneX;
			y = 0.541 * safezoneH + safezoneY;
		};
		class app10txt: EPad_Button_Txt
		{
			idc = 1810;
			x = 0.416 * safezoneW + safezoneX;
			y = (0.541+0.06) * safezoneH + safezoneY;
		};
		class app11: RscButton_EPad
		{
			idc = 1611;
			x = 0.473 * safezoneW + safezoneX;
			y = 0.541 * safezoneH + safezoneY;
		};
		class app11_background: EPad_Button_Backgr
		{
			idc = 1711;
			x = 0.473 * safezoneW + safezoneX;
			y = 0.541 * safezoneH + safezoneY;
		};
		class app11txt: EPad_Button_Txt
		{
			idc = 1811;
			x = 0.473 * safezoneW + safezoneX;
			y = (0.541+0.06) * safezoneH + safezoneY;
		};
		class app12: RscButton_EPad
		{
			idc = 1612;
			x = 0.53 * safezoneW + safezoneX;
			y = 0.541 * safezoneH + safezoneY;
		};
		class app12_background: EPad_Button_Backgr
		{
			idc = 1712;
			x = 0.53 * safezoneW + safezoneX;
			y = 0.541 * safezoneH + safezoneY;
		};
		class app12txt: EPad_Button_Txt
		{
			idc = 1812;
			x = 0.53 * safezoneW + safezoneX;
			y = (0.541+0.06) * safezoneH + safezoneY;
		};
		class app13: RscButton_EPad	// prev page
		{
			idc = 1614;
			x = 0.416 * safezoneW + safezoneX;
			y = 0.623 * safezoneH + safezoneY;
		};
		class app13_background: EPad_Button_Backgr
		{
			idc = 1714;
			text = "x\addons\a3_epoch_code\Data\UI\epad\back_ca.paa";
			tooltip = "prev page";                                                             
			x = 0.416 * safezoneW + safezoneX;
			y = 0.623 * safezoneH + safezoneY;
		};
		class app14: RscButton_EPad
		{
			idc = 1613;
			x = 0.473 * safezoneW + safezoneX;
			y = 0.623 * safezoneH + safezoneY;
		};
		class app14_background: EPad_Button_Backgr
		{
			idc = 1713;
			x = 0.473 * safezoneW + safezoneX;
			y = 0.623 * safezoneH + safezoneY;
		};
		class app14txt: EPad_Button_Txt
		{
			idc = 1814;
			x = 0.473 * safezoneW + safezoneX;
			y = (0.623+0.06) * safezoneH + safezoneY;
		};
		class app15: RscButton_EPad  //next page
		{
			idc = 1615;
			x = 0.53 * safezoneW + safezoneX;
			y = 0.623 * safezoneH + safezoneY;
		};
		class app15_background: EPad_Button_Backgr
		{
			idc = 1715;
			text = "x\addons\a3_epoch_code\Data\UI\epad\next.paa";
			tooltip = "next page";                                                             
			x = 0.53 * safezoneW + safezoneX;
			y = 0.623 * safezoneH + safezoneY;
		};
		class home: RscButtonPDATrans
		{
			idc = 1616;
			x = 0.408 * safezoneW + safezoneX;
			y = 0.74 * safezoneH + safezoneY;
			w = 0.04 * safezoneW;
			h = 0.044 * safezoneH;
			action = "Epoch_E_Pad_Page = 1; [] call EPOCH_EPad_dialog";
			tooltip = "home";	
		};
		class call: RscButtonPDATrans
		{
			idc = 1617;
			x = 0.45 * safezoneW + safezoneX;
			y = 0.74 * safezoneH + safezoneY;
			w = 0.04 * safezoneW;
			h = 0.044 * safezoneH;
			action = "";
			tooltip = "";	
		};
		class end: RscButtonPDATrans
		{
			idc = 1618;
			x = 0.5 * safezoneW + safezoneX;
			y = 0.74 * safezoneH + safezoneY;
			w = 0.04 * safezoneW;
			h = 0.044 * safezoneH;
			action = "";
			tooltip = "";	
		};
		class sms: RscButtonPDATrans
		{
			idc = 1619;
			x = 0.54 * safezoneW + safezoneX;
			y = 0.74 * safezoneH + safezoneY;
			w = 0.04 * safezoneW;
			h = 0.044 * safezoneH;
			action = "['WIP',5] call epoch_message";
			tooltip = "sms (wip)";	
		};
////////////////////////////////////////
/////////Picture Backgrounds start//////
////////////////////////////////////////
		class PDA_Controlsgroup: RscControlsgroup {
			idc = 1900;
			x = 0.405 * safezoneW + safezoneX;                                  
			y = 0.29 * safezoneH + safezoneY;                                  
			w = 0.19 * safezoneW;
			h = 0.37 * safezoneH;
			class Controls
			{
				class PDA_HTML : RscHTML
				{
					idc = 1901;
					type = 9;
					style = 0x00;
					x = 0;                                  
					y = 0;                                  
					w = 0.19 * safezoneW;
					h = 0.37 * safezoneH * 3;
					filename = "";
					text="";
					colorBackground[] = {0.02,0,0.03,0.6};
					colorBold[] = {1,0,0,1};
					colorLink[] = {1,1,0,1};
					colorLinkActive[] = {1,1,0,1};
					colorPicture[] = {1,1,1,1};
					colorPictureBorder[] = {1,0,0,1};
					colorPictureLink[] = {1,1,1,1};
					colorPictureSelected[] = {1,1,1,1};
					colorText[] = {1,1,1,1};
					class H1 {
						font = "puristaMedium";
						fontBold = "PuristaBold";
						SizeEx = 0.035;
					};
					class H2 {
						font = "puristaLight";
						fontBold = "PuristaBold";
						SizeEx = 0.035;
					};
					class H3:H2{};
					class H4:H2{};
					class H5:H2{};
					class H6:H2{};
					class P {
						font = "puristaMedium";
						fontBold = "PuristaBold";
						SizeEx = 0.032;
					};
				};
			};
		};
		class PDASMSText_Box : RscStructuredText
		{
			idc = 1902;
			x = 0.414 * safezoneW + safezoneX;                                  
			y = 0.302 * safezoneH + safezoneY;                                  
			w = 0.165 * safezoneW;
			h = 0.372 * safezoneH;
		};
		class PDAListBox: RscListBox
		{
			idc = 1903;
			onLBDblClick = "_this call Epoch_SMS_OpenDiag";
			x = 0.414 * safezoneW + safezoneX;                                  
			y = 0.302 * safezoneH + safezoneY;                                  
			w = 0.165 * safezoneW;
			h = 0.372 * safezoneH;
		};
	};
 };
class server_info_picture 
{
	idd = 98989;
	movingEnabled = false;
	class controls 
	{	
	   class server_info: RscPicture
       {
			idc = 98999;
			text = "x\addons\a3_epoch_code\Data\UI\epad\server_info_ca.paa";
			x = 0.185 * safezoneW + safezoneX;
			y = 0.115 * safezoneH + safezoneY;
			w = 0.636 * safezoneW;
			h = 0.8 * safezoneH;
       }; 
	};	   
};
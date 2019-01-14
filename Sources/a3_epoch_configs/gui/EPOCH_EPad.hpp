class RscButton_EPad : RscButton
{
	colorFocused[] = {0,0,0,0.5};
	colorBackgroundActive[] = {0,0,0,0.5};
	w = 0.0400931 * safezoneW;                                             
	h = 0.0550151 * safezoneH;
	action = "";
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
			x = 0.184983 * safezoneW + safezoneX;
			y = 0.114894 * safezoneH + safezoneY;
			w = 0.635763 * safezoneW;
			h = 0.80322 * safezoneH;
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
			x = 0.574459 * safezoneW + safezoneX;
			y = 0.213921 * safezoneH + safezoneY;
			w = 0.0286379 * safezoneW;
			h = 0.0440121 * safezoneH;
			action = "closeDialog 0;";
			tooltip = "Close PDA";
		};
		class app1: RscButton_EPad
		{
			idc = 1601;
			x = 0.416 * safezoneW + safezoneX;                                  
			y = 0.295 * safezoneH + safezoneY;                                  
		};
		class app1_background: RscPicture
		{
			idc = 1701;
			text = "";
			x = 0.416 * safezoneW + safezoneX;
			y = 0.295 * safezoneH + safezoneY;
			w = 0.0400931 * safezoneW;
			h = 0.0550151 * safezoneH;
		};
		class app1txt: RscText
		{
			idc = 1801;
			style = 0x02;
			x = 0.416 * safezoneW + safezoneX;
			y = (0.295+0.0550151) * safezoneH + safezoneY;
			w = 0.0400931 * safezoneW;
			h = 0.016 * safezoneH;
			colorBackground[] = {0,0,0,0.5};
			colorText[] = {1,1,1,1};
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.7)";
			text = "";
		};
		class app2: RscButton_EPad
		{
			idc = 1602;
			x = 0.473 * safezoneW + safezoneX;
			y = 0.295 * safezoneH + safezoneY;
		};
		class app2_background: RscPicture
		{
			idc = 1702;
			text = "";
			x = 0.473 * safezoneW + safezoneX;
			y = 0.295 * safezoneH + safezoneY;
			w = 0.0400931 * safezoneW;
			h = 0.0550151 * safezoneH;
		};
		class app2txt: RscText
		{
			idc = 1802;
			style = 0x02;
			x = 0.473 * safezoneW + safezoneX;
			y = (0.295+0.0550151) * safezoneH + safezoneY;
			w = 0.0400931 * safezoneW;
			h = 0.016 * safezoneH;
			colorBackground[] = {0,0,0,0.5};
			colorText[] = {1,1,1,1};
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.7)";
			text = "";
		};
		class app3: RscButton_EPad
		{
			idc = 1603;
			x = 0.53 * safezoneW + safezoneX;
			y = 0.295 * safezoneH + safezoneY;
		};
		class app3_background: RscPicture
		{
			idc = 1703;
			text = "";
			x = 0.53 * safezoneW + safezoneX;
			y = 0.295 * safezoneH + safezoneY;
			w = 0.0400931 * safezoneW;
			h = 0.0550151 * safezoneH;
		};
		class app3txt: RscText
		{
			idc = 1803;
			style = 0x02;
			x = 0.53 * safezoneW + safezoneX;
			y = (0.295+0.0550151) * safezoneH + safezoneY;
			w = 0.0400931 * safezoneW;
			h = 0.016 * safezoneH;
			colorBackground[] = {0,0,0,0.5};
			colorText[] = {1,1,1,1};
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.7)";
			text = "";
		};
		class app4: RscButton_EPad
		{
			idc = 1604;
			x = 0.416 * safezoneW + safezoneX;
			y = 0.372 * safezoneH + safezoneY;
		};
		class app4_background: RscPicture
		{
			idc = 1704;
			text = "";
			x = 0.416 * safezoneW + safezoneX;
			y = 0.372 * safezoneH + safezoneY;
			w = 0.0400931 * safezoneW;
			h = 0.0550151 * safezoneH;
		};
		class app4txt: RscText
		{
			idc = 1804;
			style = 0x02;
			x = 0.416 * safezoneW + safezoneX;
			y = (0.372+0.0550151) * safezoneH + safezoneY;
			w = 0.0400931 * safezoneW;
			h = 0.016 * safezoneH;
			colorBackground[] = {0,0,0,0.5};
			colorText[] = {1,1,1,1};
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.7)";
			text = "";
		};
		class app5: RscButton_EPad
		{
			idc = 1605;
			x = 0.473 * safezoneW + safezoneX;
			y = 0.372 * safezoneH + safezoneY;
		};
		class app5_background: RscPicture
		{
			idc = 1705;
			text = "";                                                             
			x = 0.473 * safezoneW + safezoneX;
			y = 0.372 * safezoneH + safezoneY;
			w = 0.0400931 * safezoneW;
			h = 0.0550151 * safezoneH;
		};
		class app5txt: RscText
		{
			idc = 1805;
			style = 0x02;
			x = 0.473 * safezoneW + safezoneX;
			y = (0.372+0.0550151) * safezoneH + safezoneY;
			w = 0.0400931 * safezoneW;
			h = 0.016 * safezoneH;
			colorBackground[] = {0,0,0,0.5};
			colorText[] = {1,1,1,1};
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.7)";
			text = "";
		};
		class app6: RscButton_EPad
		{
			idc = 1606;
			x = 0.53 * safezoneW + safezoneX;
			y = 0.372 * safezoneH + safezoneY;
		};
		class app6_background: RscPicture
		{
			idc = 1706;
			text = "";                                                             
			x = 0.53 * safezoneW + safezoneX;
			y = 0.372 * safezoneH + safezoneY;
			w = 0.0400931 * safezoneW;
			h = 0.0550151 * safezoneH;
		};
		class app6txt: RscText
		{
			idc = 1806;
			style = 0x02;
			x = 0.53 * safezoneW + safezoneX;
			y = (0.372+0.0550151) * safezoneH + safezoneY;
			w = 0.0400931 * safezoneW;
			h = 0.016 * safezoneH;
			colorBackground[] = {0,0,0,0.5};
			colorText[] = {1,1,1,1};
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.7)";
			text = "";
		};
		class app7: RscButton_EPad
		{
			idc = 1607;
			x = 0.416 * safezoneW + safezoneX;
			y = 0.449 * safezoneH + safezoneY;
		};
		class app7_background: RscPicture
		{
			idc = 1707;
			text = "";                                                             
			x = 0.416 * safezoneW + safezoneX;
			y = 0.449 * safezoneH + safezoneY;
			w = 0.0400931 * safezoneW;
			h = 0.0550151 * safezoneH;
		};
		class app7txt: RscText
		{
			idc = 1807;
			style = 0x02;
			x = 0.416 * safezoneW + safezoneX;
			y = (0.449+0.0550151) * safezoneH + safezoneY;
			w = 0.0400931 * safezoneW;
			h = 0.016 * safezoneH;
			colorBackground[] = {0,0,0,0.5};
			colorText[] = {1,1,1,1};
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.7)";
			text = "";
		};
		class app8: RscButton_EPad
		{
			idc = 1608;
			x = 0.473 * safezoneW + safezoneX;
			y = 0.449 * safezoneH + safezoneY;
		};
		class app8_background: RscPicture
		{
			idc = 1708;
			text = "";                                                             
			x = 0.473 * safezoneW + safezoneX;
			y = 0.449 * safezoneH + safezoneY;
			w = 0.0400931 * safezoneW;
			h = 0.0550151 * safezoneH;
		};
		class app8txt: RscText
		{
			idc = 1808;
			style = 0x02;
			x = 0.473 * safezoneW + safezoneX;
			y = (0.449+0.0550151) * safezoneH + safezoneY;
			w = 0.0400931 * safezoneW;
			h = 0.016 * safezoneH;
			colorBackground[] = {0,0,0,0.5};
			colorText[] = {1,1,1,1};
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.7)";
			text = "";
		};
		class app9: RscButton_EPad
		{
			idc = 1609;
			x = 0.53 * safezoneW + safezoneX;
			y = 0.449 * safezoneH + safezoneY;
		};
		class app9_background: RscPicture
		{
			idc = 1709;
			text = "";                                                             
			x = 0.53 * safezoneW + safezoneX;
			y = 0.449 * safezoneH + safezoneY;
			w = 0.0400931 * safezoneW;
			h = 0.0550151 * safezoneH;
		};
		class app9txt: RscText
		{
			idc = 1809;
			style = 0x02;
			x = 0.53 * safezoneW + safezoneX;
			y = (0.449+0.0550151) * safezoneH + safezoneY;
			w = 0.0400931 * safezoneW;
			h = 0.016 * safezoneH;
			colorBackground[] = {0,0,0,0.5};
			colorText[] = {1,1,1,1};
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.7)";
			text = "";
		};
		class app10: RscButton_EPad
		{
			idc = 1610;
			x = 0.416 * safezoneW + safezoneX;
			y = 0.526 * safezoneH + safezoneY;
		};
		class app10_background: RscPicture
		{
			idc = 1710;
			text = "";                                                             
			x = 0.416 * safezoneW + safezoneX;
			y = 0.526 * safezoneH + safezoneY;
			w = 0.0400931 * safezoneW;
			h = 0.0550151 * safezoneH;
		};
		class app10txt: RscText
		{
			idc = 1810;
			style = 0x02;
			x = 0.416 * safezoneW + safezoneX;
			y = (0.526+0.0550151) * safezoneH + safezoneY;
			w = 0.0400931 * safezoneW;
			h = 0.016 * safezoneH;
			colorBackground[] = {0,0,0,0.5};
			colorText[] = {1,1,1,1};
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.7)";
			text = "";
		};
		class app11: RscButton_EPad
		{
			idc = 1611;
			x = 0.473 * safezoneW + safezoneX;
			y = 0.526 * safezoneH + safezoneY;
		};
		class app11_background: RscPicture
		{
			idc = 1711;
			text = "";                                                             
			x = 0.473 * safezoneW + safezoneX;
			y = 0.526 * safezoneH + safezoneY;
			w = 0.0400931 * safezoneW;
			h = 0.0550151 * safezoneH;
		};
		class app11txt: RscText
		{
			idc = 1811;
			style = 0x02;
			x = 0.473 * safezoneW + safezoneX;
			y = (0.526+0.0550151) * safezoneH + safezoneY;
			w = 0.0400931 * safezoneW;
			h = 0.016 * safezoneH;
			colorBackground[] = {0,0,0,0.5};
			colorText[] = {1,1,1,1};
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.7)";
			text = "";
		};
		class app12: RscButton_EPad
		{
			idc = 1612;
			x = 0.53 * safezoneW + safezoneX;
			y = 0.526 * safezoneH + safezoneY;
		};
		class app12_background: RscPicture
		{
			idc = 1712;
			text = "";                                                             
			x = 0.53 * safezoneW + safezoneX;
			y = 0.526 * safezoneH + safezoneY;
			w = 0.0400931 * safezoneW;
			h = 0.0550151 * safezoneH;
		};
		class app12txt: RscText
		{
			idc = 1812;
			style = 0x02;
			x = 0.53 * safezoneW + safezoneX;
			y = (0.526+0.0550151) * safezoneH + safezoneY;
			w = 0.0400931 * safezoneW;
			h = 0.016 * safezoneH;
			colorBackground[] = {0,0,0,0.5};
			colorText[] = {1,1,1,1};
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.7)";
			text = "";
		};
		class app13: RscButton_EPad	// prev page
		{
			idc = 1614;
			x = 0.416 * safezoneW + safezoneX;
			y = 0.603 * safezoneH + safezoneY;
		};
		class app13_background: RscPicture
		{
			idc = 1714;
			text = "x\addons\a3_epoch_code\Data\UI\epad\back_ca.paa";
			tooltip = "prev page";                                                             
			x = 0.416 * safezoneW + safezoneX;
			y = 0.603 * safezoneH + safezoneY;
			w = 0.0400931 * safezoneW;
			h = 0.0550151 * safezoneH;
		};
		class app14: RscButton_EPad
		{
			idc = 1613;
			x = 0.473 * safezoneW + safezoneX;
			y = 0.603 * safezoneH + safezoneY;
		};
		class app14_background: RscPicture
		{
			idc = 1713;
			text = "";                                                             
			x = 0.473 * safezoneW + safezoneX;
			y = 0.603 * safezoneH + safezoneY;
			w = 0.0400931 * safezoneW;
			h = 0.0550151 * safezoneH;
		};
		class app14txt: RscText
		{
			idc = 1814;
			style = 0x02;
			x = 0.473 * safezoneW + safezoneX;
			y = (0.603+0.0550151) * safezoneH + safezoneY;
			w = 0.0400931 * safezoneW;
			h = 0.016 * safezoneH;
			colorBackground[] = {0,0,0,0.5};
			colorText[] = {1,1,1,1};
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.7)";
			text = "";
		};
		class app15: RscButton_EPad  //next page
		{
			idc = 1615;
			x = 0.53 * safezoneW + safezoneX;
			y = 0.603 * safezoneH + safezoneY;
		};
		class app15_background: RscPicture
		{
			idc = 1715;
			text = "x\addons\a3_epoch_code\Data\UI\epad\next.paa";
			tooltip = "next page";                                                             
			x = 0.53 * safezoneW + safezoneX;
			y = 0.603 * safezoneH + safezoneY;
			w = 0.0400931 * safezoneW;
			h = 0.0550151 * safezoneH;
		};
		class home: RscButtonPDATrans
		{
			idc = 1616;
			x = 0.408359 * safezoneW + safezoneX;
			y = 0.72006 * safezoneH + safezoneY;
			w = 0.0400931 * safezoneW;
			h = 0.0440121 * safezoneH;
			action = "Epoch_E_Pad_Page = 1; [] call EPOCH_EPad_dialog";
			tooltip = "home";	
		};
		class call: RscButtonPDATrans
		{
			idc = 1617;
			x = 0.454179 * safezoneW + safezoneX;
			y = 0.72006 * safezoneH + safezoneY;
			w = 0.0400931 * safezoneW;
			h = 0.0440121 * safezoneH;
			action = "";
			tooltip = "";	
		};
		class end: RscButtonPDATrans
		{
			idc = 1618;
			x = 0.494272 * safezoneW + safezoneX;
			y = 0.72006 * safezoneH + safezoneY;
			w = 0.0400931 * safezoneW;
			h = 0.0440121 * safezoneH;
			action = "";
			tooltip = "";	
		};
		class sms: RscButtonPDATrans
		{
			idc = 1619;
			x = 0.540093 * safezoneW + safezoneX;
			y = 0.72006 * safezoneH + safezoneY;
			w = 0.0400931 * safezoneW;
			h = 0.0440121 * safezoneH;
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
			x = 0.414086 * safezoneW + safezoneX;                                  
			y = 0.301946 * safezoneH + safezoneY;                                  
			w = 0.1646451 * safezoneW;
			h = 0.3520961 * safezoneH;
		};
		class PDAListBox: RscListBox
		{
			idc = 1903;
			onLBDblClick = "_this call Epoch_SMS_OpenDiag";
			x = 0.414086 * safezoneW + safezoneX;                                  
			y = 0.301946 * safezoneH + safezoneY;                                  
			w = 0.1646451 * safezoneW;
			h = 0.3520961 * safezoneH;
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
			x = 0.184983 * safezoneW + safezoneX;
			y = 0.114894 * safezoneH + safezoneY;
			w = 0.635763 * safezoneW;
			h = 0.80322 * safezoneH;
       }; 
	};	   
};
class SKN_RscEdit
{
	access = 0;
	type = 2;
	x = 0;
	y = 0;
	h = 0.04;
	w = 0.2;
	colorBackground[] = { 0, 0, 0, 1 };
	colorText[] = { 0.95, 0.95, 0.95, 1 };
	colorDisabled[] = { 1, 1, 1, 0.25 };
	colorSelection[] = { "(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])", 1 };
	autocomplete = "";
	text = "";
	size = 0.2;
	style = "0x00 + 0x40";
	font = "PuristaMedium";
	shadow = 2;
	sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	canModify = 1;
	tooltipColorText[] = { 1, 1, 1, 1 };
	tooltipColorBox[] = { 1, 1, 1, 1 };
	tooltipColorShade[] = { 0, 0, 0, 0.65 };
};

class SKN_RscShortcutButton {
	idc = -1;
	style = 0;
	default = 0;
	shadow = 1;
	w = 0.183825;
	h = "(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
	color[] = {1,1,1,1.0};
	colorFocused[] = {1,1,1,1.0};
	color2[] = {0.95,0.95,0.95,1};
	colorDisabled[] = {1,1,1,0.25};
	colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",1};
	colorBackgroundFocused[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",1};
	colorBackground2[] = {1,1,1,1};
	animTextureDefault = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\normal_ca.paa";
	animTextureNormal = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\normal_ca.paa";
	animTextureDisabled = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\normal_ca.paa";
	animTextureOver = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\over_ca.paa";
	animTextureFocused = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\focus_ca.paa";
	animTexturePressed = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\down_ca.paa";
	periodFocus = 1.2;
	periodOver = 0.8;
	class HitZone
	{
		left = 0.0;
		top = 0.0;
		right = 0.0;
		bottom = 0.0;
	};
	class ShortcutPos
	{
		left = 0;
		top = "(			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) - 		(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)) / 2";
		w = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1) * (3/4)";
		h = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	};
	class TextPos
	{
		left = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1) * (3/4)";
		top = "(			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) - 		(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)) / 2";
		right = 0.005;
		bottom = 0.0;
	};
	period = 0.4;
	font = "PuristaMedium";
	size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	text = "";
	soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1};
	soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1};
	soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1};
	soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1};
	action = "";
	class Attributes
	{
		font = "PuristaMedium";
		color = "#E5E5E5";
		align = "left";
		shadow = "true";
	};
	class AttributesImage
	{
		font = "PuristaMedium";
		color = "#E5E5E5";
		align = "left";
	};
};

class SKN_RscButtonMenu : SKN_RscShortcutButton {
	idc = -1;
	type = 16;
	onButtonClick = "_this spawn Skaronator_fnc_handleButton;";
	style = "0x02 + 0xC0";
	default = 0;
	shadow = 0;
	x = 0;
	y = 0;
	w = 0.095589;
	h = 0.039216;
	animTextureNormal = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureDisabled = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureOver = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureFocused = "#(argb,8,8,3)color(1,1,1,1)";
	animTexturePressed = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureDefault = "#(argb,8,8,3)color(1,1,1,1)";
	colorBackground[] = {0,0,0,0.8};
	colorBackgroundFocused[] = {1,1,1,1};
	colorBackground2[] = {0.75,0.75,0.75,1};
	color[] = {1,1,1,1};
	colorFocused[] = {0,0,0,1};
	color2[] = {0,0,0,1};
	colorText[] = {1,1,1,1};
	colorDisabled[] = {1,1,1,0.25};
	period = 0;
	periodFocus = 1.2;
	periodOver = 1.2;
	size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
	class TextPos
	{
		left = "0.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
		top = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) - 		(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)) / 2";
		right = 0.005;
		bottom = 0.0;
	};
	class Attributes
	{
		font = "PuristaLight";
		color = "#E5E5E5";
		align = "left";
		shadow = "false";
	};
	class ShortcutPos
	{
		left = "(6.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) - 0.0225 - 0.005";
		top = 0.005;
		w = 0.0225;
		h = 0.03;
	};
	soundEnter[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundEnter",0.09,1};
	soundPush[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundPush",0.09,1};
	soundClick[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundClick",0.09,1};
	soundEscape[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundEscape",0.09,1};
	textureNoShortcut = "";
};

class SKN_RscListBox
{
	access = 0;
	type = 5;
	w = 0.4;
	h = 0.4;
	rowHeight = 0;
	colorText[] = {1,1,1,1};
	colorDisabled[] = {1,1,1,0.25};
	colorScrollbar[] = {1,0,0,0};
	colorSelect[] = {0,0,0,1};
	colorSelect2[] = {0,0,0,1};
	colorSelectBackground[] = {1,1,1,0.25};
	colorSelectBackground2[] = {1,1,1,0.25};
	colorBackground[] = {0,0,0,0.25};
	colorPicture[] = { 1, 1, 1, 1 };
	colorPictureSelected[] = { 1, 1, 1, 1 };
	colorPictureDisabled[] = { 1, 1, 1, 1 };
	soundSelect[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1};
	autoScrollSpeed = -1;
	autoScrollDelay = 5;
	autoScrollRewind = 0;
	arrowEmpty = "#(argb,8,8,3)color(1,1,1,1)";
	arrowFull = "#(argb,8,8,3)color(1,1,1,1)";
	class ListScrollBar: ScrollBar
	{
		color[] = {1,1,1,1};
		autoScrollEnabled = 1;
	};
	style = 16;
	font = "PuristaMedium";
	sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	shadow = 0;
	colorShadow[] = {0,0,0,0.5};
	period = 0;
	maxHistoryDelay = 1;
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
};

class SKN_RscListNBox
{
	style = 16;
	access = 0;
	type = 102;
	w = 0.4;
	h = 0.4;
	rowHeight = 0;
	colorText[] = {1,1,1,1};
	colorScrollbar[] = {0.95,0.95,0.95,1};
	colorSelect[] = {0,0,0,1};
	colorSelect2[] = {0,0,0,1};
	colorSelectBackground[] = {0.95,0.95,0.95,1};
	colorSelectBackground2[] = {1,1,1,0.5};
	colorBackground[] = {0,0,0,1};
	colorPicture[] = { 1, 1, 1, 1 };
	colorPictureSelected[] = { 1, 1, 1, 1 };
	colorPictureDisabled[] = { 1, 1, 1, 1 };
	maxHistoryDelay = 1;
	soundSelect[] = {"",0.1,1};
	autoScrollSpeed = -1;
	autoScrollDelay = 5;
	autoScrollRewind = 0;
	arrowEmpty = "#(argb,8,8,3)color(1,1,1,1)";
	arrowFull = "#(argb,8,8,3)color(1,1,1,1)";
	drawSideArrows = 0;
	columns[] = {0, 0.06,0.2,0.26};
	idcLeft = -1;
	idcRight = -1;
	class ListScrollBar: ScrollBar{};
	shadow = 0;
	font = "PuristaMedium";
	sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	color[] = {0.95,0.95,0.95,1};
	colorDisabled[] = {1,1,1,0.25};
	period = 1.2;
	class ScrollBar: ScrollBar{	};
};
class RscMapControl;
class SKN_RscMapControl : RscMapControl {
	access = 0;
	type = 101;
	idc = 51;
	style = 48;
	moveOnEdges=0;
};

class Skaronator_AdminMenu
{
	idd = -1337;
	onload = "setMousePosition [0.5, 0.5];";
	// onLoad = "[] spawn {disableSerialization;waitUntil {!isNull (findDisplay -1337)};_e0=findDisplay -1337;_e1=_e0 displayCtrl 10;_e2=_e0 displayCtrl 11;_e3=_e0 displayCtrl 20;_e4=_e0 displayCtrl 21;_e5=_e0 displayCtrl 22;_e6=_e0 displayCtrl 1;_sw=safezoneW;_sx=safezoneX;_sy=safezoneY;_sh=safezoneH;waitUntil {_e7=toArray(ctrlText 2);_e7 resize 38;if (ctrlText _e1!='Range'||ctrlText _e2!='Alphabet'||ctrlText _e3!='Main Menu'||ctrlText _e4!='Spawn Menu'||ctrlText _e5!='Server Menu'||!ctrlShown _e1||!ctrlShown _e2||!ctrlShown _e3||!ctrlShown _e4||!ctrlShown _e5||!ctrlShown _e6||!(ctrlPosition _e1 isEqualTo[0.180954*_sw+_sx,0.25844*_sh+_sy,0.0526068*_sw,0.022*_sh])||!(ctrlPosition _e2 isEqualTo[0.236966*_sw+_sx,0.258*_sh+_sy,0.0536383*_sw,0.022*_sh])||!(ctrlPosition _e3 isEqualTo[0.296277*_sw+_sx,0.258*_sh+_sy,0.0649849*_sw,0.022*_sh])||!(ctrlPosition _e4 isEqualTo[0.364253*_sw+_sx,0.258*_sh+_sy,0.0649849*_sw,0.022*_sh])||!(ctrlPosition _e5 isEqualTo[0.431714*_sw+_sx,0.258*_sh+_sy,0.0649849*_sw,0.022*_sh])||!(ctrlPosition _e6 isEqualTo[0.179201*_sw+_sx,0.225*_sh+_sy,0.113573*_sw,0.0242*_sh])||!(_e7 isEqualTo[69,112,111,99,104,32,77,111,100,32,65,100,109,105,110,32,77,101,110,117,32,98,121,32,83,107,97,114,111,110,97,116,111,114,46,99,111,109])) exitWith {if (!isNull (findDisplay -1337)) then {(findDisplay -1337) closeDisplay 0;true}};uiSleep 0.2;isNull (findDisplay -1337)}}";
	onUnload = "";
	movingEnable = 1;
	class Controls {
		class PlayerBar: RscText
		{
			idc = 1;
			x = 0.179201 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.113573 * safezoneW;
			h = 0.0242 * safezoneH;
			colorBackground[] = {0.78,0.37,0,1};
			colorActive[] = {0.78,0.37,0,1};
		};
		class MainBar: RscText
		{
			idc = 2;
			text = "Epoch Mod Admin Menu by Skaronator.com";
			x = 0.293698 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.412705 * safezoneW;
			h = 0.0242 * safezoneH;
			colorBackground[] = {0.78,0.37,0,1};
			colorActive[] = {0.78,0.37,0,1};
		};
		class PlayerBtnBackground: IGUIBack
		{
			idc = 3;
			x = 0.178995 * safezoneW + safezoneX;
			y = 0.25206 * safezoneH + safezoneY;
			w = 0.113466 * safezoneW;
			h = 0.0352 * safezoneH;
			colorBackground[] = {0,0,0,0.75};
			colorActive[] = {0,0,0,0.75};
		};
		class BtnMainBackground: IGUIBack
		{
			idc = 4;
			x = 0.293698 * safezoneW + safezoneX;
			y = 0.2514 * safezoneH + safezoneY;
			w = 0.412629 * safezoneW;
			h = 0.0352 * safezoneH;
			colorBackground[] = {0,0,0,0.75};
			colorActive[] = {0,0,0,0.75};
		};
		class PlayerList: SKN_RscListBox
		{
			idc = 5;
			sizeEx = 0.035;
			x = 0.179201 * safezoneW + safezoneX;
			y = 0.2888 * safezoneH + safezoneY;
			w = 0.113466 * safezoneW;
			h = 0.4862 * safezoneH;
			colorBackground[] = {0,0,0,0.75};
			colorActive[] = {0,0,0,0.75};
		};
		class MainList: SKN_RscListBox
		{
			idc = 6;
			sizeEx = 0.035;
			x = 0.293698 * safezoneW + safezoneX;
			y = 0.2888 * safezoneH + safezoneY;
			w = 0.206297 * safezoneW;
			h = 0.4862 * safezoneH;
			colorBackground[] = {0,0,0,0.75};
			colorActive[] = {0,0,0,0.75};
		};
		class BtnRange: SKN_RscButtonMenu
		{
			idc = 10;
			size = 0.037;

			text = "Range";
			x = 0.180954 * safezoneW + safezoneX;
			y = 0.25844 * safezoneH + safezoneY;
			w = 0.0526068 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.9};
			colorActive[] = {0,0,0,0.9};
		};
		class BtnAlphabet: SKN_RscButtonMenu
		{
			idc = 11;
			size = 0.037;

			text = "Alphabet";
			x = 0.236966 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.0536383 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.9};
			colorActive[] = {0,0,0,0.9};
		};
		class BtnMainMenu: SKN_RscButtonMenu
		{
			idc = 20;
			size = 0.037;

			text = "Main Menu";
			x = 0.296277 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.0649849 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.9};
			colorActive[] = {0,0,0,0.9};
		};
		class BtnSpawnMenu: SKN_RscButtonMenu
		{
			idc = 21;
			size = 0.037;

			text = "Spawn Menu";
			x = 0.364253 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.0649849 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.9};
			colorActive[] = {0,0,0,0.9};
		};
		class BtnServerMenu: SKN_RscButtonMenu
		{
			idc = 22;
			size = 0.037;

			text = "Server Menu";
			x = 0.431714 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.0649849 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.9};
			colorActive[] = {0,0,0,0.9};
		};
		class BtnAntihackLog: SKN_RscButtonMenu
		{
			idc = 23;

			text = "Antihack Log (666)";
			x = 0.503094 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.0990245 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.9};
			colorActive[] = {0,0,0,0.9};
		};
		class BtnAdminLog: SKN_RscButtonMenu
		{
			idc = 24;

			text = "Admin Log (666)";
			x = 0.605008 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.0979928 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.9};
			colorActive[] = {0,0,0,0.9};
		};
		class BackgroundInputbox: IGUIBack
		{
			idc = 30;

			x = 0.501031 * safezoneW + safezoneX;
			y = 0.2888 * safezoneH + safezoneY;
			w = 0.205296 * safezoneW;
			h = 0.1276 * safezoneH;
			colorBackground[] = {0,0,0,0.75};
			colorActive[] = {0,0,0,0.75};
		};
		class RscText: RscText
		{
			idc = 34;
			text = "Ban reason for";
			x = 0.509283 * safezoneW + safezoneX;
			y = 0.3108 * safezoneH + safezoneY;
			w = 0.182603 * safezoneW;
			h = 0.0176 * safezoneH;
		};
		class RscInputBox: SKN_RscEdit
		{
			idc = 31;
			x = 0.513415 * safezoneW + safezoneX;
			y = 0.3438 * safezoneH + safezoneY;
			w = 0.161969 * safezoneW;
			h = 0.0198 * safezoneH;
		};
		class RscButtonMenuOK: SKN_RscButtonMenu
		{
			text = "OK";
			idc = 32;
			x = 0.639254 * safezoneW + safezoneX;
			y = 0.4186 * safezoneH + safezoneY;
			w = 0.067048 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscButtonMenuCancel: SKN_RscButtonMenu
		{
			text = "CANCEL";
			idc = 33;
			x = 0.501031 * safezoneW + safezoneX;
			y = 0.4186 * safezoneH + safezoneY;
			w = 0.067048 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class MapView: SKN_RscMapControl
		{
			idc = 7;
			x = 0.501031 * safezoneW + safezoneX;
			y = 0.28836 * safezoneH + safezoneY;
			w = 0.205265 * safezoneW;
			h = 0.486548 * safezoneH;
		};
		class MainListNBox: SKN_RscListNBox
		{
			idc = 8;
			sizeEx = 0.035;
			x = 0.293698 * safezoneW + safezoneX;
			y = 0.2888 * safezoneH + safezoneY;
			w = 0.206297 * safezoneW;
			h = 0.4862 * safezoneH;
			colorBackground[] = {0,0,0,0.75};
			colorActive[] = {0,0,0,0.75};
		};
		class BtnClear: SKN_RscButtonMenu
		{
			idc = 50;
			size = 0.037;

			text = "CLEAR";
			x = 0.504126 * safezoneW + safezoneX;
			y = 0.753 * safezoneH + safezoneY;
			w = 0.0361028 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.9};
			colorActive[] = {0,0,0,0.9};
		};
		class BtnGiveTrgt: SKN_RscButtonMenu
		{
			idc = 51;
			size = 0.037;

			text = "Give to Target";
			x = 0.542292 * safezoneW + safezoneX;
			y = 0.7783 * safezoneH + safezoneY;
			w = 0.0804576 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.9};
			colorActive[] = {0,0,0,0.9};
		};
		class BtnGiveMySelf: SKN_RscButtonMenu
		{
			idc = 52;
			size = 0.037;

			text = "GIVE TO SELF";
			x = 0.626257 * safezoneW + safezoneX;
			y = 0.7783 * safezoneH + safezoneY;
			w = 0.0804576 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.9};
			colorActive[] = {0,0,0,0.9};
		};
		class LeftSide: RscText
		{
			idc = 40;

			text = "Available Items";
			x = 0.29473 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.164117 * safezoneW;
			h = 0.0242 * safezoneH;
			colorBackground[] = {0.78,0.37,0,1};
			colorActive[] = {0.78,0.37,0,1};
		};
		class ListBoxLeft: SKN_RscListBox
		{
			idc = 41;

			x = 0.294627 * safezoneW + safezoneX;
			y = 0.3174 * safezoneH + safezoneY;
			w = 0.16401 * safezoneW;
			h = 0.4576 * safezoneH;
			colorBackground[] = {0,0,0,0.75};
			colorActive[] = {0,0,0,0.75};
		};
		class SearchFieldLeft: RscEdit
		{
			idc = 4101;
			
			size = 0.037;
			text = "";
			x = 0.294627 * safezoneW + safezoneX;
			y = (0.3174+0.4576) * safezoneH + safezoneY;
			w = 0.16401 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.75};
			onKeyUp = "_this call Skaronator_fnc_handleButton;";
		};
		class RightSide: RscText
		{
			idc = 42;

			text = "Adding to Gear";
			x = 0.542292 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.164117 * safezoneW;
			h = 0.0242 * safezoneH;
			colorBackground[] = {0.78,0.37,0,1};
			colorActive[] = {0.78,0.37,0,1};
		};
		class ListBoxRight: SKN_RscListBox
		{
			idc = 43;

			x = 0.542292 * safezoneW + safezoneX;
			y = 0.31652 * safezoneH + safezoneY;
			w = 0.163892 * safezoneW;
			h = 0.458993 * safezoneH;
			colorBackground[] = {0,0,0,0.75};
			colorActive[] = {0,0,0,0.75};
		};
		class CenterTitle: RscText
		{
			idc = 60;

			text = "Categories";
			x = 0.46596 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.0670479 * safezoneW;
			h = 0.0242 * safezoneH;
			colorBackground[] = {0.78,0.37,0,1};
			colorActive[] = {0.78,0.37,0,1};
		};
		class BtnSpawnVehicleAir: SKN_RscButtonMenu
		{
			idc = 61;
			size = 0.037;

			text = "V: AIR";
			x = 0.46596 * safezoneW + safezoneX;
			y = 0.3196 * safezoneH + safezoneY;
			w = 0.0670479 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.9};
			colorActive[] = {0,0,0,0.9};
		};
		class BtnSpawnVehicleLand: SKN_RscButtonMenu
		{
			idc = 62;
			size = 0.037;

			text = "V: LAND";
			x = 0.46596 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.0670479 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.9};
			colorActive[] = {0,0,0,0.9};
		};
		class BtnSpawnVehicleShip: SKN_RscButtonMenu
		{
			idc = 63;
			size = 0.037;

			text = "V: SHIP";
			x = 0.46596 * safezoneW + safezoneX;
			y = 0.3724 * safezoneH + safezoneY;
			w = 0.0670479 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.9};
			colorActive[] = {0,0,0,0.9};
		};
		class BtnSpawnWeapons: SKN_RscButtonMenu
		{
			idc = 64;
			size = 0.037;

			text = "WEAPONS";
			x = 0.46596 * safezoneW + safezoneX;
			y = 0.3988 * safezoneH + safezoneY;
			w = 0.0670479 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.9};
			colorActive[] = {0,0,0,0.9};
		};
		class BtnSpawnMagazines: SKN_RscButtonMenu
		{
			idc = 65;
			size = 0.037;

			text = "MAGAZINES";
			x = 0.46596 * safezoneW + safezoneX;
			y = 0.4252 * safezoneH + safezoneY;
			w = 0.0670479 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.9};
			colorActive[] = {0,0,0,0.9};
		};
		class BtnSpawnItems: SKN_RscButtonMenu
		{
			idc = 66;
			size = 0.037;

			text = "ITEMS";
			x = 0.46596 * safezoneW + safezoneX;
			y = 0.4516 * safezoneH + safezoneY;
			w = 0.0670479 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.9};
			colorActive[] = {0,0,0,0.9};
		};
		class BtnSpawnBackpacks: SKN_RscButtonMenu
		{
			idc = 67;
			size = 0.037;

			text = "BACKPACKS";
			x = 0.46596 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.0670479 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.9};
			colorActive[] = {0,0,0,0.9};
		};
		class BtnSpawnUniforms: SKN_RscButtonMenu
		{
			idc = 68;
			size = 0.037;

			text = "UNIFORMS";
			x = 0.46596 * safezoneW + safezoneX;
			y = 0.5044 * safezoneH + safezoneY;
			w = 0.0670479 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.9};
			colorActive[] = {0,0,0,0.9};
		};
		class BtnSpawnAttachments: SKN_RscButtonMenu
		{
			idc = 69;
			size = 0.037;

			text = "ATTACHMENTS";
			x = 0.46596 * safezoneW + safezoneX;
			y = 0.5308 * safezoneH + safezoneY;
			w = 0.0670479 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.9};
			colorActive[] = {0,0,0,0.9};
		};
		class BtnSpawnHeadGear : SKN_RscButtonMenu
		{
			idc = 70;
			size = 0.037;

			text = "HEADGEAR";
			x = 0.46596 * safezoneW + safezoneX;
			y = 0.5572 * safezoneH + safezoneY;
			w = 0.0670479 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = { 1, 1, 1, 1 };
			colorBackground[] = { 0, 0, 0, 0.9 };
			colorActive[] = { 0, 0, 0, 0.9 };
		};
		class BtnSpawnVests : SKN_RscButtonMenu
		{
			idc = 71;
			size = 0.037;

			text = "VESTS";
			x = 0.46596 * safezoneW + safezoneX;
			y = 0.5836 * safezoneH + safezoneY;
			w = 0.0670479 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = { 1, 1, 1, 1 };
			colorBackground[] = { 0, 0, 0, 0.9 };
			colorActive[] = { 0, 0, 0, 0.9 };
		};
	};
};

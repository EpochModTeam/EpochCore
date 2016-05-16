class RscInGameUI
{
	colorReady[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
	colorPrepare[] = {"(profilenamespace getvariable ['IGUI_WARNING_RGB_R',0.8])","(profilenamespace getvariable ['IGUI_WARNING_RGB_G',0.5])","(profilenamespace getvariable ['IGUI_WARNING_RGB_B',0.0])","(profilenamespace getvariable ['IGUI_WARNING_RGB_A',0.8])"};
	colorUnload[] = {"(profilenamespace getvariable ['IGUI_ERROR_RGB_R',0.8])","(profilenamespace getvariable ['IGUI_ERROR_RGB_G',0.0])","(profilenamespace getvariable ['IGUI_ERROR_RGB_B',0.0])","(profilenamespace getvariable ['IGUI_ERROR_RGB_A',1.0])"};
	class RscUnitInfo
	{
		onLoad = "[""onLoad"",_this,""RscUnitInfo"",'IGUI'] call compile preprocessfilelinenumbers ""A3\ui_f\scripts\initDisplay.sqf""";
		onUnload = "[""onUnload"",_this,""RscUnitInfo"",'IGUI'] call compile preprocessfilelinenumbers ""A3\ui_f\scripts\initDisplay.sqf""";
		idd = 300;
		updateWidthByWeapon = 0;
		updateHeightByCrew = 0;
		updateWidthByCrew = 0;
		controls[] = {"WeaponInfoControlsGroupRight","CA_BackgroundVehicle","CA_BackgroundVehicleTitle","CA_BackgroundVehicleTitleDark","CA_BackgroundFuel","CA_Vehicle","CA_VehicleRole","CA_HitZones","CA_SpeedBackground","CA_SpeedUnits","CA_Speed","CA_ValueFuel"};
		class WeaponInfoControlsGroupLeft: RscControlsGroup
		{
			idc = 2302;
			x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_WEAPON_X"",		((safezoneX + safezoneW) - 		(12.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) - 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "0 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2)) +  			18 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) - (1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20))";


			w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			class controls
			{
				class CA_BackgroundWeapon: RscPicture
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
					idc = 1202;
					text = "\A3\ui_f\data\igui\rscingameui\rscunitinfo\gradient_ca.paa";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_BackgroundWeaponTitle: RscText
				{
					colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
					idc = 1001;
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_BackgroundWeaponTitleDark: RscText
				{
					idc = 1008;
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					colorBackground[] = {0,0,0,0.1};
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_BackgroundWeaponMode: RscPicture
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
					idc = 1203;
					text = "\A3\ui_f\data\igui\rscingameui\rscunitinfo\mode_background_ca.paa";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "0.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_ValueReload: RscIGProgress
				{
					idc = 154;
					colorBar[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",0.25};
					colorFrame[] = {0,0,0,0};
					style = 0;
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "0.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Weapon: RscText
				{
					idc = 118;
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					style = 1;
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_ModeTexture: RscPicture
				{
					idc = 187;
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "0.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Mode: RscText
				{
					idc = 149;
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					y = -1;
					x = "-5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					w = "4.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_AmmoCount: RscText
				{
					idc = 184;
					style = 1;
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					x = "4.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "3.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					sizeEx = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_MagCount: RscText
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					idc = 185;
					x = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_AmmoType: RscText
				{
					idc = 155;
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "4.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_GrenadeType: RscText
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					style = 2;
					idc = 152;
					x = "3.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "4.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_GrenadeCount: RscText
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					style = 1;
					idc = 151;
					x = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_GunnerWeapon: RscText
				{
					idc = 150;
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
					style = 1;
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
		class WeaponInfoControlsGroupRight: RscControlsGroup
		{
			idc = 2303;
			x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_WEAPON_X"",		((safezoneX + safezoneW) - 		(12.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) - 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "0 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2)) +  			18 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) - (1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20))";
			w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			class controls
			{
				class CA_BackgroundWeapon: RscPicture
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
					idc = 1202;
					text = "\A3\ui_f\data\igui\rscingameui\rscunitinfo\gradient_ca.paa";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_BackgroundWeaponTitle: RscText
				{
					colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
					idc = 1001;
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_BackgroundWeaponTitleDark: RscText
				{
					idc = 1008;
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					colorBackground[] = {0,0,0,0.1};
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_BackgroundWeaponMode: RscPicture
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
					idc = 1203;
					text = "\A3\ui_f\data\igui\rscingameui\rscunitinfo\mode_background_ca.paa";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "0.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_ValueReload: RscIGProgress
				{
					idc = 154;
					colorBar[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",0.25};
					colorFrame[] = {0,0,0,0};
					style = 0;
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "0.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Weapon: RscText
				{
					idc = 118;
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					style = 1;
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_ModeTexture: RscPicture
				{
					idc = 187;
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "0.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Mode: RscText
				{
					idc = 149;
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					y = -1;
					x = "-5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					w = "4.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_AmmoCount: RscText
				{
					idc = 184;
					style = 1;
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					x = "4.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "3.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					sizeEx = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_MagCount: RscText
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					idc = 185;
					x = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_AmmoType: RscText
				{
					idc = 155;
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "4.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_GrenadeType: RscText
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					style = 2;
					idc = 152;
					x = "3.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "4.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_GrenadeCount: RscText
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					style = 1;
					idc = 151;
					x = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_GunnerWeapon: RscText
				{
					idc = 150;
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
					style = 1;
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
		class CA_BackgroundVehicle: RscPicture
		{
			colorText[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
			idc = 1200;
			text = "\A3\ui_f\data\igui\rscingameui\rscunitinfo\gradient_ca.paa";
			x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_X"",		(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "1.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
			w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class CA_BackgroundVehicleTitle: RscText
		{
			colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
			idc = 1000;
			x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_X"",		(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
			w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class CA_BackgroundVehicleTitleDark: RscText
		{
			idc = 1013;
			x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_X"",		(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
			w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0,0,0,0.1};
			sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class CA_BackgroundFuel: RscPicture
		{
			colorText[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
			idc = 1202;
			text = "\A3\ui_f\data\igui\rscingameui\rscunitinfo\fuelBackground_ca.paa";
			x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_X"",		(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
			w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "0.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class CA_Vehicle: RscText
		{
			colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
			idc = 120;
			text = "AH-99 Blackfoot";
			x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_X"",		(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
			w = "8.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class CA_VehicleRole: RscPicture
		{
			colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
			shadow = 1;
			idc = 208;
			textureCargo = "\A3\ui_f\data\igui\rscingameui\rscunitinfo\role_cargo_ca.paa";
			textureCommander = "\A3\ui_f\data\igui\rscingameui\rscunitinfo\role_commander_ca.paa";
			textureDriver = "\A3\ui_f\data\igui\rscingameui\rscunitinfo\role_driver_ca.paa";
			textureGunner = "\A3\ui_f\data\igui\rscingameui\rscunitinfo\role_gunner_ca.paa";
			text = "#(argb,8,8,3)color(1,1,1,0)";
			x = "9 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_X"",		(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
			w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class CA_ValueFuel: RscProgress
		{
			idc = 113;
			texture = "#(argb,8,8,3)color(1,1,1,1)";
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_X"",		(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
			w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "0.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class CA_SpeedBackground: RscText
		{
			shadow = 0;
			font = "PuristaSemibold";
			idc = 1006;
			x = "5.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_X"",		(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "1.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
			w = "4.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "0.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {0,0,0,1};
			colorBackground[] = {1,1,1,0.1};
			sizeEx = "0.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class CA_Speed: RscText
		{
			idc = 121;
			style = 1;
			colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
			text = "9999";
			x = "6.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_X"",		(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "1.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
			w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class CA_SpeedUnits: RscText
		{
			colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
			idc = 1004;
			text = "km/h";
			x = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_X"",		(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "1.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
			w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class CA_AltBackground: RscText
		{
			shadow = 0;
			font = "PuristaSemibold";
			idc = 1014;
			x = "5.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_X"",		(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "2.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
			w = "4.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "0.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {0,0,0,1};
			colorBackground[] = {1,1,1,0.1};
			sizeEx = "0.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class CA_Alt: RscText
		{
			idc = 122;
			style = 1;
			colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
			text = "9999";
			x = "6.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_X"",		(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "2.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
			w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class CA_AltUnits: RscText
		{
			colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
			idc = 1005;
			text = "m";
			x = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_X"",		(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "2.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
			w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class CA_Depth: RscText
		{
			idc = 186;
			style = 1;
			colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
			text = "9999";
			x = "6.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_X"",		(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "2.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
			w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class CA_Stabilize: RscPicture
		{
			shadow = 1;
			idc = 1204;
			text = "\A3\Ui_f\data\IGUI\Cfg\Actions\autohover_ca.paa";
			x = "5.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_X"",		(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "2.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
			w = "0.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class CA_HitZones: RscHitZones
		{
			idc = 111;
			x = "0.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_X"",		(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "1.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
			w = "5.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			xCount = 3;
			yCount = 2;
			xSpace = "0.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			ySpace = "0.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
		};
		class CA_Radar: RscControlsGroupNoScrollbars
		{
			idc = 2301;
			x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_RADAR_X"",		(safezoneX + safezoneW / 2 - 2.8 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_RADAR_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
			w = "5.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "5.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			class controls
			{
				class CA_RadarBackground: RscPicture
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
					idc = 1200;
					text = "A3\Ui_f\data\igui\cfg\radar\radarBackground_ca.paa";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "5.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "5.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_RadarIcon: RscPicture
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					idc = 250;
					x = "2.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Heading: RscText
				{
					idc = 148;
					style = 2;
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					text = " 359";
					x = "1.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "4.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
		class CA_Zeroing: RscText
		{
			idc = 168;
			colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
			x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_WEAPON_X"",		((safezoneX + safezoneW) - 		(12.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) - 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "0 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2)) +  			18 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) - (1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20))";
			w = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class CA_Speed_Freefall: RscIGUIValue
		{
			idc = 380;
			style = 1;
			colorText[] = {0.95,0.95,0.95,1};
			x = 0.258;
			y = "0.015 + SafeZoneY";
			w = 0.12;
		};
		class CA_Alt_Freefall: RscIGUIValue
		{
			idc = 382;
			style = 0;
			colorText[] = {0.95,0.95,0.95,1};
			x = 0.644;
			y = "0.015 + SafeZoneY";
			w = 0.12;
		};
		class CA_TextFlaresMode: RscIGUIText
		{
			idc = 152;
			style = 0;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			x = "0.078 + SafeZoneX";
			y = "0.012 + SafeZoneY";
			w = "0.161*SafezoneW";
		};
		class CA_TextFlares: RscIGUIValue
		{
			idc = 151;
			style = 1;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			x = "0.078  + SafeZoneX";
			y = "0.012 + SafeZoneY";
			w = "0.161*SafezoneW";
		};
	};
	class RscStanceInfo
	{
		idd = 303;
		onLoad = "[""onLoad"",_this,""RscStanceInfo"",'IGUI'] call compile preprocessfilelinenumbers ""A3\ui_f\scripts\initDisplay.sqf""";
		onUnload = "[""onUnload"",_this,""RscStanceInfo"",'IGUI'] call compile preprocessfilelinenumbers ""A3\ui_f\scripts\initDisplay.sqf""";
		controls[] = {"StanceIndicatorBackground","StanceIndicator"};
		class StanceIndicatorBackground: RscPicture
		{
			colorText[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
			idc = 1201;
			text = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\gradient_ca.paa";
			x = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_WEAPON_X"",		((safezoneX + safezoneW) - 		(12.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) - 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "0 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2)) +  			18 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) - (1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20))";
			w = "2.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "3.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class StanceIndicator: RscPictureKeepAspect
		{
			idc = 188;
			text = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_stand_ca.paa";
			x = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_WEAPON_X"",		((safezoneX + safezoneW) - 		(12.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) - 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "0 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2)) +  			18 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) - (1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20))";
			w = "2.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
	class RscUnitInfoNoHUD
	{
		idd = 300;
		movingEnable = 0;
	};
	class RscUnitInfoSoldier: RscUnitInfo
	{
		idd = 300;
		controls[] = {"WeaponInfoControlsGroupLeft","CA_Speed_Freefall","CA_Alt_Freefall"};
	};
	class RscUnitInfoTank: RscUnitInfo
	{
		idd = 300;
		updateWidthByWeapon = 0;
		updateHeightByCrew = 0;
		updateWidthByCrew = 0;
		controls[] = {"WeaponInfoControlsGroupRight","CA_Zeroing","CA_BackgroundVehicle","CA_BackgroundVehicleTitle","CA_BackgroundVehicleTitleDark","CA_BackgroundFuel","CA_Vehicle","CA_VehicleRole","CA_HitZones","CA_SpeedBackground","CA_SpeedUnits","CA_Speed","CA_ValueFuel","CA_Radar"};
	};
	class CA_HUDRscControlsGroup: RscControlsGroup
	{
		class VScrollbar: VScrollbar
		{
			autoScrollSpeed = -1;
			autoScrollDelay = 5;
			autoScrollRewind = 0;
			color[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
			width = 0.001;
		};
		class HScrollbar: HScrollbar
		{
			color[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
			height = 0.001;
		};
	};
	class RscUnitInfoAir: RscUnitInfo
	{
		controls[] = {"WeaponInfoControlsGroupRight","CA_BackgroundVehicle","CA_BackgroundVehicleTitle","CA_BackgroundVehicleTitleDark","CA_BackgroundFuel","CA_Vehicle","CA_VehicleRole","CA_HitZones","CA_SpeedBackground","CA_SpeedUnits","CA_Speed","CA_ValueFuel","CA_AltBackground","CA_AltUnits","CA_Alt","CA_Stabilize","CA_Radar"};
	};
	class RscUnitInfo_AH64D_gunner
	{
		idd = 300;
		controls[] = {"CA_Distance","CA_VisionMode","CA_FlirMode","CA_FOVMode","CA_Compass","CA_Heading","CA_Autohover","CA_BalisticComputer","CA_BallRange","CA_LaserMarker","CA_WeaponZeroingText","CA_WeaponZeroing"};
		class CA_Distance: RscOpticsValue
		{
			idc = 151;
			x = 0.438;
			y = 0.908;
			w = 0.123;
			style = 2;
		};
		class CA_LaserMarker: RscOpticsText
		{
			idc = 158;
			x = 0.27;
			y = 0.908;
			w = 0.154;
			text = "LASE TRGT";
		};
		class CA_BallRange: RscOpticsValue
		{
			idc = 164;
			x = 0.626;
			y = 0.908;
			w = 0.3;
		};
		class CA_BalisticComputer: RscOpticsText
		{
			idc = 165;
			x = 0.594;
			y = 0.908;
			text = "*";
			sizeEx = 0.06;
		};
		class CA_FOVMode: RscOpticsText
		{
			idc = 154;
			x = 0.052;
			y = 0.248;
		};
		class CA_VisionMode: RscOpticsText
		{
			idc = 152;
			x = 0.052;
			y = 0.296;
		};
		class CA_Autohover: RscOpticsText
		{
			idc = 157;
			x = 0.664;
			y = 0.248;
			style = 1;
			text = "HOV";
		};
		class CA_FlirMode: RscOpticsText
		{
			idc = 153;
			x = 0.664;
			y = 0.296;
			style = 1;
		};
		class CA_Compass: RscOpticsText
		{
			idc = 155;
			x = 0;
			y = 0.7;
			w = 0.3;
			h = 0.05;
		};
		class CA_Heading: RscOpticsText
		{
			idc = 156;
			x = 0;
			y = 0.75;
			w = 0.3;
			h = 0.05;
		};
	};
	class RscUnitVehicle
	{
		idd = 300;
		updateWidthByWeapon = 0;
		updateHeightByCrew = 0;
		updateWidthByCrew = 0;
		controls[] = {"WeaponInfoControlsGroupRight","CA_Zeroing","CA_BackgroundVehicle","CA_BackgroundVehicleTitle","CA_BackgroundVehicleTitleDark","CA_BackgroundFuel","CA_Vehicle","CA_VehicleRole","CA_HitZones","CA_SpeedBackground","CA_SpeedUnits","CA_Speed","CA_ValueFuel","CA_AltBackground","CA_AltUnits","CA_Alt","CA_Stabilize"};
	};
	class RscUnitInfoUAV
	{
		idd = 300;
		controls[] = {"WeaponInfoControlsGroupRight","CA_BackgroundVehicle","CA_BackgroundVehicleTitle","CA_BackgroundVehicleTitleDark","CA_BackgroundFuel","CA_Vehicle","CA_VehicleRole","CA_HitZones","CA_SpeedBackground","CA_SpeedUnits","CA_Speed","CA_ValueFuel","CA_AltBackground","CA_AltUnits","CA_Alt","CA_Stabilize","CA_Radar","RscTextUAV","TextPosition","Position","TextZoom","Zoom","Time","Date"};
		class RscTextUAV: RscText
		{
			x = "safezoneX";
			y = "safezoneY";
			w = "safezoneW";
			h = "safezoneH";
			colorbackground[] = {0,0,0,0};
			type = 0;
			IDC = 1004;
			linespacing = 1;
			text = "";
			style = "0x00 + 0x10 + 0x200";
		};
		class TextPosition: RscTextUAV
		{
			text = "GRID";
			x = "0.5 + 	0.13 * safezoneW * 2 + 	0.05 / 2";
			y = "SafeZoneY + SafezoneH - 0.12";
			h = 0.05;
			w = "safezoneW - ((safezoneW - 1) / 2 + (0.5 + 	0.13 * safezoneW * 2 + 	0.05 / 2))";
			style = "0x00 + 0x100 + 0x200";
			colortext[] = {1,1,1,1};
			font = "EtelkaMonospacePro";
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)*1";
		};
		class Position: TextPosition
		{
			idc = 130;
			x = "0.5 + 	0.13 * safezoneW * 2 + 	0.05 / 2";
			y = "SafeZoneY + SafezoneH - 0.12";
			style = "0x01 + 0x100";
		};
		class TextZoom: TextPosition
		{
			text = "ZOOM";
			y = "SafeZoneY + SafezoneH - 0.08";
		};
		class Zoom: Position
		{
			idc = 131;
			y = "SafeZoneY + SafezoneH - 0.08";
		};
		class Time: TextPosition
		{
			idc = 101;
			style = "0x02 + 0x100 + 0x200";
			x = "0.5 - 0.2";
			y = "SafeZoneY + SafezoneH - 0.12";
			w = 0.4;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)*1 * 1.5";
		};
		class Date: Time
		{
			idc = 102;
			y = "SafeZoneY + SafezoneH - 0.09";
			sizeEx = "0.024*1.2";
		};
	};
	class RscUnitInfoSubmarine: RscUnitInfo
	{
		idd = 300;
		updateWidthByWeapon = 0;
		updateHeightByCrew = 0;
		updateWidthByCrew = 0;
		controls[] = {"WeaponInfoControlsGroupRight","CA_BackgroundVehicle","CA_BackgroundVehicleTitle","CA_BackgroundVehicleTitleDark","CA_BackgroundFuel","CA_Vehicle","CA_VehicleRole","CA_HitZones","CA_SpeedBackground","CA_SpeedUnits","CA_Speed","CA_ValueFuel","CA_AltBackground","CA_AltUnits","CA_Depth"};
	};
	class RscUnitInfoShip: RscUnitInfo
	{
		idd = 300;
		updateWidthByWeapon = 0;
		updateHeightByCrew = 0;
		updateWidthByCrew = 0;
		controls[] = {"WeaponInfoControlsGroupRight","CA_Zeroing","CA_BackgroundVehicle","CA_BackgroundVehicleTitle","CA_BackgroundVehicleTitleDark","CA_BackgroundFuel","CA_Vehicle","CA_VehicleRole","CA_HitZones","CA_SpeedBackground","CA_SpeedUnits","CA_Speed","CA_ValueFuel","CA_Radar"};
	};
	class RscWeaponEmpty
	{
		idd = 300;
		controls[] = {};
	};
	class RscWeaponRangeFinder
	{
		idd = 300;
		controls[] = {"CA_Distance"};
		class CA_Distance: RscOpticsValue
		{
			idc = 151;
			style = 2;
			sizeEx = "0.028*SafezoneH";
			colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
			x = 0.4;
			y = "(SafezoneY+SafezoneH*0.665)";
			w = 0.2;
			h = "0.05*SafezoneH";
		};
	};
	class RscWeaponRangeArtillery
	{
		idd = 300;
		controls[] = {"CA_IGUI_elements_group","CA_RangeElements_group"};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			idc = 170;
			class VScrollbar: VScrollbar
			{
				width = 0;
			};
			class HScrollbar: HScrollbar
			{
				height = 0;
			};
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class CA_Heading: RscText
				{
					idc = 156;
					style = 0;
					colorText[] = {0.706,0.0745,0.0196,1};
					sizeEx = "0.028*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "015";
					x = "25.3 * 		(0.01875 * SafezoneH)";
					y = "6.3 * 		(0.025 * SafezoneH)";
					w = "2.2 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
				class CA_OpticsPitch: RscText
				{
					idc = 182;
					style = 1;
					colorText[] = {0.706,0.0745,0.0196,1};
					sizeEx = "0.028*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "34.5";
					x = "11.8 * 		(0.01875 * SafezoneH)";
					y = "19.46 * 		(0.025 * SafezoneH)";
					w = "3.5 * 		(0.01875 * SafezoneH)";
					h = "1.1 * 		(0.025 * SafezoneH)";
				};
				class CA_OpticsZoom: RscText
				{
					idc = 180;
					style = 1;
					colorText[] = {0.706,0.0745,0.0196,1};
					sizeEx = "0.028*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "4.5";
					x = "38.3 * 		(0.01875 * SafezoneH)";
					y = "19.46 * 		(0.025 * SafezoneH)";
					w = "3.5 * 		(0.01875 * SafezoneH)";
					h = "1.1 * 		(0.025 * SafezoneH)";
				};
				class CA_Solution_text: RscText
				{
					style = 0;
					sizeEx = "0.028*SafezoneH";
					colorText[] = {0.95,0.95,0.95,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					idc = 1011;
					text = "SOLUTION";
					x = "10.8 * 		(0.01875 * SafezoneH)";
					y = "27.8 * 		(0.025 * SafezoneH)";
					w = "7.5 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
				class CA_distance_text: RscText
				{
					style = 0;
					sizeEx = "0.038*SafezoneH";
					colorText[] = {0.95,0.95,0.95,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					idc = 1010;
					text = "RNG";
					x = "10.8 * 		(0.01875 * SafezoneH)";
					y = "29.3 * 		(0.025 * SafezoneH)";
					w = "3 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_Distance: RscText
				{
					idc = 173;
					style = 1;
					sizeEx = "0.038*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "2456";
					x = "13.8 * 		(0.01875 * SafezoneH)";
					y = "29.3 * 		(0.025 * SafezoneH)";
					w = "5.2 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_time_text: RscText
				{
					style = 0;
					sizeEx = "0.038*SafezoneH";
					colorText[] = {0.95,0.95,0.95,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					idc = 1012;
					text = "TRV";
					x = "10.8 * 		(0.01875 * SafezoneH)";
					y = "30.8 * 		(0.025 * SafezoneH)";
					w = "3 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_Time: RscText
				{
					idc = 174;
					style = 1;
					sizeEx = "0.038*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "25";
					x = "13.8 * 		(0.01875 * SafezoneH)";
					y = "30.8 * 		(0.025 * SafezoneH)";
					w = "5.2 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_ElevCtrl_text: RscText
				{
					style = 0;
					sizeEx = "0.028*SafezoneH";
					colorText[] = {0.95,0.95,0.95,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					idc = 1015;
					text = "ELEV CTRL";
					x = "33.8 * 		(0.01875 * SafezoneH)";
					y = "27.8 * 		(0.025 * SafezoneH)";
					w = "7.5 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
				class CA_Elev_text: RscText
				{
					style = 0;
					sizeEx = "0.038*SafezoneH";
					colorText[] = {0.95,0.95,0.95,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					idc = 1013;
					text = "ELV";
					x = "33.8 * 		(0.01875 * SafezoneH)";
					y = "29.3 * 		(0.025 * SafezoneH)";
					w = "3 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_Elev: RscText
				{
					idc = 175;
					style = 1;
					sizeEx = "0.038*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "80.5";
					x = "36.8 * 		(0.01875 * SafezoneH)";
					y = "29.3 * 		(0.025 * SafezoneH)";
					w = "5.2 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_Elev_Need_text: RscText
				{
					style = 0;
					sizeEx = "0.038*SafezoneH";
					colorText[] = {0.95,0.95,0.95,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					idc = 1014;
					text = "REL";
					x = "33.8 * 		(0.01875 * SafezoneH)";
					y = "30.8 * 		(0.025 * SafezoneH)";
					w = "3 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_Elev_Need: RscText
				{
					idc = 176;
					style = 1;
					sizeEx = "0.038*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "35.4";
					x = "36.8 * 		(0.01875 * SafezoneH)";
					y = "30.8 * 		(0.025 * SafezoneH)";
					w = "5.2 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_VisionMode: RscText
				{
					idc = 179;
					style = 0;
					sizeEx = "0.028*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "VIS";
					x = "10.5 * 		(0.01875 * SafezoneH)";
					y = "32.6 * 		(0.025 * SafezoneH)";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
			};
		};
		class CA_RangeElements_group: RscControlsGroup
		{
			idc = 177;
			class VScrollbar: VScrollbar
			{
				width = 0;
			};
			class HScrollbar: HScrollbar
			{
				height = 0;
			};
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class CA_OORange: RscText
				{
					style = 2;
					sizeEx = "0.028*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					idc = 1007;
					text = "[RANGE]";
					x = "24.5 * 		(0.01875 * SafezoneH)";
					y = "32.6 * 		(0.025 * SafezoneH)";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_OORangeCross: RscText
				{
					style = "0x30 + 0x800";
					sizeEx = "0.36*SafezoneH";
					shadow = 0;
					idc = 1009;
					text = "A3\weapons_f\acc\Data\reticle_mk6_outofrange_CA.paa";
					x = "20.5 * 		(0.01875 * SafezoneH)";
					y = "14 * 		(0.025 * SafezoneH)";
					w = "12.5 * 		(0.01875 * SafezoneH)";
					h = "12 * 		(0.025 * SafezoneH)";
				};
			};
		};
	};
	class RscWeaponRangeArtilleryAuto
	{
		idd = 300;
		controls[] = {"CA_IGUI_elements_group","CA_RangeElements_group","CA_AutoElements_group"};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			idc = 170;
			class VScrollbar: VScrollbar
			{
				width = 0;
			};
			class HScrollbar: HScrollbar
			{
				height = 0;
			};
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class CA_Heading: RscText
				{
					idc = 156;
					style = 0;
					colorText[] = {0.706,0.0745,0.0196,1};
					sizeEx = "0.028*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "015";
					x = "25.3 * 		(0.01875 * SafezoneH)";
					y = "6.3 * 		(0.025 * SafezoneH)";
					w = "2.2 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
				class CA_OpticsPitch: RscText
				{
					idc = 182;
					style = 1;
					colorText[] = {0.706,0.0745,0.0196,1};
					sizeEx = "0.028*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "34.5";
					x = "11.8 * 		(0.01875 * SafezoneH)";
					y = "19.46 * 		(0.025 * SafezoneH)";
					w = "3.5 * 		(0.01875 * SafezoneH)";
					h = "1.1 * 		(0.025 * SafezoneH)";
				};
				class CA_OpticsZoom: RscText
				{
					idc = 180;
					style = 1;
					colorText[] = {0.706,0.0745,0.0196,1};
					sizeEx = "0.028*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "4.5";
					x = "38.3 * 		(0.01875 * SafezoneH)";
					y = "19.46 * 		(0.025 * SafezoneH)";
					w = "3.5 * 		(0.01875 * SafezoneH)";
					h = "1.1 * 		(0.025 * SafezoneH)";
				};
				class CA_Solution_text: RscText
				{
					style = 0;
					sizeEx = "0.028*SafezoneH";
					colorText[] = {0.95,0.95,0.95,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					idc = 1011;
					text = "SOLUTION";
					x = "10.8 * 		(0.01875 * SafezoneH)";
					y = "27.8 * 		(0.025 * SafezoneH)";
					w = "7.5 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
				class CA_distance_text: RscText
				{
					style = 0;
					sizeEx = "0.038*SafezoneH";
					colorText[] = {0.95,0.95,0.95,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					idc = 1010;
					text = "RNG";
					x = "10.8 * 		(0.01875 * SafezoneH)";
					y = "29.3 * 		(0.025 * SafezoneH)";
					w = "3 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_Distance: RscText
				{
					idc = 173;
					style = 1;
					sizeEx = "0.038*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "2456";
					x = "13.8 * 		(0.01875 * SafezoneH)";
					y = "29.3 * 		(0.025 * SafezoneH)";
					w = "5.2 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_time_text: RscText
				{
					style = 0;
					sizeEx = "0.038*SafezoneH";
					colorText[] = {0.95,0.95,0.95,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					idc = 1012;
					text = "TRV";
					x = "10.8 * 		(0.01875 * SafezoneH)";
					y = "30.8 * 		(0.025 * SafezoneH)";
					w = "3 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_Time: RscText
				{
					idc = 174;
					style = 1;
					sizeEx = "0.038*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "25";
					x = "13.8 * 		(0.01875 * SafezoneH)";
					y = "30.8 * 		(0.025 * SafezoneH)";
					w = "5.2 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_ElevCtrl_text: RscText
				{
					style = 0;
					sizeEx = "0.028*SafezoneH";
					colorText[] = {0.95,0.95,0.95,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					idc = 1015;
					text = "ELEV CTRL";
					x = "33.8 * 		(0.01875 * SafezoneH)";
					y = "27.8 * 		(0.025 * SafezoneH)";
					w = "7.5 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
				class CA_Elev_text: RscText
				{
					style = 0;
					sizeEx = "0.038*SafezoneH";
					colorText[] = {0.95,0.95,0.95,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					idc = 1013;
					text = "ELV";
					x = "33.8 * 		(0.01875 * SafezoneH)";
					y = "29.3 * 		(0.025 * SafezoneH)";
					w = "3 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_Elev: RscText
				{
					idc = 175;
					style = 1;
					sizeEx = "0.038*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "-80.5";
					x = "36.8 * 		(0.01875 * SafezoneH)";
					y = "29.3 * 		(0.025 * SafezoneH)";
					w = "5.2 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_Elev_Need_text: RscText
				{
					style = 0;
					sizeEx = "0.038*SafezoneH";
					colorText[] = {0.95,0.95,0.95,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					idc = 1014;
					text = "REL";
					x = "33.8 * 		(0.01875 * SafezoneH)";
					y = "30.8 * 		(0.025 * SafezoneH)";
					w = "3 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_Elev_Need: RscText
				{
					idc = 176;
					style = 1;
					sizeEx = "0.038*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "-35.4";
					x = "36.8 * 		(0.01875 * SafezoneH)";
					y = "30.8 * 		(0.025 * SafezoneH)";
					w = "5.2 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_VisionMode: RscText
				{
					idc = 179;
					style = 0;
					sizeEx = "0.028*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "VIS";
					x = "10.5 * 		(0.01875 * SafezoneH)";
					y = "32.6 * 		(0.025 * SafezoneH)";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
			};
		};
		class CA_RangeElements_group: RscControlsGroup
		{
			idc = 177;
			class VScrollbar: VScrollbar
			{
				width = 0;
			};
			class HScrollbar: HScrollbar
			{
				height = 0;
			};
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class CA_OORange: RscText
				{
					style = 2;
					sizeEx = "0.028*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					idc = 1007;
					text = "[RANGE]";
					x = "24.5 * 		(0.01875 * SafezoneH)";
					y = "32.6 * 		(0.025 * SafezoneH)";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_OORangeCross: RscText
				{
					style = "0x30 + 0x800";
					sizeEx = "0.36*SafezoneH";
					shadow = 0;
					idc = 1009;
					text = "A3\weapons_f\acc\Data\reticle_mk6_outofrange_CA.paa";
					x = "20.5 * 		(0.01875 * SafezoneH)";
					y = "14 * 		(0.025 * SafezoneH)";
					w = "12.5 * 		(0.01875 * SafezoneH)";
					h = "12 * 		(0.025 * SafezoneH)";
				};
			};
		};
		class CA_AutoElements_group: RscControlsGroup
		{
			idc = 178;
			class VScrollbar: VScrollbar
			{
				width = 0;
			};
			class HScrollbar: HScrollbar
			{
				height = 0;
			};
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class CA_Auto: RscText
				{
					style = 1;
					sizeEx = "0.028*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					idc = 1016;
					text = "AUTO";
					x = "38.7 * 		(0.01875 * SafezoneH)";
					y = "32.6 * 		(0.025 * SafezoneH)";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
			};
		};
	};
	class RscWeaponRangeFinderPAS13
	{
		idd = 300;
		controls[] = {"CA_Distance"};
		class CA_Distance: RscOpticsValue
		{
			idc = 151;
			style = 2;
			sizeEx = "0.038*SafezoneH";
			x = 0.4;
			y = "(SafezoneY+SafezoneH*0.8)";
			w = 0.207;
			h = "0.05*SafezoneH";
		};
	};
	class RscOptics_Rangefinder: RscUnitInfo
	{
		idd = 300;
		controls[] = {"CA_IGUI_elements_group"};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			idc = 170;
			class VScrollbar: VScrollbar
			{
				width = 0;
			};
			class HScrollbar: HScrollbar
			{
				height = 0;
			};
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class CA_Distance: RscText
				{
					idc = 151;
					style = 1;
					sizeEx = "0.038*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "2456";
					x = "45.5 * 		(0.01875 * SafezoneH)";
					y = "19.5 * 		(0.025 * SafezoneH)";
					w = "4 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_VisionMode: RscText
				{
					idc = 179;
					style = 0;
					sizeEx = "0.038*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "VIS";
					x = "6.7 * 		(0.01875 * SafezoneH)";
					y = "19.5 * 		(0.025 * SafezoneH)";
					w = "4 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_Heading: RscText
				{
					idc = 156;
					style = 0;
					sizeEx = "0.0285*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "023";
					x = "25.3 * 		(0.01875 * SafezoneH)";
					y = "9.5 * 		(0.025 * SafezoneH)";
					w = "3.5 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
			};
		};
	};
	class RscOptics_LaserDesignator
	{
		idd = 300;
		controls[] = {"CA_IGUI_elements_group"};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			idc = 170;
			class VScrollbar: VScrollbar
			{
				width = 0;
			};
			class HScrollbar: HScrollbar
			{
				height = 0;
			};
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class CA_OpticsZoom: RscText
				{
					idc = 180;
					style = 1;
					colorText[] = {0.706,0.0745,0.0196,1};
					sizeEx = "0.038*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "4.5";
					x = "43.85 * 		(0.01875 * SafezoneH)";
					y = "19.6 * 		(0.025 * SafezoneH)";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					h = "1.1 * 		(0.025 * SafezoneH)";
				};
				class CA_Distance: RscText
				{
					idc = 151;
					style = 0;
					sizeEx = "0.038*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "2456";
					x = "24.5 * 		(0.01875 * SafezoneH)";
					y = "3 * 		(0.025 * SafezoneH)";
					w = "4 * 		(0.01875 * SafezoneH)";
					h = "1.5 * 		(0.025 * SafezoneH)";
				};
				class CA_Elev: RscText
				{
					idc = 175;
					style = 1;
					sizeEx = "0.038*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "80.5";
					x = "32.7 * 		(0.01875 * SafezoneH)";
					y = "3 * 		(0.025 * SafezoneH)";
					w = "5 * 		(0.01875 * SafezoneH)";
					h = "1.5 * 		(0.025 * SafezoneH)";
				};
				class CA_VisionMode: RscText
				{
					idc = 179;
					style = 0;
					sizeEx = "0.038*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "VIS";
					x = "6.5 * 		(0.01875 * SafezoneH)";
					y = "19.6 * 		(0.025 * SafezoneH)";
					w = "4 * 		(0.01875 * SafezoneH)";
					h = "1.1 * 		(0.025 * SafezoneH)";
				};
				class CA_Laser: RscText
				{
					idc = 158;
					style = "0x30 + 0x800";
					sizeEx = "0.038*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "\A3\ui_f\data\igui\rscingameui\rscoptics\laser_designator_iconLaserOn.paa";
					x = "29.2 * 		(0.01875 * SafezoneH)";
					y = "3 * 		(0.025 * SafezoneH)";
					w = "3.5 * 		(0.01875 * SafezoneH)";
					h = "1.5 * 		(0.025 * SafezoneH)";
				};
				class CA_Heading: RscText
				{
					idc = 156;
					style = 0;
					sizeEx = "0.038*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "023";
					x = "16.1 * 		(0.01875 * SafezoneH)";
					y = "3 * 		(0.025 * SafezoneH)";
					w = "3.5 * 		(0.01875 * SafezoneH)";
					h = "1.6 * 		(0.025 * SafezoneH)";
				};
			};
		};
	};
	class RscWeaponRangeFinderMAAWS
	{
		idd = 300;
		controls[] = {"CA_IGUI_elements_group"};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			x = "SafezoneX";
			y = "SafezoneY";
			w = "SafezoneW";
			h = "SafezoneH";
			idc = 170;
			class VScrollbar: VScrollbar
			{
				autoScrollSpeed = -1;
				autoScrollDelay = 5;
				autoScrollRewind = 0;
				color[] = {1,1,1,0};
				width = 0.001;
			};
			class HScrollbar: HScrollbar
			{
				color[] = {1,1,1,0};
				height = 0.001;
			};
			class Controls
			{
				class CA_Distance: RscOpticsValue
				{
					idc = 151;
					style = 2;
					shadow = 0;
					colorText[] = {0.8196,0.1412,0.1412,1.0};
					sizeEx = "0.038*SafezoneH";
					x = "0.4-SafeZoneX";
					y = "SafezoneH*0.8";
					w = 0.207;
					h = "0.05*SafezoneH";
				};
			};
		};
	};
	class RscWeaponRangeFinderAbramsCom
	{
		idd = 300;
		controls[] = {"CA_Distance"};
		class CA_Distance: RscOpticsValue
		{
			idc = 151;
			style = 2;
			sizeEx = "0.038*SafezoneH";
			colorText[] = {0.8706,0.2275,0.2,1.0};
			x = 0.4;
			y = "(SafezoneY+SafezoneH*0.8)";
			w = 0.207;
			h = "0.05*SafezoneH";
		};
	};
	class RscWeaponRangeFinderAbramsGun
	{
		idd = 300;
		controls[] = {"CA_Distance"};
		class CA_Distance: RscOpticsValue
		{
			idc = 151;
			style = 2;
			sizeEx = "0.038*SafezoneH";
			x = 0.4;
			y = "(SafezoneY+SafezoneH*0.8)";
			w = 0.207;
			h = "0.05*SafezoneH";
		};
	};
	class RscWeaponRangeFinderStrykerMGSGun
	{
		idd = 300;
		controls[] = {"CA_Distance"};
		class CA_Distance: RscOpticsValue
		{
			idc = 151;
			style = 2;
			sizeEx = "0.038*SafezoneH";
			x = 0.4;
			y = "(SafezoneY+SafezoneH*0.8)";
			w = 0.207;
			h = "0.05*SafezoneH";
		};
	};
	class RscOptics_crows: RscUnitInfo
	{
		idd = 300;
		controls[] = {"CA_Zeroing","CA_IGUI_elements_group"};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			idc = 170;
			class VScrollbar: VScrollbar
			{
				width = 0;
			};
			class HScrollbar: HScrollbar
			{
				height = 0;
			};
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class CA_Distance: RscText
				{
					idc = 151;
					style = 0;
					sizeEx = "0.03*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,0.6};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "2456";
					x = "31.5 * 		(0.01875 * SafezoneH)";
					y = "28.2 * 		(0.025 * SafezoneH)";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
				class CA_VisionMode: RscText
				{
					idc = 179;
					style = 0;
					sizeEx = "0.03*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,0.6};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "VIS";
					x = "31.5 * 		(0.01875 * SafezoneH)";
					y = "29.5 * 		(0.025 * SafezoneH)";
					w = "4 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
				class CA_FlirMode: RscText
				{
					idc = 153;
					style = 0;
					sizeEx = "0.03*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,0.6};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "BHOT";
					x = "33.5 * 		(0.01875 * SafezoneH)";
					y = "29.5 * 		(0.025 * SafezoneH)";
					w = "5 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
				class CA_distance_text: RscText
				{
					style = 0;
					sizeEx = "0.03*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,0.6};
					shadow = 0;
					font = "EtelkaMonospacePro";
					idc = 1003;
					text = "RANGE:";
					x = "27 * 		(0.01875 * SafezoneH)";
					y = "28.2 * 		(0.025 * SafezoneH)";
					w = "5.5 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
				class CA_VisionMode_text: RscText
				{
					style = 0;
					sizeEx = "0.03*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,0.6};
					shadow = 0;
					font = "EtelkaMonospacePro";
					idc = 1004;
					text = "MODE:";
					x = "27 * 		(0.01875 * SafezoneH)";
					y = "29.5 * 		(0.025 * SafezoneH)";
					w = "5.5 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
			};
		};
	};
	class RscOptics_strider_commander
	{
		idd = 300;
		controls[] = {"CA_IGUI_elements_group"};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			idc = 170;
			class VScrollbar: VScrollbar
			{
				width = 0;
			};
			class HScrollbar: HScrollbar
			{
				height = 0;
			};
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class CA_OpticsZoom: RscText
				{
					idc = 180;
					style = 1;
					colorText[] = {0.706,0.0745,0.0196,1};
					sizeEx = "0.038*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "4.5";
					x = "43.85 * 		(0.01875 * SafezoneH)";
					y = "19.6 * 		(0.025 * SafezoneH)";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					h = "1.1 * 		(0.025 * SafezoneH)";
				};
				class CA_Distance: RscText
				{
					idc = 151;
					style = 0;
					sizeEx = "0.038*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "2456";
					x = "24.5 * 		(0.01875 * SafezoneH)";
					y = "3 * 		(0.025 * SafezoneH)";
					w = "4 * 		(0.01875 * SafezoneH)";
					h = "1.5 * 		(0.025 * SafezoneH)";
				};
				class CA_Elev: RscText
				{
					idc = 175;
					style = 1;
					sizeEx = "0.038*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "80.5";
					x = "32.7 * 		(0.01875 * SafezoneH)";
					y = "3 * 		(0.025 * SafezoneH)";
					w = "5 * 		(0.01875 * SafezoneH)";
					h = "1.5 * 		(0.025 * SafezoneH)";
				};
				class CA_VisionMode: RscText
				{
					idc = 179;
					style = 0;
					sizeEx = "0.038*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "VIS";
					x = "6.5 * 		(0.01875 * SafezoneH)";
					y = "19.6 * 		(0.025 * SafezoneH)";
					w = "4 * 		(0.01875 * SafezoneH)";
					h = "1.1 * 		(0.025 * SafezoneH)";
				};
				class CA_Laser: RscText
				{
					idc = 158;
					style = "0x30 + 0x800";
					sizeEx = "0.038*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "\A3\ui_f\data\igui\rscingameui\rscoptics\laser_designator_iconLaserOn.paa";
					x = "29.2 * 		(0.01875 * SafezoneH)";
					y = "3 * 		(0.025 * SafezoneH)";
					w = "3.5 * 		(0.01875 * SafezoneH)";
					h = "1.5 * 		(0.025 * SafezoneH)";
				};
				class CA_Heading: RscText
				{
					idc = 156;
					style = 0;
					sizeEx = "0.038*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "023";
					x = "16.1 * 		(0.01875 * SafezoneH)";
					y = "3 * 		(0.025 * SafezoneH)";
					w = "3.5 * 		(0.01875 * SafezoneH)";
					h = "1.6 * 		(0.025 * SafezoneH)";
				};
			};
		};
	};
	class RscWeaponZeroing: RscUnitInfo
	{
		idd = 300;
		controls[] = {"CA_Zeroing"};
		class CA_Zeroing: RscText
		{
			idc = 168;
			colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
			x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_WEAPON_X"",		((safezoneX + safezoneW) - 		(12.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) - 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "0 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2)) +  			18 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) - (1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20))";
			w = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
	class RscWeaponRangeZeroing: RscUnitInfo
	{
		idd = 300;
		controls[] = {"CA_Zeroing","CA_DistanceText","CA_Distance"};
		class CA_DistanceText: RscOpticsText
		{
			idc = -1;
			style = 2;
			colorText[] = {1,0,0,1};
			x = 0;
			y = "(SafezoneY+SafezoneH) - 0.05";
			w = 1;
			h = 0.05;
		};
		class CA_Distance: RscOpticsValue
		{
			idc = 151;
			style = 2;
			colorText[] = {1,0.15,0.15,0.65};
			shadow = 0;
			font = "EtelkaMonospacePro";
			x = 0;
			y = "(SafezoneY+SafezoneH) - 0.195";
			w = 1;
			h = 0.05;
		};
	};
	class RscOptics_sos: RscUnitInfo
	{
		idd = 300;
		controls[] = {"CA_IGUI_elements_group","CA_Sniper_WFOV_mode_group","CA_Sniper_NFOV_mode_group"};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			idc = 170;
			class VScrollbar: VScrollbar
			{
				width = 0;
			};
			class HScrollbar: HScrollbar
			{
				height = 0;
			};
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class CA_Distance: RscText
				{
					idc = 151;
					style = 0;
					sizeEx = "0.036*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					x = "40.35 * 		(0.01875 * SafezoneH)";
					y = "19.7 * 		(0.025 * SafezoneH)";
					w = "4 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
			};
		};
		class CA_Sniper_NFOV_mode_group: RscControlsGroup
		{
			idc = 162;
			class VScrollbar: VScrollbar
			{
				width = 0;
			};
			class HScrollbar: HScrollbar
			{
				height = 0;
			};
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class CA_FOVModeNFOV: RscText
				{
					style = 1;
					sizeEx = "0.036*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					idc = 1002;
					text = "NFOV";
					x = "9.15 * 		(0.01875 * SafezoneH)";
					y = "19.7 * 		(0.025 * SafezoneH)";
					w = "3.9 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
			};
		};
		class CA_Sniper_WFOV_mode_group: RscControlsGroup
		{
			idc = 163;
			class VScrollbar: VScrollbar
			{
				width = 0;
			};
			class HScrollbar: HScrollbar
			{
				height = 0;
			};
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class CA_FOVModeWFOV: RscText
				{
					style = 1;
					sizeEx = "0.036*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					idc = 1001;
					text = "WFOV";
					x = "9.15 * 		(0.01875 * SafezoneH)";
					y = "19.7 * 		(0.025 * SafezoneH)";
					w = "3.9 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
			};
		};
	};
	class RscOptics_nightstalker: RscUnitInfo
	{
		idd = 300;
		controls[] = {"CA_IGUI_elements_group"};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			idc = 170;
			class VScrollbar: VScrollbar
			{
				width = 0;
			};
			class HScrollbar: HScrollbar
			{
				height = 0;
			};
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class CA_Distance: RscText
				{
					idc = 151;
					style = 0;
					sizeEx = "0.045*SafezoneH";
					colorText[] = {0,1,0,0.5};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "- - - -";
					x = "38 * 		(0.01875 * SafezoneH)";
					y = "19.1 * 		(0.025 * SafezoneH)";
					w = "5.6 * 		(0.01875 * SafezoneH)";
					h = "2 * 		(0.025 * SafezoneH)";
				};
				class CA_VisionMode: RscText
				{
					idc = 179;
					style = 0;
					sizeEx = "0.045*SafezoneH";
					colorText[] = {0,1,0,0.5};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "VIS";
					x = "10.5 * 		(0.01875 * SafezoneH)";
					y = "19.1 * 		(0.025 * SafezoneH)";
					w = "5 * 		(0.01875 * SafezoneH)";
					h = "2 * 		(0.025 * SafezoneH)";
				};
				class CA_OpticsZoom: RscText
				{
					idc = 180;
					style = 1;
					sizeEx = "0.028*SafezoneH";
					colorText[] = {0,1,0,0.5};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "5.5";
					x = "38.8 * 		(0.01875 * SafezoneH)";
					y = "20.8 * 		(0.025 * SafezoneH)";
					w = "4 * 		(0.01875 * SafezoneH)";
					h = "1.5 * 		(0.025 * SafezoneH)";
				};
				class CA_Bracket: RscText
				{
					idc = 181;
					style = "0x30 + 0x800";
					sizeEx = "0.035*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					//text = "A3\weapons_f\acc\Data\reticle_nightstalker_bracket_ca.paa";
					text = "";
					x = "16.5 * 		(0.01875 * SafezoneH)";
					y = "9.75 * 		(0.025 * SafezoneH)";
					w = "20.5 * 		(0.01875 * SafezoneH)";
					h = "20.5 * 		(0.025 * SafezoneH)";
				};
			};
		};
	};
	class RscOptics_tws: RscUnitInfo
	{
		idd = 300;
		controls[] = {"CA_IGUI_elements_group","CA_WFOV_mode_group","CA_NFOV_mode_group"};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			idc = 170;
			class VScrollbar: VScrollbar
			{
				width = 0;
			};
			class HScrollbar: HScrollbar
			{
				height = 0;
			};
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class CA_Distance: RscText
				{
					idc = 151;
					style = 0;
					sizeEx = "0.036*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "- - - -";
					x = "24.75 * 		(0.01875 * SafezoneH)";
					y = "33.2 * 		(0.025 * SafezoneH)";
					w = "3.6 * 		(0.01875 * SafezoneH)";
					h = "1.3 * 		(0.025 * SafezoneH)";
				};
				class CA_VisionMode: RscText
				{
					idc = 152;
					style = 0;
					sizeEx = "0.028*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "FLIR";
					x = "8.8 * 		(0.01875 * SafezoneH)";
					y = "18.7 * 		(0.025 * SafezoneH)";
					w = "3.5 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
				class CA_FlirMode: RscText
				{
					idc = 153;
					style = 0;
					sizeEx = "0.028*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "BHOT";
					x = "11.8 * 		(0.01875 * SafezoneH)";
					y = "18.7 * 		(0.025 * SafezoneH)";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
			};
		};
		class CA_NFOV_mode_group: RscControlsGroup
		{
			idc = 162;
			class VScrollbar: VScrollbar
			{
				width = 0;
			};
			class HScrollbar: HScrollbar
			{
				height = 0;
			};
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class CA_FOVModeNFOV: RscText
				{
					style = 1;
					sizeEx = "0.028*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					idc = 1002;
					text = "NFOV";
					x = "41.7 * 		(0.01875 * SafezoneH)";
					y = "18.7 * 		(0.025 * SafezoneH)";
					w = "3 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
			};
		};
		class CA_WFOV_mode_group: RscControlsGroup
		{
			idc = 163;
			class VScrollbar: VScrollbar
			{
				width = 0;
			};
			class HScrollbar: HScrollbar
			{
				height = 0;
			};
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class CA_FOVModeWFOV: RscText
				{
					style = 1;
					sizeEx = "0.028*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					idc = 1001;
					text = "WFOV";
					x = "41.7 * 		(0.01875 * SafezoneH)";
					y = "18.7 * 		(0.025 * SafezoneH)";
					w = "3 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
				class CA_BracketNFOV: RscText
				{
					style = "0x30 + 0x800";
					sizeEx = "0.028*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					idc = 1005;
					text = "A3\weapons_f\acc\Data\reticle_tws_bracket_ca.paa";
					x = "17.75 * 		(0.01875 * SafezoneH)";
					y = "11 * 		(0.025 * SafezoneH)";
					w = "18 * 		(0.01875 * SafezoneH)";
					h = "18 * 		(0.025 * SafezoneH)";
				};
			};
		};
	};
	class RscOptics_cows: RscUnitInfo
	{
		idd = 300;
		controls[] = {"CA_WFOV_mode_group","CA_NFOV_mode_group"};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			idc = 170;
			class VScrollbar: VScrollbar
			{
				width = 0;
			};
			class HScrollbar: HScrollbar
			{
				height = 0;
			};
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls{};
		};
		class CA_NFOV_mode_group: RscControlsGroup
		{
			idc = 162;
			class VScrollbar: VScrollbar
			{
				width = 0;
			};
			class HScrollbar: HScrollbar
			{
				height = 0;
			};
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class CA_Distance_NFOV: RscText
				{
					idc = 183;
					style = 0;
					sizeEx = "0.06*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "0000";
					x = "38.2 * 		(0.01875 * SafezoneH)";
					y = "19.1 * 		(0.025 * SafezoneH)";
					w = "8 * 		(0.01875 * SafezoneH)";
					h = "2 * 		(0.025 * SafezoneH)";
				};
			};
		};
		class CA_WFOV_mode_group: RscControlsGroup
		{
			idc = 163;
			class VScrollbar: VScrollbar
			{
				width = 0;
			};
			class HScrollbar: HScrollbar
			{
				height = 0;
			};
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class CA_Distance_WFOV: RscText
				{
					idc = 151;
					style = 0;
					sizeEx = "0.03*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "0000";
					x = "31.45 * 		(0.01875 * SafezoneH)";
					y = "19.6 * 		(0.025 * SafezoneH)";
					w = "4 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
			};
		};
	};
	class RscOptics_titan
	{
		idd = 300;
		controls[] = {"CA_javelin_elements_group"};
		class CA_javelin_elements_group: RscControlsGroup
		{
			x = "SafezoneX";
			y = "SafezoneY";
			w = "SafezoneW";
			h = "SafezoneH";
			idc = 170;
			class VScrollbar: VScrollbar
			{
				autoScrollSpeed = -1;
				autoScrollDelay = 5;
				autoScrollRewind = 0;
				color[] = {1,1,1,0};
				width = 0.001;
			};
			class HScrollbar: HScrollbar
			{
				color[] = {1,1,1,0};
				height = 0.001;
			};
			class Controls
			{
				class CA_Javelin_Day_mode_off: RscPicture
				{
					idc = 1001;
					x = "(SafezoneX+(SafezoneW -SafezoneH*3/4)/2)+ (0.03/4)*3*SafezoneH	- SafezoneX";
					y = "SafezoneY+SafezoneH*0.031 - SafezoneY";
					w = "0.1045752* (((SafezoneW*3)/4)/SafezoneW)/(1/SafezoneH)";
					h = "SafezoneH*0.1045752";
					colorText[] = {0.2941,0.2941,0.2941,1.0};
					text = "\A3\ui_f\data\igui\rscingameui\rscoptics_titan\day_co.paa";
				};
				class CA_Javelin_Day_mode: CA_Javelin_Day_mode_off
				{
					idc = 160;
					colorText[] = {0.2941,0.8745,0.2157,1.0};
				};
				class CA_Javelin_WFOV_mode_off: CA_Javelin_Day_mode_off
				{
					idc = 1004;
					x = "(SafezoneX+(SafezoneW -SafezoneH*3/4)/2)+ (0.307/4)*3*SafezoneH - SafezoneX";
					text = "\A3\ui_f\data\igui\rscingameui\rscoptics_titan\wfov_co.paa";
				};
				class CA_Javelin_WFOV_mode_group: RscControlsGroup
				{
					x = "SafezoneX";
					y = "SafezoneY";
					w = "SafezoneW";
					h = "SafezoneH";
					idc = 163;
					class VScrollbar: VScrollbar
					{
						autoScrollSpeed = -1;
						autoScrollDelay = 5;
						autoScrollRewind = 0;
						color[] = {1,1,1,0};
						width = 0.001;
					};
					class HScrollbar: HScrollbar
					{
						color[] = {1,1,1,0};
						height = 0.001;
					};
					class Controls
					{
						class CA_Javelin_WFOV_mode: CA_Javelin_WFOV_mode_off
						{
							idc = -1;
							y = "0.031*SafeZoneH - SafezoneY";
							x = "((SafezoneW -SafezoneH*3/4)/2)+ (0.307/4)*3*SafezoneH - SafezoneX";
							colorText[] = {0.2941,0.8745,0.2157,1.0};
						};
					};
				};
				class CA_Javelin_NFOV_mode_off: CA_Javelin_Day_mode_off
				{
					idc = 1003;
					x = "(SafezoneX+(SafezoneW -SafezoneH*3/4)/2)+ (0.586/4)*3*SafezoneH - SafezoneX";
					text = "\A3\ui_f\data\igui\rscingameui\rscoptics_titan\nfov_co.paa";
				};
				class CA_Javelin_NFOV_mode_group: RscControlsGroup
				{
					x = "SafezoneX";
					y = "SafezoneY";
					w = "SafezoneW-SafezoneX";
					h = "SafezoneH-SafezoneY";
					idc = 162;
					class VScrollbar: VScrollbar
					{
						autoScrollSpeed = -1;
						autoScrollDelay = 5;
						autoScrollRewind = 0;
						color[] = {1,1,1,0};
						width = 0.001;
					};
					class HScrollbar: HScrollbar
					{
						color[] = {1,1,1,0};
						height = 0.001;
					};
					class Controls
					{
						class CA_Javelin_NFOV_mode: CA_Javelin_NFOV_mode_off
						{
							idc = -1;
							x = "((SafezoneW -SafezoneH*3/4)/2)+ (0.586/4)*3*SafezoneH - SafezoneX";
							y = "0.031*SafeZoneH - SafezoneY";
							colorText[] = {0.2941,0.8745,0.2157,1.0};
						};
					};
				};
				class CA_Javelin_SEEK_off: CA_Javelin_Day_mode_off
				{
					x = "(SafezoneX+(SafezoneW -SafezoneH*3/4)/2)+ (0.863/4)*3*SafezoneH - SafezoneX";
					text = "\A3\ui_f\data\igui\rscingameui\rscoptics_titan\seek_co.paa";
				};
				class CA_Javelin_SEEK: CA_Javelin_SEEK_off
				{
					idc = 166;
					colorText[] = {0.2941,0.8745,0.2157,1.0};
				};
				class CA_Javelin_Missle_off: CA_Javelin_Day_mode_off
				{
					idc = 1032;
					x = "(SafezoneX+(SafezoneW -SafezoneH*3/4)/2)+ (-0.134/4)*3*SafezoneH - SafezoneX";
					y = "(SafezoneY + 0.208*SafezoneH) - SafezoneY";
					colorText[] = {0.2941,0.2941,0.2941,1.0};
					text = "\A3\ui_f\data\igui\rscingameui\rscoptics_titan\missle_co.paa";
				};
				class CA_Javelin_Missle: CA_Javelin_Missle_off
				{
					idc = 167;
					colorText[] = {0.9255,0.5216,0.1216,1.0};
				};
				class CA_Javelin_CLU_off: CA_Javelin_Missle_off
				{
					idc = 1027;
					y = "(SafezoneY + 0.436*SafezoneH) - SafezoneY";
					text = "\A3\ui_f\data\igui\rscingameui\rscoptics_titan\clu_co.paa";
				};
				class CA_Javelin_HangFire_off: CA_Javelin_Missle_off
				{
					idc = 1028;
					y = "(SafezoneY + 0.669*SafezoneH) - SafezoneY";
					text = "\A3\ui_f\data\igui\rscingameui\rscoptics_titan\hangfire_co.paa";
				};
				class CA_Javelin_TOP_off: CA_Javelin_Day_mode_off
				{
					idc = 1006;
					x = "(SafezoneX+(SafezoneW -SafezoneH*3/4)/2)+ (1.023/4)*3*SafezoneH - SafezoneX";
					y = "(SafezoneY + 0.208*SafezoneH) - SafezoneY";
					text = "\A3\ui_f\data\igui\rscingameui\rscoptics_titan\top_co.paa";
				};
				class CA_Javelin_DIR: CA_Javelin_Day_mode
				{
					idc = 1007;
					x = "(SafezoneX+(SafezoneW -SafezoneH*3/4)/2)+ (1.023/4)*3*SafezoneH - SafezoneX";
					y = "(SafezoneY + 0.436*SafezoneH)	- SafezoneY";
					text = "\A3\ui_f\data\igui\rscingameui\rscoptics_titan\dir_co.paa";
				};
				class CA_Javelin_FLTR_mode_off: CA_Javelin_Day_mode_off
				{
					idc = 1002;
					x = "(SafezoneX+(SafezoneW -SafezoneH*3/4)/2)+ (1.023/4)*3*SafezoneH - SafezoneX";
					y = "(SafezoneY + 0.669*SafezoneH)	- SafezoneY";
					text = "\A3\ui_f\data\igui\rscingameui\rscoptics_titan\fltr_co.paa";
				};
				class CA_Javelin_FLTR_mode: CA_Javelin_FLTR_mode_off
				{
					idc = 161;
					colorText[] = {0.2941,0.8745,0.2157,1.0};
				};
			};
		};
	};
	class RscOptics_punisher
	{
		idd = 300;
		controls[] = {"CA_IGUI_elements_group"};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			idc = 170;
			x = "SafezoneX + ((SafezoneW - SafezoneH) / 2)";
			y = "SafezoneY";
			w = "SafezoneH";
			h = "SafezoneH";
			class VScrollbar: VScrollbar
			{
				autoScrollSpeed = -1;
				autoScrollDelay = 5;
				autoScrollRewind = 0;
				color[] = {1,1,1,0};
				width = 0.001;
			};
			class HScrollbar: HScrollbar
			{
				color[] = {1,1,1,0};
				height = 0.001;
			};
			class Controls
			{
				class CA_DistanceBackground: RscEdit
				{
					idc = -1;
					sizeEx = "0.038*SafezoneH";
					colorBackground[] = {0,0,0,0};
					colorText[] = {0,0,0,0};
					colorSelection[] = {0,0,0,0};
					style = "0x01 + 0x40";
					shadow = 0;
					type = 0;
					x = "0.3*SafezoneW";
					y = "0.05*SafezoneH";
					w = "0.112222 * safezoneH";
					h = "0.0676503 * safezoneH";
				};
				class CA_Distance: RscOpticsValue
				{
					idc = 151;
					style = 1;
					colorText[] = {0.706,0.0745,0.0196,1};
					sizeEx = "0.038*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					x = "0.41 * safezoneH";
					y = "0.42 * safezoneH";
					w = "0.09 * safezoneH";
					h = "0.03 * safezoneH";
				};
				class CA_VisionMode: RscText
				{
					idc = 179;
					style = 1;
					colorText[] = {0.706,0.0745,0.0196,1};
					sizeEx = "0.038*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					x = "0.72 * safezoneH";
					y = "0.25 * safezoneH";
					w = "0.12 * safezoneH";
					h = "0.03 * safezoneH";
				};
				class A3_DEG_text: RscText
				{
					idc = -1;
					style = 1;
					sizeEx = "0.038*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					x = "0.72 * safezoneH";
					y = "0.29 * safezoneH";
					w = "0.12 * safezoneH";
					h = "0.03 * safezoneH";
					text = "DEG";
				};
				class CA_Elev: RscOpticsValue
				{
					idc = 175;
					style = 1;
					colorText[] = {0.706,0.0745,0.0196,1};
					sizeEx = "0.038*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					x = "0.72 * safezoneH";
					y = "0.33 * safezoneH";
					w = "0.12 * safezoneH";
					h = "0.03 * safezoneH";
				};
				class A3_FuseRange: RscText
				{
					idc = -1;
					style = 1;
					sizeEx = "0.038*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					x = "0.72 * safezoneH";
					y = "0.48 * safezoneH";
					w = "0.12 * safezoneH";
					h = "0.03 * safezoneH";
					text = "520";
				};
			};
		};
	};
	class RscUnitInfoParachute: RscUnitInfo
	{
		idd = 300;
		updateWidthByWeapon = 0;
		updateHeightByCrew = 0;
		updateWidthByCrew = 0;
		controls[] = {"WeaponInfoControlsGroupRight","CA_BackgroundVehicle","CA_BackgroundVehicleTitle","CA_BackgroundVehicleTitleDark","CA_BackgroundFuel","CA_Vehicle","CA_VehicleRole","CA_HitZones","CA_SpeedBackground","CA_SpeedUnits","CA_Speed","CA_ValueFuel","CA_AltBackground","CA_AltUnits","CA_Alt","CA_Stabilize"};
	};
	class RscOptics_tws_sniper: RscUnitInfo
	{
		idd = 300;
		controls[] = {"CA_IGUI_elements_group","CA_WFOV_mode_group","CA_NFOV_mode_group"};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			idc = 170;
			class VScrollbar: VScrollbar
			{
				width = 0;
			};
			class HScrollbar: HScrollbar
			{
				height = 0;
			};
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class CA_Distance: RscText
				{
					idc = 151;
					style = 0;
					sizeEx = "0.036*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "- - - -";
					x = "24.75 * 		(0.01875 * SafezoneH)";
					y = "31.5 * 		(0.025 * SafezoneH)";
					w = "3.6 * 		(0.01875 * SafezoneH)";
					h = "1.3 * 		(0.025 * SafezoneH)";
				};
				class CA_VisionMode: RscText
				{
					idc = 152;
					style = 0;
					sizeEx = "0.028*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "FLIR";
					x = "8.8 * 		(0.01875 * SafezoneH)";
					y = "18.7 * 		(0.025 * SafezoneH)";
					w = "3.5 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
				class CA_FlirMode: RscText
				{
					idc = 153;
					style = 0;
					sizeEx = "0.028*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "BHOT";
					x = "11.8 * 		(0.01875 * SafezoneH)";
					y = "18.7 * 		(0.025 * SafezoneH)";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
			};
		};
		class CA_NFOV_mode_group: RscControlsGroup
		{
			idc = 162;
			class VScrollbar: VScrollbar
			{
				width = 0;
			};
			class HScrollbar: HScrollbar
			{
				height = 0;
			};
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class CA_FOVModeNFOV: RscText
				{
					style = 1;
					sizeEx = "0.028*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					idc = 1002;
					text = "NFOV";
					x = "41.7 * 		(0.01875 * SafezoneH)";
					y = "18.7 * 		(0.025 * SafezoneH)";
					w = "3 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
			};
		};
		class CA_WFOV_mode_group: RscControlsGroup
		{
			idc = 163;
			class VScrollbar: VScrollbar
			{
				width = 0;
			};
			class HScrollbar: HScrollbar
			{
				height = 0;
			};
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class CA_FOVModeWFOV: RscText
				{
					style = 1;
					sizeEx = "0.028*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					idc = 1001;
					text = "WFOV";
					x = "41.7 * 		(0.01875 * SafezoneH)";
					y = "18.7 * 		(0.025 * SafezoneH)";
					w = "3 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
				class CA_BracketNFOV: RscText
				{
					style = "0x30 + 0x800";
					sizeEx = "0.028*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					idc = 1005;
					text = "A3\weapons_f\acc\Data\reticle_tws_bracket_ca.paa";
					x = "17.75 * 		(0.01875 * SafezoneH)";
					y = "11 * 		(0.025 * SafezoneH)";
					w = "18 * 		(0.01875 * SafezoneH)";
					h = "18 * 		(0.025 * SafezoneH)";
				};
			};
		};
	};
	class RscOptics_tws_mg: RscUnitInfo
	{
		idd = 300;
		controls[] = {"CA_IGUI_elements_group","CA_WFOV_mode_group","CA_NFOV_mode_group"};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			idc = 170;
			class VScrollbar: VScrollbar
			{
				width = 0;
			};
			class HScrollbar: HScrollbar
			{
				height = 0;
			};
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class CA_VisionMode: RscText
				{
					idc = 152;
					style = 0;
					sizeEx = "0.028*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "FLIR";
					x = "8.8 * 		(0.01875 * SafezoneH)";
					y = "18.7 * 		(0.025 * SafezoneH)";
					w = "3.5 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
				class CA_FlirMode: RscText
				{
					idc = 153;
					style = 0;
					sizeEx = "0.028*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "BHOT";
					x = "11.8 * 		(0.01875 * SafezoneH)";
					y = "18.7 * 		(0.025 * SafezoneH)";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
			};
		};
		class CA_NFOV_mode_group: RscControlsGroup
		{
			idc = 162;
			class VScrollbar: VScrollbar
			{
				width = 0;
			};
			class HScrollbar: HScrollbar
			{
				height = 0;
			};
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class CA_FOVModeNFOV: RscText
				{
					style = 1;
					sizeEx = "0.028*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					idc = 1002;
					text = "NFOV";
					x = "41.7 * 		(0.01875 * SafezoneH)";
					y = "18.7 * 		(0.025 * SafezoneH)";
					w = "3 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
			};
		};
		class CA_WFOV_mode_group: RscControlsGroup
		{
			idc = 163;
			class VScrollbar: VScrollbar
			{
				width = 0;
			};
			class HScrollbar: HScrollbar
			{
				height = 0;
			};
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class CA_FOVModeWFOV: RscText
				{
					style = 1;
					sizeEx = "0.028*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					idc = 1001;
					text = "WFOV";
					x = "41.7 * 		(0.01875 * SafezoneH)";
					y = "18.7 * 		(0.025 * SafezoneH)";
					w = "3 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
				class CA_BracketNFOV: RscText
				{
					style = "0x30 + 0x800";
					sizeEx = "0.028*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					idc = 1005;
					text = "A3\weapons_f\acc\Data\reticle_tws_bracket_ca.paa";
					x = "17.75 * 		(0.01875 * SafezoneH)";
					y = "11 * 		(0.025 * SafezoneH)";
					w = "18 * 		(0.01875 * SafezoneH)";
					h = "18 * 		(0.025 * SafezoneH)";
				};
			};
		};
	};
	class RscOptics_SDV_driver: RscUnitInfo
	{
		idd = 300;
		controls[] = {"DriverOpticsGroup","WeaponInfoControlsGroupRight","CA_BackgroundVehicle","CA_BackgroundVehicleTitle","CA_BackgroundVehicleTitleDark","CA_BackgroundFuel","CA_Vehicle","CA_VehicleRole","CA_HitZones","CA_SpeedBackground","CA_SpeedUnits","CA_Speed","CA_ValueFuel","CA_Radar","CA_AltBackground","CA_AltUnits","CA_Depth"};
		class DriverOpticsGroup: RscControlsGroup
		{
			idc = 392;
			class VScrollbar: VScrollbar
			{
				width = 0;
			};
			class HScrollbar: HScrollbar
			{
				height = 0;
			};
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class ValuePitch: RscText
				{
					idc = 393;
					style = 0;
					colorText[] = {0.706,0.0745,0.0196,1};
					sizeEx = "0.028*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					x = "39 * 		(0.01875 * SafezoneH)";
					y = "19.54 * 		(0.025 * SafezoneH)";
					w = "3.5 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
				class AnalogueHorizon: RscLadderPicture
				{
					idc = 383;
					topValue = 90;
					bottomValue = -90;
					visibleRange = 0.25;
					text = "A3\weapons_F_Beta\reticle\data\reticle_horizon_CA.paa";
					x = "22.5 * 		(0.01875 * SafezoneH)";
					y = "11 * 		(0.025 * SafezoneH)";
					w = "8 * 		(0.01875 * SafezoneH)";
					h = "18 * 		(0.025 * SafezoneH)";
				};
			};
		};
	};
	class RscOptics_SDV_periscope
	{
		idd = 300;
		controls[] = {"CA_IGUI_elements_group"};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			idc = 170;
			class VScrollbar: VScrollbar
			{
				width = 0;
			};
			class HScrollbar: HScrollbar
			{
				height = 0;
			};
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class CA_Elev: RscText
				{
					idc = 175;
					style = 1;
					sizeEx = "0.02*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "80.5";
					x = "30.2 * 		(0.01875 * SafezoneH)";
					y = "21.2 * 		(0.025 * SafezoneH)";
					w = "2.5 * 		(0.01875 * SafezoneH)";
					h = "0.6 * 		(0.025 * SafezoneH)";
				};
				class CA_OpticsZoom: RscText
				{
					idc = 180;
					style = 1;
					colorText[] = {0.706,0.0745,0.0196,1};
					sizeEx = "0.02*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "4.5";
					x = "30.2 * 		(0.01875 * SafezoneH)";
					y = "22 * 		(0.025 * SafezoneH)";
					w = "2.5 * 		(0.01875 * SafezoneH)";
					h = "0.6 * 		(0.025 * SafezoneH)";
				};
				class CA_VisionMode: RscText
				{
					idc = 179;
					style = 1;
					sizeEx = "0.02*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "VIS";
					x = "30.2 * 		(0.01875 * SafezoneH)";
					y = "22.8 * 		(0.025 * SafezoneH)";
					w = "2.5 * 		(0.01875 * SafezoneH)";
					h = "0.6 * 		(0.025 * SafezoneH)";
				};
				class CA_Distance: RscText
				{
					idc = 151;
					style = 0;
					sizeEx = "0.03*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "2456";
					x = "28.75 * 		(0.01875 * SafezoneH)";
					y = "23.82 * 		(0.025 * SafezoneH)";
					w = "3.5 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
				class CA_Laser: RscPicture
				{
					idc = 158;
					style = "0x30 + 0x800";
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					text = "A3\ui_f\data\igui\cfg\cursors\select_target_ca.paa";
					x = "25.05 * 		(0.01875 * SafezoneH)";
					y = "18.44 * 		(0.025 * SafezoneH)";
					w = "3.2 * 		(0.01875 * SafezoneH)";
					h = "3.2 * 		(0.025 * SafezoneH)";
				};
			};
		};
	};
	class RscOptics_Heli_Attack_02_gunner: RscUnitInfo
	{
		idd = 300;
		controls[] = {"CA_Zeroing","CA_IGUI_elements_group"};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			idc = 170;
			class VScrollbar: VScrollbar
			{
				width = 0;
			};
			class HScrollbar: HScrollbar
			{
				height = 0;
			};
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class CA_Distance: RscText
				{
					idc = 151;
					style = 2;
					sizeEx = "0.024*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "2456";
					x = "24.7 * 		(0.01875 * SafezoneH)";
					y = "29.3 * 		(0.025 * SafezoneH)";
					w = "4 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_VisionMode: RscText
				{
					idc = 179;
					style = 0;
					sizeEx = "0.024*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "VIS";
					x = "14.5 * 		(0.01875 * SafezoneH)";
					y = "18.8 * 		(0.025 * SafezoneH)";
					w = "4 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
			};
		};
	};
	class RscOptics_Heli_Attack_01_gunner: RscUnitInfo
	{
		idd = 300;
		controls[] = {"CA_Zeroing","CA_IGUI_elements_group"};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			idc = 170;
			class VScrollbar: VScrollbar
			{
				width = 0;
			};
			class HScrollbar: HScrollbar
			{
				height = 0;
			};
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class CA_Distance: RscText
				{
					idc = 151;
					style = 2;
					sizeEx = "0.0295*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "2456";
					x = "24.78 * 		(0.01875 * SafezoneH)";
					y = "30.88 * 		(0.025 * SafezoneH)";
					w = "4 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_VisionMode: RscText
				{
					idc = 179;
					style = 0;
					sizeEx = "0.0295*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "VIS";
					x = "9.3 * 		(0.01875 * SafezoneH)";
					y = "15.34 * 		(0.025 * SafezoneH)";
					w = "4 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_FlirMode: RscText
				{
					idc = 153;
					style = 0;
					sizeEx = "0.0295*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "BHOT";
					x = "11.15 * 		(0.01875 * SafezoneH)";
					y = "15.34 * 		(0.025 * SafezoneH)";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
			};
		};
	};
	class RscHint
	{
		idd = 301;
		movingEnable = 0;
		controls[] = {"Background","Hint"};
		class Background: RscText
		{
			idc = 101;
			style = 128;
			x = "((safezoneX + safezoneW) - 		(12 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) - 1 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			y = "(safezoneY + 6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			w = "(12 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			h = "(8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			text = "";
			colorBackground[] = {0,0,0,0.7};
			shadow = 1;
		};
		class Hint: RscStructuredText
		{
			idc = 102;
			x = "((safezoneX + safezoneW) - 		(12 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) - 1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.4*					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "(safezoneY + 6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) + 0.3*					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "(12 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) - 0.8*					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "(8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) - 0.8*					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			style = 16;
			shadow = 1;
			size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			class Attributes: Attributes{};
		};
	};
	class RscTaskHint
	{
		idd = 302;
		movingEnable = 0;
		class controlsBackground
		{
			class Background: RscText
			{
				type = 0;
				idc = 103;
				x = "(10 * 						(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX + (safezoneW - 				((safezoneW / safezoneH) min 1.2)) / 2))";
				y = "(1 * 						(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + safezoneY)";
				w = "10 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
				h = "2 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				text = "";
				colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
			};
			class Warning: RscText
			{
				x = "(10 * 						(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX + (safezoneW - 				((safezoneW / safezoneH) min 1.2)) / 2)) - 2 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
				y = "(1 * 						(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + safezoneY) + 2.1 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				w = "14 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
				h = "1.5 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				style = "0x10 + 0x200";
				text = "Designers, taskHint is obsolete, use new notifications:\nhttp://community.bistudio.com/wiki/Notification";
				colorText[] = {1,1,1,1};
				colorBackground[] = {"(profilenamespace getvariable ['IGUI_WARNING_RGB_R',0.8])","(profilenamespace getvariable ['IGUI_WARNING_RGB_G',0.5])","(profilenamespace getvariable ['IGUI_WARNING_RGB_B',0.0])",0.7};
				sizeEx = "0.6 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			};
		};
		class Controls
		{
			class Hint: RscStructuredText
			{
				idc = 104;
				x = "1.5 * 								(		((safezoneW / safezoneH) min 1.2) / 32) + 				(10 * 						(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX + (safezoneW - 				((safezoneW / safezoneH) min 1.2)) / 2))";
				y = "0.5 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 				(1 * 						(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + safezoneY)";
				w = "8 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
				h = "1 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				style = 16;
				lineSpacing = 1;
				sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
				colorText[] = {1,1,1,1};
				colorBackground[] = {0,0,0,0};
				font = "PuristaMedium";
				size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
				text = "$STR_DISP_ERROR";
				class Attributes: Attributes
				{
					color = "#ffffff";
					align = "left";
					shadow = 1;
				};
			};
		};
		class TaskIcon
		{
			x = "0.5 * 								(		((safezoneW / safezoneH) min 1.2) / 32) + 				(10 * 						(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX + (safezoneW - 				((safezoneW / safezoneH) min 1.2)) / 2))";
			y = "0.5 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 				(1 * 						(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + safezoneY)";
			w = "1 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
			h = "1 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
		};
	};
	class RscOptics_AV_pilot: RscUnitInfo
	{
		idd = 300;
		controls[] = {"WeaponInfoControlsGroupRight","CA_BackgroundVehicle","CA_BackgroundVehicleTitle","CA_BackgroundVehicleTitleDark","CA_BackgroundFuel","CA_Vehicle","CA_VehicleRole","CA_HitZones","CA_SpeedBackground","CA_SpeedUnits","CA_Speed","CA_ValueFuel","CA_AltBackground","CA_AltUnits","CA_Alt","CA_Stabilize","CA_Radar","DriverOpticsGroup"};
		class DriverOpticsGroup: RscControlsGroup
		{
			idc = 392;
			class VScrollbar: VScrollbar
			{
				width = 0;
			};
			class HScrollbar: HScrollbar
			{
				height = 0;
			};
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class TextGrid: RscText
				{
					style = 0;
					sizeEx = "0.02*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					idc = 1005;
					text = "GRID:";
					x = "5.8 * 		(0.01875 * SafezoneH)";
					y = "31.8 * 		(0.025 * SafezoneH)";
					w = "5 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
				class ValueGrid: TextGrid
				{
					idc = 189;
					text = "382546";
					x = "10.3 * 		(0.01875 * SafezoneH)";
					y = "31.8 * 		(0.025 * SafezoneH)";
					w = "6 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
				class TextTime: TextGrid
				{
					idc = 1010;
					text = "TIME [UTC]:";
					x = "5.8 * 		(0.01875 * SafezoneH)";
					y = "32.6 * 		(0.025 * SafezoneH)";
					w = "5 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
				class ValueTime: TextGrid
				{
					idc = 101;
					text = "20:28:35";
					x = "10 * 		(0.01875 * SafezoneH)";
					y = "32.6 * 		(0.025 * SafezoneH)";
					w = "6 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
				class TextMag: TextGrid
				{
					idc = 1011;
					text = "CAM MAG:";
					x = "5.8 * 		(0.01875 * SafezoneH)";
					y = "7 * 		(0.025 * SafezoneH)";
					w = "5 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
				class OpticsZoom: TextGrid
				{
					idc = 192;
					text = "28x";
					x = "10.3 * 		(0.01875 * SafezoneH)";
					y = "7 * 		(0.025 * SafezoneH)";
					w = "6 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
				class BorderLineSpdTop: RscPicture
				{
					idc = 1203;
					text = "\A3\Ui_f\data\IGUI\Cfg\HelicopterHUD\border_line_ca.paa";
					x = "3.343 * 		(0.01875 * SafezoneH)";
					y = "12.4 * 		(0.025 * SafezoneH)";
					w = "3 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
				class BorderLineSpdBottom: RscPicture
				{
					idc = 1207;
					text = "\A3\Ui_f\data\IGUI\Cfg\HelicopterHUD\border_line_ca.paa";
					x = "3.343 * 		(0.01875 * SafezoneH)";
					y = "26.5 * 		(0.025 * SafezoneH)";
					w = "3 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
				class BorderLineAltTop: RscPicture
				{
					idc = 1205;
					text = "\A3\Ui_f\data\IGUI\Cfg\HelicopterHUD\border_line_ca.paa";
					x = "47.16 * 		(0.01875 * SafezoneH)";
					y = "12.4 * 		(0.025 * SafezoneH)";
					w = "3 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
				class BorderLineAltBottom: RscPicture
				{
					idc = 1206;
					text = "\A3\Ui_f\data\IGUI\Cfg\HelicopterHUD\border_line_ca.paa";
					x = "47.16 * 		(0.01875 * SafezoneH)";
					y = "26.5 * 		(0.025 * SafezoneH)";
					w = "3 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
				class TextSpd: TextGrid
				{
					idc = 1004;
					text = "SPD";
					x = "4.8 * 		(0.01875 * SafezoneH)";
					y = "11.8 * 		(0.025 * SafezoneH)";
					w = "5 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class SpeedValueBorder: RscPicture
				{
					idc = 1200;
					text = "\A3\Ui_f\data\IGUI\Cfg\HelicopterHUD\altimeter_value_ca.paa";
					x = "6.3 * 		(0.01875 * SafezoneH)";
					y = "19 * 		(0.025 * SafezoneH)";
					w = "5 * 		(0.01875 * SafezoneH)";
					h = "2 * 		(0.025 * SafezoneH)";
				};
				class CA_Speed: TextGrid
				{
					idc = 190;
					sizeEx = "0.03*SafezoneH";
					text = "120";
					x = "7.5 * 		(0.01875 * SafezoneH)";
					y = "19.5 * 		(0.025 * SafezoneH)";
					w = "6 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class AnalogueSpeed: RscLadderPicture
				{
					idc = 384;
					topValue = 1312;
					bottomValue = -345;
					visibleRange = -1;
					text = "\A3\Ui_f\data\IGUI\Cfg\HelicopterHUD\UAVspeedLadder_ca.paa";
					x = "1.5 * 		(0.01875 * SafezoneH)";
					y = "13 * 		(0.025 * SafezoneH)";
					w = "5 * 		(0.01875 * SafezoneH)";
					h = "14 * 		(0.025 * SafezoneH)";
				};
				class TextAlt: TextGrid
				{
					idc = 1006;
					text = "ALT";
					x = "46.9 * 		(0.01875 * SafezoneH)";
					y = "11.8 * 		(0.025 * SafezoneH)";
					w = "5 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class AltValueBorder: RscPicture
				{
					idc = 1201;
					text = "\A3\Ui_f\data\IGUI\Cfg\HelicopterHUD\airspeed_value_ca.paa";
					x = "42.25 * 		(0.01875 * SafezoneH)";
					y = "19 * 		(0.025 * SafezoneH)";
					w = "5 * 		(0.01875 * SafezoneH)";
					h = "2 * 		(0.025 * SafezoneH)";
				};
				class CA_Alt: TextGrid
				{
					idc = 191;
					sizeEx = "0.03*SafezoneH";
					style = 1;
					text = "3825";
					x = "43 * 		(0.01875 * SafezoneH)";
					y = "19.5 * 		(0.025 * SafezoneH)";
					w = "3.2 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class AnalogueAlt: RscLadderPicture
				{
					idc = 385;
					topValue = 14430;
					bottomValue = -2110;
					visibleRange = -1;
					text = "\A3\Ui_f\data\IGUI\Cfg\HelicopterHUD\UAValtLadder_ca.paa";
					x = "47 * 		(0.01875 * SafezoneH)";
					y = "13 * 		(0.025 * SafezoneH)";
					w = "2.5 * 		(0.01875 * SafezoneH)";
					h = "14 * 		(0.025 * SafezoneH)";
				};
				class AnalogueHorizon: RscLadderPicture
				{
					idc = 383;
					topValue = 90;
					bottomValue = -90;
					visibleRange = -1;
					text = "\A3\Ui_f\data\IGUI\Cfg\HelicopterHUD\horizon_ladder_ca.paa";
					x = "16.75 * 		(0.01875 * SafezoneH)";
					y = "5 * 		(0.025 * SafezoneH)";
					w = "20 * 		(0.01875 * SafezoneH)";
					h = "30 * 		(0.025 * SafezoneH)";
				};
				class HorizonCenter: RscPicture
				{
					idc = 1202;
					text = "\A3\Ui_f\data\IGUI\Cfg\HelicopterHUD\horizon_aircraft_ca.paa";
					x = "24.75 * 		(0.01875 * SafezoneH)";
					y = "19 * 		(0.025 * SafezoneH)";
					w = "4 * 		(0.01875 * SafezoneH)";
					h = "2 * 		(0.025 * SafezoneH)";
				};
			};
		};
	};
	class RscOptics_AV_driver: RscUnitInfo
	{
		idd = 300;
		controls[] = {"WeaponInfoControlsGroupRight","CA_Zeroing","CA_BackgroundVehicle","CA_BackgroundVehicleTitle","CA_BackgroundVehicleTitleDark","CA_BackgroundFuel","CA_Vehicle","CA_VehicleRole","CA_HitZones","CA_SpeedBackground","CA_SpeedUnits","CA_Speed","CA_ValueFuel","CA_Radar","DriverOpticsGroup"};
		class DriverOpticsGroup: RscControlsGroup
		{
			idc = 392;
			class VScrollbar: VScrollbar
			{
				width = 0;
			};
			class HScrollbar: HScrollbar
			{
				height = 0;
			};
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class TextGrid: RscText
				{
					style = 0;
					sizeEx = "0.02*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					idc = 1006;
					text = "GRID:";
					x = "5.8 * 		(0.01875 * SafezoneH)";
					y = "31.8 * 		(0.025 * SafezoneH)";
					w = "5 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
				class TextTime: TextGrid
				{
					idc = 1010;
					text = "TIME [UTC]:";
					x = "5.8 * 		(0.01875 * SafezoneH)";
					y = "32.6 * 		(0.025 * SafezoneH)";
					w = "5 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
				class ValueTime: TextGrid
				{
					idc = 101;
					text = "20:28:35";
					x = "10 * 		(0.01875 * SafezoneH)";
					y = "32.6 * 		(0.025 * SafezoneH)";
					w = "6 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
				class TextMag: TextGrid
				{
					idc = 1011;
					text = "CAM MAG:";
					x = "5.8 * 		(0.01875 * SafezoneH)";
					y = "7 * 		(0.025 * SafezoneH)";
					w = "5 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class OpticsZoom: TextGrid
				{
					idc = 192;
					text = "28x";
					x = "10.3 * 		(0.01875 * SafezoneH)";
					y = "7 * 		(0.025 * SafezoneH)";
					w = "6 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class BorderLineSpdTop: RscPicture
				{
					idc = 1203;
					text = "\A3\Ui_f\data\IGUI\Cfg\HelicopterHUD\border_line_ca.paa";
					x = "3.343 * 		(0.01875 * SafezoneH)";
					y = "12.4 * 		(0.025 * SafezoneH)";
					w = "3 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
				class BorderLineSpdBottom: RscPicture
				{
					idc = 1207;
					text = "\A3\Ui_f\data\IGUI\Cfg\HelicopterHUD\border_line_ca.paa";
					x = "3.343 * 		(0.01875 * SafezoneH)";
					y = "26.5 * 		(0.025 * SafezoneH)";
					w = "3 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
				class TextSpd: TextGrid
				{
					idc = 1000;
					text = "SPD";
					x = "4.8 * 		(0.01875 * SafezoneH)";
					y = "11.8 * 		(0.025 * SafezoneH)";
					w = "5 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class SpeedValueBorder: RscPictureKeepAspect
				{
					idc = 1200;
					text = "\A3\Ui_f\data\IGUI\Cfg\HelicopterHUD\altimeter_value_ca.paa";
					x = "6.3 * 		(0.01875 * SafezoneH)";
					y = "19 * 		(0.025 * SafezoneH)";
					w = "4 * 		(0.01875 * SafezoneH)";
					h = "2 * 		(0.025 * SafezoneH)";
				};
				class CA_Speed: TextGrid
				{
					idc = 190;
					sizeEx = "0.03*SafezoneH";
					text = "120";
					x = "7.2 * 		(0.01875 * SafezoneH)";
					y = "19.5 * 		(0.025 * SafezoneH)";
					w = "6 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class AnalogueSpeed: RscLadderPicture
				{
					idc = 384;
					topValue = 82.5;
					bottomValue = -82.5;
					visibleRange = -1;
					text = "\A3\Ui_f\data\IGUI\Cfg\HelicopterHUD\UGVspeedLadder_ca.paa";
					x = "4 * 		(0.01875 * SafezoneH)";
					y = "13 * 		(0.025 * SafezoneH)";
					w = "2.5 * 		(0.01875 * SafezoneH)";
					h = "14 * 		(0.025 * SafezoneH)";
				};
				class ValueGrid: TextGrid
				{
					idc = 189;
					text = "382546";
					x = "10.3 * 		(0.01875 * SafezoneH)";
					y = "31.8 * 		(0.025 * SafezoneH)";
					w = "6 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
			};
		};
	};
	class RscOptics_UAV_gunner: RscUnitInfo
	{
		idd = 300;
		controls[] = {"CA_IGUI_elements_group"};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			idc = 170;
			class VScrollbar: VScrollbar
			{
				width = 0;
			};
			class HScrollbar: HScrollbar
			{
				height = 0;
			};
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class RangeText: RscText
				{
					style = 0;
					sizeEx = "0.02*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					idc = 1000;
					text = "RANGE:";
					x = "18.5 * 		(0.01875 * SafezoneH)";
					y = "13.2 * 		(0.025 * SafezoneH)";
					w = "3 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_Distance: RangeText
				{
					idc = 151;
					text = "2456";
					x = "21.3 * 		(0.01875 * SafezoneH)";
					y = "13.2 * 		(0.025 * SafezoneH)";
					w = "4 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class ModeText: RangeText
				{
					idc = 1002;
					text = "MODE:";
					x = "18.5 * 		(0.01875 * SafezoneH)";
					y = "26.8 * 		(0.025 * SafezoneH)";
					w = "3 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_VisionMode: RangeText
				{
					idc = 179;
					style = 0;
					text = "VIS";
					x = "22.2 * 		(0.01875 * SafezoneH)";
					y = "26.8 * 		(0.025 * SafezoneH)";
					w = "4 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_FlirMode: RangeText
				{
					idc = 153;
					style = 0;
					text = "BHOT";
					x = "23.4 * 		(0.01875 * SafezoneH)";
					y = "26.8 * 		(0.025 * SafezoneH)";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class TextSpd: RangeText
				{
					idc = 1009;
					text = "SPD [KM/H]:";
					x = "5.8 * 		(0.01875 * SafezoneH)";
					y = "12.4 * 		(0.025 * SafezoneH)";
					w = "5 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_Speed: RangeText
				{
					idc = 188;
					text = "120";
					x = "10.3 * 		(0.01875 * SafezoneH)";
					y = "12.4 * 		(0.025 * SafezoneH)";
					w = "5 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class TextAlt: RangeText
				{
					idc = 1007;
					text = "ALT [AGL]:";
					x = "5.8 * 		(0.01875 * SafezoneH)";
					y = "13.2 * 		(0.025 * SafezoneH)";
					w = "5 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_Alt: RangeText
				{
					idc = 189;
					text = "3825";
					x = "10.3 * 		(0.01875 * SafezoneH)";
					y = "13.2 * 		(0.025 * SafezoneH)";
					w = "5 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class TextGrid: RangeText
				{
					idc = 1005;
					text = "GRID:";
					x = "5.8 * 		(0.01875 * SafezoneH)";
					y = "31.8 * 		(0.025 * SafezoneH)";
					w = "5 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class ValueGrid: RangeText
				{
					idc = 171;
					text = "382546";
					x = "10.3 * 		(0.01875 * SafezoneH)";
					y = "31.8 * 		(0.025 * SafezoneH)";
					w = "6 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
				class TextTime: RangeText
				{
					idc = 1010;
					text = "TIME [UTC]:";
					x = "5.8 * 		(0.01875 * SafezoneH)";
					y = "32.6 * 		(0.025 * SafezoneH)";
					w = "5 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
				class ValueTime: RangeText
				{
					idc = 190;
					text = "20:28:35";
					x = "10 * 		(0.01875 * SafezoneH)";
					y = "32.6 * 		(0.025 * SafezoneH)";
					w = "6 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
				class TextMag: RangeText
				{
					idc = 1011;
					text = "CAM MAG:";
					x = "18.5 * 		(0.01875 * SafezoneH)";
					y = "26 * 		(0.025 * SafezoneH)";
					w = "5 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_OpticsZoom: RangeText
				{
					idc = 180;
					text = "28x";
					x = "22.2 * 		(0.01875 * SafezoneH)";
					y = "26 * 		(0.025 * SafezoneH)";
					w = "6 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_Laser: RscText
				{
					idc = 158;
					style = "0x30 + 0x800";
					sizeEx = "0.038*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "\A3\ui_f\data\igui\rscingameui\rscoptics\laser_designator_iconLaserOn.paa";
					x = "31.1 * 		(0.01875 * SafezoneH)";
					y = "12.85 * 		(0.025 * SafezoneH)";
					w = "3.5 * 		(0.01875 * SafezoneH)";
					h = "1.5 * 		(0.025 * SafezoneH)";
				};
			};
		};
	};
	class RscOptics_UGV_gunner: RscUnitInfo
	{
		idd = 300;
		controls[] = {"CA_Zeroing","CA_IGUI_elements_group"};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			idc = 170;
			class VScrollbar: VScrollbar
			{
				width = 0;
			};
			class HScrollbar: HScrollbar
			{
				height = 0;
			};
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class RangeText: RscText
				{
					style = 0;
					sizeEx = "0.02*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					idc = 1000;
					text = "RANGE:";
					x = "26.6 * 		(0.01875 * SafezoneH)";
					y = "28.8 * 		(0.025 * SafezoneH)";
					w = "3 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_Distance: RangeText
				{
					idc = 151;
					text = "2456";
					x = "29.4 * 		(0.01875 * SafezoneH)";
					y = "28.8 * 		(0.025 * SafezoneH)";
					w = "4 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class ModeText: RangeText
				{
					idc = 1002;
					text = "MODE:";
					x = "26.6 * 		(0.01875 * SafezoneH)";
					y = "29.6 * 		(0.025 * SafezoneH)";
					w = "3 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_VisionMode: RangeText
				{
					idc = 179;
					style = 0;
					text = "VIS";
					x = "29.4 * 		(0.01875 * SafezoneH)";
					y = "29.6 * 		(0.025 * SafezoneH)";
					w = "4 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_FlirMode: RangeText
				{
					idc = 153;
					style = 0;
					text = "BHOT";
					x = "30.6 * 		(0.01875 * SafezoneH)";
					y = "29.6 * 		(0.025 * SafezoneH)";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class TextGrid: RangeText
				{
					idc = 1005;
					text = "GRID:";
					x = "5.8 * 		(0.01875 * SafezoneH)";
					y = "31.8 * 		(0.025 * SafezoneH)";
					w = "5 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
				class ValueGrid: RangeText
				{
					idc = 171;
					text = "382546";
					x = "10.3 * 		(0.01875 * SafezoneH)";
					y = "31.8 * 		(0.025 * SafezoneH)";
					w = "6 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
				class TextTime: RangeText
				{
					idc = 1010;
					text = "TIME [UTC]:";
					x = "5.8 * 		(0.01875 * SafezoneH)";
					y = "32.6 * 		(0.025 * SafezoneH)";
					w = "5 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
				class ValueTime: RangeText
				{
					idc = 190;
					text = "20:28:35";
					x = "10 * 		(0.01875 * SafezoneH)";
					y = "32.6 * 		(0.025 * SafezoneH)";
					w = "6 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
				class TextMag: RangeText
				{
					idc = 1011;
					text = "CAM MAG:";
					x = "5.8 * 		(0.01875 * SafezoneH)";
					y = "7 * 		(0.025 * SafezoneH)";
					w = "5 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_OpticsZoom: RangeText
				{
					idc = 180;
					text = "28x";
					x = "10.3 * 		(0.01875 * SafezoneH)";
					y = "7 * 		(0.025 * SafezoneH)";
					w = "6 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
			};
		};
	};
	class RscOptics_APC_Tracked_01_gunner: RscUnitInfo
	{
		idd = 300;
		controls[] = {"CA_Zeroing","CA_IGUI_elements_group","CA_APC_WFOV_mode_group","CA_APC_NFOV_mode_group"};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			idc = 170;
			class VScrollbar: VScrollbar
			{
				width = 0;
			};
			class HScrollbar: HScrollbar
			{
				height = 0;
			};
			x = "-4 * 		(0.01875 * SafezoneH) + 			(safezoneX)";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "61.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class TextDist: RscText
				{
					shadow = 0;
					font = "EtelkaMonospacePro";
					sizeEx = "0.028*SafezoneH";
					idc = 1003;
					text = "DIST";
					x = "5.4 * 		(0.01875 * SafezoneH)";
					y = "19 * 		(0.025 * SafezoneH)";
					w = "5 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
					colorBackground[] = {0,0,0,1};
				};
				class CA_Distance: RscText
				{
					idc = 151;
					style = 0;
					sizeEx = "0.028*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "2456";
					x = "10.1 * 		(0.01875 * SafezoneH)";
					y = "19 * 		(0.025 * SafezoneH)";
					w = "4 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
					colorBackground[] = {0,0,0,1};
				};
				class TextColonDist: RscText
				{
					shadow = 0;
					font = "EtelkaMonospacePro";
					sizeEx = "0.028*SafezoneH";
					idc = 1008;
					text = ":";
					x = "9.3 * 		(0.01875 * SafezoneH)";
					y = "19 * 		(0.025 * SafezoneH)";
					w = "1 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
					colorBackground[] = {0,0,0,1};
				};
				class TextEL: RscText
				{
					shadow = 0;
					font = "EtelkaMonospacePro";
					sizeEx = "0.028*SafezoneH";
					idc = 1010;
					text = "EL";
					x = "5.4 * 		(0.01875 * SafezoneH)";
					y = "20 * 		(0.025 * SafezoneH)";
					w = "5 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
					colorBackground[] = {0,0,0,1};
				};
				class CA_OpticsPitch: RscText
				{
					idc = 182;
					style = 0;
					sizeEx = "0.028*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "36";
					x = "10.1 * 		(0.01875 * SafezoneH)";
					y = "20 * 		(0.025 * SafezoneH)";
					w = "4 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
					colorBackground[] = {0,0,0,1};
				};
				class TextColonEL: RscText
				{
					shadow = 0;
					font = "EtelkaMonospacePro";
					sizeEx = "0.028*SafezoneH";
					idc = 1009;
					text = ":";
					x = "9.3 * 		(0.01875 * SafezoneH)";
					y = "20 * 		(0.025 * SafezoneH)";
					w = "1 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
					colorBackground[] = {0,0,0,1};
				};
				class TextRadar: RscText
				{
					shadow = 0;
					font = "EtelkaMonospacePro";
					sizeEx = "0.028*SafezoneH";
					idc = 1011;
					text = "RADAR";
					x = "5.4 * 		(0.01875 * SafezoneH)";
					y = "20.98 * 		(0.025 * SafezoneH)";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
					colorBackground[] = {0,0,0,1};
				};
				class TextACQ: RscText
				{
					shadow = 0;
					font = "EtelkaMonospacePro";
					sizeEx = "0.028*SafezoneH";
					idc = 1012;
					text = "ACQ:CENT-Au";
					x = "5.4 * 		(0.01875 * SafezoneH)";
					y = "30 * 		(0.025 * SafezoneH)";
					w = "7.5 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
					colorBackground[] = {0,0,0,1};
				};
				class TextCENT: RscText
				{
					shadow = 0;
					font = "EtelkaMonospacePro";
					sizeEx = "0.028*SafezoneH";
					idc = 1014;
					text = "CENT-Wt";
					x = "15.5 * 		(0.01875 * SafezoneH)";
					y = "30 * 		(0.025 * SafezoneH)";
					w = "5 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
					colorBackground[] = {0,0,0,1};
				};
				class TextCST: RscText
				{
					shadow = 0;
					font = "EtelkaMonospacePro";
					sizeEx = "0.028*SafezoneH";
					idc = 1013;
					text = "CST:";
					x = "12.9 * 		(0.01875 * SafezoneH)";
					y = "30 * 		(0.025 * SafezoneH)";
					w = "2.8 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
					colorText[] = {0,0,0,1};
					colorBackground[] = {1,1,1,1};
				};
			};
		};
		class CA_APC_WFOV_mode_group: RscControlsGroupNoScrollbars
		{
			idc = 163;
			x = "-4 * 		(0.01875 * SafezoneH) + 			(safezoneX)";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "61.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class CA_FOVModeWFOV: RscText
				{
					shadow = 0;
					font = "EtelkaMonospacePro";
					sizeEx = "0.028*SafezoneH";
					idc = 1002;
					text = "WFOV";
					x = "5.4 * 		(0.01875 * SafezoneH)";
					y = "21.95 * 		(0.025 * SafezoneH)";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
					colorBackground[] = {0,0,0,1};
				};
			};
		};
		class CA_APC_NFOV_mode_group: RscControlsGroupNoScrollbars
		{
			idc = 162;
			x = "-4 * 		(0.01875 * SafezoneH) + 			(safezoneX)";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "61.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class CA_FOVModeNFOV: RscText
				{
					shadow = 0;
					font = "EtelkaMonospacePro";
					sizeEx = "0.028*SafezoneH";
					idc = 1007;
					text = "NFOV";
					x = "5.4 * 		(0.01875 * SafezoneH)";
					y = "21.95 * 		(0.025 * SafezoneH)";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
					colorBackground[] = {0,0,0,1};
				};
			};
		};
	};
	class RscOptics_APC_Tracked_03_gunner: RscUnitInfo
	{
		idd = 300;
		controls[] = {"CA_Zeroing","CA_IGUI_elements_group","CA_APC_WFOV_mode_group","CA_APC_NFOV_mode_group"};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			idc = 170;
			class VScrollbar: VScrollbar
			{
				width = 0;
			};
			class HScrollbar: HScrollbar
			{
				height = 0;
			};
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class CA_OpticsPitch: RscText
				{
					idc = 182;
					style = 1;
					sizeEx = "0.038*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "36";
					x = "1 * 		(0.01875 * SafezoneH)";
					y = "19.3 * 		(0.025 * SafezoneH)";
					w = "5.2 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_Distance: RscText
				{
					idc = 151;
					style = 2;
					sizeEx = "0.038*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "2456";
					x = "24.3 * 		(0.01875 * SafezoneH)";
					y = "31.3 * 		(0.025 * SafezoneH)";
					w = "5 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_VisionMode: RscText
				{
					idc = 152;
					style = 0;
					sizeEx = "0.038*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "FLIR";
					x = "40.2 * 		(0.01875 * SafezoneH)";
					y = "11 * 		(0.025 * SafezoneH)";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_FlirMode: RscText
				{
					idc = 153;
					style = 0;
					sizeEx = "0.038*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "BHOT";
					x = "44.2 * 		(0.01875 * SafezoneH)";
					y = "11 * 		(0.025 * SafezoneH)";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
			};
		};
		class CA_APC_WFOV_mode_group: RscControlsGroupNoScrollbars
		{
			idc = 163;
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class CA_FOVModeWFOV: RscText
				{
					shadow = 0;
					font = "EtelkaMonospacePro";
					sizeEx = "0.038*SafezoneH";
					idc = 1002;
					text = "WFOV";
					x = "8 * 		(0.01875 * SafezoneH)";
					y = "11 * 		(0.025 * SafezoneH)";
					w = "5 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
			};
		};
		class CA_APC_NFOV_mode_group: RscControlsGroupNoScrollbars
		{
			idc = 162;
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class CA_FOVModeNFOV: RscText
				{
					shadow = 0;
					font = "EtelkaMonospacePro";
					sizeEx = "0.038*SafezoneH";
					idc = 1007;
					text = "NFOV";
					x = "8 * 		(0.01875 * SafezoneH)";
					y = "11 * 		(0.025 * SafezoneH)";
					w = "5 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
			};
		};
	};
	class RscOptics_APC_Wheeled_01_gunner: RscUnitInfo
	{
		idd = 300;
		controls[] = {"CA_Zeroing","CA_IGUI_elements_group","CA_APC_WFOV_mode_group","CA_APC_NFOV_mode_group"};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			idc = 170;
			class VScrollbar: VScrollbar
			{
				width = 0;
			};
			class HScrollbar: HScrollbar
			{
				height = 0;
			};
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class CA_OpticsPitch: RscText
				{
					idc = 182;
					style = 1;
					colorText[] = {0.706,0.0745,0.0196,1};
					sizeEx = "0.038*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "36";
					x = "1 * 		(0.01875 * SafezoneH)";
					y = "19.3 * 		(0.025 * SafezoneH)";
					w = "5.2 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_Distance: RscText
				{
					idc = 151;
					style = 2;
					sizeEx = "0.038*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "2456";
					x = "24.3 * 		(0.01875 * SafezoneH)";
					y = "31.3 * 		(0.025 * SafezoneH)";
					w = "5 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_VisionMode: RscText
				{
					idc = 152;
					style = 0;
					sizeEx = "0.038*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "FLIR";
					x = "40.2 * 		(0.01875 * SafezoneH)";
					y = "11 * 		(0.025 * SafezoneH)";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_FlirMode: RscText
				{
					idc = 153;
					style = 0;
					sizeEx = "0.038*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "BHOT";
					x = "44.2 * 		(0.01875 * SafezoneH)";
					y = "11 * 		(0.025 * SafezoneH)";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
			};
		};
		class CA_APC_WFOV_mode_group: RscControlsGroupNoScrollbars
		{
			idc = 163;
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class CA_FOVModeWFOV: RscText
				{
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					sizeEx = "0.038*SafezoneH";
					idc = 1002;
					text = "WFOV";
					x = "8 * 		(0.01875 * SafezoneH)";
					y = "11 * 		(0.025 * SafezoneH)";
					w = "5 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
			};
		};
		class CA_APC_NFOV_mode_group: RscControlsGroupNoScrollbars
		{
			idc = 162;
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class CA_FOVModeNFOV: RscText
				{
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					sizeEx = "0.038*SafezoneH";
					idc = 1007;
					text = "NFOV";
					x = "8 * 		(0.01875 * SafezoneH)";
					y = "11 * 		(0.025 * SafezoneH)";
					w = "5 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
			};
		};
	};
	class RscOptics_APC_Wheeled_03_commander: RscUnitInfo
	{
		idd = 300;
		controls[] = {"CA_Zeroing","CA_IGUI_elements_group","CA_APC_WFOV_mode_group","CA_APC_NFOV_mode_group"};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			idc = 170;
			class VScrollbar: VScrollbar
			{
				width = 0;
			};
			class HScrollbar: HScrollbar
			{
				height = 0;
			};
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class TextOpticsPitch: RscText
				{
					style = 0;
					sizeEx = "0.032*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					idc = 1008;
					text = "E:";
					x = "7.8 * 		(0.01875 * SafezoneH)";
					y = "9.6 * 		(0.025 * SafezoneH)";
					w = "2 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_OpticsPitch: RscText
				{
					idc = 182;
					style = 0;
					sizeEx = "0.032*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "36";
					x = "9 * 		(0.01875 * SafezoneH)";
					y = "9.6 * 		(0.025 * SafezoneH)";
					w = "5.2 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_Distance: RscText
				{
					idc = 151;
					style = 0;
					sizeEx = "0.032*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "2456";
					x = "40.4 * 		(0.01875 * SafezoneH)";
					y = "9.6 * 		(0.025 * SafezoneH)";
					w = "5 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_VisionMode: RscText
				{
					idc = 152;
					style = 0;
					sizeEx = "0.032*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "FLIR";
					x = "44 * 		(0.01875 * SafezoneH)";
					y = "29.2 * 		(0.025 * SafezoneH)";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_FlirMode: RscText
				{
					idc = 153;
					style = 0;
					sizeEx = "0.032*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "BHOT";
					x = "47.5 * 		(0.01875 * SafezoneH)";
					y = "29.2 * 		(0.025 * SafezoneH)";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
			};
		};
		class CA_APC_WFOV_mode_group: RscControlsGroupNoScrollbars
		{
			idc = 163;
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class CA_FOVModeWFOV: RscText
				{
					shadow = 0;
					font = "EtelkaMonospacePro";
					sizeEx = "0.032*SafezoneH";
					idc = 1002;
					text = "WFOV";
					x = "40.4 * 		(0.01875 * SafezoneH)";
					y = "29.2 * 		(0.025 * SafezoneH)";
					w = "5 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
			};
		};
		class CA_APC_NFOV_mode_group: RscControlsGroupNoScrollbars
		{
			idc = 162;
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class CA_FOVModeNFOV: RscText
				{
					shadow = 0;
					font = "EtelkaMonospacePro";
					sizeEx = "0.032*SafezoneH";
					idc = 1007;
					text = "NFOV";
					x = "40.4 * 		(0.01875 * SafezoneH)";
					y = "29.2 * 		(0.025 * SafezoneH)";
					w = "5 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
			};
		};
	};
	class RscOptics_APC_Wheeled_03_gunner: RscUnitInfo
	{
		idd = 300;
		controls[] = {"CA_Zeroing","CA_IGUI_elements_group","CA_APC_WFOV_mode_group","CA_APC_NFOV_mode_group"};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			idc = 170;
			class VScrollbar: VScrollbar
			{
				width = 0;
			};
			class HScrollbar: HScrollbar
			{
				height = 0;
			};
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class TextOpticsPitch: RscText
				{
					style = 0;
					sizeEx = "0.032*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					idc = 1008;
					text = "E:";
					x = "7.8 * 		(0.01875 * SafezoneH)";
					y = "9.6 * 		(0.025 * SafezoneH)";
					w = "2 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_OpticsPitch: RscText
				{
					idc = 182;
					style = 0;
					sizeEx = "0.032*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "36";
					x = "9 * 		(0.01875 * SafezoneH)";
					y = "9.6 * 		(0.025 * SafezoneH)";
					w = "5.2 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_Distance: RscText
				{
					idc = 151;
					style = 0;
					sizeEx = "0.032*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "2456";
					x = "40.4 * 		(0.01875 * SafezoneH)";
					y = "9.6 * 		(0.025 * SafezoneH)";
					w = "5 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_VisionMode: RscText
				{
					idc = 152;
					style = 0;
					sizeEx = "0.032*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "FLIR";
					x = "44 * 		(0.01875 * SafezoneH)";
					y = "29.2 * 		(0.025 * SafezoneH)";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_FlirMode: RscText
				{
					idc = 153;
					style = 0;
					sizeEx = "0.032*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "BHOT";
					x = "47.5 * 		(0.01875 * SafezoneH)";
					y = "29.2 * 		(0.025 * SafezoneH)";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
			};
		};
		class CA_APC_WFOV_mode_group: RscControlsGroupNoScrollbars
		{
			idc = 163;
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class CA_FOVModeWFOV: RscText
				{
					shadow = 0;
					font = "EtelkaMonospacePro";
					sizeEx = "0.032*SafezoneH";
					idc = 1002;
					text = "WFOV";
					x = "40.4 * 		(0.01875 * SafezoneH)";
					y = "29.2 * 		(0.025 * SafezoneH)";
					w = "5 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
			};
		};
		class CA_APC_NFOV_mode_group: RscControlsGroupNoScrollbars
		{
			idc = 162;
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class CA_FOVModeNFOV: RscText
				{
					shadow = 0;
					font = "EtelkaMonospacePro";
					sizeEx = "0.032*SafezoneH";
					idc = 1007;
					text = "NFOV";
					x = "40.4 * 		(0.01875 * SafezoneH)";
					y = "29.2 * 		(0.025 * SafezoneH)";
					w = "5 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
			};
		};
	};
	class RscOptics_MBT_01_commander: RscUnitInfo
	{
		idd = 300;
		controls[] = {"CA_Zeroing","CA_IGUI_elements_group","CA_APC_WFOV_mode_group","CA_APC_NFOV_mode_group"};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			idc = 170;
			class VScrollbar: VScrollbar
			{
				width = 0;
			};
			class HScrollbar: HScrollbar
			{
				height = 0;
			};
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class TextOpticsPitch: RscText
				{
					style = 0;
					sizeEx = "0.032*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					colorText[] = {0.709,0.972,0.384,1};
					idc = 1008;
					text = "E:";
					x = "7.8 * 		(0.01875 * SafezoneH)";
					y = "9.6 * 		(0.025 * SafezoneH)";
					w = "2 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_OpticsPitch: RscText
				{
					idc = 182;
					style = 0;
					sizeEx = "0.032*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					colorText[] = {0.709,0.972,0.384,1};
					text = "36";
					x = "9 * 		(0.01875 * SafezoneH)";
					y = "9.6 * 		(0.025 * SafezoneH)";
					w = "5.2 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_Distance: RscText
				{
					idc = 151;
					style = 0;
					sizeEx = "0.032*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					colorText[] = {0.709,0.972,0.384,1};
					text = "2456";
					x = "40.4 * 		(0.01875 * SafezoneH)";
					y = "9.6 * 		(0.025 * SafezoneH)";
					w = "5 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_VisionMode: RscText
				{
					idc = 152;
					style = 0;
					sizeEx = "0.032*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					colorText[] = {0.709,0.972,0.384,1};
					text = "FLIR";
					x = "44 * 		(0.01875 * SafezoneH)";
					y = "29.2 * 		(0.025 * SafezoneH)";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_FlirMode: RscText
				{
					idc = 153;
					style = 0;
					sizeEx = "0.032*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					colorText[] = {0.709,0.972,0.384,1};
					text = "BHOT";
					x = "47.5 * 		(0.01875 * SafezoneH)";
					y = "29.2 * 		(0.025 * SafezoneH)";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
			};
		};
		class CA_APC_WFOV_mode_group: RscControlsGroupNoScrollbars
		{
			idc = 163;
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class CA_FOVModeWFOV: RscText
				{
					shadow = 0;
					font = "EtelkaMonospacePro";
					colorText[] = {0.709,0.972,0.384,1};
					sizeEx = "0.032*SafezoneH";
					idc = 1002;
					text = "WFOV";
					x = "40.4 * 		(0.01875 * SafezoneH)";
					y = "29.2 * 		(0.025 * SafezoneH)";
					w = "5 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
			};
		};
		class CA_APC_NFOV_mode_group: RscControlsGroupNoScrollbars
		{
			idc = 162;
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class CA_FOVModeNFOV: RscText
				{
					shadow = 0;
					font = "EtelkaMonospacePro";
					colorText[] = {0.709,0.972,0.384,1};
					sizeEx = "0.032*SafezoneH";
					idc = 1007;
					text = "NFOV";
					x = "40.4 * 		(0.01875 * SafezoneH)";
					y = "29.2 * 		(0.025 * SafezoneH)";
					w = "5 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
			};
		};
	};
	class RscOptics_MBT_01_gunner: RscUnitInfo
	{
		idd = 300;
		controls[] = {"CA_Zeroing","CA_IGUI_elements_group","CA_APC_WFOV_mode_group","CA_APC_NFOV_mode_group"};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			idc = 170;
			class VScrollbar: VScrollbar
			{
				width = 0;
			};
			class HScrollbar: HScrollbar
			{
				height = 0;
			};
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class TextOpticsPitch: RscText
				{
					style = 0;
					sizeEx = "0.032*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					colorText[] = {0.709,0.972,0.384,1};
					idc = 1008;
					text = "E:";
					x = "7.8 * 		(0.01875 * SafezoneH)";
					y = "9.6 * 		(0.025 * SafezoneH)";
					w = "2 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_OpticsPitch: RscText
				{
					idc = 182;
					style = 0;
					sizeEx = "0.032*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					colorText[] = {0.709,0.972,0.384,1};
					text = "36";
					x = "9 * 		(0.01875 * SafezoneH)";
					y = "9.6 * 		(0.025 * SafezoneH)";
					w = "5.2 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_Distance: RscText
				{
					idc = 151;
					style = 0;
					sizeEx = "0.032*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					colorText[] = {0.709,0.972,0.384,1};
					text = "2456";
					x = "40.4 * 		(0.01875 * SafezoneH)";
					y = "9.6 * 		(0.025 * SafezoneH)";
					w = "5 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_VisionMode: RscText
				{
					idc = 152;
					style = 0;
					sizeEx = "0.032*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					colorText[] = {0.709,0.972,0.384,1};
					text = "FLIR";
					x = "44 * 		(0.01875 * SafezoneH)";
					y = "29.2 * 		(0.025 * SafezoneH)";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_FlirMode: RscText
				{
					idc = 153;
					style = 0;
					sizeEx = "0.032*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					colorText[] = {0.709,0.972,0.384,1};
					text = "BHOT";
					x = "47.5 * 		(0.01875 * SafezoneH)";
					y = "29.2 * 		(0.025 * SafezoneH)";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
			};
		};
		class CA_APC_WFOV_mode_group: RscControlsGroupNoScrollbars
		{
			idc = 163;
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class CA_FOVModeWFOV: RscText
				{
					shadow = 0;
					font = "EtelkaMonospacePro";
					colorText[] = {0.709,0.972,0.384,1};
					sizeEx = "0.032*SafezoneH";
					idc = 1002;
					text = "WFOV";
					x = "40.4 * 		(0.01875 * SafezoneH)";
					y = "29.2 * 		(0.025 * SafezoneH)";
					w = "5 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
			};
		};
		class CA_APC_NFOV_mode_group: RscControlsGroupNoScrollbars
		{
			idc = 162;
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class CA_FOVModeNFOV: RscText
				{
					shadow = 0;
					font = "EtelkaMonospacePro";
					colorText[] = {0.709,0.972,0.384,1};
					sizeEx = "0.032*SafezoneH";
					idc = 1007;
					text = "NFOV";
					x = "40.4 * 		(0.01875 * SafezoneH)";
					y = "29.2 * 		(0.025 * SafezoneH)";
					w = "5 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
			};
		};
	};
	class RscOptics_MBT_02_commander: RscUnitInfo
	{
		idd = 300;
		controls[] = {"CA_Zeroing","CA_IGUI_elements_group"};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			idc = 170;
			class VScrollbar: VScrollbar
			{
				width = 0;
			};
			class HScrollbar: HScrollbar
			{
				height = 0;
			};
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class CA_Distance: RscText
				{
					idc = 151;
					style = 2;
					sizeEx = "0.038*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "2456";
					x = "24.3 * 		(0.01875 * SafezoneH)";
					y = "31 * 		(0.025 * SafezoneH)";
					w = "5 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
			};
		};
	};
	class RscOptics_MBT_02_gunner: RscUnitInfo
	{
		idd = 300;
		controls[] = {"CA_Zeroing","CA_IGUI_elements_group"};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			idc = 170;
			class VScrollbar: VScrollbar
			{
				width = 0;
			};
			class HScrollbar: HScrollbar
			{
				height = 0;
			};
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class CA_Distance: RscText
				{
					idc = 151;
					style = 2;
					sizeEx = "0.038*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "2456";
					x = "24.3 * 		(0.01875 * SafezoneH)";
					y = "31 * 		(0.025 * SafezoneH)";
					w = "5 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
			};
		};
	};
	class RscOptics_MBT_03_gunner: RscUnitInfo
	{
		idd = 300;
		controls[] = {"CA_Zeroing","CA_IGUI_elements_group"};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			idc = 170;
			class VScrollbar: VScrollbar
			{
				width = 0;
			};
			class HScrollbar: HScrollbar
			{
				height = 0;
			};
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class CA_OpticsPitch: RscText
				{
					idc = 182;
					style = 1;
					sizeEx = "0.038*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "36";
					x = "1 * 		(0.01875 * SafezoneH)";
					y = "19.4 * 		(0.025 * SafezoneH)";
					w = "5.2 * 		(0.01875 * SafezoneH)";
					h = "1.1 * 		(0.025 * SafezoneH)";
				};
				class CA_Distance: RscText
				{
					idc = 151;
					style = 2;
					sizeEx = "0.038*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "2456";
					x = "24.3 * 		(0.01875 * SafezoneH)";
					y = "30 * 		(0.025 * SafezoneH)";
					w = "5 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
			};
		};
	};
	class RscOptics_Offroad_01: RscUnitInfo
	{
		idd = 300;
		controls[] = {"CA_Zeroing"};
	};
	class RscUnitInfoAirRTDBasic: RscUnitInfoAir
	{
		onload = "uinamespace setvariable ['RscUnitInfoAir',_this select 0];";
		controls[] = {};
		controlsx[] = {"WeaponInfoControlsGroupRight","CA_SpeedBackground","CA_TextSpeed","CA_Speed","CA_AltBackground","CA_TextAlt","CA_Alt","CA_HeadingBackground","CA_Heading","CA_ValueColective"};
		class CA_Horizon: CA_HUDRscControlsGroup
		{
			idc = 540;
			x = 0.2;
			y = 0.2;
			w = 0.6;
			h = 0.6;
		};
		class CA_AirSpeedIndicator: CA_HUDRscControlsGroup
		{
			idc = 530;
			x = 0.1;
			y = 0.2;
			w = 0.15;
			h = 0.4;
			class ControlsBackground
			{
				class Bcg: RscText
				{
					x = 0;
					y = 0;
					w = 100;
					h = 100;
					colorbackground[] = {1,0,0,0.5};
				};
			};
			class Controls
			{
				class CA_AirSpeedIndicator_Axis: CA_HUDRscControlsGroup
				{
					idc = 531;
					x = 0.1;
					y = 0.0;
					w = 0.04;
					h = 0.4;
				};
				class CA_RadarAltmeterValue_Value: RscIGUIValue
				{
					idc = 532;
					style = 1;
					x = -0.01;
					y = 0.187;
					w = 0.1;
					shadow = 0;
					SizeEx = 0.035;
				};
				class CA_AltimeterBorder: RscPicture
				{
					x = 0.0;
					y = 0.182;
					w = 0.1;
					h = 0.05;
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					text = "\A3\ui_f\data\igui_airspeed_value_ca.paa";
				};
			};
		};
		class CA_Altimeter: CA_HUDRscControlsGroup
		{
			idc = 535;
			x = 0.8;
			y = 0.2;
			w = 0.28;
			h = 0.4;
			class ControlsBackground
			{
				class Bcg: RscText
				{
					x = 0;
					y = 0;
					w = 100;
					h = 100;
					colorbackground[] = {0,1,0,0.5};
				};
			};
			class Controls
			{
				class CA_AirSpeedIndicator_Axis: CA_HUDRscControlsGroup
				{
					idc = 536;
					x = 0.05;
					y = 0.0;
					w = 0.04;
					h = 0.4;
				};
				class CA_RadarAltmeterValue_Value: RscIGUIValue
				{
					idc = 537;
					style = 0;
					x = 0.102;
					y = 0.187;
					w = 0.1;
					shadow = 0;
					sizeEx = 0.035;
				};
				class CA_AltimeterBorder: RscPicture
				{
					x = 0.092;
					y = 0.182;
					w = 0.1;
					h = 0.05;
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					text = "\A3\ui_f\data\igui_altimeter_value_ca.paa";
				};
			};
		};
		class CA_RadarAltmeter: CA_HUDRscControlsGroup
		{
			idc = 505;
			x = 0.8;
			y = 0.6;
			w = 0.25;
			h = 0.25;
			shadow = 0;
			class ControlsBackground
			{
				class Bcg: RscText
				{
					x = 0;
					y = 0;
					w = 100;
					h = 100;
					colorbackground[] = {0,0,1,0.5};
				};
			};
			class Controls
			{
				class CA_RadarAltmeterBar: RscIGProgress
				{
					idc = 506;
					x = 0.05;
					y = 0.0;
					w = 0.01;
					h = 0.2;
					texture = "#(argb,8,8,3)color(1,1,1,1)";
				};
				class CA_RadarAltmeterValue: RscIGUIValue
				{
					idc = 507;
					style = 0;
					x = 0.065;
					y = 0.17;
					w = 0.1;
					shadow = 0;
					sizeEx = 0.035;
				};
			};
		};
		class CA_WindIndicator: CA_HUDRscControlsGroup
		{
			idc = 515;
			x = 0.1;
			y = 0.7;
			w = 0.1;
			h = 0.1;
		};
		class CA_StabilityIdicator: CA_HUDRscControlsGroup
		{
			idc = 520;
			x = 0.65;
			y = 0.7;
			w = 0.065;
			h = 0.1;
		};
		class CA_ValueColective: RscIGProgress
		{
			x = "0.018 + SafeZoneX";
			y = "0.01 + SafeZoneY";
			w = 0.0196078;
			h = 0.2091503;
			idc = 525;
			texture = "#(argb,8,8,3)color(1,1,1,1)";
			colorFrame[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
		};
		class CA_AutoTrim: RscIGUIValue
		{
			x = 0.85;
			y = 0.8;
			w = 0.05;
			h = 0.05;
			idc = 545;
			shadow = 0;
			SizeEx = 0.025;
			text = "TRIM";
		};
		class CA_AutoHover: RscIGUIValue
		{
			x = 0.8;
			y = 0.8;
			w = 0.05;
			h = 0.05;
			idc = 546;
			shadow = 0;
			SizeEx = 0.025;
			text = "HOVER";
		};
		class CA_Torque: RscIGUIValue
		{
			idc = 510;
			style = 1;
			x = 0.45;
			y = 0.75;
			w = 0.12;
			shadow = 0;
			SizeEx = 0.035;
		};
		class CA_GMeter: RscIGUIValue
		{
			idc = 501;
			style = 1;
			x = 0.45;
			y = 0.8;
			w = 0.12;
			shadow = 0;
			SizeEx = 0.035;
		};
		class Batteries: RscIGUIValue
		{
			idc = 11831;
			x = "0.08 + SafeZoneX";
			y = "0.036 + SafeZoneY";
			w = 0.3;
			h = 0.039;
			sizeEx = 0.02674;
			shadow = 2;
			text = "";
		};
		class Starter: Batteries
		{
			idc = 11833;
			y = "0.075 + SafeZoneY";
		};
		class Throttles: Batteries
		{
			idc = 11834;
			y = "0.114 + SafeZoneY";
		};
		class EnginesRPMs: Batteries
		{
			idc = 11835;
			y = "0.153 + SafeZoneY";
		};
		class APU: Batteries
		{
			idc = 11832;
			y = "0.192 + SafeZoneY";
		};
	};
	class RscUnitInfoAirRTDFull: RscUnitInfoAir
	{
		onload = "uinamespace setvariable ['RscUnitInfoAir',_this select 0];";
		controls[] = {"WeaponInfoControlsGroupRight","CA_Horizon_Lite","CA_Horizon_Analogue","CA_Speed_Analogue","CA_Compass_Analogue","CA_Altitude_Analogue","CA_Stability_Analogue","CA_Damage_Status"};
		class CA_Horizon_Lite: CA_HUDRscControlsGroup
		{
			idc = 541;
			x = "safezoneX";
			y = "safezoneY";
			w = "safezoneW";
			h = "safezoneH";
		};
		class CA_Speed_Analogue: CA_HUDRscControlsGroup
		{
			idc = 601;
			x = "0 * 								(		((safezoneW / safezoneH) min 1.2) / 32) + 			(1 * 								(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2)) / 2))";
			y = "0 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(13.5 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + safezoneH - 					(		((safezoneW / safezoneH) min 1.2) / 1.2)))";
			w = "6 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
			h = "6 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			class controls
			{
				class CA_Speed_Analogue_Background: RscPicture
				{
					idc = 607;
					text = "A3\ui_f\data\igui\rscingameui\RscUnitInfoAirRTDFull\analogue_background_speed_ca.paa";
					x = "0 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "0 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					w = "6 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					h = "6 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class CA_Speed_Analogue_Background_Imperial: RscPicture
				{
					idc = 606;
					text = "A3\ui_f\data\igui\rscingameui\RscUnitInfoAirRTDFull\analogue_background_speed_imp_ca.paa";
					x = "0 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "0 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					w = "6 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					h = "6 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class CA_Speed_Analogue_Needle: RscPicture
				{
					idc = 602;
					text = "\A3\ui_f\data\igui\rscingameui\RscUnitInfoAirRTDFull\analogue_arrow_ca.paa";
					x = "1 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "1 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					w = "4 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					h = "4 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class CA_Speed_Analogue_Min: RscPicture
				{
					idc = 603;
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",1};
					text = "\A3\ui_f\data\igui\rscingameui\RscUnitInfoAirRTDFull\MarkerMIN_CA.paa";
					x = "2.25 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "2.25 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					w = "1 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					h = "1 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class CA_Speed_Analogue_Max: RscPicture
				{
					idc = 604;
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",1};
					text = "\A3\ui_f\data\igui\rscingameui\RscUnitInfoAirRTDFull\MarkerMAX_CA.paa";
					x = "2.25 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "2.25 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					w = "1 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					h = "1 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class CA_Speed_Analogue_Value: RscText
				{
					idc = 605;
					sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
					style = 2;
					x = "2 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "0 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					w = "2 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					h = "0.5 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
			};
		};
		class CA_Altitude_Analogue: CA_HUDRscControlsGroup
		{
			idc = 611;
			x = "6 * 								(		((safezoneW / safezoneH) min 1.2) / 32) + 			(1 * 								(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2)) / 2))";
			y = "0 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(13.5 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + safezoneH - 					(		((safezoneW / safezoneH) min 1.2) / 1.2)))";
			w = "6 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
			h = "6 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			class controls
			{
				class CA_Altitude_Analogue_Background: RscPicture
				{
					idc = 617;
					text = "A3\ui_f\data\igui\rscingameui\RscUnitInfoAirRTDFull\analogue_background_altitude_ca.paa";
					x = "-3.37704e-007 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "0 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					w = "6 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					h = "6 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class CA_Altitude_Analogue_Background_Imperial: RscPicture
				{
					idc = 616;
					text = "A3\ui_f\data\igui\rscingameui\RscUnitInfoAirRTDFull\analogue_background_altitude_imp_ca.paa";
					x = "0 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "0 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					w = "6 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					h = "6 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class CA_Altitude_Analogue_Needle: RscPicture
				{
					idc = 612;
					text = "\A3\ui_f\data\igui\rscingameui\RscUnitInfoAirRTDFull\analogue_arrow_ca.paa";
					x = "1 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "1 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					w = "4 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					h = "4 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class CA_Altitude_Analogue_Min: RscPicture
				{
					idc = 613;
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",1};
					text = "\A3\ui_f\data\igui\rscingameui\RscUnitInfoAirRTDFull\MarkerMIN_CA.paa";
					x = "2.25 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "2.25 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					w = "1 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					h = "1 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class CA_Altitude_Analogue_Max: RscPicture
				{
					idc = 614;
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",1};
					text = "\A3\ui_f\data\igui\rscingameui\RscUnitInfoAirRTDFull\MarkerMAX_CA.paa";
					x = "2.25 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "2.25 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					w = "1 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					h = "1 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class CA_Altitude_Analogue_Value: RscText
				{
					idc = 615;
					sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
					style = 2;
					x = "2 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "0 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					w = "2 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					h = "0.5 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
			};
		};
		class CA_Horizon_Analogue: CA_HUDRscControlsGroup
		{
			idc = 621;
			x = "12 * 								(		((safezoneW / safezoneH) min 1.2) / 32) + 			(1 * 								(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2)) / 2))";
			y = "0 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(13.5 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + safezoneH - 					(		((safezoneW / safezoneH) min 1.2) / 1.2)))";
			w = "6 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
			h = "6 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			class controls
			{
				class CA_Horizon_Analogue_Background: RscPicture
				{
					idc = 1208;
					text = "A3\ui_f\data\igui\rscingameui\RscUnitInfoAirRTDFull\analogue_background_horizon_ca.paa";
					x = "0 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "0 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					w = "6 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					h = "6 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class CA_Horizon_Analogue_Needle: RscPicture
				{
					idc = 622;
					text = "\A3\ui_f\data\igui_horizon_axes_ca.paa";
					x = "1.5 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "1.5 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					w = "3 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					h = "3 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					colorText[] = {1,1,1,1};
				};
				class CA_Horizon_Analogue_Value: RscText
				{
					idc = 623;
					sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
					style = 2;
					x = "2 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "0 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					w = "2 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					h = "0.5 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class CA_Horizon_Analogue_Aircraft: RscPicture
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",1};
					shadow = 2;
					idc = 1232;
					text = "\A3\ui_f\data\igui\rscingameui\RscUnitInfoAirRTDFull\analogue_horizon_aircraft_ca.paa";
					x = "1.5 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "1.5 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					w = "3 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					h = "3 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
			};
		};
		class CA_Stability_Analogue: CA_HUDRscControlsGroup
		{
			idc = 641;
			x = "18 * 								(		((safezoneW / safezoneH) min 1.2) / 32) + 			(1 * 								(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2)) / 2))";
			y = "0 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(13.5 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + safezoneH - 					(		((safezoneW / safezoneH) min 1.2) / 1.2)))";
			w = "6 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
			h = "6 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			class controls
			{
				class CA_Stability_Analogue_Background: RscPicture
				{
					idc = 648;
					text = "A3\ui_f\data\igui\rscingameui\RscUnitInfoAirRTDFull\analogue_background_stability_ca.paa";
					x = "0 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "0 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					w = "6 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					h = "6 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class CA_Stability_Analogue_Background_Imperial: RscPicture
				{
					idc = 647;
					text = "A3\ui_f\data\igui\rscingameui\RscUnitInfoAirRTDFull\analogue_background_stability_imp_ca.paa";
					x = "0 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "0 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					w = "6 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					h = "6 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class CA_Stability_Analogue_Speed: RscPicture
				{
					idc = 642;
					text = "\A3\ui_f\data\igui\rscingameui\RscUnitInfoAirRTDFull\WhiteDot_CA.paa";
					x = "1.75 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "1.75 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					w = "0.5 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					h = "0.5 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					colorText[] = {1,1,1,1};
				};
				class CA_Stability_Analogue_Autohover: RscPicture
				{
					idc = 546;
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",1};
					text = "\A3\ui_f\data\igui\rscingameui\RscUnitInfoAirRTDFull\WhiteDot_CA.paa";
					x = "2.75 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "2.75 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					w = "0.5 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					h = "0.5 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class CA_Stability_Analogue_Vertical_Speed_Needle: RscPicture
				{
					idc = 644;
					text = "\A3\ui_f\data\igui\rscingameui\RscUnitInfoAirRTDFull\analogue_arrow_VSI_ca.paa";
					x = "1 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "1 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					w = "4 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					h = "4 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					colorText[] = {1,1,1,1};
				};
				class CA_Stability_Analogue_Collective: RscPicture
				{
					idc = 645;
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",1};
					text = "A3\ui_f\data\igui\rscingameui\RscUnitInfoAirRTDFull\analogue_right_ca.paa";
					x = "3 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "0 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					w = "3 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					h = "6 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class CA_Stability_Analogue_Value: RscText
				{
					idc = 643;
					sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
					style = 2;
					x = "2 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "0 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					w = "2 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					h = "0.5 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
			};
		};
		class CA_Compass_Analogue: CA_HUDRscControlsGroup
		{
			idc = 631;
			x = "24 * 								(		((safezoneW / safezoneH) min 1.2) / 32) + 			(1 * 								(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2)) / 2))";
			y = "0 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(13.5 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + safezoneH - 					(		((safezoneW / safezoneH) min 1.2) / 1.2)))";
			w = "6 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
			h = "6 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			class controls
			{
				class CA_Compass_Analogue_Background: RscPicture
				{
					idc = 1215;
					text = "A3\ui_f\data\igui\rscingameui\RscUnitInfoAirRTDFull\analogue_background_compass_ca.paa";
					x = "0 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "0 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					w = "6 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					h = "6 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class CA_Compass_Analogue_Needle: RscPicture
				{
					idc = 632;
					text = "\A3\ui_f\data\igui\rscingameui\RscUnitInfoAirRTDFull\analogue_compass_ca.paa";
					x = "0 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "0 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					w = "6 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					h = "6 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class CA_Compass_Analogue_Wind: RscPicture
				{
					idc = 633;
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",1};
					text = "\A3\ui_f\data\igui_wind_ca.paa";
					x = "1.5 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "1.5 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					w = "3 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					h = "3 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class CA_Compass_Analogue_Waypoint: RscPicture
				{
					idc = 634;
					text = "\A3\ui_f\data\igui\rscingameui\RscUnitInfoAirRTDFull\MarkerWPT_CA.paa";
					x = "2.25 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "2.25 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					w = "0.5 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					h = "0.5 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					colorText[] = {1,0.5,0,1};
				};
				class CA_Compass_Analogue_Min: RscPicture
				{
					idc = 635;
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",1};
					text = "\A3\ui_f\data\igui\rscingameui\RscUnitInfoAirRTDFull\MarkerMIN_CA.paa";
					x = "2.25 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "2.25 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					w = "1 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					h = "1 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class CA_Compass_Analogue_Max: RscPicture
				{
					idc = 636;
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",1};
					text = "\A3\ui_f\data\igui\rscingameui\RscUnitInfoAirRTDFull\MarkerMAX_CA.paa";
					x = "2.25 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "2.25 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					w = "1 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					h = "1 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class CA_Compass_Analogue_Value: RscText
				{
					idc = 637;
					sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
					style = 2;
					x = "2 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "0 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					w = "2 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					h = "0.5 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
			};
		};
		class CA_Damage_Status: CA_HUDRscControlsGroup
		{
			idc = 660;
			class VScrollbar: VScrollbar
			{
				width = 0;
			};
			class HScrollbar: HScrollbar
			{
				height = 0;
			};
			x = "0 * 								(		((safezoneW / safezoneH) min 1.2) / 32) + 			(1 * 								(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2)) / 2))";
			y = "0 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(13.5 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + safezoneH - 					(		((safezoneW / safezoneH) min 1.2) / 1.2)))";
			w = "30 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
			h = "6 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			class controls
			{
				class CA_Damage_Temperature: RscPicture
				{
					idc = 667;
					text = "\A3\ui_f\data\igui\rscingameui\RscUnitInfoAirRTDFull\igui_WLight2_TEMP_CA.paa";
					x = "5.5 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "4 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					w = "1 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					h = "1 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class CA_Damage_RPM: RscPicture
				{
					idc = 662;
					text = "\A3\ui_f\data\igui\rscingameui\RscUnitInfoAirRTDFull\igui_WLight2_RPM_CA.paa";
					x = "11.5 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "1 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					w = "1 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					h = "1 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class CA_Damage_Torque: RscPicture
				{
					idc = 664;
					text = "\A3\ui_f\data\igui\rscingameui\RscUnitInfoAirRTDFull\igui_WLight2_TRQ_CA.paa";
					x = "17.5 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "1 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					w = "1 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					h = "1 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class CA_Damage_Electricity: RscPicture
				{
					idc = 665;
					text = "\A3\ui_f\data\igui\rscingameui\RscUnitInfoAirRTDFull\igui_WLight2_DC_CA.paa";
					x = "23.5 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "1 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					w = "1 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					h = "1 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class CA_Damage_Engine: RscPicture
				{
					idc = 663;
					text = "\A3\ui_f\data\igui\rscingameui\RscUnitInfoAirRTDFull\igui_WLight_ENG_CA.paa";
					x = "5.5 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "1 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					w = "1 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					h = "1 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class CA_Damage_MainRotor: RscPicture
				{
					idc = 668;
					text = "\A3\ui_f\data\igui\rscingameui\RscUnitInfoAirRTDFull\igui_WLight_MROT_CA.paa";
					x = "11.5 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "4 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					w = "1 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					h = "1 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class CA_Damage_Autohover: RscPicture
				{
					idc = 669;
					text = "\A3\ui_f\data\igui\rscingameui\RscUnitInfoAirRTDFull\igui_WLight_ATRQ_CA.paa";
					x = "17.5 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "4 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					w = "1 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					h = "1 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class CA_Damage_Fuel: RscPicture
				{
					idc = 666;
					text = "\A3\ui_f\data\igui\rscingameui\RscUnitInfoAirRTDFull\igui_WLight_FUEL_CA.paa";
					x = "23.5 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "4 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					w = "1 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
					h = "1 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
			};
		};
	};
	class RscOptics_Gunner_AAA_01: RscWeaponRangeZeroing
	{
		class CA_Distance: CA_Distance
		{
			colorText[] = {1,1,1,0.8};
		};
	};
	class RscOptics_Gunner_APC_01: RscWeaponRangeZeroing
	{
		class CA_Distance: CA_Distance
		{
			colorText[] = {1,0,0,0.8};
		};
	};
	class RscOptics_Gunner_APC_02: RscWeaponRangeZeroing
	{
		class CA_Distance: CA_Distance
		{
			colorText[] = {1,1,1,0.8};
		};
	};
	class RscOptics_Gunner_APC_03: RscWeaponRangeZeroing
	{
		class CA_Distance: CA_Distance
		{
			colorText[] = {1,1,1,0.8};
		};
	};
	class RscOptics_Gunner_MBT_01: RscWeaponRangeZeroing
	{
		class CA_Distance: CA_Distance
		{
			colorText[] = {0.675,1,0.4,0.8};
		};
	};
	class RscOptics_Gunner_MBT_02: RscWeaponRangeZeroing
	{
		class CA_Distance: CA_Distance
		{
			colorText[] = {1,1,1,0.8};
		};
	};
	class RscOptics_Gunner_MBT_03: RscWeaponRangeZeroing
	{
		class CA_Distance: CA_Distance
		{
			colorText[] = {1,1,1,0.8};
		};
	};
	class RscOptics_Commander_01: RscWeaponRangeZeroing
	{
		class CA_Distance: CA_Distance
		{
			colorText[] = {0.675,1,0.4,0.8};
		};
	};
	class RscOptics_Commander_02: RscWeaponRangeZeroing
	{
		class CA_Distance: CA_Distance
		{
			colorText[] = {1,1,1,0.8};
		};
	};
	class RscOptics_Commander_03: RscWeaponRangeZeroing
	{
		class CA_Distance: CA_Distance
		{
			colorText[] = {1,1,1,0.8};
		};
	};
};

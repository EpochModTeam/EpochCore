class SelectGender
{

	idd = -7;
	movingEnable = 0;
	enableSimulation = 1;
	onLoad = "['Select your gender',10] call Epoch_dynamicText; setMousePosition [0.5, 0.5];";
	class ControlsBackground
	{
		class Background: RscPicture //Replace with custom background
		{
			idc = 88800;
			text = "x\addons\a3_epoch_code\Data\gender_selection.paa";
			x = safezoneX - safezoneW * 0.1;
			y = safezoneY - safezoneH * 0.1;
			w = safezoneW + safezoneW * 0.3;
			h = safezoneH + safezoneH * 0.3;
		};
	};
	class Objects
	{
		class female
		{

			idc = 88801;
			type = 82;
			model = "\x\addons\a3_epoch_assets\models\clone_female.p3d";
			scale = 0.5;

			direction[] = {0, 1, 0};
			up[] = {0, 0, 1};

			x = -1;
			z = 1;
			y = 1.8;

			xBack = -1;
			zBack = 1;
			yBack = 1.8;

			inBack = 0;
			enableZoom = 0;
			zoomDuration = 0.001;
			onMouseButtonDown = "closeDialog 0; EPOCH_PlayerIsMale = false;";
			onLoad = "(_this select 0) ctrlSetModelDirAndUp [[0,1,0],[0,0,1]];";
		};
		class male: female
		{
			idc = 88802;
			model = "\x\addons\a3_epoch_assets\models\clone_male.p3d";
			x = 2;
			xBack = 2;
			onMouseButtonDown = "closeDialog 0; EPOCH_PlayerIsMale = true;";
		};
	};
 	class controls
	{
		class overlay: RscPicture
		{
			idc = 88803;
			text = "#(argb,8,8,3)color(0,0,0,0)";
			x = safezoneX + 0.4 * safezoneW;
			y = safezoneY;
			w = safezoneW * 0.2;
			h = safezoneH;
			onMouseMoving = "(_this select 1) call epoch_genderSelection;";
			onLoad = "(_this select 0) ctrlEnable true;";
		};
	};
};

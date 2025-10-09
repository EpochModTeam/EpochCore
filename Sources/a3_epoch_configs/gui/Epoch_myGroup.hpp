class Epoch_myGroup {
	idd = -1300;
	movingEnable = 0;
	enableSimulation = 1;
	onLoad = "[] spawn { waitUntil {!isNull (findDisplay -1300)};_this call EPOCH_Group_onLoad}";
	class controlsBackground {
		class TopBG: IGUIBack
		{
			idc = 10;

			x = 0.334649 * safezoneW + safezoneX;
			y = 0.3174 * safezoneH + safezoneY;
			w = 0.319769 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])","(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
		};
		class MainBG: IGUIBack
		{
			idc = 11;

			x = 0.334959 * safezoneW + safezoneX;
			y = 0.3394 * safezoneH + safezoneY;
			w = 0.319767 * safezoneW;
			h = 0.319 * safezoneH;
			colorBackground[] = {0,0,0,0.7};
		};
	};
	class controls {
		class MainText: RscText
		{
			idc = 20;

			text = "Epoch Group Menu";
			x = 0.334959 * safezoneW + safezoneX;
			y = 0.3174 * safezoneH + safezoneY;
			w = 0.128939 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class GroupNameText: RscText
		{
			idc = 21;

			text = "Groupname:";
			x = 0.341149 * safezoneW + safezoneX;
			y = 0.3526 * safezoneH + safezoneY;
			w = 0.307403 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class InviteText: RscText
		{
			idc = 22;

			text = "Invite Player";
			x = 0.494843 * safezoneW + safezoneX;
			y = 0.3966 * safezoneH + safezoneY;
			w = 0.153712 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class BtnInvite: RscButton
		{
			idc = 30;

			text = "";
			action = "call EPOCH_Group_BtnInvite";
			x = 0.492783 * safezoneW + safezoneX;
			y = 0.5968 * safezoneH + safezoneY;
			w = 0.157841 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class BtnClose: RscButton
		{
			idc = 34;
			action = "closeDialog 0";

			text = "Close";
			x = 0.574269 * safezoneW + safezoneX;
			y = 0.6276 * safezoneH + safezoneY;
			w = 0.075349 * safezoneW;
			h = 0.0221111 * safezoneH;
		};
		class BtnSetMod: RscButton
		{
			idc = 32;

			text = "Set Mod";
			tooltip = "Moderators can Invite or Kick Groupmember but can't set other player to Moderator";
			action = "call EPOCH_Group_BtnMod";
			x = 0.417476 * safezoneW + safezoneX;
			y = 0.6276 * safezoneH + safezoneY;
			w = 0.0701425 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class BtnKick: RscButton
		{
			idc = 33;

			text = "Kick Member";
			action = "call EPOCH_Group_BtnKick";
			x = 0.340116 * safezoneW + safezoneX;
			y = 0.6276 * safezoneH + safezoneY;
			w = 0.0701425 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class BtnLeave: RscButton
		{
			idc = 31;
			text = "Leave Group";
			action = "call EPOCH_Group_BtnLeave";
			x = 0.492779 * safezoneW + safezoneX;
			y = 0.6276 * safezoneH + safezoneY;
			w = 0.075349 * safezoneW;
			h = 0.0221111 * safezoneH;
		};
		class GroupMemberList: RscListbox
		{
			idc = 40;
			onLBSelChanged = "_this call EPOCH_Group_List";
			x = 0.340116 * safezoneW + safezoneX;
			y = 0.3922 * safezoneH + safezoneY;
			w = 0.148556 * safezoneW;
			h = 0.2266 * safezoneH;
		};
		class InvitePlayerCombo: RscCombo
		{
			idc = 41;
			onLBSelChanged = "_this call EPOCH_Group_Combo";
			x = 0.492779 * safezoneW + safezoneX;
			y = 0.4296 * safezoneH + safezoneY;
			w = 0.156793 * safezoneW;
			h = 0.022 * safezoneH;
		};
	};
};

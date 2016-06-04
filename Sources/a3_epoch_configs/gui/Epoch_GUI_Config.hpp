#include "\a3\functions_f\GUI\editor\GUI_styles.hpp"

#include "Epoch_GUI_ClientConfigs.hpp"
#include "Epoch_GUI_rmx.hpp"

class RscTitles
{
	#include "Epoch_RscTitles.hpp"
};

#include "QuickTake.hpp"
#include "MissionSelect.hpp"
#include "TapOut.hpp"
#include "TapOut2.hpp"
#include "TapOut3.hpp"
#include "SelectGender.hpp"
#include "TradeNPCMenu.hpp"
#include "GroupRequests.hpp"
#include "InteractBank.hpp"
#include "Trade.hpp"
#include "RscDisplayInventory.hpp"

// Security Changes Start
/*
class RscDisplayRemoteMissions: RscStandardDisplay
{
	onLoad = "[""onLoad"",_this,""RscDisplayRemoteMissions"",'GUI'] call compile preprocessfilelinenumbers ""A3\ui_f\scripts\initDisplay.sqf"";execVM ""\x\addons\a3_epoch_code\system\dummy.sqf""";
};
class RscDisplayPassword: RscStandardDisplay
{
	onLoad = "[""onLoad"",_this,""RscDisplayPassword"",'GUI'] call compile preprocessfilelinenumbers ""A3\ui_f\scripts\initDisplay.sqf"";execVM ""\x\addons\a3_epoch_code\system\dummy.sqf""";
};
class RscConfigEditor_Main{onLoad = "missionNamespace setVariable ['yolo',true];(_this select 0) closeDisplay 0";};
*/
// Security Changes End

// TODO: move this to code
//close breifing
class RscDisplayDebriefing: RscStandardDisplay
{
	onLoad = "(_this select 0) closeDisplay 0";
};

class RscDisplayMain: RscStandardDisplay
{
	onLoad = "_this call compile preprocessfilelinenumbers ""\x\addons\a3_epoch_code\gui\scripts\Epoch_handleWelcomeScreen.sqf""";
};

class RscDisplayClientGetReady: RscDisplayGetReady
{
	onLoad = "ctrlActivate ((_this select 0) displayCtrl 1); (_this select 0) closeDisplay 1";
	//onLoad = "[""onLoad"",_this,""RscDiary"",'GUI'] call compile preprocessfilelinenumbers ""A3\ui_f\scripts\initDisplay.sqf""";
};
class RscDisplayWelcome;
class RscWelcomeEpoch : RscDisplayWelcome
{
	idd = -666;
	onLoad = "[""onLoad"",[(_this select 0),""Welcome""],""Epoch_welcomeScreen"",'Epoch'] call compile preprocessfilelinenumbers ""A3\ui_f\scripts\initDisplay.sqf"""; //Used when we have it outside of the game
};
class RscDisplayInfo : RscWelcomeEpoch
{
	onLoad = "[""onLoad"",[(_this select 0),""Custom""],""Epoch_welcomeScreen"",'Epoch'] call compile preprocessfilelinenumbers ""A3\ui_f\scripts\initDisplay.sqf"""; //Used when we have it outside of the game}
};
class RscVersionUpdateEpoch : RscWelcomeEpoch
{
	onLoad = "[""onLoad"",[(_this select 0),""Changelog""],""Epoch_welcomeScreen"",'Epoch'] call compile preprocessfilelinenumbers ""A3\ui_f\scripts\initDisplay.sqf"""; //Used when we have it outside of the game}
};

#include "RscInGameUI.hpp"
#include "EpochLoadingScreen.hpp"
#include "EPOCH_createGrp.hpp"
#include "Epoch_myGroup.hpp"
#include "Epoch_GroupInvite.hpp"
#include "SKN_AdminMenu.hpp"

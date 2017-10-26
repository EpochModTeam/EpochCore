@Echo Off
SETLOCAL enabledelayedexpansion

REM Workshop IDs:
REM EpochExperimental = 455221958
REM Normal Epoch = 421839251
SET WORKSHOPID=455221958
SET PBO_PREFIX=x\addons
SET SIGNFILE_PREFIX=epoch
SET SIGNFILE_VERSION=100

REM Arma 3 tools folder path
SET TOOLSPATH=C:\Program Files (x86)\Steam\steamapps\common\Arma 3 Tools

REM set tool paths
SET AddonBuilder=%TOOLSPATH%\AddonBuilder
SET Publisher=%TOOLSPATH%\Publisher
SET DSSignFile=%TOOLSPATH%\DSSignFile
SET BIprivatekey=%DSSignFile%\%SIGNFILE_PREFIX%%SIGNFILE_VERSION%.biprivatekey

REM path to sources
SET MAIN_PATH=C:\Jenkins\workspace\Team_EpochCore_experimental-PYKIA2SJDPUF7555RH7E6CEJQ52WFATMHKVGEXIMVMJPB5FYVKYA
REM path to compiled mod
SET WORKSHOP_PATH=C:\Program Files (x86)\Steam\steamapps\common\Arma 3\@epoch

REM build all PBO's
SET currentVersion="%MAIN_PATH%\version.txt"
SET currentBuild="%MAIN_PATH%\build.txt"

if exist %MAIN_PATH% (
    ECHO "%MAIN_PATH% exists"
) else (
    ECHO "%MAIN_PATH% doesn't exist"
    exit /b 0
)

REM Create bikey if does not already exist
if not exist "%BIprivatekey%" (
	START "DSCreateKey" /WAIT /d "%DSSignFile%" "%DSSignFile%\DSCreateKey.exe" %SIGNFILE_PREFIX%%SIGNFILE_VERSION%
)


SET AB_includes_path="C:\GITTEMP\includes.txt"

REM increase build number
SET /p BUILDNUMBER=<%currentBuild%
SET /A BUILDNUMBER = BUILDNUMBER + 1
echo %BUILDNUMBER% > %currentBuild%

REM Build Client Pbo's
echo building Client pbo's


SET SOURCE_PATH=%MAIN_PATH%\Sources


for /d %%D in ("%SOURCE_PATH%\*") do (
	REM check if folder had a config.cpp file
	if exist "%%~fD\config.cpp" (
		SET pboBuild="%%~fD\build.hpp"
		echo build=%BUILDNUMBER%; > !pboBuild!
		START "AddonBuilder" /min /WAIT "%AddonBuilder%\AddonBuilder.exe" "P:\%PBO_PREFIX%\%%~nxD" "%WORKSHOP_PATH%\addons" -clear -prefix="%PBO_PREFIX%\%%~nxD" -sign="%BIprivatekey%" -project=P:\ -include=%AB_includes_path%
		echo %%~nxD
	)
)

REM upload to steam workshop to experimental client
SET CHANGELOG="Build:%BUILDNUMBER% See Changelogs: https://github.com/EpochModTeam/Epoch/tree/experimental/Changelogs"
START "" /WAIT "%Publisher%\PublisherCmd.exe" update /id:%WORKSHOPID% /changeNote:%CHANGELOG% /path:"%WORKSHOP_PATH%"

exit /b 0

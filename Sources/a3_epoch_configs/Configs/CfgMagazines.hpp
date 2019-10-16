/*
	Author: Aaron Clark - EpochMod.com
    Contributors:
	Description:
	All CfgMagazines configs
    Licence:
    Arma Public License Share Alike (APL-SA) - https://www.bistudio.com/community/licenses/arma-public-license-share-alike
    Github:
    https://github.com/EpochModTeam/Epoch/tree/release/Sources/epoch_config/Configs/CfgMagazines.hpp
*/

/*[[[cog from arma_config_tools import *; json_to_arma()]]]*/
class CfgMagazines
{
    class Default;
    class CA_Magazine;
    class 1Rnd_Soda : CA_Magazine
    {
        picture = "";
        displayName = "$STR_EPOCH_Soda";
        scope = 0;
        descriptionShort = "$STR_EPOCH_Soda";
        count = 1;
        mass = 1;
    };
    class 1Rnd_Food : CA_Magazine
    {
        picture = "";
        displayName = "$STR_EPOCH_Food";
        scope = 0;
        descriptionShort = "$STR_EPOCH_Food";
        count = 1;
        mass = 1;
    };
    class SmokeShellGreen;
    class SmokeShellToxic : SmokeShellGreen
    {
        displayName = "$STR_EPOCH_SmokeGrenadeToxic";
        scope = 2;
        descriptionShort = "$STR_EPOCH_TypeSmokeGrenadeToxicltbrgtRounds1ltbrgtUsedinHand";
        displayNameShort = "$STR_EPOCH_ToxicSmoke";
        count = 1;
        mass = 10;
        ammo = "SmokeShellToxic_Ammo";
    };
    class ItemEmptyTin : CA_Magazine
    {
        author = "Sequisha";
        picture = "\x\addons\a3_epoch_assets_2\gear\gear_emptytincan_x_ca.paa";
        displayname = "$STR_EPOCH_EmptyTinCan";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_2\empty_tin.p3d";
        descriptionShort = "$STR_EPOCH_EmptyTinCan";
        count = 1;
        mass = 2;
    };
    class ItemSodaEmpty : CA_Magazine
    {
        picture = "\x\addons\a3_epoch_assets_1\pictures\soda_empty_ca.paa";
        displayname = "$STR_EPOCH_EmptySodaCan";
        scope = 2;
        model = "\A3\Structures_F\Items\Food\Can_Dented_F.p3d";
        descriptionShort = "$STR_EPOCH_EmptyAluminumSodaCan";
        count = 1;
        mass = 2;
    };
    class 10rnd_22X44_magazine : CA_Magazine
    {
        scope = 2;
        displayName = "$STR_EPOCH_10Rnd22magazine";
        picture = "\x\addons\a3_epoch_weapons\gear\gear_ruger_mag_x_ca.paa";
        ammo = "E_22X44_ball";
        model = "\x\addons\a3_epoch_weapons\ruger_magazine.p3d";
        count = 10;
        initSpeed = 700;
        tracersEvery = 0;
        lastRoundsTracer = 0;
        descriptionShort = "$STR_EPOCH_AtenroundmagazinefortheRuger";
    };
    class 9rnd_45X88_magazine : CA_Magazine
    {
        scope = 2;
        displayName = "$STR_EPOCH_9Rnd45magazine";
        picture = "\x\addons\a3_epoch_weapons\gear\gear_1911mag_x_ca.paa";
        ammo = "E_45_ball";
        model = "\x\addons\a3_epoch_weapons\1911_magazine.p3d";
        count = 9;
        initSpeed = 700;
        tracersEvery = 0;
        lastRoundsTracer = 0;
        descriptionShort = "$STR_EPOCH_Anineroundmagazineforthe1911";
    };
    class spear_magazine : CA_Magazine
    {
        scope = 2;
        displayName = "$STR_EPOCH_Spearround";
        picture = "\x\addons\a3_epoch_weapons\gear\gear_speargunmag_x_ca.paa";
        mass = 2;
        ammo = "spear_ball";
        model = "\x\addons\a3_epoch_weapons\spearmag.p3d";
        count = 1;
        initSpeed = 100;
        tracersEvery = 1;
        lastRoundsTracer = 1;
        descriptionShort = "$STR_EPOCH_Aspearforthespearrifle";
    };
    class 20rnd_762_magazine : CA_Magazine
    {
        scope = 2;
        displayName = "$STR_EPOCH_20Rnd762Magazine";
        picture = "\x\addons\a3_epoch_weapons\gear\gear_sr25_magazine_x_ca.paa";
        ammo = "K_762_ball";
        model = "\x\addons\a3_epoch_weapons\magazine.p3d";
        count = 20;
        initSpeed = 700;
        tracersEvery = 0;
        lastRoundsTracer = 0;
        descriptionShort = "$STR_EPOCH_20rounddetachableboxmagazine";
    };
    class 30rnd_556_magazine : CA_Magazine
    {
        scope = 2;
        displayName = "$STR_EPOCH_30Rnd556Magazine";
        picture = "\x\addons\a3_epoch_weapons\gear\gear_l85a2_mag_x_ca.paa";
        ammo = "K_556_ball";
        model = "\x\addons\a3_epoch_weapons\L85A2_mag.p3d";
        count = 30;
        initSpeed = 700;
        tracersEvery = 0;
        lastRoundsTracer = 0;
        descriptionShort = "$STR_EPOCH_30RoundStanagMagazine";
    };
    class 30Rnd_762x39_Mag : CA_Magazine
    {
        scope = 2;
        displayName = "$STR_EPOCH_762mm30rndAKMMag";
        picture = "\x\addons\a2_epoch_weapons\akm\data\UI\gear_30Rnd_akm_ca.paa";
        count = 30;
        ammo = "B_762x39_Ball";
        mass = 8;
        model = "\x\addons\a2_epoch_weapons\akm\30Rnd_akm.p3d";
        initSpeed = 850;
        lastRoundsTracer = 4;
        descriptionShort = "$STR_EPOCH_Caliber762x39mmUsedinAKMRPK";
    };
    class 200Rnd_556x45_M249 : CA_Magazine
    {
        scope = 2;
        displayName = "$STR_EPOCH_556mm200rndSawBelt";
        picture = "\x\addons\a2_epoch_weapons\m249\data\UI\gear_m249_mag_ca.paa";
        ammo = "B_556x45_Ball";
        count = 200;
        initSpeed = 915;
        tracersEvery = 4;
        model = "\x\addons\a2_epoch_weapons\m249\m249_mag.p3d";
        lastRoundsTracer = 4;
        descriptionShort = "$STR_EPOCH_Caliber556x45mmUsedinM249Saw";
		mass = 30;
    };
/////////////////A2 Mags start
	class Bizon_64Rnd_9x18: CA_Magazine 
	{
		scope = 2;
		displayName = "Bizon Classic 64Rnd Ammo";
		picture = "\x\addons\a2_epoch_weapons_2\ui\m_bizonc_ca.paa";
		model = "x\addons\a2_epoch_weapons_2\bizon\bizon_mag_epoch.p3d";
		ammo = B_9x18_Ball;
		count = 64;
		initSpeed = 350;
		tracersEvery = 0;
		lastRoundsTracer = 1;
		descriptionShort = "Caliber: 9x18<br />Rounds: 64<br />Used in: Bizon Classic";
	};
	class 20Rnd_762x51_DMR: CA_Magazine
	{
		scope = 2;
		displayName = "DMR Classic Ammo";
		picture = "\x\addons\a2_epoch_weapons_2\ui\m_us_dmr_ca.paa";
		model = "x\addons\a2_epoch_weapons_2\dmr\dmr_mag_epoch.p3d";
		ammo = B_762x51_Ball;
		count = 20;
		initSpeed = 950;
		tracersEvery = 0;
		lastRoundsTracer = 1;
		descriptionShort = "Caliber: 7.56x51<br />Rounds: 20<br />Used in: mk17 Classic";
	};
	class 20Rnd_762x51_FNFAL: CA_Magazine 
	{
		scope = 2;
		displayName = "FnFal Classic Mag";
		picture = "\x\addons\a2_epoch_weapons_2\ui\m_20stanag_ca.paa";
		model = "x\addons\a2_epoch_weapons_2\fnFal\fnFal_mag_epoch.p3d";
		ammo = B_762x51_Ball;
		count = 20;
		initSpeed = 950;
		tracersEvery = 0;
		lastRoundsTracer = 1;
		descriptionShort = "Caliber: 7.56x51<br />Rounds: 20<br />Used in: FnFal Classic";
	};
	class 30Rnd_556x45_G36: 30rnd_556_magazine {
		displayName = "MG36 Classic Mag";
		descriptionShort = "Caliber: 5.56x45<br />Rounds: 30<br />Used in: G36_C Classic";
	};
/*
	class a2_akyellow_mag_EPOCH: 30Rnd_762x39_Mag 
	{
		scope = 2;
		displayName = "30Rnd Classic AK Yellow";
		picture = "\x\addons\a2_epoch_weapons_2\ui\m_ak74_ca.paa";
		model = "x\addons\a2_epoch_weapons_2\ak\a2_akyellow_mag_EPOCH.p3d";
		ammo = B_556x45_Ball;
		initSpeed = 650;		
		descriptionShort = "Mag for the AK Classic";
	};
*/
	class 10Rnd_303: CA_Magazine //TODO create asset for mag
	{
		scope = 2;
		displayName = "LeeEnfield Classic Ammo";
		//model = "x\addons\a2_epoch_weapons_2\leeenfield\fnFal_mag_epoch.p3d";		
		descriptionShort = "Caliber: .303<br />Rounds: 10<br />Used in: LeeEnfield Classic";
		picture="\x\addons\a2_epoch_weapons_2\ui\m_m24_ca.paa";
		count=10;
		ammo = B_303_Ball;
		initSpeed = 750;
		tracersEvery = 0;
		lastRoundsTracer = 1;		
	};	
	class 100Rnd_556x45_BetaCMag: CA_Magazine
	{
		scope = 2;
		displayName = "BetaCMag for MG36 Classic";
		ammo = "B_556x45_Ball";
		count = 100;
		initSpeed = 920;
		picture = "\x\addons\a2_epoch_weapons_2\ui\m_mg36_ca.paa";
		model = "x\addons\a2_epoch_weapons_2\g36\MG36_mag_epoch.p3d";
		type = "2 * 256";
		tracersEvery = 4;
		lastRoundsTracer = 4;
		descriptionShort = "Caliber: 5.56x45<br />Rounds: 100<br />Used in: MG36 Classic";
		mass = 15;
	};	
	class 10Rnd_762x54_SVD: CA_Magazine  //TODO create asset for mag
	{
		scope = 2;
		displayName = "10Rnd SVD Classic Mag";
		picture = "\x\addons\a2_epoch_weapons_2\ui\m_svd_ca.paa";
		count = 10;
		ammo = "B_762x51_Ball";
		initSpeed = 870;
		tracersEvery = 10;
		lastRoundsTracer = 3;		
		descriptionShort = "Caliber: 7.62x54<br />Rounds: 10<br />Used in: svd Classic";
	};
	class 10Rnd_9x39_SP5_VSS: CA_Magazine
	{
		scope = 2;
		displayName = "10Rnd VSS Classic Mag";
		ammo = "B_9x39_SP5";
		count = 10;
		initSpeed = 800;
		tracersEvery = 0;
		lastRoundsTracer = 1;		
		picture = "\x\addons\a2_epoch_weapons_2\ui\m_vssx10_ca.paa";
		descriptionShort = "Caliber: 9x39<br />Rounds: 10<br />Used in: vintorez Classic";
	};
/////////////////A2 Mags ends
/////////////////non lethal mags
	class NL_shot_bb_mag: CA_Magazine 
	{
		scope = 2;
		displayName = "BeanBag ShotGun Mag";
		picture = "\x\addons\a2_epoch_weapons_2\non_l\ui\boxoshells_mag_ca.paa";
		model = "\x\addons\a2_epoch_weapons_2\non_l\arms\magazines\boxoshells.p3d";
		ammo = shell_12g_bb;
		count = 8;
		initSpeed = 795;
		tracersEvery = 0;
		lastRoundsTracer = 2; /// tracers to track low ammo
		descriptionShort = "Beanbag filled with lead shot<br />Rounds: 8<br />Used in: Shotgun (Non Lethal)";
		magazineGroup[]	= {"shot_nl_group"};
	};
	class NL_pvc_bb_mag: CA_Magazine 
	{
		scope = 2;
		displayName = "BeanBag PVC Mag";
		picture = "\x\addons\a2_epoch_weapons_2\non_l\ui\beanbag_mag_ca.paa";
		model = "\x\addons\a2_epoch_weapons_2\non_l\arms\magazines\bbag_pipe_ammo.p3d";
		ammo = bbag_pvc;
		count = 8;
		initSpeed = 795;
		tracersEvery = 0;
		lastRoundsTracer = 2; /// tracers to track low ammo
		descriptionShort = "Beanbag filled with lead shot<br />Rounds: 8<br />Used in: Plastic Pipe Rifle (Non Lethal)";
		magazineGroup[]	= {"shot_nl_group"};
	};	
	class xbow_mag_bolt: CA_Magazine 
	{
		scope = 2;
		displayName = "Crossbow Bolts";
		model   = "\x\addons\a2_epoch_weapons_2\non_l\arms\crossbow\auto_xbow_mag.p3d";
		picture = "\x\addons\a2_epoch_weapons_2\non_l\ui\xbolt_ca.paa";
		ammo = xbow_bolt;
		count = 8;
		initSpeed = 795;
		tracersEvery = 1;
		lastRoundsTracer = 2; /// tracers to track low ammo
		descriptionShort = "Crossbow Bolts - Steel: high speed<br />Rounds: 8<br />Used in: Auto Crossbow";
		//magazineGroup[]	= {"shot_nl_group"};
	};	
	class xbow_mag_tranq: CA_Magazine 
	{
		scope = 2;
		displayName = "Crossbow Tranq Bolts";
		model   = "\x\addons\a2_epoch_weapons_2\non_l\arms\crossbow\auto_xbow_mag.p3d";
		picture = "\x\addons\a2_epoch_weapons_2\non_l\ui\xtranq_ca.paa";
		ammo = xbow_tranq;
		count = 8;
		initSpeed = 795;
		tracersEvery = 1;
		lastRoundsTracer = 2; /// tracers to track low ammo
		descriptionShort = "Crossbow Bolts - Tranquiliser tips<br />Rounds: 8<br />Used in: Auto Crossbow";
		//magazineGroup[]	= {"shot_nl_group"};
	};	
	class xbow_mag_exp: CA_Magazine 
	{
		scope = 2;
		displayName = "Crossbow EXP Bolts";
		model   = "\x\addons\a2_epoch_weapons_2\non_l\arms\crossbow\auto_xbow_mag.p3d";
		picture = "\x\addons\a2_epoch_weapons_2\non_l\ui\xexp_ca.paa";
		ammo = xbow_exp;
		count = 6;
		initSpeed = 795;
		tracersEvery = 1;
		lastRoundsTracer = 2; /// tracers to track low ammo
		descriptionShort = "Crossbow Bolts - Explosive tips<br />Rounds: 6<br />Used in: Auto Crossbow";
		magazineGroup[]	= {"xbow_group"};
	};	
	class tranq_dart_mag: CA_Magazine 
	{
		scope = 2;
		displayName = "Tranquiliser Pistol Magazine";
		model   = "\x\addons\a2_epoch_weapons_2\non_l\arms\tranq_pistol\tranq_dart_mag.p3d";
		picture = "\x\addons\a2_epoch_weapons_2\non_l\arms\tranq_pistol\data\UI\tranq_dart_icon_ca.paa";
		ammo = xbow_tranq;
		count =8;
		initSpeed = 795;
		tracersEvery = 1;
		lastRoundsTracer = 2; /// tracers to track low ammo
		descriptionShort = "Tranquilizer Pistol Ammo<br />Rounds: 8<br />Used in: Tranq Pistol";
		//magazineGroup[]    = {};
	};  
	

/////////////////non lethal mags end
    class ItemHotwire : CA_Magazine
    {
        author = "Sequisha";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_hotwire_ca.paa";
        displayname = "$STR_EPOCH_HotwireKit";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\hotwire.p3d";
        descriptionShort = "$STR_EPOCH_Usedtohackopendoorlocks";
        count = 1;
        mass = 50;
    };
    class ItemKeyKit : CA_Magazine
    {
        author = "Sequisha";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_keykit_ca.paa";
        displayname = "$STR_EPOCH_KeyMakersKit";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\keykit.p3d";
        descriptionShort = "$STR_EPOCH_Usedtocraftduplicatekeys";
        count = 1;
        mass = 2;
    };
    class ItemBarrelF : CA_Magazine
    {
        author = "Sequisha";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_oil_drum_model_ca.paa";
        displayname = "$STR_EPOCH_FuelBarrelFull";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\oil_drum_model.p3d";
        descriptionShort = "$STR_EPOCH_55gallonfuelbarrel";
        count = 1;
        mass = 250;
    };
    class ItemBarrelE : CA_Magazine
    {
        author = "Sequisha";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_oildrum_e_CA.paa";
        displayname = "$STR_EPOCH_FuelBarrelEmpty";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\oil_drum_model.p3d";
        descriptionShort = "$STR_EPOCH_Empty55gallonfuelbarrel";
        count = 1;
        mass = 25;
    };
    class ItemPipe : CA_Magazine
    {
        author = "Sequisha";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_pipe_CA.paa";
        displayname = "$STR_EPOCH_Pipes";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\pipe.p3d";
        descriptionShort = "$STR_EPOCH_Smallpileofmetalpipes";
        count = 1;
        mass = 15;
    };
    class ItemKey : CA_Magazine
    {
        author = "Sequisha";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_key_CA.paa";
        displayname = "$STR_EPOCH_Key";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\key.p3d";
        descriptionShort = "$STR_EPOCH_Keyusedinalock";
        count = 1;
        mass = 1;
    };
    class ItemKeyBlue : ItemKey
    {
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_key_CA_blue.paa";
        displayname = "$STR_EPOCH_KeyBlue";
        model = "\x\addons\a3_epoch_assets_1\models\key_blue.p3d";
    };
    class ItemKeyGreen : ItemKey
    {
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_key_CA_green.paa";
        displayname = "$STR_EPOCH_KeyGreen";
        model = "\x\addons\a3_epoch_assets_1\models\key_green.p3d";
    };
    class ItemKeyRed : ItemKey
    {
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_key_CA_red.paa";
        displayname = "$STR_EPOCH_KeyRed";
        model = "\x\addons\a3_epoch_assets_1\models\key_red.p3d";
    };
    class ItemKeyYellow : ItemKey
    {
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_key_CA_yellow.paa";
        displayname = "$STR_EPOCH_KeyYellow";
        model = "\x\addons\a3_epoch_assets_1\models\key_yellow.p3d";
    };
    class ItemDoc1 : CA_Magazine
    {
        author = "Sequisha";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_child1_ca.paa";
        displayname = "$STR_EPOCH_Book";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\doc_child1.p3d";
        descriptionShort = "$STR_EPOCH_Book";
        count = 1;
        mass = 1;
    };
    class ItemDoc2 : ItemDoc1
    {
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_child2_ca.paa";
        displayname = "$STR_EPOCH_Book";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\doc_child2.p3d";
    };
    class ItemDoc3 : ItemDoc1
    {
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_deaths_ca.paa";
        displayname = "$STR_EPOCH_Book";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\doc_deaths.p3d";
    };
    class ItemDoc4 : ItemDoc1
    {
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_doc_generic_ca.paa";
        displayname = "$STR_EPOCH_Book";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\doc_generic.p3d";
    };
    class ItemDoc5 : ItemDoc1
    {
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_doc_letter_ca.paa";
        displayname = "$STR_EPOCH_Letter";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\doc_letter.p3d";
    };
    class ItemDoc6 : ItemDoc1
    {
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_doc_ramp_ca.paa";
        displayname = "$STR_EPOCH_Book";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\doc_ramp.p3d";
    };
    class ItemDoc7 : ItemDoc1
    {
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_child2_ca.paa";
        displayname = "$STR_EPOCH_Letter";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\doc_trashy1.p3d";
    };
    class ItemDoc8 : ItemDoc1
    {
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_child2_ca.paa";
        displayname = "$STR_EPOCH_Letter";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\doc_trashy2.p3d";
    };
    class ItemVehDoc1 : ItemDoc1
    {
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_docup1_ca.paa";
        displayname = "$STR_EPOCH_VehicleManualI";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\doc_Up1.p3d";
    };
    class ItemVehDoc2 : ItemDoc1
    {
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_docup2_ca.paa";
        displayname = "$STR_EPOCH_VehicleManualII";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\doc_Up2.p3d";
    };
    class ItemVehDoc3 : ItemDoc1
    {
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_docup3_ca.paa";
        displayname = "$STR_EPOCH_VehicleManualIII";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\doc_Up3.p3d";
    };
    class ItemVehDoc4 : ItemDoc1
    {
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_docup4_ca.paa";
        displayname = "$STR_EPOCH_VehicleManualIV";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\doc_Up4.p3d";
    };
    class ItemBulb : CA_Magazine
    {
        author = "Sequisha";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_bulb_CA.paa";
        displayname = "$STR_EPOCH_LightBulb";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\bulb.p3d";
        descriptionShort = "$STR_EPOCH_LightBulbinfactorypackageGivesofflightwhenpowered";
        count = 1;
        mass = 1;
    };
    class ItemBurlap : CA_Magazine
    {
        author = "Sequisha";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_burlap_ca.paa";
        displayname = "$STR_EPOCH_Burlap";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\burlap.p3d";
        descriptionShort = "$STR_EPOCH_Wovenfabricmadefromplantfibers";
        count = 1;
        mass = 1;
    };
    class ItemBriefcaseE : CA_Magazine
    {
        author = "Sequisha";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_briefcase_E_CA.paa";
        displayname = "$STR_EPOCH_EmptyBriefcase";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\briefcase.p3d";
        descriptionShort = "$STR_EPOCH_Arectangularcontainergoodforcarryingbooksandpapers";
        count = 1;
        mass = 1;
    };
    class ItemBriefcaseGold100oz : CA_Magazine
    {
        author = "Sequisha";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_briefcase_100oz_CA.paa";
        displayname = "$STR_EPOCH_FullBriefcaseGold";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\briefcase.p3d";
        descriptionShort = "$STR_EPOCH_Briefcasethatcontainsten10oz100ozGoldBars";
        count = 1;
        worth = 10000;
        type = 256;
        mass = 100;
    };
    class ItemBriefcaseSilver100oz : CA_Magazine
	{
		author = "DirtySanchez";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_silvercase_100oz_CA.paa";
        displayname = "$STR_EPOCH_FullBriefcaseSilver";
        scope = 2;
        model = "\x\addons\a3_epoch_community\models\briefcase_brown.p3d";
        descriptionShort = "$STR_EPOCH_Briefcasethatcontainsten10oz100ozSilverBars";
        count = 1;
		worth = 1000;
		type = 256;
        mass = 100;
	};
	class ItemAluminumBar : CA_Magazine
    {
        author = "Sequisha";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_alum_bar_CA.paa";
        displayname = "$STR_EPOCH_AluminumBar1oz";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\aluminum_bar.p3d";
        descriptionShort = "$STR_EPOCH_AluminumBar1oz";
        count = 1;
		worth = 5;
		type = 256;
        mass = 1;
    };
	class ItemAluminumBar10oz : CA_Magazine
    {
        author = "DirtySanchez";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_alum_bar_10oz_CA.paa";
        displayname = "$STR_EPOCH_AluminumBar10oz";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\aluminum_bar_10oz.p3d";
        descriptionShort = "$$STR_EPOCH_AluminumBar10oz";
        count = 1;
		worth = 50;
		type = 256;
        mass = 10;
    };
    class ItemCopperBar : CA_Magazine
    {
        author = "Sequisha";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_copper_bar_CA.paa";
        displayname = "$STR_EPOCH_CopperBar1oz";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\copper_bar.p3d";
        descriptionShort = "$STR_EPOCH_CopperBar1oz";
        count = 1;
		worth = 1;
		type = 256;
        mass = 1;
    };
	class ItemCopperBar10oz : CA_Magazine
    {
        author = "DirtySanchez";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_copper_bar_10oz_CA.paa";
        displayname = "$STR_EPOCH_CopperBar10oz";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\copper_bar_10oz.p3d";
        descriptionShort = "$STR_EPOCH_CopperBar10oz";
        count = 1;
		worth = 10;
		type = 256;
        mass = 10;
    };
    class ItemTinBar : CA_Magazine
    {
        author = "Sequisha";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_tin_bar_CA.paa";
        displayname = "$STR_EPOCH_TinBar1oz";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\tin_bar.p3d";
        descriptionShort = "$STR_EPOCH_TinBar1oz";
        count = 1;
		worth = 1;
		type = 256;
        mass = 1;
    };
    class ItemTinBar10oz : CA_Magazine
    {
        author = "Sequisha";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_tin_bar_10oz_CA.paa";
        displayname = "$STR_EPOCH_TinBar10oz";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\tin_bar_10oz.p3d";
        descriptionShort = "$STR_EPOCH_TinBar10oz";
        count = 1;
		worth = 10;
		type = 256;
        mass = 10;
    };
    class ItemPlywoodPack : CA_Magazine
    {
        author = "Sequisha";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_plywood_pack_CA.paa";
        displayname = "$STR_EPOCH_Plywood";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\plywood_pack.p3d";
        descriptionShort = "$STR_EPOCH_StackofPlywoodSheets";
        count = 1;
        mass = 1;
    };
    class ItemComboLock : CA_Magazine
    {
        author = "Sequisha";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_combolock_ca.paa";
        displayname = "$STR_EPOCH_CombinationLock";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\combo_lock_mag.p3d";
        descriptionShort = "$STR_EPOCH_CombinationLock";
        count = 1;
        mass = 1;
    };
    class Item_PackedBag_base : CA_Magazine
    {
        author = "Sequisha";
        picture = "\x\addons\a3_epoch_assets\textures\backpack\gear_packedBag_ca.paa";
        scope = 0;
        model = "\x\addons\a3_epoch_assets\models\PackedBag.p3d";
        count = 1;
    };
    class Item_AssaultPack_cbr : Item_PackedBag_base
    {
        displayName = "$STR_A3_B_AssaultPack_cbr0";
        scope = 2;
        descriptionShort = "$STR_EPOCH_PackedBackpack";
        count = 1;
        mass = 20;
    };
    class Item_AssaultPack_dgtl : Item_PackedBag_base
    {
        displayName = "$STR_A3_B_AssaultPack_dgtl0";
        scope = 2;
        descriptionShort = "$STR_EPOCH_PackedBackpack";
        mass = 20;
    };
    class Item_AssaultPack_khk : Item_PackedBag_base
    {
        displayName = "$STR_A3_B_AssaultPack_khk0";
        scope = 2;
        descriptionShort = "$STR_EPOCH_PackedBackpack";
        count = 1;
        mass = 20;
    };
    class Item_AssaultPack_mcamo : Item_PackedBag_base
    {
        displayName = "$STR_A3_B_AssaultPack_mcamo0";
        scope = 2;
        descriptionShort = "$STR_EPOCH_PackedBackpack";
        count = 1;
        mass = 20;
    };
    class Item_AssaultPack_ocamo : Item_PackedBag_base
    {
        displayName = "$STR_A3_B_AssaultPack_ocamo0";
        scope = 2;
        descriptionShort = "$STR_EPOCH_PackedBackpack";
        count = 1;
        mass = 20;
    };
    class Item_AssaultPack_rgr : Item_PackedBag_base
    {
        displayName = "$STR_A3_B_AssaultPack_rgr0";
        scope = 2;
        descriptionShort = "$STR_EPOCH_PackedBackpack";
        count = 1;
        mass = 20;
    };
    class Item_AssaultPack_sgg : Item_PackedBag_base
    {
        displayName = "$STR_A3_B_AssaultPack_sgg0";
        scope = 2;
        descriptionShort = "$STR_EPOCH_PackedBackpack";
        count = 1;
        mass = 20;
    };
    class Item_AssaultPack_blk : Item_PackedBag_base
    {
        displayName = "$STR_A3_B_AssaultPack_blk0";
        scope = 2;
        descriptionShort = "$STR_EPOCH_PackedBackpack";
        count = 1;
        mass = 20;
    };
    class Item_Carryall_cbr : Item_PackedBag_base
    {
        displayName = "$STR_A3_B_Carryall_cbr0";
        scope = 2;
        descriptionShort = "$STR_EPOCH_PackedBackpack";
        count = 1;
        mass = 60;
    };
    class Item_Carryall_khk : Item_PackedBag_base
    {
        displayName = "$STR_A3_B_Carryall_khk0";
        scope = 2;
        descriptionShort = "$STR_EPOCH_PackedBackpack";
        count = 1;
        mass = 60;
    };
    class Item_Carryall_mcamo : Item_PackedBag_base
    {
        displayName = "$STR_A3_B_Carryall_mcamo0";
        scope = 2;
        descriptionShort = "$STR_EPOCH_PackedBackpack";
        count = 1;
        mass = 60;
    };
    class Item_Carryall_ocamo : Item_PackedBag_base
    {
        displayName = "$STR_A3_B_Carryall_ocamo0";
        scope = 2;
        descriptionShort = "$STR_EPOCH_PackedBackpack";
        count = 1;
        mass = 60;
    };
    class Item_Carryall_oli : Item_PackedBag_base
    {
        displayName = "$STR_A3_B_Carryall_oli0";
        scope = 2;
        descriptionShort = "$STR_EPOCH_PackedBackpack";
        count = 1;
        mass = 60;
    };
    class Item_Carryall_oucamo : Item_PackedBag_base
    {
        displayName = "$STR_A3_B_Carryall_oucamo0";
        scope = 2;
        descriptionShort = "$STR_EPOCH_PackedBackpack";
        count = 1;
        mass = 60;
    };
    class Item_FieldPack_blk : Item_PackedBag_base
    {
        displayName = "$STR_A3_B_FieldPack_blk0";
        scope = 2;
        descriptionShort = "$STR_EPOCH_PackedBackpack";
        count = 1;
        mass = 30;
    };
    class Item_FieldPack_cbr : Item_PackedBag_base
    {
        displayName = "$STR_A3_B_FieldPack_cbr0";
        scope = 2;
        descriptionShort = "$STR_EPOCH_PackedBackpack";
        count = 1;
        mass = 30;
    };
    class Item_FieldPack_khk : Item_PackedBag_base
    {
        displayName = "$STR_A3_B_FieldPack_khk0";
        scope = 2;
        descriptionShort = "$STR_EPOCH_PackedBackpack";
        count = 1;
        mass = 30;
    };
    class Item_FieldPack_ocamo : Item_PackedBag_base
    {
        displayName = "$STR_A3_B_FieldPack_ocamo0";
        scope = 2;
        descriptionShort = "$STR_EPOCH_PackedBackpack";
        count = 1;
        mass = 30;
    };
    class Item_FieldPack_oli : Item_PackedBag_base
    {
        displayName = "$STR_A3_B_FieldPack_oli0";
        scope = 2;
        descriptionShort = "$STR_EPOCH_PackedBackpack";
        count = 1;
        mass = 30;
    };
    class Item_FieldPack_oucamo : Item_PackedBag_base
    {
        displayName = "$STR_A3_B_FieldPack_oucamo0";
        scope = 2;
        descriptionShort = "$STR_EPOCH_PackedBackpack";
        count = 1;
        mass = 30;
    };
    class Item_Kitbag_cbr : Item_PackedBag_base
    {
        displayName = "$STR_A3_B_Kitback_cbr0";
        scope = 2;
        descriptionShort = "$STR_EPOCH_PackedBackpack";
        count = 1;
        mass = 50;
    };
    class Item_Kitbag_mcamo : Item_PackedBag_base
    {
        displayName = "$STR_A3_B_Kitback_mcamo0";
        scope = 2;
        descriptionShort = "$STR_EPOCH_PackedBackpack";
        count = 1;
        mass = 50;
    };
    class Item_Kitbag_rgr : Item_PackedBag_base
    {
        displayName = "$STR_A3_B_KITHBACK_RGR";
        scope = 2;
        descriptionShort = "$STR_EPOCH_PackedBackpack";
        count = 1;
        mass = 50;
    };
    class Item_Kitbag_sgg : Item_PackedBag_base
    {
        displayName = "$STR_A3_B_Kitback_sgg0";
        scope = 2;
        descriptionShort = "$STR_EPOCH_PackedBackpack";
        count = 1;
        mass = 50;
    };
    class Item_TacticalPack_blk : Item_PackedBag_base
    {
        displayName = "$STR_A3_B_TacticalPack_blk0";
        scope = 2;
        descriptionShort = "$STR_EPOCH_PackedBackpack";
        count = 1;
        mass = 40;
    };
    class Item_TacticalPack_mcamo : Item_PackedBag_base
    {
        displayName = "$STR_A3_B_TacticalPack_mcamo0";
        scope = 2;
        descriptionShort = "$STR_EPOCH_PackedBackpack";
        count = 1;
        mass = 40;
    };
    class Item_TacticalPack_ocamo : Item_PackedBag_base
    {
        displayName = "$STR_A3_B_TacticalPack_ocamo0";
        scope = 2;
        descriptionShort = "$STR_EPOCH_PackedBackpack";
        count = 1;
        mass = 40;
    };
    class Item_TacticalPack_oli : Item_PackedBag_base
    {
        displayName = "$STR_A3_B_TacticalPack_oli0";
        scope = 2;
        descriptionShort = "$STR_EPOCH_PackedBackpack";
        count = 1;
        mass = 40;
    };
    class Item_TacticalPack_rgr : Item_PackedBag_base
    {
        displayName = "$STR_A3_B_TacticalPack_rgr0";
        scope = 2;
        descriptionShort = "$STR_EPOCH_PackedBackpack";
        count = 1;
        mass = 40;
    };
    class Item_smallbackpack_red : Item_PackedBag_base
    {
        displayName = "$STR_EPOCH_SmallBackpackRed";
        scope = 2;
        descriptionShort = "$STR_EPOCH_PackedBackpack";
        count = 1;
        mass = 25;
    };
    class Item_smallbackpack_green : Item_PackedBag_base
    {
        displayName = "$STR_EPOCH_SmallBackpackGreen";
        scope = 2;
        descriptionShort = "$STR_EPOCH_PackedBackpack";
        count = 1;
        mass = 25;
    };
    class Item_smallbackpack_teal : Item_PackedBag_base
    {
        displayName = "$STR_EPOCH_SmallBackpackTeal";
        scope = 2;
        descriptionShort = "$STR_EPOCH_PackedBackpack";
        count = 1;
        mass = 25;
    };
    class Item_smallbackpack_pink : Item_PackedBag_base
    {
        displayName = "$STR_EPOCH_SmallBackpackPink";
        scope = 2;
        descriptionShort = "$STR_EPOCH_PackedBackpack";
        count = 1;
        mass = 25;
    };
    class honey_epoch : CA_Magazine
    {
        author = "Kiory";
        scope = 2;
        count = 1;
        type = 256;
        displayName = "$STR_EPOCH_Honey";
        model = "\x\addons\a3_epoch_assets_2\honey.p3d";
        picture = "\x\addons\a3_epoch_assets_2\gear\gear_honey_x_ca.paa";
        descriptionShort = "$STR_EPOCH_Probablycollectedsometimeago";
        mass = 1;
    };
    class water_epoch : CA_Magazine
    {
        author = "Kiory";
        scope = 2;
        count = 1;
        type = 256;
        displayName = "$STR_EPOCH_DirtyWater";
        model = "\x\addons\a3_epoch_assets_2\water_jar.p3d";
        picture = "\x\addons\a3_epoch_assets_2\gear\gear_dirtywater_x_ca.paa";
        descriptionShort = "$STR_EPOCH_Jarredwatermayormaynotcontainparasites";
        mass = 1;
    };
    class clean_water_epoch : CA_Magazine
    {
        author = "Kiory";
        scope = 2;
        count = 1;
        type = 256;
        displayName = "$STR_EPOCH_Water";
        model = "\x\addons\a3_epoch_assets_2\water_jar.p3d";
        picture = "\x\addons\a3_epoch_assets_2\gear\gear_water_x_ca.paa";
        descriptionShort = "$STR_EPOCH_Jarredwaterwasonceboiledunlikelytocontainparasites";
        mass = 1;
    };
    class emptyjar_epoch : CA_Magazine
    {
        author = "Kiory";
        scope = 2;
        count = 1;
        type = 256;
        displayName = "$STR_EPOCH_Emptyjar";
        model = "\x\addons\a3_epoch_assets_2\jar_empty.p3d";
        picture = "\x\addons\a3_epoch_assets_2\gear\gear_ejar_x_ca.paa";
        descriptionShort = "$STR_EPOCH_Couldbefilledwithmanythings";
        mass = 0.5;
    };
    class sardines_epoch : CA_Magazine
    {
        author = "Kiory";
        scope = 2;
        count = 1;
        type = 256;
        displayName = "$STR_EPOCH_Sardines";
        model = "\x\addons\a3_epoch_assets_2\sardines.p3d";
        picture = "\x\addons\a3_epoch_assets_2\gear\gear_sardines_x_ca.paa";
        descriptionShort = "$STR_EPOCH_Smallfishnobodylikesthem";
        mass = 1;
    };
    class meatballs_epoch : CA_Magazine
    {
        author = "Kiory";
        scope = 2;
        count = 1;
        type = 256;
        displayName = "$STR_EPOCH_Meatballs";
        model = "\x\addons\a3_epoch_assets_2\meatballs.p3d";
        picture = "\x\addons\a3_epoch_assets_2\gear\gear_meatballs_x_ca.paa";
        descriptionShort = "$STR_EPOCH_Warningwillmakeyoufat";
        mass = 1;
    };
    class scam_epoch : CA_Magazine
    {
        author = "Kiory";
        scope = 2;
        count = 1;
        type = 256;
        displayName = "$STR_EPOCH_Scam";
        model = "\x\addons\a3_epoch_assets_2\scamtin.p3d";
        picture = "\x\addons\a3_epoch_assets_2\gear\gear_scam_x_ca.paa";
        descriptionShort = "$STR_EPOCH_Wasgiventhenameduetofakemeat";
        mass = 1;
    };
    class sweetcorn_epoch : CA_Magazine
    {
        author = "Kiory";
        scope = 2;
        count = 1;
        type = 256;
        displayName = "$STR_EPOCH_Sweetcorn";
        model = "\x\addons\a3_epoch_assets_2\sweetcorn.p3d";
        picture = "\x\addons\a3_epoch_assets_2\gear\gear_sweetcorn_x_ca.paa";
        descriptionShort = "$STR_EPOCH_Cheapbrandstilltasty";
        mass = 1;
    };
    class jerrycan_epoch : CA_Magazine
    {
        author = "Kiory";
        scope = 2;
        count = 1;
        type = 256;
        displayName = "$STR_EPOCH_Jerrycan";
        model = "\x\addons\a3_epoch_assets_2\jerrycan.p3d";
        picture = "\x\addons\a3_epoch_assets_2\gear\gear_jerrycan_x_ca.paa";
        descriptionShort = "$STR_EPOCH_FullofFuel";
        mass = 14;
    };
    class jerrycanE_epoch : CA_Magazine
    {
        author = "Kiory";
        scope = 2;
        count = 1;
        type = 256;
        displayName = "$STR_EPOCH_JerrycanEmpty";
        model = "\x\addons\a3_epoch_assets_2\jerrycan.p3d";
        picture = "\x\addons\a3_epoch_assets_2\gear\gear_jerrycan_x_ca.paa";
        descriptionShort = "$STR_EPOCH_Trustworthyforgettingfuel";
        mass = 5;
    };
    class lighter_epoch : CA_Magazine
    {
        author = "Kiory";
        scope = 2;
        count = 25;
        type = 256;
        displayName = "$STR_EPOCH_Lighter";
        model = "\x\addons\a3_epoch_assets_2\lighter.p3d";
        picture = "\x\addons\a3_epoch_assets_2\gear\gear_lighter_x_ca.paa";
        descriptionShort = "$STR_EPOCH_AveryordinarylookinglighterBURNSTUFF";
        mass = 1;
    };
    class FAK : CA_Magazine
    {
        scope = 2;
        count = 1;
        type = "256";
        displayName = "$STR_A3_cfgWeapons_FirstAidKit0";
        picture = "\A3\Weapons_F\Items\data\UI\gear_FirstAidKit_CA.paa";
        model = "\A3\Weapons_F\Items\FirstAidkit";
        descriptionShort = "$STR_A3_cfgWeapons_FirstAidKit1";
        mass = 8;
    };
    class ItemLockbox : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        count = 1;
        type = 256;
        displayName = "$STR_EPOCH_Lockbox";
        model = "\x\addons\a3_epoch_assets_1\models\lockbox_mag.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_lockbox_CA.paa";
        descriptionShort = "$STR_EPOCH_Semisecurelockbox";
        mass = 5;
    };
    class ItemSafe : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        count = 1;
        type = 256;
        displayName = "$STR_EPOCH_Safe";
        model = "\x\addons\a3_epoch_assets_1\models\safe_onside.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_safe_CA.paa";
        descriptionShort = "$STR_EPOCH_SecureSafe";
        mass = 50;
    };
    class ItemSafe_s : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        count = 1;
        type = 256;
        displayName = "$STR_EPOCH_Safe";
        model = "\x\addons\a3_epoch_assets_1\models\safe_onside.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_safe_CA.paa";
        descriptionShort = "$STR_EPOCH_SecureSafe";
        mass = 50;
    };
    class ItemGunSafe : CA_Magazine
    {
        author = "Helion4";
        scope = 2;
        count = 1;
        type = 256;
        displayName = "$STR_EPOCH_Safe";
        model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\x\addons\a3_epoch_community\gunsafe\data\gunsafe_01_ca.paa";
        descriptionShort = "$STR_EPOCH_SecureSafe";
        mass = 50;
    };
    class ItemBioHazardBag : CA_Magazine
    {
        author = "vbgreen,vbawol";
        scope = 2;
        count = 1;
        displayName = "$STR_EPOCH_BioHazardBag";
        model = "\x\addons\a3_epoch_assets_1\models\zombie_parts_bag_v2.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_zparts_CA.paa";
        descriptionShort = "$STR_EPOCH_BioHazardBagDesc";
        type = 256;
        mass = 5;
    };
    class PartPlankPack : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        count = 1;
        type = 256;
        displayName = "$STR_EPOCH_LumberPack";
        model = "\x\addons\a3_epoch_assets_1\models\plank_pack.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_lumber_pack_CA.paa";
        descriptionShort = "$STR_EPOCH_Lumberinastack";
        mass = 6;
    };
    class CinderBlocks : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        count = 1;
        type = 256;
        displayName = "$STR_EPOCH_CinderBlocks";
        model = "\x\addons\a3_epoch_assets_1\models\cinder_stack.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\epuip_cinder_blocks_CA.paa";
        descriptionShort = "$STR_EPOCH_Stackofninecinderblocks";
        mass = 75;
    };
    class MortarBucket : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        count = 1;
        type = 256;
        displayName = "$STR_EPOCH_BucketofMortar";
        model = "\x\addons\a3_epoch_assets_1\models\mortar.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_mortar_CA.paa";
        descriptionShort = "$STR_EPOCH_Premixedmasticadhesivethatwillbondtoconcreteblock";
        mass = 15;
    };
    class ItemKiloHemp : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        count = 1;
        displayName = "$STR_EPOCH_KiloofHemp";
        descriptionShort = "$STR_EPOCH_KiloofHemp";
        model = "\x\addons\a3_epoch_assets_1\models\kilohemp.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_kilohemp_CA.paa";
        type = 256;
        mass = 1;
    };
    class ItemSodaAlpineDude : 1Rnd_Soda
    {
        scope = 2;
        author = "vbgreen";
        picture = "\x\addons\a3_epoch_assets_1\pictures\soda_alpinedude_ca.paa";
        displayname = "$STR_EPOCH_AlpineDudeSoda";
        model = "\x\addons\a3_epoch_assets_1\models\soda_alpine.p3d";
        descriptionShort = "$STR_EPOCH_Dothedude";
        count = 1;
        mass = 2;
    };
    class ItemSodaRbull : 1Rnd_Soda
    {
        scope = 2;
        author = "vbgreen";
        displayName = "$STR_EPOCH_RedGull";
        descriptionShort = "$STR_EPOCH_RedGullSoda";
        model = "\x\addons\a3_epoch_assets_1\models\soda_redbull.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_soda_rbull_CA.paa";
        mass = 1;
    };
    class ItemSodaOrangeSherbet : 1Rnd_Soda
    {
        scope = 2;
        author = "Sequisha";
        displayName = "$STR_EPOCH_OrangeSherbet";
        descriptionShort = "$STR_EPOCH_OrangeSherbetSoda";
        model = "\x\addons\a3_epoch_assets_1\models\soda_sherbet.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\soda_orangesherbet_ca.paa";
        mass = 1;
    };
    class ItemSodaPurple : 1Rnd_Soda
    {
        scope = 2;
        author = "vbgreen";
        displayName = "$STR_EPOCH_PurpleNurple";
        descriptionShort = "$STR_EPOCH_PurpleNurpleSoda";
        model = "\x\addons\a3_epoch_assets_1\models\soda_purple.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\soda_purple_equip_ca.paa";
        mass = 1;
    };
    class ItemSodaMocha : 1Rnd_Soda
    {
        scope = 2;
        author = "vbgreen";
        displayName = "$STR_EPOCH_MochaCola";
        descriptionShort = "$STR_EPOCH_MochaColaSoda";
        model = "\x\addons\a3_epoch_assets_1\models\soda_mocha.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\soda_mocha_equip_ca.paa";
        mass = 1;
    };
    class ItemSodaBurst : 1Rnd_Soda
    {
        scope = 2;
        author = "vbgreen";
        displayName = "$STR_EPOCH_BurstKoke";
        descriptionShort = "$STR_EPOCH_BurstKokeSoda";
        model = "\x\addons\a3_epoch_assets_1\models\soda_burst.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\soda_burst_equip_ca.paa";
        mass = 1;
    };
    class ItemTrout : 1Rnd_Food
    {
        author = "Sequisha";
        scope = 2;
        displayName = "$STR_EPOCH_RainbowTrout";
        descriptionShort = "$STR_EPOCH_RainbowTroutAsmallfishthatcanbefairlyeasytocatch";
        model = "\x\addons\a3_epoch_assets_1\models\trout.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_rainbowtrout_CA.paa";
        mass = 5;
    };
    class ItemSeaBass : 1Rnd_Food
    {
        author = "Sequisha";
        scope = 2;
        displayName = "$STR_EPOCH_SeaBass";
        descriptionShort = "$STR_EPOCH_SeaBassAmediumsizedfishthatisfairlyrare";
        model = "\x\addons\a3_epoch_assets_1\models\seabass.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_seabass_CA.paa";
        mass = 10;
    };
    class ItemTuna : 1Rnd_Food
    {
        author = "Sequisha";
        scope = 2;
        displayName = "$STR_EPOCH_BlueFinTuna";
        descriptionShort = "$STR_EPOCH_BlueFinTunaAverylargeandhardtocatchfishSushianyone";
        model = "\x\addons\a3_epoch_assets_1\models\tuna.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_tuna_CA.paa";
        mass = 50;
    };
    class ItemTroutCooked : 1Rnd_Food
    {
        author = "Sequisha";
        scope = 2;
        displayName = "$STR_EPOCH_RainbowTroutCooked";
        descriptionShort = "$STR_EPOCH_RainbowTroutAsmallfishthatcanbefairlyeasytocatch";
        model = "\x\addons\a3_epoch_assets_1\models\trout_cooked.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_trout_cooked_CA.paa";
        mass = 5;
    };
    class ItemSeaBassCooked : 1Rnd_Food
    {
        author = "Sequisha";
        scope = 2;
        displayName = "$STR_EPOCH_SeaBassCooked";
        descriptionShort = "$STR_EPOCH_SeaBassAmediumsizedfishthatisfairlyrare";
        model = "\x\addons\a3_epoch_assets_1\models\seabass_cooked.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_seabass_cooked_CA.paa";
        mass = 10;
    };
    class ItemTunaCooked : 1Rnd_Food
    {
        author = "Sequisha";
        scope = 2;
        displayName = "$STR_EPOCH_BlueFinTunaCooked";
        descriptionShort = "$STR_EPOCH_BlueFinTunaAverylargeandhardtocatchfishSushianyone";
        model = "\x\addons\a3_epoch_assets_1\models\tuna_cooked.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_tuna_cooked_CA.paa";
        mass = 50;
    };
    class FoodBioMeat : 1Rnd_Food
    {
        author = "vbgreen,Sequisha";
        scope = 2;
        displayName = "$STR_EPOCH_BioMeat";
        model = "\x\addons\a3_epoch_assets_1\models\biomeat_can.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_biomeat_CA.paa";
        descriptionShort = "$STR_EPOCH_BioMeatAverygoodsourceofnutritionandaveryhighchanceofinfect96";
    };
    class FoodMeeps : 1Rnd_Food
    {
        author = "Sequisha";
        scope = 2;
        displayName = "$STR_EPOCH_MeepsCandy";
        model = "\x\addons\a3_epoch_assets\models\meeps.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\candy\equip_meeps_ca.paa";
        descriptionShort = "$STR_EPOCH_Pumpkinmarshmallowcandy";
    };
    class FoodSnooter : 1Rnd_Food
    {
        author = "Sequisha";
        scope = 2;
        displayName = "$STR_EPOCH_SnootersCandy";
        model = "\x\addons\a3_epoch_assets\models\snooter.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\candy\equip_snooters_ca.paa";
        descriptionShort = "$STR_EPOCH_NothungrygrabaSnooters";
    };
    class FoodWalkNSons : 1Rnd_Soda
    {
        author = "Sequisha";
        scope = 2;
        displayName = "$STR_EPOCH_WalkNSonsSoda";
        model = "\x\addons\a3_epoch_assets\models\walkinson.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\candy\equip_walkinson_ca.paa";
        descriptionShort = "$STR_EPOCH_StuckwalkingrabaWalkNSonsSoda";
    };
    class ItemTopaz : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        displayName = "$STR_EPOCH_Topaz";
        model = "\x\addons\a3_epoch_assets_1\models\topaz.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_topaz_CA.paa";
        count = 1;
        type = "256";
        descriptionShort = "$STR_EPOCH_Topaz";
        mass = 1;
    };
    class ItemOnyx : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        displayName = "$STR_EPOCH_Onyx";
        model = "\x\addons\a3_epoch_assets_1\models\obsidian.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_obsidian_CA.paa";
        count = 1;
        type = "256";
        descriptionShort = "$STR_EPOCH_Onyx";
        mass = 1;
    };
    class ItemSapphire : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        displayName = "$STR_EPOCH_Sapphire";
        model = "\x\addons\a3_epoch_assets_1\models\sapphire.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_sapphire_CA.paa";
        count = 1;
        type = "256";
        descriptionShort = "$STR_EPOCH_Sapphire";
        mass = 1;
    };
    class ItemAmethyst : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        displayName = "$STR_EPOCH_Amethyst";
        model = "\x\addons\a3_epoch_assets_1\models\amethyst.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_amethyst_CA.paa";
        count = 1;
        type = "256";
        descriptionShort = "$STR_EPOCH_Amethyst";
        mass = 1;
    };
    class ItemEmerald : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        displayName = "$STR_EPOCH_Emerald";
        model = "\x\addons\a3_epoch_assets_1\models\emerald.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_emerald_CA.paa";
        count = 1;
        type = "256";
        descriptionShort = "$STR_EPOCH_Emerald";
        mass = 1;
    };
    class ItemCitrine : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        displayName = "$STR_EPOCH_Citrine";
        model = "\x\addons\a3_epoch_assets_1\models\citrine.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_citrine_CA.paa";
        count = 1;
        type = "256";
        descriptionShort = "$STR_EPOCH_Citrine";
        mass = 1;
    };
    class ItemRuby : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        displayName = "$STR_EPOCH_Ruby";
        model = "\x\addons\a3_epoch_assets_1\models\ruby.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_ruby_CA.paa";
        count = 1;
        type = "256";
        descriptionShort = "$STR_EPOCH_Ruby";
        mass = 1;
    };
    class ItemQuartz : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        displayName = "$STR_EPOCH_Quartz";
        model = "\x\addons\a3_epoch_assets\models\quartz.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\gem\equip_quartz_CA.paa";
        count = 1;
        type = "256";
        descriptionShort = "$STR_EPOCH_Quartz";
        mass = 1;
    };
    class ItemJade : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        displayName = "$STR_EPOCH_Jade";
        model = "\x\addons\a3_epoch_assets\models\jade.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\gem\equip_jade_CA.paa";
        count = 1;
        type = "256";
        descriptionShort = "$STR_EPOCH_Jade";
        mass = 1;
    };
    class ItemGarnet : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        displayName = "$STR_EPOCH_Garnet";
        model = "\x\addons\a3_epoch_assets\models\garnet.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\gem\equip_garnet_CA.paa";
        count = 1;
        type = "256";
        descriptionShort = "$STR_EPOCH_Garnet";
        mass = 1;
    };
    class JackKit : CA_Magazine
    {
        author = "Sequisha";
        model = "\x\addons\a3_epoch_assets\models\jack.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\kits\equip_jack_ca.paa";
        displayName = "$STR_EPOCH_Jack";
        scope = 2;
        descriptionShort = "$STR_EPOCH_Jack";
        count = 1;
        mass = 20;
    };
    class TacticalBacon : CA_Magazine
    {
        author = "$STR_A3_Bohemia_Interactive";
        scope = 2;
        displayName = "$STR_A3_cfgVehicles_Land_TacticalBacon_F0";
        model = "\A3\Structures_F\Items\Food\TacticalBacon_F.p3d";
        picture = "\x\addons\a3_epoch_assets_3\CfgMagazines\Bacon\equip_TacticalBacon_ca.paa";
        count = 1;
        type = "256";
        descriptionShort = "$STR_EPOCH_ContainsmmmBacon";
        mass = 1;
    };
    class ItemCoolerE : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        displayName = "$STR_EPOCH_FoodCoolerempty";
        model = "\x\addons\a3_epoch_assets\models\cooler.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\cooler\gear_cooler_ca.paa";
        count = 1;
        type = "256";
        descriptionShort = "$STR_EPOCH_SealaMealitscoldinhere";
        mass = 1;
    };
    class ItemCooler0 : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        displayName = "$STR_EPOCH_FoodCooler";
        model = "\x\addons\a3_epoch_assets\models\cooler.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\cooler\gear_cooler_ca.paa";
        count = 1;
        type = "256";
        descriptionShort = "$STR_EPOCH_ContainsCookedSnakeMeat";
        mass = 1;
    };
    class ItemCooler1 : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        displayName = "$STR_EPOCH_FoodCooler";
        model = "\x\addons\a3_epoch_assets\models\cooler.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\cooler\gear_cooler_ca.paa";
        count = 1;
        type = "256";
        descriptionShort = "$STR_EPOCH_ContainsCookedRabbitMeat";
        mass = 1;
    };
    class ItemCooler2 : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        displayName = "$STR_EPOCH_FoodCooler";
        model = "\x\addons\a3_epoch_assets\models\cooler.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\cooler\gear_cooler_ca.paa";
        count = 1;
        type = "256";
        descriptionShort = "$STR_EPOCH_ContainsCookedChicken";
        mass = 1;
    };
    class ItemCooler3 : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        displayName = "$STR_EPOCH_FoodCooler";
        model = "\x\addons\a3_epoch_assets\models\cooler.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\cooler\gear_cooler_ca.paa";
        count = 1;
        type = "256";
        descriptionShort = "$STR_EPOCH_ContainsCookedGoatLeg";
        mass = 1;
    };
    class ItemCooler4 : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        displayName = "$STR_EPOCH_FoodCooler";
        model = "\x\addons\a3_epoch_assets\models\cooler.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\cooler\gear_cooler_ca.paa";
        count = 1;
        type = "256";
        descriptionShort = "$STR_EPOCH_ContainsCookedSheepLeg";
        mass = 1;
    };
    class ItemMixOil : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        displayName = "$STR_EPOCH_2StrokeEngineOil";
        model = "\x\addons\a3_epoch_assets_1\models\oilmix.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_oilmix_CA.paa";
        count = 1;
        type = "256";
        descriptionShort = "$STR_EPOCH_2StrokeEngineOil";
        mass = 1;
    };
    class ItemDocument : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        count = 1;
        type = 256;
        displayName = "$STR_EPOCH_Document";
        model = "\x\addons\a3_epoch_assets_1\models\doc_generic.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_doc_generic_ca.paa";
        descriptionShort = "$STR_EPOCH_Unknowndocument";
        mass = 1;
    };
    class ItemDocumentMission : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        count = 1;
        type = 256;
        displayName = "$STR_EPOCH_MissionDocument";
        model = "\x\addons\a3_epoch_assets_1\models\doc_generic.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_doc_generic_ca.paa";
        descriptionShort = "$STR_EPOCH_AveryimportantmessageEyesOnly";
        mass = 1;
    };
    class ItemSilverBar : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        count = 1;
        worth = 10;
        type = 256;
        displayName = "$STR_EPOCH_Silver";
        model = "\x\addons\a3_epoch_assets_1\models\ItemSilverBar1oz.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_silver_bar_CA.paa";
        descriptionShort = "$STR_EPOCH_SilverBar";
        mass = 1;
    };
	class ItemSilverBar2oz : CA_Magazine
    {
        author = "DirtySanchez";
        scope = 2;
        count = 1;
        worth = 20;
        type = 256;
        displayName = "$STR_EPOCH_2ozSilver";
        model = "\x\addons\a3_epoch_assets_1\models\ItemSilverBar2oz.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_Silver_bar_2oz_CA.paa";
        descriptionShort = "$STR_EPOCH_2x1ozSilverBar";
        mass = 2;
    };
	class ItemSilverBar3oz : CA_Magazine
    {
        author = "DirtySanchez";
        scope = 2;
        count = 1;
        worth = 30;
        type = 256;
        displayName = "$STR_EPOCH_3ozSilver";
        model = "\x\addons\a3_epoch_assets_1\models\ItemSilverBar3oz.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_Silver_bar_3oz_CA.paa";
        descriptionShort = "$STR_EPOCH_3x1ozSilverBar";
        mass = 3;
    };
	class ItemSilverBar4oz : CA_Magazine
    {
        author = "DirtySanchez";
        scope = 2;
        count = 1;
        worth = 40;
        type = 256;
        displayName = "$STR_EPOCH_4ozSilver";
        model = "\x\addons\a3_epoch_assets_1\models\ItemSilverBar4oz.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_Silver_bar_4oz_CA.paa";
        descriptionShort = "$STR_EPOCH_4x1ozSilverBar";
        mass = 4;
    };
	class ItemSilverBar5oz : CA_Magazine
    {
        author = "DirtySanchez";
        scope = 2;
        count = 1;
        worth = 50;
        type = 256;
        displayName = "$STR_EPOCH_5ozSilver";
        model = "\x\addons\a3_epoch_assets_1\models\ItemSilverBar5oz.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_Silver_bar_5oz_CA.paa";
        descriptionShort = "$STR_EPOCH_5x1ozSilverBar";
        mass = 5;
    };
	class ItemSilverBar6oz : CA_Magazine
    {
        author = "DirtySanchez";
        scope = 2;
        count = 1;
        worth = 60;
        type = 256;
        displayName = "$STR_EPOCH_6ozSilver";
        model = "\x\addons\a3_epoch_assets_1\models\ItemSilverBar6oz.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_Silver_bar_6oz_CA.paa";
        descriptionShort = "$STR_EPOCH_6x1ozSilverBar";
        mass = 6;
    };
	class ItemSilverBar7oz : CA_Magazine
    {
        author = "DirtySanchez";
        scope = 2;
        count = 1;
        worth = 70;
        type = 256;
        displayName = "$STR_EPOCH_7ozSilver";
        model = "\x\addons\a3_epoch_assets_1\models\ItemSilverBar7oz.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_Silver_bar_7oz_CA.paa";
        descriptionShort = "$STR_EPOCH_7x1ozSilverBar";
        mass = 7;
    };
	class ItemSilverBar8oz : CA_Magazine
    {
        author = "DirtySanchez";
        scope = 2;
        count = 1;
        worth = 80;
        type = 256;
        displayName = "$STR_EPOCH_8ozSilver";
        model = "\x\addons\a3_epoch_assets_1\models\ItemSilverBar8oz.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_Silver_bar_8oz_CA.paa";
        descriptionShort = "$STR_EPOCH_8x1ozSilverBar";
        mass = 8;
    };
	class ItemSilverBar9oz : CA_Magazine
    {
        author = "DirtySanchez";
        scope = 2;
        count = 1;
        worth = 90;
        type = 256;
        displayName = "$STR_EPOCH_9ozSilver";
        model = "\x\addons\a3_epoch_assets_1\models\ItemSilverBar9oz.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_Silver_bar_9oz_CA.paa";
        descriptionShort = "$STR_EPOCH_9x1ozSilverBar";
        mass = 9;
    };
	class ItemSilverBar10oz : CA_Magazine
    {
        author = "DirtySanchez";
        scope = 2;
        count = 1;
        worth = 100;
        type = 256;
        displayName = "$STR_EPOCH_10ozSilver";
        model = "\x\addons\a3_epoch_assets_1\models\ItemSilverBar10oz.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_silver_bar_10oz_CA.paa";
        descriptionShort = "$STR_EPOCH_10x1ozSilverBar";
        mass = 10;
    };
    class ItemGoldBar : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        count = 1;
        worth = 100;
        type = 256;
        displayName = "$STR_EPOCH_Gold";
        model = "\x\addons\a3_epoch_assets_1\models\ItemGoldBar1oz.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_gold_bar_CA.paa";
        descriptionShort = "$STR_EPOCH_GoldBar";
        mass = 1;
    };
    class ItemGoldBar2oz : CA_Magazine
    {
        author = "DirtySanchez";
        scope = 2;
        count = 1;
        worth = 200;
        type = 256;
        displayName = "$STR_EPOCH_2ozGold";
        model = "\x\addons\a3_epoch_assets_1\models\ItemGoldBar2oz.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_gold_bar_2oz_CA.paa";
        descriptionShort = "$STR_EPOCH_2x1ozGoldBar";
        mass = 2;
    };
	class ItemGoldBar3oz : CA_Magazine
    {
        author = "DirtySanchez";
        scope = 2;
        count = 1;
        worth = 300;
        type = 256;
        displayName = "$STR_EPOCH_3ozGold";
        model = "\x\addons\a3_epoch_assets_1\models\ItemGoldBar3oz.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_gold_bar_3oz_CA.paa";
        descriptionShort = "$STR_EPOCH_3x1ozGoldBar";
        mass = 3;
    };
	class ItemGoldBar4oz : CA_Magazine
    {
        author = "DirtySanchez";
        scope = 2;
        count = 1;
        worth = 400;
        type = 256;
        displayName = "$STR_EPOCH_4ozGold";
        model = "\x\addons\a3_epoch_assets_1\models\ItemGoldBar4oz.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_gold_bar_4oz_CA.paa";
        descriptionShort = "$STR_EPOCH_4x1ozGoldBar";
        mass = 4;
    };
	class ItemGoldBar5oz : CA_Magazine
    {
        author = "DirtySanchez";
        scope = 2;
        count = 1;
        worth = 500;
        type = 256;
        displayName = "$STR_EPOCH_5ozGold";
        model = "\x\addons\a3_epoch_assets_1\models\ItemGoldBar5oz.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_gold_bar_5oz_CA.paa";
        descriptionShort = "$STR_EPOCH_5x1ozGoldBar";
        mass = 5;
    };
	class ItemGoldBar6oz : CA_Magazine
    {
        author = "DirtySanchez";
        scope = 2;
        count = 1;
        worth = 600;
        type = 256;
        displayName = "$STR_EPOCH_6ozGold";
        model = "\x\addons\a3_epoch_assets_1\models\ItemGoldBar6oz.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_gold_bar_6oz_CA.paa";
        descriptionShort = "$STR_EPOCH_6x1ozGoldBar";
        mass = 6;
    };
	class ItemGoldBar7oz : CA_Magazine
    {
        author = "DirtySanchez";
        scope = 2;
        count = 1;
        worth = 700;
        type = 256;
        displayName = "$STR_EPOCH_7ozGold";
        model = "\x\addons\a3_epoch_assets_1\models\ItemGoldBar7oz.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_gold_bar_7oz_CA.paa";
        descriptionShort = "$STR_EPOCH_7x1ozGoldBar";
        mass = 7;
    };
	class ItemGoldBar8oz : CA_Magazine
    {
        author = "DirtySanchez";
        scope = 2;
        count = 1;
        worth = 800;
        type = 256;
        displayName = "$STR_EPOCH_8ozGold";
        model = "\x\addons\a3_epoch_assets_1\models\ItemGoldBar8oz.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_gold_bar_8oz_CA.paa";
        descriptionShort = "$STR_EPOCH_8x1ozGoldBar";
        mass = 8;
    };
	class ItemGoldBar9oz : CA_Magazine
    {
        author = "DirtySanchez";
        scope = 2;
        count = 1;
        worth = 900;
        type = 256;
        displayName = "$STR_EPOCH_9ozGold";
        model = "\x\addons\a3_epoch_assets_1\models\ItemGoldBar9oz.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_gold_bar_9oz_CA.paa";
        descriptionShort = "$STR_EPOCH_9x1ozGoldBar";
        mass = 9;
    };
	class ItemGoldBar10oz : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        count = 1;
        worth = 1000;
        type = 256;
        displayName = "$STR_EPOCH_10ozGold";
        model = "\x\addons\a3_epoch_assets_1\models\ItemGoldBar10oz.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_gold_bar_10oz_CA.paa";
        descriptionShort = "$STR_EPOCH_10x1ozGoldBar";
        mass = 10;
    };
    class ItemRock : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        count = 1;
        type = 256;
        displayName = "$STR_EPOCH_Rock";
        model = "\x\addons\a3_epoch_assets\models\rock.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\improv_weapon\gear_rock_ca.paa";
        descriptionShort = "$STR_EPOCH_UsedforcraftingfireplacesandmortarCanbeminedfromrocksusingasl86";
        mass = 1;
    };
    class ItemStick : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        count = 1;
        type = 256;
        displayName = "$STR_EPOCH_Stick";
        model = "\x\addons\a3_epoch_assets\models\stick.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\improv_weapon\gear_stick_ca.paa";
        descriptionShort = "$STR_EPOCH_Usedforcrafting";
        mass = 1;
    };
    class ItemRope : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        count = 1;
        type = 256;
        displayName = "$STR_EPOCH_Rope";
        model = "\x\addons\a3_epoch_assets\models\rope.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\improv_weapon\gear_rope_ca.paa";
        descriptionShort = "$STR_EPOCH_Usedforcrafting";
        mass = 1;
    };
    class PartOre : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        count = 1;
        type = 256;
        displayName = "$STR_EPOCH_IronOre";
        model = "\x\addons\a3_epoch_assets\models\ore.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_iron_ore_CA.paa";
        descriptionShort = "$STR_EPOCH_UsedforcraftingscrapmetalCanbeminedfromrocksusingasledgehammer76";
        mass = 1;
    };
    class PartOreSilver : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        count = 1;
        type = 256;
        displayName = "$STR_EPOCH_SilverOre";
        model = "\x\addons\a3_epoch_assets\models\oreSilver.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_silver_ore_CA.paa";
        descriptionShort = "$STR_EPOCH_Canbeminedfromrocksusingasledgehammer";
        mass = 1;
    };
    class PartOreGold : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        count = 1;
        type = 256;
        displayName = "$STR_EPOCH_GoldOre";
        model = "\x\addons\a3_epoch_assets\models\oreGold.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_gold_ore_CA.paa";
        descriptionShort = "$STR_EPOCH_Canbeminedfromrocksusingasledgehammer";
        mass = 1;
    };
    class ItemPacked : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        count = 1;
        type = 256;
        displayName = "$STR_EPOCH_PackedBackpack";
        model = "\x\addons\a3_epoch_assets\models\PackedBag.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\backpack\gear_packedBag_ca.paa";
        descriptionShort = "$STR_EPOCH_Brandnewbackpackstillinthepackage";
        mass = 1.5;
    };
    class ItemSolar : CA_Magazine
    {
        author = "SteamPunkGears";
        scope = 2;
        count = 1;
        type = 256;
        displayName = "$STR_EPOCH_SolarPanels";
        model = "\x\addons\a3_epoch_assets_3\CfgVehicles\solar_gen_assets\Solar_panels\Solar_Panels.p3d";
        picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\solar_gen_assets\Solar_panels\Solar_Panels_Icon_CA.paa";
        descriptionShort = "$STR_EPOCH_Nextgensolarpanels";
        mass = 10;
    };
    class ItemCables : CA_Magazine
    {
        author = "SteamPunkGears";
        scope = 2;
        count = 1;
        type = 256;
        displayName = "$STR_EPOCH_WireCables";
        model = "\x\addons\a3_epoch_assets_3\CfgVehicles\solar_gen_assets\Cables\Solar_cables.p3d";
        picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\solar_gen_assets\Cables\Solar_Cable_Icon_CA.paa";
        descriptionShort = "$STR_EPOCH_Copperwireisulatedwithrubber";
        mass = 10;
    };
	class ItemDuctTape: CA_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		count=1;
		type=256;
		displayName="$STR_EPOCH_DuctTape";
		model="\A3\structures_f_epa\Items\Tools\DuctTape_F.p3d";
		picture="\x\addons\a3_epoch_assets_1\pictures\ItemDuctTape.paa";
		descriptionShort="$STR_EPOCH_RollOfDuctTape";
		mass=2;
	};
    class ItemBattery : CA_Magazine
    {
        author = "SteamPunkGears";
        scope = 2;
        count = 1;
        type = 256;
        displayName = "$STR_EPOCH_EnclosedBattery";
        model = "\x\addons\a3_epoch_assets_3\CfgVehicles\solar_gen_assets\Battery\Battery.p3d";
        picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\solar_gen_assets\Battery\Battery_box_Icon_CA.paa";
        descriptionShort = "$STR_EPOCH_Batteryinaprotectivecase";
        mass = 10;
    };
    class ItemScraps : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        count = 1;
        type = 256;
        displayName = "$STR_EPOCH_MetalScraps";
        model = "\x\addons\a3_epoch_assets\models\scraps.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\scraps\gear_scraps_ca.paa";
        descriptionShort = "$STR_EPOCH_Pieceofmetalscrap";
        mass = 1.5;
    };
    class ItemCorrugated : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        count = 1;
        type = 256;
        displayName = "$STR_EPOCH_SalvageMetalSmall";
        model = "\x\addons\a3_epoch_assets\models\salvage_small.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\salvage\equip_salvage_small_ca.paa";
        descriptionShort = "$STR_EPOCH_Smallpileofassortedmetalparts";
        mass = 5;
    };
    class ItemCorrugatedLg : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        count = 1;
        type = 256;
        displayName = "$STR_EPOCH_SalvageMetalLarge";
        model = "\x\addons\a3_epoch_assets\models\salvage_large.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\salvage\equip_salvage_large_ca.paa";
        descriptionShort = "$STR_EPOCH_Largepileofassortedmetalparts";
        mass = 12;
    };
    class 5Rnd_rollins_mag : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        displayName = "$STR_EPOCH_Rollinsmagazine";
        picture = "\x\addons\a3_epoch_assets\textures\rol_rounds\equip_Rol_rounds_ca.paa";
        model = "\x\addons\a3_epoch_assets\models\rol_rounds.p3d";
        ammo = "B_Test_Caseless";
        count = 5;
        initSpeed = 795;
        tracersEvery = 0;
        lastRoundsTracer = 4;
        descriptionShort = "$STR_EPOCH_Rollins5RndMagazine";
        mass = 3;
    };
    class CSGAS : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        displayName = "$STR_EPOCH_ChainsawGas";
        picture = "\x\addons\a3_epoch_assets\textures\kits\gear_jerryMixed_ca.paa";
        ammo = "ChainSaw_Bullet";
        count = 1000;
        initSpeed = 100;
        tracersEvery = 0;
        lastRoundsTracer = 9999;
        descriptionShort = "$STR_EPOCH_ChainsawGas";
        mass = 5;
    };
    class sledge_swing : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        displayName = "$STR_EPOCH_Swing";
        picture = "\x\addons\a3_epoch_assets\textures\kits\equip_swing_ca.paa";
        ammo = "B_Swing";
        count = 1000;
        initSpeed = 275;
        tracersEvery = 0;
        lastRoundsTracer = 9999;
        descriptionShort = "$STR_EPOCH_Swing";
        mass = 0;
    };
    class stick_swing : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        displayName = "$STR_EPOCH_Swing";
        picture = "\x\addons\a3_epoch_assets\textures\kits\equip_swing_ca.paa";
        ammo = "B_Stick";
        count = 1000;
        initSpeed = 275;
        tracersEvery = 0;
        lastRoundsTracer = 9999;
        descriptionShort = "$STR_EPOCH_Swing";
        mass = 0;
    };
    class hatchet_swing : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        displayName = "$STR_EPOCH_Swing";
        picture = "\x\addons\a3_epoch_assets\textures\kits\equip_swing_ca.paa";
        ammo = "B_Hatchet";
        count = 1000;
        initSpeed = 100;
        tracersEvery = 0;
        lastRoundsTracer = 9999;
        descriptionShort = "$STR_EPOCH_Swing";
        mass = 0;
    };
    class EnergyPack : CA_Magazine
    {
        author = "Sequisha";
        picture = "\A3\Weapons_F\Data\UI\M_battery_CA.paa";
		model = "\x\addons\a3_epoch_community\models\EnergyPack.p3d";		
        displayName = "$STR_EPOCH_Smallenergypack";
        scope = 2;
        ammo = "B_EnergyPack";
        sound[] = {"A3\sounds_f\dummysound",31.622776,1,1600};
        reloadMagazineSound[] = {"A3\sounds_f\dummysound",0.01,1,10};
        descriptionShort = "$STR_EPOCH_Twopartcontainerfilledwithenoughenergyandmatterforoneuse";
        initSpeed = 420;
        count = 10;
        mass = 4;
    };
    class EnergyPackLg : CA_Magazine
    {
        author = "Sequisha";
        picture = "\x\addons\a3_epoch_community\textures\energypacks\EnergyPack_LG_icon_ca.paa";
		model = "\x\addons\a3_epoch_community\models\EnergyPack_large.p3d";
        displayName = "$STR_EPOCH_Largeenergypack";
        scope = 2;
        ammo = "B_EnergyPack";
        sound[] = {"A3\sounds_f\dummysound",31.622776,1,1600};
        reloadMagazineSound[] = {"A3\sounds_f\dummysound",0.01,1,10};
        descriptionShort = "$STR_EPOCH_Largetwopartcontainerfilledwithenoughenergyandmatter10uses";
        initSpeed = 420;
        count = 100;
        mass = 40;
    };
    class WoodLog_EPOCH : CA_Magazine
    {
        author = "SteamPunkGears";
        picture = "\x\addons\a3_epoch_assets\textures\kits\equip_woodenLog_ca.paa";
        model = "x\addons\a3_epoch_assets_3\cfgmagazines\log\SteamLogs.p3d";
        displayName = "$STR_A3_wooden_log";
        scope = 2;
        descriptionShort = "$STR_A3_wooden_log";
        count = 1;
        mass = 10;
    };
    class WhiskeyNoodle : CA_Magazine
    {
        author = "Sequisha";
        displayName = "$STR_EPOCH_WhiskyNoodle";
        picture = "\x\addons\a3_epoch_assets\textures\whiskeynoodle\equip_whiskeyNoodle_ca.paa";
        model = "\x\addons\a3_epoch_assets\models\whiskeynoodle.p3d";
        scope = 2;
        descriptionShort = "$STR_EPOCH_SayitslowDrinkitfast";
        count = 1;
        mass = 1;
    };
    class CircuitParts : CA_Magazine
    {
        author = "Sequisha";
        displayName = "$STR_EPOCH_Electroniccomponents";
        picture = "\x\addons\a3_epoch_assets\textures\circuit\equip_circuit_ca.paa";
        model = "\x\addons\a3_epoch_assets\models\circuit.p3d";
        scope = 2;
        descriptionShort = "$STR_EPOCH_Electroniccomponents";
        count = 1;
        mass = 5;
    };
    class VehicleRepair : CA_Magazine
    {
        author = "Sequisha";
        displayName = "$STR_EPOCH_VehicleRepairParts";
        picture = "\x\addons\a3_epoch_assets\textures\vehiclerepair\equip_vehicleRepair_ca.paa";
        model = "\x\addons\a3_epoch_assets\models\vehicleRepair.p3d";
        scope = 2;
        descriptionShort = "$STR_EPOCH_Repairsthemostdamagedpart";
        count = 1;
        mass = 20;
    };
    class VehicleRepairLg : CA_Magazine
    {
        author = "Sequisha";
        displayName = "$STR_EPOCH_VehicleRepairKit";
        picture = "\x\addons\a3_epoch_assets\textures\vehiclerepair\equip_vehicleRepairLg_ca.paa";
        model = "\x\addons\a3_epoch_assets\models\vehicleRepairLg.p3d";
        scope = 2;
        descriptionShort = "$STR_EPOCH_Fullyrepairsanyvehicle";
        count = 1;
        mass = 50;
    };
    class Pelt_EPOCH : CA_Magazine
    {
        author = "Sequisha";
        picture = "\x\addons\a3_epoch_assets\textures\meat\equip_scrapHide_ca.paa";
        model = "\x\addons\a3_epoch_assets\models\scrapHide.p3d";
        displayName = "$STR_EPOCH_ScrapPelt";
        scope = 2;
        descriptionShort = "$STR_EPOCH_ScrapPelt";
        count = 1;
        mass = 5;
    };
    class Venom_EPOCH : CA_Magazine
    {
        author = "Sequisha";
        picture = "\x\addons\a3_epoch_assets\textures\meat\equip_venomSac_ca.paa";
        model = "\x\addons\a3_epoch_assets\models\venomSac.p3d";
        displayName = "$STR_EPOCH_VenomSack";
        scope = 2;
        descriptionShort = "$STR_EPOCH_VenomSack";
        count = 1;
        mass = 1;
    };
    class SnakeCarcass_EPOCH : CA_Magazine
    {
        author = "Sequisha";
        picture = "\x\addons\a3_epoch_assets\textures\meat\equip_snakeCorpse_ca.paa";
        model = "\x\addons\a3_epoch_assets\models\snakeCorpse.p3d";
        displayName = "$STR_EPOCH_SnakeCarcass";
        scope = 2;
        descriptionShort = "$STR_EPOCH_Guttedandcleaned";
        count = 1;
        mass = 5;
    };
    class SnakeMeat_EPOCH : CA_Magazine
    {
        author = "Sequisha";
        picture = "\x\addons\a3_epoch_assets\textures\meat\equip_snakemeatCooked_ca.paa";
        model = "\x\addons\a3_epoch_assets\models\snakeMeat_cooked.p3d";
        displayName = "$STR_EPOCH_CookedSnakeMeat";
        scope = 2;
        descriptionShort = "$STR_EPOCH_Tasteslikechicken";
        count = 1;
        mass = 5;
    };
    class RabbitCarcass_EPOCH : CA_Magazine
    {
        author = "Sequisha";
        picture = "\x\addons\a3_epoch_assets\textures\meat\equip_rabbitCorpse_ca.paa";
        model = "\x\addons\a3_epoch_assets\models\rabbit.p3d";
        displayName = "$STR_EPOCH_RabbitCarcass";
        scope = 2;
        descriptionShort = "$STR_EPOCH_Guttedandcleaned";
        count = 1;
        mass = 5;
    };
    class CookedRabbit_EPOCH : CA_Magazine
    {
        author = "Sequisha";
        picture = "\x\addons\a3_epoch_assets\textures\meat\equip_rabbitCooked_ca.paa";
        model = "\x\addons\a3_epoch_assets\models\rabbit_cooked.p3d";
        displayName = "$STR_EPOCH_CookedRabbit";
        scope = 2;
        descriptionShort = "$STR_EPOCH_MmmTasty";
        count = 1;
        mass = 5;
    };
    class ChickenCarcass_EPOCH : CA_Magazine
    {
        author = "Sequisha";
        picture = "\x\addons\a3_epoch_assets\textures\meat\equip_chickenRaw_ca.paa";
        model = "\x\addons\a3_epoch_assets\models\chickenRaw.p3d";
        displayName = "$STR_EPOCH_ChickenCarcass";
        scope = 2;
        descriptionShort = "$STR_EPOCH_Guttedandcleaned";
        count = 1;
        mass = 10;
    };
    class CookedChicken_EPOCH : CA_Magazine
    {
        author = "Sequisha";
        picture = "\x\addons\a3_epoch_assets\textures\meat\equip_chickenCooked_ca.paa";
        model = "\x\addons\a3_epoch_assets\models\chicken_cooked.p3d";
        displayName = "$STR_EPOCH_CookedChicken";
        scope = 2;
        descriptionShort = "$STR_EPOCH_Roastedtoperfection";
        count = 1;
        mass = 10;
    };
    class GoatCarcass_EPOCH : CA_Magazine
    {
        author = "Sequisha";
        picture = "\x\addons\a3_epoch_assets\textures\meat\equip_goatLeg_ca.paa";
        model = "\x\addons\a3_epoch_assets\models\goatLeg.p3d";
        displayName = "$STR_EPOCH_RawGoatLeg";
        scope = 2;
        descriptionShort = "$STR_EPOCH_RawGoatLeg";
        count = 1;
        mass = 20;
    };
    class DogCarcass_EPOCH : CA_Magazine
    {
        author = "Sequisha";
        picture = "\x\addons\a3_epoch_assets\textures\meat\equip_goatLeg_ca.paa";
        model = "\x\addons\a3_epoch_assets\models\goatLeg.p3d";
        displayName = "$STR_EPOCH_RawDogLeg";
        scope = 2;
        descriptionShort = "$STR_EPOCH_RawDogLeg";
        count = 1;
        mass = 20;
    };
    class CookedGoat_EPOCH : CA_Magazine
    {
        author = "Sequisha";
        picture = "\x\addons\a3_epoch_assets\textures\meat\equip_goatlegCooked_ca.paa";
        model = "\x\addons\a3_epoch_assets\models\goatLeg_cooked.p3d";
        displayName = "$STR_EPOCH_CookedGoatLeg";
        scope = 2;
        descriptionShort = "$STR_EPOCH_CookedGoatLeg";
        count = 1;
        mass = 20;
    };
    class CookedDog_EPOCH : CA_Magazine
    {
        author = "Sequisha";
        picture = "\x\addons\a3_epoch_assets\textures\meat\equip_goatlegCooked_ca.paa";
        model = "\x\addons\a3_epoch_assets\models\goatLeg_cooked.p3d";
        displayName = "$STR_EPOCH_CookedDogLeg";
        scope = 2;
        descriptionShort = "$STR_EPOCH_CookedDogLeg";
        count = 1;
        mass = 20;
    };
    class SheepCarcass_EPOCH : CA_Magazine
    {
        author = "Sequisha";
        picture = "\x\addons\a3_epoch_assets\textures\meat\equip_goatLeg_ca.paa";
        model = "\x\addons\a3_epoch_assets\models\goatLeg.p3d";
        displayName = "$STR_EPOCH_RawSheepLeg";
        scope = 2;
        descriptionShort = "$STR_EPOCH_RawSheepLeg";
        count = 1;
        mass = 20;
    };
    class CookedSheep_EPOCH : CA_Magazine
    {
        author = "Sequisha";
        picture = "\x\addons\a3_epoch_assets\textures\meat\equip_goatlegCooked_ca.paa";
        model = "\x\addons\a3_epoch_assets\models\goatLeg_cooked.p3d";
        displayName = "$STR_EPOCH_CookedSheepLeg";
        scope = 2;
        descriptionShort = "$STR_EPOCH_CookedSheepLeg";
        count = 1;
        mass = 20;
    };
    class KitSpikeTrap : CA_Magazine
    {
        author = "Sequisha";
        model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_wooden_crate_ca.paa";
        displayName = "$STR_EPOCH_WoodenSpikeTrap";
        scope = 2;
        descriptionShort = "$STR_EPOCH_WoodenSpikeTrap";
        count = 1;
        mass = 20;
    };
    class KitMetalTrap : CA_Magazine
    {
        author = "Sequisha";
        model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_wooden_crate_ca.paa";
        displayName = "$STR_EPOCH_MetalSpikeTrap";
        scope = 2;
        descriptionShort = "$STR_EPOCH_MetalSpikeTrap";
        count = 1;
        mass = 20;
    };
    class KitStudWall : CA_Magazine
    {
        author = "Sequisha";
        model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\kits\equip_woodenWall_ca.paa";
        displayName = "$STR_EPOCH_WoodenStudWall";
        scope = 2;
        descriptionShort = "$STR_EPOCH_WoodenStudWall";
        count = 1;
        mass = 20;
    };
	class KitJailWall : CA_Magazine
	{
		author = "Helion / He-Man";
		model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\x\addons\a3_epoch_community\textures\jail_walls\jail_walls_ca.paa";
		displayName = "$STR_EPOCH_JailWall";
		scope = 2;
		descriptionShort = "$STR_EPOCH_JailWall";
		count = 1;
		mass = 20;
	};
    class KitPlyThirdWall_EPOCH : CA_Magazine
    {
        author = "Helion";
        model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_wooden_crate_ca.paa";
        displayName = "1/3 Plywood Wall";
        scope = 2;
        descriptionShort = "1/3 Plywood Wall";
        count = 1;
        mass = 15;
    };
    class KitWoodFloor : CA_Magazine
    {
        author = "Sequisha";
        model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\kits\equip_woodenFloor_ca.paa";
        displayName = "$STR_EPOCH_WoodenFloor";
        scope = 2;
        descriptionShort = "$STR_EPOCH_WoodenFloor";
        count = 1;
        mass = 20;
    };
	class KitWoodHalfFloor : CA_Magazine
    {
        author = "Sequisha";
        model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\kits\equip_woodenFloor_ca.paa";
        displayName = "$STR_EPOCH_WoodenHalfFloor";
        scope = 2;
        descriptionShort = "$STR_EPOCH_WoodenHalfFloor";
        count = 1;
        mass = 10;
    };
	class KitWoodQuarterFloor : CA_Magazine
    {
        author = "Sequisha";
        model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\kits\equip_woodenFloor_ca.paa";
        displayName = "$STR_EPOCH_WoodenQuarterFloor";
        scope = 2;
        descriptionShort = "$STR_EPOCH_WoodenQuarterFloor";
        count = 1;
        mass = 5;
    };
    class KitWoodStairs : CA_Magazine
    {
        author = "Sequisha";
        model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\kits\equip_woodenStairs_ca.paa";
        displayName = "$STR_EPOCH_WoodenStairs";
        scope = 2;
        descriptionShort = "$STR_EPOCH_WoodenStairs";
        count = 1;
        mass = 20;
    };
    class KitWoodTower : CA_Magazine
    {
        author = "Sequisha";
        model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_wooden_crate_ca.paa";
        displayName = "$STR_EPOCH_WoodenTower";
        scope = 2;
        descriptionShort = "$STR_EPOCH_WoodenTower";
        count = 1;
        mass = 20;
    };
    class KitWoodRamp : CA_Magazine
    {
        author = "Sequisha";
        model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\kits\equip_woodramp_ca.paa";
        displayName = "$STR_EPOCH_WoodenRamp";
        scope = 2;
        descriptionShort = "$STR_EPOCH_WoodenRamp";
        count = 1;
        mass = 20;
    };
    class KitTankTrap : CA_Magazine
    {
        author = "Sequisha";
        model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_wooden_crate_ca.paa";
        displayName = "$STR_EPOCH_TankTrap";
        scope = 2;
        descriptionShort = "$STR_EPOCH_TankTrap";
        count = 1;
        mass = 20;
    };
    class KitHesco3 : CA_Magazine
    {
        author = "Sequisha";
        model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_wooden_crate_ca.paa";
        displayName = "$STR_EPOCH_HescoWide";
        scope = 2;
        descriptionShort = "$STR_EPOCH_HescoWide";
        count = 1;
        mass = 20;
    };
    class KitWoodLadder : CA_Magazine
    {
        author = "Sequisha";
        model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_wooden_crate_ca.paa";
        displayName = "$STR_EPOCH_WoodenLadder";
        scope = 2;
        descriptionShort = "$STR_EPOCH_WoodenLadder";
        count = 1;
        mass = 20;
    };
    class KitFirePlace : CA_Magazine
    {
        author = "Sequisha";
        model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_wooden_crate_ca.paa";
        displayName = "$STR_EPOCH_Fireplace";
        scope = 2;
        descriptionShort = "$STR_EPOCH_Fireplace";
        count = 1;
        mass = 20;
    };
    class KitTiPi : CA_Magazine
    {
        author = "Sequisha";
        model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\kits\equip_TP_ca.paa";
        displayName = "$STR_EPOCH_TiPiKit";
        scope = 2;
        descriptionShort = "$STR_EPOCH_TeePeeTiPi";
        count = 1;
        mass = 20;
    };
    class KitShelf : CA_Magazine
    {
        author = "Sequisha";
        model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\kits\equip_shelf_ca.paa";
        displayName = "$STR_EPOCH_ShelfKit";
        scope = 2;
        descriptionShort = "$STR_EPOCH_Shelf";
        count = 1;
        mass = 20;
    };
    class KitWorkbench : CA_Magazine
    {
        author = "Sequisha";
        model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_wooden_crate_ca.paa";
        displayName = "$STR_EPOCH_WorkbenchKit";
        scope = 2;
        descriptionShort = "$STR_EPOCH_Workbench";
        count = 1;
        mass = 20;
    };
    class KitFoundation : CA_Magazine
    {
        author = "Sequisha";
        model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\kits\equip_foundation_ca.paa";
        displayName = "$STR_EPOCH_ConcreteFoundation";
        scope = 2;
        descriptionShort = "$STR_EPOCH_ConcreteFoundation";
        count = 1;
        mass = 20;
    };
    class KitWoodFoundation : CA_Magazine
    {
        author = "Sequisha";
        model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\kits\equip_foundation_ca.paa";
        displayName = "$STR_EPOCH_WoodFoundation";
        scope = 2;
        descriptionShort = "$STR_EPOCH_WoodFoundation";
        count = 1;
        mass = 10;
    };
    class KitSolarGen : CA_Magazine
    {
        author = "Sequisha";
        model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_wooden_crate_ca.paa";
        displayName = "$STR_EPOCH_SolarGeneratorKit";
        scope = 2;
        descriptionShort = "$STR_EPOCH_SolarGeneratorKit";
        count = 1;
        mass = 20;
    };
    class KitSolarCharger : CA_Magazine
    {
        author = "Sequisha";
        model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_wooden_crate_ca.paa";
        displayName = "$STR_EPOCH_SolarChargerKit";
        scope = 2;
        descriptionShort = "$STR_EPOCH_SolarChargerKit_Desc";
        count = 1;
        mass = 20;
    };
    class KitSolarChargerXL : CA_Magazine
    {
        author = "Sequisha";
        model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_wooden_crate_ca.paa";
        displayName = "$STR_EPOCH_SolarChargerXLKit";
        scope = 2;
        descriptionShort = "$STR_EPOCH_SolarChargerXLKit_Desc";
        count = 1;
        mass = 20;
    };
    class KitPlotPole : CA_Magazine
    {
        author = "Sequisha / Helion4";
        model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\x\addons\a3_epoch_community\icons\jammer_s_ca.paa";
        displayName = "$STR_EPOCH_FrequencyJammer";
        scope = 2;
        descriptionShort = "$STR_EPOCH_FrequencyJammer";
        count = 1;
        mass = 20;
    };
    class KitPlotPole_M : KitPlotPole
    {
        model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\x\addons\a3_epoch_community\icons\jammer_m_ca.paa";
        displayName = "$STR_EPOCH_FrequencyJammer_M";
        descriptionShort = "$STR_EPOCH_FrequencyJammer_M";
        mass = 25;
    };
    class KitPlotPole_L : KitPlotPole
    {
        model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\x\addons\a3_epoch_community\icons\jammer_m_ca.paa";
        displayName = "$STR_EPOCH_FrequencyJammer_L";
        descriptionShort = "$STR_EPOCH_FrequencyJammer_L";
        mass = 25;
    };
    class KitPlotPole_XL : KitPlotPole
    {
        model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\jammer\equip_jammer_ca.paa";
        displayName = "$STR_EPOCH_FrequencyJammer_XL";
        descriptionShort = "$STR_EPOCH_FrequencyJammer_XL";
        mass = 30;
    };
    class KitPlotPole_XXL : KitPlotPole
    {
        model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\jammer\equip_jammer_ca.paa";
        displayName = "$STR_EPOCH_FrequencyJammer_XXL";
        descriptionShort = "$STR_EPOCH_FrequencyJammer_XXL";
        mass = 30;
    };
	class KitMetalFloor: CA_Magazine
	{
		author = "DirtySanchez";
		model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_wooden_crate_ca.paa"; // needs icon
		displayName = "$STR_EPOCH_MetalFloor";
		scope = 2;
		descriptionShort = "$STR_EPOCH_MetalFloorDesc";
		count = 1;
		mass = 20;
	};
	class KitMetalHalfFloor : CA_Magazine
    {
        author = "Helion4/DirtySanchez";
        model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_wooden_crate_ca.paa";
        displayName = "$STR_EPOCH_MetalHalfFloor";
        scope = 2;
        descriptionShort = "$STR_EPOCH_MetalHalfFloorDesc";
        count = 1;
        mass = 10;
    };
	class KitMetalQuarterFloor : CA_Magazine
    {
        author = "Helion4/DirtySanchez";
        model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_wooden_crate_ca.paa";
        displayName = "$STR_EPOCH_MetalQuarterFloor";
        scope = 2;
        descriptionShort = "$STR_EPOCH_MetalQuarterFloorDesc";
        count = 1;
        mass = 5;
    };
	class KitMetalTower: CA_Magazine
	{
		author = "Helion4/DirtySanchez";
		model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_wooden_crate_ca.paa";
		displayName = "$STR_EPOCH_MetalTower";
		scope = 2;
		descriptionShort = "$STR_EPOCH_MetalTowerDesc";
		count = 1;
		mass = 20;
	};
    class KitCinderWall : CA_Magazine
    {
        author = "Sequisha";
        model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\kits\equip_cinderHalf_ca.paa";
        displayName = "$STR_EPOCH_CinderWall";
        scope = 2;
        descriptionShort = "$STR_EPOCH_CinderWall";
        count = 1;
        mass = 20;
    };
	class KitCinderWallDoorwHatch : CA_Magazine
    {
        author = "Helion4/DirtySanchez";
		scope = 2;
        count = 1;
        model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_wooden_crate_ca.paa";
        displayName = "$STR_EPOCH_CinderBlockDoorwHatch";
        descriptionShort = "$STR_EPOCH_CinderBlockDoorwHatchDesc";
        mass = 20;
    };
	class KitCinderFloor: CA_Magazine
	{
		author = "DirtySanchez";
		model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_wooden_crate_ca.paa"; // needs icon
		displayName = "$STR_EPOCH_CinderFloor";
		scope = 2;
		descriptionShort = "$STR_EPOCH_CinderFloorDesc";
		count = 1;
		mass = 20;
	};
	class KitCinderHalfFloor : CA_Magazine
    {
        author = "Helion4/DirtySanchez";
        model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_wooden_crate_ca.paa";
        displayName = "$STR_EPOCH_CinderHalfFloor";
        scope = 2;
        descriptionShort = "$STR_EPOCH_CinderHalfFloorDesc";
        count = 1;
        mass = 10;
    };
	class KitCinderQuarterFloor : CA_Magazine
    {
        author = "Helion4/DirtySanchez";
        model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_wooden_crate_ca.paa";
        displayName = "$STR_EPOCH_CinderQuarterFloor";
        scope = 2;
        descriptionShort = "$STR_EPOCH_CinderQuarterFloorDesc";
        count = 1;
        mass = 5;
    };
	class KitCinderTower: CA_Magazine
	{
		author = "Helion4/DirtySanchez";
		model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_wooden_crate_ca.paa"; // needs icon
		displayName = "$STR_EPOCH_CinderTower";
		scope = 2;
		descriptionShort = "$STR_EPOCH_CinderTowerDesc";
		count = 1;
		mass = 20;
    };
    class PaintCanBase : CA_Magazine
    {
        author = "Sequisha";
        model = "\x\addons\a3_epoch_assets\models\paintCan.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\paint can\gear_paintCan_ca.paa";
        displayName = "$STR_EPOCH_PaintCan";
        scope = 0;
        descriptionShort = "$STR_EPOCH_CrustOLeumOilbasedprotectiveenamel";
        count = 1;
        mass = 1;
    };
    class PaintCanClear : PaintCanBase
    {
        scope = 2;
        displayName = "$STR_EPOCH_PaintStripper";
        descriptionShort = "$STR_EPOCH_Removespaintandotherfinishes";
        colorName = "None";
        textureIndex = 0;
    };
    class PaintCanBlk : PaintCanBase
    {
        scope = 2;
        displayName = "$STR_EPOCH_PaintCanBlack";
        colorName = "Black";
        textureIndex = 1;
    };
    class PaintCanBlu : PaintCanBase
    {
        scope = 2;
        displayName = "$STR_EPOCH_PaintCanBlue";
        colorName = "Blue";
        textureIndex = 2;
    };
    class PaintCanBrn : PaintCanBase
    {
        scope = 2;
        displayName = "$STR_EPOCH_PaintCanBrown";
        colorName = "Brown";
        textureIndex = 3;
    };
    class PaintCanGrn : PaintCanBase
    {
        scope = 2;
        displayName = "$STR_EPOCH_PaintCanGreen";
        colorName = "Green";
        textureIndex = 4;
    };
    class PaintCanOra : PaintCanBase
    {
        scope = 2;
        displayName = "$STR_EPOCH_PaintCanOrange";
        colorName = "Orange";
        textureIndex = 5;
    };
    class PaintCanPur : PaintCanBase
    {
        scope = 2;
        displayName = "$STR_EPOCH_PaintCanPurple";
        colorName = "Purple";
        textureIndex = 6;
    };
    class PaintCanRed : PaintCanBase
    {
        scope = 2;
        displayName = "$STR_EPOCH_PaintCanRed";
        colorName = "Red";
        textureIndex = 7;
    };
    class PaintCanTeal : PaintCanBase
    {
        scope = 2;
        displayName = "$STR_EPOCH_PaintCanTeal";
        colorName = "Teal";
        textureIndex = 8;
    };
    class PaintCanYel : PaintCanBase
    {
        scope = 2;
        displayName = "$STR_EPOCH_PaintCanYellow";
        colorName = "Yellow";
        textureIndex = 9;
    };
	class Kit_Garden: CA_Magazine
	{
		author="DirtySanchez";
		scope=2;
		count=1;
		type=256;
		displayName="$STR_EPOCH_Garden";
		model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_wooden_crate_ca.paa";
		descriptionShort="A large storage Box";
		mass=150;
	};
	class ItemSeedBag : CA_Magazine
    {
        author = "Helion4/DirtySanchez";
        scope = 2;
		count = 1;
		type = 256;
		picture = "\x\addons\a3_epoch_community\textures\seeds\seedbag_icon_ca.paa";
        displayname = "$STR_EPOCH_ItemSeedBag";
        model = "\x\addons\a3_epoch_community\models\seeds.p3d";
        descriptionShort = "$STR_EPOCH_ItemSeedBagDesc";
        mass = 10;
    };
	class SeedPacket_GoldenSeal : CA_Magazine
    {
        author = "Helion4/DirtySanchez";
        scope = 2;
		count = 10;
		type = 256;
		picture = "\x\addons\a3_epoch_community\textures\seeds_food\goldenseal_packet_icon_ca.paa";
        displayname = "$STR_EPOCH_SeedPacketGoldenSeal";
        model = "\x\addons\a3_epoch_community\models\goldenseal.p3d";
        descriptionShort = "$STR_EPOCH_SeedPacketGoldenSeal";
        mass = 1;
    };
	class SeedPacket_Hemp : CA_Magazine
    {
        author = "Helion4/DirtySanchez";
        scope = 2;
		count = 10;
		type = 256;
		picture = "\x\addons\a3_epoch_community\textures\seeds_food\hemp_packet_icon_ca.paa";
        displayname = "$STR_EPOCH_SeedPacketHemp";
        model = "\x\addons\a3_epoch_community\models\hemp.p3d";
        descriptionShort = "$STR_EPOCH_SeedPacketHemp";
        mass = 1;
    };
	class SeedPacket_Poppy : CA_Magazine
    {
        author = "Helion4/DirtySanchez";
        scope = 2;
		count = 10;
		type = 256;
		picture = "\x\addons\a3_epoch_community\textures\seeds_food\poppy_packet_icon_ca.paa";
        displayname = "$STR_EPOCH_SeedPacketPoppy";
        model = "\x\addons\a3_epoch_community\models\poppy.p3d";
        descriptionShort = "$STR_EPOCH_SeedPacketPoppy";
        mass = 1;
    };
	class SeedPacket_Pumpkin : CA_Magazine
    {
        author = "Helion4/DirtySanchez";
        scope = 2;
		count = 10;
		type = 256;
		picture = "\x\addons\a3_epoch_community\textures\seeds_food\pumpkin_packet_icon_ca.paa";
        displayname = "$STR_EPOCH_SeedPacketPumpkin";
        model = "\x\addons\a3_epoch_community\models\pumpkin.p3d";
        descriptionShort = "$STR_EPOCH_SeedPacketPumpkin";
        mass = 1;
    };
	class SeedPacket_Sunflower : CA_Magazine
    {
        author = "Helion4/DirtySanchez";
        scope = 2;
		count = 10;
		type = 256;
		picture = "\x\addons\a3_epoch_community\textures\seeds_food\sunflower_packet_icon_ca.paa";
        displayname = "$STR_EPOCH_SeedPacketSunflower";
        model = "\x\addons\a3_epoch_community\models\sunflower.p3d";
        descriptionShort = "$STR_EPOCH_SeedPacketSunflower";
        mass = 1;
    };
	class Sapling : CA_Magazine
    {
        author = "Helion4/DirtySanchez";
        scope = 2;
        model = "\x\addons\a3_epoch_community\models\Farming\sapling.p3d";
        picture = "\x\addons\a3_epoch_community\icons\seedling_icon_ca.paa";
        displayName = "$STR_EPOCH_Sapling";
        descriptionShort = "$STR_EPOCH_Sapling";
        count = 1;
        mass = 10;
    };
	class Sapling_GoldenSeal : Sapling {};
	class Sapling_Hemp : Sapling {};
	class Sapling_Poppy : Sapling {};
	class Sapling_Pumpkin : Sapling {};
	class Sapling_Sunflower : Sapling {};
	class SaplingTeen : CA_Magazine
    {
        author = "Helion4/DirtySanchez";
        scope = 2;
        model = "\x\addons\a3_epoch_community\models\Farming\sapling_teen.p3d";
        picture = "\x\addons\a3_epoch_community\icons\seedling_icon_ca.paa";
        displayName = "$STR_EPOCH_SaplingTeen";
        descriptionShort = "$STR_EPOCH_SaplingTeen";
        count = 1;
        mass = 20;
    };
	class SaplingTeen_GoldenSeal : SaplingTeen {};
	class SaplingTeen_Hemp : SaplingTeen {};
	class SaplingTeen_Poppy : SaplingTeen {};
	class SaplingTeen_Pumpkin : SaplingTeen {};
	class SaplingTeen_Sunflower : SaplingTeen {};
    class Goldenseal : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_3\vegetation\models\goldenseal.p3d";
        picture = "\x\addons\a3_epoch_assets_3\vegetation\gear_goldenseal_ca.paa";
        displayName = "$STR_EPOCH_Goldenseal";
        descriptionShort = "$STR_EPOCH_Helpsreducetoxicity";
        count = 1;
        mass = 10;
    };
	class Hemp : CA_Magazine
    {
        author = "Helion4/DirtySanchez";
        scope = 2;
        model = "\x\addons\a3_epoch_community\models\Farming\hemp_plant.p3d";
        picture = "\x\addons\a3_epoch_community\icons\hemp_icon_ca.paa";
        displayName = "$STR_EPOCH_Hemp";
        descriptionShort = "$STR_EPOCH_Hemp";
        count = 1;
        mass = 50;
    };
	class Poppy : CA_Magazine
    {
        author = "Helion4/DirtySanchez";
        scope = 2;
        model = "\x\addons\a3_epoch_community\models\Farming\poppy_plant.p3d";
        picture = "\x\addons\a3_epoch_community\icons\poppy_icon_ca.paa";
        displayName = "$STR_EPOCH_Poppy";
        descriptionShort = "$STR_EPOCH_Poppy";
        count = 1;
        mass = 35;
    };
    class Pumpkin : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_3\vegetation\models\pumpkin.p3d";
        picture = "\x\addons\a3_epoch_assets_3\vegetation\gear_pumpkin_ca.paa";
        displayName = "$STR_EPOCH_Pumpkin";
        descriptionShort = "$STR_EPOCH_Pumpkin";
        count = 1;
        mass = 20;
    };
	class Sunflower : CA_Magazine
    {
        author = "Helion4/DirtySanchez";
        scope = 2;
        model = "\x\addons\a3_epoch_community\models\Farming\Sunflower_plant.p3d";
        picture = "\x\addons\a3_epoch_community\icons\sunflower_icon_ca.paa";
        displayName = "$STR_EPOCH_Sunflower";
        descriptionShort = "$STR_EPOCH_Sunflower";
        count = 1;
        mass = 25;
    };
	class Poppy2 : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\poppy.p3d";
        picture = "\x\addons\a3_epoch_assets_3\vegetation\gear_poppy_ca.paa";
        displayName = "$STR_EPOCH_Poppy";
        descriptionShort = "$STR_EPOCH_Podoffofapoppyplant";
        count = 1;
        mass = 1;
    };
    class Towelette : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\moist.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\moist\gear_moist_ca.paa";
        displayName = "$STR_EPOCH_MoistTowelette";
        descriptionShort = "$STR_EPOCH_Tearopenpacketremovetoweletteanduse";
        count = 1;
        mass = 1;
    };
    class HeatPack : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\heatdough.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\moist\gear_heat_ca.paa";
        displayName = "$STR_EPOCH_HeatPack";
        descriptionShort = "$STR_EPOCH_Dontsufferinthecoldjustopenoneoftheseandgettoasty";
        count = 1;
        mass = 1;
    };
    class ColdPack : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\heatdough.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\moist\gear_heat_ca.paa";
        displayName = "$STR_EPOCH_ColdPack";
        descriptionShort = "$STR_EPOCH_RunningHotcoolitoff";
        count = 1;
        mass = 1;
    };
    class SpareTire : CA_Magazine
    {
        author = "$STR_A3_Bohemia_Interactive";
        scope = 2;
        model = "\A3\Structures_F\Civ\Garbage\Tyre_F.p3d";
        picture = "\x\addons\a3_epoch_community\icons\SpareTire.paa";
        displayName = "$STR_EPOCH_SpareTire";
        descriptionShort = "$STR_EPOCH_Usedtofixablownouttire";
        count = 1;
        mass = 150;
    };
	class EngineParts: CA_Magazine
	{
		author = "Helion4";
		scope = 2;
		count = 1;
		type = 256;
		displayName = "EngineParts";
		model = "\x\addons\a3_epoch_community\models\enginespares.p3d";
		picture = "\x\addons\a3_epoch_community\icons\enginespares_icon_ca.paa";
		descriptionShort = "$STR_EPOCH_EnginePartsDesc";
		mass = 150;
	};
	class EngineBlock: CA_Magazine
	{
		author = "Helion4";
		scope = 2;
		count = 1;
		type = 256;
		displayName = "EngineBlock";
		model = "\x\addons\a3_epoch_community\models\engineblock.p3d";
		picture = "\x\addons\a3_epoch_community\icons\engineblock_icon_ca.paa";
		descriptionShort = "$STR_EPOCH_EngineBlockDesc";
		mass = 200;
	};
	class ItemGlass: CA_Magazine
	{
		author = "Helion4";
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Glass";
		model = "\x\addons\a3_epoch_community\models\itemglass.p3d";
		picture = "\x\addons\a3_epoch_community\icons\itemglass_icon_ca.paa";
		descriptionShort = "$STR_EPOCH_ItemGlassDesc";
		mass = 50;
	};
	class FuelTank: CA_Magazine
	{
		author = "Helion4";
		scope = 2;
		count = 1;
		type = 256;
		displayName = "FuelTank";
		model = "\x\addons\a3_epoch_community\models\fueltank.p3d";
		picture = "\x\addons\a3_epoch_community\icons\fueltank_icon_ca.paa";
		descriptionShort = "$STR_EPOCH_FuelTankDesc";
		mass = 100;
	};
	class ItemRotor: CA_Magazine
	{
		author = "Helion4";
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Rotor";
		model = "\x\addons\a3_epoch_community\models\itemrotor.p3d";
		picture = "\x\addons\a3_epoch_community\icons\itemrotor_icon_ca.paa";
		descriptionShort = "$STR_EPOCH_ItemRotorDesc";
		mass = 150;
	};
	class 6Rnd_GreenSignal_F;
	class 6Rnd_BlueSignal_F: 6Rnd_GreenSignal_F
	{
		author = "DirtySanchez";
		displayName = "6Rnd Signal Cylinder (Blue)";
		descriptionShort = "Type: Flare Slugs - Blue<br />Rounds: 6<br />Used in: Starter Pistol";
		displayNameShort = "Blue Flare";
		picture = "\A3\Weapons_F_Kart\Pistols\Pistol_Signal_F\Data\UI\M_6Rnd_GreenSignal_CA.paa";
		ammo = "F_40mm_Blue";
		initSpeed = 120;
	};
	class 6Rnd_PurpleSignal_F: 6Rnd_GreenSignal_F
	{
		author = "DirtySanchez";
		hit = 5;
		displayName = "6Rnd Signal Cylinder (Purple)";
		descriptionShort = "Type: Flare Slugs - Purple<br />Rounds: 6<br />Used in: Starter Pistol";
		displayNameShort = "Purple Flare";
		picture = "\A3\Weapons_F_Kart\Pistols\Pistol_Signal_F\Data\UI\M_6Rnd_RedSignal_CA.paa";
		ammo = "F_40mm_Purple";
		initSpeed = 120;
	};
	class 6Rnd_OrangeSignal_F: 6Rnd_GreenSignal_F
	{
		author = "DirtySanchez";
		displayName = "6Rnd Signal Cylinder (Orange)";
		descriptionShort = "Type: Flare Slugs - Orange<br />Rounds: 6<br />Used in: Starter Pistol";
		displayNameShort = "Orange Flare";
		picture = "\A3\Weapons_F_Kart\Pistols\Pistol_Signal_F\Data\UI\M_6Rnd_RedSignal_CA.paa";
		ammo = "F_40mm_Orange";
		initSpeed = 120;
	};
	class VehicleMagazine: CA_Magazine {};
	class 3Rnd_MosquitoGrenade: VehicleMagazine
	{
		author = "DirtySanchez";
		scope = 2;
		displayName = "Grenade";
		descriptionShort = "";
		ammo = "MosquitoGrenade";
		count = 3;
		initSpeed = 3;
		maxLeadSpeed = 200;
		sound[] = {"",1.0,1};
		reloadSound[] = {"",0.00031622773,1};
		nameSound = "cannon";
	};
	class 500Rnd_127x99_mag: VehicleMagazine
	{
		author = "DirtySanchez";
		scope = 2;
		displayName = "$STR_EPOCH_500Rnd127x99name";
		descriptionShort = "$STR_EPOCH_500Rnd127x99desc";
		model = "\x\addons\a3_epoch_assets_1\models\50cal_mag.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_50cal_mag_ca.paa";
		mass = 100;
		count = 500;
		ammo = "B_127x99_Ball";
		initSpeed = 910;
		maxLeadSpeed = 200;
		tracersEvery = 4;
		nameSound = "mgun";
	};
	class 500Rnd_127x99_mag_Tracer_Red: 500Rnd_127x99_mag
	{
		author = "DirtySanchez";
		ammo = "B_127x99_Ball_Tracer_Red";
		displayName = "$STR_EPOCH_500Rnd127x99redname";
		descriptionShort = "$STR_EPOCH_500Rnd127x99reddesc";
		displaynameshort = "Tracer";
	};
	class 500Rnd_127x99_mag_Tracer_Green: 500Rnd_127x99_mag_Tracer_Red
	{
		author = "DirtySanchez";
		ammo = "B_127x99_Ball_Tracer_Green";
		displayName = "$STR_EPOCH_500Rnd127x99grnname";
		descriptionShort = "$STR_EPOCH_500Rnd127x99grndesc";
	};
	class 500Rnd_127x99_mag_Tracer_Yellow: 500Rnd_127x99_mag_Tracer_Red
	{
		author = "DirtySanchez";
		ammo = "B_127x99_Ball_Tracer_Yellow";
		displayName = "$STR_EPOCH_500Rnd127x99ylwname";
		descriptionShort = "$STR_EPOCH_500Rnd127x99ylwdesc";
	};
	class 200Rnd_127x99_mag: 500Rnd_127x99_mag
	{
		author = "DirtySanchez";
		count = 200;
		tracersEvery = 3;
		displayName = "$STR_EPOCH_200Rnd127x99name";
		descriptionShort = "$STR_EPOCH_200Rnd127x99desc";
	};
	class 200Rnd_127x99_mag_Tracer_Red: 200Rnd_127x99_mag
	{
		author = "DirtySanchez";
		ammo = "B_127x99_Ball_Tracer_Red";
		displayName = "$STR_EPOCH_200Rnd127x99redname";
		descriptionShort = "$STR_EPOCH_200Rnd127x99reddesc";
		displaynameshort = "Tracer";
	};
	class 200Rnd_127x99_mag_Tracer_Green: 200Rnd_127x99_mag_Tracer_Red
	{
		author = "DirtySanchez";
		ammo = "B_127x99_Ball_Tracer_Green";
		displayName = "$STR_EPOCH_200Rnd127x99grnname";
		descriptionShort = "$STR_EPOCH_200Rnd127x99grndesc";
	};
	class 200Rnd_127x99_mag_Tracer_Yellow: 200Rnd_127x99_mag_Tracer_Red
	{
		author = "Bohemia Interactive";
		ammo = "B_127x99_Ball_Tracer_Yellow";
		displayName = "$STR_EPOCH_200Rnd127x99ylwname";
		descriptionShort = "$STR_EPOCH_200Rnd127x99ylwdesc";
	};
	class 100Rnd_127x99_mag: 200Rnd_127x99_mag
	{
		author = "DirtySanchez";
		count = 100;
		displayName = "$STR_EPOCH_100Rnd127x99name";
		descriptionShort = "$STR_EPOCH_100Rnd127x99desc";
	};
	class 100Rnd_127x99_mag_Tracer_Red: 100Rnd_127x99_mag
	{
		author = "DirtySanchez";
		ammo = "B_127x99_Ball_Tracer_Red";
		displayName = "$STR_EPOCH_100Rnd127x99redname";
		descriptionShort = "$STR_EPOCH_100Rnd127x99reddesc";
		displaynameshort = "Tracer";
	};
	class 100Rnd_127x99_mag_Tracer_Green: 100Rnd_127x99_mag_Tracer_Red
	{
		author = "DirtySanchez";
		ammo = "B_127x99_Ball_Tracer_Green";
		displayName = "$STR_EPOCH_100Rnd127x99grnname";
		descriptionShort = "$STR_EPOCH_100Rnd127x99grndesc";
	};
	class 100Rnd_127x99_mag_Tracer_Yellow: 100Rnd_127x99_mag_Tracer_Red
	{
		author = "DirtySanchez";
		ammo = "B_127x99_Ball_Tracer_Yellow";
		displayName = "$STR_EPOCH_100Rnd127x99ylwname";
		descriptionShort = "$STR_EPOCH_100Rnd127x99ylwdesc";
	};
	class 2000Rnd_762x51_Belt: VehicleMagazine
	{
		author = "DirtySanchez";
		scope = 2;
		displayName = "$STR_EPOCH_2000Rnd762x51Beltname";
		descriptionShort = "$STR_EPOCH_2000Rnd762x51Beltdesc";
		model = "\x\addons\a3_epoch_assets_1\models\m134_mag.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_m134_mag_ca.paa";
		ammo = "B_762x51_Ball";
		count = 2000;
		initSpeed = 860;
		maxLeadSpeed = 200;
		tracersEvery = 5;
		lastRoundsTracer = 4;
		nameSound = "mgun";
	};
	class 5000Rnd_762x51_Belt: 2000Rnd_762x51_Belt
	{
		ammo = "B_762x51_Minigun_Tracer_Red_splash";
		displayName = "$STR_EPOCH_5000Rnd762x51Beltname";
		descriptionShort = "$STR_EPOCH_5000Rnd762x51Beltdesc";
		tracersEvery = 1;
		count = 5000;
		initSpeed = 860;
		weight = 128;
	};
	class 5000Rnd_762x51_Yellow_Belt: 2000Rnd_762x51_Belt
	{
		displayName = "$STR_EPOCH_5000Rnd762x51YellowBeltname";
		descriptionShort = "$STR_EPOCH_5000Rnd762x51YellowBeltdesc";
		ammo = "B_762x51_Minigun_Tracer_Yellow_splash";
	};
	class 200Rnd_40mm_G_belt: VehicleMagazine
	{
		author = "DirtySanchez";
		scope = 2;
		displayName = "$STR_EPOCH_200Rnd40mmGname";
		descriptionShort = "$STR_EPOCH_200Rnd40mmGdesc";
		model = "\x\addons\a3_epoch_assets_1\models\40mm_mag.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_40mm_mag_ca.paa";
		ammo = "G_40mm_HEDP";
		initSpeed = 241;
		maxLeadSpeed = 400;
		nameSound = "";
		count = 200;
	};
	class 32Rnd_40mm_G_belt: 200Rnd_40mm_G_belt
	{
		author = "DirtySanchez";
		count = 32;
		descriptionShort = "$STR_EPOCH_32Rnd40mmGdesc";
	};
	class 64Rnd_40mm_G_belt: 200Rnd_40mm_G_belt
	{
		author = "DirtySanchez";
		count = 64;
		descriptionShort = "$STR_EPOCH_64Rnd40mmGdesc";
	};
	class 96Rnd_40mm_G_belt: 200Rnd_40mm_G_belt
	{
		author = "DirtySanchez";
		count = 96;
		descriptionShort = "$STR_EPOCH_96Rnd40mmGdesc";
	};
	class 200Rnd_20mm_G_belt: VehicleMagazine
	{
		author = "DirtySanchez";
		scope = 2;
		displayName = "$STR_EPOCH_200Rnd30mmGname";
		descriptionShort = "$STR_EPOCH_200Rnd30mmGdesc";
		model = "\x\addons\a3_epoch_assets_1\models\30mm_mag.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_30mm_mag_ca.paa";
		ammo = "G_20mm_HE";
		initSpeed = 185;
		maxLeadSpeed = 400;
		nameSound = "";
		count = 200;
	};
	class 40Rnd_20mm_G_belt: 200Rnd_20mm_G_belt
	{
		author = "DirtySanchez";
		count = 40;
		descriptionShort = "$STR_EPOCH_40Rnd30mmGdesc";
	};
	class mas_50Rnd_127x107_DSHKM: VehicleMagazine
	{
		author = "DirtySanchez";
		scope = 2;
		displayName = "$STR_EPOCH_mas127x107DSHKMname";
		descriptionShort = "$STR_EPOCH_mas50Rnd127x107DSHKMdesc";
		model = "\x\addons\a3_epoch_assets_1\models\dshkm_mag.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_Dshkm_mag_ca.paa";
		ammo = "mas_B_127x107_Ball";
		count = 50;
		mass = 100;
		initSpeed = 850;
		maxLeadSpeed = 200;
		tracersEvery = 3;
		lastRoundsTracer = 5;
		nameSound = "mgun";
	};
	class mas_150Rnd_127x107_DSHKM: mas_50Rnd_127x107_DSHKM
	{
		author = "DirtySanchez";
		count = 150;
		descriptionShort = "$STR_EPOCH_mas150Rnd127x107DSHKMdesc";
	};
	class 60Rnd_CMFlareMagazine;
	class 60Rnd_CMFlare_Chaff_Magazine: 60Rnd_CMFlareMagazine
	{
		displayName = "$STR_EPOCH_60Rnd_CMFlare_Chaff_Magazine";
		descriptionShort = "$STR_EPOCH_60Rnd_CMFlare_Chaff_Magazine";
		ammo = "CMflare_Chaff_Ammo";
	};
	class 120Rnd_CMFlare_Chaff_Magazine: 60Rnd_CMFlare_Chaff_Magazine
	{
		displayName = "$STR_EPOCH_120Rnd_CMFlare_Chaff_Magazine";
		descriptionShort = "$STR_EPOCH_120Rnd_CMFlare_Chaff_Magazine";
		count = 120;
	};
	class 240Rnd_CMFlare_Chaff_Magazine: 60Rnd_CMFlare_Chaff_Magazine
	{
		displayName = "$STR_EPOCH_240Rnd_CMFlare_Chaff_Magazine";
		descriptionShort = "$STR_EPOCH_240Rnd_CMFlare_Chaff_Magazine";
		count = 240;
	};
	class 192Rnd_CMFlare_Chaff_Magazine: 60Rnd_CMFlare_Chaff_Magazine
	{
		displayName = "$STR_EPOCH_192Rnd_CMFlare_Chaff_Magazine";
		descriptionShort = "$STR_EPOCH_192Rnd_CMFlare_Chaff_Magazine";
		count = 192;
	};
	class 168Rnd_CMFlare_Chaff_Magazine: 60Rnd_CMFlare_Chaff_Magazine
	{
		displayName = "$STR_EPOCH_168Rnd_CMFlare_Chaff_Magazine";
		descriptionShort = "$STR_EPOCH_168Rnd_CMFlare_Chaff_Magazine";
		count = 168;
	};
	class 300Rnd_CMFlare_Chaff_Magazine: 60Rnd_CMFlare_Chaff_Magazine
	{
		displayName = "$STR_EPOCH_300Rnd_CMFlare_Chaff_Magazine";
		descriptionShort = "$STR_EPOCH_300Rnd_CMFlare_Chaff_Magazine";
		count = 300;
	};
	class SmokeLauncherMag: VehicleMagazine
	{
		author = "DirtySanchez";
		scope = 2;
		displayName = "$STR_EPOCH_SmokeLauncherMag";
		descriptionShort = "$STR_EPOCH_SmokeLauncherMag";
		model = "\x\addons\a3_epoch_assets_1\models\dshkm_mag.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_Dshkm_mag_ca.paa";
		ammo = "SmokeLauncherAmmo";
		count = 2;
		nameSound = "smokeshell";
		initSpeed = 14;
	};
	class SmokeLauncherMag_boat: VehicleMagazine
	{
		author = "DirtySanchez";
		scope = 2;
		displayName = "$STR_EPOCH_SmokeLauncherMag_boat";
		descriptionShort = "$STR_EPOCH_SmokeLauncherMag_boat";
		model = "\x\addons\a3_epoch_assets_1\models\dshkm_mag.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_Dshkm_mag_ca.paa";
		ammo = "SmokeLauncherAmmo_boat";
		count = 2;
		nameSound = "smokeshell";
		initSpeed = 14;
	};
	class 200Rnd_65x39_Belt: VehicleMagazine
	{
		author = "DirtySanchez";
		scope = 2;
		displayName = "$STR_EPOCH_200Rnd_65x39_BeltName";
		descriptionShort = "$STR_EPOCH_200Rnd_65x39_BeltDesc";
		model = "\x\addons\a3_epoch_assets_1\models\dshkm_mag.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_Dshkm_mag_ca.paa";
		count = 200;
		ammo = "B_65x39_Caseless";
		initSpeed = 825;
		maxLeadSpeed = 200;
		tracersEvery = 5;
		nameSound = "mgun";
	};
	class 200Rnd_65x39_Belt_Tracer_Red: 200Rnd_65x39_Belt
	{
		displayName = "$STR_EPOCH_200Rnd_65x39_Belt_Tracer_RedName";
		descriptionShort = "$STR_EPOCH_200Rnd_65x39_Belt_Tracer_RedDesc";
		ammo = "B_65x39_Caseless";
		tracersEvery = 1;
		displaynameshort = "$STR_EPOCH_VEHICLE_AMMO_DISPLAY_NAME_SHORT_TRACER";
	};
	class 200Rnd_65x39_Belt_Tracer_Green: 200Rnd_65x39_Belt
	{
		displayName = "$STR_EPOCH_200Rnd_65x39_Belt_Tracer_GreenName";
		descriptionShort = "$STR_EPOCH_200Rnd_65x39_Belt_Tracer_GreenDesc";
		ammo = "B_65x39_Case_green";
		tracersEvery = 1;
		displaynameshort = "$STR_EPOCH_VEHICLE_AMMO_DISPLAY_NAME_SHORT_TRACER";
	};
	class 200Rnd_65x39_Belt_Tracer_Yellow: 200Rnd_65x39_Belt
	{
		displayName = "$STR_EPOCH_200Rnd_65x39_Belt_Tracer_YellowName";
		descriptionShort = "$STR_EPOCH_200Rnd_65x39_Belt_Tracer_YellowDesc";
		ammo = "B_65x39_Case_yellow";
		tracersEvery = 1;
		displaynameshort = "$STR_EPOCH_VEHICLE_AMMO_DISPLAY_NAME_SHORT_TRACER";
	};
	class 1000Rnd_65x39_Belt: 200Rnd_65x39_Belt
	{
		author = "DirtySanchez";
		scope = 2;
		displayName = "$STR_EPOCH_1000Rnd_65x39_BeltName";
		descriptionShort = "$STR_EPOCH_1000Rnd_65x39_BeltDesc";
		model = "\x\addons\a3_epoch_assets_1\models\dshkm_mag.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_Dshkm_mag_ca.paa";
		count = 1000;
	};
	class 1000Rnd_65x39_Belt_Tracer_Red: 1000Rnd_65x39_Belt
	{
		displayName = "$STR_EPOCH_1000Rnd_65x39_Belt_Tracer_RedName";
		descriptionShort = "$STR_EPOCH_1000Rnd_65x39_Belt_Tracer_RedDesc";
		tracersEvery = 1;
		ammo = "B_65x39_Caseless";
		displaynameshort = "$STR_EPOCH_VEHICLE_AMMO_DISPLAY_NAME_SHORT_TRACER";
	};
	class 1000Rnd_65x39_Belt_Green: 1000Rnd_65x39_Belt
	{
		displayName = "$STR_EPOCH_1000Rnd_65x39_Belt_GreenName";
		descriptionShort = "$STR_EPOCH_1000Rnd_65x39_Belt_GreenDesc";
		ammo = "B_65x39_Case_green";
	};
	class 1000Rnd_65x39_Belt_Tracer_Green: 1000Rnd_65x39_Belt_Green
	{
		displayName = "$STR_EPOCH_1000Rnd_65x39_Belt_Tracer_GreenName";
		descriptionShort = "$STR_EPOCH_1000Rnd_65x39_Belt_Tracer_GreenDesc";
		tracersEvery = 1;
		displaynameshort = "$STR_EPOCH_VEHICLE_AMMO_DISPLAY_NAME_SHORT_TRACER";
	};
	class 1000Rnd_65x39_Belt_Yellow: 1000Rnd_65x39_Belt
	{
		displayName = "$STR_EPOCH_1000Rnd_65x39_Belt_YellowName";
		descriptionShort = "$STR_EPOCH_1000Rnd_65x39_Belt_YellowDesc";
		ammo = "B_65x39_Case_Yellow";
	};
	class 1000Rnd_65x39_Belt_Tracer_Yellow: 1000Rnd_65x39_Belt_Yellow
	{
		displayName = "$STR_EPOCH_1000Rnd_65x39_Belt_Tracer_YellowName";
		descriptionShort = "$STR_EPOCH_1000Rnd_65x39_Belt_Tracer_YellowDesc";
		tracersEvery = 1;
		displaynameshort = "$STR_EPOCH_VEHICLE_AMMO_DISPLAY_NAME_SHORT_TRACER";
	};
	class 2000Rnd_65x39_Belt: 200Rnd_65x39_Belt
	{
		author = "DirtySanchez";
		scope = 2;
		displayName = "$STR_EPOCH_2000Rnd_65x39_BeltName";
		descriptionShort = "$STR_EPOCH_2000Rnd_65x39_BeltDesc";
		model = "\x\addons\a3_epoch_assets_1\models\dshkm_mag.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_Dshkm_mag_ca.paa";
		count = 2000;
	};
	class 2000Rnd_65x39_Belt_Tracer_Red: 2000Rnd_65x39_Belt
	{
		displayName = "$STR_EPOCH_2000Rnd_65x39_Belt_Tracer_RedName";
		descriptionShort = "$STR_EPOCH_2000Rnd_65x39_Belt_Tracer_RedDesc";
		tracersEvery = 1;
		ammo = "B_65x39_Minigun_Caseless_Red_splash";
		displaynameshort = "$STR_EPOCH_VEHICLE_AMMO_DISPLAY_NAME_SHORT_TRACER";
		weight = 30;
	};
	class 2000Rnd_65x39_Belt_Green: 2000Rnd_65x39_Belt
	{
		displayName = "$STR_EPOCH_2000Rnd_65x39_Belt_GreenName";
		descriptionShort = "$STR_EPOCH_2000Rnd_65x39_Belt_GreenDesc";
		ammo = "B_65x39_Case_Green";
	};
	class 2000Rnd_65x39_Belt_Tracer_Green: 2000Rnd_65x39_Belt_Green
	{
		displayName = "$STR_EPOCH_2000Rnd_65x39_Belt_Tracer_GreenName";
		descriptionShort = "$STR_EPOCH_2000Rnd_65x39_Belt_Tracer_GreenDesc";
		tracersEvery = 1;
		displaynameshort = "$STR_EPOCH_VEHICLE_AMMO_DISPLAY_NAME_SHORT_TRACER";
		weight = 30;
	};
	class 2000Rnd_65x39_Belt_Tracer_Green_Splash: 2000Rnd_65x39_Belt_Tracer_Green
	{
		displayName = "$STR_EPOCH_2000Rnd_65x39_Belt_Tracer_Green_SplashName";
		descriptionShort = "$STR_EPOCH_2000Rnd_65x39_Belt_Tracer_Green_SplashDesc";
		ammo = "B_65x39_Minigun_Caseless_Green_splash";
	};
	class 2000Rnd_65x39_Belt_Yellow: 2000Rnd_65x39_Belt
	{
		displayName = "$STR_EPOCH_2000Rnd_65x39_Belt_YellowName";
		descriptionShort = "$STR_EPOCH_2000Rnd_65x39_Belt_YellowDesc";
		ammo = "B_65x39_Case_Yellow";
	};
	class 2000Rnd_65x39_Belt_Tracer_Yellow: 2000Rnd_65x39_Belt_Yellow
	{
		displayName = "$STR_EPOCH_2000Rnd_65x39_Belt_Tracer_YellowName";
		descriptionShort = "$STR_EPOCH_2000Rnd_65x39_Belt_Tracer_YellowDesc";
		tracersEvery = 1;
		displaynameshort = "$STR_EPOCH_VEHICLE_AMMO_DISPLAY_NAME_SHORT_TRACER";
	};
	class 2000Rnd_65x39_Belt_Tracer_Yellow_Splash: 2000Rnd_65x39_Belt_Tracer_Yellow
	{
		displayName = "$STR_EPOCH_2000Rnd_65x39_Belt_Tracer_Yellow_SplashName";
		descriptionShort = "$STR_EPOCH_2000Rnd_65x39_Belt_Tracer_Yellow_SplashDesc";
		ammo = "B_65x39_Minigun_Caseless_Yellow_splash";
	};
	class 8Rnd_82mm_Mo_shells: VehicleMagazine
	{
		author = "DirtySanchez";
		scope = 2;
		displayName = "$STR_EPOCH_8Rnd_82mm_Mo_shellsName";
		displayNameShort = "$STR_EPOCH_8Rnd_82mm_Mo_shellsNameShort";
		count = 8;
		ammo = "Sh_82mm_AMOS";
		initSpeed = 200;
		nameSound = "heat";
	};
	class 8Rnd_82mm_Mo_Flare_white: 8Rnd_82mm_Mo_shells
	{
		displayName = "$STR_EPOCH_8Rnd_82mm_Mo_Flare_whiteName";
		displayNameShort = "$STR_EPOCH_8Rnd_82mm_Mo_Flare_whiteNameShort";
		ammo = "Flare_82mm_AMOS_White";
	};
	class 8Rnd_82mm_Mo_Smoke_white: 8Rnd_82mm_Mo_shells
	{
		displayName = "$STR_EPOCH_8Rnd_82mm_Mo_Smoke_whiteName";
		displayNameShort = "$STR_EPOCH_8Rnd_82mm_Mo_Smoke_whiteNameShort";
		ammo = "Smoke_82mm_AMOS_White";
	};
	class 8Rnd_82mm_Mo_guided: 8Rnd_82mm_Mo_shells
	{
		displayName = "$STR_EPOCH_8Rnd_82mm_Mo_guidedName";
		displayNameShort = "$STR_EPOCH_8Rnd_82mm_Mo_guidedNameShort";
		ammo = "Sh_82mm_AMOS_guided";
	};
	class 8Rnd_82mm_Mo_LG: 8Rnd_82mm_Mo_shells
	{
		displayName = "$STR_EPOCH_8Rnd_82mm_Mo_LGName";
		displayNameShort = "$STR_EPOCH_8Rnd_82mm_Mo_LGNameShort";
		ammo = "Sh_82mm_AMOS_LG";
	};
	class 24Rnd_PG_missiles: VehicleMagazine
	{
		author = "DirtySanchez";
		scope = 2;
		displayName = "$STR_EPOCH_24Rnd_PG_missilesName";
		displayNameShort = "$STR_EPOCH_24Rnd_PG_missilesNameShort";
		descriptionShort = "$STR_EPOCH_24Rnd_PG_missilesDesc";
		model = "\x\addons\a3_epoch_assets_1\models\m134_mag.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_m134_mag_ca.paa";
		count = 24;
		ammo = "M_PG_AT";
		initSpeed = 30;
		maxLeadSpeed = 650;
		nameSound = "missiles";
		sound[] = {"A3\sounds_f\dummysound", 3.16228, 1};
		reloadSound[] = {"A3\sounds_f\dummysound", 0.000316228, 1};
	};
	class 12Rnd_PG_missiles: 24Rnd_PG_missiles
	{
		displayName = "$STR_EPOCH_24Rnd_PG_missilesName";
		displayNameShort = "$STR_EPOCH_24Rnd_PG_missilesNameShort";
		descriptionShort = "$STR_EPOCH_12Rnd_PG_missilesDesc";
		count = 12;
		weight = 72;
	};
	class 24Rnd_missiles: VehicleMagazine
	{
		displayName = "$STR_EPOCH_24Rnd_missilesName";
		displayNameShort = "$STR_EPOCH_24Rnd_missilesNameShort";
		descriptionShort = "$STR_EPOCH_24Rnd_missilesDesc";
		scope = 2;
		count = 24;
		ammo = "M_AT";
		initSpeed = 44;
		maxLeadSpeed = 800;
		nameSound = "rockets";
		sound[] = {"A3\sounds_f\weapons\rockets\explosion_missile_01", 1, 1, 1200};
		reloadSound[] = {"", 0.000316228, 1};
		weight = 144;
	};
	class 12Rnd_missiles: 24Rnd_missiles
	{
		displayName = "$STR_EPOCH_24Rnd_missilesName";
		displayNameShort = "$STR_EPOCH_24Rnd_missilesNameShort";
		descriptionShort = "$STR_EPOCH_12Rnd_missilesDesc";
		count = 12;
	};
	class 60Rnd_40mm_GPR_shells: VehicleMagazine
	{
		author = "DirtySanchez";
		scope = 2;
		displayName = "$STR_EPOCH_60Rnd_40mm_GPR_shellsName";
		descriptionShort = "$STR_EPOCH_60Rnd_40mm_GPR_shellsDesc";
		displayNameShort = "$STR_EPOCH_60Rnd_40mm_GPR_shellsNameShort";
		model = "\x\addons\a3_epoch_assets_1\models\40mm_mag.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_40mm_mag_ca.paa";
		ammo = "B_40mm_GPR";
		count = 60;
		initSpeed = 1035;
		maxLeadSpeed = 100;
		nameSound = "cannon";
		tracersEvery = 1;
	};
	class 60Rnd_40mm_GPR_Tracer_Red_shells: 60Rnd_40mm_GPR_shells
	{
		displayName = "$STR_EPOCH_60Rnd_40mm_GPR_Tracer_Red_shellsName";
		descriptionShort = "$STR_EPOCH_60Rnd_40mm_GPR_Tracer_Red_shellsDesc";
		displayNameShort = "$STR_EPOCH_60Rnd_40mm_GPR_Tracer_Red_shellsNameShort";
		ammo = "B_40mm_GPR_Tracer_Red";
	};
	class 60Rnd_40mm_GPR_Tracer_Green_shells: 60Rnd_40mm_GPR_shells
	{
		displayName = "$STR_EPOCH_60Rnd_40mm_GPR_Tracer_Green_shellsName";
		descriptionShort = "$STR_EPOCH_60Rnd_40mm_GPR_Tracer_Green_shellsDesc";
		displayNameShort = "$STR_EPOCH_60Rnd_40mm_GPR_Tracer_Green_shellsNameShort";
		ammo = "B_40mm_GPR_Tracer_Green";
	};
	class 60Rnd_40mm_GPR_Tracer_Yellow_shells: 60Rnd_40mm_GPR_shells
	{
		displayName = "$STR_EPOCH_60Rnd_40mm_GPR_Tracer_Yellow_shellsName";
		descriptionShort = "$STR_EPOCH_60Rnd_40mm_GPR_Tracer_Yellow_shellsDesc";
		displayNameShort = "$STR_EPOCH_60Rnd_40mm_GPR_Tracer_Yellow_shellsNameShort";
		ammo = "B_40mm_GPR_Tracer_Yellow";
	};
	class 40Rnd_40mm_APFSDS_shells: 60Rnd_40mm_GPR_shells
	{
		author = "DirtySanchez";
		scope = 2;
		displayName = "$STR_EPOCH_40Rnd_40mm_APFSDS_shellsName";
		descriptionShort = "$STR_EPOCH_40Rnd_40mm_APFSDS_shellsDesc";
		displayNameShort = "$STR_EPOCH_40Rnd_40mm_APFSDS_shellsNameShort";
		model = "\x\addons\a3_epoch_assets_1\models\40mm_mag.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_40mm_mag_ca.paa";
		ammo = "B_40mm_APFSDS";
		initSpeed = 1600;
		count = 40;
		maxLeadSpeed = 100;
		nameSound = "cannon";
		tracersEvery = 1;
	};
	class 40Rnd_40mm_APFSDS_Tracer_Red_shells: 40Rnd_40mm_APFSDS_shells
	{
		displayName = "$STR_EPOCH_40Rnd_40mm_APFSDS_Tracer_Red_shellsName";
		descriptionShort = "$STR_EPOCH_40Rnd_40mm_APFSDS_Tracer_Red_shellsDesc";
		displayNameShort = "$STR_EPOCH_40Rnd_40mm_APFSDS_Tracer_Red_shellsNameShort";
		ammo = "B_40mm_APFSDS_Tracer_Red";
		count = 40;
	};
	class 40Rnd_40mm_APFSDS_Tracer_Green_shells: 40Rnd_40mm_APFSDS_Tracer_Red_shells
	{
		displayName = "$STR_EPOCH_40Rnd_40mm_APFSDS_Tracer_Green_shellsName";
		descriptionShort = "$STR_EPOCH_40Rnd_40mm_APFSDS_Tracer_Green_shellsDesc";
		displayNameShort = "$STR_EPOCH_40Rnd_40mm_APFSDS_Tracer_Green_shellsNameShort";
		ammo = "B_40mm_APFSDS_Tracer_Green";
	};
	class 40Rnd_40mm_APFSDS_Tracer_Yellow_shells: 40Rnd_40mm_APFSDS_Tracer_Red_shells
	{
		displayName = "$STR_EPOCH_40Rnd_40mm_APFSDS_Tracer_Yellow_shellsName";
		descriptionShort = "$STR_EPOCH_40Rnd_40mm_APFSDS_Tracer_Yellow_shellsDesc";
		displayNameShort = "$STR_EPOCH_40Rnd_40mm_APFSDS_Tracer_Yellow_shellsNameShort";
		ammo = "B_40mm_APFSDS_Tracer_Yellow";
	};
	class 250Rnd_30mm_HE_shells;
	class 140Rnd_30mm_MP_shells: 250Rnd_30mm_HE_shells
	{
		author = "DirtySanchez";
		scope = 2;
		displayName = "$STR_EPOCH_140Rnd_30mm_MP_shellsName";
		descriptionShort = "$STR_EPOCH_140Rnd_30mm_MP_shellsDesc";
		displayNameShort = "$STR_EPOCH_140Rnd_30mm_MP_shellsNameShort";
		model = "\x\addons\a3_epoch_assets_1\models\30mm_mag.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_30mm_mag_ca.paa";
		ammo = "B_30mm_MP";
		initSpeed = 1070;
		count = 140;
		maxLeadSpeed = 300;
		nameSound = "cannon";
		tracersEvery = 1;
		weight = 126;
	};
	class 140Rnd_30mm_MP_shells_Tracer_Red: 140Rnd_30mm_MP_shells
	{
		displayName = "$STR_EPOCH_140Rnd_30mm_MP_shells_Tracer_RedName";
		descriptionShort = "$STR_EPOCH_140Rnd_30mm_MP_shells_Tracer_RedDesc";
		displayNameShort = "$STR_EPOCH_140Rnd_30mm_MP_shells_Tracer_RedNameShort";
		ammo = "B_30mm_MP_Tracer_Red";
		count = 140;
	};
	class 140Rnd_30mm_MP_shells_Tracer_Green: 140Rnd_30mm_MP_shells_Tracer_Red
	{
		displayName = "$STR_EPOCH_140Rnd_30mm_MP_shells_Tracer_GreenName";
		descriptionShort = "$STR_EPOCH_140Rnd_30mm_MP_shells_Tracer_GreenDesc";
		displayNameShort = "$STR_EPOCH_140Rnd_30mm_MP_shells_Tracer_GreenNameShort";
		ammo = "B_30mm_MP_Tracer_Green";
	};
	class 140Rnd_30mm_MP_shells_Tracer_Yellow: 140Rnd_30mm_MP_shells_Tracer_Red
	{
		displayName = "$STR_EPOCH_140Rnd_30mm_MP_shells_Tracer_YellowName";
		descriptionShort = "$STR_EPOCH_140Rnd_30mm_MP_shells_Tracer_YellowDesc";
		displayNameShort = "$STR_EPOCH_140Rnd_30mm_MP_shells_Tracer_YellowNameShort";
		ammo = "B_30mm_MP_Tracer_Yellow";
	};
	class 60Rnd_30mm_APFSDS_shells: VehicleMagazine
	{
		author = "DirtySanchez";
		scope = 2;
		displayName = "$STR_EPOCH_60Rnd_30mm_APFSDS_shellsName";
		descriptionShort = "$STR_EPOCH_60Rnd_30mm_APFSDS_shellsDesc";
		displayNameShort = "$STR_EPOCH_60Rnd_30mm_APFSDS_shellsNameShort";
		model = "\x\addons\a3_epoch_assets_1\models\30mm_mag.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_30mm_mag_ca.paa";
		ammo = "B_30mm_APFSDS";
		initSpeed = 1430;
		count = 60;
	};
	class 60Rnd_30mm_APFSDS_shells_Tracer_Red: 60Rnd_30mm_APFSDS_shells
	{
		displayName = "$STR_EPOCH_60Rnd_30mm_APFSDS_shells_Tracer_RedName";
		descriptionShort = "$STR_EPOCH_60Rnd_30mm_APFSDS_shells_Tracer_RedDesc";
		displayNameShort = "$STR_EPOCH_60Rnd_30mm_APFSDS_shells_Tracer_RedNameShort";
		ammo = "B_30mm_APFSDS_Tracer_Red";
		tracersEvery = 1;
	};
	class 60Rnd_30mm_APFSDS_shells_Tracer_Green: 60Rnd_30mm_APFSDS_shells
	{
		displayName = "$STR_EPOCH_60Rnd_30mm_APFSDS_shells_Tracer_GreenName";
		descriptionShort = "$STR_EPOCH_60Rnd_30mm_APFSDS_shells_Tracer_GreenDesc";
		displayNameShort = "$STR_EPOCH_60Rnd_30mm_APFSDS_shells_Tracer_GreenNameShort";
		ammo = "B_30mm_APFSDS_Tracer_Green";
		tracersEvery = 1;
	};
	class 60Rnd_30mm_APFSDS_shells_Tracer_Yellow: 60Rnd_30mm_APFSDS_shells
	{
		displayName = "$STR_EPOCH_60Rnd_30mm_APFSDS_shells_Tracer_YellowName";
		descriptionShort = "$STR_EPOCH_60Rnd_30mm_APFSDS_shells_Tracer_YellowDesc";
		displayNameShort = "$STR_EPOCH_60Rnd_30mm_APFSDS_shells_Tracer_YellowNameShort";
		ammo = "B_30mm_APFSDS_Tracer_Yellow";
		tracersEvery = 1;
	};
	class KitVehicleUpgradeI_100_EPOCH : CA_Magazine
    {
        author = "DirtySanchez/He-Man";
        model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
        picture = "\x\addons\a3_epoch_community\icons\KitVehUpgI.paa";
        displayName = "$STR_EPOCH_VehicleUpgradeI_Kit100_name";
        scope = 2;
        descriptionShort = "$STR_EPOCH_VehicleUpgradeI_Kit100_desc";
        count = 1;
        mass = 100;
    };
	class KitVehicleUpgradeI_200_EPOCH : KitVehicleUpgradeI_100_EPOCH
    {
        displayName = "$STR_EPOCH_VehicleUpgradeI_Kit200_name";
        descriptionShort = "$STR_EPOCH_VehicleUpgradeI_Kit200_desc";
        mass = 200;
    };
	class KitVehicleUpgradeI_300_EPOCH : KitVehicleUpgradeI_100_EPOCH
    {
        displayName = "$STR_EPOCH_VehicleUpgradeI_Kit300_name";
        descriptionShort = "$STR_EPOCH_VehicleUpgradeI_Kit300_desc";
        mass = 300;
    };
	class KitVehicleUpgradeII_100_EPOCH : CA_Magazine
    {
        author = "DirtySanchez/He-Man";
        model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
        picture = "\x\addons\a3_epoch_community\icons\KitVehUpgII.paa";
        displayName = "$STR_EPOCH_VehicleUpgradeII_Kit100_name";
        scope = 2;
        descriptionShort = "$STR_EPOCH_VehicleUpgradeII_Kit100_desc";
        count = 1;
        mass = 100;
    };
	class KitVehicleUpgradeII_200_EPOCH : KitVehicleUpgradeII_100_EPOCH
    {
        displayName = "$STR_EPOCH_VehicleUpgradeII_Kit200_name";
        descriptionShort = "$STR_EPOCH_VehicleUpgradeII_Kit200_desc";
        mass = 200;
    };
	class KitVehicleUpgradeII_300_EPOCH : KitVehicleUpgradeII_100_EPOCH
    {
        displayName = "$STR_EPOCH_VehicleUpgradeII_Kit300_name";
        descriptionShort = "$STR_EPOCH_VehicleUpgradeII_Kit300_desc";
        mass = 300;
    };
	class KitVehicleUpgradeIII_100_EPOCH : CA_Magazine
    {
        author = "DirtySanchez/He-Man";
        model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
        picture = "\x\addons\a3_epoch_community\icons\KitVehUpgIII.paa";
        displayName = "$STR_EPOCH_VehicleUpgradeIII_Kit100_name";
        scope = 2;
        descriptionShort = "$STR_EPOCH_VehicleUpgradeIII_Kit100_desc";
        count = 1;
        mass = 100;
    };
	class KitVehicleUpgradeIII_200_EPOCH : KitVehicleUpgradeIII_100_EPOCH
    {
        displayName = "$STR_EPOCH_VehicleUpgradeIII_Kit200_name";
        descriptionShort = "$STR_EPOCH_VehicleUpgradeIII_Kit200_desc";
        mass = 200;
    };
	class KitVehicleUpgradeIII_300_EPOCH : KitVehicleUpgradeIII_100_EPOCH
    {
        displayName = "$STR_EPOCH_VehicleUpgradeIII_Kit300_name";
        descriptionShort = "$STR_EPOCH_VehicleUpgradeIII_Kit300_desc";
        mass = 300;
    };
	class KitVehicleUpgradeIV_100_EPOCH : CA_Magazine
    {
        author = "DirtySanchez/He-Man";
        model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
        picture = "\x\addons\a3_epoch_community\icons\KitVehUpgIV.paa";
        displayName = "$STR_EPOCH_VehicleUpgradeIV_Kit100_name";
        scope = 2;
        descriptionShort = "$STR_EPOCH_VehicleUpgradeIV_Kit100_desc";
        count = 1;
        mass = 100;
    };
	class KitVehicleUpgradeIV_200_EPOCH : KitVehicleUpgradeIV_100_EPOCH
    {
        displayName = "$STR_EPOCH_VehicleUpgradeIV_Kit200_name";
        descriptionShort = "$STR_EPOCH_VehicleUpgradeIV_Kit200_desc";
        mass = 200;
    };
	class KitVehicleUpgradeIV_300_EPOCH : KitVehicleUpgradeIV_100_EPOCH
    {
        displayName = "$STR_EPOCH_VehicleUpgradeIV_Kit300_name";
        descriptionShort = "$STR_EPOCH_VehicleUpgradeIV_Kit300_desc";
        mass = 300;
    };
	class ItemVehDocRara : ItemDoc1
	{
		author = "DirtySanchez";
		picture = "\x\addons\a3_epoch_community\icons\equip_topsecret_ca.paa";
        displayname = "$STR_EPOCH_VehUpgTopSecretRareDoc_name";
        scope = 2;
		descriptionShort = "$STR_EPOCH_VehUpgTopSecretRareDoc_desc";
        model = "\x\addons\a3_epoch_community\models\topsecret.p3d";
	};
	class BarrelBomb_EPOCH_Remote_Mag: CA_Magazine
	{
		author = "DirtySanchez";
		scope = 2;
		displayName = "Barrel Bomb(Upright)";
		picture = "\x\addons\a3_epoch_community\textures\barrelbomb\barrelbomb_icon_ca.paa";
		model = "\x\addons\a3_epoch_community\models\barrel_bomb.p3d";
		descriptionShort = "Type: BarrelBomb<br />Rounds: 1<br />Used on: Ground";
		class Library
		{
			libTextDesc = "A Barrel Bomb is a large explosive placeable on the ground. It can be set to detonate either by using the built-in timer or a remote detonator. They are stronger than an explosive charge, capable of destroying whole buildings, but easier to spot.";
		};
		descriptionUse = "<t color='#9cf953'>Use: </t>Set Charge";
		type = "2*		256";
		allowedSlots[] = {901};
		value = 5;
		ammo = "BarrelBomb_EPOCH_Remote_Ammo";
		mass = 150;
		count = 1;
		initSpeed = 0;
		maxLeadSpeed = 0;
		nameSoundWeapon = "satchelcharge";
		nameSound = "satchelcharge";
		weaponPoolAvailable = 1;
		useAction = 0;
		useActionTitle = "Put %1 (%2 left)";
		sound[] = {"A3\sounds_f\dummysound", 0.000316228, 1, 10};
	};
	class BarrelBomb2_EPOCH_Remote_Mag: BarrelBomb_EPOCH_Remote_Mag
	{
		author = "DirtySanchez";
		displayName = "Barrel Bomb(Horizontal)";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_oildrum_e_CA.paa";
		model = "\x\addons\a3_epoch_assets_1\models\oil_drum_model.p3d";
		ammo = "BarrelBomb2_EPOCH_Remote_Ammo";
	};
	class adrenaline_epoch: CA_Magazine
	{
		author = "Helion4/DirtySanchez";
		scope = 2;
		count = 1;
		type = 256;
		displayName = "$STR_EPOCH_Adrenaline";
		model = "\x\addons\a3_epoch_community\models\adrenaline.p3d";
		picture = "\x\addons\a3_epoch_community\textures\adrenaline\adrenaline_ca.paa";
		descriptionShort = "$STR_EPOCH_AdrenalineShotDesc";
		mass = 1;
	};
	class morphine_epoch: CA_Magazine
	{
		author = "Helion4/DirtySanchez";
		scope = 2;
		count = 1;
		type = 256;
		displayName = "$STR_EPOCH_Morphine";
		model = "\x\addons\a3_epoch_community\models\morphine.p3d";
		picture = "\x\addons\a3_epoch_community\icons\morphine_icon_ca.paa";
		descriptionShort = "$STR_EPOCH_MorphineShotDesc";
		mass = 1;
	};
	class caffeinepills_epoch: CA_Magazine
	{
		author = "Helion4/DirtySanchez";
		scope = 2;
		count = 10;
		type = 256;
		displayName = "$STR_EPOCH_caffeinepills";
		model = "\x\addons\a3_epoch_community\models\caffeinepills.p3d";
		picture = "\x\addons\a3_epoch_community\textures\caffeinepills\caffeinepills_icon_ca.paa";
		descriptionShort = "$STR_EPOCH_CaffeinePillsDesc";
		mass = 1;
	};
	class orlistat_epoch: CA_Magazine
	{
		author = "Helion4/DirtySanchez";
		scope = 2;
		count = 10;
		type = 256;
		displayName = "$STR_EPOCH_orlistat";
		model = "\x\addons\a3_epoch_community\models\orlistat.p3d";
		picture = "\x\addons\a3_epoch_community\textures\orlistat\orlistat_icon_ca.paa";
		descriptionShort = "$STR_EPOCH_OrlistatDesc";
		mass = 1;
	};
	class nanite_cream_epoch: CA_Magazine
	{
		author = "Helion4/DirtySanchez";
		scope = 2;
		count = 1;
		type = 256;
		displayName = "$STR_EPOCH_NaniteCream";
		model = "\x\addons\a3_epoch_community\models\Rad_treatment\cream\rad_cream.p3d";
		picture = "\x\addons\a3_epoch_community\icons\rad_iodide_icon_ca.paa";
		descriptionShort = "$STR_EPOCH_NaniteCreamDesc";
		mass = 1;
	};
	class nanite_gun_epoch: CA_Magazine
	{
		author = "Helion4/DirtySanchez";
		scope = 2;
		count = 1;
		type = 256;
		displayName = "$STR_EPOCH_NaniteGun";
		model = "\x\addons\a3_epoch_community\models\Rad_treatment\nanite\rad_nanite_gun.p3d";
		picture = "\x\addons\a3_epoch_community\icons\rad_nanite_gun_icon_ca.paa";
		descriptionShort = "$STR_EPOCH_NaniteGunDesc";
		mass = 1;
	};
	class nanite_pills_epoch: CA_Magazine
	{
		author = "Helion4/DirtySanchez";
		scope = 2;
		count = 1;
		type = 256;
		displayName = "$STR_EPOCH_NanitePills";
		model = "\x\addons\a3_epoch_community\models\Rad_treatment\nanite\rad_nanite_pills.p3d";
		picture = "\x\addons\a3_epoch_community\icons\rad_nanite_pills_icon_ca.paa";
		descriptionShort = "$STR_EPOCH_NanitePillsDesc";
		mass = 1;
	};
	class iodide_pills_epoch: CA_Magazine
	{
		author = "Helion4/DirtySanchez";
		scope = 2;
		count = 1;
		type = 256;
		displayName = "$STR_EPOCH_IodidePills";
		model = "\x\addons\a3_epoch_community\models\Rad_treatment\iodide\pot_iodide.p3d";
		picture = "\x\addons\a3_epoch_community\icons\rad_iodide_icon_ca.paa";
		descriptionShort = "$STR_EPOCH_IodidePillsDesc";
		mass = 1;
	};
	class ItemCereals: CA_Magazine
	{
		author = "He-Man/DirtySanchez";
		scope = 2;
		count = 1;
		type = 256;
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_CerealsBox_F.jpg";
		displayName = "$STR_EPOCH_Cereals";
		model = "\A3\Structures_F_EPA\Items\Food\CerealsBox_F.p3d";
		descriptionShort = "$STR_EPOCH_CerealsDesc";
		mass = 1;
	};
	class ItemPowderMilk: CA_Magazine
	{
		author = "He-Man/DirtySanchez";
		scope = 2;
		count = 1;
		type = 256;
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_PowderedMilk_F.jpg";
		displayName = "$STR_EPOCH_PowderedMilk";
		model = "\A3\Structures_F_EPA\Items\Food\PowderedMilk_F.p3d";
		descriptionShort = "$STR_EPOCH_PowderedMilkDesc";
		mass = 1;
	};
	class ItemRiceBox: CA_Magazine
	{
		author = "He-Man/DirtySanchez";
		scope = 2;
		count = 1;
		type = 256;
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_RiceBox_F.jpg";
		displayName = "$STR_EPOCH_ItemRiceBox";
		model = "\A3\Structures_F_EPA\Items\Food\RiceBox_F.p3d";
		descriptionShort = "$STR_EPOCH_ItemRiceBoxDesc";
		mass = 1;
	};
	class ItemVitamins: CA_Magazine
	{
		author = "He-Man/DirtySanchez";
		scope = 2;
		count = 1;
		type = 256;
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_VitaminBottle_F.jpg";
		displayName = "$STR_EPOCH_ItemVitamins";
		model = "\A3\Structures_F_EPA\Items\Medical\VitaminBottle_F.p3d";
		descriptionShort = "$STR_EPOCH_ItemVitaminsDesc";
		mass = 1;
	};
	class ItemAntibiotic: CA_Magazine
	{
		author = "He-Man/DirtySanchez";
		scope=2;
		count = 1;
		type = 256;
		picture="\A3\EditorPreviews_F\Data\CfgVehicles\land_antibiotic_f.jpg";
		model="\A3\structures_f_epa\Items\Medical\Antibiotic_F.p3d";
		displayName="$STR_EPOCH_Antibiotic";
		descriptionShort="$STR_EPOCH_AntibioticDesc";
		mass=3;
	};
	class ItemKnife: CA_Magazine
	{
		author = "He-Man/DirtySanchez";
		scope=2;
		count = 1;
		type = 256;
		picture="\A3\EditorPreviews_F\Data\CfgVehicles\land_tableware_01_knife_f.jpg";
		model="\A3\Structures_F_Heli\Items\Food\Tableware_01_knife_F.p3d";
		displayName="$STR_EPOCH_Knife";
		descriptionShort="$STR_EPOCH_KnifeDesc";
		mass=10;
	};
	class ItemRubber: CA_Magazine
	{
		author = "He-Man/DirtySanchez";
		scope=2;
		count = 1;
		type = 256;
		picture = "\x\addons\a3_epoch_community\icons\ItemRubber.paa";
		model="\x\addons\a3_epoch_community\models\ItemRubber.p3d";
		displayName="$STR_EPOCH_Rubber";
		descriptionShort="$STR_EPOCH_RubberDesc";
		mass=8;
	};
	class ItemHumanSkull: CA_Magazine
	{
		author = "He-Man/DirtySanchez";
		scope=2;
		count = 1;
		type = 256;
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_HumanSkull_F.jpg";
		model = "a3\structures_f\civ\dead\humanskull_f.p3d";
		displayName = "$STR_EPOCH_HumanSkull";
		descriptionShort = "$STR_EPOCH_HumanSkullDesc";
		mass = 25;
	};
	class ItemExtensionCord: CA_Magazine
	{
		author = "He-Man/DirtySanchez";
		scope=2;
		count = 1;
		type = 256;
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_ExtensionCord_F.jpg";
		model = "a3\structures_f\items\electronics\extensioncord_f.p3d";
		displayName = "$STR_EPOCH_ExtensionCord";
		descriptionShort = "$STR_EPOCH_ExtensionCordDesc";
		mass = 12;
	};
	class ItemHandyCam: CA_Magazine
	{
		author = "He-Man/DirtySanchez";
		scope=2;
		count = 1;
		type = 256;
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_HandyCam_F.jpg";
		model = "a3\structures_f\items\electronics\handycam_f.p3d";
		displayName = "$STR_EPOCH_HandyCam";
		descriptionShort = "$STR_EPOCH_HandyCamDesc";
		mass = 12;
	};
	class ItemLaptop: CA_Magazine
	{
		author = "He-Man/DirtySanchez";
		scope=2;
		count = 1;
		type = 256;
		picture="\x\addons\a3_epoch_community\icons\ItemLaptop.paa";
		model="\A3\structures_f\Items\Electronics\Laptop_unfolded_F.p3d";
		displayName = "$STR_EPOCH_Laptop";
		descriptionShort = "$STR_EPOCH_LaptopDesc";
		mass = 20;
	};
	class ItemMobilePhone_old: CA_Magazine
	{
		author = "He-Man/DirtySanchez";
		scope=2;
		count = 1;
		type = 256;
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_MobilePhone_old_F.jpg";
		model="\A3\structures_f\Items\Electronics\MobilePhone_old_F.p3d";
		displayName = "$STR_EPOCH_MobilePhone_old";
		descriptionShort = "$STR_EPOCH_MobilePhone_oldDesc";
		mass = 6;
	};
	class ItemMobilePhone_smart: CA_Magazine
	{
		author = "He-Man/DirtySanchez";
		scope=2;
		count = 1;
		type = 256;
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_MobilePhone_smart_F.jpg";
		model="\A3\Structures_F\Items\Electronics\MobilePhone_smart_F.p3d";
		displayName = "$STR_EPOCH_MobilePhone_smart";
		descriptionShort = "$STR_EPOCH_MobilePhone_smartDesc";
		mass = 6;
	};
	class ItemPortableGenerator: CA_Magazine
	{
		author = "He-Man/DirtySanchez";
		scope=2;
		count = 1;
		type = 256;
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Portable_generator_F.jpg";
		model="\A3\Structures_F\Items\Electronics\Portable_generator_F.p3d";
		displayName = "$STR_EPOCH_PortableGenerator";
		descriptionShort="$STR_EPOCH_PortableGeneratorDesc";
		mass = 200;
	};
	class ItemPortableLongRangeRadio: CA_Magazine
	{
		author = "He-Man/DirtySanchez";
		scope=2;
		count = 1;
		type = 256;
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_PortableLongRangeRadio_F.jpg";
		model="\A3\structures_f\Items\Electronics\PortableLongRangeRadio_F.p3d";
		displayName = "$STR_EPOCH_PortableLongRangeRadio";
		descriptionShort = "$STR_EPOCH_PortableLongRangeRadioDesc";
		mass = 8;
	};
	class ItemSatellitePhone: CA_Magazine
	{
		author = "He-Man/DirtySanchez";
		scope=2;
		count = 1;
		type = 256;
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_SatellitePhone_F.jpg";
		model="\A3\structures_f\Items\Electronics\SatellitePhone_F.p3d";
		displayName = "$STR_EPOCH_SatellitePhone";
		descriptionShort = "$STR_EPOCH_SatellitePhoneDesc";
		mass = 40;
	};
	class ItemSurvivalRadio: CA_Magazine
	{
		author = "He-Man/DirtySanchez";
		scope=2;
		count = 1;
		type = 256;
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_SurvivalRadio_F.jpg";
		model="\A3\structures_f\Items\Electronics\SurvivalRadio_F.p3d";
		displayName = "$STR_EPOCH_SurivalRadio";
		descriptionShort = "$STR_EPOCH_SurivalRadioDesc";
		mass = 20;
	};
	class ItemBottlePlastic_Empty: CA_Magazine
	{
		author = "He-Man/DirtySanchez";
		scope=2;
		count = 1;
		type = 256;
		picture = "\x\addons\a3_epoch_community\icons\ItemBottlePlastic_Empty.paa";
		model="\A3\structures_f_epa\Items\Food\BottlePlastic_V2_F.p3d";
		displayName = "$STR_EPOCH_BottlePlastic_Empty";
		descriptionShort = "$STR_EPOCH_BottlePlastic_EmptyDesc";
		mass = 6;
	};
	class ItemBottlePlastic_Dirty: CA_Magazine
	{
		author = "He-Man/DirtySanchez";
		scope=2;
		count = 1;
		type = 256;
		picture = "\x\addons\a3_epoch_community\icons\ItemBottlePlastic_Dirty.paa";
		model="\A3\structures_f_epa\Items\Food\BottlePlastic_V2_F.p3d";
		displayName = "$STR_EPOCH_BottlePlastic_Dirty";
		descriptionShort = "$STR_EPOCH_BottlePlastic_DirtyDesc";
		mass = 6;
	};
	class ItemBottlePlastic_Clean: CA_Magazine
	{
		author = "He-Man/DirtySanchez";
		scope=2;
		count = 1;
		type = 256;
		picture = "\x\addons\a3_epoch_community\icons\ItemBottlePlastic_Clean.paa";
		model="\A3\structures_f_epa\Items\Food\BottlePlastic_V2_F.p3d";
		displayName = "$STR_EPOCH_BottlePlastic_Clean";
		descriptionShort = "$STR_EPOCH_BottlePlastic_CleanDesc";
		mass = 6;
	};
	class ItemSuitcase: CA_Magazine
	{
		author = "He-Man/DirtySanchez";
		scope=2;
		count = 1;
		type = 256;
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Suitcase_F.jpg";
		model="\A3\structures_f\Items\Luggage\Suitcase_F.p3d";
		displayName = "$STR_EPOCH_Suitcase";
		descriptionShort = "$STR_EPOCH_SuitcaseDesc";
		mass = 15;
	};
	class ItemPenBlack: CA_Magazine
	{
		author = "He-Man/DirtySanchez";
		scope=2;
		count = 1;
		type = 256;
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_PenBlack_F.jpg";
		model = "a3\structures_f\items\stationery\penblack_f.p3d";
		displayName = "$STR_EPOCH_PenBlack";
		descriptionShort = "$STR_EPOCH_PenBlackDesc";
		mass = 2;
	};
	class ItemDrillAku: CA_Magazine
	{
		author = "He-Man/DirtySanchez";
		scope=2;
		count = 1;
		type = 256;
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_DrillAku_F.jpg";
		model="\A3\structures_f\Items\Tools\DrillAku_F.p3d";
		displayName="$STR_EPOCH_DrillAku";
		descriptionShort="$STR_EPOCH_DrillAkuDesc";
		mass=10;
	};
	class ItemGrinder: CA_Magazine
	{
		author = "He-Man/DirtySanchez";
		scope=2;
		count = 1;
		type = 256;
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Grinder_F.jpg";
		model="\A3\structures_f\Items\Tools\Grinder_F.p3d";
		displayName="$STR_EPOCH_Grinder";
		descriptionShort="$STR_EPOCH_GrinderDesc";
		mass=10;
	};
	class ItemHammer: CA_Magazine
	{
		author = "He-Man/DirtySanchez";
		scope=2;
		count = 1;
		type = 256;
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Hammer_F.jpg";
		model="\A3\structures_f\Items\Tools\Hammer_F.p3d";
		displayName="$STR_EPOCH_Hammer";
		descriptionShort="$STR_EPOCH_HammerDesc";
		mass=8;
	};
	class ItemMeter3m: CA_Magazine
	{
		author = "He-Man/DirtySanchez";
		scope=2;
		count = 1;
		type = 256;
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Meter3m_F.jpg";
		model="\A3\structures_f\Items\Tools\Meter3m_F.p3d";
		displayName="$STR_EPOCH_Meter3m";
		descriptionShort="$STR_EPOCH_Meter3mDesc";
		mass=5;
	};
	class ItemMultiMeter: CA_Magazine
	{
		author = "He-Man/DirtySanchez";
		scope=2;
		count = 1;
		type = 256;
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_MultiMeter_F.jpg";
		model="\A3\Structures_F\Items\Tools\MultiMeter_F.p3d";
		displayName="$STR_EPOCH_MultiMeter";
		descriptionShort="$STR_EPOCH_MultiMeterDesc";
		mass=8;
	};
	class ItemPliers: CA_Magazine
	{
		author = "He-Man/DirtySanchez";
		scope=2;
		count = 1;
		type = 256;
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Pliers_F.jpg";
		model="\A3\structures_f\Items\Tools\Pliers_F.p3d";
		displayName="$STR_EPOCH_Pliers";
		descriptionShort="$STR_EPOCH_PliersDesc";
		mass=5;
	};
	class ItemSaw: CA_Magazine
	{
		author = "He-Man/DirtySanchez";
		scope=2;
		count = 1;
		type = 256;
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Saw_F.jpg";
		model="\A3\structures_f\Items\Tools\Saw_F.p3d";
		displayName="$STR_EPOCH_Saw";
		descriptionShort="$STR_EPOCH_SawDesc";
		mass=8;
	};
	class ItemScrewdriver: CA_Magazine
	{
		author = "He-Man/DirtySanchez";
		scope=2;
		count = 1;
		type = 256;
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Screwdriver_V1_F.jpg";
		model="\A3\structures_f\Items\Tools\Screwdriver_V1_F.p3d";
		displayName="$STR_EPOCH_Screwdriver";
		descriptionShort="$STR_EPOCH_ScrewdriverDesc";
		mass=5;
	};
	class ItemWrench: CA_Magazine
	{
		author = "He-Man/DirtySanchez";
		scope=2;
		count = 1;
		type = 256;
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Wrench_F.jpg";
		model="\A3\Structures_F\Items\Tools\Wrench_F.p3d";
		displayName="$STR_EPOCH_Wrench";
		descriptionShort="$STR_EPOCH_WrenchDesc";
		mass=7;
	};
	class ItemMoney: CA_Magazine
	{
		author = "He-Man/DirtySanchez";
		scope=2;
		count = 1;
		type = 256;
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Money_F.jpg";
		model="\A3\structures_f\Items\Valuables\Money_F.p3d";
		displayName="$STR_EPOCH_Money";
		descriptionShort="$STR_EPOCH_MoneyDesc";
		mass=5;
	};
	class ItemCanisterOil: CA_Magazine
	{
		author = "He-Man/DirtySanchez";
		scope=2;
		count = 1;
		type = 256;
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_CanisterOil_F.jpg";
		model = "a3\structures_f\items\vessels\canisteroil_f.p3d";
		displayName="$STR_EPOCH_CanisterOil";
		descriptionShort="$STR_EPOCH_CanisterOilDesc";
		mass=10;
	};
	class ItemBattery_small: CA_Magazine
	{
		author = "He-Man/DirtySanchez";
		scope=2;
		count = 1;
		type = 256;
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Battery_F.jpg";
		model="\A3\structures_f_epa\Items\Electronics\Battery_F.p3d";
		displayName="$STR_EPOCH_Battery";
		descriptionShort="$STR_EPOCH_BatteryDesc";
		mass=3;
	};
	class ItemBakedBeans: CA_Magazine
	{
		author = "He-Man/DirtySanchez";
		scope=2;
		count = 1;
		type = 256;
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_BakedBeans_F.jpg";
		model="\A3\structures_f_epa\Items\Food\BakedBeans_F.p3d";
		displayName="$STR_EPOCH_BakedBeans";
		descriptionShort="$STR_EPOCH_BakedBeansDesc";
		mass=5;
	};
	class ItemCanteen_Empty: CA_Magazine
	{
		author = "He-Man/DirtySanchez";
		scope=2;
		count = 1;
		type = 256;
		picture = "\x\addons\a3_epoch_community\icons\ItemCanteen_Empty.paa";
		model="\A3\structures_f_epa\Items\Food\Canteen_F.p3d";
		displayName="$STR_EPOCH_Canteen_Empty";
		descriptionShort="$STR_EPOCH_Canteen_EmptyDesc";
		mass=10;
	};
	class ItemCanteen_Dirty: CA_Magazine
	{
		author = "He-Man/DirtySanchez";
		scope=2;
		count = 1;
		type = 256;
		picture = "\x\addons\a3_epoch_community\icons\ItemCanteen_Dirty.paa";
		model="\A3\structures_f_epa\Items\Food\Canteen_F.p3d";
		displayName="$STR_EPOCH_Canteen_Dirty";
		descriptionShort="$STR_EPOCH_Canteen_DirtyDesc";
		mass=10;
	};
	class ItemCanteen_Clean: CA_Magazine
	{
		author = "He-Man/DirtySanchez";
		scope=2;
		count = 1;
		type = 256;
		picture = "\x\addons\a3_epoch_community\icons\ItemCanteen_Clean.paa";
		model="\A3\structures_f_epa\Items\Food\Canteen_F.p3d";
		displayName="$STR_EPOCH_Canteen_Clean";
		descriptionShort="$STR_EPOCH_Canteen_CleanDesc";
		mass=10;
	};
	class ItemBandage: CA_Magazine
	{
		author = "He-Man/DirtySanchez";
		scope=2;
		count = 1;
		type = 256;
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Bandage_F.jpg";
		model="\A3\structures_f_epa\Items\Medical\Bandage_F.p3d";
		displayName="$STR_EPOCH_Bandage";
		descriptionShort="$STR_EPOCH_BandageDesc";
		mass=6;
	};
	class ItemBloodBag_Empty: CA_Magazine
	{
		author = "He-Man/DirtySanchez";
		scope=2;
		count = 1;
		type = 256;
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_BloodBag_F.jpg";
		model="\A3\structures_f_epa\Items\Medical\BloodBag_F.p3d";
		displayName="$STR_EPOCH_Bloodbag_Empty";
		descriptionShort="$STR_EPOCH_Bloodbag_EmptyDesc";
		mass=6;
	};
	class ItemBloodBag_Full: CA_Magazine
	{
		author = "He-Man/DirtySanchez";
		scope=2;
		count = 1;
		type = 256;
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_BloodBag_F.jpg";
		model="\A3\structures_f_epa\Items\Medical\BloodBag_F.p3d";
		displayName="$STR_EPOCH_Bloodbag_Full";
		descriptionShort="$STR_EPOCH_Bloodbag_FullDesc";
		mass=6;
	};
	class ItemDefibrillator: CA_Magazine
	{
		author = "He-Man/DirtySanchez";
		scope=2;
		count = 10;
		type = 256;
		picture="\x\addons\a3_epoch_community\icons\ItemDefibrillator.paa";
		model="\A3\structures_f_epa\Items\Medical\Defibrillator_F.p3d";
		displayName="$STR_EPOCH_Defibrillator";
		descriptionShort="$STR_EPOCH_DefibrillatorDesc";
		mass=30;
	};
	class BaseCam: CA_Magazine
	{
		author="Helion";
		model="\x\addons\a3_epoch_community\models\base_cam.p3d";
		picture = "\x\addons\a3_epoch_community\icons\BaseCam.paa";
		displayName="Base Cam";
		scope=2;
		descriptionShort="Base Cam";
		count=1;
		mass=20;
	};
	class BaseCamTerminal: CA_Magazine
	{
		author="Helion";
		model="\x\addons\a3_epoch_community\models\base_cam_terminal.p3d";
		picture = "\x\addons\a3_epoch_community\icons\BaseCam_Terminal.paa";
		displayName="Base Cam Terminal";
		scope=2;
		descriptionShort="Base Cam Terminal";
		count=1;
		mass=20;
	};
	class ItemDisinfectantSpray: CA_Magazine
	{
		author = "He-Man/DirtySanchez";
		scope=2;
		count = 1;
		type = 256;
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_DisinfectantSpray_F.jpg";
		model="\A3\structures_f_epa\Items\Medical\DisinfectantSpray_F.p3d";
		displayName="$STR_EPOCH_DisinfectantSpray";
		descriptionShort="$STR_EPOCH_DisinfectantSprayDesc";
		mass=8;
	};
	class ItemPainKillers: CA_Magazine
	{
		author = "He-Man/DirtySanchez";
		scope=2;
		count = 1;
		type = 256;
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_PainKillers_F.jpg";
		model="\A3\structures_f_epa\Items\Medical\PainKillers_F.p3d";
		displayName="$STR_EPOCH_PainKillers";
		descriptionShort="$STR_EPOCH_PainKillersDesc";
		mass=4;
	};
	class ItemWaterPurificationTablets: CA_Magazine
	{
		author = "He-Man/DirtySanchez";
		scope=2;
		count = 1;
		type = 256;
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_WaterPurificationTablets_F.jpg";
		model="\A3\structures_f_epa\Items\Medical\WaterPurificationTablets_F.p3d";
		displayName="$STR_EPOCH_WaterPurificationTablets";
		descriptionShort="$STR_EPOCH_WaterPurificationTabletsDesc";
		mass=4;
	};
	class ItemButaneCanister: CA_Magazine
	{
		author = "He-Man/DirtySanchez";
		scope=2;
		count = 1;
		type = 256;
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_ButaneCanister_F.jpg";
		model="a3\structures_f_epa\items\tools\butanecanister_f.p3d";
		displayName="$STR_EPOCH_ButaneCanister";
		descriptionShort="$STR_EPOCH_ButaneCanisterDesc";
		mass=6;
	};
	class ItemButaneTorch: CA_Magazine
	{
		author = "He-Man/DirtySanchez";
		scope=2;
		count = 1;
		type = 256;
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_ButaneTorch_F.jpg";
		model="\A3\structures_f_epa\Items\Tools\ButaneTorch_F.p3d";
		displayName="$STR_EPOCH_ButaneTorch";
		descriptionShort="$STR_EPOCH_ButaneTorchDesc";
		mass=10;
	};
	class ItemCanOpener: CA_Magazine
	{
		author = "He-Man/DirtySanchez";
		scope=2;
		count = 1;
		type = 256;
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_CanOpener_F.jpg";
		model="\A3\Structures_F_EPA\Items\Tools\CanOpener_F.p3d";
		displayName="$STR_EPOCH_CanOpener";
		descriptionShort="$STR_EPOCH_CanOpenerDesc";
		mass=8;
	};
	class ItemFireExtinguisher: CA_Magazine
	{
		author = "He-Man/DirtySanchez";
		scope=2;
		count = 5;
		type = 256;
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_FireExtinguisher_F.jpg";
		model="\A3\structures_f_epa\Items\Tools\FireExtinguisher_F.p3d";
		displayName="$STR_EPOCH_FireExtinguisher";
		descriptionShort="$STR_EPOCH_FireExtinguisherDesc";
		mass=30;
	};
	class ItemGasCanister: CA_Magazine
	{
		author = "He-Man/DirtySanchez";
		scope=2;
		count = 1;
		type = 256;
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\land_gascanister_f.jpg";
		model="a3\structures_f_epa\items\tools\gascanister_f.p3d";
		displayName="$STR_EPOCH_GasCanister";
		descriptionShort="$STR_EPOCH_GasCanisterDesc";
		mass=6;
	};
	class ItemGasCooker: CA_Magazine
	{
		author = "He-Man/DirtySanchez";
		scope=2;
		count = 1;
		type = 256;
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\land_gascooker_f.jpg";
		model="a3\structures_f_epa\items\tools\gascooker_f.p3d";
		displayName="$STR_EPOCH_GasCooker";
		descriptionShort="$STR_EPOCH_GasCookerDesc";
		mass=10;
	};
	class ItemMatches: CA_Magazine
	{
		author = "He-Man/DirtySanchez";
		scope=2;
		count = 1;
		type = 256;
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Matches_F.jpg";
		model="\A3\structures_f_epa\Items\Tools\Matches_F.p3d";
		displayName="$STR_EPOCH_Matches";
		descriptionShort="$STR_EPOCH_MatchesDesc";
		mass=3;
	};
	class ItemMetalWire: CA_Magazine
	{
		author = "He-Man/DirtySanchez";
		scope=2;
		count = 1;
		type = 256;
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_MetalWire_F.jpg";
		model="\A3\structures_f_epa\Items\Tools\MetalWire_F.p3d";
		displayName="$STR_EPOCH_MetalWire";
		descriptionShort="$STR_EPOCH_MetalWireDesc";
		mass=20;
	};
	class ItemShovel: CA_Magazine
	{
		author = "He-Man/DirtySanchez";
		scope=2;
		count = 1;
		type = 256;
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Shovel_F.jpg";
		model="\A3\Structures_F_epa\Items\Tools\Shovel_F.p3d";
		displayName="$STR_EPOCH_Shovel";
		descriptionShort="$STR_EPOCH_ShovelDesc";
		mass=10;
	};
	class ItemTinContainer: CA_Magazine
	{
		author = "He-Man/DirtySanchez";
		scope=2;
		count = 1;
		type = 256;
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_TinContainer_F.jpg";
		model="a3\structures_f_epa\items\vessels\tincontainer_f.p3d";
		displayName="$STR_EPOCH_TinContainer";
		descriptionShort="$STR_EPOCH_TinContainerDesc";
		mass=6;
	};
	class ItemCampingLight: CA_Magazine
	{
		author = "He-Man/DirtySanchez";
		scope=2;
		count = 1;
		type = 256;
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Camping_Light_F.jpg";
		model = "a3\structures_f_epb\civ\camping\camping_light_f.p3d";
		displayName="$STR_EPOCH_CampingLight";
		descriptionShort="$STR_EPOCH_CampingLightDesc";
		mass=12;
	};
	class SmeltingTools_EPOCH: CA_Magazine
	{
		author = "Helion4/DirtySanchez";
		scope = 2;
		count = 1;
		type = 256;
		model = "\x\addons\a3_epoch_community\models\smelting.p3d";
		picture = "\x\addons\a3_epoch_community\textures\smelting\smelting_icon_ca.paa";
		displayName = "$STR_EPOCH_SmeltingToolsName";
		descriptionShort = "$STR_EPOCH_SmeltingToolsDesc";
		mass = 20;
	};
	class atropine_epoch: CA_Magazine
	{
		author = "Helion4/DirtySanchez";
		scope = 2;
		count = 1;
		type = 256;
		displayName = "$STR_EPOCH_atropine";
		model = "\x\addons\a3_epoch_community\models\atropine.p3d";
		picture = "\x\addons\a3_epoch_community\textures\atropine\atropine_icon_ca.paa";
		descriptionShort = "$STR_EPOCH_AtropineShotDesc";
		mass = 1;
	};
	class krypto_candy_epoch: CA_Magazine
	{
		author = "Helion4/DirtySanchez";
		scope = 2;
		count = 1;
		type = 256;
		displayName = "$STR_EPOCH_KryptoCandyName";
		model = "\x\addons\a3_epoch_community\models\krypto.p3d";
		picture = "\x\addons\a3_epoch_community\textures\food\krypto_icon_ca.paa";
		descriptionShort = "$STR_EPOCH_KryptoCandyDesc";
		mass = 1;
	};
	class bluburger_epoch: CA_Magazine
	{
		author = "Helion4/DirtySanchez";
		scope = 2;
		count = 1;
		type = 256;
		displayName = "$STR_EPOCH_BluKingBurgerName";
		model = "\x\addons\a3_epoch_community\models\bluburger.p3d";
		picture = "\x\addons\a3_epoch_community\textures\food\bluburger_icon_ca.paa";
		descriptionShort = "$STR_EPOCH_BluKingBurgerDesc";
		mass = 1;
	};
	class redburger_epoch: CA_Magazine
	{
		author = "Helion4/DirtySanchez";
		scope = 2;
		count = 1;
		type = 256;
		displayName = "$STR_EPOCH_RedKingBurgerName";
		model = "\x\addons\a3_epoch_community\models\redburger.p3d";
		picture = "\x\addons\a3_epoch_community\textures\food\redburger_icon_ca.paa";
		descriptionShort = "$STR_EPOCH_RedKingBurgerDesc";
		mass = 1;
	};
	class gyro_wrap_epoch: CA_Magazine
	{
		author = "Helion4/DirtySanchez";
		scope = 2;
		count = 1;
		type = 256;
		displayName = "$STR_EPOCH_GyroWrapName";
		model = "\x\addons\a3_epoch_community\models\wrap.p3d";
		picture = "\x\addons\a3_epoch_community\textures\food\gyro_icon_ca.paa";
		descriptionShort = "$STR_EPOCH_GyroWrapDesc";
		mass = 1;
	};
	class icecream_epoch: CA_Magazine
	{
		author = "Helion4/DirtySanchez";
		scope = 2;
		count = 1;
		type = 256;
		displayName = "$STR_EPOCH_IceCreamName";
		model = "\x\addons\a3_epoch_community\models\icecream.p3d";
		picture = "\x\addons\a3_epoch_community\textures\food\icecream_icon_ca.paa";
		descriptionShort = "$STR_EPOCH_IceCreamDesc";
		mass = 1;
	};
	class KitBarbedWire : CA_Magazine
    {
        author = "Helion4/DirtySanchez";
		scope = 2;
        count = 1;
		model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_wooden_crate_ca.paa";
        displayName = "$STR_EPOCH_BarbedWire";
        descriptionShort = "$STR_EPOCH_BarbedWireDesc";
        mass = 20;
    };
	class ItemCanvas : CA_Magazine
    {
        author = "Helion4/DirtySanchez";
		scope = 2;
		count = 1;
		type = 256;
        picture = "\x\addons\a3_epoch_community\textures\canvas\canvas_icon_ca.paa";
        displayname = "$STR_EPOCH_ItemCanvas";
        model = "\x\addons\a3_epoch_community\models\canvas.p3d";
        descriptionShort = "$STR_EPOCH_ItemCanvasDesc";
        mass = 1;
    };
	class KitTentA : CA_Magazine
    {
        author = "Helion4/DirtySanchez";
        scope = 2;
		count = 1;
		type = 256;
		picture = "\x\addons\a3_epoch_community\textures\tentbags\tentbag_icon_ca.paa";
        displayname = "$STR_EPOCH_TentA";
        model = "\x\addons\a3_epoch_community\models\tent_camo.p3d";
        descriptionShort = "$STR_EPOCH_TentADesc";
        mass = 15;
    };
	class KitTentDome : CA_Magazine
    {
        author = "Helion4/DirtySanchez";
        scope = 2;
		count = 1;
		type = 256;
		picture = "\x\addons\a3_epoch_community\textures\tentbags\dome_icon_ca.paa";
        displayname = "$STR_EPOCH_TentDome";
        model = "\x\addons\a3_epoch_community\models\tent_dome.p3d";
        descriptionShort = "$STR_EPOCH_TentDomeDesc";
        mass = 20;
    };
	class Kit_IG_Box_s: CA_Magazine
	{
		author="Helion / Timst";
		scope=2;
		count=1;
		type=256;
		displayName="Storage Box small";
		model="\x\addons\a3_epoch_community\models\IG_box_small.p3d";
		picture="\x\addons\a3_epoch_community\icons\IG_box.paa";
		descriptionShort="A small storage Box";
		mass=50;
	};
	class Kit_IG_Box_l: CA_Magazine
	{
		author="Helion / Timst";
		scope=2;
		count=1;
		type=256;
		displayName="Storage Box large";
		model="\x\addons\a3_epoch_community\models\IG_box_large.p3d";
		picture="\x\addons\a3_epoch_community\icons\IG_box.paa";
		descriptionShort="A large storage Box";
		mass=150;
	};
	class KitBurnBarrel: CA_Magazine
	{
		author = "Grahame";
		model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_wooden_crate_ca.paa"; // needs icon
		displayName = "$STR_EPOCH_BurnBarrel";
		scope = 2;
		descriptionShort = "$STR_EPOCH_BurnBarrel";
		count = 1;
		mass = 20;
	};
	class KitLightPole: CA_Magazine
	{
		author = "Grahame";
		model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_wooden_crate_ca.paa"; // needs icon
		displayName = "$STR_EPOCH_LightPole";
		scope = 2;
		descriptionShort = "$STR_EPOCH_LightPole";
		count = 1;
		mass = 20;
	};
	class KitSmallForestCamoNet: CA_Magazine
	{
		author = "Grahame";
		model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_wooden_crate_ca.paa"; // needs icon
		displayName = "$STR_EPOCH_SmallForestCamoNet";
		scope = 2;
		descriptionShort = "$STR_EPOCH_SmallForestCamoNet";
		count = 1;
		mass = 20;
	};
	class KitSmallDesertCamoNet: CA_Magazine
	{
		author = "Grahame";
		model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_wooden_crate_ca.paa"; // needs icon
		displayName = "$STR_EPOCH_SmallDesertCamoNet";
		scope = 2;
		descriptionShort = "$STR_EPOCH_SmallDesertCamoNet";
		count = 1;
		mass = 20;
	};
	class KitLargeForestCamoNet: CA_Magazine
	{
		author = "Grahame";
		model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_wooden_crate_ca.paa"; // needs icon
		displayName = "$STR_EPOCH_LargeForestCamoNet";
		scope = 2;
		descriptionShort = "$STR_EPOCH_LargeForestCamoNet";
		count = 1;
		mass = 20;
	};
	class KitLargeDesertCamoNet: CA_Magazine
	{
		author = "Grahame";
		model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_wooden_crate_ca.paa"; // needs icon
		displayName = "$STR_EPOCH_LargeDesertCamoNet";
		scope = 2;
		descriptionShort = "$STR_EPOCH_LargeDesertCamoNet";
		count = 1;
		mass = 20;
	};
	class KitFirePlace_02: CA_Magazine
	{
		author = "Grahame";
		model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_wooden_crate_ca.paa"; // needs icon
		displayName = "$STR_EPOCH_FirePlace_02";
		scope = 2;
		descriptionShort = "$STR_EPOCH_FirePlace_02";
		count = 1;
		mass = 20;
	};
	class KitFieldToilet: CA_Magazine
	{
		author = "Grahame";
		model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_wooden_crate_ca.paa"; // needs icon
		displayName = "$STR_EPOCH_FieldToilet";
		scope = 2;
		descriptionShort = "$STR_EPOCH_FieldToilet";
		count = 1;
		mass = 20;
	};
	class KitScaffolding: CA_Magazine
	{
		author = "Grahame";
		model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_wooden_crate_ca.paa"; // needs icon
		displayName = "$STR_EPOCH_Scaffolding";
		scope = 2;
		descriptionShort = "$STR_EPOCH_Scaffolding";
		count = 1;
		mass = 20;
	};
	class KitSink: CA_Magazine
	{
		author = "Grahame";
		model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_wooden_crate_ca.paa"; // needs icon
		displayName = "$STR_EPOCH_Sink";
		scope = 2;
		descriptionShort = "$STR_EPOCH_Sink";
		count = 1;
		mass = 20;
	};
	class KitPortableLight_Single: CA_Magazine
	{
		author = "Grahame";
		model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_wooden_crate_ca.paa"; // needs icon
		displayName = "$STR_EPOCH_PortableLight_Single";
		scope = 2;
		descriptionShort = "$STR_EPOCH_PortableLight_Single";
		count = 1;
		mass = 20;
	};
	class KitPortableLight_Double: CA_Magazine
	{
		author = "Grahame";
		model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_wooden_crate_ca.paa"; // needs icon
		displayName = "$STR_EPOCH_PortableLight_Double";
		scope = 2;
		descriptionShort = "$STR_EPOCH_PortableLight_Double";
		count = 1;
		mass = 20;
	};
	class KitWatchTower: CA_Magazine
	{
		author = "Grahame";
		model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_wooden_crate_ca.paa"; // needs icon
		displayName = "$STR_EPOCH_WatchTower";
		scope = 2;
		descriptionShort = "$STR_EPOCH_WatchTower";
		count = 1;
		mass = 20;
	};
	class KitSunShade: CA_Magazine
	{
		author = "Grahame";
		model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_wooden_crate_ca.paa"; // needs icon
		displayName = "$STR_EPOCH_SunShade";
		scope = 2;
		descriptionShort = "$STR_EPOCH_SunShade";
		count = 1;
		mass = 20;
	};
	class KitFuelPump: CA_Magazine
	{
		author = "Grahame";
		model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_wooden_crate_ca.paa"; // needs icon
		displayName = "$STR_EPOCH_FuelPump";
		scope = 2;
		descriptionShort = "$STR_EPOCH_FuelPump";
		count = 1;
		mass = 20;
	};
	class KitBagBunker: CA_Magazine
	{
		author = "Grahame";
		model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_wooden_crate_ca.paa"; // needs icon
		displayName = "$STR_EPOCH_BagBunker";
		scope = 2;
		descriptionShort = "$STR_EPOCH_BagBunker";
		count = 1;
		mass = 20;
	};
	class KitSandbagWall: CA_Magazine
	{
		author = "Grahame";
		model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_wooden_crate_ca.paa"; // needs icon
		displayName = "$STR_EPOCH_SandbagWall";
		scope = 2;
		descriptionShort = "$STR_EPOCH_SandbagWall";
		count = 1;
		mass = 20;
	};
	class KitSandbagWallLong: CA_Magazine
	{
		author = "Grahame";
		model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_wooden_crate_ca.paa"; // needs icon
		displayName = "$STR_EPOCH_SandbagWallLong";
		scope = 2;
		descriptionShort = "$STR_EPOCH_SandbagWallLong";
		count = 1;
		mass = 20;
	};
	class KitBarGate: CA_Magazine
	{
		author = "Grahame";
		model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_wooden_crate_ca.paa"; // needs icon
		displayName = "$STR_EPOCH_BarGate";
		scope = 2;
		descriptionShort = "$STR_EPOCH_BarGate";
		count = 1;
		mass = 20;
	};
	class KitWaterPump: CA_Magazine
	{
		author = "Grahame";
		model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_wooden_crate_ca.paa"; // needs icon
		displayName = "$STR_EPOCH_WaterPump";
		scope = 2;
		descriptionShort = "$STR_EPOCH_WaterPump";
		count = 1;
		mass = 20;
	};
	class HotAxeSauce_epoch: CA_Magazine
	{
		author = "Helion4/DirtySanchez";
		scope = 2;
		count = 1;
		type = 256;
		displayName = "$STR_EPOCH_HotAxeSauce";
		model = "\x\addons\a3_epoch_community\models\hotsauce.p3d";
		picture = "\x\addons\a3_epoch_community\icons\hotsauce_icon_ca.paa";
		descriptionShort = "$STR_EPOCH_HotAxeSauceDesc";
		mass = 3;
	};
	class KitSleepingBagGreen: CA_Magazine
	{
		author = "Grahame";
		model = "\A3\Structures_F\Civ\Camping\Sleeping_bag_folded_F.p3d";
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Sleeping_bag_folded_F.jpg";
		displayName = "Green Sleeping Bag";
		scope = 2;
		count = 1;
		mass = 5;
	};

	class KitSleepingBagBlue: CA_Magazine
	{
		author = "Grahame";
		model = "\A3\Structures_F\Civ\Camping\Sleeping_bag_blue_folded_F.p3d";
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Sleeping_bag_blue_folded_F.jpg";
		displayName = "Blue Sleeping Bag";
		scope = 2;
		count = 1;
		mass = 5;
	};

	class KitSleepingBagBrown: CA_Magazine
	{
		author = "Grahame";
		model = "\A3\Structures_F\Civ\Camping\Sleeping_bag_brown_folded_F.p3d";
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Sleeping_bag_brown_folded_F.jpg";
		displayName = "Brown Sleeping Bag";
		scope = 2;
		count = 1;
		mass = 5;
	};

	class PC_Case: CA_Magazine
	{
		author = "Grahame";
		model = "\A3\Structures_F_Heli\Items\Electronics\PCSet_01_case_F.p3d";
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_PCSet_01_case_F.jpg";
		displayName = "PC Case";
		scope = 2;
		count = 1;
		mass = 20;
	};

	class PC_Screen: CA_Magazine
	{
		author = "Grahame";
		model = "\A3\Structures_F_Heli\Items\Electronics\PCSet_01_screen_F.p3d";
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_PCSet_01_screen_F.jpg";
		displayName = "PC Screen";
		scope = 2;
		count = 1;
		mass = 10;
		hiddenSelections[] = {"Camo_1"};
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0,0,0,0,co)"};
		hiddenSelectionsMaterials[] = {"\A3\Data_F\Lights\Lamp_lcd.rvmat"};
		class Attributes
		{
			class ObjectTextureCustom0
			{
				displayName = "$STR_3den_object_attribute_objecttexturecustom0_displayname";
				tooltip = "$STR_3den_object_attribute_objecttexturecustom_tooltip";
				property = "ObjectTextureCustom0";
				control = "Edit";
				expression = "_this setObjectTextureGlobal [0,_value]";
				defaultValue = "getObjectTextures _this select 0";
			};
		};
	};

	class PC_Mouse: CA_Magazine
	{
		author = "Grahame";
		model = "\A3\Structures_F_Heli\Items\Electronics\PCSet_01_mouse_F.p3d";
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_PCSet_01_mouse_F.jpg";
		displayName = "PC Mouse";
		scope = 2;
		count = 1;
		mass = 1;
	};

	class PC_Keyboard: CA_Magazine
	{
		author = "Grahame";
		model = "\A3\Structures_F_Heli\Items\Electronics\PCSet_01_keyboard_F.p3d";
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_PCSet_01_keyboard_F.jpg";
		displayName = "PC Keyboard";
		scope = 2;
		count = 1;
		mass = 5;
	};

	class Tablet: CA_Magazine
	{
		author = "Grahame";
		model = "\A3\Structures_F_Heli\Items\Electronics\Tablet_01_F.p3d";
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Tablet_01_F.jpg";
		displayName = "Tablet";
		scope = 2;
		count = 1;
		mass = 10;
		hiddenSelections[] = {"Camo_1"};
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Heli\Items\Electronics\Data\Tablet_Screen_CO.paa"};
		hiddenSelectionsMaterials[] = {"\A3\Data_F\Lights\Lamp_lcd2.rvmat"};
		class Attributes
		{
			class ObjectTextureCustom0
			{
				displayName = "$STR_3den_object_attribute_objecttexturecustom0_displayname";
				tooltip = "$STR_3den_object_attribute_objecttexturecustom_tooltip";
				property = "ObjectTextureCustom0";
				control = "Edit";
				expression = "_this setObjectTextureGlobal [0,_value]";
				defaultValue = "getObjectTextures _this select 0";
			};
		};
	};

	class Rugged_Tablet: CA_Magazine
	{
		author = "Grahame";
		model = "\A3\Props_F_Exp_A\Military\Equipment\Tablet_02_F.p3d";
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Tablet_02_F.jpg";
		displayName = "Rugged Tablet";
		scope = 2;
		count = 1;
		mass = 15;
		hiddenSelections[] = {"Camo_1"};
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Heli\Items\Electronics\Data\Tablet_Screen_CO.paa"};
		hiddenSelectionsMaterials[] = {"\A3\Data_F\Lights\Lamp_lcd.rvmat"};
		class Attributes
		{
			class ObjectTextureCustom0
			{
				displayName = "$STR_3den_object_attribute_objecttexturecustom0_displayname";
				tooltip = "$STR_3den_object_attribute_objecttexturecustom_tooltip";
				property = "ObjectTextureCustom0";
				control = "Edit";
				expression = "_this setObjectTextureGlobal [0,_value]";
				defaultValue = "getObjectTextures _this select 0";
			};
		};
	};

	class Laptop: CA_Magazine
	{
		author = "Grahame";
		model = "\A3\Structures_F\Items\Electronics\Laptop_F.p3d";
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Laptop_F.jpg";
		displayName = "Laptop";
		scope = 2;
		count = 1;
		mass = 5;
	};

	class Old_Laptop: CA_Magazine
	{
		author = "Grahame";
		model = "\a3\Props_F_Argo\Items\Electronics\Laptop_02_F.p3d";
		picture = "\A3\EditorPreviews_F_Argo\Data\CfgVehicles\Land_Laptop_02_F.jpg";
		displayName = "Old Laptop";
		scope = 2;
		count = 1;
		mass = 5;
	};

	class KitWorkbenchLarge: CA_Magazine
	{
		author = "Grahame";
		model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_wooden_crate_ca.paa";
		displayName = "Large Workbench";
		scope = 2;
		count = 1;
		mass = 5;
	};
	class KitGenerator: CA_Magazine
	{
		author = "He-Man/DirtySanchez";
		scope=2;
		count = 1;
		type = 256;
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Portable_generator_F.jpg";
		model="\A3\Structures_F\Items\Electronics\Portable_generator_F.p3d";
		displayName = "Portable Generator";
		mass = 200;
	};
	class KitSnowman: CA_Magazine
	{
		author = "He-Man/Helion";
		scope=2;
		count = 1;
		type = 256;
		picture = "\x\addons\a3_epoch_community\icons\KitSnowman.paa";
		model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		displayName = "Snowman";
		mass = 200;
	};
	class Soap_Epoch: CA_Magazine
	{
		author = "Helion";
		scope=2;
		count = 1;
		type = 256;
		picture = "\x\addons\a3_epoch_community\icons\soap_icon_ca.paa";
		model = "\x\addons\a3_epoch_community\models\soap.p3d";
		displayName = "Bar of Soap";
		mass = 9;
	};	
};

/*[[[end]]]*/

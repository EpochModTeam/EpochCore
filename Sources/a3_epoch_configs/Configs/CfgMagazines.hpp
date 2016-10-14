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
        displayName = "$str_epoch_Soda";
        scope = 2;
        descriptionShort = "$str_epoch_Soda";
        count = 1;
        mass = 1;
    };
    class 1Rnd_Food : CA_Magazine
    {
        picture = "";
        displayName = "$str_epoch_Food";
        scope = 2;
        descriptionShort = "$str_epoch_Food";
        count = 1;
        mass = 1;
    };
    class ItemEmptyTin : CA_Magazine
    {
        author = "Sequisha";
        picture = "\x\addons\a3_epoch_assets_2\gear\gear_emptytincan_x_ca.paa";
        displayname = "$str_epoch_EmptyTinCan";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_2\empty_tin.p3d";
        descriptionShort = "$str_epoch_EmptyTinCan";
        count = 1;
        mass = 2;
    };
    class ItemSodaEmpty : CA_Magazine
    {
        picture = "\x\addons\a3_epoch_assets_1\pictures\soda_empty_ca.paa";
        displayname = "$str_epoch_EmptySodaCan";
        scope = 2;
        model = "\A3\Structures_F\Items\Food\Can_Dented_F.p3d";
        descriptionShort = "$str_epoch_EmptyAluminumSodaCan";
        count = 1;
        mass = 2;
    };
    class 10rnd_22X44_magazine : CA_Magazine
    {
        scope = 2;
        displayName = "$str_epoch_10Rnd22magazine";
        picture = "\x\addons\a3_epoch_weapons\gear\gear_ruger_mag_x_ca.paa";
        ammo = "E_22X44_ball";
        model = "\x\addons\a3_epoch_weapons\ruger_magazine.p3d";
        count = 10;
        initSpeed = 700;
        tracersEvery = 0;
        lastRoundsTracer = 0;
        descriptionShort = "$str_epoch_AtenroundmagazinefortheRuger";
    };
    class 9rnd_45X88_magazine : CA_Magazine
    {
        scope = 2;
        displayName = "$str_epoch_9Rnd45magazine";
        picture = "\x\addons\a3_epoch_weapons\gear\gear_1911mag_x_ca.paa";
        ammo = "E_45_ball";
        model = "\x\addons\a3_epoch_weapons\1911_magazine.p3d";
        count = 9;
        initSpeed = 700;
        tracersEvery = 0;
        lastRoundsTracer = 0;
        descriptionShort = "$str_epoch_Anineroundmagazineforthe1911";
    };
    class spear_magazine : CA_Magazine
    {
        scope = 2;
        displayName = "$str_epoch_Spearround";
        picture = "\x\addons\a3_epoch_weapons\gear\gear_speargunmag_x_ca.paa";
        mass = 2;
        ammo = "spear_ball";
        model = "\x\addons\a3_epoch_weapons\spearmag.p3d";
        count = 1;
        initSpeed = 100;
        tracersEvery = 1;
        lastRoundsTracer = 1;
        descriptionShort = "$str_epoch_Aspearforthespearrifle";
    };
    class 20rnd_762_magazine : CA_Magazine
    {
        scope = 2;
        displayName = "$str_epoch_20Rnd762Magazine";
        picture = "\x\addons\a3_epoch_weapons\gear\gear_sr25_magazine_x_ca.paa";
        ammo = "K_762_ball";
        model = "\x\addons\a3_epoch_weapons\magazine.p3d";
        count = 20;
        initSpeed = 700;
        tracersEvery = 0;
        lastRoundsTracer = 0;
        descriptionShort = "$str_epoch_20rounddetachableboxmagazine";
    };
    class 30rnd_556_magazine : CA_Magazine
    {
        scope = 2;
        displayName = "$str_epoch_30Rnd556Magazine";
        picture = "\x\addons\a3_epoch_weapons\gear\gear_l85a2_mag_x_ca.paa";
        ammo = "K_556_ball";
        model = "\x\addons\a3_epoch_weapons\L85A2_mag.p3d";
        count = 30;
        initSpeed = 700;
        tracersEvery = 0;
        lastRoundsTracer = 0;
        descriptionShort = "$str_epoch_30RoundStanagMagazine";
    };
    class 30Rnd_762x39_Mag : CA_Magazine
    {
        scope = "public";
        displayName = "$str_epoch_762mm30rndAKMMag";
        picture = "\x\addons\a2_epoch_weapons\akm\data\UI\gear_30Rnd_akm_ca.paa";
        count = 30;
        ammo = "B_762x39_Ball";
        mass = 8;
        model = "\x\addons\a2_epoch_weapons\akm\30Rnd_akm.p3d";
        initSpeed = 850;
        lastRoundsTracer = 4;
        descriptionShort = "$str_epoch_Caliber762x39mmUsedinAKMRPK";
    };
    class 200Rnd_556x45_M249 : CA_Magazine
    {
        scope = "public";
        displayName = "$str_epoch_556mm200rndSawBelt";
        picture = "\x\addons\a2_epoch_weapons\m249\data\UI\gear_m249_mag_ca.paa";
        ammo = "B_556x45_Ball";
        count = 200;
        initSpeed = 915;
        tracersEvery = 4;
        model = "\x\addons\a2_epoch_weapons\m249\m249_mag.p3d";
        lastRoundsTracer = 4;
        descriptionShort = "$str_epoch_Caliber556x45mmUsedinM249Saw";
    };
    class ItemHotwire : CA_Magazine
    {
        author = "Sequisha";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_hotwire_ca.paa";
        displayname = "$str_epoch_HotwireKit";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\hotwire.p3d";
        descriptionShort = "$str_epoch_Usedtohackopendoorlocks";
        count = 1;
        mass = 50;
    };
    class ItemKeyKit : CA_Magazine
    {
        author = "Sequisha";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_keykit_ca.paa";
        displayname = "$str_epoch_KeyMakersKit";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\keykit.p3d";
        descriptionShort = "$str_epoch_Usedtocraftduplicatekeys";
        count = 1;
        mass = 2;
    };
    class ItemBarrelF : CA_Magazine
    {
        author = "Sequisha";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_oil_drum_model_ca.paa";
        displayname = "$str_epoch_FuelBarrelFull";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\oil_drum_model.p3d";
        descriptionShort = "$str_epoch_55gallonfuelbarrel";
        count = 1;
        mass = 250;
    };
    class ItemBarrelE : CA_Magazine
    {
        author = "Sequisha";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_oildrum_e_CA.paa";
        displayname = "$str_epoch_FuelBarrelEmpty";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\oil_drum_model.p3d";
        descriptionShort = "$str_epoch_Empty55gallonfuelbarrel";
        count = 1;
        mass = 25;
    };
    class ItemPipe : CA_Magazine
    {
        author = "Sequisha";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_pipe_CA.paa";
        displayname = "$str_epoch_Pipes";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\pipe.p3d";
        descriptionShort = "$str_epoch_Smallpileofmetalpipes";
        count = 1;
        mass = 15;
    };
    class ItemKey : CA_Magazine
    {
        author = "Sequisha";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_key_CA.paa";
        displayname = "$str_epoch_Key";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\key.p3d";
        descriptionShort = "$str_epoch_Keyusedinalock";
        count = 1;
        mass = 1;
    };
    class ItemKeyBlue : ItemKey
    {
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_key_CA_blue.paa";
        displayname = "$str_epoch_KeyBlue";
        model = "\x\addons\a3_epoch_assets_1\models\key_blue.p3d";
    };
    class ItemKeyGreen : ItemKey
    {
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_key_CA_green.paa";
        displayname = "$str_epoch_KeyGreen";
        model = "\x\addons\a3_epoch_assets_1\models\key_green.p3d";
    };
    class ItemKeyRed : ItemKey
    {
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_key_CA_red.paa";
        displayname = "$str_epoch_KeyRed";
        model = "\x\addons\a3_epoch_assets_1\models\key_red.p3d";
    };
    class ItemKeyYellow : ItemKey
    {
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_key_CA_yellow.paa";
        displayname = "$str_epoch_KeyYellow";
        model = "\x\addons\a3_epoch_assets_1\models\key_yellow.p3d";
    };
    class ItemDoc1 : CA_Magazine
    {
        author = "Sequisha";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_child1_ca.paa";
        displayname = "$str_epoch_Book";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\doc_child1.p3d";
        descriptionShort = "$str_epoch_Book";
        count = 1;
        mass = 1;
    };
    class ItemDoc2 : ItemDoc1
    {
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_child2_ca.paa";
        displayname = "$str_epoch_Book";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\doc_child2.p3d";
    };
    class ItemDoc3 : ItemDoc1
    {
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_deaths_ca.paa";
        displayname = "$str_epoch_Book";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\doc_deaths.p3d";
    };
    class ItemDoc4 : ItemDoc1
    {
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_doc_generic_ca.paa";
        displayname = "$str_epoch_Book";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\doc_generic.p3d";
    };
    class ItemDoc5 : ItemDoc1
    {
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_doc_letter_ca.paa";
        displayname = "$str_epoch_Letter";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\doc_letter.p3d";
    };
    class ItemDoc6 : ItemDoc1
    {
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_doc_ramp_ca.paa";
        displayname = "$str_epoch_Book";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\doc_ramp.p3d";
    };
    class ItemDoc7 : ItemDoc1
    {
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_child2_ca.paa";
        displayname = "$str_epoch_Letter";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\doc_trashy1.p3d";
    };
    class ItemDoc8 : ItemDoc1
    {
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_child2_ca.paa";
        displayname = "$str_epoch_Letter";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\doc_trashy2.p3d";
    };
    class ItemVehDoc1 : ItemDoc1
    {
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_docup1_ca.paa";
        displayname = "$str_epoch_VehicleManualI";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\doc_Up1.p3d";
    };
    class ItemVehDoc2 : ItemDoc1
    {
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_docup2_ca.paa";
        displayname = "$str_epoch_VehicleManualII";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\doc_Up2.p3d";
    };
    class ItemVehDoc3 : ItemDoc1
    {
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_docup3_ca.paa";
        displayname = "$str_epoch_VehicleManualIII";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\doc_Up3.p3d";
    };
    class ItemVehDoc4 : ItemDoc1
    {
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_docup4_ca.paa";
        displayname = "$str_epoch_VehicleManualIV";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\doc_Up4.p3d";
    };
    class ItemBulb : CA_Magazine
    {
        author = "Sequisha";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_bulb_CA.paa";
        displayname = "$str_epoch_LightBulb";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\bulb.p3d";
        descriptionShort = "$str_epoch_LightBulbinfactorypackageGivesofflightwhenpowered";
        count = 1;
        mass = 1;
    };
    class ItemBurlap : CA_Magazine
    {
        author = "Sequisha";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_burlap_ca.paa";
        displayname = "$str_epoch_Burlap";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\burlap.p3d";
        descriptionShort = "$str_epoch_Wovenfabricmadefromplantfibers";
        count = 1;
        mass = 1;
    };
    class ItemBriefcaseE : CA_Magazine
    {
        author = "Sequisha";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_briefcase_E_CA.paa";
        displayname = "$str_epoch_EmptyBriefcase";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\briefcase.p3d";
        descriptionShort = "$str_epoch_Arectangularcontainergoodforcarryingbooksandpapers";
        count = 1;
        mass = 1;
    };
    class ItemBriefcaseGold100oz : CA_Magazine
    {
        author = "Sequisha";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_briefcase_100oz_CA.paa";
        displayname = "$str_epoch_FullBriefcaseGold";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\briefcase.p3d";
        descriptionShort = "$str_epoch_Briefcasethatcontainsten10oz100ozGoldBars";
        count = 1;
        mass = 100;
    };
    class ItemAluminumBar : CA_Magazine
    {
        author = "Sequisha";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_alum_bar_CA.paa";
        displayname = "$str_epoch_AluminumBar1oz";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\aluminum_bar.p3d";
        descriptionShort = "$str_epoch_AluminumBar1oz";
        count = 1;
        mass = 1;
    };
    class ItemCopperBar : CA_Magazine
    {
        author = "Sequisha";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_copper_bar_CA.paa";
        displayname = "$str_epoch_CopperBar1oz";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\copper_bar.p3d";
        descriptionShort = "$str_epoch_CopperBar1oz";
        count = 1;
        mass = 1;
    };
    class ItemTinBar : CA_Magazine
    {
        author = "Sequisha";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_tin_bar_CA.paa";
        displayname = "$str_epoch_TinBar1oz";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\tin_bar.p3d";
        descriptionShort = "$str_epoch_TinBar1oz";
        count = 1;
        mass = 1;
    };
    class ItemPlywoodPack : CA_Magazine
    {
        author = "Sequisha";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_plywood_pack_CA.paa";
        displayname = "$str_epoch_Plywood";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\plywood_pack.p3d";
        descriptionShort = "$str_epoch_StackofPlywoodSheets";
        count = 1;
        mass = 1;
    };
    class ItemComboLock : CA_Magazine
    {
        author = "Sequisha";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_combolock_ca.paa";
        displayname = "$str_epoch_CombinationLock";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\combo_lock_mag.p3d";
        descriptionShort = "$str_epoch_CombinationLock";
        count = 1;
        mass = 1;
    };
    class Item_PackedBag_base : CA_Magazine
    {
        picture = "\x\addons\a3_epoch_assets\textures\backpack\gear_packedBag_ca.paa";
        scope = 0;
        model = "\x\addons\a3_epoch_assets\models\PackedBag.p3d";
        count = 1;
    };
    class Item_AssaultPack_cbr : CA_Magazine
    {
        author = "Sequisha";
        displayName = "$STR_A3_B_AssaultPack_cbr0";
        scope = 2;
        descriptionShort = "$str_epoch_PackedBackpack";
        count = 1;
        mass = 20;
    };
    class Item_AssaultPack_dgtl : Item_PackedBag_base
    {
        displayName = "$STR_A3_B_AssaultPack_dgtl0";
        scope = 2;
        descriptionShort = "$str_epoch_PackedBackpack";
        mass = 20;
    };
    class Item_AssaultPack_khk : Item_PackedBag_base
    {
        displayName = "$STR_A3_B_AssaultPack_khk0";
        scope = 2;
        descriptionShort = "$str_epoch_PackedBackpack";
        count = 1;
        mass = 20;
    };
    class Item_AssaultPack_mcamo : Item_PackedBag_base
    {
        displayName = "$STR_A3_B_AssaultPack_mcamo0";
        scope = 2;
        descriptionShort = "$str_epoch_PackedBackpack";
        count = 1;
        mass = 20;
    };
    class Item_AssaultPack_ocamo : Item_PackedBag_base
    {
        displayName = "$STR_A3_B_AssaultPack_ocamo0";
        scope = 2;
        descriptionShort = "$str_epoch_PackedBackpack";
        count = 1;
        mass = 20;
    };
    class Item_AssaultPack_rgr : Item_PackedBag_base
    {
        displayName = "$STR_A3_B_AssaultPack_rgr0";
        scope = 2;
        descriptionShort = "$str_epoch_PackedBackpack";
        count = 1;
        mass = 20;
    };
    class Item_AssaultPack_sgg : Item_PackedBag_base
    {
        displayName = "$STR_A3_B_AssaultPack_sgg0";
        scope = 2;
        descriptionShort = "$str_epoch_PackedBackpack";
        count = 1;
        mass = 20;
    };
    class Item_AssaultPack_blk : Item_PackedBag_base
    {
        displayName = "$STR_A3_B_AssaultPack_blk0";
        scope = 2;
        descriptionShort = "$str_epoch_PackedBackpack";
        count = 1;
        mass = 20;
    };
    class Item_Carryall_cbr : Item_PackedBag_base
    {
        displayName = "$STR_A3_B_Carryall_cbr0";
        scope = 2;
        descriptionShort = "$str_epoch_PackedBackpack";
        count = 1;
        mass = 60;
    };
    class Item_Carryall_khk : Item_PackedBag_base
    {
        displayName = "$STR_A3_B_Carryall_khk0";
        scope = 2;
        descriptionShort = "$str_epoch_PackedBackpack";
        count = 1;
        mass = 60;
    };
    class Item_Carryall_mcamo : Item_PackedBag_base
    {
        displayName = "$STR_A3_B_Carryall_mcamo0";
        scope = 2;
        descriptionShort = "$str_epoch_PackedBackpack";
        count = 1;
        mass = 60;
    };
    class Item_Carryall_ocamo : Item_PackedBag_base
    {
        displayName = "$STR_A3_B_Carryall_ocamo0";
        scope = 2;
        descriptionShort = "$str_epoch_PackedBackpack";
        count = 1;
        mass = 60;
    };
    class Item_Carryall_oli : Item_PackedBag_base
    {
        displayName = "$STR_A3_B_Carryall_oli0";
        scope = 2;
        descriptionShort = "$str_epoch_PackedBackpack";
        count = 1;
        mass = 60;
    };
    class Item_Carryall_oucamo : Item_PackedBag_base
    {
        displayName = "$STR_A3_B_Carryall_oucamo0";
        scope = 2;
        descriptionShort = "$str_epoch_PackedBackpack";
        count = 1;
        mass = 60;
    };
    class Item_FieldPack_blk : Item_PackedBag_base
    {
        displayName = "$STR_A3_B_FieldPack_blk0";
        scope = 2;
        descriptionShort = "$str_epoch_PackedBackpack";
        count = 1;
        mass = 30;
    };
    class Item_FieldPack_cbr : Item_PackedBag_base
    {
        displayName = "$STR_A3_B_FieldPack_cbr0";
        scope = 2;
        descriptionShort = "$str_epoch_PackedBackpack";
        count = 1;
        mass = 30;
    };
    class Item_FieldPack_khk : Item_PackedBag_base
    {
        displayName = "$STR_A3_B_FieldPack_khk0";
        scope = 2;
        descriptionShort = "$str_epoch_PackedBackpack";
        count = 1;
        mass = 30;
    };
    class Item_FieldPack_ocamo : Item_PackedBag_base
    {
        displayName = "$STR_A3_B_FieldPack_ocamo0";
        scope = 2;
        descriptionShort = "$str_epoch_PackedBackpack";
        count = 1;
        mass = 30;
    };
    class Item_FieldPack_oli : Item_PackedBag_base
    {
        displayName = "$STR_A3_B_FieldPack_oli0";
        scope = 2;
        descriptionShort = "$str_epoch_PackedBackpack";
        count = 1;
        mass = 30;
    };
    class Item_FieldPack_oucamo : Item_PackedBag_base
    {
        displayName = "$STR_A3_B_FieldPack_oucamo0";
        scope = 2;
        descriptionShort = "$str_epoch_PackedBackpack";
        count = 1;
        mass = 30;
    };
    class Item_Kitbag_cbr : Item_PackedBag_base
    {
        displayName = "$STR_A3_B_Kitback_cbr0";
        scope = 2;
        descriptionShort = "$str_epoch_PackedBackpack";
        count = 1;
        mass = 50;
    };
    class Item_Kitbag_mcamo : Item_PackedBag_base
    {
        displayName = "$STR_A3_B_Kitback_mcamo0";
        scope = 2;
        descriptionShort = "$str_epoch_PackedBackpack";
        count = 1;
        mass = 50;
    };
    class Item_Kitbag_rgr : Item_PackedBag_base
    {
        displayName = "$STR_A3_B_KITHBACK_RGR";
        scope = 2;
        descriptionShort = "$str_epoch_PackedBackpack";
        count = 1;
        mass = 50;
    };
    class Item_Kitbag_sgg : Item_PackedBag_base
    {
        displayName = "$STR_A3_B_Kitback_sgg0";
        scope = 2;
        descriptionShort = "$str_epoch_PackedBackpack";
        count = 1;
        mass = 50;
    };
    class Item_TacticalPack_blk : Item_PackedBag_base
    {
        displayName = "$STR_A3_B_TacticalPack_blk0";
        scope = 2;
        descriptionShort = "$str_epoch_PackedBackpack";
        count = 1;
        mass = 40;
    };
    class Item_TacticalPack_mcamo : Item_PackedBag_base
    {
        displayName = "$STR_A3_B_TacticalPack_mcamo0";
        scope = 2;
        descriptionShort = "$str_epoch_PackedBackpack";
        count = 1;
        mass = 40;
    };
    class Item_TacticalPack_ocamo : Item_PackedBag_base
    {
        displayName = "$STR_A3_B_TacticalPack_ocamo0";
        scope = 2;
        descriptionShort = "$str_epoch_PackedBackpack";
        count = 1;
        mass = 40;
    };
    class Item_TacticalPack_oli : Item_PackedBag_base
    {
        displayName = "$STR_A3_B_TacticalPack_oli0";
        scope = 2;
        descriptionShort = "$str_epoch_PackedBackpack";
        count = 1;
        mass = 40;
    };
    class Item_TacticalPack_rgr : Item_PackedBag_base
    {
        displayName = "$STR_A3_B_TacticalPack_rgr0";
        scope = 2;
        descriptionShort = "$str_epoch_PackedBackpack";
        count = 1;
        mass = 40;
    };
    class Item_smallbackpack_red : Item_PackedBag_base
    {
        displayName = "$str_epoch_SmallBackpackRed";
        scope = 2;
        descriptionShort = "$str_epoch_PackedBackpack";
        count = 1;
        mass = 25;
    };
    class Item_smallbackpack_green : Item_PackedBag_base
    {
        displayName = "$str_epoch_SmallBackpackGreen";
        scope = 2;
        descriptionShort = "$str_epoch_PackedBackpack";
        count = 1;
        mass = 25;
    };
    class Item_smallbackpack_teal : Item_PackedBag_base
    {
        displayName = "$str_epoch_SmallBackpackTeal";
        scope = 2;
        descriptionShort = "$str_epoch_PackedBackpack";
        count = 1;
        mass = 25;
    };
    class Item_smallbackpack_pink : Item_PackedBag_base
    {
        displayName = "$str_epoch_SmallBackpackPink";
        scope = 2;
        descriptionShort = "$str_epoch_PackedBackpack";
        count = 1;
        mass = 25;
    };
    class honey_epoch : CA_Magazine
    {
        author = "Kiory";
        scope = 2;
        count = 1;
        type = 256;
        displayName = "$str_epoch_Honey";
        model = "\x\addons\a3_epoch_assets_2\honey.p3d";
        picture = "\x\addons\a3_epoch_assets_2\gear\gear_honey_x_ca.paa";
        descriptionShort = "$str_epoch_Probablycollectedsometimeago";
        mass = 1;
    };
    class water_epoch : CA_Magazine
    {
        author = "Kiory";
        scope = 2;
        count = 1;
        type = 256;
        displayName = "$str_epoch_Water";
        model = "\x\addons\a3_epoch_assets_2\water_jar.p3d";
        picture = "\x\addons\a3_epoch_assets_2\gear\gear_water_x_ca.paa";
        descriptionShort = "$str_epoch_Jarredwatermayormaynotcontainparasites";
        mass = 1;
    };
    class clean_water_epoch : CA_Magazine
    {
        author = "Kiory";
        scope = 2;
        count = 1;
        type = 256;
        displayName = "$str_epoch_Water";
        model = "\x\addons\a3_epoch_assets_2\water_jar.p3d";
        picture = "\x\addons\a3_epoch_assets_2\gear\gear_water_x_ca.paa";
        descriptionShort = "$str_epoch_Jarredwaterwasonceboiledunlikelytocontainparasites";
        mass = 1;
    };
    class emptyjar_epoch : CA_Magazine
    {
        author = "Kiory";
        scope = 2;
        count = 1;
        type = 256;
        displayName = "$str_epoch_Emptyjar";
        model = "\x\addons\a3_epoch_assets_2\jar_empty.p3d";
        picture = "\x\addons\a3_epoch_assets_2\gear\gear_ejar_x_ca.paa";
        descriptionShort = "$str_epoch_Couldbefilledwithmanythings";
        mass = 0.5;
    };
    class sardines_epoch : CA_Magazine
    {
        author = "Kiory";
        scope = 2;
        count = 1;
        type = 256;
        displayName = "$str_epoch_Sardines";
        model = "\x\addons\a3_epoch_assets_2\sardines.p3d";
        picture = "\x\addons\a3_epoch_assets_2\gear\gear_sardines_x_ca.paa";
        descriptionShort = "$str_epoch_Smallfishnobodylikesthem";
        mass = 1;
    };
    class meatballs_epoch : CA_Magazine
    {
        author = "Kiory";
        scope = 2;
        count = 1;
        type = 256;
        displayName = "$str_epoch_Meatballs";
        model = "\x\addons\a3_epoch_assets_2\meatballs.p3d";
        picture = "\x\addons\a3_epoch_assets_2\gear\gear_meatballs_x_ca.paa";
        descriptionShort = "$str_epoch_Warningwillmakeyoufat";
        mass = 1;
    };
    class scam_epoch : CA_Magazine
    {
        author = "Kiory";
        scope = 2;
        count = 1;
        type = 256;
        displayName = "$str_epoch_Scam";
        model = "\x\addons\a3_epoch_assets_2\scamtin.p3d";
        picture = "\x\addons\a3_epoch_assets_2\gear\gear_scam_x_ca.paa";
        descriptionShort = "$str_epoch_Wasgiventhenameduetofakemeat";
        mass = 1;
    };
    class sweetcorn_epoch : CA_Magazine
    {
        author = "Kiory";
        scope = 2;
        count = 1;
        type = 256;
        displayName = "$str_epoch_Sweetcorn";
        model = "\x\addons\a3_epoch_assets_2\sweetcorn.p3d";
        picture = "\x\addons\a3_epoch_assets_2\gear\gear_sweetcorn_x_ca.paa";
        descriptionShort = "$str_epoch_Cheapbrandstilltasty";
        mass = 1;
    };
    class jerrycan_epoch : CA_Magazine
    {
        author = "Kiory";
        scope = 2;
        count = 1;
        type = 256;
        displayName = "$str_epoch_Jerrycan";
        model = "\x\addons\a3_epoch_assets_2\jerrycan.p3d";
        picture = "\x\addons\a3_epoch_assets_2\gear\gear_jerrycan_x_ca.paa";
        descriptionShort = "$str_epoch_FullofFuel";
        mass = 14;
    };
    class jerrycanE_epoch : CA_Magazine
    {
        author = "Kiory";
        scope = 2;
        count = 1;
        type = 256;
        displayName = "$str_epoch_JerrycanEmpty";
        model = "\x\addons\a3_epoch_assets_2\jerrycan.p3d";
        picture = "\x\addons\a3_epoch_assets_2\gear\gear_jerrycan_x_ca.paa";
        descriptionShort = "$str_epoch_Trustworthyforgettingfuel";
        mass = 5;
    };
    class lighter_epoch : CA_Magazine
    {
        author = "Kiory";
        scope = 2;
        count = 1;
        type = 256;
        displayName = "$str_epoch_Lighter";
        model = "\x\addons\a3_epoch_assets_2\lighter.p3d";
        picture = "\x\addons\a3_epoch_assets_2\gear\gear_lighter_x_ca.paa";
        descriptionShort = "$str_epoch_AveryordinarylookinglighterBURNSTUFF";
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
        displayName = "$str_epoch_Lockbox";
        model = "\x\addons\a3_epoch_assets_1\models\lockbox_mag.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_lockbox_CA.paa";
        descriptionShort = "$str_epoch_Semisecurelockbox";
        mass = 5;
    };
    class ItemSafe : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        count = 1;
        type = 256;
        displayName = "$str_epoch_Safe";
        model = "\x\addons\a3_epoch_assets_1\models\safe_onside.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_safe_CA.paa";
        descriptionShort = "$str_epoch_SecureSafe";
        mass = 50;
    };
    class PartPlankPack : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        count = 1;
        type = 256;
        displayName = "$str_epoch_LumberPack";
        model = "\x\addons\a3_epoch_assets_1\models\plank_pack.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_lumber_pack_CA.paa";
        descriptionShort = "$str_epoch_Lumberinastack";
        mass = 6;
    };
    class CinderBlocks : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        count = 1;
        type = 256;
        displayName = "$str_epoch_CinderBlocks";
        model = "\x\addons\a3_epoch_assets_1\models\cinder_stack.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\epuip_cinder_blocks_CA.paa";
        descriptionShort = "$str_epoch_Stackofninecinderblocks";
        mass = 75;
    };
    class MortarBucket : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        count = 1;
        type = 256;
        displayName = "$str_epoch_BucketofMortar";
        model = "\x\addons\a3_epoch_assets_1\models\mortar.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_mortar_CA.paa";
        descriptionShort = "$str_epoch_Premixedmasticadhesivethatwillbondtoconcreteblock";
        mass = 15;
    };
    class ItemKiloHemp : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        count = 1;
        displayName = "$str_epoch_KiloofHemp";
        descriptionShort = "$str_epoch_KiloofHemp";
        model = "\x\addons\a3_epoch_assets_1\models\kilohemp.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_kilohemp_CA.paa";
        type = 256;
        mass = 1;
    };
    class ItemSodaAlpineDude : 1Rnd_Soda
    {
        author = "vbgreen";
        picture = "\x\addons\a3_epoch_assets_1\pictures\soda_alpinedude_ca.paa";
        displayname = "$str_epoch_AlpineDudeSoda";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\soda_alpine.p3d";
        descriptionShort = "$str_epoch_Dothedude";
        count = 1;
        mass = 2;
    };
    class ItemSodaRbull : 1Rnd_Soda
    {
        author = "vbgreen";
        displayName = "$str_epoch_RedGull";
        descriptionShort = "$str_epoch_RedGullSoda";
        model = "\x\addons\a3_epoch_assets_1\models\soda_redbull.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_soda_rbull_CA.paa";
        mass = 1;
    };
    class ItemSodaOrangeSherbet : 1Rnd_Soda
    {
        author = "Sequisha";
        displayName = "$str_epoch_OrangeSherbet";
        descriptionShort = "$str_epoch_OrangeSherbetSoda";
        model = "\x\addons\a3_epoch_assets_1\models\soda_sherbet.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\soda_orangesherbet_ca.paa";
        mass = 1;
    };
    class ItemSodaPurple : 1Rnd_Soda
    {
        author = "vbgreen";
        displayName = "$str_epoch_PurpleNurple";
        descriptionShort = "$str_epoch_PurpleNurpleSoda";
        model = "\x\addons\a3_epoch_assets_1\models\soda_purple.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\soda_purple_equip_ca.paa";
        mass = 1;
    };
    class ItemSodaMocha : 1Rnd_Soda
    {
        author = "vbgreen";
        displayName = "$str_epoch_MochaCola";
        descriptionShort = "$str_epoch_MochaColaSoda";
        model = "\x\addons\a3_epoch_assets_1\models\soda_mocha.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\soda_mocha_equip_ca.paa";
        mass = 1;
    };
    class ItemSodaBurst : 1Rnd_Soda
    {
        author = "vbgreen";
        displayName = "$str_epoch_BurstKoke";
        descriptionShort = "$str_epoch_BurstKokeSoda";
        model = "\x\addons\a3_epoch_assets_1\models\soda_burst.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\soda_burst_equip_ca.paa";
        mass = 1;
    };
    class ItemTrout : 1Rnd_Food
    {
        author = "Sequisha";
        scope = 2;
        displayName = "$str_epoch_RainbowTrout";
        descriptionShort = "$str_epoch_RainbowTroutAsmallfishthatcanbefairlyeasytocatch";
        model = "\x\addons\a3_epoch_assets_1\models\trout.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_rainbowtrout_CA.paa";
        mass = 5;
    };
    class ItemSeaBass : 1Rnd_Food
    {
        author = "Sequisha";
        scope = 2;
        displayName = "$str_epoch_SeaBass";
        descriptionShort = "$str_epoch_SeaBassAmediumsizedfishthatisfairlyrare";
        model = "\x\addons\a3_epoch_assets_1\models\seabass.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_seabass_CA.paa";
        mass = 10;
    };
    class ItemTuna : 1Rnd_Food
    {
        author = "Sequisha";
        scope = 2;
        displayName = "$str_epoch_BlueFinTuna";
        descriptionShort = "$str_epoch_BlueFinTunaAverylargeandhardtocatchfishSushianyone";
        model = "\x\addons\a3_epoch_assets_1\models\tuna.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_tuna_CA.paa";
        mass = 50;
    };
    class ItemTroutCooked : 1Rnd_Food
    {
        author = "Sequisha";
        scope = 2;
        displayName = "$str_epoch_RainbowTroutCooked";
        descriptionShort = "$str_epoch_RainbowTroutAsmallfishthatcanbefairlyeasytocatch";
        model = "\x\addons\a3_epoch_assets_1\models\trout_cooked.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_trout_cooked_CA.paa";
        mass = 5;
    };
    class ItemSeaBassCooked : 1Rnd_Food
    {
        author = "Sequisha";
        scope = 2;
        displayName = "$str_epoch_SeaBassCooked";
        descriptionShort = "$str_epoch_SeaBassAmediumsizedfishthatisfairlyrare";
        model = "\x\addons\a3_epoch_assets_1\models\seabass_cooked.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_seabass_cooked_CA.paa";
        mass = 10;
    };
    class ItemTunaCooked : 1Rnd_Food
    {
        author = "Sequisha";
        scope = 2;
        displayName = "$str_epoch_BlueFinTunaCooked";
        descriptionShort = "$str_epoch_BlueFinTunaAverylargeandhardtocatchfishSushianyone";
        model = "\x\addons\a3_epoch_assets_1\models\tuna_cooked.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_tuna_cooked_CA.paa";
        mass = 50;
    };
    class FoodBioMeat : 1Rnd_Food
    {
        author = "vbgreen,Sequisha";
        scope = 2;
        displayName = "$str_epoch_BioMeat";
        model = "\x\addons\a3_epoch_assets_1\models\biomeat_can.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_biomeat_CA.paa";
        descriptionShort = "$str_epoch_BioMeatAverygoodsourceofnutritionandaveryhighchanceofinfectionEatatownrisk";
    };
    class FoodMeeps : 1Rnd_Food
    {
        author = "Sequisha";
        scope = 2;
        displayName = "$str_epoch_MeepsCandy";
        model = "\x\addons\a3_epoch_assets\models\meeps.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\candy\equip_meeps_ca.paa";
        descriptionShort = "$str_epoch_Pumpkinmarshmallowcandy";
    };
    class FoodSnooter : 1Rnd_Food
    {
        author = "Sequisha";
        scope = 2;
        displayName = "$str_epoch_SnootersCandy";
        model = "\x\addons\a3_epoch_assets\models\snooter.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\candy\equip_snooters_ca.paa";
        descriptionShort = "$str_epoch_NothungrygrabaSnooters";
    };
    class FoodWalkNSons : 1Rnd_Soda
    {
        author = "Sequisha";
        scope = 2;
        displayName = "$str_epoch_WalkNSonsSoda";
        model = "\x\addons\a3_epoch_assets\models\walkinson.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\candy\equip_walkinson_ca.paa";
        descriptionShort = "$str_epoch_StuckwalkingrabaWalkNSonsSoda";
    };
    class ItemTopaz : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        displayName = "$str_epoch_Topaz";
        model = "\x\addons\a3_epoch_assets_1\models\topaz.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_topaz_CA.paa";
        count = 1;
        type = "256";
        descriptionShort = "$str_epoch_Topaz";
        mass = 1;
    };
    class ItemOnyx : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        displayName = "$str_epoch_Onyx";
        model = "\x\addons\a3_epoch_assets_1\models\obsidian.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_obsidian_CA.paa";
        count = 1;
        type = "256";
        descriptionShort = "$str_epoch_Onyx";
        mass = 1;
    };
    class ItemSapphire : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        displayName = "$str_epoch_Sapphire";
        model = "\x\addons\a3_epoch_assets_1\models\sapphire.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_sapphire_CA.paa";
        count = 1;
        type = "256";
        descriptionShort = "$str_epoch_Sapphire";
        mass = 1;
    };
    class ItemAmethyst : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        displayName = "$str_epoch_Amethyst";
        model = "\x\addons\a3_epoch_assets_1\models\amethyst.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_amethyst_CA.paa";
        count = 1;
        type = "256";
        descriptionShort = "$str_epoch_Amethyst";
        mass = 1;
    };
    class ItemEmerald : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        displayName = "$str_epoch_Emerald";
        model = "\x\addons\a3_epoch_assets_1\models\emerald.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_emerald_CA.paa";
        count = 1;
        type = "256";
        descriptionShort = "$str_epoch_Emerald";
        mass = 1;
    };
    class ItemCitrine : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        displayName = "$str_epoch_Citrine";
        model = "\x\addons\a3_epoch_assets_1\models\citrine.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_citrine_CA.paa";
        count = 1;
        type = "256";
        descriptionShort = "$str_epoch_Citrine";
        mass = 1;
    };
    class ItemRuby : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        displayName = "$str_epoch_Ruby";
        model = "\x\addons\a3_epoch_assets_1\models\ruby.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_ruby_CA.paa";
        count = 1;
        type = "256";
        descriptionShort = "$str_epoch_Ruby";
        mass = 1;
    };
    class ItemQuartz : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        displayName = "$str_epoch_Quartz";
        model = "\x\addons\a3_epoch_assets\models\quartz.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\gem\equip_quartz_CA.paa";
        count = 1;
        type = "256";
        descriptionShort = "$str_epoch_Quartz";
        mass = 1;
    };
    class ItemJade : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        displayName = "$str_epoch_Jade";
        model = "\x\addons\a3_epoch_assets\models\jade.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\gem\equip_jade_CA.paa";
        count = 1;
        type = "256";
        descriptionShort = "$str_epoch_Jade";
        mass = 1;
    };
    class ItemGarnet : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        displayName = "$str_epoch_Garnet";
        model = "\x\addons\a3_epoch_assets\models\garnet.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\gem\equip_garnet_CA.paa";
        count = 1;
        type = "256";
        descriptionShort = "$str_epoch_Garnet";
        mass = 1;
    };
    class JackKit : CA_Magazine
    {
        author = "Sequisha";
        model = "\x\addons\a3_epoch_assets\models\jack.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\kits\equip_jack_ca.paa";
        displayName = "$str_epoch_Jack";
        scope = 2;
        descriptionShort = "$str_epoch_Jack";
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
        descriptionShort = "$str_epoch_ContainsmmmBacon";
        mass = 1;
    };
    class ItemCoolerE : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        displayName = "$str_epoch_FoodCoolerempty";
        model = "\x\addons\a3_epoch_assets\models\cooler.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\cooler\gear_cooler_ca.paa";
        count = 1;
        type = "256";
        descriptionShort = "$str_epoch_SealaMealitscoldinhere";
        mass = 1;
    };
    class ItemCooler0 : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        displayName = "$str_epoch_FoodCooler";
        model = "\x\addons\a3_epoch_assets\models\cooler.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\cooler\gear_cooler_ca.paa";
        count = 1;
        type = "256";
        descriptionShort = "$str_epoch_ContainsCookedSnakeMeat";
        mass = 1;
    };
    class ItemCooler1 : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        displayName = "$str_epoch_FoodCooler";
        model = "\x\addons\a3_epoch_assets\models\cooler.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\cooler\gear_cooler_ca.paa";
        count = 1;
        type = "256";
        descriptionShort = "$str_epoch_ContainsCookedRabbitMeat";
        mass = 1;
    };
    class ItemCooler2 : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        displayName = "$str_epoch_FoodCooler";
        model = "\x\addons\a3_epoch_assets\models\cooler.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\cooler\gear_cooler_ca.paa";
        count = 1;
        type = "256";
        descriptionShort = "$str_epoch_ContainsCookedChicken";
        mass = 1;
    };
    class ItemCooler3 : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        displayName = "$str_epoch_FoodCooler";
        model = "\x\addons\a3_epoch_assets\models\cooler.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\cooler\gear_cooler_ca.paa";
        count = 1;
        type = "256";
        descriptionShort = "$str_epoch_ContainsCookedGoatLeg";
        mass = 1;
    };
    class ItemCooler4 : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        displayName = "$str_epoch_FoodCooler";
        model = "\x\addons\a3_epoch_assets\models\cooler.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\cooler\gear_cooler_ca.paa";
        count = 1;
        type = "256";
        descriptionShort = "$str_epoch_ContainsCookedSheepLeg";
        mass = 1;
    };
    class ItemMixOil : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        displayName = "$str_epoch_2StrokeEngineOil";
        model = "\x\addons\a3_epoch_assets_1\models\oilmix.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_oilmix_CA.paa";
        count = 1;
        type = "256";
        descriptionShort = "$str_epoch_2StrokeEngineOil";
        mass = 1;
    };
    class ItemDocument : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        count = 1;
        type = 256;
        displayName = "$str_epoch_Document";
        model = "\x\addons\a3_epoch_assets_1\models\doc_generic.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_doc_generic_ca.paa";
        descriptionShort = "$str_epoch_Unknowndocument";
        mass = 1;
    };
    class ItemDocumentMission : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        count = 1;
        type = 256;
        displayName = "$str_epoch_MissionDocument";
        model = "\x\addons\a3_epoch_assets_1\models\doc_generic.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_doc_generic_ca.paa";
        descriptionShort = "$str_epoch_AveryimportantmessageEyesOnly";
        mass = 1;
    };
    class ItemSilverBar : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        count = 1;
        worth = 1;
        type = 256;
        displayName = "$str_epoch_Silver";
        model = "\x\addons\a3_epoch_assets_1\models\ItemSilverBar1oz.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_silver_bar_CA.paa";
        descriptionShort = "$str_epoch_SilverBar";
        mass = 1;
    };
    class ItemGoldBar : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        count = 1;
        worth = 100;
        type = 256;
        displayName = "$str_epoch_Gold";
        model = "\x\addons\a3_epoch_assets_1\models\ItemGoldBar1oz.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_gold_bar_CA.paa";
        descriptionShort = "$str_epoch_GoldBar";
        mass = 1;
    };
    class ItemGoldBar10oz : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        count = 1;
        worth = 1000;
        type = 256;
        displayName = "$str_epoch_10ozGold";
        model = "\x\addons\a3_epoch_assets_1\models\ItemGoldBar10oz.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_gold_bar_10oz_CA.paa";
        descriptionShort = "$str_epoch_10x1ozGoldBar";
        mass = 10;
    };
    class ItemRock : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        count = 1;
        type = 256;
        displayName = "$str_epoch_Rock";
        model = "\x\addons\a3_epoch_assets\models\rock.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\improv_weapon\gear_rock_ca.paa";
        descriptionShort = "$str_epoch_UsedforcraftingfireplacesandmortarCanbeminedfromrocksusingasledgehammer";
        mass = 1;
    };
    class ItemStick : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        count = 1;
        type = 256;
        displayName = "$str_epoch_Stick";
        model = "\x\addons\a3_epoch_assets\models\stick.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\improv_weapon\gear_stick_ca.paa";
        descriptionShort = "$str_epoch_Usedforcrafting";
        mass = 1;
    };
    class ItemRope : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        count = 1;
        type = 256;
        displayName = "$str_epoch_Rope";
        model = "\x\addons\a3_epoch_assets\models\rope.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\improv_weapon\gear_rope_ca.paa";
        descriptionShort = "$str_epoch_Usedforcrafting";
        mass = 1;
    };
    class PartOre : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        count = 1;
        type = 256;
        displayName = "$str_epoch_IronOre";
        model = "\x\addons\a3_epoch_assets\models\ore.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_iron_ore_CA.paa";
        descriptionShort = "$str_epoch_UsedforcraftingscrapmetalCanbeminedfromrocksusingasledgehammer";
        mass = 1;
    };
    class PartOreSilver : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        count = 1;
        type = 256;
        displayName = "$str_epoch_SilverOre";
        model = "\x\addons\a3_epoch_assets\models\oreSilver.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_silver_ore_CA.paa";
        descriptionShort = "$str_epoch_Canbeminedfromrocksusingasledgehammer";
        mass = 1;
    };
    class PartOreGold : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        count = 1;
        type = 256;
        displayName = "$str_epoch_GoldOre";
        model = "\x\addons\a3_epoch_assets\models\oreGold.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_gold_ore_CA.paa";
        descriptionShort = "$str_epoch_Canbeminedfromrocksusingasledgehammer";
        mass = 1;
    };
    class ItemPacked : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        count = 1;
        type = 256;
        displayName = "$str_epoch_PackedBackpack";
        model = "\x\addons\a3_epoch_assets\models\PackedBag.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\backpack\gear_packedBag_ca.paa";
        descriptionShort = "$str_epoch_Brandnewbackpackstillinthepackage";
        mass = 1.5;
    };
    class ItemSolar : CA_Magazine
    {
        author = "SteamPunkGears";
        scope = 2;
        count = 1;
        type = 256;
        displayName = "$str_epoch_SolarPanels";
        model = "\x\addons\a3_epoch_assets_3\CfgVehicles\solar_gen_assets\Solar_panels\Solar_Panels.p3d";
        picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\solar_gen_assets\Solar_panels\Solar_Panels_Icon_CA.paa";
        descriptionShort = "$str_epoch_Nextgensolarpanels";
        mass = 10;
    };
    class ItemCables : CA_Magazine
    {
        author = "SteamPunkGears";
        scope = 2;
        count = 1;
        type = 256;
        displayName = "$str_epoch_WireCables";
        model = "\x\addons\a3_epoch_assets_3\CfgVehicles\solar_gen_assets\Cables\Solar_cables.p3d";
        picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\solar_gen_assets\Cables\Solar_Cable_Icon_CA.paa";
        descriptionShort = "$str_epoch_Copperwireisulatedwithrubber";
        mass = 10;
    };
    class ItemBattery : CA_Magazine
    {
        author = "SteamPunkGears";
        scope = 2;
        count = 1;
        type = 256;
        displayName = "$str_epoch_EnclosedBattery";
        model = "\x\addons\a3_epoch_assets_3\CfgVehicles\solar_gen_assets\Battery\Battery.p3d";
        picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\solar_gen_assets\Battery\Battery_box_Icon_CA.paa";
        descriptionShort = "$str_epoch_Batteryinaprotectivecase";
        mass = 10;
    };
    class ItemScraps : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        count = 1;
        type = 256;
        displayName = "$str_epoch_MetalScraps";
        model = "\x\addons\a3_epoch_assets\models\scraps.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\scraps\gear_scraps_ca.paa";
        descriptionShort = "$str_epoch_Pieceofmetalscrap";
        mass = 1.5;
    };
    class ItemCorrugated : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        count = 1;
        type = 256;
        displayName = "$str_epoch_SalvageMetalSmall";
        model = "\x\addons\a3_epoch_assets\models\salvage_small.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\salvage\equip_salvage_small_ca.paa";
        descriptionShort = "$str_epoch_Smallpileofassortedmetalparts";
        mass = 5;
    };
    class ItemCorrugatedLg : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        count = 1;
        type = 256;
        displayName = "$str_epoch_SalvageMetalLarge";
        model = "\x\addons\a3_epoch_assets\models\salvage_large.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\salvage\equip_salvage_large_ca.paa";
        descriptionShort = "$str_epoch_Largepileofassortedmetalparts";
        mass = 12;
    };
    class 30Rnd_test_mag : CA_Magazine
    {
        scope = 2;
        displayName = "$str_epoch_Testmagazine";
        picture = "\A3\Weapons_F\Data\placeholder_co.paa";
        ammo = "B_Test_Caseless";
        count = 30;
        initSpeed = 795;
        tracersEvery = 0;
        lastRoundsTracer = 4;
        descriptionShort = "$str_epoch_Usedtoshoottestbullets";
    };
    class 5Rnd_rollins_mag : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        displayName = "$str_epoch_Rollinsmagazine";
        picture = "\x\addons\a3_epoch_assets\textures\rol_rounds\equip_Rol_rounds_ca.paa";
        model = "\x\addons\a3_epoch_assets\models\rol_rounds.p3d";
        ammo = "B_Test_Caseless";
        count = 5;
        initSpeed = 795;
        tracersEvery = 0;
        lastRoundsTracer = 4;
        descriptionShort = "$str_epoch_Rollins5RndMagazine";
        mass = 3;
    };
    class CSGAS : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        displayName = "$str_epoch_ChainsawGas";
        picture = "\x\addons\a3_epoch_assets\textures\kits\gear_jerryMixed_ca.paa";
        ammo = "ChainSaw_Bullet";
        count = 1000;
        initSpeed = 100;
        tracersEvery = 0;
        lastRoundsTracer = 9999;
        descriptionShort = "$str_epoch_ChainsawGas";
        mass = 5;
    };
    class sledge_swing : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        displayName = "$str_epoch_Swing";
        picture = "\x\addons\a3_epoch_assets\textures\kits\equip_swing_ca.paa";
        ammo = "B_Swing";
        count = 1000;
        initSpeed = 275;
        tracersEvery = 0;
        lastRoundsTracer = 9999;
        descriptionShort = "$str_epoch_Swing";
        mass = 0;
    };
    class stick_swing : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        displayName = "$str_epoch_Swing";
        picture = "\x\addons\a3_epoch_assets\textures\kits\equip_swing_ca.paa";
        ammo = "B_Stick";
        count = 1000;
        initSpeed = 275;
        tracersEvery = 0;
        lastRoundsTracer = 9999;
        descriptionShort = "$str_epoch_Swing";
        mass = 0;
    };
    class hatchet_swing : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        displayName = "$str_epoch_Swing";
        picture = "\x\addons\a3_epoch_assets\textures\kits\equip_swing_ca.paa";
        ammo = "B_Hatchet";
        count = 1000;
        initSpeed = 100;
        tracersEvery = 0;
        lastRoundsTracer = 9999;
        descriptionShort = "$str_epoch_Swing";
        mass = 0;
    };
    class 30Rnd_test_mag_Tracer : 30Rnd_test_mag
    {
        tracersEvery = 1;
        lastRoundsTracer = 30;
        displayName = "$str_epoch_Testtracermagazine";
        descriptionShort = "$str_epoch_Usedtoshoottesttracerbullets";
        displaynameshort = "Tracers";
    };
    class EnergyPack : CA_Magazine
    {
        author = "Sequisha";
        picture = "\A3\Weapons_F\Data\UI\M_battery_CA.paa";
        displayName = "$str_epoch_Smallenergypack";
        scope = 2;
        ammo = "B_EnergyPack";
        sound[] = {"A3\sounds_f\dummysound",31.622776,1,1600};
        reloadMagazineSound[] = {"A3\sounds_f\dummysound",0.01,1,10};
        descriptionShort = "$str_epoch_Twopartcontainerfilledwithenoughenergyandmatterforoneuse";
        initSpeed = 420;
        count = 10;
        mass = 4;
    };
    class EnergyPackLg : CA_Magazine
    {
        author = "Sequisha";
        picture = "\A3\Weapons_F\Data\UI\M_battery_CA.paa";
        displayName = "$str_epoch_Largeenergypack";
        scope = 2;
        ammo = "B_EnergyPack";
        sound[] = {"A3\sounds_f\dummysound",31.622776,1,1600};
        reloadMagazineSound[] = {"A3\sounds_f\dummysound",0.01,1,10};
        descriptionShort = "$str_epoch_Largetwopartcontainerfilledwithenoughenergyandmatter10uses";
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
        displayName = "$str_epoch_WhiskyNoodle";
        picture = "\x\addons\a3_epoch_assets\textures\whiskeynoodle\equip_whiskeyNoodle_ca.paa";
        model = "\x\addons\a3_epoch_assets\models\whiskeynoodle.p3d";
        scope = 2;
        descriptionShort = "$str_epoch_SayitslowDrinkitfast";
        count = 1;
        mass = 1;
    };
    class CircuitParts : CA_Magazine
    {
        author = "Sequisha";
        displayName = "$str_epoch_Electroniccomponents";
        picture = "\x\addons\a3_epoch_assets\textures\circuit\equip_circuit_ca.paa";
        model = "\x\addons\a3_epoch_assets\models\circuit.p3d";
        scope = 2;
        descriptionShort = "$str_epoch_Electroniccomponents";
        count = 1;
        mass = 5;
    };
    class VehicleRepair : CA_Magazine
    {
        author = "Sequisha";
        displayName = "$str_epoch_VehicleRepairParts";
        picture = "\x\addons\a3_epoch_assets\textures\vehiclerepair\equip_vehicleRepair_ca.paa";
        model = "\x\addons\a3_epoch_assets\models\vehicleRepair.p3d";
        scope = 2;
        descriptionShort = "$str_epoch_Repairsthemostdamagedpart";
        count = 1;
        mass = 20;
    };
    class VehicleRepairLg : CA_Magazine
    {
        author = "Sequisha";
        displayName = "$str_epoch_VehicleRepairKit";
        picture = "\x\addons\a3_epoch_assets\textures\vehiclerepair\equip_vehicleRepairLg_ca.paa";
        model = "\x\addons\a3_epoch_assets\models\vehicleRepairLg.p3d";
        scope = 2;
        descriptionShort = "$str_epoch_Fullyrepairsanyvehicle";
        count = 1;
        mass = 50;
    };
    class Pelt_EPOCH : CA_Magazine
    {
        author = "Sequisha";
        picture = "\x\addons\a3_epoch_assets\textures\meat\equip_scrapHide_ca.paa";
        model = "\x\addons\a3_epoch_assets\models\scrapHide.p3d";
        displayName = "$str_epoch_ScrapPelt";
        scope = 2;
        descriptionShort = "$str_epoch_ScrapPelt";
        count = 1;
        mass = 5;
    };
    class Venom_EPOCH : CA_Magazine
    {
        author = "Sequisha";
        picture = "\x\addons\a3_epoch_assets\textures\meat\equip_venomSac_ca.paa";
        model = "\x\addons\a3_epoch_assets\models\venomSac.p3d";
        displayName = "$str_epoch_VenomSack";
        scope = 2;
        descriptionShort = "$str_epoch_VenomSack";
        count = 1;
        mass = 1;
    };
    class SnakeCarcass_EPOCH : CA_Magazine
    {
        author = "Sequisha";
        picture = "\x\addons\a3_epoch_assets\textures\meat\equip_snakeCorpse_ca.paa";
        model = "\x\addons\a3_epoch_assets\models\snakeCorpse.p3d";
        displayName = "$str_epoch_SnakeCarcass";
        scope = 2;
        descriptionShort = "$str_epoch_Guttedandcleaned";
        count = 1;
        mass = 5;
    };
    class SnakeMeat_EPOCH : CA_Magazine
    {
        author = "Sequisha";
        picture = "\x\addons\a3_epoch_assets\textures\meat\equip_snakemeatCooked_ca.paa";
        model = "\x\addons\a3_epoch_assets\models\snakeMeat_cooked.p3d";
        displayName = "$str_epoch_CookedSnakeMeat";
        scope = 2;
        descriptionShort = "$str_epoch_Tasteslikechicken";
        count = 1;
        mass = 5;
    };
    class RabbitCarcass_EPOCH : CA_Magazine
    {
        author = "Sequisha";
        picture = "\x\addons\a3_epoch_assets\textures\meat\equip_rabbitCorpse_ca.paa";
        model = "\x\addons\a3_epoch_assets\models\rabbit.p3d";
        displayName = "$str_epoch_RabbitCarcass";
        scope = 2;
        descriptionShort = "$str_epoch_Guttedandcleaned";
        count = 1;
        mass = 5;
    };
    class CookedRabbit_EPOCH : CA_Magazine
    {
        author = "Sequisha";
        picture = "\x\addons\a3_epoch_assets\textures\meat\equip_rabbitCooked_ca.paa";
        model = "\x\addons\a3_epoch_assets\models\rabbit_cooked.p3d";
        displayName = "$str_epoch_CookedRabbit";
        scope = 2;
        descriptionShort = "$str_epoch_MmmTasty";
        count = 1;
        mass = 5;
    };
    class ChickenCarcass_EPOCH : CA_Magazine
    {
        author = "Sequisha";
        picture = "\x\addons\a3_epoch_assets\textures\meat\equip_chickenRaw_ca.paa";
        model = "\x\addons\a3_epoch_assets\models\chickenRaw.p3d";
        displayName = "$str_epoch_ChickenCarcass";
        scope = 2;
        descriptionShort = "$str_epoch_Guttedandcleaned";
        count = 1;
        mass = 10;
    };
    class CookedChicken_EPOCH : CA_Magazine
    {
        author = "Sequisha";
        picture = "\x\addons\a3_epoch_assets\textures\meat\equip_chickenCooked_ca.paa";
        model = "\x\addons\a3_epoch_assets\models\chicken_cooked.p3d";
        displayName = "$str_epoch_CookedChicken";
        scope = 2;
        descriptionShort = "$str_epoch_Roastedtoperfection";
        count = 1;
        mass = 10;
    };
    class GoatCarcass_EPOCH : CA_Magazine
    {
        author = "Sequisha";
        picture = "\x\addons\a3_epoch_assets\textures\meat\equip_goatLeg_ca.paa";
        model = "\x\addons\a3_epoch_assets\models\goatLeg.p3d";
        displayName = "$str_epoch_RawGoatLeg";
        scope = 2;
        descriptionShort = "$str_epoch_RawGoatLeg";
        count = 1;
        mass = 20;
    };
    class DogCarcass_EPOCH : CA_Magazine
    {
        author = "Sequisha";
        picture = "\x\addons\a3_epoch_assets\textures\meat\equip_goatLeg_ca.paa";
        model = "\x\addons\a3_epoch_assets\models\goatLeg.p3d";
        displayName = "$str_epoch_RawDogLeg";
        scope = 2;
        descriptionShort = "$str_epoch_RawDogLeg";
        count = 1;
        mass = 20;
    };
    class CookedGoat_EPOCH : CA_Magazine
    {
        author = "Sequisha";
        picture = "\x\addons\a3_epoch_assets\textures\meat\equip_goatlegCooked_ca.paa";
        model = "\x\addons\a3_epoch_assets\models\goatLeg_cooked.p3d";
        displayName = "$str_epoch_CookedGoatLeg";
        scope = 2;
        descriptionShort = "$str_epoch_CookedGoatLeg";
        count = 1;
        mass = 20;
    };
    class CookedDog_EPOCH : CA_Magazine
    {
        author = "Sequisha";
        picture = "\x\addons\a3_epoch_assets\textures\meat\equip_goatlegCooked_ca.paa";
        model = "\x\addons\a3_epoch_assets\models\goatLeg_cooked.p3d";
        displayName = "$str_epoch_CookedDogLeg";
        scope = 2;
        descriptionShort = "$str_epoch_CookedDogLeg";
        count = 1;
        mass = 20;
    };
    class SheepCarcass_EPOCH : CA_Magazine
    {
        author = "Sequisha";
        picture = "\x\addons\a3_epoch_assets\textures\meat\equip_goatLeg_ca.paa";
        model = "\x\addons\a3_epoch_assets\models\goatLeg.p3d";
        displayName = "$str_epoch_RawSheepLeg";
        scope = 2;
        descriptionShort = "$str_epoch_RawSheepLeg";
        count = 1;
        mass = 20;
    };
    class CookedSheep_EPOCH : CA_Magazine
    {
        author = "Sequisha";
        picture = "\x\addons\a3_epoch_assets\textures\meat\equip_goatlegCooked_ca.paa";
        model = "\x\addons\a3_epoch_assets\models\goatLeg_cooked.p3d";
        displayName = "$str_epoch_CookedSheepLeg";
        scope = 2;
        descriptionShort = "$str_epoch_CookedSheepLeg";
        count = 1;
        mass = 20;
    };
    class KitSpikeTrap : CA_Magazine
    {
        author = "Sequisha";
        model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_wooden_crate_ca.paa";
        displayName = "$str_epoch_WoodenSpikeTrap";
        scope = 2;
        descriptionShort = "$str_epoch_WoodenSpikeTrap";
        count = 1;
        mass = 20;
    };
    class KitMetalTrap : CA_Magazine
    {
        author = "Sequisha";
        model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_wooden_crate_ca.paa";
        displayName = "$str_epoch_MetalSpikeTrap";
        scope = 2;
        descriptionShort = "$str_epoch_MetalSpikeTrap";
        count = 1;
        mass = 20;
    };
    class KitStudWall : CA_Magazine
    {
        author = "Sequisha";
        model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\kits\equip_woodenWall_ca.paa";
        displayName = "$str_epoch_WoodenStudWall";
        scope = 2;
        descriptionShort = "$str_epoch_WoodenStudWall";
        count = 1;
        mass = 20;
    };
    class KitWoodFloor : CA_Magazine
    {
        author = "Sequisha";
        model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\kits\equip_woodenFloor_ca.paa";
        displayName = "$str_epoch_WoodenFloor";
        scope = 2;
        descriptionShort = "$str_epoch_WoodenFloor";
        count = 1;
        mass = 20;
    };
    class KitWoodStairs : CA_Magazine
    {
        author = "Sequisha";
        model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\kits\equip_woodenStairs_ca.paa";
        displayName = "$str_epoch_WoodenStairs";
        scope = 2;
        descriptionShort = "$str_epoch_WoodenStairs";
        count = 1;
        mass = 20;
    };
    class KitWoodTower : CA_Magazine
    {
        author = "Sequisha";
        model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_wooden_crate_ca.paa";
        displayName = "$str_epoch_WoodenTower";
        scope = 2;
        descriptionShort = "$str_epoch_WoodenTower";
        count = 1;
        mass = 20;
    };
    class KitWoodRamp : CA_Magazine
    {
        author = "Sequisha";
        model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\kits\equip_woodramp_ca.paa";
        displayName = "$str_epoch_WoodenRamp";
        scope = 2;
        descriptionShort = "$str_epoch_WoodenRamp";
        count = 1;
        mass = 20;
    };
    class KitTankTrap : CA_Magazine
    {
        author = "Sequisha";
        model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_wooden_crate_ca.paa";
        displayName = "$str_epoch_TankTrap";
        scope = 2;
        descriptionShort = "$str_epoch_TankTrap";
        count = 1;
        mass = 20;
    };
    class KitHesco3 : CA_Magazine
    {
        author = "Sequisha";
        model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_wooden_crate_ca.paa";
        displayName = "$str_epoch_HescoWide";
        scope = 2;
        descriptionShort = "$str_epoch_HescoWide";
        count = 1;
        mass = 20;
    };
    class KitWoodLadder : CA_Magazine
    {
        author = "Sequisha";
        model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_wooden_crate_ca.paa";
        displayName = "$str_epoch_WoodenLadder";
        scope = 2;
        descriptionShort = "$str_epoch_WoodenLadder";
        count = 1;
        mass = 20;
    };
    class KitFirePlace : CA_Magazine
    {
        author = "Sequisha";
        model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_wooden_crate_ca.paa";
        displayName = "$str_epoch_Fireplace";
        scope = 2;
        descriptionShort = "$str_epoch_Fireplace";
        count = 1;
        mass = 20;
    };
    class KitTiPi : CA_Magazine
    {
        author = "Sequisha";
        model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\kits\equip_TP_ca.paa";
        displayName = "$str_epoch_TiPiKit";
        scope = 2;
        descriptionShort = "$str_epoch_TeePeeTiPi";
        count = 1;
        mass = 20;
    };
    class KitShelf : CA_Magazine
    {
        author = "Sequisha";
        model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\kits\equip_shelf_ca.paa";
        displayName = "$str_epoch_ShelfKit";
        scope = 2;
        descriptionShort = "$str_epoch_Shelf";
        count = 1;
        mass = 20;
    };
    class KitWorkbench : CA_Magazine
    {
        author = "Sequisha";
        model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_wooden_crate_ca.paa";
        displayName = "$str_epoch_WorkbenchKit";
        scope = 2;
        descriptionShort = "$str_epoch_Workbench";
        count = 1;
        mass = 20;
    };
    class KitFoundation : CA_Magazine
    {
        author = "Sequisha";
        model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\kits\equip_foundation_ca.paa";
        displayName = "$str_epoch_ConcreteFoundation";
        scope = 2;
        descriptionShort = "$str_epoch_ConcreteFoundation";
        count = 1;
        mass = 20;
    };
    class KitWoodFoundation : CA_Magazine
    {
        author = "Sequisha";
        model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\kits\equip_foundation_ca.paa";
        displayName = "$str_epoch_WoodFoundation";
        scope = 2;
        descriptionShort = "$str_epoch_WoodFoundation";
        count = 1;
        mass = 10;
    };
    class KitSolarGen : CA_Magazine
    {
        author = "Sequisha";
        model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_wooden_crate_ca.paa";
        displayName = "$str_epoch_SolarGeneratorKit";
        scope = 2;
        descriptionShort = "$str_epoch_SolarGeneratorKit";
        count = 1;
        mass = 20;
    };
    class KitPlotPole : CA_Magazine
    {
        author = "Sequisha";
        model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\jammer\equip_jammer_ca.paa";
        displayName = "$str_epoch_FrequencyJammer";
        scope = 2;
        descriptionShort = "$str_epoch_FrequencyJammer";
        count = 1;
        mass = 20;
    };
    class KitCinderWall : CA_Magazine
    {
        author = "Sequisha";
        model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\kits\equip_cinderHalf_ca.paa";
        displayName = "$str_epoch_CinderWall";
        scope = 2;
        descriptionShort = "$str_epoch_CinderWall";
        count = 1;
        mass = 20;
    };
    class PaintCanBase : CA_Magazine
    {
        author = "Sequisha";
        model = "\x\addons\a3_epoch_assets\models\paintCan.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\paint can\gear_paintCan_ca.paa";
        displayName = "$str_epoch_PaintCan";
        scope = 0;
        descriptionShort = "$str_epoch_CrustOLeumOilbasedprotectiveenamel";
        count = 1;
        mass = 1;
    };
    class PaintCanClear : PaintCanBase
    {
        scope = 2;
        displayName = "$str_epoch_PaintStripper";
        descriptionShort = "$str_epoch_Removespaintandotherfinishes";
        colorName = "None";
        textureIndex = 0;
    };
    class PaintCanBlk : PaintCanBase
    {
        scope = 2;
        displayName = "$str_epoch_PaintCanBlack";
        colorName = "Black";
        textureIndex = 1;
    };
    class PaintCanBlu : PaintCanBase
    {
        scope = 2;
        displayName = "$str_epoch_PaintCanBlue";
        colorName = "Blue";
        textureIndex = 2;
    };
    class PaintCanBrn : PaintCanBase
    {
        scope = 2;
        displayName = "$str_epoch_PaintCanBrown";
        colorName = "Brown";
        textureIndex = 3;
    };
    class PaintCanGrn : PaintCanBase
    {
        scope = 2;
        displayName = "$str_epoch_PaintCanGreen";
        colorName = "Green";
        textureIndex = 4;
    };
    class PaintCanOra : PaintCanBase
    {
        scope = 2;
        displayName = "$str_epoch_PaintCanOrange";
        colorName = "Orange";
        textureIndex = 5;
    };
    class PaintCanPur : PaintCanBase
    {
        scope = 2;
        displayName = "$str_epoch_PaintCanPurple";
        colorName = "Purple";
        textureIndex = 6;
    };
    class PaintCanRed : PaintCanBase
    {
        scope = 2;
        displayName = "$str_epoch_PaintCanRed";
        colorName = "Red";
        textureIndex = 7;
    };
    class PaintCanTeal : PaintCanBase
    {
        scope = 2;
        displayName = "$str_epoch_PaintCanTeal";
        colorName = "Teal";
        textureIndex = 8;
    };
    class PaintCanYel : PaintCanBase
    {
        scope = 2;
        displayName = "$str_epoch_PaintCanYellow";
        colorName = "Yellow";
        textureIndex = 9;
    };
    class Poppy : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\poppy.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\moist\gear_moist_ca.paa";
        displayName = "$str_epoch_Poppy";
        descriptionShort = "$str_epoch_Podoffofapoppyplant";
        count = 1;
        mass = 1;
    };
    class Goldenseal : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_3\vegetation\models\goldenseal.p3d";
        picture = "\x\addons\a3_epoch_assets_3\vegetation\gear_goldenseal_ca.paa";
        displayName = "$str_epoch_Goldenseal";
        descriptionShort = "$str_epoch_Helpsreducetoxicity";
        count = 1;
        mass = 1;
    };
    class Pumpkin : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_3\vegetation\models\pumpkin.p3d";
        picture = "\x\addons\a3_epoch_assets_3\vegetation\gear_pumpkin_ca.paa";
        displayName = "$str_epoch_Pumpkin";
        descriptionShort = "$str_epoch_Pumpkin";
        count = 1;
        mass = 1;
    };
    class Towelette : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\moist.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\moist\gear_moist_ca.paa";
        displayName = "$str_epoch_MoistTowelette";
        descriptionShort = "$str_epoch_Tearopenpacketremovetoweletteanduse";
        count = 1;
        mass = 1;
    };
    class HeatPack : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\heatdough.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\moist\gear_heat_ca.paa";
        displayName = "$str_epoch_HeatPack";
        descriptionShort = "$str_epoch_Dontsufferinthecoldjustopenoneoftheseandgettoasty";
        count = 1;
        mass = 1;
    };
    class ColdPack : CA_Magazine
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\heatdough.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\moist\gear_heat_ca.paa";
        displayName = "$str_epoch_ColdPack";
        descriptionShort = "$str_epoch_RunningHotcoolitoff";
        count = 1;
        mass = 1;
    };
};

/*[[[end]]]*/

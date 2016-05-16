#include "basicdefines_A3.hpp"
class CfgPatches
{
	class a2_epoch_weapons
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"A3_Weapons_F"};
		epochVersion = "0.3.9.0";
	};
};
/// All firemodes, to be sure
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

/// Weapon slots
class SlotInfo;
class CowsSlot;
class PointerSlot;

#include "cfgRecoils.hpp" /// specific recoil patterns for this rifle
#include "cfgMagazines.hpp" /// specific magazines for this rifle
#include "cfgAmmo.hpp" /// specific ammo for this rifle

class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			allowedSlots[] = {901};
		};
	};

	// class UGL_F;

	#include "akm\cfgWeapons.hpp"
	#include "m4a3\cfgWeapons.hpp"
	#include "m14\cfgWeapons.hpp"
	#include "m16\cfgWeapons.hpp"
	#include "m107\cfgWeapons.hpp"
	#include "m249\cfgWeapons.hpp"


	/// include accessory from separate file to not clutter this one
	#include "accessory.hpp"
};

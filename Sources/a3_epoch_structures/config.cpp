#include "basicdefines_A3.hpp"
#include "cfgPatches.hpp"
/*
class CfgAnimationSourceSounds
{
    class ferris_motor
    {
        class motorFerris
        {
            loop = 1;
            terminate = 0;
            trigger = "direction * (phase factor[0.01,0.02])";
            sound0[] = { "\x\addons\a3_epoch_structures\audio\music_box.wss", 1, 1, 20 };
            sound[] = { "sound0", 1 };
        };

    };
};
*/

class CfgVehicles
{
	// Parent class declarations

	class House;

	class House_F: House
	{
		class DestructionEffects;
		class Lamps_base_F;
	};
	class Ruins_F;


	//--------------------------------------------------- Light bulbs--------------------------------------------------
	/*
	class Lamps_base_F;
	class White_bulb_off: Lamps_base_F
	{
		scope				= protected;										/// makes the lamp invisible in editor
		scopeCurator		= public;											/// makes the lamp visible in Zeus
		displayName			= "White Bulb (off)";									/// displayed in Editor
		model				= \x\addons\a3_epoch_structures\Lights\white_bulb_off.p3d;	/// simple path to model

		armor				= 1;	/// just some protection against missiles, collisions and explosions

		class Hitpoints {};
		class AnimationSources {};
		class MarkerLights
		{
			class Light_4
			{
				color[]				= {1.0, 0.0, 0.0};		/// approximate colour of standard lights
				ambient[]			= {0.01, 0.0, 0.0};		/// nearly a white one
				intensity			= 200;					/// strength of the light
				name				= "Light_4_pos";		/// name of

				blinking			= true;					/// lets make it blinking to show how patterns work
				blinkingPattern[]	= {0.75, 1.0};			// 0.25 s flash, 1.25 s period
				blinkingStartsOn	= true;					/// pattern starts with length of the first flash
				blinkingPatternGuarantee	= true;			/// use this to guarantee all blinks of the patter to be done
															/// doesn't guarantee the length of pattern if true
															/// (e.g. because of blinks shorter than a frame would take a frame to be seen)

				useFlare			= true;					/// does the light use flare?
				flareSize			= 1.5;					/// how big is the flare
				flareMaxDistance	= 1000;					/// how far can you see the flare

				activeLight			= true;					/// engine counts this one as an active light into limit of lights
				dayLight			= false;				/// it doesn't shine during the day
				drawLight			= false;				/// doesn't create a specific face for flare

				class Attenuation
				{
					start			= 0;
					constant		= 2;
					linear			= 10;
					quadratic		= 20;

					hardLimitStart	= 5;					/// it is good to have some limit otherwise the light would shine to infinite distance
					hardLimitEnd	= 6;					/// this allows adding more lights into scene
				};
			};
		};
	};

	class White_bulb: White_bulb_off
	{
		scope				= private;
		scopeCurator		= public;
		displayName			= "White Bulb (on)";
		model				= \x\addons\a3_epoch_structures\Lights\white_bulb.p3d;

		aggregateReflectors[] =
		{
			{"Light_1"}
		};

		class Reflectors
		{
			class Light_1
			{
				color[]				= {2500,4000,6000};
				ambient[]			= {2.5,4,6};
				intensity			= 2;
				size				= 1;					/// size of the light point seen from distance
				innerAngle			= 100;					/// angle of full light
				outerAngle			= 165;					/// angle of some light
				coneFadeCoef		= 4;					/// attenuation of light between the above angles

				position			= "Light_1_pos";		/// memory point for start of the light and flare
				direction			= "Light_1_dir";		/// memory point for the light direction
				hitpoint			= "Light_1_hitpoint";	/// point(s) in hitpoint lod for the light (hitPoints are created by engine)
				selection			= "Light_1_hide";		/// selection for artificial glow around the bulb, not much used any more

				useFlare			= true;
				flareSize			= 2;
				flareMaxDistance	= 130;

				class Attenuation
				{
					start			= 0;
					constant		= 0;
					linear			= 0;
					quadratic		= 0.3;

					hardLimitStart	= 50;
					hardLimitEnd	= 65;
				};
			};
			class Light_2: Light_1
			{
				position			= "Light_2_pos";
				direction			= "Light_2_dir";
				hitpoint			= "Light_2_hitpoint";
				selection			= "Light_2_hide";
			};
			class Light_3: Light_1
			{
				position			= "Light_3_pos";
				direction			= "Light_3_dir";
				hitpoint			= "Light_3_hitpoint";
				selection			= "Light_3_hide";
			};
		};
	};
	*/
	//---------------------------------------------------End Light bulbs--------------------------------------------------



	// Class of the house in good state
	class ferrisWheel_EPOCH: House
	{
		author = "Sequisha";
		ladders[] = {{"start1","end1"},{"start2","end2"},{"start3","end3"},{"start4","end4"}};
		scope = 2; // 2 = public = shown in editor
		displayName = "Ferris Wheel"; // Name in editor
		model = \x\addons\a3_epoch_structures\Ferris\ferrisWheel.p3d; // Path to model
		placement = "vertical";
		vehicleClass = Structures; // category in editor; "Structures" value is a class defined in CfgVehicleClasses
		mapSize = 20.27; // Scale of icon in editor
		cost = 40000; // Score penalty for destroying the house

		selectionDamage = DamT_1; // Selection which will have textures and materials switched (according to "class Damage definitions") based on total damage of the house
		replaceDamagedHitpoints[] = {Hitzone_1_hitpoint, Hitzone_2_hitpoint}; // Array of hitpoints (subclasses in "class Hitpoints") that can trigger switch to the damaged version when destroyed
	//  replaceDamaged = "Land_Test_House_01_dam_F"; // Classname of the damaged version
		class HitPoints // Entities representing destructible subparts of the house
		{
			class Hitzone_1_hitpoint
			{
				armor = 20;
				material = -1;
				name = Dam_1; // Name of selection in Hit-points lod in p3d
				visual = DamT_1; // Name of selection in resolution lods in p3d that will have it's textures and materials switched (according to "class Damage definitions") based on damage of this hitpoint
				passThrough = 1.0; // Coefficient for how much damage done to this hitpoints is also done to total damage of the house
				radius = 0.375; // Radius of spheres around each vertex of this hitpoint in Hit-points lod. These spheres represent the volume from which this hitpoint takes damage
				convexComponent = Dam_2;
				explosionShielding = 50; // Multiplier for damage taken from explosives
				minimalHit = 0.001; // Minimal damage that can be dealt to the hitpoint. Any lower damage is ignored

				class DestructionEffects //
				{
					class Dust
					{
						simulation = particles; // Visual effect
						type = HousePartDust; // Class of this particular effect, defined in CfgCloudlets
						position = Dam_1_effects; // Point of origin for this effect, defined in Memory lod in p3d
						intensity = 1;
						interval = 1;
						lifeTime = 0.01;
					};
					class Dust2: Dust
					{
						type = HousePartDustLong;
					};
					class Walls: Dust
					{
						type = HousePartWall;
					};
					class DamageAround
					{
						simulation = damageAround; // Effect dealing damage in a radius
						type = DamageAroundHousePart; // Class of this particular effect, defined in CfgDamageAround
						position = Dam_1_effects;
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
				};
			};
			class Hitzone_2_hitpoint: Hitzone_1_hitpoint
			{
				name = Dam_2;
				convexComponent = Dam_2;

				class DestructionEffects: DestructionEffects
				{
					class Dust: Dust
					{
						position = Dam_2_effects;
					};
					class Dust2: Dust2
					{
						position = Dam_2_effects;
					};
					class Walls: Walls
					{
						position = Dam_2_effects;
					};
					class DamageAround: DamageAround
					{
						position = Dam_2_effects;
					};
				};
			};

		};
		/*
		class Damage
		{
			// Texture pairs (below 0.5 health and 0.5+) for switching visuals (can also use generated)
			tex[] =
			{
				// Window textures
				"A3\Structures_F\Data\Windows\window_set_CA.paa",
				"A3\Structures_F\Data\Windows\destruct_half_window_set_CA.paa",

				// Grey color
				"#(argb,8,8,3)color(0.501961,0.501961,0.501961,1.0,co)",
				"#(argb,8,8,3)color(0.294118,0.294118,0.294118,1.0,co)",

				// Brown color
				"#(argb,8,8,3)color(0.501961,0.25098,0,1.0,co)",
				"#(argb,8,8,3)color(0.392157,0.196078,0,1.0,co)",

				// Yellow color
				"#(argb,8,8,3)color(1,1,0.501961,1.0,co)",
				"#(argb,8,8,3)color(0.513725,0.513725,0.203922,1.0,co)",

				// Light grey color
				"#(argb,8,8,3)color(0.752941,0.752941,0.752941,1.0,co)",
				"#(argb,8,8,3)color(0.478431,0.478431,0.478431,1.0,co)",

				// Red color
				"#(argb,8,8,3)color(1,0,0,1.0,co)",
				"#(argb,8,8,3)color(0.701961,0,0,1.0,co)"
			};

			// Unlike textures, materials are not in pairs but in triplets (health: 0 - 0.49, 0.5 - 0.99, 1)
			mat[] =
			{
				"A3\Structures_F\Data\Windows\window_set.rvmat",
				"A3\Structures_F\Data\Windows\destruct_half_window_set.rvmat",
				"A3\Structures_F\Data\Windows\destruct_full_window_set.rvmat"
			};
		};
		*/
		class AnimationSources
		{
			// Animation sources for doors
			class ferris_source
			{
				source = "user"; // "user" = custom source = not controlled by some engine value
				sourceAddress = loop;
				angle1 = -360;//rad -315.0;
				animPeriod = 25;
				initPhase = 0.0;
				sound = "ferris_motor";
            };
		};
		// This section defined custom actions for action menu. Each class defined here represent one action. Here we have Open+Close pairs of action for each door (1-5)
		class UserActions
		{
			class startFerris
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />"; // This is displayed in the center of the screen just below crosshair. In this case it's an icon, not a text.
				displayName = "Start Ride"; // Label of the action used in the action menu itself.
				position = start_ride; // Point in Memory lod in p3d around which the action is available.
				priority = 0.4; // Priority coefficient used for sorting action in the action menu.
				radius = 10; // Range around the above defined point in which you need to be to access the action.
				onlyForPlayer = false; // Defines if the action is available only to players or AI as well.
			//	condition = "this animationPhase 'Wheel_rot' == 0";
			//  condition = "this == this";
				condition = "(this animationPhase 'Wheel_rot') == 0";
				statement = "this animate ['Wheel_rot',1]; this animate ['car1_rot',1];	this animate ['car2_rot',1]; this animate ['car3_rot',1]; this animate ['car4_rot',1]; this animate ['car5_rot',1]; this animate ['car6_rot',1]; this animate ['car7_rot',1]; this animate ['car8_rot',1]; this animate ['car9_rot',1]; this animate ['car10_rot',1]; this animate ['car11_rot',1]; this animate ['car12_rot',1]; this animate ['car13_rot',1]; this animate ['car14_rot',1]; this animate ['car15_rot',1]; this animate ['car16_rot',1];";
			};
			class stopFerris
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />"; // This is displayed in the center of the screen just below crosshair. In this case it's an icon, not a text.
				displayName = "Stop Ride"; // Label of the action used in the action menu itself.
				position = start_ride; // Point in Memory lod in p3d around which the action is available.
				priority = 0.4; // Priority coefficient used for sorting action in the action menu.
				radius = 10; // Range around the above defined point in which you need to be to access the action.
				onlyForPlayer = false; // Defines if the action is available only to players or AI as well.
			//	condition = "this animationPhase 'Wheel_rot' == 1";
			//  condition = "this == this";
				condition = "(this animationPhase 'Wheel_rot') == 1";
				statement = "this animate ['Wheel_rot',0]; this animate ['car1_rot',0]; this animate ['car2_rot',0]; this animate ['car3_rot',0]; this animate ['car4_rot',0]; this animate ['car5_rot',0]; this animate ['car6_rot',0]; this animate ['car7_rot',0]; this animate ['car8_rot',0]; this animate ['car9_rot',0]; this animate ['car10_rot',0]; this animate ['car11_rot',0]; this animate ['car12_rot',0]; this animate ['car13_rot',0]; this animate ['car14_rot',0]; this animate ['car15_rot',0]; this animate ['car16_rot',0];";
			};
		};
		// Amount of doors of this house; a parameter for easy processing of all doors on different houses by scripts.
		numberOfDoors = 0;
	};


};

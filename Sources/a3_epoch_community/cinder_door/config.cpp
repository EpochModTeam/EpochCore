class CfgPatches
{
    class cinder_door1
    {
        units[]={"cinder_door"};
        weapons[]={};
        requiredVersion= 1;
        version= 1;
		fileName = "cinder_door1";
		author = "Helion4";
    };
};

class CfgVehicleClasses
{
    class helion_Structure    {
        displayName="cinder_door1";
    };
};

class CfgFactionClasses
{
        class helion_model
        {
               displayName = "cinder_door1";                        // Name based on the editor faction class.
               priority = 1;
               side = 2;                                              // Group association.
        };
};

class CfgVehicles
{
	class Strategic;	// External class reference

	class cinder_door1 : Strategic
    {
		scope = 2;                                                              // public
		model = cinder_door1\cinder_door.p3d;                     // our p3d model.
		placement = vertical;
		mapSize = 3;                                                            // Icon size in the editor.
		displayName = "cinder_door";                                              // List Name in the editor.
		cost = 0;
		armor = 8000;                                        // Resistance to Damage of the object.
		class AnimationSources
		{
			class open_door
			{
				source = "user";
				animPeriod = 3;
				initPhase = 0;
			};
			class open_hatch
			{
				source = "user";
				animPeriod = 3;
				initPhase = 0;
			};
			class lock_door
			{
				source = "user";
				animPeriod = 3;
				initPhase = 0;
			};			
		};
 
		class UserActions
		{
			class Open_door
			{
				displayName = "Open Door";
				position = "door";
				radius = 4;
				OnlyForPlayer = 1;
				condition = "this animationPhase ""open_door"" < 0.5";
				statement = "this animate [""open_door"", 1];";
			};
 
			class Close_door: Open_door
			{
				displayName = "Close Door";
				condition = "this animationPhase ""open_door"" >= 0.5";
				statement = "this animate [""open_door"", 0];";
			};
			
			class Open_hatch
			{
				displayName = "Open hatch";
				position = "hatch";
				radius = 4;
				OnlyForPlayer = 1;
				condition = "this animationPhase ""open_hatch"" < 0.5";
				statement = "this animate [""open_hatch"", 1];";
			};
 
			class Close_hatch: Open_hatch
			{
				displayName = "Close hatch";
				condition = "this animationPhase ""open_hatch"" >= 0.5";
				statement = "this animate [""open_hatch"", 0];";
			};

			class lock_door
			{
				displayName = "Lock Door";
				position = "bolt";
				radius = 4;
				OnlyForPlayer = 1;
				condition = "this animationPhase ""lock_door"" < 0.5";
				statement = "this animate [""lock_door"", 1];";
			};
 
			class unlock_door: lock_door
			{
				displayName = "Unlock Door";
				condition = "this animationPhase ""lock_door"" >= 0.5";
				statement = "this animate [""lock_door"", 0];";
			};			
		};
		
		
		
    };
 };

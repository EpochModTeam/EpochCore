class CfgPatches
{
    class epoch_bunker
    {
        units[]={"epoch_bunker"};
        weapons[]={};
        requiredVersion= 1;
        version= 1;
		fileName = "epoch_bunker";
		author = "Helion4";
    };
};

class CfgVehicleClasses
{
    class helion_Structure    {
        displayName="epoch_bunker";
    };
};

class CfgFactionClasses
{
        class helion_model
        {
               displayName = "epoch_bunker";                        // Name based on the editor faction class.
               priority = 1;
               side = 2;                                              // Group association.
        };
};


class CfgVehicles
{
	class Strategic;	// External class reference

	class epoch_bunker : Strategic
    {
		scope = 2;                                                              // public
		model = bunker\4_way_bunker.p3d;                     // our p3d model.
		placement = vertical;
		mapSize = 3;                                                            // Icon size in the editor.
		displayName = "epoch_bunker";                                              // List Name in the editor.
		cost = 0;
		armor = 8000;                                        // Resistance to Damage of the object.
    };
	class mirrors : Strategic
    {
		scope = 2;                                                              // public
		model = bunker\rooms\mirrors.p3d;                     // our p3d model.
		placement = vertical;
		mapSize = 3;                                                            // Icon size in the editor.
		displayName = "MIRRORS";                                              // List Name in the editor.
		cost = 0;
		armor = 8000;   		// Resistance to Damage of the object.

		class EventHandlers
		{
			init="(_this select 0) execVM ""bunker\rooms\mirror.sqf""";
		};

		class RenderTargets /// class for all Picture-in-Picture (PiP)
		{
			class Mirror1
			{
				renderTarget = "rendertarget1"; /// what texture is going to be used, it should be mapped in model like #(argb,256,512,1)r2t(rendertarget0,1.0)
				class CameraView1
				{
					pointPosition		= "PIP0_pos"; 	/// memory point of PiP origin
					pointDirection		= "PIP0_dir"; 	/// memory point of PiP direction
					renderQuality 		= 2;			/// what quality should the PiP be
					renderVisionMode 	= 0;			/// zero means standard vision
					fov 				= 0.7;			/// what is the angle of the PiP field of view
				}; 			
			};
			class Mirror2	/// rendering of PiPs is shared, it is best to have one for all sources, this is just an example
			{
				renderTarget = "rendertarget2";
				class CameraView1
				{
					pointPosition		= "PIP1_pos";
					pointDirection		= "PIP1_dir";
					renderQuality 		= 2;
					renderVisionMode 	= 0;
					fov 				= 0.7;					
				}; 			
			};
			class Mirror3
			{
				renderTarget = "rendertarget3";
				class CameraView1
				{
					pointPosition		= "PIP2_pos";
					pointDirection		= "PIP2_dir";
					renderQuality 		= 2;
					renderVisionMode 	= 0;
					fov 				= 0.7;					
				}; 			
			};		
			class Mirror4
			{
				renderTarget = "rendertarget4";
				class CameraView1
				{
					pointPosition		= "PIP3_pos";
					pointDirection		= "PIP3_dir";
					renderQuality 		= 2;
					renderVisionMode 	= 0;
					fov 				= 0.7;					
				}; 			
			};			
		};		
    };
	
    class epoch_logo : Strategic
    {
		scope = 2;                                                              // public
		model = bunker\rooms\logo\Logo_monument.p3d;                     // our p3d model.
		placement = vertical;
		mapSize = 3;                                                            // Icon size in the editor.
		displayName = "epoch_logo";                                              // List Name in the editor.
		cost = 0;
		armor = 8000; 
		class AnimationSources
        {
            class logo_spin
            {
                source = "user";
                initPhase = 0;
                animPeriod = 30;
            };
        };
        class UserActions
        {
			class logo_spin
			{
				displayName = "activate";
				position = "plinth";
				radius = 10;
				OnlyForPlayer = 1;
				condition = "this animationPhase ""logo_spin"" < 0.5";
				statement = "this animate [""logo_spin"", 1];";
			};
			class logo_spin_not: logo_spin
			{
				displayName = "de-activate";
				condition = "this animationPhase ""logo_spin"" >= 0.5";
				statement = "this animate [""logo_spin"", 0];";
			};			
        };		
		
    };
	class epoch_bunker_01 : Strategic
    {
		scope = 2;                                                              // public
		model = bunker\epoch_bunker_01.p3d;                     // our p3d model.
		placement = vertical;
		mapSize = 3;                                                            // Icon size in the editor.
		displayName = "epoch_bunker_01";                                              // List Name in the editor.
		cost = 0;
		armor = 8000;                                        // Resistance to Damage of the object.
    };	
	class epoch_bunker_02 : Strategic
    {
		scope = 2;                                                              // public
		model = bunker\epoch_bunker_02.p3d;                     // our p3d model.
		placement = vertical;
		mapSize = 3;                                                            // Icon size in the editor.
		displayName = "epoch_bunker_02";                                              // List Name in the editor.
		cost = 0;
		armor = 8000;                                        // Resistance to Damage of the object.
    };		
	class epoch_bunker_03 : Strategic
    {
		scope = 2;                                                              // public
		model = bunker\epoch_bunker_03.p3d;                     // our p3d model.
		placement = vertical;
		mapSize = 3;                                                            // Icon size in the editor.
		displayName = "epoch_bunker_03";                                              // List Name in the editor.
		cost = 0;
		armor = 8000;                                        // Resistance to Damage of the object.
    };
	class epoch_bunker_04 : Strategic
    {
		scope = 2;                                                              // public
		model = bunker\epoch_bunker_04.p3d;                     // our p3d model.
		placement = vertical;
		mapSize = 3;                                                            // Icon size in the editor.
		displayName = "epoch_bunker_04";                                              // List Name in the editor.
		cost = 0;
		armor = 8000;                                        // Resistance to Damage of the object.
    };	
	class epoch_bunker_05 : Strategic
    {
		scope = 2;                                                              // public
		model = bunker\epoch_bunker_05.p3d;                     // our p3d model.
		placement = vertical;
		mapSize = 3;                                                            // Icon size in the editor.
		displayName = "epoch_bunker_05";                                              // List Name in the editor.
		cost = 0;
		armor = 8000;                                        // Resistance to Damage of the object.
    };	
	class epoch_bunker_06 : Strategic
    {
		scope = 2;                                                              // public
		model = bunker\epoch_bunker_06.p3d;                     // our p3d model.
		placement = vertical;
		mapSize = 3;                                                            // Icon size in the editor.
		displayName = "epoch_bunker_06";                                              // List Name in the editor.
		cost = 0;
		armor = 8000;                                        // Resistance to Damage of the object.
    };	
	class epoch_bunker_07 : Strategic
    {
		scope = 2;                                                              // public
		model = bunker\epoch_bunker_07.p3d;                     // our p3d model.
		placement = vertical;
		mapSize = 3;                                                            // Icon size in the editor.
		displayName = "epoch_bunker_07";                                              // List Name in the editor.
		cost = 0;
		armor = 8000;                                        // Resistance to Damage of the object.
    };	
	class epoch_bunker_08 : Strategic
    {
		scope = 2;                                                              // public
		model = bunker\epoch_bunker_08.p3d;                     // our p3d model.
		placement = vertical;
		mapSize = 3;                                                            // Icon size in the editor.
		displayName = "epoch_bunker_08";                                              // List Name in the editor.
		cost = 0;
		armor = 8000;                                        // Resistance to Damage of the object.
    };
	class epoch_bunker_09 : Strategic
    {
		scope = 2;                                                              // public
		model = bunker\epoch_bunker_09.p3d;                     // our p3d model.
		placement = vertical;
		mapSize = 3;                                                            // Icon size in the editor.
		displayName = "epoch_bunker_09";                                              // List Name in the editor.
		cost = 0;
		armor = 8000;                                        // Resistance to Damage of the object.
    };	
	class epoch_bunker_10 : Strategic
    {
		scope = 2;                                                              // public
		model = bunker\epoch_bunker_10.p3d;                     // our p3d model.
		placement = vertical;
		mapSize = 3;                                                            // Icon size in the editor.
		displayName = "epoch_bunker_10";                                              // List Name in the editor.
		cost = 0;
		armor = 8000;                                        // Resistance to Damage of the object.
    };	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
};//end cfgveh


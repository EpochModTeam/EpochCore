class cfgFunctions
{
	class EPOCH
	{
		tag = "EPOCH";
		class Core
		{
            class compiler {
				file = "x\addons\a3_epoch_code\init\fn_compiler.sqf";
			};
			class init_core
			{
				file = "x\addons\a3_epoch_code\init\fn_init_core.sqf";
				preInit = 1;
			};
		};
	};
};

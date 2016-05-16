class CfgAnimationSourceSounds
{
	class jack_pump
	{
		class pumpJack
		{
			loop = 0;
			terminate = 0;
			trigger = "direction * (phase factor[0.01,0.02])";
			sound0[] = { "\x\addons\a3_epoch_assets\sounds\tools\jack", 1, 1, 20 };
			sound[] = { "sound0", 1 };
		};

	};
};

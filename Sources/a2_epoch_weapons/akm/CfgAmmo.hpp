class B_762x39_Ball: BulletBase
{
	hit = 12;
	indirectHit = 0;
	indirectHitRange = 0; /// seems like standard 6.5mm round
	cartridge = "FxCartridge_762"; /// seems like standard 6.5mm round
	visibleFire = 6; /// how big does the shooter seem to be for AI to take notice after he shoots
	audibleFire = 9; /// how big does the shooter seem to be for AI to take notice after he shoots
	cost = 1.2; /// pretty cheap to fire at anything, comes into shoot efficiency calculation mentioned in the weapon
	airLock = true; /// allows to be fired upon air targets
	typicalSpeed = 820;
	caliber = 1.6; /// caliber 1 equals 7.62mm round

	model = \A3\Weapons_f\Data\bullettracer\tracer_red; /// just for tracer
	tracerScale = 1.0; /// how big is the flying tracer
	tracerStartTime = 0.0075; // seconds
	tracerEndTime = 5; // seconds
	airFriction = -0.001;
	
	class CamShakeFire 
	{
		power = 0.2;
		duration = 0.03;
		frequency = 0.5;
		distance = 0.01;
	};
	class CamShakePlayerFire 
	{
		power = 0.2;
		duration = 0.03;
		frequency = 0.5;
		distance = 0.01;
	};
	
};

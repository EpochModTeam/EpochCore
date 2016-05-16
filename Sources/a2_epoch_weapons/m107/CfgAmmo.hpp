
class B_127x108_Ball : BulletBase
{
    hit=30;
    indirectHit=0;
    indirectHitRange=0;
    cartridge="FxCartridge_127";
    visibleFire=48;
    audibleFire=48;
    visibleFireTime=3;
    cost=5;
    airLock=1;
    caliber=2.8;
    typicalSpeed=820;
    model="\A3\Weapons_f\Data\bullettracer\tracer_green";
    tracerScale=1.5;
    tracerStartTime=0.075;
    tracerEndTime=1;
    airFriction=-0.00056;
    class CamShakeFire
    {
        power="(13^0.5)";
        duration="((round (13^0.5))*0.2 max 0.2)";
        frequency=20;
        distance="((13^0.5)*3)";
    };
    class CamShakePlayerFire
    {
        power=13;
        duration="((round (13^0.25))*0.2 max 0.2)";
        frequency=20;
        distance=1;
    };

};

class B_127x108_APDS : B_127x108_Ball
{
     hit=60;
            indirectHit=0;
            indirectHitRange=0;
            caliber=3.6;
            deflecting=10;
            typicalSpeed=1060;
            airFriction=-0.00036;
            visibleFire=10;
            audibleFire=15;
            cost=15;
            class CamShakeExplode
                    {
                    power="(20^0.5)";
                    duration="((round (20^0.5))*0.2 max 0.2)";
                    frequency=20;
                    distance="((20^0.5)*3)";
                    };

            class CamShakeHit
                    {
                    power=20;
                    duration="((round (20^0.25))*0.2 max 0.2)";
                    frequency=20;
                    distance=1;
                    };

};

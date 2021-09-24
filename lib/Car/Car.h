#ifndef Car_h
#define Car_h

#include <Arduino.h>
#include <CarConfigs.h>
#include <Engine.h>
#include <InfraRed.h>
#include <Ultrasonic.h>
#include <StateMachine.h>
#include <State.h>
#include <InfraRedName.h>
#include <EngineName.h>

using namespace PortConfigs;
using namespace OtherConfigs;

class Car {
    
    public:
        Ultrasonic *ultrasonic;
        StateMachine<Car> *machine;

        Car(State<Car> *initState);
        void goForward();
        void goBack();
        void lefting();
        void righting();
        void stop();

        void changePotency(byte powerLeft = 0, byte powerRight = 0);

        InfraRed **infras();
        Engine **engines();

        InfraRed *infras(InfraRedName name);
        Engine *engines(EngineName name);
    
    private:
        InfraRed *_infras[3];
        Engine *_engines[2];

        void initInfraReds();
        void initEngines();
};

#endif

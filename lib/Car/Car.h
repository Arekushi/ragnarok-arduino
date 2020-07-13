#ifndef Car_h
#define Car_h

#include <Arduino.h>
#include <CarConfigs.h>
#include <Engine.h>
#include <InfraRed.h>
#include <Ultrasonic.h>
#include <StateMachine.h>
#include <State.h>

using namespace PortConfigs;
using namespace OtherConfigs;

class Car {
    
    public:
        InfraRed *infras[3];
        Engine *left_engines[2];
        Engine *right_engines[2];
        Ultrasonic *ultrasonic;
        StateMachine<Car> *machine;

        Car();
        void goForward(byte POWER);
        void goBack(byte POWER);
        void lefting(byte POWER);
        void righting(byte POWER);
        void stop();
};

#endif

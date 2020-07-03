#ifndef Car_h
#define Car_h

#include <Arduino.h>
#include <Ultra.h>
#include <StateMachine.h>
#include <InfraRed.h>
#include <Engine.h>

class Car {

    public:
        Ultra *ultra;
        StateMachine<Car> *machine;
        InfraRed *infras[3];
        
        Engine *left_engine[2];
        Engine *right_engine[2];

        Car(State<Car> *state);
        void stop();
        void goForward();
        void goBack();
        void showSensors();
};

#endif

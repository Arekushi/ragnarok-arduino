#ifndef Car_h
#define Car_h

#include <Arduino.h>
#include <Ultra.h>
#include <StateMachine.h>

class Car {

    public:
        Ultra *ultra;
        StateMachine<Car> *machine;

        Car(int a, int b, State<Car> *state);
        void stop();
        void goForward();
        void goBack();
};

#endif

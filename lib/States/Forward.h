#ifndef Forward_State_h
#define Forward_State_h

#include <Arduino.h>
#include <State.h>
#include <Car.h>

class Forward : public State<Car> {

    public:
        void enter(Car car) override;
        void execute(Car car) override;
        void exit(Car car) override;
};

#endif
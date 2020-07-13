#ifndef Stationary_State_h
#define Stationary_State_h

#include <State.h>

class Car;

class Stationary : public State<Car> {

    public:
        Stationary() : base::State("Stationary") {}
        void enter(Car data) override;
        void exit(Car data) override;
        void setActions() override;
        void setTransitions() override;
};

#endif

#ifndef Stationary_State_h
#define Stationary_State_h

#include <State.h>

using namespace AbstractFiniteStateMachine;

class Car;

class Stationary : public State<Car> {

    public:
        void enter(Car data) override;
        void exit(Car data) override;
        void setActions() override;
        void setTransitions() override;
};

#endif

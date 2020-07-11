#ifndef Forward_State_h
#define Forward_State_h

#include <State.h>

using namespace AbstractFiniteStateMachine;

class Car;

class Forward : public State<Car> {

    public:
        void enter(Car data) override;
        void exit(Car data) override;
        void setActions() override;
        void setTransitions() override;
};

#endif

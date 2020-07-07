#ifndef Forward_State_h
#define Forward_State_h

#include <State.h>
#include <Car.h>

using namespace AbstractFiniteStateMachine;

class Forward : public State<Car> {       

    public:
        Forward();
        void enter(Car data) override;
        void exit(Car data) override;
};

#endif

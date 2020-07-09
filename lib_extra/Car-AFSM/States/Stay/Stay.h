#ifndef Stay_State_h
#define Stay_State_h

#include <State.h>

using namespace AbstractFiniteStateMachine;

class Car;

class Stay : public State<Car> {

    public:
        void enter(Car data) override;
        void exit(Car data) override;
};

#endif

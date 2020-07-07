#ifndef Back_State_h
#define Back_State_h

#include <State.h>
#include <Car.h>

using namespace AbstractFiniteStateMachine;

class Back : public State<Car> {

    public:
        Back();
        void enter(Car data) override;
        void exit(Car data) override;
};

#endif

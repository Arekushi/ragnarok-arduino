#ifndef CurvedFrontRight_State_h
#define CurvedFrontRight_State_h

#include <State.h>

using namespace AbstractFiniteStateMachine;

class Car;

class CurvedFrontRight : public State<Car> {

    public:
        void enter(Car data) override;
        void exit(Car data) override;
        void setActions() override;
        void setTransitions() override;
};

#endif

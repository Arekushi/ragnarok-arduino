#ifndef AligningRight_h
#define AligningRight_h

#include <State.h>

using namespace AbstractFiniteStateMachine;

class Car;

class AligningRight : public State<Car> {

    public:
        void enter(Car data) override;
        void exit(Car data) override;
        void setActions() override;
        void setTransitions() override;
};

#endif

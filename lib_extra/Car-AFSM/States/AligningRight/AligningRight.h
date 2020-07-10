#ifndef AligningRight_h
#define AligningRight_h

#include <State.h>

using namespace AbstractFiniteStateMachine;

class Car;

class AligningRight : public State<Car> {

    public:
        AligningRight();
        void enter(Car data) override;
        void exit(Car data) override;
        void setup() override;
};

#endif

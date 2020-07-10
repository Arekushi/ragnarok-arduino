#ifndef AligningLeft_h
#define AligningLeft_h

#include <State.h>

using namespace AbstractFiniteStateMachine;

class Car;

class AligningLeft : public State<Car> {

    public:
        AligningLeft();
        void enter(Car data) override;
        void exit(Car data) override;
        void setup() override;
};

#endif

#ifndef TurningRight_h
#define TurningRight_h

#include <State.h>

using namespace AbstractFiniteStateMachine;

class Car;

class TurningRight : public State<Car> {

    public:
        void enter(Car data) override;
        void exit(Car data) override;
};

#endif

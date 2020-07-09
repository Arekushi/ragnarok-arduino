#ifndef TurningLeft_h
#define TurningLeft_h

#include <State.h>

using namespace AbstractFiniteStateMachine;

class Car;

class TurningLeft : public State<Car> {

    public:
        void enter(Car data) override;
        void exit(Car data) override;
};

#endif

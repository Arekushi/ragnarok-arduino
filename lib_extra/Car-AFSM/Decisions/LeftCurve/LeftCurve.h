#ifndef LeftCurve_h
#define LeftCurve_h

#include <Decision.h>

using namespace AbstractFiniteStateMachine;

class Car;

class LeftCurve : public Decision<Car> {

    public:
        bool decision(Car data) override;
};

#endif

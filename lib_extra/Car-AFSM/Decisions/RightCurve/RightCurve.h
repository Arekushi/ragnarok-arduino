#ifndef RightCurve_h
#define RightCurve_h

#include <Decision.h>

using namespace AbstractFiniteStateMachine;

class Car;

class RightCurve : public Decision<Car> {

    public:
        bool decision(Car data) override;
};

#endif

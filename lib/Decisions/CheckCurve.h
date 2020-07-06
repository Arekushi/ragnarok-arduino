#ifndef CheckCurve_h
#define CheckCurve_h

#include <Decision.h>

using namespace AbstractFiniteStateMachine;

class Car;

class CheckCurve : public Decision<Car> {

    public:
        bool decision(Car data) override;
};

#endif

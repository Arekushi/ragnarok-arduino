#ifndef CenterSensorActivated_h
#define CenterSensorActivated_h

#include <Decision.h>

using namespace AbstractFiniteStateMachine;

class Car;

class CenterSensorActivated : public Decision<Car> {

    public:
        bool decision(Car data) override;
};

#endif

#ifndef LeftCenterSensorsActivated_h
#define LeftCenterSensorsActivated_h

#include <Decision.h>

using namespace AbstractFiniteStateMachine;

class Car;

class LeftCenterSensorsActivated : public Decision<Car> {

    public:
        bool decision(Car data) override;
};

#endif

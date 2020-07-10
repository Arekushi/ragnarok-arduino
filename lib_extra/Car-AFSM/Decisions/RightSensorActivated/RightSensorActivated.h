#ifndef RightSensorActivated_h
#define RightSensorActivated_h

#include <Decision.h>

using namespace AbstractFiniteStateMachine;

class Car;

class RightSensorActivated : public Decision<Car> {

    public:
        bool decision(Car data) override;
};

#endif

#ifndef RightCenterSensorsActivated_h
#define RightCenterSensorsActivated_h

#include <Decision.h>

class Car;

class RightCenterSensorsActivated : public Decision<Car> {

    public:
        bool decision(Car data) override;
};

#endif

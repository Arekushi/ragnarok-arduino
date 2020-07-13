#ifndef UltrasonicSawObstacle_h
#define UltrasonicSawObstacle_h

#include <Decision.h>

class Car;

class UltrasonicSawObstacle : public Decision<Car> {

    public:
        bool decision(Car data) override;
};

#endif

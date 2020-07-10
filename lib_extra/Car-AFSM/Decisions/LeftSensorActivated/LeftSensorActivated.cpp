#include <LeftSensorActivated.h>
#include <Car.h>

bool LeftSensorActivated::decision(Car data) {
    bool left = data.infras[0]->getValue();
    bool center = data.infras[1]->getValue();
    bool right = data.infras[2]->getValue();

    return left && (!center && !right);
}
#include <RightSensorActivated.h>
#include <Car.h>

bool RightSensorActivated::decision(Car data) {
    bool left = data.infras[0]->getValue();
    bool center = data.infras[1]->getValue();
    bool right = data.infras[2]->getValue();

    return right && (!center && !left);
}
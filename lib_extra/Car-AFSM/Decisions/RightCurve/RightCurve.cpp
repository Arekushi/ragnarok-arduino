#include <RightCurve.h>
#include <Car.h>

bool RightCurve::decision(Car data) {
    bool left = data.infras[0]->digital_bool();
    bool center = data.infras[1]->digital_bool();
    bool right = data.infras[2]->digital_bool();

    return right && (!center && !left);
}
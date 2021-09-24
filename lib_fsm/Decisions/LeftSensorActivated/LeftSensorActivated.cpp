#include <LeftSensorActivated.h>
#include <Car.h>

bool LeftSensorActivated::decision(Car data) {
    bool left = data.infras(InfraRedName::LEFT)->getValue();
    bool center = data.infras(InfraRedName::CENTER)->getValue();
    bool right = data.infras(InfraRedName::RIGHT)->getValue();

    return left && (!center && !right);
}

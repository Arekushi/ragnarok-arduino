#include <RightSensorActivated.h>
#include <Car.h>

bool RightSensorActivated::decision(Car data) {
    bool left = data.infras(InfraRedName::LEFT)->getDigitalValue();
    bool center = data.infras(InfraRedName::CENTER)->getDigitalValue();
    bool right = data.infras(InfraRedName::RIGHT)->getDigitalValue();

    return right && (!center && !left);
}

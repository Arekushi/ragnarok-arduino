#include <LeftCenterSensorsActivated.h>
#include <Car.h>

bool LeftCenterSensorsActivated::decision(Car data) {
    bool left = data.infras(InfraRedName::LEFT)->getDigitalValue();
    bool center = data.infras(InfraRedName::CENTER)->getDigitalValue();
    bool right = data.infras(InfraRedName::RIGHT)->getDigitalValue();

    return (left && center) && !right;
}

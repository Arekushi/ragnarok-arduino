#include <CenterSensorActivated.h>
#include <Car.h>

bool CenterSensorActivated::decision(Car data) {
    return data.infras(InfraRedName::CENTER)->getValue();
}

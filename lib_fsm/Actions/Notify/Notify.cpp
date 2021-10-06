#include <Notify.h>
#include <Arduino.h>
#include <Car.h>

void Notify::execute(Car data) {
    data.bluetooth->characteristicTX->setValue(data.infras(InfraRedName::CENTER)->getValue());
    data.bluetooth->characteristicTX->notify();
}

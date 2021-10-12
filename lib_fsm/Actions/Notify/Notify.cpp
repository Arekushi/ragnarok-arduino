#include <Notify.h>
#include <Arduino.h>
#include <Car.h>

void Notify::execute(Car data) {
    data.bluetooth->characteristicTX->setValue("qualquer outra coisa e mais um poquin");
    data.bluetooth->characteristicTX->notify();
}

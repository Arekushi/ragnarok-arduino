#include <Stop.h>
#include <Arduino.h>
#include <Car.h>

void Stop::execute(Car data) {
    data.stop();
}

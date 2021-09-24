#include <Walk.h>
#include <Arduino.h>
#include <Car.h>

void Walk::execute(Car data) {
    data.goForward();
}

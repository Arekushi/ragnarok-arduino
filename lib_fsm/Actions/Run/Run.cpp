#include <Run.h>
#include <Arduino.h>
#include <Car.h>

void Run::execute(Car data) {
    data.goForward();
}

#include <Arduino.h>
#include <Forward.h>
#include <Car.h>

void Forward::enter(Car car) {
    Serial.println("Enter");
}

void Forward::execute(Car car) {
    car.goForward();
}

void Forward::exit(Car car) {
    Serial.println("Exit");
}

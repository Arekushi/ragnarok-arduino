#include <Arduino.h>
#include <Forward.h>
#include <Car.h>

#define powerForward 40

void Forward::enter(Car car) {
    Serial.println("Enter");
}

void Forward::execute(Car car) {
    car.goForward(powerForward);
    Serial.println("Forward");
}

void Forward::exit(Car car) {
    Serial.println("Exit");
}

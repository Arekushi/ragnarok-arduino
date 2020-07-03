#include <Arduino.h>
#include <Forward.h>
#include <Car.h>

void Forward::enter(Car car) {
    Serial.println("Enter");
}

void Forward::execute(Car car) {
    Serial.println("Execute");
}

void Forward::exit(Car car) {
    Serial.println("Exit");
}
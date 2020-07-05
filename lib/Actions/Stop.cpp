#include <Stop.h>
#include <Arduino.h>
#include <Car.h>

Stop::Stop() {
}

void Stop::execute(Car data) {
    Serial.println(F("Stopping"));
}
#include <Run.h>
#include <Arduino.h>
#include <Car.h>

Run::Run() {
}

void Run::execute(Car data) {
    Serial.println(F("Running"));
}
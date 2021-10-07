#include <Arduino.h>
#include <main_car.h>

void setup() {
    Serial.begin(115200);

    setupStates();
    setupCar();
}

void loop() {
    executeMachine();
}

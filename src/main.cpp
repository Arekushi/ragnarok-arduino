#include <Arduino.h>
#include <CarMain.h>

void setup() {
    Serial.begin(115200);

    setupStates();
    setupCar();
}

void loop() {
    executeMachine();
}

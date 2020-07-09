#include <Arduino.h>
#include <Car.h>
#include <Forward.h>

Car car(Singleton<Forward>::getInstance());

void setup() {
    Serial.begin(9600);
}

void loop() {
    car.machine->executeMachine();
}

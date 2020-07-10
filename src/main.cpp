#include <Arduino.h>
#include <Forward.h>
#include <Car.h>

Car car(Singleton<Forward>::getInstance());

void setup() {
    Serial.begin(9600);
}

void loop() {
    //car.machine->executeMachine();
}

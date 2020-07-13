#include <Arduino.h>
#include <Forward.h>
#include <Car.h>

Car car;

void setup() {
    //Singleton<Forward>::getInstance();
    //car.machine->setCurrentState();
    Serial.begin(9600);
}

void loop() {
    //car.machine->executeMachine();
}

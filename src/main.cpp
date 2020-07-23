#include <Arduino.h>
#include <Forward.h>
#include <Car.h>

Car *car;

void setup() {
    car = new Car(Singleton<Forward>::getInstance());
}

void loop() {
    car->machine->executeMachine();
}

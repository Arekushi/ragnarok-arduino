#include <Arduino.h>
#include <Forward.h>
#include <RXCallbacksCar.h>
#include <Car.h>

Car *car;

void setup() {
    Serial.begin(115200);
    car = new Car(Singleton<Forward>::getInstance());
    car->startBluetooth(Singleton<RXCallbacksCar>::getInstance());
}

void loop() {
    car->machine->executeMachine();
}

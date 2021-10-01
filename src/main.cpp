#include <Arduino.h>
#include <Car.h>
#include <RXCallbacksCar.h>

#include <Forward.h>
#include <Backward.h>

Car *car;

void setupStates() {
    State<Car> *forward = Singleton<Forward>::getInstance();
    State<Car> *backward = Singleton<Backward>::getInstance();

    forward->oppositeState = backward;
    backward->oppositeState = forward;
}

void setup() {
    setupStates();
    Serial.begin(115200);

    car = new Car(Singleton<Forward>::getInstance());
    // car->startBluetooth(Singleton<RXCallbacksCar>::getInstance());
}

void loop() {
    car->machine->executeMachine();
}

#include <Arduino.h>
#include <Forward.h>
#include <CarCharacteristicCallbacks.h>
#include <Car.h>

Car *car;

void setup() {
    Serial.begin(115200);

    // State Machine
    // car = new Car(Singleton<Forward>::getInstance());

    // Remote Control
    car = new Car(Singleton<CarCharacteristicCallbacks>::getInstance());
}

void loop() {
    // State Machine
    // car->machine->executeMachine();
}

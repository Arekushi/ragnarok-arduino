#include <Arduino.h>
#include <Forward.h>
#include <CarInputHandler.h>
#include <CarCharacteristicCallbacks.h>
#include <Car.h>

Car *car;

void setup() {
    Serial.begin(115200);
    // car = new Car(Singleton<Forward>::getInstance());
    
    car = new Car(
        Singleton<CarInputHandler>::getInstance(),
        Singleton<CarCharacteristicCallbacks>::getInstance()
    );
}

void loop() {
    // car->machine->executeMachine();
}

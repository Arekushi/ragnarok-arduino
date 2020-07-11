#include <Arduino.h>
#include <Forward.h>
#include <Car.h>

Car *car;

void setup() {
    State<Car> *forward = Singleton<Forward>::getInstance();
    car = new Car(forward);

    forward->setup();
    Serial.begin(9600);
}

void loop() {
    car->machine->executeMachine();
}

#include <Arduino.h>

/* Cart */
#include <Car.h>

/* States Machine */
#include <State.h>
#include <Forward.h>

State<Car> *forward = new Forward();
Car car(forward);

void setup() {
    Serial.begin(9600);
}

void loop() {   
    car.machine->executeState();
}

#include <Arduino.h>

/* Cart */
#include <Car.h>

/* States Machine */
#include <State.h>
#include <Forward.h>

State<Car> *forward = new Forward();
Car car(7, 6, forward);

void setup() {
    Serial.begin(9600);
}

void loop() {
    delay(500);
    
    car.machine->executeState();
}

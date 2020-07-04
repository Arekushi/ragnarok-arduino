#include <Arduino.h>
#include <Car.h>
#include <State.h>
#include <Forward.h>

State<Car> *states[10] = 
{ 
    new Forward()
};

Car car(states);

void setup() {
    Serial.begin(9600);
}

void loop() {
    car.machine->executeState();
}
